use c_rt_lib;
use ptd;
use nlasm;
use string;
use array;
use hash;
use ov;
use singleton;
use nl;
use boolean_t;
use string_utils;
sub generator_c_priv::get_bin_ops;
sub generator_c_priv::get_bin_ops_mod;
sub generator_c_priv::get_unary_ops;
sub generator_c_priv::gen_unary_ops;
sub generator_c_priv::gen_bin_ops;
sub generator_c_priv::gen_bin_ops_mod;
sub generator_c::const_dict;
sub generator_c::fun_args_t;
sub generator_c::const_t;
sub generator_c::global_const_t;
sub generator_c::state_t;
sub generator_c::get_empty_state;
sub generator_c_priv::print;
sub generator_c_priv::print_to_header;
sub generator_c_priv::println_to_header;
sub generator_c_priv::arg_t;
sub generator_c_priv::println;
sub generator_c_priv::get_reg;
sub generator_c_priv::get_reg_ref;
sub generator_c_priv::get_string;
sub generator_c::module_out_t;
sub generator_c::out_t;
sub generator_c::generate;
sub generator_c_priv::generate_global_const_files;
sub generator_c_priv::get_include;
sub generator_c_priv::get_cr;
sub generator_c_priv::get_function_name;
sub generator_c_priv::get_function_header;
sub generator_c_priv::get_const;
sub generator_c_priv::insert_const_to_modules_hash;
sub generator_c_priv::get_global_const;
sub generator_c::clear_module_from_state;
sub generator_c_priv::get_const_sim;
sub generator_c_priv::get_const_singleton;
sub generator_c_priv::get_func_ptr_header;
sub generator_c_priv::print_mod;
sub generator_c_priv::print_init_const;
sub generator_c_priv::print_function_block;
sub generator_c_priv::is_singleton_use_function;
sub generator_c_priv::move_args_to_register;
sub generator_c_priv::move_register_to_ref_args;
sub generator_c_priv::get_fun_lib;
sub generator_c_priv::get_module_name;
sub generator_c_priv::get_fun_name;
sub generator_c_priv::get_lib_fun;
sub generator_c_priv::generate_imm;
sub generator_c_priv::print_cmd;
sub generator_c_priv::get_assign;
sub generator_c_priv::generate_call;
sub generator_c_priv::create_sim;
sub generator_c_priv::create_sim_to_memory;

return 1;

sub generator_c_priv::__get_bin_ops() {
my $memory_0;my $memory_1;
#line 18
$memory_1 = generator_c_priv::gen_bin_ops();
#line 18
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 18
undef($memory_1);
#line 18
return $memory_0;
#line 18
undef($memory_0);
#line 18
return;
}

my $_get_bin_ops;
sub generator_c_priv::get_bin_ops() {
	$_get_bin_ops = generator_c_priv::__get_bin_ops() unless defined $_get_bin_ops;
	return $_get_bin_ops;
}

sub generator_c_priv::__get_bin_ops_mod() {
my $memory_0;my $memory_1;
#line 22
$memory_1 = generator_c_priv::gen_bin_ops_mod();
#line 22
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 22
undef($memory_1);
#line 22
return $memory_0;
#line 22
undef($memory_0);
#line 22
return;
}

my $_get_bin_ops_mod;
sub generator_c_priv::get_bin_ops_mod() {
	$_get_bin_ops_mod = generator_c_priv::__get_bin_ops_mod() unless defined $_get_bin_ops_mod;
	return $_get_bin_ops_mod;
}

sub generator_c_priv::__get_unary_ops() {
my $memory_0;my $memory_1;
#line 26
$memory_1 = generator_c_priv::gen_unary_ops();
#line 26
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 26
undef($memory_1);
#line 26
return $memory_0;
#line 26
undef($memory_0);
#line 26
return;
}

my $_get_unary_ops;
sub generator_c_priv::get_unary_ops() {
	$_get_unary_ops = generator_c_priv::__get_unary_ops() unless defined $_get_unary_ops;
	return $_get_unary_ops;
}

sub generator_c_priv::__gen_unary_ops() {
my $memory_0;my $memory_1;my $memory_2;
#line 30
$memory_0 = {};
#line 31
$memory_1 = "!";
#line 31
$memory_2 = "not";
#line 31
hash::set_value($memory_0, $memory_1, $memory_2);
#line 31
undef($memory_2);
#line 31
undef($memory_1);
#line 32
$memory_1 = "-";
#line 32
$memory_2 = "unary_minus";
#line 32
hash::set_value($memory_0, $memory_1, $memory_2);
#line 32
undef($memory_2);
#line 32
undef($memory_1);
#line 33
$memory_1 = "+";
#line 33
$memory_2 = "unary_plus";
#line 33
hash::set_value($memory_0, $memory_1, $memory_2);
#line 33
undef($memory_2);
#line 33
undef($memory_1);
#line 34
return $memory_0;
#line 34
undef($memory_0);
#line 34
return;
}

my $_gen_unary_ops;
sub generator_c_priv::gen_unary_ops() {
	$_gen_unary_ops = generator_c_priv::__gen_unary_ops() unless defined $_gen_unary_ops;
	return $_gen_unary_ops;
}

sub generator_c_priv::__gen_bin_ops() {
my $memory_0;my $memory_1;my $memory_2;
#line 38
$memory_0 = {};
#line 39
$memory_1 = "eq";
#line 39
$memory_2 = "eq";
#line 39
hash::set_value($memory_0, $memory_1, $memory_2);
#line 39
undef($memory_2);
#line 39
undef($memory_1);
#line 40
$memory_1 = "ne";
#line 40
$memory_2 = "ne";
#line 40
hash::set_value($memory_0, $memory_1, $memory_2);
#line 40
undef($memory_2);
#line 40
undef($memory_1);
#line 41
$memory_1 = "+";
#line 41
$memory_2 = "add";
#line 41
hash::set_value($memory_0, $memory_1, $memory_2);
#line 41
undef($memory_2);
#line 41
undef($memory_1);
#line 42
$memory_1 = "-";
#line 42
$memory_2 = "sub";
#line 42
hash::set_value($memory_0, $memory_1, $memory_2);
#line 42
undef($memory_2);
#line 42
undef($memory_1);
#line 43
$memory_1 = "*";
#line 43
$memory_2 = "mul";
#line 43
hash::set_value($memory_0, $memory_1, $memory_2);
#line 43
undef($memory_2);
#line 43
undef($memory_1);
#line 44
$memory_1 = "/";
#line 44
$memory_2 = "div";
#line 44
hash::set_value($memory_0, $memory_1, $memory_2);
#line 44
undef($memory_2);
#line 44
undef($memory_1);
#line 45
$memory_1 = "%";
#line 45
$memory_2 = "mod";
#line 45
hash::set_value($memory_0, $memory_1, $memory_2);
#line 45
undef($memory_2);
#line 45
undef($memory_1);
#line 46
$memory_1 = "<=";
#line 46
$memory_2 = "le";
#line 46
hash::set_value($memory_0, $memory_1, $memory_2);
#line 46
undef($memory_2);
#line 46
undef($memory_1);
#line 47
$memory_1 = "<";
#line 47
$memory_2 = "lt";
#line 47
hash::set_value($memory_0, $memory_1, $memory_2);
#line 47
undef($memory_2);
#line 47
undef($memory_1);
#line 48
$memory_1 = "==";
#line 48
$memory_2 = "num_eq";
#line 48
hash::set_value($memory_0, $memory_1, $memory_2);
#line 48
undef($memory_2);
#line 48
undef($memory_1);
#line 49
$memory_1 = "!=";
#line 49
$memory_2 = "num_ne";
#line 49
hash::set_value($memory_0, $memory_1, $memory_2);
#line 49
undef($memory_2);
#line 49
undef($memory_1);
#line 50
$memory_1 = ">";
#line 50
$memory_2 = "gt";
#line 50
hash::set_value($memory_0, $memory_1, $memory_2);
#line 50
undef($memory_2);
#line 50
undef($memory_1);
#line 51
$memory_1 = ">=";
#line 51
$memory_2 = "ge";
#line 51
hash::set_value($memory_0, $memory_1, $memory_2);
#line 51
undef($memory_2);
#line 51
undef($memory_1);
#line 52
$memory_1 = ".";
#line 52
$memory_2 = "concat_new";
#line 52
hash::set_value($memory_0, $memory_1, $memory_2);
#line 52
undef($memory_2);
#line 52
undef($memory_1);
#line 53
return $memory_0;
#line 53
undef($memory_0);
#line 53
return;
}

my $_gen_bin_ops;
sub generator_c_priv::gen_bin_ops() {
	$_gen_bin_ops = generator_c_priv::__gen_bin_ops() unless defined $_gen_bin_ops;
	return $_gen_bin_ops;
}

sub generator_c_priv::__gen_bin_ops_mod() {
my $memory_0;my $memory_1;my $memory_2;
#line 57
$memory_0 = {};
#line 58
$memory_1 = "+";
#line 58
$memory_2 = "add_mod";
#line 58
hash::set_value($memory_0, $memory_1, $memory_2);
#line 58
undef($memory_2);
#line 58
undef($memory_1);
#line 59
$memory_1 = "-";
#line 59
$memory_2 = "sub_mod";
#line 59
hash::set_value($memory_0, $memory_1, $memory_2);
#line 59
undef($memory_2);
#line 59
undef($memory_1);
#line 60
$memory_1 = "*";
#line 60
$memory_2 = "mul_mod";
#line 60
hash::set_value($memory_0, $memory_1, $memory_2);
#line 60
undef($memory_2);
#line 60
undef($memory_1);
#line 61
$memory_1 = "/";
#line 61
$memory_2 = "div_mod";
#line 61
hash::set_value($memory_0, $memory_1, $memory_2);
#line 61
undef($memory_2);
#line 61
undef($memory_1);
#line 62
$memory_1 = "%";
#line 62
$memory_2 = "mod_mod";
#line 62
hash::set_value($memory_0, $memory_1, $memory_2);
#line 62
undef($memory_2);
#line 62
undef($memory_1);
#line 63
$memory_1 = ".";
#line 63
$memory_2 = "concat_add";
#line 63
hash::set_value($memory_0, $memory_1, $memory_2);
#line 63
undef($memory_2);
#line 63
undef($memory_1);
#line 64
return $memory_0;
#line 64
undef($memory_0);
#line 64
return;
}

my $_gen_bin_ops_mod;
sub generator_c_priv::gen_bin_ops_mod() {
	$_gen_bin_ops_mod = generator_c_priv::__gen_bin_ops_mod() unless defined $_gen_bin_ops_mod;
	return $_gen_bin_ops_mod;
}

sub generator_c::__const_dict() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 68
$memory_3 = ptd::sim();
#line 68
$memory_2 = ptd::arr($memory_3);
#line 68
undef($memory_3);
#line 68
$memory_4 = ptd::sim();
#line 68
$memory_3 = ptd::hash($memory_4);
#line 68
undef($memory_4);
#line 68
$memory_1 = {arr => $memory_2,hash => $memory_3,};
#line 68
undef($memory_2);
#line 68
undef($memory_3);
#line 68
$memory_0 = ptd::rec($memory_1);
#line 68
undef($memory_1);
#line 68
return $memory_0;
#line 68
undef($memory_0);
#line 68
return;
}

my $_const_dict;
sub generator_c::const_dict() {
	$_const_dict = generator_c::__const_dict() unless defined $_const_dict;
	return $_const_dict;
}

sub generator_c::__fun_args_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 72
$memory_3 = ptd::none();
#line 72
$memory_4 = ptd::none();
#line 72
$memory_2 = {val => $memory_3,ref => $memory_4,};
#line 72
undef($memory_3);
#line 72
undef($memory_4);
#line 72
$memory_1 = ptd::var($memory_2);
#line 72
undef($memory_2);
#line 72
$memory_0 = ptd::arr($memory_1);
#line 72
undef($memory_1);
#line 72
return $memory_0;
#line 72
undef($memory_0);
#line 72
return;
}

my $_fun_args_t;
sub generator_c::fun_args_t() {
	$_fun_args_t = generator_c::__fun_args_t() unless defined $_fun_args_t;
	return $_fun_args_t;
}

sub generator_c::__const_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 76
$memory_3 = ptd::sim();
#line 76
$memory_2 = ptd::arr($memory_3);
#line 76
undef($memory_3);
#line 76
$memory_4 = ptd::sim();
#line 76
$memory_3 = ptd::hash($memory_4);
#line 76
undef($memory_4);
#line 76
$memory_1 = {arr => $memory_2,hash => $memory_3,};
#line 76
undef($memory_2);
#line 76
undef($memory_3);
#line 76
$memory_0 = ptd::rec($memory_1);
#line 76
undef($memory_1);
#line 76
return $memory_0;
#line 76
undef($memory_0);
#line 76
return;
}

my $_const_t;
sub generator_c::const_t() {
	$_const_t = generator_c::__const_t() unless defined $_const_t;
	return $_const_t;
}

sub generator_c::__global_const_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;
#line 80
$memory_5 = ptd::sim();
#line 80
$memory_6 = ptd::sim();
#line 80
$memory_4 = {key => $memory_5,uses => $memory_6,};
#line 80
undef($memory_5);
#line 80
undef($memory_6);
#line 80
$memory_3 = ptd::rec($memory_4);
#line 80
undef($memory_4);
#line 80
$memory_2 = ptd::arr($memory_3);
#line 80
undef($memory_3);
#line 80
$memory_4 = ptd::sim();
#line 80
$memory_3 = ptd::hash($memory_4);
#line 80
undef($memory_4);
#line 80
$memory_5 = ptd::sim();
#line 80
$memory_4 = ptd::arr($memory_5);
#line 80
undef($memory_5);
#line 80
$memory_7 = ptd::sim();
#line 80
$memory_6 = ptd::hash($memory_7);
#line 80
undef($memory_7);
#line 80
$memory_5 = ptd::hash($memory_6);
#line 80
undef($memory_6);
#line 80
$memory_1 = {arr => $memory_2,hash => $memory_3,holes => $memory_4,module_consts => $memory_5,};
#line 80
undef($memory_2);
#line 80
undef($memory_3);
#line 80
undef($memory_4);
#line 80
undef($memory_5);
#line 80
$memory_0 = ptd::rec($memory_1);
#line 80
undef($memory_1);
#line 80
return $memory_0;
#line 80
undef($memory_0);
#line 80
return;
}

my $_global_const_t;
sub generator_c::global_const_t() {
	$_global_const_t = generator_c::__global_const_t() unless defined $_global_const_t;
	return $_global_const_t;
}

sub generator_c::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;
#line 89
$memory_2 = {
	module => "generator_c",
	name => "global_const_t",
};
#line 89
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 89
$memory_3 = ptd::sim();
#line 89
$memory_4 = ptd::sim();
#line 89
$memory_5 = ptd::sim();
#line 89
$memory_6 = {
	module => "generator_c",
	name => "fun_args_t",
};
#line 89
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 89
$memory_9 = {
	module => "generator_c",
	name => "const_t",
};
#line 89
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 89
$memory_10 = {
	module => "generator_c",
	name => "const_t",
};
#line 89
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 89
$memory_11 = ptd::sim();
#line 89
$memory_8 = {sim => $memory_9,singleton => $memory_10,dynamic_nr => $memory_11,};
#line 89
undef($memory_9);
#line 89
undef($memory_10);
#line 89
undef($memory_11);
#line 89
$memory_7 = ptd::rec($memory_8);
#line 89
undef($memory_8);
#line 89
$memory_1 = {global_const => $memory_2,header => $memory_3,ret => $memory_4,mod_name => $memory_5,fun_args => $memory_6,const => $memory_7,};
#line 89
undef($memory_2);
#line 89
undef($memory_3);
#line 89
undef($memory_4);
#line 89
undef($memory_5);
#line 89
undef($memory_6);
#line 89
undef($memory_7);
#line 89
$memory_0 = ptd::rec($memory_1);
#line 89
undef($memory_1);
#line 89
return $memory_0;
#line 89
undef($memory_0);
#line 89
return;
}

my $_state_t;
sub generator_c::state_t() {
	$_state_t = generator_c::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub generator_c::__get_empty_state() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 104
$memory_2 = [];
#line 104
$memory_3 = {};
#line 104
$memory_4 = [];
#line 104
$memory_5 = {};
#line 104
$memory_1 = {arr => $memory_2,hash => $memory_3,holes => $memory_4,module_consts => $memory_5,};
#line 104
undef($memory_2);
#line 104
undef($memory_3);
#line 104
undef($memory_4);
#line 104
undef($memory_5);
#line 104
$memory_2 = "";
#line 104
$memory_3 = "";
#line 104
$memory_4 = [];
#line 104
$memory_6 = 0;
#line 104
$memory_8 = [];
#line 104
$memory_9 = {};
#line 104
$memory_7 = {arr => $memory_8,hash => $memory_9,};
#line 104
undef($memory_8);
#line 104
undef($memory_9);
#line 104
$memory_9 = [];
#line 104
$memory_10 = {};
#line 104
$memory_8 = {arr => $memory_9,hash => $memory_10,};
#line 104
undef($memory_9);
#line 104
undef($memory_10);
#line 104
$memory_5 = {dynamic_nr => $memory_6,sim => $memory_7,singleton => $memory_8,};
#line 104
undef($memory_6);
#line 104
undef($memory_7);
#line 104
undef($memory_8);
#line 104
$memory_6 = "";
#line 104
$memory_0 = {global_const => $memory_1,ret => $memory_2,header => $memory_3,fun_args => $memory_4,const => $memory_5,mod_name => $memory_6,};
#line 104
undef($memory_1);
#line 104
undef($memory_2);
#line 104
undef($memory_3);
#line 104
undef($memory_4);
#line 104
undef($memory_5);
#line 104
undef($memory_6);
#line 104
return $memory_0;
#line 104
undef($memory_0);
#line 104
return;
}

my $_get_empty_state;
sub generator_c::get_empty_state() {
	$_get_empty_state = generator_c::__get_empty_state() unless defined $_get_empty_state;
	return $_get_empty_state;
}

sub generator_c_priv::print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 115
$memory_2 = "ret";
#line 115
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 115
$memory_2 = $memory_2 . $memory_1;
#line 115
$memory_3 = "ret";
#line 115
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 115
undef($memory_3);
#line 115
undef($memory_2);
#line 115
undef($memory_1);
#line 115
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_to_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 119
$memory_2 = "header";
#line 119
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 119
$memory_2 = $memory_2 . $memory_1;
#line 119
$memory_3 = "header";
#line 119
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 119
undef($memory_3);
#line 119
undef($memory_2);
#line 119
undef($memory_1);
#line 119
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::println_to_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 123
$memory_2 = string::lf();
#line 123
$memory_2 = $memory_1 . $memory_2;
#line 123
$memory_3 = "header";
#line 123
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 123
$memory_3 = $memory_3 . $memory_2;
#line 123
$memory_4 = "header";
#line 123
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 123
undef($memory_4);
#line 123
undef($memory_2);
#line 123
undef($memory_3);
#line 123
undef($memory_1);
#line 123
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::__arg_t() {
my $memory_0;
#line 127
$memory_0 = "ImmT ";
#line 127
return $memory_0;
#line 127
undef($memory_0);
#line 127
return;
}

my $_arg_t;
sub generator_c_priv::arg_t() {
	$_arg_t = generator_c_priv::__arg_t() unless defined $_arg_t;
	return $_arg_t;
}

