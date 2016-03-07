use c_rt_lib;
use array;
use hash;
use nlasm;
use ov;
use ptd;
use boolean_t;
use nast;
use func;
use nl;
use string;
use string_utils;
use dfile;
use c_rt_lib;
use profile_inter;
sub interpreter::stack_element_t;
sub interpreter::module_labels_t;
sub interpreter::known_exec_func_t;
sub interpreter::state_t;
sub interpreter::rstate_t;
sub interpreter::stack_t;
sub interpreter::stack_element_debug_t;
sub interpreter::part_state_t;
sub interpreter::part_state;
sub interpreter_priv::build_state;
sub interpreter::init;
sub interpreter::get_short_state;
sub interpreter::init_from_part_and_short;
sub interpreter::init_from_short;
sub interpreter::init_from_part;
sub interpreter::start;
sub interpreter::start_args;
sub interpreter::exec_instruction;
sub interpreter::exec_all_code;
sub interpreter::evaluate_const;
sub interpreter::get_none_variant;
sub interpreter_priv::build_registers;
sub interpreter_priv::build_labels;
sub interpreter_priv::build_functions;
sub interpreter_priv::get_stack_element_debug;
sub interpreter::get_profile;
sub interpreter::get_whole_stack_debug;
sub interpreter::has_next_instruction;
sub interpreter_priv::get_variables;
sub interpreter::get_instruction_nr;
sub interpreter_priv::is_hidden;
sub interpreter::execute_full_instruction;
sub interpreter_priv::handle_new_declarations;
sub interpreter_priv::step;
sub interpreter_priv::check_command;
sub interpreter::callback_value_t;
sub interpreter_priv::append_profile;
sub interpreter::finish_callback;
sub interpreter_priv::handle_normal_call;
sub interpreter_priv::handle_unknown_call;
sub interpreter_priv::handle_extern_call;
sub interpreter_priv::get_compiler_functions;
sub interpreter_priv::handle_array_call;
sub interpreter_priv::handle_hash_call;
sub interpreter_priv::handle_string_call;
sub interpreter_priv::handle_ov_call;
sub interpreter_priv::handle_ptd_call;
sub interpreter_priv::handle_c_rt_lib_call;
sub interpreter_priv::handle_compiler_call;
sub interpreter_priv::handle_return;
sub interpreter_priv::goto;
sub interpreter_priv::execute_bin_op;
sub interpreter_priv::execute_una_op;
sub interpreter_priv::get_command;
sub interpreter_priv::get_func_key;

return 1;

sub interpreter::__stack_element_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 22
$memory_2 = ptd::sim();
#line 22
$memory_3 = ptd::sim();
#line 22
$memory_4 = ptd::sim();
#line 22
$memory_6 = ptd::ptd_im();
#line 22
$memory_5 = ptd::arr($memory_6);
#line 22
undef($memory_6);
#line 22
$memory_6 = ptd::sim();
#line 22
$memory_8 = ptd::sim();
#line 22
$memory_7 = ptd::hash($memory_8);
#line 22
undef($memory_8);
#line 22
$memory_9 = ptd::sim();
#line 22
$memory_8 = ptd::hash($memory_9);
#line 22
undef($memory_9);
#line 22
$memory_1 = {func_key => $memory_2,module_name => $memory_3,next => $memory_4,vars => $memory_5,ret => $memory_6,code_vars => $memory_7,ref_arguments => $memory_8,};
#line 22
undef($memory_2);
#line 22
undef($memory_3);
#line 22
undef($memory_4);
#line 22
undef($memory_5);
#line 22
undef($memory_6);
#line 22
undef($memory_7);
#line 22
undef($memory_8);
#line 22
$memory_0 = ptd::rec($memory_1);
#line 22
undef($memory_1);
#line 22
return $memory_0;
#line 22
undef($memory_0);
#line 22
return;
}

my $_stack_element_t;
sub interpreter::stack_element_t() {
	$_stack_element_t = interpreter::__stack_element_t() unless defined $_stack_element_t;
	return $_stack_element_t;
}

sub interpreter::__module_labels_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 34
$memory_2 = ptd::sim();
#line 34
$memory_1 = ptd::hash($memory_2);
#line 34
undef($memory_2);
#line 34
$memory_0 = ptd::hash($memory_1);
#line 34
undef($memory_1);
#line 34
return $memory_0;
#line 34
undef($memory_0);
#line 34
return;
}

my $_module_labels_t;
sub interpreter::module_labels_t() {
	$_module_labels_t = interpreter::__module_labels_t() unless defined $_module_labels_t;
	return $_module_labels_t;
}

sub interpreter::__known_exec_func_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 38
$memory_2 = ptd::ptd_im();
#line 38
$memory_4 = {
	module => "ptd",
	name => "meta_type",
};
#line 38
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 38
$memory_3 = ptd::arr($memory_4);
#line 38
undef($memory_4);
#line 38
$memory_6 = {
	module => "ptd",
	name => "meta_type",
};
#line 38
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 38
$memory_7 = ptd::none();
#line 38
$memory_5 = {yes => $memory_6,no => $memory_7,};
#line 38
undef($memory_6);
#line 38
undef($memory_7);
#line 38
$memory_4 = ptd::var($memory_5);
#line 38
undef($memory_5);
#line 38
$memory_7 = ptd::none();
#line 38
$memory_8 = ptd::none();
#line 38
$memory_6 = {callback => $memory_7,sequential => $memory_8,};
#line 38
undef($memory_7);
#line 38
undef($memory_8);
#line 38
$memory_5 = ptd::var($memory_6);
#line 38
undef($memory_6);
#line 38
$memory_1 = {func => $memory_2,args => $memory_3,return => $memory_4,type => $memory_5,};
#line 38
undef($memory_2);
#line 38
undef($memory_3);
#line 38
undef($memory_4);
#line 38
undef($memory_5);
#line 38
$memory_0 = ptd::rec($memory_1);
#line 38
undef($memory_1);
#line 38
return $memory_0;
#line 38
undef($memory_0);
#line 38
return;
}

my $_known_exec_func_t;
sub interpreter::known_exec_func_t() {
	$_known_exec_func_t = interpreter::__known_exec_func_t() unless defined $_known_exec_func_t;
	return $_known_exec_func_t;
}

sub interpreter::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;
#line 47
$memory_2 = {
	module => "interpreter",
	name => "rstate_t",
};
#line 47
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 47
$memory_3 = {
	module => "nlasm",
	name => "function_t",
};
#line 47
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 47
$memory_5 = {
	module => "interpreter",
	name => "module_labels_t",
};
#line 47
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 47
$memory_4 = ptd::hash($memory_5);
#line 47
undef($memory_5);
#line 47
$memory_6 = {
	module => "nlasm",
	name => "function_t",
};
#line 47
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 47
$memory_5 = ptd::hash($memory_6);
#line 47
undef($memory_6);
#line 47
$memory_7 = {
	module => "interpreter",
	name => "stack_element_t",
};
#line 47
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 47
$memory_6 = ptd::arr($memory_7);
#line 47
undef($memory_7);
#line 47
$memory_7 = {
	module => "interpreter",
	name => "stack_element_t",
};
#line 47
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 47
$memory_8 = ptd::sim();
#line 47
$memory_9 = {
	module => "boolean_t",
	name => "type",
};
#line 47
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 47
$memory_11 = {
	module => "interpreter",
	name => "known_exec_func_t",
};
#line 47
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 47
$memory_10 = ptd::hash($memory_11);
#line 47
undef($memory_11);
#line 47
$memory_12 = ptd::sim();
#line 47
$memory_11 = ptd::hash($memory_12);
#line 47
undef($memory_12);
#line 47
$memory_13 = {
	module => "profile_inter",
	name => "row_t",
};
#line 47
$memory_13 = c_rt_lib::ov_mk_arg('ref', $memory_13);
#line 47
$memory_12 = ptd::arr($memory_13);
#line 47
undef($memory_13);
#line 47
$memory_1 = {rstate => $memory_2,func => $memory_3,labels => $memory_4,functions => $memory_5,stack => $memory_6,top => $memory_7,instruction_nr => $memory_8,check_all_instructions => $memory_9,known_exec_func => $memory_10,compiler_functions => $memory_11,profile => $memory_12,};
#line 47
undef($memory_2);
#line 47
undef($memory_3);
#line 47
undef($memory_4);
#line 47
undef($memory_5);
#line 47
undef($memory_6);
#line 47
undef($memory_7);
#line 47
undef($memory_8);
#line 47
undef($memory_9);
#line 47
undef($memory_10);
#line 47
undef($memory_11);
#line 47
undef($memory_12);
#line 47
$memory_0 = ptd::rec($memory_1);
#line 47
undef($memory_1);
#line 47
return $memory_0;
#line 47
undef($memory_0);
#line 47
return;
}

my $_state_t;
sub interpreter::state_t() {
	$_state_t = interpreter::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub interpreter::__rstate_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 63
$memory_2 = ptd::none();
#line 63
$memory_3 = ptd::sim();
#line 63
$memory_6 = {
	module => "nlasm",
	name => "call_t",
};
#line 63
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 63
$memory_8 = ptd::ptd_im();
#line 63
$memory_7 = ptd::arr($memory_8);
#line 63
undef($memory_8);
#line 63
$memory_5 = {call => $memory_6,args => $memory_7,};
#line 63
undef($memory_6);
#line 63
undef($memory_7);
#line 63
$memory_4 = ptd::rec($memory_5);
#line 63
undef($memory_5);
#line 63
$memory_7 = ptd::ptd_im();
#line 63
$memory_9 = ptd::ptd_im();
#line 63
$memory_8 = ptd::hash($memory_9);
#line 63
undef($memory_9);
#line 63
$memory_9 = ptd::sim();
#line 63
$memory_10 = ptd::sim();
#line 63
$memory_6 = {return => $memory_7,ref_args => $memory_8,func => $memory_9,module => $memory_10,};
#line 63
undef($memory_7);
#line 63
undef($memory_8);
#line 63
undef($memory_9);
#line 63
undef($memory_10);
#line 63
$memory_5 = ptd::rec($memory_6);
#line 63
undef($memory_6);
#line 63
$memory_1 = {running => $memory_2,error => $memory_3,callback => $memory_4,finished => $memory_5,};
#line 63
undef($memory_2);
#line 63
undef($memory_3);
#line 63
undef($memory_4);
#line 63
undef($memory_5);
#line 63
$memory_0 = ptd::var($memory_1);
#line 63
undef($memory_1);
#line 63
return $memory_0;
#line 63
undef($memory_0);
#line 63
return;
}

my $_rstate_t;
sub interpreter::rstate_t() {
	$_rstate_t = interpreter::__rstate_t() unless defined $_rstate_t;
	return $_rstate_t;
}

sub interpreter::__stack_t() {
my $memory_0;my $memory_1;
#line 77
$memory_1 = {
	module => "interpreter",
	name => "stack_element_debug_t",
};
#line 77
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 77
$memory_0 = ptd::arr($memory_1);
#line 77
undef($memory_1);
#line 77
return $memory_0;
#line 77
undef($memory_0);
#line 77
return;
}

my $_stack_t;
sub interpreter::stack_t() {
	$_stack_t = interpreter::__stack_t() unless defined $_stack_t;
	return $_stack_t;
}

sub interpreter::__stack_element_debug_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 81
$memory_5 = ptd::sim();
#line 81
$memory_6 = ptd::ptd_im();
#line 81
$memory_4 = {name => $memory_5,value => $memory_6,};
#line 81
undef($memory_5);
#line 81
undef($memory_6);
#line 81
$memory_3 = ptd::rec($memory_4);
#line 81
undef($memory_4);
#line 81
$memory_2 = ptd::arr($memory_3);
#line 81
undef($memory_3);
#line 81
$memory_3 = {
	module => "nast",
	name => "debug_t",
};
#line 81
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 81
$memory_4 = ptd::sim();
#line 81
$memory_5 = ptd::sim();
#line 81
$memory_6 = ptd::sim();
#line 81
$memory_1 = {variables => $memory_2,command_debug => $memory_3,func_name => $memory_4,module_name => $memory_5,instruction_nr => $memory_6,};
#line 81
undef($memory_2);
#line 81
undef($memory_3);
#line 81
undef($memory_4);
#line 81
undef($memory_5);
#line 81
undef($memory_6);
#line 81
$memory_0 = ptd::rec($memory_1);
#line 81
undef($memory_1);
#line 81
return $memory_0;
#line 81
undef($memory_0);
#line 81
return;
}

my $_stack_element_debug_t;
sub interpreter::stack_element_debug_t() {
	$_stack_element_debug_t = interpreter::__stack_element_debug_t() unless defined $_stack_element_debug_t;
	return $_stack_element_debug_t;
}

sub interpreter::__part_state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 91
$memory_3 = {
	module => "interpreter",
	name => "module_labels_t",
};
#line 91
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 91
$memory_2 = ptd::hash($memory_3);
#line 91
undef($memory_3);
#line 91
$memory_4 = {
	module => "nlasm",
	name => "function_t",
};
#line 91
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 91
$memory_3 = ptd::hash($memory_4);
#line 91
undef($memory_4);
#line 91
$memory_4 = ptd::sim();
#line 91
$memory_1 = {labels => $memory_2,functions => $memory_3,module_name => $memory_4,};
#line 91
undef($memory_2);
#line 91
undef($memory_3);
#line 91
undef($memory_4);
#line 91
$memory_0 = ptd::rec($memory_1);
#line 91
undef($memory_1);
#line 91
return $memory_0;
#line 91
undef($memory_0);
#line 91
return;
}

my $_part_state_t;
sub interpreter::part_state_t() {
	$_part_state_t = interpreter::__part_state_t() unless defined $_part_state_t;
	return $_part_state_t;
}

sub interpreter::part_state($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 99
$memory_3 = [$memory_0];
#line 99
$memory_2 = interpreter_priv::build_labels($memory_3);
#line 99
undef($memory_3);
#line 99
$memory_4 = [$memory_0];
#line 99
$memory_3 = interpreter_priv::build_functions($memory_4);
#line 99
undef($memory_4);
#line 99
$memory_4 = $memory_0->{'module_name'};
#line 99
$memory_1 = {labels => $memory_2,functions => $memory_3,module_name => $memory_4,};
#line 99
undef($memory_2);
#line 99
undef($memory_3);
#line 99
undef($memory_4);
#line 99
undef($memory_0);
#line 99
return $memory_1;
#line 99
undef($memory_1);
#line 99
undef($memory_0);
#line 99
return;
}

sub interpreter_priv::build_state($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 104
$memory_4 = "nie wywolano funkcji";
#line 104
$memory_4 = c_rt_lib::ov_mk_arg('error', $memory_4);
#line 104
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 104
$memory_7 = c_rt_lib::ov_mk_none('priv');
#line 104
$memory_8 = 0;
#line 104
$memory_9 = [];
#line 104
$memory_10 = [];
#line 104
$memory_11 = "";
#line 104
$memory_5 = {annotation => $memory_6,access => $memory_7,reg_size => $memory_8,args_type => $memory_9,commands => $memory_10,name => $memory_11,};
#line 104
undef($memory_6);
#line 104
undef($memory_7);
#line 104
undef($memory_8);
#line 104
undef($memory_9);
#line 104
undef($memory_10);
#line 104
undef($memory_11);
#line 104
$memory_6 = [];
#line 104
$memory_8 = "";
#line 104
$memory_9 = "";
#line 104
$memory_10 = 0;
#line 104
$memory_11 = [];
#line 104
$memory_12 = "";
#line 104
$memory_13 = {};
#line 104
$memory_14 = {};
#line 104
$memory_7 = {func_key => $memory_8,module_name => $memory_9,next => $memory_10,vars => $memory_11,ret => $memory_12,code_vars => $memory_13,ref_arguments => $memory_14,};
#line 104
undef($memory_8);
#line 104
undef($memory_9);
#line 104
undef($memory_10);
#line 104
undef($memory_11);
#line 104
undef($memory_12);
#line 104
undef($memory_13);
#line 104
undef($memory_14);
#line 104
$memory_8 = 1;
#line 104
$memory_8 = -$memory_8;
#line 104
$memory_9 = c_rt_lib::to_nl(1);
#line 104
$memory_10 = interpreter_priv::get_compiler_functions();
#line 104
$memory_11 = [];
#line 104
$memory_3 = {rstate => $memory_4,func => $memory_5,labels => $memory_0,functions => $memory_1,stack => $memory_6,top => $memory_7,instruction_nr => $memory_8,check_all_instructions => $memory_9,known_exec_func => $memory_2,compiler_functions => $memory_10,profile => $memory_11,};
#line 104
undef($memory_4);
#line 104
undef($memory_5);
#line 104
undef($memory_6);
#line 104
undef($memory_7);
#line 104
undef($memory_8);
#line 104
undef($memory_9);
#line 104
undef($memory_10);
#line 104
undef($memory_11);
#line 104
undef($memory_0);
#line 104
undef($memory_1);
#line 104
undef($memory_2);
#line 104
return $memory_3;
#line 104
undef($memory_3);
#line 104
undef($memory_0);
#line 104
undef($memory_1);
#line 104
undef($memory_2);
#line 104
return;
}

sub interpreter::init($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 129
$memory_3 = interpreter_priv::build_labels($memory_0);
#line 129
$memory_4 = interpreter_priv::build_functions($memory_0);
#line 129
$memory_2 = interpreter_priv::build_state($memory_3, $memory_4, $memory_1);
#line 129
undef($memory_4);
#line 129
undef($memory_3);
#line 129
undef($memory_0);
#line 129
undef($memory_1);
#line 129
return $memory_2;
#line 129
undef($memory_2);
#line 129
undef($memory_0);
#line 129
undef($memory_1);
#line 129
return;
}

sub interpreter::get_short_state($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 133
$memory_1 = {};
#line 133
$memory_2 = $memory_1;
#line 133
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'labels'} = $memory_2;
#line 133
undef($memory_1);
#line 133
undef($memory_2);
#line 134
$memory_1 = {};
#line 134
$memory_2 = $memory_1;
#line 134
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'functions'} = $memory_2;
#line 134
undef($memory_1);
#line 134
undef($memory_2);
#line 135
return $memory_0;
#line 135
undef($memory_0);
#line 135
return;
}

sub interpreter::init_from_part_and_short($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];
#line 140
$memory_3 = 0;
#line 140
$memory_4 = 1;
#line 140
$memory_5 = c_rt_lib::array_len($memory_1);
#line 140
label_3:
#line 140
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 140
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 140
$memory_2 = $memory_1->[$memory_3];
#line 141
$memory_7 = "labels";
#line 141
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 141
$memory_8 = $memory_2->{'labels'};
#line 141
hash::add_all($memory_7, $memory_8);
#line 141
undef($memory_8);
#line 141
$memory_8 = "labels";
#line 141
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 141
undef($memory_8);
#line 141
undef($memory_7);
#line 142
$memory_7 = "functions";
#line 142
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 142
$memory_8 = $memory_2->{'functions'};
#line 142
hash::add_all($memory_7, $memory_8);
#line 142
undef($memory_8);
#line 142
$memory_8 = "functions";
#line 142
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 142
undef($memory_8);
#line 142
undef($memory_7);
#line 143
$memory_3 = $memory_3 + $memory_4;
#line 143
goto label_3;
#line 143
label_1:
#line 143
undef($memory_2);
#line 143
undef($memory_3);
#line 143
undef($memory_4);
#line 143
undef($memory_5);
#line 143
undef($memory_6);
#line 144
undef($memory_1);
#line 144
return $memory_0;
#line 144
undef($memory_0);
#line 144
undef($memory_1);
#line 144
return;
}

sub interpreter::init_from_short($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 149
$memory_2 = interpreter_priv::build_labels($memory_1);
#line 149
$memory_3 = $memory_2;
#line 149
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'labels'} = $memory_3;
#line 149
undef($memory_2);
#line 149
undef($memory_3);
#line 150
$memory_2 = interpreter_priv::build_functions($memory_1);
#line 150
$memory_3 = $memory_2;
#line 150
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'functions'} = $memory_3;
#line 150
undef($memory_2);
#line 150
undef($memory_3);
#line 151
$memory_2 = {};
#line 151
$memory_3 = $memory_2;
#line 151
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'known_exec_func'} = $memory_3;
#line 151
undef($memory_2);
#line 151
undef($memory_3);
#line 152
undef($memory_1);
#line 152
return $memory_0;
#line 152
undef($memory_0);
#line 152
undef($memory_1);
#line 152
return;
}

sub interpreter::init_from_part($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 157
$memory_2 = {};
#line 158
$memory_3 = {};
#line 159
$memory_5 = 0;
#line 159
$memory_6 = 1;
#line 159
$memory_7 = c_rt_lib::array_len($memory_0);
#line 159
label_3:
#line 159
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 159
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 159
$memory_4 = $memory_0->[$memory_5];
#line 160
$memory_9 = $memory_4->{'labels'};
#line 160
hash::add_all($memory_2, $memory_9);
#line 160
undef($memory_9);
#line 161
$memory_9 = $memory_4->{'functions'};
#line 161
hash::add_all($memory_3, $memory_9);
#line 161
undef($memory_9);
#line 162
$memory_5 = $memory_5 + $memory_6;
#line 162
goto label_3;
#line 162
label_1:
#line 162
undef($memory_4);
#line 162
undef($memory_5);
#line 162
undef($memory_6);
#line 162
undef($memory_7);
#line 162
undef($memory_8);
#line 163
$memory_4 = interpreter_priv::build_state($memory_2, $memory_3, $memory_1);
#line 163
undef($memory_0);
#line 163
undef($memory_1);
#line 163
undef($memory_2);
#line 163
undef($memory_3);
#line 163
return $memory_4;
#line 163
undef($memory_4);
#line 163
undef($memory_2);
#line 163
undef($memory_3);
#line 163
undef($memory_0);
#line 163
undef($memory_1);
#line 163
return;
}

sub interpreter::start($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 170
$memory_4 = [];
#line 170
$memory_3 = interpreter::start_args($memory_0, $memory_1, $memory_2, $memory_4);
#line 170
undef($memory_4);
#line 170
undef($memory_1);
#line 170
undef($memory_2);
#line 170
$_[0] = $memory_0;return $memory_3;
#line 170
undef($memory_3);
#line 170
undef($memory_1);
#line 170
undef($memory_2);
#line 170
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter::start_args($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 175
$memory_4 = "::";
#line 175
$memory_4 = $memory_2 . $memory_4;
#line 175
$memory_4 = $memory_4 . $memory_1;
#line 176
$memory_6 = $memory_0->{'functions'};
#line 176
$memory_5 = hash::has_key($memory_6, $memory_4);
#line 176
undef($memory_6);
#line 176
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 176
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 176
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 177
$memory_6 = "brak funkcji ";
#line 177
$memory_6 = $memory_6 . $memory_4;
#line 177
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 177
undef($memory_1);
#line 177
undef($memory_2);
#line 177
undef($memory_3);
#line 177
undef($memory_4);
#line 177
undef($memory_5);
#line 177
$_[0] = $memory_0;return $memory_6;
#line 177
undef($memory_6);
#line 178
goto label_2;
#line 178
label_2:
#line 178
undef($memory_5);
#line 179
$memory_6 = $memory_0->{'functions'};
#line 179
$memory_5 = hash::get_value($memory_6, $memory_4);
#line 179
undef($memory_6);
#line 180
$memory_7 = $memory_5->{'args_type'};
#line 180
$memory_6 = array::len($memory_7);
#line 180
undef($memory_7);
#line 180
$memory_7 = array::len($memory_3);
#line 180
$memory_6 = c_rt_lib::to_nl($memory_6 != $memory_7);
#line 180
undef($memory_7);
#line 180
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 180
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 181
$memory_7 = "nie wlasciwa liczba argumentow: ";
#line 181
$memory_8 = array::len($memory_3);
#line 181
$memory_7 = $memory_7 . $memory_8;
#line 181
undef($memory_8);
#line 181
$memory_8 = " zamiast: ";
#line 181
$memory_7 = $memory_7 . $memory_8;
#line 181
undef($memory_8);
#line 181
$memory_9 = $memory_5->{'args_type'};
#line 181
$memory_8 = array::len($memory_9);
#line 181
undef($memory_9);
#line 181
$memory_7 = $memory_7 . $memory_8;
#line 181
undef($memory_8);
#line 181
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 181
undef($memory_1);
#line 181
undef($memory_2);
#line 181
undef($memory_3);
#line 181
undef($memory_4);
#line 181
undef($memory_5);
#line 181
undef($memory_6);
#line 181
$_[0] = $memory_0;return $memory_7;
#line 181
undef($memory_7);
#line 183
goto label_4;
#line 183
label_4:
#line 183
undef($memory_6);
#line 184
$memory_6 = [];
#line 184
$memory_7 = $memory_6;
#line 184
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'profile'} = $memory_7;
#line 184
undef($memory_6);
#line 184
undef($memory_7);
#line 185
$memory_6 = "profile";
#line 185
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 185
profile_inter::begin($memory_6, $memory_4);
#line 185
$memory_7 = "profile";
#line 185
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 185
undef($memory_7);
#line 185
undef($memory_6);
#line 186
$memory_6 = c_rt_lib::ov_mk_none('running');
#line 186
$memory_7 = $memory_6;
#line 186
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_7;
#line 186
undef($memory_6);
#line 186
undef($memory_7);
#line 187
$memory_7 = $memory_5->{'reg_size'};
#line 187
$memory_6 = interpreter_priv::build_registers($memory_7);
#line 187
undef($memory_7);
#line 188
$memory_7 = {};
#line 189
$memory_9 = $memory_5->{'args_type'};
#line 189
$memory_8 = array::len($memory_9);
#line 189
undef($memory_9);
#line 189
$memory_9 = 0;
#line 189
$memory_10 = 1;
#line 189
label_7:
#line 189
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 189
if (c_rt_lib::check_true($memory_11)) {goto label_5;}
#line 190
$memory_12 = $memory_5->{'args_type'};
#line 190
$memory_12 = $memory_12->[$memory_9];
#line 191
$memory_13 = c_rt_lib::ov_is($memory_12, 'val');
#line 191
if (c_rt_lib::check_true($memory_13)) {goto label_9;}
#line 192
$memory_13 = c_rt_lib::ov_is($memory_12, 'ref');
#line 192
if (c_rt_lib::check_true($memory_13)) {goto label_10;}
#line 192
$memory_13 = "NOMATCHALERT";
#line 192
$memory_13 = [$memory_13,$memory_12];
#line 192
die(dfile::ssave($memory_13));
#line 191
label_9:
#line 192
goto label_8;
#line 192
label_10:
#line 193
hash::set_value($memory_7, $memory_9, $memory_9);
#line 194
goto label_8;
#line 194
label_8:
#line 194
undef($memory_13);
#line 195
$memory_13 = $memory_3->[$memory_9];
#line 195
$memory_14 = $memory_13;
#line 195
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_9] = $memory_14;
#line 195
undef($memory_13);
#line 195
undef($memory_14);
#line 195
undef($memory_12);
#line 196
$memory_9 = $memory_9 + $memory_10;
#line 196
goto label_7;
#line 196
label_5:
#line 196
undef($memory_8);
#line 196
undef($memory_9);
#line 196
undef($memory_10);
#line 196
undef($memory_11);
#line 197
$memory_8 = $memory_5;
#line 197
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'func'} = $memory_8;
#line 197
undef($memory_8);
#line 198
$memory_8 = [];
#line 198
$memory_9 = $memory_8;
#line 198
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'stack'} = $memory_9;
#line 198
undef($memory_8);
#line 198
undef($memory_9);
#line 199
$memory_9 = 0;
#line 199
$memory_10 = "";
#line 199
$memory_11 = {};
#line 199
$memory_8 = {func_key => $memory_4,module_name => $memory_2,next => $memory_9,vars => $memory_6,ret => $memory_10,code_vars => $memory_11,ref_arguments => $memory_7,};
#line 199
undef($memory_9);
#line 199
undef($memory_10);
#line 199
undef($memory_11);
#line 199
$memory_9 = $memory_8;
#line 199
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'top'} = $memory_9;
#line 199
undef($memory_8);
#line 199
undef($memory_9);
#line 208
$memory_8 = 1;
#line 208
$memory_8 = -$memory_8;
#line 208
$memory_9 = $memory_8;
#line 208
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'instruction_nr'} = $memory_9;
#line 208
undef($memory_8);
#line 208
undef($memory_9);
#line 209
interpreter_priv::handle_new_declarations($memory_0);
#line 210
$memory_8 = "";
#line 210
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_8);
#line 210
undef($memory_1);
#line 210
undef($memory_2);
#line 210
undef($memory_3);
#line 210
undef($memory_4);
#line 210
undef($memory_5);
#line 210
undef($memory_6);
#line 210
undef($memory_7);
#line 210
$_[0] = $memory_0;return $memory_8;
#line 210
undef($memory_8);
#line 210
undef($memory_4);
#line 210
undef($memory_5);
#line 210
undef($memory_6);
#line 210
undef($memory_7);
#line 210
undef($memory_1);
#line 210
undef($memory_2);
#line 210
undef($memory_3);
#line 210
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter::exec_instruction($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 214
$memory_2 = $memory_1;
#line 214
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'instruction_nr'} = $memory_2;
#line 214
undef($memory_2);
#line 215
label_2:
#line 216
$memory_2 = $memory_0->{'rstate'};
#line 216
$memory_3 = c_rt_lib::ov_is($memory_2, 'error');
#line 216
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 218
$memory_3 = c_rt_lib::ov_is($memory_2, 'running');
#line 218
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 224
$memory_3 = c_rt_lib::ov_is($memory_2, 'callback');
#line 224
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 226
$memory_3 = c_rt_lib::ov_is($memory_2, 'finished');
#line 226
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 226
$memory_3 = "NOMATCHALERT";
#line 226
$memory_3 = [$memory_3,$memory_2];
#line 226
die(dfile::ssave($memory_3));
#line 216
label_4:
#line 216
$memory_4 = c_rt_lib::ov_as($memory_2, 'error');
#line 217
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_4);
#line 217
undef($memory_1);
#line 217
undef($memory_2);
#line 217
undef($memory_3);
#line 217
undef($memory_4);
#line 217
$_[0] = $memory_0;return $memory_5;
#line 217
undef($memory_5);
#line 217
undef($memory_4);
#line 218
goto label_3;
#line 218
label_5:
#line 219
$memory_4 = interpreter_priv::get_command($memory_0);
#line 220
$memory_5 = interpreter_priv::is_hidden($memory_4);
#line 220
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 220
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 220
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 221
$memory_6 = $memory_0->{'instruction_nr'};
#line 221
$memory_7 = $memory_4->{'debug'};
#line 221
$memory_7 = $memory_7->{'instruction_nr'};
#line 221
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 221
undef($memory_7);
#line 221
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 221
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 221
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 221
$memory_7 = c_rt_lib::ov_mk_none('running');
#line 221
undef($memory_1);
#line 221
undef($memory_2);
#line 221
undef($memory_3);
#line 221
undef($memory_4);
#line 221
undef($memory_5);
#line 221
undef($memory_6);
#line 221
$_[0] = $memory_0;return $memory_7;
#line 221
undef($memory_7);
#line 221
goto label_11;
#line 221
label_11:
#line 221
undef($memory_6);
#line 222
goto label_9;
#line 222
label_9:
#line 222
undef($memory_5);
#line 223
interpreter_priv::step($memory_0);
#line 223
undef($memory_4);
#line 224
goto label_3;
#line 224
label_6:
#line 224
$memory_4 = c_rt_lib::ov_as($memory_2, 'callback');
#line 225
$memory_5 = $memory_0->{'rstate'};
#line 225
undef($memory_1);
#line 225
undef($memory_2);
#line 225
undef($memory_3);
#line 225
undef($memory_4);
#line 225
$_[0] = $memory_0;return $memory_5;
#line 225
undef($memory_5);
#line 225
undef($memory_4);
#line 226
goto label_3;
#line 226
label_7:
#line 226
$memory_4 = c_rt_lib::ov_as($memory_2, 'finished');
#line 227
$memory_5 = c_rt_lib::ov_mk_arg('finished', $memory_4);
#line 227
undef($memory_1);
#line 227
undef($memory_2);
#line 227
undef($memory_3);
#line 227
undef($memory_4);
#line 227
$_[0] = $memory_0;return $memory_5;
#line 227
undef($memory_5);
#line 227
undef($memory_4);
#line 228
goto label_3;
#line 228
label_3:
#line 228
undef($memory_2);
#line 228
undef($memory_3);
#line 215
goto label_2;
#line 230
$memory_2 = "";
#line 230
$memory_2 = c_rt_lib::ov_mk_arg('error', $memory_2);
#line 230
undef($memory_1);
#line 230
$_[0] = $memory_0;return $memory_2;
#line 230
undef($memory_2);
#line 230
undef($memory_1);
#line 230
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter::exec_all_code($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 233
interpreter_priv::step($memory_0);
#line 234
label_2:
#line 235
$memory_1 = $memory_0->{'rstate'};
#line 235
$memory_2 = c_rt_lib::ov_is($memory_1, 'error');
#line 235
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 237
$memory_2 = c_rt_lib::ov_is($memory_1, 'running');
#line 237
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 239
$memory_2 = c_rt_lib::ov_is($memory_1, 'callback');
#line 239
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 240
$memory_2 = c_rt_lib::ov_is($memory_1, 'finished');
#line 240
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 240
$memory_2 = "NOMATCHALERT";
#line 240
$memory_2 = [$memory_2,$memory_1];
#line 240
die(dfile::ssave($memory_2));
#line 235
label_4:
#line 235
$memory_3 = c_rt_lib::ov_as($memory_1, 'error');
#line 236
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 236
undef($memory_0);
#line 236
undef($memory_1);
#line 236
undef($memory_2);
#line 236
undef($memory_3);
#line 236
return $memory_4;
#line 236
undef($memory_4);
#line 236
undef($memory_3);
#line 237
goto label_3;
#line 237
label_5:
#line 238
interpreter_priv::step($memory_0);
#line 239
goto label_3;
#line 239
label_6:
#line 239
$memory_3 = c_rt_lib::ov_as($memory_1, 'callback');
#line 239
undef($memory_3);
#line 240
goto label_3;
#line 240
label_7:
#line 240
$memory_3 = c_rt_lib::ov_as($memory_1, 'finished');
#line 241
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 241
undef($memory_0);
#line 241
undef($memory_1);
#line 241
undef($memory_2);
#line 241
undef($memory_3);
#line 241
return $memory_4;
#line 241
undef($memory_4);
#line 241
undef($memory_3);
#line 242
goto label_3;
#line 242
label_3:
#line 242
undef($memory_1);
#line 242
undef($memory_2);
#line 234
goto label_2;
#line 244
$memory_1 = c_rt_lib::ov_mk_none('err');
#line 244
undef($memory_0);
#line 244
return $memory_1;
#line 244
undef($memory_1);
#line 244
undef($memory_0);
#line 244
return;
}

