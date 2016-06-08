use ptd;
use nlasm;
use flow_graph;
use array;
use ov;
use nl;
use string;
use hash;
use boolean_t;
use singleton;
use newtct;

def newtc::check_modules(modules : ptd::hash(@nlasm::result_t)) : ptd::arr(ptd::sim()) {
	var errors = [];
	forh var modname, var module (modules) {
		fora var function (module->functions) {
			var funresult = check_function(modname, function);
			if (funresult is :err) {
				errors []= funresult as :err;
			}
		}
	}
	return errors;
}

def check_function(modname : ptd::sim(), function : @nlasm::function_t) : @newtc::ok_or_error {
	var blocks = flow_graph::make_blocks(function->commands, function->args_type);
	return :ok(true) if (array::len(blocks) == 0);
	var unknown_env : @newtc::env = [];
	
	rep var i (function->reg_size) {
		unknown_env []= :unknown;
	}
	
	var entry_env : @newtc::env = [];
	rep var i (array::len(function->args_type)) {
		entry_env []= :any;
	}
	for (var i = array::len(function->args_type); i < function->reg_size; ++i) {
		entry_env []= :invalid;
	}
	
	var typed_blocks : ptd::arr(@newtc::typed_block) = [];
	rep var i (array::len(blocks)) {
		typed_blocks []= {
			cmds => blocks[i]->cmds,
			next => blocks[i]->next,
			entry_env => unknown_env,
			exit_env => unknown_env
		};
	}
	typed_blocks[0]->entry_env = entry_env;
	
	var changed = true;
	var functionname = {module => modname, function => function->name};
	while (changed) {
		try propagate_entries(functionname, ref typed_blocks);
		changed = propagate_exits(ref typed_blocks);
	}
	return :ok(true);
}

def propagate_entries(function : @newtc::functionname, ref blocks : ptd::arr(@newtc::typed_block)) : @newtc::ok_or_error {
	rep var i (array::len(blocks)) {
		var env : @newtc::env = blocks[i]->entry_env;
		fora var cmd (blocks[i]->cmds) {
			try propagate_cmd(function, cmd, ref env);
		}
		blocks[i]->exit_env = env;
	}
	return :ok(true);
}

def propagate_cmd(function : @newtc::functionname, cmd : @nlasm::cmd_t, ref env : @newtc::env) : @newtc::ok_or_error {
	var result = propagate_cmd1(cmd->cmd, ref env);
	return result if result is :ok;
	return :err(print_place(function, cmd->debug).': ERROR'.string::lf().(result as :err).string::lf());
}