sub generator_c_priv::println($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 131
$memory_2 = "ret";
#line 131
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 131
$memory_2 = $memory_2 . $memory_1;
#line 131
$memory_3 = "ret";
#line 131
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 131
undef($memory_3);
#line 131
undef($memory_2);
#line 132
$memory_2 = string::lf();
#line 132
$memory_3 = "ret";
#line 132
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 132
$memory_3 = $memory_3 . $memory_2;
#line 132
$memory_4 = "ret";
#line 132
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 132
undef($memory_4);
#line 132
undef($memory_2);
#line 132
undef($memory_3);
#line 132
undef($memory_1);
#line 132
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_reg($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 136
$memory_2 = $memory_0->{'fun_args'};
#line 137
$memory_3 = array::len($memory_2);
#line 137
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_1);
#line 137
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 137
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 137
$memory_3 = $memory_2->[$memory_1];
#line 137
$memory_3 = c_rt_lib::ov_is($memory_3, 'ref');
#line 137
label_3:
#line 137
undef($memory_4);
#line 137
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 137
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 138
$memory_4 = "*___ref___";
#line 138
$memory_4 = $memory_4 . $memory_1;
#line 138
undef($memory_1);
#line 138
undef($memory_2);
#line 138
undef($memory_3);
#line 138
$_[0] = $memory_0;return $memory_4;
#line 138
undef($memory_4);
#line 139
goto label_2;
#line 139
label_2:
#line 139
undef($memory_3);
#line 140
$memory_3 = "___nl__";
#line 140
$memory_3 = $memory_3 . $memory_1;
#line 140
undef($memory_1);
#line 140
undef($memory_2);
#line 140
$_[0] = $memory_0;return $memory_3;
#line 140
undef($memory_3);
#line 140
undef($memory_2);
#line 140
undef($memory_1);
#line 140
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_reg_ref($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 144
$memory_2 = $memory_0->{'fun_args'};
#line 145
$memory_3 = array::len($memory_2);
#line 145
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_1);
#line 145
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 145
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 145
$memory_3 = $memory_2->[$memory_1];
#line 145
$memory_3 = c_rt_lib::ov_is($memory_3, 'ref');
#line 145
label_3:
#line 145
undef($memory_4);
#line 145
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 145
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 146
$memory_4 = "___ref___";
#line 146
$memory_4 = $memory_4 . $memory_1;
#line 146
undef($memory_1);
#line 146
undef($memory_2);
#line 146
undef($memory_3);
#line 146
$_[0] = $memory_0;return $memory_4;
#line 146
undef($memory_4);
#line 147
goto label_2;
#line 147
label_2:
#line 147
undef($memory_3);
#line 148
$memory_3 = "&___nl__";
#line 148
$memory_3 = $memory_3 . $memory_1;
#line 148
undef($memory_1);
#line 148
undef($memory_2);
#line 148
$_[0] = $memory_0;return $memory_3;
#line 148
undef($memory_3);
#line 148
undef($memory_2);
#line 148
undef($memory_1);
#line 148
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_string($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 152
$memory_1 = "\"";
#line 152
$memory_1 = $memory_1 . $memory_0;
#line 152
$memory_2 = "\"";
#line 152
$memory_1 = $memory_1 . $memory_2;
#line 152
undef($memory_2);
#line 152
undef($memory_0);
#line 152
return $memory_1;
#line 152
undef($memory_1);
#line 152
undef($memory_0);
#line 152
return;
}

sub generator_c::__module_out_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 156
$memory_2 = ptd::sim();
#line 156
$memory_3 = ptd::sim();
#line 156
$memory_1 = {c => $memory_2,h => $memory_3,};
#line 156
undef($memory_2);
#line 156
undef($memory_3);
#line 156
$memory_0 = ptd::rec($memory_1);
#line 156
undef($memory_1);
#line 156
return $memory_0;
#line 156
undef($memory_0);
#line 156
return;
}

my $_module_out_t;
sub generator_c::module_out_t() {
	$_module_out_t = generator_c::__module_out_t() unless defined $_module_out_t;
	return $_module_out_t;
}

sub generator_c::__out_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 160
$memory_3 = {
	module => "generator_c",
	name => "module_out_t",
};
#line 160
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 160
$memory_2 = ptd::hash($memory_3);
#line 160
undef($memory_3);
#line 160
$memory_3 = {
	module => "generator_c",
	name => "module_out_t",
};
#line 160
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 160
$memory_1 = {modules => $memory_2,global_const => $memory_3,};
#line 160
undef($memory_2);
#line 160
undef($memory_3);
#line 160
$memory_0 = ptd::rec($memory_1);
#line 160
undef($memory_1);
#line 160
return $memory_0;
#line 160
undef($memory_0);
#line 160
return;
}

my $_out_t;
sub generator_c::out_t() {
	$_out_t = generator_c::__out_t() unless defined $_out_t;
	return $_out_t;
}

sub generator_c::generate($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 164
$memory_2 = {};
#line 165
$memory_3 = [];
#line 166
$memory_6 = c_rt_lib::init_iter($memory_0);
#line 166
label_3:
#line 166
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 166
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 166
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 166
$memory_5 = c_rt_lib::hash_get_value($memory_0, $memory_4);
#line 167
array::push($memory_3, $memory_4);
#line 168
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 168
goto label_3;
#line 168
label_1:
#line 168
undef($memory_4);
#line 168
undef($memory_5);
#line 168
undef($memory_6);
#line 169
array::sort($memory_3);
#line 170
$memory_5 = 0;
#line 170
$memory_6 = 1;
#line 170
$memory_7 = c_rt_lib::array_len($memory_3);
#line 170
label_6:
#line 170
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 170
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 170
$memory_4 = $memory_3->[$memory_5];
#line 171
$memory_9 = hash::get_value($memory_0, $memory_4);
#line 172
generator_c::clear_module_from_state($memory_1, $memory_4);
#line 173
$memory_10 = "global_const";
#line 173
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 173
$memory_11 = "module_consts";
#line 173
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 173
$memory_12 = {};
#line 173
hash::set_value($memory_11, $memory_4, $memory_12);
#line 173
undef($memory_12);
#line 173
$memory_12 = "module_consts";
#line 173
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 173
$memory_12 = "global_const";
#line 173
c_rt_lib::set_ref_hash($memory_1, $memory_12, $memory_10);
#line 173
undef($memory_12);
#line 173
undef($memory_10);
#line 173
undef($memory_11);
#line 174
$memory_10 = "";
#line 174
$memory_11 = $memory_10;
#line 174
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'ret'} = $memory_11;
#line 174
undef($memory_10);
#line 174
undef($memory_11);
#line 175
$memory_10 = "";
#line 175
$memory_11 = $memory_10;
#line 175
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'header'} = $memory_11;
#line 175
undef($memory_10);
#line 175
undef($memory_11);
#line 176
$memory_10 = [];
#line 176
$memory_11 = $memory_10;
#line 176
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'fun_args'} = $memory_11;
#line 176
undef($memory_10);
#line 176
undef($memory_11);
#line 177
$memory_11 = 0;
#line 177
$memory_13 = [];
#line 177
$memory_14 = {};
#line 177
$memory_12 = {arr => $memory_13,hash => $memory_14,};
#line 177
undef($memory_13);
#line 177
undef($memory_14);
#line 177
$memory_14 = [];
#line 177
$memory_15 = {};
#line 177
$memory_13 = {arr => $memory_14,hash => $memory_15,};
#line 177
undef($memory_14);
#line 177
undef($memory_15);
#line 177
$memory_10 = {dynamic_nr => $memory_11,sim => $memory_12,singleton => $memory_13,};
#line 177
undef($memory_11);
#line 177
undef($memory_12);
#line 177
undef($memory_13);
#line 177
$memory_11 = $memory_10;
#line 177
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'const'} = $memory_11;
#line 177
undef($memory_10);
#line 177
undef($memory_11);
#line 178
$memory_10 = $memory_4;
#line 178
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mod_name'} = $memory_10;
#line 178
undef($memory_10);
#line 179
generator_c_priv::print_mod($memory_1, $memory_9);
#line 180
$memory_11 = $memory_1->{'ret'};
#line 180
$memory_12 = $memory_1->{'header'};
#line 180
$memory_10 = {c => $memory_11,h => $memory_12,};
#line 180
undef($memory_11);
#line 180
undef($memory_12);
#line 180
hash::set_value($memory_2, $memory_4, $memory_10);
#line 180
undef($memory_10);
#line 180
undef($memory_9);
#line 181
$memory_5 = $memory_5 + $memory_6;
#line 181
goto label_6;
#line 181
label_4:
#line 181
undef($memory_4);
#line 181
undef($memory_5);
#line 181
undef($memory_6);
#line 181
undef($memory_7);
#line 181
undef($memory_8);
#line 182
$memory_5 = generator_c_priv::generate_global_const_files($memory_1);
#line 182
$memory_4 = {modules => $memory_2,global_const => $memory_5,};
#line 182
undef($memory_5);
#line 182
undef($memory_0);
#line 182
undef($memory_2);
#line 182
undef($memory_3);
#line 182
$_[1] = $memory_1;return $memory_4;
#line 182
undef($memory_4);
#line 182
undef($memory_2);
#line 182
undef($memory_3);
#line 182
undef($memory_0);
#line 182
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub generator_c_priv::generate_global_const_files($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 186
$memory_1 = "";
#line 186
$memory_2 = $memory_1;
#line 186
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'ret'} = $memory_2;
#line 186
undef($memory_1);
#line 186
undef($memory_2);
#line 187
$memory_1 = "";
#line 187
$memory_2 = $memory_1;
#line 187
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'header'} = $memory_2;
#line 187
undef($memory_1);
#line 187
undef($memory_2);
#line 188
$memory_1 = [];
#line 188
$memory_2 = $memory_1;
#line 188
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'fun_args'} = $memory_2;
#line 188
undef($memory_1);
#line 188
undef($memory_2);
#line 189
$memory_2 = 0;
#line 189
$memory_4 = [];
#line 189
$memory_5 = {};
#line 189
$memory_3 = {arr => $memory_4,hash => $memory_5,};
#line 189
undef($memory_4);
#line 189
undef($memory_5);
#line 189
$memory_5 = [];
#line 189
$memory_6 = {};
#line 189
$memory_4 = {arr => $memory_5,hash => $memory_6,};
#line 189
undef($memory_5);
#line 189
undef($memory_6);
#line 189
$memory_1 = {dynamic_nr => $memory_2,sim => $memory_3,singleton => $memory_4,};
#line 189
undef($memory_2);
#line 189
undef($memory_3);
#line 189
undef($memory_4);
#line 189
$memory_2 = $memory_1;
#line 189
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'const'} = $memory_2;
#line 189
undef($memory_1);
#line 189
undef($memory_2);
#line 190
$memory_1 = "";
#line 190
$memory_2 = $memory_1;
#line 190
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'mod_name'} = $memory_2;
#line 190
undef($memory_1);
#line 190
undef($memory_2);
#line 191
$memory_1 = generator_c_priv::get_cr();
#line 191
generator_c_priv::print_to_header($memory_0, $memory_1);
#line 191
undef($memory_1);
#line 192
$memory_1 = "#pragma once";
#line 192
generator_c_priv::println_to_header($memory_0, $memory_1);
#line 192
undef($memory_1);
#line 193
$memory_2 = "c_rt_lib";
#line 193
$memory_1 = generator_c_priv::get_include($memory_2);
#line 193
undef($memory_2);
#line 193
generator_c_priv::println_to_header($memory_0, $memory_1);
#line 193
undef($memory_1);
#line 194
$memory_1 = generator_c_priv::get_cr();
#line 194
generator_c_priv::print($memory_0, $memory_1);
#line 194
undef($memory_1);
#line 195
$memory_2 = "c_global_const";
#line 195
$memory_1 = generator_c_priv::get_include($memory_2);
#line 195
undef($memory_2);
#line 195
generator_c_priv::println($memory_0, $memory_1);
#line 195
undef($memory_1);
#line 196
$memory_1 = $memory_0->{'global_const'};
#line 196
$memory_1 = $memory_1->{'arr'};
#line 197
$memory_2 = array::len($memory_1);
#line 198
$memory_3 = "void ___global_const_init();";
#line 198
generator_c_priv::println_to_header($memory_0, $memory_3);
#line 198
undef($memory_3);
#line 199
$memory_3 = generator_c_priv::arg_t();
#line 199
$memory_4 = " ___get_global_const(int __nr);";
#line 199
$memory_3 = $memory_3 . $memory_4;
#line 199
undef($memory_4);
#line 199
generator_c_priv::println_to_header($memory_0, $memory_3);
#line 199
undef($memory_3);
#line 200
$memory_3 = "
static ";
#line 200
$memory_4 = generator_c_priv::arg_t();
#line 200
$memory_3 = $memory_3 . $memory_4;
#line 200
undef($memory_4);
#line 200
$memory_4 = " ___global_const__ = NULL;
static int ___global_const_init__ = 1;
static int ___global_const_offset;";
#line 200
$memory_3 = $memory_3 . $memory_4;
#line 200
undef($memory_4);
#line 200
generator_c_priv::println($memory_0, $memory_3);
#line 200
undef($memory_3);
#line 204
$memory_3 = "void ___global_const_init(){
if(___global_const_init__) {
___global_const_init__ = 0;
___global_const_offset = c_rt_lib0get_global_const_offset();
___global_const__ = alloc_mem(";
#line 204
$memory_3 = $memory_3 . $memory_2;
#line 204
$memory_4 = " * ___global_const_offset);
";
#line 204
$memory_3 = $memory_3 . $memory_4;
#line 204
undef($memory_4);
#line 204
generator_c_priv::println($memory_0, $memory_3);
#line 204
undef($memory_3);
#line 210
$memory_3 = 0;
#line 210
$memory_4 = 1;
#line 210
label_3:
#line 210
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 210
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 211
$memory_7 = $memory_1->[$memory_3];
#line 211
$memory_7 = $memory_7->{'key'};
#line 211
$memory_8 = "___global_const__ + ___global_const_offset * ";
#line 211
$memory_8 = $memory_8 . $memory_3;
#line 211
$memory_6 = generator_c_priv::create_sim_to_memory($memory_7, $memory_8);
#line 211
undef($memory_8);
#line 211
undef($memory_7);
#line 211
$memory_7 = ";";
#line 211
$memory_6 = $memory_6 . $memory_7;
#line 211
undef($memory_7);
#line 211
generator_c_priv::println($memory_0, $memory_6);
#line 211
undef($memory_6);
#line 212
$memory_3 = $memory_3 + $memory_4;
#line 212
goto label_3;
#line 212
label_1:
#line 212
undef($memory_3);
#line 212
undef($memory_4);
#line 212
undef($memory_5);
#line 213
$memory_3 = "
";
#line 213
$memory_5 = "register_global_const";
#line 213
$memory_4 = generator_c_priv::get_lib_fun($memory_5);
#line 213
undef($memory_5);
#line 213
$memory_3 = $memory_3 . $memory_4;
#line 213
undef($memory_4);
#line 213
$memory_4 = "((";
#line 213
$memory_3 = $memory_3 . $memory_4;
#line 213
undef($memory_4);
#line 213
$memory_4 = generator_c_priv::arg_t();
#line 213
$memory_3 = $memory_3 . $memory_4;
#line 213
undef($memory_4);
#line 213
$memory_4 = ")___global_const__,(";
#line 213
$memory_3 = $memory_3 . $memory_4;
#line 213
undef($memory_4);
#line 213
$memory_4 = generator_c_priv::arg_t();
#line 213
$memory_3 = $memory_3 . $memory_4;
#line 213
undef($memory_4);
#line 213
$memory_4 = ")___global_const__ + ";
#line 213
$memory_3 = $memory_3 . $memory_4;
#line 213
undef($memory_4);
#line 213
$memory_3 = $memory_3 . $memory_2;
#line 213
$memory_4 = " * ___global_const_offset);
}}";
#line 213
$memory_3 = $memory_3 . $memory_4;
#line 213
undef($memory_4);
#line 213
generator_c_priv::println($memory_0, $memory_3);
#line 213
undef($memory_3);
#line 217
$memory_3 = generator_c_priv::arg_t();
#line 217
$memory_4 = "___get_global_const(int __nr) {
";
#line 217
$memory_3 = $memory_3 . $memory_4;
#line 217
undef($memory_4);
#line 217
$memory_4 = generator_c_priv::arg_t();
#line 217
$memory_3 = $memory_3 . $memory_4;
#line 217
undef($memory_4);
#line 217
$memory_4 = "ret = NULL;
";
#line 217
$memory_3 = $memory_3 . $memory_4;
#line 217
undef($memory_4);
#line 217
$memory_5 = "copy";
#line 217
$memory_7 = "&ret";
#line 217
$memory_8 = "(";
#line 217
$memory_9 = generator_c_priv::arg_t();
#line 217
$memory_8 = $memory_8 . $memory_9;
#line 217
undef($memory_9);
#line 217
$memory_9 = ")___global_const__ + ___global_const_offset * __nr";
#line 217
$memory_8 = $memory_8 . $memory_9;
#line 217
undef($memory_9);
#line 217
$memory_6 = [$memory_7,$memory_8];
#line 217
undef($memory_7);
#line 217
undef($memory_8);
#line 217
$memory_4 = generator_c_priv::get_fun_lib($memory_5, $memory_6);
#line 217
undef($memory_6);
#line 217
undef($memory_5);
#line 217
$memory_3 = $memory_3 . $memory_4;
#line 217
undef($memory_4);
#line 217
$memory_4 = ";
return ret;
}";
#line 217
$memory_3 = $memory_3 . $memory_4;
#line 217
undef($memory_4);
#line 217
generator_c_priv::println($memory_0, $memory_3);
#line 217
undef($memory_3);
#line 222
$memory_4 = $memory_0->{'ret'};
#line 222
$memory_5 = $memory_0->{'header'};
#line 222
$memory_3 = {c => $memory_4,h => $memory_5,};
#line 222
undef($memory_4);
#line 222
undef($memory_5);
#line 222
undef($memory_1);
#line 222
undef($memory_2);
#line 222
$_[0] = $memory_0;return $memory_3;
#line 222
undef($memory_3);
#line 222
undef($memory_1);
#line 222
undef($memory_2);
#line 222
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_include($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 226
$memory_1 = "#include \"";
#line 226
$memory_1 = $memory_1 . $memory_0;
#line 226
$memory_2 = ".h\"";
#line 226
$memory_1 = $memory_1 . $memory_2;
#line 226
undef($memory_2);
#line 226
undef($memory_0);
#line 226
return $memory_1;
#line 226
undef($memory_1);
#line 226
undef($memory_0);
#line 226
return;
}

sub generator_c_priv::__get_cr() {
my $memory_0;
#line 230
$memory_0 = "
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
";
#line 230
return $memory_0;
#line 230
undef($memory_0);
#line 230
return;
}

my $_get_cr;
sub generator_c_priv::get_cr() {
	$_get_cr = generator_c_priv::__get_cr() unless defined $_get_cr;
	return $_get_cr;
}

sub generator_c_priv::get_function_name($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 239
$memory_3 = $memory_0->{'access'};
#line 239
$memory_4 = c_rt_lib::ov_is($memory_3, 'pub');
#line 239
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 241
$memory_4 = c_rt_lib::ov_is($memory_3, 'priv');
#line 241
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 241
$memory_4 = "NOMATCHALERT";
#line 241
$memory_4 = [$memory_4,$memory_3];
#line 241
die(dfile::ssave($memory_4));
#line 239
label_2:
#line 240
$memory_2 = $memory_1;
#line 241
goto label_1;
#line 241
label_3:
#line 242
$memory_5 = "";
#line 242
$memory_2 = $memory_5;
#line 242
undef($memory_5);
#line 243
goto label_1;
#line 243
label_1:
#line 243
undef($memory_3);
#line 243
undef($memory_4);
#line 244
$memory_4 = $memory_0->{'name'};
#line 244
$memory_3 = generator_c_priv::get_fun_name($memory_2, $memory_4, $memory_1);
#line 244
undef($memory_4);
#line 244
undef($memory_0);
#line 244
undef($memory_1);
#line 244
undef($memory_2);
#line 244
return $memory_3;
#line 244
undef($memory_3);
#line 244
undef($memory_2);
#line 244
undef($memory_0);
#line 244
undef($memory_1);
#line 244
return;
}

