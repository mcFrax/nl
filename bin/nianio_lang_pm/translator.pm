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
sub translator_priv::get_stuct_of_lvalue;
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
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
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
$memory_2 = {value => $memory_3,index => $memory_4,key => $memory_5,};
#line 43
undef($memory_3);
#line 43
undef($memory_4);
#line 43
undef($memory_5);
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
#line 51
$memory_2 = $memory_0->{'end'};
#line 51
$memory_2 = $memory_2->{'line'};
#line 51
$memory_3 = $memory_0->{'end'};
#line 51
$memory_3 = $memory_3->{'position'};
#line 51
$memory_4 = 1;
#line 51
$memory_3 = $memory_3 - $memory_4;
#line 51
undef($memory_4);
#line 51
$memory_1 = {line => $memory_2,position => $memory_3,};
#line 51
undef($memory_2);
#line 51
undef($memory_3);
#line 52
$memory_3 = $memory_0->{'end'};
#line 52
$memory_3 = $memory_3->{'line'};
#line 52
$memory_4 = $memory_0->{'end'};
#line 52
$memory_4 = $memory_4->{'position'};
#line 52
$memory_2 = {line => $memory_3,position => $memory_4,};
#line 52
undef($memory_3);
#line 52
undef($memory_4);
#line 53
$memory_3 = {begin => $memory_1,end => $memory_2,};
#line 53
undef($memory_0);
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 53
return $memory_3;
#line 53
undef($memory_3);
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 53
undef($memory_0);
#line 53
return;
}

sub translator::translate($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];
#line 57
$memory_2 = $memory_0->{'name'};
#line 57
$memory_3 = [];
#line 57
$memory_4 = [];
#line 57
$memory_1 = {module_name => $memory_2,functions => $memory_3,imports => $memory_4,};
#line 57
undef($memory_2);
#line 57
undef($memory_3);
#line 57
undef($memory_4);
#line 58
$memory_2 = [];
#line 58
$memory_3 = $memory_2;
#line 58
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'imports'} = $memory_3;
#line 58
undef($memory_2);
#line 58
undef($memory_3);
#line 59
$memory_2 = $memory_0->{'import'};
#line 59
$memory_4 = 0;
#line 59
$memory_5 = 1;
#line 59
$memory_6 = c_rt_lib::array_len($memory_2);
#line 59
label_3:
#line 59
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 59
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 59
$memory_3 = $memory_2->[$memory_4];
#line 60
$memory_8 = "imports";
#line 60
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 60
$memory_9 = $memory_3->{'name'};
#line 60
array::push($memory_8, $memory_9);
#line 60
undef($memory_9);
#line 60
$memory_9 = "imports";
#line 60
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 60
undef($memory_9);
#line 60
undef($memory_8);
#line 61
$memory_4 = $memory_4 + $memory_5;
#line 61
goto label_3;
#line 61
label_1:
#line 61
undef($memory_2);
#line 61
undef($memory_3);
#line 61
undef($memory_4);
#line 61
undef($memory_5);
#line 61
undef($memory_6);
#line 61
undef($memory_7);
#line 62
$memory_2 = $memory_0->{'fun_def'};
#line 62
$memory_4 = 0;
#line 62
$memory_5 = 1;
#line 62
$memory_6 = c_rt_lib::array_len($memory_2);
#line 62
label_6:
#line 62
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 62
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 62
$memory_3 = $memory_2->[$memory_4];
#line 63
$memory_9 = {};
#line 63
$memory_10 = 0;
#line 63
$memory_8 = {variables => $memory_9,register => $memory_10,};
#line 63
undef($memory_9);
#line 63
undef($memory_10);
#line 64
$memory_10 = 0;
#line 64
$memory_11 = nlasm::empty_debug();
#line 64
$memory_12 = $memory_0->{'name'};
#line 64
$memory_14 = c_rt_lib::ov_mk_none('none');
#line 64
$memory_15 = $memory_3->{'access'};
#line 64
$memory_16 = 0;
#line 64
$memory_17 = [];
#line 64
$memory_18 = [];
#line 64
$memory_19 = $memory_3->{'name'};
#line 64
$memory_13 = {annotation => $memory_14,access => $memory_15,reg_size => $memory_16,args_type => $memory_17,commands => $memory_18,name => $memory_19,};
#line 64
undef($memory_14);
#line 64
undef($memory_15);
#line 64
undef($memory_16);
#line 64
undef($memory_17);
#line 64
undef($memory_18);
#line 64
undef($memory_19);
#line 64
$memory_16 = "";
#line 64
$memory_15 = {label => $memory_16,logic => $memory_8,};
#line 64
undef($memory_16);
#line 64
$memory_17 = "";
#line 64
$memory_16 = {label => $memory_17,logic => $memory_8,};
#line 64
undef($memory_17);
#line 64
$memory_14 = {break => $memory_15,continue => $memory_16,};
#line 64
undef($memory_15);
#line 64
undef($memory_16);
#line 64
$memory_9 = {label_nr => $memory_10,debug => $memory_11,module_name => $memory_12,logic => $memory_8,result => $memory_13,loop_label => $memory_14,};
#line 64
undef($memory_10);
#line 64
undef($memory_11);
#line 64
undef($memory_12);
#line 64
undef($memory_13);
#line 64
undef($memory_14);
#line 79
translator_priv::print_fun_def($memory_3, $memory_9);
#line 80
$memory_10 = "functions";
#line 80
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 80
$memory_11 = $memory_9->{'result'};
#line 80
array::push($memory_10, $memory_11);
#line 80
undef($memory_11);
#line 80
$memory_11 = "functions";
#line 80
c_rt_lib::set_ref_hash($memory_1, $memory_11, $memory_10);
#line 80
undef($memory_11);
#line 80
undef($memory_10);
#line 80
undef($memory_8);
#line 80
undef($memory_9);
#line 81
$memory_4 = $memory_4 + $memory_5;
#line 81
goto label_6;
#line 81
label_4:
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
undef($memory_7);
#line 82
undef($memory_0);
#line 82
return $memory_1;
#line 82
undef($memory_1);
#line 82
undef($memory_0);
#line 82
return;
}

