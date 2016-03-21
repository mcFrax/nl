use c_rt_lib;
use array;
use string;
use ptd;
use nast;
use hash;
use nlasm;
use boolean_t;
use string_utils;
sub translator::function_logic_t;
sub translator::loop;
sub translator::loop_label;
sub translator::state_t;
sub translator::string_t;
sub translator::lvalue_values_t;
sub translator::last_debug_char;
sub translator::translate;
sub translator_priv::print_fun_def;
sub translator_priv::print_array_declaration;
sub translator_priv::print_hash_declaration;
sub translator_priv::print_variant;
sub translator_priv::print_var_decl;
sub translator_priv::load_const;
sub translator::ref_rec_args_t;
sub translator_priv::print_fun_val;
sub translator_priv::print_val;
sub translator_priv::print_variable;
sub translator_priv::print_post_operator;
sub translator_priv::print_unary_op;
sub translator_priv::print_var_op;
sub translator_priv::print_bin_op;
sub translator_priv::print_cmd_array;
sub translator_priv::print_try_ensure;
sub translator_priv::start_new_instruction;
sub translator_priv::print_cmd;
sub translator_priv::print_loop_break;
sub translator_priv::print_if_mod;
sub translator_priv::print_unless_mod;
sub translator_priv::print_if;
sub translator_priv::print_call_base;
sub translator_priv::save_loop_break;
sub translator_priv::print_fora;
sub translator_priv::print_loop;
sub translator_priv::print_rep;
sub translator_priv::print_forh;
sub translator_priv::print_while;
sub translator_priv::print_for;
sub translator_priv::print_match;
sub translator_priv::move;
sub translator_priv::print_bin_op_operator_command;
sub translator_priv::print;
sub translator_priv::print_if_goto;
sub translator_priv::print_get_from_index;
sub translator_priv::print_set_at_index;
sub translator_priv::print_get_value;
sub translator_priv::print_set_value;
sub translator_priv::get_struct_of_lvalue;
sub translator_priv::get_value_of_lvalue;
sub translator_priv::set_value_of_lvalue;
sub translator_priv::make_string;
sub translator_priv::print_ternary_op;
sub translator_priv::print_die;
sub translator_priv::print_return;
sub translator_priv::print_safe_return;
sub translator_priv::convert_str_to_number;
sub translator_priv::dest_val;
sub translator_priv::def_val;
sub translator_priv::calc_val;
sub translator_priv::get_var_register;
sub translator_priv::new_declaration;
sub translator_priv::new_register;
sub translator_priv::save_registers;
sub translator_priv::undef_reg;
sub translator_priv::restore_registers;
sub translator_priv::print_sim_label;
sub translator_priv::get_sim_label;

return 1;

sub translator::__function_logic_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 16
$memory_2 = ptd::sim();
#line 16
$memory_4 = ptd::sim();
#line 16
$memory_3 = ptd::hash($memory_4);
#line 16
undef($memory_4);
#line 16
$memory_1 = {register => $memory_2,variables => $memory_3,};
#line 16
undef($memory_2);
#line 16
undef($memory_3);
#line 16
$memory_0 = ptd::rec($memory_1);
#line 16
undef($memory_1);
#line 16
return $memory_0;
#line 16
undef($memory_0);
#line 16
return;
}

my $_function_logic_t;
sub translator::function_logic_t() {
	$_function_logic_t = translator::__function_logic_t() unless defined $_function_logic_t;
	return $_function_logic_t;
}

sub translator::__loop() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 20
$memory_2 = ptd::sim();
#line 20
$memory_3 = {
	module => "translator",
	name => "function_logic_t",
};
#line 20
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 20
$memory_1 = {label => $memory_2,logic => $memory_3,};
#line 20
undef($memory_2);
#line 20
undef($memory_3);
#line 20
$memory_0 = ptd::rec($memory_1);
#line 20
undef($memory_1);
#line 20
return $memory_0;
#line 20
undef($memory_0);
#line 20
return;
}

my $_loop;
sub translator::loop() {
	$_loop = translator::__loop() unless defined $_loop;
	return $_loop;
}

sub translator::__loop_label() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 24
$memory_2 = {
	module => "translator",
	name => "loop",
};
#line 24
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 24
$memory_3 = {
	module => "translator",
	name => "loop",
};
#line 24
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 24
$memory_1 = {break => $memory_2,continue => $memory_3,};
#line 24
undef($memory_2);
#line 24
undef($memory_3);
#line 24
$memory_0 = ptd::rec($memory_1);
#line 24
undef($memory_1);
#line 24
return $memory_0;
#line 24
undef($memory_0);
#line 24
return;
}

my $_loop_label;
sub translator::loop_label() {
	$_loop_label = translator::__loop_label() unless defined $_loop_label;
	return $_loop_label;
}

sub translator::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 28
$memory_2 = ptd::sim();
#line 28
$memory_3 = {
	module => "nlasm",
	name => "debug_t",
};
#line 28
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 28
$memory_4 = {
	module => "translator",
	name => "function_logic_t",
};
#line 28
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 28
$memory_5 = ptd::sim();
#line 28
$memory_6 = {
	module => "nlasm",
	name => "function_t",
};
#line 28
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 28
$memory_7 = {
	module => "translator",
	name => "loop_label",
};
#line 28
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 28
$memory_1 = {label_nr => $memory_2,debug => $memory_3,logic => $memory_4,module_name => $memory_5,result => $memory_6,loop_label => $memory_7,};
#line 28
undef($memory_2);
#line 28
undef($memory_3);
#line 28
undef($memory_4);
#line 28
undef($memory_5);
#line 28
undef($memory_6);
#line 28
undef($memory_7);
#line 28
$memory_0 = ptd::rec($memory_1);
#line 28
undef($memory_1);
#line 28
return $memory_0;
#line 28
undef($memory_0);
#line 28
return;
}

my $_state_t;
sub translator::state_t() {
	$_state_t = translator::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub translator::__string_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 39
$memory_3 = ptd::sim();
#line 39
$memory_2 = ptd::arr($memory_3);
#line 39
undef($memory_3);
#line 39
$memory_5 = ptd::none();
#line 39
$memory_6 = ptd::none();
#line 39
$memory_4 = {end => $memory_5,new_line => $memory_6,};
#line 39
undef($memory_5);
#line 39
undef($memory_6);
#line 39
$memory_3 = ptd::var($memory_4);
#line 39
undef($memory_4);
#line 39
$memory_1 = {arr => $memory_2,last => $memory_3,};
#line 39
undef($memory_2);
#line 39
undef($memory_3);
#line 39
$memory_0 = ptd::rec($memory_1);
#line 39
undef($memory_1);
#line 39
return $memory_0;
#line 39
undef($memory_0);
#line 39
return;
}

my $_string_t;
sub translator::string_t() {
	$_string_t = translator::__string_t() unless defined $_string_t;
	return $_string_t;
}

sub translator::__lvalue_values_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 43
$memory_3 = {
	module => "nlasm",
	name => "reg_t",
};
#line 43
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 43
$memory_6 = {
	module => "nlasm",
	name => "reg_t",
};
#line 43
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 43
$memory_7 = {
	module => "nlasm",
	name => "reg_t",
};
#line 43
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 43
$memory_5 = {value => $memory_6,index => $memory_7,};
#line 43
undef($memory_6);
#line 43
undef($memory_7);
#line 43
$memory_4 = ptd::rec($memory_5);
#line 43
undef($memory_5);
#line 43
$memory_7 = {
	module => "nlasm",
	name => "reg_t",
};
#line 43
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 43
$memory_8 = ptd::sim();
#line 43
$memory_6 = {value => $memory_7,key => $memory_8,};
#line 43
undef($memory_7);
#line 43
undef($memory_8);
#line 43
$memory_5 = ptd::rec($memory_6);
#line 43
undef($memory_6);
#line 43
$memory_8 = {
	module => "nlasm",
	name => "reg_t",
};
#line 43
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 43
$memory_9 = {
	module => "nlasm",
	name => "reg_t",
};
#line 43
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 43
$memory_7 = {value => $memory_8,key => $memory_9,};
#line 43
undef($memory_8);
#line 43
undef($memory_9);
#line 43
$memory_6 = ptd::rec($memory_7);
#line 43
undef($memory_7);
#line 43
$memory_2 = {value => $memory_3,index => $memory_4,key => $memory_5,hashkey => $memory_6,};
#line 43
undef($memory_3);
#line 43
undef($memory_4);
#line 43
undef($memory_5);
#line 43
undef($memory_6);
#line 43
$memory_1 = ptd::var($memory_2);
#line 43
undef($memory_2);
#line 43
$memory_0 = ptd::arr($memory_1);
#line 43
undef($memory_1);
#line 43
return $memory_0;
#line 43
undef($memory_0);
#line 43
return;
}

my $_lvalue_values_t;
sub translator::lvalue_values_t() {
	$_lvalue_values_t = translator::__lvalue_values_t() unless defined $_lvalue_values_t;
	return $_lvalue_values_t;
}

sub translator::last_debug_char($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 52
$memory_2 = $memory_0->{'end'};
#line 52
$memory_2 = $memory_2->{'line'};
#line 52
$memory_3 = $memory_0->{'end'};
#line 52
$memory_3 = $memory_3->{'position'};
#line 52
$memory_4 = 1;
#line 52
$memory_3 = $memory_3 - $memory_4;
#line 52
undef($memory_4);
#line 52
$memory_1 = {line => $memory_2,position => $memory_3,};
#line 52
undef($memory_2);
#line 52
undef($memory_3);
#line 53
$memory_3 = $memory_0->{'end'};
#line 53
$memory_3 = $memory_3->{'line'};
#line 53
$memory_4 = $memory_0->{'end'};
#line 53
$memory_4 = $memory_4->{'position'};
#line 53
$memory_2 = {line => $memory_3,position => $memory_4,};
#line 53
undef($memory_3);
#line 53
undef($memory_4);
#line 54
$memory_3 = {begin => $memory_1,end => $memory_2,};
#line 54
undef($memory_0);
#line 54
undef($memory_1);
#line 54
undef($memory_2);
#line 54
return $memory_3;
#line 54
undef($memory_3);
#line 54
undef($memory_1);
#line 54
undef($memory_2);
#line 54
undef($memory_0);
#line 54
return;
}

sub translator::translate($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];
#line 58
$memory_2 = $memory_0->{'name'};
#line 58
$memory_3 = [];
#line 58
$memory_4 = [];
#line 58
$memory_1 = {module_name => $memory_2,functions => $memory_3,imports => $memory_4,};
#line 58
undef($memory_2);
#line 58
undef($memory_3);
#line 58
undef($memory_4);
#line 59
$memory_2 = [];
#line 59
$memory_3 = $memory_2;
#line 59
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'imports'} = $memory_3;
#line 59
undef($memory_2);
#line 59
undef($memory_3);
#line 60
$memory_2 = $memory_0->{'import'};
#line 60
$memory_4 = 0;
#line 60
$memory_5 = 1;
#line 60
$memory_6 = c_rt_lib::array_len($memory_2);
#line 60
label_3:
#line 60
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 60
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 60
$memory_3 = $memory_2->[$memory_4];
#line 61
$memory_8 = "imports";
#line 61
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 61
$memory_9 = $memory_3->{'name'};
#line 61
array::push($memory_8, $memory_9);
#line 61
undef($memory_9);
#line 61
$memory_9 = "imports";
#line 61
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 61
undef($memory_9);
#line 61
undef($memory_8);
#line 62
$memory_4 = $memory_4 + $memory_5;
#line 62
goto label_3;
#line 62
label_1:
#line 62
undef($memory_2);
#line 62
undef($memory_3);
#line 62
undef($memory_4);
#line 62
undef($memory_5);
#line 62
undef($memory_6);
#line 62
undef($memory_7);
#line 63
$memory_2 = $memory_0->{'fun_def'};
#line 63
$memory_4 = 0;
#line 63
$memory_5 = 1;
#line 63
$memory_6 = c_rt_lib::array_len($memory_2);
#line 63
label_6:
#line 63
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 63
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 63
$memory_3 = $memory_2->[$memory_4];
#line 64
$memory_9 = {};
#line 64
$memory_10 = 0;
#line 64
$memory_8 = {variables => $memory_9,register => $memory_10,};
#line 64
undef($memory_9);
#line 64
undef($memory_10);
#line 65
$memory_10 = 0;
#line 65
$memory_11 = nlasm::empty_debug();
#line 65
$memory_12 = $memory_0->{'name'};
#line 65
$memory_14 = c_rt_lib::ov_mk_none('none');
#line 65
$memory_15 = $memory_3->{'access'};
#line 65
$memory_16 = 0;
#line 65
$memory_17 = [];
#line 65
$memory_18 = [];
#line 65
$memory_19 = $memory_3->{'name'};
#line 65
$memory_13 = {annotation => $memory_14,access => $memory_15,reg_size => $memory_16,args_type => $memory_17,commands => $memory_18,name => $memory_19,};
#line 65
undef($memory_14);
#line 65
undef($memory_15);
#line 65
undef($memory_16);
#line 65
undef($memory_17);
#line 65
undef($memory_18);
#line 65
undef($memory_19);
#line 65
$memory_16 = "";
#line 65
$memory_15 = {label => $memory_16,logic => $memory_8,};
#line 65
undef($memory_16);
#line 65
$memory_17 = "";
#line 65
$memory_16 = {label => $memory_17,logic => $memory_8,};
#line 65
undef($memory_17);
#line 65
$memory_14 = {break => $memory_15,continue => $memory_16,};
#line 65
undef($memory_15);
#line 65
undef($memory_16);
#line 65
$memory_9 = {label_nr => $memory_10,debug => $memory_11,module_name => $memory_12,logic => $memory_8,result => $memory_13,loop_label => $memory_14,};
#line 65
undef($memory_10);
#line 65
undef($memory_11);
#line 65
undef($memory_12);
#line 65
undef($memory_13);
#line 65
undef($memory_14);
#line 80
translator_priv::print_fun_def($memory_3, $memory_9);
#line 81
$memory_10 = "functions";
#line 81
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 81
$memory_11 = $memory_9->{'result'};
#line 81
array::push($memory_10, $memory_11);
#line 81
undef($memory_11);
#line 81
$memory_11 = "functions";
#line 81
c_rt_lib::set_ref_hash($memory_1, $memory_11, $memory_10);
#line 81
undef($memory_11);
#line 81
undef($memory_10);
#line 81
undef($memory_8);
#line 81
undef($memory_9);
#line 82
$memory_4 = $memory_4 + $memory_5;
#line 82
goto label_6;
#line 82
label_4:
#line 82
undef($memory_2);
#line 82
undef($memory_3);
#line 82
undef($memory_4);
#line 82
undef($memory_5);
#line 82
undef($memory_6);
#line 82
undef($memory_7);
#line 83
undef($memory_0);
#line 83
return $memory_1;
#line 83
undef($memory_1);
#line 83
undef($memory_0);
#line 83
return;
}

