use c_rt_lib;
use ptd;
use nlasm;
use array;
use ov;
use hash;
use boolean_t;
use flow_graph;
use unnecessary_commands;
use interpreter;
sub post_processing::fun_tree_t;
sub post_processing::state_t;
sub post_processing::math_funs_t;
sub post_processing::reg_const;
sub post_processing::reg_val_const;
sub post_processing::optimization_t;
sub post_processing::const_reg_t;
sub post_processing::const_reg_val_t;
sub post_processing_priv::get_command_for_const;
sub post_processing::init;
sub post_processing::clear_module_from_state;
sub post_processing_priv::delete_unused_labels;
sub post_processing_priv::delete_unnecessary_commands;
sub post_processing::find;
sub post_processing_priv::set_const_commands_in_modules;
sub post_processing_priv::evaluate_const_in_modules;
sub post_processing_priv::evaluate_const_in_function;
sub post_processing_priv::set_interpreted_changed_functions;
sub post_processing_priv::get_called_switched;
sub post_processing_priv::get_switched_func;
sub post_processing_priv::set_function_calls;
sub post_processing_priv::get_math_fun;
sub post_processing_priv::set_non_math_fun_rec;
sub post_processing_priv::set_mathfun_in_modules;
sub post_processing_priv::set_const_reg;
sub post_processing_priv::evaluate_const_in_blocks;
sub post_processing_priv::check_sub;
sub post_processing_priv::check_sub_val;
sub post_processing_priv::set_const_block;
sub post_processing_priv::evaluate_const;
sub post_processing_priv::push_load_const;
sub post_processing_priv::set_const_block_val;
sub post_processing_priv::delete_unused_labels_com;

return 1;

sub post_processing::__fun_tree_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 17
$memory_4 = ptd::sim();
#line 17
$memory_3 = ptd::arr($memory_4);
#line 17
undef($memory_4);
#line 17
$memory_2 = ptd::hash($memory_3);
#line 17
undef($memory_3);
#line 17
$memory_1 = ptd::hash($memory_2);
#line 17
undef($memory_2);
#line 17
$memory_0 = ptd::hash($memory_1);
#line 17
undef($memory_1);
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_fun_tree_t;
sub post_processing::fun_tree_t() {
	$_fun_tree_t = post_processing::__fun_tree_t() unless defined $_fun_tree_t;
	return $_fun_tree_t;
}

sub post_processing::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 21
$memory_3 = {
	module => "nlasm",
	name => "result_t",
};
#line 21
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 21
$memory_2 = ptd::hash($memory_3);
#line 21
undef($memory_3);
#line 21
$memory_4 = ptd::sim();
#line 21
$memory_3 = ptd::hash($memory_4);
#line 21
undef($memory_4);
#line 21
$memory_4 = {
	module => "post_processing",
	name => "math_funs_t",
};
#line 21
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 21
$memory_5 = {
	module => "post_processing",
	name => "fun_tree_t",
};
#line 21
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 21
$memory_6 = {
	module => "post_processing",
	name => "math_funs_t",
};
#line 21
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 21
$memory_7 = {
	module => "post_processing",
	name => "optimization_t",
};
#line 21
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 21
$memory_8 = {
	module => "interpreter",
	name => "state_t",
};
#line 21
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 21
$memory_1 = {nl_asm => $memory_2,mat_fun_def => $memory_3,math_fs => $memory_4,fun_calls => $memory_5,const_com => $memory_6,optimization => $memory_7,interpreter_state => $memory_8,};
#line 21
undef($memory_2);
#line 21
undef($memory_3);
#line 21
undef($memory_4);
#line 21
undef($memory_5);
#line 21
undef($memory_6);
#line 21
undef($memory_7);
#line 21
undef($memory_8);
#line 21
$memory_0 = ptd::rec($memory_1);
#line 21
undef($memory_1);
#line 21
return $memory_0;
#line 21
undef($memory_0);
#line 21
return;
}

my $_state_t;
sub post_processing::state_t() {
	$_state_t = post_processing::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub post_processing::__math_funs_t() {
my $memory_0;my $memory_1;
#line 33
$memory_1 = {
	module => "boolean_t",
	name => "type",
};
#line 33
$memory_1 = c_rt_lib::ov_mk_arg('ref', $memory_1);
#line 33
$memory_0 = ptd::hash($memory_1);
#line 33
undef($memory_1);
#line 33
return $memory_0;
#line 33
undef($memory_0);
#line 33
return;
}

my $_math_funs_t;
sub post_processing::math_funs_t() {
	$_math_funs_t = post_processing::__math_funs_t() unless defined $_math_funs_t;
	return $_math_funs_t;
}

sub post_processing::__reg_const() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 37
$memory_2 = ptd::none();
#line 37
$memory_3 = ptd::sim();
#line 37
$memory_1 = {no => $memory_2,yes => $memory_3,};
#line 37
undef($memory_2);
#line 37
undef($memory_3);
#line 37
$memory_0 = ptd::var($memory_1);
#line 37
undef($memory_1);
#line 37
return $memory_0;
#line 37
undef($memory_0);
#line 37
return;
}

my $_reg_const;
sub post_processing::reg_const() {
	$_reg_const = post_processing::__reg_const() unless defined $_reg_const;
	return $_reg_const;
}

sub post_processing::__reg_val_const() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 41
$memory_2 = ptd::none();
#line 41
$memory_5 = ptd::sim();
#line 41
$memory_6 = ptd::ptd_im();
#line 41
$memory_4 = {nr => $memory_5,value => $memory_6,};
#line 41
undef($memory_5);
#line 41
undef($memory_6);
#line 41
$memory_3 = ptd::rec($memory_4);
#line 41
undef($memory_4);
#line 41
$memory_1 = {no => $memory_2,yes => $memory_3,};
#line 41
undef($memory_2);
#line 41
undef($memory_3);
#line 41
$memory_0 = ptd::var($memory_1);
#line 41
undef($memory_1);
#line 41
return $memory_0;
#line 41
undef($memory_0);
#line 41
return;
}

my $_reg_val_const;
sub post_processing::reg_val_const() {
	$_reg_val_const = post_processing::__reg_val_const() unless defined $_reg_val_const;
	return $_reg_val_const;
}

sub post_processing::__optimization_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 45
$memory_2 = ptd::none();
#line 45
$memory_3 = ptd::none();
#line 45
$memory_4 = ptd::none();
#line 45
$memory_5 = ptd::none();
#line 45
$memory_6 = ptd::none();
#line 45
$memory_1 = {o0 => $memory_2,o1 => $memory_3,o2 => $memory_4,o3 => $memory_5,o4 => $memory_6,};
#line 45
undef($memory_2);
#line 45
undef($memory_3);
#line 45
undef($memory_4);
#line 45
undef($memory_5);
#line 45
undef($memory_6);
#line 45
$memory_0 = ptd::var($memory_1);
#line 45
undef($memory_1);
#line 45
return $memory_0;
#line 45
undef($memory_0);
#line 45
return;
}

my $_optimization_t;
sub post_processing::optimization_t() {
	$_optimization_t = post_processing::__optimization_t() unless defined $_optimization_t;
	return $_optimization_t;
}

sub post_processing::__const_reg_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 49
$memory_4 = {
	module => "post_processing",
	name => "reg_const",
};
#line 49
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 49
$memory_3 = ptd::arr($memory_4);
#line 49
undef($memory_4);
#line 49
$memory_4 = ptd::sim();
#line 49
$memory_2 = {regs => $memory_3,was => $memory_4,};
#line 49
undef($memory_3);
#line 49
undef($memory_4);
#line 49
$memory_1 = ptd::rec($memory_2);
#line 49
undef($memory_2);
#line 49
$memory_0 = ptd::arr($memory_1);
#line 49
undef($memory_1);
#line 49
return $memory_0;
#line 49
undef($memory_0);
#line 49
return;
}

my $_const_reg_t;
sub post_processing::const_reg_t() {
	$_const_reg_t = post_processing::__const_reg_t() unless defined $_const_reg_t;
	return $_const_reg_t;
}

sub post_processing::__const_reg_val_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 53
$memory_4 = {
	module => "post_processing",
	name => "reg_val_const",
};
#line 53
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 53
$memory_3 = ptd::arr($memory_4);
#line 53
undef($memory_4);
#line 53
$memory_4 = ptd::sim();
#line 53
$memory_2 = {regs => $memory_3,was => $memory_4,};
#line 53
undef($memory_3);
#line 53
undef($memory_4);
#line 53
$memory_1 = ptd::rec($memory_2);
#line 53
undef($memory_2);
#line 53
$memory_0 = ptd::arr($memory_1);
#line 53
undef($memory_1);
#line 53
return $memory_0;
#line 53
undef($memory_0);
#line 53
return;
}

my $_const_reg_val_t;
sub post_processing::const_reg_val_t() {
	$_const_reg_val_t = post_processing::__const_reg_val_t() unless defined $_const_reg_val_t;
	return $_const_reg_val_t;
}

sub post_processing_priv::__get_command_for_const() {
my $memory_0;my $memory_1;my $memory_2;
#line 57
$memory_0 = {};
#line 58
$memory_1 = "arr_decl";
#line 58
$memory_2 = c_rt_lib::to_nl(1);
#line 58
hash::set_value($memory_0, $memory_1, $memory_2);
#line 58
undef($memory_2);
#line 58
undef($memory_1);
#line 59
$memory_1 = "hash_decl";
#line 59
$memory_2 = c_rt_lib::to_nl(1);
#line 59
hash::set_value($memory_0, $memory_1, $memory_2);
#line 59
undef($memory_2);
#line 59
undef($memory_1);
#line 60
$memory_1 = "func";
#line 60
$memory_2 = c_rt_lib::to_nl(1);
#line 60
hash::set_value($memory_0, $memory_1, $memory_2);
#line 60
undef($memory_2);
#line 60
undef($memory_1);
#line 61
$memory_1 = "load_const";
#line 61
$memory_2 = c_rt_lib::to_nl(1);
#line 61
hash::set_value($memory_0, $memory_1, $memory_2);
#line 61
undef($memory_2);
#line 61
undef($memory_1);
#line 62
$memory_1 = "ov_mk";
#line 62
$memory_2 = c_rt_lib::to_nl(1);
#line 62
hash::set_value($memory_0, $memory_1, $memory_2);
#line 62
undef($memory_2);
#line 62
undef($memory_1);
#line 63
return $memory_0;
#line 63
undef($memory_0);
#line 63
return;
}

my $_get_command_for_const;
sub post_processing_priv::get_command_for_const() {
	$_get_command_for_const = post_processing_priv::__get_command_for_const() unless defined $_get_command_for_const;
	return $_get_command_for_const;
}

sub post_processing::init($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 68
$memory_3 = {};
#line 68
$memory_4 = {};
#line 68
$memory_5 = {};
#line 68
$memory_2 = {nl_asm => $memory_3,fun_calls => $memory_4,math_fs => $memory_5,};
#line 68
undef($memory_3);
#line 68
undef($memory_4);
#line 68
undef($memory_5);
#line 69
$memory_3 = $memory_0;
#line 69
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'mat_fun_def'} = $memory_3;
#line 69
undef($memory_3);
#line 70
$memory_3 = $memory_1;
#line 70
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'optimization'} = $memory_3;
#line 70
undef($memory_3);
#line 71
$memory_3 = post_processing_priv::get_command_for_const();
#line 71
$memory_4 = $memory_3;
#line 71
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'const_com'} = $memory_4;
#line 71
undef($memory_3);
#line 71
undef($memory_4);
#line 72
$memory_4 = [];
#line 72
$memory_5 = {};
#line 72
$memory_3 = interpreter::init($memory_4, $memory_5);
#line 72
undef($memory_5);
#line 72
undef($memory_4);
#line 72
$memory_4 = $memory_3;
#line 72
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'interpreter_state'} = $memory_4;
#line 72
undef($memory_3);
#line 72
undef($memory_4);
#line 73
undef($memory_0);
#line 73
undef($memory_1);
#line 73
return $memory_2;
#line 73
undef($memory_2);
#line 73
undef($memory_0);
#line 73
undef($memory_1);
#line 73
return;
}

sub post_processing::clear_module_from_state($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 77
$memory_2 = "nl_asm";
#line 77
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 77
hash::delete($memory_2, $memory_1);
#line 77
$memory_3 = "nl_asm";
#line 77
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 77
undef($memory_3);
#line 77
undef($memory_2);
#line 78
$memory_2 = "fun_calls";
#line 78
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 78
hash::delete($memory_2, $memory_1);
#line 78
$memory_3 = "fun_calls";
#line 78
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 78
undef($memory_3);
#line 78
undef($memory_2);
#line 78
undef($memory_1);
#line 78
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::delete_unused_labels($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 82
$memory_1 = {};
#line 83
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 83
label_3:
#line 83
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 83
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 83
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 83
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 84
$memory_5 = $memory_3;
#line 85
$memory_7 = $memory_5->{'functions'};
#line 85
$memory_6 = array::len($memory_7);
#line 85
undef($memory_7);
#line 85
$memory_7 = 0;
#line 85
$memory_8 = 1;
#line 85
label_6:
#line 85
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 85
if (c_rt_lib::check_true($memory_9)) {goto label_4;}
#line 86
$memory_10 = "functions";
#line 86
$memory_10 = c_rt_lib::get_ref_hash($memory_5, $memory_10);
#line 86
$memory_11 = c_rt_lib::get_ref_arr($memory_10, $memory_7);
#line 86
$memory_12 = "commands";
#line 86
$memory_12 = c_rt_lib::get_ref_hash($memory_11, $memory_12);
#line 86
post_processing_priv::delete_unused_labels_com($memory_12);
#line 86
$memory_13 = "commands";
#line 86
c_rt_lib::set_ref_hash($memory_11, $memory_13, $memory_12);
#line 86
c_rt_lib::set_ref_arr($memory_10, $memory_7, $memory_11);
#line 86
$memory_13 = "functions";
#line 86
c_rt_lib::set_ref_hash($memory_5, $memory_13, $memory_10);
#line 86
undef($memory_13);
#line 86
undef($memory_10);
#line 86
undef($memory_11);
#line 86
undef($memory_12);
#line 87
$memory_7 = $memory_7 + $memory_8;
#line 87
goto label_6;
#line 87
label_4:
#line 87
undef($memory_6);
#line 87
undef($memory_7);
#line 87
undef($memory_8);
#line 87
undef($memory_9);
#line 88
hash::set_value($memory_1, $memory_2, $memory_5);
#line 88
undef($memory_5);
#line 89
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 89
goto label_3;
#line 89
label_1:
#line 89
undef($memory_2);
#line 89
undef($memory_3);
#line 89
undef($memory_4);
#line 90
$memory_0 = $memory_1;
#line 90
undef($memory_1);
#line 90
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::delete_unnecessary_commands($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 94
$memory_2 = {};
#line 95
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 95
label_3:
#line 95
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 95
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 95
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 95
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 96
$memory_6 = $memory_4;
#line 97
$memory_8 = $memory_6->{'functions'};
#line 97
$memory_7 = array::len($memory_8);
#line 97
undef($memory_8);
#line 97
$memory_8 = 0;
#line 97
$memory_9 = 1;
#line 97
label_6:
#line 97
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 97
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 98
$memory_11 = $memory_6->{'functions'};
#line 98
$memory_11 = $memory_11->[$memory_8];
#line 99
$memory_12 = $memory_4->{'module_name'};
#line 99
$memory_13 = $memory_11->{'access'};
#line 99
$memory_13 = c_rt_lib::ov_is($memory_13, 'pub');
#line 99
if (c_rt_lib::check_true($memory_13)) {goto label_8;}
#line 99
$memory_13 = "_priv::";
#line 99
goto label_7;
#line 99
label_8:
#line 99
$memory_13 = "::";
#line 99
label_7:
#line 99
$memory_12 = $memory_12 . $memory_13;
#line 99
undef($memory_13);
#line 99
$memory_13 = $memory_11->{'name'};
#line 99
$memory_12 = $memory_12 . $memory_13;
#line 99
undef($memory_13);
#line 100
$memory_13 = hash::has_key($memory_1, $memory_12);
#line 100
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 100
if (c_rt_lib::check_true($memory_13)) {goto label_10;}
#line 101
$memory_14 = "functions";
#line 101
$memory_14 = c_rt_lib::get_ref_hash($memory_6, $memory_14);
#line 101
$memory_15 = c_rt_lib::get_ref_arr($memory_14, $memory_8);
#line 101
unnecessary_commands::delete_unnecessary_commands($memory_15);
#line 101
c_rt_lib::set_ref_arr($memory_14, $memory_8, $memory_15);
#line 101
$memory_16 = "functions";
#line 101
c_rt_lib::set_ref_hash($memory_6, $memory_16, $memory_14);
#line 101
undef($memory_16);
#line 101
undef($memory_14);
#line 101
undef($memory_15);
#line 102
goto label_10;
#line 102
label_10:
#line 102
undef($memory_13);
#line 102
undef($memory_11);
#line 102
undef($memory_12);
#line 103
$memory_8 = $memory_8 + $memory_9;
#line 103
goto label_6;
#line 103
label_4:
#line 103
undef($memory_7);
#line 103
undef($memory_8);
#line 103
undef($memory_9);
#line 103
undef($memory_10);
#line 104
hash::set_value($memory_2, $memory_3, $memory_6);
#line 104
undef($memory_6);
#line 105
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 105
goto label_3;
#line 105
label_1:
#line 105
undef($memory_3);
#line 105
undef($memory_4);
#line 105
undef($memory_5);
#line 106
$memory_0 = $memory_2;
#line 106
undef($memory_2);
#line 106
undef($memory_1);
#line 106
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing::find($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 110
post_processing_priv::delete_unused_labels($memory_1);
#line 111
$memory_2 = $memory_0->{'optimization'};
#line 111
$memory_2 = c_rt_lib::ov_is($memory_2, 'o0');
#line 111
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 111
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 111
undef($memory_2);
#line 111
$_[0] = $memory_0;$_[1] = $memory_1;return;
#line 111
goto label_2;
#line 111
label_2:
#line 111
undef($memory_2);
#line 112
$memory_2 = "fun_calls";
#line 112
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 112
post_processing_priv::set_function_calls($memory_2, $memory_1);
#line 112
$memory_3 = "fun_calls";
#line 112
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 112
undef($memory_3);
#line 112
undef($memory_2);
#line 113
$memory_3 = $memory_0->{'fun_calls'};
#line 113
$memory_4 = $memory_0->{'mat_fun_def'};
#line 113
$memory_2 = post_processing_priv::get_math_fun($memory_3, $memory_4);
#line 113
undef($memory_4);
#line 113
undef($memory_3);
#line 114
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 114
label_5:
#line 114
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 114
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 114
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 114
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 115
$memory_6 = "nl_asm";
#line 115
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 115
hash::set_value($memory_6, $memory_3, $memory_4);
#line 115
$memory_7 = "nl_asm";
#line 115
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 115
undef($memory_7);
#line 115
undef($memory_6);
#line 116
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 116
goto label_5;
#line 116
label_3:
#line 116
undef($memory_3);
#line 116
undef($memory_4);
#line 116
undef($memory_5);
#line 117
$memory_3 = {};
#line 118
$memory_4 = $memory_0->{'optimization'};
#line 118
$memory_5 = c_rt_lib::ov_is($memory_4, 'o0');
#line 118
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 119
$memory_5 = c_rt_lib::ov_is($memory_4, 'o1');
#line 119
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 121
$memory_5 = c_rt_lib::ov_is($memory_4, 'o2');
#line 121
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 124
$memory_5 = c_rt_lib::ov_is($memory_4, 'o3');
#line 124
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 128
$memory_5 = c_rt_lib::ov_is($memory_4, 'o4');
#line 128
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 128
$memory_5 = "NOMATCHALERT";
#line 128
$memory_5 = [$memory_5,$memory_4];
#line 128
die(dfile::ssave($memory_5));
#line 118
label_7:
#line 119
goto label_6;
#line 119
label_8:
#line 120
post_processing_priv::set_mathfun_in_modules($memory_0, $memory_2, $memory_3, $memory_1);
#line 121
goto label_6;
#line 121
label_9:
#line 122
post_processing_priv::set_mathfun_in_modules($memory_0, $memory_2, $memory_3, $memory_1);
#line 123
$memory_6 = $memory_0->{'const_com'};
#line 123
post_processing_priv::set_const_commands_in_modules($memory_0, $memory_3, $memory_1, $memory_6, $memory_2);
#line 123
undef($memory_6);
#line 124
goto label_6;
#line 124
label_10:
#line 125
post_processing_priv::set_mathfun_in_modules($memory_0, $memory_2, $memory_3, $memory_1);
#line 126
$memory_6 = $memory_0->{'const_com'};
#line 126
post_processing_priv::set_const_commands_in_modules($memory_0, $memory_3, $memory_1, $memory_6, $memory_2);
#line 126
undef($memory_6);
#line 127
post_processing_priv::delete_unnecessary_commands($memory_1, $memory_3);
#line 128
goto label_6;
#line 128
label_11:
#line 129
post_processing_priv::set_mathfun_in_modules($memory_0, $memory_2, $memory_3, $memory_1);
#line 130
post_processing_priv::set_interpreted_changed_functions($memory_0, $memory_2, $memory_3);
#line 131
post_processing_priv::evaluate_const_in_modules($memory_0, $memory_3, $memory_1, $memory_2);
#line 132
post_processing_priv::delete_unnecessary_commands($memory_1, $memory_3);
#line 133
goto label_6;
#line 133
label_6:
#line 133
undef($memory_4);
#line 133
undef($memory_5);
#line 134
post_processing_priv::delete_unused_labels($memory_1);
#line 135
$memory_4 = $memory_2;
#line 135
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'math_fs'} = $memory_4;
#line 135
undef($memory_4);
#line 135
undef($memory_2);
#line 135
undef($memory_3);
#line 135
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub post_processing_priv::set_const_commands_in_modules($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;my $memory_27;my $memory_28;my $memory_29;my $memory_30;my $memory_31;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];
#line 141
$memory_6 = $memory_0->{'nl_asm'};
#line 141
$memory_5 = hash::keys($memory_6);
#line 141
undef($memory_6);
#line 141
$memory_7 = 0;
#line 141
$memory_8 = 1;
#line 141
$memory_9 = c_rt_lib::array_len($memory_5);
#line 141
label_3:
#line 141
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 141
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 141
$memory_6 = $memory_5->[$memory_7];
#line 142
$memory_12 = $memory_0->{'nl_asm'};
#line 142
$memory_11 = hash::get_value($memory_12, $memory_6);
#line 142
undef($memory_12);
#line 143
$memory_12 = c_rt_lib::to_nl(0);
#line 144
$memory_14 = $memory_11->{'functions'};
#line 144
$memory_13 = array::len($memory_14);
#line 144
undef($memory_14);
#line 144
$memory_14 = 0;
#line 144
$memory_15 = 1;
#line 144
label_6:
#line 144
$memory_16 = c_rt_lib::to_nl($memory_14 >= $memory_13);
#line 144
if (c_rt_lib::check_true($memory_16)) {goto label_4;}
#line 145
$memory_17 = $memory_11->{'functions'};
#line 145
$memory_17 = $memory_17->[$memory_14];
#line 146
$memory_18 = $memory_17->{'access'};
#line 146
$memory_18 = c_rt_lib::ov_is($memory_18, 'pub');
#line 146
if (c_rt_lib::check_true($memory_18)) {goto label_8;}
#line 146
$memory_18 = "_priv::";
#line 146
goto label_7;
#line 146
label_8:
#line 146
$memory_18 = "::";
#line 146
label_7:
#line 146
$memory_18 = $memory_6 . $memory_18;
#line 146
$memory_19 = $memory_17->{'name'};
#line 146
$memory_18 = $memory_18 . $memory_19;
#line 146
undef($memory_19);
#line 147
$memory_19 = hash::has_key($memory_1, $memory_18);
#line 147
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 147
if (c_rt_lib::check_true($memory_19)) {goto label_10;}
#line 148
$memory_20 = c_rt_lib::to_nl(1);
#line 148
$memory_12 = $memory_20;
#line 148
undef($memory_20);
#line 149
$memory_21 = $memory_17->{'commands'};
#line 149
$memory_22 = $memory_17->{'args_type'};
#line 149
$memory_20 = flow_graph::make_blocks($memory_21, $memory_22);
#line 149
undef($memory_22);
#line 149
undef($memory_21);
#line 150
$memory_21 = $memory_11->{'module_name'};
#line 150
$memory_22 = $memory_17->{'reg_size'};
#line 150
post_processing_priv::set_const_reg($memory_20, $memory_4, $memory_21, $memory_22);
#line 150
undef($memory_22);
#line 150
undef($memory_21);
#line 151
$memory_21 = flow_graph::combine_blocks($memory_20);
#line 152
$memory_22 = array::len($memory_21);
#line 152
$memory_23 = 0;
#line 152
$memory_24 = 1;
#line 152
label_13:
#line 152
$memory_25 = c_rt_lib::to_nl($memory_23 >= $memory_22);
#line 152
if (c_rt_lib::check_true($memory_25)) {goto label_11;}
#line 153
$memory_26 = $memory_21->[$memory_23];
#line 154
$memory_29 = $memory_26->{'cmd'};
#line 154
$memory_28 = ov::get_element($memory_29);
#line 154
undef($memory_29);
#line 154
$memory_27 = hash::has_key($memory_3, $memory_28);
#line 154
undef($memory_28);
#line 154
$memory_27 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_27));
#line 154
$memory_27 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_27));
#line 154
if (c_rt_lib::check_true($memory_27)) {goto label_15;}
#line 155
$memory_28 = $memory_26->{'annotation'};
#line 155
$memory_28 = c_rt_lib::ov_is($memory_28, 'const');
#line 155
$memory_28 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_28));
#line 155
if (c_rt_lib::check_true($memory_28)) {goto label_17;}
#line 156
$memory_29 = c_rt_lib::ov_mk_none('none');
#line 156
$memory_30 = c_rt_lib::get_ref_arr($memory_21, $memory_23);
#line 156
$memory_31 = $memory_29;
#line 156
 if (c_rt_lib::get_hashcount($memory_30) > 1) {$memory_30 = {%{$memory_30}};}$memory_30->{'annotation'} = $memory_31;