sub translator_priv::print_fun_def($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 86
$memory_2 = $memory_0->{'args'};
#line 86
$memory_4 = 0;
#line 86
$memory_5 = 1;
#line 86
$memory_6 = c_rt_lib::array_len($memory_2);
#line 86
label_3:
#line 86
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 86
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 86
$memory_3 = $memory_2->[$memory_4];
#line 87
$memory_8 = $memory_3->{'mod'};
#line 87
$memory_9 = c_rt_lib::ov_is($memory_8, 'none');
#line 87
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 90
$memory_9 = c_rt_lib::ov_is($memory_8, 'ref');
#line 90
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 90
$memory_9 = "NOMATCHALERT";
#line 90
$memory_9 = [$memory_9,$memory_8];
#line 90
die(dfile::ssave($memory_9));
#line 87
label_5:
#line 88
$memory_10 = $memory_3->{'name'};
#line 88
translator_priv::new_declaration($memory_10, $memory_1);
#line 88
undef($memory_10);
#line 89
$memory_10 = "result";
#line 89
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 89
$memory_11 = "args_type";
#line 89
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 89
$memory_12 = c_rt_lib::ov_mk_none('val');
#line 89
array::push($memory_11, $memory_12);
#line 89
undef($memory_12);
#line 89
$memory_12 = "args_type";
#line 89
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 89
$memory_12 = "result";
#line 89
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_10);
#line 89
undef($memory_12);
#line 89
undef($memory_10);
#line 89
undef($memory_11);
#line 90
goto label_4;
#line 90
label_6:
#line 91
$memory_10 = $memory_3->{'name'};
#line 91
translator_priv::new_declaration($memory_10, $memory_1);
#line 91
undef($memory_10);
#line 92
$memory_10 = "result";
#line 92
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 92
$memory_11 = "args_type";
#line 92
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 92
$memory_12 = c_rt_lib::ov_mk_none('ref');
#line 92
array::push($memory_11, $memory_12);
#line 92
undef($memory_12);
#line 92
$memory_12 = "args_type";
#line 92
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 92
$memory_12 = "result";
#line 92
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_10);
#line 92
undef($memory_12);
#line 92
undef($memory_10);
#line 92
undef($memory_11);
#line 93
goto label_4;
#line 93
label_4:
#line 93
undef($memory_8);
#line 93
undef($memory_9);
#line 94
$memory_4 = $memory_4 + $memory_5;
#line 94
goto label_3;
#line 94
label_1:
#line 94
undef($memory_2);
#line 94
undef($memory_3);
#line 94
undef($memory_4);
#line 94
undef($memory_5);
#line 94
undef($memory_6);
#line 94
undef($memory_7);
#line 95
$memory_2 = $memory_0->{'cmd'};
#line 95
translator_priv::print_cmd($memory_2, $memory_1);
#line 95
undef($memory_2);
#line 96
$memory_2 = c_rt_lib::ov_mk_none('nop');
#line 96
translator_priv::print_return($memory_2, $memory_1);
#line 96
undef($memory_2);
#line 96
undef($memory_0);
#line 96
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_array_declaration($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 101
$memory_3 = [];
#line 102
$memory_5 = 0;
#line 102
$memory_6 = 1;
#line 102
$memory_7 = c_rt_lib::array_len($memory_0);
#line 102
label_3:
#line 102
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 102
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 102
$memory_4 = $memory_0->[$memory_5];
#line 103
$memory_9 = translator_priv::calc_val($memory_4, $memory_2);
#line 103
array::push($memory_3, $memory_9);
#line 103
undef($memory_9);
#line 104
$memory_5 = $memory_5 + $memory_6;
#line 104
goto label_3;
#line 104
label_1:
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
#line 105
$memory_4 = {dest => $memory_1,src => $memory_3,};
#line 105
$memory_4 = c_rt_lib::ov_mk_arg('arr_decl', $memory_4);
#line 105
translator_priv::print($memory_2, $memory_4);
#line 105
undef($memory_4);
#line 105
undef($memory_3);
#line 105
undef($memory_0);
#line 105
undef($memory_1);
#line 105
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_hash_declaration($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 110
$memory_3 = [];
#line 111
$memory_5 = 0;
#line 111
$memory_6 = 1;
#line 111
$memory_7 = c_rt_lib::array_len($memory_0);
#line 111
label_3:
#line 111
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 111
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 111
$memory_4 = $memory_0->[$memory_5];
#line 112
$memory_10 = $memory_4->{'key'};
#line 112
$memory_10 = c_rt_lib::ov_as($memory_10, 'hash_key');
#line 112
$memory_12 = $memory_4->{'val'};
#line 112
$memory_11 = translator_priv::calc_val($memory_12, $memory_2);
#line 112
undef($memory_12);
#line 112
$memory_9 = {key => $memory_10,val => $memory_11,};
#line 112
undef($memory_10);
#line 112
undef($memory_11);
#line 112
array::push($memory_3, $memory_9);
#line 112
undef($memory_9);
#line 113
$memory_5 = $memory_5 + $memory_6;
#line 113
goto label_3;
#line 113
label_1:
#line 113
undef($memory_4);
#line 113
undef($memory_5);
#line 113
undef($memory_6);
#line 113
undef($memory_7);
#line 113
undef($memory_8);
#line 114
$memory_4 = {dest => $memory_1,src => $memory_3,};
#line 114
$memory_4 = c_rt_lib::ov_mk_arg('hash_decl', $memory_4);
#line 114
translator_priv::print($memory_2, $memory_4);
#line 114
undef($memory_4);
#line 114
undef($memory_3);
#line 114
undef($memory_0);
#line 114
undef($memory_1);
#line 114
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_variant($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 118
$memory_3 = c_rt_lib::ov_mk_none('emp');
#line 119
$memory_4 = $memory_0->{'var'};
#line 119
$memory_4 = c_rt_lib::ov_is($memory_4, 'nop');
#line 119
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 119
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 119
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 120
$memory_6 = $memory_0->{'var'};
#line 120
$memory_5 = translator_priv::dest_val($memory_6, $memory_1, $memory_2);
#line 120
undef($memory_6);
#line 120
$memory_5 = c_rt_lib::ov_mk_arg('arg', $memory_5);
#line 120
$memory_3 = $memory_5;
#line 120
undef($memory_5);
#line 121
goto label_2;
#line 121
label_2:
#line 121
undef($memory_4);
#line 122
$memory_5 = $memory_0->{'name'};
#line 122
$memory_4 = {dest => $memory_1,src => $memory_3,name => $memory_5,};
#line 122
undef($memory_5);
#line 122
$memory_4 = c_rt_lib::ov_mk_arg('ov_mk', $memory_4);
#line 122
translator_priv::print($memory_2, $memory_4);
#line 122
undef($memory_4);
#line 122
undef($memory_3);
#line 122
undef($memory_0);
#line 122
undef($memory_1);
#line 122
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_var_decl($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 126
$memory_3 = $memory_0->{'name'};
#line 126
$memory_2 = translator_priv::new_declaration($memory_3, $memory_1);
#line 126
undef($memory_3);
#line 127
$memory_3 = $memory_0->{'value'};
#line 127
$memory_4 = c_rt_lib::ov_is($memory_3, 'none');
#line 127
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 128
$memory_4 = c_rt_lib::ov_is($memory_3, 'value');
#line 128
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 128
$memory_4 = "NOMATCHALERT";
#line 128
$memory_4 = [$memory_4,$memory_3];
#line 128
die(dfile::ssave($memory_4));
#line 127
label_2:
#line 128
goto label_1;
#line 128
label_3:
#line 128
$memory_5 = c_rt_lib::ov_as($memory_3, 'value');
#line 129
translator_priv::print_val($memory_5, $memory_2, $memory_1);
#line 129
undef($memory_5);
#line 130
goto label_1;
#line 130
label_1:
#line 130
undef($memory_3);
#line 130
undef($memory_4);
#line 131
undef($memory_0);
#line 131
$_[1] = $memory_1;return $memory_2;
#line 131
undef($memory_2);
#line 131
undef($memory_0);
#line 131
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::load_const($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 135
$memory_3 = {dest => $memory_1,val => $memory_0,};
#line 135
$memory_3 = c_rt_lib::ov_mk_arg('load_const', $memory_3);
#line 135
translator_priv::print($memory_2, $memory_3);
#line 135
undef($memory_3);
#line 135
undef($memory_0);
#line 135
undef($memory_1);
#line 135
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator::__ref_rec_args_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 139
$memory_3 = ptd::sim();
#line 139
$memory_4 = ptd::sim();
#line 139
$memory_5 = ptd::sim();
#line 139
$memory_2 = {var_name => $memory_3,list_name => $memory_4,lvalue_var_name => $memory_5,};
#line 139
undef($memory_3);
#line 139
undef($memory_4);
#line 139
undef($memory_5);
#line 139
$memory_1 = ptd::rec($memory_2);
#line 139
undef($memory_2);
#line 139
$memory_0 = ptd::arr($memory_1);
#line 139
undef($memory_1);
#line 139
return $memory_0;
#line 139
undef($memory_0);
#line 139
return;
}

my $_ref_rec_args_t;
sub translator::ref_rec_args_t() {
	$_ref_rec_args_t = translator::__ref_rec_args_t() unless defined $_ref_rec_args_t;
	return $_ref_rec_args_t;
}

sub translator_priv::print_fun_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 143
$memory_3 = [];
#line 144
$memory_4 = {};
#line 145
$memory_5 = {};
#line 146
$memory_6 = {};
#line 147
$memory_8 = $memory_0->{'args'};
#line 147
$memory_7 = array::len($memory_8);
#line 147
undef($memory_8);
#line 147
$memory_8 = 1;
#line 147
$memory_7 = $memory_7 - $memory_8;
#line 147
undef($memory_8);
#line 147
label_2:
#line 147
$memory_8 = 0;
#line 147
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 147
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 147
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 148
$memory_9 = $memory_0->{'args'};
#line 148
$memory_9 = $memory_9->[$memory_7];
#line 148
$memory_9 = $memory_9->{'mod'};
#line 148
$memory_9 = c_rt_lib::ov_is($memory_9, 'ref');
#line 148
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 148
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 148
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 148
undef($memory_9);
#line 148
goto label_3;
#line 148
goto label_5;
#line 148
label_5:
#line 148
undef($memory_9);
#line 149
$memory_9 = $memory_0->{'args'};
#line 149
$memory_9 = $memory_9->[$memory_7];
#line 149
$memory_9 = $memory_9->{'val'};
#line 150
translator_priv::get_stuct_of_lvalue($memory_9);
#line 151
$memory_11 = $memory_9;
#line 151
$memory_11 = c_rt_lib::ov_as($memory_11, 'var');
#line 151
$memory_10 = hash::has_key($memory_6, $memory_11);
#line 151
undef($memory_11);
#line 151
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 151
if (c_rt_lib::check_true($memory_10)) {goto label_7;}
#line 151
undef($memory_9);
#line 151
undef($memory_10);
#line 151
goto label_3;
#line 151
goto label_7;
#line 151
label_7:
#line 151
undef($memory_10);
#line 152
$memory_10 = $memory_9;
#line 152
$memory_10 = c_rt_lib::ov_as($memory_10, 'var');
#line 152
$memory_11 = 0;
#line 152
hash::set_value($memory_6, $memory_10, $memory_11);
#line 152
undef($memory_11);
#line 152
undef($memory_10);
#line 153
$memory_10 = 0;
#line 153
hash::set_value($memory_5, $memory_7, $memory_10);
#line 153
undef($memory_10);
#line 153
undef($memory_9);
#line 153
label_3:
#line 153
$memory_9 = 1;
#line 153
$memory_7 = $memory_7 - $memory_9;
#line 153
undef($memory_9);
#line 154
goto label_2;
#line 154
label_1:
#line 154
undef($memory_7);
#line 154
undef($memory_8);
#line 155
$memory_7 = [];
#line 156
$memory_9 = $memory_0->{'args'};
#line 156
$memory_8 = array::len($memory_9);
#line 156
undef($memory_9);
#line 156
$memory_9 = 0;
#line 156
$memory_10 = 1;
#line 156
label_10:
#line 156
$memory_11 = c_rt_lib::to_nl($memory_9 >= $memory_8);
#line 156
if (c_rt_lib::check_true($memory_11)) {goto label_8;}
#line 157
$memory_12 = $memory_0->{'args'};
#line 157
$memory_12 = $memory_12->[$memory_9];
#line 158
$memory_13 = $memory_12->{'mod'};
#line 158
$memory_14 = c_rt_lib::ov_is($memory_13, 'none');
#line 158
if (c_rt_lib::check_true($memory_14)) {goto label_12;}
#line 160
$memory_14 = c_rt_lib::ov_is($memory_13, 'ref');
#line 160
if (c_rt_lib::check_true($memory_14)) {goto label_13;}
#line 160
$memory_14 = "NOMATCHALERT";
#line 160
$memory_14 = [$memory_14,$memory_13];
#line 160
die(dfile::ssave($memory_14));
#line 158
label_12:
#line 159
$memory_16 = $memory_12->{'val'};
#line 159
$memory_15 = translator_priv::calc_val($memory_16, $memory_2);
#line 159
undef($memory_16);
#line 159
$memory_15 = c_rt_lib::ov_mk_arg('val', $memory_15);
#line 159
array::push($memory_3, $memory_15);
#line 159
undef($memory_15);
#line 160
goto label_11;
#line 160
label_13:
#line 161
$memory_15 = hash::has_key($memory_5, $memory_9);
#line 161
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 161
if (c_rt_lib::check_true($memory_15)) {goto label_15;}
#line 162
$memory_17 = $memory_12->{'val'};
#line 162
$memory_18 = 1;
#line 162
$memory_16 = translator_priv::get_value_of_lvalue($memory_17, $memory_18, $memory_2);
#line 162
undef($memory_18);
#line 162
undef($memory_17);
#line 163
$memory_18 = array::len($memory_16);
#line 163
$memory_19 = 1;
#line 163
$memory_18 = $memory_18 - $memory_19;
#line 163
undef($memory_19);
#line 163
$memory_17 = $memory_16->[$memory_18];
#line 163
undef($memory_18);
#line 163
$memory_17 = c_rt_lib::ov_as($memory_17, 'value');
#line 164
$memory_18 = c_rt_lib::ov_mk_arg('ref', $memory_17);
#line 164
array::push($memory_3, $memory_18);
#line 164
undef($memory_18);
#line 165
hash::set_value($memory_4, $memory_9, $memory_16);
#line 165
undef($memory_16);
#line 165
undef($memory_17);
#line 166
goto label_14;
#line 166
label_15:
#line 167
$memory_16 = translator_priv::new_register($memory_2);
#line 168
$memory_17 = $memory_12->{'val'};
#line 168
translator_priv::print_val($memory_17, $memory_16, $memory_2);
#line 168
undef($memory_17);
#line 169
$memory_17 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 169
array::push($memory_3, $memory_17);
#line 169
undef($memory_17);
#line 169
undef($memory_16);
#line 170
goto label_14;
#line 170
label_14:
#line 170
undef($memory_15);
#line 171
goto label_11;
#line 171
label_11:
#line 171
undef($memory_13);
#line 171
undef($memory_14);
#line 172
$memory_13 = translator_priv::save_registers($memory_2);
#line 172
array::push($memory_7, $memory_13);
#line 172
undef($memory_13);
#line 172
undef($memory_12);
#line 173
$memory_9 = $memory_9 + $memory_10;
#line 173
goto label_10;
#line 173
label_8:
#line 173
undef($memory_8);
#line 173
undef($memory_9);
#line 173
undef($memory_10);
#line 173
undef($memory_11);
#line 174
$memory_9 = $memory_0->{'module'};
#line 174
$memory_10 = $memory_0->{'name'};
#line 174
$memory_8 = {dest => $memory_1,mod => $memory_9,fun_name => $memory_10,args => $memory_3,};
#line 174
undef($memory_9);
#line 174
undef($memory_10);
#line 174
$memory_8 = c_rt_lib::ov_mk_arg('call', $memory_8);
#line 174
translator_priv::print($memory_2, $memory_8);
#line 174
undef($memory_8);
#line 175
$memory_8 = array::len($memory_7);
#line 175
$memory_9 = 1;
#line 175
$memory_8 = $memory_8 - $memory_9;
#line 175
undef($memory_9);
#line 175
label_17:
#line 175
$memory_9 = 0;
#line 175
$memory_9 = c_rt_lib::to_nl($memory_8 >= $memory_9);
#line 175
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 175
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 176
$memory_10 = $memory_7->[$memory_8];
#line 176
translator_priv::restore_registers($memory_10, $memory_2);
#line 176
undef($memory_10);
#line 177
$memory_10 = hash::has_key($memory_4, $memory_8);
#line 177
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 177
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 177
if (c_rt_lib::check_true($memory_10)) {goto label_20;}
#line 177
undef($memory_10);
#line 177
goto label_18;
#line 177
goto label_20;
#line 177
label_20:
#line 177
undef($memory_10);
#line 178
$memory_10 = hash::get_value($memory_4, $memory_8);
#line 178
$memory_11 = 1;
#line 178
translator_priv::set_value_of_lvalue($memory_10, $memory_11, $memory_2);
#line 178
undef($memory_11);
#line 178
undef($memory_10);
#line 178
label_18:
#line 178
$memory_10 = 1;
#line 178
$memory_8 = $memory_8 - $memory_10;
#line 178
undef($memory_10);
#line 179
goto label_17;
#line 179
label_16:
#line 179
undef($memory_8);
#line 179
undef($memory_9);
#line 179
undef($memory_3);
#line 179
undef($memory_4);
#line 179
undef($memory_5);
#line 179
undef($memory_6);
#line 179
undef($memory_7);
#line 179
undef($memory_0);
#line 179
undef($memory_1);
#line 179
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 183
$memory_3 = translator_priv::save_registers($memory_2);
#line 184
$memory_4 = c_rt_lib::ov_is($memory_0, 'const');
#line 184
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 186
$memory_4 = c_rt_lib::ov_is($memory_0, 'string');
#line 186
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 188
$memory_4 = c_rt_lib::ov_is($memory_0, 'ternary_op');
#line 188
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 190
$memory_4 = c_rt_lib::ov_is($memory_0, 'hash_key');
#line 190
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 192
$memory_4 = c_rt_lib::ov_is($memory_0, 'variant');
#line 192
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 194
$memory_4 = c_rt_lib::ov_is($memory_0, 'var');
#line 194
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 196
$memory_4 = c_rt_lib::ov_is($memory_0, 'parenthesis');
#line 196
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 198
$memory_4 = c_rt_lib::ov_is($memory_0, 'bin_op');
#line 198
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 200
$memory_4 = c_rt_lib::ov_is($memory_0, 'var_op');
#line 200
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 202
$memory_4 = c_rt_lib::ov_is($memory_0, 'unary_op');
#line 202
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 204
$memory_4 = c_rt_lib::ov_is($memory_0, 'fun_val');
#line 204
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 206
$memory_4 = c_rt_lib::ov_is($memory_0, 'arr_decl');
#line 206
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 208
$memory_4 = c_rt_lib::ov_is($memory_0, 'hash_decl');
#line 208
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 210
$memory_4 = c_rt_lib::ov_is($memory_0, 'nop');
#line 210
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 211
$memory_4 = c_rt_lib::ov_is($memory_0, 'fun_label');
#line 211
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 213
$memory_4 = c_rt_lib::ov_is($memory_0, 'post_inc');
#line 213
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 215
$memory_4 = c_rt_lib::ov_is($memory_0, 'post_dec');
#line 215
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 215
$memory_4 = "NOMATCHALERT";
#line 215
$memory_4 = [$memory_4,$memory_0];
#line 215
die(dfile::ssave($memory_4));
#line 184
label_2:
#line 184
$memory_5 = c_rt_lib::ov_as($memory_0, 'const');
#line 185
$memory_6 = translator_priv::convert_str_to_number($memory_5);
#line 185
translator_priv::load_const($memory_6, $memory_1, $memory_2);
#line 185
undef($memory_6);
#line 185
undef($memory_5);
#line 186
goto label_1;
#line 186
label_3:
#line 186
$memory_5 = c_rt_lib::ov_as($memory_0, 'string');
#line 187
$memory_6 = translator_priv::make_string($memory_5, $memory_2);
#line 187
translator_priv::load_const($memory_6, $memory_1, $memory_2);
#line 187
undef($memory_6);
#line 187
undef($memory_5);
#line 188
goto label_1;
#line 188
label_4:
#line 188
$memory_5 = c_rt_lib::ov_as($memory_0, 'ternary_op');
#line 189
translator_priv::print_ternary_op($memory_5, $memory_1, $memory_2);
#line 189
undef($memory_5);
#line 190
goto label_1;
#line 190
label_5:
#line 190
$memory_5 = c_rt_lib::ov_as($memory_0, 'hash_key');
#line 191
$memory_6 = [];
#line 191
die(dfile::ssave($memory_6));
#line 191
undef($memory_6);
#line 191
undef($memory_5);
#line 192
goto label_1;
#line 192
label_6:
#line 192
$memory_5 = c_rt_lib::ov_as($memory_0, 'variant');
#line 193
translator_priv::print_variant($memory_5, $memory_1, $memory_2);
#line 193
undef($memory_5);
#line 194
goto label_1;
#line 194
label_7:
#line 194
$memory_5 = c_rt_lib::ov_as($memory_0, 'var');
#line 195
translator_priv::print_variable($memory_5, $memory_1, $memory_2);
#line 195
undef($memory_5);
#line 196
goto label_1;
#line 196
label_8:
#line 196
$memory_5 = c_rt_lib::ov_as($memory_0, 'parenthesis');
#line 197
translator_priv::print_val($memory_5, $memory_1, $memory_2);
#line 197
undef($memory_5);
#line 198
goto label_1;
#line 198
label_9:
#line 198
$memory_5 = c_rt_lib::ov_as($memory_0, 'bin_op');
#line 199
translator_priv::print_bin_op($memory_5, $memory_1, $memory_2);
#line 199
undef($memory_5);
#line 200
goto label_1;
#line 200
label_10:
#line 200
$memory_5 = c_rt_lib::ov_as($memory_0, 'var_op');
#line 201
translator_priv::print_var_op($memory_5, $memory_1, $memory_2);
#line 201
undef($memory_5);
#line 202
goto label_1;
#line 202
label_11:
#line 202
$memory_5 = c_rt_lib::ov_as($memory_0, 'unary_op');
#line 203
translator_priv::print_unary_op($memory_5, $memory_1, $memory_2);
#line 203
undef($memory_5);
#line 204
goto label_1;
#line 204
label_12:
#line 204
$memory_5 = c_rt_lib::ov_as($memory_0, 'fun_val');
#line 205
translator_priv::print_fun_val($memory_5, $memory_1, $memory_2);
#line 205
undef($memory_5);
#line 206
goto label_1;
#line 206
label_13:
#line 206
$memory_5 = c_rt_lib::ov_as($memory_0, 'arr_decl');
#line 207
translator_priv::print_array_declaration($memory_5, $memory_1, $memory_2);
#line 207
undef($memory_5);
#line 208
goto label_1;
#line 208
label_14:
#line 208
$memory_5 = c_rt_lib::ov_as($memory_0, 'hash_decl');
#line 209
translator_priv::print_hash_declaration($memory_5, $memory_1, $memory_2);
#line 209
undef($memory_5);
#line 210
goto label_1;
#line 210
label_15:
#line 211
goto label_1;
#line 211
label_16:
#line 211
$memory_5 = c_rt_lib::ov_as($memory_0, 'fun_label');
#line 212
$memory_6 = [];
#line 212
die(dfile::ssave($memory_6));
#line 212
undef($memory_6);
#line 212
undef($memory_5);
#line 213
goto label_1;
#line 213
label_17:
#line 213
$memory_5 = c_rt_lib::ov_as($memory_0, 'post_inc');
#line 214
$memory_6 = "++";
#line 214
translator_priv::print_post_operator($memory_5, $memory_6, $memory_1, $memory_2);
#line 214
undef($memory_6);
#line 214
undef($memory_5);
#line 215
goto label_1;
#line 215
label_18:
#line 215
$memory_5 = c_rt_lib::ov_as($memory_0, 'post_dec');
#line 216
$memory_6 = "--";
#line 216
translator_priv::print_post_operator($memory_5, $memory_6, $memory_1, $memory_2);
#line 216
undef($memory_6);
#line 216
undef($memory_5);
#line 217
goto label_1;
#line 217
label_1:
#line 217
undef($memory_4);
#line 218
translator_priv::restore_registers($memory_3, $memory_2);
#line 218
undef($memory_3);
#line 218
undef($memory_0);
#line 218
undef($memory_1);
#line 218
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_variable($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 222
$memory_3 = translator_priv::get_var_register($memory_0, $memory_2);
#line 222
translator_priv::move($memory_1, $memory_3, $memory_2);
#line 222
undef($memory_3);
#line 222
undef($memory_0);
#line 222
undef($memory_1);
#line 222
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_post_operator($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 227
$memory_5 = 1;
#line 227
$memory_4 = translator_priv::get_value_of_lvalue($memory_0, $memory_5, $memory_3);
#line 227
undef($memory_5);
#line 228
$memory_6 = array::len($memory_4);
#line 228
$memory_7 = 1;
#line 228
$memory_6 = $memory_6 - $memory_7;
#line 228
undef($memory_7);
#line 228
$memory_5 = $memory_4->[$memory_6];
#line 228
undef($memory_6);
#line 228
$memory_5 = c_rt_lib::ov_as($memory_5, 'value');
#line 229
translator_priv::move($memory_2, $memory_5, $memory_3);
#line 230
$memory_7 = 1;
#line 230
$memory_7 = c_rt_lib::ov_mk_arg('const', $memory_7);
#line 230
$memory_6 = translator_priv::calc_val($memory_7, $memory_3);
#line 230
undef($memory_7);
#line 231
$memory_7 = "++";
#line 231
$memory_7 = c_rt_lib::to_nl($memory_1 eq $memory_7);
#line 231
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 231
$memory_7 = "-";
#line 231
goto label_1;
#line 231
label_2:
#line 231
$memory_7 = "+";
#line 231
label_1:
#line 231
translator_priv::print_bin_op_operator_command($memory_5, $memory_5, $memory_6, $memory_7, $memory_3);
#line 231
undef($memory_7);
#line 232
$memory_7 = 1;
#line 232
translator_priv::set_value_of_lvalue($memory_4, $memory_7, $memory_3);
#line 232
undef($memory_7);
#line 232
undef($memory_4);
#line 232
undef($memory_5);
#line 232
undef($memory_6);
#line 232
undef($memory_0);
#line 232
undef($memory_1);
#line 232
undef($memory_2);
#line 232
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_unary_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 236
$memory_3 = $memory_0->{'op'};
#line 236
$memory_4 = "!";
#line 236
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 236
undef($memory_4);
#line 236
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 236
$memory_3 = $memory_0->{'op'};
#line 236
$memory_4 = "-";
#line 236
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 236
undef($memory_4);
#line 236
label_4:
#line 236
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 236
$memory_3 = $memory_0->{'op'};
#line 236
$memory_4 = "+";
#line 236
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 236
undef($memory_4);
#line 236
label_3:
#line 236
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 236
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 237
$memory_4 = "";
#line 237
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 237
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 237
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 237
undef($memory_0);
#line 237
undef($memory_1);
#line 237
undef($memory_3);
#line 237
undef($memory_4);
#line 237
$_[2] = $memory_2;return;
#line 237
goto label_6;
#line 237
label_6:
#line 237
undef($memory_4);
#line 238
$memory_4 = $memory_0->{'val'};
#line 238
translator_priv::print_val($memory_4, $memory_1, $memory_2);
#line 238
undef($memory_4);
#line 239
$memory_5 = $memory_0->{'op'};
#line 239
$memory_4 = {dest => $memory_1,src => $memory_1,op => $memory_5,};
#line 239
undef($memory_5);
#line 239
$memory_4 = c_rt_lib::ov_mk_arg('una_op', $memory_4);
#line 239
translator_priv::print($memory_2, $memory_4);
#line 239
undef($memory_4);
#line 240
goto label_1;
#line 240
label_2:
#line 240
$memory_3 = $memory_0->{'op'};
#line 240
$memory_4 = "++";
#line 240
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 240
undef($memory_4);
#line 240
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 240
$memory_3 = $memory_0->{'op'};
#line 240
$memory_4 = "--";
#line 240
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 240
undef($memory_4);
#line 240
label_8:
#line 240
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 240
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 241
$memory_5 = $memory_0->{'val'};
#line 241
$memory_6 = 1;
#line 241
$memory_4 = translator_priv::get_value_of_lvalue($memory_5, $memory_6, $memory_2);
#line 241
undef($memory_6);
#line 241
undef($memory_5);
#line 242
$memory_6 = array::len($memory_4);
#line 242
$memory_7 = 1;
#line 242
$memory_6 = $memory_6 - $memory_7;
#line 242
undef($memory_7);
#line 242
$memory_5 = $memory_4->[$memory_6];
#line 242
undef($memory_6);
#line 242
$memory_5 = c_rt_lib::ov_as($memory_5, 'value');
#line 243
$memory_7 = 1;
#line 243
$memory_7 = c_rt_lib::ov_mk_arg('const', $memory_7);
#line 243
$memory_6 = translator_priv::dest_val($memory_7, $memory_1, $memory_2);
#line 243
undef($memory_7);
#line 244
$memory_7 = $memory_0->{'op'};
#line 244
$memory_8 = "++";
#line 244
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 244
undef($memory_8);
#line 244
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 244
$memory_7 = "-";
#line 244
goto label_9;
#line 244
label_10:
#line 244
$memory_7 = "+";
#line 244
label_9:
#line 244
translator_priv::print_bin_op_operator_command($memory_5, $memory_5, $memory_6, $memory_7, $memory_2);
#line 244
undef($memory_7);
#line 245
translator_priv::move($memory_1, $memory_5, $memory_2);
#line 246
$memory_7 = 1;
#line 246
translator_priv::set_value_of_lvalue($memory_4, $memory_7, $memory_2);
#line 246
undef($memory_7);
#line 246
undef($memory_4);
#line 246
undef($memory_5);
#line 246
undef($memory_6);
#line 247
goto label_1;
#line 247
label_7:
#line 247
$memory_3 = $memory_0->{'op'};
#line 247
$memory_4 = "\@";
#line 247
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 247
undef($memory_4);
#line 247
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 247
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 248
$memory_4 = "";
#line 248
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 248
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 248
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 248
undef($memory_0);
#line 248
undef($memory_1);
#line 248
undef($memory_3);
#line 248
undef($memory_4);
#line 248
$_[2] = $memory_2;return;
#line 248
goto label_13;
#line 248
label_13:
#line 248
undef($memory_4);
#line 249
$memory_4 = $memory_0->{'val'};
#line 249
$memory_4 = c_rt_lib::ov_as($memory_4, 'fun_label');
#line 250
$memory_6 = $memory_4->{'module'};
#line 250
$memory_7 = $memory_4->{'name'};
#line 250
$memory_5 = {dest => $memory_1,module => $memory_6,name => $memory_7,};
#line 250
undef($memory_6);
#line 250
undef($memory_7);
#line 250
$memory_5 = c_rt_lib::ov_mk_arg('func', $memory_5);
#line 250
translator_priv::print($memory_2, $memory_5);
#line 250
undef($memory_5);
#line 251
$memory_6 = c_rt_lib::ov_mk_arg('arg', $memory_1);
#line 251
$memory_7 = "ref";
#line 251
$memory_5 = {dest => $memory_1,src => $memory_6,name => $memory_7,};
#line 251
undef($memory_6);
#line 251
undef($memory_7);
#line 251
$memory_5 = c_rt_lib::ov_mk_arg('ov_mk', $memory_5);
#line 251
translator_priv::print($memory_2, $memory_5);
#line 251
undef($memory_5);
#line 251
undef($memory_4);
#line 252
goto label_1;
#line 252
label_11:
#line 253
$memory_4 = [];
#line 253
die(dfile::ssave($memory_4));
#line 253
undef($memory_4);
#line 254
goto label_1;
#line 254
label_1:
#line 254
undef($memory_3);
#line 254
undef($memory_0);
#line 254
undef($memory_1);
#line 254
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_var_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 258
$memory_3 = "";
#line 258
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 258
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 258
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 258
undef($memory_0);
#line 258
undef($memory_1);
#line 258
undef($memory_3);
#line 258
$_[2] = $memory_2;return;
#line 258
goto label_2;
#line 258
label_2:
#line 258
undef($memory_3);
#line 259
$memory_3 = $memory_0->{'left'};
#line 259
translator_priv::print_val($memory_3, $memory_1, $memory_2);
#line 259
undef($memory_3);
#line 261
$memory_4 = $memory_0->{'op'};
#line 261
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_is');
#line 261
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 263
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_as');
#line 263
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 263
$memory_5 = "NOMATCHALERT";
#line 263
$memory_5 = [$memory_5,$memory_4];
#line 263
die(dfile::ssave($memory_5));
#line 261
label_4:
#line 262
$memory_7 = $memory_0->{'case'};
#line 262
$memory_6 = {dest => $memory_1,src => $memory_1,type => $memory_7,};
#line 262
undef($memory_7);
#line 262
$memory_6 = c_rt_lib::ov_mk_arg('ov_is', $memory_6);
#line 262
$memory_3 = $memory_6;
#line 262
undef($memory_6);
#line 263
goto label_3;
#line 263
label_5:
#line 264
$memory_7 = $memory_0->{'case'};
#line 264
$memory_6 = {dest => $memory_1,src => $memory_1,type => $memory_7,};
#line 264
undef($memory_7);
#line 264
$memory_6 = c_rt_lib::ov_mk_arg('ov_as', $memory_6);
#line 264
$memory_3 = $memory_6;
#line 264
undef($memory_6);
#line 265
goto label_3;
#line 265
label_3:
#line 265
undef($memory_4);
#line 265
undef($memory_5);
#line 266
translator_priv::print($memory_2, $memory_3);
#line 266
undef($memory_3);
#line 266
undef($memory_0);
#line 266
undef($memory_1);
#line 266
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_bin_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 270
$memory_3 = $memory_0->{'op'};
#line 270
$memory_4 = "=";
#line 270
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 270
undef($memory_4);
#line 270
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 270
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 271
$memory_5 = $memory_0->{'right'};
#line 271
$memory_4 = translator_priv::dest_val($memory_5, $memory_1, $memory_2);
#line 271
undef($memory_5);
#line 272
$memory_6 = $memory_0->{'left'};
#line 272
$memory_7 = 0;
#line 272
$memory_5 = translator_priv::get_value_of_lvalue($memory_6, $memory_7, $memory_2);
#line 272
undef($memory_7);
#line 272
undef($memory_6);
#line 273
$memory_7 = array::len($memory_5);
#line 273
$memory_8 = 1;
#line 273
$memory_7 = $memory_7 - $memory_8;
#line 273
undef($memory_8);
#line 273
$memory_6 = $memory_5->[$memory_7];
#line 273
undef($memory_7);
#line 273
$memory_6 = c_rt_lib::ov_as($memory_6, 'value');
#line 274
translator_priv::move($memory_6, $memory_4, $memory_2);
#line 275
translator_priv::move($memory_1, $memory_6, $memory_2);
#line 276
$memory_7 = 0;
#line 276
translator_priv::set_value_of_lvalue($memory_5, $memory_7, $memory_2);
#line 276
undef($memory_7);
#line 276
undef($memory_4);
#line 276
undef($memory_5);
#line 276
undef($memory_6);
#line 277
goto label_1;
#line 277
label_2:
#line 277
$memory_3 = $memory_0->{'op'};
#line 277
$memory_4 = "ARRAY_INDEX";
#line 277
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 277
undef($memory_4);
#line 277
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 277
$memory_3 = $memory_0->{'op'};
#line 277
$memory_4 = "->";
#line 277
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 277
undef($memory_4);
#line 277
label_4:
#line 277
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 277
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 278
$memory_5 = $memory_0->{'left'};
#line 278
$memory_4 = translator_priv::dest_val($memory_5, $memory_1, $memory_2);
#line 278
undef($memory_5);
#line 279
$memory_5 = $memory_0->{'op'};
#line 279
$memory_6 = "ARRAY_INDEX";
#line 279
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 279
undef($memory_6);
#line 279
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 279
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 280
$memory_7 = $memory_0->{'right'};
#line 280
$memory_6 = translator_priv::calc_val($memory_7, $memory_2);
#line 280
undef($memory_7);
#line 281
translator_priv::print_get_from_index($memory_1, $memory_4, $memory_6, $memory_2);
#line 281
undef($memory_6);
#line 282
goto label_5;
#line 282
label_6:
#line 283
$memory_6 = $memory_0->{'right'};
#line 283
$memory_6 = c_rt_lib::ov_as($memory_6, 'hash_key');
#line 283
translator_priv::print_get_value($memory_1, $memory_4, $memory_6, $memory_2);
#line 283
undef($memory_6);
#line 284
goto label_5;
#line 284
label_5:
#line 284
undef($memory_5);
#line 284
undef($memory_4);
#line 285
goto label_1;
#line 285
label_3:
#line 285
$memory_3 = $memory_0->{'op'};
#line 285
$memory_4 = "+=";
#line 285
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 285
undef($memory_4);
#line 285
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 285
$memory_3 = $memory_0->{'op'};
#line 285
$memory_4 = "-=";
#line 285
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 285
undef($memory_4);
#line 285
label_11:
#line 285
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 285
$memory_3 = $memory_0->{'op'};
#line 285
$memory_4 = "/=";
#line 285
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 285
undef($memory_4);
#line 285
label_10:
#line 285
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 285
$memory_3 = $memory_0->{'op'};
#line 285
$memory_4 = "*=";
#line 285
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 285
undef($memory_4);
#line 285
label_9:
#line 285
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 285
$memory_3 = $memory_0->{'op'};
#line 285
$memory_4 = ".=";
#line 285
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 285
undef($memory_4);
#line 285
label_8:
#line 285
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 285
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 286
$memory_5 = $memory_0->{'right'};
#line 286
$memory_4 = translator_priv::calc_val($memory_5, $memory_2);
#line 286
undef($memory_5);
#line 287
$memory_6 = $memory_0->{'left'};
#line 287
$memory_7 = 1;
#line 287
$memory_5 = translator_priv::get_value_of_lvalue($memory_6, $memory_7, $memory_2);
#line 287
undef($memory_7);
#line 287
undef($memory_6);
#line 288
$memory_7 = array::len($memory_5);
#line 288
$memory_8 = 1;
#line 288
$memory_7 = $memory_7 - $memory_8;
#line 288
undef($memory_8);
#line 288
$memory_6 = $memory_5->[$memory_7];
#line 288
undef($memory_7);
#line 288
$memory_6 = c_rt_lib::ov_as($memory_6, 'value');
#line 289
$memory_7 = $memory_0->{'op'};
#line 289
translator_priv::print_bin_op_operator_command($memory_6, $memory_6, $memory_4, $memory_7, $memory_2);
#line 289
undef($memory_7);
#line 290
translator_priv::move($memory_1, $memory_6, $memory_2);
#line 291
$memory_7 = 1;
#line 291
translator_priv::set_value_of_lvalue($memory_5, $memory_7, $memory_2);
#line 291
undef($memory_7);
#line 291
undef($memory_4);
#line 291
undef($memory_5);
#line 291
undef($memory_6);
#line 292
goto label_1;
#line 292
label_7:
#line 292
$memory_3 = $memory_0->{'op'};
#line 292
$memory_4 = "&&";
#line 292
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 292
undef($memory_4);
#line 292
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 292
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 293
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 294
$memory_5 = translator_priv::new_register($memory_2);
#line 295
$memory_7 = $memory_0->{'left'};
#line 295
$memory_6 = translator_priv::def_val($memory_7, $memory_1, $memory_5, $memory_2);
#line 295
undef($memory_7);
#line 296
$memory_8 = "!";
#line 296
$memory_7 = {dest => $memory_5,src => $memory_6,op => $memory_8,};
#line 296
undef($memory_8);
#line 296
$memory_7 = c_rt_lib::ov_mk_arg('una_op', $memory_7);
#line 296
translator_priv::print($memory_2, $memory_7);
#line 296
undef($memory_7);
#line 297
translator_priv::print_if_goto($memory_4, $memory_5, $memory_2);
#line 298
$memory_7 = $memory_0->{'right'};
#line 298
translator_priv::def_val($memory_7, $memory_1, $memory_5, $memory_2);
#line 298
undef($memory_7);
#line 299
translator_priv::print_sim_label($memory_4, $memory_2);
#line 299
undef($memory_4);
#line 299
undef($memory_5);
#line 299
undef($memory_6);
#line 300
goto label_1;
#line 300
label_12:
#line 300
$memory_3 = $memory_0->{'op'};
#line 300
$memory_4 = "||";
#line 300
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 300
undef($memory_4);
#line 300
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 300
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 301
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 302
$memory_6 = $memory_0->{'left'};
#line 302
$memory_5 = translator_priv::dest_val($memory_6, $memory_1, $memory_2);
#line 302
undef($memory_6);
#line 303
$memory_6 = c_rt_lib::to_nl($memory_1 ne $memory_5);
#line 303
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 303
if (c_rt_lib::check_true($memory_6)) {goto label_15;}
#line 303
translator_priv::move($memory_1, $memory_5, $memory_2);
#line 303
goto label_15;
#line 303
label_15:
#line 303
undef($memory_6);
#line 304
translator_priv::print_if_goto($memory_4, $memory_5, $memory_2);
#line 305
$memory_7 = $memory_0->{'right'};
#line 305
$memory_6 = translator_priv::dest_val($memory_7, $memory_1, $memory_2);
#line 305
undef($memory_7);
#line 305
$memory_5 = $memory_6;
#line 305
undef($memory_6);
#line 306
$memory_6 = c_rt_lib::to_nl($memory_5 ne $memory_1);
#line 306
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 306
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 306
translator_priv::move($memory_1, $memory_5, $memory_2);
#line 306
goto label_17;
#line 306
label_17:
#line 306
undef($memory_6);
#line 307
translator_priv::print_sim_label($memory_4, $memory_2);
#line 307
undef($memory_4);
#line 307
undef($memory_5);
#line 308
goto label_1;
#line 308
label_13:
#line 309
$memory_5 = $memory_0->{'left'};
#line 309
$memory_4 = translator_priv::dest_val($memory_5, $memory_1, $memory_2);
#line 309
undef($memory_5);
#line 311
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_1);
#line 311
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 311
if (c_rt_lib::check_true($memory_6)) {goto label_19;}
#line 312
$memory_8 = $memory_0->{'right'};
#line 312
$memory_7 = translator_priv::calc_val($memory_8, $memory_2);
#line 312
undef($memory_8);
#line 312
$memory_5 = $memory_7;
#line 312
undef($memory_7);
#line 313
goto label_18;
#line 313
label_19:
#line 314
$memory_8 = $memory_0->{'right'};
#line 314
$memory_7 = translator_priv::dest_val($memory_8, $memory_1, $memory_2);
#line 314
undef($memory_8);
#line 314
$memory_5 = $memory_7;
#line 314
undef($memory_7);
#line 315
goto label_18;
#line 315
label_18:
#line 315
undef($memory_6);
#line 316
$memory_6 = $memory_0->{'op'};
#line 316
translator_priv::print_bin_op_operator_command($memory_1, $memory_4, $memory_5, $memory_6, $memory_2);
#line 316
undef($memory_6);
#line 316
undef($memory_4);
#line 316
undef($memory_5);
#line 317
goto label_1;
#line 317
label_1:
#line 317
undef($memory_3);
#line 317
undef($memory_0);
#line 317
undef($memory_1);
#line 317
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_cmd_array($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 321
$memory_2 = translator_priv::save_registers($memory_1);
#line 322
$memory_4 = 0;
#line 322
$memory_5 = 1;
#line 322
$memory_6 = c_rt_lib::array_len($memory_0);
#line 322
label_3:
#line 322
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 322
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 322
$memory_3 = $memory_0->[$memory_4];
#line 323
translator_priv::print_cmd($memory_3, $memory_1);
#line 324
$memory_4 = $memory_4 + $memory_5;
#line 324
goto label_3;
#line 324
label_1:
#line 324
undef($memory_3);
#line 324
undef($memory_4);
#line 324
undef($memory_5);
#line 324
undef($memory_6);
#line 324
undef($memory_7);
#line 325
translator_priv::restore_registers($memory_2, $memory_1);
#line 325
undef($memory_2);
#line 325
undef($memory_0);
#line 325
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_try_ensure($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 329
$memory_3 = c_rt_lib::ov_is($memory_0, 'decl');
#line 329
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 331
$memory_3 = c_rt_lib::ov_is($memory_0, 'lval');
#line 331
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 332
$memory_3 = c_rt_lib::ov_is($memory_0, 'expr');
#line 332
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 332
$memory_3 = "NOMATCHALERT";
#line 332
$memory_3 = [$memory_3,$memory_0];
#line 332
die(dfile::ssave($memory_3));
#line 329
label_2:
#line 329
$memory_4 = c_rt_lib::ov_as($memory_0, 'decl');
#line 330
$memory_6 = $memory_4->{'name'};
#line 330
$memory_7 = $memory_4->{'type'};
#line 330
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 330
$memory_5 = {name => $memory_6,type => $memory_7,value => $memory_8,};
#line 330
undef($memory_6);
#line 330
undef($memory_7);
#line 330
undef($memory_8);
#line 330
translator_priv::print_var_decl($memory_5, $memory_2);
#line 330
undef($memory_5);
#line 330
undef($memory_4);
#line 331
goto label_1;
#line 331
label_3:
#line 331
$memory_4 = c_rt_lib::ov_as($memory_0, 'lval');
#line 331
undef($memory_4);
#line 332
goto label_1;
#line 332
label_4:
#line 332
$memory_4 = c_rt_lib::ov_as($memory_0, 'expr');
#line 332
undef($memory_4);
#line 333
goto label_1;
#line 333
label_1:
#line 333
undef($memory_3);
#line 334
$memory_3 = translator_priv::save_registers($memory_2);
#line 335
$memory_4 = translator_priv::new_register($memory_2);
#line 337
$memory_6 = c_rt_lib::ov_is($memory_0, 'decl');
#line 337
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 342
$memory_6 = c_rt_lib::ov_is($memory_0, 'lval');
#line 342
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 344
$memory_6 = c_rt_lib::ov_is($memory_0, 'expr');
#line 344
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 344
$memory_6 = "NOMATCHALERT";
#line 344
$memory_6 = [$memory_6,$memory_0];
#line 344
die(dfile::ssave($memory_6));
#line 337
label_6:
#line 337
$memory_7 = c_rt_lib::ov_as($memory_0, 'decl');
#line 338
$memory_8 = $memory_7->{'value'};
#line 338
$memory_9 = c_rt_lib::ov_is($memory_8, 'value');
#line 338
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 340
$memory_9 = c_rt_lib::ov_is($memory_8, 'none');
#line 340
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 340
$memory_9 = "NOMATCHALERT";
#line 340
$memory_9 = [$memory_9,$memory_8];
#line 340
die(dfile::ssave($memory_9));
#line 338
label_10:
#line 338
$memory_10 = c_rt_lib::ov_as($memory_8, 'value');
#line 339
$memory_11 = translator_priv::calc_val($memory_10, $memory_2);
#line 339
$memory_5 = $memory_11;
#line 339
undef($memory_11);
#line 339
undef($memory_10);
#line 340
goto label_9;
#line 340
label_11:
#line 341
goto label_9;
#line 341
label_9:
#line 341
undef($memory_8);
#line 341
undef($memory_9);
#line 341
undef($memory_7);
#line 342
goto label_5;
#line 342
label_7:
#line 342
$memory_7 = c_rt_lib::ov_as($memory_0, 'lval');
#line 343
$memory_9 = $memory_7->{'right'};
#line 343
$memory_8 = translator_priv::calc_val($memory_9, $memory_2);
#line 343
undef($memory_9);
#line 343
$memory_5 = $memory_8;
#line 343
undef($memory_8);
#line 343
undef($memory_7);
#line 344
goto label_5;
#line 344
label_8:
#line 344
$memory_7 = c_rt_lib::ov_as($memory_0, 'expr');
#line 345
$memory_8 = translator_priv::calc_val($memory_7, $memory_2);
#line 345
$memory_5 = $memory_8;
#line 345
undef($memory_8);
#line 345
undef($memory_7);
#line 346
goto label_5;
#line 346
label_5:
#line 346
undef($memory_6);
#line 347
$memory_6 = translator_priv::get_sim_label($memory_2);
#line 348
$memory_8 = "ok";
#line 348
$memory_7 = {dest => $memory_4,src => $memory_5,type => $memory_8,};
#line 348
undef($memory_8);
#line 348
$memory_7 = c_rt_lib::ov_mk_arg('ov_is', $memory_7);
#line 348
translator_priv::print($memory_2, $memory_7);
#line 348
undef($memory_7);
#line 349
translator_priv::print_if_goto($memory_6, $memory_4, $memory_2);
#line 350
$memory_7 = $memory_1;
#line 350
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 350
if (c_rt_lib::check_true($memory_7)) {goto label_13;}
#line 351
$memory_8 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 351
translator_priv::print_safe_return($memory_8, $memory_2);
#line 351
undef($memory_8);
#line 352
goto label_12;
#line 352
label_13:
#line 353
$memory_9 = c_rt_lib::ov_mk_arg('arg', $memory_5);
#line 353
$memory_10 = "ensure";
#line 353
$memory_8 = {dest => $memory_5,src => $memory_9,name => $memory_10,};
#line 353
undef($memory_9);
#line 353
undef($memory_10);
#line 353
$memory_8 = c_rt_lib::ov_mk_arg('ov_mk', $memory_8);
#line 353
translator_priv::print($memory_2, $memory_8);
#line 353
undef($memory_8);
#line 354
$memory_8 = c_rt_lib::ov_mk_arg('die', $memory_5);
#line 354
translator_priv::print($memory_2, $memory_8);
#line 354
undef($memory_8);
#line 355
goto label_12;
#line 355
label_12:
#line 355
undef($memory_7);
#line 356
translator_priv::print_sim_label($memory_6, $memory_2);
#line 357
$memory_7 = c_rt_lib::ov_is($memory_0, 'decl');
#line 357
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 359
$memory_7 = c_rt_lib::ov_is($memory_0, 'lval');
#line 359
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 364
$memory_7 = c_rt_lib::ov_is($memory_0, 'expr');
#line 364
if (c_rt_lib::check_true($memory_7)) {goto label_17;}
#line 364
$memory_7 = "NOMATCHALERT";
#line 364
$memory_7 = [$memory_7,$memory_0];
#line 364
die(dfile::ssave($memory_7));
#line 357
label_15:
#line 357
$memory_8 = c_rt_lib::ov_as($memory_0, 'decl');
#line 358
$memory_11 = $memory_8->{'name'};
#line 358
$memory_10 = translator_priv::get_var_register($memory_11, $memory_2);
#line 358
undef($memory_11);
#line 358
$memory_11 = "ok";
#line 358
$memory_9 = {dest => $memory_10,src => $memory_5,type => $memory_11,};
#line 358
undef($memory_10);
#line 358
undef($memory_11);
#line 358
$memory_9 = c_rt_lib::ov_mk_arg('ov_as', $memory_9);
#line 358
translator_priv::print($memory_2, $memory_9);
#line 358
undef($memory_9);
#line 358
undef($memory_8);
#line 359
goto label_14;
#line 359
label_16:
#line 359
$memory_8 = c_rt_lib::ov_as($memory_0, 'lval');
#line 360
$memory_10 = $memory_8->{'left'};
#line 360
$memory_11 = 0;
#line 360
$memory_9 = translator_priv::get_value_of_lvalue($memory_10, $memory_11, $memory_2);
#line 360
undef($memory_11);
#line 360
undef($memory_10);
#line 361
$memory_11 = array::len($memory_9);
#line 361
$memory_12 = 1;
#line 361
$memory_11 = $memory_11 - $memory_12;
#line 361
undef($memory_12);
#line 361
$memory_10 = $memory_9->[$memory_11];
#line 361
undef($memory_11);
#line 361
$memory_10 = c_rt_lib::ov_as($memory_10, 'value');
#line 362
$memory_12 = "ok";
#line 362
$memory_11 = {dest => $memory_10,src => $memory_5,type => $memory_12,};
#line 362
undef($memory_12);
#line 362
$memory_11 = c_rt_lib::ov_mk_arg('ov_as', $memory_11);
#line 362
translator_priv::print($memory_2, $memory_11);
#line 362
undef($memory_11);
#line 363
$memory_11 = 0;
#line 363
translator_priv::set_value_of_lvalue($memory_9, $memory_11, $memory_2);
#line 363
undef($memory_11);
#line 363
undef($memory_9);
#line 363
undef($memory_10);
#line 363
undef($memory_8);
#line 364
goto label_14;
#line 364
label_17:
#line 364
$memory_8 = c_rt_lib::ov_as($memory_0, 'expr');
#line 364
undef($memory_8);
#line 365
goto label_14;
#line 365
label_14:
#line 365
undef($memory_7);
#line 366
translator_priv::restore_registers($memory_3, $memory_2);
#line 366
undef($memory_3);
#line 366
undef($memory_4);
#line 366
undef($memory_5);
#line 366
undef($memory_6);
#line 366
undef($memory_0);
#line 366
undef($memory_1);
#line 366
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::start_new_instruction($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 370
$memory_2 = "debug";
#line 370
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 370
$memory_3 = $memory_0;
#line 370
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'nast_debug'} = $memory_3;
#line 370
$memory_4 = "debug";
#line 370
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_2);
#line 370
undef($memory_4);
#line 370
undef($memory_2);
#line 370
undef($memory_3);
#line 371
$memory_2 = "debug";
#line 371
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 371
$memory_3 = "instruction_nr";
#line 371
$memory_3 = c_rt_lib::get_ref_hash($memory_2, $memory_3);
#line 371
$memory_4 = 1;
#line 371
$memory_3 = $memory_3 + $memory_4;
#line 371
$memory_5 = "instruction_nr";
#line 371
c_rt_lib::set_ref_hash($memory_2, $memory_5, $memory_3);
#line 371
$memory_5 = "debug";
#line 371
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_2);
#line 371
undef($memory_5);
#line 371
undef($memory_2);
#line 371
undef($memory_3);
#line 371
undef($memory_4);
#line 371
undef($memory_0);
#line 371
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_cmd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 375
$memory_2 = $memory_0->{'debug'};
#line 375
translator_priv::start_new_instruction($memory_2, $memory_1);
#line 375
undef($memory_2);
#line 376
$memory_2 = $memory_0->{'cmd'};
#line 376
$memory_3 = c_rt_lib::ov_is($memory_2, 'if');
#line 376
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 378
$memory_3 = c_rt_lib::ov_is($memory_2, 'fora');
#line 378
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 380
$memory_3 = c_rt_lib::ov_is($memory_2, 'loop');
#line 380
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 382
$memory_3 = c_rt_lib::ov_is($memory_2, 'rep');
#line 382
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 384
$memory_3 = c_rt_lib::ov_is($memory_2, 'forh');
#line 384
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 386
$memory_3 = c_rt_lib::ov_is($memory_2, 'while');
#line 386
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 388
$memory_3 = c_rt_lib::ov_is($memory_2, 'for');
#line 388
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 390
$memory_3 = c_rt_lib::ov_is($memory_2, 'nop');
#line 390
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 391
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 391
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 393
$memory_3 = c_rt_lib::ov_is($memory_2, 'block');
#line 393
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 395
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 395
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 397
$memory_3 = c_rt_lib::ov_is($memory_2, 'match');
#line 397
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 399
$memory_3 = c_rt_lib::ov_is($memory_2, 'try');
#line 399
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 401
$memory_3 = c_rt_lib::ov_is($memory_2, 'ensure');
#line 401
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 403
$memory_3 = c_rt_lib::ov_is($memory_2, 'break');
#line 403
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 405
$memory_3 = c_rt_lib::ov_is($memory_2, 'continue');
#line 405
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 407
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 407
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 409
$memory_3 = c_rt_lib::ov_is($memory_2, 'var_decl');
#line 409
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 411
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_mod');
#line 411
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 413
$memory_3 = c_rt_lib::ov_is($memory_2, 'unless_mod');
#line 413
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 413
$memory_3 = "NOMATCHALERT";
#line 413
$memory_3 = [$memory_3,$memory_2];
#line 413
die(dfile::ssave($memory_3));
#line 376
label_2:
#line 376
$memory_4 = c_rt_lib::ov_as($memory_2, 'if');
#line 377
$memory_5 = c_rt_lib::to_nl(0);
#line 377
translator_priv::print_if($memory_4, $memory_5, $memory_1);
#line 377
undef($memory_5);
#line 377
undef($memory_4);
#line 378
goto label_1;
#line 378
label_3:
#line 378
$memory_4 = c_rt_lib::ov_as($memory_2, 'fora');
#line 379
translator_priv::print_fora($memory_4, $memory_1);
#line 379
undef($memory_4);
#line 380
goto label_1;
#line 380
label_4:
#line 380
$memory_4 = c_rt_lib::ov_as($memory_2, 'loop');
#line 381
translator_priv::print_loop($memory_4, $memory_1);
#line 381
undef($memory_4);
#line 382
goto label_1;
#line 382
label_5:
#line 382
$memory_4 = c_rt_lib::ov_as($memory_2, 'rep');
#line 383
translator_priv::print_rep($memory_4, $memory_1);
#line 383
undef($memory_4);
#line 384
goto label_1;
#line 384
label_6:
#line 384
$memory_4 = c_rt_lib::ov_as($memory_2, 'forh');
#line 385
translator_priv::print_forh($memory_4, $memory_1);
#line 385
undef($memory_4);
#line 386
goto label_1;
#line 386
label_7:
#line 386
$memory_4 = c_rt_lib::ov_as($memory_2, 'while');
#line 387
translator_priv::print_while($memory_4, $memory_1);
#line 387
undef($memory_4);
#line 388
goto label_1;
#line 388
label_8:
#line 388
$memory_4 = c_rt_lib::ov_as($memory_2, 'for');
#line 389
translator_priv::print_for($memory_4, $memory_1);
#line 389
undef($memory_4);
#line 390
goto label_1;
#line 390
label_9:
#line 391
goto label_1;
#line 391
label_10:
#line 391
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 392
$memory_5 = "";
#line 392
translator_priv::print_val($memory_4, $memory_5, $memory_1);
#line 392
undef($memory_5);
#line 392
undef($memory_4);
#line 393
goto label_1;
#line 393
label_11:
#line 393
$memory_4 = c_rt_lib::ov_as($memory_2, 'block');
#line 394
translator_priv::print_cmd_array($memory_4, $memory_1);
#line 394
undef($memory_4);
#line 395
goto label_1;
#line 395
label_12:
#line 395
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 396
translator_priv::print_return($memory_4, $memory_1);
#line 396
undef($memory_4);
#line 397
goto label_1;
#line 397
label_13:
#line 397
$memory_4 = c_rt_lib::ov_as($memory_2, 'match');
#line 398
translator_priv::print_match($memory_4, $memory_1);
#line 398
undef($memory_4);
#line 399
goto label_1;
#line 399
label_14:
#line 399
$memory_4 = c_rt_lib::ov_as($memory_2, 'try');
#line 400
$memory_5 = c_rt_lib::to_nl(1);
#line 400
translator_priv::print_try_ensure($memory_4, $memory_5, $memory_1);
#line 400
undef($memory_5);
#line 400
undef($memory_4);
#line 401
goto label_1;
#line 401
label_15:
#line 401
$memory_4 = c_rt_lib::ov_as($memory_2, 'ensure');
#line 402
$memory_5 = c_rt_lib::to_nl(0);
#line 402
translator_priv::print_try_ensure($memory_4, $memory_5, $memory_1);
#line 402
undef($memory_5);
#line 402
undef($memory_4);
#line 403
goto label_1;
#line 403
label_16:
#line 404
$memory_4 = $memory_1->{'loop_label'};
#line 404
$memory_4 = $memory_4->{'break'};
#line 404
translator_priv::print_loop_break($memory_1, $memory_4);
#line 404
undef($memory_4);
#line 405
goto label_1;
#line 405
label_17:
#line 406
$memory_4 = $memory_1->{'loop_label'};
#line 406
$memory_4 = $memory_4->{'continue'};
#line 406
translator_priv::print_loop_break($memory_1, $memory_4);
#line 406
undef($memory_4);
#line 407
goto label_1;
#line 407
label_18:
#line 407
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 408
translator_priv::print_die($memory_4, $memory_1);
#line 408
undef($memory_4);
#line 409
goto label_1;
#line 409
label_19:
#line 409
$memory_4 = c_rt_lib::ov_as($memory_2, 'var_decl');
#line 410
translator_priv::print_var_decl($memory_4, $memory_1);
#line 410
undef($memory_4);
#line 411
goto label_1;
#line 411
label_20:
#line 411
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_mod');
#line 412
translator_priv::print_if_mod($memory_4, $memory_1);
#line 412
undef($memory_4);
#line 413
goto label_1;
#line 413
label_21:
#line 413
$memory_4 = c_rt_lib::ov_as($memory_2, 'unless_mod');
#line 414
translator_priv::print_unless_mod($memory_4, $memory_1);
#line 414
undef($memory_4);
#line 415
goto label_1;
#line 415
label_1:
#line 415
undef($memory_2);
#line 415
undef($memory_3);
#line 415
undef($memory_0);
#line 415
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_loop_break($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 419
$memory_2 = $memory_1->{'logic'};
#line 419
$memory_2 = $memory_2->{'register'};
#line 419
label_2:
#line 419
$memory_3 = $memory_0->{'logic'};
#line 419
$memory_3 = $memory_3->{'register'};
#line 419
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 419
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 419
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 420
$memory_5 = {
	module => "nlasm",
	name => "reg_t",
};
#line 420
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 420
$memory_4 = ptd::ensure($memory_5, $memory_2);
#line 420
undef($memory_5);
#line 420
translator_priv::undef_reg($memory_4, $memory_0);
#line 420
undef($memory_4);
#line 420
$memory_4 = 1;
#line 420
$memory_2 = $memory_2 + $memory_4;
#line 420
undef($memory_4);
#line 421
goto label_2;
#line 421
label_1:
#line 421
undef($memory_2);
#line 421
undef($memory_3);
#line 422
$memory_2 = $memory_1->{'label'};
#line 422
$memory_2 = c_rt_lib::ov_mk_arg('goto', $memory_2);
#line 422
translator_priv::print($memory_0, $memory_2);
#line 422
undef($memory_2);
#line 422
undef($memory_1);
#line 422
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::print_if_mod($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 426
$memory_3 = $memory_0->{'cond'};
#line 426
$memory_4 = $memory_0->{'cmd'};
#line 426
$memory_5 = [];
#line 426
$memory_7 = $memory_0->{'cmd'};
#line 426
$memory_7 = $memory_7->{'debug'};
#line 426
$memory_8 = c_rt_lib::ov_mk_none('nop');
#line 426
$memory_6 = {debug => $memory_7,cmd => $memory_8,};
#line 426
undef($memory_7);
#line 426
undef($memory_8);
#line 426
$memory_2 = {cond => $memory_3,if => $memory_4,elsif => $memory_5,else => $memory_6,};
#line 426
undef($memory_3);
#line 426
undef($memory_4);
#line 426
undef($memory_5);
#line 426
undef($memory_6);
#line 432
$memory_3 = c_rt_lib::to_nl(1);
#line 432
translator_priv::print_if($memory_2, $memory_3, $memory_1);
#line 432
undef($memory_3);
#line 432
undef($memory_2);
#line 432
undef($memory_0);
#line 432
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_unless_mod($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 437
$memory_4 = $memory_0->{'cond'};
#line 437
$memory_4 = c_rt_lib::ov_mk_arg('parenthesis', $memory_4);
#line 437
$memory_5 = "!";
#line 437
$memory_3 = {val => $memory_4,op => $memory_5,};
#line 437
undef($memory_4);
#line 437
undef($memory_5);
#line 437
$memory_3 = c_rt_lib::ov_mk_arg('unary_op', $memory_3);
#line 437
$memory_4 = $memory_0->{'cmd'};
#line 437
$memory_5 = [];
#line 437
$memory_7 = $memory_0->{'cmd'};
#line 437
$memory_7 = $memory_7->{'debug'};
#line 437
$memory_8 = c_rt_lib::ov_mk_none('nop');
#line 437
$memory_6 = {debug => $memory_7,cmd => $memory_8,};
#line 437
undef($memory_7);
#line 437
undef($memory_8);
#line 437
$memory_2 = {cond => $memory_3,if => $memory_4,elsif => $memory_5,else => $memory_6,};
#line 437
undef($memory_3);
#line 437
undef($memory_4);
#line 437
undef($memory_5);
#line 437
undef($memory_6);
#line 443
$memory_3 = c_rt_lib::to_nl(1);
#line 443
translator_priv::print_if($memory_2, $memory_3, $memory_1);
#line 443
undef($memory_3);
#line 443
undef($memory_2);
#line 443
undef($memory_0);
#line 443
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_if($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 447
$memory_3 = translator_priv::save_registers($memory_2);
#line 448
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 449
$memory_5 = translator_priv::get_sim_label($memory_2);
#line 450
$memory_6 = translator_priv::new_register($memory_2);
#line 451
$memory_7 = translator_priv::save_registers($memory_2);
#line 452
$memory_8 = $memory_0->{'cond'};
#line 452
translator_priv::print_val($memory_8, $memory_6, $memory_2);
#line 452
undef($memory_8);
#line 453
$memory_9 = "!";
#line 453
$memory_8 = {dest => $memory_6,src => $memory_6,op => $memory_9,};
#line 453
undef($memory_9);
#line 453
$memory_8 = c_rt_lib::ov_mk_arg('una_op', $memory_8);
#line 453
translator_priv::print($memory_2, $memory_8);
#line 453
undef($memory_8);
#line 454
translator_priv::restore_registers($memory_7, $memory_2);
#line 455
translator_priv::print_if_goto($memory_5, $memory_6, $memory_2);
#line 456
$memory_8 = $memory_0->{'if'};
#line 456
translator_priv::print_cmd($memory_8, $memory_2);
#line 456
undef($memory_8);
#line 457
$memory_8 = $memory_1;
#line 457
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 457
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 457
if (c_rt_lib::check_true($memory_8)) {goto label_2;}
#line 457
$memory_10 = $memory_0->{'if'};
#line 457
$memory_10 = $memory_10->{'debug'};
#line 457
$memory_9 = translator::last_debug_char($memory_10);
#line 457
undef($memory_10);
#line 457
translator_priv::start_new_instruction($memory_9, $memory_2);
#line 457
undef($memory_9);
#line 457
goto label_2;
#line 457
label_2:
#line 457
undef($memory_8);
#line 458
$memory_8 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 458
translator_priv::print($memory_2, $memory_8);
#line 458
undef($memory_8);
#line 459
translator_priv::print_sim_label($memory_5, $memory_2);
#line 460
$memory_8 = $memory_0->{'elsif'};
#line 460
$memory_10 = 0;
#line 460
$memory_11 = 1;
#line 460
$memory_12 = c_rt_lib::array_len($memory_8);
#line 460
label_5:
#line 460
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 460
if (c_rt_lib::check_true($memory_13)) {goto label_3;}
#line 460
$memory_9 = $memory_8->[$memory_10];
#line 461
$memory_14 = $memory_9->{'debug'};
#line 461
translator_priv::start_new_instruction($memory_14, $memory_2);
#line 461
undef($memory_14);
#line 462
$memory_14 = translator_priv::get_sim_label($memory_2);
#line 462
$memory_5 = $memory_14;
#line 462
undef($memory_14);
#line 463
$memory_14 = $memory_9->{'cond'};
#line 463
translator_priv::print_val($memory_14, $memory_6, $memory_2);
#line 463
undef($memory_14);
#line 464
$memory_15 = "!";
#line 464
$memory_14 = {dest => $memory_6,src => $memory_6,op => $memory_15,};
#line 464
undef($memory_15);
#line 464
$memory_14 = c_rt_lib::ov_mk_arg('una_op', $memory_14);
#line 464
translator_priv::print($memory_2, $memory_14);
#line 464
undef($memory_14);
#line 465
translator_priv::restore_registers($memory_7, $memory_2);
#line 466
translator_priv::print_if_goto($memory_5, $memory_6, $memory_2);
#line 467
$memory_14 = $memory_9->{'cmd'};
#line 467
translator_priv::print_cmd($memory_14, $memory_2);
#line 467
undef($memory_14);
#line 468
$memory_15 = $memory_9->{'cmd'};
#line 468
$memory_15 = $memory_15->{'debug'};
#line 468
$memory_14 = translator::last_debug_char($memory_15);
#line 468
undef($memory_15);
#line 468
translator_priv::start_new_instruction($memory_14, $memory_2);
#line 468
undef($memory_14);
#line 469
$memory_14 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 469
translator_priv::print($memory_2, $memory_14);
#line 469
undef($memory_14);
#line 470
translator_priv::print_sim_label($memory_5, $memory_2);
#line 471
$memory_10 = $memory_10 + $memory_11;
#line 471
goto label_5;
#line 471
label_3:
#line 471
undef($memory_8);
#line 471
undef($memory_9);
#line 471
undef($memory_10);
#line 471
undef($memory_11);
#line 471
undef($memory_12);
#line 471
undef($memory_13);
#line 472
$memory_8 = $memory_0->{'else'};
#line 472
$memory_8 = $memory_8->{'cmd'};
#line 472
$memory_8 = c_rt_lib::ov_is($memory_8, 'nop');
#line 472
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 472
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 472
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 473
$memory_9 = $memory_0->{'else'};
#line 473
translator_priv::print_cmd($memory_9, $memory_2);
#line 473
undef($memory_9);
#line 474
$memory_10 = $memory_0->{'else'};
#line 474
$memory_10 = $memory_10->{'debug'};
#line 474
$memory_9 = translator::last_debug_char($memory_10);
#line 474
undef($memory_10);
#line 474
translator_priv::start_new_instruction($memory_9, $memory_2);
#line 474
undef($memory_9);
#line 475
$memory_9 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 475
translator_priv::print($memory_2, $memory_9);
#line 475
undef($memory_9);
#line 476
goto label_7;
#line 476
label_7:
#line 476
undef($memory_8);
#line 477
translator_priv::print_sim_label($memory_4, $memory_2);
#line 478
translator_priv::restore_registers($memory_3, $memory_2);
#line 478
undef($memory_3);
#line 478
undef($memory_4);
#line 478
undef($memory_5);
#line 478
undef($memory_6);
#line 478
undef($memory_7);
#line 478
undef($memory_0);
#line 478
undef($memory_1);
#line 478
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_call_base($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 485
$memory_5 = "c_rt_lib";
#line 485
$memory_4 = {dest => $memory_0,mod => $memory_5,fun_name => $memory_1,args => $memory_2,};
#line 485
undef($memory_5);
#line 485
$memory_4 = c_rt_lib::ov_mk_arg('call', $memory_4);
#line 485
translator_priv::print($memory_3, $memory_4);
#line 485
undef($memory_4);
#line 485
undef($memory_0);
#line 485
undef($memory_1);
#line 485
undef($memory_2);
#line 485
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::save_loop_break($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 489
$memory_3 = $memory_0->{'loop_label'};
#line 490
$memory_4 = translator_priv::save_registers($memory_0);
#line 491
$memory_5 = {label => $memory_1,logic => $memory_4,};
#line 491
$memory_6 = "loop_label";
#line 491
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 491
$memory_7 = $memory_5;
#line 491
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'break'} = $memory_7;
#line 491
$memory_8 = "loop_label";
#line 491
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_6);
#line 491
undef($memory_8);
#line 491
undef($memory_5);
#line 491
undef($memory_6);
#line 491
undef($memory_7);
#line 492
$memory_5 = {label => $memory_2,logic => $memory_4,};
#line 492
$memory_6 = "loop_label";
#line 492
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 492
$memory_7 = $memory_5;
#line 492
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'continue'} = $memory_7;
#line 492
$memory_8 = "loop_label";
#line 492
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_6);
#line 492
undef($memory_8);
#line 492
undef($memory_5);
#line 492
undef($memory_6);
#line 492
undef($memory_7);
#line 493
undef($memory_1);
#line 493
undef($memory_2);
#line 493
undef($memory_4);
#line 493
$_[0] = $memory_0;return $memory_3;
#line 493
undef($memory_3);
#line 493
undef($memory_4);
#line 493
undef($memory_1);
#line 493
undef($memory_2);
#line 493
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::print_fora($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 497
$memory_2 = $memory_1->{'debug'};
#line 497
$memory_2 = $memory_2->{'nast_debug'};
#line 498
$memory_3 = translator_priv::save_registers($memory_1);
#line 499
$memory_5 = $memory_0->{'array'};
#line 499
$memory_4 = translator_priv::calc_val($memory_5, $memory_1);
#line 499
undef($memory_5);
#line 500
$memory_6 = $memory_0->{'iter'};
#line 500
$memory_5 = translator_priv::print_var_decl($memory_6, $memory_1);
#line 500
undef($memory_6);
#line 501
$memory_6 = translator_priv::get_sim_label($memory_1);
#line 502
$memory_7 = translator_priv::get_sim_label($memory_1);
#line 503
$memory_8 = translator_priv::get_sim_label($memory_1);
#line 504
$memory_9 = translator_priv::new_register($memory_1);
#line 505
$memory_10 = 0;
#line 505
translator_priv::load_const($memory_10, $memory_9, $memory_1);
#line 505
undef($memory_10);
#line 506
$memory_10 = translator_priv::new_register($memory_1);
#line 507
$memory_11 = 1;
#line 507
translator_priv::load_const($memory_11, $memory_10, $memory_1);
#line 507
undef($memory_11);
#line 508
$memory_11 = translator_priv::new_register($memory_1);
#line 509
$memory_12 = "array_len";
#line 509
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_4);
#line 509
$memory_13 = [$memory_14];
#line 509
undef($memory_14);
#line 509
translator_priv::print_call_base($memory_11, $memory_12, $memory_13, $memory_1);
#line 509
undef($memory_13);
#line 509
undef($memory_12);
#line 510
$memory_12 = translator_priv::new_register($memory_1);
#line 511
translator_priv::print_sim_label($memory_8, $memory_1);
#line 512
$memory_13 = ">=";
#line 512
translator_priv::print_bin_op_operator_command($memory_12, $memory_9, $memory_11, $memory_13, $memory_1);
#line 512
undef($memory_13);
#line 513
translator_priv::print_if_goto($memory_6, $memory_12, $memory_1);
#line 514
$memory_13 = {dest => $memory_5,src => $memory_4,idx => $memory_9,};
#line 514
$memory_13 = c_rt_lib::ov_mk_arg('get_frm_idx', $memory_13);
#line 514
translator_priv::print($memory_1, $memory_13);
#line 514
undef($memory_13);
#line 515
$memory_13 = translator_priv::save_loop_break($memory_1, $memory_6, $memory_7);
#line 516
$memory_14 = $memory_0->{'cmd'};
#line 516
translator_priv::print_cmd($memory_14, $memory_1);
#line 516
undef($memory_14);
#line 517
translator_priv::print_sim_label($memory_7, $memory_1);
#line 518
$memory_14 = $memory_0->{'short'};
#line 518
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 518
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 518
if (c_rt_lib::check_true($memory_14)) {goto label_2;}
#line 518
$memory_15 = translator::last_debug_char($memory_2);
#line 518
translator_priv::start_new_instruction($memory_15, $memory_1);
#line 518
undef($memory_15);
#line 518
goto label_2;
#line 518
label_2:
#line 518
undef($memory_14);
#line 519
$memory_15 = "+";
#line 519
$memory_14 = {dest => $memory_9,left => $memory_9,right => $memory_10,op => $memory_15,};
#line 519
undef($memory_15);
#line 519
$memory_14 = c_rt_lib::ov_mk_arg('bin_op', $memory_14);
#line 519
translator_priv::print($memory_1, $memory_14);
#line 519
undef($memory_14);
#line 520
$memory_14 = c_rt_lib::ov_mk_arg('goto', $memory_8);
#line 520
translator_priv::print($memory_1, $memory_14);
#line 520
undef($memory_14);
#line 521
translator_priv::print_sim_label($memory_6, $memory_1);
#line 522
$memory_14 = $memory_13;
#line 522
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_14;
#line 522
undef($memory_14);
#line 523
translator_priv::restore_registers($memory_3, $memory_1);
#line 523
undef($memory_2);
#line 523
undef($memory_3);
#line 523
undef($memory_4);
#line 523
undef($memory_5);
#line 523
undef($memory_6);
#line 523
undef($memory_7);
#line 523
undef($memory_8);
#line 523
undef($memory_9);
#line 523
undef($memory_10);
#line 523
undef($memory_11);
#line 523
undef($memory_12);
#line 523
undef($memory_13);
#line 523
undef($memory_0);
#line 523
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_loop($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 527
$memory_2 = translator_priv::save_registers($memory_1);
#line 528
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 529
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 530
translator_priv::print_sim_label($memory_4, $memory_1);
#line 531
$memory_5 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_4);
#line 532
translator_priv::print_cmd($memory_0, $memory_1);
#line 533
$memory_6 = $memory_0->{'debug'};
#line 533
translator_priv::start_new_instruction($memory_6, $memory_1);
#line 533
undef($memory_6);
#line 534
$memory_6 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 534
translator_priv::print($memory_1, $memory_6);
#line 534
undef($memory_6);
#line 535
translator_priv::print_sim_label($memory_3, $memory_1);
#line 536
$memory_6 = $memory_5;
#line 536
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_6;
#line 536
undef($memory_6);
#line 537
translator_priv::restore_registers($memory_2, $memory_1);
#line 537
undef($memory_2);
#line 537
undef($memory_3);
#line 537
undef($memory_4);
#line 537
undef($memory_5);
#line 537
undef($memory_0);
#line 537
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_rep($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 541
$memory_2 = translator_priv::save_registers($memory_1);
#line 542
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 543
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 544
$memory_5 = translator_priv::get_sim_label($memory_1);
#line 545
$memory_7 = $memory_0->{'count'};
#line 545
$memory_6 = translator_priv::calc_val($memory_7, $memory_1);
#line 545
undef($memory_7);
#line 546
$memory_8 = $memory_0->{'iter'};
#line 546
$memory_7 = translator_priv::print_var_decl($memory_8, $memory_1);
#line 546
undef($memory_8);
#line 547
$memory_8 = 0;
#line 547
translator_priv::load_const($memory_8, $memory_7, $memory_1);
#line 547
undef($memory_8);
#line 548
$memory_8 = translator_priv::new_register($memory_1);
#line 549
$memory_9 = 1;
#line 549
translator_priv::load_const($memory_9, $memory_8, $memory_1);
#line 549
undef($memory_9);
#line 550
$memory_9 = translator_priv::new_register($memory_1);
#line 551
translator_priv::print_sim_label($memory_5, $memory_1);
#line 552
$memory_10 = ">=";
#line 552
translator_priv::print_bin_op_operator_command($memory_9, $memory_7, $memory_6, $memory_10, $memory_1);
#line 552
undef($memory_10);
#line 553
translator_priv::print_if_goto($memory_3, $memory_9, $memory_1);
#line 554
$memory_10 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_4);
#line 555
$memory_11 = $memory_0->{'cmd'};
#line 555
translator_priv::print_cmd($memory_11, $memory_1);
#line 555
undef($memory_11);
#line 556
translator_priv::print_sim_label($memory_4, $memory_1);
#line 557
$memory_11 = $memory_0->{'short'};
#line 557
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 557
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 557
if (c_rt_lib::check_true($memory_11)) {goto label_2;}
#line 557
$memory_13 = $memory_0->{'cmd'};
#line 557
$memory_13 = $memory_13->{'debug'};
#line 557
$memory_12 = translator::last_debug_char($memory_13);
#line 557
undef($memory_13);
#line 557
translator_priv::start_new_instruction($memory_12, $memory_1);
#line 557
undef($memory_12);
#line 557
goto label_2;
#line 557
label_2:
#line 557
undef($memory_11);
#line 558
$memory_12 = "+";
#line 558
$memory_11 = {dest => $memory_7,left => $memory_7,right => $memory_8,op => $memory_12,};
#line 558
undef($memory_12);
#line 558
$memory_11 = c_rt_lib::ov_mk_arg('bin_op', $memory_11);
#line 558
translator_priv::print($memory_1, $memory_11);
#line 558
undef($memory_11);
#line 559
$memory_11 = c_rt_lib::ov_mk_arg('goto', $memory_5);
#line 559
translator_priv::print($memory_1, $memory_11);
#line 559
undef($memory_11);
#line 560
translator_priv::print_sim_label($memory_3, $memory_1);
#line 561
$memory_11 = $memory_10;
#line 561
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_11;
#line 561
undef($memory_11);
#line 562
translator_priv::restore_registers($memory_2, $memory_1);
#line 562
undef($memory_2);
#line 562
undef($memory_3);
#line 562
undef($memory_4);
#line 562
undef($memory_5);
#line 562
undef($memory_6);
#line 562
undef($memory_7);
#line 562
undef($memory_8);
#line 562
undef($memory_9);
#line 562
undef($memory_10);
#line 562
undef($memory_0);
#line 562
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_forh($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 566
$memory_2 = $memory_1->{'debug'};
#line 566
$memory_2 = $memory_2->{'nast_debug'};
#line 567
$memory_3 = translator_priv::save_registers($memory_1);
#line 568
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 569
$memory_5 = translator_priv::get_sim_label($memory_1);
#line 570
$memory_6 = translator_priv::get_sim_label($memory_1);
#line 571
$memory_8 = $memory_0->{'hash'};
#line 571
$memory_7 = translator_priv::calc_val($memory_8, $memory_1);
#line 571
undef($memory_8);
#line 572
$memory_9 = $memory_0->{'key'};
#line 572
$memory_8 = translator_priv::print_var_decl($memory_9, $memory_1);
#line 572
undef($memory_9);
#line 573
$memory_10 = $memory_0->{'val'};
#line 573
$memory_9 = translator_priv::print_var_decl($memory_10, $memory_1);
#line 573
undef($memory_10);
#line 574
$memory_10 = translator_priv::new_register($memory_1);
#line 575
$memory_11 = "init_iter";
#line 575
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_7);
#line 575
$memory_12 = [$memory_13];
#line 575
undef($memory_13);
#line 575
translator_priv::print_call_base($memory_10, $memory_11, $memory_12, $memory_1);
#line 575
undef($memory_12);
#line 575
undef($memory_11);
#line 576
translator_priv::print_sim_label($memory_6, $memory_1);
#line 577
$memory_11 = "is_end_hash";
#line 577
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_10);
#line 577
$memory_12 = [$memory_13];
#line 577
undef($memory_13);
#line 577
translator_priv::print_call_base($memory_8, $memory_11, $memory_12, $memory_1);
#line 577
undef($memory_12);
#line 577
undef($memory_11);
#line 578
translator_priv::print_if_goto($memory_4, $memory_8, $memory_1);
#line 579
$memory_11 = "get_key_iter";
#line 579
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_10);
#line 579
$memory_12 = [$memory_13];
#line 579
undef($memory_13);
#line 579
translator_priv::print_call_base($memory_8, $memory_11, $memory_12, $memory_1);
#line 579
undef($memory_12);
#line 579
undef($memory_11);
#line 580
$memory_11 = "hash_get_value";
#line 580
$memory_13 = c_rt_lib::ov_mk_arg('val', $memory_7);
#line 580
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_8);
#line 580
$memory_12 = [$memory_13,$memory_14];
#line 580
undef($memory_13);
#line 580
undef($memory_14);
#line 580
translator_priv::print_call_base($memory_9, $memory_11, $memory_12, $memory_1);
#line 580
undef($memory_12);
#line 580
undef($memory_11);
#line 581
$memory_11 = translator_priv::save_loop_break($memory_1, $memory_4, $memory_5);
#line 582
$memory_12 = $memory_0->{'cmd'};
#line 582
translator_priv::print_cmd($memory_12, $memory_1);
#line 582
undef($memory_12);
#line 583
translator_priv::print_sim_label($memory_5, $memory_1);
#line 584
$memory_12 = $memory_0->{'short'};
#line 584
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 584
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 584
if (c_rt_lib::check_true($memory_12)) {goto label_2;}
#line 584
$memory_13 = translator::last_debug_char($memory_2);
#line 584
translator_priv::start_new_instruction($memory_13, $memory_1);
#line 584
undef($memory_13);
#line 584
goto label_2;
#line 584
label_2:
#line 584
undef($memory_12);
#line 585
$memory_12 = "next_iter";
#line 585
$memory_14 = c_rt_lib::ov_mk_arg('val', $memory_10);
#line 585
$memory_13 = [$memory_14];
#line 585
undef($memory_14);
#line 585
translator_priv::print_call_base($memory_10, $memory_12, $memory_13, $memory_1);
#line 585
undef($memory_13);
#line 585
undef($memory_12);
#line 586
$memory_12 = c_rt_lib::ov_mk_arg('goto', $memory_6);
#line 586
translator_priv::print($memory_1, $memory_12);
#line 586
undef($memory_12);
#line 587
translator_priv::print_sim_label($memory_4, $memory_1);
#line 588
$memory_12 = $memory_11;
#line 588
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_12;
#line 588
undef($memory_12);
#line 589
translator_priv::restore_registers($memory_3, $memory_1);
#line 589
undef($memory_2);
#line 589
undef($memory_3);
#line 589
undef($memory_4);
#line 589
undef($memory_5);
#line 589
undef($memory_6);
#line 589
undef($memory_7);
#line 589
undef($memory_8);
#line 589
undef($memory_9);
#line 589
undef($memory_10);
#line 589
undef($memory_11);
#line 589
undef($memory_0);
#line 589
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_while($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 593
$memory_2 = translator_priv::save_registers($memory_1);
#line 594
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 595
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 596
$memory_5 = $memory_1->{'debug'};
#line 596
$memory_5 = $memory_5->{'nast_debug'};
#line 597
translator_priv::print_sim_label($memory_4, $memory_1);
#line 598
$memory_7 = $memory_0->{'cond'};
#line 598
$memory_6 = translator_priv::calc_val($memory_7, $memory_1);
#line 598
undef($memory_7);
#line 599
$memory_8 = "!";
#line 599
$memory_7 = {dest => $memory_6,src => $memory_6,op => $memory_8,};
#line 599
undef($memory_8);
#line 599
$memory_7 = c_rt_lib::ov_mk_arg('una_op', $memory_7);
#line 599
translator_priv::print($memory_1, $memory_7);
#line 599
undef($memory_7);
#line 600
translator_priv::print_if_goto($memory_3, $memory_6, $memory_1);
#line 601
$memory_7 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_4);
#line 602
$memory_8 = $memory_0->{'cmd'};
#line 602
translator_priv::print_cmd($memory_8, $memory_1);
#line 602
undef($memory_8);
#line 603
$memory_8 = $memory_0->{'short'};
#line 603
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 603
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 603
if (c_rt_lib::check_true($memory_8)) {goto label_2;}
#line 603
$memory_9 = translator::last_debug_char($memory_5);
#line 603
translator_priv::start_new_instruction($memory_9, $memory_1);
#line 603
undef($memory_9);
#line 603
goto label_2;
#line 603
label_2:
#line 603
undef($memory_8);
#line 604
$memory_8 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 604
translator_priv::print($memory_1, $memory_8);
#line 604
undef($memory_8);
#line 605
translator_priv::print_sim_label($memory_3, $memory_1);
#line 606
$memory_8 = $memory_7;
#line 606
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_8;
#line 606
undef($memory_8);
#line 607
translator_priv::restore_registers($memory_2, $memory_1);
#line 607
undef($memory_2);
#line 607
undef($memory_3);
#line 607
undef($memory_4);
#line 607
undef($memory_5);
#line 607
undef($memory_6);
#line 607
undef($memory_7);
#line 607
undef($memory_0);
#line 607
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_for($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 611
$memory_2 = translator_priv::save_registers($memory_1);
#line 612
$memory_3 = translator_priv::get_sim_label($memory_1);
#line 613
$memory_4 = translator_priv::get_sim_label($memory_1);
#line 614
$memory_5 = translator_priv::get_sim_label($memory_1);
#line 615
$memory_6 = $memory_0->{'start'};
#line 615
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 615
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 617
$memory_7 = c_rt_lib::ov_is($memory_6, 'var_decl');
#line 617
if (c_rt_lib::check_true($memory_7)) {goto label_3;}
#line 617
$memory_7 = "NOMATCHALERT";
#line 617
$memory_7 = [$memory_7,$memory_6];
#line 617
die(dfile::ssave($memory_7));
#line 615
label_2:
#line 615
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 616
$memory_9 = "";
#line 616
translator_priv::print_val($memory_8, $memory_9, $memory_1);
#line 616
undef($memory_9);
#line 616
undef($memory_8);
#line 617
goto label_1;
#line 617
label_3:
#line 617
$memory_8 = c_rt_lib::ov_as($memory_6, 'var_decl');
#line 618
translator_priv::print_var_decl($memory_8, $memory_1);
#line 618
undef($memory_8);
#line 619
goto label_1;
#line 619
label_1:
#line 619
undef($memory_6);
#line 619
undef($memory_7);
#line 620
translator_priv::print_sim_label($memory_4, $memory_1);
#line 621
$memory_6 = $memory_0->{'cond'};
#line 621
$memory_6 = c_rt_lib::ov_is($memory_6, 'nop');
#line 621
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 621
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 621
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 622
$memory_8 = $memory_0->{'cond'};
#line 622
$memory_7 = translator_priv::calc_val($memory_8, $memory_1);
#line 622
undef($memory_8);
#line 623
$memory_9 = "!";
#line 623
$memory_8 = {dest => $memory_7,src => $memory_7,op => $memory_9,};
#line 623
undef($memory_9);
#line 623
$memory_8 = c_rt_lib::ov_mk_arg('una_op', $memory_8);
#line 623
translator_priv::print($memory_1, $memory_8);
#line 623
undef($memory_8);
#line 624
translator_priv::print_if_goto($memory_3, $memory_7, $memory_1);
#line 624
undef($memory_7);
#line 625
goto label_5;
#line 625
label_5:
#line 625
undef($memory_6);
#line 626
$memory_6 = translator_priv::save_loop_break($memory_1, $memory_3, $memory_5);
#line 627
$memory_7 = $memory_0->{'cmd'};
#line 627
translator_priv::print_cmd($memory_7, $memory_1);
#line 627
undef($memory_7);
#line 628
translator_priv::print_sim_label($memory_5, $memory_1);
#line 629
$memory_7 = $memory_0->{'iter'};
#line 629
$memory_8 = "";
#line 629
translator_priv::print_val($memory_7, $memory_8, $memory_1);
#line 629
undef($memory_8);
#line 629
undef($memory_7);
#line 630
$memory_8 = $memory_0->{'cmd'};
#line 630
$memory_8 = $memory_8->{'debug'};
#line 630
$memory_7 = translator::last_debug_char($memory_8);
#line 630
undef($memory_8);
#line 630
translator_priv::start_new_instruction($memory_7, $memory_1);
#line 630
undef($memory_7);
#line 631
$memory_7 = c_rt_lib::ov_mk_arg('goto', $memory_4);
#line 631
translator_priv::print($memory_1, $memory_7);
#line 631
undef($memory_7);
#line 632
translator_priv::print_sim_label($memory_3, $memory_1);
#line 633
$memory_7 = $memory_6;
#line 633
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_label'} = $memory_7;
#line 633
undef($memory_7);
#line 634
translator_priv::restore_registers($memory_2, $memory_1);
#line 634
undef($memory_2);
#line 634
undef($memory_3);
#line 634
undef($memory_4);
#line 634
undef($memory_5);
#line 634
undef($memory_6);
#line 634
undef($memory_0);
#line 634
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_match($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 638
$memory_2 = translator_priv::save_registers($memory_1);
#line 639
$memory_3 = [];
#line 640
$memory_5 = $memory_0->{'val'};
#line 640
$memory_4 = translator_priv::calc_val($memory_5, $memory_1);
#line 640
undef($memory_5);
#line 641
$memory_5 = translator_priv::new_register($memory_1);
#line 642
$memory_6 = translator_priv::get_sim_label($memory_1);
#line 643
$memory_7 = $memory_0->{'branch_list'};
#line 643
$memory_9 = 0;
#line 643
$memory_10 = 1;
#line 643
$memory_11 = c_rt_lib::array_len($memory_7);
#line 643
label_3:
#line 643
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 643
if (c_rt_lib::check_true($memory_12)) {goto label_1;}
#line 643
$memory_8 = $memory_7->[$memory_9];
#line 644
$memory_13 = $memory_8->{'debug'};
#line 644
translator_priv::start_new_instruction($memory_13, $memory_1);
#line 644
undef($memory_13);
#line 645
$memory_14 = $memory_8->{'variant'};
#line 645
$memory_14 = $memory_14->{'name'};
#line 645
$memory_13 = {dest => $memory_5,src => $memory_4,type => $memory_14,};
#line 645
undef($memory_14);
#line 645
$memory_13 = c_rt_lib::ov_mk_arg('ov_is', $memory_13);
#line 645
translator_priv::print($memory_1, $memory_13);
#line 645
undef($memory_13);
#line 646
$memory_13 = translator_priv::get_sim_label($memory_1);
#line 647
translator_priv::print_if_goto($memory_13, $memory_5, $memory_1);
#line 648
array::push($memory_3, $memory_13);
#line 648
undef($memory_13);
#line 649
$memory_9 = $memory_9 + $memory_10;
#line 649
goto label_3;
#line 649
label_1:
#line 649
undef($memory_7);
#line 649
undef($memory_8);
#line 649
undef($memory_9);
#line 649
undef($memory_10);
#line 649
undef($memory_11);
#line 649
undef($memory_12);
#line 650
$memory_7 = "NOMATCHALERT";
#line 650
translator_priv::load_const($memory_7, $memory_5, $memory_1);
#line 650
undef($memory_7);
#line 651
$memory_8 = [$memory_5,$memory_4];
#line 651
$memory_7 = {dest => $memory_5,src => $memory_8,};
#line 651
undef($memory_8);
#line 651
$memory_7 = c_rt_lib::ov_mk_arg('arr_decl', $memory_7);
#line 651
translator_priv::print($memory_1, $memory_7);
#line 651
undef($memory_7);
#line 652
$memory_7 = c_rt_lib::ov_mk_arg('die', $memory_5);
#line 652
translator_priv::print($memory_1, $memory_7);
#line 652
undef($memory_7);
#line 653
$memory_7 = 0;
#line 654
$memory_8 = $memory_0->{'branch_list'};
#line 654
$memory_10 = 0;
#line 654
$memory_11 = 1;
#line 654
$memory_12 = c_rt_lib::array_len($memory_8);
#line 654
label_6:
#line 654
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 654
if (c_rt_lib::check_true($memory_13)) {goto label_4;}
#line 654
$memory_9 = $memory_8->[$memory_10];
#line 655
$memory_14 = $memory_9->{'cmd'};
#line 655
$memory_14 = $memory_14->{'debug'};
#line 655
translator_priv::start_new_instruction($memory_14, $memory_1);
#line 655
undef($memory_14);
#line 656
$memory_14 = $memory_3->[$memory_7];
#line 656
translator_priv::print_sim_label($memory_14, $memory_1);
#line 656
undef($memory_14);
#line 657
$memory_14 = translator_priv::save_registers($memory_1);
#line 658
$memory_15 = $memory_9->{'variant'};
#line 658
$memory_15 = $memory_15->{'value'};
#line 658
$memory_16 = c_rt_lib::ov_is($memory_15, 'value');
#line 658
if (c_rt_lib::check_true($memory_16)) {goto label_8;}
#line 661
$memory_16 = c_rt_lib::ov_is($memory_15, 'none');
#line 661
if (c_rt_lib::check_true($memory_16)) {goto label_9;}
#line 661
$memory_16 = "NOMATCHALERT";
#line 661
$memory_16 = [$memory_16,$memory_15];
#line 661
die(dfile::ssave($memory_16));
#line 658
label_8:
#line 658
$memory_17 = c_rt_lib::ov_as($memory_15, 'value');
#line 659
$memory_18 = translator_priv::print_var_decl($memory_17, $memory_1);
#line 660
$memory_20 = $memory_9->{'variant'};
#line 660
$memory_20 = $memory_20->{'name'};
#line 660
$memory_19 = {dest => $memory_18,src => $memory_4,type => $memory_20,};
#line 660
undef($memory_20);
#line 660
$memory_19 = c_rt_lib::ov_mk_arg('ov_as', $memory_19);
#line 660
translator_priv::print($memory_1, $memory_19);
#line 660
undef($memory_19);
#line 660
undef($memory_18);
#line 660
undef($memory_17);
#line 661
goto label_7;
#line 661
label_9:
#line 662
goto label_7;
#line 662
label_7:
#line 662
undef($memory_15);
#line 662
undef($memory_16);
#line 663
$memory_15 = $memory_9->{'cmd'};
#line 663
translator_priv::print_cmd($memory_15, $memory_1);
#line 663
undef($memory_15);
#line 664
translator_priv::restore_registers($memory_14, $memory_1);
#line 665
$memory_16 = $memory_9->{'cmd'};
#line 665
$memory_16 = $memory_16->{'debug'};
#line 665
$memory_15 = translator::last_debug_char($memory_16);
#line 665
undef($memory_16);
#line 665
translator_priv::start_new_instruction($memory_15, $memory_1);
#line 665
undef($memory_15);
#line 666
$memory_15 = c_rt_lib::ov_mk_arg('goto', $memory_6);
#line 666
translator_priv::print($memory_1, $memory_15);
#line 666
undef($memory_15);
#line 667
$memory_15 = 1;
#line 667
$memory_7 = $memory_7 + $memory_15;
#line 667
undef($memory_15);
#line 667
undef($memory_14);
#line 668
$memory_10 = $memory_10 + $memory_11;
#line 668
goto label_6;
#line 668
label_4:
#line 668
undef($memory_8);
#line 668
undef($memory_9);
#line 668
undef($memory_10);
#line 668
undef($memory_11);
#line 668
undef($memory_12);
#line 668
undef($memory_13);
#line 669
translator_priv::print_sim_label($memory_6, $memory_1);
#line 670
translator_priv::restore_registers($memory_2, $memory_1);
#line 670
undef($memory_2);
#line 670
undef($memory_3);
#line 670
undef($memory_4);
#line 670
undef($memory_5);
#line 670
undef($memory_6);
#line 670
undef($memory_7);
#line 670
undef($memory_0);
#line 670
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::move($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 674
$memory_3 = "";
#line 674
$memory_3 = c_rt_lib::to_nl($memory_0 eq $memory_3);
#line 674
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 674
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 674
undef($memory_0);
#line 674
undef($memory_1);
#line 674
undef($memory_3);
#line 674
$_[2] = $memory_2;return;
#line 674
goto label_2;
#line 674
label_2:
#line 674
undef($memory_3);
#line 675
$memory_3 = {dest => $memory_0,src => $memory_1,};
#line 675
$memory_3 = c_rt_lib::ov_mk_arg('move', $memory_3);
#line 675
translator_priv::print($memory_2, $memory_3);
#line 675
undef($memory_3);
#line 675
undef($memory_0);
#line 675
undef($memory_1);
#line 675
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_bin_op_operator_command($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 680
$memory_5 = "+";
#line 680
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 680
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 680
$memory_5 = "+=";
#line 680
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 680
label_3:
#line 680
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 680
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 681
$memory_6 = "+";
#line 681
$memory_3 = $memory_6;
#line 681
undef($memory_6);
#line 682
goto label_10;
#line 682
label_2:
#line 682
$memory_5 = "-";
#line 682
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 682
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 682
$memory_5 = "-=";
#line 682
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 682
label_5:
#line 682
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 682
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 683
$memory_6 = "-";
#line 683
$memory_3 = $memory_6;
#line 683
undef($memory_6);
#line 684
goto label_10;
#line 684
label_4:
#line 684
$memory_5 = "*";
#line 684
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 684
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 684
$memory_5 = "*=";
#line 684
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 684
label_7:
#line 684
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 684
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 685
$memory_6 = "*";
#line 685
$memory_3 = $memory_6;
#line 685
undef($memory_6);
#line 686
goto label_10;
#line 686
label_6:
#line 686
$memory_5 = "/";
#line 686
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 686
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 686
$memory_5 = "/=";
#line 686
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 686
label_9:
#line 686
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 686
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 687
$memory_6 = "/";
#line 687
$memory_3 = $memory_6;
#line 687
undef($memory_6);
#line 688
goto label_10;
#line 688
label_8:
#line 688
$memory_5 = ".";
#line 688
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 688
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 688
$memory_5 = ".=";
#line 688
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 688
label_11:
#line 688
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 688
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 689
$memory_6 = ".";
#line 689
$memory_3 = $memory_6;
#line 689
undef($memory_6);
#line 690
goto label_10;
#line 690
label_10:
#line 690
undef($memory_5);
#line 691
$memory_5 = {dest => $memory_0,left => $memory_1,right => $memory_2,op => $memory_3,};
#line 691
$memory_5 = c_rt_lib::ov_mk_arg('bin_op', $memory_5);
#line 691
translator_priv::print($memory_4, $memory_5);
#line 691
undef($memory_5);
#line 691
undef($memory_0);
#line 691
undef($memory_1);
#line 691
undef($memory_2);
#line 691
undef($memory_3);
#line 691
$_[4] = $memory_4;return;
$_[4] = $memory_4;}

sub translator_priv::print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 695
$memory_3 = $memory_0->{'debug'};
#line 695
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 695
$memory_2 = {cmd => $memory_1,debug => $memory_3,annotation => $memory_4,};
#line 695
undef($memory_3);
#line 695
undef($memory_4);
#line 696
$memory_3 = "result";
#line 696
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 696
$memory_4 = "commands";
#line 696
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 696
array::push($memory_4, $memory_2);
#line 696
$memory_5 = "commands";
#line 696
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 696
$memory_5 = "result";
#line 696
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 696
undef($memory_5);
#line 696
undef($memory_3);
#line 696
undef($memory_4);
#line 697
$memory_3 = {};
#line 697
$memory_4 = "debug";
#line 697
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 697
$memory_5 = $memory_3;
#line 697
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'declarations'} = $memory_5;
#line 697
$memory_6 = "debug";
#line 697
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 697
undef($memory_6);
#line 697
undef($memory_3);
#line 697
undef($memory_4);
#line 697
undef($memory_5);
#line 697
undef($memory_2);
#line 697
undef($memory_1);
#line 697
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::print_if_goto($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 701
$memory_3 = {dest => $memory_0,src => $memory_1,};
#line 701
$memory_3 = c_rt_lib::ov_mk_arg('if_goto', $memory_3);
#line 701
translator_priv::print($memory_2, $memory_3);
#line 701
undef($memory_3);
#line 701
undef($memory_0);
#line 701
undef($memory_1);
#line 701
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_get_from_index($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 706
$memory_4 = {dest => $memory_0,src => $memory_1,idx => $memory_2,};
#line 706
$memory_4 = c_rt_lib::ov_mk_arg('get_frm_idx', $memory_4);
#line 706
translator_priv::print($memory_3, $memory_4);
#line 706
undef($memory_4);
#line 706
undef($memory_0);
#line 706
undef($memory_1);
#line 706
undef($memory_2);
#line 706
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_set_at_index($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 711
$memory_4 = {src => $memory_0,idx => $memory_1,val => $memory_2,};
#line 711
$memory_4 = c_rt_lib::ov_mk_arg('set_at_idx', $memory_4);
#line 711
translator_priv::print($memory_3, $memory_4);
#line 711
undef($memory_4);
#line 711
undef($memory_0);
#line 711
undef($memory_1);
#line 711
undef($memory_2);
#line 711
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::print_get_value($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 716
$memory_4 = {dest => $memory_0,src => $memory_1,key => $memory_2,};
#line 716
$memory_4 = c_rt_lib::ov_mk_arg('get_val', $memory_4);
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

sub translator_priv::print_set_value($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 720
$memory_4 = {src => $memory_0,key => $memory_1,val => $memory_2,};
#line 720
$memory_4 = c_rt_lib::ov_mk_arg('set_val', $memory_4);
#line 720
translator_priv::print($memory_3, $memory_4);
#line 720
undef($memory_4);
#line 720
undef($memory_0);
#line 720
undef($memory_1);
#line 720
undef($memory_2);
#line 720
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::get_stuct_of_lvalue($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 724
$memory_1 = [];
#line 725
label_2:
#line 725
$memory_2 = $memory_0;
#line 725
$memory_2 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 725
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 725
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 726
$memory_3 = $memory_0;
#line 726
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 727
$memory_4 = $memory_3->{'op'};
#line 727
$memory_5 = "ARRAY_INDEX";
#line 727
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 727
undef($memory_5);
#line 727
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 727
$memory_4 = $memory_3->{'op'};
#line 727
$memory_5 = "->";
#line 727
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 727
undef($memory_5);
#line 727
label_5:
#line 727
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 727
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 727
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 727
$memory_5 = [];
#line 727
die(dfile::ssave($memory_5));
#line 727
goto label_4;
#line 727
label_4:
#line 727
undef($memory_4);
#line 727
undef($memory_5);
#line 728
$memory_4 = [];
#line 729
$memory_5 = $memory_3->{'op'};
#line 729
$memory_6 = "ARRAY_INDEX";
#line 729
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 729
undef($memory_6);
#line 729
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 729
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 730
$memory_7 = $memory_3->{'right'};
#line 730
$memory_7 = c_rt_lib::ov_mk_arg('index', $memory_7);
#line 730
$memory_6 = [$memory_7];
#line 730
undef($memory_7);
#line 730
$memory_4 = $memory_6;
#line 730
undef($memory_6);
#line 731
goto label_6;
#line 731
label_7:
#line 732
$memory_7 = $memory_3->{'right'};
#line 732
$memory_7 = c_rt_lib::ov_as($memory_7, 'hash_key');
#line 732
$memory_7 = c_rt_lib::ov_mk_arg('key', $memory_7);
#line 732
$memory_6 = [$memory_7];
#line 732
undef($memory_7);
#line 732
$memory_4 = $memory_6;
#line 732
undef($memory_6);
#line 733
goto label_6;
#line 733
label_6:
#line 733
undef($memory_5);
#line 734
array::append($memory_4, $memory_1);
#line 735
$memory_1 = $memory_4;
#line 736
$memory_5 = $memory_3->{'left'};
#line 736
$memory_0 = $memory_5;
#line 736
undef($memory_5);
#line 736
undef($memory_3);
#line 736
undef($memory_4);
#line 737
goto label_2;
#line 737
label_1:
#line 737
undef($memory_2);
#line 738
$_[0] = $memory_0;return $memory_1;
#line 738
undef($memory_1);
#line 738
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::get_value_of_lvalue($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 743
$memory_3 = translator_priv::get_stuct_of_lvalue($memory_0);
#line 744
$memory_4 = $memory_0;
#line 744
$memory_4 = c_rt_lib::ov_as($memory_4, 'var');
#line 745
$memory_6 = translator_priv::get_var_register($memory_4, $memory_2);
#line 745
$memory_5 = [$memory_6];
#line 745
undef($memory_6);
#line 746
$memory_6 = [];
#line 747
$memory_7 = array::len($memory_3);
#line 747
$memory_8 = 0;
#line 747
$memory_9 = 1;
#line 747
label_3:
#line 747
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 747
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 748
$memory_11 = translator_priv::new_register($memory_2);
#line 748
array::push($memory_5, $memory_11);
#line 748
undef($memory_11);
#line 749
$memory_11 = $memory_3->[$memory_8];
#line 749
$memory_12 = c_rt_lib::ov_is($memory_11, 'index');
#line 749
if (c_rt_lib::check_true($memory_12)) {goto label_5;}
#line 754
$memory_12 = c_rt_lib::ov_is($memory_11, 'key');
#line 754
if (c_rt_lib::check_true($memory_12)) {goto label_6;}
#line 754
$memory_12 = "NOMATCHALERT";
#line 754
$memory_12 = [$memory_12,$memory_11];
#line 754
die(dfile::ssave($memory_12));
#line 749
label_5:
#line 749
$memory_13 = c_rt_lib::ov_as($memory_11, 'index');
#line 750
$memory_14 = translator_priv::calc_val($memory_13, $memory_2);
#line 751
$memory_16 = $memory_5->[$memory_8];
#line 751
$memory_15 = {value => $memory_16,index => $memory_14,};
#line 751
undef($memory_16);
#line 751
$memory_15 = c_rt_lib::ov_mk_arg('index', $memory_15);
#line 751
array::push($memory_6, $memory_15);
#line 751
undef($memory_15);
#line 752
$memory_15 = 0;
#line 752
$memory_15 = c_rt_lib::to_nl($memory_1 == $memory_15);
#line 752
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 752
if (c_rt_lib::check_true($memory_16)) {goto label_9;}
#line 752
$memory_15 = array::len($memory_3);
#line 752
$memory_17 = 1;
#line 752
$memory_15 = $memory_15 - $memory_17;
#line 752
undef($memory_17);
#line 752
$memory_15 = c_rt_lib::to_nl($memory_8 == $memory_15);
#line 752
label_9:
#line 752
undef($memory_16);
#line 752
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 752
if (c_rt_lib::check_true($memory_15)) {goto label_8;}
#line 752
undef($memory_11);
#line 752
undef($memory_12);
#line 752
undef($memory_13);
#line 752
undef($memory_14);
#line 752
undef($memory_15);
#line 752
goto label_1;
#line 752
goto label_8;
#line 752
label_8:
#line 752
undef($memory_15);
#line 753
$memory_16 = 1;
#line 753
$memory_16 = $memory_8 + $memory_16;
#line 753
$memory_15 = $memory_5->[$memory_16];
#line 753
undef($memory_16);
#line 753
$memory_16 = "get_ref_arr";
#line 753
$memory_18 = $memory_5->[$memory_8];
#line 753
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_18);
#line 753
$memory_19 = c_rt_lib::ov_mk_arg('val', $memory_14);
#line 753
$memory_17 = [$memory_18,$memory_19];
#line 753
undef($memory_18);
#line 753
undef($memory_19);
#line 753
translator_priv::print_call_base($memory_15, $memory_16, $memory_17, $memory_2);
#line 753
undef($memory_17);
#line 753
undef($memory_16);
#line 753
undef($memory_15);
#line 753
undef($memory_14);
#line 753
undef($memory_13);
#line 754
goto label_4;
#line 754
label_6:
#line 754
$memory_13 = c_rt_lib::ov_as($memory_11, 'key');
#line 755
$memory_15 = $memory_5->[$memory_8];
#line 755
$memory_14 = {value => $memory_15,key => $memory_13,};
#line 755
undef($memory_15);
#line 755
$memory_14 = c_rt_lib::ov_mk_arg('key', $memory_14);
#line 755
array::push($memory_6, $memory_14);
#line 755
undef($memory_14);
#line 756
$memory_14 = 0;
#line 756
$memory_14 = c_rt_lib::to_nl($memory_1 == $memory_14);
#line 756
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 756
if (c_rt_lib::check_true($memory_15)) {goto label_12;}
#line 756
$memory_14 = array::len($memory_3);
#line 756
$memory_16 = 1;
#line 756
$memory_14 = $memory_14 - $memory_16;
#line 756
undef($memory_16);
#line 756
$memory_14 = c_rt_lib::to_nl($memory_8 == $memory_14);
#line 756
label_12:
#line 756
undef($memory_15);
#line 756
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 756
if (c_rt_lib::check_true($memory_14)) {goto label_11;}
#line 756
undef($memory_11);
#line 756
undef($memory_12);
#line 756
undef($memory_13);
#line 756
undef($memory_14);
#line 756
goto label_1;
#line 756
goto label_11;
#line 756
label_11:
#line 756
undef($memory_14);
#line 757
$memory_15 = 1;
#line 757
$memory_15 = $memory_8 + $memory_15;
#line 757
$memory_14 = $memory_5->[$memory_15];
#line 757
undef($memory_15);
#line 757
translator_priv::load_const($memory_13, $memory_14, $memory_2);
#line 757
undef($memory_14);
#line 758
$memory_15 = 1;
#line 758
$memory_15 = $memory_8 + $memory_15;
#line 758
$memory_14 = $memory_5->[$memory_15];
#line 758
undef($memory_15);
#line 758
$memory_15 = "get_ref_hash";
#line 758
$memory_17 = $memory_5->[$memory_8];
#line 758
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_17);
#line 758
$memory_19 = 1;
#line 758
$memory_19 = $memory_8 + $memory_19;
#line 758
$memory_18 = $memory_5->[$memory_19];
#line 758
undef($memory_19);
#line 758
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_18);
#line 758
$memory_16 = [$memory_17,$memory_18];
#line 758
undef($memory_17);
#line 758
undef($memory_18);
#line 758
translator_priv::print_call_base($memory_14, $memory_15, $memory_16, $memory_2);
#line 758
undef($memory_16);
#line 758
undef($memory_15);
#line 758
undef($memory_14);
#line 758
undef($memory_13);
#line 762
goto label_4;
#line 762
label_4:
#line 762
undef($memory_11);
#line 762
undef($memory_12);
#line 763
$memory_8 = $memory_8 + $memory_9;
#line 763
goto label_3;
#line 763
label_1:
#line 763
undef($memory_7);
#line 763
undef($memory_8);
#line 763
undef($memory_9);
#line 763
undef($memory_10);
#line 764
$memory_8 = array::len($memory_5);
#line 764
$memory_9 = 1;
#line 764
$memory_8 = $memory_8 - $memory_9;
#line 764
undef($memory_9);
#line 764
$memory_7 = $memory_5->[$memory_8];
#line 764
undef($memory_8);
#line 764
$memory_7 = c_rt_lib::ov_mk_arg('value', $memory_7);
#line 764
array::push($memory_6, $memory_7);
#line 764
undef($memory_7);
#line 765
undef($memory_0);
#line 765
undef($memory_1);
#line 765
undef($memory_3);
#line 765
undef($memory_4);
#line 765
undef($memory_5);
#line 765
$_[2] = $memory_2;return $memory_6;
#line 765
undef($memory_3);
#line 765
undef($memory_4);
#line 765
undef($memory_5);
#line 765
undef($memory_6);
#line 765
undef($memory_0);
#line 765
undef($memory_1);
#line 765
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::set_value_of_lvalue($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 770
$memory_3 = translator_priv::save_registers($memory_2);
#line 771
$memory_4 = array::len($memory_0);
#line 772
$memory_6 = 1;
#line 772
$memory_6 = $memory_4 - $memory_6;
#line 772
$memory_5 = $memory_0->[$memory_6];
#line 772
undef($memory_6);
#line 772
$memory_5 = c_rt_lib::ov_as($memory_5, 'value');
#line 773
$memory_6 = "";
#line 774
$memory_7 = 2;
#line 774
$memory_7 = $memory_4 - $memory_7;
#line 774
label_2:
#line 774
$memory_8 = 0;
#line 774
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 774
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 774
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 775
$memory_9 = $memory_0->[$memory_7];
#line 775
$memory_10 = c_rt_lib::ov_is($memory_9, 'value');
#line 775
if (c_rt_lib::check_true($memory_10)) {goto label_5;}
#line 777
$memory_10 = c_rt_lib::ov_is($memory_9, 'index');
#line 777
if (c_rt_lib::check_true($memory_10)) {goto label_6;}
#line 784
$memory_10 = c_rt_lib::ov_is($memory_9, 'key');
#line 784
if (c_rt_lib::check_true($memory_10)) {goto label_7;}
#line 784
$memory_10 = "NOMATCHALERT";
#line 784
$memory_10 = [$memory_10,$memory_9];
#line 784
die(dfile::ssave($memory_10));
#line 775
label_5:
#line 775
$memory_11 = c_rt_lib::ov_as($memory_9, 'value');
#line 776
$memory_12 = [];
#line 776
die(dfile::ssave($memory_12));
#line 776
undef($memory_12);
#line 776
undef($memory_11);
#line 777
goto label_4;
#line 777
label_6:
#line 777
$memory_11 = c_rt_lib::ov_as($memory_9, 'index');
#line 778
$memory_12 = 0;
#line 778
$memory_12 = c_rt_lib::to_nl($memory_1 == $memory_12);
#line 778
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 778
if (c_rt_lib::check_true($memory_13)) {goto label_10;}
#line 778
$memory_12 = 2;
#line 778
$memory_12 = $memory_4 - $memory_12;
#line 778
$memory_12 = c_rt_lib::to_nl($memory_7 == $memory_12);
#line 778
label_10:
#line 778
undef($memory_13);
#line 778
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 778
if (c_rt_lib::check_true($memory_12)) {goto label_9;}
#line 779
$memory_13 = $memory_11->{'value'};
#line 779
$memory_14 = $memory_11->{'index'};
#line 779
translator_priv::print_set_at_index($memory_13, $memory_14, $memory_5, $memory_2);
#line 779
undef($memory_14);
#line 779
undef($memory_13);
#line 780
goto label_8;
#line 780
label_9:
#line 781
$memory_13 = "";
#line 781
$memory_14 = "set_ref_arr";
#line 781
$memory_16 = $memory_11->{'value'};
#line 781
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 781
$memory_17 = $memory_11->{'index'};
#line 781
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_17);
#line 781
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 781
$memory_15 = [$memory_16,$memory_17,$memory_18];
#line 781
undef($memory_16);
#line 781
undef($memory_17);
#line 781
undef($memory_18);
#line 781
translator_priv::print_call_base($memory_13, $memory_14, $memory_15, $memory_2);
#line 781
undef($memory_15);
#line 781
undef($memory_14);
#line 781
undef($memory_13);
#line 782
goto label_8;
#line 782
label_8:
#line 782
undef($memory_12);
#line 783
$memory_12 = $memory_11->{'value'};
#line 783
$memory_5 = $memory_12;
#line 783
undef($memory_12);
#line 783
undef($memory_11);
#line 784
goto label_4;
#line 784
label_7:
#line 784
$memory_11 = c_rt_lib::ov_as($memory_9, 'key');
#line 785
$memory_12 = 0;
#line 785
$memory_12 = c_rt_lib::to_nl($memory_1 == $memory_12);
#line 785
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 785
if (c_rt_lib::check_true($memory_13)) {goto label_13;}
#line 785
$memory_12 = 2;
#line 785
$memory_12 = $memory_4 - $memory_12;
#line 785
$memory_12 = c_rt_lib::to_nl($memory_7 == $memory_12);
#line 785
label_13:
#line 785
undef($memory_13);
#line 785
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 785
if (c_rt_lib::check_true($memory_12)) {goto label_12;}
#line 786
$memory_13 = $memory_11->{'value'};
#line 786
$memory_14 = $memory_11->{'key'};
#line 786
translator_priv::print_set_value($memory_13, $memory_14, $memory_5, $memory_2);
#line 786
undef($memory_14);
#line 786
undef($memory_13);
#line 787
goto label_11;
#line 787
label_12:
#line 788
$memory_13 = "";
#line 788
$memory_13 = c_rt_lib::to_nl($memory_6 eq $memory_13);
#line 788
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 788
if (c_rt_lib::check_true($memory_13)) {goto label_15;}
#line 788
$memory_14 = translator_priv::new_register($memory_2);
#line 788
$memory_6 = $memory_14;
#line 788
undef($memory_14);
#line 788
goto label_15;
#line 788
label_15:
#line 788
undef($memory_13);
#line 789
$memory_13 = $memory_11->{'key'};
#line 789
translator_priv::load_const($memory_13, $memory_6, $memory_2);
#line 789
undef($memory_13);
#line 790
$memory_13 = "";
#line 790
$memory_14 = "set_ref_hash";
#line 790
$memory_16 = $memory_11->{'value'};
#line 790
$memory_16 = c_rt_lib::ov_mk_arg('ref', $memory_16);
#line 790
$memory_17 = c_rt_lib::ov_mk_arg('val', $memory_6);
#line 790
$memory_18 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 790
$memory_15 = [$memory_16,$memory_17,$memory_18];
#line 790
undef($memory_16);
#line 790
undef($memory_17);
#line 790
undef($memory_18);
#line 790
translator_priv::print_call_base($memory_13, $memory_14, $memory_15, $memory_2);
#line 790
undef($memory_15);
#line 790
undef($memory_14);
#line 790
undef($memory_13);
#line 791
goto label_11;
#line 791
label_11:
#line 791
undef($memory_12);
#line 792
$memory_12 = $memory_11->{'value'};
#line 792
$memory_5 = $memory_12;
#line 792
undef($memory_12);
#line 792
undef($memory_11);
#line 793
goto label_4;
#line 793
label_4:
#line 793
undef($memory_9);
#line 793
undef($memory_10);
#line 793
$memory_9 = 1;
#line 793
$memory_7 = $memory_7 - $memory_9;
#line 793
undef($memory_9);
#line 794
goto label_2;
#line 794
label_1:
#line 794
undef($memory_7);
#line 794
undef($memory_8);
#line 795
$memory_7 = "";
#line 795
$memory_7 = c_rt_lib::to_nl($memory_6 ne $memory_7);
#line 795
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 795
if (c_rt_lib::check_true($memory_7)) {goto label_17;}
#line 795
translator_priv::restore_registers($memory_3, $memory_2);
#line 795
goto label_17;
#line 795
label_17:
#line 795
undef($memory_7);
#line 795
undef($memory_3);
#line 795
undef($memory_4);
#line 795
undef($memory_5);
#line 795
undef($memory_6);
#line 795
undef($memory_0);
#line 795
undef($memory_1);
#line 795
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::make_string($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 799
$memory_2 = "";
#line 800
$memory_3 = 0;
#line 801
$memory_4 = $memory_0->{'arr'};
#line 801
$memory_6 = 0;
#line 801
$memory_7 = 1;
#line 801
$memory_8 = c_rt_lib::array_len($memory_4);
#line 801
label_3:
#line 801
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 801
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 801
$memory_5 = $memory_4->[$memory_6];
#line 802
$memory_10 = 0;
#line 802
$memory_10 = c_rt_lib::to_nl($memory_3 > $memory_10);
#line 802
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 802
if (c_rt_lib::check_true($memory_10)) {goto label_5;}
#line 802
$memory_11 = string::lf();
#line 802
$memory_2 = $memory_2 . $memory_11;
#line 802
undef($memory_11);
#line 802
goto label_5;
#line 802
label_5:
#line 802
undef($memory_10);
#line 803
$memory_2 = $memory_2 . $memory_5;
#line 804
$memory_10 = 1;
#line 804
$memory_3 = $memory_3 + $memory_10;
#line 804
undef($memory_10);
#line 805
$memory_6 = $memory_6 + $memory_7;
#line 805
goto label_3;
#line 805
label_1:
#line 805
undef($memory_4);
#line 805
undef($memory_5);
#line 805
undef($memory_6);
#line 805
undef($memory_7);
#line 805
undef($memory_8);
#line 805
undef($memory_9);
#line 806
$memory_4 = $memory_0->{'last'};
#line 806
$memory_5 = c_rt_lib::ov_is($memory_4, 'new_line');
#line 806
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 808
$memory_5 = c_rt_lib::ov_is($memory_4, 'end');
#line 808
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 808
$memory_5 = "NOMATCHALERT";
#line 808
$memory_5 = [$memory_5,$memory_4];
#line 808
die(dfile::ssave($memory_5));
#line 806
label_7:
#line 807
$memory_6 = string::lf();
#line 807
$memory_2 = $memory_2 . $memory_6;
#line 807
undef($memory_6);
#line 808
goto label_6;
#line 808
label_8:
#line 809
goto label_6;
#line 809
label_6:
#line 809
undef($memory_4);
#line 809
undef($memory_5);
#line 810
undef($memory_0);
#line 810
undef($memory_3);
#line 810
$_[1] = $memory_1;return $memory_2;
#line 810
undef($memory_2);
#line 810
undef($memory_3);
#line 810
undef($memory_0);
#line 810
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_ternary_op($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 814
$memory_3 = $memory_0->{'op'};
#line 814
$memory_4 = "?";
#line 814
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 814
undef($memory_4);
#line 814
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 814
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 814
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 814
$memory_4 = [];
#line 814
die(dfile::ssave($memory_4));
#line 814
goto label_2;
#line 814
label_2:
#line 814
undef($memory_3);
#line 814
undef($memory_4);
#line 815
$memory_3 = translator_priv::get_sim_label($memory_2);
#line 816
$memory_4 = translator_priv::get_sim_label($memory_2);
#line 817
$memory_6 = $memory_0->{'fst'};
#line 817
$memory_5 = translator_priv::dest_val($memory_6, $memory_1, $memory_2);
#line 817
undef($memory_6);
#line 818
translator_priv::print_if_goto($memory_4, $memory_5, $memory_2);
#line 819
$memory_6 = $memory_0->{'thrd'};
#line 819
translator_priv::print_val($memory_6, $memory_1, $memory_2);
#line 819
undef($memory_6);
#line 820
$memory_6 = c_rt_lib::ov_mk_arg('goto', $memory_3);
#line 820
translator_priv::print($memory_2, $memory_6);
#line 820
undef($memory_6);
#line 821
translator_priv::print_sim_label($memory_4, $memory_2);
#line 822
$memory_6 = $memory_0->{'snd'};
#line 822
translator_priv::print_val($memory_6, $memory_1, $memory_2);
#line 822
undef($memory_6);
#line 823
translator_priv::print_sim_label($memory_3, $memory_2);
#line 823
undef($memory_3);
#line 823
undef($memory_4);
#line 823
undef($memory_5);
#line 823
undef($memory_0);
#line 823
undef($memory_1);
#line 823
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::print_die($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 827
$memory_2 = translator_priv::new_register($memory_1);
#line 828
$memory_3 = c_rt_lib::ov_mk_arg('arr_decl', $memory_0);
#line 828
translator_priv::print_val($memory_3, $memory_2, $memory_1);
#line 828
undef($memory_3);
#line 829
$memory_3 = c_rt_lib::ov_mk_arg('die', $memory_2);
#line 829
translator_priv::print($memory_1, $memory_3);
#line 829
undef($memory_3);
#line 829
undef($memory_2);
#line 829
undef($memory_0);
#line 829
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_return($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 833
$memory_2 = translator_priv::save_registers($memory_1);
#line 834
$memory_3 = c_rt_lib::ov_mk_none('emp');
#line 835
$memory_4 = $memory_0;
#line 835
$memory_4 = c_rt_lib::ov_is($memory_4, 'nop');
#line 835
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 835
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 835
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 836
$memory_5 = translator_priv::calc_val($memory_0, $memory_1);
#line 836
$memory_5 = c_rt_lib::ov_mk_arg('val', $memory_5);
#line 836
$memory_3 = $memory_5;
#line 836
undef($memory_5);
#line 837
goto label_2;
#line 837
label_2:
#line 837
undef($memory_4);
#line 838
translator_priv::print_safe_return($memory_3, $memory_1);
#line 839
translator_priv::restore_registers($memory_2, $memory_1);
#line 839
undef($memory_2);
#line 839
undef($memory_3);
#line 839
undef($memory_0);
#line 839
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_safe_return($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 843
$memory_2 = translator_priv::save_registers($memory_1);
#line 844
$memory_3 = $memory_1->{'logic'};
#line 844
$memory_3 = $memory_3->{'register'};
#line 845
$memory_4 = 1;
#line 845
$memory_4 = -$memory_4;
#line 846
$memory_5 = $memory_1->{'result'};
#line 846
$memory_5 = $memory_5->{'args_type'};
#line 847
$memory_6 = $memory_0;
#line 847
$memory_6 = c_rt_lib::ov_is($memory_6, 'val');
#line 847
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 847
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 848
$memory_7 = $memory_0;
#line 848
$memory_7 = c_rt_lib::ov_as($memory_7, 'val');
#line 848
$memory_4 = $memory_7;
#line 848
undef($memory_7);
#line 849
$memory_7 = array::len($memory_5);
#line 849
$memory_7 = c_rt_lib::to_nl($memory_4 < $memory_7);
#line 849
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 849
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 849
$memory_7 = $memory_5->[$memory_4];
#line 849
$memory_7 = c_rt_lib::ov_is($memory_7, 'ref');
#line 849
label_5:
#line 849
undef($memory_8);
#line 849
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 849
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 850
$memory_8 = translator_priv::new_register($memory_1);
#line 850
$memory_4 = $memory_8;
#line 850
undef($memory_8);
#line 851
$memory_8 = $memory_0;
#line 851
$memory_8 = c_rt_lib::ov_as($memory_8, 'val');
#line 851
translator_priv::move($memory_4, $memory_8, $memory_1);
#line 851
undef($memory_8);
#line 852
$memory_8 = c_rt_lib::ov_mk_arg('val', $memory_4);
#line 852
$memory_0 = $memory_8;
#line 852
undef($memory_8);
#line 853
goto label_4;
#line 853
label_4:
#line 853
undef($memory_7);
#line 854
goto label_2;
#line 854
label_2:
#line 854
undef($memory_6);
#line 855
$memory_6 = 0;
#line 855
label_7:
#line 855
$memory_7 = c_rt_lib::to_nl($memory_6 < $memory_3);
#line 855
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 855
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 856
$memory_8 = array::len($memory_5);
#line 856
$memory_8 = c_rt_lib::to_nl($memory_6 < $memory_8);
#line 856
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 856
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 856
$memory_8 = $memory_5->[$memory_6];
#line 856
$memory_8 = c_rt_lib::ov_is($memory_8, 'ref');
#line 856
label_11:
#line 856
undef($memory_9);
#line 856
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 856
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 856
undef($memory_8);
#line 856
goto label_8;
#line 856
goto label_10;
#line 856
label_10:
#line 856
undef($memory_8);
#line 857
$memory_8 = c_rt_lib::to_nl($memory_6 == $memory_4);
#line 857
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 857
if (c_rt_lib::check_true($memory_8)) {goto label_13;}
#line 857
undef($memory_8);
#line 857
goto label_8;
#line 857
goto label_13;
#line 857
label_13:
#line 857
undef($memory_8);
#line 858
$memory_9 = {
	module => "nlasm",
	name => "reg_t",
};
#line 858
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 858
$memory_8 = ptd::ensure($memory_9, $memory_6);
#line 858
undef($memory_9);
#line 858
translator_priv::undef_reg($memory_8, $memory_1);
#line 858
undef($memory_8);
#line 858
label_8:
#line 858
$memory_8 = 1;
#line 858
$memory_6 = $memory_6 + $memory_8;
#line 858
undef($memory_8);
#line 859
goto label_7;
#line 859
label_6:
#line 859
undef($memory_6);
#line 859
undef($memory_7);
#line 860
$memory_6 = c_rt_lib::ov_mk_arg('return', $memory_0);
#line 860
translator_priv::print($memory_1, $memory_6);
#line 860
undef($memory_6);
#line 861
translator_priv::restore_registers($memory_2, $memory_1);
#line 861
undef($memory_2);
#line 861
undef($memory_3);
#line 861
undef($memory_4);
#line 861
undef($memory_5);
#line 861
undef($memory_0);
#line 861
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::convert_str_to_number($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 865
$memory_1 = string::length($memory_0);
#line 866
$memory_2 = 3;
#line 866
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 866
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 866
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 866
$memory_4 = 1;
#line 866
$memory_5 = 1;
#line 866
$memory_2 = string::substr($memory_0, $memory_4, $memory_5);
#line 866
undef($memory_5);
#line 866
undef($memory_4);
#line 866
$memory_4 = "x";
#line 866
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 866
undef($memory_4);
#line 866
label_3:
#line 866
undef($memory_3);
#line 866
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 866
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 867
$memory_3 = 0;
#line 868
$memory_4 = 2;
#line 868
label_5:
#line 868
$memory_5 = c_rt_lib::to_nl($memory_4 < $memory_1);
#line 868
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 868
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 869
$memory_7 = 1;
#line 869
$memory_6 = string::substr($memory_0, $memory_4, $memory_7);
#line 869
undef($memory_7);
#line 870
$memory_7 = string::ord($memory_6);
#line 871
$memory_8 = 16;
#line 871
$memory_8 = $memory_3 * $memory_8;
#line 871
$memory_3 = $memory_8;
#line 871
undef($memory_8);
#line 872
$memory_10 = 0;
#line 872
$memory_8 = string::ord($memory_10);
#line 872
undef($memory_10);
#line 872
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 872
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 872
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 872
$memory_10 = 9;
#line 872
$memory_8 = string::ord($memory_10);
#line 872
undef($memory_10);
#line 872
$memory_8 = c_rt_lib::to_nl($memory_7 <= $memory_8);
#line 872
label_9:
#line 872
undef($memory_9);
#line 872
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 872
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 873
$memory_10 = 0;
#line 873
$memory_9 = string::ord($memory_10);
#line 873
undef($memory_10);
#line 873
$memory_9 = $memory_7 - $memory_9;
#line 873
$memory_3 = $memory_3 + $memory_9;
#line 873
undef($memory_9);
#line 874
goto label_7;
#line 874
label_8:
#line 874
$memory_10 = "A";
#line 874
$memory_8 = string::ord($memory_10);
#line 874
undef($memory_10);
#line 874
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 874
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 874
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 874
$memory_10 = "F";
#line 874
$memory_8 = string::ord($memory_10);
#line 874
undef($memory_10);
#line 874
$memory_8 = c_rt_lib::to_nl($memory_7 <= $memory_8);
#line 874
label_11:
#line 874
undef($memory_9);
#line 874
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 874
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 875
$memory_10 = "A";
#line 875
$memory_9 = string::ord($memory_10);
#line 875
undef($memory_10);
#line 875
$memory_9 = $memory_7 - $memory_9;
#line 875
$memory_10 = 10;
#line 875
$memory_9 = $memory_9 + $memory_10;
#line 875
undef($memory_10);
#line 875
$memory_3 = $memory_3 + $memory_9;
#line 875
undef($memory_9);
#line 876
goto label_7;
#line 876
label_10:
#line 876
$memory_10 = "a";
#line 876
$memory_8 = string::ord($memory_10);
#line 876
undef($memory_10);
#line 876
$memory_8 = c_rt_lib::to_nl($memory_7 >= $memory_8);
#line 876
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 876
if (c_rt_lib::check_true($memory_9)) {goto label_13;}
#line 876
$memory_10 = "f";
#line 876
$memory_8 = string::ord($memory_10);
#line 876
undef($memory_10);
#line 876
$memory_8 = c_rt_lib::to_nl($memory_7 <= $memory_8);
#line 876
label_13:
#line 876
undef($memory_9);
#line 876
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 876
if (c_rt_lib::check_true($memory_8)) {goto label_12;}
#line 877
$memory_10 = "a";
#line 877
$memory_9 = string::ord($memory_10);
#line 877
undef($memory_10);
#line 877
$memory_9 = $memory_7 - $memory_9;
#line 877
$memory_10 = 10;
#line 877
$memory_9 = $memory_9 + $memory_10;
#line 877
undef($memory_10);
#line 877
$memory_3 = $memory_3 + $memory_9;
#line 877
undef($memory_9);
#line 878
goto label_7;
#line 878
label_12:
#line 879
$memory_9 = [];
#line 879
die(dfile::ssave($memory_9));
#line 879
undef($memory_9);
#line 880
goto label_7;
#line 880
label_7:
#line 880
undef($memory_8);
#line 880
undef($memory_6);
#line 880
undef($memory_7);
#line 880
$memory_6 = 1;
#line 880
$memory_4 = $memory_4 + $memory_6;
#line 880
undef($memory_6);
#line 881
goto label_5;
#line 881
label_4:
#line 881
undef($memory_4);
#line 881
undef($memory_5);
#line 882
undef($memory_0);
#line 882
undef($memory_1);
#line 882
undef($memory_2);
#line 882
return $memory_3;
#line 882
undef($memory_3);
#line 883
goto label_1;
#line 883
label_2:
#line 883
$memory_2 = 2;
#line 883
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 883
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 883
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 883
$memory_5 = 0;
#line 883
$memory_6 = 1;
#line 883
$memory_2 = string::substr($memory_0, $memory_5, $memory_6);
#line 883
undef($memory_6);
#line 883
undef($memory_5);
#line 883
$memory_5 = 0;
#line 883
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_5);
#line 883
undef($memory_5);
#line 883
label_16:
#line 883
undef($memory_4);
#line 883
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 883
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 883
$memory_2 = string_utils::is_integer($memory_0);
#line 883
label_15:
#line 883
undef($memory_3);
#line 883
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 883
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 884
$memory_3 = 0;
#line 885
$memory_4 = 0;
#line 885
$memory_5 = 1;
#line 885
label_19:
#line 885
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_1);
#line 885
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 886
$memory_7 = 8;
#line 886
$memory_3 = $memory_3 * $memory_7;
#line 886
undef($memory_7);
#line 887
$memory_9 = 1;
#line 887
$memory_8 = string::substr($memory_0, $memory_4, $memory_9);
#line 887
undef($memory_9);
#line 887
$memory_7 = string::ord($memory_8);
#line 887
undef($memory_8);
#line 887
$memory_9 = 0;
#line 887
$memory_8 = string::ord($memory_9);
#line 887
undef($memory_9);
#line 887
$memory_7 = $memory_7 - $memory_8;
#line 887
undef($memory_8);
#line 887
$memory_3 = $memory_3 + $memory_7;
#line 887
undef($memory_7);
#line 888
$memory_4 = $memory_4 + $memory_5;
#line 888
goto label_19;
#line 888
label_17:
#line 888
undef($memory_4);
#line 888
undef($memory_5);
#line 888
undef($memory_6);
#line 889
undef($memory_0);
#line 889
undef($memory_1);
#line 889
undef($memory_2);
#line 889
return $memory_3;
#line 889
undef($memory_3);
#line 890
goto label_1;
#line 890
label_14:
#line 891
undef($memory_1);
#line 891
undef($memory_2);
#line 891
return $memory_0;
#line 892
goto label_1;
#line 892
label_1:
#line 892
undef($memory_2);
#line 892
undef($memory_1);
#line 892
undef($memory_0);
#line 892
return;
}

sub translator_priv::dest_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 896
$memory_3 = $memory_0;
#line 896
$memory_3 = c_rt_lib::ov_is($memory_3, 'var');
#line 896
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 896
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 897
$memory_5 = $memory_0;
#line 897
$memory_5 = c_rt_lib::ov_as($memory_5, 'var');
#line 897
$memory_4 = translator_priv::get_var_register($memory_5, $memory_2);
#line 897
undef($memory_5);
#line 897
undef($memory_0);
#line 897
undef($memory_1);
#line 897
undef($memory_3);
#line 897
$_[2] = $memory_2;return $memory_4;
#line 897
undef($memory_4);
#line 898
goto label_2;
#line 898
label_2:
#line 898
undef($memory_3);
#line 899
$memory_3 = "";
#line 899
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 899
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 899
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 899
$memory_4 = translator_priv::new_register($memory_2);
#line 899
$memory_1 = $memory_4;
#line 899
undef($memory_4);
#line 899
goto label_4;
#line 899
label_4:
#line 899
undef($memory_3);
#line 900
translator_priv::print_val($memory_0, $memory_1, $memory_2);
#line 901
undef($memory_0);
#line 901
$_[2] = $memory_2;return $memory_1;
#line 901
undef($memory_0);
#line 901
undef($memory_1);
#line 901
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub translator_priv::def_val($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 906
$memory_4 = "";
#line 906
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 906
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 906
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 906
$memory_1 = $memory_2;
#line 906
goto label_2;
#line 906
label_2:
#line 906
undef($memory_4);
#line 907
translator_priv::print_val($memory_0, $memory_1, $memory_3);
#line 908
undef($memory_0);
#line 908
undef($memory_2);
#line 908
$_[3] = $memory_3;return $memory_1;
#line 908
undef($memory_0);
#line 908
undef($memory_1);
#line 908
undef($memory_2);
#line 908
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub translator_priv::calc_val($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 912
$memory_2 = $memory_0;
#line 912
$memory_2 = c_rt_lib::ov_is($memory_2, 'var');
#line 912
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 912
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 913
$memory_4 = $memory_0;
#line 913
$memory_4 = c_rt_lib::ov_as($memory_4, 'var');
#line 913
$memory_3 = translator_priv::get_var_register($memory_4, $memory_1);
#line 913
undef($memory_4);
#line 913
undef($memory_0);
#line 913
undef($memory_2);
#line 913
$_[1] = $memory_1;return $memory_3;
#line 913
undef($memory_3);
#line 914
goto label_2;
#line 914
label_2:
#line 914
undef($memory_2);
#line 915
$memory_2 = translator_priv::new_register($memory_1);
#line 916
translator_priv::print_val($memory_0, $memory_2, $memory_1);
#line 917
undef($memory_0);
#line 917
$_[1] = $memory_1;return $memory_2;
#line 917
undef($memory_2);
#line 917
undef($memory_0);
#line 917
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::get_var_register($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 921
$memory_3 = $memory_1->{'logic'};
#line 921
$memory_3 = $memory_3->{'variables'};
#line 921
$memory_2 = hash::get_value($memory_3, $memory_0);
#line 921
undef($memory_3);
#line 921
undef($memory_0);
#line 921
$_[1] = $memory_1;return $memory_2;
#line 921
undef($memory_2);
#line 921
undef($memory_0);
#line 921
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::new_declaration($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 925
$memory_2 = translator_priv::new_register($memory_1);
#line 926
$memory_3 = "logic";
#line 926
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 926
$memory_4 = "variables";
#line 926
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 926
hash::set_value($memory_4, $memory_0, $memory_2);
#line 926
$memory_5 = "variables";
#line 926
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 926
$memory_5 = "logic";
#line 926
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_3);
#line 926
undef($memory_5);
#line 926
undef($memory_3);
#line 926
undef($memory_4);
#line 927
$memory_3 = "debug";
#line 927
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 927
$memory_4 = "declarations";
#line 927
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 927
hash::set_value($memory_4, $memory_0, $memory_2);
#line 927
$memory_5 = "declarations";
#line 927
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 927
$memory_5 = "debug";
#line 927
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_3);
#line 927
undef($memory_5);
#line 927
undef($memory_3);
#line 927
undef($memory_4);
#line 928
undef($memory_0);
#line 928
$_[1] = $memory_1;return $memory_2;
#line 928
undef($memory_2);
#line 928
undef($memory_0);
#line 928
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::new_register($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 932
$memory_1 = "logic";
#line 932
$memory_1 = c_rt_lib::get_ref_hash($memory_0, $memory_1);
#line 932
$memory_2 = "register";
#line 932
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 932
$memory_3 = 1;
#line 932
$memory_2 = $memory_2 + $memory_3;
#line 932
$memory_4 = "register";
#line 932
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_2);
#line 932
$memory_4 = "logic";
#line 932
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_1);
#line 932
undef($memory_4);
#line 932
undef($memory_1);
#line 932
undef($memory_2);
#line 932
undef($memory_3);
#line 933
$memory_1 = $memory_0->{'result'};
#line 933
$memory_1 = $memory_1->{'reg_size'};
#line 933
$memory_2 = $memory_0->{'logic'};
#line 933
$memory_2 = $memory_2->{'register'};
#line 933
$memory_1 = c_rt_lib::to_nl($memory_1 < $memory_2);
#line 933
undef($memory_2);
#line 933
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 933
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 933
$memory_2 = $memory_0->{'logic'};
#line 933
$memory_2 = $memory_2->{'register'};
#line 933
$memory_3 = "result";
#line 933
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 933
$memory_4 = $memory_2;
#line 933
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'reg_size'} = $memory_4;
#line 933
$memory_5 = "result";
#line 933
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 933
undef($memory_5);
#line 933
undef($memory_2);
#line 933
undef($memory_3);
#line 933
undef($memory_4);
#line 933
goto label_2;
#line 933
label_2:
#line 933
undef($memory_1);
#line 934
$memory_1 = $memory_0->{'logic'};
#line 934
$memory_1 = $memory_1->{'register'};
#line 934
$memory_2 = 1;
#line 934
$memory_1 = $memory_1 - $memory_2;
#line 934
undef($memory_2);
#line 934
$_[0] = $memory_0;return $memory_1;
#line 934
undef($memory_1);
#line 934
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::save_registers($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 938
$memory_1 = $memory_0->{'logic'};
#line 938
$_[0] = $memory_0;return $memory_1;
#line 938
undef($memory_1);
#line 938
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub translator_priv::undef_reg($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 942
$memory_2 = c_rt_lib::ov_mk_arg('clear', $memory_0);
#line 942
translator_priv::print($memory_1, $memory_2);
#line 942
undef($memory_2);
#line 942
undef($memory_0);
#line 942
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::restore_registers($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 946
$memory_2 = $memory_0->{'register'};
#line 946
label_2:
#line 946
$memory_3 = $memory_1->{'logic'};
#line 946
$memory_3 = $memory_3->{'register'};
#line 946
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 946
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 946
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 947
$memory_5 = {
	module => "nlasm",
	name => "reg_t",
};
#line 947
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 947
$memory_4 = ptd::ensure($memory_5, $memory_2);
#line 947
undef($memory_5);
#line 947
translator_priv::undef_reg($memory_4, $memory_1);
#line 947
undef($memory_4);
#line 947
$memory_4 = 1;
#line 947
$memory_2 = $memory_2 + $memory_4;
#line 947
undef($memory_4);
#line 948
goto label_2;
#line 948
label_1:
#line 948
undef($memory_2);
#line 948
undef($memory_3);
#line 949
$memory_2 = $memory_0;
#line 949
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'logic'} = $memory_2;
#line 949
undef($memory_2);
#line 949
undef($memory_0);
#line 949
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::print_sim_label($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 953
$memory_2 = c_rt_lib::ov_mk_arg('prt_lbl', $memory_0);
#line 953
translator_priv::print($memory_1, $memory_2);
#line 953
undef($memory_2);
#line 953
undef($memory_0);
#line 953
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub translator_priv::get_sim_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 957
$memory_1 = "label_nr";
#line 957
$memory_1 = c_rt_lib::get_ref_hash($memory_0, $memory_1);
#line 957
$memory_2 = 1;
#line 957
$memory_1 = $memory_1 + $memory_2;
#line 957
$memory_3 = "label_nr";
#line 957
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_1);
#line 957
undef($memory_3);
#line 957
undef($memory_1);
#line 957
undef($memory_2);
#line 958
$memory_1 = "label_";
#line 958
$memory_2 = $memory_0->{'label_nr'};
#line 958
$memory_1 = $memory_1 . $memory_2;
#line 958
undef($memory_2);
#line 958
$_[0] = $memory_0;return $memory_1;
#line 958
undef($memory_1);
#line 958
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