sub generator_c_priv::get_function_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];
#line 248
$memory_2 = "";
#line 249
$memory_3 = generator_c_priv::get_function_name($memory_0, $memory_1);
#line 250
$memory_4 = generator_c_priv::arg_t();
#line 250
$memory_4 = $memory_4 . $memory_3;
#line 250
$memory_5 = "(";
#line 250
$memory_4 = $memory_4 . $memory_5;
#line 250
undef($memory_5);
#line 250
$memory_2 = $memory_2 . $memory_4;
#line 250
undef($memory_4);
#line 251
$memory_4 = 0;
#line 252
$memory_5 = $memory_0->{'args_type'};
#line 252
$memory_7 = 0;
#line 252
$memory_8 = 1;
#line 252
$memory_9 = c_rt_lib::array_len($memory_5);
#line 252
label_3:
#line 252
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 252
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 252
$memory_6 = $memory_5->[$memory_7];
#line 253
$memory_11 = 0;
#line 253
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_4);
#line 253
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 253
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 253
if (c_rt_lib::check_true($memory_11)) {goto label_5;}
#line 253
$memory_12 = ",";
#line 253
$memory_2 = $memory_2 . $memory_12;
#line 253
undef($memory_12);
#line 253
goto label_5;
#line 253
label_5:
#line 253
undef($memory_11);
#line 254
$memory_11 = c_rt_lib::ov_is($memory_6, 'val');
#line 254
if (c_rt_lib::check_true($memory_11)) {goto label_7;}
#line 256
$memory_11 = c_rt_lib::ov_is($memory_6, 'ref');
#line 256
if (c_rt_lib::check_true($memory_11)) {goto label_8;}
#line 256
$memory_11 = "NOMATCHALERT";
#line 256
$memory_11 = [$memory_11,$memory_6];
#line 256
die(dfile::ssave($memory_11));
#line 254
label_7:
#line 255
$memory_12 = generator_c_priv::arg_t();
#line 255
$memory_13 = "___nl__";
#line 255
$memory_12 = $memory_12 . $memory_13;
#line 255
undef($memory_13);
#line 255
$memory_12 = $memory_12 . $memory_4;
#line 255
$memory_2 = $memory_2 . $memory_12;
#line 255
undef($memory_12);
#line 256
goto label_6;
#line 256
label_8:
#line 257
$memory_12 = generator_c_priv::arg_t();
#line 257
$memory_13 = "* ___ref___";
#line 257
$memory_12 = $memory_12 . $memory_13;
#line 257
undef($memory_13);
#line 257
$memory_12 = $memory_12 . $memory_4;
#line 257
$memory_2 = $memory_2 . $memory_12;
#line 257
undef($memory_12);
#line 258
goto label_6;
#line 258
label_6:
#line 258
undef($memory_11);
#line 259
$memory_11 = 1;
#line 259
$memory_4 = $memory_4 + $memory_11;
#line 259
undef($memory_11);
#line 260
$memory_7 = $memory_7 + $memory_8;
#line 260
goto label_3;
#line 260
label_1:
#line 260
undef($memory_5);
#line 260
undef($memory_6);
#line 260
undef($memory_7);
#line 260
undef($memory_8);
#line 260
undef($memory_9);
#line 260
undef($memory_10);
#line 261
$memory_5 = ")";
#line 261
$memory_2 = $memory_2 . $memory_5;
#line 261
undef($memory_5);
#line 262
undef($memory_0);
#line 262
undef($memory_1);
#line 262
undef($memory_3);
#line 262
undef($memory_4);
#line 262
return $memory_2;
#line 262
undef($memory_2);
#line 262
undef($memory_3);
#line 262
undef($memory_4);
#line 262
undef($memory_0);
#line 262
undef($memory_1);
#line 262
return;
}

