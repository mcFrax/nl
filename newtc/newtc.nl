use c_fe_lib;
use ptd;
use nlasm;
use flow_graph;
use array;
use ov;
use nl;
use boolean_t;

def newtc::mbool_t() {
	return ptd::var({
		ok => @boolean_t::type,
		err => ptd::sim()
	});
}

def newtc::type() {
	return ptd::var({
		unknown => ptd::none(),
		invalid => ptd::none(),
		any => ptd::none(),
		sim => ptd::none(),
		variant => ptd::none(),
		array => ptd::none(),
		hash => ptd::none(),
	});
}

def newtc::env() {
	return ptd::arr(@newtc::type);
}

def newtc::typed_block() {
	return ptd::rec({
		cmds => ptd::arr(@nlasm::cmd_t),
		next => ptd::arr(@ptd::sim),
		entry_env => @newtc::env,
		exit_env => @newtc::env
	});
}

def newtc::check_modules(modules : ptd::hash(@nlasm::result_t)) : @newtc::mbool_t {
	c_fe_lib::print('>>newtc::check_modules()<<');

	forh var modname, var module (modules) {
		fora var function (module->functions) {
			try check_function(modname, function);
		}
	}
	return :ok(true);
}

def check_function(modname : ptd::sim(), function : @nlasm::function_t) : @newtc::mbool_t {
	var blocks = flow_graph::make_blocks(function->commands, function->args_type);
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
		var dupa = {
			cmds => blocks[i]->cmds,
			next => blocks[i]->next,
			entry_env => unknown_env,
			exit_env => unknown_env
		};
		array::push(ref typed_blocks, dupa);
	}
	typed_blocks[0]->entry_env = entry_env;
	
	var changed = true;
	while (changed) {
		try propagate_entries(ref typed_blocks);
		try changed = propagate_exits(ref typed_blocks);
	}
	return :ok(true);
}

def propagate_entries(ref blocks : ptd::arr(@newtc::typed_block)) : @newtc::mbool_t {
	rep var i (array::len(blocks)) {
		var env : @newtc::env = blocks[i]->entry_env;
		fora var cmd (blocks[i]->cmds) {
			try propagate_cmd(cmd, ref env);
		}
		blocks[i]->exit_env = env;
	}
	return :ok(true);
}

def propagate_cmd(cmd, ref env : @newtc::env) : @newtc::mbool_t {
	match (cmd) case :arr_cmddata(var cmddata) {
		return :ok(true) if cmddata->dest eq '';
		env[cmddata->dest] = :array;
	} case :hash_cmddata(var cmddata) {
		return :ok(true) if cmddata->dest eq '';
		env[cmddata->dest] = :hash;
	} case :func(var cmddata) {
		return :ok(true) if cmddata->dest eq '';
		env[cmddata->dest] = :hash;  # ???
	} case :call(var cmddata) {
		# TODO: whooomp
		env[cmddata->dest] = :any;
	} case :una_op(var cmddata) {
		if (cmddata->op eq '!') {
			try ensure_consitency(:variant , env[cmddata->src]); #bool
			env[cmddata->src] = :variant; #bool
			env[cmddata->dest] = :variant;  # bool
		} else {
			try ensure_consitency(:sim, env[cmddata->src]);
			env[cmddata->src] = :sim;
			env[cmddata->dest] = :sim;
		}
	} case :bin_op(var cmddata) {
		try ensure_consitency(:sim, env[cmddata->left]);
		env[cmddata->left] = :sim;
		try ensure_consitency(:sim, env[cmddata->right]);
		env[cmddata->right] = :sim;
		env[cmddata->dest] = :sim;
	} case :ov_is(var cmddata) {
		try ensure_consitency(:variant, env[cmddata->src]);
		env[cmddata->src] = :variant;
		env[cmddata->dest] = :variant;  # bool
	} case :ov_as(var cmddata) {
		try ensure_consitency(:variant, env[cmddata->src]);
		env[cmddata->src] = :variant;
		env[cmddata->dest] = :any;
	} case :return(var cmddata) {
		# TODO: check returned type
		#try ensure_consitency(:sim, cmddata);
	} case :die(var reg) {
		try ensure_consitency(:sim, env[reg]);
	} case :move(var cmddata) {
		env[cmddata->dest] = env[cmddata->src];
	} case :load_const(var cmddata) {
		if (nl::is_sim(cmddata->val)) {
			env[cmddata->dest] = :sim;
		} elsif (nl::is_variant(cmddata->val)) {
			env[cmddata->dest] = :variant;
		} elsif (nl::is_array(cmddata->val)) {
			env[cmddata->dest] = :array;
		} elsif (nl::is_hash(cmddata->val)) {
			env[cmddata->dest] = :hash;
		} else {
			die;
		}
	} case :get_frm_idx(var cmddata) {
		try ensure_consitency(:array, env[cmddata->src]);
		env[cmddata->src] = :array;
		try ensure_consitency(:sim, env[cmddata->idx]);
		env[cmddata->idx] = :sim;
		env[cmddata->dest] = :any;  # TODO
	} case :set_at_idx(var cmddata) {
		try ensure_consitency(:array, env[cmddata->src]);
		env[cmddata->src] = :array;  # TODO: merge with :array(env[cmddata->val])
		try ensure_consitency(:sim, env[cmddata->idx]);
		env[cmddata->idx] = :sim;
		try ensure_consitency(:any, env[cmddata->val]);  # ensure not :invalid
	} case :get_val(var cmddata) {
		try ensure_consitency(:hash, env[cmddata->src]);
		env[cmddata->src] = :hash;
		try ensure_consitency(:sim, env[cmddata->key]);
		env[cmddata->key] = :sim;
		env[cmddata->dest] = :any;  # TODO
	} case :set_val(var cmddata) {
		try ensure_consitency(:hash, env[cmddata->src]);
		env[cmddata->src] = :hash;  # TODO: merge with :hash(env[cmddata->val])
		try ensure_consitency(:sim, env[cmddata->key]);
		env[cmddata->key] = :sim;
		try ensure_consitency(:any, env[cmddata->val]);  # ensure not :invalid
	} case :ov_mk(var cmddata) {
		if (cmddata->src is :arg) {
			try ensure_consitency(:any, env[cmddata->src as :arg]);
		}
		env[cmddata->dest] = :variant;  # TODO: use cmddata->name
	} case :prt_lbl(var lbl) {
	} case :if_goto(var cmddata) {
		try ensure_consitency(:variant , env[cmddata->src]); #bool
		env[cmddata->src] = :variant; #bool
	} case :clear(var reg) {
		env[reg] = :invalid;
	}
	return :ok(true);
}

def ensure_consitency(t1, t2) : @newtc::mbool_t {
	return :err(':invalid used') if (t1 is :invalid || t2 is :invalid);
	return :ok(true) if (t1 is :unknown || t2 is :unknown);
	return inconsistency_err(t1, t2) if (t1 ne t2);
	return :ok(true);
}

def inconsistency_err(t1, t2) : @newtc::mbool_t {
	return :err('types inconsistent: '.ov::get_element(t1).' and '.ov::get_element(t2));
}

def propagate_exits(ref blocks : ptd::arr(@newtc::typed_block)) : @newtc::mbool_t {
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
	return :ok(changed);
}

# Lepiej używać alternatywy zamiast `:any`, dzięki temu można stwierdzać rzeczy typu 
# "to może być sim albo hash, ale to na pewno nie jest bool".

def merge_type(ref t1 : @newtc::type, t2 : @newtc::type) : @boolean_t::type {
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