sub interpreter::evaluate_const($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];
#line 248
$memory_5 = interpreter_priv::get_func_key($memory_1, $memory_2);
#line 249
$memory_7 = $memory_0->{'functions'};
#line 249
$memory_6 = hash::has_key($memory_7, $memory_5);
#line 249
undef($memory_7);
#line 249
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 249
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 249
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 249
$memory_7 = [];
#line 249
die(dfile::ssave($memory_7));
#line 249
goto label_2;
#line 249
label_2:
#line 249
undef($memory_6);
#line 249
undef($memory_7);
#line 250
$memory_6 = c_rt_lib::ov_mk_none('running');
#line 250
$memory_7 = $memory_6;
#line 250
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_7;
#line 250
undef($memory_6);
#line 250
undef($memory_7);
#line 251
$memory_7 = $memory_0->{'functions'};
#line 251
$memory_6 = hash::get_value($memory_7, $memory_5);
#line 251
undef($memory_7);
#line 251
$memory_1 = $memory_6;
#line 251
undef($memory_6);
#line 252
$memory_6 = $memory_1;
#line 252
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'func'} = $memory_6;
#line 252
undef($memory_6);
#line 253
$memory_6 = [];
#line 253
$memory_7 = $memory_6;
#line 253
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'stack'} = $memory_7;
#line 253
undef($memory_6);
#line 253
undef($memory_7);
#line 254
$memory_7 = "";
#line 254
$memory_8 = {};
#line 254
$memory_9 = {};
#line 254
$memory_6 = {func_key => $memory_5,module_name => $memory_2,next => $memory_4,vars => $memory_3,ret => $memory_7,code_vars => $memory_8,ref_arguments => $memory_9,};
#line 254
undef($memory_7);
#line 254
undef($memory_8);
#line 254
undef($memory_9);
#line 254
$memory_7 = $memory_6;
#line 254
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'top'} = $memory_7;
#line 254
undef($memory_6);
#line 254
undef($memory_7);
#line 263
$memory_6 = 1;
#line 263
$memory_6 = -$memory_6;
#line 263
$memory_7 = $memory_6;
#line 263
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'instruction_nr'} = $memory_7;
#line 263
undef($memory_6);
#line 263
undef($memory_7);
#line 264
interpreter_priv::handle_new_declarations($memory_0);
#line 265
interpreter_priv::step($memory_0);
#line 266
$memory_6 = 1;
#line 267
label_4:
#line 267
$memory_9 = $memory_0->{'stack'};
#line 267
$memory_7 = array::len($memory_9);
#line 267
undef($memory_9);
#line 267
$memory_9 = 0;
#line 267
$memory_7 = c_rt_lib::to_nl($memory_7 != $memory_9);
#line 267
undef($memory_9);
#line 267
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 267
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 267
$memory_7 = $memory_0->{'rstate'};
#line 267
$memory_7 = c_rt_lib::ov_is($memory_7, 'running');
#line 267
label_5:
#line 267
undef($memory_8);
#line 267
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 267
if (c_rt_lib::check_true($memory_7)) {goto label_3;}
#line 268
$memory_8 = 5000;
#line 268
$memory_8 = c_rt_lib::to_nl($memory_6 > $memory_8);
#line 268
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 268
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 269
$memory_9 = "steps limit exceeded";
#line 269
$memory_9 = c_rt_lib::ov_mk_arg('err', $memory_9);
#line 269
undef($memory_0);
#line 269
undef($memory_1);
#line 269
undef($memory_2);
#line 269
undef($memory_3);
#line 269
undef($memory_4);
#line 269
undef($memory_5);
#line 269
undef($memory_6);
#line 269
undef($memory_7);
#line 269
undef($memory_8);
#line 269
return $memory_9;
#line 269
undef($memory_9);
#line 270
goto label_7;
#line 270
label_7:
#line 270
undef($memory_8);
#line 271
interpreter_priv::step($memory_0);
#line 272
$memory_8 = 1;
#line 272
$memory_6 = $memory_6 + $memory_8;
#line 272
undef($memory_8);
#line 273
goto label_4;
#line 273
label_3:
#line 273
undef($memory_7);
#line 274
$memory_7 = $memory_0->{'rstate'};
#line 274
$memory_7 = c_rt_lib::ov_is($memory_7, 'error');
#line 274
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 274
if (c_rt_lib::check_true($memory_7)) {goto label_9;}
#line 275
$memory_8 = $memory_0->{'rstate'};
#line 275
$memory_8 = c_rt_lib::ov_as($memory_8, 'error');
#line 275
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 275
undef($memory_0);
#line 275
undef($memory_1);
#line 275
undef($memory_2);
#line 275
undef($memory_3);
#line 275
undef($memory_4);
#line 275
undef($memory_5);
#line 275
undef($memory_6);
#line 275
undef($memory_7);
#line 275
return $memory_8;
#line 275
undef($memory_8);
#line 276
goto label_8;
#line 276
label_9:
#line 277
$memory_8 = $memory_0->{'top'};
#line 277
$memory_8 = $memory_8->{'vars'};
#line 277
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_8);
#line 277
undef($memory_0);
#line 277
undef($memory_1);
#line 277
undef($memory_2);
#line 277
undef($memory_3);
#line 277
undef($memory_4);
#line 277
undef($memory_5);
#line 277
undef($memory_6);
#line 277
undef($memory_7);
#line 277
return $memory_8;
#line 277
undef($memory_8);
#line 278
goto label_8;
#line 278
label_8:
#line 278
undef($memory_7);
#line 278
undef($memory_5);
#line 278
undef($memory_6);
#line 278
undef($memory_0);
#line 278
undef($memory_1);
#line 278
undef($memory_2);
#line 278
undef($memory_3);
#line 278
undef($memory_4);
#line 278
return;
}

sub interpreter::__get_none_variant() {
my $memory_0;
#line 282
$memory_0 = c_rt_lib::ov_mk_none('none_variant_do_not_use');
#line 282
return $memory_0;
#line 282
undef($memory_0);
#line 282
return;
}

my $_get_none_variant;
sub interpreter::get_none_variant() {
	$_get_none_variant = interpreter::__get_none_variant() unless defined $_get_none_variant;
	return $_get_none_variant;
}

sub interpreter_priv::build_registers($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 286
$memory_1 = [];
#line 287
$memory_2 = 0;
#line 287
$memory_3 = 1;
#line 287
label_3:
#line 287
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 287
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 287
$memory_5 = interpreter::get_none_variant();
#line 287
array::push($memory_1, $memory_5);
#line 287
undef($memory_5);
#line 287
$memory_2 = $memory_2 + $memory_3;
#line 287
goto label_3;
#line 287
label_1:
#line 287
undef($memory_2);
#line 287
undef($memory_3);
#line 287
undef($memory_4);
#line 288
undef($memory_0);
#line 288
return $memory_1;
#line 288
undef($memory_1);
#line 288
undef($memory_0);
#line 288
return;
}

sub interpreter_priv::build_labels($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;$memory_0 = $_[0];
#line 292
$memory_1 = {};
#line 293
$memory_3 = 0;
#line 293
$memory_4 = 1;
#line 293
$memory_5 = c_rt_lib::array_len($memory_0);
#line 293
label_3:
#line 293
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 293
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 293
$memory_2 = $memory_0->[$memory_3];
#line 294
$memory_7 = $memory_2->{'module_name'};
#line 295
$memory_8 = {};
#line 296
$memory_9 = $memory_2->{'functions'};
#line 296
$memory_11 = 0;
#line 296
$memory_12 = 1;
#line 296
$memory_13 = c_rt_lib::array_len($memory_9);
#line 296
label_6:
#line 296
$memory_14 = c_rt_lib::to_nl($memory_11 >= $memory_13);
#line 296
if (c_rt_lib::check_true($memory_14)) {goto label_4;}
#line 296
$memory_10 = $memory_9->[$memory_11];
#line 297
$memory_15 = interpreter_priv::get_func_key($memory_10, $memory_7);
#line 298
$memory_16 = {};
#line 299
$memory_18 = $memory_10->{'commands'};
#line 299
$memory_17 = array::len($memory_18);
#line 299
undef($memory_18);
#line 299
$memory_18 = 0;
#line 299
$memory_19 = 1;
#line 299
label_9:
#line 299
$memory_20 = c_rt_lib::to_nl($memory_18 >= $memory_17);
#line 299
if (c_rt_lib::check_true($memory_20)) {goto label_7;}
#line 300
$memory_21 = $memory_10->{'commands'};
#line 300
$memory_21 = $memory_21->[$memory_18];
#line 300
$memory_21 = $memory_21->{'cmd'};
#line 301
$memory_22 = $memory_21;
#line 301
$memory_22 = c_rt_lib::ov_is($memory_22, 'prt_lbl');
#line 301
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 301
if (c_rt_lib::check_true($memory_22)) {goto label_11;}
#line 302
$memory_23 = $memory_21;
#line 302
$memory_23 = c_rt_lib::ov_as($memory_23, 'prt_lbl');
#line 303
hash::set_value($memory_16, $memory_23, $memory_18);
#line 303
undef($memory_23);
#line 304
goto label_11;
#line 304
label_11:
#line 304
undef($memory_22);
#line 304
undef($memory_21);
#line 305
$memory_18 = $memory_18 + $memory_19;
#line 305
goto label_9;
#line 305
label_7:
#line 305
undef($memory_17);
#line 305
undef($memory_18);
#line 305
undef($memory_19);
#line 305
undef($memory_20);
#line 306
hash::set_value($memory_8, $memory_15, $memory_16);
#line 306
undef($memory_15);
#line 306
undef($memory_16);
#line 307
$memory_11 = $memory_11 + $memory_12;
#line 307
goto label_6;
#line 307
label_4:
#line 307
undef($memory_9);
#line 307
undef($memory_10);
#line 307
undef($memory_11);
#line 307
undef($memory_12);
#line 307
undef($memory_13);
#line 307
undef($memory_14);
#line 308
$memory_9 = $memory_2->{'module_name'};
#line 308
hash::set_value($memory_1, $memory_9, $memory_8);
#line 308
undef($memory_9);
#line 308
undef($memory_7);
#line 308
undef($memory_8);
#line 309
$memory_3 = $memory_3 + $memory_4;
#line 309
goto label_3;
#line 309
label_1:
#line 309
undef($memory_2);
#line 309
undef($memory_3);
#line 309
undef($memory_4);
#line 309
undef($memory_5);
#line 309
undef($memory_6);
#line 310
undef($memory_0);
#line 310
return $memory_1;
#line 310
undef($memory_1);
#line 310
undef($memory_0);
#line 310
return;
}

sub interpreter_priv::build_functions($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];
#line 314
$memory_1 = {};
#line 315
$memory_3 = 0;
#line 315
$memory_4 = 1;
#line 315
$memory_5 = c_rt_lib::array_len($memory_0);
#line 315
label_3:
#line 315
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 315
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 315
$memory_2 = $memory_0->[$memory_3];
#line 316
$memory_7 = $memory_2->{'module_name'};
#line 317
$memory_8 = $memory_2->{'functions'};
#line 317
$memory_10 = 0;
#line 317
$memory_11 = 1;
#line 317
$memory_12 = c_rt_lib::array_len($memory_8);
#line 317
label_6:
#line 317
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 317
if (c_rt_lib::check_true($memory_13)) {goto label_4;}
#line 317
$memory_9 = $memory_8->[$memory_10];
#line 318
$memory_14 = interpreter_priv::get_func_key($memory_9, $memory_7);
#line 319
hash::set_value($memory_1, $memory_14, $memory_9);
#line 319
undef($memory_14);
#line 320
$memory_10 = $memory_10 + $memory_11;
#line 320
goto label_6;
#line 320
label_4:
#line 320
undef($memory_8);
#line 320
undef($memory_9);
#line 320
undef($memory_10);
#line 320
undef($memory_11);
#line 320
undef($memory_12);
#line 320
undef($memory_13);
#line 320
undef($memory_7);
#line 321
$memory_3 = $memory_3 + $memory_4;
#line 321
goto label_3;
#line 321
label_1:
#line 321
undef($memory_2);
#line 321
undef($memory_3);
#line 321
undef($memory_4);
#line 321
undef($memory_5);
#line 321
undef($memory_6);
#line 322
undef($memory_0);
#line 322
return $memory_1;
#line 322
undef($memory_1);
#line 322
undef($memory_0);
#line 322
return;
}

sub interpreter_priv::get_stack_element_debug($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 327
$memory_3 = $memory_1->{'functions'};
#line 327
$memory_4 = $memory_0->{'func_key'};
#line 327
$memory_2 = hash::get_value($memory_3, $memory_4);
#line 327
undef($memory_4);
#line 327
undef($memory_3);
#line 328
$memory_4 = interpreter_priv::get_variables($memory_0);
#line 328
$memory_5 = $memory_2->{'commands'};
#line 328
$memory_6 = $memory_0->{'next'};
#line 328
$memory_5 = $memory_5->[$memory_6];
#line 328
undef($memory_6);
#line 328
$memory_5 = $memory_5->{'debug'};
#line 328
$memory_5 = $memory_5->{'nast_debug'};
#line 328
$memory_6 = $memory_2->{'name'};
#line 328
$memory_7 = $memory_0->{'module_name'};
#line 328
$memory_8 = $memory_2->{'commands'};
#line 328
$memory_9 = $memory_0->{'next'};
#line 328
$memory_8 = $memory_8->[$memory_9];
#line 328
undef($memory_9);
#line 328
$memory_8 = $memory_8->{'debug'};
#line 328
$memory_8 = $memory_8->{'instruction_nr'};
#line 328
$memory_3 = {variables => $memory_4,command_debug => $memory_5,func_name => $memory_6,module_name => $memory_7,instruction_nr => $memory_8,};
#line 328
undef($memory_4);
#line 328
undef($memory_5);
#line 328
undef($memory_6);
#line 328
undef($memory_7);
#line 328
undef($memory_8);
#line 328
undef($memory_0);
#line 328
undef($memory_1);
#line 328
undef($memory_2);
#line 328
return $memory_3;
#line 328
undef($memory_3);
#line 328
undef($memory_2);
#line 328
undef($memory_0);
#line 328
undef($memory_1);
#line 328
return;
}

sub interpreter::get_profile($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 338
$memory_1 = $memory_0->{'profile'};
#line 338
undef($memory_0);
#line 338
return $memory_1;
#line 338
undef($memory_1);
#line 338
undef($memory_0);
#line 338
return;
}

sub interpreter::get_whole_stack_debug($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 342
$memory_1 = [];
#line 343
$memory_2 = $memory_0->{'rstate'};
#line 343
$memory_2 = c_rt_lib::ov_is($memory_2, 'finished');
#line 343
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 343
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 343
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 343
$memory_4 = $memory_0->{'top'};
#line 343
$memory_3 = interpreter_priv::get_stack_element_debug($memory_4, $memory_0);
#line 343
undef($memory_4);
#line 343
array::push($memory_1, $memory_3);
#line 343
undef($memory_3);
#line 343
goto label_2;
#line 343
label_2:
#line 343
undef($memory_2);
#line 344
$memory_3 = $memory_0->{'stack'};
#line 344
$memory_2 = array::len($memory_3);
#line 344
undef($memory_3);
#line 345
$memory_3 = 0;
#line 345
$memory_4 = 1;
#line 345
label_5:
#line 345
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 345
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 346
$memory_7 = $memory_0->{'stack'};
#line 346
$memory_8 = $memory_2 - $memory_3;
#line 346
$memory_9 = 1;
#line 346
$memory_8 = $memory_8 - $memory_9;
#line 346
undef($memory_9);
#line 346
$memory_7 = $memory_7->[$memory_8];
#line 346
undef($memory_8);
#line 346
$memory_6 = interpreter_priv::get_stack_element_debug($memory_7, $memory_0);
#line 346
undef($memory_7);
#line 346
array::push($memory_1, $memory_6);
#line 346
undef($memory_6);
#line 347
$memory_3 = $memory_3 + $memory_4;
#line 347
goto label_5;
#line 347
label_3:
#line 347
undef($memory_3);
#line 347
undef($memory_4);
#line 347
undef($memory_5);
#line 348
undef($memory_0);
#line 348
undef($memory_2);
#line 348
return $memory_1;
#line 348
undef($memory_1);
#line 348
undef($memory_2);
#line 348
undef($memory_0);
#line 348
return;
}

sub interpreter::has_next_instruction($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 352
$memory_1 = $memory_0->{'top'};
#line 352
$memory_1 = $memory_1->{'next'};
#line 352
$memory_3 = $memory_0->{'func'};
#line 352
$memory_3 = $memory_3->{'commands'};
#line 352
$memory_2 = array::len($memory_3);
#line 352
undef($memory_3);
#line 352
$memory_1 = c_rt_lib::to_nl($memory_1 < $memory_2);
#line 352
undef($memory_2);
#line 352
undef($memory_0);
#line 352
return $memory_1;
#line 352
undef($memory_1);
#line 352
undef($memory_0);
#line 352
return;
}

sub interpreter_priv::get_variables($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 359
$memory_1 = [];
#line 360
$memory_2 = $memory_0->{'code_vars'};
#line 360
$memory_5 = c_rt_lib::init_iter($memory_2);
#line 360
label_3:
#line 360
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 360
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 360
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 360
$memory_4 = c_rt_lib::hash_get_value($memory_2, $memory_3);
#line 361
$memory_6 = $memory_0->{'vars'};
#line 361
$memory_6 = $memory_6->[$memory_4];
#line 362
$memory_7 = {name => $memory_3,value => $memory_6,};
#line 362
array::push($memory_1, $memory_7);
#line 362
undef($memory_7);
#line 362
undef($memory_6);
#line 363
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 363
goto label_3;
#line 363
label_1:
#line 363
undef($memory_2);
#line 363
undef($memory_3);
#line 363
undef($memory_4);
#line 363
undef($memory_5);
#line 364
undef($memory_0);
#line 364
return $memory_1;
#line 364
undef($memory_1);
#line 364
undef($memory_0);
#line 364
return;
}

sub interpreter::get_instruction_nr($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 368
$memory_1 = interpreter_priv::get_command($memory_0);
#line 368
$memory_1 = $memory_1->{'debug'};
#line 368
$memory_1 = $memory_1->{'instruction_nr'};
#line 368
undef($memory_0);
#line 368
return $memory_1;
#line 368
undef($memory_1);
#line 368
undef($memory_0);
#line 368
return;
}

sub interpreter_priv::is_hidden($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 372
$memory_1 = $memory_0->{'cmd'};
#line 372
$memory_1 = c_rt_lib::ov_is($memory_1, 'prt_lbl');
#line 372
if (c_rt_lib::check_true($memory_1)) {goto label_1;}
#line 372
$memory_1 = $memory_0->{'cmd'};
#line 372
$memory_1 = c_rt_lib::ov_is($memory_1, 'clear');
#line 372
label_1:
#line 372
undef($memory_0);
#line 372
return $memory_1;
#line 372
undef($memory_1);
#line 372
undef($memory_0);
#line 372
return;
}

sub interpreter::execute_full_instruction($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 376
$memory_1 = $memory_0->{'rstate'};
#line 376
$memory_1 = c_rt_lib::ov_is($memory_1, 'running');
#line 376
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 376
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 376
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 376
undef($memory_1);
#line 376
$_[0] = $memory_0;return;
#line 376
goto label_2;
#line 376
label_2:
#line 376
undef($memory_1);
#line 377
$memory_1 = interpreter::get_instruction_nr($memory_0);
#line 377
$memory_2 = $memory_1;
#line 377
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'instruction_nr'} = $memory_2;
#line 377
undef($memory_1);
#line 377
undef($memory_2);
#line 378
label_4:
#line 379
$memory_1 = interpreter_priv::get_command($memory_0);
#line 380
$memory_2 = interpreter_priv::is_hidden($memory_1);
#line 380
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 380
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 380
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 381
$memory_3 = $memory_0->{'instruction_nr'};
#line 381
$memory_4 = $memory_1->{'debug'};
#line 381
$memory_4 = $memory_4->{'instruction_nr'};
#line 381
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 381
undef($memory_4);
#line 381
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 381
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 381
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 381
undef($memory_1);
#line 381
undef($memory_2);
#line 381
undef($memory_3);
#line 381
goto label_3;
#line 381
goto label_8;
#line 381
label_8:
#line 381
undef($memory_3);
#line 382
goto label_6;
#line 382
label_6:
#line 382
undef($memory_2);
#line 383
interpreter_priv::step($memory_0);
#line 384
$memory_2 = $memory_0->{'rstate'};
#line 384
$memory_2 = c_rt_lib::ov_is($memory_2, 'error');
#line 384
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 384
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 384
undef($memory_1);
#line 384
undef($memory_2);
#line 384
goto label_3;
#line 384
goto label_10;
#line 384
label_10:
#line 384
undef($memory_2);
#line 385
$memory_2 = interpreter::has_next_instruction($memory_0);
#line 385
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 385
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 385
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 385
undef($memory_1);
#line 385
undef($memory_2);
#line 385
goto label_3;
#line 385
goto label_12;
#line 385
label_12:
#line 385
undef($memory_2);
#line 385
undef($memory_1);
#line 378
goto label_4;
#line 378
label_3:
#line 378
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter_priv::handle_new_declarations($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 390
$memory_1 = interpreter::has_next_instruction($memory_0);
#line 390
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 390
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 390
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 390
undef($memory_1);
#line 390
$_[0] = $memory_0;return;
#line 390
goto label_2;
#line 390
label_2:
#line 390
undef($memory_1);
#line 391
$memory_1 = interpreter_priv::get_command($memory_0);
#line 392
$memory_2 = $memory_1->{'debug'};
#line 392
$memory_2 = $memory_2->{'declarations'};
#line 392
$memory_5 = c_rt_lib::init_iter($memory_2);
#line 392
label_5:
#line 392
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 392
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 392
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 392
$memory_4 = c_rt_lib::hash_get_value($memory_2, $memory_3);
#line 393
$memory_6 = "top";
#line 393
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 393
$memory_7 = "code_vars";
#line 393
$memory_7 = c_rt_lib::get_ref_hash($memory_6, $memory_7);
#line 393
hash::set_value($memory_7, $memory_3, $memory_4);
#line 393
$memory_8 = "code_vars";
#line 393
c_rt_lib::set_ref_hash($memory_6, $memory_8, $memory_7);
#line 393
$memory_8 = "top";
#line 393
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_6);
#line 393
undef($memory_8);
#line 393
undef($memory_6);
#line 393
undef($memory_7);
#line 394
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 394
goto label_5;
#line 394
label_3:
#line 394
undef($memory_2);
#line 394
undef($memory_3);
#line 394
undef($memory_4);
#line 394
undef($memory_5);
#line 394
undef($memory_1);
#line 394
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter_priv::step($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 398
$memory_1 = interpreter::has_next_instruction($memory_0);
#line 398
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 398
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 398
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 398
$memory_2 = [];
#line 398
die(dfile::ssave($memory_2));
#line 398
goto label_2;
#line 398
label_2:
#line 398
undef($memory_1);
#line 398
undef($memory_2);
#line 399
$memory_1 = interpreter_priv::get_command($memory_0);
#line 400
$memory_2 = $memory_1->{'cmd'};
#line 401
$memory_3 = "top";
#line 401
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 401
$memory_4 = "next";
#line 401
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 401
$memory_5 = 1;
#line 401
$memory_4 = $memory_4 + $memory_5;
#line 401
$memory_6 = "next";
#line 401
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 401
$memory_6 = "top";
#line 401
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_3);
#line 401
undef($memory_6);
#line 401
undef($memory_3);
#line 401
undef($memory_4);
#line 401
undef($memory_5);
#line 402
$memory_3 = interpreter_priv::check_command($memory_0, $memory_2);
#line 402
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 402
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 402
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 403
$memory_4 = "incorrect command";
#line 403
$memory_4 = c_rt_lib::ov_mk_arg('error', $memory_4);
#line 403
$memory_5 = $memory_4;
#line 403
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_5;
#line 403
undef($memory_4);
#line 403
undef($memory_5);
#line 404
undef($memory_1);
#line 404
undef($memory_2);
#line 404
undef($memory_3);
#line 404
$_[0] = $memory_0;return;
#line 405
goto label_4;
#line 405
label_4:
#line 405
undef($memory_3);
#line 406
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr_decl');
#line 406
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 410
$memory_3 = c_rt_lib::ov_is($memory_2, 'hash_decl');
#line 410
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 417
$memory_3 = c_rt_lib::ov_is($memory_2, 'call');
#line 417
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 433
$memory_3 = c_rt_lib::ov_is($memory_2, 'func');
#line 433
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 435
$memory_3 = c_rt_lib::ov_is($memory_2, 'una_op');
#line 435
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 439
$memory_3 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 439
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 444
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_is');
#line 444
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 446
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_as');
#line 446
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 448
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 448
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 450
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 450
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 453
$memory_3 = c_rt_lib::ov_is($memory_2, 'move');
#line 453
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 455
$memory_3 = c_rt_lib::ov_is($memory_2, 'load_const');
#line 455
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 457
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_frm_idx');
#line 457
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 461
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_at_idx');
#line 461
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 467
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_val');
#line 467
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 470
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_val');
#line 470
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 475
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_mk');
#line 475
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 483
$memory_3 = c_rt_lib::ov_is($memory_2, 'prt_lbl');
#line 483
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 484
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_goto');
#line 484
if (c_rt_lib::check_true($memory_3)) {goto label_24;}
#line 486
$memory_3 = c_rt_lib::ov_is($memory_2, 'goto');
#line 486
if (c_rt_lib::check_true($memory_3)) {goto label_25;}
#line 488
$memory_3 = c_rt_lib::ov_is($memory_2, 'clear');
#line 488
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 488
$memory_3 = "NOMATCHALERT";
#line 488
$memory_3 = [$memory_3,$memory_2];
#line 488
die(dfile::ssave($memory_3));
#line 406
label_6:
#line 406
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr_decl');
#line 407
$memory_5 = [];
#line 408
$memory_6 = $memory_4->{'src'};
#line 408
$memory_8 = 0;
#line 408
$memory_9 = 1;
#line 408
$memory_10 = c_rt_lib::array_len($memory_6);
#line 408
label_29:
#line 408
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 408
if (c_rt_lib::check_true($memory_11)) {goto label_27;}
#line 408
$memory_7 = $memory_6->[$memory_8];
#line 408
$memory_12 = $memory_0->{'top'};
#line 408
$memory_12 = $memory_12->{'vars'};
#line 408
$memory_12 = $memory_12->[$memory_7];
#line 408
array::push($memory_5, $memory_12);
#line 408
undef($memory_12);
#line 408
$memory_8 = $memory_8 + $memory_9;
#line 408
goto label_29;
#line 408
label_27:
#line 408
undef($memory_6);
#line 408
undef($memory_7);
#line 408
undef($memory_8);
#line 408
undef($memory_9);
#line 408
undef($memory_10);
#line 408
undef($memory_11);
#line 409
$memory_6 = $memory_4->{'dest'};
#line 409
$memory_7 = "";
#line 409
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 409
undef($memory_7);
#line 409
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 409
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 409
if (c_rt_lib::check_true($memory_6)) {goto label_31;}
#line 409
$memory_7 = "top";
#line 409
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 409
$memory_8 = "vars";
#line 409
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 409
$memory_10 = $memory_4->{'dest'};
#line 409
$memory_9 = $memory_5;
#line 409
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 409
$memory_11 = "vars";
#line 409
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 409
$memory_11 = "top";
#line 409
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 409
undef($memory_11);
#line 409
undef($memory_7);
#line 409
undef($memory_8);
#line 409
undef($memory_9);
#line 409
undef($memory_10);
#line 409
goto label_31;
#line 409
label_31:
#line 409
undef($memory_6);
#line 409
undef($memory_5);
#line 409
undef($memory_4);
#line 410
goto label_5;
#line 410
label_7:
#line 410
$memory_4 = c_rt_lib::ov_as($memory_2, 'hash_decl');
#line 411
$memory_5 = {};
#line 412
$memory_6 = $memory_4->{'src'};
#line 412
$memory_8 = 0;
#line 412
$memory_9 = 1;
#line 412
$memory_10 = c_rt_lib::array_len($memory_6);
#line 412
label_34:
#line 412
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 412
if (c_rt_lib::check_true($memory_11)) {goto label_32;}
#line 412
$memory_7 = $memory_6->[$memory_8];
#line 413
$memory_12 = $memory_0->{'top'};
#line 413
$memory_12 = $memory_12->{'vars'};
#line 413
$memory_13 = $memory_7->{'val'};
#line 413
$memory_12 = $memory_12->[$memory_13];
#line 413
undef($memory_13);
#line 414
$memory_13 = $memory_7->{'key'};
#line 414
hash::set_value($memory_5, $memory_13, $memory_12);
#line 414
undef($memory_13);
#line 414
undef($memory_12);
#line 415
$memory_8 = $memory_8 + $memory_9;
#line 415
goto label_34;
#line 415
label_32:
#line 415
undef($memory_6);
#line 415
undef($memory_7);
#line 415
undef($memory_8);
#line 415
undef($memory_9);
#line 415
undef($memory_10);
#line 415
undef($memory_11);
#line 416
$memory_6 = $memory_4->{'dest'};
#line 416
$memory_7 = "";
#line 416
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 416
undef($memory_7);
#line 416
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 416
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 416
if (c_rt_lib::check_true($memory_6)) {goto label_36;}
#line 416
$memory_7 = "top";
#line 416
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 416
$memory_8 = "vars";
#line 416
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 416
$memory_10 = $memory_4->{'dest'};
#line 416
$memory_9 = $memory_5;
#line 416
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 416
$memory_11 = "vars";
#line 416
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 416
$memory_11 = "top";
#line 416
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 416
undef($memory_11);
#line 416
undef($memory_7);
#line 416
undef($memory_8);
#line 416
undef($memory_9);
#line 416
undef($memory_10);
#line 416
goto label_36;
#line 416
label_36:
#line 416
undef($memory_6);
#line 416
undef($memory_5);
#line 416
undef($memory_4);
#line 417
goto label_5;
#line 417
label_8:
#line 417
$memory_4 = c_rt_lib::ov_as($memory_2, 'call');
#line 419
$memory_6 = $memory_4->{'mod'};
#line 419
$memory_7 = "";
#line 419
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 419
undef($memory_7);
#line 419
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 419
if (c_rt_lib::check_true($memory_6)) {goto label_38;}
#line 420
$memory_7 = $memory_0->{'top'};
#line 420
$memory_7 = $memory_7->{'module_name'};
#line 420
$memory_8 = "::priv::";
#line 420
$memory_7 = $memory_7 . $memory_8;
#line 420
undef($memory_8);
#line 420
$memory_8 = $memory_4->{'fun_name'};
#line 420
$memory_7 = $memory_7 . $memory_8;
#line 420
undef($memory_8);
#line 420
$memory_5 = $memory_7;
#line 420
undef($memory_7);
#line 421
goto label_37;
#line 421
label_38:
#line 422
$memory_7 = $memory_4->{'mod'};
#line 422
$memory_8 = "::";
#line 422
$memory_7 = $memory_7 . $memory_8;
#line 422
undef($memory_8);
#line 422
$memory_8 = $memory_4->{'fun_name'};
#line 422
$memory_7 = $memory_7 . $memory_8;
#line 422
undef($memory_8);
#line 422
$memory_5 = $memory_7;
#line 422
undef($memory_7);
#line 423
goto label_37;
#line 423
label_37:
#line 423
undef($memory_6);
#line 424
$memory_7 = $memory_0->{'compiler_functions'};
#line 424
$memory_6 = hash::has_key($memory_7, $memory_5);
#line 424
undef($memory_7);
#line 424
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 424
if (c_rt_lib::check_true($memory_6)) {goto label_40;}
#line 425
interpreter_priv::handle_compiler_call($memory_4, $memory_5, $memory_0);
#line 426
goto label_39;
#line 426
label_40:
#line 426
$memory_7 = $memory_0->{'known_exec_func'};
#line 426
$memory_6 = hash::has_key($memory_7, $memory_5);
#line 426
undef($memory_7);
#line 426
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 426
if (c_rt_lib::check_true($memory_6)) {goto label_41;}
#line 427
interpreter_priv::handle_extern_call($memory_4, $memory_0);
#line 428
goto label_39;
#line 428
label_41:
#line 428
$memory_7 = $memory_0->{'functions'};
#line 428
$memory_6 = hash::has_key($memory_7, $memory_5);
#line 428
undef($memory_7);
#line 428
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 428
if (c_rt_lib::check_true($memory_6)) {goto label_42;}
#line 429
interpreter_priv::handle_normal_call($memory_4, $memory_5, $memory_0);
#line 430
goto label_39;
#line 430
label_42:
#line 431
interpreter_priv::handle_unknown_call($memory_4, $memory_0);
#line 432
goto label_39;
#line 432
label_39:
#line 432
undef($memory_6);
#line 432
undef($memory_5);
#line 432
undef($memory_4);
#line 433
goto label_5;
#line 433
label_9:
#line 433
$memory_4 = c_rt_lib::ov_as($memory_2, 'func');
#line 434
$memory_5 = $memory_4->{'dest'};
#line 434
$memory_6 = "";
#line 434
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 434
undef($memory_6);
#line 434
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 434
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 434
if (c_rt_lib::check_true($memory_5)) {goto label_44;}
#line 434
$memory_7 = $memory_4->{'module'};
#line 434
$memory_8 = $memory_4->{'name'};
#line 434
$memory_6 = {module => $memory_7,name => $memory_8,};
#line 434
undef($memory_7);
#line 434
undef($memory_8);
#line 434
$memory_7 = "top";
#line 434
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 434
$memory_8 = "vars";
#line 434
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 434
$memory_10 = $memory_4->{'dest'};
#line 434
$memory_9 = $memory_6;
#line 434
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 434
$memory_11 = "vars";
#line 434
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 434
$memory_11 = "top";
#line 434
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 434
undef($memory_11);
#line 434
undef($memory_6);
#line 434
undef($memory_7);
#line 434
undef($memory_8);
#line 434
undef($memory_9);
#line 434
undef($memory_10);
#line 434
goto label_44;
#line 434
label_44:
#line 434
undef($memory_5);
#line 434
undef($memory_4);
#line 435
goto label_5;
#line 435
label_10:
#line 435
$memory_4 = c_rt_lib::ov_as($memory_2, 'una_op');
#line 436
$memory_5 = $memory_0->{'top'};
#line 436
$memory_5 = $memory_5->{'vars'};
#line 436
$memory_6 = $memory_4->{'src'};
#line 436
$memory_5 = $memory_5->[$memory_6];
#line 436
undef($memory_6);
#line 437
$memory_7 = $memory_4->{'op'};
#line 437
$memory_6 = interpreter_priv::execute_una_op($memory_5, $memory_7);
#line 437
undef($memory_7);
#line 438
$memory_7 = $memory_4->{'dest'};
#line 438
$memory_8 = "";
#line 438
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 438
undef($memory_8);
#line 438
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 438
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 438
if (c_rt_lib::check_true($memory_7)) {goto label_46;}
#line 438
$memory_8 = "top";
#line 438
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 438
$memory_9 = "vars";
#line 438
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 438
$memory_11 = $memory_4->{'dest'};
#line 438
$memory_10 = $memory_6;
#line 438
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_11] = $memory_10;
#line 438
$memory_12 = "vars";
#line 438
c_rt_lib::set_ref_hash($memory_8, $memory_12, $memory_9);
#line 438
$memory_12 = "top";
#line 438
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_8);
#line 438
undef($memory_12);
#line 438
undef($memory_8);
#line 438
undef($memory_9);
#line 438
undef($memory_10);
#line 438
undef($memory_11);
#line 438
goto label_46;
#line 438
label_46:
#line 438
undef($memory_7);
#line 438
undef($memory_5);
#line 438
undef($memory_6);
#line 438
undef($memory_4);
#line 439
goto label_5;
#line 439
label_11:
#line 439
$memory_4 = c_rt_lib::ov_as($memory_2, 'bin_op');
#line 440
$memory_5 = $memory_0->{'top'};
#line 440
$memory_5 = $memory_5->{'vars'};
#line 440
$memory_6 = $memory_4->{'left'};
#line 440
$memory_5 = $memory_5->[$memory_6];
#line 440
undef($memory_6);
#line 441
$memory_6 = $memory_0->{'top'};
#line 441
$memory_6 = $memory_6->{'vars'};
#line 441
$memory_7 = $memory_4->{'right'};
#line 441
$memory_6 = $memory_6->[$memory_7];
#line 441
undef($memory_7);
#line 442
$memory_8 = $memory_4->{'op'};
#line 442
$memory_7 = interpreter_priv::execute_bin_op($memory_5, $memory_6, $memory_8);
#line 442
undef($memory_8);
#line 443
$memory_8 = $memory_4->{'dest'};
#line 443
$memory_9 = "";
#line 443
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 443
undef($memory_9);
#line 443
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 443
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 443
if (c_rt_lib::check_true($memory_8)) {goto label_48;}
#line 443
$memory_9 = "top";
#line 443
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 443
$memory_10 = "vars";
#line 443
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 443
$memory_12 = $memory_4->{'dest'};
#line 443
$memory_11 = $memory_7;
#line 443
 if (c_rt_lib::get_arrcount($memory_10) > 1) {$memory_10 = [@{$memory_10}];}$memory_10->[$memory_12] = $memory_11;
