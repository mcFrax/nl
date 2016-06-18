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
	var block_envs : ptd::arr(ptd::rec({entry => @newtc::env, exit => @newtc::env})) = [];
	rep var ii (array::len(blocks)) {
		array::push(ref block_envs, {entry => empty_env, exit => empty_env});
	}
	rep var ii (array::len(function->args_type)) {
		block_envs[0].entry[ii] = newtct::any('arg'.ii);
	}
	
	var unresolved_prevs : ptd::arr(ptd::arr(@boolean_t::type)) = [];
	rep var ii (array::len(blocks)) {
		array::push(ref unresolved_prevs, {});
		fora var next (blocks[ii]->next) {
			unresolved_prevs[ii]{next} = true;
		}
	}
	unresolved_prevs[0] = {};
	
	var entry_env_changed = {};
	check_flow_block(function_block, unresolved_prevs, ref block_envs, ref entry_env_changed);
	return :ok(true);
}

def check_flow_block(flow_block, unresolved_prevs, ref block_envs, ref entry_env_changed) : @newtc::ok_or_error {
	match (flow_block) case :simple(var block_id) {
		check_simple_block(block_id, ref unresolved_prevs, ref block_envs);
	} case :complex(var flow_block) {
		reformat_entry_types
		var keepgoing = true;
		while (keepgoing) {
			forh var sub_block_id, var sub_block (flow_block->blocks) {
				entry_env_changed{sub_block_id} = false;
			}
			forh var sub_block_id, var sub_block (flow_block->blocks) {
				check_flow_block(sub_block, unresolved_prevs, )
			}
			keepgoing = false;
			forh var sub_block_id, var sub_block (flow_block->blocks) {
				keepgoing = true if hash::has_key(entry_env_changed, sub_block_id);
			}
		}
	}
}

def forward_block_exits(flow_block, ref block_envs, ref entry_env_changed) {
	forh var sub_block_id, var sub_block (flow_block->blocks) {
		check_flow_block(sub_block, unresolved_prevs, )
	}
}

def newtc::build_flow_structure(entry_block_id : ptd::sim(), blocks : ptd::hash(@flow_graph::block_t)) : @newtc::flow_block {
	die if (hash::size(blocks) < 1);
	if (hash::size(blocks) == 1) {
		return :simple(entry_block_id);
	} else {
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
		empty_env []= :nothing;
	}
	return empty_env;
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
		simple => ptd::sim(),
		complex => ptd::rec({
			entry => ptd::sim(),
			blocks => ptd::hash(@newtc::flow_block),
		}),
	});
}