#line 156
c_rt_lib::set_ref_arr($memory_21, $memory_23, $memory_30);
#line 156
undef($memory_29);
#line 156
undef($memory_30);
#line 156
undef($memory_31);
#line 157
goto label_17;
#line 157
label_17:
#line 157
undef($memory_28);
#line 158
goto label_15;
#line 158
label_15:
#line 158
undef($memory_27);
#line 158
undef($memory_26);
#line 159
$memory_23 = $memory_23 + $memory_24;
#line 159
goto label_13;
#line 159
label_11:
#line 159
undef($memory_22);
#line 159
undef($memory_23);
#line 159
undef($memory_24);
#line 159
undef($memory_25);
#line 160
$memory_22 = $memory_21;
#line 160
 if (c_rt_lib::get_hashcount($memory_17) > 1) {$memory_17 = {%{$memory_17}};}$memory_17->{'commands'} = $memory_22;
#line 160
undef($memory_22);
#line 161
$memory_22 = "functions";
#line 161
$memory_22 = c_rt_lib::get_ref_hash($memory_11, $memory_22);
#line 161
$memory_23 = $memory_17;
#line 161
 if (c_rt_lib::get_arrcount($memory_22) > 1) {$memory_22 = [@{$memory_22}];}$memory_22->[$memory_14] = $memory_23;
#line 161
$memory_24 = "functions";
#line 161
c_rt_lib::set_ref_hash($memory_11, $memory_24, $memory_22);
#line 161
undef($memory_24);
#line 161
undef($memory_22);
#line 161
undef($memory_23);
#line 161
undef($memory_20);
#line 161
undef($memory_21);
#line 162
goto label_10;
#line 162
label_10:
#line 162
undef($memory_19);
#line 162
undef($memory_17);
#line 162
undef($memory_18);
#line 163
$memory_14 = $memory_14 + $memory_15;
#line 163
goto label_6;
#line 163
label_4:
#line 163
undef($memory_13);
#line 163
undef($memory_14);
#line 163
undef($memory_15);
#line 163
undef($memory_16);
#line 164
$memory_13 = $memory_12;
#line 164
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 164
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 164
if (c_rt_lib::check_true($memory_13)) {goto label_19;}
#line 164
undef($memory_11);
#line 164
undef($memory_12);
#line 164
undef($memory_13);
#line 164
goto label_2;
#line 164
goto label_19;
#line 164
label_19:
#line 164
undef($memory_13);
#line 165
$memory_13 = "nl_asm";
#line 165
$memory_13 = c_rt_lib::get_ref_hash($memory_0, $memory_13);
#line 165
hash::set_value($memory_13, $memory_6, $memory_11);
#line 165
$memory_14 = "nl_asm";
#line 165
c_rt_lib::set_ref_hash($memory_0, $memory_14, $memory_13);
#line 165
undef($memory_14);
#line 165
undef($memory_13);
#line 166
hash::set_value($memory_2, $memory_6, $memory_11);
#line 166
undef($memory_11);
#line 166
undef($memory_12);
#line 166
label_2:
#line 167
$memory_7 = $memory_7 + $memory_8;
#line 167
goto label_3;
#line 167
label_1:
#line 167
undef($memory_5);
#line 167
undef($memory_6);
#line 167
undef($memory_7);
#line 167
undef($memory_8);
#line 167
undef($memory_9);
#line 167
undef($memory_10);
#line 167
undef($memory_1);
#line 167
undef($memory_3);
#line 167
undef($memory_4);
#line 167
$_[0] = $memory_0;$_[2] = $memory_2;return;
$_[0] = $memory_0;$_[2] = $memory_2;}

sub post_processing_priv::evaluate_const_in_modules($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];
#line 172
$memory_4 = [];
#line 173
$memory_5 = $memory_0->{'nl_asm'};
#line 173
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 173
label_3:
#line 173
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 173
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 173
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 173
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 174
array::push($memory_4, $memory_7);
#line 175
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 175
goto label_3;
#line 175
label_1:
#line 175
undef($memory_5);
#line 175
undef($memory_6);
#line 175
undef($memory_7);
#line 175
undef($memory_8);
#line 176
$memory_6 = {};
#line 176
$memory_5 = interpreter::init($memory_4, $memory_6);
#line 176
undef($memory_6);
#line 176
$memory_6 = $memory_5;
#line 176
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'interpreter_state'} = $memory_6;
#line 176
undef($memory_5);
#line 176
undef($memory_6);
#line 177
$memory_6 = $memory_0->{'nl_asm'};
#line 177
$memory_5 = hash::keys($memory_6);
#line 177
undef($memory_6);
#line 177
$memory_7 = 0;
#line 177
$memory_8 = 1;
#line 177
$memory_9 = c_rt_lib::array_len($memory_5);
#line 177
label_6:
#line 177
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 177
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 177
$memory_6 = $memory_5->[$memory_7];
#line 178
$memory_12 = $memory_0->{'nl_asm'};
#line 178
$memory_11 = hash::get_value($memory_12, $memory_6);
#line 178
undef($memory_12);
#line 179
$memory_12 = c_rt_lib::to_nl(0);
#line 180
$memory_14 = $memory_11->{'functions'};
#line 180
$memory_13 = array::len($memory_14);
#line 180
undef($memory_14);
#line 180
$memory_14 = 0;
#line 180
$memory_15 = 1;
#line 180
label_9:
#line 180
$memory_16 = c_rt_lib::to_nl($memory_14 >= $memory_13);
#line 180
if (c_rt_lib::check_true($memory_16)) {goto label_7;}
#line 181
$memory_17 = $memory_11->{'functions'};
#line 181
$memory_17 = $memory_17->[$memory_14];
#line 182
$memory_18 = $memory_17->{'access'};
#line 182
$memory_18 = c_rt_lib::ov_is($memory_18, 'pub');
#line 182
if (c_rt_lib::check_true($memory_18)) {goto label_11;}
#line 182
$memory_18 = "_priv::";
#line 182
goto label_10;
#line 182
label_11:
#line 182
$memory_18 = "::";
#line 182
label_10:
#line 182
$memory_18 = $memory_6 . $memory_18;
#line 182
$memory_19 = $memory_17->{'name'};
#line 182
$memory_18 = $memory_18 . $memory_19;
#line 182
undef($memory_19);
#line 183
$memory_19 = hash::has_key($memory_1, $memory_18);
#line 183
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 183
if (c_rt_lib::check_true($memory_19)) {goto label_13;}
#line 184
$memory_20 = c_rt_lib::to_nl(1);
#line 184
$memory_12 = $memory_20;
#line 184
undef($memory_20);
#line 185
$memory_21 = $memory_11->{'module_name'};
#line 185
$memory_22 = $memory_0->{'interpreter_state'};
#line 185
$memory_20 = post_processing_priv::evaluate_const_in_function($memory_17, $memory_21, $memory_3, $memory_22);
#line 185
undef($memory_22);
#line 185
undef($memory_21);
#line 185
$memory_21 = $memory_20;
#line 185
 if (c_rt_lib::get_hashcount($memory_17) > 1) {$memory_17 = {%{$memory_17}};}$memory_17->{'commands'} = $memory_21;
#line 185
undef($memory_20);
#line 185
undef($memory_21);
#line 186
$memory_20 = "functions";
#line 186
$memory_20 = c_rt_lib::get_ref_hash($memory_11, $memory_20);
#line 186
$memory_21 = $memory_17;
#line 186
 if (c_rt_lib::get_arrcount($memory_20) > 1) {$memory_20 = [@{$memory_20}];}$memory_20->[$memory_14] = $memory_21;
#line 186
$memory_22 = "functions";
#line 186
c_rt_lib::set_ref_hash($memory_11, $memory_22, $memory_20);
#line 186
undef($memory_22);
#line 186
undef($memory_20);
#line 186
undef($memory_21);
#line 187
goto label_13;
#line 187
label_13:
#line 187
undef($memory_19);
#line 187
undef($memory_17);
#line 187
undef($memory_18);
#line 188
$memory_14 = $memory_14 + $memory_15;
#line 188
goto label_9;
#line 188
label_7:
#line 188
undef($memory_13);
#line 188
undef($memory_14);
#line 188
undef($memory_15);
#line 188
undef($memory_16);
#line 189
$memory_13 = $memory_12;
#line 189
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 189
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 189
if (c_rt_lib::check_true($memory_13)) {goto label_15;}
#line 189
undef($memory_11);
#line 189
undef($memory_12);
#line 189
undef($memory_13);
#line 189
goto label_5;
#line 189
goto label_15;
#line 189
label_15:
#line 189
undef($memory_13);
#line 190
$memory_13 = "nl_asm";
#line 190
$memory_13 = c_rt_lib::get_ref_hash($memory_0, $memory_13);
#line 190
hash::set_value($memory_13, $memory_6, $memory_11);
#line 190
$memory_14 = "nl_asm";
#line 190
c_rt_lib::set_ref_hash($memory_0, $memory_14, $memory_13);
#line 190
undef($memory_14);
#line 190
undef($memory_13);
#line 191
hash::set_value($memory_2, $memory_6, $memory_11);
#line 191
undef($memory_11);
#line 191
undef($memory_12);
#line 191
label_5:
#line 192
$memory_7 = $memory_7 + $memory_8;
#line 192
goto label_6;
#line 192
label_4:
#line 192
undef($memory_5);
#line 192
undef($memory_6);
#line 192
undef($memory_7);
#line 192
undef($memory_8);
#line 192
undef($memory_9);
#line 192
undef($memory_10);
#line 192
undef($memory_4);
#line 192
undef($memory_1);
#line 192
undef($memory_3);
#line 192
$_[0] = $memory_0;$_[2] = $memory_2;return;
$_[0] = $memory_0;$_[2] = $memory_2;}

sub post_processing_priv::evaluate_const_in_function($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 197
$memory_5 = $memory_0->{'commands'};
#line 197
$memory_6 = $memory_0->{'args_type'};
#line 197
$memory_4 = flow_graph::make_blocks($memory_5, $memory_6);
#line 197
undef($memory_6);
#line 197
undef($memory_5);
#line 198
post_processing_priv::evaluate_const_in_blocks($memory_4, $memory_2, $memory_0, $memory_1, $memory_3);
#line 199
$memory_5 = flow_graph::combine_blocks($memory_4);
#line 199
undef($memory_0);
#line 199
undef($memory_1);
#line 199
undef($memory_2);
#line 199
undef($memory_3);
#line 199
undef($memory_4);
#line 199
return $memory_5;
#line 199
undef($memory_5);
#line 199
undef($memory_4);
#line 199
undef($memory_0);
#line 199
undef($memory_1);
#line 199
undef($memory_2);
#line 199
undef($memory_3);
#line 199
return;
}

sub post_processing_priv::set_interpreted_changed_functions($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 204
$memory_3 = $memory_0->{'fun_calls'};
#line 205
$memory_4 = $memory_0->{'nl_asm'};
#line 205
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 205
label_3:
#line 205
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 205
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 205
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 205
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 206
$memory_8 = $memory_6->{'functions'};
#line 206
$memory_10 = 0;
#line 206
$memory_11 = 1;
#line 206
$memory_12 = c_rt_lib::array_len($memory_8);
#line 206
label_6:
#line 206
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 206
if (c_rt_lib::check_true($memory_13)) {goto label_4;}
#line 206
$memory_9 = $memory_8->[$memory_10];
#line 207
$memory_14 = $memory_9->{'access'};
#line 207
$memory_14 = c_rt_lib::ov_is($memory_14, 'pub');
#line 207
if (c_rt_lib::check_true($memory_14)) {goto label_8;}
#line 207
$memory_14 = "_priv::";
#line 207
goto label_7;
#line 207
label_8:
#line 207
$memory_14 = "::";
#line 207
label_7:
#line 207
$memory_15 = $memory_9->{'name'};
#line 207
$memory_14 = $memory_14 . $memory_15;
#line 207
undef($memory_15);
#line 208
$memory_15 = $memory_5 . $memory_14;
#line 209
$memory_17 = hash::get_value($memory_3, $memory_5);
#line 209
$memory_16 = hash::get_value($memory_17, $memory_14);
#line 209
undef($memory_17);
#line 210
$memory_19 = c_rt_lib::init_iter($memory_16);
#line 210
label_11:
#line 210
$memory_17 = c_rt_lib::is_end_hash($memory_19);
#line 210
if (c_rt_lib::check_true($memory_17)) {goto label_9;}
#line 210
$memory_17 = c_rt_lib::get_key_iter($memory_19);
#line 210
$memory_18 = c_rt_lib::hash_get_value($memory_16, $memory_17);
#line 211
$memory_20 = hash::has_key($memory_2, $memory_17);
#line 211
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 211
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 211
if (c_rt_lib::check_true($memory_20)) {goto label_13;}
#line 211
undef($memory_20);
#line 211
goto label_10;
#line 211
goto label_13;
#line 211
label_13:
#line 211
undef($memory_20);
#line 212
$memory_20 = hash::get_value($memory_1, $memory_17);
#line 213
$memory_21 = $memory_20;
#line 213
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 213
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 213
if (c_rt_lib::check_true($memory_21)) {goto label_15;}
#line 213
undef($memory_20);
#line 213
undef($memory_21);
#line 213
goto label_10;
#line 213
goto label_15;
#line 213
label_15:
#line 213
undef($memory_21);
#line 214
$memory_21 = "";
#line 214
hash::set_value($memory_2, $memory_15, $memory_21);
#line 214
undef($memory_21);
#line 214
undef($memory_20);
#line 214
label_10:
#line 215
$memory_19 = c_rt_lib::next_iter($memory_19);
#line 215
goto label_11;
#line 215
label_9:
#line 215
undef($memory_17);
#line 215
undef($memory_18);
#line 215
undef($memory_19);
#line 215
undef($memory_14);
#line 215
undef($memory_15);
#line 215
undef($memory_16);
#line 216
$memory_10 = $memory_10 + $memory_11;
#line 216
goto label_6;
#line 216
label_4:
#line 216
undef($memory_8);
#line 216
undef($memory_9);
#line 216
undef($memory_10);
#line 216
undef($memory_11);
#line 216
undef($memory_12);
#line 216
undef($memory_13);
#line 217
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 217
goto label_3;
#line 217
label_1:
#line 217
undef($memory_4);
#line 217
undef($memory_5);
#line 217
undef($memory_6);
#line 217
undef($memory_7);
#line 217
undef($memory_3);
#line 217
undef($memory_0);
#line 217
undef($memory_1);
#line 217
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub post_processing_priv::get_called_switched($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];
#line 222
$memory_2 = {};
#line 223
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 223
label_3:
#line 223
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 223
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 223
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 223
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 224
$memory_8 = c_rt_lib::init_iter($memory_4);
#line 224
label_6:
#line 224
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 224
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 224
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 224
$memory_7 = c_rt_lib::hash_get_value($memory_4, $memory_6);
#line 225
$memory_11 = c_rt_lib::init_iter($memory_7);
#line 225
label_9:
#line 225
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 225
if (c_rt_lib::check_true($memory_9)) {goto label_7;}
#line 225
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 225
$memory_10 = c_rt_lib::hash_get_value($memory_7, $memory_9);
#line 226
$memory_12 = hash::has_key($memory_1, $memory_9);
#line 226
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 226
if (c_rt_lib::check_true($memory_12)) {goto label_11;}
#line 227
$memory_13 = c_rt_lib::to_nl(1);
#line 227
hash::set_value($memory_2, $memory_9, $memory_13);
#line 227
undef($memory_13);
#line 228
goto label_11;
#line 228
label_11:
#line 228
undef($memory_12);
#line 229
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 229
goto label_9;
#line 229
label_7:
#line 229
undef($memory_9);
#line 229
undef($memory_10);
#line 229
undef($memory_11);
#line 230
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 230
goto label_6;
#line 230
label_4:
#line 230
undef($memory_6);
#line 230
undef($memory_7);
#line 230
undef($memory_8);
#line 231
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 231
goto label_3;
#line 231
label_1:
#line 231
undef($memory_3);
#line 231
undef($memory_4);
#line 231
undef($memory_5);
#line 232
undef($memory_0);
#line 232
undef($memory_1);
#line 232
return $memory_2;
#line 232
undef($memory_2);
#line 232
undef($memory_0);
#line 232
undef($memory_1);
#line 232
return;
}