#line 443
$memory_13 = "vars";
#line 443
c_rt_lib::set_ref_hash($memory_9, $memory_13, $memory_10);
#line 443
$memory_13 = "top";
#line 443
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_9);
#line 443
undef($memory_13);
#line 443
undef($memory_9);
#line 443
undef($memory_10);
#line 443
undef($memory_11);
#line 443
undef($memory_12);
#line 443
goto label_48;
#line 443
label_48:
#line 443
undef($memory_8);
#line 443
undef($memory_5);
#line 443
undef($memory_6);
#line 443
undef($memory_7);
#line 443
undef($memory_4);
#line 444
goto label_5;
#line 444
label_12:
#line 444
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_is');
#line 445
$memory_5 = $memory_4->{'dest'};
#line 445
$memory_6 = "";
#line 445
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 445
undef($memory_6);
#line 445
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 445
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 445
if (c_rt_lib::check_true($memory_5)) {goto label_50;}
#line 445
$memory_7 = $memory_0->{'top'};
#line 445
$memory_7 = $memory_7->{'vars'};
#line 445
$memory_8 = $memory_4->{'src'};
#line 445
$memory_7 = $memory_7->[$memory_8];
#line 445
undef($memory_8);
#line 445
$memory_8 = $memory_4->{'type'};
#line 445
$memory_6 = ov::is($memory_7, $memory_8);
#line 445
undef($memory_8);
#line 445
undef($memory_7);
#line 445
$memory_7 = "top";
#line 445
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 445
$memory_8 = "vars";
#line 445
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 445
$memory_10 = $memory_4->{'dest'};
#line 445
$memory_9 = $memory_6;
#line 445
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 445
$memory_11 = "vars";
#line 445
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 445
$memory_11 = "top";
#line 445
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 445
undef($memory_11);
#line 445
undef($memory_6);
#line 445
undef($memory_7);
#line 445
undef($memory_8);
#line 445
undef($memory_9);
#line 445
undef($memory_10);
#line 445
goto label_50;
#line 445
label_50:
#line 445
undef($memory_5);
#line 445
undef($memory_4);
#line 446
goto label_5;
#line 446
label_13:
#line 446
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_as');
#line 447
$memory_5 = $memory_4->{'dest'};
#line 447
$memory_6 = "";
#line 447
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 447
undef($memory_6);
#line 447
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 447
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 447
if (c_rt_lib::check_true($memory_5)) {goto label_52;}
#line 447
$memory_7 = $memory_0->{'top'};
#line 447
$memory_7 = $memory_7->{'vars'};
#line 447
$memory_8 = $memory_4->{'src'};
#line 447
$memory_7 = $memory_7->[$memory_8];
#line 447
undef($memory_8);
#line 447
$memory_8 = $memory_4->{'type'};
#line 447
$memory_6 = ov::as($memory_7, $memory_8);
#line 447
undef($memory_8);
#line 447
undef($memory_7);
#line 447
$memory_7 = "top";
#line 447
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 447
$memory_8 = "vars";
#line 447
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 447
$memory_10 = $memory_4->{'dest'};
#line 447
$memory_9 = $memory_6;
#line 447
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 447
$memory_11 = "vars";
#line 447
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 447
$memory_11 = "top";
#line 447
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 447
undef($memory_11);
#line 447
undef($memory_6);
#line 447
undef($memory_7);
#line 447
undef($memory_8);
#line 447
undef($memory_9);
#line 447
undef($memory_10);
#line 447
goto label_52;
#line 447
label_52:
#line 447
undef($memory_5);
#line 447
undef($memory_4);
#line 448
goto label_5;
#line 448
label_14:
#line 448
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 449
interpreter_priv::handle_return($memory_4, $memory_0);
#line 449
undef($memory_4);
#line 450
goto label_5;
#line 450
label_15:
#line 450
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 451
$memory_5 = "die";
#line 451
$memory_7 = $memory_0->{'top'};
#line 451
$memory_7 = $memory_7->{'vars'};
#line 451
$memory_7 = $memory_7->[$memory_4];
#line 451
$memory_6 = dfile::ssave($memory_7);
#line 451
undef($memory_7);
#line 451
$memory_5 = $memory_5 . $memory_6;
#line 451
undef($memory_6);
#line 451
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
#line 451
$memory_6 = $memory_5;
#line 451
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'rstate'} = $memory_6;
#line 451
undef($memory_5);
#line 451
undef($memory_6);
#line 452
$memory_5 = "top";
#line 452
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 452
$memory_6 = "next";
#line 452
$memory_6 = c_rt_lib::get_ref_hash($memory_5, $memory_6);
#line 452
$memory_7 = 1;
#line 452
$memory_6 = $memory_6 - $memory_7;
#line 452
$memory_8 = "next";
#line 452
c_rt_lib::set_ref_hash($memory_5, $memory_8, $memory_6);
#line 452
$memory_8 = "top";
#line 452
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_5);
#line 452
undef($memory_8);
#line 452
undef($memory_5);
#line 452
undef($memory_6);
#line 452
undef($memory_7);
#line 452
undef($memory_4);
#line 453
goto label_5;
#line 453
label_16:
#line 453
$memory_4 = c_rt_lib::ov_as($memory_2, 'move');
#line 454
$memory_5 = $memory_4->{'dest'};
#line 454
$memory_6 = "";
#line 454
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 454
undef($memory_6);
#line 454
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 454
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 454
if (c_rt_lib::check_true($memory_5)) {goto label_54;}
#line 454
$memory_6 = $memory_0->{'top'};
#line 454
$memory_6 = $memory_6->{'vars'};
#line 454
$memory_7 = $memory_4->{'src'};
#line 454
$memory_6 = $memory_6->[$memory_7];
#line 454
undef($memory_7);
#line 454
$memory_7 = "top";
#line 454
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 454
$memory_8 = "vars";
#line 454
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 454
$memory_10 = $memory_4->{'dest'};
#line 454
$memory_9 = $memory_6;
#line 454
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 454
$memory_11 = "vars";
#line 454
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 454
$memory_11 = "top";
#line 454
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 454
undef($memory_11);
#line 454
undef($memory_6);
#line 454
undef($memory_7);
#line 454
undef($memory_8);
#line 454
undef($memory_9);
#line 454
undef($memory_10);
#line 454
goto label_54;
#line 454
label_54:
#line 454
undef($memory_5);
#line 454
undef($memory_4);
#line 455
goto label_5;
#line 455
label_17:
#line 455
$memory_4 = c_rt_lib::ov_as($memory_2, 'load_const');
#line 456
$memory_5 = $memory_4->{'dest'};
#line 456
$memory_6 = "";
#line 456
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 456
undef($memory_6);
#line 456
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 456
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 456
if (c_rt_lib::check_true($memory_5)) {goto label_56;}
#line 456
$memory_6 = $memory_4->{'val'};
#line 456
$memory_7 = "top";
#line 456
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 456
$memory_8 = "vars";
#line 456
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 456
$memory_10 = $memory_4->{'dest'};
#line 456
$memory_9 = $memory_6;
#line 456
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 456
$memory_11 = "vars";
#line 456
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 456
$memory_11 = "top";
#line 456
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 456
undef($memory_11);
#line 456
undef($memory_6);
#line 456
undef($memory_7);
#line 456
undef($memory_8);
#line 456
undef($memory_9);
#line 456
undef($memory_10);
#line 456
goto label_56;
#line 456
label_56:
#line 456
undef($memory_5);
#line 456
undef($memory_4);
#line 457
goto label_5;
#line 457
label_18:
#line 457
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_frm_idx');
#line 458
$memory_5 = $memory_0->{'top'};
#line 458
$memory_5 = $memory_5->{'vars'};
#line 458
$memory_6 = $memory_4->{'src'};
#line 458
$memory_5 = $memory_5->[$memory_6];
#line 458
undef($memory_6);
#line 459
$memory_6 = $memory_0->{'top'};
#line 459
$memory_6 = $memory_6->{'vars'};
#line 459
$memory_7 = $memory_4->{'idx'};
#line 459
$memory_6 = $memory_6->[$memory_7];
#line 459
undef($memory_7);
#line 460
$memory_7 = $memory_4->{'dest'};
#line 460
$memory_8 = "";
#line 460
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 460
undef($memory_8);
#line 460
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 460
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 460
if (c_rt_lib::check_true($memory_7)) {goto label_58;}
#line 460
$memory_8 = $memory_5->[$memory_6];
#line 460
$memory_9 = "top";
#line 460
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 460
$memory_10 = "vars";
#line 460
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 460
$memory_12 = $memory_4->{'dest'};
#line 460
$memory_11 = $memory_8;
#line 460
 if (c_rt_lib::get_arrcount($memory_10) > 1) {$memory_10 = [@{$memory_10}];}$memory_10->[$memory_12] = $memory_11;
#line 460
$memory_13 = "vars";
#line 460
c_rt_lib::set_ref_hash($memory_9, $memory_13, $memory_10);
#line 460
$memory_13 = "top";
#line 460
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_9);
#line 460
undef($memory_13);
#line 460
undef($memory_8);
#line 460
undef($memory_9);
#line 460
undef($memory_10);
#line 460
undef($memory_11);
#line 460
undef($memory_12);
#line 460
goto label_58;
#line 460
label_58:
#line 460
undef($memory_7);
#line 460
undef($memory_5);
#line 460
undef($memory_6);
#line 460
undef($memory_4);
#line 461
goto label_5;
#line 461
label_19:
#line 461
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_at_idx');
#line 462
$memory_5 = $memory_0->{'top'};
#line 462
$memory_5 = $memory_5->{'vars'};
#line 462
$memory_6 = $memory_4->{'src'};
#line 462
$memory_5 = $memory_5->[$memory_6];
#line 462
undef($memory_6);
#line 463
$memory_6 = $memory_0->{'top'};
#line 463
$memory_6 = $memory_6->{'vars'};
#line 463
$memory_7 = $memory_4->{'idx'};
#line 463
$memory_6 = $memory_6->[$memory_7];
#line 463
undef($memory_7);
#line 464
$memory_7 = $memory_0->{'top'};
#line 464
$memory_7 = $memory_7->{'vars'};
#line 464
$memory_8 = $memory_4->{'val'};
#line 464
$memory_7 = $memory_7->[$memory_8];
#line 464
undef($memory_8);
#line 465
$memory_8 = $memory_7;
#line 465
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_6] = $memory_8;
#line 465
undef($memory_8);
#line 466
$memory_8 = "top";
#line 466
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 466
$memory_9 = "vars";
#line 466
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 466
$memory_11 = $memory_4->{'src'};
#line 466
$memory_10 = $memory_5;
#line 466
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_11] = $memory_10;
#line 466
$memory_12 = "vars";
#line 466
c_rt_lib::set_ref_hash($memory_8, $memory_12, $memory_9);
#line 466
$memory_12 = "top";
#line 466
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_8);
#line 466
undef($memory_12);
#line 466
undef($memory_8);
#line 466
undef($memory_9);
#line 466
undef($memory_10);
#line 466
undef($memory_11);
#line 466
undef($memory_5);
#line 466
undef($memory_6);
#line 466
undef($memory_7);
#line 466
undef($memory_4);
#line 467
goto label_5;
#line 467
label_20:
#line 467
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_val');
#line 468
$memory_6 = $memory_0->{'top'};
#line 468
$memory_6 = $memory_6->{'vars'};
#line 468
$memory_7 = $memory_4->{'src'};
#line 468
$memory_6 = $memory_6->[$memory_7];
#line 468
undef($memory_7);
#line 468
$memory_7 = $memory_4->{'key'};
#line 468
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 468
undef($memory_7);
#line 468
undef($memory_6);
#line 469
$memory_6 = $memory_4->{'dest'};
#line 469
$memory_7 = "";
#line 469
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 469
undef($memory_7);
#line 469
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 469
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 469
if (c_rt_lib::check_true($memory_6)) {goto label_60;}
#line 469
$memory_7 = "top";
#line 469
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 469
$memory_8 = "vars";
#line 469
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 469
$memory_10 = $memory_4->{'dest'};
#line 469
$memory_9 = $memory_5;
#line 469
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 469
$memory_11 = "vars";
#line 469
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 469
$memory_11 = "top";
#line 469
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 469
undef($memory_11);
#line 469
undef($memory_7);
#line 469
undef($memory_8);
#line 469
undef($memory_9);
#line 469
undef($memory_10);
#line 469
goto label_60;
#line 469
label_60:
#line 469
undef($memory_6);
#line 469
undef($memory_5);
#line 469
undef($memory_4);
#line 470
goto label_5;
#line 470
label_21:
#line 470
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_val');
#line 471
$memory_5 = $memory_0->{'top'};
#line 471
$memory_5 = $memory_5->{'vars'};
#line 471
$memory_6 = $memory_4->{'src'};
#line 471
$memory_5 = $memory_5->[$memory_6];
#line 471
undef($memory_6);
#line 472
$memory_6 = $memory_0->{'top'};
#line 472
$memory_6 = $memory_6->{'vars'};
#line 472
$memory_7 = $memory_4->{'val'};
#line 472
$memory_6 = $memory_6->[$memory_7];
#line 472
undef($memory_7);
#line 473
$memory_7 = $memory_4->{'key'};
#line 473
hash::set_value($memory_5, $memory_7, $memory_6);
#line 473
undef($memory_7);
#line 474
$memory_7 = "top";
#line 474
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 474
$memory_8 = "vars";
#line 474
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 474
$memory_10 = $memory_4->{'src'};
#line 474
$memory_9 = $memory_5;
#line 474
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 474
$memory_11 = "vars";
#line 474
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 474
$memory_11 = "top";
#line 474
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 474
undef($memory_11);
#line 474
undef($memory_7);
#line 474
undef($memory_8);
#line 474
undef($memory_9);
#line 474
undef($memory_10);
#line 474
undef($memory_5);
#line 474
undef($memory_6);
#line 474
undef($memory_4);
#line 475
goto label_5;
#line 475
label_22:
#line 475
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_mk');
#line 477
$memory_6 = $memory_4->{'src'};
#line 477
$memory_7 = c_rt_lib::ov_is($memory_6, 'arg');
#line 477
if (c_rt_lib::check_true($memory_7)) {goto label_62;}
#line 479
$memory_7 = c_rt_lib::ov_is($memory_6, 'emp');
#line 479
if (c_rt_lib::check_true($memory_7)) {goto label_63;}
#line 479
$memory_7 = "NOMATCHALERT";
#line 479
$memory_7 = [$memory_7,$memory_6];
#line 479
die(dfile::ssave($memory_7));
#line 477
label_62:
#line 477
$memory_8 = c_rt_lib::ov_as($memory_6, 'arg');
#line 478
$memory_10 = $memory_4->{'name'};
#line 478
$memory_11 = $memory_0->{'top'};
#line 478
$memory_11 = $memory_11->{'vars'};
#line 478
$memory_11 = $memory_11->[$memory_8];
#line 478
$memory_9 = ov::mk_val($memory_10, $memory_11);
#line 478
undef($memory_11);
#line 478
undef($memory_10);
#line 478
$memory_5 = $memory_9;
#line 478
undef($memory_9);
#line 478
undef($memory_8);
#line 479
goto label_61;
#line 479
label_63:
#line 480
$memory_9 = $memory_4->{'name'};
#line 480
$memory_8 = ov::mk($memory_9);
#line 480
undef($memory_9);
#line 480
$memory_5 = $memory_8;
#line 480
undef($memory_8);
#line 481
goto label_61;
#line 481
label_61:
#line 481
undef($memory_6);
#line 481
undef($memory_7);
#line 482
$memory_6 = $memory_4->{'dest'};
#line 482
$memory_7 = "";
#line 482
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 482
undef($memory_7);
#line 482
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 482
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 482
if (c_rt_lib::check_true($memory_6)) {goto label_65;}
#line 482
$memory_7 = "top";
#line 482
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 482
$memory_8 = "vars";
#line 482
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 482
$memory_10 = $memory_4->{'dest'};
#line 482
$memory_9 = $memory_5;
#line 482
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_10] = $memory_9;
#line 482
$memory_11 = "vars";
#line 482
c_rt_lib::set_ref_hash($memory_7, $memory_11, $memory_8);
#line 482
$memory_11 = "top";
#line 482
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 482
undef($memory_11);
#line 482
undef($memory_7);
#line 482
undef($memory_8);
#line 482
undef($memory_9);
#line 482
undef($memory_10);
#line 482
goto label_65;
#line 482
label_65:
#line 482
undef($memory_6);
#line 482
undef($memory_5);
#line 482
undef($memory_4);
#line 483
goto label_5;
#line 483
label_23:
#line 483
$memory_4 = c_rt_lib::ov_as($memory_2, 'prt_lbl');
#line 483
undef($memory_4);
#line 484
goto label_5;
#line 484
label_24:
#line 484
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_goto');
#line 485
$memory_5 = $memory_0->{'top'};
#line 485
$memory_5 = $memory_5->{'vars'};
#line 485
$memory_6 = $memory_4->{'src'};
#line 485
$memory_5 = $memory_5->[$memory_6];
#line 485
undef($memory_6);
#line 485
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 485
if (c_rt_lib::check_true($memory_5)) {goto label_67;}
#line 485
$memory_6 = $memory_4->{'dest'};
#line 485
interpreter_priv::goto($memory_0, $memory_6);
#line 485
undef($memory_6);
#line 485
goto label_67;
#line 485
label_67:
#line 485
undef($memory_5);
#line 485
undef($memory_4);
#line 486
goto label_5;
#line 486
label_25:
#line 486
$memory_4 = c_rt_lib::ov_as($memory_2, 'goto');
#line 487
interpreter_priv::goto($memory_0, $memory_4);
#line 487
undef($memory_4);
#line 488
goto label_5;
#line 488
label_26:
#line 488
$memory_4 = c_rt_lib::ov_as($memory_2, 'clear');
#line 489
$memory_5 = "";
#line 489
$memory_5 = c_rt_lib::to_nl($memory_4 ne $memory_5);
#line 489
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 489
if (c_rt_lib::check_true($memory_5)) {goto label_69;}
#line 490
$memory_6 = interpreter::get_none_variant();
#line 490
$memory_7 = "top";
#line 490
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 490
$memory_8 = "vars";
#line 490
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 490
$memory_9 = $memory_6;
#line 490
 if (c_rt_lib::get_arrcount($memory_8) > 1) {$memory_8 = [@{$memory_8}];}$memory_8->[$memory_4] = $memory_9;
