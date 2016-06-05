use c_fe_lib;
use ptd;
use nlasm;
use flow_graph;
use array;
use string;

def newtc::check_modules(modules : ptd::hash(@nlasm::result_t)) {
	c_fe_lib::print('>>newtc::check_modules()<<');
	var htmlstr = '<!DOCTYPE html>'.string::lf().'<html><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8" /><title>Flow graphs</title></head><body>';

	forh var modname, var module (modules) {
		htmlstr .= '<h1>'.modname.'</h1>';
		fora var function (module->functions) {
			if (check_function(modname, function)) {
				htmlstr .= '<h2>'.function->name.'</h2>';
				htmlstr .= '<img src="./'.modname.'-'.function->name.'.svg">';
			}
		}
	}
	
	htmlstr.='</body></html>';
	c_fe_lib::string_to_file('./flows/index.html', htmlstr);
}

# for i in flows/*.dot; do dot -Tsvg "$i" >"$(dirname "$i")/$(basename "$i" .dot).svg"; done

# def nlasm::function_t() {
# 	return ptd::rec({
# 			annotation => ptd::var({none => ptd::none(), math => ptd::none(), state => ptd::none()}),
# 			access => @nlasm::access_t,
# 			reg_size => ptd::sim(),
# 			args_type => ptd::arr(@nlasm::arg_type_t),
# 			commands => ptd::arr(@nlasm::cmd_t),
# 			name => ptd::sim()
# 		});
# }
def check_function(modname : ptd::sim(), function : @nlasm::function_t) {
	var blocks = flow_graph::make_blocks(function->commands, function->args_type);
	if (array::len(blocks) <= 1) {
		return false;
	}
	var dot_fname = './flows/'.modname.'-'.function->name.'.dot';
	var graphstr = 'digraph '.modname.'__'.function->name.' {'.string::lf();
	rep var i (array::len(blocks)) {
		fora var j (blocks[i]->next) {
			graphstr .= i.' -> '.j.';'.string::lf();
		}
	}
	graphstr .= '}';
	c_fe_lib::string_to_file(dot_fname, graphstr);
	return true;
}