sub post_processing_priv::get_switched_func($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 237
$memory_2 = {};
#line 238
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 238
label_3:
#line 238
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 238
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 238
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 238
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 239
$memory_6 = hash::has_key($memory_0, $memory_3);
#line 239
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 239
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 240
$memory_7 = hash::get_value($memory_0, $memory_3);
#line 241
$memory_8 = $memory_7;
#line 241
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 241
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 241
$memory_8 = $memory_4;
#line 241
label_9:
#line 241
undef($memory_9);
#line 241
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 241
$memory_8 = $memory_7;
#line 241
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 241
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 241
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 241
$memory_8 = $memory_4;
#line 241
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 241
label_10:
#line 241
undef($memory_9);
#line 241
label_8:
#line 241
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 241
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 241
undef($memory_6);
#line 241
undef($memory_7);
#line 241
undef($memory_8);
#line 241
goto label_2;
#line 241
goto label_7;
#line 241
label_7:
#line 241
undef($memory_8);
#line 241
undef($memory_7);
#line 242
goto label_5;
#line 242
label_5:
#line 242
undef($memory_6);
#line 243
hash::set_value($memory_2, $memory_3, $memory_4);
#line 243
label_2:
#line 244
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 244
goto label_3;
#line 244
label_1:
#line 244
undef($memory_3);
#line 244
undef($memory_4);
#line 244
undef($memory_5);
#line 245
undef($memory_0);
#line 245
undef($memory_1);
#line 245
return $memory_2;
#line 245
undef($memory_2);
#line 245
undef($memory_0);
#line 245
undef($memory_1);
#line 245
return;
}

sub post_processing_priv::set_function_calls($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 249
$memory_4 = c_rt_lib::init_iter($memory_1);
#line 249
label_3:
#line 249
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 249
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 249
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 249
$memory_3 = c_rt_lib::hash_get_value($memory_1, $memory_2);
#line 250
$memory_5 = {};
#line 251
$memory_6 = $memory_3->{'functions'};
#line 251
$memory_8 = 0;
#line 251
$memory_9 = 1;
#line 251
$memory_10 = c_rt_lib::array_len($memory_6);
#line 251
label_6:
#line 251
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 251
if (c_rt_lib::check_true($memory_11)) {goto label_4;}
#line 251
$memory_7 = $memory_6->[$memory_8];
#line 252
$memory_12 = {};
#line 253
$memory_13 = $memory_7->{'commands'};
#line 253
$memory_15 = 0;
#line 253
$memory_16 = 1;
#line 253
$memory_17 = c_rt_lib::array_len($memory_13);
#line 253
label_9:
#line 253
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 253
if (c_rt_lib::check_true($memory_18)) {goto label_7;}
#line 253
$memory_14 = $memory_13->[$memory_15];
#line 254
$memory_19 = $memory_14->{'cmd'};
#line 254
$memory_19 = c_rt_lib::ov_is($memory_19, 'call');
#line 254
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 254
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 254
if (c_rt_lib::check_true($memory_19)) {goto label_11;}
#line 254
undef($memory_19);
#line 254
goto label_8;
#line 254
goto label_11;
#line 254
label_11:
#line 254
undef($memory_19);
#line 255
$memory_19 = $memory_14->{'cmd'};
#line 255
$memory_19 = c_rt_lib::ov_as($memory_19, 'call');
#line 256
$memory_20 = $memory_19->{'mod'};
#line 257
$memory_21 = "::";
#line 257
$memory_22 = $memory_19->{'fun_name'};
#line 257
$memory_21 = $memory_21 . $memory_22;
#line 257
undef($memory_22);
#line 258
$memory_22 = "";
#line 258
$memory_22 = c_rt_lib::to_nl($memory_20 eq $memory_22);
#line 258
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 258
if (c_rt_lib::check_true($memory_22)) {goto label_13;}
#line 259
$memory_20 = $memory_2;
#line 260
$memory_23 = "_priv";
#line 260
$memory_23 = $memory_23 . $memory_21;
#line 260
$memory_21 = $memory_23;
#line 260
undef($memory_23);
#line 261
goto label_13;
#line 261
label_13:
#line 261
undef($memory_22);
#line 262
$memory_22 = $memory_20 . $memory_21;
#line 262
$memory_23 = [$memory_20,$memory_21];
#line 262
hash::set_value($memory_12, $memory_22, $memory_23);
#line 262
undef($memory_23);
#line 262
undef($memory_22);
#line 262
undef($memory_19);
#line 262
undef($memory_20);
#line 262
undef($memory_21);
#line 262
label_8:
#line 263
$memory_15 = $memory_15 + $memory_16;
#line 263
goto label_9;
#line 263
label_7:
#line 263
undef($memory_13);
#line 263
undef($memory_14);
#line 263
undef($memory_15);
#line 263
undef($memory_16);
#line 263
undef($memory_17);
#line 263
undef($memory_18);
#line 264
$memory_13 = $memory_7->{'access'};
#line 264
$memory_13 = c_rt_lib::ov_is($memory_13, 'pub');
#line 264
if (c_rt_lib::check_true($memory_13)) {goto label_15;}
#line 264
$memory_13 = "_priv::";
#line 264
goto label_14;
#line 264
label_15:
#line 264
$memory_13 = "::";
#line 264
label_14:
#line 265
$memory_14 = $memory_7->{'name'};
#line 265
$memory_14 = $memory_13 . $memory_14;
#line 265
hash::set_value($memory_5, $memory_14, $memory_12);
#line 265
undef($memory_14);
#line 265
undef($memory_12);
#line 265
undef($memory_13);
#line 266
$memory_8 = $memory_8 + $memory_9;
#line 266
goto label_6;
#line 266
label_4:
#line 266
undef($memory_6);
#line 266
undef($memory_7);
#line 266
undef($memory_8);
#line 266
undef($memory_9);
#line 266
undef($memory_10);
#line 266
undef($memory_11);
#line 267
hash::set_value($memory_0, $memory_2, $memory_5);
#line 267
undef($memory_5);
#line 268
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 268
goto label_3;
#line 268
label_1:
#line 268
undef($memory_2);
#line 268
undef($memory_3);
#line 268
undef($memory_4);
#line 268
undef($memory_1);
#line 268
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::get_math_fun($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];$memory_1 = $_[1];
#line 272
$memory_2 = {};
#line 273
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 273
label_3:
#line 273
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 273
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 273
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 273
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 274
$memory_6 = c_rt_lib::to_nl(1);
#line 274
hash::set_value($memory_2, $memory_3, $memory_6);
#line 274
undef($memory_6);
#line 275
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 275
goto label_3;
#line 275
label_1:
#line 275
undef($memory_3);
#line 275
undef($memory_4);
#line 275
undef($memory_5);
#line 276
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 276
label_6:
#line 276
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 276
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 276
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 276
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 277
$memory_8 = c_rt_lib::init_iter($memory_4);
#line 277
label_9:
#line 277
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 277
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 277
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 277
$memory_7 = c_rt_lib::hash_get_value($memory_4, $memory_6);
#line 278
$memory_9 = $memory_3 . $memory_6;
#line 278
$memory_10 = c_rt_lib::to_nl(1);
#line 278
hash::set_value($memory_2, $memory_9, $memory_10);
#line 278
undef($memory_10);
#line 278
undef($memory_9);
#line 279
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 279
goto label_9;
#line 279
label_7:
#line 279
undef($memory_6);
#line 279
undef($memory_7);
#line 279
undef($memory_8);
#line 280
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 280
goto label_6;
#line 280
label_4:
#line 280
undef($memory_3);
#line 280
undef($memory_4);
#line 280
undef($memory_5);
#line 281
$memory_3 = {};
#line 282
$memory_4 = {};
#line 283
$memory_7 = c_rt_lib::init_iter($memory_0);
#line 283
label_12:
#line 283
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 283
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 283
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 283
$memory_6 = c_rt_lib::hash_get_value($memory_0, $memory_5);
#line 284
$memory_10 = c_rt_lib::init_iter($memory_6);
#line 284
label_15:
#line 284
$memory_8 = c_rt_lib::is_end_hash($memory_10);
#line 284
if (c_rt_lib::check_true($memory_8)) {goto label_13;}
#line 284
$memory_8 = c_rt_lib::get_key_iter($memory_10);
#line 284
$memory_9 = c_rt_lib::hash_get_value($memory_6, $memory_8);
#line 285
$memory_13 = c_rt_lib::init_iter($memory_9);
#line 285
label_18:
#line 285
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 285
if (c_rt_lib::check_true($memory_11)) {goto label_16;}
#line 285
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 285
$memory_12 = c_rt_lib::hash_get_value($memory_9, $memory_11);
#line 286
$memory_14 = {};
#line 287
$memory_15 = hash::has_key($memory_3, $memory_11);
#line 287
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 287
if (c_rt_lib::check_true($memory_15)) {goto label_20;}
#line 288
$memory_16 = hash::get_value($memory_3, $memory_11);
#line 288
$memory_14 = $memory_16;
#line 288
undef($memory_16);
#line 289
goto label_20;
#line 289
label_20:
#line 289
undef($memory_15);
#line 290
$memory_15 = hash::has_key($memory_2, $memory_11);
#line 290
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 290
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 290
if (c_rt_lib::check_true($memory_15)) {goto label_22;}
#line 290
$memory_16 = c_rt_lib::to_nl(1);
#line 290
hash::set_value($memory_4, $memory_11, $memory_16);
#line 290
undef($memory_16);
#line 290
goto label_22;
#line 290
label_22:
#line 290
undef($memory_15);
#line 291
$memory_15 = $memory_5 . $memory_8;
#line 291
$memory_16 = 0;
#line 291
hash::set_value($memory_14, $memory_15, $memory_16);
#line 291
undef($memory_16);
#line 291
undef($memory_15);
#line 292
hash::set_value($memory_3, $memory_11, $memory_14);
#line 292
undef($memory_14);
#line 293
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 293
goto label_18;
#line 293
label_16:
#line 293
undef($memory_11);
#line 293
undef($memory_12);
#line 293
undef($memory_13);
#line 294
$memory_10 = c_rt_lib::next_iter($memory_10);
#line 294
goto label_15;
#line 294
label_13:
#line 294
undef($memory_8);
#line 294
undef($memory_9);
#line 294
undef($memory_10);
#line 295
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 295
goto label_12;
#line 295
label_10:
#line 295
undef($memory_5);
#line 295
undef($memory_6);
#line 295
undef($memory_7);
#line 296
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 296
label_25:
#line 296
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 296
if (c_rt_lib::check_true($memory_5)) {goto label_23;}
#line 296
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 296
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 297
$memory_8 = c_rt_lib::to_nl(1);
#line 297
hash::set_value($memory_2, $memory_5, $memory_8);
#line 297
undef($memory_8);
#line 298
post_processing_priv::set_non_math_fun_rec($memory_2, $memory_5, $memory_3);
#line 299
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 299
goto label_25;
#line 299
label_23:
#line 299
undef($memory_5);
#line 299
undef($memory_6);
#line 299
undef($memory_7);
#line 300
undef($memory_0);
#line 300
undef($memory_1);
#line 300
undef($memory_3);
#line 300
undef($memory_4);
#line 300
return $memory_2;
#line 300
undef($memory_2);
#line 300
undef($memory_3);
#line 300
undef($memory_4);
#line 300
undef($memory_0);
#line 300
undef($memory_1);
#line 300
return;
}

sub post_processing_priv::set_non_math_fun_rec($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 305
$memory_3 = hash::get_value($memory_0, $memory_1);
#line 305
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 305
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 305
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 305
undef($memory_1);
#line 305
undef($memory_2);
#line 305
undef($memory_3);
#line 305
$_[0] = $memory_0;return;
#line 305
goto label_2;
#line 305
label_2:
#line 305
undef($memory_3);
#line 306
$memory_3 = c_rt_lib::to_nl(0);
#line 306
hash::set_value($memory_0, $memory_1, $memory_3);
#line 306
undef($memory_3);
#line 307
$memory_3 = hash::has_key($memory_2, $memory_1);
#line 307
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 307
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 307
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 307
undef($memory_1);
#line 307
undef($memory_2);
#line 307
undef($memory_3);
#line 307
$_[0] = $memory_0;return;
#line 307
goto label_4;
#line 307
label_4:
#line 307
undef($memory_3);
#line 308
$memory_3 = hash::get_value($memory_2, $memory_1);
#line 309
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 309
label_7:
#line 309
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 309
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 309
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 309
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 310
post_processing_priv::set_non_math_fun_rec($memory_0, $memory_4, $memory_2);
#line 311
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 311
goto label_7;
#line 311
label_5:
#line 311
undef($memory_4);
#line 311
undef($memory_5);
#line 311
undef($memory_6);
#line 311
undef($memory_3);
#line 311
undef($memory_1);
#line 311
undef($memory_2);
#line 311
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::set_mathfun_in_modules($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;my $memory_27;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 316
$memory_5 = $memory_0->{'math_fs'};
#line 316
$memory_4 = post_processing_priv::get_switched_func($memory_5, $memory_1);
#line 316
undef($memory_5);
#line 317
$memory_6 = $memory_0->{'fun_calls'};
#line 317
$memory_5 = post_processing_priv::get_called_switched($memory_6, $memory_4);
#line 317
undef($memory_6);
#line 318
$memory_7 = $memory_0->{'nl_asm'};
#line 318
$memory_6 = hash::keys($memory_7);
#line 318
undef($memory_7);
#line 318
$memory_8 = 0;
#line 318
$memory_9 = 1;
#line 318
$memory_10 = c_rt_lib::array_len($memory_6);
#line 318
label_3:
#line 318
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 318
if (c_rt_lib::check_true($memory_11)) {goto label_1;}
#line 318
$memory_7 = $memory_6->[$memory_8];
#line 319
$memory_13 = $memory_0->{'nl_asm'};
#line 319
$memory_12 = hash::get_value($memory_13, $memory_7);
#line 319
undef($memory_13);
#line 320
$memory_13 = c_rt_lib::to_nl(0);
#line 321
$memory_15 = $memory_12->{'functions'};
#line 321
$memory_14 = array::len($memory_15);
#line 321
undef($memory_15);
#line 321
$memory_15 = 0;
#line 321
$memory_16 = 1;
#line 321
label_6:
#line 321
$memory_17 = c_rt_lib::to_nl($memory_15 >= $memory_14);
#line 321
if (c_rt_lib::check_true($memory_17)) {goto label_4;}
#line 322
$memory_18 = c_rt_lib::to_nl(0);
#line 323
$memory_19 = $memory_12->{'functions'};
#line 323
$memory_19 = $memory_19->[$memory_15];
#line 324
$memory_20 = $memory_12->{'module_name'};
#line 324
$memory_21 = $memory_19->{'access'};
#line 324
$memory_21 = c_rt_lib::ov_is($memory_21, 'pub');
#line 324
if (c_rt_lib::check_true($memory_21)) {goto label_8;}
#line 324
$memory_21 = "_priv::";
#line 324
goto label_7;
#line 324
label_8:
#line 324
$memory_21 = "::";
#line 324
label_7:
#line 324
$memory_20 = $memory_20 . $memory_21;
#line 324
undef($memory_21);
#line 324
$memory_21 = $memory_19->{'name'};
#line 324
$memory_20 = $memory_20 . $memory_21;
#line 324
undef($memory_21);
#line 325
$memory_21 = hash::get_value($memory_1, $memory_20);
#line 326
$memory_22 = $memory_21;
#line 326
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 326
if (c_rt_lib::check_true($memory_23)) {goto label_11;}
#line 326
$memory_22 = $memory_19->{'annotation'};
#line 326
$memory_22 = c_rt_lib::ov_is($memory_22, 'math');
#line 326
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 326
label_11:
#line 326
undef($memory_23);
#line 326
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 326
if (c_rt_lib::check_true($memory_22)) {goto label_10;}
#line 327
$memory_23 = c_rt_lib::ov_mk_none('math');
#line 327
$memory_24 = "functions";
#line 327
$memory_24 = c_rt_lib::get_ref_hash($memory_12, $memory_24);
#line 327
$memory_25 = c_rt_lib::get_ref_arr($memory_24, $memory_15);
#line 327
$memory_26 = $memory_23;
#line 327
 if (c_rt_lib::get_hashcount($memory_25) > 1) {$memory_25 = {%{$memory_25}};}$memory_25->{'annotation'} = $memory_26;
#line 327
c_rt_lib::set_ref_arr($memory_24, $memory_15, $memory_25);
#line 327
$memory_27 = "functions";
#line 327
c_rt_lib::set_ref_hash($memory_12, $memory_27, $memory_24);
#line 327
undef($memory_27);
#line 327
undef($memory_23);
#line 327
undef($memory_24);
#line 327
undef($memory_25);
#line 327
undef($memory_26);
#line 328
$memory_23 = c_rt_lib::to_nl(1);
#line 328
$memory_18 = $memory_23;
#line 328
undef($memory_23);
#line 329
goto label_12;
#line 329
label_10:
#line 329
$memory_22 = $memory_21;
#line 329
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 329
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 329
if (c_rt_lib::check_true($memory_23)) {goto label_13;}
#line 329
$memory_22 = $memory_19->{'annotation'};
#line 329
$memory_22 = c_rt_lib::ov_is($memory_22, 'state');
#line 329
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 329
label_13:
#line 329
undef($memory_23);
#line 329
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 329
if (c_rt_lib::check_true($memory_22)) {goto label_12;}
#line 330
$memory_23 = c_rt_lib::ov_mk_none('state');
#line 330
$memory_24 = "functions";
#line 330
$memory_24 = c_rt_lib::get_ref_hash($memory_12, $memory_24);
#line 330
$memory_25 = c_rt_lib::get_ref_arr($memory_24, $memory_15);
#line 330
$memory_26 = $memory_23;
#line 330
 if (c_rt_lib::get_hashcount($memory_25) > 1) {$memory_25 = {%{$memory_25}};}$memory_25->{'annotation'} = $memory_26;
#line 330
c_rt_lib::set_ref_arr($memory_24, $memory_15, $memory_25);
#line 330
$memory_27 = "functions";
#line 330
c_rt_lib::set_ref_hash($memory_12, $memory_27, $memory_24);
#line 330
undef($memory_27);
#line 330
undef($memory_23);
#line 330
undef($memory_24);
#line 330
undef($memory_25);
#line 330
undef($memory_26);
#line 331
$memory_23 = c_rt_lib::to_nl(1);
#line 331
$memory_18 = $memory_23;
#line 331
undef($memory_23);
#line 332
goto label_12;
#line 332
label_12:
#line 332
undef($memory_22);
#line 333
$memory_22 = hash::has_key($memory_5, $memory_20);
#line 333
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 333
if (c_rt_lib::check_true($memory_22)) {goto label_15;}
#line 333
$memory_23 = c_rt_lib::to_nl(1);
#line 333
$memory_18 = $memory_23;
#line 333
undef($memory_23);
#line 333
goto label_15;
#line 333
label_15:
#line 333
undef($memory_22);
#line 334
$memory_22 = $memory_18;
#line 334
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 334
if (c_rt_lib::check_true($memory_22)) {goto label_17;}
#line 335
$memory_23 = "";
#line 335
hash::set_value($memory_2, $memory_20, $memory_23);
#line 335
undef($memory_23);
#line 336
$memory_23 = c_rt_lib::to_nl(1);
#line 336
$memory_13 = $memory_23;
#line 336
undef($memory_23);
#line 337
goto label_17;
#line 337
label_17:
#line 337
undef($memory_22);
#line 337
undef($memory_18);
#line 337
undef($memory_19);
#line 337
undef($memory_20);
#line 337
undef($memory_21);
#line 338
$memory_15 = $memory_15 + $memory_16;
#line 338
goto label_6;
#line 338
label_4:
#line 338
undef($memory_14);
#line 338
undef($memory_15);
#line 338
undef($memory_16);
#line 338
undef($memory_17);
#line 339
$memory_14 = $memory_13;
#line 339
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 339
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 339
if (c_rt_lib::check_true($memory_14)) {goto label_19;}
#line 339
undef($memory_12);
#line 339
undef($memory_13);
#line 339
undef($memory_14);
#line 339
goto label_2;
#line 339
goto label_19;
#line 339
label_19:
#line 339
undef($memory_14);
#line 340
hash::set_value($memory_3, $memory_7, $memory_12);
#line 341
$memory_14 = "nl_asm";
#line 341
$memory_14 = c_rt_lib::get_ref_hash($memory_0, $memory_14);
#line 341
hash::set_value($memory_14, $memory_7, $memory_12);
#line 341
$memory_15 = "nl_asm";
#line 341
c_rt_lib::set_ref_hash($memory_0, $memory_15, $memory_14);
#line 341
undef($memory_15);
#line 341
undef($memory_14);
#line 341
undef($memory_12);
#line 341
undef($memory_13);
#line 341
label_2:
#line 342
$memory_8 = $memory_8 + $memory_9;
#line 342
goto label_3;
#line 342
label_1:
#line 342
undef($memory_6);
#line 342
undef($memory_7);
#line 342
undef($memory_8);
#line 342
undef($memory_9);
#line 342
undef($memory_10);
#line 342
undef($memory_11);
#line 342
undef($memory_4);
#line 342
undef($memory_5);
#line 342
undef($memory_1);
#line 342
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;}

sub post_processing_priv::set_const_reg($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 347
$memory_4 = [];
#line 348
$memory_5 = 0;
#line 348
$memory_6 = 1;
#line 348
label_3:
#line 348
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_3);
#line 348
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 349
$memory_8 = c_rt_lib::ov_mk_none('no');
#line 349
array::push($memory_4, $memory_8);
#line 349
undef($memory_8);
#line 350
$memory_5 = $memory_5 + $memory_6;
#line 350
goto label_3;
#line 350
label_1:
#line 350
undef($memory_5);
#line 350
undef($memory_6);
#line 350
undef($memory_7);
#line 351
$memory_5 = [];
#line 352
$memory_7 = 0;
#line 352
$memory_8 = [];
#line 352
$memory_6 = {was => $memory_7,regs => $memory_8,};
#line 352
undef($memory_7);
#line 352
undef($memory_8);
#line 353
$memory_7 = array::len($memory_0);
#line 353
$memory_8 = 0;
#line 353
$memory_9 = 1;
#line 353
label_6:
#line 353
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 353
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 354
array::push($memory_5, $memory_6);
#line 355
$memory_8 = $memory_8 + $memory_9;
#line 355
goto label_6;
#line 355
label_4:
#line 355
undef($memory_7);
#line 355
undef($memory_8);
#line 355
undef($memory_9);
#line 355
undef($memory_10);
#line 356
$memory_7 = array::len($memory_0);
#line 356
$memory_8 = 0;
#line 356
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_8);
#line 356
undef($memory_8);
#line 356
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 356
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 356
$memory_8 = [];
#line 356
die(dfile::ssave($memory_8));
#line 356
goto label_8;
#line 356
label_8:
#line 356
undef($memory_7);
#line 356
undef($memory_8);
#line 357
$memory_7 = 0;
#line 357
post_processing_priv::set_const_block($memory_7, $memory_0, $memory_1, $memory_5, $memory_2, $memory_4);
#line 357
undef($memory_7);
#line 357
undef($memory_4);
#line 357
undef($memory_5);
#line 357
undef($memory_6);
#line 357
undef($memory_1);
#line 357
undef($memory_2);
#line 357
undef($memory_3);
#line 357
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::evaluate_const_in_blocks($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];
#line 362
$memory_5 = [];
#line 363
$memory_6 = $memory_2->{'reg_size'};
#line 363
$memory_7 = 0;
#line 363
$memory_8 = 1;
#line 363
label_3:
#line 363
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_6);
#line 363
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 364
$memory_10 = c_rt_lib::ov_mk_none('no');
#line 364
array::push($memory_5, $memory_10);
#line 364
undef($memory_10);
#line 365
$memory_7 = $memory_7 + $memory_8;
#line 365
goto label_3;
#line 365
label_1:
#line 365
undef($memory_6);
#line 365
undef($memory_7);
#line 365
undef($memory_8);
#line 365
undef($memory_9);
#line 366
$memory_6 = [];
#line 367
$memory_8 = 0;
#line 367
$memory_9 = [];
#line 367
$memory_7 = {was => $memory_8,regs => $memory_9,};
#line 367
undef($memory_8);
#line 367
undef($memory_9);
#line 368
$memory_8 = array::len($memory_0);
#line 368
$memory_9 = 0;
#line 368
$memory_10 = 1;
#line 368
label_6:
#line 368
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 368
if (c_rt_lib::check_true($memory_11)) {goto label_4;}
#line 369
array::push($memory_6, $memory_7);
#line 370
$memory_9 = $memory_9 + $memory_10;
#line 370
goto label_6;
#line 370
label_4:
#line 370
undef($memory_8);
#line 370
undef($memory_9);
#line 370
undef($memory_10);
#line 370
undef($memory_11);
#line 371
$memory_8 = array::len($memory_0);
#line 371
$memory_9 = 0;
#line 371
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 371
undef($memory_9);
#line 371
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 371
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 371
$memory_9 = [];
#line 371
die(dfile::ssave($memory_9));
#line 371
goto label_8;
#line 371
label_8:
#line 371
undef($memory_8);
#line 371
undef($memory_9);
#line 372
$memory_8 = $memory_0;
#line 373
$memory_9 = 0;
#line 373
post_processing_priv::set_const_block_val($memory_9, $memory_0, $memory_8, $memory_1, $memory_6, $memory_4, $memory_5, $memory_2, $memory_3);
#line 373
undef($memory_9);
#line 374
$memory_0 = $memory_8;
#line 374
undef($memory_5);
#line 374
undef($memory_6);
#line 374
undef($memory_7);
#line 374
undef($memory_8);
#line 374
undef($memory_1);
#line 374
undef($memory_2);
#line 374
undef($memory_3);
#line 374
undef($memory_4);
#line 374
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::check_sub($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 378
$memory_3 = c_rt_lib::ov_is($memory_1, 'no');
#line 378
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 380
$memory_3 = c_rt_lib::ov_is($memory_1, 'yes');
#line 380
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 380
$memory_3 = "NOMATCHALERT";
#line 380
$memory_3 = [$memory_3,$memory_1];
#line 380
die(dfile::ssave($memory_3));
#line 378
label_2:
#line 379
$memory_4 = c_rt_lib::ov_mk_none('no');
#line 379
$memory_0 = $memory_4;
#line 379
undef($memory_4);
#line 380
goto label_1;
#line 380
label_3:
#line 380
$memory_4 = c_rt_lib::ov_as($memory_1, 'yes');
#line 381
array::push($memory_2, $memory_4);
#line 381
undef($memory_4);
#line 382
goto label_1;
#line 382
label_1:
#line 382
undef($memory_3);
#line 382
undef($memory_1);
#line 382
$_[0] = $memory_0;$_[2] = $memory_2;return;
$_[0] = $memory_0;$_[2] = $memory_2;}

