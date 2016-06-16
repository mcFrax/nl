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
	var blocks : ptd::arr(@flow_graph::block_t) = flow_graph::make_blocks(function->commands, function->args_type);
	
	var all_blocks_set : ptd::hash(@flow_graph::block_t) = {};
	rep var ii (array::len(blocks)) {
		all_blocks_set{ii} = blocks[ii];
	}
	
	var function_block : @newtc::flow_block = newtc::build_flow_structure(0, all_blocks_set);
	
	var empty_env : @newtc::env = gen_empty_env(function->reg_size);
	var entry_env : @newtc::env = gen_entry_env(function->reg_size, function->args_type);
	
	return :ok(true);
}

def newtc::build_flow_structure(entry_block_id : ptd::sim(), blocks : ptd::hash(@flow_graph::block_t)) : @newtc::flow_block {
	die if (hash::size(blocks) < 1);
	if (hash::size(blocks) == 1) {
		return :simple(blocks{entry_block_id});
	} else {
# 		var next = ???;
		var tarjan_state = {
			stack => [],
			onstack => {},
			blocks => blocks,
			entry_block_id => entry_block_id,
			sub_blocks => {},
			lowlink => {},
			next_index => 0
		};
		tarjan(entry_block_id, ref tarjan_state);
		return :complex({
			entry => entry_block_id,
			blocks => tarjan_state->sub_blocks,
			next => [],  # TODO??
		});
	}
}

def newtc::tarjan_state() {
	return ptd::rec({
		stack => ptd::arr(ptd::sim()),
		onstack => ptd::hash(@boolean_t::type),
		blocks => ptd::hash(@flow_graph::block_t),
		entry_block_id => ptd::sim(),
		sub_blocks => ptd::hash(@newtc::flow_block),
		lowlink => ptd::hash(ptd::sim()),
		next_index => ptd::sim(),
	});
}

def tarjan(this_block_id : ptd::sim(), ref s : @newtc::tarjan_state) {
	var this_block_index = s->next_index;
	++s->next_index;
	s->lowlink{this_block_id} = this_block_index;
	array::push(ref s->stack, this_block_id);
	s->onstack{this_block_id} = true;
	fora var next_block_id (s->blocks{this_block_id}->next) {
		if (hash::has_key(s->blocks, next_block_id) && next_block_id != s->entry_block_id) {
			if (hash::has_key(s->lowlink, next_block_id)) {
				if (hash::has_key(s->onstack, next_block_id)) {
					update_min(ref s->lowlink{this_block_id}, s->lowlink{next_block_id});
				}
			} else {
				tarjan(next_block_id, ref s);
				update_min(ref s->lowlink{this_block_id}, s->lowlink{next_block_id});
			}
		}
	}
	if (this_block_index <= s->lowlink{this_block_id}) {
		var blocks_in_scc : ptd::hash(@flow_graph::block_t) = {};
		loop {
			var top = s->stack[array::len(s->stack)-1];
			blocks_in_scc{top} = s->blocks{top};
			array::pop(ref s->stack);
			hash::delete(ref s->onstack, this_block_id);
			break if top == this_block_id;
		}
		# this block must be the "root" or "start" node of the block
		s->sub_blocks{this_block_id} = newtc::build_flow_structure(this_block_id, blocks_in_scc);
	}
}

def update_min(ref a : ptd::sim(), b : ptd::sim()) {
	a = b if b < a;
}

def gen_empty_env(size : ptd::sim()) : @newtc::env {
	var empty_env = [];
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
		simple => @flow_graph::block_t,
		complex => ptd::rec({
			entry => ptd::sim(),
			blocks => ptd::hash(@newtc::flow_block),
			next => ptd::arr(ptd::sim())
		}),
	});
}