def propagate_cmd1(cmd : @nlasm::order_t, ref env : @newtc::env) : @newtc::ok_or_error {
	match (cmd) case :arr_decl(var cmddata) {
		var content_type = :unknown;
		fora var reg (cmddata->src) {
			try check_register_type(cmd, env, reg, :any);
			merge_type(ref content_type, env[reg]);
		}
		set_register_type(ref env, cmddata->dest, :array(content_type));
	} case :hash_decl(var cmddata) {
		var field_types = {};
		fora var kv (cmddata->src) {
			try check_register_type(cmd, env, kv->val, :any);
			field_types{kv->key} = env[kv->val];
		}
		set_register_type(ref env, cmddata->dest, :record(field_types));
	} case :func(var cmddata) {
		set_register_type(ref env, cmddata->dest, :any);  # ???
	} case :call(var cmddata) {
		# TODO: whooomp
		if (cmddata->mod eq 'ov' && cmddata->fun_name eq 'mk') {
			try check_register_type(cmd, env, cmddata->src, :sim);
			propagate_ov_mk(cmd, {
				src => :emp,
				dest => cmddata->dest,
				name_reg => cmddata->args[0] as :val
			});
		} elsif (cmddata->mod eq 'ov' && cmddata->fun_name eq 'mk_val') {
			try check_register_type(cmd, env, cmddata->src, :sim);
			propagate_ov_mk(cmd, {
				src => :arg(cmddata->args[1] as :val),
				dest => cmddata->dest,
				name_reg => cmddata->args[0] as :val
			});
		} else {
			fora var arg (cmddata->args) {
				match (arg) case :val(var reg) {
					try check_register_type(cmd, env, reg, :any);  # TODO
				} case :ref(var reg) {
					try check_register_type(cmd, env, reg, :any);  # TODO
					#set_register_type(ref env, cmddata->dest, TODO???); # TODO
				}
			}
			set_register_type(ref env, cmddata->dest, :any);
		}
	} case :una_op(var cmddata) {
		if (cmddata->op eq '!') {
			try check_register_type(cmd, env, cmddata->src, :variant); #bool
			set_register_type(ref env, cmddata->src, :variant); #bool
			set_register_type(ref env, cmddata->dest, :variant);  # bool
		} else {
			try check_register_type(cmd, env, cmddata->src, :sim);
			set_register_type(ref env, cmddata->src, :sim);
			set_register_type(ref env, cmddata->dest, :sim);
		}
	} case :bin_op(var cmddata) {
		try check_register_type(cmd, env, cmddata->left, :sim);
		set_register_type(ref env, cmddata->left, :sim);
		try check_register_type(cmd, env, cmddata->right, :sim);
		set_register_type(ref env, cmddata->right, :sim);
		if (hash::has_key(get_sim_result_bin_ops(), cmddata->op)) {
			set_register_type(ref env, cmddata->dest, :sim);
		} elsif (hash::has_key(get_bool_result_bin_ops(), cmddata->op)) {
			set_register_type(ref env, cmddata->dest, :variant);
		} else {
			die;
		}
	} case :ov_is(var cmddata) {
		try check_register_type(cmd, env, cmddata->src, :variant);
		set_register_type(ref env, cmddata->src, :variant);
		set_register_type(ref env, cmddata->dest, :variant);  # bool
	} case :ov_as(var cmddata) {
		try check_register_type(cmd, env, cmddata->src, :variant);
		set_register_type(ref env, cmddata->src, :variant);
		set_register_type(ref env, cmddata->dest, :any);
	} case :return(var cmddata) {
		match (cmddata) case :val(var reg) {
			try check_register_type(cmd, env, reg, :any);  # TODO
		} case :emp {
		}
	} case :die(var reg) {
		try check_register_type(cmd, env, reg, :any);
	} case :move(var cmddata) {
		env[cmddata->dest] = [cmddata->src];
	} case :load_const(var cmddata) {
		if (nl::is_sim(cmddata->val)) {
			set_register_type(ref env, cmddata->dest, :sim);
		} elsif (nl::is_variant(cmddata->val)) {
			set_register_type(ref env, cmddata->dest, :variant);
		} elsif (nl::is_array(cmddata->val)) {
			set_register_type(ref env, cmddata->dest, :array);
		} elsif (nl::is_hash(cmddata->val)) {
			set_register_type(ref env, cmddata->dest, :hash);
		} else {
			die;
		}
	} case :get_frm_idx(var cmddata) {
		try check_register_type(cmd, env, cmddata->src, :array);
		set_register_type(ref env, cmddata->src, :array);
		try check_register_type(cmd, env, cmddata->idx, :sim);
		set_register_type(ref env, cmddata->idx, :sim);
		set_register_type(ref env, cmddata->dest, :any);  # TODO
	} case :set_at_idx(var cmddata) {
		try check_register_type(cmd, env, cmddata->src, :array);
		set_register_type(ref env, cmddata->src, :array);  # TODO: merge with :array(env[cmddata->val])
		try check_register_type(cmd, env, cmddata->idx, :sim);
		set_register_type(ref env, cmddata->idx, :sim);
		try check_register_type(cmd, env, cmddata->val, :any);  # ensure not :invalid
	} case :get_val(var cmddata) {
		try check_register_type(cmd, env, cmddata->src, :hash);  # TODO: check that the key may be present
		set_register_type(ref env, cmddata->src, :hash);  # TODO: inform that the key _is_ present
		set_register_type(ref env, cmddata->dest, :any);  # TODO
	} case :set_val(var cmddata) {
		try check_register_type(cmd, env, cmddata->src, :hash);
		set_register_type(ref env, cmddata->src, :hash);  # TODO: merge with :hash(env[cmddata->val])
		try check_register_type(cmd, env, cmddata->val, :any);  # ensure not :invalid
	} case :ov_mk(var cmddata) {
		try propagate_ov_mk(cmd, cmddata, ref env);
	} case :prt_lbl(var lbl) {
	} case :if_goto(var cmddata) {
		try check_register_type(cmd, env, cmddata->src, :variant); #bool
		set_register_type(ref env, cmddata->src, :variant); #bool
	} case :clear(var reg) {
		set_register_type(ref env, reg, :invalid);
	} case :goto(var lbl) {
	}
	return :ok(true);
}