sub post_processing_priv::check_sub_val($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 386
$memory_2 = $memory_1;
#line 386
$memory_2 = c_rt_lib::ov_is($memory_2, 'no');
#line 386
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 386
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 387
$memory_3 = c_rt_lib::ov_mk_none('no');
#line 387
$memory_0 = $memory_3;
#line 387
undef($memory_3);
#line 388
goto label_2;
#line 388
label_2:
#line 388
undef($memory_2);
#line 388
undef($memory_1);
#line 388
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::set_const_block($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;my $memory_27;my $memory_28;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];$memory_5 = $_[5];
#line 393
$memory_6 = $memory_1->[$memory_0];
#line 394
$memory_7 = $memory_3->[$memory_0];
#line 394
$memory_7 = $memory_7->{'was'};
#line 394
$memory_8 = 0;
#line 394
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 394
undef($memory_8);
#line 394
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 394
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 395
$memory_8 = c_rt_lib::to_nl(0);
#line 396
$memory_9 = $memory_3->[$memory_0];
#line 396
$memory_9 = $memory_9->{'regs'};
#line 397
$memory_10 = array::len($memory_5);
#line 397
$memory_11 = 0;
#line 397
$memory_12 = 1;
#line 397
label_5:
#line 397
$memory_13 = c_rt_lib::to_nl($memory_11 >= $memory_10);
#line 397
if (c_rt_lib::check_true($memory_13)) {goto label_3;}
#line 398
$memory_14 = $memory_9->[$memory_11];
#line 398
$memory_14 = c_rt_lib::ov_is($memory_14, 'no');
#line 398
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 398
if (c_rt_lib::check_true($memory_14)) {goto label_7;}
#line 399
$memory_15 = c_rt_lib::ov_mk_none('no');
#line 399
$memory_16 = $memory_15;
#line 399
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_11] = $memory_16;
#line 399
undef($memory_15);
#line 399
undef($memory_16);
#line 400
undef($memory_14);
#line 400
goto label_4;
#line 401
goto label_6;
#line 401
label_7:
#line 402
$memory_15 = $memory_5->[$memory_11];
#line 402
$memory_15 = c_rt_lib::ov_is($memory_15, 'yes');
#line 402
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 402
if (c_rt_lib::check_true($memory_15)) {goto label_9;}
#line 403
$memory_16 = $memory_5->[$memory_11];
#line 403
$memory_16 = c_rt_lib::ov_as($memory_16, 'yes');
#line 404
$memory_17 = $memory_9->[$memory_11];
#line 404
$memory_17 = c_rt_lib::ov_as($memory_17, 'yes');
#line 405
$memory_18 = c_rt_lib::to_nl($memory_16 == $memory_17);
#line 405
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 405
if (c_rt_lib::check_true($memory_18)) {goto label_11;}
#line 405
undef($memory_14);
#line 405
undef($memory_15);
#line 405
undef($memory_16);
#line 405
undef($memory_17);
#line 405
undef($memory_18);
#line 405
goto label_4;
#line 405
goto label_11;
#line 405
label_11:
#line 405
undef($memory_18);
#line 405
undef($memory_16);
#line 405
undef($memory_17);
#line 406
goto label_9;
#line 406
label_9:
#line 406
undef($memory_15);
#line 407
$memory_15 = c_rt_lib::ov_mk_none('no');
#line 407
$memory_16 = $memory_15;
#line 407
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_11] = $memory_16;
#line 407
undef($memory_15);
#line 407
undef($memory_16);
#line 408
$memory_15 = c_rt_lib::to_nl(1);
#line 408
$memory_8 = $memory_15;
#line 408
undef($memory_15);
#line 409
goto label_6;
#line 409
label_6:
#line 409
undef($memory_14);
#line 409
label_4:
#line 410
$memory_11 = $memory_11 + $memory_12;
#line 410
goto label_5;
#line 410
label_3:
#line 410
undef($memory_10);
#line 410
undef($memory_11);
#line 410
undef($memory_12);
#line 410
undef($memory_13);
#line 411
$memory_10 = $memory_8;
#line 411
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 411
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 411
if (c_rt_lib::check_true($memory_10)) {goto label_13;}
#line 411
undef($memory_0);
#line 411
undef($memory_2);
#line 411
undef($memory_4);
#line 411
undef($memory_5);
#line 411
undef($memory_6);
#line 411
undef($memory_7);
#line 411
undef($memory_8);
#line 411
undef($memory_9);
#line 411
undef($memory_10);
#line 411
$_[1] = $memory_1;$_[3] = $memory_3;return;
#line 411
goto label_13;
#line 411
label_13:
#line 411
undef($memory_10);
#line 412
$memory_10 = c_rt_lib::get_ref_arr($memory_3, $memory_0);
#line 412
$memory_11 = $memory_5;
#line 412
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'regs'} = $memory_11;
#line 412
c_rt_lib::set_ref_arr($memory_3, $memory_0, $memory_10);
#line 412
undef($memory_10);
#line 412
undef($memory_11);
#line 412
undef($memory_8);
#line 412
undef($memory_9);
#line 413
goto label_1;
#line 413
label_2:
#line 414
$memory_8 = c_rt_lib::get_ref_arr($memory_3, $memory_0);
#line 414
$memory_9 = $memory_5;
#line 414
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'regs'} = $memory_9;
#line 414
c_rt_lib::set_ref_arr($memory_3, $memory_0, $memory_8);
#line 414
undef($memory_8);
#line 414
undef($memory_9);
#line 415
goto label_1;
#line 415
label_1:
#line 415
undef($memory_7);
#line 416
$memory_7 = c_rt_lib::get_ref_arr($memory_3, $memory_0);
#line 416
$memory_8 = "was";
#line 416
$memory_8 = c_rt_lib::get_ref_hash($memory_7, $memory_8);
#line 416
$memory_9 = 1;
#line 416
$memory_8 = $memory_8 + $memory_9;
#line 416
$memory_10 = "was";
#line 416
c_rt_lib::set_ref_hash($memory_7, $memory_10, $memory_8);
#line 416
c_rt_lib::set_ref_arr($memory_3, $memory_0, $memory_7);
#line 416
undef($memory_10);
#line 416
undef($memory_7);
#line 416
undef($memory_8);
#line 416
undef($memory_9);
#line 417
$memory_7 = $memory_6->{'cmds'};
#line 418
$memory_8 = array::len($memory_7);
#line 418
$memory_9 = 0;
#line 418
$memory_10 = 1;
#line 418
label_16:
#line 418
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 418
if (c_rt_lib::check_true($memory_11)) {goto label_14;}
#line 419
$memory_12 = [];
#line 420
$memory_13 = [];
#line 421
$memory_14 = $memory_6->{'from'};
#line 421
$memory_14 = $memory_9 + $memory_14;
#line 421
$memory_14 = c_rt_lib::ov_mk_arg('yes', $memory_14);
#line 422
$memory_15 = $memory_7->[$memory_9];
#line 422
$memory_15 = $memory_15->{'cmd'};
#line 422
$memory_16 = c_rt_lib::ov_is($memory_15, 'arr_decl');
#line 422
if (c_rt_lib::check_true($memory_16)) {goto label_18;}
#line 428
$memory_16 = c_rt_lib::ov_is($memory_15, 'hash_decl');
#line 428
if (c_rt_lib::check_true($memory_16)) {goto label_19;}
#line 434
$memory_16 = c_rt_lib::ov_is($memory_15, 'call');
#line 434
if (c_rt_lib::check_true($memory_16)) {goto label_20;}
#line 459
$memory_16 = c_rt_lib::ov_is($memory_15, 'una_op');
#line 459
if (c_rt_lib::check_true($memory_16)) {goto label_21;}
#line 463
$memory_16 = c_rt_lib::ov_is($memory_15, 'bin_op');
#line 463
if (c_rt_lib::check_true($memory_16)) {goto label_22;}
#line 468
$memory_16 = c_rt_lib::ov_is($memory_15, 'ov_is');
#line 468
if (c_rt_lib::check_true($memory_16)) {goto label_23;}
#line 472
$memory_16 = c_rt_lib::ov_is($memory_15, 'ov_as');
#line 472
if (c_rt_lib::check_true($memory_16)) {goto label_24;}
#line 476
$memory_16 = c_rt_lib::ov_is($memory_15, 'func');
#line 476
if (c_rt_lib::check_true($memory_16)) {goto label_25;}
#line 479
$memory_16 = c_rt_lib::ov_is($memory_15, 'move');
#line 479
if (c_rt_lib::check_true($memory_16)) {goto label_26;}
#line 483
$memory_16 = c_rt_lib::ov_is($memory_15, 'load_const');
#line 483
if (c_rt_lib::check_true($memory_16)) {goto label_27;}
#line 486
$memory_16 = c_rt_lib::ov_is($memory_15, 'get_frm_idx');
#line 486
if (c_rt_lib::check_true($memory_16)) {goto label_28;}
#line 491
$memory_16 = c_rt_lib::ov_is($memory_15, 'set_at_idx');
#line 491
if (c_rt_lib::check_true($memory_16)) {goto label_29;}
#line 497
$memory_16 = c_rt_lib::ov_is($memory_15, 'get_val');
#line 497
if (c_rt_lib::check_true($memory_16)) {goto label_30;}
#line 501
$memory_16 = c_rt_lib::ov_is($memory_15, 'set_val');
#line 501
if (c_rt_lib::check_true($memory_16)) {goto label_31;}
#line 506
$memory_16 = c_rt_lib::ov_is($memory_15, 'ov_mk');
#line 506
if (c_rt_lib::check_true($memory_16)) {goto label_32;}
#line 512
$memory_16 = c_rt_lib::ov_is($memory_15, 'return');
#line 512
if (c_rt_lib::check_true($memory_16)) {goto label_33;}
#line 516
$memory_16 = c_rt_lib::ov_is($memory_15, 'die');
#line 516
if (c_rt_lib::check_true($memory_16)) {goto label_34;}
#line 518
$memory_16 = c_rt_lib::ov_is($memory_15, 'prt_lbl');
#line 518
if (c_rt_lib::check_true($memory_16)) {goto label_35;}
#line 520
$memory_16 = c_rt_lib::ov_is($memory_15, 'if_goto');
#line 520
if (c_rt_lib::check_true($memory_16)) {goto label_36;}
#line 522
$memory_16 = c_rt_lib::ov_is($memory_15, 'goto');
#line 522
if (c_rt_lib::check_true($memory_16)) {goto label_37;}
#line 524
$memory_16 = c_rt_lib::ov_is($memory_15, 'clear');
#line 524
if (c_rt_lib::check_true($memory_16)) {goto label_38;}
#line 524
$memory_16 = "NOMATCHALERT";
#line 524
$memory_16 = [$memory_16,$memory_15];
#line 524
die(dfile::ssave($memory_16));
#line 422
label_18:
#line 422
$memory_17 = c_rt_lib::ov_as($memory_15, 'arr_decl');
#line 423
$memory_18 = $memory_17->{'src'};
#line 423
$memory_20 = 0;
#line 423
$memory_21 = 1;
#line 423
$memory_22 = c_rt_lib::array_len($memory_18);
#line 423
label_41:
#line 423
$memory_23 = c_rt_lib::to_nl($memory_20 >= $memory_22);
#line 423
if (c_rt_lib::check_true($memory_23)) {goto label_39;}
#line 423
$memory_19 = $memory_18->[$memory_20];
#line 424
$memory_24 = $memory_5->[$memory_19];
#line 424
post_processing_priv::check_sub($memory_14, $memory_24, $memory_12);
#line 424
undef($memory_24);
#line 425
$memory_20 = $memory_20 + $memory_21;
#line 425
goto label_41;
#line 425
label_39:
#line 425
undef($memory_18);
#line 425
undef($memory_19);
#line 425
undef($memory_20);
#line 425
undef($memory_21);
#line 425
undef($memory_22);
#line 425
undef($memory_23);
#line 426
$memory_18 = $memory_17->{'dest'};
#line 426
$memory_19 = "";
#line 426
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 426
undef($memory_19);
#line 426
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 426
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 426
if (c_rt_lib::check_true($memory_18)) {goto label_43;}
#line 426
$memory_20 = $memory_17->{'dest'};
#line 426
$memory_19 = $memory_14;
#line 426
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 426
undef($memory_19);
#line 426
undef($memory_20);
#line 426
goto label_43;
#line 426
label_43:
#line 426
undef($memory_18);
#line 427
$memory_18 = $memory_17->{'dest'};
#line 427
array::push($memory_13, $memory_18);
#line 427
undef($memory_18);
#line 427
undef($memory_17);
#line 428
goto label_17;
#line 428
label_19:
#line 428
$memory_17 = c_rt_lib::ov_as($memory_15, 'hash_decl');
#line 429
$memory_18 = $memory_17->{'src'};
#line 429
$memory_20 = 0;
#line 429
$memory_21 = 1;
#line 429
$memory_22 = c_rt_lib::array_len($memory_18);
#line 429
label_46:
#line 429
$memory_23 = c_rt_lib::to_nl($memory_20 >= $memory_22);
#line 429
if (c_rt_lib::check_true($memory_23)) {goto label_44;}
#line 429
$memory_19 = $memory_18->[$memory_20];
#line 430
$memory_25 = $memory_19->{'val'};
#line 430
$memory_24 = $memory_5->[$memory_25];
#line 430
undef($memory_25);
#line 430
post_processing_priv::check_sub($memory_14, $memory_24, $memory_12);
#line 430
undef($memory_24);
#line 431
$memory_20 = $memory_20 + $memory_21;
#line 431
goto label_46;
#line 431
label_44:
#line 431
undef($memory_18);
#line 431
undef($memory_19);
#line 431
undef($memory_20);
#line 431
undef($memory_21);
#line 431
undef($memory_22);
#line 431
undef($memory_23);
#line 432
$memory_18 = $memory_17->{'dest'};
#line 432
$memory_19 = "";
#line 432
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 432
undef($memory_19);
#line 432
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 432
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 432
if (c_rt_lib::check_true($memory_18)) {goto label_48;}
#line 432
$memory_20 = $memory_17->{'dest'};
#line 432
$memory_19 = $memory_14;
#line 432
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 432
undef($memory_19);
#line 432
undef($memory_20);
#line 432
goto label_48;
#line 432
label_48:
#line 432
undef($memory_18);
#line 433
$memory_18 = $memory_17->{'dest'};
#line 433
array::push($memory_13, $memory_18);
#line 433
undef($memory_18);
#line 433
undef($memory_17);
#line 434
goto label_17;
#line 434
label_20:
#line 434
$memory_17 = c_rt_lib::ov_as($memory_15, 'call');
#line 435
$memory_18 = $memory_17->{'mod'};
#line 435
$memory_19 = "";
#line 435
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 435
undef($memory_19);
#line 435
if (c_rt_lib::check_true($memory_18)) {goto label_50;}
#line 435
$memory_18 = $memory_17->{'mod'};
#line 435
goto label_49;
#line 435
label_50:
#line 435
$memory_18 = "_priv";
#line 435
$memory_18 = $memory_4 . $memory_18;
#line 435
label_49:
#line 435
$memory_19 = "::";
#line 435
$memory_18 = $memory_18 . $memory_19;
#line 435
undef($memory_19);
#line 435
$memory_19 = $memory_17->{'fun_name'};
#line 435
$memory_18 = $memory_18 . $memory_19;
#line 435
undef($memory_19);
#line 436
$memory_19 = hash::has_key($memory_2, $memory_18);
#line 436
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 436
if (c_rt_lib::check_true($memory_19)) {goto label_52;}
#line 437
$memory_20 = hash::get_value($memory_2, $memory_18);
#line 437
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 437
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 437
if (c_rt_lib::check_true($memory_20)) {goto label_54;}
#line 437
$memory_21 = c_rt_lib::ov_mk_none('no');
#line 437
$memory_14 = $memory_21;
#line 437
undef($memory_21);
#line 437
goto label_54;
#line 437
label_54:
#line 437
undef($memory_20);
#line 438
goto label_51;
#line 438
label_52:
#line 439
$memory_20 = c_rt_lib::ov_mk_none('no');
#line 439
$memory_14 = $memory_20;
#line 439
undef($memory_20);
#line 440
goto label_51;
#line 440
label_51:
#line 440
undef($memory_19);
#line 441
$memory_19 = $memory_14;
#line 441
$memory_19 = c_rt_lib::ov_is($memory_19, 'yes');
#line 441
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 441
if (c_rt_lib::check_true($memory_19)) {goto label_56;}
#line 442
$memory_20 = $memory_17->{'args'};
#line 442
$memory_22 = 0;
#line 442
$memory_23 = 1;
#line 442
$memory_24 = c_rt_lib::array_len($memory_20);
#line 442
label_59:
#line 442
$memory_25 = c_rt_lib::to_nl($memory_22 >= $memory_24);
#line 442
if (c_rt_lib::check_true($memory_25)) {goto label_57;}
#line 442
$memory_21 = $memory_20->[$memory_22];
#line 443
$memory_26 = c_rt_lib::ov_is($memory_21, 'val');
#line 443
if (c_rt_lib::check_true($memory_26)) {goto label_61;}
#line 445
$memory_26 = c_rt_lib::ov_is($memory_21, 'ref');
#line 445
if (c_rt_lib::check_true($memory_26)) {goto label_62;}
#line 445
$memory_26 = "NOMATCHALERT";
#line 445
$memory_26 = [$memory_26,$memory_21];
#line 445
die(dfile::ssave($memory_26));
#line 443
label_61:
#line 443
$memory_27 = c_rt_lib::ov_as($memory_21, 'val');
#line 444
$memory_28 = $memory_5->[$memory_27];
#line 444
post_processing_priv::check_sub($memory_14, $memory_28, $memory_12);
#line 444
undef($memory_28);
#line 444
undef($memory_27);
#line 445
goto label_60;
#line 445
label_62:
#line 445
$memory_27 = c_rt_lib::ov_as($memory_21, 'ref');
#line 446
$memory_28 = $memory_5->[$memory_27];
#line 446
post_processing_priv::check_sub($memory_14, $memory_28, $memory_12);
#line 446
undef($memory_28);
#line 446
undef($memory_27);
#line 447
goto label_60;
#line 447
label_60:
#line 447
undef($memory_26);
#line 448
$memory_22 = $memory_22 + $memory_23;
#line 448
goto label_59;
#line 448
label_57:
#line 448
undef($memory_20);
#line 448
undef($memory_21);
#line 448
undef($memory_22);
#line 448
undef($memory_23);
#line 448
undef($memory_24);
#line 448
undef($memory_25);
#line 449
goto label_56;
#line 449
label_56:
#line 449
undef($memory_19);
#line 450
$memory_19 = $memory_17->{'args'};
#line 450
$memory_21 = 0;
#line 450
$memory_22 = 1;
#line 450
$memory_23 = c_rt_lib::array_len($memory_19);
#line 450
label_65:
#line 450
$memory_24 = c_rt_lib::to_nl($memory_21 >= $memory_23);
#line 450
if (c_rt_lib::check_true($memory_24)) {goto label_63;}
#line 450
$memory_20 = $memory_19->[$memory_21];
#line 451
$memory_25 = c_rt_lib::ov_is($memory_20, 'val');
#line 451
if (c_rt_lib::check_true($memory_25)) {goto label_67;}
#line 452
$memory_25 = c_rt_lib::ov_is($memory_20, 'ref');
#line 452
if (c_rt_lib::check_true($memory_25)) {goto label_68;}
#line 452
$memory_25 = "NOMATCHALERT";
#line 452
$memory_25 = [$memory_25,$memory_20];
#line 452
die(dfile::ssave($memory_25));
#line 451
label_67:
#line 451
$memory_26 = c_rt_lib::ov_as($memory_20, 'val');
#line 451
undef($memory_26);
#line 452
goto label_66;
#line 452
label_68:
#line 452
$memory_26 = c_rt_lib::ov_as($memory_20, 'ref');
#line 453
$memory_27 = $memory_14;
#line 453
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_26] = $memory_27;
#line 453
undef($memory_27);
#line 454
array::push($memory_13, $memory_26);
#line 454
undef($memory_26);
#line 455
goto label_66;
#line 455
label_66:
#line 455
undef($memory_25);
#line 456
$memory_21 = $memory_21 + $memory_22;
#line 456
goto label_65;
#line 456
label_63:
#line 456
undef($memory_19);
#line 456
undef($memory_20);
#line 456
undef($memory_21);
#line 456
undef($memory_22);
#line 456
undef($memory_23);
#line 456
undef($memory_24);
#line 457
$memory_19 = $memory_17->{'dest'};
#line 457
$memory_20 = "";
#line 457
$memory_19 = c_rt_lib::to_nl($memory_19 eq $memory_20);
#line 457
undef($memory_20);
#line 457
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 457
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 457
if (c_rt_lib::check_true($memory_19)) {goto label_70;}
#line 457
$memory_21 = $memory_17->{'dest'};
#line 457
$memory_20 = $memory_14;
#line 457
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_21] = $memory_20;
#line 457
undef($memory_20);
#line 457
undef($memory_21);
#line 457
goto label_70;
#line 457
label_70:
#line 457
undef($memory_19);
#line 458
$memory_19 = $memory_17->{'dest'};
#line 458
array::push($memory_13, $memory_19);
#line 458
undef($memory_19);
#line 458
undef($memory_18);
#line 458
undef($memory_17);
#line 459
goto label_17;
#line 459
label_21:
#line 459
$memory_17 = c_rt_lib::ov_as($memory_15, 'una_op');
#line 460
$memory_19 = $memory_17->{'src'};
#line 460
$memory_18 = $memory_5->[$memory_19];
#line 460
undef($memory_19);
#line 460
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 460
undef($memory_18);
#line 461
$memory_18 = $memory_17->{'dest'};
#line 461
$memory_19 = "";
#line 461
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 461
undef($memory_19);
#line 461
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 461
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 461
if (c_rt_lib::check_true($memory_18)) {goto label_72;}
#line 461
$memory_20 = $memory_17->{'dest'};
#line 461
$memory_19 = $memory_14;
#line 461
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 461
undef($memory_19);
#line 461
undef($memory_20);
#line 461
goto label_72;
#line 461
label_72:
#line 461
undef($memory_18);
#line 462
$memory_18 = $memory_17->{'dest'};
#line 462
array::push($memory_13, $memory_18);
#line 462
undef($memory_18);
#line 462
undef($memory_17);
#line 463
goto label_17;
#line 463
label_22:
#line 463
$memory_17 = c_rt_lib::ov_as($memory_15, 'bin_op');
#line 464
$memory_19 = $memory_17->{'left'};
#line 464
$memory_18 = $memory_5->[$memory_19];
#line 464
undef($memory_19);
#line 464
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 464
undef($memory_18);
#line 465
$memory_19 = $memory_17->{'right'};
#line 465
$memory_18 = $memory_5->[$memory_19];
#line 465
undef($memory_19);
#line 465
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 465
undef($memory_18);
#line 466
$memory_18 = $memory_17->{'dest'};
#line 466
$memory_19 = "";
#line 466
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 466
undef($memory_19);
#line 466
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 466
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 466
if (c_rt_lib::check_true($memory_18)) {goto label_74;}
#line 466
$memory_20 = $memory_17->{'dest'};
#line 466
$memory_19 = $memory_14;
#line 466
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 466
undef($memory_19);
#line 466
undef($memory_20);
#line 466
goto label_74;
#line 466
label_74:
#line 466
undef($memory_18);
#line 467
$memory_18 = $memory_17->{'dest'};
#line 467
array::push($memory_13, $memory_18);
#line 467
undef($memory_18);
#line 467
undef($memory_17);
#line 468
goto label_17;
#line 468
label_23:
#line 468
$memory_17 = c_rt_lib::ov_as($memory_15, 'ov_is');
#line 469
$memory_19 = $memory_17->{'src'};
#line 469
$memory_18 = $memory_5->[$memory_19];
#line 469
undef($memory_19);
#line 469
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 469
undef($memory_18);
#line 470
$memory_18 = $memory_17->{'dest'};
#line 470
$memory_19 = "";
#line 470
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 470
undef($memory_19);
#line 470
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 470
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 470
if (c_rt_lib::check_true($memory_18)) {goto label_76;}
#line 470
$memory_20 = $memory_17->{'dest'};
#line 470
$memory_19 = $memory_14;
#line 470
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 470
undef($memory_19);
#line 470
undef($memory_20);
#line 470
goto label_76;
#line 470
label_76:
#line 470
undef($memory_18);
#line 471
$memory_18 = $memory_17->{'dest'};
#line 471
array::push($memory_13, $memory_18);
#line 471
undef($memory_18);
#line 471
undef($memory_17);
#line 472
goto label_17;
#line 472
label_24:
#line 472
$memory_17 = c_rt_lib::ov_as($memory_15, 'ov_as');
#line 473
$memory_19 = $memory_17->{'src'};
#line 473
$memory_18 = $memory_5->[$memory_19];
#line 473
undef($memory_19);
#line 473
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 473
undef($memory_18);
#line 474
$memory_18 = $memory_17->{'dest'};
#line 474
$memory_19 = "";
#line 474
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 474
undef($memory_19);
#line 474
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 474
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 474
if (c_rt_lib::check_true($memory_18)) {goto label_78;}
#line 474
$memory_20 = $memory_17->{'dest'};
#line 474
$memory_19 = $memory_14;
#line 474
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 474
undef($memory_19);
#line 474
undef($memory_20);
#line 474
goto label_78;
#line 474
label_78:
#line 474
undef($memory_18);
#line 475
$memory_18 = $memory_17->{'dest'};
#line 475
array::push($memory_13, $memory_18);
#line 475
undef($memory_18);
#line 475
undef($memory_17);
#line 476
goto label_17;
#line 476
label_25:
#line 476
$memory_17 = c_rt_lib::ov_as($memory_15, 'func');
#line 477
$memory_18 = $memory_17->{'dest'};
#line 477
$memory_19 = "";
#line 477
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 477
undef($memory_19);
#line 477
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 477
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 477
if (c_rt_lib::check_true($memory_18)) {goto label_80;}
#line 477
$memory_20 = $memory_17->{'dest'};
#line 477
$memory_19 = $memory_14;
#line 477
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 477
undef($memory_19);
#line 477
undef($memory_20);
#line 477
goto label_80;
#line 477
label_80:
#line 477
undef($memory_18);
#line 478
$memory_18 = $memory_17->{'dest'};
#line 478
array::push($memory_13, $memory_18);
#line 478
undef($memory_18);
#line 478
undef($memory_17);
#line 479
goto label_17;
#line 479
label_26:
#line 479
$memory_17 = c_rt_lib::ov_as($memory_15, 'move');
#line 480
$memory_19 = $memory_17->{'src'};
#line 480
$memory_18 = $memory_5->[$memory_19];
#line 480
undef($memory_19);
#line 480
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 480
undef($memory_18);
#line 481
$memory_18 = $memory_17->{'dest'};
#line 481
$memory_19 = "";
#line 481
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 481
undef($memory_19);
#line 481
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 481
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 481
if (c_rt_lib::check_true($memory_18)) {goto label_82;}
#line 481
$memory_20 = $memory_17->{'dest'};
#line 481
$memory_19 = $memory_14;
#line 481
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 481
undef($memory_19);
#line 481
undef($memory_20);
#line 481
goto label_82;
#line 481
label_82:
#line 481
undef($memory_18);
#line 482
$memory_18 = $memory_17->{'dest'};
#line 482
array::push($memory_13, $memory_18);
#line 482
undef($memory_18);
#line 482
undef($memory_17);
#line 483
goto label_17;
#line 483
label_27:
#line 483
$memory_17 = c_rt_lib::ov_as($memory_15, 'load_const');
#line 484
$memory_18 = $memory_17->{'dest'};
#line 484
$memory_19 = "";
#line 484
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 484
undef($memory_19);
#line 484
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 484
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 484
if (c_rt_lib::check_true($memory_18)) {goto label_84;}
#line 484
$memory_20 = $memory_17->{'dest'};
#line 484
$memory_19 = $memory_14;
#line 484
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 484
undef($memory_19);
#line 484
undef($memory_20);
#line 484
goto label_84;
#line 484
label_84:
#line 484
undef($memory_18);
#line 485
$memory_18 = $memory_17->{'dest'};
#line 485
array::push($memory_13, $memory_18);
#line 485
undef($memory_18);
#line 485
undef($memory_17);
#line 486
goto label_17;
#line 486
label_28:
#line 486
$memory_17 = c_rt_lib::ov_as($memory_15, 'get_frm_idx');
#line 487
$memory_19 = $memory_17->{'src'};
#line 487
$memory_18 = $memory_5->[$memory_19];
#line 487
undef($memory_19);
#line 487
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 487
undef($memory_18);
#line 488
$memory_19 = $memory_17->{'idx'};
#line 488
$memory_18 = $memory_5->[$memory_19];
#line 488
undef($memory_19);
#line 488
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 488
undef($memory_18);
#line 489
$memory_18 = $memory_17->{'dest'};
#line 489
$memory_19 = "";
#line 489
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 489
undef($memory_19);
#line 489
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 489
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 489
if (c_rt_lib::check_true($memory_18)) {goto label_86;}
#line 489
$memory_20 = $memory_17->{'dest'};
#line 489
$memory_19 = $memory_14;
#line 489
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 489
undef($memory_19);
#line 489
undef($memory_20);
#line 489
goto label_86;
#line 489
label_86:
#line 489
undef($memory_18);
#line 490
$memory_18 = $memory_17->{'dest'};
#line 490
array::push($memory_13, $memory_18);
#line 490
undef($memory_18);
#line 490
undef($memory_17);
#line 491
goto label_17;
#line 491
label_29:
#line 491
$memory_17 = c_rt_lib::ov_as($memory_15, 'set_at_idx');
#line 492
$memory_19 = $memory_17->{'src'};
#line 492
$memory_18 = $memory_5->[$memory_19];
#line 492
undef($memory_19);
#line 492
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 492
undef($memory_18);
#line 493
$memory_19 = $memory_17->{'idx'};
#line 493
$memory_18 = $memory_5->[$memory_19];
#line 493
undef($memory_19);
#line 493
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 493
undef($memory_18);
#line 494
$memory_19 = $memory_17->{'val'};
#line 494
$memory_18 = $memory_5->[$memory_19];
#line 494
undef($memory_19);
#line 494
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 494
undef($memory_18);
#line 495
$memory_19 = $memory_17->{'src'};
#line 495
$memory_18 = $memory_14;
#line 495
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_19] = $memory_18;
#line 495
undef($memory_18);
#line 495
undef($memory_19);
#line 496
$memory_18 = $memory_17->{'src'};
#line 496
array::push($memory_13, $memory_18);
#line 496
undef($memory_18);
#line 496
undef($memory_17);
#line 497
goto label_17;
#line 497
label_30:
#line 497
$memory_17 = c_rt_lib::ov_as($memory_15, 'get_val');
#line 498
$memory_19 = $memory_17->{'src'};
#line 498
$memory_18 = $memory_5->[$memory_19];
#line 498
undef($memory_19);
#line 498
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 498
undef($memory_18);
#line 499
$memory_18 = $memory_17->{'dest'};
#line 499
$memory_19 = "";
#line 499
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 499
undef($memory_19);
#line 499
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 499
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 499
if (c_rt_lib::check_true($memory_18)) {goto label_88;}
#line 499
$memory_20 = $memory_17->{'dest'};
#line 499
$memory_19 = $memory_14;
#line 499
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 499
undef($memory_19);
#line 499
undef($memory_20);
#line 499
goto label_88;
#line 499
label_88:
#line 499
undef($memory_18);
#line 500
$memory_18 = $memory_17->{'dest'};
#line 500
array::push($memory_13, $memory_18);
#line 500
undef($memory_18);
#line 500
undef($memory_17);
#line 501
goto label_17;
#line 501
label_31:
#line 501
$memory_17 = c_rt_lib::ov_as($memory_15, 'set_val');
#line 502
$memory_19 = $memory_17->{'src'};
#line 502
$memory_18 = $memory_5->[$memory_19];
#line 502
undef($memory_19);
#line 502
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 502
undef($memory_18);
#line 503
$memory_19 = $memory_17->{'val'};
#line 503
$memory_18 = $memory_5->[$memory_19];
#line 503
undef($memory_19);
#line 503
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 503
undef($memory_18);
#line 504
$memory_19 = $memory_17->{'src'};
#line 504
$memory_18 = $memory_14;
#line 504
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_19] = $memory_18;
#line 504
undef($memory_18);
#line 504
undef($memory_19);
#line 505
$memory_18 = $memory_17->{'src'};
#line 505
array::push($memory_13, $memory_18);
#line 505
undef($memory_18);
#line 505
undef($memory_17);
#line 506
goto label_17;
#line 506
label_32:
#line 506
$memory_17 = c_rt_lib::ov_as($memory_15, 'ov_mk');
#line 507
$memory_18 = $memory_17->{'src'};
#line 507
$memory_18 = c_rt_lib::ov_is($memory_18, 'arg');
#line 507
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 507
if (c_rt_lib::check_true($memory_18)) {goto label_90;}
#line 508
$memory_20 = $memory_17->{'src'};
#line 508
$memory_20 = c_rt_lib::ov_as($memory_20, 'arg');
#line 508
$memory_19 = $memory_5->[$memory_20];
#line 508
undef($memory_20);
#line 508
post_processing_priv::check_sub($memory_14, $memory_19, $memory_12);
#line 508
undef($memory_19);
#line 509
goto label_90;
#line 509
label_90:
#line 509
undef($memory_18);
#line 510
$memory_18 = $memory_17->{'dest'};
#line 510
$memory_19 = "";
#line 510
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 510
undef($memory_19);
#line 510
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 510
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 510
if (c_rt_lib::check_true($memory_18)) {goto label_92;}
#line 510
$memory_20 = $memory_17->{'dest'};
#line 510
$memory_19 = $memory_14;
#line 510
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_20] = $memory_19;
#line 510
undef($memory_19);
#line 510
undef($memory_20);
#line 510
goto label_92;
#line 510
label_92:
#line 510
undef($memory_18);
#line 511
$memory_18 = $memory_17->{'dest'};
#line 511
array::push($memory_13, $memory_18);
#line 511
undef($memory_18);
#line 511
undef($memory_17);
#line 512
goto label_17;
#line 512
label_33:
#line 512
$memory_17 = c_rt_lib::ov_as($memory_15, 'return');
#line 513
$memory_18 = $memory_17;
#line 513
$memory_18 = c_rt_lib::ov_is($memory_18, 'val');
#line 513
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 513
if (c_rt_lib::check_true($memory_18)) {goto label_94;}
#line 514
$memory_20 = $memory_17;
#line 514
$memory_20 = c_rt_lib::ov_as($memory_20, 'val');
#line 514
$memory_19 = $memory_5->[$memory_20];
#line 514
undef($memory_20);
#line 514
post_processing_priv::check_sub($memory_14, $memory_19, $memory_12);
#line 514
undef($memory_19);
#line 515
goto label_94;
#line 515
label_94:
#line 515
undef($memory_18);
#line 515
undef($memory_17);
#line 516
goto label_17;
#line 516
label_34:
#line 516
$memory_17 = c_rt_lib::ov_as($memory_15, 'die');
#line 517
$memory_18 = $memory_5->[$memory_17];
#line 517
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 517
undef($memory_18);
#line 517
undef($memory_17);
#line 518
goto label_17;
#line 518
label_35:
#line 518
$memory_17 = c_rt_lib::ov_as($memory_15, 'prt_lbl');
#line 519
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 519
$memory_14 = $memory_18;
#line 519
undef($memory_18);
#line 519
undef($memory_17);
#line 520
goto label_17;
#line 520
label_36:
#line 520
$memory_17 = c_rt_lib::ov_as($memory_15, 'if_goto');
#line 521
$memory_19 = $memory_17->{'src'};
#line 521
$memory_18 = $memory_5->[$memory_19];
#line 521
undef($memory_19);
#line 521
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 521
undef($memory_18);
#line 521
undef($memory_17);
#line 522
goto label_17;
#line 522
label_37:
#line 522
$memory_17 = c_rt_lib::ov_as($memory_15, 'goto');
#line 523
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 523
$memory_14 = $memory_18;
#line 523
undef($memory_18);
#line 523
undef($memory_17);
#line 524
goto label_17;
#line 524
label_38:
#line 524
$memory_17 = c_rt_lib::ov_as($memory_15, 'clear');
#line 525
$memory_18 = $memory_5->[$memory_17];
#line 525
post_processing_priv::check_sub($memory_14, $memory_18, $memory_12);
#line 525
undef($memory_18);
#line 526
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 526
$memory_19 = $memory_18;
#line 526
 if (c_rt_lib::get_arrcount($memory_5) > 1) {$memory_5 = [@{$memory_5}];}$memory_5->[$memory_17] = $memory_19;
