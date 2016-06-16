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
	var empty_env : @newtc::env = gen_empty_env(function->reg_size);
	var entry_env : @newtc::env = gen_entry_env(function->reg_size, function->args_type);
	
	var blocks = flow_graph::make_blocks(function->commands, function->args_type);
	
	var all_blocks_set = {};
	rep var ii (array::len(blocks)) {
		all_blocks_set{ii} = blocks[ii];
	}
	
	var function_block : @newtc::flow_block = build_flow_structure(0, all_blocks_set, );
	return :ok(true);
}

def gen_empty_env(size : ptd::sim()) : @newtc::env {
	var empty_env = gen_empty_env(size);
	rep var ii (size) {
		empty_env []= newtct::invalid();
	}
	return empty_env;
}

def gen_entry_env(size : ptd::sim(), args_type) : @newtc::env {
	var env = gen_empty_env(size);
	rep var ii (array::len(args_type)) {
		env[ii] = newtct::any('arg'.ii);
	}
	return env;
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

def newtc::flow_block() {
	return ptd::var({
		simple => @newtc::typed_block,
		complex => ptd::var({
			blocks => ptd::arr(@newtc::flow_block),
			next => ptd::arr(ptd::sim())
		}),
	});
}