sub generator_c_priv::get_const($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 266
$memory_2 = 1;
#line 266
$memory_2 = -$memory_2;
#line 267
$memory_4 = $memory_0->{'hash'};
#line 267
$memory_3 = hash::has_key($memory_4, $memory_1);
#line 267
undef($memory_4);
#line 267
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 267
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 267
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 268
$memory_5 = $memory_0->{'arr'};
#line 268
$memory_4 = array::len($memory_5);
#line 268
undef($memory_5);
#line 268
$memory_2 = $memory_4;
#line 268
undef($memory_4);
#line 269
$memory_4 = "arr";
#line 269
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 269
array::push($memory_4, $memory_1);
#line 269
$memory_5 = "arr";
#line 269
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 269
undef($memory_5);
#line 269
undef($memory_4);
#line 270
$memory_4 = "hash";
#line 270
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 270
hash::set_value($memory_4, $memory_1, $memory_2);
#line 270
$memory_5 = "hash";
#line 270
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 270
undef($memory_5);
#line 270
undef($memory_4);
#line 271
goto label_1;
#line 271
label_2:
#line 272
$memory_5 = $memory_0->{'hash'};
#line 272
$memory_4 = hash::get_value($memory_5, $memory_1);
#line 272
undef($memory_5);
#line 272
$memory_2 = $memory_4;
#line 272
undef($memory_4);
#line 273
goto label_1;
#line 273
label_1:
#line 273
undef($memory_3);
#line 274
undef($memory_1);
#line 274
$_[0] = $memory_0;return $memory_2;
#line 274
undef($memory_2);
#line 274
undef($memory_1);
#line 274
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::insert_const_to_modules_hash($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 278
$memory_4 = $memory_0->{'module_consts'};
#line 278
$memory_3 = hash::get_value($memory_4, $memory_2);
#line 278
undef($memory_4);
#line 279
$memory_4 = "";
#line 279
hash::set_value($memory_3, $memory_1, $memory_4);
#line 279
undef($memory_4);
#line 280
$memory_4 = "module_consts";
#line 280
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 280
hash::set_value($memory_4, $memory_2, $memory_3);
#line 280
$memory_5 = "module_consts";
#line 280
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 280
undef($memory_5);
#line 280
undef($memory_4);
#line 280
undef($memory_3);
#line 280
undef($memory_1);
#line 280
undef($memory_2);
#line 280
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_global_const($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 284
$memory_3 = 1;
#line 284
$memory_3 = -$memory_3;
#line 285
$memory_5 = $memory_0->{'hash'};
#line 285
$memory_4 = hash::has_key($memory_5, $memory_1);
#line 285
undef($memory_5);
#line 285
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 285
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 285
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 286
$memory_6 = $memory_0->{'holes'};
#line 286
$memory_5 = array::len($memory_6);
#line 286
undef($memory_6);
#line 286
$memory_6 = 0;
#line 286
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 286
undef($memory_6);
#line 286
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 286
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 287
$memory_6 = $memory_0->{'holes'};
#line 287
$memory_8 = $memory_0->{'holes'};
#line 287
$memory_7 = array::len($memory_8);
#line 287
undef($memory_8);
#line 287
$memory_8 = 1;
#line 287
$memory_7 = $memory_7 - $memory_8;
#line 287
undef($memory_8);
#line 287
$memory_6 = $memory_6->[$memory_7];
#line 287
undef($memory_7);
#line 287
$memory_3 = $memory_6;
#line 287
undef($memory_6);
#line 288
$memory_6 = "holes";
#line 288
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 288
array::pop($memory_6);
#line 288
$memory_7 = "holes";
#line 288
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 288
undef($memory_7);
#line 288
undef($memory_6);
#line 289
$memory_7 = 1;
#line 289
$memory_6 = {key => $memory_1,uses => $memory_7,};
#line 289
undef($memory_7);
#line 289
$memory_7 = "arr";
#line 289
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 289
$memory_8 = $memory_6;
#line 289
 if (c_rt_lib::get_arrcount($memory_7) > 1) {$memory_7 = [@{$memory_7}];}$memory_7->[$memory_3] = $memory_8;
#line 289
$memory_9 = "arr";
#line 289
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_7);
#line 289
undef($memory_9);
#line 289
undef($memory_6);
#line 289
undef($memory_7);
#line 289
undef($memory_8);
#line 290
goto label_3;
#line 290
label_4:
#line 291
$memory_7 = $memory_0->{'arr'};
#line 291
$memory_6 = array::len($memory_7);
#line 291
undef($memory_7);
#line 291
$memory_3 = $memory_6;
#line 291
undef($memory_6);
#line 292
$memory_6 = "arr";
#line 292
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 292
$memory_8 = 1;
#line 292
$memory_7 = {key => $memory_1,uses => $memory_8,};
#line 292
undef($memory_8);
#line 292
array::push($memory_6, $memory_7);
#line 292
undef($memory_7);
#line 292
$memory_7 = "arr";
#line 292
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 292
undef($memory_7);
#line 292
undef($memory_6);
#line 293
goto label_3;
#line 293
label_3:
#line 293
undef($memory_5);
#line 294
generator_c_priv::insert_const_to_modules_hash($memory_0, $memory_1, $memory_2);
#line 295
$memory_5 = "hash";
#line 295
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 295
hash::set_value($memory_5, $memory_1, $memory_3);
#line 295
$memory_6 = "hash";
#line 295
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 295
undef($memory_6);
#line 295
undef($memory_5);
#line 296
goto label_1;
#line 296
label_2:
#line 297
$memory_6 = $memory_0->{'hash'};
#line 297
$memory_5 = hash::get_value($memory_6, $memory_1);
#line 297
undef($memory_6);
#line 297
$memory_3 = $memory_5;
#line 297
undef($memory_5);
#line 298
$memory_6 = $memory_0->{'module_consts'};
#line 298
$memory_5 = hash::get_value($memory_6, $memory_2);
#line 298
undef($memory_6);
#line 299
$memory_6 = hash::has_key($memory_5, $memory_1);
#line 299
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 299
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 299
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 300
$memory_7 = "arr";
#line 300
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 300
$memory_8 = c_rt_lib::get_ref_arr($memory_7, $memory_3);
#line 300
$memory_9 = "uses";
#line 300
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 300
$memory_10 = 1;
#line 300
$memory_9 = $memory_9 + $memory_10;
#line 300
$memory_11 = "uses";
#line 300
c_rt_lib::set_ref_hash($memory_8, $memory_11, $memory_9);
#line 300
c_rt_lib::set_ref_arr($memory_7, $memory_3, $memory_8);
#line 300
$memory_11 = "arr";
#line 300
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_7);
#line 300
undef($memory_11);
#line 300
undef($memory_7);
#line 300
undef($memory_8);
#line 300
undef($memory_9);
#line 300
undef($memory_10);
#line 301
generator_c_priv::insert_const_to_modules_hash($memory_0, $memory_1, $memory_2);
#line 302
goto label_6;
#line 302
label_6:
#line 302
undef($memory_6);
#line 302
undef($memory_5);
#line 303
goto label_1;
#line 303
label_1:
#line 303
undef($memory_4);
#line 304
undef($memory_1);
#line 304
undef($memory_2);
#line 304
$_[0] = $memory_0;return $memory_3;
#line 304
undef($memory_3);
#line 304
undef($memory_1);
#line 304
undef($memory_2);
#line 304
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c::clear_module_from_state($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 308
$memory_3 = $memory_0->{'global_const'};
#line 308
$memory_3 = $memory_3->{'module_consts'};
#line 308
$memory_2 = hash::has_key($memory_3, $memory_1);
#line 308
undef($memory_3);
#line 308
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 308
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 309
$memory_4 = $memory_0->{'global_const'};
#line 309
$memory_4 = $memory_4->{'module_consts'};
#line 309
$memory_3 = hash::get_value($memory_4, $memory_1);
#line 309
undef($memory_4);
#line 310
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 310
label_5:
#line 310
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 310
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 310
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 310
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 311
$memory_8 = $memory_0->{'global_const'};
#line 311
$memory_8 = $memory_8->{'hash'};
#line 311
$memory_7 = hash::get_value($memory_8, $memory_4);
#line 311
undef($memory_8);
#line 312
$memory_8 = "global_const";
#line 312
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 312
$memory_9 = "arr";
#line 312
$memory_9 = c_rt_lib::get_ref_hash($memory_8, $memory_9);
#line 312
$memory_10 = c_rt_lib::get_ref_arr($memory_9, $memory_7);
#line 312
$memory_11 = "uses";
#line 312
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 312
$memory_12 = 1;
#line 312
$memory_11 = $memory_11 - $memory_12;
#line 312
$memory_13 = "uses";
#line 312
c_rt_lib::set_ref_hash($memory_10, $memory_13, $memory_11);
#line 312
c_rt_lib::set_ref_arr($memory_9, $memory_7, $memory_10);
#line 312
$memory_13 = "arr";
#line 312
c_rt_lib::set_ref_hash($memory_8, $memory_13, $memory_9);
#line 312
$memory_13 = "global_const";
#line 312
c_rt_lib::set_ref_hash($memory_0, $memory_13, $memory_8);
#line 312
undef($memory_13);
#line 312
undef($memory_8);
#line 312
undef($memory_9);
#line 312
undef($memory_10);
#line 312
undef($memory_11);
#line 312
undef($memory_12);
#line 313
$memory_8 = $memory_0->{'global_const'};
#line 313
$memory_8 = $memory_8->{'arr'};
#line 313
$memory_8 = $memory_8->[$memory_7];
#line 313
$memory_8 = $memory_8->{'uses'};
#line 313
$memory_9 = 0;
#line 313
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 313
undef($memory_9);
#line 313
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 313
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 314
$memory_9 = "global_const";
#line 314
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 314
$memory_10 = "hash";
#line 314
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 314
hash::delete($memory_10, $memory_4);
#line 314
$memory_11 = "hash";
#line 314
c_rt_lib::set_ref_hash($memory_9, $memory_11, $memory_10);
#line 314
$memory_11 = "global_const";
#line 314
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_9);
#line 314
undef($memory_11);
#line 314
undef($memory_9);
#line 314
undef($memory_10);
#line 315
$memory_9 = "global_const";
#line 315
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 315
$memory_10 = "holes";
#line 315
$memory_10 = c_rt_lib::get_ref_hash($memory_9, $memory_10);
#line 315
array::push($memory_10, $memory_7);
#line 315
$memory_11 = "holes";
#line 315
c_rt_lib::set_ref_hash($memory_9, $memory_11, $memory_10);
#line 315
$memory_11 = "global_const";
#line 315
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_9);
#line 315
undef($memory_11);
#line 315
undef($memory_9);
#line 315
undef($memory_10);
#line 316
goto label_7;
#line 316
label_7:
#line 316
undef($memory_8);
#line 316
undef($memory_7);
#line 317
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 317
goto label_5;
#line 317
label_3:
#line 317
undef($memory_4);
#line 317
undef($memory_5);
#line 317
undef($memory_6);
#line 318
$memory_4 = "global_const";
#line 318
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 318
$memory_5 = "module_consts";
#line 318
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 318
hash::delete($memory_5, $memory_1);
#line 318
$memory_6 = "module_consts";
#line 318
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 318
$memory_6 = "global_const";
#line 318
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 318
undef($memory_6);
#line 318
undef($memory_4);
#line 318
undef($memory_5);
#line 318
undef($memory_3);
#line 319
goto label_2;
#line 319
label_2:
#line 319
undef($memory_2);
#line 319
undef($memory_1);
#line 319
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_const_sim($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 323
$memory_3 = "global_const";
#line 323
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 323
$memory_4 = $memory_0->{'mod_name'};
#line 323
$memory_2 = generator_c_priv::get_global_const($memory_3, $memory_1, $memory_4);
#line 323
undef($memory_4);
#line 323
$memory_4 = "global_const";
#line 323
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 323
undef($memory_4);
#line 323
undef($memory_3);
#line 324
$memory_3 = "___get_global_const(";
#line 324
$memory_3 = $memory_3 . $memory_2;
#line 324
$memory_4 = ")";
#line 324
$memory_3 = $memory_3 . $memory_4;
#line 324
undef($memory_4);
#line 324
undef($memory_1);
#line 324
undef($memory_2);
#line 324
$_[0] = $memory_0;return $memory_3;
#line 324
undef($memory_3);
#line 324
undef($memory_2);
#line 324
undef($memory_1);
#line 324
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_const_singleton($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 328
$memory_3 = "const";
#line 328
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 328
$memory_4 = "singleton";
#line 328
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 328
$memory_2 = generator_c_priv::get_const($memory_4, $memory_1);
#line 328
$memory_5 = "singleton";
#line 328
c_rt_lib::set_ref_hash($memory_3, $memory_5, $memory_4);
#line 328
$memory_5 = "const";
#line 328
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 328
undef($memory_5);
#line 328
undef($memory_3);
#line 328
undef($memory_4);
#line 329
$memory_4 = "";
#line 329
$memory_5 = "__const__sing";
#line 329
$memory_6 = $memory_0->{'mod_name'};
#line 329
$memory_3 = generator_c_priv::get_fun_name($memory_4, $memory_5, $memory_6);
#line 329
undef($memory_6);
#line 329
undef($memory_5);
#line 329
undef($memory_4);
#line 329
$memory_4 = "(";
#line 329
$memory_3 = $memory_3 . $memory_4;
#line 329
undef($memory_4);
#line 329
$memory_3 = $memory_3 . $memory_2;
#line 329
$memory_4 = ")";
#line 329
$memory_3 = $memory_3 . $memory_4;
#line 329
undef($memory_4);
#line 329
undef($memory_1);
#line 329
undef($memory_2);
#line 329
$_[0] = $memory_0;return $memory_3;
#line 329
undef($memory_3);
#line 329
undef($memory_2);
#line 329
undef($memory_1);
#line 329
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_func_ptr_header($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 333
$memory_2 = generator_c_priv::arg_t();
#line 333
$memory_3 = generator_c_priv::get_function_name($memory_0, $memory_1);
#line 333
$memory_2 = $memory_2 . $memory_3;
#line 333
undef($memory_3);
#line 333
$memory_3 = "0ptr(int _num, ImmT *_tab)";
#line 333
$memory_2 = $memory_2 . $memory_3;
#line 333
undef($memory_3);
#line 333
undef($memory_0);
#line 333
undef($memory_1);
#line 333
return $memory_2;
#line 333
undef($memory_2);
#line 333
undef($memory_0);
#line 333
undef($memory_1);
#line 333
return;
}

sub generator_c_priv::print_mod($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 337
$memory_2 = generator_c_priv::get_cr();
#line 337
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 337
undef($memory_2);
#line 338
$memory_2 = "#pragma once";
#line 338
$memory_3 = string::lf();
#line 338
$memory_2 = $memory_2 . $memory_3;
#line 338
undef($memory_3);
#line 338
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 338
undef($memory_2);
#line 339
$memory_3 = "c_rt_lib";
#line 339
$memory_2 = generator_c_priv::get_include($memory_3);
#line 339
undef($memory_3);
#line 339
$memory_3 = string::lf();
#line 339
$memory_2 = $memory_2 . $memory_3;
#line 339
undef($memory_3);
#line 339
generator_c_priv::print_to_header($memory_0, $memory_2);
#line 339
undef($memory_2);
#line 340
$memory_2 = generator_c_priv::get_cr();
#line 340
generator_c_priv::print($memory_0, $memory_2);
#line 340
undef($memory_2);
#line 341
$memory_3 = "c_rt_lib";
#line 341
$memory_2 = generator_c_priv::get_include($memory_3);
#line 341
undef($memory_3);
#line 341
generator_c_priv::println($memory_0, $memory_2);
#line 341
undef($memory_2);
#line 342
$memory_3 = "c_global_const";
#line 342
$memory_2 = generator_c_priv::get_include($memory_3);
#line 342
undef($memory_3);
#line 342
generator_c_priv::println($memory_0, $memory_2);
#line 342
undef($memory_2);
#line 343
$memory_3 = $memory_0->{'mod_name'};
#line 343
$memory_2 = generator_c_priv::get_include($memory_3);
#line 343
undef($memory_3);
#line 343
generator_c_priv::println($memory_0, $memory_2);
#line 343
undef($memory_2);
#line 344
$memory_2 = $memory_1->{'imports'};
#line 344
$memory_4 = 0;
#line 344
$memory_5 = 1;
#line 344
$memory_6 = c_rt_lib::array_len($memory_2);
#line 344
label_3:
#line 344
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 344
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 344
$memory_3 = $memory_2->[$memory_4];
#line 345
$memory_8 = generator_c_priv::get_include($memory_3);
#line 345
generator_c_priv::println($memory_0, $memory_8);
#line 345
undef($memory_8);
#line 346
$memory_4 = $memory_4 + $memory_5;
#line 346
goto label_3;
#line 346
label_1:
#line 346
undef($memory_2);
#line 346
undef($memory_3);
#line 346
undef($memory_4);
#line 346
undef($memory_5);
#line 346
undef($memory_6);
#line 346
undef($memory_7);
#line 347
$memory_2 = "#line 1 \"";
#line 347
$memory_3 = $memory_0->{'mod_name'};
#line 347
$memory_2 = $memory_2 . $memory_3;
#line 347
undef($memory_3);
#line 347
$memory_3 = ".nl\"";
#line 347
$memory_2 = $memory_2 . $memory_3;
#line 347
undef($memory_3);
#line 347
$memory_3 = string::lf();
#line 347
$memory_2 = $memory_2 . $memory_3;
#line 347
undef($memory_3);
#line 347
generator_c_priv::println($memory_0, $memory_2);
#line 347
undef($memory_2);
#line 348
$memory_2 = "static ";
#line 348
$memory_3 = generator_c_priv::arg_t();
#line 348
$memory_2 = $memory_2 . $memory_3;
#line 348
undef($memory_3);
#line 348
$memory_3 = "*__const__f = NULL;";
#line 348
$memory_2 = $memory_2 . $memory_3;
#line 348
undef($memory_3);
#line 348
generator_c_priv::println($memory_0, $memory_2);
#line 348
undef($memory_2);
#line 349
$memory_2 = "void ";
#line 349
$memory_4 = "";
#line 349
$memory_5 = "__const__init";
#line 349
$memory_6 = $memory_0->{'mod_name'};
#line 349
$memory_3 = generator_c_priv::get_fun_name($memory_4, $memory_5, $memory_6);
#line 349
undef($memory_6);
#line 349
undef($memory_5);
#line 349
undef($memory_4);
#line 349
$memory_2 = $memory_2 . $memory_3;
#line 349
undef($memory_3);
#line 349
$memory_3 = "();";
#line 349
$memory_2 = $memory_2 . $memory_3;
#line 349
undef($memory_3);
#line 349
generator_c_priv::println($memory_0, $memory_2);
#line 349
undef($memory_2);
#line 350
$memory_2 = generator_c_priv::arg_t();
#line 350
$memory_4 = "";
#line 350
$memory_5 = "__const__sim";
#line 350
$memory_6 = $memory_0->{'mod_name'};
#line 350
$memory_3 = generator_c_priv::get_fun_name($memory_4, $memory_5, $memory_6);
#line 350
undef($memory_6);
#line 350
undef($memory_5);
#line 350
undef($memory_4);
#line 350
$memory_2 = $memory_2 . $memory_3;
#line 350
undef($memory_3);
#line 350
$memory_3 = "(int __nr);";
#line 350
$memory_2 = $memory_2 . $memory_3;
#line 350
undef($memory_3);
#line 350
generator_c_priv::println($memory_0, $memory_2);
#line 350
undef($memory_2);
#line 351
$memory_2 = generator_c_priv::arg_t();
#line 351
$memory_4 = "";
#line 351
$memory_5 = "__const__sing";
#line 351
$memory_6 = $memory_0->{'mod_name'};
#line 351
$memory_3 = generator_c_priv::get_fun_name($memory_4, $memory_5, $memory_6);
#line 351
undef($memory_6);
#line 351
undef($memory_5);
#line 351
undef($memory_4);
#line 351
$memory_2 = $memory_2 . $memory_3;
#line 351
undef($memory_3);
#line 351
$memory_3 = "(int __nr);";
#line 351
$memory_2 = $memory_2 . $memory_3;
#line 351
undef($memory_3);
#line 351
$memory_3 = string::lf();
#line 351
$memory_2 = $memory_2 . $memory_3;
#line 351
undef($memory_3);
#line 351
generator_c_priv::println($memory_0, $memory_2);
#line 351
undef($memory_2);
#line 352
$memory_2 = $memory_1->{'functions'};
#line 352
$memory_4 = 0;
#line 352
$memory_5 = 1;
#line 352
$memory_6 = c_rt_lib::array_len($memory_2);
#line 352
label_6:
#line 352
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 352
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 352
$memory_3 = $memory_2->[$memory_4];
#line 353
$memory_9 = $memory_0->{'mod_name'};
#line 353
$memory_8 = generator_c_priv::get_function_header($memory_3, $memory_9);
#line 353
undef($memory_9);
#line 354
$memory_9 = $memory_3->{'access'};
#line 354
$memory_10 = c_rt_lib::ov_is($memory_9, 'pub');
#line 354
if (c_rt_lib::check_true($memory_10)) {goto label_8;}
#line 357
$memory_10 = c_rt_lib::ov_is($memory_9, 'priv');
#line 357
if (c_rt_lib::check_true($memory_10)) {goto label_9;}
#line 357
$memory_10 = "NOMATCHALERT";
#line 357
$memory_10 = [$memory_10,$memory_9];
#line 357
die(dfile::ssave($memory_10));
#line 354
label_8:
#line 355
$memory_11 = ";";
#line 355
$memory_11 = $memory_8 . $memory_11;
#line 355
$memory_12 = string::lf();
#line 355
$memory_11 = $memory_11 . $memory_12;
#line 355
undef($memory_12);
#line 355
generator_c_priv::print_to_header($memory_0, $memory_11);
#line 355
undef($memory_11);
#line 356
$memory_12 = $memory_0->{'mod_name'};
#line 356
$memory_11 = generator_c_priv::get_func_ptr_header($memory_3, $memory_12);
#line 356
undef($memory_12);
#line 356
$memory_12 = ";";
#line 356
$memory_11 = $memory_11 . $memory_12;
#line 356
undef($memory_12);
#line 356
$memory_12 = string::lf();
#line 356
$memory_11 = $memory_11 . $memory_12;
#line 356
undef($memory_12);
#line 356
generator_c_priv::print_to_header($memory_0, $memory_11);
#line 356
undef($memory_11);
#line 357
goto label_7;
#line 357
label_9:
#line 358
$memory_11 = ";";
#line 358
$memory_11 = $memory_8 . $memory_11;
#line 358
generator_c_priv::println($memory_0, $memory_11);
#line 358
undef($memory_11);
#line 359
goto label_7;
#line 359
label_7:
#line 359
undef($memory_9);
#line 359
undef($memory_10);
#line 359
undef($memory_8);
#line 360
$memory_4 = $memory_4 + $memory_5;
#line 360
goto label_6;
#line 360
label_4:
#line 360
undef($memory_2);
#line 360
undef($memory_3);
#line 360
undef($memory_4);
#line 360
undef($memory_5);
#line 360
undef($memory_6);
#line 360
undef($memory_7);
#line 361
$memory_2 = string::lf();
#line 361
generator_c_priv::println($memory_0, $memory_2);
#line 361
undef($memory_2);
#line 362
$memory_2 = $memory_1->{'functions'};
#line 362
$memory_4 = 0;
#line 362
$memory_5 = 1;
#line 362
$memory_6 = c_rt_lib::array_len($memory_2);
#line 362
label_12:
#line 362
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 362
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 362
$memory_3 = $memory_2->[$memory_4];
#line 363
$memory_8 = $memory_3->{'access'};
#line 363
$memory_8 = c_rt_lib::ov_is($memory_8, 'pub');
#line 363
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 363
if (c_rt_lib::check_true($memory_8)) {goto label_14;}
#line 364
$memory_10 = $memory_0->{'mod_name'};
#line 364
$memory_9 = generator_c_priv::get_function_name($memory_3, $memory_10);
#line 364
undef($memory_10);
#line 365
$memory_11 = $memory_0->{'mod_name'};
#line 365
$memory_10 = generator_c_priv::get_func_ptr_header($memory_3, $memory_11);
#line 365
undef($memory_11);
#line 365
$memory_11 = "{";
#line 365
$memory_10 = $memory_10 . $memory_11;
#line 365
undef($memory_11);
#line 365
generator_c_priv::println($memory_0, $memory_10);
#line 365
undef($memory_10);
#line 366
$memory_11 = $memory_3->{'args_type'};
#line 366
$memory_10 = array::len($memory_11);
#line 366
undef($memory_11);
#line 367
$memory_12 = "func_num_args";
#line 367
$memory_14 = "_num";
#line 367
$memory_15 = generator_c_priv::get_string($memory_9);
#line 367
$memory_13 = [$memory_14,$memory_10,$memory_15];
#line 367
undef($memory_14);
#line 367
undef($memory_15);
#line 367
$memory_11 = generator_c_priv::get_fun_lib($memory_12, $memory_13);
#line 367
undef($memory_13);
#line 367
undef($memory_12);
#line 367
$memory_12 = ";";
#line 367
$memory_11 = $memory_11 . $memory_12;
#line 367
undef($memory_12);
#line 367
generator_c_priv::println($memory_0, $memory_11);
#line 367
undef($memory_11);
#line 368
$memory_11 = "return ";
#line 368
$memory_11 = $memory_11 . $memory_9;
#line 368
$memory_12 = "(";
#line 368
$memory_11 = $memory_11 . $memory_12;
#line 368
undef($memory_12);
#line 368
generator_c_priv::print($memory_0, $memory_11);
#line 368
undef($memory_11);
#line 369
$memory_11 = 0;
#line 369
$memory_12 = 1;
#line 369
label_17:
#line 369
$memory_13 = c_rt_lib::to_nl($memory_11 >= $memory_10);
#line 369
if (c_rt_lib::check_true($memory_13)) {goto label_15;}
#line 370
$memory_14 = 0;
#line 370
$memory_14 = c_rt_lib::to_nl($memory_11 > $memory_14);
#line 370
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 370
if (c_rt_lib::check_true($memory_14)) {goto label_19;}
#line 370
$memory_15 = ", ";
#line 370
generator_c_priv::print($memory_0, $memory_15);
#line 370
undef($memory_15);
#line 370
goto label_19;
#line 370
label_19:
#line 370
undef($memory_14);
#line 371
$memory_14 = $memory_3->{'args_type'};
#line 371
$memory_14 = $memory_14->[$memory_11];
#line 371
$memory_15 = c_rt_lib::ov_is($memory_14, 'val');
#line 371
if (c_rt_lib::check_true($memory_15)) {goto label_21;}
#line 373
$memory_15 = c_rt_lib::ov_is($memory_14, 'ref');
#line 373
if (c_rt_lib::check_true($memory_15)) {goto label_22;}
#line 373
$memory_15 = "NOMATCHALERT";
#line 373
$memory_15 = [$memory_15,$memory_14];
#line 373
die(dfile::ssave($memory_15));
#line 371
label_21:
#line 372
$memory_16 = "_tab[";
#line 372
$memory_16 = $memory_16 . $memory_11;
#line 372
$memory_17 = "]";
#line 372
$memory_16 = $memory_16 . $memory_17;
#line 372
undef($memory_17);
#line 372
generator_c_priv::print($memory_0, $memory_16);
#line 372
undef($memory_16);
#line 373
goto label_20;
#line 373
label_22:
#line 374
$memory_16 = "&_tab[";
#line 374
$memory_16 = $memory_16 . $memory_11;
#line 374
$memory_17 = "]";
#line 374
$memory_16 = $memory_16 . $memory_17;
#line 374
undef($memory_17);
#line 374
generator_c_priv::print($memory_0, $memory_16);
#line 374
undef($memory_16);
#line 375
goto label_20;
#line 375
label_20:
#line 375
undef($memory_14);
#line 375
undef($memory_15);
#line 376
$memory_11 = $memory_11 + $memory_12;
#line 376
goto label_17;
#line 376
label_15:
#line 376
undef($memory_11);
#line 376
undef($memory_12);
#line 376
undef($memory_13);
#line 377
$memory_11 = ");}";
#line 377
generator_c_priv::println($memory_0, $memory_11);
#line 377
undef($memory_11);
#line 377
undef($memory_9);
#line 377
undef($memory_10);
#line 378
goto label_14;
#line 378
label_14:
#line 378
undef($memory_8);
#line 379
$memory_8 = generator_c_priv::is_singleton_use_function($memory_3);
#line 379
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 379
if (c_rt_lib::check_true($memory_8)) {goto label_24;}
#line 380
$memory_10 = $memory_0->{'mod_name'};
#line 380
$memory_9 = generator_c_priv::get_function_name($memory_3, $memory_10);
#line 380
undef($memory_10);
#line 381
$memory_10 = generator_c_priv::arg_t();
#line 381
$memory_10 = $memory_10 . $memory_9;
#line 381
$memory_11 = "(){";
#line 381
$memory_10 = $memory_10 . $memory_11;
#line 381
undef($memory_11);
#line 381
generator_c_priv::println($memory_0, $memory_10);
#line 381
undef($memory_10);
#line 382
$memory_11 = "";
#line 382
$memory_12 = "__const__init";
#line 382
$memory_13 = $memory_0->{'mod_name'};
#line 382
$memory_10 = generator_c_priv::get_fun_name($memory_11, $memory_12, $memory_13);
#line 382
undef($memory_13);
#line 382
undef($memory_12);
#line 382
undef($memory_11);
#line 382
$memory_11 = "();";
#line 382
$memory_10 = $memory_10 . $memory_11;
#line 382
undef($memory_11);
#line 382
generator_c_priv::println($memory_0, $memory_10);
#line 382
undef($memory_10);
#line 383
$memory_10 = "return ";
#line 383
$memory_11 = generator_c_priv::get_const_singleton($memory_0, $memory_9);
#line 383
$memory_10 = $memory_10 . $memory_11;
#line 383
undef($memory_11);
#line 383
$memory_11 = ";}";
#line 383
$memory_10 = $memory_10 . $memory_11;
#line 383
undef($memory_11);
#line 383
generator_c_priv::println($memory_0, $memory_10);
#line 383
undef($memory_10);
#line 384
$memory_10 = generator_c_priv::arg_t();
#line 384
$memory_10 = $memory_10 . $memory_9;
#line 384
$memory_11 = "0cal()";
#line 384
$memory_10 = $memory_10 . $memory_11;
#line 384
undef($memory_11);
#line 384
generator_c_priv::print($memory_0, $memory_10);
#line 384
undef($memory_10);
#line 384
undef($memory_9);
#line 385
goto label_23;
#line 385
label_24:
#line 386
$memory_10 = $memory_0->{'mod_name'};
#line 386
$memory_9 = generator_c_priv::get_function_header($memory_3, $memory_10);
#line 386
undef($memory_10);
#line 386
generator_c_priv::print($memory_0, $memory_9);
#line 386
undef($memory_9);
#line 387
goto label_23;
#line 387
label_23:
#line 387
undef($memory_8);
#line 388
generator_c_priv::print_function_block($memory_0, $memory_3);
#line 389
$memory_4 = $memory_4 + $memory_5;
#line 389
goto label_12;
#line 389
label_10:
#line 389
undef($memory_2);
#line 389
undef($memory_3);
#line 389
undef($memory_4);
#line 389
undef($memory_5);
#line 389
undef($memory_6);
#line 389
undef($memory_7);
#line 390
generator_c_priv::print_init_const($memory_0);
#line 390
undef($memory_1);
#line 390
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_init_const($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 394
$memory_1 = $memory_0->{'const'};
#line 394
$memory_1 = $memory_1->{'sim'};
#line 394
$memory_1 = $memory_1->{'arr'};
#line 395
$memory_2 = $memory_0->{'const'};
#line 395
$memory_2 = $memory_2->{'singleton'};
#line 395
$memory_2 = $memory_2->{'arr'};
#line 396
$memory_3 = array::len($memory_1);
#line 397
$memory_4 = array::len($memory_2);
#line 398
$memory_5 = $memory_0->{'const'};
#line 398
$memory_5 = $memory_5->{'dynamic_nr'};
#line 399
$memory_6 = $memory_3 + $memory_4;
#line 399
$memory_6 = $memory_6 + $memory_5;
#line 400
$memory_7 = "
static ";
#line 400
$memory_8 = generator_c_priv::arg_t();
#line 400
$memory_7 = $memory_7 . $memory_8;
#line 400
undef($memory_8);
#line 400
$memory_8 = "___const__[";
#line 400
$memory_7 = $memory_7 . $memory_8;
#line 400
undef($memory_8);
#line 400
$memory_8 = 1;
#line 400
$memory_8 = $memory_8 + $memory_6;
#line 400
$memory_7 = $memory_7 . $memory_8;
#line 400
undef($memory_8);
#line 400
$memory_8 = "];
static int ___const_init__ = 1;";
#line 400
$memory_7 = $memory_7 . $memory_8;
#line 400
undef($memory_8);
#line 400
generator_c_priv::println($memory_0, $memory_7);
#line 400
undef($memory_7);
#line 403
$memory_7 = "void ";
#line 403
$memory_9 = "";
#line 403
$memory_10 = "__const__init";
#line 403
$memory_11 = $memory_0->{'mod_name'};
#line 403
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 403
undef($memory_11);
#line 403
undef($memory_10);
#line 403
undef($memory_9);
#line 403
$memory_7 = $memory_7 . $memory_8;
#line 403
undef($memory_8);
#line 403
$memory_8 = "(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[";
#line 403
$memory_7 = $memory_7 . $memory_8;
#line 403
undef($memory_8);
#line 403
$memory_8 = $memory_3 + $memory_4;
#line 403
$memory_7 = $memory_7 . $memory_8;
#line 403
undef($memory_8);
#line 403
$memory_8 = "];
";
#line 403
$memory_7 = $memory_7 . $memory_8;
#line 403
undef($memory_8);
#line 403
generator_c_priv::println($memory_0, $memory_7);
#line 403
undef($memory_7);
#line 408
$memory_7 = 0;
#line 408
$memory_8 = 1;
#line 408
label_3:
#line 408
$memory_9 = c_rt_lib::to_nl($memory_7 >= $memory_3);
#line 408
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 409
$memory_10 = "___const__[";
#line 409
$memory_10 = $memory_10 . $memory_7;
#line 409
$memory_11 = "] = ";
#line 409
$memory_10 = $memory_10 . $memory_11;
#line 409
undef($memory_11);
#line 409
$memory_12 = $memory_1->[$memory_7];
#line 409
$memory_11 = generator_c_priv::create_sim($memory_12);
#line 409
undef($memory_12);
#line 409
$memory_10 = $memory_10 . $memory_11;
#line 409
undef($memory_11);
#line 409
$memory_11 = ";";
#line 409
$memory_10 = $memory_10 . $memory_11;
#line 409
undef($memory_11);
#line 409
generator_c_priv::println($memory_0, $memory_10);
#line 409
undef($memory_10);
#line 410
$memory_7 = $memory_7 + $memory_8;
#line 410
goto label_3;
#line 410
label_1:
#line 410
undef($memory_7);
#line 410
undef($memory_8);
#line 410
undef($memory_9);
#line 411
$memory_7 = "
for(int i=";
#line 411
$memory_7 = $memory_7 . $memory_3;
#line 411
$memory_8 = ";i<";
#line 411
$memory_7 = $memory_7 . $memory_8;
#line 411
undef($memory_8);
#line 411
$memory_7 = $memory_7 . $memory_6;
#line 411
$memory_8 = ";++i) ___const__[i] = NULL;
";
#line 411
$memory_7 = $memory_7 . $memory_8;
#line 411
undef($memory_8);
#line 411
$memory_9 = "register_const";
#line 411
$memory_8 = generator_c_priv::get_lib_fun($memory_9);
#line 411
undef($memory_9);
#line 411
$memory_7 = $memory_7 . $memory_8;
#line 411
undef($memory_8);
#line 411
$memory_8 = "(___const__, ";
#line 411
$memory_7 = $memory_7 . $memory_8;
#line 411
undef($memory_8);
#line 411
$memory_7 = $memory_7 . $memory_6;
#line 411
$memory_8 = ");
}}";
#line 411
$memory_7 = $memory_7 . $memory_8;
#line 411
undef($memory_8);
#line 411
generator_c_priv::println($memory_0, $memory_7);
#line 411
undef($memory_7);
#line 415
$memory_7 = generator_c_priv::arg_t();
#line 415
$memory_9 = "";
#line 415
$memory_10 = "__const__sim";
#line 415
$memory_11 = $memory_0->{'mod_name'};
#line 415
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 415
undef($memory_11);
#line 415
undef($memory_10);
#line 415
undef($memory_9);
#line 415
$memory_7 = $memory_7 . $memory_8;
#line 415
undef($memory_8);
#line 415
$memory_8 = "(int __nr) {
";
#line 415
$memory_7 = $memory_7 . $memory_8;
#line 415
undef($memory_8);
#line 415
$memory_8 = generator_c_priv::arg_t();
#line 415
$memory_7 = $memory_7 . $memory_8;
#line 415
undef($memory_8);
#line 415
$memory_8 = "ret = NULL;
";
#line 415
$memory_7 = $memory_7 . $memory_8;
#line 415
undef($memory_8);
#line 415
$memory_9 = "copy";
#line 415
$memory_11 = "&ret";
#line 415
$memory_12 = "___const__[__nr]";
#line 415
$memory_10 = [$memory_11,$memory_12];
#line 415
undef($memory_11);
#line 415
undef($memory_12);
#line 415
$memory_8 = generator_c_priv::get_fun_lib($memory_9, $memory_10);
#line 415
undef($memory_10);
#line 415
undef($memory_9);
#line 415
$memory_7 = $memory_7 . $memory_8;
#line 415
undef($memory_8);
#line 415
$memory_8 = ";
return ret;
}";
#line 415
$memory_7 = $memory_7 . $memory_8;
#line 415
undef($memory_8);
#line 415
generator_c_priv::println($memory_0, $memory_7);
#line 415
undef($memory_7);
#line 420
$memory_7 = generator_c_priv::arg_t();
#line 420
$memory_9 = "";
#line 420
$memory_10 = "__const__sing";
#line 420
$memory_11 = $memory_0->{'mod_name'};
#line 420
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 420
undef($memory_11);
#line 420
undef($memory_10);
#line 420
undef($memory_9);
#line 420
$memory_7 = $memory_7 . $memory_8;
#line 420
undef($memory_8);
#line 420
$memory_8 = "(int __nr) {
if(___const__[__nr+";
#line 420
$memory_7 = $memory_7 . $memory_8;
#line 420
undef($memory_8);
#line 420
$memory_7 = $memory_7 . $memory_3;
#line 420
$memory_8 = "]==NULL) {
switch(__nr){";
#line 420
$memory_7 = $memory_7 . $memory_8;
#line 420
undef($memory_8);
#line 420
generator_c_priv::println($memory_0, $memory_7);
#line 420
undef($memory_7);
#line 423
$memory_7 = array::len($memory_2);
#line 423
$memory_8 = 0;
#line 423
$memory_9 = 1;
#line 423
label_6:
#line 423
$memory_10 = c_rt_lib::to_nl($memory_8 >= $memory_7);
#line 423
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 424
$memory_11 = "case ";
#line 424
$memory_11 = $memory_11 . $memory_8;
#line 424
$memory_12 = ":";
#line 424
$memory_11 = $memory_11 . $memory_12;
#line 424
undef($memory_12);
#line 424
generator_c_priv::println($memory_0, $memory_11);
#line 424
undef($memory_11);
#line 425
$memory_11 = "	___const__[";
#line 425
$memory_12 = $memory_8 + $memory_3;
#line 425
$memory_11 = $memory_11 . $memory_12;
#line 425
undef($memory_12);
#line 425
$memory_12 = "] = ";
#line 425
$memory_11 = $memory_11 . $memory_12;
#line 425
undef($memory_12);
#line 425
$memory_12 = $memory_2->[$memory_8];
#line 425
$memory_11 = $memory_11 . $memory_12;
#line 425
undef($memory_12);
#line 425
$memory_12 = "0cal();";
#line 425
$memory_11 = $memory_11 . $memory_12;
#line 425
undef($memory_12);
#line 425
generator_c_priv::println($memory_0, $memory_11);
#line 425
undef($memory_11);
#line 426
$memory_11 = "	break;";
#line 426
generator_c_priv::println($memory_0, $memory_11);
#line 426
undef($memory_11);
#line 427
$memory_8 = $memory_8 + $memory_9;
#line 427
goto label_6;
#line 427
label_4:
#line 427
undef($memory_7);
#line 427
undef($memory_8);
#line 427
undef($memory_9);
#line 427
undef($memory_10);
#line 428
$memory_7 = "default:
	nl_die();
}}
";
#line 428
$memory_8 = generator_c_priv::arg_t();
#line 428
$memory_7 = $memory_7 . $memory_8;
#line 428
undef($memory_8);
#line 428
$memory_8 = "ret = NULL;
";
#line 428
$memory_7 = $memory_7 . $memory_8;
#line 428
undef($memory_8);
#line 428
$memory_9 = "copy";
#line 428
$memory_11 = "&ret";
#line 428
$memory_12 = "___const__[__nr+";
#line 428
$memory_12 = $memory_12 . $memory_3;
#line 428
$memory_13 = "]";
#line 428
$memory_12 = $memory_12 . $memory_13;
#line 428
undef($memory_13);
#line 428
$memory_10 = [$memory_11,$memory_12];
#line 428
undef($memory_11);
#line 428
undef($memory_12);
#line 428
$memory_8 = generator_c_priv::get_fun_lib($memory_9, $memory_10);
#line 428
undef($memory_10);
#line 428
undef($memory_9);
#line 428
$memory_7 = $memory_7 . $memory_8;
#line 428
undef($memory_8);
#line 428
$memory_8 = ";
return ret;
}";
#line 428
$memory_7 = $memory_7 . $memory_8;
#line 428
undef($memory_8);
#line 428
generator_c_priv::println($memory_0, $memory_7);
#line 428
undef($memory_7);
#line 428
undef($memory_1);
#line 428
undef($memory_2);
#line 428
undef($memory_3);
#line 428
undef($memory_4);
#line 428
undef($memory_5);
#line 428
undef($memory_6);
#line 428
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_function_block($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 438
$memory_2 = " {";
#line 438
generator_c_priv::println($memory_0, $memory_2);
#line 438
undef($memory_2);
#line 439
$memory_2 = $memory_1->{'args_type'};
#line 439
$memory_3 = $memory_2;
#line 439
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'fun_args'} = $memory_3;
#line 439
undef($memory_2);
#line 439
undef($memory_3);
#line 440
generator_c_priv::move_args_to_register($memory_0);
#line 441
$memory_3 = "";
#line 441
$memory_4 = "__const__init";
#line 441
$memory_5 = $memory_0->{'mod_name'};
#line 441
$memory_2 = generator_c_priv::get_fun_name($memory_3, $memory_4, $memory_5);
#line 441
undef($memory_5);
#line 441
undef($memory_4);
#line 441
undef($memory_3);
#line 441
$memory_3 = "();";
#line 441
$memory_2 = $memory_2 . $memory_3;
#line 441
undef($memory_3);
#line 441
generator_c_priv::println($memory_0, $memory_2);
#line 441
undef($memory_2);
#line 442
$memory_3 = $memory_1->{'args_type'};
#line 442
$memory_2 = array::len($memory_3);
#line 442
undef($memory_3);
#line 442
label_2:
#line 442
$memory_3 = $memory_1->{'reg_size'};
#line 442
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 442
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 442
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 443
$memory_4 = generator_c_priv::arg_t();
#line 443
$memory_5 = generator_c_priv::get_reg($memory_0, $memory_2);
#line 443
$memory_4 = $memory_4 . $memory_5;
#line 443
undef($memory_5);
#line 443
$memory_5 = " = NULL;";
#line 443
$memory_4 = $memory_4 . $memory_5;
#line 443
undef($memory_5);
#line 443
generator_c_priv::println($memory_0, $memory_4);
#line 443
undef($memory_4);
#line 443
$memory_4 = 1;
#line 443
$memory_2 = $memory_2 + $memory_4;
#line 443
undef($memory_4);
#line 444
goto label_2;
#line 444
label_1:
#line 444
undef($memory_2);
#line 444
undef($memory_3);
#line 445
$memory_2 = $memory_1->{'commands'};
#line 445
$memory_4 = 0;
#line 445
$memory_5 = 1;
#line 445
$memory_6 = c_rt_lib::array_len($memory_2);
#line 445
label_6:
#line 445
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 445
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 445
$memory_3 = $memory_2->[$memory_4];
#line 446
$memory_8 = $memory_3->{'annotation'};
#line 446
$memory_9 = c_rt_lib::ov_is($memory_8, 'none');
#line 446
if (c_rt_lib::check_true($memory_9)) {goto label_8;}
#line 448
$memory_9 = c_rt_lib::ov_is($memory_8, 'const');
#line 448
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 448
$memory_9 = "NOMATCHALERT";
#line 448
$memory_9 = [$memory_9,$memory_8];
#line 448
die(dfile::ssave($memory_9));
#line 446
label_8:
#line 447
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 448
goto label_7;
#line 448
label_9:
#line 448
$memory_10 = c_rt_lib::ov_as($memory_8, 'const');
#line 449
$memory_11 = $memory_3->{'cmd'};
#line 449
$memory_11 = c_rt_lib::ov_is($memory_11, 'load_const');
#line 449
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 449
if (c_rt_lib::check_true($memory_11)) {goto label_11;}
#line 450
$memory_12 = $memory_3->{'cmd'};
#line 450
$memory_12 = c_rt_lib::ov_as($memory_12, 'load_const');
#line 450
$memory_12 = $memory_12->{'val'};
#line 451
$memory_13 = nl::is_sim($memory_12);
#line 451
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 451
if (c_rt_lib::check_true($memory_13)) {goto label_13;}
#line 452
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 453
undef($memory_8);
#line 453
undef($memory_9);
#line 453
undef($memory_10);
#line 453
undef($memory_11);
#line 453
undef($memory_12);
#line 453
undef($memory_13);
#line 453
goto label_5;
#line 454
goto label_13;
#line 454
label_13:
#line 454
undef($memory_13);
#line 454
undef($memory_12);
#line 455
goto label_11;
#line 455
label_11:
#line 455
undef($memory_11);
#line 456
$memory_11 = array::len($memory_10);
#line 457
$memory_12 = 0;
#line 457
$memory_12 = c_rt_lib::to_nl($memory_11 == $memory_12);
#line 457
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 457
if (c_rt_lib::check_true($memory_12)) {goto label_15;}
#line 458
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 459
undef($memory_8);
#line 459
undef($memory_9);
#line 459
undef($memory_10);
#line 459
undef($memory_11);
#line 459
undef($memory_12);
#line 459
goto label_5;
#line 460
goto label_14;
#line 460
label_15:
#line 461
$memory_13 = $memory_0->{'const'};
#line 461
$memory_13 = $memory_13->{'dynamic_nr'};
#line 462
$memory_14 = "if(__const__f[";
#line 462
$memory_14 = $memory_14 . $memory_13;
#line 462
$memory_15 = "] == NULL) {";
#line 462
$memory_14 = $memory_14 . $memory_15;
#line 462
undef($memory_15);
#line 462
generator_c_priv::println($memory_0, $memory_14);
#line 462
undef($memory_14);
#line 463
generator_c_priv::print_cmd($memory_0, $memory_3);
#line 464
$memory_15 = 0;
#line 464
$memory_16 = 1;
#line 464
$memory_17 = c_rt_lib::array_len($memory_10);
#line 464
label_18:
#line 464
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 464
if (c_rt_lib::check_true($memory_18)) {goto label_16;}
#line 464
$memory_14 = $memory_10->[$memory_15];
#line 465
$memory_20 = "copy";
#line 465
$memory_22 = "&__const__f[";
#line 465
$memory_22 = $memory_22 . $memory_13;
#line 465
$memory_23 = "]";
#line 465
$memory_22 = $memory_22 . $memory_23;
#line 465
undef($memory_23);
#line 465
$memory_23 = generator_c_priv::get_reg($memory_0, $memory_14);
#line 465
$memory_21 = [$memory_22,$memory_23];
#line 465
undef($memory_22);
#line 465
undef($memory_23);
#line 465
$memory_19 = generator_c_priv::get_fun_lib($memory_20, $memory_21);
#line 465
undef($memory_21);
#line 465
undef($memory_20);
#line 465
$memory_20 = ";";
#line 465
$memory_19 = $memory_19 . $memory_20;
#line 465
undef($memory_20);
#line 465
generator_c_priv::println($memory_0, $memory_19);
#line 465
undef($memory_19);
#line 466
$memory_19 = 1;
#line 466
$memory_13 = $memory_13 + $memory_19;
#line 466
undef($memory_19);
#line 467
$memory_15 = $memory_15 + $memory_16;
#line 467
goto label_18;
#line 467
label_16:
#line 467
undef($memory_14);
#line 467
undef($memory_15);
#line 467
undef($memory_16);
#line 467
undef($memory_17);
#line 467
undef($memory_18);
#line 468
$memory_14 = "}";
#line 468
generator_c_priv::println($memory_0, $memory_14);
#line 468
undef($memory_14);
#line 469
$memory_13 = $memory_13 - $memory_11;
#line 470
$memory_15 = 0;
#line 470
$memory_16 = 1;
#line 470
$memory_17 = c_rt_lib::array_len($memory_10);
#line 470
label_21:
#line 470
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 470
if (c_rt_lib::check_true($memory_18)) {goto label_19;}
#line 470
$memory_14 = $memory_10->[$memory_15];
#line 471
$memory_20 = "copy";
#line 471
$memory_22 = generator_c_priv::get_reg_ref($memory_0, $memory_14);
#line 471
$memory_23 = "__const__f[";
#line 471
$memory_23 = $memory_23 . $memory_13;
#line 471
$memory_24 = "]";
#line 471
$memory_23 = $memory_23 . $memory_24;
#line 471
undef($memory_24);
#line 471
$memory_21 = [$memory_22,$memory_23];
#line 471
undef($memory_22);
#line 471
undef($memory_23);
#line 471
$memory_19 = generator_c_priv::get_fun_lib($memory_20, $memory_21);
#line 471
undef($memory_21);
#line 471
undef($memory_20);
#line 471
$memory_20 = ";";
#line 471
$memory_19 = $memory_19 . $memory_20;
#line 471
undef($memory_20);
#line 471
generator_c_priv::println($memory_0, $memory_19);
#line 471
undef($memory_19);
#line 473
$memory_19 = 1;
#line 473
$memory_13 = $memory_13 + $memory_19;
#line 473
undef($memory_19);
#line 474
$memory_15 = $memory_15 + $memory_16;
#line 474
goto label_21;
#line 474
label_19:
#line 474
undef($memory_14);
#line 474
undef($memory_15);
#line 474
undef($memory_16);
#line 474
undef($memory_17);
#line 474
undef($memory_18);
#line 475
$memory_14 = "const";
#line 475
$memory_14 = c_rt_lib::get_ref_hash($memory_0, $memory_14);
#line 475
$memory_15 = $memory_13;
#line 475
 if (c_rt_lib::get_hashcount($memory_14) > 1) {$memory_14 = {%{$memory_14}};}$memory_14->{'dynamic_nr'} = $memory_15;
#line 475
$memory_16 = "const";
#line 475
c_rt_lib::set_ref_hash($memory_0, $memory_16, $memory_14);
#line 475
undef($memory_16);
#line 475
undef($memory_14);
#line 475
undef($memory_15);
#line 475
undef($memory_13);
#line 476
goto label_14;
#line 476
label_14:
#line 476
undef($memory_12);
#line 476
undef($memory_11);
#line 476
undef($memory_10);
#line 477
goto label_7;
#line 477
label_7:
#line 477
undef($memory_8);
#line 477
undef($memory_9);
#line 477
label_5:
#line 478
$memory_4 = $memory_4 + $memory_5;
#line 478
goto label_6;
#line 478
label_4:
#line 478
undef($memory_2);
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
#line 479
$memory_2 = "}";
#line 479
$memory_3 = string::lf();
#line 479
$memory_2 = $memory_2 . $memory_3;
#line 479
undef($memory_3);
#line 479
generator_c_priv::println($memory_0, $memory_2);
#line 479
undef($memory_2);
#line 479
undef($memory_1);
#line 479
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::is_singleton_use_function($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];
#line 483
$memory_2 = $memory_0->{'args_type'};
#line 483
$memory_1 = array::len($memory_2);
#line 483
undef($memory_2);
#line 483
$memory_2 = 0;
#line 483
$memory_1 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 483
undef($memory_2);
#line 483
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 483
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 483
$memory_2 = c_rt_lib::to_nl(0);
#line 483
undef($memory_0);
#line 483
undef($memory_1);
#line 483
return $memory_2;
#line 483
undef($memory_2);
#line 483
goto label_2;
#line 483
label_2:
#line 483
undef($memory_1);
#line 484
$memory_1 = $memory_0->{'annotation'};
#line 484
$memory_1 = c_rt_lib::ov_is($memory_1, 'math');
#line 485
$memory_2 = c_rt_lib::to_nl(0);
#line 487
$memory_4 = $memory_0->{'commands'};
#line 487
$memory_6 = 0;
#line 487
$memory_7 = 1;
#line 487
$memory_8 = c_rt_lib::array_len($memory_4);
#line 487
label_5:
#line 487
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 487
if (c_rt_lib::check_true($memory_9)) {goto label_3;}
#line 487
$memory_5 = $memory_4->[$memory_6];
#line 488
$memory_10 = $memory_5->{'cmd'};
#line 489
$memory_11 = $memory_10;
#line 489
$memory_11 = c_rt_lib::ov_is($memory_11, 'call');
#line 489
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 489
if (c_rt_lib::check_true($memory_11)) {goto label_7;}
#line 490
$memory_12 = $memory_10;
#line 490
$memory_12 = c_rt_lib::ov_as($memory_12, 'call');
#line 491
$memory_13 = $memory_12->{'fun_name'};
#line 491
$memory_14 = "sigleton_do_not_use_without_approval";
#line 491
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_14);
#line 491
undef($memory_14);
#line 491
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 491
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 491
if (c_rt_lib::check_true($memory_13)) {goto label_9;}
#line 491
undef($memory_10);
#line 491
undef($memory_11);
#line 491
undef($memory_12);
#line 491
undef($memory_13);
#line 491
goto label_4;
#line 491
goto label_9;
#line 491
label_9:
#line 491
undef($memory_13);
#line 492
$memory_13 = $memory_12->{'mod'};
#line 492
$memory_14 = "singleton";
#line 492
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_14);
#line 492
undef($memory_14);
#line 492
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 492
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 492
if (c_rt_lib::check_true($memory_13)) {goto label_11;}
#line 492
undef($memory_10);
#line 492
undef($memory_11);
#line 492
undef($memory_12);
#line 492
undef($memory_13);
#line 492
goto label_4;
#line 492
goto label_11;
#line 492
label_11:
#line 492
undef($memory_13);
#line 493
$memory_13 = c_rt_lib::to_nl(1);
#line 493
$memory_2 = $memory_13;
#line 493
undef($memory_13);
#line 494
$memory_13 = $memory_12->{'dest'};
#line 494
$memory_3 = $memory_13;
#line 494
undef($memory_13);
#line 494
undef($memory_12);
#line 495
goto label_6;
#line 495
label_7:
#line 495
$memory_11 = $memory_10;
#line 495
$memory_11 = c_rt_lib::ov_is($memory_11, 'return');
#line 495
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 495
if (c_rt_lib::check_true($memory_11)) {goto label_12;}
#line 496
$memory_12 = $memory_10;
#line 496
$memory_12 = c_rt_lib::ov_as($memory_12, 'return');
#line 497
$memory_13 = $memory_12;
#line 497
$memory_13 = c_rt_lib::ov_is($memory_13, 'val');
#line 497
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 497
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 497
if (c_rt_lib::check_true($memory_13)) {goto label_14;}
#line 497
$memory_14 = c_rt_lib::to_nl(0);
#line 497
undef($memory_0);
#line 497
undef($memory_1);
#line 497
undef($memory_2);
#line 497
undef($memory_3);
#line 497
undef($memory_4);
#line 497
undef($memory_5);
#line 497
undef($memory_6);
#line 497
undef($memory_7);
#line 497
undef($memory_8);
#line 497
undef($memory_9);
#line 497
undef($memory_10);
#line 497
undef($memory_11);
#line 497
undef($memory_12);
#line 497
undef($memory_13);
#line 497
return $memory_14;
#line 497
undef($memory_14);
#line 497
goto label_14;
#line 497
label_14:
#line 497
undef($memory_13);
#line 498
$memory_13 = $memory_1;
#line 498
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 498
if (c_rt_lib::check_true($memory_13)) {goto label_16;}
#line 498
$memory_14 = c_rt_lib::to_nl(1);
#line 498
undef($memory_0);
#line 498
undef($memory_1);
#line 498
undef($memory_2);
#line 498
undef($memory_3);
#line 498
undef($memory_4);
#line 498
undef($memory_5);
#line 498
undef($memory_6);
#line 498
undef($memory_7);
#line 498
undef($memory_8);
#line 498
undef($memory_9);
#line 498
undef($memory_10);
#line 498
undef($memory_11);
#line 498
undef($memory_12);
#line 498
undef($memory_13);
#line 498
return $memory_14;
#line 498
undef($memory_14);
#line 498
goto label_16;
#line 498
label_16:
#line 498
undef($memory_13);
#line 499
$memory_13 = $memory_2;
#line 499
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 499
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 499
if (c_rt_lib::check_true($memory_13)) {goto label_18;}
#line 499
$memory_14 = c_rt_lib::to_nl(0);
#line 499
undef($memory_0);
#line 499
undef($memory_1);
#line 499
undef($memory_2);
#line 499
undef($memory_3);
#line 499
undef($memory_4);
#line 499
undef($memory_5);
#line 499
undef($memory_6);
#line 499
undef($memory_7);
#line 499
undef($memory_8);
#line 499
undef($memory_9);
#line 499
undef($memory_10);
#line 499
undef($memory_11);
#line 499
undef($memory_12);
#line 499
undef($memory_13);
#line 499
return $memory_14;
#line 499
undef($memory_14);
#line 499
goto label_18;
#line 499
label_18:
#line 499
undef($memory_13);
#line 500
$memory_13 = $memory_12;
#line 500
$memory_13 = c_rt_lib::ov_as($memory_13, 'val');
#line 500
$memory_13 = c_rt_lib::to_nl($memory_13 eq $memory_3);
#line 500
undef($memory_0);
#line 500
undef($memory_1);
#line 500
undef($memory_2);
#line 500
undef($memory_3);
#line 500
undef($memory_4);
#line 500
undef($memory_5);
#line 500
undef($memory_6);
#line 500
undef($memory_7);
#line 500
undef($memory_8);
#line 500
undef($memory_9);
#line 500
undef($memory_10);
#line 500
undef($memory_11);
#line 500
undef($memory_12);
#line 500
return $memory_13;
#line 500
undef($memory_13);
#line 500
undef($memory_12);
#line 501
goto label_6;
#line 501
label_12:
#line 501
$memory_11 = $memory_10;
#line 501
$memory_11 = c_rt_lib::ov_is($memory_11, 'prt_lbl');
#line 501
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 501
if (c_rt_lib::check_true($memory_11)) {goto label_19;}
#line 502
goto label_6;
#line 502
label_19:
#line 502
$memory_11 = $memory_10;
#line 502
$memory_11 = c_rt_lib::ov_is($memory_11, 'clear');
#line 502
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 502
if (c_rt_lib::check_true($memory_11)) {goto label_20;}
#line 503
goto label_6;
#line 503
label_20:
#line 504
$memory_12 = $memory_2;
#line 504
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 504
if (c_rt_lib::check_true($memory_12)) {goto label_22;}
#line 504
$memory_13 = c_rt_lib::to_nl(0);
#line 504
undef($memory_0);
#line 504
undef($memory_1);
#line 504
undef($memory_2);
#line 504
undef($memory_3);
#line 504
undef($memory_4);
#line 504
undef($memory_5);
#line 504
undef($memory_6);
#line 504
undef($memory_7);
#line 504
undef($memory_8);
#line 504
undef($memory_9);
#line 504
undef($memory_10);
#line 504
undef($memory_11);
#line 504
undef($memory_12);
#line 504
return $memory_13;
#line 504
undef($memory_13);
#line 504
goto label_22;
#line 504
label_22:
#line 504
undef($memory_12);
#line 505
goto label_6;
#line 505
label_6:
#line 505
undef($memory_11);
#line 505
undef($memory_10);
#line 505
label_4:
#line 506
$memory_6 = $memory_6 + $memory_7;
#line 506
goto label_5;
#line 506
label_3:
#line 506
undef($memory_4);
#line 506
undef($memory_5);
#line 506
undef($memory_6);
#line 506
undef($memory_7);
#line 506
undef($memory_8);
#line 506
undef($memory_9);
#line 507
$memory_4 = c_rt_lib::to_nl(0);
#line 507
undef($memory_0);
#line 507
undef($memory_1);
#line 507
undef($memory_2);
#line 507
undef($memory_3);
#line 507
return $memory_4;
#line 507
undef($memory_4);
#line 507
undef($memory_1);
#line 507
undef($memory_2);
#line 507
undef($memory_3);
#line 507
undef($memory_0);
#line 507
return;
}

