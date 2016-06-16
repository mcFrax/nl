use c_fe_lib;
use ptd;
use nlasm;
use flow_graph;
use array;
use string;
use ov;
use dfile;
use hash;
use newtc;

def print_graphs::print_graphs(modules : ptd::hash(@nlasm::result_t)) {
	var htmlstr = '<!DOCTYPE html>'.string::lf().'<html><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8" /><title>Flow graphs</title></head><body>';

	forh var modname, var module (modules) {
		htmlstr .= '<h1>'.modname.'</h1>';
		fora var function (module->functions) {
			print_function(modname, function);
			htmlstr .= '<h2>'.function->name.'</h2>';
			htmlstr .= '<img src="./'.modname.'-'.function->name.'.svg">';
		}
	}
	
	htmlstr.='</body></html>';
	c_fe_lib::string_to_file('./flows/index.html', htmlstr);
}

def ssave_escape(o) {
	return string::replace(string::replace(dfile::ssave(o), '"', ''''), string::lf(), ' ');
}

def var_to_string(v) {
	return ov::get_element(v).'('.ssave_escape(ov::get_value(v)).')';
}

def print_function(modname : ptd::sim(), function : @nlasm::function_t) {
	var blocks = flow_graph::make_blocks(function->commands, function->args_type);
	var dot_fname = './flows/'.modname.'-'.function->name.'.dot';
	var graphstr = '';
	graphstr .= 'digraph {node [shape=box];'.string::lf();
	graphstr .= 'entry [label="START", shape=invhouse];'.string::lf();
	graphstr .= 'entry -> 0;'.string::lf();
	rep var i (array::len(blocks)) {
		var cmd_texts = [];
		var returns = false;
		fora var cmd (blocks[i]->cmds) {
			cmd_texts []= var_to_string(cmd->cmd).'\l';
			returns = true if cmd->cmd is :return;
		}
		var node_text = array::join('', cmd_texts);
		graphstr .= i.'[label="'.node_text.'"];'.string::lf();
		fora var j (blocks[i]->next) {
			graphstr .= i.' -> '.j.';'.string::lf();
		}
		graphstr .= i.' -> exit;'.string::lf() if returns;
	}
	graphstr .= 'exit [label="RETURN", shape=oval];'.string::lf();
	var block_set : ptd::hash(@flow_graph::block_t) = {};
	rep var ii (array::len(blocks)) {
		block_set{ii} = blocks[ii];
	}
	print_structure(ref graphstr, true, newtc::build_flow_structure(0, block_set));
	graphstr .= '}';
	c_fe_lib::string_to_file(dot_fname, graphstr);
}

def print_structure(ref graphstr : ptd::sim(), even, flow_block) {
	return if flow_block is :simple;
	flow_block = flow_block as :complex;
	graphstr .= 'subgraph cluster_'.flow_block->entry.' {'.string::lf();
	graphstr .= 'style=filled; color='.(even ? 'lightgrey' : 'white').';'.string::lf();
	forh var sub_block_id, var sub_block (flow_block->blocks) {
		match (sub_block) case :simple {
			graphstr .= sub_block_id.';'.string::lf();
		} case :complex {
			print_structure(ref graphstr, !even, sub_block);
		}
	}
	graphstr .= '}'.string::lf();
}