#line 490
$memory_10 = "vars";
#line 490
c_rt_lib::set_ref_hash($memory_7, $memory_10, $memory_8);
#line 490
$memory_10 = "top";
#line 490
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_7);
#line 490
undef($memory_10);
#line 490
undef($memory_6);
#line 490
undef($memory_7);
#line 490
undef($memory_8);
#line 490
undef($memory_9);
#line 491
$memory_6 = $memory_0->{'top'};
#line 491
$memory_6 = $memory_6->{'code_vars'};
#line 491
$memory_9 = c_rt_lib::init_iter($memory_6);
#line 491
label_72:
#line 491
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 491
if (c_rt_lib::check_true($memory_7)) {goto label_70;}
#line 491
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 491
$memory_8 = c_rt_lib::hash_get_value($memory_6, $memory_7);
#line 492
$memory_10 = c_rt_lib::to_nl($memory_4 == $memory_8);
#line 492
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 492
if (c_rt_lib::check_true($memory_10)) {goto label_74;}
#line 493
$memory_11 = "top";
#line 493
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 493
$memory_12 = "code_vars";
#line 493
$memory_12 = c_rt_lib::get_ref_hash($memory_11, $memory_12);
#line 493
hash::delete($memory_12, $memory_7);
#line 493
$memory_13 = "code_vars";
#line 493
c_rt_lib::set_ref_hash($memory_11, $memory_13, $memory_12);
#line 493
$memory_13 = "top";
#line 493
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_11);
#line 493
undef($memory_13);
#line 493
undef($memory_11);
#line 493
undef($memory_12);
#line 494
undef($memory_10);
#line 494
goto label_70;
#line 495
goto label_74;
#line 495
label_74:
#line 495
undef($memory_10);
#line 496
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 496
goto label_72;
#line 496
label_70:
#line 496
undef($memory_6);
#line 496
undef($memory_7);
#line 496
undef($memory_8);
#line 496
undef($memory_9);
#line 497
goto label_69;
#line 497
label_69:
#line 497
undef($memory_5);
#line 497
undef($memory_4);
#line 498
goto label_5;
#line 498
label_5:
#line 498
undef($memory_3);
#line 499
interpreter_priv::handle_new_declarations($memory_0);
#line 499
undef($memory_1);
#line 499
undef($memory_2);
#line 499
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter_priv::check_command($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 503
$memory_2 = $memory_0->{'check_all_instructions'};
#line 503
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 503
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 503
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 503
$memory_3 = c_rt_lib::to_nl(1);
#line 503
undef($memory_0);
#line 503
undef($memory_1);
#line 503
undef($memory_2);
#line 503
return $memory_3;
#line 503
undef($memory_3);
#line 503
goto label_2;
#line 503
label_2:
#line 503
undef($memory_2);
#line 504
$memory_2 = c_rt_lib::ov_is($memory_1, 'arr_decl');
#line 504
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 505
$memory_2 = c_rt_lib::ov_is($memory_1, 'hash_decl');
#line 505
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 506
$memory_2 = c_rt_lib::ov_is($memory_1, 'call');
#line 506
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 507
$memory_2 = c_rt_lib::ov_is($memory_1, 'func');
#line 507
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 508
$memory_2 = c_rt_lib::ov_is($memory_1, 'una_op');
#line 508
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 516
$memory_2 = c_rt_lib::ov_is($memory_1, 'bin_op');
#line 516
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 521
$memory_2 = c_rt_lib::ov_is($memory_1, 'ov_is');
#line 521
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 524
$memory_2 = c_rt_lib::ov_is($memory_1, 'ov_as');
#line 524
if (c_rt_lib::check_true($memory_2)) {goto label_11;}
#line 529
$memory_2 = c_rt_lib::ov_is($memory_1, 'return');
#line 529
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 530
$memory_2 = c_rt_lib::ov_is($memory_1, 'die');
#line 530
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 531
$memory_2 = c_rt_lib::ov_is($memory_1, 'move');
#line 531
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 532
$memory_2 = c_rt_lib::ov_is($memory_1, 'load_const');
#line 532
if (c_rt_lib::check_true($memory_2)) {goto label_15;}
#line 533
$memory_2 = c_rt_lib::ov_is($memory_1, 'get_frm_idx');
#line 533
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 540
$memory_2 = c_rt_lib::ov_is($memory_1, 'set_at_idx');
#line 540
if (c_rt_lib::check_true($memory_2)) {goto label_17;}
#line 546
$memory_2 = c_rt_lib::ov_is($memory_1, 'get_val');
#line 546
if (c_rt_lib::check_true($memory_2)) {goto label_18;}
#line 551
$memory_2 = c_rt_lib::ov_is($memory_1, 'set_val');
#line 551
if (c_rt_lib::check_true($memory_2)) {goto label_19;}
#line 555
$memory_2 = c_rt_lib::ov_is($memory_1, 'ov_mk');
#line 555
if (c_rt_lib::check_true($memory_2)) {goto label_20;}
#line 557
$memory_2 = c_rt_lib::ov_is($memory_1, 'prt_lbl');
#line 557
if (c_rt_lib::check_true($memory_2)) {goto label_21;}
#line 558
$memory_2 = c_rt_lib::ov_is($memory_1, 'if_goto');
#line 558
if (c_rt_lib::check_true($memory_2)) {goto label_22;}
#line 562
$memory_2 = c_rt_lib::ov_is($memory_1, 'goto');
#line 562
if (c_rt_lib::check_true($memory_2)) {goto label_23;}
#line 563
$memory_2 = c_rt_lib::ov_is($memory_1, 'clear');
#line 563
if (c_rt_lib::check_true($memory_2)) {goto label_24;}
#line 563
$memory_2 = "NOMATCHALERT";
#line 563
$memory_2 = [$memory_2,$memory_1];
#line 563
die(dfile::ssave($memory_2));
#line 504
label_4:
#line 504
$memory_3 = c_rt_lib::ov_as($memory_1, 'arr_decl');
#line 504
undef($memory_3);
#line 505
goto label_3;
#line 505
label_5:
#line 505
$memory_3 = c_rt_lib::ov_as($memory_1, 'hash_decl');
#line 505
undef($memory_3);
#line 506
goto label_3;
#line 506
label_6:
#line 506
$memory_3 = c_rt_lib::ov_as($memory_1, 'call');
#line 506
undef($memory_3);
#line 507
goto label_3;
#line 507
label_7:
#line 507
$memory_3 = c_rt_lib::ov_as($memory_1, 'func');
#line 507
undef($memory_3);
#line 508
goto label_3;
#line 508
label_8:
#line 508
$memory_3 = c_rt_lib::ov_as($memory_1, 'una_op');
#line 509
$memory_4 = $memory_0->{'top'};
#line 509
$memory_4 = $memory_4->{'vars'};
#line 509
$memory_5 = $memory_3->{'src'};
#line 509
$memory_4 = $memory_4->[$memory_5];
#line 509
undef($memory_5);
#line 510
$memory_5 = $memory_3->{'op'};
#line 510
$memory_6 = "!";
#line 510
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 510
undef($memory_6);
#line 510
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 510
if (c_rt_lib::check_true($memory_5)) {goto label_26;}
#line 511
$memory_6 = nl::is_variant($memory_4);
#line 511
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 511
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 511
if (c_rt_lib::check_true($memory_6)) {goto label_28;}
#line 511
$memory_7 = c_rt_lib::to_nl(0);
#line 511
undef($memory_0);
#line 511
undef($memory_1);
#line 511
undef($memory_2);
#line 511
undef($memory_3);
#line 511
undef($memory_4);
#line 511
undef($memory_5);
#line 511
undef($memory_6);
#line 511
return $memory_7;
#line 511
undef($memory_7);
#line 511
goto label_28;
#line 511
label_28:
#line 511
undef($memory_6);
#line 512
$memory_6 = $memory_4;
#line 512
$memory_6 = c_rt_lib::ov_is($memory_6, 'TRUE');
#line 512
if (c_rt_lib::check_true($memory_6)) {goto label_31;}
#line 512
$memory_6 = $memory_4;
#line 512
$memory_6 = c_rt_lib::ov_is($memory_6, 'FALSE');
#line 512
label_31:
#line 512
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 512
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 512
if (c_rt_lib::check_true($memory_6)) {goto label_30;}
#line 512
$memory_7 = c_rt_lib::to_nl(0);
#line 512
undef($memory_0);
#line 512
undef($memory_1);
#line 512
undef($memory_2);
#line 512
undef($memory_3);
#line 512
undef($memory_4);
#line 512
undef($memory_5);
#line 512
undef($memory_6);
#line 512
return $memory_7;
#line 512
undef($memory_7);
#line 512
goto label_30;
#line 512
label_30:
#line 512
undef($memory_6);
#line 513
goto label_25;
#line 513
label_26:
#line 514
$memory_6 = nl::is_sim($memory_4);
#line 514
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 514
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 514
if (c_rt_lib::check_true($memory_6)) {goto label_33;}
#line 514
$memory_7 = c_rt_lib::to_nl(0);
#line 514
undef($memory_0);
#line 514
undef($memory_1);
#line 514
undef($memory_2);
#line 514
undef($memory_3);
#line 514
undef($memory_4);
#line 514
undef($memory_5);
#line 514
undef($memory_6);
#line 514
return $memory_7;
#line 514
undef($memory_7);
#line 514
goto label_33;
#line 514
label_33:
#line 514
undef($memory_6);
#line 515
goto label_25;
#line 515
label_25:
#line 515
undef($memory_5);
#line 515
undef($memory_4);
#line 515
undef($memory_3);
#line 516
goto label_3;
#line 516
label_9:
#line 516
$memory_3 = c_rt_lib::ov_as($memory_1, 'bin_op');
#line 517
$memory_4 = $memory_0->{'top'};
#line 517
$memory_4 = $memory_4->{'vars'};
#line 517
$memory_5 = $memory_3->{'left'};
#line 517
$memory_4 = $memory_4->[$memory_5];
#line 517
undef($memory_5);
#line 518
$memory_5 = $memory_0->{'top'};
#line 518
$memory_5 = $memory_5->{'vars'};
#line 518
$memory_6 = $memory_3->{'right'};
#line 518
$memory_5 = $memory_5->[$memory_6];
#line 518
undef($memory_6);
#line 519
$memory_6 = nl::is_sim($memory_4);
#line 519
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 519
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 519
if (c_rt_lib::check_true($memory_6)) {goto label_35;}
#line 519
$memory_7 = c_rt_lib::to_nl(0);
#line 519
undef($memory_0);
#line 519
undef($memory_1);
#line 519
undef($memory_2);
#line 519
undef($memory_3);
#line 519
undef($memory_4);
#line 519
undef($memory_5);
#line 519
undef($memory_6);
#line 519
return $memory_7;
#line 519
undef($memory_7);
#line 519
goto label_35;
#line 519
label_35:
#line 519
undef($memory_6);
#line 520
$memory_6 = nl::is_sim($memory_5);
#line 520
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 520
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 520
if (c_rt_lib::check_true($memory_6)) {goto label_37;}
#line 520
$memory_7 = c_rt_lib::to_nl(0);
#line 520
undef($memory_0);
#line 520
undef($memory_1);
#line 520
undef($memory_2);
#line 520
undef($memory_3);
#line 520
undef($memory_4);
#line 520
undef($memory_5);
#line 520
undef($memory_6);
#line 520
return $memory_7;
#line 520
undef($memory_7);
#line 520
goto label_37;
#line 520
label_37:
#line 520
undef($memory_6);
#line 520
undef($memory_4);
#line 520
undef($memory_5);
#line 520
undef($memory_3);
#line 521
goto label_3;
#line 521
label_10:
#line 521
$memory_3 = c_rt_lib::ov_as($memory_1, 'ov_is');
#line 522
$memory_5 = $memory_0->{'top'};
#line 522
$memory_5 = $memory_5->{'vars'};
#line 522
$memory_6 = $memory_3->{'src'};
#line 522
$memory_5 = $memory_5->[$memory_6];
#line 522
undef($memory_6);
#line 522
$memory_4 = nl::is_variant($memory_5);
#line 522
undef($memory_5);
#line 522
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 522
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 522
if (c_rt_lib::check_true($memory_4)) {goto label_39;}
#line 522
$memory_5 = c_rt_lib::to_nl(0);
#line 522
undef($memory_0);
#line 522
undef($memory_1);
#line 522
undef($memory_2);
#line 522
undef($memory_3);
#line 522
undef($memory_4);
#line 522
return $memory_5;
#line 522
undef($memory_5);
#line 522
goto label_39;
#line 522
label_39:
#line 522
undef($memory_4);
#line 523
$memory_5 = $memory_3->{'type'};
#line 523
$memory_4 = nl::is_sim($memory_5);
#line 523
undef($memory_5);
#line 523
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 523
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 523
if (c_rt_lib::check_true($memory_4)) {goto label_41;}
#line 523
$memory_5 = c_rt_lib::to_nl(0);
#line 523
undef($memory_0);
#line 523
undef($memory_1);
#line 523
undef($memory_2);
#line 523
undef($memory_3);
#line 523
undef($memory_4);
#line 523
return $memory_5;
#line 523
undef($memory_5);
#line 523
goto label_41;
#line 523
label_41:
#line 523
undef($memory_4);
#line 523
undef($memory_3);
#line 524
goto label_3;
#line 524
label_11:
#line 524
$memory_3 = c_rt_lib::ov_as($memory_1, 'ov_as');
#line 525
$memory_4 = $memory_0->{'top'};
#line 525
$memory_4 = $memory_4->{'vars'};
#line 525
$memory_5 = $memory_3->{'src'};
#line 525
$memory_4 = $memory_4->[$memory_5];
#line 525
undef($memory_5);
#line 526
$memory_5 = nl::is_variant($memory_4);
#line 526
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 526
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 526
if (c_rt_lib::check_true($memory_5)) {goto label_43;}
#line 526
$memory_6 = c_rt_lib::to_nl(0);
#line 526
undef($memory_0);
#line 526
undef($memory_1);
#line 526
undef($memory_2);
#line 526
undef($memory_3);
#line 526
undef($memory_4);
#line 526
undef($memory_5);
#line 526
return $memory_6;
#line 526
undef($memory_6);
#line 526
goto label_43;
#line 526
label_43:
#line 526
undef($memory_5);
#line 527
$memory_6 = $memory_3->{'type'};
#line 527
$memory_5 = nl::is_sim($memory_6);
#line 527
undef($memory_6);
#line 527
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 527
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 527
if (c_rt_lib::check_true($memory_5)) {goto label_45;}
#line 527
$memory_6 = c_rt_lib::to_nl(0);
#line 527
undef($memory_0);
#line 527
undef($memory_1);
#line 527
undef($memory_2);
#line 527
undef($memory_3);
#line 527
undef($memory_4);
#line 527
undef($memory_5);
#line 527
return $memory_6;
#line 527
undef($memory_6);
#line 527
goto label_45;
#line 527
label_45:
#line 527
undef($memory_5);
#line 528
$memory_6 = $memory_3->{'type'};
#line 528
$memory_5 = ov::is($memory_4, $memory_6);
#line 528
undef($memory_6);
#line 528
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 528
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 528
if (c_rt_lib::check_true($memory_5)) {goto label_47;}
#line 528
$memory_6 = c_rt_lib::to_nl(0);
#line 528
undef($memory_0);
#line 528
undef($memory_1);
#line 528
undef($memory_2);
#line 528
undef($memory_3);
#line 528
undef($memory_4);
#line 528
undef($memory_5);
#line 528
return $memory_6;
#line 528
undef($memory_6);
#line 528
goto label_47;
#line 528
label_47:
#line 528
undef($memory_5);
#line 528
undef($memory_4);
#line 528
undef($memory_3);
#line 529
goto label_3;
#line 529
label_12:
#line 529
$memory_3 = c_rt_lib::ov_as($memory_1, 'return');
#line 529
undef($memory_3);
#line 530
goto label_3;
#line 530
label_13:
#line 530
$memory_3 = c_rt_lib::ov_as($memory_1, 'die');
#line 530
undef($memory_3);
#line 531
goto label_3;
#line 531
label_14:
#line 531
$memory_3 = c_rt_lib::ov_as($memory_1, 'move');
#line 531
undef($memory_3);
#line 532
goto label_3;
#line 532
label_15:
#line 532
$memory_3 = c_rt_lib::ov_as($memory_1, 'load_const');
#line 532
undef($memory_3);
#line 533
goto label_3;
#line 533
label_16:
#line 533
$memory_3 = c_rt_lib::ov_as($memory_1, 'get_frm_idx');
#line 534
$memory_4 = $memory_0->{'top'};
#line 534
$memory_4 = $memory_4->{'vars'};
#line 534
$memory_5 = $memory_3->{'src'};
#line 534
$memory_4 = $memory_4->[$memory_5];
#line 534
undef($memory_5);
#line 535
$memory_5 = nl::is_array($memory_4);
#line 535
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 535
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 535
if (c_rt_lib::check_true($memory_5)) {goto label_49;}
#line 535
$memory_6 = c_rt_lib::to_nl(0);
#line 535
undef($memory_0);
#line 535
undef($memory_1);
#line 535
undef($memory_2);
#line 535
undef($memory_3);
#line 535
undef($memory_4);
#line 535
undef($memory_5);
#line 535
return $memory_6;
#line 535
undef($memory_6);
#line 535
goto label_49;
#line 535
label_49:
#line 535
undef($memory_5);
#line 536
$memory_5 = $memory_0->{'top'};
#line 536
$memory_5 = $memory_5->{'vars'};
#line 536
$memory_6 = $memory_3->{'idx'};
#line 536
$memory_5 = $memory_5->[$memory_6];
#line 536
undef($memory_6);
#line 537
$memory_6 = nl::is_sim($memory_5);
#line 537
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 537
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 537
if (c_rt_lib::check_true($memory_6)) {goto label_51;}
#line 537
$memory_7 = c_rt_lib::to_nl(0);
#line 537
undef($memory_0);
#line 537
undef($memory_1);
#line 537
undef($memory_2);
#line 537
undef($memory_3);
#line 537
undef($memory_4);
#line 537
undef($memory_5);
#line 537
undef($memory_6);
#line 537
return $memory_7;
#line 537
undef($memory_7);
#line 537
goto label_51;
#line 537
label_51:
#line 537
undef($memory_6);
#line 538
$memory_6 = array::len($memory_4);
#line 538
$memory_6 = c_rt_lib::to_nl($memory_5 < $memory_6);
#line 538
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 538
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 538
if (c_rt_lib::check_true($memory_6)) {goto label_53;}
#line 538
$memory_7 = c_rt_lib::to_nl(0);
#line 538
undef($memory_0);
#line 538
undef($memory_1);
#line 538
undef($memory_2);
#line 538
undef($memory_3);
#line 538
undef($memory_4);
#line 538
undef($memory_5);
#line 538
undef($memory_6);
#line 538
return $memory_7;
#line 538
undef($memory_7);
#line 538
goto label_53;
#line 538
label_53:
#line 538
undef($memory_6);
#line 539
$memory_6 = 0;
#line 539
$memory_6 = c_rt_lib::to_nl($memory_5 >= $memory_6);
#line 539
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 539
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 539
if (c_rt_lib::check_true($memory_6)) {goto label_55;}
#line 539
$memory_7 = c_rt_lib::to_nl(0);
#line 539
undef($memory_0);
#line 539
undef($memory_1);
#line 539
undef($memory_2);
#line 539
undef($memory_3);
#line 539
undef($memory_4);
#line 539
undef($memory_5);
#line 539
undef($memory_6);
#line 539
return $memory_7;
#line 539
undef($memory_7);
#line 539
goto label_55;
#line 539
label_55:
#line 539
undef($memory_6);
#line 539
undef($memory_4);
#line 539
undef($memory_5);
#line 539
undef($memory_3);
#line 540
goto label_3;
#line 540
label_17:
#line 540
$memory_3 = c_rt_lib::ov_as($memory_1, 'set_at_idx');
#line 541
$memory_4 = $memory_0->{'top'};
#line 541
$memory_4 = $memory_4->{'vars'};
#line 541
$memory_5 = $memory_3->{'src'};
#line 541
$memory_4 = $memory_4->[$memory_5];
#line 541
undef($memory_5);
#line 542
$memory_5 = nl::is_array($memory_4);
#line 542
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 542
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 542
if (c_rt_lib::check_true($memory_5)) {goto label_57;}
#line 542
$memory_6 = c_rt_lib::to_nl(0);
#line 542
undef($memory_0);
#line 542
undef($memory_1);
#line 542
undef($memory_2);
#line 542
undef($memory_3);
#line 542
undef($memory_4);
#line 542
undef($memory_5);
#line 542
return $memory_6;
#line 542
undef($memory_6);
#line 542
goto label_57;
#line 542
label_57:
#line 542
undef($memory_5);
#line 543
$memory_5 = $memory_0->{'top'};
#line 543
$memory_5 = $memory_5->{'vars'};
#line 543
$memory_6 = $memory_3->{'idx'};
#line 543
$memory_5 = $memory_5->[$memory_6];
#line 543
undef($memory_6);
#line 544
$memory_6 = nl::is_sim($memory_5);
#line 544
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 544
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 544
if (c_rt_lib::check_true($memory_6)) {goto label_59;}
#line 544
$memory_7 = c_rt_lib::to_nl(0);
#line 544
undef($memory_0);
#line 544
undef($memory_1);
#line 544
undef($memory_2);
#line 544
undef($memory_3);
#line 544
undef($memory_4);
#line 544
undef($memory_5);
#line 544
undef($memory_6);
#line 544
return $memory_7;
#line 544
undef($memory_7);
#line 544
goto label_59;
#line 544
label_59:
#line 544
undef($memory_6);
#line 545
$memory_6 = array::len($memory_4);
#line 545
$memory_6 = c_rt_lib::to_nl($memory_5 < $memory_6);
#line 545
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 545
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 545
if (c_rt_lib::check_true($memory_6)) {goto label_61;}
#line 545
$memory_7 = c_rt_lib::to_nl(0);
#line 545
undef($memory_0);
#line 545
undef($memory_1);
#line 545
undef($memory_2);
#line 545
undef($memory_3);
#line 545
undef($memory_4);
#line 545
undef($memory_5);
#line 545
undef($memory_6);
#line 545
return $memory_7;
#line 545
undef($memory_7);
#line 545
goto label_61;
#line 545
label_61:
#line 545
undef($memory_6);
#line 545
undef($memory_4);
#line 545
undef($memory_5);
#line 545
undef($memory_3);
#line 546
goto label_3;
#line 546
label_18:
#line 546
$memory_3 = c_rt_lib::ov_as($memory_1, 'get_val');
#line 547
$memory_4 = $memory_0->{'top'};
#line 547
$memory_4 = $memory_4->{'vars'};
#line 547
$memory_5 = $memory_3->{'src'};
#line 547
$memory_4 = $memory_4->[$memory_5];
#line 547
undef($memory_5);
#line 548
$memory_5 = nl::is_hash($memory_4);
#line 548
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 548
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 548
if (c_rt_lib::check_true($memory_5)) {goto label_63;}
#line 548
$memory_6 = c_rt_lib::to_nl(0);
#line 548
undef($memory_0);
#line 548
undef($memory_1);
#line 548
undef($memory_2);
#line 548
undef($memory_3);
#line 548
undef($memory_4);
#line 548
undef($memory_5);
#line 548
return $memory_6;
#line 548
undef($memory_6);
#line 548
goto label_63;
#line 548
label_63:
#line 548
undef($memory_5);
#line 549
$memory_6 = $memory_3->{'key'};
#line 549
$memory_5 = nl::is_sim($memory_6);
#line 549
undef($memory_6);
#line 549
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 549
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 549
if (c_rt_lib::check_true($memory_5)) {goto label_65;}
#line 549
$memory_6 = c_rt_lib::to_nl(0);
#line 549
undef($memory_0);
#line 549
undef($memory_1);
#line 549
undef($memory_2);
#line 549
undef($memory_3);
#line 549
undef($memory_4);
#line 549
undef($memory_5);
#line 549
return $memory_6;
#line 549
undef($memory_6);
#line 549
goto label_65;
#line 549
label_65:
#line 549
undef($memory_5);
#line 550
$memory_6 = $memory_3->{'key'};
#line 550
$memory_5 = hash::has_key($memory_4, $memory_6);
#line 550
undef($memory_6);
#line 550
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 550
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 550
if (c_rt_lib::check_true($memory_5)) {goto label_67;}
#line 550
$memory_6 = c_rt_lib::to_nl(0);
#line 550
undef($memory_0);
#line 550
undef($memory_1);
#line 550
undef($memory_2);
#line 550
undef($memory_3);
#line 550
undef($memory_4);
#line 550
undef($memory_5);
#line 550
return $memory_6;
#line 550
undef($memory_6);
#line 550
goto label_67;
#line 550
label_67:
#line 550
undef($memory_5);
#line 550
undef($memory_4);
#line 550
undef($memory_3);
#line 551
goto label_3;
#line 551
label_19:
#line 551
$memory_3 = c_rt_lib::ov_as($memory_1, 'set_val');
#line 552
$memory_4 = $memory_0->{'top'};
#line 552
$memory_4 = $memory_4->{'vars'};
#line 552
$memory_5 = $memory_3->{'src'};
#line 552
$memory_4 = $memory_4->[$memory_5];
#line 552
undef($memory_5);
#line 553
$memory_5 = nl::is_hash($memory_4);
#line 553
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 553
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 553
if (c_rt_lib::check_true($memory_5)) {goto label_69;}
#line 553
$memory_6 = c_rt_lib::to_nl(0);
#line 553
undef($memory_0);
#line 553
undef($memory_1);
#line 553
undef($memory_2);
#line 553
undef($memory_3);
#line 553
undef($memory_4);
#line 553
undef($memory_5);
#line 553
return $memory_6;
#line 553
undef($memory_6);
#line 553
goto label_69;
#line 553
label_69:
#line 553
undef($memory_5);
#line 554
$memory_6 = $memory_3->{'key'};
#line 554
$memory_5 = nl::is_sim($memory_6);
#line 554
undef($memory_6);
#line 554
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 554
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 554
if (c_rt_lib::check_true($memory_5)) {goto label_71;}
#line 554
$memory_6 = c_rt_lib::to_nl(0);
#line 554
undef($memory_0);
#line 554
undef($memory_1);
#line 554
undef($memory_2);
#line 554
undef($memory_3);
#line 554
undef($memory_4);
#line 554
undef($memory_5);
#line 554
return $memory_6;
#line 554
undef($memory_6);
#line 554
goto label_71;
#line 554
label_71:
#line 554
undef($memory_5);
#line 554
undef($memory_4);
#line 554
undef($memory_3);
#line 555
goto label_3;
#line 555
label_20:
#line 555
$memory_3 = c_rt_lib::ov_as($memory_1, 'ov_mk');
#line 556
$memory_5 = $memory_3->{'name'};
#line 556
$memory_4 = nl::is_sim($memory_5);
#line 556
undef($memory_5);
#line 556
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 556
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 556
if (c_rt_lib::check_true($memory_4)) {goto label_73;}
#line 556
$memory_5 = c_rt_lib::to_nl(0);
#line 556
undef($memory_0);
#line 556
undef($memory_1);
#line 556
undef($memory_2);
#line 556
undef($memory_3);
#line 556
undef($memory_4);
#line 556
return $memory_5;
#line 556
undef($memory_5);
#line 556
goto label_73;
#line 556
label_73:
#line 556
undef($memory_4);
#line 556
undef($memory_3);
#line 557
goto label_3;
#line 557
label_21:
#line 557
$memory_3 = c_rt_lib::ov_as($memory_1, 'prt_lbl');
#line 557
undef($memory_3);
#line 558
goto label_3;
#line 558
label_22:
#line 558
$memory_3 = c_rt_lib::ov_as($memory_1, 'if_goto');
#line 559
$memory_4 = $memory_0->{'top'};
#line 559
$memory_4 = $memory_4->{'vars'};
#line 559
$memory_5 = $memory_3->{'src'};
#line 559
$memory_4 = $memory_4->[$memory_5];
#line 559
undef($memory_5);
#line 560
$memory_5 = nl::is_variant($memory_4);
#line 560
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 560
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 560
if (c_rt_lib::check_true($memory_5)) {goto label_75;}
#line 560
$memory_6 = c_rt_lib::to_nl(0);
#line 560
undef($memory_0);
#line 560
undef($memory_1);
#line 560
undef($memory_2);
#line 560
undef($memory_3);
#line 560
undef($memory_4);
#line 560
undef($memory_5);
#line 560
return $memory_6;
#line 560
undef($memory_6);
#line 560
goto label_75;
#line 560
label_75:
#line 560
undef($memory_5);
#line 561
$memory_5 = $memory_4;
#line 561
$memory_5 = c_rt_lib::ov_is($memory_5, 'TRUE');
#line 561
if (c_rt_lib::check_true($memory_5)) {goto label_78;}
#line 561
$memory_5 = $memory_4;
#line 561
$memory_5 = c_rt_lib::ov_is($memory_5, 'FALSE');
#line 561
label_78:
#line 561
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 561
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 561
if (c_rt_lib::check_true($memory_5)) {goto label_77;}
#line 561
$memory_6 = c_rt_lib::to_nl(0);
#line 561
undef($memory_0);
#line 561
undef($memory_1);
#line 561
undef($memory_2);
#line 561
undef($memory_3);
#line 561
undef($memory_4);
#line 561
undef($memory_5);
#line 561
return $memory_6;
#line 561
undef($memory_6);
#line 561
goto label_77;
#line 561
label_77:
#line 561
undef($memory_5);
#line 561
undef($memory_4);
#line 561
undef($memory_3);
#line 562
goto label_3;
#line 562
label_23:
#line 562
$memory_3 = c_rt_lib::ov_as($memory_1, 'goto');
#line 562
undef($memory_3);
#line 563
goto label_3;
#line 563
label_24:
#line 563
$memory_3 = c_rt_lib::ov_as($memory_1, 'clear');
#line 563
undef($memory_3);
#line 564
goto label_3;
#line 564
label_3:
#line 564
undef($memory_2);
#line 565
$memory_2 = c_rt_lib::to_nl(1);
#line 565
undef($memory_0);
#line 565
undef($memory_1);
#line 565
return $memory_2;
#line 565
undef($memory_2);
#line 565
undef($memory_0);
#line 565
undef($memory_1);
#line 565
return;
}

sub interpreter::__callback_value_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 569
$memory_6 = ptd::ptd_im();
#line 569
$memory_7 = ptd::none();
#line 569
$memory_5 = {yes => $memory_6,no => $memory_7,};
#line 569
undef($memory_6);
#line 569
undef($memory_7);
#line 569
$memory_4 = ptd::var($memory_5);
#line 569
undef($memory_5);
#line 569
$memory_6 = ptd::ptd_im();
#line 569
$memory_5 = ptd::arr($memory_6);
#line 569
undef($memory_6);
#line 569
$memory_7 = {
	module => "profile_inter",
	name => "row_t",
};
#line 569
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 569
$memory_6 = ptd::arr($memory_7);
#line 569
undef($memory_7);
#line 569
$memory_3 = {return => $memory_4,args => $memory_5,profile => $memory_6,};
#line 569
undef($memory_4);
#line 569
undef($memory_5);
#line 569
undef($memory_6);
#line 569
$memory_2 = ptd::rec($memory_3);
#line 569
undef($memory_3);
#line 569
$memory_3 = ptd::sim();
#line 569
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 569
undef($memory_2);
#line 569
undef($memory_3);
#line 569
$memory_0 = ptd::var($memory_1);
#line 569
undef($memory_1);
#line 569
return $memory_0;
#line 569
undef($memory_0);
#line 569
return;
}

my $_callback_value_t;
sub interpreter::callback_value_t() {
	$_callback_value_t = interpreter::__callback_value_t() unless defined $_callback_value_t;
	return $_callback_value_t;
}

sub interpreter_priv::append_profile($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 580
$memory_2 = array::len($memory_1);
#line 581
$memory_3 = 2;
#line 581
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 581
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 581
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 581
undef($memory_1);
#line 581
undef($memory_2);
#line 581
undef($memory_3);
#line 581
$_[0] = $memory_0;return;
#line 581
goto label_2;
#line 581
label_2:
#line 581
undef($memory_3);
#line 582
$memory_4 = 0;
#line 582
$memory_3 = $memory_1->[$memory_4];
#line 582
undef($memory_4);
#line 582
$memory_3 = $memory_3->{'time'};
#line 583
$memory_4 = $memory_0->{'profile'};
#line 583
$memory_6 = $memory_0->{'profile'};
#line 583
$memory_5 = array::len($memory_6);
#line 583
undef($memory_6);
#line 583
$memory_6 = 1;
#line 583
$memory_5 = $memory_5 - $memory_6;
#line 583
undef($memory_6);
#line 583
$memory_4 = $memory_4->[$memory_5];
#line 583
undef($memory_5);
#line 583
$memory_4 = $memory_4->{'time'};
#line 584
$memory_6 = 0;
#line 584
$memory_5 = c_rt_lib::get_ref_arr($memory_1, $memory_6);
#line 584
$memory_7 = $memory_4;
#line 584
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'time'} = $memory_7;
#line 584
c_rt_lib::set_ref_arr($memory_1, $memory_6, $memory_5);
#line 584
undef($memory_5);
#line 584
undef($memory_6);
#line 584
undef($memory_7);
#line 585
$memory_5 = 1;
#line 585
label_4:
#line 585
$memory_6 = c_rt_lib::to_nl($memory_5 < $memory_2);
#line 585
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 585
if (c_rt_lib::check_true($memory_6)) {goto label_3;}
#line 586
$memory_7 = $memory_1->[$memory_5];
#line 586
$memory_7 = $memory_7->{'time'};
#line 587
$memory_9 = profile_inter::minus($memory_7, $memory_3);
#line 587
$memory_8 = profile_inter::plus($memory_9, $memory_4);
#line 587
undef($memory_9);
#line 587
$memory_9 = c_rt_lib::get_ref_arr($memory_1, $memory_5);
#line 587
$memory_10 = $memory_8;
#line 587
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'time'} = $memory_10;
#line 587
c_rt_lib::set_ref_arr($memory_1, $memory_5, $memory_9);
#line 587
undef($memory_8);
#line 587
undef($memory_9);
#line 587
undef($memory_10);
#line 587
undef($memory_7);
#line 587
$memory_7 = 1;
#line 587
$memory_5 = $memory_5 + $memory_7;
#line 587
undef($memory_7);
#line 588
goto label_4;
#line 588
label_3:
#line 588
undef($memory_5);
#line 588
undef($memory_6);
#line 589
$memory_5 = "profile";
#line 589
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 589
array::append($memory_5, $memory_1);
#line 589
$memory_6 = "profile";
#line 589
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 589
undef($memory_6);
#line 589
undef($memory_5);
#line 589
undef($memory_2);
#line 589
undef($memory_3);
#line 589
undef($memory_4);
#line 589
undef($memory_1);
#line 589
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter::finish_callback($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 594
$memory_4 = $memory_3->{'rstate'};
#line 594
$memory_4 = c_rt_lib::ov_is($memory_4, 'callback');
#line 594
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 594
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 594
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 595
$memory_5 = "returned from another function compared to calling";
#line 595
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
#line 595
$memory_6 = $memory_5;
#line 595
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'rstate'} = $memory_6;
#line 595
undef($memory_5);
#line 595
undef($memory_6);
#line 596
undef($memory_0);
#line 596
undef($memory_1);
#line 596
undef($memory_2);
#line 596
undef($memory_4);
#line 596
$_[3] = $memory_3;return;
#line 597
goto label_2;
#line 597
label_2:
#line 597
undef($memory_4);
#line 598
$memory_4 = $memory_3->{'rstate'};
#line 598
$memory_4 = c_rt_lib::ov_as($memory_4, 'callback');
#line 599
$memory_5 = $memory_4->{'call'};
#line 600
$memory_6 = $memory_5->{'fun_name'};
#line 600
$memory_6 = c_rt_lib::to_nl($memory_6 ne $memory_0);
#line 600
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 600
$memory_6 = $memory_5->{'mod'};
#line 600
$memory_6 = c_rt_lib::to_nl($memory_6 ne $memory_1);
#line 600
label_5:
#line 600
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 600
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 601
$memory_7 = "returned to interpreter from another function: ";
#line 601
$memory_7 = $memory_7 . $memory_1;
#line 601
$memory_8 = "::";
#line 601
$memory_7 = $memory_7 . $memory_8;
#line 601
undef($memory_8);
#line 601
$memory_7 = $memory_7 . $memory_0;
#line 601
$memory_7 = c_rt_lib::ov_mk_arg('error', $memory_7);
#line 601
$memory_8 = $memory_7;
#line 601
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'rstate'} = $memory_8;
#line 601
undef($memory_7);
#line 601
undef($memory_8);
#line 602
undef($memory_0);
#line 602
undef($memory_1);
#line 602
undef($memory_2);
#line 602
undef($memory_4);
#line 602
undef($memory_5);
#line 602
undef($memory_6);
#line 602
$_[3] = $memory_3;return;
#line 603
goto label_4;
#line 603
label_4:
#line 603
undef($memory_6);
#line 604
$memory_6 = c_rt_lib::ov_is($memory_2, 'ok');
#line 604
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 623
$memory_6 = c_rt_lib::ov_is($memory_2, 'err');
#line 623
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 623
$memory_6 = "NOMATCHALERT";
#line 623
$memory_6 = [$memory_6,$memory_2];
#line 623
die(dfile::ssave($memory_6));
#line 604
label_7:
#line 604
$memory_7 = c_rt_lib::ov_as($memory_2, 'ok');
#line 605
$memory_8 = "top";
#line 605
$memory_8 = c_rt_lib::get_ref_hash($memory_3, $memory_8);
#line 605
$memory_9 = "next";
#line 605
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 605
$memory_10 = 1;
#line 605
$memory_9 = $memory_9 + $memory_10;
#line 605
$memory_11 = "next";
#line 605
c_rt_lib::set_ref_hash($memory_8, $memory_11, $memory_9);
#line 605
$memory_11 = "top";
#line 605
c_rt_lib::set_ref_hash($memory_3, $memory_11, $memory_8);
#line 605
undef($memory_11);
#line 605
undef($memory_8);
#line 605
undef($memory_9);
#line 605
undef($memory_10);
#line 606
$memory_8 = $memory_7->{'return'};
#line 606
$memory_9 = c_rt_lib::ov_is($memory_8, 'yes');
#line 606
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 608
$memory_9 = c_rt_lib::ov_is($memory_8, 'no');
#line 608
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 608
$memory_9 = "NOMATCHALERT";
#line 608
$memory_9 = [$memory_9,$memory_8];
#line 608
die(dfile::ssave($memory_9));
#line 606
label_10:
#line 606
$memory_10 = c_rt_lib::ov_as($memory_8, 'yes');
#line 607
$memory_11 = $memory_5->{'dest'};
#line 607
$memory_12 = "";
#line 607
$memory_11 = c_rt_lib::to_nl($memory_11 eq $memory_12);
#line 607
undef($memory_12);
#line 607
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 607
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 607
if (c_rt_lib::check_true($memory_11)) {goto label_13;}
#line 607
$memory_12 = "top";
#line 607
$memory_12 = c_rt_lib::get_ref_hash($memory_3, $memory_12);
#line 607
$memory_13 = "vars";
#line 607
$memory_13 = c_rt_lib::get_ref_hash($memory_12, $memory_13);
#line 607
$memory_15 = $memory_5->{'dest'};
#line 607
$memory_14 = $memory_10;
#line 607
 if (c_rt_lib::get_arrcount($memory_13) > 1) {$memory_13 = [@{$memory_13}];}$memory_13->[$memory_15] = $memory_14;