sub generator_c_priv::move_args_to_register($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 511
$memory_2 = $memory_0->{'fun_args'};
#line 511
$memory_1 = array::len($memory_2);
#line 511
undef($memory_2);
#line 511
$memory_2 = 0;
#line 511
$memory_3 = 1;
#line 511
label_3:
#line 511
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 511
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 512
$memory_5 = $memory_0->{'fun_args'};
#line 512
$memory_5 = $memory_5->[$memory_2];
#line 512
$memory_6 = c_rt_lib::ov_is($memory_5, 'val');
#line 512
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 515
$memory_6 = c_rt_lib::ov_is($memory_5, 'ref');
#line 515
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 515
$memory_6 = "NOMATCHALERT";
#line 515
$memory_6 = [$memory_6,$memory_5];
#line 515
die(dfile::ssave($memory_6));
#line 512
label_5:
#line 513
$memory_8 = "arg_val";
#line 513
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_2);
#line 513
$memory_9 = [$memory_10];
#line 513
undef($memory_10);
#line 513
$memory_7 = generator_c_priv::get_fun_lib($memory_8, $memory_9);
#line 513
undef($memory_9);
#line 513
undef($memory_8);
#line 513
generator_c_priv::print($memory_0, $memory_7);
#line 513
undef($memory_7);
#line 514
$memory_7 = ";";
#line 514
generator_c_priv::println($memory_0, $memory_7);
#line 514
undef($memory_7);
#line 515
goto label_4;
#line 515
label_6:
#line 516
goto label_4;
#line 516
label_4:
#line 516
undef($memory_5);
#line 516
undef($memory_6);
#line 517
$memory_2 = $memory_2 + $memory_3;
#line 517
goto label_3;
#line 517
label_1:
#line 517
undef($memory_1);
#line 517
undef($memory_2);
#line 517
undef($memory_3);
#line 517
undef($memory_4);
#line 517
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::move_register_to_ref_args($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 521
$memory_2 = $memory_0->{'fun_args'};
#line 521
$memory_1 = array::len($memory_2);
#line 521
undef($memory_2);
#line 521
$memory_2 = 0;
#line 521
$memory_3 = 1;
#line 521
label_3:
#line 521
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 521
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 522
$memory_5 = $memory_0->{'fun_args'};
#line 522
$memory_5 = $memory_5->[$memory_2];
#line 522
$memory_6 = c_rt_lib::ov_is($memory_5, 'val');
#line 522
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 523
$memory_6 = c_rt_lib::ov_is($memory_5, 'ref');
#line 523
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 523
$memory_6 = "NOMATCHALERT";
#line 523
$memory_6 = [$memory_6,$memory_5];
#line 523
die(dfile::ssave($memory_6));
#line 522
label_5:
#line 523
goto label_4;
#line 523
label_6:
#line 524
goto label_4;
#line 524
label_4:
#line 524
undef($memory_5);
#line 524
undef($memory_6);
#line 525
$memory_2 = $memory_2 + $memory_3;
#line 525
goto label_3;
#line 525
label_1:
#line 525
undef($memory_1);
#line 525
undef($memory_2);
#line 525
undef($memory_3);
#line 525
undef($memory_4);
#line 525
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_fun_lib($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 529
$memory_2 = generator_c_priv::get_lib_fun($memory_0);
#line 529
$memory_3 = "(";
#line 529
$memory_2 = $memory_2 . $memory_3;
#line 529
undef($memory_3);
#line 530
$memory_3 = 0;
#line 531
$memory_5 = 0;
#line 531
$memory_6 = 1;
#line 531
$memory_7 = c_rt_lib::array_len($memory_1);
#line 531
label_3:
#line 531
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 531
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 531
$memory_4 = $memory_1->[$memory_5];
#line 532
$memory_9 = 0;
#line 532
$memory_9 = c_rt_lib::to_nl($memory_9 == $memory_3);
#line 532
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 532
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 532
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 532
$memory_10 = ", ";
#line 532
$memory_2 = $memory_2 . $memory_10;
#line 532
undef($memory_10);
#line 532
goto label_5;
#line 532
label_5:
#line 532
undef($memory_9);
#line 533
$memory_2 = $memory_2 . $memory_4;
#line 534
$memory_9 = 1;
#line 534
$memory_3 = $memory_3 + $memory_9;
#line 534
undef($memory_9);
#line 535
$memory_5 = $memory_5 + $memory_6;
#line 535
goto label_3;
#line 535
label_1:
#line 535
undef($memory_4);
#line 535
undef($memory_5);
#line 535
undef($memory_6);
#line 535
undef($memory_7);
#line 535
undef($memory_8);
#line 536
$memory_4 = ")";
#line 536
$memory_4 = $memory_2 . $memory_4;
#line 536
undef($memory_0);
#line 536
undef($memory_1);
#line 536
undef($memory_2);
#line 536
undef($memory_3);
#line 536
return $memory_4;
#line 536
undef($memory_4);
#line 536
undef($memory_2);
#line 536
undef($memory_3);
#line 536
undef($memory_0);
#line 536
undef($memory_1);
#line 536
return;
}

sub generator_c_priv::get_module_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 540
$memory_2 = 0;
#line 540
$memory_3 = "00";
#line 540
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 540
undef($memory_3);
#line 540
undef($memory_2);
#line 540
undef($memory_0);
#line 540
return $memory_1;
#line 540
undef($memory_1);
#line 540
undef($memory_0);
#line 540
return;
}