sub translator_priv::print_fun_def($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 87
$memory_2 = $memory_0->{'args'};
#line 87
$memory_4 = 0;
#line 87
$memory_5 = 1;
#line 87
$memory_6 = c_rt_lib::array_len($memory_2);
#line 87
label_3:
#line 87
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 87
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 87
$memory_3 = $memory_2->[$memory_4];
#line 88
$memory_8 = $memory_3->{'mod'};
#line 88
$memory_9 = c_rt_lib::ov_is($memory_8, 'none');
#line 88
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 91
$memory_9 = c_rt_lib::ov_is($memory_8, 'ref');
#line 91
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 91
$memory_9 = "NOMATCHALERT";
#line 91
$memory_9 = [$memory_9,$memory_8];
#line 91
die(dfile::ssave($memory_9));
#line 88
label_5:
#line 89
$memory_10 = $memory_3->{'name'};
#line 89
translator_priv::new_declaration($memory_10, $memory_1);
#line 89
undef($memory_10);
#line 90
$memory_10 = "result";
#line 90
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 90
$memory_11 = "args_type";
#line 90
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 90
$memory_12 = c_rt_lib::ov_mk_none('val');
#line 90
array::push($memory_11, $memory_12);
#line 90
undef($memory_12);
#line 90
$memory_12 = "args_type";
#line 90
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 90
$memory_12 = "result";
#line 90
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_10);
#line 90
undef($memory_12);
#line 90
undef($memory_10);
#line 90
undef($memory_11);
#line 91
goto label_4;
#line 91
label_6:
#line 92
$memory_10 = $memory_3->{'name'};
#line 92
translator_priv::new_declaration($memory_10, $memory_1);
#line 92
undef($memory_10);
#line 93
$memory_10 = "result";
#line 93
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 93
$memory_11 = "args_type";
#line 93
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 93
$memory_12 = c_rt_lib::ov_mk_none('ref');
#line 93
array::push($memory_11, $memory_12);
#line 93
undef($memory_12);
#line 93
$memory_12 = "args_type";
#line 93
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 93
$memory_12 = "result";
#line 93
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_10);
#line 93
undef($memory_12);
#line 93
undef($memory_10);
#line 93
undef($memory_11);
#line 94
goto label_4;
#line 94
label_4:
#line 94
undef($memory_8);
#line 94
undef($memory_9);
#line 95
$memory_4 = $memory_4 + $memory_5;
#line 95
goto label_3;
#line 95
label_1:
#line 95
undef($memory_2);
#line 95
undef($memory_3);
#line 95
undef($memory_4);
#line 95
undef($memory_5);
#line 95
undef($memory_6);
#line 95
undef($memory_7);
#line 96
$memory_2 = $memory_0->{'cmd'};
#line 96
translator_priv::print_cmd($memory_2, $memory_1);
#line 96
undef($memory_2);
#line 97
$memory_2 = c_rt_lib::ov_mk_none('nop');
#line 97
translator_priv::print_return($memory_2, $memory_1);
#line 97
undef($memory_2);
#line 97
undef($memory_0);
#line 97
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_array_declaration($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 102
$memory_3 = [];
#line 103
$memory_5 = 0;
#line 103
$memory_6 = 1;
#line 103
$memory_7 = c_rt_lib::array_len($memory_0);
#line 103
label_3:
#line 103
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 103
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 103
$memory_4 = $memory_0->[$memory_5];
#line 104
$memory_9 = translator_priv::calc_val($memory_4, $memory_2);
#line 104
array::push($memory_3, $memory_9);
#line 104
undef($memory_9);
#line 105
$memory_5 = $memory_5 + $memory_6;
#line 105
goto label_3;
#line 105
label_1:
#line 105
undef($memory_4);
#line 105
undef($memory_5);
#line 105
undef($memory_6);
#line 105
undef($memory_7);
#line 105
undef($memory_8);
#line 106
$memory_4 = {dest => $memory_1,src => $memory_3,};
#line 106
$memory_4 = c_rt_lib::ov_mk_arg('arr_decl', $memory_4);
#line 106
translator_priv::print($memory_2, $memory_4);
#line 106
undef($memory_4);
#line 106
undef($memory_3);
#line 106
undef($memory_0);
#line 106
undef($memory_1);
#line 106
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_hash_declaration($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 111
$memory_3 = [];
#line 112
$memory_5 = 0;
#line 112
$memory_6 = 1;
#line 112
$memory_7 = c_rt_lib::array_len($memory_0);
#line 112
label_3:
#line 112
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 112
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 112
$memory_4 = $memory_0->[$memory_5];
#line 113
$memory_10 = $memory_4->{'key'};
#line 113
$memory_10 = c_rt_lib::ov_as($memory_10, 'hash_key');
#line 113
$memory_12 = $memory_4->{'val'};
#line 113
$memory_11 = translator_priv::calc_val($memory_12, $memory_2);
#line 113
undef($memory_12);
#line 113
$memory_9 = {key => $memory_10,val => $memory_11,};
#line 113
undef($memory_10);
#line 113
undef($memory_11);
#line 113
array::push($memory_3, $memory_9);
#line 113
undef($memory_9);
#line 114
$memory_5 = $memory_5 + $memory_6;
#line 114
goto label_3;
#line 114
label_1:
#line 114
undef($memory_4);
#line 114
undef($memory_5);
#line 114
undef($memory_6);
#line 114
undef($memory_7);
#line 114
undef($memory_8);
#line 115
$memory_4 = {dest => $memory_1,src => $memory_3,};
#line 115
$memory_4 = c_rt_lib::ov_mk_arg('hash_decl', $memory_4);
#line 115
translator_priv::print($memory_2, $memory_4);
#line 115
undef($memory_4);
#line 115
undef($memory_3);
#line 115
undef($memory_0);
#line 115
undef($memory_1);
#line 115
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_variant($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 119
$memory_3 = c_rt_lib::ov_mk_none('emp');
#line 120
$memory_4 = $memory_0->{'var'};
#line 120
$memory_4 = c_rt_lib::ov_is($memory_4, 'nop');
#line 120
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 120
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 120
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 121
$memory_6 = $memory_0->{'var'};
#line 121
$memory_5 = translator_priv::dest_val($memory_6, $memory_1, $memory_2);
#line 121
undef($memory_6);
#line 121
$memory_5 = c_rt_lib::ov_mk_arg('arg', $memory_5);
#line 121
$memory_3 = $memory_5;
#line 121
undef($memory_5);
#line 122
goto label_2;
#line 122
label_2:
#line 122
undef($memory_4);
#line 123
$memory_5 = $memory_0->{'name'};
#line 123
$memory_4 = {dest => $memory_1,src => $memory_3,name => $memory_5,};
#line 123
undef($memory_5);
#line 123
$memory_4 = c_rt_lib::ov_mk_arg('ov_mk', $memory_4);
#line 123
translator_priv::print($memory_2, $memory_4);
#line 123
undef($memory_4);
#line 123
undef($memory_3);
#line 123
undef($memory_0);
#line 123
undef($memory_1);
#line 123
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_var_decl($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 127
$memory_3 = $memory_0->{'name'};
#line 127
$memory_2 = translator_priv::new_declaration($memory_3, $memory_1);
#line 127
undef($memory_3);
#line 128
$memory_3 = $memory_0->{'value'};
#line 128
$memory_4 = c_rt_lib::ov_is($memory_3, 'none');
#line 128
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 129
$memory_4 = c_rt_lib::ov_is($memory_3, 'value');
#line 129
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 129
$memory_4 = "NOMATCHALERT";
#line 129
$memory_4 = [$memory_4,$memory_3];
#line 129
die(dfile::ssave($memory_4));
#line 128
label_2:
#line 129
goto label_1;
#line 129
label_3:
#line 129
$memory_5 = c_rt_lib::ov_as($memory_3, 'value');
#line 130
translator_priv::print_val($memory_5, $memory_2, $memory_1);
#line 130
undef($memory_5);
#line 131
goto label_1;
#line 131
label_1:
#line 131
undef($memory_3);
#line 131
undef($memory_4);
#line 132
undef($memory_0);
#line 132
$_[1] = $memory_1;return $memory_2;
#line 132
undef($memory_2);
#line 132
undef($memory_0);
#line 132
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::load_const($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 136
$memory_3 = {dest => $memory_1,val => $memory_0,};
#line 136
$memory_3 = c_rt_lib::ov_mk_arg('load_const', $memory_3);
#line 136
translator_priv::print($memory_2, $memory_3);
#line 136
undef($memory_3);
#line 136
undef($memory_0);
#line 136
undef($memory_1);
#line 136
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator::__ref_rec_args_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 140
$memory_3 = ptd::sim();
#line 140
$memory_4 = ptd::sim();
#line 140
$memory_5 = ptd::sim();
#line 140
$memory_2 = {var_name => $memory_3,list_name => $memory_4,lvalue_var_name => $memory_5,};
#line 140
undef($memory_3);
#line 140
undef($memory_4);
#line 140
undef($memory_5);
#line 140
$memory_1 = ptd::rec($memory_2);
#line 140
undef($memory_2);
#line 140
$memory_0 = ptd::arr($memory_1);
#line 140
undef($memory_1);
#line 140
return $memory_0;
#line 140
undef($memory_0);
#line 140
return;
}

my $_ref_rec_args_t;
sub translator::ref_rec_args_t() {
	$_ref_rec_args_t = translator::__ref_rec_args_t() unless defined $_ref_rec_args_t;
	return $_ref_rec_args_t;
}

sub translator_priv::print_fun_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 144
$memory_3 = [];
#line 145
$memory_4 = {};
#line 146
$memory_5 = {};
#line 147
$memory_6 = {};
#line 148
$memory_8 = $memory_0->{'args'};
#line 148
$memory_7 = array::len($memory_8);
#line 148
undef($memory_8);
#line 148
$memory_8 = 1;
#line 148
$memory_7 = $memory_7 - $memory_8;
#line 148
undef($memory_8);
#line 148
label_2:
#line 148
$memory_8 = 0;
#line 148
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 148
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 148
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 149
$memory_9 = $memory_0->{'args'};
#line 149
$memory_9 = $memory_9->[$memory_7];
#line 149
$memory_9 = $memory_9->{'mod'};
#line 149
$memory_9 = c_rt_lib::ov_is($memory_9, 'ref');
#line 149
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 149
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 149
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 149
undef($memory_9);
#line 149
goto label_3;
#line 149
goto label_5;
#line 149
label_5:
#line 149
undef($memory_9);
#line 150
$memory_9 = $memory_0->{'args'};
#line 150
$memory_9 = $memory_9->[$memory_7];
#line 150
$memory_9 = $memory_9->{'val'};
#line 151
translator_priv::get_struct_of_lvalue($memory_9);
#line 152
$memory_11 = $memory_9;
#line 152
$memory_11 = c_rt_lib::ov_as($memory_11, 'var');
#line 152
$memory_10 = hash::has_key($memory_6, $memory_11);
#line 152
undef($memory_11);
#line 152
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 152
if (c_rt_lib::check_true($memory_10)) {goto label_7;}
#line 152
undef($memory_9);
#line 152
undef($memory_10);
#line 152
goto label_3;
#line 152
goto label_7;
#line 152
label_7:
#line 152
undef($memory_10);
#line 153
$memory_10 = $memory_9;
#line 153
$memory_10 = c_rt_lib::ov_as($memory_10, 'var');
#line 153
$memory_11 = 0;
#line 153
hash::set_value($memory_6, $memory_10, $memory_11);
#line 153
undef($memory_11);
#line 153
undef($memory_10);
#line 154
$memory_10 = 0;
#line 154
hash::set_value($memory_5, $memory_7, $memory_10);
#line 154
undef($memory_10);
#line 154
undef($memory_9);
#line 154
label_3:
#line 154
$memory_9 = 1;
#line 154
$memory_7 = $memory_7 - $memory_9;
#line 154
undef($memory_9);
#line 155
goto label_2;
#line 155
label_1:
#line 155
undef($memory_7);
#line 155
undef($memory_8);
#line 156
$memory_7 = [];
#line 157
$memory_9 = $memory_0->{'args'};
#line 157
$memory_8 = array::len($memory_9);
#line 157
undef($memory_9);
#line 157
$memory_9 = 0;
#line 157
$memory_10 = 1;
#line 157
label_10:
#line 157
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 157
if (c_rt_lib::check_true($memory_11)) {goto label_8;}
#line 158
$memory_12 = $memory_0->{'args'};
#line 158
$memory_12 = $memory_12->[$memory_9];
#line 159
$memory_13 = $memory_12->{'mod'};
#line 159
$memory_14 = c_rt_lib::ov_is($memory_13, 'none');
#line 159
if (c_rt_lib::check_true($memory_14)) {goto label_12;}
#line 161
$memory_14 = c_rt_lib::ov_is($memory_13, 'ref');
#line 161
if (c_rt_lib::check_true($memory_14)) {goto label_13;}
#line 161
$memory_14 = "NOMATCHALERT";
#line 161
$memory_14 = [$memory_14,$memory_13];
#line 161
die(dfile::ssave($memory_14));
#line 159
label_12:
#line 160
$memory_16 = $memory_12->{'val'};
#line 160
$memory_15 = translator_priv::calc_val($memory_16, $memory_2);
#line 160
undef($memory_16);
#line 160
$memory_15 = c_rt_lib::ov_mk_arg('val', $memory_15);
#line 160
array::push($memory_3, $memory_15);
#line 160
undef($memory_15);
#line 161
goto label_11;
#line 161
label_13:
#line 162
$memory_15 = hash::has_key($memory_5, $memory_9);
#line 162
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 162
if (c_rt_lib::check_true($memory_15)) {goto label_15;}
#line 163
$memory_17 = $memory_12->{'val'};
#line 163
$memory_18 = c_rt_lib::to_nl(1);
#line 163
$memory_16 = translator_priv::get_value_of_lvalue($memory_17, $memory_18, $memory_2);
#line 163
undef($memory_18);
#line 163
undef($memory_17);
#line 164
$memory_18 = array::len($memory_16);
#line 164
$memory_19 = 1;
#line 164
$memory_18 = $memory_18 - $memory_19;
#line 164
undef($memory_19);
#line 164
$memory_17 = $memory_16->[$memory_18];
#line 164
undef($memory_18);
#line 164
$memory_17 = c_rt_lib::ov_as($memory_17, 'value');
#line 165
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_17);
#line 165
array::push($memory_3, $memory_18);
#line 165
undef($memory_18);
#line 166
hash::set_value($memory_4, $memory_9, $memory_16);
#line 166
undef($memory_16);
#line 166
undef($memory_17);
#line 167
goto label_14;
#line 167
label_15:
#line 168
$memory_16 = translator_priv::new_register($memory_2);
#line 169
$memory_17 = $memory_12->{'val'};
#line 169
translator_priv::print_val($memory_17, $memory_16, $memory_2);
#line 169
undef($memory_17);
#line 170
$memory_17 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 170
array::push($memory_3, $memory_17);
#line 170
undef($memory_17);
#line 170
undef($memory_16);
#line 171
goto label_14;
#line 171
label_14:
#line 171
undef($memory_15);
#line 172
goto label_11;
#line 172
label_11:
#line 172
undef($memory_13);
#line 172
undef($memory_14);
#line 173
$memory_13 = translator_priv::save_registers($memory_2);
#line 173
array::push($memory_7, $memory_13);
#line 173
undef($memory_13);
#line 173
undef($memory_12);
#line 174
$memory_9 = $memory_9 + $memory_10;
#line 174
goto label_10;
#line 174
label_8:
#line 174
undef($memory_8);
#line 174
undef($memory_9);
#line 174
undef($memory_10);
#line 174
undef($memory_11);
#line 175
$memory_9 = $memory_0->{'module'};
#line 175
$memory_10 = $memory_0->{'name'};
#line 175
$memory_8 = {dest => $memory_1,mod => $memory_9,fun_name => $memory_10,args => $memory_3,};
#line 175
undef($memory_9);
#line 175
undef($memory_10);
#line 175
$memory_8 = c_rt_lib::ov_mk_arg('call', $memory_8);
#line 175
translator_priv::print($memory_2, $memory_8);
#line 175
undef($memory_8);
#line 176
$memory_8 = array::len($memory_7);
#line 176
$memory_9 = 1;
#line 176
$memory_8 = $memory_8 - $memory_9;
#line 176
undef($memory_9);
#line 176
label_17:
#line 176
$memory_9 = 0;
#line 176
$memory_9 = c_rt_lib::to_nl($memory_8 >= $memory_9);
#line 176
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 176
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 177
$memory_10 = $memory_7->[$memory_8];
#line 177
translator_priv::restore_registers($memory_10, $memory_2);
#line 177
undef($memory_10);
#line 178
$memory_10 = hash::has_key($memory_4, $memory_8);
#line 178
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 178
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 178
if (c_rt_lib::check_true($memory_10)) {goto label_20;}
#line 178
undef($memory_10);
#line 178
goto label_18;
#line 178
goto label_20;
#line 178
label_20:
#line 178
undef($memory_10);
#line 179
$memory_10 = hash::get_value($memory_4, $memory_8);
#line 179
$memory_11 = c_rt_lib::to_nl(1);
#line 179
translator_priv::set_value_of_lvalue($memory_10, $memory_11, $memory_2);
#line 179
undef($memory_11);
#line 179
undef($memory_10);
#line 179
label_18:
#line 179
$memory_10 = 1;
#line 179
$memory_8 = $memory_8 - $memory_10;
#line 179
undef($memory_10);
#line 180
goto label_17;
#line 180
label_16:
#line 180
undef($memory_8);
#line 180
undef($memory_9);
#line 180
undef($memory_3);
#line 180
undef($memory_4);
#line 180
undef($memory_5);
#line 180
undef($memory_6);
#line 180
undef($memory_7);
#line 180
undef($memory_0);
#line 180
undef($memory_1);
#line 180
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 184
$memory_3 = translator_priv::save_registers($memory_2);
#line 185
$memory_4 = c_rt_lib::ov_is($memory_0, 'const');
#line 185
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 187
$memory_4 = c_rt_lib::ov_is($memory_0, 'string');
#line 187
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 189
$memory_4 = c_rt_lib::ov_is($memory_0, 'ternary_op');
#line 189
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 191
$memory_4 = c_rt_lib::ov_is($memory_0, 'hash_key');
#line 191
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 193
$memory_4 = c_rt_lib::ov_is($memory_0, 'variant');
#line 193
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 195
$memory_4 = c_rt_lib::ov_is($memory_0, 'var');
#line 195
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 197
$memory_4 = c_rt_lib::ov_is($memory_0, 'parenthesis');
#line 197
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 199
$memory_4 = c_rt_lib::ov_is($memory_0, 'bin_op');
#line 199
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 201
$memory_4 = c_rt_lib::ov_is($memory_0, 'var_op');
#line 201
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 203
$memory_4 = c_rt_lib::ov_is($memory_0, 'unary_op');
#line 203
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 205
$memory_4 = c_rt_lib::ov_is($memory_0, 'fun_val');
#line 205
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 207
$memory_4 = c_rt_lib::ov_is($memory_0, 'arr_decl');
#line 207
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 209
$memory_4 = c_rt_lib::ov_is($memory_0, 'hash_decl');
#line 209
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 211
$memory_4 = c_rt_lib::ov_is($memory_0, 'nop');
#line 211
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 212
$memory_4 = c_rt_lib::ov_is($memory_0, 'fun_label');
#line 212
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 214
$memory_4 = c_rt_lib::ov_is($memory_0, 'post_inc');
#line 214
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 216
$memory_4 = c_rt_lib::ov_is($memory_0, 'post_dec');
#line 216
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 216
$memory_4 = "NOMATCHALERT";
#line 216
$memory_4 = [$memory_4,$memory_0];
#line 216
die(dfile::ssave($memory_4));
#line 185
label_2:
#line 185
$memory_5 = c_rt_lib::ov_as($memory_0, 'const');
#line 186
$memory_6 = translator_priv::convert_str_to_number($memory_5);
#line 186
translator_priv::load_const($memory_6, $memory_1, $memory_2);
#line 186
undef($memory_6);
#line 186
undef($memory_5);
#line 187
goto label_1;
#line 187
label_3:
#line 187
$memory_5 = c_rt_lib::ov_as($memory_0, 'string');
#line 188
$memory_6 = translator_priv::make_string($memory_5, $memory_2);
#line 188
translator_priv::load_const($memory_6, $memory_1, $memory_2);
#line 188
undef($memory_6);
#line 188
undef($memory_5);
#line 189
goto label_1;
#line 189
label_4:
#line 189
$memory_5 = c_rt_lib::ov_as($memory_0, 'ternary_op');
#line 190
translator_priv::print_ternary_op($memory_5, $memory_1, $memory_2);
#line 190
undef($memory_5);
#line 191
goto label_1;
#line 191
label_5:
#line 191
$memory_5 = c_rt_lib::ov_as($memory_0, 'hash_key');
#line 192
$memory_6 = [];
#line 192
die(dfile::ssave($memory_6));
#line 192
undef($memory_6);
#line 192
undef($memory_5);
#line 193
goto label_1;
#line 193
label_6:
#line 193
$memory_5 = c_rt_lib::ov_as($memory_0, 'variant');
#line 194
translator_priv::print_variant($memory_5, $memory_1, $memory_2);
#line 194
undef($memory_5);
#line 195
goto label_1;
#line 195
label_7:
#line 195
$memory_5 = c_rt_lib::ov_as($memory_0, 'var');
#line 196
translator_priv::print_variable($memory_5, $memory_1, $memory_2);
#line 196
undef($memory_5);
#line 197
goto label_1;
#line 197
label_8:
#line 197
$memory_5 = c_rt_lib::ov_as($memory_0, 'parenthesis');
#line 198
translator_priv::print_val($memory_5, $memory_1, $memory_2);
#line 198
undef($memory_5);
#line 199
goto label_1;
#line 199
label_9:
#line 199
$memory_5 = c_rt_lib::ov_as($memory_0, 'bin_op');
#line 200
translator_priv::print_bin_op($memory_5, $memory_1, $memory_2);
#line 200
undef($memory_5);
#line 201
goto label_1;
#line 201
label_10:
#line 201
$memory_5 = c_rt_lib::ov_as($memory_0, 'var_op');
#line 202
translator_priv::print_var_op($memory_5, $memory_1, $memory_2);
#line 202
undef($memory_5);
#line 203
goto label_1;
#line 203
label_11:
#line 203
$memory_5 = c_rt_lib::ov_as($memory_0, 'unary_op');
#line 204
translator_priv::print_unary_op($memory_5, $memory_1, $memory_2);
#line 204
undef($memory_5);
#line 205
goto label_1;
#line 205
label_12:
#line 205
$memory_5 = c_rt_lib::ov_as($memory_0, 'fun_val');
#line 206
translator_priv::print_fun_val($memory_5, $memory_1, $memory_2);
#line 206
undef($memory_5);
#line 207
goto label_1;
#line 207
label_13:
#line 207
$memory_5 = c_rt_lib::ov_as($memory_0, 'arr_decl');
#line 208
translator_priv::print_array_declaration($memory_5, $memory_1, $memory_2);
#line 208
undef($memory_5);
#line 209
goto label_1;
#line 209
label_14:
#line 209
$memory_5 = c_rt_lib::ov_as($memory_0, 'hash_decl');
#line 210
translator_priv::print_hash_declaration($memory_5, $memory_1, $memory_2);
#line 210
undef($memory_5);
#line 211
goto label_1;
#line 211
label_15:
#line 212
goto label_1;
#line 212
label_16:
#line 212
$memory_5 = c_rt_lib::ov_as($memory_0, 'fun_label');
#line 213
$memory_6 = [];
#line 213
die(dfile::ssave($memory_6));
#line 213
undef($memory_6);
#line 213
undef($memory_5);
#line 214
goto label_1;
#line 214
label_17:
#line 214
$memory_5 = c_rt_lib::ov_as($memory_0, 'post_inc');
#line 215
$memory_6 = "++";
#line 215
translator_priv::print_post_operator($memory_5, $memory_6, $memory_1, $memory_2);
#line 215
undef($memory_6);
#line 215
undef($memory_5);
#line 216
goto label_1;
#line 216
label_18:
#line 216
$memory_5 = c_rt_lib::ov_as($memory_0, 'post_dec');
#line 217
$memory_6 = "--";
#line 217
translator_priv::print_post_operator($memory_5, $memory_6, $memory_1, $memory_2);
#line 217
undef($memory_6);
#line 217
undef($memory_5);
#line 218
goto label_1;
#line 218
label_1:
#line 218
undef($memory_4);
#line 219
translator_priv::restore_registers($memory_3, $memory_2);
#line 219
undef($memory_3);
#line 219
undef($memory_0);
#line 219
undef($memory_1);
#line 219
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_variable($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 223
$memory_3 = translator_priv::get_var_register($memory_0, $memory_2);
#line 223
translator_priv::move($memory_1, $memory_3, $memory_2);
#line 223
undef($memory_3);
#line 223
undef($memory_0);
#line 223
undef($memory_1);
#line 223
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_post_operator($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 228
$memory_5 = c_rt_lib::to_nl(1);
#line 228
$memory_4 = translator_priv::get_value_of_lvalue($memory_0, $memory_5, $memory_3);
#line 228
undef($memory_5);
#line 229
$memory_6 = array::len($memory_4);
#line 229
$memory_7 = 1;
#line 229
$memory_6 = $memory_6 - $memory_7;
#line 229
undef($memory_7);
#line 229
$memory_5 = $memory_4->[$memory_6];
#line 229
undef($memory_6);
#line 229
$memory_5 = c_rt_lib::ov_as($memory_5, 'value');
#line 230
translator_priv::move($memory_2, $memory_5, $memory_3);
#line 231
$memory_7 = 1;
#line 231
$memory_7 = c_rt_lib::ov_mk_arg('const', $memory_7);
#line 231
$memory_6 = translator_priv::calc_val($memory_7, $memory_3);
#line 231
undef($memory_7);
#line 232
$memory_7 = "++";
#line 232
$memory_7 = c_rt_lib::to_nl($memory_1 eq $memory_7);
#line 232
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 232
$memory_7 = "-";
#line 232
goto label_1;
#line 232
label_2:
#line 232
$memory_7 = "+";
#line 232
label_1:
#line 232
translator_priv::print_bin_op_operator_command($memory_5, $memory_5, $memory_6, $memory_7, $memory_3);
#line 232
undef($memory_7);
#line 233
$memory_7 = c_rt_lib::to_nl(1);
#line 233
translator_priv::set_value_of_lvalue($memory_4, $memory_7, $memory_3);
#line 233
undef($memory_7);
#line 233
undef($memory_4);
#line 233
undef($memory_5);
#line 233
undef($memory_6);
#line 233
undef($memory_0);
#line 233
undef($memory_1);
#line 233
undef($memory_2);
#line 233
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_unary_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 237
$memory_3 = $memory_0->{'op'};
#line 237
$memory_4 = "!";
#line 237
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 237
undef($memory_4);
#line 237
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 237
$memory_3 = $memory_0->{'op'};
#line 237
$memory_4 = "-";
#line 237
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 237
undef($memory_4);
#line 237
label_4:
#line 237
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 237
$memory_3 = $memory_0->{'op'};
#line 237
$memory_4 = "+";
#line 237
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 237
undef($memory_4);
#line 237
label_3:
#line 237
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 237
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 238
$memory_4 = "";
#line 238
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 238
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 238
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 238
undef($memory_0);
#line 238
undef($memory_1);
#line 238
undef($memory_3);
#line 238
undef($memory_4);
#line 238
$_[2] = $memory_2;return;
#line 238
goto label_6;
#line 238
label_6:
#line 238
undef($memory_4);
#line 239
$memory_4 = $memory_0->{'val'};
#line 239
translator_priv::print_val($memory_4, $memory_1, $memory_2);
#line 239
undef($memory_4);
#line 240
$memory_5 = $memory_0->{'op'};
#line 240
$memory_4 = {dest => $memory_1,src => $memory_1,op => $memory_5,};
#line 240
undef($memory_5);
#line 240
$memory_4 = c_rt_lib::ov_mk_arg('una_op', $memory_4);
#line 240
translator_priv::print($memory_2, $memory_4);
#line 240
undef($memory_4);
#line 241
goto label_1;
#line 241
label_2:
#line 241
$memory_3 = $memory_0->{'op'};
#line 241
$memory_4 = "++";
#line 241
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 241
undef($memory_4);
#line 241
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 241
$memory_3 = $memory_0->{'op'};
#line 241
$memory_4 = "--";
#line 241
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 241
undef($memory_4);
#line 241
label_8:
#line 241
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 241
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 242
$memory_5 = $memory_0->{'val'};
#line 242
$memory_6 = c_rt_lib::to_nl(1);
#line 242
$memory_4 = translator_priv::get_value_of_lvalue($memory_5, $memory_6, $memory_2);
#line 242
undef($memory_6);
#line 242
undef($memory_5);
#line 243
$memory_6 = array::len($memory_4);
#line 243
$memory_7 = 1;
#line 243
$memory_6 = $memory_6 - $memory_7;
#line 243
undef($memory_7);
#line 243
$memory_5 = $memory_4->[$memory_6];
#line 243
undef($memory_6);
#line 243
$memory_5 = c_rt_lib::ov_as($memory_5, 'value');
#line 244
$memory_7 = 1;
#line 244
$memory_7 = c_rt_lib::ov_mk_arg('const', $memory_7);
#line 244
$memory_6 = translator_priv::dest_val($memory_7, $memory_1, $memory_2);
#line 244
undef($memory_7);
#line 245
$memory_7 = $memory_0->{'op'};
#line 245
$memory_8 = "++";
#line 245
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 245
undef($memory_8);
#line 245
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 245
$memory_7 = "-";
#line 245
goto label_9;
#line 245
label_10:
#line 245
$memory_7 = "+";
#line 245
label_9:
#line 245
translator_priv::print_bin_op_operator_command($memory_5, $memory_5, $memory_6, $memory_7, $memory_2);
#line 245
undef($memory_7);
#line 246
translator_priv::move($memory_1, $memory_5, $memory_2);
#line 247
$memory_7 = c_rt_lib::to_nl(1);
#line 247
translator_priv::set_value_of_lvalue($memory_4, $memory_7, $memory_2);
#line 247
undef($memory_7);
#line 247
undef($memory_4);
#line 247
undef($memory_5);
#line 247
undef($memory_6);
#line 248
goto label_1;
#line 248
label_7:
#line 248
$memory_3 = $memory_0->{'op'};
#line 248
$memory_4 = "\@";
#line 248
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 248
undef($memory_4);
#line 248
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 248
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 249
$memory_4 = "";
#line 249
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 249
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 249
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 249
undef($memory_0);
#line 249
undef($memory_1);
#line 249
undef($memory_3);
#line 249
undef($memory_4);
#line 249
$_[2] = $memory_2;return;
#line 249
goto label_13;
#line 249
label_13:
#line 249
undef($memory_4);
#line 250
$memory_4 = $memory_0->{'val'};
#line 250
$memory_4 = c_rt_lib::ov_as($memory_4, 'fun_label');
#line 251
$memory_6 = $memory_4->{'module'};
#line 251
$memory_7 = $memory_4->{'name'};
#line 251
$memory_5 = {dest => $memory_1,module => $memory_6,name => $memory_7,};
#line 251
undef($memory_6);
#line 251
undef($memory_7);
#line 251
$memory_5 = c_rt_lib::ov_mk_arg('func', $memory_5);
#line 251
translator_priv::print($memory_2, $memory_5);
#line 251
undef($memory_5);
#line 252
$memory_6 = c_rt_lib::ov_mk_arg('arg', $memory_1);
#line 252
$memory_7 = "ref";
#line 252
$memory_5 = {dest => $memory_1,src => $memory_6,name => $memory_7,};
#line 252
undef($memory_6);
#line 252
undef($memory_7);
#line 252
$memory_5 = c_rt_lib::ov_mk_arg('ov_mk', $memory_5);
#line 252
translator_priv::print($memory_2, $memory_5);
#line 252
undef($memory_5);
#line 252
undef($memory_4);
#line 253
goto label_1;
#line 253
label_11:
#line 254
$memory_4 = [];
#line 254
die(dfile::ssave($memory_4));
#line 254
undef($memory_4);
#line 255
goto label_1;
#line 255
label_1:
#line 255
undef($memory_3);
#line 255
undef($memory_0);
#line 255
undef($memory_1);
#line 255
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_var_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 259
$memory_3 = "";
#line 259
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 259
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 259
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 259
undef($memory_0);
#line 259
undef($memory_1);
#line 259
undef($memory_3);
#line 259
$_[2] = $memory_2;return;
#line 259
goto label_2;
#line 259
label_2:
#line 259
undef($memory_3);
#line 260
$memory_3 = $memory_0->{'left'};
#line 260
translator_priv::print_val($memory_3, $memory_1, $memory_2);
#line 260
undef($memory_3);
#line 262
$memory_4 = $memory_0->{'op'};
#line 262
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_is');
#line 262
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 264
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_as');
#line 264
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 264
$memory_5 = "NOMATCHALERT";
#line 264
$memory_5 = [$memory_5,$memory_4];
#line 264
die(dfile::ssave($memory_5));
#line 262
label_4:
#line 263
$memory_7 = $memory_0->{'case'};
#line 263
$memory_6 = {dest => $memory_1,src => $memory_1,type => $memory_7,};
#line 263
undef($memory_7);
#line 263
$memory_6 = c_rt_lib::ov_mk_arg('ov_is', $memory_6);
#line 263
$memory_3 = $memory_6;
#line 263
undef($memory_6);
#line 264
goto label_3;
#line 264
label_5:
#line 265
$memory_7 = $memory_0->{'case'};
#line 265
$memory_6 = {dest => $memory_1,src => $memory_1,type => $memory_7,};
#line 265
undef($memory_7);
#line 265
$memory_6 = c_rt_lib::ov_mk_arg('ov_as', $memory_6);
#line 265
$memory_3 = $memory_6;
#line 265
undef($memory_6);
#line 266
goto label_3;
#line 266
label_3:
#line 266
undef($memory_4);
#line 266
undef($memory_5);
#line 267
translator_priv::print($memory_2, $memory_3);
#line 267
undef($memory_3);
#line 267
undef($memory_0);
#line 267
undef($memory_1);
#line 267
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_bin_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 271
$memory_3 = $memory_0->{'op'};
#line 271
$memory_4 = "=";
#line 271
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 271
undef($memory_4);
#line 271
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 271
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 272
$memory_5 = $memory_0->{'right'};
#line 272
$memory_4 = translator_priv::dest_val($memory_5, $memory_1, $memory_2);
#line 272
undef($memory_5);
#line 273
$memory_6 = $memory_0->{'left'};
#line 273
$memory_7 = c_rt_lib::to_nl(0);
#line 273
$memory_5 = translator_priv::get_value_of_lvalue($memory_6, $memory_7, $memory_2);
#line 273
undef($memory_7);
#line 273
undef($memory_6);
#line 274
$memory_7 = array::len($memory_5);
#line 274
$memory_8 = 1;
#line 274
$memory_7 = $memory_7 - $memory_8;
#line 274
undef($memory_8);
#line 274
$memory_6 = $memory_5->[$memory_7];
#line 274
undef($memory_7);
#line 274
$memory_6 = c_rt_lib::ov_as($memory_6, 'value');
#line 275
translator_priv::move($memory_6, $memory_4, $memory_2);
#line 276
translator_priv::move($memory_1, $memory_6, $memory_2);
#line 277
$memory_7 = c_rt_lib::to_nl(0);
#line 277
translator_priv::set_value_of_lvalue($memory_5, $memory_7, $memory_2);
#line 277
undef($memory_7);
#line 277
undef($memory_4);
#line 277
undef($memory_5);
#line 277
undef($memory_6);
#line 278
goto label_1;
#line 278
label_2:
#line 278
$memory_3 = $memory_0->{'op'};
#line 278
$memory_4 = "[]=";
#line 278
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 278
undef($memory_4);
#line 278
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 278
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 279
$memory_5 = "array_push";
#line 279
$memory_6 = "c_rt_lib";
#line 279
$memory_9 = $memory_0->{'left'};
#line 279
$memory_10 = c_rt_lib::ov_mk_none('ref');
#line 279
$memory_8 = {val => $memory_9,mod => $memory_10,};
#line 279
undef($memory_9);
#line 279
undef($memory_10);
#line 279
$memory_10 = $memory_0->{'right'};
#line 279
$memory_11 = c_rt_lib::ov_mk_none('none');
#line 279
$memory_9 = {val => $memory_10,mod => $memory_11,};
#line 279
undef($memory_10);
#line 279
undef($memory_11);
#line 279
$memory_7 = [$memory_8,$memory_9];
#line 279
undef($memory_8);
#line 279
undef($memory_9);
#line 279
$memory_4 = {name => $memory_5,module => $memory_6,args => $memory_7,};
#line 279
undef($memory_5);
#line 279
undef($memory_6);
#line 279
undef($memory_7);
#line 279
translator_priv::print_fun_val($memory_4, $memory_1, $memory_2);
#line 279
undef($memory_4);
#line 284
goto label_1;
#line 284
label_3:
#line 284
$memory_3 = $memory_0->{'op'};
#line 284
$memory_4 = "ARRAY_INDEX";
#line 284
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 284
undef($memory_4);
#line 284
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 284
$memory_3 = $memory_0->{'op'};
#line 284
$memory_4 = "HASH_INDEX";
#line 284
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 284
undef($memory_4);
#line 284
label_6:
#line 284
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 284
$memory_3 = $memory_0->{'op'};
#line 284
$memory_4 = "->";
#line 284
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 284
undef($memory_4);
#line 284
label_5:
#line 284
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 284
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 285
$memory_5 = $memory_0->{'left'};
#line 285
$memory_4 = translator_priv::dest_val($memory_5, $memory_1, $memory_2);
#line 285
undef($memory_5);
#line 286
$memory_5 = $memory_0->{'op'};
#line 286
$memory_6 = "ARRAY_INDEX";
#line 286
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 286
undef($memory_6);
#line 286
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 286
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 287
$memory_7 = $memory_0->{'right'};
#line 287
$memory_6 = translator_priv::calc_val($memory_7, $memory_2);
#line 287
undef($memory_7);
#line 288
translator_priv::print_get_from_index($memory_1, $memory_4, $memory_6, $memory_2);
#line 288
undef($memory_6);
#line 289
goto label_7;
#line 289
label_8:
#line 289
$memory_5 = $memory_0->{'op'};
#line 289
$memory_6 = "HASH_INDEX";
#line 289
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 289
undef($memory_6);
#line 289
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 289
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 290
$memory_7 = $memory_0->{'right'};
#line 290
$memory_6 = translator_priv::calc_val($memory_7, $memory_2);
#line 290
undef($memory_7);
#line 291
$memory_7 = "hash_get_value";
#line 291
$memory_9 = c_rt_lib::ov_mk_arg('val', $memory_4);
#line 291
$memory_10 = c_rt_lib::ov_mk_arg('val', $memory_6);
#line 291
$memory_8 = [$memory_9,$memory_10];
#line 291
undef($memory_9);
#line 291
undef($memory_10);
#line 291
translator_priv::print_call_base($memory_1, $memory_7, $memory_8, $memory_2);
#line 291
undef($memory_8);
#line 291
undef($memory_7);
#line 291
undef($memory_6);
#line 292
goto label_7;
#line 292
label_9:
#line 293
$memory_6 = $memory_0->{'right'};
#line 293
$memory_6 = c_rt_lib::ov_as($memory_6, 'hash_key');
#line 293
translator_priv::print_get_value($memory_1, $memory_4, $memory_6, $memory_2);
#line 293
undef($memory_6);
#line 294
goto label_7;
#line 294
label_7:
#line 294
undef($memory_5);
#line 294
undef($memory_4);
#line 295
goto label_1;
#line 295
label_4:
#line 295
$memory_3 = $memory_0->{'op'};
#line 295
$memory_4 = "+=";
#line 295
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 295
undef($memory_4);
#line 295
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 295
$memory_3 = $memory_0->{'op'};
#line 295
$memory_4 = "-=";
#line 295
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 295
undef($memory_4);
#line 295
label_14:
#line 295
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 295
$memory_3 = $memory_0->{'op'};
#line 295
$memory_4 = "/=";
#line 295
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 295
undef($memory_4);
#line 295
label_13:
#line 295
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 295
$memory_3 = $memory_0->{'op'};
#line 295
$memory_4 = "*=";
#line 295
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 295
undef($memory_4);
#line 295
label_12:
#line 295
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 295
$memory_3 = $memory_0->{'op'};
#line 295
$memory_4 = ".=";
#line 295
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 295
undef($memory_4);
#line 295
label_11:
#line 295
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 295
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 296
$memory_5 = $memory_0->{'right'};
#line 296
$memory_4 = translator_priv::calc_val($memory_5, $memory_2);
#line 296
undef($memory_5);
#line 297
$memory_6 = $memory_0->{'left'};
#line 297
$memory_7 = c_rt_lib::to_nl(1);
#line 297
$memory_5 = translator_priv::get_value_of_lvalue($memory_6, $memory_7, $memory_2);
#line 297
undef($memory_7);
#line 297
undef($memory_6);
#line 298
$memory_7 = array::len($memory_5);
#line 298
$memory_8 = 1;
#line 298
$memory_7 = $memory_7 - $memory_8;
#line 298
undef($memory_8);
#line 298
$memory_6 = $memory_5->[$memory_7];
#line 298
undef($memory_7);
#line 298
$memory_6 = c_rt_lib::ov_as($memory_6, 'value');
#line 299
$memory_7 = $memory_0->{'op'};
#line 299
translator_priv::print_bin_op_operator_command($memory_6, $memory_6, $memory_4, $memory_7, $memory_2);
#line 299
undef($memory_7);
#line 300
translator_priv::move($memory_1, $memory_6, $memory_2);
#line 301
$memory_7 = c_rt_lib::to_nl(1);
#line 301
translator_priv::set_value_of_lvalue($memory_5, $memory_7, $memory_2);
#line 301
undef($memory_7);
#line 301
undef($memory_4);
#line 301
undef($memory_5);
#line 301
undef($memory_6);
#line 302
goto label_1;
#line 302
label_10:
#line 302
$memory_3 = $memory_0->{'op'};
#line 302
$memory_4 = "&&";
#line 302
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 302
undef($memory_4);
#line 302
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 302
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 303
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 304
$memory_5 = translator_priv::new_register($memory_2);
#line 305
$memory_7 = $memory_0->{'left'};
#line 305
$memory_6 = translator_priv::def_val($memory_7, $memory_1, $memory_5, $memory_2);
#line 305
undef($memory_7);
#line 306
$memory_8 = "!";
#line 306
$memory_7 = {dest => $memory_5,src => $memory_6,op => $memory_8,};
#line 306
undef($memory_8);
#line 306
$memory_7 = c_rt_lib::ov_mk_arg('una_op', $memory_7);
#line 306
translator_priv::print($memory_2, $memory_7);
#line 306
undef($memory_7);
#line 307
translator_priv::print_if_goto($memory_4, $memory_5, $memory_2);
#line 308
$memory_7 = $memory_0->{'right'};
#line 308
translator_priv::def_val($memory_7, $memory_1, $memory_5, $memory_2);
#line 308
undef($memory_7);
#line 309
translator_priv::print_sim_label($memory_4, $memory_2);
#line 309
undef($memory_4);
#line 309
undef($memory_5);
#line 309
undef($memory_6);
#line 310
goto label_1;
#line 310
label_15:
#line 310
$memory_3 = $memory_0->{'op'};
#line 310
$memory_4 = "||";
#line 310
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 310
undef($memory_4);
#line 310
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 310
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 311
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 312
$memory_6 = $memory_0->{'left'};
#line 312
$memory_5 = translator_priv::dest_val($memory_6, $memory_1, $memory_2);
#line 312
undef($memory_6);
#line 313
$memory_6 = c_rt_lib::to_nl($memory_1 ne $memory_5);
#line 313
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 313
if (c_rt_lib::check_true($memory_6)) {goto label_18;}
#line 313
translator_priv::move($memory_1, $memory_5, $memory_2);
#line 313
goto label_18;
#line 313
label_18:
#line 313
undef($memory_6);
#line 314
translator_priv::print_if_goto($memory_4, $memory_5, $memory_2);
#line 315
$memory_7 = $memory_0->{'right'};
#line 315
$memory_6 = translator_priv::dest_val($memory_7, $memory_1, $memory_2);
#line 315
undef($memory_7);
#line 315
$memory_5 = $memory_6;
#line 315
undef($memory_6);
#line 316
$memory_6 = c_rt_lib::to_nl($memory_5 ne $memory_1);
#line 316
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 316
if (c_rt_lib::check_true($memory_6)) {goto label_20;}
#line 316
translator_priv::move($memory_1, $memory_5, $memory_2);
#line 316
goto label_20;
#line 316
label_20:
#line 316
undef($memory_6);
#line 317
translator_priv::print_sim_label($memory_4, $memory_2);
#line 317
undef($memory_4);
#line 317
undef($memory_5);
#line 318
goto label_1;
#line 318
label_16:
#line 319
$memory_5 = $memory_0->{'left'};
#line 319
$memory_4 = translator_priv::dest_val($memory_5, $memory_1, $memory_2);
#line 319
undef($memory_5);
#line 321
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_1);
#line 321
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 321
if (c_rt_lib::check_true($memory_6)) {goto label_22;}
#line 322
$memory_8 = $memory_0->{'right'};
#line 322
$memory_7 = translator_priv::calc_val($memory_8, $memory_2);
#line 322
undef($memory_8);
#line 322
$memory_5 = $memory_7;
#line 322
undef($memory_7);
#line 323
goto label_21;
#line 323
label_22:
#line 324
$memory_8 = $memory_0->{'right'};
#line 324
$memory_7 = translator_priv::dest_val($memory_8, $memory_1, $memory_2);
#line 324
undef($memory_8);
#line 324
$memory_5 = $memory_7;
#line 324
undef($memory_7);
#line 325
goto label_21;
#line 325
label_21:
#line 325
undef($memory_6);
#line 326
$memory_6 = $memory_0->{'op'};
#line 326
translator_priv::print_bin_op_operator_command($memory_1, $memory_4, $memory_5, $memory_6, $memory_2);
#line 326
undef($memory_6);
#line 326
undef($memory_4);
#line 326
undef($memory_5);
#line 327
goto label_1;
#line 327
label_1:
#line 327
undef($memory_3);
#line 327
undef($memory_0);
#line 327
undef($memory_1);
#line 327
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_cmd_array($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 331
$memory_2 = translator_priv::save_registers($memory_1);
#line 332
$memory_4 = 0;
#line 332
$memory_5 = 1;
#line 332
$memory_6 = c_rt_lib::array_len($memory_0);
#line 332
label_3:
#line 332
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 332
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 332
$memory_3 = $memory_0->[$memory_4];
#line 333
translator_priv::print_cmd($memory_3, $memory_1);
#line 334
$memory_4 = $memory_4 + $memory_5;
#line 334
goto label_3;
#line 334
label_1:
#line 334
undef($memory_3);
#line 334
undef($memory_4);
#line 334
undef($memory_5);
#line 334
undef($memory_6);
#line 334
undef($memory_7);
#line 335
translator_priv::restore_registers($memory_2, $memory_1);
#line 335
undef($memory_2);
#line 335
undef($memory_0);
#line 335
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_try_ensure($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 339
$memory_3 = c_rt_lib::ov_is($memory_0, 'decl');
#line 339
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 341
$memory_3 = c_rt_lib::ov_is($memory_0, 'lval');
#line 341
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 342
$memory_3 = c_rt_lib::ov_is($memory_0, 'expr');
#line 342
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 342
$memory_3 = "NOMATCHALERT";
#line 342
$memory_3 = [$memory_3,$memory_0];
#line 342
die(dfile::ssave($memory_3));
#line 339
label_2:
#line 339
$memory_4 = c_rt_lib::ov_as($memory_0, 'decl');
#line 340
$memory_6 = $memory_4->{'name'};
#line 340
$memory_7 = $memory_4->{'type'};
#line 340
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 340
$memory_5 = {name => $memory_6,type => $memory_7,value => $memory_8,};
#line 340
undef($memory_6);
#line 340
undef($memory_7);
#line 340
undef($memory_8);
#line 340
translator_priv::print_var_decl($memory_5, $memory_2);
#line 340
undef($memory_5);
#line 340
undef($memory_4);
#line 341
goto label_1;
#line 341
label_3:
#line 341
$memory_4 = c_rt_lib::ov_as($memory_0, 'lval');
#line 341
undef($memory_4);
#line 342
goto label_1;
#line 342
label_4:
#line 342
$memory_4 = c_rt_lib::ov_as($memory_0, 'expr');
#line 342
undef($memory_4);
#line 343
goto label_1;
#line 343
label_1:
#line 343
undef($memory_3);
#line 344
$memory_3 = translator_priv::save_registers($memory_2);
#line 345
$memory_4 = translator_priv::new_register($memory_2);
#line 347
$memory_6 = c_rt_lib::ov_is($memory_0, 'decl');
#line 347
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 352
$memory_6 = c_rt_lib::ov_is($memory_0, 'lval');
#line 352
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 354
$memory_6 = c_rt_lib::ov_is($memory_0, 'expr');
#line 354
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 354
$memory_6 = "NOMATCHALERT";
#line 354
$memory_6 = [$memory_6,$memory_0];
#line 354
die(dfile::ssave($memory_6));
#line 347
label_6:
#line 347
$memory_7 = c_rt_lib::ov_as($memory_0, 'decl');
#line 348
$memory_8 = $memory_7->{'value'};
#line 348
$memory_9 = c_rt_lib::ov_is($memory_8, 'value');
#line 348
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 350
$memory_9 = c_rt_lib::ov_is($memory_8, 'none');
#line 350
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 350
$memory_9 = "NOMATCHALERT";
#line 350
$memory_9 = [$memory_9,$memory_8];
#line 350
die(dfile::ssave($memory_9));
#line 348
label_10:
#line 348
$memory_10 = c_rt_lib::ov_as($memory_8, 'value');
#line 349
$memory_11 = translator_priv::calc_val($memory_10, $memory_2);
#line 349
$memory_5 = $memory_11;
#line 349
undef($memory_11);
#line 349
undef($memory_10);
#line 350
goto label_9;
#line 350
label_11:
#line 351
goto label_9;
#line 351
label_9:
#line 351
undef($memory_8);
#line 351
undef($memory_9);
#line 351
undef($memory_7);
#line 352
goto label_5;
#line 352
label_7:
#line 352
$memory_7 = c_rt_lib::ov_as($memory_0, 'lval');
#line 353
$memory_9 = $memory_7->{'right'};
#line 353
$memory_8 = translator_priv::calc_val($memory_9, $memory_2);
#line 353
undef($memory_9);
#line 353
$memory_5 = $memory_8;
#line 353
undef($memory_8);
#line 353
undef($memory_7);
#line 354
goto label_5;
#line 354
label_8:
#line 354
$memory_7 = c_rt_lib::ov_as($memory_0, 'expr');
#line 355
$memory_8 = translator_priv::calc_val($memory_7, $memory_2);
#line 355
$memory_5 = $memory_8;
#line 355
undef($memory_8);
#line 355
undef($memory_7);
#line 356
goto label_5;
#line 356
label_5:
#line 356
undef($memory_6);
#line 357
$memory_6 = translator_priv::get_sim_label($memory_2);
#line 358
$memory_8 = "ok";
#line 358
$memory_7 = {dest => $memory_4,src => $memory_5,type => $memory_8,};
#line 358
undef($memory_8);
#line 358
$memory_7 = c_rt_lib::ov_mk_arg('ov_is', $memory_7);
#line 358
translator_priv::print($memory_2, $memory_7);
#line 358
undef($memory_7);
#line 359
translator_priv::print_if_goto($memory_6, $memory_4, $memory_2);
#line 360
$memory_7 = $memory_1;
#line 360
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 360
if (c_rt_lib::check_true($memory_7)) {goto label_13;}
#line 361
$memory_8 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 361
translator_priv::print_safe_return($memory_8, $memory_2);
#line 361
undef($memory_8);
#line 362
goto label_12;
#line 362
label_13:
#line 363
$memory_9 = c_rt_lib::ov_mk_arg('arg', $memory_5);
#line 363
$memory_10 = "ensure";
#line 363
$memory_8 = {dest => $memory_5,src => $memory_9,name => $memory_10,};
#line 363
undef($memory_9);
#line 363
undef($memory_10);
#line 363
$memory_8 = c_rt_lib::ov_mk_arg('ov_mk', $memory_8);
#line 363
translator_priv::print($memory_2, $memory_8);
#line 363
undef($memory_8);
#line 364
$memory_8 = c_rt_lib::ov_mk_arg('die', $memory_5);
#line 364
translator_priv::print($memory_2, $memory_8);
#line 364
undef($memory_8);
#line 365
goto label_12;
#line 365
label_12:
#line 365
undef($memory_7);
#line 366
translator_priv::print_sim_label($memory_6, $memory_2);
#line 367
$memory_7 = c_rt_lib::ov_is($memory_0, 'decl');
#line 367
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 369
$memory_7 = c_rt_lib::ov_is($memory_0, 'lval');
#line 369
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 374
$memory_7 = c_rt_lib::ov_is($memory_0, 'expr');
#line 374
if (c_rt_lib::check_true($memory_7)) {goto label_17;}
#line 374
$memory_7 = "NOMATCHALERT";
#line 374
$memory_7 = [$memory_7,$memory_0];
#line 374
die(dfile::ssave($memory_7));
#line 367
label_15:
#line 367
$memory_8 = c_rt_lib::ov_as($memory_0, 'decl');
#line 368
$memory_11 = $memory_8->{'name'};
#line 368
$memory_10 = translator_priv::get_var_register($memory_11, $memory_2);
#line 368
undef($memory_11);
#line 368
$memory_11 = "ok";
#line 368
$memory_9 = {dest => $memory_10,src => $memory_5,type => $memory_11,};
#line 368
undef($memory_10);
#line 368
undef($memory_11);
#line 368
$memory_9 = c_rt_lib::ov_mk_arg('ov_as', $memory_9);
#line 368
translator_priv::print($memory_2, $memory_9);
#line 368
undef($memory_9);
#line 368
undef($memory_8);
#line 369
goto label_14;
#line 369
label_16:
#line 369
$memory_8 = c_rt_lib::ov_as($memory_0, 'lval');
#line 370
$memory_10 = $memory_8->{'left'};
#line 370
$memory_11 = c_rt_lib::to_nl(0);
#line 370
$memory_9 = translator_priv::get_value_of_lvalue($memory_10, $memory_11, $memory_2);
#line 370
undef($memory_11);
#line 370
undef($memory_10);
#line 371
$memory_11 = array::len($memory_9);
#line 371
$memory_12 = 1;
#line 371
$memory_11 = $memory_11 - $memory_12;
#line 371
undef($memory_12);
#line 371
$memory_10 = $memory_9->[$memory_11];
#line 371
undef($memory_11);
#line 371
$memory_10 = c_rt_lib::ov_as($memory_10, 'value');
#line 372
$memory_12 = "ok";
#line 372
$memory_11 = {dest => $memory_10,src => $memory_5,type => $memory_12,};
#line 372
undef($memory_12);
#line 372
$memory_11 = c_rt_lib::ov_mk_arg('ov_as', $memory_11);
#line 372
translator_priv::print($memory_2, $memory_11);
#line 372
undef($memory_11);
#line 373
$memory_11 = c_rt_lib::to_nl(0);
#line 373
translator_priv::set_value_of_lvalue($memory_9, $memory_11, $memory_2);
#line 373
undef($memory_11);
#line 373
undef($memory_9);
#line 373
undef($memory_10);
#line 373
undef($memory_8);
#line 374
goto label_14;
#line 374
label_17:
#line 374
$memory_8 = c_rt_lib::ov_as($memory_0, 'expr');
#line 374
undef($memory_8);
#line 375
goto label_14;
#line 375
label_14:
#line 375
undef($memory_7);
#line 376
translator_priv::restore_registers($memory_3, $memory_2);
#line 376
undef($memory_3);
#line 376
undef($memory_4);
#line 376
undef($memory_5);
#line 376
undef($memory_6);
#line 376
undef($memory_0);
#line 376
undef($memory_1);
#line 376
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::start_new_instruction($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 380
$memory_2 = "debug";
#line 380
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 380
$memory_3 = $memory_0;
#line 380
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'nast_debug'} = $memory_3;
#line 380
$memory_4 = "debug";
#line 380
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_2);
#line 380
undef($memory_4);
#line 380
undef($memory_2);
#line 380
undef($memory_3);
#line 381
$memory_2 = "debug";
#line 381
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 381
$memory_3 = "instruction_nr";
#line 381
$memory_3 = c_rt_lib::get_ref_hash($memory_2, $memory_3);
#line 381
$memory_4 = 1;
#line 381
$memory_3 = $memory_3 + $memory_4;
#line 381
$memory_5 = "instruction_nr";
#line 381
c_rt_lib::set_ref_hash($memory_2, $memory_5, $memory_3);
#line 381
$memory_5 = "debug";
#line 381
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_2);
#line 381
undef($memory_5);
#line 381
undef($memory_2);
#line 381
undef($memory_3);
#line 381
undef($memory_4);
#line 381
undef($memory_0);
#line 381
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_cmd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 385
$memory_2 = $memory_0->{'debug'};
#line 385
translator_priv::start_new_instruction($memory_2, $memory_1);
#line 385
undef($memory_2);
#line 386
$memory_2 = $memory_0->{'cmd'};
#line 386
$memory_3 = c_rt_lib::ov_is($memory_2, 'if');
#line 386
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 388
$memory_3 = c_rt_lib::ov_is($memory_2, 'fora');
#line 388
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 390
$memory_3 = c_rt_lib::ov_is($memory_2, 'loop');
#line 390
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 392
$memory_3 = c_rt_lib::ov_is($memory_2, 'rep');
#line 392
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 394
$memory_3 = c_rt_lib::ov_is($memory_2, 'forh');
#line 394
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 396
$memory_3 = c_rt_lib::ov_is($memory_2, 'while');
#line 396
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 398
$memory_3 = c_rt_lib::ov_is($memory_2, 'for');
#line 398
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 400
$memory_3 = c_rt_lib::ov_is($memory_2, 'nop');
#line 400
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 401
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 401
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 403
$memory_3 = c_rt_lib::ov_is($memory_2, 'block');
#line 403
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 405
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 405
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 407
$memory_3 = c_rt_lib::ov_is($memory_2, 'match');
#line 407
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 409
$memory_3 = c_rt_lib::ov_is($memory_2, 'try');
#line 409
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 411
$memory_3 = c_rt_lib::ov_is($memory_2, 'ensure');
#line 411
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 413
$memory_3 = c_rt_lib::ov_is($memory_2, 'break');
#line 413
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 415
$memory_3 = c_rt_lib::ov_is($memory_2, 'continue');
#line 415
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 417
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 417
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 419
$memory_3 = c_rt_lib::ov_is($memory_2, 'var_decl');
#line 419
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 421
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_mod');
#line 421
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 423
$memory_3 = c_rt_lib::ov_is($memory_2, 'unless_mod');
#line 423
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 423
$memory_3 = "NOMATCHALERT";
#line 423
$memory_3 = [$memory_3,$memory_2];
#line 423
die(dfile::ssave($memory_3));
#line 386
label_2:
#line 386
$memory_4 = c_rt_lib::ov_as($memory_2, 'if');
#line 387
$memory_5 = c_rt_lib::to_nl(0);
#line 387
translator_priv::print_if($memory_4, $memory_5, $memory_1);
#line 387
undef($memory_5);
#line 387
undef($memory_4);
#line 388
goto label_1;
#line 388
label_3:
#line 388
$memory_4 = c_rt_lib::ov_as($memory_2, 'fora');
#line 389
translator_priv::print_fora($memory_4, $memory_1);
#line 389
undef($memory_4);
#line 390
goto label_1;
#line 390
label_4:
#line 390
$memory_4 = c_rt_lib::ov_as($memory_2, 'loop');
#line 391
translator_priv::print_loop($memory_4, $memory_1);
#line 391
undef($memory_4);
#line 392
goto label_1;
#line 392
label_5:
#line 392
$memory_4 = c_rt_lib::ov_as($memory_2, 'rep');
#line 393
translator_priv::print_rep($memory_4, $memory_1);
#line 393
undef($memory_4);
#line 394
goto label_1;
#line 394
label_6:
#line 394
$memory_4 = c_rt_lib::ov_as($memory_2, 'forh');
#line 395
translator_priv::print_forh($memory_4, $memory_1);
#line 395
undef($memory_4);
#line 396
goto label_1;
#line 396
label_7:
#line 396
$memory_4 = c_rt_lib::ov_as($memory_2, 'while');
#line 397
translator_priv::print_while($memory_4, $memory_1);
#line 397
undef($memory_4);
#line 398
goto label_1;
#line 398
label_8:
#line 398
$memory_4 = c_rt_lib::ov_as($memory_2, 'for');
#line 399
translator_priv::print_for($memory_4, $memory_1);
#line 399
undef($memory_4);
#line 400
goto label_1;
#line 400
label_9:
#line 401
goto label_1;
#line 401
label_10:
#line 401
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 402
$memory_5 = "";
#line 402
translator_priv::print_val($memory_4, $memory_5, $memory_1);
#line 402
undef($memory_5);
#line 402
undef($memory_4);
#line 403
goto label_1;
#line 403
label_11:
#line 403
$memory_4 = c_rt_lib::ov_as($memory_2, 'block');
#line 404
translator_priv::print_cmd_array($memory_4, $memory_1);
#line 404
undef($memory_4);
#line 405
goto label_1;
#line 405
label_12:
#line 405
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 406
translator_priv::print_return($memory_4, $memory_1);
#line 406
undef($memory_4);
#line 407
goto label_1;
#line 407
label_13:
#line 407
$memory_4 = c_rt_lib::ov_as($memory_2, 'match');
#line 408
translator_priv::print_match($memory_4, $memory_1);
#line 408
undef($memory_4);
#line 409
goto label_1;
#line 409
label_14:
#line 409
$memory_4 = c_rt_lib::ov_as($memory_2, 'try');
#line 410
$memory_5 = c_rt_lib::to_nl(1);
#line 410
translator_priv::print_try_ensure($memory_4, $memory_5, $memory_1);
#line 410
undef($memory_5);
#line 410
undef($memory_4);
#line 411
goto label_1;
#line 411
label_15:
#line 411
$memory_4 = c_rt_lib::ov_as($memory_2, 'ensure');
#line 412
$memory_5 = c_rt_lib::to_nl(0);
#line 412
translator_priv::print_try_ensure($memory_4, $memory_5, $memory_1);
#line 412
undef($memory_5);
#line 412
undef($memory_4);
#line 413
goto label_1;
#line 413
label_16:
#line 414
$memory_4 = $memory_1->{'loop_label'};
#line 414
$memory_4 = $memory_4->{'break'};
#line 414
translator_priv::print_loop_break($memory_1, $memory_4);
#line 414
undef($memory_4);
#line 415
goto label_1;
#line 415
label_17:
#line 416
$memory_4 = $memory_1->{'loop_label'};
#line 416
$memory_4 = $memory_4->{'continue'};
#line 416
translator_priv::print_loop_break($memory_1, $memory_4);
#line 416
undef($memory_4);
#line 417
goto label_1;
#line 417
label_18:
#line 417
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 418
translator_priv::print_die($memory_4, $memory_1);
#line 418
undef($memory_4);
#line 419
goto label_1;
#line 419
label_19:
#line 419
$memory_4 = c_rt_lib::ov_as($memory_2, 'var_decl');
#line 420
translator_priv::print_var_decl($memory_4, $memory_1);
#line 420
undef($memory_4);
#line 421
goto label_1;
#line 421
label_20:
#line 421
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_mod');
#line 422
translator_priv::print_if_mod($memory_4, $memory_1);
#line 422
undef($memory_4);
#line 423
goto label_1;
#line 423
label_21:
#line 423
$memory_4 = c_rt_lib::ov_as($memory_2, 'unless_mod');
#line 424
translator_priv::print_unless_mod($memory_4, $memory_1);
#line 424
undef($memory_4);
#line 425
goto label_1;
#line 425
label_1:
#line 425
undef($memory_2);
#line 425
undef($memory_3);
#line 425
undef($memory_0);
#line 425
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_loop_break($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 429
$memory_2 = $memory_1->{'logic'};
#line 429
$memory_2 = $memory_2->{'register'};
#line 429
label_2:
#line 429
$memory_3 = $memory_0->{'logic'};
#line 429
$memory_3 = $memory_3->{'register'};
#line 429
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 429
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 429
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 430
$memory_5 = {
	module => "nlasm",
	name => "reg_t",
};
#line 430
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 430
$memory_4 = ptd::ensure($memory_5, $memory_2);
#line 430
undef($memory_5);
#line 430
translator_priv::undef_reg($memory_4, $memory_0);
#line 430
undef($memory_4);
#line 430
$memory_4 = 1;
#line 430
$memory_2 = $memory_2 + $memory_4;
#line 430
undef($memory_4);
#line 431
goto label_2;
#line 431
label_1:
#line 431
undef($memory_2);
#line 431
undef($memory_3);
#line 432
$memory_2 = $memory_1->{'label'};
#line 432
$memory_2 = c_rt_lib::ov_mk_arg('goto', $memory_2);
#line 432
translator_priv::print($memory_0, $memory_2);
#line 432
undef($memory_2);
#line 432
undef($memory_1);
#line 432
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::print_if_mod($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 436
$memory_3 = $memory_0->{'cond'};
#line 436
$memory_4 = $memory_0->{'cmd'};
#line 436
$memory_5 = [];
#line 436
$memory_7 = $memory_0->{'cmd'};
#line 436
$memory_7 = $memory_7->{'debug'};
#line 436
$memory_8 = c_rt_lib::ov_mk_none('nop');
#line 436
$memory_6 = {debug => $memory_7,cmd => $memory_8,};
#line 436
undef($memory_7);
#line 436
undef($memory_8);
#line 436
$memory_2 = {cond => $memory_3,if => $memory_4,elsif => $memory_5,else => $memory_6,};
#line 436
undef($memory_3);
#line 436
undef($memory_4);
#line 436
undef($memory_5);
#line 436
undef($memory_6);
#line 442
$memory_3 = c_rt_lib::to_nl(1);
#line 442
translator_priv::print_if($memory_2, $memory_3, $memory_1);
#line 442
undef($memory_3);
#line 442
undef($memory_2);
#line 442
undef($memory_0);
#line 442
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_unless_mod($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 447
$memory_4 = $memory_0->{'cond'};
#line 447
$memory_4 = c_rt_lib::ov_mk_arg('parenthesis', $memory_4);
#line 447
$memory_5 = "!";
#line 447
$memory_3 = {val => $memory_4,op => $memory_5,};
#line 447
undef($memory_4);
#line 447
undef($memory_5);
#line 447
$memory_3 = c_rt_lib::ov_mk_arg('unary_op', $memory_3);
#line 447
$memory_4 = $memory_0->{'cmd'};
#line 447
$memory_5 = [];
#line 447
$memory_7 = $memory_0->{'cmd'};
#line 447
$memory_7 = $memory_7->{'debug'};
#line 447
$memory_8 = c_rt_lib::ov_mk_none('nop');
#line 447
$memory_6 = {debug => $memory_7,cmd => $memory_8,};
#line 447
undef($memory_7);
#line 447
undef($memory_8);
#line 447
$memory_2 = {cond => $memory_3,if => $memory_4,elsif => $memory_5,else => $memory_6,};
#line 447
undef($memory_3);
#line 447
undef($memory_4);
#line 447
undef($memory_5);
#line 447
undef($memory_6);
#line 453
$memory_3 = c_rt_lib::to_nl(1);
#line 453
translator_priv::print_if($memory_2, $memory_3, $memory_1);
#line 453
undef($memory_3);
#line 453
undef($memory_2);
#line 453
undef($memory_0);
#line 453
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_if($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 457
$memory_3 = translator_priv::save_registers($memory_2);
#line 458
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 459
$memory_5 = translator_priv::get_sim_label($memory_2);
#line 460
$memory_6 = translator_priv::new_register($memory_2);
#line 461
$memory_7 = translator_priv::save_registers($memory_2);
#line 462
$memory_8 = $memory_0->{'cond'};
#line 462
translator_priv::print_val($memory_8, $memory_6, $memory_2);
#line 462
undef($memory_8);
#line 463
$memory_9 = "!";
#line 463
$memory_8 = {dest => $memory_6,src => $memory_6,op => $memory_9,};
#line 463
undef($memory_9);
#line 463
$memory_8 = c_rt_lib::ov_mk_arg('una_op', $memory_8);
#line 463
translator_priv::print($memory_2, $memory_8);
#line 463
undef($memory_8);
#line 464
translator_priv::restore_registers($memory_7, $memory_2);
#line 465
translator_priv::print_if_goto($memory_5, $memory_6, $memory_2);
#line 466
$memory_8 = $memory_0->{'if'};
#line 466
translator_priv::print_cmd($memory_8, $memory_2);
#line 466
undef($memory_8);
#line 467
$memory_8 = $memory_1;
#line 467
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 467
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 467
if (c_rt_lib::check_true($memory_8)) {goto label_2;}
#line 467
$memory_10 = $memory_0->{'if'};
#line 467
$memory_10 = $memory_10->{'debug'};
#line 467
$memory_9 = translator::last_debug_char($memory_10);
#line 467
undef($memory_10);
#line 467
translator_priv::start_new_instruction($memory_9, $memory_2);
#line 467
undef($memory_9);
#line 467
goto label_2;
#line 467
label_2:
#line 467
undef($memory_8);
#line 468
$memory_8 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 468
translator_priv::print($memory_2, $memory_8);
#line 468
undef($memory_8);
#line 469
translator_priv::print_sim_label($memory_5, $memory_2);
#line 470
$memory_8 = $memory_0->{'elsif'};
#line 470
$memory_10 = 0;
#line 470
$memory_11 = 1;
#line 470
$memory_12 = c_rt_lib::array_len($memory_8);
#line 470
label_5:
#line 470
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 470
if (c_rt_lib::check_true($memory_13)) {goto label_3;}
#line 470
$memory_9 = $memory_8->[$memory_10];
#line 471
$memory_14 = $memory_9->{'debug'};
#line 471
translator_priv::start_new_instruction($memory_14, $memory_2);
#line 471
undef($memory_14);
#line 472
$memory_14 = translator_priv::get_sim_label($memory_2);
#line 472
$memory_5 = $memory_14;
#line 472
undef($memory_14);
#line 473
$memory_14 = $memory_9->{'cond'};
#line 473
translator_priv::print_val($memory_14, $memory_6, $memory_2);
#line 473
undef($memory_14);
#line 474
$memory_15 = "!";
#line 474
$memory_14 = {dest => $memory_6,src => $memory_6,op => $memory_15,};
#line 474
undef($memory_15);
#line 474
$memory_14 = c_rt_lib::ov_mk_arg('una_op', $memory_14);
#line 474
translator_priv::print($memory_2, $memory_14);
#line 474
undef($memory_14);
#line 475
translator_priv::restore_registers($memory_7, $memory_2);
#line 476
translator_priv::print_if_goto($memory_5, $memory_6, $memory_2);
#line 477
$memory_14 = $memory_9->{'cmd'};
#line 477
translator_priv::print_cmd($memory_14, $memory_2);
#line 477
undef($memory_14);
#line 478
$memory_15 = $memory_9->{'cmd'};
#line 478
$memory_15 = $memory_15->{'debug'};
#line 478
$memory_14 = translator::last_debug_char($memory_15);
#line 478
undef($memory_15);
#line 478
translator_priv::start_new_instruction($memory_14, $memory_2);
#line 478
undef($memory_14);
#line 479
$memory_14 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 479
translator_priv::print($memory_2, $memory_14);
#line 479
undef($memory_14);
#line 480
translator_priv::print_sim_label($memory_5, $memory_2);
#line 481
$memory_10 = $memory_10 + $memory_11;
#line 481
goto label_5;
#line 481
label_3:
#line 481
undef($memory_8);
#line 481
undef($memory_9);
#line 481
undef($memory_10);
#line 481
undef($memory_11);
#line 481
undef($memory_12);
#line 481
undef($memory_13);
#line 482
$memory_8 = $memory_0->{'else'};
#line 482
$memory_8 = $memory_8->{'cmd'};
#line 482
$memory_8 = c_rt_lib::ov_is($memory_8, 'nop');
#line 482
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 482
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 482
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 483
$memory_9 = $memory_0->{'else'};
#line 483
translator_priv::print_cmd($memory_9, $memory_2);
#line 483
undef($memory_9);
#line 484
$memory_10 = $memory_0->{'else'};
#line 484
$memory_10 = $memory_10->{'debug'};
#line 484
$memory_9 = translator::last_debug_char($memory_10);
#line 484
undef($memory_10);
#line 484
translator_priv::start_new_instruction($memory_9, $memory_2);
#line 484
undef($memory_9);
#line 485
$memory_9 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 485
translator_priv::print($memory_2, $memory_9);
#line 485
undef($memory_9);
#line 486
goto label_7;
#line 486
label_7:
#line 486
undef($memory_8);
#line 487
translator_priv::print_sim_label($memory_4, $memory_2);
#line 488
translator_priv::restore_registers($memory_3, $memory_2);
#line 488
undef($memory_3);
#line 488
undef($memory_4);
#line 488
undef($memory_5);
#line 488
undef($memory_6);
#line 488
undef($memory_7);
#line 488
undef($memory_0);
#line 488
undef($memory_1);
#line 488
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_call_base($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 495
$memory_5 = "c_rt_lib";
#line 495
$memory_4 = {dest => $memory_0,mod => $memory_5,fun_name => $memory_1,args => $memory_2,};
#line 495
undef($memory_5);
#line 495
$memory_4 = c_rt_lib::ov_mk_arg('call', $memory_4);
#line 495
translator_priv::print($memory_3, $memory_4);
#line 495
undef($memory_4);
#line 495
undef($memory_0);
#line 495
undef($memory_1);
#line 495
undef($memory_2);
#line 495
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::save_loop_break($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 499
$memory_3 = $memory_0->{'loop_label'};
#line 500
$memory_4 = translator_priv::save_registers($memory_0);
#line 501
$memory_5 = {label => $memory_1,logic => $memory_4,};
#line 501
$memory_6 = "loop_label";
#line 501
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 501
$memory_7 = $memory_5;
#line 501
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'break'} = $memory_7;
#line 501
$memory_8 = "loop_label";
#line 501
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_6);
#line 501
undef($memory_8);
#line 501
undef($memory_5);
#line 501
undef($memory_6);
#line 501
undef($memory_7);
#line 502
$memory_5 = {label => $memory_2,logic => $memory_4,};
#line 502
$memory_6 = "loop_label";
#line 502
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 502
$memory_7 = $memory_5;
#line 502
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'continue'} = $memory_7;
#line 502
$memory_8 = "loop_label";
#line 502
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_6);
#line 502
undef($memory_8);
#line 502
undef($memory_5);
#line 502
undef($memory_6);
#line 502
undef($memory_7);
#line 503
undef($memory_1);
#line 503
undef($memory_2);
#line 503
undef($memory_4);
#line 503
$_[0] = $memory_0;return $memory_3;
#line 503
undef($memory_3);
#line 503
undef($memory_4);
#line 503
undef($memory_1);
#line 503
undef($memory_2);
#line 503
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::print_fora($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 507
$memory_2 = $memory_1->{'debug'};
#line 507
$memory_2 = $memory_2->{'nast_debug'};
#line 508
$memory_3 = translator_priv::save_registers($memory_1);
#line 509
$memory_5 = $memory_0->{'array'};
#line 509
$memory_4 = translator_priv::calc_val($memory_5, $memory_1);
#line 509
undef($memory_5);
#line 510
$memory_6 = $memory_0->{'iter'};
#line 510
$memory_5 = translator_priv::print_var_decl($memory_6, $memory_1);
#line 510
undef($memory_6);
#line 511
$memory_6 = translator_priv::get_sim_label($memory_1);
#line 512
$memory_7 = translator_priv::get_sim_label($memory_1);
#line 513
$memory_8 = translator_priv::get_sim_label($memory_1);
#line 514
$memory_9 = translator_priv::new_register($memory_1);
#line 515
$memory_10 = 0;
#line 515
translator_priv::load_const($memory_10, $memory_9, $memory_1);
#line 515
undef($memory_10);
#line 516
$memory_10 = translator_priv::new_register($memory_1);
#line 517
$memory_11 = 1;
#line 517
translator_priv::load_const($memory_11, $memory_10, $memory_1);
#line 517
undef($memory_11);
#line 518
$memory_11 = translator_priv::new_register($memory_1);
#line 519
$memory_12 = "array_len";
#line 519
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_4);
#line 519
$memory_13 = [$memory_14];
#line 519
undef($memory_14);
#line 519
translator_priv::print_call_base($memory_11, $memory_12, $memory_13, $memory_1);
#line 519
undef($memory_13);
#line 519
undef($memory_12);
#line 520
$memory_12 = translator_priv::new_register($memory_1);
#line 521
translator_priv::print_sim_label($memory_8, $memory_1);
#line 522
$memory_13 = ">=";
#line 522
translator_priv::print_bin_op_operator_command($memory_12, $memory_9, $memory_11, $memory_13, $memory_1);
#line 522
undef($memory_13);
#line 523
translator_priv::print_if_goto($memory_6, $memory_12, $memory_1);
#line 524
$memory_13 = {dest => $memory_5,src => $memory_4,idx => $memory_9,};
#line 524
$memory_13 = c_rt_lib::ov_mk_arg('get_frm_idx', $memory_13);
#line 524
translator_priv::print($memory_1, $memory_13);
#line 524
undef($memory_13);
#line 525
$memory_13 = translator_priv::save_loop_break($memory_1, $memory_6, $memory_7);
#line 526
$memory_14 = $memory_0->{'cmd'};
#line 526
translator_priv::print_cmd($memory_14, $memory_1);
#line 526
undef($memory_14);
#line 527
translator_priv::print_sim_label($memory_7, $memory_1);
#line 528
$memory_14 = $memory_0->{'short'};
#line 528
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 528
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 528
if (c_rt_lib::check_true($memory_14)) {goto label_2;}
#line 528
$memory_15 = translator::last_debug_char($memory_2);
#line 528
translator_priv::start_new_instruction($memory_15, $memory_1);
#line 528
undef($memory_15);
#line 528
goto label_2;
#line 528
label_2:
#line 528
undef($memory_14);
#line 529
$memory_15 = "+";
#line 529
$memory_14 = {dest => $memory_9,left => $memory_9,right => $memory_10,op => $memory_15,};
#line 529
undef($memory_15);
#line 529
$memory_14 = c_rt_lib::ov_mk_arg('bin_op', $memory_14);
#line 529
translator_priv::print($memory_1, $memory_14);
#line 529
undef($memory_14);
#line 530
$memory_14 = c_rt_lib::ov_mk_arg('goto', $memory_8);
#line 530
translator_priv::print($memory_1, $memory_14);
#line 530
undef($memory_14);
#line 531
translator_priv::print_sim_label($memory_6, $memory_1);
#line 532
$memory_14 = $memory_13;
#line 532
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_14;
#line 532
undef($memory_14);
#line 533
translator_priv::restore_registers($memory_3, $memory_1);
#line 533
undef($memory_2);
#line 533
undef($memory_3);
#line 533
undef($memory_4);
#line 533
undef($memory_5);
#line 533
undef($memory_6);
#line 533
undef($memory_7);
#line 533
undef($memory_8);
#line 533
undef($memory_9);
#line 533
undef($memory_10);
#line 533
undef($memory_11);
#line 533
undef($memory_12);
#line 533
undef($memory_13);
#line 533
undef($memory_0);
#line 533
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_loop($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 537
$memory_2 = translator_priv::save_registers($memory_1);
#line 538
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 539
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 540
translator_priv::print_sim_label($memory_4, $memory_1);
#line 541
$memory_5 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_4);
#line 542
translator_priv::print_cmd($memory_0, $memory_1);
#line 543
$memory_6 = $memory_0->{'debug'};
#line 543
translator_priv::start_new_instruction($memory_6, $memory_1);
#line 543
undef($memory_6);
#line 544
$memory_6 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 544
translator_priv::print($memory_1, $memory_6);
#line 544
undef($memory_6);
#line 545
translator_priv::print_sim_label($memory_3, $memory_1);
#line 546
$memory_6 = $memory_5;
#line 546
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_6;
#line 546
undef($memory_6);
#line 547
translator_priv::restore_registers($memory_2, $memory_1);
#line 547
undef($memory_2);
#line 547
undef($memory_3);
#line 547
undef($memory_4);
#line 547
undef($memory_5);
#line 547
undef($memory_0);
#line 547
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_rep($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 551
$memory_2 = translator_priv::save_registers($memory_1);
#line 552
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 553
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 554
$memory_5 = translator_priv::get_sim_label($memory_1);
#line 555
$memory_7 = $memory_0->{'count'};
#line 555
$memory_6 = translator_priv::calc_val($memory_7, $memory_1);
#line 555
undef($memory_7);
#line 556
$memory_8 = $memory_0->{'iter'};
#line 556
$memory_7 = translator_priv::print_var_decl($memory_8, $memory_1);
#line 556
undef($memory_8);
#line 557
$memory_8 = 0;
#line 557
translator_priv::load_const($memory_8, $memory_7, $memory_1);
#line 557
undef($memory_8);
#line 558
$memory_8 = translator_priv::new_register($memory_1);
#line 559
$memory_9 = 1;
#line 559
translator_priv::load_const($memory_9, $memory_8, $memory_1);
#line 559
undef($memory_9);
#line 560
$memory_9 = translator_priv::new_register($memory_1);
#line 561
translator_priv::print_sim_label($memory_5, $memory_1);
#line 562
$memory_10 = ">=";
#line 562
translator_priv::print_bin_op_operator_command($memory_9, $memory_7, $memory_6, $memory_10, $memory_1);
#line 562
undef($memory_10);
#line 563
translator_priv::print_if_goto($memory_3, $memory_9, $memory_1);
#line 564
$memory_10 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_4);
#line 565
$memory_11 = $memory_0->{'cmd'};
#line 565
translator_priv::print_cmd($memory_11, $memory_1);
#line 565
undef($memory_11);
#line 566
translator_priv::print_sim_label($memory_4, $memory_1);
#line 567
$memory_11 = $memory_0->{'short'};
#line 567
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 567
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 567
if (c_rt_lib::check_true($memory_11)) {goto label_2;}
#line 567
$memory_13 = $memory_0->{'cmd'};
#line 567
$memory_13 = $memory_13->{'debug'};
#line 567
$memory_12 = translator::last_debug_char($memory_13);
#line 567
undef($memory_13);
#line 567
translator_priv::start_new_instruction($memory_12, $memory_1);
#line 567
undef($memory_12);
#line 567
goto label_2;
#line 567
label_2:
#line 567
undef($memory_11);
#line 568
$memory_12 = "+";
#line 568
$memory_11 = {dest => $memory_7,left => $memory_7,right => $memory_8,op => $memory_12,};
#line 568
undef($memory_12);
#line 568
$memory_11 = c_rt_lib::ov_mk_arg('bin_op', $memory_11);
#line 568
translator_priv::print($memory_1, $memory_11);
#line 568
undef($memory_11);
#line 569
$memory_11 = c_rt_lib::ov_mk_arg('goto', $memory_5);
#line 569
translator_priv::print($memory_1, $memory_11);
#line 569
undef($memory_11);
#line 570
translator_priv::print_sim_label($memory_3, $memory_1);
#line 571
$memory_11 = $memory_10;
#line 571
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_11;
#line 571
undef($memory_11);
#line 572
translator_priv::restore_registers($memory_2, $memory_1);
#line 572
undef($memory_2);
#line 572
undef($memory_3);
#line 572
undef($memory_4);
#line 572
undef($memory_5);
#line 572
undef($memory_6);
#line 572
undef($memory_7);
#line 572
undef($memory_8);
#line 572
undef($memory_9);
#line 572
undef($memory_10);
#line 572
undef($memory_0);
#line 572
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_forh($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 576
$memory_2 = $memory_1->{'debug'};
#line 576
$memory_2 = $memory_2->{'nast_debug'};
#line 577
$memory_3 = translator_priv::save_registers($memory_1);
#line 578
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 579
$memory_5 = translator_priv::get_sim_label($memory_1);
#line 580
$memory_6 = translator_priv::get_sim_label($memory_1);
#line 581
$memory_8 = $memory_0->{'hash'};
#line 581
$memory_7 = translator_priv::calc_val($memory_8, $memory_1);
#line 581
undef($memory_8);
#line 582
$memory_9 = $memory_0->{'key'};
#line 582
$memory_8 = translator_priv::print_var_decl($memory_9, $memory_1);
#line 582
undef($memory_9);
#line 583
$memory_10 = $memory_0->{'val'};
#line 583
$memory_9 = translator_priv::print_var_decl($memory_10, $memory_1);
#line 583
undef($memory_10);
#line 584
$memory_10 = translator_priv::new_register($memory_1);
#line 585
$memory_11 = "init_iter";
#line 585
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_7);
#line 585
$memory_12 = [$memory_13];
#line 585
undef($memory_13);
#line 585
translator_priv::print_call_base($memory_10, $memory_11, $memory_12, $memory_1);
#line 585
undef($memory_12);
#line 585
undef($memory_11);
#line 586
translator_priv::print_sim_label($memory_6, $memory_1);
#line 587
$memory_11 = "is_end_hash";
#line 587
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_10);
#line 587
$memory_12 = [$memory_13];
#line 587
undef($memory_13);
#line 587
translator_priv::print_call_base($memory_8, $memory_11, $memory_12, $memory_1);
#line 587
undef($memory_12);
#line 587
undef($memory_11);
#line 588
translator_priv::print_if_goto($memory_4, $memory_8, $memory_1);
#line 589
$memory_11 = "get_key_iter";
#line 589
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_10);
#line 589
$memory_12 = [$memory_13];
#line 589
undef($memory_13);
#line 589
translator_priv::print_call_base($memory_8, $memory_11, $memory_12, $memory_1);
#line 589
undef($memory_12);
#line 589
undef($memory_11);
#line 590
$memory_11 = "hash_get_value";
#line 590
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_7);
#line 590
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_8);
#line 590
$memory_12 = [$memory_13,$memory_14];
#line 590
undef($memory_13);
#line 590
undef($memory_14);
#line 590
translator_priv::print_call_base($memory_9, $memory_11, $memory_12, $memory_1);
#line 590
undef($memory_12);
#line 590
undef($memory_11);
#line 591
$memory_11 = translator_priv::save_loop_break($memory_1, $memory_4, $memory_5);
#line 592
$memory_12 = $memory_0->{'cmd'};
#line 592
translator_priv::print_cmd($memory_12, $memory_1);
#line 592
undef($memory_12);
#line 593
translator_priv::print_sim_label($memory_5, $memory_1);
#line 594
$memory_12 = $memory_0->{'short'};
#line 594
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 594
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 594
if (c_rt_lib::check_true($memory_12)) {goto label_2;}
#line 594
$memory_13 = translator::last_debug_char($memory_2);
#line 594
translator_priv::start_new_instruction($memory_13, $memory_1);
#line 594
undef($memory_13);
#line 594
goto label_2;
#line 594
label_2:
#line 594
undef($memory_12);
#line 595
$memory_12 = "next_iter";
#line 595
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_10);
#line 595
$memory_13 = [$memory_14];
#line 595
undef($memory_14);
#line 595
translator_priv::print_call_base($memory_10, $memory_12, $memory_13, $memory_1);
#line 595
undef($memory_13);
#line 595
undef($memory_12);
#line 596
$memory_12 = c_rt_lib::ov_mk_arg('goto', $memory_6);
#line 596
translator_priv::print($memory_1, $memory_12);
#line 596
undef($memory_12);
#line 597
translator_priv::print_sim_label($memory_4, $memory_1);
#line 598
$memory_12 = $memory_11;
#line 598
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_12;
#line 598
undef($memory_12);
#line 599
translator_priv::restore_registers($memory_3, $memory_1);
#line 599
undef($memory_2);
#line 599
undef($memory_3);
#line 599
undef($memory_4);
#line 599
undef($memory_5);
#line 599
undef($memory_6);
#line 599
undef($memory_7);
#line 599
undef($memory_8);
#line 599
undef($memory_9);
#line 599
undef($memory_10);
#line 599
undef($memory_11);
#line 599
undef($memory_0);
#line 599
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_while($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 603
$memory_2 = translator_priv::save_registers($memory_1);
#line 604
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 605
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 606
$memory_5 = $memory_1->{'debug'};
#line 606
$memory_5 = $memory_5->{'nast_debug'};
#line 607
translator_priv::print_sim_label($memory_4, $memory_1);
#line 608
$memory_7 = $memory_0->{'cond'};
#line 608
$memory_6 = translator_priv::calc_val($memory_7, $memory_1);
#line 608
undef($memory_7);
#line 609
$memory_8 = "!";
#line 609
$memory_7 = {dest => $memory_6,src => $memory_6,op => $memory_8,};
#line 609
undef($memory_8);
#line 609
$memory_7 = c_rt_lib::ov_mk_arg('una_op', $memory_7);
#line 609
translator_priv::print($memory_1, $memory_7);
#line 609
undef($memory_7);
#line 610
translator_priv::print_if_goto($memory_3, $memory_6, $memory_1);
#line 611
$memory_7 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_4);
#line 612
$memory_8 = $memory_0->{'cmd'};
#line 612
translator_priv::print_cmd($memory_8, $memory_1);
#line 612
undef($memory_8);
#line 613
$memory_8 = $memory_0->{'short'};
#line 613
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 613
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 613
if (c_rt_lib::check_true($memory_8)) {goto label_2;}
#line 613
$memory_9 = translator::last_debug_char($memory_5);
#line 613
translator_priv::start_new_instruction($memory_9, $memory_1);
#line 613
undef($memory_9);
#line 613
goto label_2;
#line 613
label_2:
#line 613
undef($memory_8);
#line 614
$memory_8 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 614
translator_priv::print($memory_1, $memory_8);
#line 614
undef($memory_8);
#line 615
translator_priv::print_sim_label($memory_3, $memory_1);
#line 616
$memory_8 = $memory_7;
#line 616
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_8;
#line 616
undef($memory_8);
#line 617
translator_priv::restore_registers($memory_2, $memory_1);
#line 617
undef($memory_2);
#line 617
undef($memory_3);
#line 617
undef($memory_4);
#line 617
undef($memory_5);
#line 617
undef($memory_6);
#line 617
undef($memory_7);
#line 617
undef($memory_0);
#line 617
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_for($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 621
$memory_2 = translator_priv::save_registers($memory_1);
#line 622
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 623
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 624
$memory_5 = translator_priv::get_sim_label($memory_1);
#line 625
$memory_6 = $memory_0->{'start'};
#line 625
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 625
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 627
$memory_7 = c_rt_lib::ov_is($memory_6, 'var_decl');
#line 627
if (c_rt_lib::check_true($memory_7)) {goto label_3;}
#line 627
$memory_7 = "NOMATCHALERT";
#line 627
$memory_7 = [$memory_7,$memory_6];
#line 627
die(dfile::ssave($memory_7));
#line 625
label_2:
#line 625
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 626
$memory_9 = "";
#line 626
translator_priv::print_val($memory_8, $memory_9, $memory_1);
#line 626
undef($memory_9);
#line 626
undef($memory_8);
#line 627
goto label_1;
#line 627
label_3:
#line 627
$memory_8 = c_rt_lib::ov_as($memory_6, 'var_decl');
#line 628
translator_priv::print_var_decl($memory_8, $memory_1);
#line 628
undef($memory_8);
#line 629
goto label_1;
#line 629
label_1:
#line 629
undef($memory_6);
#line 629
undef($memory_7);
#line 630
translator_priv::print_sim_label($memory_4, $memory_1);
#line 631
$memory_6 = $memory_0->{'cond'};
#line 631
$memory_6 = c_rt_lib::ov_is($memory_6, 'nop');
#line 631
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 631
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 631
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 632
$memory_8 = $memory_0->{'cond'};
#line 632
$memory_7 = translator_priv::calc_val($memory_8, $memory_1);
#line 632
undef($memory_8);
#line 633
$memory_9 = "!";
#line 633
$memory_8 = {dest => $memory_7,src => $memory_7,op => $memory_9,};
#line 633
undef($memory_9);
#line 633
$memory_8 = c_rt_lib::ov_mk_arg('una_op', $memory_8);
#line 633
translator_priv::print($memory_1, $memory_8);
#line 633
undef($memory_8);
#line 634
translator_priv::print_if_goto($memory_3, $memory_7, $memory_1);
#line 634
undef($memory_7);
#line 635
goto label_5;
#line 635
label_5:
#line 635
undef($memory_6);
#line 636
$memory_6 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_5);
#line 637
$memory_7 = $memory_0->{'cmd'};
#line 637
translator_priv::print_cmd($memory_7, $memory_1);
#line 637
undef($memory_7);
#line 638
translator_priv::print_sim_label($memory_5, $memory_1);
#line 639
$memory_7 = $memory_0->{'iter'};
#line 639
$memory_8 = "";
#line 639
translator_priv::print_val($memory_7, $memory_8, $memory_1);
#line 639
undef($memory_8);
#line 639
undef($memory_7);
#line 640
$memory_8 = $memory_0->{'cmd'};
#line 640
$memory_8 = $memory_8->{'debug'};
#line 640
$memory_7 = translator::last_debug_char($memory_8);
#line 640
undef($memory_8);
#line 640
translator_priv::start_new_instruction($memory_7, $memory_1);
#line 640
undef($memory_7);
#line 641
$memory_7 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 641
translator_priv::print($memory_1, $memory_7);
#line 641
undef($memory_7);
#line 642
translator_priv::print_sim_label($memory_3, $memory_1);
#line 643
$memory_7 = $memory_6;
#line 643
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_7;
#line 643
undef($memory_7);
#line 644
translator_priv::restore_registers($memory_2, $memory_1);
#line 644
undef($memory_2);
#line 644
undef($memory_3);
#line 644
undef($memory_4);
#line 644
undef($memory_5);
#line 644
undef($memory_6);
#line 644
undef($memory_0);
#line 644
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_match($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 648
$memory_2 = translator_priv::save_registers($memory_1);
#line 649
$memory_3 = [];
#line 650
$memory_5 = $memory_0->{'val'};
#line 650
$memory_4 = translator_priv::calc_val($memory_5, $memory_1);
#line 650
undef($memory_5);
#line 651
$memory_5 = translator_priv::new_register($memory_1);
#line 652
$memory_6 = translator_priv::get_sim_label($memory_1);
#line 653
$memory_7 = $memory_0->{'branch_list'};
#line 653
$memory_9 = 0;
#line 653
$memory_10 = 1;
#line 653
$memory_11 = c_rt_lib::array_len($memory_7);
#line 653
label_3:
#line 653
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 653
if (c_rt_lib::check_true($memory_12)) {goto label_1;}
#line 653
$memory_8 = $memory_7->[$memory_9];
#line 654
$memory_13 = $memory_8->{'debug'};
#line 654
translator_priv::start_new_instruction($memory_13, $memory_1);
#line 654
undef($memory_13);
#line 655
$memory_14 = $memory_8->{'variant'};
#line 655
$memory_14 = $memory_14->{'name'};
#line 655
$memory_13 = {dest => $memory_5,src => $memory_4,type => $memory_14,};
#line 655
undef($memory_14);
#line 655
$memory_13 = c_rt_lib::ov_mk_arg('ov_is', $memory_13);
#line 655
translator_priv::print($memory_1, $memory_13);
#line 655
undef($memory_13);
#line 656
$memory_13 = translator_priv::get_sim_label($memory_1);
#line 657
translator_priv::print_if_goto($memory_13, $memory_5, $memory_1);
#line 658
array::push($memory_3, $memory_13);
#line 658
undef($memory_13);
#line 659
$memory_9 = $memory_9 + $memory_10;
#line 659
goto label_3;
#line 659
label_1:
#line 659
undef($memory_7);
#line 659
undef($memory_8);
#line 659
undef($memory_9);
#line 659
undef($memory_10);
#line 659
undef($memory_11);
#line 659
undef($memory_12);
#line 660
$memory_7 = "NOMATCHALERT";
#line 660
translator_priv::load_const($memory_7, $memory_5, $memory_1);
#line 660
undef($memory_7);
#line 661
$memory_8 = [$memory_5,$memory_4];
#line 661
$memory_7 = {dest => $memory_5,src => $memory_8,};
#line 661
undef($memory_8);
#line 661
$memory_7 = c_rt_lib::ov_mk_arg('arr_decl', $memory_7);
#line 661
translator_priv::print($memory_1, $memory_7);
#line 661
undef($memory_7);
#line 662
$memory_7 = c_rt_lib::ov_mk_arg('die', $memory_5);
#line 662
translator_priv::print($memory_1, $memory_7);
#line 662
undef($memory_7);
#line 663
$memory_7 = 0;
#line 664
$memory_8 = $memory_0->{'branch_list'};
#line 664
$memory_10 = 0;
#line 664
$memory_11 = 1;
#line 664
$memory_12 = c_rt_lib::array_len($memory_8);
#line 664
label_6:
#line 664
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 664
if (c_rt_lib::check_true($memory_13)) {goto label_4;}
#line 664
$memory_9 = $memory_8->[$memory_10];
#line 665
$memory_14 = $memory_9->{'cmd'};
#line 665
$memory_14 = $memory_14->{'debug'};
#line 665
translator_priv::start_new_instruction($memory_14, $memory_1);
#line 665
undef($memory_14);
#line 666
$memory_14 = $memory_3->[$memory_7];
#line 666
translator_priv::print_sim_label($memory_14, $memory_1);
#line 666
undef($memory_14);
#line 667
$memory_14 = translator_priv::save_registers($memory_1);
#line 668
$memory_15 = $memory_9->{'variant'};
#line 668
$memory_15 = $memory_15->{'value'};
#line 668
$memory_16 = c_rt_lib::ov_is($memory_15, 'value');
#line 668
if (c_rt_lib::check_true($memory_16)) {goto label_8;}
#line 671
$memory_16 = c_rt_lib::ov_is($memory_15, 'none');
#line 671
if (c_rt_lib::check_true($memory_16)) {goto label_9;}
#line 671
$memory_16 = "NOMATCHALERT";
#line 671
$memory_16 = [$memory_16,$memory_15];
#line 671
die(dfile::ssave($memory_16));
#line 668
label_8:
#line 668
$memory_17 = c_rt_lib::ov_as($memory_15, 'value');
#line 669
$memory_18 = translator_priv::print_var_decl($memory_17, $memory_1);
#line 670
$memory_20 = $memory_9->{'variant'};
#line 670
$memory_20 = $memory_20->{'name'};
#line 670
$memory_19 = {dest => $memory_18,src => $memory_4,type => $memory_20,};
#line 670
undef($memory_20);
#line 670
$memory_19 = c_rt_lib::ov_mk_arg('ov_as', $memory_19);
#line 670
translator_priv::print($memory_1, $memory_19);
#line 670
undef($memory_19);
#line 670
undef($memory_18);
#line 670
undef($memory_17);
#line 671
goto label_7;
#line 671
label_9:
#line 672
goto label_7;
#line 672
label_7:
#line 672
undef($memory_15);
#line 672
undef($memory_16);
#line 673
$memory_15 = $memory_9->{'cmd'};
#line 673
translator_priv::print_cmd($memory_15, $memory_1);
#line 673
undef($memory_15);
#line 674
translator_priv::restore_registers($memory_14, $memory_1);
#line 675
$memory_16 = $memory_9->{'cmd'};
#line 675
$memory_16 = $memory_16->{'debug'};
#line 675
$memory_15 = translator::last_debug_char($memory_16);
#line 675
undef($memory_16);
#line 675
translator_priv::start_new_instruction($memory_15, $memory_1);
#line 675
undef($memory_15);
#line 676
$memory_15 = c_rt_lib::ov_mk_arg('goto', $memory_6);
#line 676
translator_priv::print($memory_1, $memory_15);
#line 676
undef($memory_15);
#line 677
$memory_15 = 1;
#line 677
$memory_7 = $memory_7 + $memory_15;
#line 677
undef($memory_15);
#line 677
undef($memory_14);
#line 678
$memory_10 = $memory_10 + $memory_11;
#line 678
goto label_6;
#line 678
label_4:
#line 678
undef($memory_8);
#line 678
undef($memory_9);
#line 678
undef($memory_10);
#line 678
undef($memory_11);
#line 678
undef($memory_12);
#line 678
undef($memory_13);
#line 679
translator_priv::print_sim_label($memory_6, $memory_1);
#line 680
translator_priv::restore_registers($memory_2, $memory_1);
#line 680
undef($memory_2);
#line 680
undef($memory_3);
#line 680
undef($memory_4);
#line 680
undef($memory_5);
#line 680
undef($memory_6);
#line 680
undef($memory_7);
#line 680
undef($memory_0);
#line 680
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::move($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 684
$memory_3 = "";
#line 684
$memory_3 = c_rt_lib::to_nl($memory_0 eq $memory_3);
#line 684
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 684
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 684
undef($memory_0);
#line 684
undef($memory_1);
#line 684
undef($memory_3);
#line 684
$_[2] = $memory_2;return;
#line 684
goto label_2;
#line 684
label_2:
#line 684
undef($memory_3);
#line 685
$memory_3 = {dest => $memory_0,src => $memory_1,};
#line 685
$memory_3 = c_rt_lib::ov_mk_arg('move', $memory_3);
#line 685
translator_priv::print($memory_2, $memory_3);
#line 685
undef($memory_3);
#line 685
undef($memory_0);
#line 685
undef($memory_1);
#line 685
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_bin_op_operator_command($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 690
$memory_5 = "+";
#line 690
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 690
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 690
$memory_5 = "+=";
#line 690
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 690
label_3:
#line 690
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 690
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 691
$memory_6 = "+";
#line 691
$memory_3 = $memory_6;
#line 691
undef($memory_6);
#line 692
goto label_10;
#line 692
label_2:
#line 692
$memory_5 = "-";
#line 692
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 692
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 692
$memory_5 = "-=";
#line 692
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 692
label_5:
#line 692
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 692
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 693
$memory_6 = "-";
#line 693
$memory_3 = $memory_6;
#line 693
undef($memory_6);
#line 694
goto label_10;
#line 694
label_4:
#line 694
$memory_5 = "*";
#line 694
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 694
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 694
$memory_5 = "*=";
#line 694
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 694
label_7:
#line 694
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 694
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 695
$memory_6 = "*";
#line 695
$memory_3 = $memory_6;
#line 695
undef($memory_6);
#line 696
goto label_10;
#line 696
label_6:
#line 696
$memory_5 = "/";
#line 696
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 696
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 696
$memory_5 = "/=";
#line 696
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 696
label_9:
#line 696
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 696
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 697
$memory_6 = "/";
#line 697
$memory_3 = $memory_6;
#line 697
undef($memory_6);
#line 698
goto label_10;
#line 698
label_8:
#line 698
$memory_5 = ".";
#line 698
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 698
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 698
$memory_5 = ".=";
#line 698
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 698
label_11:
#line 698
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 698
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 699
$memory_6 = ".";
#line 699
$memory_3 = $memory_6;
#line 699
undef($memory_6);
#line 700
goto label_10;
#line 700
label_10:
#line 700
undef($memory_5);
#line 701
$memory_5 = {dest => $memory_0,left => $memory_1,right => $memory_2,op => $memory_3,};
#line 701
$memory_5 = c_rt_lib::ov_mk_arg('bin_op', $memory_5);
#line 701
translator_priv::print($memory_4, $memory_5);
#line 701
undef($memory_5);
#line 701
undef($memory_0);
#line 701
undef($memory_1);
#line 701
undef($memory_2);
#line 701
undef($memory_3);
#line 701
$_[4] = $memory_4;return;
$_[4] = $memory_4;}

sub translator_priv::print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 705
$memory_3 = $memory_0->{'debug'};
#line 705
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 705
$memory_2 = {cmd => $memory_1,debug => $memory_3,annotation => $memory_4,};
#line 705
undef($memory_3);
#line 705
undef($memory_4);
#line 706
$memory_3 = "result";
#line 706
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 706
$memory_4 = "commands";
#line 706
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 706
array::push($memory_4, $memory_2);
#line 706
$memory_5 = "commands";
#line 706
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 706
$memory_5 = "result";
#line 706
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 706
undef($memory_5);
#line 706
undef($memory_3);
#line 706
undef($memory_4);
#line 707
$memory_3 = {};
#line 707
$memory_4 = "debug";
#line 707
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 707
$memory_5 = $memory_3;
#line 707
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'declarations'} = $memory_5;
#line 707
$memory_6 = "debug";
#line 707
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 707
undef($memory_6);
#line 707
undef($memory_3);
#line 707
undef($memory_4);
#line 707
undef($memory_5);
#line 707
undef($memory_2);
#line 707
undef($memory_1);
#line 707
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::print_if_goto($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 711
$memory_3 = {dest => $memory_0,src => $memory_1,};
#line 711
$memory_3 = c_rt_lib::ov_mk_arg('if_goto', $memory_3);
#line 711
translator_priv::print($memory_2, $memory_3);
#line 711
undef($memory_3);
#line 711
undef($memory_0);
#line 711
undef($memory_1);
#line 711
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_get_from_index($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 716
$memory_4 = {dest => $memory_0,src => $memory_1,idx => $memory_2,};
#line 716
$memory_4 = c_rt_lib::ov_mk_arg('get_frm_idx', $memory_4);
#line 716
translator_priv::print($memory_3, $memory_4);
#line 716
undef($memory_4);
#line 716
undef($memory_0);
#line 716
undef($memory_1);
#line 716
undef($memory_2);
#line 716
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_set_at_index($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 721
$memory_4 = {src => $memory_0,idx => $memory_1,val => $memory_2,};
#line 721
$memory_4 = c_rt_lib::ov_mk_arg('set_at_idx', $memory_4);
#line 721
translator_priv::print($memory_3, $memory_4);
#line 721
undef($memory_4);
#line 721
undef($memory_0);
#line 721
undef($memory_1);
#line 721
undef($memory_2);
#line 721
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_get_value($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 726
$memory_4 = {dest => $memory_0,src => $memory_1,key => $memory_2,};
#line 726
$memory_4 = c_rt_lib::ov_mk_arg('get_val', $memory_4);
#line 726
translator_priv::print($memory_3, $memory_4);
#line 726
undef($memory_4);
#line 726
undef($memory_0);
#line 726
undef($memory_1);
#line 726
undef($memory_2);
#line 726
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_set_value($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 730
$memory_4 = {src => $memory_0,key => $memory_1,val => $memory_2,};
#line 730
$memory_4 = c_rt_lib::ov_mk_arg('set_val', $memory_4);
#line 730
translator_priv::print($memory_3, $memory_4);
#line 730
undef($memory_4);
#line 730
undef($memory_0);
#line 730
undef($memory_1);
#line 730
undef($memory_2);
#line 730
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::get_struct_of_lvalue($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 734
$memory_1 = [];
#line 735
label_2:
#line 735
$memory_2 = $memory_0;
#line 735
$memory_2 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 735
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 735
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 736
$memory_3 = $memory_0;
#line 736
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 737
$memory_4 = $memory_3->{'op'};
#line 737
$memory_5 = "ARRAY_INDEX";
#line 737
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 737
undef($memory_5);
#line 737
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 737
$memory_4 = $memory_3->{'op'};
#line 737
$memory_5 = "HASH_INDEX";
#line 737
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 737
undef($memory_5);
#line 737
label_6:
#line 737
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 737
$memory_4 = $memory_3->{'op'};
#line 737
$memory_5 = "->";
#line 737
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 737
undef($memory_5);
#line 737
label_5:
#line 737
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 737
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 737
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 737
$memory_5 = [];
#line 737
die(dfile::ssave($memory_5));
#line 737
goto label_4;
#line 737
label_4:
#line 737
undef($memory_4);
#line 737
undef($memory_5);
#line 738
$memory_4 = [];
#line 739
$memory_5 = $memory_3->{'op'};
#line 739
$memory_6 = "ARRAY_INDEX";
#line 739
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 739
undef($memory_6);
#line 739
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 739
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 740
$memory_7 = $memory_3->{'right'};
#line 740
$memory_7 = c_rt_lib::ov_mk_arg('index', $memory_7);
#line 740
$memory_6 = [$memory_7];
#line 740
undef($memory_7);
#line 740
$memory_4 = $memory_6;
#line 740
undef($memory_6);
#line 741
goto label_7;
#line 741
label_8:
#line 741
$memory_5 = $memory_3->{'op'};
#line 741
$memory_6 = "HASH_INDEX";
#line 741
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 741
undef($memory_6);
#line 741
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 741
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 742
$memory_7 = $memory_3->{'right'};
#line 742
$memory_7 = c_rt_lib::ov_mk_arg('hashkey', $memory_7);
#line 742
$memory_6 = [$memory_7];
#line 742
undef($memory_7);
#line 742
$memory_4 = $memory_6;
#line 742
undef($memory_6);
#line 743
goto label_7;
#line 743
label_9:
#line 744
$memory_7 = $memory_3->{'right'};
#line 744
$memory_7 = c_rt_lib::ov_as($memory_7, 'hash_key');
#line 744
$memory_7 = c_rt_lib::ov_mk_arg('key', $memory_7);
#line 744
$memory_6 = [$memory_7];
#line 744
undef($memory_7);
#line 744
$memory_4 = $memory_6;
#line 744
undef($memory_6);
#line 745
goto label_7;
#line 745
label_7:
#line 745
undef($memory_5);
#line 746
array::append($memory_4, $memory_1);
#line 747
$memory_1 = $memory_4;
#line 748
$memory_5 = $memory_3->{'left'};
#line 748
$memory_0 = $memory_5;
#line 748
undef($memory_5);
#line 748
undef($memory_3);
#line 748
undef($memory_4);
#line 749
goto label_2;
#line 749
label_1:
#line 749
undef($memory_2);
#line 750
$_[0] = $memory_0;return $memory_1;
#line 750
undef($memory_1);
#line 750
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::get_value_of_lvalue($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 755
$memory_3 = translator_priv::get_struct_of_lvalue($memory_0);
#line 756
$memory_4 = $memory_0;
#line 756
$memory_4 = c_rt_lib::ov_as($memory_4, 'var');
#line 757
$memory_6 = translator_priv::get_var_register($memory_4, $memory_2);
#line 757
$memory_5 = [$memory_6];
#line 757
undef($memory_6);
#line 758
$memory_6 = [];
#line 759
$memory_7 = array::len($memory_3);
#line 759
$memory_8 = 0;
#line 759
$memory_9 = 1;
#line 759
label_3:
#line 759
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 759
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 760
$memory_11 = translator_priv::new_register($memory_2);
#line 760
array::push($memory_5, $memory_11);
#line 760
undef($memory_11);
#line 761
$memory_11 = $memory_3->[$memory_8];
#line 761
$memory_12 = c_rt_lib::ov_is($memory_11, 'index');
#line 761
if (c_rt_lib::check_true($memory_12)) {goto label_5;}
#line 766
$memory_12 = c_rt_lib::ov_is($memory_11, 'hashkey');
#line 766
if (c_rt_lib::check_true($memory_12)) {goto label_6;}
#line 771
$memory_12 = c_rt_lib::ov_is($memory_11, 'key');
#line 771
if (c_rt_lib::check_true($memory_12)) {goto label_7;}
#line 771
$memory_12 = "NOMATCHALERT";
#line 771
$memory_12 = [$memory_12,$memory_11];
#line 771
die(dfile::ssave($memory_12));
#line 761
label_5:
#line 761
$memory_13 = c_rt_lib::ov_as($memory_11, 'index');
#line 762
$memory_14 = translator_priv::calc_val($memory_13, $memory_2);
#line 763
$memory_16 = $memory_5->[$memory_8];
#line 763
$memory_15 = {value => $memory_16,index => $memory_14,};
#line 763
undef($memory_16);
#line 763
$memory_15 = c_rt_lib::ov_mk_arg('index', $memory_15);
#line 763
array::push($memory_6, $memory_15);
#line 763
undef($memory_15);
#line 764
$memory_15 = $memory_1;
#line 764
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 764
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 764
if (c_rt_lib::check_true($memory_16)) {goto label_10;}
#line 764
$memory_15 = array::len($memory_3);
#line 764
$memory_17 = 1;
#line 764
$memory_15 = $memory_15 - $memory_17;
#line 764
undef($memory_17);
#line 764
$memory_15 = c_rt_lib::to_nl($memory_8 == $memory_15);
#line 764
label_10:
#line 764
undef($memory_16);
#line 764
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 764
if (c_rt_lib::check_true($memory_15)) {goto label_9;}
#line 764
undef($memory_11);
#line 764
undef($memory_12);
#line 764
undef($memory_13);
#line 764
undef($memory_14);
#line 764
undef($memory_15);
#line 764
goto label_1;
#line 764
goto label_9;
#line 764
label_9:
#line 764
undef($memory_15);
#line 765
$memory_16 = 1;
#line 765
$memory_16 = $memory_8 + $memory_16;
#line 765
$memory_15 = $memory_5->[$memory_16];
#line 765
undef($memory_16);
#line 765
$memory_16 = "get_ref_arr";
#line 765
$memory_18 = $memory_5->[$memory_8];
#line 765
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_18);
#line 765
$memory_19 = c_rt_lib::ov_mk_arg('val', $memory_14);
#line 765
$memory_17 = [$memory_18,$memory_19];
#line 765
undef($memory_18);
#line 765
undef($memory_19);
#line 765
translator_priv::print_call_base($memory_15, $memory_16, $memory_17, $memory_2);
#line 765
undef($memory_17);
#line 765
undef($memory_16);
#line 765
undef($memory_15);
#line 765
undef($memory_14);
#line 765
undef($memory_13);
#line 766
goto label_4;
#line 766
label_6:
#line 766
$memory_13 = c_rt_lib::ov_as($memory_11, 'hashkey');
#line 767
$memory_14 = translator_priv::calc_val($memory_13, $memory_2);
#line 768
$memory_16 = $memory_5->[$memory_8];
#line 768
$memory_15 = {value => $memory_16,key => $memory_14,};
#line 768
undef($memory_16);
#line 768
$memory_15 = c_rt_lib::ov_mk_arg('hashkey', $memory_15);
#line 768
array::push($memory_6, $memory_15);
#line 768
undef($memory_15);
#line 769
$memory_15 = $memory_1;
#line 769
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 769
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 769
if (c_rt_lib::check_true($memory_16)) {goto label_13;}
#line 769
$memory_15 = array::len($memory_3);
#line 769
$memory_17 = 1;
#line 769
$memory_15 = $memory_15 - $memory_17;
#line 769
undef($memory_17);
#line 769
$memory_15 = c_rt_lib::to_nl($memory_8 == $memory_15);
#line 769
label_13:
#line 769
undef($memory_16);
#line 769
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 769
if (c_rt_lib::check_true($memory_15)) {goto label_12;}
#line 769
undef($memory_11);
#line 769
undef($memory_12);
#line 769
undef($memory_13);
#line 769
undef($memory_14);
#line 769
undef($memory_15);
#line 769
goto label_1;
#line 769
goto label_12;
#line 769
label_12:
#line 769
undef($memory_15);
#line 770
$memory_16 = 1;
#line 770
$memory_16 = $memory_8 + $memory_16;
#line 770
$memory_15 = $memory_5->[$memory_16];
#line 770
undef($memory_16);
#line 770
$memory_16 = "get_ref_hash";
#line 770
$memory_18 = $memory_5->[$memory_8];
#line 770
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_18);
#line 770
$memory_19 = c_rt_lib::ov_mk_arg('val', $memory_14);
#line 770
$memory_17 = [$memory_18,$memory_19];
#line 770
undef($memory_18);
#line 770
undef($memory_19);
#line 770
translator_priv::print_call_base($memory_15, $memory_16, $memory_17, $memory_2);
#line 770
undef($memory_17);
#line 770
undef($memory_16);
#line 770
undef($memory_15);
#line 770
undef($memory_14);
#line 770
undef($memory_13);
#line 771
goto label_4;
#line 771
label_7:
#line 771
$memory_13 = c_rt_lib::ov_as($memory_11, 'key');
#line 772
$memory_15 = $memory_5->[$memory_8];
#line 772
$memory_14 = {value => $memory_15,key => $memory_13,};
#line 772
undef($memory_15);
#line 772
$memory_14 = c_rt_lib::ov_mk_arg('key', $memory_14);
#line 772
array::push($memory_6, $memory_14);
#line 772
undef($memory_14);
#line 773
$memory_14 = $memory_1;
#line 773
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 773
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 773
if (c_rt_lib::check_true($memory_15)) {goto label_16;}
#line 773
$memory_14 = array::len($memory_3);
#line 773
$memory_16 = 1;
#line 773
$memory_14 = $memory_14 - $memory_16;
#line 773
undef($memory_16);
#line 773
$memory_14 = c_rt_lib::to_nl($memory_8 == $memory_14);
#line 773
label_16:
#line 773
undef($memory_15);
#line 773
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 773
if (c_rt_lib::check_true($memory_14)) {goto label_15;}
#line 773
undef($memory_11);
#line 773
undef($memory_12);
#line 773
undef($memory_13);
#line 773
undef($memory_14);
#line 773
goto label_1;
#line 773
goto label_15;
#line 773
label_15:
#line 773
undef($memory_14);
#line 774
$memory_15 = 1;
#line 774
$memory_15 = $memory_8 + $memory_15;
#line 774
$memory_14 = $memory_5->[$memory_15];
#line 774
undef($memory_15);
#line 774
translator_priv::load_const($memory_13, $memory_14, $memory_2);
#line 774
undef($memory_14);
#line 775
$memory_15 = 1;
#line 775
$memory_15 = $memory_8 + $memory_15;
#line 775
$memory_14 = $memory_5->[$memory_15];
#line 775
undef($memory_15);
#line 775
$memory_15 = "get_ref_hash";
#line 775
$memory_17 = $memory_5->[$memory_8];
#line 775
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_17);
#line 775
$memory_19 = 1;
#line 775
$memory_19 = $memory_8 + $memory_19;
#line 775
$memory_18 = $memory_5->[$memory_19];
#line 775
undef($memory_19);
#line 775
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_18);
#line 775
$memory_16 = [$memory_17,$memory_18];
#line 775
undef($memory_17);
#line 775
undef($memory_18);
#line 775
translator_priv::print_call_base($memory_14, $memory_15, $memory_16, $memory_2);
#line 775
undef($memory_16);
#line 775
undef($memory_15);
#line 775
undef($memory_14);
#line 775
undef($memory_13);
#line 779
goto label_4;
#line 779
label_4:
#line 779
undef($memory_11);
#line 779
undef($memory_12);
#line 780
$memory_8 = $memory_8 + $memory_9;
#line 780
goto label_3;
#line 780
label_1:
#line 780
undef($memory_7);
#line 780
undef($memory_8);
#line 780
undef($memory_9);
#line 780
undef($memory_10);
#line 781
$memory_8 = array::len($memory_5);
#line 781
$memory_9 = 1;
#line 781
$memory_8 = $memory_8 - $memory_9;
#line 781
undef($memory_9);
#line 781
$memory_7 = $memory_5->[$memory_8];
#line 781
undef($memory_8);
#line 781
$memory_7 = c_rt_lib::ov_mk_arg('value', $memory_7);
#line 781
array::push($memory_6, $memory_7);
#line 781
undef($memory_7);
#line 782
undef($memory_0);
#line 782
undef($memory_1);
#line 782
undef($memory_3);
#line 782
undef($memory_4);
#line 782
undef($memory_5);
#line 782
$_[2] = $memory_2;return $memory_6;
#line 782
undef($memory_3);
#line 782
undef($memory_4);
#line 782
undef($memory_5);
#line 782
undef($memory_6);
#line 782
undef($memory_0);
#line 782
undef($memory_1);
#line 782
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::set_value_of_lvalue($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 787
$memory_3 = translator_priv::save_registers($memory_2);
#line 788
$memory_4 = array::len($memory_0);
#line 789
$memory_6 = 1;
#line 789
$memory_6 = $memory_4 - $memory_6;
#line 789
$memory_5 = $memory_0->[$memory_6];
#line 789
undef($memory_6);
#line 789
$memory_5 = c_rt_lib::ov_as($memory_5, 'value');
#line 790
$memory_6 = "";
#line 791
$memory_7 = 2;
#line 791
$memory_7 = $memory_4 - $memory_7;
#line 791
label_2:
#line 791
$memory_8 = 0;
#line 791
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 791
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 791
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 792
$memory_9 = $memory_0->[$memory_7];
#line 792
$memory_10 = c_rt_lib::ov_is($memory_9, 'value');
#line 792
if (c_rt_lib::check_true($memory_10)) {goto label_5;}
#line 794
$memory_10 = c_rt_lib::ov_is($memory_9, 'index');
#line 794
if (c_rt_lib::check_true($memory_10)) {goto label_6;}
#line 801
$memory_10 = c_rt_lib::ov_is($memory_9, 'hashkey');
#line 801
if (c_rt_lib::check_true($memory_10)) {goto label_7;}
#line 808
$memory_10 = c_rt_lib::ov_is($memory_9, 'key');
#line 808
if (c_rt_lib::check_true($memory_10)) {goto label_8;}
#line 808
$memory_10 = "NOMATCHALERT";
#line 808
$memory_10 = [$memory_10,$memory_9];
#line 808
die(dfile::ssave($memory_10));
#line 792
label_5:
#line 792
$memory_11 = c_rt_lib::ov_as($memory_9, 'value');
#line 793
$memory_12 = [];
#line 793
die(dfile::ssave($memory_12));
#line 793
undef($memory_12);
#line 793
undef($memory_11);
#line 794
goto label_4;
#line 794
label_6:
#line 794
$memory_11 = c_rt_lib::ov_as($memory_9, 'index');
#line 795
$memory_12 = $memory_1;
#line 795
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 795
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 795
if (c_rt_lib::check_true($memory_13)) {goto label_11;}
#line 795
$memory_12 = 2;
#line 795
$memory_12 = $memory_4 - $memory_12;
#line 795
$memory_12 = c_rt_lib::to_nl($memory_7 == $memory_12);
#line 795
label_11:
#line 795
undef($memory_13);
#line 795
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 795
if (c_rt_lib::check_true($memory_12)) {goto label_10;}
#line 796
$memory_13 = $memory_11->{'value'};
#line 796
$memory_14 = $memory_11->{'index'};
#line 796
translator_priv::print_set_at_index($memory_13, $memory_14, $memory_5, $memory_2);
#line 796
undef($memory_14);
#line 796
undef($memory_13);
#line 797
goto label_9;
#line 797
label_10:
#line 798
$memory_13 = "";
#line 798
$memory_14 = "set_ref_arr";
#line 798
$memory_16 = $memory_11->{'value'};
#line 798
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 798
$memory_17 = $memory_11->{'index'};
#line 798
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_17);
#line 798
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 798
$memory_15 = [$memory_16,$memory_17,$memory_18];
#line 798
undef($memory_16);
#line 798
undef($memory_17);
#line 798
undef($memory_18);
#line 798
translator_priv::print_call_base($memory_13, $memory_14, $memory_15, $memory_2);
#line 798
undef($memory_15);
#line 798
undef($memory_14);
#line 798
undef($memory_13);
#line 799
goto label_9;
#line 799
label_9:
#line 799
undef($memory_12);
#line 800
$memory_12 = $memory_11->{'value'};
#line 800
$memory_5 = $memory_12;
#line 800
undef($memory_12);
#line 800
undef($memory_11);
#line 801
goto label_4;
#line 801
label_7:
#line 801
$memory_11 = c_rt_lib::ov_as($memory_9, 'hashkey');
#line 802
$memory_12 = $memory_1;
#line 802
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 802
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 802
if (c_rt_lib::check_true($memory_13)) {goto label_14;}
#line 802
$memory_12 = 2;
#line 802
$memory_12 = $memory_4 - $memory_12;
#line 802
$memory_12 = c_rt_lib::to_nl($memory_7 == $memory_12);
#line 802
label_14:
#line 802
undef($memory_13);
#line 802
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 802
if (c_rt_lib::check_true($memory_12)) {goto label_13;}
#line 803
$memory_13 = "";
#line 803
$memory_14 = "hash_set_value";
#line 803
$memory_16 = $memory_11->{'value'};
#line 803
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 803
$memory_17 = $memory_11->{'key'};
#line 803
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_17);
#line 803
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 803
$memory_15 = [$memory_16,$memory_17,$memory_18];
#line 803
undef($memory_16);
#line 803
undef($memory_17);
#line 803
undef($memory_18);
#line 803
translator_priv::print_call_base($memory_13, $memory_14, $memory_15, $memory_2);
#line 803
undef($memory_15);
#line 803
undef($memory_14);
#line 803
undef($memory_13);
#line 804
goto label_12;
#line 804
label_13:
#line 805
$memory_13 = "";
#line 805
$memory_14 = "set_ref_hash";
#line 805
$memory_16 = $memory_11->{'value'};
#line 805
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 805
$memory_17 = $memory_11->{'key'};
#line 805
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_17);
#line 805
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 805
$memory_15 = [$memory_16,$memory_17,$memory_18];
#line 805
undef($memory_16);
#line 805
undef($memory_17);
#line 805
undef($memory_18);
#line 805
translator_priv::print_call_base($memory_13, $memory_14, $memory_15, $memory_2);
#line 805
undef($memory_15);
#line 805
undef($memory_14);
#line 805
undef($memory_13);
#line 806
goto label_12;
#line 806
label_12:
#line 806
undef($memory_12);
#line 807
$memory_12 = $memory_11->{'value'};
#line 807
$memory_5 = $memory_12;
#line 807
undef($memory_12);
#line 807
undef($memory_11);
#line 808
goto label_4;
#line 808
label_8:
#line 808
$memory_11 = c_rt_lib::ov_as($memory_9, 'key');
#line 809
$memory_12 = $memory_1;
#line 809
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 809
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 809
if (c_rt_lib::check_true($memory_13)) {goto label_17;}
#line 809
$memory_12 = 2;
#line 809
$memory_12 = $memory_4 - $memory_12;
#line 809
$memory_12 = c_rt_lib::to_nl($memory_7 == $memory_12);
#line 809
label_17:
#line 809
undef($memory_13);
#line 809
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 809
if (c_rt_lib::check_true($memory_12)) {goto label_16;}
#line 810
$memory_13 = $memory_11->{'value'};
#line 810
$memory_14 = $memory_11->{'key'};
#line 810
translator_priv::print_set_value($memory_13, $memory_14, $memory_5, $memory_2);
#line 810
undef($memory_14);
#line 810
undef($memory_13);
#line 811
goto label_15;
#line 811
label_16:
#line 812
$memory_13 = "";
#line 812
$memory_13 = c_rt_lib::to_nl($memory_6 eq $memory_13);
#line 812
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 812
if (c_rt_lib::check_true($memory_13)) {goto label_19;}
#line 812
$memory_14 = translator_priv::new_register($memory_2);
#line 812
$memory_6 = $memory_14;
#line 812
undef($memory_14);
#line 812
goto label_19;
#line 812
label_19:
#line 812
undef($memory_13);
#line 813
$memory_13 = $memory_11->{'key'};
#line 813
translator_priv::load_const($memory_13, $memory_6, $memory_2);
#line 813
undef($memory_13);
#line 814
$memory_13 = "";
#line 814
$memory_14 = "set_ref_hash";
#line 814
$memory_16 = $memory_11->{'value'};
#line 814
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 814
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_6);
#line 814
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 814
$memory_15 = [$memory_16,$memory_17,$memory_18];
#line 814
undef($memory_16);
#line 814
undef($memory_17);
#line 814
undef($memory_18);
#line 814
translator_priv::print_call_base($memory_13, $memory_14, $memory_15, $memory_2);
#line 814
undef($memory_15);
#line 814
undef($memory_14);
#line 814
undef($memory_13);
#line 815
goto label_15;
#line 815
label_15:
#line 815
undef($memory_12);
#line 816
$memory_12 = $memory_11->{'value'};
#line 816
$memory_5 = $memory_12;
#line 816
undef($memory_12);
#line 816
undef($memory_11);
#line 817
goto label_4;
#line 817
label_4:
#line 817
undef($memory_9);
#line 817
undef($memory_10);
#line 817
$memory_9 = 1;
#line 817
$memory_7 = $memory_7 - $memory_9;
#line 817
undef($memory_9);
#line 818
goto label_2;
#line 818
label_1:
#line 818
undef($memory_7);
#line 818
undef($memory_8);
#line 819
$memory_7 = "";
#line 819
$memory_7 = c_rt_lib::to_nl($memory_6 ne $memory_7);
#line 819
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 819
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 819
translator_priv::restore_registers($memory_3, $memory_2);
#line 819
goto label_21;
#line 819
label_21:
#line 819
undef($memory_7);
#line 819
undef($memory_3);
#line 819
undef($memory_4);
#line 819
undef($memory_5);
#line 819
undef($memory_6);
#line 819
undef($memory_0);
#line 819
undef($memory_1);
#line 819
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::make_string($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 823
$memory_2 = "";
#line 824
$memory_3 = 0;
#line 825
$memory_4 = $memory_0->{'arr'};
#line 825
$memory_6 = 0;
#line 825
$memory_7 = 1;
#line 825
$memory_8 = c_rt_lib::array_len($memory_4);
#line 825
label_3:
#line 825
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 825
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 825
$memory_5 = $memory_4->[$memory_6];
#line 826
$memory_10 = 0;
#line 826
$memory_10 = c_rt_lib::to_nl($memory_3 > $memory_10);
#line 826
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 826
if (c_rt_lib::check_true($memory_10)) {goto label_5;}
#line 826
$memory_11 = string::lf();
#line 826
$memory_2 = $memory_2 . $memory_11;
#line 826
undef($memory_11);
#line 826
goto label_5;
#line 826
label_5:
#line 826
undef($memory_10);
#line 827
$memory_2 = $memory_2 . $memory_5;
#line 828
$memory_10 = 1;
#line 828
$memory_3 = $memory_3 + $memory_10;
#line 828
undef($memory_10);
#line 829
$memory_6 = $memory_6 + $memory_7;
#line 829
goto label_3;
#line 829
label_1:
#line 829
undef($memory_4);
#line 829
undef($memory_5);
#line 829
undef($memory_6);
#line 829
undef($memory_7);
#line 829
undef($memory_8);
#line 829
undef($memory_9);
#line 830
$memory_4 = $memory_0->{'last'};
#line 830
$memory_5 = c_rt_lib::ov_is($memory_4, 'new_line');
#line 830
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 832
$memory_5 = c_rt_lib::ov_is($memory_4, 'end');
#line 832
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 832
$memory_5 = "NOMATCHALERT";
#line 832
$memory_5 = [$memory_5,$memory_4];
#line 832
die(dfile::ssave($memory_5));
#line 830
label_7:
#line 831
$memory_6 = string::lf();
#line 831
$memory_2 = $memory_2 . $memory_6;
#line 831
undef($memory_6);
#line 832
goto label_6;
#line 832
label_8:
#line 833
goto label_6;
#line 833
label_6:
#line 833
undef($memory_4);
#line 833
undef($memory_5);
#line 834
undef($memory_0);
#line 834
undef($memory_3);
#line 834
$_[1] = $memory_1;return $memory_2;
#line 834
undef($memory_2);
#line 834
undef($memory_3);
#line 834
undef($memory_0);
#line 834
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_ternary_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 838
$memory_3 = $memory_0->{'op'};
#line 838
$memory_4 = "?";
#line 838
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 838
undef($memory_4);
#line 838
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 838
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 838
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 838
$memory_4 = [];
#line 838
die(dfile::ssave($memory_4));
#line 838
goto label_2;
#line 838
label_2:
#line 838
undef($memory_3);
#line 838
undef($memory_4);
#line 839
$memory_3 = translator_priv::get_sim_label($memory_2);
#line 840
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 841
$memory_6 = $memory_0->{'fst'};
#line 841
$memory_5 = translator_priv::dest_val($memory_6, $memory_1, $memory_2);
#line 841
undef($memory_6);
#line 842
translator_priv::print_if_goto($memory_4, $memory_5, $memory_2);
#line 843
$memory_6 = $memory_0->{'thrd'};
#line 843
translator_priv::print_val($memory_6, $memory_1, $memory_2);
#line 843
undef($memory_6);
#line 844
$memory_6 = c_rt_lib::ov_mk_arg('goto', $memory_3);
#line 844
translator_priv::print($memory_2, $memory_6);
#line 844
undef($memory_6);
#line 845
translator_priv::print_sim_label($memory_4, $memory_2);
#line 846
$memory_6 = $memory_0->{'snd'};
#line 846
translator_priv::print_val($memory_6, $memory_1, $memory_2);
#line 846
undef($memory_6);
#line 847
translator_priv::print_sim_label($memory_3, $memory_2);
#line 847
undef($memory_3);
#line 847
undef($memory_4);
#line 847
undef($memory_5);
#line 847
undef($memory_0);
#line 847
undef($memory_1);
#line 847
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_die($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 851
$memory_2 = translator_priv::new_register($memory_1);
#line 852
$memory_3 = c_rt_lib::ov_mk_arg('arr_decl', $memory_0);
#line 852
translator_priv::print_val($memory_3, $memory_2, $memory_1);
#line 852
undef($memory_3);
#line 853
$memory_3 = c_rt_lib::ov_mk_arg('die', $memory_2);
#line 853
translator_priv::print($memory_1, $memory_3);
#line 853
undef($memory_3);
#line 853
undef($memory_2);
#line 853
undef($memory_0);
#line 853
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_return($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 857
$memory_2 = translator_priv::save_registers($memory_1);
#line 858
$memory_3 = c_rt_lib::ov_mk_none('emp');
#line 859
$memory_4 = $memory_0;
#line 859
$memory_4 = c_rt_lib::ov_is($memory_4, 'nop');
#line 859
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 859
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 859
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 860
$memory_5 = translator_priv::calc_val($memory_0, $memory_1);
#line 860
$memory_5 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 860
$memory_3 = $memory_5;
#line 860
undef($memory_5);
#line 861
goto label_2;
#line 861
label_2:
#line 861
undef($memory_4);
#line 862
translator_priv::print_safe_return($memory_3, $memory_1);
#line 863
translator_priv::restore_registers($memory_2, $memory_1);
#line 863
undef($memory_2);
#line 863
undef($memory_3);
#line 863
undef($memory_0);
#line 863
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_safe_return($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 867
$memory_2 = translator_priv::save_registers($memory_1);
#line 868
$memory_3 = $memory_1->{'logic'};
#line 868
$memory_3 = $memory_3->{'register'};
#line 869
$memory_4 = 1;
#line 869
$memory_4 = -$memory_4;
#line 870
$memory_5 = $memory_1->{'result'};
#line 870
$memory_5 = $memory_5->{'args_type'};
#line 871
$memory_6 = $memory_0;
#line 871
$memory_6 = c_rt_lib::ov_is($memory_6, 'val');
#line 871
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 871
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 872
$memory_7 = $memory_0;
#line 872
$memory_7 = c_rt_lib::ov_as($memory_7, 'val');
#line 872
$memory_4 = $memory_7;
#line 872
undef($memory_7);
#line 873
$memory_7 = array::len($memory_5);
#line 873
$memory_7 = c_rt_lib::to_nl($memory_4 < $memory_7);
#line 873
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 873
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 873
$memory_7 = $memory_5->[$memory_4];
#line 873
$memory_7 = c_rt_lib::ov_is($memory_7, 'ref');
#line 873
label_5:
#line 873
undef($memory_8);
#line 873
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 873
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 874
$memory_8 = translator_priv::new_register($memory_1);
#line 874
$memory_4 = $memory_8;
#line 874
undef($memory_8);
#line 875
$memory_8 = $memory_0;
#line 875
$memory_8 = c_rt_lib::ov_as($memory_8, 'val');
#line 875
translator_priv::move($memory_4, $memory_8, $memory_1);
#line 875
undef($memory_8);
#line 876
$memory_8 = c_rt_lib::ov_mk_arg('val', $memory_4);
#line 876
$memory_0 = $memory_8;
#line 876
undef($memory_8);
#line 877
goto label_4;
#line 877
label_4:
#line 877
undef($memory_7);
#line 878
goto label_2;
#line 878
label_2:
#line 878
undef($memory_6);
#line 879
$memory_6 = 0;
#line 879
label_7:
#line 879
$memory_7 = c_rt_lib::to_nl($memory_6 < $memory_3);
#line 879
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 879
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 880
$memory_8 = array::len($memory_5);
#line 880
$memory_8 = c_rt_lib::to_nl($memory_6 < $memory_8);
#line 880
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 880
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 880
$memory_8 = $memory_5->[$memory_6];
#line 880
$memory_8 = c_rt_lib::ov_is($memory_8, 'ref');
#line 880
label_11:
#line 880
undef($memory_9);
#line 880
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 880
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 880
undef($memory_8);
#line 880
goto label_8;
#line 880
goto label_10;
#line 880
label_10:
#line 880
undef($memory_8);
#line 881
$memory_8 = c_rt_lib::to_nl($memory_6 == $memory_4);
#line 881
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 881
if (c_rt_lib::check_true($memory_8)) {goto label_13;}
#line 881
undef($memory_8);
#line 881
goto label_8;
#line 881
goto label_13;
#line 881
label_13:
#line 881
undef($memory_8);
#line 882
$memory_9 = {
	module => "nlasm",
	name => "reg_t",
};
#line 882
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 882
$memory_8 = ptd::ensure($memory_9, $memory_6);
#line 882
undef($memory_9);
#line 882
translator_priv::undef_reg($memory_8, $memory_1);
#line 882
undef($memory_8);
#line 882
label_8:
#line 882
$memory_8 = 1;
#line 882
$memory_6 = $memory_6 + $memory_8;
#line 882
undef($memory_8);
#line 883
goto label_7;
#line 883
label_6:
#line 883
undef($memory_6);
#line 883
undef($memory_7);
#line 884
$memory_6 = c_rt_lib::ov_mk_arg('return', $memory_0);
#line 884
translator_priv::print($memory_1, $memory_6);
#line 884
undef($memory_6);
#line 885
translator_priv::restore_registers($memory_2, $memory_1);
#line 885
undef($memory_2);
#line 885
undef($memory_3);
#line 885
undef($memory_4);
#line 885
undef($memory_5);
#line 885
undef($memory_0);
#line 885
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::convert_str_to_number($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 889
$memory_1 = string::length($memory_0);
#line 890
$memory_2 = 3;
#line 890
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 890
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 890
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 890
$memory_4 = 1;
#line 890
$memory_5 = 1;
#line 890
$memory_2 = string::substr($memory_0, $memory_4, $memory_5);
#line 890
undef($memory_5);
#line 890
undef($memory_4);
#line 890
$memory_4 = "x";
#line 890
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 890
undef($memory_4);
#line 890
label_3:
#line 890
undef($memory_3);
#line 890
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 890
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 891
$memory_3 = 0;
#line 892
$memory_4 = 2;
#line 892
label_5:
#line 892
$memory_5 = c_rt_lib::to_nl($memory_4 < $memory_1);
#line 892
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 892
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 893
$memory_7 = 1;
#line 893
$memory_6 = string::substr($memory_0, $memory_4, $memory_7);
#line 893
undef($memory_7);
#line 894
$memory_7 = string::ord($memory_6);
#line 895
$memory_8 = 16;
#line 895
$memory_8 = $memory_3 * $memory_8;
#line 895
$memory_3 = $memory_8;
#line 895
undef($memory_8);
#line 896
$memory_10 = 0;
#line 896
$memory_8 = string::ord($memory_10);
#line 896
undef($memory_10);
#line 896
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 896
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 896
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 896
$memory_10 = 9;
#line 896
$memory_8 = string::ord($memory_10);
#line 896
undef($memory_10);
#line 896
$memory_8 = c_rt_lib::to_nl($memory_7 <= $memory_8);
#line 896
label_9:
#line 896
undef($memory_9);
#line 896
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 896
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 897
$memory_10 = 0;
#line 897
$memory_9 = string::ord($memory_10);
#line 897
undef($memory_10);
#line 897
$memory_9 = $memory_7 - $memory_9;
#line 897
$memory_3 = $memory_3 + $memory_9;
#line 897
undef($memory_9);
#line 898
goto label_7;
#line 898
label_8:
#line 898
$memory_10 = "A";
#line 898
$memory_8 = string::ord($memory_10);
#line 898
undef($memory_10);
#line 898
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 898
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 898
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 898
$memory_10 = "F";
#line 898
$memory_8 = string::ord($memory_10);
#line 898
undef($memory_10);
#line 898
$memory_8 = c_rt_lib::to_nl($memory_7 <= $memory_8);
#line 898
label_11:
#line 898
undef($memory_9);
#line 898
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 898
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 899
$memory_10 = "A";
#line 899
$memory_9 = string::ord($memory_10);
#line 899
undef($memory_10);
#line 899
$memory_9 = $memory_7 - $memory_9;
#line 899
$memory_10 = 10;
#line 899
$memory_9 = $memory_9 + $memory_10;
#line 899
undef($memory_10);
#line 899
$memory_3 = $memory_3 + $memory_9;
#line 899
undef($memory_9);
#line 900
goto label_7;
#line 900
label_10:
#line 900
$memory_10 = "a";
#line 900
$memory_8 = string::ord($memory_10);
#line 900
undef($memory_10);
#line 900
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 900
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 900
if (c_rt_lib::check_true($memory_9)) {goto label_13;}
#line 900
$memory_10 = "f";
#line 900
$memory_8 = string::ord($memory_10);
#line 900
undef($memory_10);
#line 900
$memory_8 = c_rt_lib::to_nl($memory_7 <= $memory_8);
#line 900
label_13:
#line 900
undef($memory_9);
#line 900
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 900
if (c_rt_lib::check_true($memory_8)) {goto label_12;}
#line 901
$memory_10 = "a";
#line 901
$memory_9 = string::ord($memory_10);
#line 901
undef($memory_10);
#line 901
$memory_9 = $memory_7 - $memory_9;
#line 901
$memory_10 = 10;
#line 901
$memory_9 = $memory_9 + $memory_10;
#line 901
undef($memory_10);
#line 901
$memory_3 = $memory_3 + $memory_9;
#line 901
undef($memory_9);
#line 902
goto label_7;
#line 902
label_12:
#line 903
$memory_9 = [];
#line 903
die(dfile::ssave($memory_9));
#line 903
undef($memory_9);
#line 904
goto label_7;
#line 904
label_7:
#line 904
undef($memory_8);
#line 904
undef($memory_6);
#line 904
undef($memory_7);
#line 904
$memory_6 = 1;
#line 904
$memory_4 = $memory_4 + $memory_6;
#line 904
undef($memory_6);
#line 905
goto label_5;
#line 905
label_4:
#line 905
undef($memory_4);
#line 905
undef($memory_5);
#line 906
undef($memory_0);
#line 906
undef($memory_1);
#line 906
undef($memory_2);
#line 906
return $memory_3;
#line 906
undef($memory_3);
#line 907
goto label_1;
#line 907
label_2:
#line 907
$memory_2 = 2;
#line 907
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 907
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 907
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 907
$memory_5 = 0;
#line 907
$memory_6 = 1;
#line 907
$memory_2 = string::substr($memory_0, $memory_5, $memory_6);
#line 907
undef($memory_6);
#line 907
undef($memory_5);
#line 907
$memory_5 = 0;
#line 907
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_5);
#line 907
undef($memory_5);
#line 907
label_16:
#line 907
undef($memory_4);
#line 907
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 907
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 907
$memory_2 = string_utils::is_integer($memory_0);
#line 907
label_15:
#line 907
undef($memory_3);
#line 907
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 907
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 908
$memory_3 = 0;
#line 909
$memory_4 = 0;
#line 909
$memory_5 = 1;
#line 909
label_19:
#line 909
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_1);
#line 909
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 910
$memory_7 = 8;
#line 910
$memory_3 = $memory_3 * $memory_7;
#line 910
undef($memory_7);
#line 911
$memory_9 = 1;
#line 911
$memory_8 = string::substr($memory_0, $memory_4, $memory_9);
#line 911
undef($memory_9);
#line 911
$memory_7 = string::ord($memory_8);
#line 911
undef($memory_8);
#line 911
$memory_9 = 0;
#line 911
$memory_8 = string::ord($memory_9);
#line 911
undef($memory_9);
#line 911
$memory_7 = $memory_7 - $memory_8;
#line 911
undef($memory_8);
#line 911
$memory_3 = $memory_3 + $memory_7;
#line 911
undef($memory_7);
#line 912
$memory_4 = $memory_4 + $memory_5;
#line 912
goto label_19;
#line 912
label_17:
#line 912
undef($memory_4);
#line 912
undef($memory_5);
#line 912
undef($memory_6);
#line 913
undef($memory_0);
#line 913
undef($memory_1);
#line 913
undef($memory_2);
#line 913
return $memory_3;
#line 913
undef($memory_3);
#line 914
goto label_1;
#line 914
label_14:
#line 915
undef($memory_1);
#line 915
undef($memory_2);
#line 915
return $memory_0;
#line 916
goto label_1;
#line 916
label_1:
#line 916
undef($memory_2);
#line 916
undef($memory_1);
#line 916
undef($memory_0);
#line 916
return;
}

sub translator_priv::dest_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 920
$memory_3 = $memory_0;
#line 920
$memory_3 = c_rt_lib::ov_is($memory_3, 'var');
#line 920
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 920
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 921
$memory_5 = $memory_0;
#line 921
$memory_5 = c_rt_lib::ov_as($memory_5, 'var');
#line 921
$memory_4 = translator_priv::get_var_register($memory_5, $memory_2);
#line 921
undef($memory_5);
#line 921
undef($memory_0);
#line 921
undef($memory_1);
#line 921
undef($memory_3);
#line 921
$_[2] = $memory_2;return $memory_4;
#line 921
undef($memory_4);
#line 922
goto label_2;
#line 922
label_2:
#line 922
undef($memory_3);
#line 923
$memory_3 = "";
#line 923
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 923
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 923
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 923
$memory_4 = translator_priv::new_register($memory_2);
#line 923
$memory_1 = $memory_4;
#line 923
undef($memory_4);
#line 923
goto label_4;
#line 923
label_4:
#line 923
undef($memory_3);
#line 924
translator_priv::print_val($memory_0, $memory_1, $memory_2);
#line 925
undef($memory_0);
#line 925
$_[2] = $memory_2;return $memory_1;
#line 925
undef($memory_0);
#line 925
undef($memory_1);
#line 925
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::def_val($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 930
$memory_4 = "";
#line 930
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 930
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 930
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 930
$memory_1 = $memory_2;
#line 930
goto label_2;
#line 930
label_2:
#line 930
undef($memory_4);
#line 931
translator_priv::print_val($memory_0, $memory_1, $memory_3);
#line 932
undef($memory_0);
#line 932
undef($memory_2);
#line 932
$_[3] = $memory_3;return $memory_1;
#line 932
undef($memory_0);
#line 932
undef($memory_1);
#line 932
undef($memory_2);
#line 932
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::calc_val($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 936
$memory_2 = $memory_0;
#line 936
$memory_2 = c_rt_lib::ov_is($memory_2, 'var');
#line 936
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 936
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 937
$memory_4 = $memory_0;
#line 937
$memory_4 = c_rt_lib::ov_as($memory_4, 'var');
#line 937
$memory_3 = translator_priv::get_var_register($memory_4, $memory_1);
#line 937
undef($memory_4);
#line 937
undef($memory_0);
#line 937
undef($memory_2);
#line 937
$_[1] = $memory_1;return $memory_3;
#line 937
undef($memory_3);
#line 938
goto label_2;
#line 938
label_2:
#line 938
undef($memory_2);
#line 939
$memory_2 = translator_priv::new_register($memory_1);
#line 940
translator_priv::print_val($memory_0, $memory_2, $memory_1);
#line 941
undef($memory_0);
#line 941
$_[1] = $memory_1;return $memory_2;
#line 941
undef($memory_2);
#line 941
undef($memory_0);
#line 941
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::get_var_register($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 945
$memory_3 = $memory_1->{'logic'};
#line 945
$memory_3 = $memory_3->{'variables'};
#line 945
$memory_2 = hash::get_value($memory_3, $memory_0);
#line 945
undef($memory_3);
#line 945
undef($memory_0);
#line 945
$_[1] = $memory_1;return $memory_2;
#line 945
undef($memory_2);
#line 945
undef($memory_0);
#line 945
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::new_declaration($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 949
$memory_2 = translator_priv::new_register($memory_1);
#line 950
$memory_3 = "logic";
#line 950
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 950
$memory_4 = "variables";
#line 950
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 950
hash::set_value($memory_4, $memory_0, $memory_2);
#line 950
$memory_5 = "variables";
#line 950
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 950
$memory_5 = "logic";
#line 950
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_3);
#line 950
undef($memory_5);
#line 950
undef($memory_3);
#line 950
undef($memory_4);
#line 951
$memory_3 = "debug";
#line 951
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 951
$memory_4 = "declarations";
#line 951
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 951
hash::set_value($memory_4, $memory_0, $memory_2);
#line 951
$memory_5 = "declarations";
#line 951
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 951
$memory_5 = "debug";
#line 951
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_3);
#line 951
undef($memory_5);
#line 951
undef($memory_3);
#line 951
undef($memory_4);
#line 952
undef($memory_0);
#line 952
$_[1] = $memory_1;return $memory_2;
#line 952
undef($memory_2);
#line 952
undef($memory_0);
#line 952
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::new_register($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 956
$memory_1 = "logic";
#line 956
$memory_1 = c_rt_lib::get_ref_hash($memory_0, $memory_1);
#line 956
$memory_2 = "register";
#line 956
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 956
$memory_3 = 1;
#line 956
$memory_2 = $memory_2 + $memory_3;
#line 956
$memory_4 = "register";
#line 956
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_2);
#line 956
$memory_4 = "logic";
#line 956
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_1);
#line 956
undef($memory_4);
#line 956
undef($memory_1);
#line 956
undef($memory_2);
#line 956
undef($memory_3);
#line 957
$memory_1 = $memory_0->{'result'};
#line 957
$memory_1 = $memory_1->{'reg_size'};
#line 957
$memory_2 = $memory_0->{'logic'};
#line 957
$memory_2 = $memory_2->{'register'};
#line 957
$memory_1 = c_rt_lib::to_nl($memory_1 < $memory_2);
#line 957
undef($memory_2);
#line 957
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 957
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 957
$memory_2 = $memory_0->{'logic'};
#line 957
$memory_2 = $memory_2->{'register'};
#line 957
$memory_3 = "result";
#line 957
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 957
$memory_4 = $memory_2;
#line 957
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'reg_size'} = $memory_4;
#line 957
$memory_5 = "result";
#line 957
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 957
undef($memory_5);
#line 957
undef($memory_2);
#line 957
undef($memory_3);
#line 957
undef($memory_4);
#line 957
goto label_2;
#line 957
label_2:
#line 957
undef($memory_1);
#line 958
$memory_1 = $memory_0->{'logic'};
#line 958
$memory_1 = $memory_1->{'register'};
#line 958
$memory_2 = 1;
#line 958
$memory_1 = $memory_1 - $memory_2;
#line 958
undef($memory_2);
#line 958
$_[0] = $memory_0;return $memory_1;
#line 958
undef($memory_1);
#line 958
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::save_registers($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 962
$memory_1 = $memory_0->{'logic'};
#line 962
$_[0] = $memory_0;return $memory_1;
#line 962
undef($memory_1);
#line 962
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::undef_reg($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 966
$memory_2 = c_rt_lib::ov_mk_arg('clear', $memory_0);
#line 966
translator_priv::print($memory_1, $memory_2);
#line 966
undef($memory_2);
#line 966
undef($memory_0);
#line 966
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::restore_registers($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 970
$memory_2 = $memory_0->{'register'};
#line 970
label_2:
#line 970
$memory_3 = $memory_1->{'logic'};
#line 970
$memory_3 = $memory_3->{'register'};
#line 970
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 970
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 970
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 971
$memory_5 = {
	module => "nlasm",
	name => "reg_t",
};
#line 971
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 971
$memory_4 = ptd::ensure($memory_5, $memory_2);
#line 971
undef($memory_5);
#line 971
translator_priv::undef_reg($memory_4, $memory_1);
#line 971
undef($memory_4);
#line 971
$memory_4 = 1;
#line 971
$memory_2 = $memory_2 + $memory_4;
#line 971
undef($memory_4);
#line 972
goto label_2;
#line 972
label_1:
#line 972
undef($memory_2);
#line 972
undef($memory_3);
#line 973
$memory_2 = $memory_0;
#line 973
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'logic'} = $memory_2;
#line 973
undef($memory_2);
#line 973
undef($memory_0);
#line 973
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_sim_label($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 977
$memory_2 = c_rt_lib::ov_mk_arg('prt_lbl', $memory_0);
#line 977
translator_priv::print($memory_1, $memory_2);
#line 977
undef($memory_2);
#line 977
undef($memory_0);
#line 977
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::get_sim_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 981
$memory_1 = "label_nr";
#line 981
$memory_1 = c_rt_lib::get_ref_hash($memory_0, $memory_1);
#line 981
$memory_2 = 1;
#line 981
$memory_1 = $memory_1 + $memory_2;
#line 981
$memory_3 = "label_nr";
#line 981
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_1);
#line 981
undef($memory_3);
#line 981
undef($memory_1);
#line 981
undef($memory_2);
#line 982
$memory_1 = "label_";
#line 982
$memory_2 = $memory_0->{'label_nr'};
#line 982
$memory_1 = $memory_1 . $memory_2;
#line 982
undef($memory_2);
#line 982
$_[0] = $memory_0;return $memory_1;
#line 982
undef($memory_1);
#line 982
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
