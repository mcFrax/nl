use c_fe_lib;
use ptd;
use nlasm;
use flow_graph;
use array;
use string;
use ov;
use dfile;

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
	var graphstr = 'digraph '.modname.'__'.function->name.' {node [shape=box];'.string::lf();
	rep var i (array::len(blocks)) {
		var cmd_texts = [];
		fora var cmd (blocks[i]->cmds) {
			cmd_texts []= var_to_string(cmd->cmd).'\l';
		}
		var node_text = array::join('', cmd_texts);
		graphstr .= i.'[label="'.node_text.'"];'.string::lf();
		fora var j (blocks[i]->next) {
			graphstr .= i.' -> '.j.';'.string::lf();
		}
	}
	graphstr .= '}';
	c_fe_lib::string_to_file(dot_fname, graphstr);
}