sub generator_c_priv::get_fun_name($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 544
$memory_3 = "";
#line 544
$memory_3 = c_rt_lib::to_nl($memory_0 eq $memory_3);
#line 544
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 544
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 544
$memory_4 = "_priv";
#line 544
$memory_4 = $memory_2 . $memory_4;
#line 544
$memory_0 = $memory_4;
#line 544
undef($memory_4);
#line 544
goto label_2;
#line 544
label_2:
#line 544
undef($memory_3);
#line 545
$memory_3 = generator_c_priv::get_module_name($memory_0);
#line 545
$memory_4 = 0;
#line 545
$memory_3 = $memory_3 . $memory_4;
#line 545
undef($memory_4);
#line 545
$memory_5 = 0;
#line 545
$memory_6 = "00";
#line 545
$memory_4 = string::replace($memory_1, $memory_5, $memory_6);
#line 545
undef($memory_6);
#line 545
undef($memory_5);
#line 545
$memory_3 = $memory_3 . $memory_4;
#line 545
undef($memory_4);
#line 545
undef($memory_0);
#line 545
undef($memory_1);
#line 545
undef($memory_2);
#line 545
return $memory_3;
#line 545
undef($memory_3);
#line 545
undef($memory_0);
#line 545
undef($memory_1);
#line 545
undef($memory_2);
#line 545
return;
}

sub generator_c_priv::get_lib_fun($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 549
$memory_2 = "c_rt_lib";
#line 549
$memory_3 = "";
#line 549
$memory_1 = generator_c_priv::get_fun_name($memory_2, $memory_0, $memory_3);
#line 549
undef($memory_3);
#line 549
undef($memory_2);
#line 549
undef($memory_0);
#line 549
return $memory_1;
#line 549
undef($memory_1);
#line 549
undef($memory_0);
#line 549
return;
}