#line 526
undef($memory_18);
#line 526
undef($memory_19);
#line 526
undef($memory_17);
#line 527
goto label_17;
#line 527
label_17:
#line 527
undef($memory_15);
#line 527
undef($memory_16);
#line 528
$memory_15 = array::len($memory_13);
#line 529
$memory_16 = 0;
#line 529
$memory_16 = c_rt_lib::to_nl($memory_15 > $memory_16);
#line 529
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 529
if (c_rt_lib::check_true($memory_17)) {goto label_97;}
#line 529
$memory_18 = 1;
#line 529
$memory_18 = $memory_15 - $memory_18;
#line 529
$memory_16 = $memory_13->[$memory_18];
#line 529
undef($memory_18);
#line 529
$memory_18 = "";
#line 529
$memory_16 = c_rt_lib::to_nl($memory_16 eq $memory_18);
#line 529
undef($memory_18);
#line 529
label_97:
#line 529
undef($memory_17);
#line 529
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 529
if (c_rt_lib::check_true($memory_16)) {goto label_96;}
#line 530
array::pop($memory_13);
#line 531
goto label_96;
#line 531
label_96:
#line 531
undef($memory_16);
#line 532
$memory_16 = $memory_14;
#line 532
$memory_16 = c_rt_lib::ov_is($memory_16, 'yes');
#line 532
if (c_rt_lib::check_true($memory_16)) {goto label_99;}
#line 532
$memory_16 = c_rt_lib::ov_mk_none('none');
#line 532
goto label_98;
#line 532
label_99:
#line 532
$memory_16 = c_rt_lib::ov_mk_arg('const', $memory_13);
#line 532
label_98:
#line 532
$memory_17 = c_rt_lib::get_ref_arr($memory_7, $memory_9);
#line 532
$memory_18 = $memory_16;
#line 532
 if (c_rt_lib::get_hashcount($memory_17) > 1) {$memory_17 = {%{$memory_17}};}$memory_17->{'annotation'} = $memory_18;