def propagate_ov_mk(cmd, cmddata, ref env : @newtc::env) : @newtc::ok_or_error {
	if (cmddata->src is :arg) {
		try check_register_type(cmd, env, cmddata->src as :arg, :any);
	}
	if (hash::has('name_reg')) {
		try check_register_type(cmd, env, cmddata->name_reg, :sim);
	}
	set_register_type(ref env, cmddata->dest, :variant);  # TODO: use cmddata->name if its available
	return :ok(true);
}

def check_register_type(cmd : @nlasm::order_t, env : @newtc::env, reg : ptd::sim(), type : @newtct::type) : @newtc::ok_or_error {
	var reg_type = env[reg];
	return :err(':invalid used') if (reg_type is :invalid || type is :invalid);
	return :ok(true) if (reg_type is :unknown || type is :unknown || reg_type is :any || type is :any);
	return inconsistency_err(cmd, reg_type, type) if (ov::get_element(reg_type) ne ov::get_element(type));
	return :ok(true);
}

def inconsistency_err(cmd : @nlasm::order_t, reg_type : @newtct::type, type : @newtct::type) : @newtc::ok_or_error {
	return :err(
		'Types inconsistent in `'.ov::get_element(cmd).'`:'.string::lf().
		'  expected: '.ov::get_element(type).string::lf().
		'  found:    '.ov::get_element(reg_type).string::lf()
	);
}

def set_register_type(ref env : @newtc::env, reg : ptd::sim(), type : @newtct::type) {
	env[reg] = type unless reg eq '';
}

def print_place(function : @newtc::functionname, debug : @nlasm::debug_t, ) : ptd::sim() {
	var begin = debug->nast_debug->begin;
	var end = debug->nast_debug->end;
	return function->module.':'.begin->line.':'.begin->position.'-'.end->line.':'.end->position;
}

def get_sim_result_bin_ops() {
	return singleton::sigleton_do_not_use_without_approval(gen_sim_result_bin_ops());
}

def get_bool_result_bin_ops() {
	return singleton::sigleton_do_not_use_without_approval(gen_bool_result_bin_ops());
}

def gen_sim_result_bin_ops() {
	var sim_result_ops = {};
	fora var op (['+', '-', '*', '/', '%', '.']) {
		sim_result_ops{op} = true;
	};
	return sim_result_ops;
}

def gen_bool_result_bin_ops() {
	var bool_result_ops = {};
	fora var op (['eq', 'ne', '<=', '<', '==', '!=', '>', '>=']) {
		bool_result_ops{op} = true;
	};
	return bool_result_ops;
}

def propagate_exits(ref blocks : ptd::arr(@newtc::typed_block)) : @boolean_t::type {
	var changed = false;
	rep var i (array::len(blocks)) {
		fora var j (blocks[i]->next) {
			rep var reg (array::len(blocks[i]->exit_env)) {
				if (merge_type(ref blocks[j]->entry_env[reg], blocks[i]->exit_env[reg])) {
					changed = true;
				}
			}
		}
	}
	return changed;
}

def merge_type(ref t1 : @newtct::type, t2 : @newtct::type) : @boolean_t::type {
	var t11 = t1;
	if (t1 is :unknown) {
		t1 = t2;
		return !(t2 is :unknown);
	} elsif (t2 is :unknown) {
		return false;
	} elsif (t1 is :invalid || t2 is :invalid) {
		t1 = :invalid;
		return !(t11 is :invalid);
	} elsif (t1 is :any || t2 is :any || ov::get_element(t1) ne ov::get_element(t2)) { # TODO: hash vs record
		t1 = :any;
		return !(t11 is :any);
	} else {        # TODO
		return false;  # TODO
	}
}

def newtc::functionname() {
	return ptd::rec({module => ptd::sim(), function => ptd::sim()});
}

def newtc::ok_or_error() {
	return ptd::var({
		ok => @boolean_t::type,
		err => ptd::sim()
	});
}

def newtc::env() {
	return ptd::arr(@newtct::type);
}

def newtc::typed_block() {
	return ptd::rec({
		cmds => ptd::arr(@nlasm::cmd_t),
		next => ptd::arr(ptd::sim()),
		entry_env => @newtc::env,
		exit_env => @newtc::env
	});
}