#line 607
$memory_16 = "vars";
#line 607
c_rt_lib::set_ref_hash($memory_12, $memory_16, $memory_13);
#line 607
$memory_16 = "top";
#line 607
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_12);
#line 607
undef($memory_16);
#line 607
undef($memory_12);
#line 607
undef($memory_13);
#line 607
undef($memory_14);
#line 607
undef($memory_15);
#line 607
goto label_13;
#line 607
label_13:
#line 607
undef($memory_11);
#line 607
undef($memory_10);
#line 608
goto label_9;
#line 608
label_11:
#line 609
$memory_10 = $memory_5->{'dest'};
#line 609
$memory_11 = "";
#line 609
$memory_10 = c_rt_lib::to_nl($memory_10 ne $memory_11);
#line 609
undef($memory_11);
#line 609
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 609
if (c_rt_lib::check_true($memory_10)) {goto label_15;}
#line 610
$memory_11 = "no value return from function: ";
#line 610
$memory_11 = $memory_11 . $memory_1;
#line 610
$memory_12 = "::";
#line 610
$memory_11 = $memory_11 . $memory_12;
#line 610
undef($memory_12);
#line 610
$memory_11 = $memory_11 . $memory_0;
#line 610
$memory_11 = c_rt_lib::ov_mk_arg('error', $memory_11);
#line 610
$memory_12 = $memory_11;
#line 610
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'rstate'} = $memory_12;
#line 610
undef($memory_11);
#line 610
undef($memory_12);
#line 611
undef($memory_0);
#line 611
undef($memory_1);
#line 611
undef($memory_2);
#line 611
undef($memory_4);
#line 611
undef($memory_5);
#line 611
undef($memory_6);
#line 611
undef($memory_7);
#line 611
undef($memory_8);
#line 611
undef($memory_9);
#line 611
undef($memory_10);
#line 611
$_[3] = $memory_3;return;
#line 612
goto label_15;
#line 612
label_15:
#line 612
undef($memory_10);
#line 613
goto label_9;
#line 613
label_9:
#line 613
undef($memory_8);
#line 613
undef($memory_9);
#line 614
$memory_8 = $memory_7->{'profile'};
#line 614
interpreter_priv::append_profile($memory_3, $memory_8);
#line 614
undef($memory_8);
#line 615
$memory_9 = $memory_5->{'args'};
#line 615
$memory_8 = array::len($memory_9);
#line 615
undef($memory_9);
#line 615
$memory_9 = 0;
#line 615
$memory_10 = 1;
#line 615
label_18:
#line 615
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 615
if (c_rt_lib::check_true($memory_11)) {goto label_16;}
#line 616
$memory_12 = $memory_5->{'args'};
#line 616
$memory_12 = $memory_12->[$memory_9];
#line 616
$memory_13 = c_rt_lib::ov_is($memory_12, 'val');
#line 616
if (c_rt_lib::check_true($memory_13)) {goto label_20;}
#line 617
$memory_13 = c_rt_lib::ov_is($memory_12, 'ref');
#line 617
if (c_rt_lib::check_true($memory_13)) {goto label_21;}
#line 617
$memory_13 = "NOMATCHALERT";
#line 617
$memory_13 = [$memory_13,$memory_12];
#line 617
die(dfile::ssave($memory_13));
#line 616
label_20:
#line 616
$memory_14 = c_rt_lib::ov_as($memory_12, 'val');
#line 616
undef($memory_14);
#line 617
goto label_19;
#line 617
label_21:
#line 617
$memory_14 = c_rt_lib::ov_as($memory_12, 'ref');
#line 618
$memory_15 = $memory_7->{'args'};
#line 618
$memory_15 = $memory_15->[$memory_9];
#line 618
$memory_16 = "top";
#line 618
$memory_16 = c_rt_lib::get_ref_hash($memory_3, $memory_16);
#line 618
$memory_17 = "vars";
#line 618
$memory_17 = c_rt_lib::get_ref_hash($memory_16, $memory_17);
#line 618
$memory_18 = $memory_15;
#line 618
 if (c_rt_lib::get_arrcount($memory_17) > 1) {$memory_17 = [@{$memory_17}];}$memory_17->[$memory_14] = $memory_18;
#line 618
$memory_19 = "vars";
#line 618
c_rt_lib::set_ref_hash($memory_16, $memory_19, $memory_17);
#line 618
$memory_19 = "top";
#line 618
c_rt_lib::set_ref_hash($memory_3, $memory_19, $memory_16);
#line 618
undef($memory_19);
#line 618
undef($memory_15);
#line 618
undef($memory_16);
#line 618
undef($memory_17);
#line 618
undef($memory_18);
#line 618
undef($memory_14);
#line 619
goto label_19;
#line 619
label_19:
#line 619
undef($memory_12);
#line 619
undef($memory_13);
#line 620
$memory_9 = $memory_9 + $memory_10;
#line 620
goto label_18;
#line 620
label_16:
#line 620
undef($memory_8);
#line 620
undef($memory_9);
#line 620
undef($memory_10);
#line 620
undef($memory_11);
#line 621
$memory_8 = c_rt_lib::ov_mk_none('running');
#line 621
$memory_9 = $memory_8;
#line 621
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'rstate'} = $memory_9;
#line 621
undef($memory_8);
#line 621
undef($memory_9);
#line 622
interpreter_priv::handle_new_declarations($memory_3);
#line 622
undef($memory_7);
#line 623
goto label_6;
#line 623
label_8:
#line 623
$memory_7 = c_rt_lib::ov_as($memory_2, 'err');
#line 624
$memory_8 = c_rt_lib::ov_mk_arg('error', $memory_7);
#line 624
$memory_9 = $memory_8;
#line 624
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'rstate'} = $memory_9;
#line 624
undef($memory_8);
#line 624
undef($memory_9);
#line 624
undef($memory_7);
#line 625
goto label_6;
#line 625
label_6:
#line 625
undef($memory_6);
#line 625
undef($memory_4);
#line 625
undef($memory_5);
#line 625
undef($memory_0);
#line 625
undef($memory_1);
#line 625
undef($memory_2);
#line 625
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub interpreter_priv::handle_normal_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 629
$memory_3 = "top";
#line 629
$memory_3 = c_rt_lib::get_ref_hash($memory_2, $memory_3);
#line 629
$memory_4 = "next";
#line 629
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 629
$memory_5 = 1;
#line 629
$memory_4 = $memory_4 - $memory_5;
#line 629
$memory_6 = "next";
#line 629
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 629
$memory_6 = "top";
#line 629
c_rt_lib::set_ref_hash($memory_2, $memory_6, $memory_3);
#line 629
undef($memory_6);
#line 629
undef($memory_3);
#line 629
undef($memory_4);
#line 629
undef($memory_5);
#line 631
$memory_4 = $memory_0->{'mod'};
#line 631
$memory_5 = "";
#line 631
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 631
undef($memory_5);
#line 631
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 631
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 632
$memory_5 = $memory_2->{'top'};
#line 632
$memory_5 = $memory_5->{'module_name'};
#line 632
$memory_3 = $memory_5;
#line 632
undef($memory_5);
#line 633
goto label_1;
#line 633
label_2:
#line 634
$memory_5 = $memory_0->{'mod'};
#line 634
$memory_3 = $memory_5;
#line 634
undef($memory_5);
#line 635
goto label_1;
#line 635
label_1:
#line 635
undef($memory_4);
#line 636
$memory_4 = "profile";
#line 636
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 636
profile_inter::begin($memory_4, $memory_1);
#line 636
$memory_5 = "profile";
#line 636
c_rt_lib::set_ref_hash($memory_2, $memory_5, $memory_4);
#line 636
undef($memory_5);
#line 636
undef($memory_4);
#line 637
$memory_5 = $memory_2->{'functions'};
#line 637
$memory_4 = hash::get_value($memory_5, $memory_1);
#line 637
undef($memory_5);
#line 638
$memory_6 = $memory_4->{'reg_size'};
#line 638
$memory_5 = interpreter_priv::build_registers($memory_6);
#line 638
undef($memory_6);
#line 639
$memory_6 = {};
#line 640
$memory_7 = {};
#line 641
$memory_8 = 0;
#line 642
$memory_10 = $memory_0->{'args'};
#line 642
$memory_9 = array::len($memory_10);
#line 642
undef($memory_10);
#line 642
$memory_10 = 0;
#line 642
$memory_11 = 1;
#line 642
label_5:
#line 642
$memory_12 = c_rt_lib::to_nl($memory_10 >= $memory_9);
#line 642
if (c_rt_lib::check_true($memory_12)) {goto label_3;}
#line 643
$memory_13 = $memory_0->{'args'};
#line 643
$memory_13 = $memory_13->[$memory_10];
#line 645
$memory_15 = c_rt_lib::ov_is($memory_13, 'val');
#line 645
if (c_rt_lib::check_true($memory_15)) {goto label_7;}
#line 647
$memory_15 = c_rt_lib::ov_is($memory_13, 'ref');
#line 647
if (c_rt_lib::check_true($memory_15)) {goto label_8;}
#line 647
$memory_15 = "NOMATCHALERT";
#line 647
$memory_15 = [$memory_15,$memory_13];
#line 647
die(dfile::ssave($memory_15));
#line 645
label_7:
#line 645
$memory_16 = c_rt_lib::ov_as($memory_13, 'val');
#line 646
$memory_17 = $memory_2->{'top'};
#line 646
$memory_17 = $memory_17->{'vars'};
#line 646
$memory_17 = $memory_17->[$memory_16];
#line 646
$memory_14 = $memory_17;
#line 646
undef($memory_17);
#line 646
undef($memory_16);
#line 647
goto label_6;
#line 647
label_8:
#line 647
$memory_16 = c_rt_lib::ov_as($memory_13, 'ref');
#line 648
$memory_17 = $memory_2->{'top'};
#line 648
$memory_17 = $memory_17->{'vars'};
#line 648
$memory_17 = $memory_17->[$memory_16];
#line 648
$memory_14 = $memory_17;
#line 648
undef($memory_17);
#line 649
hash::set_value($memory_7, $memory_8, $memory_16);
#line 649
undef($memory_16);
#line 650
goto label_6;
#line 650
label_6:
#line 650
undef($memory_15);
#line 651
$memory_15 = $memory_14;
#line 651
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_8] = $memory_15;
#line 651
undef($memory_15);
#line 652
$memory_15 = 1;
#line 652
$memory_8 = $memory_8 + $memory_15;
#line 652
undef($memory_15);
#line 652
undef($memory_13);
#line 652
undef($memory_14);
#line 653
$memory_10 = $memory_10 + $memory_11;
#line 653
goto label_5;
#line 653
label_3:
#line 653
undef($memory_9);
#line 653
undef($memory_10);
#line 653
undef($memory_11);
#line 653
undef($memory_12);
#line 654
$memory_9 = "stack";
#line 654
$memory_9 = c_rt_lib::get_ref_hash($memory_2, $memory_9);
#line 654
$memory_10 = $memory_2->{'top'};
#line 654
array::push($memory_9, $memory_10);
#line 654
undef($memory_10);
#line 654
$memory_10 = "stack";
#line 654
c_rt_lib::set_ref_hash($memory_2, $memory_10, $memory_9);
#line 654
undef($memory_10);
#line 654
undef($memory_9);
#line 655
$memory_9 = $memory_4;
#line 655
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'func'} = $memory_9;
#line 655
undef($memory_9);
#line 656
$memory_10 = 0;
#line 656
$memory_11 = $memory_0->{'dest'};
#line 656
$memory_9 = {func_key => $memory_1,module_name => $memory_3,next => $memory_10,vars => $memory_5,ret => $memory_11,code_vars => $memory_6,ref_arguments => $memory_7,};
#line 656
undef($memory_10);
#line 656
undef($memory_11);
#line 656
$memory_10 = $memory_9;
#line 656
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'top'} = $memory_10;
#line 656
undef($memory_9);
#line 656
undef($memory_10);
#line 665
$memory_9 = 1;
#line 665
$memory_9 = -$memory_9;
#line 665
$memory_10 = $memory_9;
#line 665
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'instruction_nr'} = $memory_10;
#line 665
undef($memory_9);
#line 665
undef($memory_10);
#line 665
undef($memory_3);
#line 665
undef($memory_4);
#line 665
undef($memory_5);
#line 665
undef($memory_6);
#line 665
undef($memory_7);
#line 665
undef($memory_8);
#line 665
undef($memory_0);
#line 665
undef($memory_1);
#line 665
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub interpreter_priv::handle_unknown_call($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 669
$memory_2 = [];
#line 670
$memory_3 = $memory_0->{'args'};
#line 670
$memory_5 = 0;
#line 670
$memory_6 = 1;
#line 670
$memory_7 = c_rt_lib::array_len($memory_3);
#line 670
label_3:
#line 670
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 670
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 670
$memory_4 = $memory_3->[$memory_5];
#line 672
$memory_10 = c_rt_lib::ov_is($memory_4, 'val');
#line 672
if (c_rt_lib::check_true($memory_10)) {goto label_5;}
#line 674
$memory_10 = c_rt_lib::ov_is($memory_4, 'ref');
#line 674
if (c_rt_lib::check_true($memory_10)) {goto label_6;}
#line 674
$memory_10 = "NOMATCHALERT";
#line 674
$memory_10 = [$memory_10,$memory_4];
#line 674
die(dfile::ssave($memory_10));
#line 672
label_5:
#line 672
$memory_11 = c_rt_lib::ov_as($memory_4, 'val');
#line 673
$memory_12 = $memory_1->{'top'};
#line 673
$memory_12 = $memory_12->{'vars'};
#line 673
$memory_12 = $memory_12->[$memory_11];
#line 673
$memory_9 = $memory_12;
#line 673
undef($memory_12);
#line 673
undef($memory_11);
#line 674
goto label_4;
#line 674
label_6:
#line 674
$memory_11 = c_rt_lib::ov_as($memory_4, 'ref');
#line 675
$memory_12 = $memory_1->{'top'};
#line 675
$memory_12 = $memory_12->{'vars'};
#line 675
$memory_12 = $memory_12->[$memory_11];
#line 675
$memory_9 = $memory_12;
#line 675
undef($memory_12);
#line 675
undef($memory_11);
#line 676
goto label_4;
#line 676
label_4:
#line 676
undef($memory_10);
#line 677
array::push($memory_2, $memory_9);
#line 677
undef($memory_9);
#line 678
$memory_5 = $memory_5 + $memory_6;
#line 678
goto label_3;
#line 678
label_1:
#line 678
undef($memory_3);
#line 678
undef($memory_4);
#line 678
undef($memory_5);
#line 678
undef($memory_6);
#line 678
undef($memory_7);
#line 678
undef($memory_8);
#line 679
$memory_3 = {call => $memory_0,args => $memory_2,};
#line 679
$memory_3 = c_rt_lib::ov_mk_arg('callback', $memory_3);
#line 679
$memory_4 = $memory_3;
#line 679
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_4;
#line 679
undef($memory_3);
#line 679
undef($memory_4);
#line 680
$memory_3 = 1;
#line 680
$memory_3 = -$memory_3;
#line 680
$memory_4 = $memory_3;
#line 680
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'instruction_nr'} = $memory_4;
#line 680
undef($memory_3);
#line 680
undef($memory_4);
#line 681
$memory_3 = "top";
#line 681
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 681
$memory_4 = "next";
#line 681
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 681
$memory_5 = 1;
#line 681
$memory_4 = $memory_4 - $memory_5;
#line 681
$memory_6 = "next";
#line 681
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 681
$memory_6 = "top";
#line 681
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_3);
#line 681
undef($memory_6);
#line 681
undef($memory_3);
#line 681
undef($memory_4);
#line 681
undef($memory_5);
#line 681
undef($memory_2);
#line 681
undef($memory_0);
#line 681
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub interpreter_priv::handle_extern_call($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 685
$memory_2 = [];
#line 686
$memory_3 = $memory_0->{'args'};
#line 686
$memory_5 = 0;
#line 686
$memory_6 = 1;
#line 686
$memory_7 = c_rt_lib::array_len($memory_3);
#line 686
label_3:
#line 686
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 686
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 686
$memory_4 = $memory_3->[$memory_5];
#line 688
$memory_10 = c_rt_lib::ov_is($memory_4, 'val');
#line 688
if (c_rt_lib::check_true($memory_10)) {goto label_5;}
#line 690
$memory_10 = c_rt_lib::ov_is($memory_4, 'ref');
#line 690
if (c_rt_lib::check_true($memory_10)) {goto label_6;}
#line 690
$memory_10 = "NOMATCHALERT";
#line 690
$memory_10 = [$memory_10,$memory_4];
#line 690
die(dfile::ssave($memory_10));
#line 688
label_5:
#line 688
$memory_11 = c_rt_lib::ov_as($memory_4, 'val');
#line 689
$memory_12 = $memory_1->{'top'};
#line 689
$memory_12 = $memory_12->{'vars'};
#line 689
$memory_12 = $memory_12->[$memory_11];
#line 689
$memory_9 = $memory_12;
#line 689
undef($memory_12);
#line 689
undef($memory_11);
#line 690
goto label_4;
#line 690
label_6:
#line 690
$memory_11 = c_rt_lib::ov_as($memory_4, 'ref');
#line 691
$memory_12 = $memory_1->{'top'};
#line 691
$memory_12 = $memory_12->{'vars'};
#line 691
$memory_12 = $memory_12->[$memory_11];
#line 691
$memory_9 = $memory_12;
#line 691
undef($memory_12);
#line 691
undef($memory_11);
#line 692
goto label_4;
#line 692
label_4:
#line 692
undef($memory_10);
#line 693
array::push($memory_2, $memory_9);
#line 693
undef($memory_9);
#line 694
$memory_5 = $memory_5 + $memory_6;
#line 694
goto label_3;
#line 694
label_1:
#line 694
undef($memory_3);
#line 694
undef($memory_4);
#line 694
undef($memory_5);
#line 694
undef($memory_6);
#line 694
undef($memory_7);
#line 694
undef($memory_8);
#line 695
$memory_4 = $memory_1->{'known_exec_func'};
#line 695
$memory_5 = $memory_0->{'mod'};
#line 695
$memory_6 = "::";
#line 695
$memory_5 = $memory_5 . $memory_6;
#line 695
undef($memory_6);
#line 695
$memory_6 = $memory_0->{'fun_name'};
#line 695
$memory_5 = $memory_5 . $memory_6;
#line 695
undef($memory_6);
#line 695
$memory_3 = hash::get_value($memory_4, $memory_5);
#line 695
undef($memory_5);
#line 695
undef($memory_4);
#line 696
$memory_5 = $memory_3->{'args'};
#line 696
$memory_4 = array::len($memory_5);
#line 696
undef($memory_5);
#line 696
$memory_5 = array::len($memory_2);
#line 696
$memory_4 = c_rt_lib::to_nl($memory_4 != $memory_5);
#line 696
undef($memory_5);
#line 696
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 696
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 697
$memory_5 = "incorrect console call";
#line 697
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
#line 697
$memory_6 = $memory_5;
#line 697
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_6;
#line 697
undef($memory_5);
#line 697
undef($memory_6);
#line 698
goto label_8;
#line 698
label_8:
#line 698
undef($memory_4);
#line 699
$memory_4 = array::len($memory_2);
#line 699
$memory_5 = 0;
#line 699
$memory_6 = 1;
#line 699
label_11:
#line 699
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_4);
#line 699
if (c_rt_lib::check_true($memory_7)) {goto label_9;}
#line 700
$memory_9 = $memory_3->{'args'};
#line 700
$memory_9 = $memory_9->[$memory_5];
#line 700
$memory_10 = $memory_2->[$memory_5];
#line 700
$memory_8 = ptd::try_dynamic_cast($memory_9, $memory_10);
#line 700
undef($memory_10);
#line 700
undef($memory_9);
#line 700
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 700
if (c_rt_lib::check_true($memory_9)) {goto label_13;}
#line 701
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 701
if (c_rt_lib::check_true($memory_9)) {goto label_14;}
#line 701
$memory_9 = "NOMATCHALERT";
#line 701
$memory_9 = [$memory_9,$memory_8];
#line 701
die(dfile::ssave($memory_9));
#line 700
label_13:
#line 700
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 700
undef($memory_10);
#line 701
goto label_12;
#line 701
label_14:
#line 701
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 702
$memory_11 = "incorrect type";
#line 702
$memory_11 = c_rt_lib::ov_mk_arg('error', $memory_11);
#line 702
$memory_12 = $memory_11;
#line 702
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_12;
#line 702
undef($memory_11);
#line 702
undef($memory_12);
#line 702
undef($memory_10);
#line 703
goto label_12;
#line 703
label_12:
#line 703
undef($memory_8);
#line 703
undef($memory_9);
#line 704
$memory_5 = $memory_5 + $memory_6;
#line 704
goto label_11;
#line 704
label_9:
#line 704
undef($memory_4);
#line 704
undef($memory_5);
#line 704
undef($memory_6);
#line 704
undef($memory_7);
#line 705
$memory_4 = $memory_3->{'type'};
#line 705
$memory_5 = c_rt_lib::ov_is($memory_4, 'sequential');
#line 705
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 718
$memory_5 = c_rt_lib::ov_is($memory_4, 'callback');
#line 718
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 718
$memory_5 = "NOMATCHALERT";
#line 718
$memory_5 = [$memory_5,$memory_4];
#line 718
die(dfile::ssave($memory_5));
#line 705
label_16:
#line 706
$memory_6 = $memory_0->{'dest'};
#line 706
$memory_7 = "";
#line 706
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 706
undef($memory_7);
#line 706
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 706
if (c_rt_lib::check_true($memory_6)) {goto label_19;}
#line 707
$memory_7 = $memory_3->{'func'};
#line 707
func::exec_ref($memory_7, $memory_2);
#line 707
undef($memory_7);
#line 708
goto label_18;
#line 708
label_19:
#line 709
$memory_8 = $memory_3->{'func'};
#line 709
$memory_7 = func::exec_ref($memory_8, $memory_2);
#line 709
undef($memory_8);
#line 709
$memory_8 = "top";
#line 709
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 709
$memory_9 = "vars";
#line 709
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 709
$memory_11 = $memory_0->{'dest'};
#line 709
$memory_10 = $memory_7;
#line 709
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_11] = $memory_10;
#line 709
$memory_12 = "vars";
#line 709
c_rt_lib::set_ref_hash($memory_8, $memory_12, $memory_9);
#line 709
$memory_12 = "top";
#line 709
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_8);
#line 709
undef($memory_12);
#line 709
undef($memory_7);
#line 709
undef($memory_8);
#line 709
undef($memory_9);
#line 709
undef($memory_10);
#line 709
undef($memory_11);
#line 710
goto label_18;
#line 710
label_18:
#line 710
undef($memory_6);
#line 711
$memory_7 = $memory_0->{'args'};
#line 711
$memory_6 = array::len($memory_7);
#line 711
undef($memory_7);
#line 711
$memory_7 = 0;
#line 711
$memory_8 = 1;
#line 711
label_22:
#line 711
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 711
if (c_rt_lib::check_true($memory_9)) {goto label_20;}
#line 712
$memory_10 = $memory_0->{'args'};
#line 712
$memory_10 = $memory_10->[$memory_7];
#line 713
$memory_11 = c_rt_lib::ov_is($memory_10, 'val');
#line 713
if (c_rt_lib::check_true($memory_11)) {goto label_24;}
#line 714
$memory_11 = c_rt_lib::ov_is($memory_10, 'ref');
#line 714
if (c_rt_lib::check_true($memory_11)) {goto label_25;}
#line 714
$memory_11 = "NOMATCHALERT";
#line 714
$memory_11 = [$memory_11,$memory_10];
#line 714
die(dfile::ssave($memory_11));
#line 713
label_24:
#line 713
$memory_12 = c_rt_lib::ov_as($memory_10, 'val');
#line 713
undef($memory_12);
#line 714
goto label_23;
#line 714
label_25:
#line 714
$memory_12 = c_rt_lib::ov_as($memory_10, 'ref');
#line 715
$memory_13 = $memory_2->[$memory_7];
#line 715
$memory_14 = "top";
#line 715
$memory_14 = c_rt_lib::get_ref_hash($memory_1, $memory_14);
#line 715
$memory_15 = "vars";
#line 715
$memory_15 = c_rt_lib::get_ref_hash($memory_14, $memory_15);
#line 715
$memory_16 = $memory_13;
#line 715
 if (c_rt_lib::get_arrcount($memory_15) > 1) {$memory_15 = [@{$memory_15}];}$memory_15->[$memory_12] = $memory_16;
#line 715
$memory_17 = "vars";
#line 715
c_rt_lib::set_ref_hash($memory_14, $memory_17, $memory_15);
#line 715
$memory_17 = "top";
#line 715
c_rt_lib::set_ref_hash($memory_1, $memory_17, $memory_14);
#line 715
undef($memory_17);
#line 715
undef($memory_13);
#line 715
undef($memory_14);
#line 715
undef($memory_15);
#line 715
undef($memory_16);
#line 715
undef($memory_12);
#line 716
goto label_23;
#line 716
label_23:
#line 716
undef($memory_11);
#line 716
undef($memory_10);
#line 717
$memory_7 = $memory_7 + $memory_8;
#line 717
goto label_22;
#line 717
label_20:
#line 717
undef($memory_6);
#line 717
undef($memory_7);
#line 717
undef($memory_8);
#line 717
undef($memory_9);
#line 718
goto label_15;
#line 718
label_17:
#line 719
$memory_6 = {call => $memory_0,args => $memory_2,};
#line 719
$memory_6 = c_rt_lib::ov_mk_arg('callback', $memory_6);
#line 719
$memory_7 = $memory_6;
#line 719
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_7;
#line 719
undef($memory_6);
#line 719
undef($memory_7);
#line 720
$memory_6 = 1;
#line 720
$memory_6 = -$memory_6;
#line 720
$memory_7 = $memory_6;
#line 720
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'instruction_nr'} = $memory_7;
#line 720
undef($memory_6);
#line 720
undef($memory_7);
#line 721
$memory_6 = "top";
#line 721
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 721
$memory_7 = "next";
#line 721
$memory_7 = c_rt_lib::get_ref_hash($memory_6, $memory_7);
#line 721
$memory_8 = 1;
#line 721
$memory_7 = $memory_7 - $memory_8;
#line 721
$memory_9 = "next";
#line 721
c_rt_lib::set_ref_hash($memory_6, $memory_9, $memory_7);
#line 721
$memory_9 = "top";
#line 721
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_6);
#line 721
undef($memory_9);
#line 721
undef($memory_6);
#line 721
undef($memory_7);
#line 721
undef($memory_8);
#line 722
goto label_15;
#line 722
label_15:
#line 722
undef($memory_4);
#line 722
undef($memory_5);
#line 722
undef($memory_2);
#line 722
undef($memory_3);
#line 722
undef($memory_0);
#line 722
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub interpreter_priv::__get_compiler_functions() {
my $memory_0;my $memory_1;my $memory_2;
#line 726
$memory_0 = {};
#line 727
$memory_1 = "array::push";
#line 727
$memory_2 = "";
#line 727
hash::set_value($memory_0, $memory_1, $memory_2);
#line 727
undef($memory_2);
#line 727
undef($memory_1);
#line 728
$memory_1 = "array::pop";
#line 728
$memory_2 = "";
#line 728
hash::set_value($memory_0, $memory_1, $memory_2);
#line 728
undef($memory_2);
#line 728
undef($memory_1);
#line 729
$memory_1 = "array::subarray";
#line 729
$memory_2 = "";
#line 729
hash::set_value($memory_0, $memory_1, $memory_2);
#line 729
undef($memory_2);
#line 729
undef($memory_1);
#line 730
$memory_1 = "array::append";
#line 730
$memory_2 = "";
#line 730
hash::set_value($memory_0, $memory_1, $memory_2);
#line 730
undef($memory_2);
#line 730
undef($memory_1);
#line 731
$memory_1 = "array::len";
#line 731
$memory_2 = "";
#line 731
hash::set_value($memory_0, $memory_1, $memory_2);
#line 731
undef($memory_2);
#line 731
undef($memory_1);
#line 732
$memory_1 = "array::cmp";
#line 732
$memory_2 = "";
#line 732
hash::set_value($memory_0, $memory_1, $memory_2);
#line 732
undef($memory_2);
#line 732
undef($memory_1);
#line 733
$memory_1 = "array::sort";
#line 733
$memory_2 = "";
#line 733
hash::set_value($memory_0, $memory_1, $memory_2);
#line 733
undef($memory_2);
#line 733
undef($memory_1);
#line 734
$memory_1 = "hash::get_value";
#line 734
$memory_2 = "";
#line 734
hash::set_value($memory_0, $memory_1, $memory_2);
#line 734
undef($memory_2);
#line 734
undef($memory_1);
#line 735
$memory_1 = "hash::has_key";
#line 735
$memory_2 = "";
#line 735
hash::set_value($memory_0, $memory_1, $memory_2);
#line 735
undef($memory_2);
#line 735
undef($memory_1);
#line 736
$memory_1 = "hash::set_value";
#line 736
$memory_2 = "";
#line 736
hash::set_value($memory_0, $memory_1, $memory_2);
#line 736
undef($memory_2);
#line 736
undef($memory_1);
#line 737
$memory_1 = "hash::delete";
#line 737
$memory_2 = "";
#line 737
hash::set_value($memory_0, $memory_1, $memory_2);
#line 737
undef($memory_2);
#line 737
undef($memory_1);
#line 738
$memory_1 = "hash::size";
#line 738
$memory_2 = "";
#line 738
hash::set_value($memory_0, $memory_1, $memory_2);
#line 738
undef($memory_2);
#line 738
undef($memory_1);
#line 739
$memory_1 = "hash::keys";
#line 739
$memory_2 = "";
#line 739
hash::set_value($memory_0, $memory_1, $memory_2);
#line 739
undef($memory_2);
#line 739
undef($memory_1);
#line 740
$memory_1 = "string::lf";
#line 740
$memory_2 = "";
#line 740
hash::set_value($memory_0, $memory_1, $memory_2);
#line 740
undef($memory_2);
#line 740
undef($memory_1);
#line 741
$memory_1 = "string::t";
#line 741
$memory_2 = "";
#line 741
hash::set_value($memory_0, $memory_1, $memory_2);
#line 741
undef($memory_2);
#line 741
undef($memory_1);
#line 742
$memory_1 = "string::length";
#line 742
$memory_2 = "";
#line 742
hash::set_value($memory_0, $memory_1, $memory_2);
#line 742
undef($memory_2);
#line 742
undef($memory_1);
#line 743
$memory_1 = "string::substr";
#line 743
$memory_2 = "";
#line 743
hash::set_value($memory_0, $memory_1, $memory_2);
#line 743
undef($memory_2);
#line 743
undef($memory_1);
#line 744
$memory_1 = "string::is_digit";
#line 744
$memory_2 = "";
#line 744
hash::set_value($memory_0, $memory_1, $memory_2);
#line 744
undef($memory_2);
#line 744
undef($memory_1);
#line 745
$memory_1 = "string::is_letter";
#line 745
$memory_2 = "";
#line 745
hash::set_value($memory_0, $memory_1, $memory_2);
#line 745
undef($memory_2);
#line 745
undef($memory_1);
#line 746
$memory_1 = "string::ord";
#line 746
$memory_2 = "";
#line 746
hash::set_value($memory_0, $memory_1, $memory_2);
#line 746
undef($memory_2);
#line 746
undef($memory_1);
#line 747
$memory_1 = "string::chr";
#line 747
$memory_2 = "";
#line 747
hash::set_value($memory_0, $memory_1, $memory_2);
#line 747
undef($memory_2);
#line 747
undef($memory_1);
#line 748
$memory_1 = "ov::mk";
#line 748
$memory_2 = "";
#line 748
hash::set_value($memory_0, $memory_1, $memory_2);
#line 748
undef($memory_2);
#line 748
undef($memory_1);
#line 749
$memory_1 = "ov::mk_val";
#line 749
$memory_2 = "";
#line 749
hash::set_value($memory_0, $memory_1, $memory_2);
#line 749
undef($memory_2);
#line 749
undef($memory_1);
#line 750
$memory_1 = "ov::has_value";
#line 750
$memory_2 = "";
#line 750
hash::set_value($memory_0, $memory_1, $memory_2);
#line 750
undef($memory_2);
#line 750
undef($memory_1);
#line 751
$memory_1 = "ov::get_element";
#line 751
$memory_2 = "";
#line 751
hash::set_value($memory_0, $memory_1, $memory_2);
#line 751
undef($memory_2);
#line 751
undef($memory_1);
#line 752
$memory_1 = "ov::get_value";
#line 752
$memory_2 = "";
#line 752
hash::set_value($memory_0, $memory_1, $memory_2);
#line 752
undef($memory_2);
#line 752
undef($memory_1);
#line 753
$memory_1 = "ov::is";
#line 753
$memory_2 = "";
#line 753
hash::set_value($memory_0, $memory_1, $memory_2);
#line 753
undef($memory_2);
#line 753
undef($memory_1);
#line 754
$memory_1 = "ov::as";
#line 754
$memory_2 = "";
#line 754
hash::set_value($memory_0, $memory_1, $memory_2);
#line 754
undef($memory_2);
#line 754
undef($memory_1);
#line 755
$memory_1 = "c_rt_lib::array_len";
#line 755
$memory_2 = "";
#line 755
hash::set_value($memory_0, $memory_1, $memory_2);
#line 755
undef($memory_2);
#line 755
undef($memory_1);
#line 756
$memory_1 = "c_rt_lib::set_ref_arr";
#line 756
$memory_2 = "";
#line 756
hash::set_value($memory_0, $memory_1, $memory_2);
#line 756
undef($memory_2);
#line 756
undef($memory_1);
#line 757
$memory_1 = "c_rt_lib::set_ref_hash";
#line 757
$memory_2 = "";
#line 757
hash::set_value($memory_0, $memory_1, $memory_2);
#line 757
undef($memory_2);
#line 757
undef($memory_1);
#line 758
$memory_1 = "c_rt_lib::get_ref_arr";
#line 758
$memory_2 = "";
#line 758
hash::set_value($memory_0, $memory_1, $memory_2);
#line 758
undef($memory_2);
#line 758
undef($memory_1);
#line 759
$memory_1 = "c_rt_lib::get_ref_hash";
#line 759
$memory_2 = "";
#line 759
hash::set_value($memory_0, $memory_1, $memory_2);
#line 759
undef($memory_2);
#line 759
undef($memory_1);
#line 760
$memory_1 = "c_rt_lib::init_iter";
#line 760
$memory_2 = "";
#line 760
hash::set_value($memory_0, $memory_1, $memory_2);
#line 760
undef($memory_2);
#line 760
undef($memory_1);
#line 761
$memory_1 = "c_rt_lib::is_end_hash";
#line 761
$memory_2 = "";
#line 761
hash::set_value($memory_0, $memory_1, $memory_2);
#line 761
undef($memory_2);
#line 761
undef($memory_1);
#line 762
$memory_1 = "c_rt_lib::get_key_iter";
#line 762
$memory_2 = "";
#line 762
hash::set_value($memory_0, $memory_1, $memory_2);
#line 762
undef($memory_2);
#line 762
undef($memory_1);
#line 763
$memory_1 = "c_rt_lib::hash_get_value";
#line 763
$memory_2 = "";
#line 763
hash::set_value($memory_0, $memory_1, $memory_2);
#line 763
undef($memory_2);
#line 763
undef($memory_1);
#line 764
$memory_1 = "c_rt_lib::next_iter";
#line 764
$memory_2 = "";
#line 764
hash::set_value($memory_0, $memory_1, $memory_2);
#line 764
undef($memory_2);
#line 764
undef($memory_1);
#line 765
$memory_1 = "ptd::sim";
#line 765
$memory_2 = "";
#line 765
hash::set_value($memory_0, $memory_1, $memory_2);
#line 765
undef($memory_2);
#line 765
undef($memory_1);
#line 766
$memory_1 = "ptd::hash";
#line 766
$memory_2 = "";
#line 766
hash::set_value($memory_0, $memory_1, $memory_2);
#line 766
undef($memory_2);
#line 766
undef($memory_1);
#line 767
$memory_1 = "ptd::arr";
#line 767
$memory_2 = "";
#line 767
hash::set_value($memory_0, $memory_1, $memory_2);
#line 767
undef($memory_2);
#line 767
undef($memory_1);
#line 768
$memory_1 = "ptd::none";
#line 768
$memory_2 = "";
#line 768
hash::set_value($memory_0, $memory_1, $memory_2);
#line 768
undef($memory_2);
#line 768
undef($memory_1);
#line 769
$memory_1 = "ptd::var";
#line 769
$memory_2 = "";
#line 769
hash::set_value($memory_0, $memory_1, $memory_2);
#line 769
undef($memory_2);
#line 769
undef($memory_1);
#line 770
$memory_1 = "ptd::ptd_im";
#line 770
$memory_2 = "";
#line 770
hash::set_value($memory_0, $memory_1, $memory_2);
#line 770
undef($memory_2);
#line 770
undef($memory_1);
#line 771
$memory_1 = "ptd::ensure";
#line 771
$memory_2 = "";
#line 771
hash::set_value($memory_0, $memory_1, $memory_2);
#line 771
undef($memory_2);
#line 771
undef($memory_1);
#line 772
return $memory_0;
#line 772
undef($memory_0);
#line 772
return;
}