#line 532
c_rt_lib::set_ref_arr($memory_7, $memory_9, $memory_17);
#line 532
undef($memory_16);
#line 532
undef($memory_17);
#line 532
undef($memory_18);
#line 532
undef($memory_12);
#line 532
undef($memory_13);
#line 532
undef($memory_14);
#line 532
undef($memory_15);
#line 533
$memory_9 = $memory_9 + $memory_10;
#line 533
goto label_16;
#line 533
label_14:
#line 533
undef($memory_8);
#line 533
undef($memory_9);
#line 533
undef($memory_10);
#line 533
undef($memory_11);
#line 534
$memory_8 = $memory_7;
#line 534
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'cmds'} = $memory_8;
#line 534
undef($memory_8);
#line 535
$memory_8 = $memory_6;
#line 535
 if (c_rt_lib::get_arrcount($memory_1) > 1) {$memory_1 = [@{$memory_1}];}$memory_1->[$memory_0] = $memory_8;
#line 535
undef($memory_8);
#line 536
$memory_8 = $memory_6->{'next'};
#line 536
$memory_10 = 0;
#line 536
$memory_11 = 1;
#line 536
$memory_12 = c_rt_lib::array_len($memory_8);
#line 536
label_102:
#line 536
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 536
if (c_rt_lib::check_true($memory_13)) {goto label_100;}
#line 536
$memory_9 = $memory_8->[$memory_10];
#line 537
post_processing_priv::set_const_block($memory_9, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5);
#line 538
$memory_10 = $memory_10 + $memory_11;
#line 538
goto label_102;
#line 538
label_100:
#line 538
undef($memory_8);
#line 538
undef($memory_9);
#line 538
undef($memory_10);
#line 538
undef($memory_11);
#line 538
undef($memory_12);
#line 538
undef($memory_13);
#line 538
undef($memory_6);
#line 538
undef($memory_7);
#line 538
undef($memory_0);
#line 538
undef($memory_2);
#line 538
undef($memory_4);
#line 538
undef($memory_5);
#line 538
$_[1] = $memory_1;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[3] = $memory_3;}

sub post_processing_priv::evaluate_const($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];$memory_6 = $_[6];
#line 544
$memory_7 = $memory_3;
#line 544
$memory_7 = c_rt_lib::ov_is($memory_7, 'no');
#line 544
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 544
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 545
$memory_9 = 0;
#line 545
$memory_10 = 1;
#line 545
$memory_11 = c_rt_lib::array_len($memory_6);
#line 545
label_5:
#line 545
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 545
if (c_rt_lib::check_true($memory_12)) {goto label_3;}
#line 545
$memory_8 = $memory_6->[$memory_9];
#line 546
$memory_13 = "";
#line 546
$memory_13 = c_rt_lib::to_nl($memory_8 eq $memory_13);
#line 546
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 546
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 546
if (c_rt_lib::check_true($memory_13)) {goto label_7;}
#line 546
$memory_14 = c_rt_lib::ov_mk_none('no');
#line 546
$memory_15 = $memory_14;
#line 546
 if (c_rt_lib::get_arrcount($memory_4) > 1) {$memory_4 = [@{$memory_4}];}$memory_4->[$memory_8] = $memory_15;
#line 546
undef($memory_14);
#line 546
undef($memory_15);
#line 546
goto label_7;
#line 546
label_7:
#line 546
undef($memory_13);
#line 547
$memory_9 = $memory_9 + $memory_10;
#line 547
goto label_5;
#line 547
label_3:
#line 547
undef($memory_8);
#line 547
undef($memory_9);
#line 547
undef($memory_10);
#line 547
undef($memory_11);
#line 547
undef($memory_12);
#line 548
undef($memory_0);
#line 548
undef($memory_1);
#line 548
undef($memory_2);
#line 548
undef($memory_5);
#line 548
undef($memory_6);
#line 548
undef($memory_7);
#line 548
$_[3] = $memory_3;$_[4] = $memory_4;return;
#line 549
goto label_2;
#line 549
label_2:
#line 549
undef($memory_7);
#line 550
$memory_7 = $memory_3;
#line 550
$memory_7 = c_rt_lib::ov_as($memory_7, 'yes');
#line 551
$memory_8 = [];
#line 552
$memory_10 = 0;
#line 552
$memory_11 = 1;
#line 552
$memory_12 = c_rt_lib::array_len($memory_4);
#line 552
label_10:
#line 552
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 552
if (c_rt_lib::check_true($memory_13)) {goto label_8;}
#line 552
$memory_9 = $memory_4->[$memory_10];
#line 553
$memory_14 = interpreter::get_none_variant();
#line 554
$memory_15 = $memory_9;
#line 554
$memory_15 = c_rt_lib::ov_is($memory_15, 'yes');
#line 554
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 554
if (c_rt_lib::check_true($memory_15)) {goto label_12;}
#line 555
$memory_16 = $memory_9;
#line 555
$memory_16 = c_rt_lib::ov_as($memory_16, 'yes');
#line 556
$memory_17 = $memory_16->{'value'};
#line 556
$memory_14 = $memory_17;
#line 556
undef($memory_17);
#line 556
undef($memory_16);
#line 557
goto label_12;
#line 557
label_12:
#line 557
undef($memory_15);
#line 558
array::push($memory_8, $memory_14);
#line 558
undef($memory_14);
#line 559
$memory_10 = $memory_10 + $memory_11;
#line 559
goto label_10;
#line 559
label_8:
#line 559
undef($memory_9);
#line 559
undef($memory_10);
#line 559
undef($memory_11);
#line 559
undef($memory_12);
#line 559
undef($memory_13);
#line 560
$memory_9 = interpreter::evaluate_const($memory_5, $memory_0, $memory_1, $memory_8, $memory_2);
#line 561
$memory_10 = $memory_9;
#line 561
$memory_10 = c_rt_lib::ov_is($memory_10, 'err');
#line 561
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 561
if (c_rt_lib::check_true($memory_10)) {goto label_14;}
#line 562
$memory_11 = c_rt_lib::ov_mk_none('no');
#line 562
$memory_3 = $memory_11;
#line 562
undef($memory_11);
#line 563
$memory_12 = 0;
#line 563
$memory_13 = 1;
#line 563
$memory_14 = c_rt_lib::array_len($memory_6);
#line 563
label_17:
#line 563
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 563
if (c_rt_lib::check_true($memory_15)) {goto label_15;}
#line 563
$memory_11 = $memory_6->[$memory_12];
#line 564
$memory_16 = "";
#line 564
$memory_16 = c_rt_lib::to_nl($memory_11 eq $memory_16);
#line 564
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 564
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 564
if (c_rt_lib::check_true($memory_16)) {goto label_19;}
#line 564
$memory_17 = c_rt_lib::ov_mk_none('no');
#line 564
$memory_18 = $memory_17;
#line 564
 if (c_rt_lib::get_arrcount($memory_4) > 1) {$memory_4 = [@{$memory_4}];}$memory_4->[$memory_11] = $memory_18;
#line 564
undef($memory_17);
#line 564
undef($memory_18);
#line 564
goto label_19;
#line 564
label_19:
#line 564
undef($memory_16);
#line 565
$memory_12 = $memory_12 + $memory_13;
#line 565
goto label_17;
#line 565
label_15:
#line 565
undef($memory_11);
#line 565
undef($memory_12);
#line 565
undef($memory_13);
#line 565
undef($memory_14);
#line 565
undef($memory_15);
#line 566
goto label_13;
#line 566
label_14:
#line 567
$memory_11 = $memory_9;
#line 567
$memory_11 = c_rt_lib::ov_as($memory_11, 'ok');
#line 568
$memory_12 = array::len($memory_6);
#line 568
$memory_13 = 0;
#line 568
$memory_14 = 1;
#line 568
label_22:
#line 568
$memory_15 = c_rt_lib::to_nl($memory_13 >= $memory_12);
#line 568
if (c_rt_lib::check_true($memory_15)) {goto label_20;}
#line 569
$memory_16 = $memory_6->[$memory_13];
#line 570
$memory_17 = "";
#line 570
$memory_17 = c_rt_lib::to_nl($memory_16 eq $memory_17);
#line 570
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 570
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 570
if (c_rt_lib::check_true($memory_17)) {goto label_24;}
#line 570
$memory_19 = 10000;
#line 570
$memory_20 = $memory_7->{'nr'};
#line 570
$memory_19 = $memory_19 * $memory_20;
#line 570
undef($memory_20);
#line 570
$memory_19 = $memory_19 + $memory_13;
#line 570
$memory_20 = $memory_11->[$memory_16];
#line 570
$memory_18 = {nr => $memory_19,value => $memory_20,};
#line 570
undef($memory_19);
#line 570
undef($memory_20);
#line 570
$memory_18 = c_rt_lib::ov_mk_arg('yes', $memory_18);
#line 570
$memory_19 = $memory_18;
#line 570
 if (c_rt_lib::get_arrcount($memory_4) > 1) {$memory_4 = [@{$memory_4}];}$memory_4->[$memory_16] = $memory_19;
#line 570
undef($memory_18);
#line 570
undef($memory_19);
#line 570
goto label_24;
#line 570
label_24:
#line 570
undef($memory_17);
#line 570
undef($memory_16);
#line 571
$memory_13 = $memory_13 + $memory_14;
#line 571
goto label_22;
#line 571
label_20:
#line 571
undef($memory_12);
#line 571
undef($memory_13);
#line 571
undef($memory_14);
#line 571
undef($memory_15);
#line 571
undef($memory_11);
#line 572
goto label_13;
#line 572
label_13:
#line 572
undef($memory_10);
#line 572
undef($memory_7);
#line 572
undef($memory_8);
#line 572
undef($memory_9);
#line 572
undef($memory_0);
#line 572
undef($memory_1);
#line 572
undef($memory_2);
#line 572
undef($memory_5);
#line 572
undef($memory_6);
#line 572
$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[3] = $memory_3;$_[4] = $memory_4;}

