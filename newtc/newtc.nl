use c_fe_lib;
use ptd;
use nlasm;
use flow_graph;
use dfile;

def newtc::check_modules(modules : ptd::hash(@nlasm::result_t)) {
	c_fe_lib::print('>>newtc::check_modules()<<');
	forh var modname, var module (modules) {
		fora var function (module->functions) {
			check_function(modname, function);
		}
	}
}

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
	c_fe_lib::print('check_function: '.modname.'.'.function->name.'():');
	c_fe_lib::print(dfile::ssave(blocks));
}