my $_get_compiler_functions;
sub interpreter_priv::get_compiler_functions() {
	$_get_compiler_functions = interpreter_priv::__get_compiler_functions() unless defined $_get_compiler_functions;
	return $_get_compiler_functions;
}

sub interpreter_priv::handle_array_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 779
$memory_3 = "incorrect command";
#line 779
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 780
$memory_6 = 0;
#line 780
$memory_5 = $memory_2->[$memory_6];
#line 780
undef($memory_6);
#line 780
$memory_4 = nl::is_array($memory_5);
#line 780
undef($memory_5);
#line 780
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 780
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 780
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 780
undef($memory_0);
#line 780
undef($memory_4);
#line 780
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 780
goto label_2;
#line 780
label_2:
#line 780
undef($memory_4);
#line 781
$memory_4 = "array::push";
#line 781
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 781
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 781
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 782
$memory_6 = 0;
#line 782
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 782
$memory_8 = 1;
#line 782
$memory_7 = $memory_2->[$memory_8];
#line 782
undef($memory_8);
#line 782
array::push($memory_5, $memory_7);
#line 782
undef($memory_7);
#line 782
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 782
undef($memory_5);
#line 782
undef($memory_6);
#line 783
goto label_3;
#line 783
label_4:
#line 783
$memory_4 = "array::pop";
#line 783
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 783
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 783
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 784
$memory_7 = 0;
#line 784
$memory_6 = $memory_2->[$memory_7];
#line 784
undef($memory_7);
#line 784
$memory_5 = array::len($memory_6);
#line 784
undef($memory_6);
#line 784
$memory_6 = 0;
#line 784
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 784
undef($memory_6);
#line 784
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 784
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 784
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 784
undef($memory_0);
#line 784
undef($memory_4);
#line 784
undef($memory_5);
#line 784
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 784
goto label_7;
#line 784
label_7:
#line 784
undef($memory_5);
#line 785
$memory_6 = 0;
#line 785
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 785
array::pop($memory_5);
#line 785
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 785
undef($memory_5);
#line 785
undef($memory_6);
#line 786
goto label_3;
#line 786
label_5:
#line 786
$memory_4 = "array::subarray";
#line 786
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 786
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 786
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 787
$memory_8 = 1;
#line 787
$memory_7 = $memory_2->[$memory_8];
#line 787
undef($memory_8);
#line 787
$memory_5 = nl::is_sim($memory_7);
#line 787
undef($memory_7);
#line 787
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 787
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 787
$memory_8 = 2;
#line 787
$memory_7 = $memory_2->[$memory_8];
#line 787
undef($memory_8);
#line 787
$memory_5 = nl::is_sim($memory_7);
#line 787
undef($memory_7);
#line 787
label_11:
#line 787
undef($memory_6);
#line 787
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 787
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 787
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 787
undef($memory_0);
#line 787
undef($memory_4);
#line 787
undef($memory_5);
#line 787
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 787
goto label_10;
#line 787
label_10:
#line 787
undef($memory_5);
#line 788
$memory_8 = 1;
#line 788
$memory_7 = $memory_2->[$memory_8];
#line 788
undef($memory_8);
#line 788
$memory_5 = string_utils::is_number($memory_7);
#line 788
undef($memory_7);
#line 788
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 788
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 788
$memory_8 = 2;
#line 788
$memory_7 = $memory_2->[$memory_8];
#line 788
undef($memory_8);
#line 788
$memory_5 = string_utils::is_number($memory_7);
#line 788
undef($memory_7);
#line 788
label_14:
#line 788
undef($memory_6);
#line 788
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 788
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 788
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 788
undef($memory_0);
#line 788
undef($memory_4);
#line 788
undef($memory_5);
#line 788
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 788
goto label_13;
#line 788
label_13:
#line 788
undef($memory_5);
#line 789
$memory_7 = 1;
#line 789
$memory_5 = $memory_2->[$memory_7];
#line 789
undef($memory_7);
#line 789
$memory_7 = 0;
#line 789
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 789
undef($memory_7);
#line 789
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 789
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 789
$memory_7 = 1;
#line 789
$memory_5 = $memory_2->[$memory_7];
#line 789
undef($memory_7);
#line 789
$memory_9 = 0;
#line 789
$memory_8 = $memory_2->[$memory_9];
#line 789
undef($memory_9);
#line 789
$memory_7 = array::len($memory_8);
#line 789
undef($memory_8);
#line 789
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 789
undef($memory_7);
#line 789
label_17:
#line 789
undef($memory_6);
#line 789
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 789
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 789
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 789
undef($memory_0);
#line 789
undef($memory_4);
#line 789
undef($memory_5);
#line 789
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 789
goto label_16;
#line 789
label_16:
#line 789
undef($memory_5);
#line 790
$memory_6 = 2;
#line 790
$memory_5 = $memory_2->[$memory_6];
#line 790
undef($memory_6);
#line 790
$memory_6 = 0;
#line 790
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_6);
#line 790
undef($memory_6);
#line 790
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 790
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 790
if (c_rt_lib::check_true($memory_5)) {goto label_19;}
#line 790
undef($memory_0);
#line 790
undef($memory_4);
#line 790
undef($memory_5);
#line 790
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 790
goto label_19;
#line 790
label_19:
#line 790
undef($memory_5);
#line 791
$memory_7 = 1;
#line 791
$memory_5 = $memory_2->[$memory_7];
#line 791
undef($memory_7);
#line 791
$memory_8 = 2;
#line 791
$memory_7 = $memory_2->[$memory_8];
#line 791
undef($memory_8);
#line 791
$memory_5 = $memory_5 + $memory_7;
#line 791
undef($memory_7);
#line 791
$memory_7 = 0;
#line 791
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 791
undef($memory_7);
#line 791
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 791
if (c_rt_lib::check_true($memory_6)) {goto label_22;}
#line 791
$memory_7 = 1;
#line 791
$memory_5 = $memory_2->[$memory_7];
#line 791
undef($memory_7);
#line 791
$memory_8 = 2;
#line 791
$memory_7 = $memory_2->[$memory_8];
#line 791
undef($memory_8);
#line 791
$memory_5 = $memory_5 + $memory_7;
#line 791
undef($memory_7);
#line 791
$memory_7 = 1;
#line 791
$memory_5 = $memory_5 - $memory_7;
#line 791
undef($memory_7);
#line 791
$memory_9 = 0;
#line 791
$memory_8 = $memory_2->[$memory_9];
#line 791
undef($memory_9);
#line 791
$memory_7 = array::len($memory_8);
#line 791
undef($memory_8);
#line 791
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 791
undef($memory_7);
#line 791
label_22:
#line 791
undef($memory_6);
#line 791
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 791
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 791
if (c_rt_lib::check_true($memory_5)) {goto label_21;}
#line 791
undef($memory_0);
#line 791
undef($memory_4);
#line 791
undef($memory_5);
#line 791
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 791
goto label_21;
#line 791
label_21:
#line 791
undef($memory_5);
#line 792
$memory_7 = 0;
#line 792
$memory_6 = $memory_2->[$memory_7];
#line 792
undef($memory_7);
#line 792
$memory_8 = 1;
#line 792
$memory_7 = $memory_2->[$memory_8];
#line 792
undef($memory_8);
#line 792
$memory_9 = 2;
#line 792
$memory_8 = $memory_2->[$memory_9];
#line 792
undef($memory_9);
#line 792
$memory_5 = array::subarray($memory_6, $memory_7, $memory_8);
#line 792
undef($memory_8);
#line 792
undef($memory_7);
#line 792
undef($memory_6);
#line 792
$memory_1 = $memory_5;
#line 792
undef($memory_5);
#line 793
goto label_3;
#line 793
label_8:
#line 793
$memory_4 = "array::append";
#line 793
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 793
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 793
if (c_rt_lib::check_true($memory_4)) {goto label_23;}
#line 794
$memory_7 = 1;
#line 794
$memory_6 = $memory_2->[$memory_7];
#line 794
undef($memory_7);
#line 794
$memory_5 = nl::is_array($memory_6);
#line 794
undef($memory_6);
#line 794
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 794
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 794
if (c_rt_lib::check_true($memory_5)) {goto label_25;}
#line 794
undef($memory_0);
#line 794
undef($memory_4);
#line 794
undef($memory_5);
#line 794
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 794
goto label_25;
#line 794
label_25:
#line 794
undef($memory_5);
#line 795
$memory_6 = 0;
#line 795
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 795
$memory_8 = 1;
#line 795
$memory_7 = $memory_2->[$memory_8];
#line 795
undef($memory_8);
#line 795
array::append($memory_5, $memory_7);
#line 795
undef($memory_7);
#line 795
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 795
undef($memory_5);
#line 795
undef($memory_6);
#line 796
goto label_3;
#line 796
label_23:
#line 796
$memory_4 = "array::len";
#line 796
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 796
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 796
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 797
$memory_7 = 0;
#line 797
$memory_6 = $memory_2->[$memory_7];
#line 797
undef($memory_7);
#line 797
$memory_5 = array::len($memory_6);
#line 797
undef($memory_6);
#line 797
$memory_1 = $memory_5;
#line 797
undef($memory_5);
#line 798
goto label_3;
#line 798
label_26:
#line 798
$memory_4 = "array::cmp";
#line 798
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 798
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 798
if (c_rt_lib::check_true($memory_4)) {goto label_27;}
#line 799
$memory_7 = 1;
#line 799
$memory_6 = $memory_2->[$memory_7];
#line 799
undef($memory_7);
#line 799
$memory_5 = nl::is_array($memory_6);
#line 799
undef($memory_6);
#line 799
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 799
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 799
if (c_rt_lib::check_true($memory_5)) {goto label_29;}
#line 799
undef($memory_0);
#line 799
undef($memory_4);
#line 799
undef($memory_5);
#line 799
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 799
goto label_29;
#line 799
label_29:
#line 799
undef($memory_5);
#line 800
$memory_7 = 0;
#line 800
$memory_6 = $memory_2->[$memory_7];
#line 800
undef($memory_7);
#line 800
$memory_8 = 1;
#line 800
$memory_7 = $memory_2->[$memory_8];
#line 800
undef($memory_8);
#line 800
$memory_5 = array::cmp($memory_6, $memory_7);
#line 800
undef($memory_7);
#line 800
undef($memory_6);
#line 800
$memory_1 = $memory_5;
#line 800
undef($memory_5);
#line 801
goto label_3;
#line 801
label_27:
#line 801
$memory_4 = "array::sort";
#line 801
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 801
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 801
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 802
$memory_7 = ptd::sim();
#line 802
$memory_6 = ptd::arr($memory_7);
#line 802
undef($memory_7);
#line 802
$memory_8 = 0;
#line 802
$memory_7 = $memory_2->[$memory_8];
#line 802
undef($memory_8);
#line 802
$memory_5 = ptd::try_dynamic_cast($memory_6, $memory_7);
#line 802
undef($memory_7);
#line 802
undef($memory_6);
#line 802
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 802
if (c_rt_lib::check_true($memory_6)) {goto label_32;}
#line 803
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 803
if (c_rt_lib::check_true($memory_6)) {goto label_33;}
#line 803
$memory_6 = "NOMATCHALERT";
#line 803
$memory_6 = [$memory_6,$memory_5];
#line 803
die(dfile::ssave($memory_6));
#line 802
label_32:
#line 802
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 802
undef($memory_7);
#line 803
goto label_31;
#line 803
label_33:
#line 803
$memory_7 = c_rt_lib::ov_as($memory_5, 'err');
#line 804
$memory_8 = "incorrect type";
#line 804
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 804
undef($memory_0);
#line 804
undef($memory_3);
#line 804
undef($memory_4);
#line 804
undef($memory_5);
#line 804
undef($memory_6);
#line 804
undef($memory_7);
#line 804
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_8;
#line 804
undef($memory_8);
#line 804
undef($memory_7);
#line 805
goto label_31;
#line 805
label_31:
#line 805
undef($memory_5);
#line 805
undef($memory_6);
#line 806
array::sort($memory_1);
#line 807
goto label_3;
#line 807
label_30:
#line 808
$memory_5 = [];
#line 808
die(dfile::ssave($memory_5));
#line 808
undef($memory_5);
#line 809
goto label_3;
#line 809
label_3:
#line 809
undef($memory_4);
#line 810
$memory_4 = "";
#line 810
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 810
undef($memory_0);
#line 810
undef($memory_3);
#line 810
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 810
undef($memory_4);
#line 810
undef($memory_3);
#line 810
undef($memory_0);
#line 810
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_hash_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 817
$memory_3 = "incorrect command";
#line 817
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 818
$memory_6 = 0;
#line 818
$memory_5 = $memory_2->[$memory_6];
#line 818
undef($memory_6);
#line 818
$memory_4 = nl::is_hash($memory_5);
#line 818
undef($memory_5);
#line 818
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 818
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 818
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 818
undef($memory_0);
#line 818
undef($memory_4);
#line 818
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 818
goto label_2;
#line 818
label_2:
#line 818
undef($memory_4);
#line 819
$memory_4 = "hash::get_value";
#line 819
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 819
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 819
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 820
$memory_7 = 1;
#line 820
$memory_6 = $memory_2->[$memory_7];
#line 820
undef($memory_7);
#line 820
$memory_5 = nl::is_sim($memory_6);
#line 820
undef($memory_6);
#line 820
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 820
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 820
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 820
undef($memory_0);
#line 820
undef($memory_4);
#line 820
undef($memory_5);
#line 820
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 820
goto label_6;
#line 820
label_6:
#line 820
undef($memory_5);
#line 821
$memory_7 = 0;
#line 821
$memory_6 = $memory_2->[$memory_7];
#line 821
undef($memory_7);
#line 821
$memory_8 = 1;
#line 821
$memory_7 = $memory_2->[$memory_8];
#line 821
undef($memory_8);
#line 821
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 821
undef($memory_7);
#line 821
undef($memory_6);
#line 821
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 821
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 821
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 821
undef($memory_0);
#line 821
undef($memory_4);
#line 821
undef($memory_5);
#line 821
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 821
goto label_8;
#line 821
label_8:
#line 821
undef($memory_5);
#line 822
$memory_7 = 0;
#line 822
$memory_6 = $memory_2->[$memory_7];
#line 822
undef($memory_7);
#line 822
$memory_8 = 1;
#line 822
$memory_7 = $memory_2->[$memory_8];
#line 822
undef($memory_8);
#line 822
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 822
undef($memory_7);
#line 822
undef($memory_6);
#line 822
$memory_1 = $memory_5;
#line 822
undef($memory_5);
#line 823
goto label_3;
#line 823
label_4:
#line 823
$memory_4 = "hash::has_key";
#line 823
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 823
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 823
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 824
$memory_7 = 1;
#line 824
$memory_6 = $memory_2->[$memory_7];
#line 824
undef($memory_7);
#line 824
$memory_5 = nl::is_sim($memory_6);
#line 824
undef($memory_6);
#line 824
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 824
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 824
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 824
undef($memory_0);
#line 824
undef($memory_4);
#line 824
undef($memory_5);
#line 824
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 824
goto label_11;
#line 824
label_11:
#line 824
undef($memory_5);
#line 825
$memory_7 = 0;
#line 825
$memory_6 = $memory_2->[$memory_7];
#line 825
undef($memory_7);
#line 825
$memory_8 = 1;
#line 825
$memory_7 = $memory_2->[$memory_8];
#line 825
undef($memory_8);
#line 825
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 825
undef($memory_7);
#line 825
undef($memory_6);
#line 825
$memory_1 = $memory_5;
#line 825
undef($memory_5);
#line 826
goto label_3;
#line 826
label_9:
#line 826
$memory_4 = "hash::set_value";
#line 826
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 826
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 826
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 827
$memory_7 = 1;
#line 827
$memory_6 = $memory_2->[$memory_7];
#line 827
undef($memory_7);
#line 827
$memory_5 = nl::is_sim($memory_6);
#line 827
undef($memory_6);
#line 827
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 827
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 827
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 827
undef($memory_0);
#line 827
undef($memory_4);
#line 827
undef($memory_5);
#line 827
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 827
goto label_14;
#line 827
label_14:
#line 827
undef($memory_5);
#line 828
$memory_6 = 0;
#line 828
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 828
$memory_8 = 1;
#line 828
$memory_7 = $memory_2->[$memory_8];
#line 828
undef($memory_8);
#line 828
$memory_9 = 2;
#line 828
$memory_8 = $memory_2->[$memory_9];
#line 828
undef($memory_9);
#line 828
hash::set_value($memory_5, $memory_7, $memory_8);
#line 828
undef($memory_8);
#line 828
undef($memory_7);
#line 828
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 828
undef($memory_5);
#line 828
undef($memory_6);
#line 829
goto label_3;
#line 829
label_12:
#line 829
$memory_4 = "hash::delete";
#line 829
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 829
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 829
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 830
$memory_7 = 1;
#line 830
$memory_6 = $memory_2->[$memory_7];
#line 830
undef($memory_7);
#line 830
$memory_5 = nl::is_sim($memory_6);
#line 830
undef($memory_6);
#line 830
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 830
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 830
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 830
undef($memory_0);
#line 830
undef($memory_4);
#line 830
undef($memory_5);
#line 830
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 830
goto label_17;
#line 830
label_17:
#line 830
undef($memory_5);
#line 831
$memory_6 = 0;
#line 831
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 831
$memory_8 = 1;
#line 831
$memory_7 = $memory_2->[$memory_8];
#line 831
undef($memory_8);
#line 831
hash::delete($memory_5, $memory_7);
#line 831
undef($memory_7);
#line 831
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 831
undef($memory_5);
#line 831
undef($memory_6);
#line 832
goto label_3;
#line 832
label_15:
#line 832
$memory_4 = "hash::size";
#line 832
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 832
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 832
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 833
$memory_7 = 0;
#line 833
$memory_6 = $memory_2->[$memory_7];
#line 833
undef($memory_7);
#line 833
$memory_5 = hash::size($memory_6);
#line 833
undef($memory_6);
#line 833
$memory_1 = $memory_5;
#line 833
undef($memory_5);
#line 834
goto label_3;
#line 834
label_18:
#line 834
$memory_4 = "hash::keys";
#line 834
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 834
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 834
if (c_rt_lib::check_true($memory_4)) {goto label_19;}
#line 835
$memory_7 = 0;
#line 835
$memory_6 = $memory_2->[$memory_7];
#line 835
undef($memory_7);
#line 835
$memory_5 = hash::keys($memory_6);
#line 835
undef($memory_6);
#line 835
$memory_1 = $memory_5;
#line 835
undef($memory_5);
#line 836
goto label_3;
#line 836
label_19:
#line 837
$memory_5 = [];
#line 837
die(dfile::ssave($memory_5));
#line 837
undef($memory_5);
#line 838
goto label_3;
#line 838
label_3:
#line 838
undef($memory_4);
#line 839
$memory_4 = "";
#line 839
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 839
undef($memory_0);
#line 839
undef($memory_3);
#line 839
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 839
undef($memory_4);
#line 839
undef($memory_3);
#line 839
undef($memory_0);
#line 839
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_string_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 846
$memory_3 = "incorrect command";
#line 846
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 847
$memory_4 = "string::lf";
#line 847
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 847
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 847
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 848
$memory_5 = string::lf();
#line 848
$memory_1 = $memory_5;
#line 848
undef($memory_5);
#line 849
goto label_1;
#line 849
label_2:
#line 849
$memory_4 = "string::tab";
#line 849
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 849
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 849
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 850
$memory_5 = string::tab();
#line 850
$memory_1 = $memory_5;
#line 850
undef($memory_5);
#line 851
goto label_1;
#line 851
label_3:
#line 851
$memory_4 = "string::ord";
#line 851
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 851
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 851
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 852
$memory_7 = 0;
#line 852
$memory_6 = $memory_2->[$memory_7];
#line 852
undef($memory_7);
#line 852
$memory_5 = nl::is_sim($memory_6);
#line 852
undef($memory_6);
#line 852
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 852
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 852
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 852
undef($memory_0);
#line 852
undef($memory_4);
#line 852
undef($memory_5);
#line 852
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 852
goto label_6;
#line 852
label_6:
#line 852
undef($memory_5);
#line 853
$memory_7 = 0;
#line 853
$memory_6 = $memory_2->[$memory_7];
#line 853
undef($memory_7);
#line 853
$memory_5 = string::length($memory_6);
#line 853
undef($memory_6);
#line 853
$memory_6 = 1;
#line 853
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 853
undef($memory_6);
#line 853
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 853
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 853
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 853
undef($memory_0);
#line 853
undef($memory_4);
#line 853
undef($memory_5);
#line 853
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 853
goto label_8;
#line 853
label_8:
#line 853
undef($memory_5);
#line 854
$memory_7 = 0;
#line 854
$memory_6 = $memory_2->[$memory_7];
#line 854
undef($memory_7);
#line 854
$memory_5 = string::ord($memory_6);
#line 854
undef($memory_6);
#line 854
$memory_1 = $memory_5;
#line 854
undef($memory_5);
#line 855
goto label_1;
#line 855
label_4:
#line 855
$memory_4 = "string::chr";
#line 855
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 855
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 855
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 856
$memory_7 = 0;
#line 856
$memory_6 = $memory_2->[$memory_7];
#line 856
undef($memory_7);
#line 856
$memory_5 = nl::is_sim($memory_6);
#line 856
undef($memory_6);
#line 856
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 856
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 856
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 856
undef($memory_0);
#line 856
undef($memory_4);
#line 856
undef($memory_5);
#line 856
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 856
goto label_11;
#line 856
label_11:
#line 856
undef($memory_5);
#line 857
$memory_7 = 0;
#line 857
$memory_6 = $memory_2->[$memory_7];
#line 857
undef($memory_7);
#line 857
$memory_5 = string_utils::is_number($memory_6);
#line 857
undef($memory_6);
#line 857
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 857
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 857
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 857
undef($memory_0);
#line 857
undef($memory_4);
#line 857
undef($memory_5);
#line 857
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 857
goto label_13;
#line 857
label_13:
#line 857
undef($memory_5);
#line 858
$memory_7 = 0;
#line 858
$memory_6 = $memory_2->[$memory_7];
#line 858
undef($memory_7);
#line 858
$memory_5 = string::chr($memory_6);
#line 858
undef($memory_6);
#line 858
$memory_1 = $memory_5;
#line 858
undef($memory_5);
#line 859
goto label_1;
#line 859
label_9:
#line 860
$memory_7 = 0;
#line 860
$memory_6 = $memory_2->[$memory_7];
#line 860
undef($memory_7);
#line 860
$memory_5 = nl::is_sim($memory_6);
#line 860
undef($memory_6);
#line 860
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 860
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 860
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 860
undef($memory_0);
#line 860
undef($memory_4);
#line 860
undef($memory_5);
#line 860
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 860
goto label_15;
#line 860
label_15:
#line 860
undef($memory_5);
#line 861
$memory_5 = "string::length";
#line 861
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 861
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 861
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 862
$memory_8 = 0;
#line 862
$memory_7 = $memory_2->[$memory_8];
#line 862
undef($memory_8);
#line 862
$memory_6 = string::length($memory_7);
#line 862
undef($memory_7);
#line 862
$memory_1 = $memory_6;
#line 862
undef($memory_6);
#line 863
goto label_16;
#line 863
label_17:
#line 863
$memory_5 = "string::substr";
#line 863
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 863
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 863
if (c_rt_lib::check_true($memory_5)) {goto label_18;}
#line 864
$memory_9 = 1;
#line 864
$memory_8 = $memory_2->[$memory_9];
#line 864
undef($memory_9);
#line 864
$memory_6 = nl::is_sim($memory_8);
#line 864
undef($memory_8);
#line 864
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 864
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 864
$memory_9 = 2;
#line 864
$memory_8 = $memory_2->[$memory_9];
#line 864
undef($memory_9);
#line 864
$memory_6 = nl::is_sim($memory_8);
#line 864
undef($memory_8);
#line 864
label_21:
#line 864
undef($memory_7);
#line 864
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 864
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 864
if (c_rt_lib::check_true($memory_6)) {goto label_20;}
#line 864
undef($memory_0);
#line 864
undef($memory_4);
#line 864
undef($memory_5);
#line 864
undef($memory_6);
#line 864
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 864
goto label_20;
#line 864
label_20:
#line 864
undef($memory_6);
#line 865
$memory_9 = 1;
#line 865
$memory_8 = $memory_2->[$memory_9];
#line 865
undef($memory_9);
#line 865
$memory_6 = string_utils::is_number($memory_8);
#line 865
undef($memory_8);
#line 865
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 865
if (c_rt_lib::check_true($memory_7)) {goto label_24;}
#line 865
$memory_9 = 2;
#line 865
$memory_8 = $memory_2->[$memory_9];
#line 865
undef($memory_9);
#line 865
$memory_6 = string_utils::is_number($memory_8);
#line 865
undef($memory_8);
#line 865
label_24:
#line 865
undef($memory_7);
#line 865
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 865
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 865
if (c_rt_lib::check_true($memory_6)) {goto label_23;}
#line 865
undef($memory_0);
#line 865
undef($memory_4);
#line 865
undef($memory_5);
#line 865
undef($memory_6);
#line 865
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 865
goto label_23;
#line 865
label_23:
#line 865
undef($memory_6);
#line 866
$memory_8 = 1;
#line 866
$memory_6 = $memory_2->[$memory_8];
#line 866
undef($memory_8);
#line 866
$memory_8 = 0;
#line 866
$memory_6 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 866
undef($memory_8);
#line 866
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 866
if (c_rt_lib::check_true($memory_7)) {goto label_27;}
#line 866
$memory_8 = 1;
#line 866
$memory_6 = $memory_2->[$memory_8];
#line 866
undef($memory_8);
#line 866
$memory_10 = 0;
#line 866
$memory_9 = $memory_2->[$memory_10];
#line 866
undef($memory_10);
#line 866
$memory_8 = string::length($memory_9);
#line 866
undef($memory_9);
#line 866
$memory_6 = c_rt_lib::to_nl($memory_6 < $memory_8);
#line 866
undef($memory_8);
#line 866
label_27:
#line 866
undef($memory_7);
#line 866
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 866
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 866
if (c_rt_lib::check_true($memory_6)) {goto label_26;}
#line 866
undef($memory_0);
#line 866
undef($memory_4);
#line 866
undef($memory_5);
#line 866
undef($memory_6);
#line 866
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 866
goto label_26;
#line 866
label_26:
#line 866
undef($memory_6);
#line 867
$memory_7 = 2;
#line 867
$memory_6 = $memory_2->[$memory_7];
#line 867
undef($memory_7);
#line 867
$memory_7 = 0;
#line 867
$memory_6 = c_rt_lib::to_nl($memory_6 >= $memory_7);
#line 867
undef($memory_7);
#line 867
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 867
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 867
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 867
undef($memory_0);
#line 867
undef($memory_4);
#line 867
undef($memory_5);
#line 867
undef($memory_6);
#line 867
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 867
goto label_29;
#line 867
label_29:
#line 867
undef($memory_6);
#line 868
$memory_8 = 1;
#line 868
$memory_6 = $memory_2->[$memory_8];
#line 868
undef($memory_8);
#line 868
$memory_9 = 2;
#line 868
$memory_8 = $memory_2->[$memory_9];
#line 868
undef($memory_9);
#line 868
$memory_6 = $memory_6 + $memory_8;
#line 868
undef($memory_8);
#line 868
$memory_8 = 0;
#line 868
$memory_6 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 868
undef($memory_8);
#line 868
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 868
if (c_rt_lib::check_true($memory_7)) {goto label_32;}
#line 868
$memory_8 = 1;
#line 868
$memory_6 = $memory_2->[$memory_8];
#line 868
undef($memory_8);
#line 868
$memory_9 = 2;
#line 868
$memory_8 = $memory_2->[$memory_9];
#line 868
undef($memory_9);
#line 868
$memory_6 = $memory_6 + $memory_8;
#line 868
undef($memory_8);
#line 868
$memory_8 = 1;
#line 868
$memory_6 = $memory_6 - $memory_8;
#line 868
undef($memory_8);
#line 868
$memory_10 = 0;
#line 868
$memory_9 = $memory_2->[$memory_10];
#line 868
undef($memory_10);
#line 868
$memory_8 = string::length($memory_9);
#line 868
undef($memory_9);
#line 868
$memory_6 = c_rt_lib::to_nl($memory_6 < $memory_8);
#line 868
undef($memory_8);
#line 868
label_32:
#line 868
undef($memory_7);
#line 868
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 868
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 868
if (c_rt_lib::check_true($memory_6)) {goto label_31;}
#line 868
undef($memory_0);
#line 868
undef($memory_4);
#line 868
undef($memory_5);
#line 868
undef($memory_6);
#line 868
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 868
goto label_31;
#line 868
label_31:
#line 868
undef($memory_6);
#line 869
$memory_8 = 0;
#line 869
$memory_7 = $memory_2->[$memory_8];
#line 869
undef($memory_8);
#line 869
$memory_9 = 1;
#line 869
$memory_8 = $memory_2->[$memory_9];
#line 869
undef($memory_9);
#line 869
$memory_10 = 2;
#line 869
$memory_9 = $memory_2->[$memory_10];
#line 869
undef($memory_10);
#line 869
$memory_6 = string::substr($memory_7, $memory_8, $memory_9);
#line 869
undef($memory_9);
#line 869
undef($memory_8);
#line 869
undef($memory_7);
#line 869
$memory_1 = $memory_6;
#line 869
undef($memory_6);
#line 870
goto label_16;
#line 870
label_18:
#line 870
$memory_5 = "string::is_digit";
#line 870
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 870
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 870
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 871
$memory_8 = 0;
#line 871
$memory_7 = $memory_2->[$memory_8];
#line 871
undef($memory_8);
#line 871
$memory_6 = string::length($memory_7);
#line 871
undef($memory_7);
#line 871
$memory_7 = 1;
#line 871
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 871
undef($memory_7);
#line 871
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 871
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 871
if (c_rt_lib::check_true($memory_6)) {goto label_35;}
#line 871
undef($memory_0);
#line 871
undef($memory_4);
#line 871
undef($memory_5);
#line 871
undef($memory_6);
#line 871
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 871
goto label_35;
#line 871
label_35:
#line 871
undef($memory_6);
#line 872
$memory_8 = 0;
#line 872
$memory_7 = $memory_2->[$memory_8];
#line 872
undef($memory_8);
#line 872
$memory_6 = string::is_digit($memory_7);
#line 872
undef($memory_7);
#line 872
$memory_1 = $memory_6;
#line 872
undef($memory_6);
#line 873
goto label_16;
#line 873
label_33:
#line 873
$memory_5 = "string::is_letter";
#line 873
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 873
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 873
if (c_rt_lib::check_true($memory_5)) {goto label_36;}
#line 874
$memory_8 = 0;
#line 874
$memory_7 = $memory_2->[$memory_8];
#line 874
undef($memory_8);
#line 874
$memory_6 = string::length($memory_7);
#line 874
undef($memory_7);
#line 874
$memory_7 = 1;
#line 874
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 874
undef($memory_7);
#line 874
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 874
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 874
if (c_rt_lib::check_true($memory_6)) {goto label_38;}
#line 874
undef($memory_0);
#line 874
undef($memory_4);
#line 874
undef($memory_5);
#line 874
undef($memory_6);
#line 874
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 874
goto label_38;
#line 874
label_38:
#line 874
undef($memory_6);
#line 875
$memory_8 = 0;
#line 875
$memory_7 = $memory_2->[$memory_8];
#line 875
undef($memory_8);
#line 875
$memory_6 = string::is_letter($memory_7);
#line 875
undef($memory_7);
#line 875
$memory_1 = $memory_6;
#line 875
undef($memory_6);
#line 876
goto label_16;
#line 876
label_36:
#line 877
$memory_6 = [];
#line 877
die(dfile::ssave($memory_6));
#line 877
undef($memory_6);
#line 878
goto label_16;
#line 878
label_16:
#line 878
undef($memory_5);
#line 879
goto label_1;
#line 879
label_1:
#line 879
undef($memory_4);
#line 880
$memory_4 = "";
#line 880
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 880
undef($memory_0);
#line 880
undef($memory_3);
#line 880
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 880
undef($memory_4);
#line 880
undef($memory_3);
#line 880
undef($memory_0);
#line 880
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_ov_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 887
$memory_3 = "incorrect command";
#line 887
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 888
$memory_4 = "ov::mk";
#line 888
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 888
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 888
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 889
$memory_7 = 0;
#line 889
$memory_6 = $memory_2->[$memory_7];
#line 889
undef($memory_7);
#line 889
$memory_5 = nl::is_sim($memory_6);
#line 889
undef($memory_6);
#line 889
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 889
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 889
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 889
undef($memory_0);
#line 889
undef($memory_4);
#line 889
undef($memory_5);
#line 889
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 889
goto label_4;
#line 889
label_4:
#line 889
undef($memory_5);
#line 890
$memory_7 = 0;
#line 890
$memory_6 = $memory_2->[$memory_7];
#line 890
undef($memory_7);
#line 890
$memory_5 = ov::mk($memory_6);
#line 890
undef($memory_6);
#line 890
$memory_1 = $memory_5;
#line 890
undef($memory_5);
#line 891
goto label_1;
#line 891
label_2:
#line 891
$memory_4 = "ov::mk_val";
#line 891
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 891
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 891
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 892
$memory_7 = 0;
#line 892
$memory_6 = $memory_2->[$memory_7];
#line 892
undef($memory_7);
#line 892
$memory_5 = nl::is_sim($memory_6);
#line 892
undef($memory_6);
#line 892
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 892
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 892
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 892
undef($memory_0);
#line 892
undef($memory_4);
#line 892
undef($memory_5);
#line 892
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 892
goto label_7;
#line 892
label_7:
#line 892
undef($memory_5);
#line 893
$memory_7 = 0;
#line 893
$memory_6 = $memory_2->[$memory_7];
#line 893
undef($memory_7);
#line 893
$memory_8 = 1;
#line 893
$memory_7 = $memory_2->[$memory_8];
#line 893
undef($memory_8);
#line 893
$memory_5 = ov::mk_val($memory_6, $memory_7);
#line 893
undef($memory_7);
#line 893
undef($memory_6);
#line 893
$memory_1 = $memory_5;
#line 893
undef($memory_5);
#line 894
goto label_1;
#line 894
label_5:
#line 895
$memory_7 = 0;
#line 895
$memory_6 = $memory_2->[$memory_7];
#line 895
undef($memory_7);
#line 895
$memory_5 = nl::is_variant($memory_6);
#line 895
undef($memory_6);
#line 895
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 895
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 895
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 895
undef($memory_0);
#line 895
undef($memory_4);
#line 895
undef($memory_5);
#line 895
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 895
goto label_9;
#line 895
label_9:
#line 895
undef($memory_5);
#line 896
$memory_5 = "ov::has_value";
#line 896
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 896
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 896
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 897
$memory_8 = 0;
#line 897
$memory_7 = $memory_2->[$memory_8];
#line 897
undef($memory_8);
#line 897
$memory_6 = ov::has_value($memory_7);
#line 897
undef($memory_7);
#line 897
$memory_1 = $memory_6;
#line 897
undef($memory_6);
#line 898
goto label_17;
#line 898
label_11:
#line 898
$memory_5 = "ov::get_element";
#line 898
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 898
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 898
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 899
$memory_8 = 0;
#line 899
$memory_7 = $memory_2->[$memory_8];
#line 899
undef($memory_8);
#line 899
$memory_6 = ov::get_element($memory_7);
#line 899
undef($memory_7);
#line 899
$memory_1 = $memory_6;
#line 899
undef($memory_6);
#line 900
goto label_17;
#line 900
label_12:
#line 900
$memory_5 = "ov::get_value";
#line 900
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 900
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 900
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 901
$memory_8 = 0;
#line 901
$memory_7 = $memory_2->[$memory_8];
#line 901
undef($memory_8);
#line 901
$memory_6 = ov::get_value($memory_7);
#line 901
undef($memory_7);
#line 901
$memory_1 = $memory_6;
#line 901
undef($memory_6);
#line 902
goto label_17;
#line 902
label_13:
#line 902
$memory_5 = "ov::is";
#line 902
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 902
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 902
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 903
$memory_8 = 1;
#line 903
$memory_7 = $memory_2->[$memory_8];
#line 903
undef($memory_8);
#line 903
$memory_6 = nl::is_sim($memory_7);
#line 903
undef($memory_7);
#line 903
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 903
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 903
if (c_rt_lib::check_true($memory_6)) {goto label_16;}
#line 903
undef($memory_0);
#line 903
undef($memory_4);
#line 903
undef($memory_5);
#line 903
undef($memory_6);
#line 903
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 903
goto label_16;
#line 903
label_16:
#line 903
undef($memory_6);
#line 904
$memory_8 = 0;
#line 904
$memory_7 = $memory_2->[$memory_8];
#line 904
undef($memory_8);
#line 904
$memory_9 = 1;
#line 904
$memory_8 = $memory_2->[$memory_9];
#line 904
undef($memory_9);
#line 904
$memory_6 = ov::is($memory_7, $memory_8);
#line 904
undef($memory_8);
#line 904
undef($memory_7);
#line 904
$memory_1 = $memory_6;
#line 904
undef($memory_6);
#line 905
goto label_17;
#line 905
label_14:
#line 905
$memory_5 = "ov::as";
#line 905
$memory_5 = c_rt_lib::to_nl($memory_0 eq $memory_5);
#line 905
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 905
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 906
$memory_8 = 1;
#line 906
$memory_7 = $memory_2->[$memory_8];
#line 906
undef($memory_8);
#line 906
$memory_6 = nl::is_sim($memory_7);
#line 906
undef($memory_7);
#line 906
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 906
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 906
if (c_rt_lib::check_true($memory_6)) {goto label_19;}
#line 906
undef($memory_0);
#line 906
undef($memory_4);
#line 906
undef($memory_5);
#line 906
undef($memory_6);
#line 906
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 906
goto label_19;
#line 906
label_19:
#line 906
undef($memory_6);
#line 907
$memory_8 = 0;
#line 907
$memory_7 = $memory_2->[$memory_8];
#line 907
undef($memory_8);
#line 907
$memory_9 = 1;
#line 907
$memory_8 = $memory_2->[$memory_9];
#line 907
undef($memory_9);
#line 907
$memory_6 = ov::is($memory_7, $memory_8);
#line 907
undef($memory_8);
#line 907
undef($memory_7);
#line 907
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 907
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 907
if (c_rt_lib::check_true($memory_6)) {goto label_21;}
#line 907
undef($memory_0);
#line 907
undef($memory_4);
#line 907
undef($memory_5);
#line 907
undef($memory_6);
#line 907
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 907
goto label_21;
#line 907
label_21:
#line 907
undef($memory_6);
#line 908
$memory_8 = 0;
#line 908
$memory_7 = $memory_2->[$memory_8];
#line 908
undef($memory_8);
#line 908
$memory_9 = 1;
#line 908
$memory_8 = $memory_2->[$memory_9];
#line 908
undef($memory_9);
#line 908
$memory_6 = ov::as($memory_7, $memory_8);
#line 908
undef($memory_8);
#line 908
undef($memory_7);
#line 908
$memory_1 = $memory_6;
#line 908
undef($memory_6);
#line 909
goto label_17;
#line 909
label_17:
#line 909
undef($memory_5);
#line 910
goto label_1;
#line 910
label_1:
#line 910
undef($memory_4);
#line 911
$memory_4 = "";
#line 911
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 911
undef($memory_0);
#line 911
undef($memory_3);
#line 911
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 911
undef($memory_4);
#line 911
undef($memory_3);
#line 911
undef($memory_0);
#line 911
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_ptd_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 918
$memory_3 = "incorrect command";
#line 918
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 919
$memory_4 = "ptd::sim";
#line 919
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 919
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 919
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 920
$memory_5 = ptd::sim();
#line 920
$memory_1 = $memory_5;
#line 920
undef($memory_5);
#line 921
goto label_1;
#line 921
label_2:
#line 921
$memory_4 = "ptd::none";
#line 921
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 921
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 921
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 922
$memory_5 = ptd::none();
#line 922
$memory_1 = $memory_5;
#line 922
undef($memory_5);
#line 923
goto label_1;
#line 923
label_3:
#line 923
$memory_4 = "ptd::ptd_im";
#line 923
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 923
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 923
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 924
$memory_5 = ptd::ptd_im();
#line 924
$memory_1 = $memory_5;
#line 924
undef($memory_5);
#line 925
goto label_1;
#line 925
label_4:
#line 925
$memory_4 = "ptd::arr";
#line 925
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 925
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 925
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 926
$memory_6 = {
	module => "ptd",
	name => "meta_type",
};
#line 926
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 926
$memory_8 = 0;
#line 926
$memory_7 = $memory_2->[$memory_8];
#line 926
undef($memory_8);
#line 926
$memory_5 = ptd::try_cast($memory_6, $memory_7);
#line 926
undef($memory_7);
#line 926
undef($memory_6);
#line 926
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 926
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 928
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 928
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 928
$memory_6 = "NOMATCHALERT";
#line 928
$memory_6 = [$memory_6,$memory_5];
#line 928
die(dfile::ssave($memory_6));
#line 926
label_7:
#line 926
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 927
$memory_8 = ptd::arr($memory_7);
#line 927
$memory_1 = $memory_8;
#line 927
undef($memory_8);
#line 927
undef($memory_7);
#line 928
goto label_6;
#line 928
label_8:
#line 928
$memory_7 = c_rt_lib::ov_as($memory_5, 'err');
#line 929
$memory_8 = "incorrect type";
#line 929
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 929
undef($memory_0);
#line 929
undef($memory_3);
#line 929
undef($memory_4);
#line 929
undef($memory_5);
#line 929
undef($memory_6);
#line 929
undef($memory_7);
#line 929
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_8;
#line 929
undef($memory_8);
#line 929
undef($memory_7);
#line 930
goto label_6;
#line 930
label_6:
#line 930
undef($memory_5);
#line 930
undef($memory_6);
#line 931
goto label_1;
#line 931
label_5:
#line 931
$memory_4 = "ptd::hash";
#line 931
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 931
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 931
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 932
$memory_6 = {
	module => "ptd",
	name => "meta_type",
};
#line 932
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 932
$memory_8 = 0;
#line 932
$memory_7 = $memory_2->[$memory_8];
#line 932
undef($memory_8);
#line 932
$memory_5 = ptd::try_cast($memory_6, $memory_7);
#line 932
undef($memory_7);
#line 932
undef($memory_6);
#line 932
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 932
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 934
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 934
if (c_rt_lib::check_true($memory_6)) {goto label_12;}
#line 934
$memory_6 = "NOMATCHALERT";
#line 934
$memory_6 = [$memory_6,$memory_5];
#line 934
die(dfile::ssave($memory_6));
#line 932
label_11:
#line 932
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 933
$memory_8 = ptd::hash($memory_7);
#line 933
$memory_1 = $memory_8;
#line 933
undef($memory_8);
#line 933
undef($memory_7);
#line 934
goto label_10;
#line 934
label_12:
#line 934
$memory_7 = c_rt_lib::ov_as($memory_5, 'err');
#line 935
$memory_8 = "incorrect type";
#line 935
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 935
undef($memory_0);
#line 935
undef($memory_3);
#line 935
undef($memory_4);
#line 935
undef($memory_5);
#line 935
undef($memory_6);
#line 935
undef($memory_7);
#line 935
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_8;
#line 935
undef($memory_8);
#line 935
undef($memory_7);
#line 936
goto label_10;
#line 936
label_10:
#line 936
undef($memory_5);
#line 936
undef($memory_6);
#line 937
goto label_1;
#line 937
label_9:
#line 937
$memory_4 = "ptd::var";
#line 937
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 937
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 937
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 938
$memory_7 = 0;
#line 938
$memory_6 = $memory_2->[$memory_7];
#line 938
undef($memory_7);
#line 938
$memory_5 = ptd::var($memory_6);
#line 938
undef($memory_6);
#line 938
$memory_1 = $memory_5;
#line 938
undef($memory_5);
#line 939
goto label_1;
#line 939
label_13:
#line 939
$memory_4 = "ptd::ensure";
#line 939
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 939
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 939
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 940
$memory_7 = 0;
#line 940
$memory_6 = $memory_2->[$memory_7];
#line 940
undef($memory_7);
#line 940
$memory_8 = 1;
#line 940
$memory_7 = $memory_2->[$memory_8];
#line 940
undef($memory_8);
#line 940
$memory_5 = ptd::try_dynamic_cast($memory_6, $memory_7);
#line 940
undef($memory_7);
#line 940
undef($memory_6);
#line 940
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 940
if (c_rt_lib::check_true($memory_6)) {goto label_16;}
#line 942
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 942
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 942
$memory_6 = "NOMATCHALERT";
#line 942
$memory_6 = [$memory_6,$memory_5];
#line 942
die(dfile::ssave($memory_6));
#line 940
label_16:
#line 940
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 941
$memory_1 = $memory_7;
#line 941
undef($memory_7);
#line 942
goto label_15;
#line 942
label_17:
#line 942
$memory_7 = c_rt_lib::ov_as($memory_5, 'err');
#line 943
$memory_8 = "incorrect type";
#line 943
$memory_8 = c_rt_lib::ov_mk_arg('err', $memory_8);
#line 943
undef($memory_0);
#line 943
undef($memory_3);
#line 943
undef($memory_4);
#line 943
undef($memory_5);
#line 943
undef($memory_6);
#line 943
undef($memory_7);
#line 943
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_8;
#line 943
undef($memory_8);
#line 943
undef($memory_7);
#line 944
goto label_15;
#line 944
label_15:
#line 944
undef($memory_5);
#line 944
undef($memory_6);
#line 945
goto label_1;
#line 945
label_14:
#line 946
undef($memory_0);
#line 946
undef($memory_4);
#line 946
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 947
goto label_1;
#line 947
label_1:
#line 947
undef($memory_4);
#line 948
$memory_4 = "";
#line 948
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 948
undef($memory_0);
#line 948
undef($memory_3);
#line 948
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 948
undef($memory_4);
#line 948
undef($memory_3);
#line 948
undef($memory_0);
#line 948
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_c_rt_lib_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 955
$memory_3 = "incorrect command";
#line 955
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 956
$memory_4 = "c_rt_lib::array_len";
#line 956
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 956
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 956
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 957
$memory_7 = 0;
#line 957
$memory_6 = $memory_2->[$memory_7];
#line 957
undef($memory_7);
#line 957
$memory_5 = nl::is_array($memory_6);
#line 957
undef($memory_6);
#line 957
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 957
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 957
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 957
undef($memory_0);
#line 957
undef($memory_4);
#line 957
undef($memory_5);
#line 957
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 957
goto label_4;
#line 957
label_4:
#line 957
undef($memory_5);
#line 958
$memory_7 = 0;
#line 958
$memory_6 = $memory_2->[$memory_7];
#line 958
undef($memory_7);
#line 958
$memory_5 = c_rt_lib::array_len($memory_6);
#line 958
undef($memory_6);
#line 958
$memory_1 = $memory_5;
#line 958
undef($memory_5);
#line 959
goto label_49;
#line 959
label_2:
#line 959
$memory_4 = "c_rt_lib::set_ref_arr";
#line 959
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 959
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 959
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 960
$memory_7 = 0;
#line 960
$memory_6 = $memory_2->[$memory_7];
#line 960
undef($memory_7);
#line 960
$memory_5 = nl::is_array($memory_6);
#line 960
undef($memory_6);
#line 960
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 960
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 960
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 960
undef($memory_0);
#line 960
undef($memory_4);
#line 960
undef($memory_5);
#line 960
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 960
goto label_7;
#line 960
label_7:
#line 960
undef($memory_5);
#line 961
$memory_7 = 1;
#line 961
$memory_6 = $memory_2->[$memory_7];
#line 961
undef($memory_7);
#line 961
$memory_5 = nl::is_sim($memory_6);
#line 961
undef($memory_6);
#line 961
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 961
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 961
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 961
undef($memory_0);
#line 961
undef($memory_4);
#line 961
undef($memory_5);
#line 961
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 961
goto label_9;
#line 961
label_9:
#line 961
undef($memory_5);
#line 962
$memory_7 = 1;
#line 962
$memory_6 = $memory_2->[$memory_7];
#line 962
undef($memory_7);
#line 962
$memory_5 = string_utils::is_number($memory_6);
#line 962
undef($memory_6);
#line 962
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 962
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 962
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 962
undef($memory_0);
#line 962
undef($memory_4);
#line 962
undef($memory_5);
#line 962
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 962
goto label_11;
#line 962
label_11:
#line 962
undef($memory_5);
#line 963
$memory_7 = 1;
#line 963
$memory_5 = $memory_2->[$memory_7];
#line 963
undef($memory_7);
#line 963
$memory_7 = 0;
#line 963
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 963
undef($memory_7);
#line 963
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 963
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 963
$memory_7 = 1;
#line 963
$memory_5 = $memory_2->[$memory_7];
#line 963
undef($memory_7);
#line 963
$memory_9 = 0;
#line 963
$memory_8 = $memory_2->[$memory_9];
#line 963
undef($memory_9);
#line 963
$memory_7 = array::len($memory_8);
#line 963
undef($memory_8);
#line 963
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 963
undef($memory_7);
#line 963
label_14:
#line 963
undef($memory_6);
#line 963
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 963
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 963
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 963
undef($memory_0);
#line 963
undef($memory_4);
#line 963
undef($memory_5);
#line 963
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 963
goto label_13;
#line 963
label_13:
#line 963
undef($memory_5);
#line 964
$memory_6 = 0;
#line 964
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 964
$memory_8 = 1;
#line 964
$memory_7 = $memory_2->[$memory_8];
#line 964
undef($memory_8);
#line 964
$memory_9 = 2;
#line 964
$memory_8 = $memory_2->[$memory_9];
#line 964
undef($memory_9);
#line 964
c_rt_lib::set_ref_arr($memory_5, $memory_7, $memory_8);
#line 964
undef($memory_8);
#line 964
undef($memory_7);
#line 964
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 964
undef($memory_5);
#line 964
undef($memory_6);
#line 965
goto label_49;
#line 965
label_5:
#line 965
$memory_4 = "c_rt_lib::set_ref_hash";
#line 965
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 965
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 965
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 966
$memory_7 = 0;
#line 966
$memory_6 = $memory_2->[$memory_7];
#line 966
undef($memory_7);
#line 966
$memory_5 = nl::is_hash($memory_6);
#line 966
undef($memory_6);
#line 966
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 966
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 966
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 966
undef($memory_0);
#line 966
undef($memory_4);
#line 966
undef($memory_5);
#line 966
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 966
goto label_17;
#line 966
label_17:
#line 966
undef($memory_5);
#line 967
$memory_7 = 1;
#line 967
$memory_6 = $memory_2->[$memory_7];
#line 967
undef($memory_7);
#line 967
$memory_5 = nl::is_sim($memory_6);
#line 967
undef($memory_6);
#line 967
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 967
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 967
if (c_rt_lib::check_true($memory_5)) {goto label_19;}
#line 967
undef($memory_0);
#line 967
undef($memory_4);
#line 967
undef($memory_5);
#line 967
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 967
goto label_19;
#line 967
label_19:
#line 967
undef($memory_5);
#line 968
$memory_6 = 0;
#line 968
$memory_5 = c_rt_lib::get_ref_arr($memory_2, $memory_6);
#line 968
$memory_8 = 1;
#line 968
$memory_7 = $memory_2->[$memory_8];
#line 968
undef($memory_8);
#line 968
$memory_9 = 2;
#line 968
$memory_8 = $memory_2->[$memory_9];
#line 968
undef($memory_9);
#line 968
c_rt_lib::set_ref_hash($memory_5, $memory_7, $memory_8);
#line 968
undef($memory_8);
#line 968
undef($memory_7);
#line 968
c_rt_lib::set_ref_arr($memory_2, $memory_6, $memory_5);
#line 968
undef($memory_5);
#line 968
undef($memory_6);
#line 969
goto label_49;
#line 969
label_15:
#line 969
$memory_4 = "c_rt_lib::get_ref_arr";
#line 969
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 969
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 969
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 970
$memory_7 = 0;
#line 970
$memory_6 = $memory_2->[$memory_7];
#line 970
undef($memory_7);
#line 970
$memory_5 = nl::is_array($memory_6);
#line 970
undef($memory_6);
#line 970
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 970
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 970
if (c_rt_lib::check_true($memory_5)) {goto label_22;}
#line 970
undef($memory_0);
#line 970
undef($memory_4);
#line 970
undef($memory_5);
#line 970
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 970
goto label_22;
#line 970
label_22:
#line 970
undef($memory_5);
#line 971
$memory_7 = 1;
#line 971
$memory_6 = $memory_2->[$memory_7];
#line 971
undef($memory_7);
#line 971
$memory_5 = nl::is_sim($memory_6);
#line 971
undef($memory_6);
#line 971
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 971
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 971
if (c_rt_lib::check_true($memory_5)) {goto label_24;}
#line 971
undef($memory_0);
#line 971
undef($memory_4);
#line 971
undef($memory_5);
#line 971
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 971
goto label_24;
#line 971
label_24:
#line 971
undef($memory_5);
#line 972
$memory_7 = 1;
#line 972
$memory_6 = $memory_2->[$memory_7];
#line 972
undef($memory_7);
#line 972
$memory_5 = string_utils::is_number($memory_6);
#line 972
undef($memory_6);
#line 972
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 972
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 972
if (c_rt_lib::check_true($memory_5)) {goto label_26;}
#line 972
undef($memory_0);
#line 972
undef($memory_4);
#line 972
undef($memory_5);
#line 972
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 972
goto label_26;
#line 972
label_26:
#line 972
undef($memory_5);
#line 973
$memory_7 = 1;
#line 973
$memory_5 = $memory_2->[$memory_7];
#line 973
undef($memory_7);
#line 973
$memory_7 = 0;
#line 973
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 973
undef($memory_7);
#line 973
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 973
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 973
$memory_7 = 1;
#line 973
$memory_5 = $memory_2->[$memory_7];
#line 973
undef($memory_7);
#line 973
$memory_9 = 0;
#line 973
$memory_8 = $memory_2->[$memory_9];
#line 973
undef($memory_9);
#line 973
$memory_7 = array::len($memory_8);
#line 973
undef($memory_8);
#line 973
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 973
undef($memory_7);
#line 973
label_29:
#line 973
undef($memory_6);
#line 973
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 973
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 973
if (c_rt_lib::check_true($memory_5)) {goto label_28;}
#line 973
undef($memory_0);
#line 973
undef($memory_4);
#line 973
undef($memory_5);
#line 973
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 973
goto label_28;
#line 973
label_28:
#line 973
undef($memory_5);
#line 974
$memory_7 = 0;
#line 974
$memory_6 = $memory_2->[$memory_7];
#line 974
undef($memory_7);
#line 974
$memory_8 = 1;
#line 974
$memory_7 = $memory_2->[$memory_8];
#line 974
undef($memory_8);
#line 974
$memory_5 = c_rt_lib::get_ref_arr($memory_6, $memory_7);
#line 974
undef($memory_7);
#line 974
undef($memory_6);
#line 974
$memory_1 = $memory_5;
#line 974
undef($memory_5);
#line 975
goto label_49;
#line 975
label_20:
#line 975
$memory_4 = "c_rt_lib::get_ref_hash";
#line 975
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 975
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 975
if (c_rt_lib::check_true($memory_4)) {goto label_30;}
#line 976
$memory_7 = 0;
#line 976
$memory_6 = $memory_2->[$memory_7];
#line 976
undef($memory_7);
#line 976
$memory_5 = nl::is_hash($memory_6);
#line 976
undef($memory_6);
#line 976
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 976
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 976
if (c_rt_lib::check_true($memory_5)) {goto label_32;}
#line 976
undef($memory_0);
#line 976
undef($memory_4);
#line 976
undef($memory_5);
#line 976
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 976
goto label_32;
#line 976
label_32:
#line 976
undef($memory_5);
#line 977
$memory_7 = 1;
#line 977
$memory_6 = $memory_2->[$memory_7];
#line 977
undef($memory_7);
#line 977
$memory_5 = nl::is_sim($memory_6);
#line 977
undef($memory_6);
#line 977
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 977
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 977
if (c_rt_lib::check_true($memory_5)) {goto label_34;}
#line 977
undef($memory_0);
#line 977
undef($memory_4);
#line 977
undef($memory_5);
#line 977
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 977
goto label_34;
#line 977
label_34:
#line 977
undef($memory_5);
#line 978
$memory_7 = 0;
#line 978
$memory_6 = $memory_2->[$memory_7];
#line 978
undef($memory_7);
#line 978
$memory_8 = 1;
#line 978
$memory_7 = $memory_2->[$memory_8];
#line 978
undef($memory_8);
#line 978
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 978
undef($memory_7);
#line 978
undef($memory_6);
#line 978
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 978
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 978
if (c_rt_lib::check_true($memory_5)) {goto label_36;}
#line 978
undef($memory_0);
#line 978
undef($memory_4);
#line 978
undef($memory_5);
#line 978
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 978
goto label_36;
#line 978
label_36:
#line 978
undef($memory_5);
#line 979
$memory_7 = 0;
#line 979
$memory_6 = $memory_2->[$memory_7];
#line 979
undef($memory_7);
#line 979
$memory_8 = 1;
#line 979
$memory_7 = $memory_2->[$memory_8];
#line 979
undef($memory_8);
#line 979
$memory_5 = c_rt_lib::get_ref_hash($memory_6, $memory_7);
#line 979
undef($memory_7);
#line 979
undef($memory_6);
#line 979
$memory_1 = $memory_5;
#line 979
undef($memory_5);
#line 980
goto label_49;
#line 980
label_30:
#line 980
$memory_4 = "c_rt_lib::init_iter";
#line 980
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 980
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 980
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 981
$memory_7 = 0;
#line 981
$memory_6 = $memory_2->[$memory_7];
#line 981
undef($memory_7);
#line 981
$memory_5 = nl::is_hash($memory_6);
#line 981
undef($memory_6);
#line 981
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 981
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 981
if (c_rt_lib::check_true($memory_5)) {goto label_39;}
#line 981
undef($memory_0);
#line 981
undef($memory_4);
#line 981
undef($memory_5);
#line 981
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 981
goto label_39;
#line 981
label_39:
#line 981
undef($memory_5);
#line 982
$memory_7 = 0;
#line 982
$memory_6 = $memory_2->[$memory_7];
#line 982
undef($memory_7);
#line 982
$memory_5 = c_rt_lib::init_iter($memory_6);
#line 982
undef($memory_6);
#line 982
$memory_1 = $memory_5;
#line 982
undef($memory_5);
#line 983
goto label_49;
#line 983
label_37:
#line 983
$memory_4 = "c_rt_lib::is_end_hash";
#line 983
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 983
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 983
if (c_rt_lib::check_true($memory_4)) {goto label_40;}
#line 984
$memory_7 = 0;
#line 984
$memory_6 = $memory_2->[$memory_7];
#line 984
undef($memory_7);
#line 984
$memory_5 = c_rt_lib::is_end_hash($memory_6);
#line 984
undef($memory_6);
#line 984
$memory_1 = $memory_5;
#line 984
undef($memory_5);
#line 985
goto label_49;
#line 985
label_40:
#line 985
$memory_4 = "c_rt_lib::get_key_iter";
#line 985
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 985
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 985
if (c_rt_lib::check_true($memory_4)) {goto label_41;}
#line 986
$memory_7 = 0;
#line 986
$memory_6 = $memory_2->[$memory_7];
#line 986
undef($memory_7);
#line 986
$memory_5 = c_rt_lib::get_key_iter($memory_6);
#line 986
undef($memory_6);
#line 986
$memory_1 = $memory_5;
#line 986
undef($memory_5);
#line 987
goto label_49;
#line 987
label_41:
#line 987
$memory_4 = "c_rt_lib::hash_get_value";
#line 987
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 987
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 987
if (c_rt_lib::check_true($memory_4)) {goto label_42;}
#line 988
$memory_7 = 0;
#line 988
$memory_6 = $memory_2->[$memory_7];
#line 988
undef($memory_7);
#line 988
$memory_5 = nl::is_hash($memory_6);
#line 988
undef($memory_6);
#line 988
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 988
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 988
if (c_rt_lib::check_true($memory_5)) {goto label_44;}
#line 988
undef($memory_0);
#line 988
undef($memory_4);
#line 988
undef($memory_5);
#line 988
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 988
goto label_44;
#line 988
label_44:
#line 988
undef($memory_5);
#line 989
$memory_7 = 1;
#line 989
$memory_6 = $memory_2->[$memory_7];
#line 989
undef($memory_7);
#line 989
$memory_5 = nl::is_sim($memory_6);
#line 989
undef($memory_6);
#line 989
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 989
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 989
if (c_rt_lib::check_true($memory_5)) {goto label_46;}
#line 989
undef($memory_0);
#line 989
undef($memory_4);
#line 989
undef($memory_5);
#line 989
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 989
goto label_46;
#line 989
label_46:
#line 989
undef($memory_5);
#line 990
$memory_7 = 0;
#line 990
$memory_6 = $memory_2->[$memory_7];
#line 990
undef($memory_7);
#line 990
$memory_8 = 1;
#line 990
$memory_7 = $memory_2->[$memory_8];
#line 990
undef($memory_8);
#line 990
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 990
undef($memory_7);
#line 990
undef($memory_6);
#line 990
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 990
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 990
if (c_rt_lib::check_true($memory_5)) {goto label_48;}
#line 990
undef($memory_0);
#line 990
undef($memory_4);
#line 990
undef($memory_5);
#line 990
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 990
goto label_48;
#line 990
label_48:
#line 990
undef($memory_5);
#line 991
$memory_7 = 0;
#line 991
$memory_6 = $memory_2->[$memory_7];
#line 991
undef($memory_7);
#line 991
$memory_8 = 1;
#line 991
$memory_7 = $memory_2->[$memory_8];
#line 991
undef($memory_8);
#line 991
$memory_5 = c_rt_lib::hash_get_value($memory_6, $memory_7);
#line 991
undef($memory_7);
#line 991
undef($memory_6);
#line 991
$memory_1 = $memory_5;
#line 991
undef($memory_5);
#line 992
goto label_49;
#line 992
label_42:
#line 992
$memory_4 = "c_rt_lib::next_iter";
#line 992
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 992
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 992
if (c_rt_lib::check_true($memory_4)) {goto label_49;}
#line 993
$memory_7 = 0;
#line 993
$memory_6 = $memory_2->[$memory_7];
#line 993
undef($memory_7);
#line 993
$memory_5 = c_rt_lib::next_iter($memory_6);
#line 993
undef($memory_6);
#line 993
$memory_1 = $memory_5;
#line 993
undef($memory_5);
#line 994
goto label_49;
#line 994
label_49:
#line 994
undef($memory_4);
#line 995
$memory_4 = "";
#line 995
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 995
undef($memory_0);
#line 995
undef($memory_3);
#line 995
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_4;
#line 995
undef($memory_4);
#line 995
undef($memory_3);
#line 995
undef($memory_0);
#line 995
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub interpreter_priv::handle_compiler_call($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 999
$memory_3 = [];
#line 1000
$memory_4 = $memory_0->{'args'};
#line 1000
$memory_6 = 0;
#line 1000
$memory_7 = 1;
#line 1000
$memory_8 = c_rt_lib::array_len($memory_4);
#line 1000
label_3:
#line 1000
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 1000
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 1000
$memory_5 = $memory_4->[$memory_6];
#line 1002
$memory_11 = c_rt_lib::ov_is($memory_5, 'val');
#line 1002
if (c_rt_lib::check_true($memory_11)) {goto label_5;}
#line 1004
$memory_11 = c_rt_lib::ov_is($memory_5, 'ref');
#line 1004
if (c_rt_lib::check_true($memory_11)) {goto label_6;}
#line 1004
$memory_11 = "NOMATCHALERT";
#line 1004
$memory_11 = [$memory_11,$memory_5];
#line 1004
die(dfile::ssave($memory_11));
#line 1002
label_5:
#line 1002
$memory_12 = c_rt_lib::ov_as($memory_5, 'val');
#line 1003
$memory_13 = $memory_2->{'top'};
#line 1003
$memory_13 = $memory_13->{'vars'};
#line 1003
$memory_13 = $memory_13->[$memory_12];
#line 1003
$memory_10 = $memory_13;
#line 1003
undef($memory_13);
#line 1003
undef($memory_12);
#line 1004
goto label_4;
#line 1004
label_6:
#line 1004
$memory_12 = c_rt_lib::ov_as($memory_5, 'ref');
#line 1005
$memory_13 = $memory_2->{'top'};
#line 1005
$memory_13 = $memory_13->{'vars'};
#line 1005
$memory_13 = $memory_13->[$memory_12];
#line 1005
$memory_10 = $memory_13;
#line 1005
undef($memory_13);
#line 1005
undef($memory_12);
#line 1006
goto label_4;
#line 1006
label_4:
#line 1006
undef($memory_11);
#line 1007
array::push($memory_3, $memory_10);
#line 1007
undef($memory_10);
#line 1008
$memory_6 = $memory_6 + $memory_7;
#line 1008
goto label_3;
#line 1008
label_1:
#line 1008
undef($memory_4);
#line 1008
undef($memory_5);
#line 1008
undef($memory_6);
#line 1008
undef($memory_7);
#line 1008
undef($memory_8);
#line 1008
undef($memory_9);
#line 1009
$memory_4 = "";
#line 1011
$memory_6 = $memory_0->{'mod'};
#line 1011
$memory_7 = "array";
#line 1011
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1011
undef($memory_7);
#line 1011
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1011
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 1012
$memory_7 = interpreter_priv::handle_array_call($memory_1, $memory_4, $memory_3);
#line 1012
$memory_5 = $memory_7;
#line 1012
undef($memory_7);
#line 1013
goto label_7;
#line 1013
label_8:
#line 1013
$memory_6 = $memory_0->{'mod'};
#line 1013
$memory_7 = "hash";
#line 1013
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1013
undef($memory_7);
#line 1013
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1013
if (c_rt_lib::check_true($memory_6)) {goto label_9;}
#line 1014
$memory_7 = interpreter_priv::handle_hash_call($memory_1, $memory_4, $memory_3);
#line 1014
$memory_5 = $memory_7;
#line 1014
undef($memory_7);
#line 1015
goto label_7;
#line 1015
label_9:
#line 1015
$memory_6 = $memory_0->{'mod'};
#line 1015
$memory_7 = "string";
#line 1015
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1015
undef($memory_7);
#line 1015
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1015
if (c_rt_lib::check_true($memory_6)) {goto label_10;}
#line 1016
$memory_7 = interpreter_priv::handle_string_call($memory_1, $memory_4, $memory_3);
#line 1016
$memory_5 = $memory_7;
#line 1016
undef($memory_7);
#line 1017
goto label_7;
#line 1017
label_10:
#line 1017
$memory_6 = $memory_0->{'mod'};
#line 1017
$memory_7 = "ov";
#line 1017
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1017
undef($memory_7);
#line 1017
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1017
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 1018
$memory_7 = interpreter_priv::handle_ov_call($memory_1, $memory_4, $memory_3);
#line 1018
$memory_5 = $memory_7;
#line 1018
undef($memory_7);
#line 1019
goto label_7;
#line 1019
label_11:
#line 1019
$memory_6 = $memory_0->{'mod'};
#line 1019
$memory_7 = "c_rt_lib";
#line 1019
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1019
undef($memory_7);
#line 1019
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1019
if (c_rt_lib::check_true($memory_6)) {goto label_12;}
#line 1020
$memory_7 = interpreter_priv::handle_c_rt_lib_call($memory_1, $memory_4, $memory_3);
#line 1020
$memory_5 = $memory_7;
#line 1020
undef($memory_7);
#line 1021
goto label_7;
#line 1021
label_12:
#line 1021
$memory_6 = $memory_0->{'mod'};
#line 1021
$memory_7 = "ptd";
#line 1021
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1021
undef($memory_7);
#line 1021
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1021
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 1022
$memory_7 = interpreter_priv::handle_ptd_call($memory_1, $memory_4, $memory_3);
#line 1022
$memory_5 = $memory_7;
#line 1022
undef($memory_7);
#line 1023
goto label_7;
#line 1023
label_13:
#line 1024
$memory_7 = [];
#line 1024
die(dfile::ssave($memory_7));
#line 1024
undef($memory_7);
#line 1025
goto label_7;
#line 1025
label_7:
#line 1025
undef($memory_6);
#line 1026
$memory_6 = $memory_5;
#line 1026
$memory_6 = c_rt_lib::ov_is($memory_6, 'err');
#line 1026
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1026
if (c_rt_lib::check_true($memory_6)) {goto label_15;}
#line 1027
$memory_7 = $memory_5;
#line 1027
$memory_7 = c_rt_lib::ov_as($memory_7, 'err');
#line 1027
$memory_8 = " for call function: ";
#line 1027
$memory_7 = $memory_7 . $memory_8;
#line 1027
undef($memory_8);
#line 1027
$memory_7 = $memory_7 . $memory_1;
#line 1027
$memory_7 = c_rt_lib::ov_mk_arg('error', $memory_7);
#line 1027
$memory_8 = $memory_7;
#line 1027
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'rstate'} = $memory_8;
#line 1027
undef($memory_7);
#line 1027
undef($memory_8);
#line 1028
goto label_14;
#line 1028
label_15:
#line 1029
$memory_8 = $memory_0->{'args'};
#line 1029
$memory_7 = array::len($memory_8);
#line 1029
undef($memory_8);
#line 1029
$memory_8 = 0;
#line 1029
$memory_9 = 1;
#line 1029
label_18:
#line 1029
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 1029
if (c_rt_lib::check_true($memory_10)) {goto label_16;}
#line 1030
$memory_11 = $memory_0->{'args'};
#line 1030
$memory_11 = $memory_11->[$memory_8];
#line 1031
$memory_12 = c_rt_lib::ov_is($memory_11, 'val');
#line 1031
if (c_rt_lib::check_true($memory_12)) {goto label_20;}
#line 1032
$memory_12 = c_rt_lib::ov_is($memory_11, 'ref');
#line 1032
if (c_rt_lib::check_true($memory_12)) {goto label_21;}
#line 1032
$memory_12 = "NOMATCHALERT";
#line 1032
$memory_12 = [$memory_12,$memory_11];
#line 1032
die(dfile::ssave($memory_12));
#line 1031
label_20:
#line 1031
$memory_13 = c_rt_lib::ov_as($memory_11, 'val');
#line 1031
undef($memory_13);
#line 1032
goto label_19;
#line 1032
label_21:
#line 1032
$memory_13 = c_rt_lib::ov_as($memory_11, 'ref');
#line 1033
$memory_14 = $memory_3->[$memory_8];
#line 1033
$memory_15 = "top";
#line 1033
$memory_15 = c_rt_lib::get_ref_hash($memory_2, $memory_15);
#line 1033
$memory_16 = "vars";
#line 1033
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 1033
$memory_17 = $memory_14;
#line 1033
 if (c_rt_lib::get_arrcount($memory_16) > 1) {$memory_16 = [@{$memory_16}];}$memory_16->[$memory_13] = $memory_17;