sub generator_c_priv::generate_imm($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 553
$memory_2 = nl::is_hash($memory_1);
#line 553
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 553
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 554
$memory_4 = "hash_mk_dec";
#line 554
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 554
undef($memory_4);
#line 554
$memory_4 = "(";
#line 554
$memory_3 = $memory_3 . $memory_4;
#line 554
undef($memory_4);
#line 554
$memory_4 = hash::size($memory_1);
#line 554
$memory_3 = $memory_3 . $memory_4;
#line 554
undef($memory_4);
#line 554
generator_c_priv::print($memory_0, $memory_3);
#line 554
undef($memory_3);
#line 555
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 555
label_5:
#line 555
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 555
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 555
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 555
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 556
$memory_6 = ", ";
#line 556
generator_c_priv::print($memory_0, $memory_6);
#line 556
undef($memory_6);
#line 557
$memory_6 = generator_c_priv::get_const_sim($memory_0, $memory_3);
#line 557
generator_c_priv::print($memory_0, $memory_6);
#line 557
undef($memory_6);
#line 558
$memory_6 = ", ";
#line 558
generator_c_priv::print($memory_0, $memory_6);
#line 558
undef($memory_6);
#line 559
generator_c_priv::generate_imm($memory_0, $memory_4);
#line 560
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 560
goto label_5;
#line 560
label_3:
#line 560
undef($memory_3);
#line 560
undef($memory_4);
#line 560
undef($memory_5);
#line 561
$memory_3 = ")";
#line 561
generator_c_priv::print($memory_0, $memory_3);
#line 561
undef($memory_3);
#line 562
goto label_1;
#line 562
label_2:
#line 562
$memory_2 = nl::is_array($memory_1);
#line 562
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 562
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 563
$memory_4 = "array_mk_dec";
#line 563
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 563
undef($memory_4);
#line 563
$memory_4 = "(";
#line 563
$memory_3 = $memory_3 . $memory_4;
#line 563
undef($memory_4);
#line 563
$memory_4 = array::len($memory_1);
#line 563
$memory_3 = $memory_3 . $memory_4;
#line 563
undef($memory_4);
#line 563
generator_c_priv::print($memory_0, $memory_3);
#line 563
undef($memory_3);
#line 564
$memory_4 = 0;
#line 564
$memory_5 = 1;
#line 564
$memory_6 = c_rt_lib::array_len($memory_1);
#line 564
label_9:
#line 564
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 564
if (c_rt_lib::check_true($memory_7)) {goto label_7;}
#line 564
$memory_3 = $memory_1->[$memory_4];
#line 565
$memory_8 = ", ";
#line 565
generator_c_priv::print($memory_0, $memory_8);
#line 565
undef($memory_8);
#line 566
generator_c_priv::generate_imm($memory_0, $memory_3);
#line 567
$memory_4 = $memory_4 + $memory_5;
#line 567
goto label_9;
#line 567
label_7:
#line 567
undef($memory_3);
#line 567
undef($memory_4);
#line 567
undef($memory_5);
#line 567
undef($memory_6);
#line 567
undef($memory_7);
#line 568
$memory_3 = ")";
#line 568
generator_c_priv::print($memory_0, $memory_3);
#line 568
undef($memory_3);
#line 569
goto label_1;
#line 569
label_6:
#line 569
$memory_2 = nl::is_variant($memory_1);
#line 569
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 569
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 570
$memory_5 = ptd::sim();
#line 570
$memory_6 = ov::get_element($memory_1);
#line 570
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 570
undef($memory_6);
#line 570
undef($memory_5);
#line 570
$memory_3 = generator_c_priv::get_const_sim($memory_0, $memory_4);
#line 570
undef($memory_4);
#line 571
$memory_4 = ov::has_value($memory_1);
#line 571
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 571
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 572
$memory_6 = "ov_mk_arg_dec";
#line 572
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 572
undef($memory_6);
#line 572
$memory_6 = "(";
#line 572
$memory_5 = $memory_5 . $memory_6;
#line 572
undef($memory_6);
#line 572
$memory_5 = $memory_5 . $memory_3;
#line 572
$memory_6 = ", ";
#line 572
$memory_5 = $memory_5 . $memory_6;
#line 572
undef($memory_6);
#line 572
generator_c_priv::print($memory_0, $memory_5);
#line 572
undef($memory_5);
#line 573
$memory_5 = ov::get_value($memory_1);
#line 573
generator_c_priv::generate_imm($memory_0, $memory_5);
#line 573
undef($memory_5);
#line 574
$memory_5 = ")";
#line 574
generator_c_priv::print($memory_0, $memory_5);
#line 574
undef($memory_5);
#line 575
goto label_11;
#line 575
label_12:
#line 576
$memory_6 = "ov_mk_none";
#line 576
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 576
undef($memory_6);
#line 576
$memory_6 = "(";
#line 576
$memory_5 = $memory_5 . $memory_6;
#line 576
undef($memory_6);
#line 576
$memory_5 = $memory_5 . $memory_3;
#line 576
$memory_6 = ")";
#line 576
$memory_5 = $memory_5 . $memory_6;
#line 576
undef($memory_6);
#line 576
generator_c_priv::print($memory_0, $memory_5);
#line 576
undef($memory_5);
#line 577
goto label_11;
#line 577
label_11:
#line 577
undef($memory_4);
#line 577
undef($memory_3);
#line 578
goto label_1;
#line 578
label_10:
#line 578
$memory_2 = nl::is_sim($memory_1);
#line 578
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 578
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 579
$memory_5 = ptd::sim();
#line 579
$memory_4 = ptd::ensure($memory_5, $memory_1);
#line 579
undef($memory_5);
#line 579
$memory_3 = generator_c_priv::get_const_sim($memory_0, $memory_4);
#line 579
undef($memory_4);
#line 579
generator_c_priv::print($memory_0, $memory_3);
#line 579
undef($memory_3);
#line 580
goto label_1;
#line 580
label_13:
#line 581
$memory_3 = [];
#line 581
die(dfile::ssave($memory_3));
#line 581
undef($memory_3);
#line 582
goto label_1;
#line 582
label_1:
#line 582
undef($memory_2);
#line 582
undef($memory_1);
#line 582
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::print_cmd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 586
$memory_2 = "#line ";
#line 586
$memory_3 = $memory_1->{'debug'};
#line 586
$memory_3 = $memory_3->{'nast_debug'};
#line 586
$memory_3 = $memory_3->{'begin'};
#line 586
$memory_3 = $memory_3->{'line'};
#line 586
$memory_2 = $memory_2 . $memory_3;
#line 586
undef($memory_3);
#line 586
$memory_3 = string::lf();
#line 586
$memory_2 = $memory_2 . $memory_3;
#line 586
undef($memory_3);
#line 586
generator_c_priv::print($memory_0, $memory_2);
#line 586
undef($memory_2);
#line 587
$memory_2 = $memory_1->{'cmd'};
#line 587
$memory_3 = c_rt_lib::ov_is($memory_2, 'arr_decl');
#line 587
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 592
$memory_3 = c_rt_lib::ov_is($memory_2, 'hash_decl');
#line 592
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 600
$memory_3 = c_rt_lib::ov_is($memory_2, 'func');
#line 600
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 607
$memory_3 = c_rt_lib::ov_is($memory_2, 'call');
#line 607
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 609
$memory_3 = c_rt_lib::ov_is($memory_2, 'una_op');
#line 609
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 613
$memory_3 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 613
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 620
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_is');
#line 620
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 623
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_as');
#line 623
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 626
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 626
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 634
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 634
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 636
$memory_3 = c_rt_lib::ov_is($memory_2, 'move');
#line 636
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 640
$memory_3 = c_rt_lib::ov_is($memory_2, 'load_const');
#line 640
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 645
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_frm_idx');
#line 645
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 648
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_at_idx');
#line 648
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 654
$memory_3 = c_rt_lib::ov_is($memory_2, 'get_val');
#line 654
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 657
$memory_3 = c_rt_lib::ov_is($memory_2, 'set_val');
#line 657
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 663
$memory_3 = c_rt_lib::ov_is($memory_2, 'ov_mk');
#line 663
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 677
$memory_3 = c_rt_lib::ov_is($memory_2, 'prt_lbl');
#line 677
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 680
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_goto');
#line 680
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 685
$memory_3 = c_rt_lib::ov_is($memory_2, 'goto');
#line 685
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 687
$memory_3 = c_rt_lib::ov_is($memory_2, 'clear');
#line 687
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 687
$memory_3 = "NOMATCHALERT";
#line 687
$memory_3 = [$memory_3,$memory_2];
#line 687
die(dfile::ssave($memory_3));
#line 587
label_2:
#line 587
$memory_4 = c_rt_lib::ov_as($memory_2, 'arr_decl');
#line 588
$memory_7 = $memory_4->{'src'};
#line 588
$memory_6 = array::len($memory_7);
#line 588
undef($memory_7);
#line 588
$memory_5 = [$memory_6];
#line 588
undef($memory_6);
#line 589
$memory_6 = $memory_4->{'src'};
#line 589
$memory_8 = 0;
#line 589
$memory_9 = 1;
#line 589
$memory_10 = c_rt_lib::array_len($memory_6);
#line 589
label_25:
#line 589
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 589
if (c_rt_lib::check_true($memory_11)) {goto label_23;}
#line 589
$memory_7 = $memory_6->[$memory_8];
#line 589
$memory_12 = generator_c_priv::get_reg($memory_0, $memory_7);
#line 589
array::push($memory_5, $memory_12);
#line 589
undef($memory_12);
#line 589
$memory_8 = $memory_8 + $memory_9;
#line 589
goto label_25;
#line 589
label_23:
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
#line 590
$memory_7 = "array_mk";
#line 590
$memory_6 = generator_c_priv::get_fun_lib($memory_7, $memory_5);
#line 590
undef($memory_7);
#line 591
$memory_8 = $memory_4->{'dest'};
#line 591
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 591
undef($memory_8);
#line 591
generator_c_priv::print($memory_0, $memory_7);
#line 591
undef($memory_7);
#line 591
undef($memory_5);
#line 591
undef($memory_6);
#line 591
undef($memory_4);
#line 592
goto label_1;
#line 592
label_3:
#line 592
$memory_4 = c_rt_lib::ov_as($memory_2, 'hash_decl');
#line 593
$memory_7 = $memory_4->{'src'};
#line 593
$memory_6 = array::len($memory_7);
#line 593
undef($memory_7);
#line 593
$memory_5 = [$memory_6];
#line 593
undef($memory_6);
#line 594
$memory_6 = $memory_4->{'src'};
#line 594
$memory_8 = 0;
#line 594
$memory_9 = 1;
#line 594
$memory_10 = c_rt_lib::array_len($memory_6);
#line 594
label_28:
#line 594
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 594
if (c_rt_lib::check_true($memory_11)) {goto label_26;}
#line 594
$memory_7 = $memory_6->[$memory_8];
#line 595
$memory_13 = $memory_7->{'key'};
#line 595
$memory_12 = generator_c_priv::get_const_sim($memory_0, $memory_13);
#line 595
undef($memory_13);
#line 595
array::push($memory_5, $memory_12);
#line 595
undef($memory_12);
#line 596
$memory_13 = $memory_7->{'val'};
#line 596
$memory_12 = generator_c_priv::get_reg($memory_0, $memory_13);
#line 596
undef($memory_13);
#line 596
array::push($memory_5, $memory_12);
#line 596
undef($memory_12);
#line 597
$memory_8 = $memory_8 + $memory_9;
#line 597
goto label_28;
#line 597
label_26:
#line 597
undef($memory_6);
#line 597
undef($memory_7);
#line 597
undef($memory_8);
#line 597
undef($memory_9);
#line 597
undef($memory_10);
#line 597
undef($memory_11);
#line 598
$memory_7 = "hash_mk";
#line 598
$memory_6 = generator_c_priv::get_fun_lib($memory_7, $memory_5);
#line 598
undef($memory_7);
#line 599
$memory_8 = $memory_4->{'dest'};
#line 599
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 599
undef($memory_8);
#line 599
generator_c_priv::print($memory_0, $memory_7);
#line 599
undef($memory_7);
#line 599
undef($memory_5);
#line 599
undef($memory_6);
#line 599
undef($memory_4);
#line 600
goto label_1;
#line 600
label_4:
#line 600
$memory_4 = c_rt_lib::ov_as($memory_2, 'func');
#line 601
$memory_6 = "func_new";
#line 601
$memory_9 = $memory_4->{'module'};
#line 601
$memory_10 = $memory_4->{'name'};
#line 601
$memory_11 = $memory_0->{'mod_name'};
#line 601
$memory_8 = generator_c_priv::get_fun_name($memory_9, $memory_10, $memory_11);
#line 601
undef($memory_11);
#line 601
undef($memory_10);
#line 601
undef($memory_9);
#line 601
$memory_9 = "0ptr";
#line 601
$memory_8 = $memory_8 . $memory_9;
#line 601
undef($memory_9);
#line 601
$memory_10 = $memory_4->{'module'};
#line 601
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 601
undef($memory_10);
#line 601
$memory_11 = $memory_4->{'name'};
#line 601
$memory_10 = generator_c_priv::get_const_sim($memory_0, $memory_11);
#line 601
undef($memory_11);
#line 601
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 601
undef($memory_8);
#line 601
undef($memory_9);
#line 601
undef($memory_10);
#line 601
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 601
undef($memory_7);
#line 601
undef($memory_6);
#line 606
$memory_7 = $memory_4->{'dest'};
#line 606
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 606
undef($memory_7);
#line 606
generator_c_priv::print($memory_0, $memory_6);
#line 606
undef($memory_6);
#line 606
undef($memory_5);
#line 606
undef($memory_4);
#line 607
goto label_1;
#line 607
label_5:
#line 607
$memory_4 = c_rt_lib::ov_as($memory_2, 'call');
#line 608
generator_c_priv::generate_call($memory_0, $memory_4);
#line 608
undef($memory_4);
#line 609
goto label_1;
#line 609
label_6:
#line 609
$memory_4 = c_rt_lib::ov_as($memory_2, 'una_op');
#line 610
$memory_6 = generator_c_priv::get_unary_ops();
#line 610
$memory_7 = $memory_4->{'op'};
#line 610
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 610
undef($memory_7);
#line 610
undef($memory_6);
#line 611
$memory_9 = $memory_4->{'src'};
#line 611
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 611
undef($memory_9);
#line 611
$memory_7 = [$memory_8];
#line 611
undef($memory_8);
#line 611
$memory_6 = generator_c_priv::get_fun_lib($memory_5, $memory_7);
#line 611
undef($memory_7);
#line 612
$memory_8 = $memory_4->{'dest'};
#line 612
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 612
undef($memory_8);
#line 612
generator_c_priv::print($memory_0, $memory_7);
#line 612
undef($memory_7);
#line 612
undef($memory_5);
#line 612
undef($memory_6);
#line 612
undef($memory_4);
#line 613
goto label_1;
#line 613
label_7:
#line 613
$memory_4 = c_rt_lib::ov_as($memory_2, 'bin_op');
#line 614
$memory_6 = generator_c_priv::get_bin_ops();
#line 614
$memory_7 = $memory_4->{'op'};
#line 614
$memory_5 = hash::get_value($memory_6, $memory_7);
#line 614
undef($memory_7);
#line 614
undef($memory_6);
#line 615
$memory_6 = $memory_4->{'dest'};
#line 615
$memory_8 = $memory_4->{'left'};
#line 615
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 615
undef($memory_8);
#line 615
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 615
if (c_rt_lib::check_true($memory_7)) {goto label_31;}
#line 615
$memory_8 = generator_c_priv::get_bin_ops_mod();
#line 615
$memory_9 = $memory_4->{'op'};
#line 615
$memory_6 = hash::has_key($memory_8, $memory_9);
#line 615
undef($memory_9);
#line 615
undef($memory_8);
#line 615
label_31:
#line 615
undef($memory_7);
#line 615
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 615
if (c_rt_lib::check_true($memory_6)) {goto label_30;}
#line 616
$memory_8 = generator_c_priv::get_bin_ops_mod();
#line 616
$memory_9 = $memory_4->{'op'};
#line 616
$memory_7 = hash::get_value($memory_8, $memory_9);
#line 616
undef($memory_9);
#line 616
undef($memory_8);
#line 616
$memory_5 = $memory_7;
#line 616
undef($memory_7);
#line 617
goto label_30;
#line 617
label_30:
#line 617
undef($memory_6);
#line 618
$memory_9 = $memory_4->{'left'};
#line 618
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 618
undef($memory_9);
#line 618
$memory_10 = $memory_4->{'right'};
#line 618
$memory_9 = generator_c_priv::get_reg($memory_0, $memory_10);
#line 618
undef($memory_10);
#line 618
$memory_7 = [$memory_8,$memory_9];
#line 618
undef($memory_8);
#line 618
undef($memory_9);
#line 618
$memory_6 = generator_c_priv::get_fun_lib($memory_5, $memory_7);
#line 618
undef($memory_7);
#line 619
$memory_8 = $memory_4->{'dest'};
#line 619
$memory_7 = generator_c_priv::get_assign($memory_0, $memory_8, $memory_6);
#line 619
undef($memory_8);
#line 619
generator_c_priv::print($memory_0, $memory_7);
#line 619
undef($memory_7);
#line 619
undef($memory_5);
#line 619
undef($memory_6);
#line 619
undef($memory_4);
#line 620
goto label_1;
#line 620
label_8:
#line 620
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_is');
#line 621
$memory_6 = "priv_is";
#line 621
$memory_9 = $memory_4->{'src'};
#line 621
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 621
undef($memory_9);
#line 621
$memory_10 = $memory_4->{'type'};
#line 621
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 621
undef($memory_10);
#line 621
$memory_7 = [$memory_8,$memory_9];
#line 621
undef($memory_8);
#line 621
undef($memory_9);
#line 621
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 621
undef($memory_7);
#line 621
undef($memory_6);
#line 622
$memory_7 = $memory_4->{'dest'};
#line 622
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 622
undef($memory_7);
#line 622
generator_c_priv::print($memory_0, $memory_6);
#line 622
undef($memory_6);
#line 622
undef($memory_5);
#line 622
undef($memory_4);
#line 623
goto label_1;
#line 623
label_9:
#line 623
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_as');
#line 624
$memory_6 = "priv_as";
#line 624
$memory_9 = $memory_4->{'src'};
#line 624
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 624
undef($memory_9);
#line 624
$memory_10 = $memory_4->{'type'};
#line 624
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 624
undef($memory_10);
#line 624
$memory_7 = [$memory_8,$memory_9];
#line 624
undef($memory_8);
#line 624
undef($memory_9);
#line 624
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 624
undef($memory_7);
#line 624
undef($memory_6);
#line 625
$memory_7 = $memory_4->{'dest'};
#line 625
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 625
undef($memory_7);
#line 625
generator_c_priv::print($memory_0, $memory_6);
#line 625
undef($memory_6);
#line 625
undef($memory_5);
#line 625
undef($memory_4);
#line 626
goto label_1;
#line 626
label_10:
#line 626
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 627
generator_c_priv::move_register_to_ref_args($memory_0);
#line 628
$memory_5 = "return ";
#line 628
generator_c_priv::print($memory_0, $memory_5);
#line 628
undef($memory_5);
#line 629
$memory_5 = c_rt_lib::ov_is($memory_4, 'val');
#line 629
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 631
$memory_5 = c_rt_lib::ov_is($memory_4, 'emp');
#line 631
if (c_rt_lib::check_true($memory_5)) {goto label_34;}
#line 631
$memory_5 = "NOMATCHALERT";
#line 631
$memory_5 = [$memory_5,$memory_4];
#line 631
die(dfile::ssave($memory_5));
#line 629
label_33:
#line 629
$memory_6 = c_rt_lib::ov_as($memory_4, 'val');
#line 630
$memory_7 = generator_c_priv::get_reg($memory_0, $memory_6);
#line 630
generator_c_priv::print($memory_0, $memory_7);
#line 630
undef($memory_7);
#line 630
undef($memory_6);
#line 631
goto label_32;
#line 631
label_34:
#line 632
$memory_6 = "NULL";
#line 632
generator_c_priv::print($memory_0, $memory_6);
#line 632
undef($memory_6);
#line 633
goto label_32;
#line 633
label_32:
#line 633
undef($memory_5);
#line 633
undef($memory_4);
#line 634
goto label_1;
#line 634
label_11:
#line 634
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 635
$memory_5 = "nl_die_arg(";
#line 635
$memory_6 = generator_c_priv::get_reg($memory_0, $memory_4);
#line 635
$memory_5 = $memory_5 . $memory_6;
#line 635
undef($memory_6);
#line 635
$memory_6 = ")";
#line 635
$memory_5 = $memory_5 . $memory_6;
#line 635
undef($memory_6);
#line 635
generator_c_priv::print($memory_0, $memory_5);
#line 635
undef($memory_5);
#line 635
undef($memory_4);
#line 636
goto label_1;
#line 636
label_12:
#line 636
$memory_4 = c_rt_lib::ov_as($memory_2, 'move');
#line 637
$memory_5 = $memory_4->{'dest'};
#line 637
$memory_6 = "";
#line 637
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 637
undef($memory_6);
#line 637
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 637
if (c_rt_lib::check_true($memory_5)) {goto label_36;}
#line 637
undef($memory_1);
#line 637
undef($memory_2);
#line 637
undef($memory_3);
#line 637
undef($memory_4);
#line 637
undef($memory_5);
#line 637
$_[0] = $memory_0;return;
#line 637
goto label_36;
#line 637
label_36:
#line 637
undef($memory_5);
#line 638
$memory_7 = $memory_4->{'dest'};
#line 638
$memory_6 = generator_c_priv::get_reg_ref($memory_0, $memory_7);
#line 638
undef($memory_7);
#line 638
$memory_8 = $memory_4->{'src'};
#line 638
$memory_7 = generator_c_priv::get_reg($memory_0, $memory_8);
#line 638
undef($memory_8);
#line 638
$memory_5 = [$memory_6,$memory_7];
#line 638
undef($memory_6);
#line 638
undef($memory_7);
#line 639
$memory_7 = "copy";
#line 639
$memory_6 = generator_c_priv::get_fun_lib($memory_7, $memory_5);
#line 639
undef($memory_7);
#line 639
generator_c_priv::print($memory_0, $memory_6);
#line 639
undef($memory_6);
#line 639
undef($memory_5);
#line 639
undef($memory_4);
#line 640
goto label_1;
#line 640
label_13:
#line 640
$memory_4 = c_rt_lib::ov_as($memory_2, 'load_const');
#line 641
$memory_5 = $memory_4->{'dest'};
#line 641
$memory_6 = "";
#line 641
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 641
undef($memory_6);
#line 641
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 641
if (c_rt_lib::check_true($memory_5)) {goto label_38;}
#line 641
undef($memory_1);
#line 641
undef($memory_2);
#line 641
undef($memory_3);
#line 641
undef($memory_4);
#line 641
undef($memory_5);
#line 641
$_[0] = $memory_0;return;
#line 641
goto label_38;
#line 641
label_38:
#line 641
undef($memory_5);
#line 642
$memory_6 = "move";
#line 642
$memory_5 = generator_c_priv::get_lib_fun($memory_6);
#line 642
undef($memory_6);
#line 642
$memory_6 = "(";
#line 642
$memory_5 = $memory_5 . $memory_6;
#line 642
undef($memory_6);
#line 642
$memory_7 = $memory_4->{'dest'};
#line 642
$memory_6 = generator_c_priv::get_reg_ref($memory_0, $memory_7);
#line 642
undef($memory_7);
#line 642
$memory_5 = $memory_5 . $memory_6;
#line 642
undef($memory_6);
#line 642
$memory_6 = ",";
#line 642
$memory_5 = $memory_5 . $memory_6;
#line 642
undef($memory_6);
#line 642
generator_c_priv::print($memory_0, $memory_5);
#line 642
undef($memory_5);
#line 643
$memory_5 = $memory_4->{'val'};
#line 643
generator_c_priv::generate_imm($memory_0, $memory_5);
#line 643
undef($memory_5);
#line 644
$memory_5 = ")";
#line 644
generator_c_priv::print($memory_0, $memory_5);
#line 644
undef($memory_5);
#line 644
undef($memory_4);
#line 645
goto label_1;
#line 645
label_14:
#line 645
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_frm_idx');
#line 646
$memory_6 = "array_get";
#line 646
$memory_9 = $memory_4->{'src'};
#line 646
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 646
undef($memory_9);
#line 646
$memory_10 = $memory_4->{'idx'};
#line 646
$memory_9 = generator_c_priv::get_reg($memory_0, $memory_10);
#line 646
undef($memory_10);
#line 646
$memory_7 = [$memory_8,$memory_9];
#line 646
undef($memory_8);
#line 646
undef($memory_9);
#line 646
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 646
undef($memory_7);
#line 646
undef($memory_6);
#line 647
$memory_7 = $memory_4->{'dest'};
#line 647
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 647
undef($memory_7);
#line 647
generator_c_priv::print($memory_0, $memory_6);
#line 647
undef($memory_6);
#line 647
undef($memory_5);
#line 647
undef($memory_4);
#line 648
goto label_1;
#line 648
label_15:
#line 648
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_at_idx');
#line 649
$memory_6 = "array_set";
#line 649
$memory_9 = $memory_4->{'src'};
#line 649
$memory_8 = generator_c_priv::get_reg_ref($memory_0, $memory_9);
#line 649
undef($memory_9);
#line 649
$memory_10 = $memory_4->{'idx'};
#line 649
$memory_9 = generator_c_priv::get_reg($memory_0, $memory_10);
#line 649
undef($memory_10);
#line 649
$memory_11 = $memory_4->{'val'};
#line 649
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_11);
#line 649
undef($memory_11);
#line 649
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 649
undef($memory_8);
#line 649
undef($memory_9);
#line 649
undef($memory_10);
#line 649
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 649
undef($memory_7);
#line 649
undef($memory_6);
#line 649
generator_c_priv::print($memory_0, $memory_5);
#line 649
undef($memory_5);
#line 649
undef($memory_4);
#line 654
goto label_1;
#line 654
label_16:
#line 654
$memory_4 = c_rt_lib::ov_as($memory_2, 'get_val');
#line 655
$memory_6 = "hash_get_value_dec";
#line 655
$memory_9 = $memory_4->{'src'};
#line 655
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 655
undef($memory_9);
#line 655
$memory_10 = $memory_4->{'key'};
#line 655
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 655
undef($memory_10);
#line 655
$memory_7 = [$memory_8,$memory_9];
#line 655
undef($memory_8);
#line 655
undef($memory_9);
#line 655
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 655
undef($memory_7);
#line 655
undef($memory_6);
#line 656
$memory_7 = $memory_4->{'dest'};
#line 656
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 656
undef($memory_7);
#line 656
generator_c_priv::print($memory_0, $memory_6);
#line 656
undef($memory_6);
#line 656
undef($memory_5);
#line 656
undef($memory_4);
#line 657
goto label_1;
#line 657
label_17:
#line 657
$memory_4 = c_rt_lib::ov_as($memory_2, 'set_val');
#line 658
$memory_6 = "hash_set_value_dec";
#line 658
$memory_9 = $memory_4->{'src'};
#line 658
$memory_8 = generator_c_priv::get_reg_ref($memory_0, $memory_9);
#line 658
undef($memory_9);
#line 658
$memory_10 = $memory_4->{'key'};
#line 658
$memory_9 = generator_c_priv::get_const_sim($memory_0, $memory_10);
#line 658
undef($memory_10);
#line 658
$memory_11 = $memory_4->{'val'};
#line 658
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_11);
#line 658
undef($memory_11);
#line 658
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 658
undef($memory_8);
#line 658
undef($memory_9);
#line 658
undef($memory_10);
#line 658
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 658
undef($memory_7);
#line 658
undef($memory_6);
#line 658
generator_c_priv::print($memory_0, $memory_5);
#line 658
undef($memory_5);
#line 658
undef($memory_4);
#line 663
goto label_1;
#line 663
label_18:
#line 663
$memory_4 = c_rt_lib::ov_as($memory_2, 'ov_mk');
#line 665
$memory_6 = $memory_4->{'src'};
#line 665
$memory_6 = c_rt_lib::ov_is($memory_6, 'emp');
#line 665
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 665
if (c_rt_lib::check_true($memory_7)) {goto label_41;}
#line 665
$memory_6 = $memory_4->{'name'};
#line 665
$memory_8 = "TRUE";
#line 665
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 665
undef($memory_8);
#line 665
label_41:
#line 665
undef($memory_7);
#line 665
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 665
if (c_rt_lib::check_true($memory_6)) {goto label_40;}
#line 666
$memory_8 = "get_true";
#line 666
$memory_9 = [];
#line 666
$memory_7 = generator_c_priv::get_fun_lib($memory_8, $memory_9);
#line 666
undef($memory_9);
#line 666
undef($memory_8);
#line 666
$memory_5 = $memory_7;
#line 666
undef($memory_7);
#line 667
goto label_39;
#line 667
label_40:
#line 667
$memory_6 = $memory_4->{'src'};
#line 667
$memory_6 = c_rt_lib::ov_is($memory_6, 'emp');
#line 667
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 667
if (c_rt_lib::check_true($memory_7)) {goto label_43;}
#line 667
$memory_6 = $memory_4->{'name'};
#line 667
$memory_8 = "FALSE";
#line 667
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 667
undef($memory_8);
#line 667
label_43:
#line 667
undef($memory_7);
#line 667
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 667
if (c_rt_lib::check_true($memory_6)) {goto label_42;}
#line 668
$memory_8 = "get_false";
#line 668
$memory_9 = [];
#line 668
$memory_7 = generator_c_priv::get_fun_lib($memory_8, $memory_9);
#line 668
undef($memory_9);
#line 668
undef($memory_8);
#line 668
$memory_5 = $memory_7;
#line 668
undef($memory_7);
#line 669
goto label_39;
#line 669
label_42:
#line 670
$memory_7 = $memory_4->{'src'};
#line 670
$memory_8 = c_rt_lib::ov_is($memory_7, 'arg');
#line 670
if (c_rt_lib::check_true($memory_8)) {goto label_45;}
#line 672
$memory_8 = c_rt_lib::ov_is($memory_7, 'emp');
#line 672
if (c_rt_lib::check_true($memory_8)) {goto label_46;}
#line 672
$memory_8 = "NOMATCHALERT";
#line 672
$memory_8 = [$memory_8,$memory_7];
#line 672
die(dfile::ssave($memory_8));
#line 670
label_45:
#line 670
$memory_9 = c_rt_lib::ov_as($memory_7, 'arg');
#line 671
$memory_11 = "ov_mk_arg";
#line 671
$memory_14 = $memory_4->{'name'};
#line 671
$memory_13 = generator_c_priv::get_const_sim($memory_0, $memory_14);
#line 671
undef($memory_14);
#line 671
$memory_14 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 671
$memory_12 = [$memory_13,$memory_14];
#line 671
undef($memory_13);
#line 671
undef($memory_14);
#line 671
$memory_10 = generator_c_priv::get_fun_lib($memory_11, $memory_12);
#line 671
undef($memory_12);
#line 671
undef($memory_11);
#line 671
$memory_5 = $memory_10;
#line 671
undef($memory_10);
#line 671
undef($memory_9);
#line 672
goto label_44;
#line 672
label_46:
#line 673
$memory_10 = "ov_mk_none";
#line 673
$memory_13 = $memory_4->{'name'};
#line 673
$memory_12 = generator_c_priv::get_const_sim($memory_0, $memory_13);
#line 673
undef($memory_13);
#line 673
$memory_11 = [$memory_12];
#line 673
undef($memory_12);
#line 673
$memory_9 = generator_c_priv::get_fun_lib($memory_10, $memory_11);
#line 673
undef($memory_11);
#line 673
undef($memory_10);
#line 673
$memory_5 = $memory_9;
#line 673
undef($memory_9);
#line 674
goto label_44;
#line 674
label_44:
#line 674
undef($memory_7);
#line 674
undef($memory_8);
#line 675
goto label_39;
#line 675
label_39:
#line 675
undef($memory_6);
#line 676
$memory_7 = $memory_4->{'dest'};
#line 676
$memory_6 = generator_c_priv::get_assign($memory_0, $memory_7, $memory_5);
#line 676
undef($memory_7);
#line 676
generator_c_priv::print($memory_0, $memory_6);
#line 676
undef($memory_6);
#line 676
undef($memory_5);
#line 676
undef($memory_4);
#line 677
goto label_1;
#line 677
label_19:
#line 677
$memory_4 = c_rt_lib::ov_as($memory_2, 'prt_lbl');
#line 678
$memory_5 = ":";
#line 678
$memory_5 = $memory_4 . $memory_5;
#line 678
$memory_6 = string::lf();
#line 678
$memory_5 = $memory_5 . $memory_6;
#line 678
undef($memory_6);
#line 678
generator_c_priv::print($memory_0, $memory_5);
#line 678
undef($memory_5);
#line 679
undef($memory_1);
#line 679
undef($memory_2);
#line 679
undef($memory_3);
#line 679
undef($memory_4);
#line 679
$_[0] = $memory_0;return;
#line 679
undef($memory_4);
#line 680
goto label_1;
#line 680
label_20:
#line 680
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_goto');
#line 681
$memory_5 = "if(";
#line 681
generator_c_priv::print($memory_0, $memory_5);
#line 681
undef($memory_5);
#line 682
$memory_6 = "check_true_native";
#line 682
$memory_9 = $memory_4->{'src'};
#line 682
$memory_8 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 682
undef($memory_9);
#line 682
$memory_7 = [$memory_8];
#line 682
undef($memory_8);
#line 682
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 682
undef($memory_7);
#line 682
undef($memory_6);
#line 682
generator_c_priv::print($memory_0, $memory_5);
#line 682
undef($memory_5);
#line 683
$memory_5 = "){ goto ";
#line 683
$memory_6 = $memory_4->{'dest'};
#line 683
$memory_5 = $memory_5 . $memory_6;
#line 683
undef($memory_6);
#line 683
$memory_6 = ";}";
#line 683
$memory_5 = $memory_5 . $memory_6;
#line 683
undef($memory_6);
#line 683
$memory_6 = string::lf();
#line 683
$memory_5 = $memory_5 . $memory_6;
#line 683
undef($memory_6);
#line 683
generator_c_priv::print($memory_0, $memory_5);
#line 683
undef($memory_5);
#line 684
undef($memory_1);
#line 684
undef($memory_2);
#line 684
undef($memory_3);
#line 684
undef($memory_4);
#line 684
$_[0] = $memory_0;return;
#line 684
undef($memory_4);
#line 685
goto label_1;
#line 685
label_21:
#line 685
$memory_4 = c_rt_lib::ov_as($memory_2, 'goto');
#line 686
$memory_5 = "goto ";
#line 686
$memory_5 = $memory_5 . $memory_4;
#line 686
generator_c_priv::print($memory_0, $memory_5);
#line 686
undef($memory_5);
#line 686
undef($memory_4);
#line 687
goto label_1;
#line 687
label_22:
#line 687
$memory_4 = c_rt_lib::ov_as($memory_2, 'clear');
#line 688
$memory_6 = "clear";
#line 688
$memory_8 = generator_c_priv::get_reg_ref($memory_0, $memory_4);
#line 688
$memory_7 = [$memory_8];
#line 688
undef($memory_8);
#line 688
$memory_5 = generator_c_priv::get_fun_lib($memory_6, $memory_7);
#line 688
undef($memory_7);
#line 688
undef($memory_6);
#line 688
generator_c_priv::print($memory_0, $memory_5);
#line 688
undef($memory_5);
#line 688
undef($memory_4);
#line 689
goto label_1;
#line 689
label_1:
#line 689
undef($memory_2);
#line 689
undef($memory_3);
#line 690
$memory_2 = ";";
#line 690
$memory_3 = string::lf();
#line 690
$memory_2 = $memory_2 . $memory_3;
#line 690
undef($memory_3);
#line 690
generator_c_priv::print($memory_0, $memory_2);
#line 690
undef($memory_2);
#line 690
undef($memory_1);
#line 690
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::get_assign($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 694
$memory_3 = "";
#line 694
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 694
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 694
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 695
$memory_5 = "delete";
#line 695
$memory_6 = [$memory_2];
#line 695
$memory_4 = generator_c_priv::get_fun_lib($memory_5, $memory_6);
#line 695
undef($memory_6);
#line 695
undef($memory_5);
#line 695
undef($memory_1);
#line 695
undef($memory_2);
#line 695
undef($memory_3);
#line 695
$_[0] = $memory_0;return $memory_4;
#line 695
undef($memory_4);
#line 696
goto label_1;
#line 696
label_2:
#line 697
$memory_5 = "move";
#line 697
$memory_7 = generator_c_priv::get_reg_ref($memory_0, $memory_1);
#line 697
$memory_6 = [$memory_7,$memory_2];
#line 697
undef($memory_7);
#line 697
$memory_4 = generator_c_priv::get_fun_lib($memory_5, $memory_6);
#line 697
undef($memory_6);
#line 697
undef($memory_5);
#line 697
undef($memory_1);
#line 697
undef($memory_2);
#line 697
undef($memory_3);
#line 697
$_[0] = $memory_0;return $memory_4;
#line 697
undef($memory_4);
#line 698
goto label_1;
#line 698
label_1:
#line 698
undef($memory_3);
#line 698
undef($memory_1);
#line 698
undef($memory_2);
#line 698
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::generate_call($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 702
$memory_3 = $memory_1->{'mod'};
#line 702
$memory_4 = $memory_1->{'fun_name'};
#line 702
$memory_5 = $memory_0->{'mod_name'};
#line 702
$memory_2 = generator_c_priv::get_fun_name($memory_3, $memory_4, $memory_5);
#line 702
undef($memory_5);
#line 702
undef($memory_4);
#line 702
undef($memory_3);
#line 702
$memory_3 = "(";
#line 702
$memory_2 = $memory_2 . $memory_3;
#line 702
undef($memory_3);
#line 703
$memory_4 = $memory_1->{'args'};
#line 703
$memory_3 = array::len($memory_4);
#line 703
undef($memory_4);
#line 703
$memory_4 = 0;
#line 703
$memory_5 = 1;
#line 703
label_3:
#line 703
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 703
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 704
$memory_7 = 0;
#line 704
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_4);
#line 704
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 704
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 704
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 704
$memory_8 = ", ";
#line 704
$memory_2 = $memory_2 . $memory_8;
#line 704
undef($memory_8);
#line 704
goto label_5;
#line 704
label_5:
#line 704
undef($memory_7);
#line 705
$memory_7 = $memory_1->{'args'};
#line 705
$memory_7 = $memory_7->[$memory_4];
#line 705
$memory_8 = c_rt_lib::ov_is($memory_7, 'val');
#line 705
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 707
$memory_8 = c_rt_lib::ov_is($memory_7, 'ref');
#line 707
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 707
$memory_8 = "NOMATCHALERT";
#line 707
$memory_8 = [$memory_8,$memory_7];
#line 707
die(dfile::ssave($memory_8));
#line 705
label_7:
#line 705
$memory_9 = c_rt_lib::ov_as($memory_7, 'val');
#line 706
$memory_10 = generator_c_priv::get_reg($memory_0, $memory_9);
#line 706
$memory_2 = $memory_2 . $memory_10;
#line 706
undef($memory_10);
#line 706
undef($memory_9);
#line 707
goto label_6;
#line 707
label_8:
#line 707
$memory_9 = c_rt_lib::ov_as($memory_7, 'ref');
#line 708
$memory_10 = generator_c_priv::get_reg_ref($memory_0, $memory_9);
#line 708
$memory_2 = $memory_2 . $memory_10;
#line 708
undef($memory_10);
#line 708
undef($memory_9);
#line 709
goto label_6;
#line 709
label_6:
#line 709
undef($memory_7);
#line 709
undef($memory_8);
#line 710
$memory_4 = $memory_4 + $memory_5;
#line 710
goto label_3;
#line 710
label_1:
#line 710
undef($memory_3);
#line 710
undef($memory_4);
#line 710
undef($memory_5);
#line 710
undef($memory_6);
#line 711
$memory_3 = ")";
#line 711
$memory_2 = $memory_2 . $memory_3;
#line 711
undef($memory_3);
#line 712
$memory_4 = $memory_1->{'dest'};
#line 712
$memory_3 = generator_c_priv::get_assign($memory_0, $memory_4, $memory_2);
#line 712
undef($memory_4);
#line 712
generator_c_priv::print($memory_0, $memory_3);
#line 712
undef($memory_3);
#line 712
undef($memory_2);
#line 712
undef($memory_1);
#line 712
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub generator_c_priv::create_sim($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 716
$memory_1 = string_utils::is_integer($memory_0);
#line 716
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 716
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 717
$memory_3 = "int_new";
#line 717
$memory_2 = generator_c_priv::get_lib_fun($memory_3);
#line 717
undef($memory_3);
#line 717
$memory_3 = "(";
#line 717
$memory_2 = $memory_2 . $memory_3;
#line 717
undef($memory_3);
#line 717
$memory_2 = $memory_2 . $memory_0;
#line 717
$memory_3 = ")";
#line 717
$memory_2 = $memory_2 . $memory_3;
#line 717
undef($memory_3);
#line 717
undef($memory_0);
#line 717
undef($memory_1);
#line 717
return $memory_2;
#line 717
undef($memory_2);
#line 718
goto label_1;
#line 718
label_2:
#line 718
$memory_1 = string_utils::is_float($memory_0);
#line 718
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 718
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 719
$memory_3 = "float_new";
#line 719
$memory_2 = generator_c_priv::get_lib_fun($memory_3);
#line 719
undef($memory_3);
#line 719
$memory_3 = "(";
#line 719
$memory_2 = $memory_2 . $memory_3;
#line 719
undef($memory_3);
#line 719
$memory_2 = $memory_2 . $memory_0;
#line 719
$memory_3 = ")";
#line 719
$memory_2 = $memory_2 . $memory_3;
#line 719
undef($memory_3);
#line 719
undef($memory_0);
#line 719
undef($memory_1);
#line 719
return $memory_2;
#line 719
undef($memory_2);
#line 720
goto label_1;
#line 720
label_3:
#line 721
$memory_2 = "";
#line 721
$memory_2 = $memory_0 . $memory_2;
#line 722
$memory_4 = "\\";
#line 722
$memory_5 = "\\\\";
#line 722
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 722
undef($memory_5);
#line 722
undef($memory_4);
#line 722
$memory_2 = $memory_3;
#line 722
undef($memory_3);
#line 723
$memory_4 = string::lf();
#line 723
$memory_5 = "\\n";
#line 723
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 723
undef($memory_5);
#line 723
undef($memory_4);
#line 723
$memory_2 = $memory_3;
#line 723
undef($memory_3);
#line 724
$memory_4 = string::r();
#line 724
$memory_5 = "\\r";
#line 724
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 724
undef($memory_5);
#line 724
undef($memory_4);
#line 724
$memory_2 = $memory_3;
#line 724
undef($memory_3);
#line 725
$memory_4 = string::tab();
#line 725
$memory_5 = "\\t";
#line 725
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 725
undef($memory_5);
#line 725
undef($memory_4);
#line 725
$memory_2 = $memory_3;
#line 725
undef($memory_3);
#line 726
$memory_4 = "\"";
#line 726
$memory_5 = "\\\"";
#line 726
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 726
undef($memory_5);
#line 726
undef($memory_4);
#line 726
$memory_2 = $memory_3;
#line 726
undef($memory_3);
#line 727
$memory_4 = "'";
#line 727
$memory_5 = "\\'";
#line 727
$memory_3 = string::replace($memory_2, $memory_4, $memory_5);
#line 727
undef($memory_5);
#line 727
undef($memory_4);
#line 727
$memory_2 = $memory_3;
#line 727
undef($memory_3);
#line 728
$memory_4 = "string_new";
#line 728
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 728
undef($memory_4);
#line 728
$memory_4 = "(\"";
#line 728
$memory_3 = $memory_3 . $memory_4;
#line 728
undef($memory_4);
#line 728
$memory_3 = $memory_3 . $memory_2;
#line 728
$memory_4 = "\")";
#line 728
$memory_3 = $memory_3 . $memory_4;
#line 728
undef($memory_4);
#line 728
undef($memory_0);
#line 728
undef($memory_1);
#line 728
undef($memory_2);
#line 728
return $memory_3;
#line 728
undef($memory_3);
#line 728
undef($memory_2);
#line 729
goto label_1;
#line 729
label_1:
#line 729
undef($memory_1);
#line 729
undef($memory_0);
#line 729
return;
}

sub generator_c_priv::create_sim_to_memory($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 733
$memory_2 = string_utils::is_integer($memory_0);
#line 733
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 733
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 734
$memory_4 = "int_new_to_memory";
#line 734
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 734
undef($memory_4);
#line 734
$memory_4 = "(";
#line 734
$memory_3 = $memory_3 . $memory_4;
#line 734
undef($memory_4);
#line 734
$memory_3 = $memory_3 . $memory_0;
#line 734
$memory_4 = ",";
#line 734
$memory_3 = $memory_3 . $memory_4;
#line 734
undef($memory_4);
#line 734
$memory_3 = $memory_3 . $memory_1;
#line 734
$memory_4 = ")";
#line 734
$memory_3 = $memory_3 . $memory_4;
#line 734
undef($memory_4);
#line 734
undef($memory_0);
#line 734
undef($memory_1);
#line 734
undef($memory_2);
#line 734
return $memory_3;
#line 734
undef($memory_3);
#line 735
goto label_1;
#line 735
label_2:
#line 735
$memory_2 = string_utils::is_float($memory_0);
#line 735
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 735
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 736
$memory_4 = "float_new_to_memory";
#line 736
$memory_3 = generator_c_priv::get_lib_fun($memory_4);
#line 736
undef($memory_4);
#line 736
$memory_4 = "(";
#line 736
$memory_3 = $memory_3 . $memory_4;
#line 736
undef($memory_4);
#line 736
$memory_3 = $memory_3 . $memory_0;
#line 736
$memory_4 = ",";
#line 736
$memory_3 = $memory_3 . $memory_4;
#line 736
undef($memory_4);
#line 736
$memory_3 = $memory_3 . $memory_1;
#line 736
$memory_4 = ")";
#line 736
$memory_3 = $memory_3 . $memory_4;
#line 736
undef($memory_4);
#line 736
undef($memory_0);
#line 736
undef($memory_1);
#line 736
undef($memory_2);
#line 736
return $memory_3;
#line 736
undef($memory_3);
#line 737
goto label_1;
#line 737
label_3:
#line 738
$memory_3 = "";
#line 738
$memory_3 = $memory_0 . $memory_3;
#line 739
$memory_5 = "\\";
#line 739
$memory_6 = "\\\\";
#line 739
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 739
undef($memory_6);
#line 739
undef($memory_5);
#line 739
$memory_3 = $memory_4;
#line 739
undef($memory_4);
#line 740
$memory_5 = string::lf();
#line 740
$memory_6 = "\\n";
#line 740
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 740
undef($memory_6);
#line 740
undef($memory_5);
#line 740
$memory_3 = $memory_4;
#line 740
undef($memory_4);
#line 741
$memory_5 = string::r();
#line 741
$memory_6 = "\\r";
#line 741
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 741
undef($memory_6);
#line 741
undef($memory_5);
#line 741
$memory_3 = $memory_4;
#line 741
undef($memory_4);
#line 742
$memory_5 = string::tab();
#line 742
$memory_6 = "\\t";
#line 742
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 742
undef($memory_6);
#line 742
undef($memory_5);
#line 742
$memory_3 = $memory_4;
#line 742
undef($memory_4);
#line 743
$memory_5 = "\"";
#line 743
$memory_6 = "\\\"";
#line 743
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 743
undef($memory_6);
#line 743
undef($memory_5);
#line 743
$memory_3 = $memory_4;
#line 743
undef($memory_4);
#line 744
$memory_5 = "'";
#line 744
$memory_6 = "\\'";
#line 744
$memory_4 = string::replace($memory_3, $memory_5, $memory_6);
#line 744
undef($memory_6);
#line 744
undef($memory_5);
#line 744
$memory_3 = $memory_4;
#line 744
undef($memory_4);
#line 745
$memory_5 = "string_new_to_memory";
#line 745
$memory_4 = generator_c_priv::get_lib_fun($memory_5);
#line 745
undef($memory_5);
#line 745
$memory_5 = "(\"";
#line 745
$memory_4 = $memory_4 . $memory_5;
#line 745
undef($memory_5);
#line 745
$memory_4 = $memory_4 . $memory_3;
#line 745
$memory_5 = "\",";
#line 745
$memory_4 = $memory_4 . $memory_5;
#line 745
undef($memory_5);
#line 745
$memory_4 = $memory_4 . $memory_1;
#line 745
$memory_5 = ")";
#line 745
$memory_4 = $memory_4 . $memory_5;
#line 745
undef($memory_5);
#line 745
undef($memory_0);
#line 745
undef($memory_1);
#line 745
undef($memory_2);
#line 745
undef($memory_3);
#line 745
return $memory_4;
#line 745
undef($memory_4);
#line 745
undef($memory_3);
#line 746
goto label_1;
#line 746
label_1:
#line 746
undef($memory_2);
#line 746
undef($memory_0);
#line 746
undef($memory_1);
#line 746
return;
}