sub post_processing_priv::push_load_const($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 577
$memory_4 = $memory_1;
#line 577
$memory_4 = c_rt_lib::ov_is($memory_4, 'yes');
#line 577
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 577
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 577
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 577
$memory_5 = [];
#line 577
die(dfile::ssave($memory_5));
#line 577
goto label_2;
#line 577
label_2:
#line 577
undef($memory_4);
#line 577
undef($memory_5);
#line 578
$memory_4 = $memory_1;
#line 578
$memory_4 = c_rt_lib::ov_as($memory_4, 'yes');
#line 579
$memory_6 = $memory_3->{'debug'};
#line 579
$memory_7 = [$memory_2];
#line 579
$memory_7 = c_rt_lib::ov_mk_arg('const', $memory_7);
#line 579
$memory_9 = $memory_4->{'value'};
#line 579
$memory_8 = {dest => $memory_2,val => $memory_9,};
#line 579
undef($memory_9);
#line 579
$memory_8 = c_rt_lib::ov_mk_arg('load_const', $memory_8);
#line 579
$memory_5 = {debug => $memory_6,annotation => $memory_7,cmd => $memory_8,};
#line 579
undef($memory_6);
#line 579
undef($memory_7);
#line 579
undef($memory_8);
#line 579
array::push($memory_0, $memory_5);
#line 579
undef($memory_5);
#line 579
undef($memory_4);
#line 579
undef($memory_1);
#line 579
undef($memory_2);
#line 579
undef($memory_3);
#line 579
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub post_processing_priv::set_const_block_val($$$$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;my $memory_27;my $memory_28;my $memory_29;my $memory_30;my $memory_31;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];$memory_6 = $_[6];$memory_7 = $_[7];$memory_8 = $_[8];
#line 590
$memory_9 = $memory_1->[$memory_0];
#line 591
$memory_10 = $memory_4->[$memory_0];
#line 591
$memory_10 = $memory_10->{'was'};
#line 591
$memory_11 = 0;
#line 591
$memory_10 = c_rt_lib::to_nl($memory_10 > $memory_11);
#line 591
undef($memory_11);
#line 591
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 591
if (c_rt_lib::check_true($memory_10)) {goto label_2;}
#line 592
$memory_11 = c_rt_lib::to_nl(0);
#line 593
$memory_12 = $memory_4->[$memory_0];
#line 593
$memory_12 = $memory_12->{'regs'};
#line 594
$memory_13 = array::len($memory_6);
#line 594
$memory_14 = 0;
#line 594
$memory_15 = 1;
#line 594
label_5:
#line 594
$memory_16 = c_rt_lib::to_nl($memory_14 >= $memory_13);
#line 594
if (c_rt_lib::check_true($memory_16)) {goto label_3;}
#line 595
$memory_17 = $memory_12->[$memory_14];
#line 595
$memory_17 = c_rt_lib::ov_is($memory_17, 'no');
#line 595
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 595
if (c_rt_lib::check_true($memory_17)) {goto label_7;}
#line 596
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 596
$memory_19 = $memory_18;
#line 596
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_14] = $memory_19;
#line 596
undef($memory_18);
#line 596
undef($memory_19);
#line 597
undef($memory_17);
#line 597
goto label_4;
#line 598
goto label_6;
#line 598
label_7:
#line 599
$memory_18 = $memory_6->[$memory_14];
#line 599
$memory_18 = c_rt_lib::ov_is($memory_18, 'yes');
#line 599
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 599
if (c_rt_lib::check_true($memory_18)) {goto label_9;}
#line 600
$memory_19 = $memory_6->[$memory_14];
#line 600
$memory_19 = c_rt_lib::ov_as($memory_19, 'yes');
#line 601
$memory_20 = $memory_12->[$memory_14];
#line 601
$memory_20 = c_rt_lib::ov_as($memory_20, 'yes');
#line 602
$memory_21 = $memory_19->{'nr'};
#line 602
$memory_22 = $memory_20->{'nr'};
#line 602
$memory_21 = c_rt_lib::to_nl($memory_21 == $memory_22);
#line 602
undef($memory_22);
#line 602
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 602
if (c_rt_lib::check_true($memory_21)) {goto label_11;}
#line 602
undef($memory_17);
#line 602
undef($memory_18);
#line 602
undef($memory_19);
#line 602
undef($memory_20);
#line 602
undef($memory_21);
#line 602
goto label_4;
#line 602
goto label_11;
#line 602
label_11:
#line 602
undef($memory_21);
#line 602
undef($memory_19);
#line 602
undef($memory_20);
#line 603
goto label_9;
#line 603
label_9:
#line 603
undef($memory_18);
#line 604
$memory_18 = c_rt_lib::ov_mk_none('no');
#line 604
$memory_19 = $memory_18;
#line 604
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_14] = $memory_19;
#line 604
undef($memory_18);
#line 604
undef($memory_19);
#line 605
$memory_18 = c_rt_lib::to_nl(1);
#line 605
$memory_11 = $memory_18;
#line 605
undef($memory_18);
#line 606
goto label_6;
#line 606
label_6:
#line 606
undef($memory_17);
#line 606
label_4:
#line 607
$memory_14 = $memory_14 + $memory_15;
#line 607
goto label_5;
#line 607
label_3:
#line 607
undef($memory_13);
#line 607
undef($memory_14);
#line 607
undef($memory_15);
#line 607
undef($memory_16);
#line 608
$memory_13 = $memory_11;
#line 608
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 608
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 608
if (c_rt_lib::check_true($memory_13)) {goto label_13;}
#line 608
undef($memory_0);
#line 608
undef($memory_1);
#line 608
undef($memory_3);
#line 608
undef($memory_5);
#line 608
undef($memory_6);
#line 608
undef($memory_7);
#line 608
undef($memory_8);
#line 608
undef($memory_9);
#line 608
undef($memory_10);
#line 608
undef($memory_11);
#line 608
undef($memory_12);
#line 608
undef($memory_13);
#line 608
$_[2] = $memory_2;$_[4] = $memory_4;return;
#line 608
goto label_13;
#line 608
label_13:
#line 608
undef($memory_13);
#line 608
undef($memory_11);
#line 608
undef($memory_12);
#line 609
goto label_2;
#line 609
label_2:
#line 609
undef($memory_10);
#line 610
$memory_10 = c_rt_lib::get_ref_arr($memory_4, $memory_0);
#line 610
$memory_11 = $memory_6;
#line 610
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'regs'} = $memory_11;
#line 610
c_rt_lib::set_ref_arr($memory_4, $memory_0, $memory_10);
#line 610
undef($memory_10);
#line 610
undef($memory_11);
#line 611
$memory_10 = [];
#line 612
$memory_11 = c_rt_lib::get_ref_arr($memory_4, $memory_0);
#line 612
$memory_12 = "was";
#line 612
$memory_12 = c_rt_lib::get_ref_hash($memory_11, $memory_12);
#line 612
$memory_13 = 1;
#line 612
$memory_12 = $memory_12 + $memory_13;
#line 612
$memory_14 = "was";
#line 612
c_rt_lib::set_ref_hash($memory_11, $memory_14, $memory_12);
#line 612
c_rt_lib::set_ref_arr($memory_4, $memory_0, $memory_11);
#line 612
undef($memory_14);
#line 612
undef($memory_11);
#line 612
undef($memory_12);
#line 612
undef($memory_13);
#line 613
$memory_11 = $memory_9->{'cmds'};
#line 614
$memory_12 = array::len($memory_11);
#line 614
$memory_13 = 0;
#line 614
$memory_14 = 1;
#line 614
label_16:
#line 614
$memory_15 = c_rt_lib::to_nl($memory_13 >= $memory_12);
#line 614
if (c_rt_lib::check_true($memory_15)) {goto label_14;}
#line 615
$memory_16 = $memory_9->{'from'};
#line 615
$memory_16 = $memory_16 + $memory_13;
#line 616
$memory_18 = $memory_9->{'from'};
#line 616
$memory_18 = $memory_13 + $memory_18;
#line 616
$memory_19 = "";
#line 616
$memory_17 = {nr => $memory_18,value => $memory_19,};
#line 616
undef($memory_18);
#line 616
undef($memory_19);
#line 616
$memory_17 = c_rt_lib::ov_mk_arg('yes', $memory_17);
#line 617
$memory_18 = $memory_11->[$memory_13];
#line 618
$memory_19 = [];
#line 619
$memory_20 = $memory_18->{'cmd'};
#line 619
$memory_21 = c_rt_lib::ov_is($memory_20, 'arr_decl');
#line 619
if (c_rt_lib::check_true($memory_21)) {goto label_18;}
#line 625
$memory_21 = c_rt_lib::ov_is($memory_20, 'hash_decl');
#line 625
if (c_rt_lib::check_true($memory_21)) {goto label_19;}
#line 631
$memory_21 = c_rt_lib::ov_is($memory_20, 'call');
#line 631
if (c_rt_lib::check_true($memory_21)) {goto label_20;}
#line 654
$memory_21 = c_rt_lib::ov_is($memory_20, 'una_op');
#line 654
if (c_rt_lib::check_true($memory_21)) {goto label_21;}
#line 658
$memory_21 = c_rt_lib::ov_is($memory_20, 'bin_op');
#line 658
if (c_rt_lib::check_true($memory_21)) {goto label_22;}
#line 663
$memory_21 = c_rt_lib::ov_is($memory_20, 'ov_is');
#line 663
if (c_rt_lib::check_true($memory_21)) {goto label_23;}
#line 667
$memory_21 = c_rt_lib::ov_is($memory_20, 'ov_as');
#line 667
if (c_rt_lib::check_true($memory_21)) {goto label_24;}
#line 671
$memory_21 = c_rt_lib::ov_is($memory_20, 'func');
#line 671
if (c_rt_lib::check_true($memory_21)) {goto label_25;}
#line 675
$memory_21 = c_rt_lib::ov_is($memory_20, 'move');
#line 675
if (c_rt_lib::check_true($memory_21)) {goto label_26;}
#line 679
$memory_21 = c_rt_lib::ov_is($memory_20, 'load_const');
#line 679
if (c_rt_lib::check_true($memory_21)) {goto label_27;}
#line 684
$memory_21 = c_rt_lib::ov_is($memory_20, 'get_frm_idx');
#line 684
if (c_rt_lib::check_true($memory_21)) {goto label_28;}
#line 689
$memory_21 = c_rt_lib::ov_is($memory_20, 'set_at_idx');
#line 689
if (c_rt_lib::check_true($memory_21)) {goto label_29;}
#line 695
$memory_21 = c_rt_lib::ov_is($memory_20, 'get_val');
#line 695
if (c_rt_lib::check_true($memory_21)) {goto label_30;}
#line 699
$memory_21 = c_rt_lib::ov_is($memory_20, 'set_val');
#line 699
if (c_rt_lib::check_true($memory_21)) {goto label_31;}
#line 704
$memory_21 = c_rt_lib::ov_is($memory_20, 'ov_mk');
#line 704
if (c_rt_lib::check_true($memory_21)) {goto label_32;}
#line 710
$memory_21 = c_rt_lib::ov_is($memory_20, 'return');
#line 710
if (c_rt_lib::check_true($memory_21)) {goto label_33;}
#line 715
$memory_21 = c_rt_lib::ov_is($memory_20, 'die');
#line 715
if (c_rt_lib::check_true($memory_21)) {goto label_34;}
#line 718
$memory_21 = c_rt_lib::ov_is($memory_20, 'prt_lbl');
#line 718
if (c_rt_lib::check_true($memory_21)) {goto label_35;}
#line 720
$memory_21 = c_rt_lib::ov_is($memory_20, 'if_goto');
#line 720
if (c_rt_lib::check_true($memory_21)) {goto label_36;}
#line 723
$memory_21 = c_rt_lib::ov_is($memory_20, 'goto');
#line 723
if (c_rt_lib::check_true($memory_21)) {goto label_37;}
#line 725
$memory_21 = c_rt_lib::ov_is($memory_20, 'clear');
#line 725
if (c_rt_lib::check_true($memory_21)) {goto label_38;}
#line 725
$memory_21 = "NOMATCHALERT";
#line 725
$memory_21 = [$memory_21,$memory_20];
#line 725
die(dfile::ssave($memory_21));
#line 619
label_18:
#line 619
$memory_22 = c_rt_lib::ov_as($memory_20, 'arr_decl');
#line 620
$memory_23 = $memory_22->{'src'};
#line 620
$memory_25 = 0;
#line 620
$memory_26 = 1;
#line 620
$memory_27 = c_rt_lib::array_len($memory_23);
#line 620
label_41:
#line 620
$memory_28 = c_rt_lib::to_nl($memory_25 >= $memory_27);
#line 620
if (c_rt_lib::check_true($memory_28)) {goto label_39;}
#line 620
$memory_24 = $memory_23->[$memory_25];
#line 621
$memory_29 = $memory_6->[$memory_24];
#line 621
post_processing_priv::check_sub_val($memory_17, $memory_29);
#line 621
undef($memory_29);
#line 622
$memory_25 = $memory_25 + $memory_26;
#line 622
goto label_41;
#line 622
label_39:
#line 622
undef($memory_23);
#line 622
undef($memory_24);
#line 622
undef($memory_25);
#line 622
undef($memory_26);
#line 622
undef($memory_27);
#line 622
undef($memory_28);
#line 623
$memory_24 = $memory_22->{'dest'};
#line 623
$memory_23 = [$memory_24];
#line 623
undef($memory_24);
#line 623
$memory_19 = $memory_23;
#line 623
undef($memory_23);
#line 624
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 624
undef($memory_22);
#line 625
goto label_17;
#line 625
label_19:
#line 625
$memory_22 = c_rt_lib::ov_as($memory_20, 'hash_decl');
#line 626
$memory_23 = $memory_22->{'src'};
#line 626
$memory_25 = 0;
#line 626
$memory_26 = 1;
#line 626
$memory_27 = c_rt_lib::array_len($memory_23);
#line 626
label_44:
#line 626
$memory_28 = c_rt_lib::to_nl($memory_25 >= $memory_27);
#line 626
if (c_rt_lib::check_true($memory_28)) {goto label_42;}
#line 626
$memory_24 = $memory_23->[$memory_25];
#line 627
$memory_30 = $memory_24->{'val'};
#line 627
$memory_29 = $memory_6->[$memory_30];
#line 627
undef($memory_30);
#line 627
post_processing_priv::check_sub_val($memory_17, $memory_29);
#line 627
undef($memory_29);
#line 628
$memory_25 = $memory_25 + $memory_26;
#line 628
goto label_44;
#line 628
label_42:
#line 628
undef($memory_23);
#line 628
undef($memory_24);
#line 628
undef($memory_25);
#line 628
undef($memory_26);
#line 628
undef($memory_27);
#line 628
undef($memory_28);
#line 629
$memory_24 = $memory_22->{'dest'};
#line 629
$memory_23 = [$memory_24];
#line 629
undef($memory_24);
#line 629
$memory_19 = $memory_23;
#line 629
undef($memory_23);
#line 630
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 630
undef($memory_22);
#line 631
goto label_17;
#line 631
label_20:
#line 631
$memory_22 = c_rt_lib::ov_as($memory_20, 'call');
#line 632
$memory_23 = $memory_22->{'args'};
#line 632
$memory_25 = 0;
#line 632
$memory_26 = 1;
#line 632
$memory_27 = c_rt_lib::array_len($memory_23);
#line 632
label_47:
#line 632
$memory_28 = c_rt_lib::to_nl($memory_25 >= $memory_27);
#line 632
if (c_rt_lib::check_true($memory_28)) {goto label_45;}
#line 632
$memory_24 = $memory_23->[$memory_25];
#line 633
$memory_29 = c_rt_lib::ov_is($memory_24, 'val');
#line 633
if (c_rt_lib::check_true($memory_29)) {goto label_49;}
#line 635
$memory_29 = c_rt_lib::ov_is($memory_24, 'ref');
#line 635
if (c_rt_lib::check_true($memory_29)) {goto label_50;}
#line 635
$memory_29 = "NOMATCHALERT";
#line 635
$memory_29 = [$memory_29,$memory_24];
#line 635
die(dfile::ssave($memory_29));
#line 633
label_49:
#line 633
$memory_30 = c_rt_lib::ov_as($memory_24, 'val');
#line 634
$memory_31 = $memory_6->[$memory_30];
#line 634
post_processing_priv::check_sub_val($memory_17, $memory_31);
#line 634
undef($memory_31);
#line 634
undef($memory_30);
#line 635
goto label_48;
#line 635
label_50:
#line 635
$memory_30 = c_rt_lib::ov_as($memory_24, 'ref');
#line 636
$memory_31 = $memory_6->[$memory_30];
#line 636
post_processing_priv::check_sub_val($memory_17, $memory_31);
#line 636
undef($memory_31);
#line 637
array::push($memory_19, $memory_30);
#line 637
undef($memory_30);
#line 638
goto label_48;
#line 638
label_48:
#line 638
undef($memory_29);
#line 639
$memory_25 = $memory_25 + $memory_26;
#line 639
goto label_47;
#line 639
label_45:
#line 639
undef($memory_23);
#line 639
undef($memory_24);
#line 639
undef($memory_25);
#line 639
undef($memory_26);
#line 639
undef($memory_27);
#line 639
undef($memory_28);
#line 640
$memory_23 = $memory_22->{'dest'};
#line 640
array::push($memory_19, $memory_23);
#line 640
undef($memory_23);
#line 641
$memory_23 = $memory_22->{'mod'};
#line 641
$memory_24 = "";
#line 641
$memory_23 = c_rt_lib::to_nl($memory_23 eq $memory_24);
#line 641
undef($memory_24);
#line 641
if (c_rt_lib::check_true($memory_23)) {goto label_52;}
#line 641
$memory_23 = $memory_22->{'mod'};
#line 641
goto label_51;
#line 641
label_52:
#line 641
$memory_23 = "_priv";
#line 641
$memory_23 = $memory_8 . $memory_23;
#line 641
label_51:
#line 641
$memory_24 = "::";
#line 641
$memory_23 = $memory_23 . $memory_24;
#line 641
undef($memory_24);
#line 641
$memory_24 = $memory_22->{'fun_name'};
#line 641
$memory_23 = $memory_23 . $memory_24;
#line 641
undef($memory_24);
#line 642
$memory_24 = hash::has_key($memory_3, $memory_23);
#line 642
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 642
if (c_rt_lib::check_true($memory_24)) {goto label_54;}
#line 643
$memory_25 = hash::get_value($memory_3, $memory_23);
#line 643
$memory_25 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_25));
#line 643
$memory_25 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_25));
#line 643
if (c_rt_lib::check_true($memory_25)) {goto label_56;}
#line 643
$memory_26 = c_rt_lib::ov_mk_none('no');
#line 643
$memory_17 = $memory_26;
#line 643
undef($memory_26);
#line 643
goto label_56;
#line 643
label_56:
#line 643
undef($memory_25);
#line 644
goto label_53;
#line 644
label_54:
#line 645
$memory_25 = c_rt_lib::ov_mk_none('no');
#line 645
$memory_17 = $memory_25;
#line 645
undef($memory_25);
#line 646
goto label_53;
#line 646
label_53:
#line 646
undef($memory_24);
#line 647
$memory_24 = $memory_22->{'mod'};
#line 647
$memory_25 = "c_rt_lib";
#line 647
$memory_24 = c_rt_lib::to_nl($memory_24 eq $memory_25);
#line 647
undef($memory_25);
#line 647
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 647
if (c_rt_lib::check_true($memory_24)) {goto label_58;}
#line 648
$memory_25 = $memory_22->{'fun_name'};
#line 648
$memory_26 = "init_iter";
#line 648
$memory_25 = c_rt_lib::to_nl($memory_25 eq $memory_26);
#line 648
undef($memory_26);
#line 648
if (c_rt_lib::check_true($memory_25)) {goto label_63;}
#line 648
$memory_25 = $memory_22->{'fun_name'};
#line 648
$memory_26 = "is_end_hash";
#line 648
$memory_25 = c_rt_lib::to_nl($memory_25 eq $memory_26);
#line 648
undef($memory_26);
#line 648
label_63:
#line 648
if (c_rt_lib::check_true($memory_25)) {goto label_62;}
#line 648
$memory_25 = $memory_22->{'fun_name'};
#line 648
$memory_26 = "get_key_iter";
#line 648
$memory_25 = c_rt_lib::to_nl($memory_25 eq $memory_26);
#line 648
undef($memory_26);
#line 648
label_62:
#line 648
if (c_rt_lib::check_true($memory_25)) {goto label_61;}
#line 648
$memory_25 = $memory_22->{'fun_name'};
#line 648
$memory_26 = "next_iter";
#line 648
$memory_25 = c_rt_lib::to_nl($memory_25 eq $memory_26);
#line 648
undef($memory_26);
#line 648
label_61:
#line 648
$memory_25 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_25));
#line 648
if (c_rt_lib::check_true($memory_25)) {goto label_60;}
#line 650
$memory_26 = c_rt_lib::ov_mk_none('no');
#line 650
$memory_17 = $memory_26;
#line 650
undef($memory_26);
#line 651
goto label_60;
#line 651
label_60:
#line 651
undef($memory_25);
#line 652
goto label_58;
#line 652
label_58:
#line 652
undef($memory_24);
#line 653
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 653
undef($memory_23);
#line 653
undef($memory_22);
#line 654
goto label_17;
#line 654
label_21:
#line 654
$memory_22 = c_rt_lib::ov_as($memory_20, 'una_op');
#line 655
$memory_24 = $memory_22->{'src'};
#line 655
$memory_23 = $memory_6->[$memory_24];
#line 655
undef($memory_24);
#line 655
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 655
undef($memory_23);
#line 656
$memory_24 = $memory_22->{'dest'};
#line 656
$memory_23 = [$memory_24];
#line 656
undef($memory_24);
#line 656
$memory_19 = $memory_23;
#line 656
undef($memory_23);
#line 657
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 657
undef($memory_22);
#line 658
goto label_17;
#line 658
label_22:
#line 658
$memory_22 = c_rt_lib::ov_as($memory_20, 'bin_op');
#line 659
$memory_24 = $memory_22->{'left'};
#line 659
$memory_23 = $memory_6->[$memory_24];
#line 659
undef($memory_24);
#line 659
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 659
undef($memory_23);
#line 660
$memory_24 = $memory_22->{'right'};
#line 660
$memory_23 = $memory_6->[$memory_24];
#line 660
undef($memory_24);
#line 660
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 660
undef($memory_23);
#line 661
$memory_24 = $memory_22->{'dest'};
#line 661
$memory_23 = [$memory_24];
#line 661
undef($memory_24);
#line 661
$memory_19 = $memory_23;
#line 661
undef($memory_23);
#line 662
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 662
undef($memory_22);
#line 663
goto label_17;
#line 663
label_23:
#line 663
$memory_22 = c_rt_lib::ov_as($memory_20, 'ov_is');
#line 664
$memory_24 = $memory_22->{'src'};
#line 664
$memory_23 = $memory_6->[$memory_24];
#line 664
undef($memory_24);
#line 664
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 664
undef($memory_23);
#line 665
$memory_24 = $memory_22->{'dest'};
#line 665
$memory_23 = [$memory_24];
#line 665
undef($memory_24);
#line 665
$memory_19 = $memory_23;
#line 665
undef($memory_23);
#line 666
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 666
undef($memory_22);
#line 667
goto label_17;
#line 667
label_24:
#line 667
$memory_22 = c_rt_lib::ov_as($memory_20, 'ov_as');
#line 668
$memory_24 = $memory_22->{'src'};
#line 668
$memory_23 = $memory_6->[$memory_24];
#line 668
undef($memory_24);
#line 668
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 668
undef($memory_23);
#line 669
$memory_24 = $memory_22->{'dest'};
#line 669
$memory_23 = [$memory_24];
#line 669
undef($memory_24);
#line 669
$memory_19 = $memory_23;
#line 669
undef($memory_23);
#line 670
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 670
undef($memory_22);
#line 671
goto label_17;
#line 671
label_25:
#line 671
$memory_22 = c_rt_lib::ov_as($memory_20, 'func');
#line 672
$memory_24 = $memory_22->{'dest'};
#line 672
$memory_23 = [$memory_24];
#line 672
undef($memory_24);
#line 672
$memory_19 = $memory_23;
#line 672
undef($memory_23);
#line 673
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 673
$memory_17 = $memory_23;
#line 673
undef($memory_23);
#line 674
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 674
undef($memory_22);
#line 675
goto label_17;
#line 675
label_26:
#line 675
$memory_22 = c_rt_lib::ov_as($memory_20, 'move');
#line 676
$memory_24 = $memory_22->{'src'};
#line 676
$memory_23 = $memory_6->[$memory_24];
#line 676
undef($memory_24);
#line 676
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 676
undef($memory_23);
#line 677
$memory_24 = $memory_22->{'dest'};
#line 677
$memory_23 = [$memory_24];
#line 677
undef($memory_24);
#line 677
$memory_19 = $memory_23;
#line 677
undef($memory_23);
#line 678
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 678
undef($memory_22);
#line 679
goto label_17;
#line 679
label_27:
#line 679
$memory_22 = c_rt_lib::ov_as($memory_20, 'load_const');
#line 680
$memory_24 = $memory_22->{'dest'};
#line 680
$memory_23 = [$memory_24];
#line 680
undef($memory_24);
#line 680
$memory_19 = $memory_23;
#line 680
undef($memory_23);
#line 681
$memory_24 = $memory_9->{'from'};
#line 681
$memory_24 = $memory_13 + $memory_24;
#line 681
$memory_25 = $memory_22->{'val'};
#line 681
$memory_23 = {nr => $memory_24,value => $memory_25,};
#line 681
undef($memory_24);
#line 681
undef($memory_25);
#line 681
$memory_23 = c_rt_lib::ov_mk_arg('yes', $memory_23);
#line 681
$memory_17 = $memory_23;
#line 681
undef($memory_23);
#line 682
$memory_23 = $memory_22->{'dest'};
#line 682
$memory_24 = "";
#line 682
$memory_23 = c_rt_lib::to_nl($memory_23 eq $memory_24);
#line 682
undef($memory_24);
#line 682
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 682
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 682
if (c_rt_lib::check_true($memory_23)) {goto label_65;}
#line 682
$memory_25 = $memory_22->{'dest'};
#line 682
$memory_24 = $memory_17;
#line 682
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_25] = $memory_24;
#line 682
undef($memory_24);
#line 682
undef($memory_25);
#line 682
goto label_65;
#line 682
label_65:
#line 682
undef($memory_23);
#line 683
$memory_24 = $memory_22->{'dest'};
#line 683
$memory_23 = [$memory_24];
#line 683
undef($memory_24);
#line 683
$memory_23 = c_rt_lib::ov_mk_arg('const', $memory_23);
#line 683
$memory_24 = $memory_23;
#line 683
 if (c_rt_lib::get_hashcount($memory_18) > 1) {$memory_18 = {%{$memory_18}};}$memory_18->{'annotation'} = $memory_24;