#line 1033
$memory_18 = "vars";
#line 1033
c_rt_lib::set_ref_hash($memory_15, $memory_18, $memory_16);
#line 1033
$memory_18 = "top";
#line 1033
c_rt_lib::set_ref_hash($memory_2, $memory_18, $memory_15);
#line 1033
undef($memory_18);
#line 1033
undef($memory_14);
#line 1033
undef($memory_15);
#line 1033
undef($memory_16);
#line 1033
undef($memory_17);
#line 1033
undef($memory_13);
#line 1034
goto label_19;
#line 1034
label_19:
#line 1034
undef($memory_12);
#line 1034
undef($memory_11);
#line 1035
$memory_8 = $memory_8 + $memory_9;
#line 1035
goto label_18;
#line 1035
label_16:
#line 1035
undef($memory_7);
#line 1035
undef($memory_8);
#line 1035
undef($memory_9);
#line 1035
undef($memory_10);
#line 1036
$memory_7 = $memory_0->{'dest'};
#line 1036
$memory_8 = "";
#line 1036
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 1036
undef($memory_8);
#line 1036
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1036
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1036
if (c_rt_lib::check_true($memory_7)) {goto label_23;}
#line 1036
$memory_8 = "top";
#line 1036
$memory_8 = c_rt_lib::get_ref_hash($memory_2, $memory_8);
#line 1036
$memory_9 = "vars";
#line 1036
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 1036
$memory_11 = $memory_0->{'dest'};
#line 1036
$memory_10 = $memory_4;
#line 1036
 if (c_rt_lib::get_arrcount($memory_9) > 1) {$memory_9 = [@{$memory_9}];}$memory_9->[$memory_11] = $memory_10;