#line 683
undef($memory_23);
#line 683
undef($memory_24);
#line 683
undef($memory_22);
#line 684
goto label_17;
#line 684
label_28:
#line 684
$memory_22 = c_rt_lib::ov_as($memory_20, 'get_frm_idx');
#line 685
$memory_24 = $memory_22->{'src'};
#line 685
$memory_23 = $memory_6->[$memory_24];
#line 685
undef($memory_24);
#line 685
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 685
undef($memory_23);
#line 686
$memory_24 = $memory_22->{'idx'};
#line 686
$memory_23 = $memory_6->[$memory_24];
#line 686
undef($memory_24);
#line 686
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 686
undef($memory_23);
#line 687
$memory_24 = $memory_22->{'dest'};
#line 687
$memory_23 = [$memory_24];
#line 687
undef($memory_24);
#line 687
$memory_19 = $memory_23;
#line 687
undef($memory_23);
#line 688
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 688
undef($memory_22);
#line 689
goto label_17;
#line 689
label_29:
#line 689
$memory_22 = c_rt_lib::ov_as($memory_20, 'set_at_idx');
#line 690
$memory_24 = $memory_22->{'src'};
#line 690
$memory_23 = $memory_6->[$memory_24];
#line 690
undef($memory_24);
#line 690
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 690
undef($memory_23);
#line 691
$memory_24 = $memory_22->{'idx'};
#line 691
$memory_23 = $memory_6->[$memory_24];
#line 691
undef($memory_24);
#line 691
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 691
undef($memory_23);
#line 692
$memory_24 = $memory_22->{'val'};
#line 692
$memory_23 = $memory_6->[$memory_24];
#line 692
undef($memory_24);
#line 692
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 692
undef($memory_23);
#line 693
$memory_24 = $memory_22->{'src'};
#line 693
$memory_23 = [$memory_24];
#line 693
undef($memory_24);
#line 693
$memory_19 = $memory_23;
#line 693
undef($memory_23);
#line 694
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 694
undef($memory_22);
#line 695
goto label_17;
#line 695
label_30:
#line 695
$memory_22 = c_rt_lib::ov_as($memory_20, 'get_val');
#line 696
$memory_24 = $memory_22->{'src'};
#line 696
$memory_23 = $memory_6->[$memory_24];
#line 696
undef($memory_24);
#line 696
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 696
undef($memory_23);
#line 697
$memory_24 = $memory_22->{'dest'};
#line 697
$memory_23 = [$memory_24];
#line 697
undef($memory_24);
#line 697
$memory_19 = $memory_23;
#line 697
undef($memory_23);
#line 698
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 698
undef($memory_22);
#line 699
goto label_17;
#line 699
label_31:
#line 699
$memory_22 = c_rt_lib::ov_as($memory_20, 'set_val');
#line 700
$memory_24 = $memory_22->{'src'};
#line 700
$memory_23 = $memory_6->[$memory_24];
#line 700
undef($memory_24);
#line 700
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 700
undef($memory_23);
#line 701
$memory_24 = $memory_22->{'val'};
#line 701
$memory_23 = $memory_6->[$memory_24];
#line 701
undef($memory_24);
#line 701
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 701
undef($memory_23);
#line 702
$memory_24 = $memory_22->{'src'};
#line 702
$memory_23 = [$memory_24];
#line 702
undef($memory_24);
#line 702
$memory_19 = $memory_23;
#line 702
undef($memory_23);
#line 703
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 703
undef($memory_22);
#line 704
goto label_17;
#line 704
label_32:
#line 704
$memory_22 = c_rt_lib::ov_as($memory_20, 'ov_mk');
#line 705
$memory_23 = $memory_22->{'src'};
#line 705
$memory_23 = c_rt_lib::ov_is($memory_23, 'arg');
#line 705
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 705
if (c_rt_lib::check_true($memory_23)) {goto label_67;}
#line 706
$memory_25 = $memory_22->{'src'};
#line 706
$memory_25 = c_rt_lib::ov_as($memory_25, 'arg');
#line 706
$memory_24 = $memory_6->[$memory_25];
#line 706
undef($memory_25);
#line 706
post_processing_priv::check_sub_val($memory_17, $memory_24);
#line 706
undef($memory_24);
#line 707
goto label_67;
#line 707
label_67:
#line 707
undef($memory_23);
#line 708
$memory_24 = $memory_22->{'dest'};
#line 708
$memory_23 = [$memory_24];
#line 708
undef($memory_24);
#line 708
$memory_19 = $memory_23;
#line 708
undef($memory_23);
#line 709
post_processing_priv::evaluate_const($memory_7, $memory_8, $memory_16, $memory_17, $memory_6, $memory_5, $memory_19);
#line 709
undef($memory_22);
#line 710
goto label_17;
#line 710
label_33:
#line 710
$memory_22 = c_rt_lib::ov_as($memory_20, 'return');
#line 711
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 711
$memory_17 = $memory_23;
#line 711
undef($memory_23);
#line 712
$memory_23 = $memory_22;
#line 712
$memory_23 = c_rt_lib::ov_is($memory_23, 'val');
#line 712
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 712
if (c_rt_lib::check_true($memory_23)) {goto label_69;}
#line 713
$memory_25 = $memory_22;
#line 713
$memory_25 = c_rt_lib::ov_as($memory_25, 'val');
#line 713
$memory_24 = $memory_6->[$memory_25];
#line 713
undef($memory_25);
#line 713
post_processing_priv::check_sub_val($memory_17, $memory_24);
#line 713
undef($memory_24);
#line 714
goto label_69;
#line 714
label_69:
#line 714
undef($memory_23);
#line 714
undef($memory_22);
#line 715
goto label_17;
#line 715
label_34:
#line 715
$memory_22 = c_rt_lib::ov_as($memory_20, 'die');
#line 716
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 716
$memory_17 = $memory_23;
#line 716
undef($memory_23);
#line 717
$memory_23 = $memory_6->[$memory_22];
#line 717
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 717
undef($memory_23);
#line 717
undef($memory_22);
#line 718
goto label_17;
#line 718
label_35:
#line 718
$memory_22 = c_rt_lib::ov_as($memory_20, 'prt_lbl');
#line 719
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 719
$memory_17 = $memory_23;
#line 719
undef($memory_23);
#line 719
undef($memory_22);
#line 720
goto label_17;
#line 720
label_36:
#line 720
$memory_22 = c_rt_lib::ov_as($memory_20, 'if_goto');
#line 721
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 721
$memory_17 = $memory_23;
#line 721
undef($memory_23);
#line 722
$memory_24 = $memory_22->{'src'};
#line 722
$memory_23 = $memory_6->[$memory_24];
#line 722
undef($memory_24);
#line 722
post_processing_priv::check_sub_val($memory_17, $memory_23);
#line 722
undef($memory_23);
#line 722
undef($memory_22);
#line 723
goto label_17;
#line 723
label_37:
#line 723
$memory_22 = c_rt_lib::ov_as($memory_20, 'goto');
#line 724
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 724
$memory_17 = $memory_23;
#line 724
undef($memory_23);
#line 724
undef($memory_22);
#line 725
goto label_17;
#line 725
label_38:
#line 725
$memory_22 = c_rt_lib::ov_as($memory_20, 'clear');
#line 726
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 726
$memory_17 = $memory_23;
#line 726
undef($memory_23);
#line 727
$memory_23 = c_rt_lib::ov_mk_none('no');
#line 727
$memory_24 = $memory_23;
#line 727
 if (c_rt_lib::get_arrcount($memory_6) > 1) {$memory_6 = [@{$memory_6}];}$memory_6->[$memory_22] = $memory_24;
#line 727
undef($memory_23);
#line 727
undef($memory_24);
#line 727
undef($memory_22);
#line 728
goto label_17;
#line 728
label_17:
#line 728
undef($memory_20);
#line 728
undef($memory_21);
#line 729
$memory_20 = $memory_17;
#line 729
$memory_20 = c_rt_lib::ov_is($memory_20, 'yes');
#line 729
$memory_20 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_20));
#line 729
if (c_rt_lib::check_true($memory_20)) {goto label_71;}
#line 730
$memory_22 = 0;
#line 730
$memory_23 = 1;
#line 730
$memory_24 = c_rt_lib::array_len($memory_19);
#line 730
label_74:
#line 730
$memory_25 = c_rt_lib::to_nl($memory_22 >= $memory_24);
#line 730
if (c_rt_lib::check_true($memory_25)) {goto label_72;}
#line 730
$memory_21 = $memory_19->[$memory_22];
#line 731
$memory_26 = "";
#line 731
$memory_26 = c_rt_lib::to_nl($memory_21 eq $memory_26);
#line 731
$memory_26 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_26));
#line 731
$memory_26 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_26));
#line 731
if (c_rt_lib::check_true($memory_26)) {goto label_76;}
#line 731
$memory_27 = $memory_6->[$memory_21];
#line 731
$memory_28 = $memory_11->[$memory_13];
#line 731
post_processing_priv::push_load_const($memory_10, $memory_27, $memory_21, $memory_28);
#line 731
undef($memory_28);
#line 731
undef($memory_27);
#line 731
goto label_76;
#line 731
label_76:
#line 731
undef($memory_26);
#line 732
$memory_22 = $memory_22 + $memory_23;
#line 732
goto label_74;
#line 732
label_72:
#line 732
undef($memory_21);
#line 732
undef($memory_22);
#line 732
undef($memory_23);
#line 732
undef($memory_24);
#line 732
undef($memory_25);
#line 733
goto label_70;
#line 733
label_71:
#line 734
array::push($memory_10, $memory_18);
#line 735
goto label_70;
#line 735
label_70:
#line 735
undef($memory_20);
#line 735
undef($memory_16);
#line 735
undef($memory_17);
#line 735
undef($memory_18);
#line 735
undef($memory_19);
#line 736
$memory_13 = $memory_13 + $memory_14;
#line 736
goto label_16;
#line 736
label_14:
#line 736
undef($memory_12);
#line 736
undef($memory_13);
#line 736
undef($memory_14);
#line 736
undef($memory_15);
#line 737
$memory_12 = c_rt_lib::get_ref_arr($memory_2, $memory_0);
#line 737
$memory_13 = $memory_10;
#line 737
 if (c_rt_lib::get_hashcount($memory_12) > 1) {$memory_12 = {%{$memory_12}};}$memory_12->{'cmds'} = $memory_13;
#line 737
c_rt_lib::set_ref_arr($memory_2, $memory_0, $memory_12);
#line 737
undef($memory_12);
#line 737
undef($memory_13);
#line 738
$memory_12 = $memory_9->{'next'};
#line 738
$memory_14 = 0;
#line 738
$memory_15 = 1;
#line 738
$memory_16 = c_rt_lib::array_len($memory_12);
#line 738
label_79:
#line 738
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 738
if (c_rt_lib::check_true($memory_17)) {goto label_77;}
#line 738
$memory_13 = $memory_12->[$memory_14];
#line 739
post_processing_priv::set_const_block_val($memory_13, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6, $memory_7, $memory_8);
#line 740
$memory_14 = $memory_14 + $memory_15;
#line 740
goto label_79;
#line 740
label_77:
#line 740
undef($memory_12);
#line 740
undef($memory_13);
#line 740
undef($memory_14);
#line 740
undef($memory_15);
#line 740
undef($memory_16);
#line 740
undef($memory_17);
#line 740
undef($memory_9);
#line 740
undef($memory_10);
#line 740
undef($memory_11);
#line 740
undef($memory_0);
#line 740
undef($memory_1);
#line 740
undef($memory_3);
#line 740
undef($memory_5);
#line 740
undef($memory_6);
#line 740
undef($memory_7);
#line 740
undef($memory_8);
#line 740
$_[2] = $memory_2;$_[4] = $memory_4;return;
$_[2] = $memory_2;$_[4] = $memory_4;}

sub post_processing_priv::delete_unused_labels_com($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 744
$memory_1 = {};
#line 745
$memory_2 = {};
#line 747
$memory_4 = "";
#line 748
$memory_6 = 0;
#line 748
$memory_7 = 1;
#line 748
$memory_8 = c_rt_lib::array_len($memory_0);
#line 748
label_3:
#line 748
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 748
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 748
$memory_5 = $memory_0->[$memory_6];
#line 749
$memory_10 = $memory_5->{'cmd'};
#line 750
$memory_11 = $memory_10;
#line 750
$memory_11 = c_rt_lib::ov_is($memory_11, 'prt_lbl');
#line 750
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 750
if (c_rt_lib::check_true($memory_11)) {goto label_5;}
#line 751
$memory_12 = $memory_10;
#line 751
$memory_12 = c_rt_lib::ov_as($memory_12, 'prt_lbl');
#line 751
$memory_3 = $memory_12;
#line 751
undef($memory_12);
#line 752
$memory_12 = "";
#line 752
$memory_12 = c_rt_lib::to_nl($memory_4 eq $memory_12);
#line 752
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 752
if (c_rt_lib::check_true($memory_12)) {goto label_7;}
#line 753
$memory_4 = $memory_3;
#line 754
goto label_6;
#line 754
label_7:
#line 755
hash::set_value($memory_2, $memory_3, $memory_4);
#line 756
goto label_6;
#line 756
label_6:
#line 756
undef($memory_12);
#line 757
goto label_4;
#line 757
label_5:
#line 758
$memory_12 = "";
#line 758
$memory_4 = $memory_12;
#line 758
undef($memory_12);
#line 759
goto label_4;
#line 759
label_4:
#line 759
undef($memory_11);
#line 760
$memory_11 = $memory_10;
#line 760
$memory_11 = c_rt_lib::ov_is($memory_11, 'goto');
#line 760
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 760
if (c_rt_lib::check_true($memory_11)) {goto label_9;}
#line 761
$memory_12 = $memory_10;
#line 761
$memory_12 = c_rt_lib::ov_as($memory_12, 'goto');
#line 761
$memory_3 = $memory_12;
#line 761
undef($memory_12);
#line 762
hash::set_value($memory_1, $memory_3, $memory_3);
#line 763
goto label_10;
#line 763
label_9:
#line 763
$memory_11 = $memory_10;
#line 763
$memory_11 = c_rt_lib::ov_is($memory_11, 'if_goto');
#line 763
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 763
if (c_rt_lib::check_true($memory_11)) {goto label_10;}
#line 764
$memory_12 = $memory_10;
#line 764
$memory_12 = c_rt_lib::ov_as($memory_12, 'if_goto');
#line 764
$memory_3 = $memory_12;
#line 764
undef($memory_12);
#line 765
$memory_12 = $memory_3->{'dest'};
#line 765
$memory_13 = $memory_3->{'dest'};
#line 765
hash::set_value($memory_1, $memory_12, $memory_13);
#line 765
undef($memory_13);
#line 765
undef($memory_12);
#line 766
goto label_10;
#line 766
label_10:
#line 766
undef($memory_11);
#line 766
undef($memory_10);
#line 767
$memory_6 = $memory_6 + $memory_7;
#line 767
goto label_3;
#line 767
label_1:
#line 767
undef($memory_5);
#line 767
undef($memory_6);
#line 767
undef($memory_7);
#line 767
undef($memory_8);
#line 767
undef($memory_9);
#line 768
$memory_7 = c_rt_lib::init_iter($memory_2);
#line 768
label_13:
#line 768
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 768
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 768
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 768
$memory_6 = c_rt_lib::hash_get_value($memory_2, $memory_5);
#line 769
$memory_8 = hash::has_key($memory_1, $memory_5);
#line 769
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 769
if (c_rt_lib::check_true($memory_8)) {goto label_15;}
#line 770
hash::set_value($memory_1, $memory_6, $memory_6);
#line 771
goto label_15;
#line 771
label_15:
#line 771
undef($memory_8);
#line 772
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 772
goto label_13;
#line 772
label_11:
#line 772
undef($memory_5);
#line 772
undef($memory_6);
#line 772
undef($memory_7);
#line 773
$memory_5 = [];
#line 774
$memory_7 = 0;
#line 774
$memory_8 = 1;
#line 774
$memory_9 = c_rt_lib::array_len($memory_0);
#line 774
label_18:
#line 774
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 774
if (c_rt_lib::check_true($memory_10)) {goto label_16;}
#line 774
$memory_6 = $memory_0->[$memory_7];
#line 775
$memory_11 = $memory_6->{'cmd'};
#line 776
$memory_12 = $memory_11;
#line 776
$memory_12 = c_rt_lib::ov_is($memory_12, 'prt_lbl');
#line 776
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 776
if (c_rt_lib::check_true($memory_12)) {goto label_20;}
#line 777
$memory_13 = $memory_11;
#line 777
$memory_13 = c_rt_lib::ov_as($memory_13, 'prt_lbl');
#line 777
$memory_3 = $memory_13;
#line 777
undef($memory_13);
#line 778
$memory_13 = hash::has_key($memory_2, $memory_3);
#line 778
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 778
if (c_rt_lib::check_true($memory_13)) {goto label_22;}
#line 778
undef($memory_11);
#line 778
undef($memory_12);
#line 778
undef($memory_13);
#line 778
goto label_17;
#line 778
goto label_22;
#line 778
label_22:
#line 778
undef($memory_13);
#line 779
$memory_13 = hash::has_key($memory_1, $memory_3);
#line 779
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 779
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 779
if (c_rt_lib::check_true($memory_13)) {goto label_24;}
#line 779
undef($memory_11);
#line 779
undef($memory_12);
#line 779
undef($memory_13);
#line 779
goto label_17;
#line 779
goto label_24;
#line 779
label_24:
#line 779
undef($memory_13);
#line 780
goto label_28;
#line 780
label_20:
#line 780
$memory_12 = $memory_11;
#line 780
$memory_12 = c_rt_lib::ov_is($memory_12, 'goto');
#line 780
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 780
if (c_rt_lib::check_true($memory_12)) {goto label_25;}
#line 781
$memory_13 = $memory_11;
#line 781
$memory_13 = c_rt_lib::ov_as($memory_13, 'goto');
#line 781
$memory_3 = $memory_13;
#line 781
undef($memory_13);
#line 782
$memory_13 = hash::has_key($memory_2, $memory_3);
#line 782
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 782
if (c_rt_lib::check_true($memory_13)) {goto label_27;}
#line 782
$memory_14 = hash::get_value($memory_2, $memory_3);
#line 782
$memory_3 = $memory_14;
#line 782
undef($memory_14);
#line 782
goto label_27;
#line 782
label_27:
#line 782
undef($memory_13);
#line 783
$memory_13 = c_rt_lib::ov_mk_arg('goto', $memory_3);
#line 783
$memory_11 = $memory_13;
#line 783
undef($memory_13);
#line 784
goto label_28;
#line 784
label_25:
#line 784
$memory_12 = $memory_11;
#line 784
$memory_12 = c_rt_lib::ov_is($memory_12, 'if_goto');
#line 784
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 784
if (c_rt_lib::check_true($memory_12)) {goto label_28;}
#line 785
$memory_13 = $memory_11;
#line 785
$memory_13 = c_rt_lib::ov_as($memory_13, 'if_goto');
#line 785
$memory_3 = $memory_13;
#line 785
undef($memory_13);
#line 786
$memory_14 = $memory_3->{'dest'};
#line 786
$memory_13 = hash::has_key($memory_2, $memory_14);
#line 786
undef($memory_14);
#line 786
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 786
if (c_rt_lib::check_true($memory_13)) {goto label_30;}
#line 786
$memory_15 = $memory_3->{'dest'};
#line 786
$memory_14 = hash::get_value($memory_2, $memory_15);
#line 786
undef($memory_15);
#line 786
$memory_15 = $memory_14;
#line 786
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'dest'} = $memory_15;
#line 786
undef($memory_14);
#line 786
undef($memory_15);
#line 786
goto label_30;
#line 786
label_30:
#line 786
undef($memory_13);
#line 787
$memory_13 = c_rt_lib::ov_mk_arg('if_goto', $memory_3);
#line 787
$memory_11 = $memory_13;
#line 787
undef($memory_13);
#line 788
goto label_28;
#line 788
label_28:
#line 788
undef($memory_12);
#line 789
$memory_12 = $memory_6;
#line 790
$memory_13 = $memory_11;
#line 790
 if (c_rt_lib::get_hashcount($memory_12) > 1) {$memory_12 = {%{$memory_12}};}$memory_12->{'cmd'} = $memory_13;
#line 790
undef($memory_13);
#line 791
array::push($memory_5, $memory_12);
#line 791
undef($memory_11);
#line 791
undef($memory_12);
#line 791
label_17:
#line 792
$memory_7 = $memory_7 + $memory_8;
#line 792
goto label_18;
#line 792
label_16:
#line 792
undef($memory_6);
#line 792
undef($memory_7);
#line 792
undef($memory_8);
#line 792
undef($memory_9);
#line 792
undef($memory_10);
#line 793
$memory_0 = $memory_5;
#line 793
undef($memory_1);
#line 793
undef($memory_2);
#line 793
undef($memory_3);
#line 793
undef($memory_4);
#line 793
undef($memory_5);
#line 793
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