#line 1036
$memory_12 = "vars";
#line 1036
c_rt_lib::set_ref_hash($memory_8, $memory_12, $memory_9);
#line 1036
$memory_12 = "top";
#line 1036
c_rt_lib::set_ref_hash($memory_2, $memory_12, $memory_8);
#line 1036
undef($memory_12);
#line 1036
undef($memory_8);
#line 1036
undef($memory_9);
#line 1036
undef($memory_10);
#line 1036
undef($memory_11);
#line 1036
goto label_23;
#line 1036
label_23:
#line 1036
undef($memory_7);
#line 1037
goto label_14;
#line 1037
label_14:
#line 1037
undef($memory_6);
#line 1037
undef($memory_3);
#line 1037
undef($memory_4);
#line 1037
undef($memory_5);
#line 1037
undef($memory_0);
#line 1037
undef($memory_1);
#line 1037
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub interpreter_priv::handle_return($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1042
$memory_2 = interpreter::get_none_variant();
#line 1043
$memory_3 = c_rt_lib::ov_is($memory_0, 'val');
#line 1043
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 1045
$memory_3 = c_rt_lib::ov_is($memory_0, 'emp');
#line 1045
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 1045
$memory_3 = "NOMATCHALERT";
#line 1045
$memory_3 = [$memory_3,$memory_0];
#line 1045
die(dfile::ssave($memory_3));
#line 1043
label_2:
#line 1043
$memory_4 = c_rt_lib::ov_as($memory_0, 'val');
#line 1044
$memory_5 = $memory_1->{'top'};
#line 1044
$memory_5 = $memory_5->{'vars'};
#line 1044
$memory_5 = $memory_5->[$memory_4];
#line 1044
$memory_2 = $memory_5;
#line 1044
undef($memory_5);
#line 1044
undef($memory_4);
#line 1045
goto label_1;
#line 1045
label_3:
#line 1046
goto label_1;
#line 1046
label_1:
#line 1046
undef($memory_3);
#line 1047
$memory_3 = "profile";
#line 1047
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 1047
$memory_4 = $memory_1->{'top'};
#line 1047
$memory_4 = $memory_4->{'func_key'};
#line 1047
profile_inter::end($memory_3, $memory_4);
#line 1047
undef($memory_4);
#line 1047
$memory_4 = "profile";
#line 1047
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_3);
#line 1047
undef($memory_4);
#line 1047
undef($memory_3);
#line 1048
$memory_4 = $memory_1->{'stack'};
#line 1048
$memory_3 = array::len($memory_4);
#line 1048
undef($memory_4);
#line 1048
$memory_4 = 0;
#line 1048
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 1048
undef($memory_4);
#line 1048
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1048
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 1049
$memory_5 = $memory_1->{'func'};
#line 1049
$memory_5 = $memory_5->{'commands'};
#line 1049
$memory_4 = array::len($memory_5);
#line 1049
undef($memory_5);
#line 1049
$memory_5 = "top";
#line 1049
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 1049
$memory_6 = $memory_4;
#line 1049
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'next'} = $memory_6;
#line 1049
$memory_7 = "top";
#line 1049
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_5);
#line 1049
undef($memory_7);
#line 1049
undef($memory_4);
#line 1049
undef($memory_5);
#line 1049
undef($memory_6);
#line 1050
$memory_4 = {};
#line 1051
$memory_5 = $memory_1->{'top'};
#line 1051
$memory_5 = $memory_5->{'ref_arguments'};
#line 1051
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 1051
label_8:
#line 1051
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 1051
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 1051
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 1051
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 1052
$memory_9 = $memory_1->{'top'};
#line 1052
$memory_9 = $memory_9->{'vars'};
#line 1052
$memory_9 = $memory_9->[$memory_6];
#line 1052
hash::set_value($memory_4, $memory_6, $memory_9);
#line 1052
undef($memory_9);
#line 1053
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 1053
goto label_8;
#line 1053
label_6:
#line 1053
undef($memory_5);
#line 1053
undef($memory_6);
#line 1053
undef($memory_7);
#line 1053
undef($memory_8);
#line 1054
$memory_6 = $memory_1->{'func'};
#line 1054
$memory_6 = $memory_6->{'name'};
#line 1054
$memory_7 = $memory_1->{'top'};
#line 1054
$memory_7 = $memory_7->{'module_name'};
#line 1054
$memory_5 = {return => $memory_2,ref_args => $memory_4,func => $memory_6,module => $memory_7,};
#line 1054
undef($memory_6);
#line 1054
undef($memory_7);
#line 1054
$memory_5 = c_rt_lib::ov_mk_arg('finished', $memory_5);
#line 1054
$memory_6 = $memory_5;
#line 1054
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'rstate'} = $memory_6;
#line 1054
undef($memory_5);
#line 1054
undef($memory_6);
#line 1054
undef($memory_4);
#line 1060
goto label_4;
#line 1060
label_5:
#line 1061
$memory_4 = $memory_1->{'top'};
#line 1061
$memory_4 = $memory_4->{'ref_arguments'};
#line 1062
$memory_5 = $memory_1->{'top'};
#line 1062
$memory_5 = $memory_5->{'vars'};
#line 1063
$memory_6 = $memory_1->{'top'};
#line 1063
$memory_6 = $memory_6->{'ret'};
#line 1064
$memory_7 = $memory_1->{'stack'};
#line 1064
$memory_9 = $memory_1->{'stack'};
#line 1064
$memory_8 = array::len($memory_9);
#line 1064
undef($memory_9);
#line 1064
$memory_9 = 1;
#line 1064
$memory_8 = $memory_8 - $memory_9;
#line 1064
undef($memory_9);
#line 1064
$memory_7 = $memory_7->[$memory_8];
#line 1064
undef($memory_8);
#line 1065
$memory_8 = "stack";
#line 1065
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 1065
array::pop($memory_8);
#line 1065
$memory_9 = "stack";
#line 1065
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 1065
undef($memory_9);
#line 1065
undef($memory_8);
#line 1066
$memory_8 = $memory_7;
#line 1066
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'top'} = $memory_8;
#line 1066
undef($memory_8);
#line 1067
$memory_9 = $memory_1->{'functions'};
#line 1067
$memory_10 = $memory_1->{'top'};
#line 1067
$memory_10 = $memory_10->{'func_key'};
#line 1067
$memory_8 = hash::get_value($memory_9, $memory_10);
#line 1067
undef($memory_10);
#line 1067
undef($memory_9);
#line 1067
$memory_9 = $memory_8;
#line 1067
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'func'} = $memory_9;
#line 1067
undef($memory_8);
#line 1067
undef($memory_9);
#line 1068
$memory_10 = c_rt_lib::init_iter($memory_4);
#line 1068
label_11:
#line 1068
$memory_8 = c_rt_lib::is_end_hash($memory_10);
#line 1068
if (c_rt_lib::check_true($memory_8)) {goto label_9;}
#line 1068
$memory_8 = c_rt_lib::get_key_iter($memory_10);
#line 1068
$memory_9 = c_rt_lib::hash_get_value($memory_4, $memory_8);
#line 1069
$memory_11 = $memory_5->[$memory_8];
#line 1070
$memory_12 = "top";
#line 1070
$memory_12 = c_rt_lib::get_ref_hash($memory_1, $memory_12);
#line 1070
$memory_13 = "vars";
#line 1070
$memory_13 = c_rt_lib::get_ref_hash($memory_12, $memory_13);
#line 1070
$memory_14 = $memory_11;
#line 1070
 if (c_rt_lib::get_arrcount($memory_13) > 1) {$memory_13 = [@{$memory_13}];}$memory_13->[$memory_9] = $memory_14;
#line 1070
$memory_15 = "vars";
#line 1070
c_rt_lib::set_ref_hash($memory_12, $memory_15, $memory_13);
#line 1070
$memory_15 = "top";
#line 1070
c_rt_lib::set_ref_hash($memory_1, $memory_15, $memory_12);
#line 1070
undef($memory_15);
#line 1070
undef($memory_12);
#line 1070
undef($memory_13);
#line 1070
undef($memory_14);
#line 1070
undef($memory_11);
#line 1071
$memory_10 = c_rt_lib::next_iter($memory_10);
#line 1071
goto label_11;
#line 1071
label_9:
#line 1071
undef($memory_8);
#line 1071
undef($memory_9);
#line 1071
undef($memory_10);
#line 1072
$memory_8 = "";
#line 1072
$memory_8 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 1072
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1072
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1072
if (c_rt_lib::check_true($memory_8)) {goto label_13;}
#line 1072
$memory_9 = "top";
#line 1072
$memory_9 = c_rt_lib::get_ref_hash($memory_1, $memory_9);
#line 1072
$memory_10 = "vars";
#line 1072
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 1072
$memory_11 = $memory_2;
#line 1072
 if (c_rt_lib::get_arrcount($memory_10) > 1) {$memory_10 = [@{$memory_10}];}$memory_10->[$memory_6] = $memory_11;
#line 1072
$memory_12 = "vars";
#line 1072
c_rt_lib::set_ref_hash($memory_9, $memory_12, $memory_10);
#line 1072
$memory_12 = "top";
#line 1072
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_9);
#line 1072
undef($memory_12);
#line 1072
undef($memory_9);
#line 1072
undef($memory_10);
#line 1072
undef($memory_11);
#line 1072
goto label_13;
#line 1072
label_13:
#line 1072
undef($memory_8);
#line 1072
undef($memory_4);
#line 1072
undef($memory_5);
#line 1072
undef($memory_6);
#line 1072
undef($memory_7);
#line 1073
goto label_4;
#line 1073
label_4:
#line 1073
undef($memory_3);
#line 1074
$memory_3 = 1;
#line 1074
$memory_3 = -$memory_3;
#line 1074
$memory_4 = $memory_3;
#line 1074
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'instruction_nr'} = $memory_4;
#line 1074
undef($memory_3);
#line 1074
undef($memory_4);
#line 1075
$memory_3 = "top";
#line 1075
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 1075
$memory_4 = "next";
#line 1075
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 1075
$memory_5 = 1;
#line 1075
$memory_4 = $memory_4 + $memory_5;
#line 1075
$memory_6 = "next";
#line 1075
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 1075
$memory_6 = "top";
#line 1075
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_3);
#line 1075
undef($memory_6);
#line 1075
undef($memory_3);
#line 1075
undef($memory_4);
#line 1075
undef($memory_5);
#line 1075
undef($memory_2);
#line 1075
undef($memory_0);
#line 1075
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub interpreter_priv::goto($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 1079
$memory_3 = $memory_0->{'labels'};
#line 1079
$memory_4 = $memory_0->{'top'};
#line 1079
$memory_4 = $memory_4->{'module_name'};
#line 1079
$memory_2 = hash::get_value($memory_3, $memory_4);
#line 1079
undef($memory_4);
#line 1079
undef($memory_3);
#line 1080
$memory_4 = $memory_0->{'top'};
#line 1080
$memory_4 = $memory_4->{'func_key'};
#line 1080
$memory_3 = hash::get_value($memory_2, $memory_4);
#line 1080
undef($memory_4);
#line 1081
$memory_4 = hash::has_key($memory_3, $memory_1);
#line 1081
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1081
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1081
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 1082
$memory_5 = [];
#line 1082
die(dfile::ssave($memory_5));
#line 1082
undef($memory_5);
#line 1083
goto label_2;
#line 1083
label_2:
#line 1083
undef($memory_4);
#line 1084
$memory_4 = hash::get_value($memory_3, $memory_1);
#line 1084
$memory_5 = 1;
#line 1084
$memory_4 = $memory_4 + $memory_5;
#line 1084
undef($memory_5);
#line 1084
$memory_5 = "top";
#line 1084
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 1084
$memory_6 = $memory_4;
#line 1084
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'next'} = $memory_6;
#line 1084
$memory_7 = "top";
#line 1084
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 1084
undef($memory_7);
#line 1084
undef($memory_4);
#line 1084
undef($memory_5);
#line 1084
undef($memory_6);
#line 1084
undef($memory_2);
#line 1084
undef($memory_3);
#line 1084
undef($memory_1);
#line 1084
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub interpreter_priv::execute_bin_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 1088
$memory_3 = "+";
#line 1088
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1088
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1088
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 1088
$memory_4 = $memory_0 + $memory_1;
#line 1088
undef($memory_0);
#line 1088
undef($memory_1);
#line 1088
undef($memory_2);
#line 1088
undef($memory_3);
#line 1088
return $memory_4;
#line 1088
undef($memory_4);
#line 1088
goto label_2;
#line 1088
label_2:
#line 1088
undef($memory_3);
#line 1089
$memory_3 = "-";
#line 1089
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1089
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1089
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 1089
$memory_4 = $memory_0 - $memory_1;
#line 1089
undef($memory_0);
#line 1089
undef($memory_1);
#line 1089
undef($memory_2);
#line 1089
undef($memory_3);
#line 1089
return $memory_4;
#line 1089
undef($memory_4);
#line 1089
goto label_4;
#line 1089
label_4:
#line 1089
undef($memory_3);
#line 1090
$memory_3 = "*";
#line 1090
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1090
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1090
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 1090
$memory_4 = $memory_0 * $memory_1;
#line 1090
undef($memory_0);
#line 1090
undef($memory_1);
#line 1090
undef($memory_2);
#line 1090
undef($memory_3);
#line 1090
return $memory_4;
#line 1090
undef($memory_4);
#line 1090
goto label_6;
#line 1090
label_6:
#line 1090
undef($memory_3);
#line 1091
$memory_3 = "/";
#line 1091
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1091
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1091
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 1091
$memory_4 = $memory_0 / $memory_1;
#line 1091
undef($memory_0);
#line 1091
undef($memory_1);
#line 1091
undef($memory_2);
#line 1091
undef($memory_3);
#line 1091
return $memory_4;
#line 1091
undef($memory_4);
#line 1091
goto label_8;
#line 1091
label_8:
#line 1091
undef($memory_3);
#line 1092
$memory_3 = "%";
#line 1092
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1092
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1092
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 1092
$memory_4 = $memory_0 % $memory_1;
#line 1092
undef($memory_0);
#line 1092
undef($memory_1);
#line 1092
undef($memory_2);
#line 1092
undef($memory_3);
#line 1092
return $memory_4;
#line 1092
undef($memory_4);
#line 1092
goto label_10;
#line 1092
label_10:
#line 1092
undef($memory_3);
#line 1093
$memory_3 = "==";
#line 1093
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1093
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1093
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 1093
$memory_4 = c_rt_lib::to_nl($memory_0 == $memory_1);
#line 1093
undef($memory_0);
#line 1093
undef($memory_1);
#line 1093
undef($memory_2);
#line 1093
undef($memory_3);
#line 1093
return $memory_4;
#line 1093
undef($memory_4);
#line 1093
goto label_12;
#line 1093
label_12:
#line 1093
undef($memory_3);
#line 1094
$memory_3 = "!=";
#line 1094
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1094
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1094
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 1094
$memory_4 = c_rt_lib::to_nl($memory_0 != $memory_1);
#line 1094
undef($memory_0);
#line 1094
undef($memory_1);
#line 1094
undef($memory_2);
#line 1094
undef($memory_3);
#line 1094
return $memory_4;
#line 1094
undef($memory_4);
#line 1094
goto label_14;
#line 1094
label_14:
#line 1094
undef($memory_3);
#line 1095
$memory_3 = "<";
#line 1095
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1095
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1095
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 1095
$memory_4 = c_rt_lib::to_nl($memory_0 < $memory_1);
#line 1095
undef($memory_0);
#line 1095
undef($memory_1);
#line 1095
undef($memory_2);
#line 1095
undef($memory_3);
#line 1095
return $memory_4;
#line 1095
undef($memory_4);
#line 1095
goto label_16;
#line 1095
label_16:
#line 1095
undef($memory_3);
#line 1096
$memory_3 = "<=";
#line 1096
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1096
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1096
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 1096
$memory_4 = c_rt_lib::to_nl($memory_0 <= $memory_1);
#line 1096
undef($memory_0);
#line 1096
undef($memory_1);
#line 1096
undef($memory_2);
#line 1096
undef($memory_3);
#line 1096
return $memory_4;
#line 1096
undef($memory_4);
#line 1096
goto label_18;
#line 1096
label_18:
#line 1096
undef($memory_3);
#line 1097
$memory_3 = ">";
#line 1097
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1097
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1097
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 1097
$memory_4 = c_rt_lib::to_nl($memory_0 > $memory_1);
#line 1097
undef($memory_0);
#line 1097
undef($memory_1);
#line 1097
undef($memory_2);
#line 1097
undef($memory_3);
#line 1097
return $memory_4;
#line 1097
undef($memory_4);
#line 1097
goto label_20;
#line 1097
label_20:
#line 1097
undef($memory_3);
#line 1098
$memory_3 = ">=";
#line 1098
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1098
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1098
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 1098
$memory_4 = c_rt_lib::to_nl($memory_0 >= $memory_1);
#line 1098
undef($memory_0);
#line 1098
undef($memory_1);
#line 1098
undef($memory_2);
#line 1098
undef($memory_3);
#line 1098
return $memory_4;
#line 1098
undef($memory_4);
#line 1098
goto label_22;
#line 1098
label_22:
#line 1098
undef($memory_3);
#line 1099
$memory_3 = ".";
#line 1099
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1099
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1099
if (c_rt_lib::check_true($memory_3)) {goto label_24;}
#line 1099
$memory_4 = $memory_0 . $memory_1;
#line 1099
undef($memory_0);
#line 1099
undef($memory_1);
#line 1099
undef($memory_2);
#line 1099
undef($memory_3);
#line 1099
return $memory_4;
#line 1099
undef($memory_4);
#line 1099
goto label_24;
#line 1099
label_24:
#line 1099
undef($memory_3);
#line 1100
$memory_3 = "&&";
#line 1100
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1100
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1100
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 1100
$memory_4 = $memory_0;
#line 1100
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1100
if (c_rt_lib::check_true($memory_5)) {goto label_27;}
#line 1100
$memory_4 = $memory_1;
#line 1100
label_27:
#line 1100
undef($memory_5);
#line 1100
undef($memory_0);
#line 1100
undef($memory_1);
#line 1100
undef($memory_2);
#line 1100
undef($memory_3);
#line 1100
return $memory_4;
#line 1100
undef($memory_4);
#line 1100
goto label_26;
#line 1100
label_26:
#line 1100
undef($memory_3);
#line 1101
$memory_3 = "||";
#line 1101
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1101
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1101
if (c_rt_lib::check_true($memory_3)) {goto label_29;}
#line 1101
$memory_4 = $memory_0;
#line 1101
if (c_rt_lib::check_true($memory_0)) {goto label_30;}
#line 1101
$memory_4 = $memory_1;
#line 1101
label_30:
#line 1101
undef($memory_0);
#line 1101
undef($memory_1);
#line 1101
undef($memory_2);
#line 1101
undef($memory_3);
#line 1101
return $memory_4;
#line 1101
undef($memory_4);
#line 1101
goto label_29;
#line 1101
label_29:
#line 1101
undef($memory_3);
#line 1102
$memory_3 = "eq";
#line 1102
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1102
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1102
if (c_rt_lib::check_true($memory_3)) {goto label_32;}
#line 1102
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 1102
undef($memory_0);
#line 1102
undef($memory_1);
#line 1102
undef($memory_2);
#line 1102
undef($memory_3);
#line 1102
return $memory_4;
#line 1102
undef($memory_4);
#line 1102
goto label_32;
#line 1102
label_32:
#line 1102
undef($memory_3);
#line 1103
$memory_3 = "ne";
#line 1103
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 1103
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1103
if (c_rt_lib::check_true($memory_3)) {goto label_34;}
#line 1103
$memory_4 = c_rt_lib::to_nl($memory_0 ne $memory_1);
#line 1103
undef($memory_0);
#line 1103
undef($memory_1);
#line 1103
undef($memory_2);
#line 1103
undef($memory_3);
#line 1103
return $memory_4;
#line 1103
undef($memory_4);
#line 1103
goto label_34;
#line 1103
label_34:
#line 1103
undef($memory_3);
#line 1104
$memory_3 = [];
#line 1104
die(dfile::ssave($memory_3));
#line 1104
undef($memory_3);
#line 1104
undef($memory_0);
#line 1104
undef($memory_1);
#line 1104
undef($memory_2);
#line 1104
return;
}

sub interpreter_priv::execute_una_op($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 1108
$memory_2 = "!";
#line 1108
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 1108
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 1108
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 1108
$memory_3 = $memory_0;
#line 1108
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1108
undef($memory_0);
#line 1108
undef($memory_1);
#line 1108
undef($memory_2);
#line 1108
return $memory_3;
#line 1108
undef($memory_3);
#line 1108
goto label_2;
#line 1108
label_2:
#line 1108
undef($memory_2);
#line 1109
$memory_2 = "-";
#line 1109
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 1109
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 1109
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 1109
$memory_3 = $memory_0;
#line 1109
$memory_3 = -$memory_3;
#line 1109
undef($memory_0);
#line 1109
undef($memory_1);
#line 1109
undef($memory_2);
#line 1109
return $memory_3;
#line 1109
undef($memory_3);
#line 1109
goto label_4;
#line 1109
label_4:
#line 1109
undef($memory_2);
#line 1110
$memory_2 = "+";
#line 1110
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 1110
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 1110
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 1110
$memory_3 = $memory_0;
#line 1110
$memory_3 = +$memory_3;
#line 1110
undef($memory_0);
#line 1110
undef($memory_1);
#line 1110
undef($memory_2);
#line 1110
return $memory_3;
#line 1110
undef($memory_3);
#line 1110
goto label_6;
#line 1110
label_6:
#line 1110
undef($memory_2);
#line 1111
$memory_2 = [];
#line 1111
die(dfile::ssave($memory_2));
#line 1111
undef($memory_2);
#line 1111
undef($memory_0);
#line 1111
undef($memory_1);
#line 1111
return;
}

sub interpreter_priv::get_command($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 1115
$memory_1 = $memory_0->{'func'};
#line 1115
$memory_1 = $memory_1->{'commands'};
#line 1115
$memory_2 = $memory_0->{'top'};
#line 1115
$memory_2 = $memory_2->{'next'};
#line 1115
$memory_1 = $memory_1->[$memory_2];
#line 1115
undef($memory_2);
#line 1115
undef($memory_0);
#line 1115
return $memory_1;
#line 1115
undef($memory_1);
#line 1115
undef($memory_0);
#line 1115
return;
}

sub interpreter_priv::get_func_key($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 1119
$memory_2 = "::";
#line 1119
$memory_2 = $memory_1 . $memory_2;
#line 1120
$memory_3 = $memory_0->{'access'};
#line 1120
$memory_3 = c_rt_lib::ov_is($memory_3, 'priv');
#line 1120
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1120
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 1121
$memory_4 = "priv::";
#line 1121
$memory_2 = $memory_2 . $memory_4;
#line 1121
undef($memory_4);
#line 1122
goto label_2;
#line 1122
label_2:
#line 1122
undef($memory_3);
#line 1123
$memory_3 = $memory_0->{'name'};
#line 1123
$memory_2 = $memory_2 . $memory_3;
#line 1123
undef($memory_3);
#line 1124
undef($memory_0);
#line 1124
undef($memory_1);
#line 1124
return $memory_2;
#line 1124
undef($memory_2);
#line 1124
undef($memory_0);
#line 1124
undef($memory_1);
#line 1124
return;
}
