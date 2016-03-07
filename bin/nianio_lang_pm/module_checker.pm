use c_rt_lib;
use array;
use ptd;
use hash;
use nast;
use tc_types;
use tct;
use string;
use boolean_t;
use ptd_parser;
sub module_checker::stack_t;
sub module_checker::stack_hash_t;
sub module_checker::ret_t;
sub module_checker::modules_t;
sub module_checker::search_loops;
sub module_checker_priv::check_module;
sub module_checker_priv::get_loop_from_stack;
sub module_checker::var_t;
sub module_checker::return_t;
sub module_checker::state_t;
sub module_checker::save_t;
sub module_checker_priv::add_error;
sub module_checker_priv::add_warning;
sub module_checker_priv::set_used_function;
sub module_checker::check_module;
sub module_checker_priv::check_types_imported;
sub module_checker_priv::get_fun_key;
sub module_checker_priv::add_fun_used;
sub module_checker_priv::check_return_type;
sub module_checker_priv::check_type;
sub module_checker_priv::add_var;
sub module_checker_priv::use_var;
sub module_checker_priv::add_var_dec;
sub module_checker_priv::check_cmd;
sub module_checker_priv::check_lvalue;
sub module_checker_priv::check_val;
sub module_checker_priv::save_block;
sub module_checker_priv::load_block;

return 1;

sub module_checker::__stack_t() {
my $memory_0;my $memory_1;
#line 17
$memory_1 = ptd::sim();
#line 17
$memory_0 = ptd::arr($memory_1);
#line 17
undef($memory_1);
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_stack_t;
sub module_checker::stack_t() {
	$_stack_t = module_checker::__stack_t() unless defined $_stack_t;
	return $_stack_t;
}

sub module_checker::__stack_hash_t() {
my $memory_0;my $memory_1;
#line 21
$memory_1 = ptd::sim();
#line 21
$memory_0 = ptd::hash($memory_1);
#line 21
undef($memory_1);
#line 21
return $memory_0;
#line 21
undef($memory_0);
#line 21
return;
}

my $_stack_hash_t;
sub module_checker::stack_hash_t() {
	$_stack_hash_t = module_checker::__stack_hash_t() unless defined $_stack_hash_t;
	return $_stack_hash_t;
}

sub module_checker::__ret_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 25
$memory_3 = ptd::sim();
#line 25
$memory_2 = ptd::arr($memory_3);
#line 25
undef($memory_3);
#line 25
$memory_3 = ptd::none();
#line 25
$memory_1 = {loop => $memory_2,ok => $memory_3,};
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 25
$memory_0 = ptd::var($memory_1);
#line 25
undef($memory_1);
#line 25
return $memory_0;
#line 25
undef($memory_0);
#line 25
return;
}

my $_ret_t;
sub module_checker::ret_t() {
	$_ret_t = module_checker::__ret_t() unless defined $_ret_t;
	return $_ret_t;
}

sub module_checker::__modules_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 29
$memory_2 = ptd::sim();
#line 29
$memory_1 = ptd::arr($memory_2);
#line 29
undef($memory_2);
#line 29
$memory_0 = ptd::hash($memory_1);
#line 29
undef($memory_1);
#line 29
return $memory_0;
#line 29
undef($memory_0);
#line 29
return;
}

my $_modules_t;
sub module_checker::modules_t() {
	$_modules_t = module_checker::__modules_t() unless defined $_modules_t;
	return $_modules_t;
}

sub module_checker::search_loops($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];
#line 33
$memory_1 = {};
#line 34
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 34
label_3:
#line 34
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 34
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 34
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 34
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 35
$memory_5 = hash::has_key($memory_1, $memory_2);
#line 35
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 35
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 35
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 36
$memory_6 = [];
#line 37
$memory_7 = {};
#line 38
$memory_8 = module_checker_priv::check_module($memory_2, $memory_0, $memory_6, $memory_7, $memory_1);
#line 38
$memory_9 = c_rt_lib::ov_is($memory_8, 'loop');
#line 38
if (c_rt_lib::check_true($memory_9)) {goto label_7;}
#line 40
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 40
if (c_rt_lib::check_true($memory_9)) {goto label_8;}
#line 40
$memory_9 = "NOMATCHALERT";
#line 40
$memory_9 = [$memory_9,$memory_8];
#line 40
die(dfile::ssave($memory_9));
#line 38
label_7:
#line 38
$memory_10 = c_rt_lib::ov_as($memory_8, 'loop');
#line 39
$memory_11 = c_rt_lib::ov_mk_arg('loop', $memory_10);
#line 39
undef($memory_0);
#line 39
undef($memory_1);
#line 39
undef($memory_2);
#line 39
undef($memory_3);
#line 39
undef($memory_4);
#line 39
undef($memory_5);
#line 39
undef($memory_6);
#line 39
undef($memory_7);
#line 39
undef($memory_8);
#line 39
undef($memory_9);
#line 39
undef($memory_10);
#line 39
return $memory_11;
#line 39
undef($memory_11);
#line 39
undef($memory_10);
#line 40
goto label_6;
#line 40
label_8:
#line 41
goto label_6;
#line 41
label_6:
#line 41
undef($memory_8);
#line 41
undef($memory_9);
#line 41
undef($memory_6);
#line 41
undef($memory_7);
#line 42
goto label_5;
#line 42
label_5:
#line 42
undef($memory_5);
#line 43
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 43
goto label_3;
#line 43
label_1:
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
undef($memory_4);
#line 44
$memory_2 = c_rt_lib::ov_mk_none('ok');
#line 44
undef($memory_0);
#line 44
undef($memory_1);
#line 44
return $memory_2;
#line 44
undef($memory_2);
#line 44
undef($memory_1);
#line 44
undef($memory_0);
#line 44
return;
}

sub module_checker_priv::check_module($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 49
$memory_5 = 1;
#line 49
hash::set_value($memory_4, $memory_0, $memory_5);
#line 49
undef($memory_5);
#line 50
$memory_5 = 1;
#line 50
hash::set_value($memory_3, $memory_0, $memory_5);
#line 50
undef($memory_5);
#line 51
array::push($memory_2, $memory_0);
#line 52
$memory_5 = hash::get_value($memory_1, $memory_0);
#line 52
$memory_7 = 0;
#line 52
$memory_8 = 1;
#line 52
$memory_9 = c_rt_lib::array_len($memory_5);
#line 52
label_3:
#line 52
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 52
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 52
$memory_6 = $memory_5->[$memory_7];
#line 53
$memory_11 = hash::has_key($memory_3, $memory_6);
#line 53
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 53
if (c_rt_lib::check_true($memory_11)) {goto label_5;}
#line 54
$memory_12 = module_checker_priv::get_loop_from_stack($memory_6, $memory_2);
#line 54
$memory_12 = c_rt_lib::ov_mk_arg('loop', $memory_12);
#line 54
undef($memory_0);
#line 54
undef($memory_1);
#line 54
undef($memory_5);
#line 54
undef($memory_6);
#line 54
undef($memory_7);
#line 54
undef($memory_8);
#line 54
undef($memory_9);
#line 54
undef($memory_10);
#line 54
undef($memory_11);
#line 54
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_12;
#line 54
undef($memory_12);
#line 55
goto label_6;
#line 55
label_5:
#line 55
$memory_11 = hash::has_key($memory_1, $memory_6);
#line 55
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 55
if (c_rt_lib::check_true($memory_12)) {goto label_7;}
#line 55
$memory_11 = hash::has_key($memory_4, $memory_6);
#line 55
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 55
label_7:
#line 55
undef($memory_12);
#line 55
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 55
if (c_rt_lib::check_true($memory_11)) {goto label_6;}
#line 56
$memory_12 = module_checker_priv::check_module($memory_6, $memory_1, $memory_2, $memory_3, $memory_4);
#line 56
$memory_13 = c_rt_lib::ov_is($memory_12, 'loop');
#line 56
if (c_rt_lib::check_true($memory_13)) {goto label_9;}
#line 58
$memory_13 = c_rt_lib::ov_is($memory_12, 'ok');
#line 58
if (c_rt_lib::check_true($memory_13)) {goto label_10;}
#line 58
$memory_13 = "NOMATCHALERT";
#line 58
$memory_13 = [$memory_13,$memory_12];
#line 58
die(dfile::ssave($memory_13));
#line 56
label_9:
#line 56
$memory_14 = c_rt_lib::ov_as($memory_12, 'loop');
#line 57
$memory_15 = c_rt_lib::ov_mk_arg('loop', $memory_14);
#line 57
undef($memory_0);
#line 57
undef($memory_1);
#line 57
undef($memory_5);
#line 57
undef($memory_6);
#line 57
undef($memory_7);
#line 57
undef($memory_8);
#line 57
undef($memory_9);
#line 57
undef($memory_10);
#line 57
undef($memory_11);
#line 57
undef($memory_12);
#line 57
undef($memory_13);
#line 57
undef($memory_14);
#line 57
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_15;
#line 57
undef($memory_15);
#line 57
undef($memory_14);
#line 58
goto label_8;
#line 58
label_10:
#line 59
goto label_8;
#line 59
label_8:
#line 59
undef($memory_12);
#line 59
undef($memory_13);
#line 60
goto label_6;
#line 60
label_6:
#line 60
undef($memory_11);
#line 61
$memory_7 = $memory_7 + $memory_8;
#line 61
goto label_3;
#line 61
label_1:
#line 61
undef($memory_5);
#line 61
undef($memory_6);
#line 61
undef($memory_7);
#line 61
undef($memory_8);
#line 61
undef($memory_9);
#line 61
undef($memory_10);
#line 62
hash::delete($memory_3, $memory_0);
#line 63
$memory_6 = 0;
#line 63
$memory_7 = array::len($memory_2);
#line 63
$memory_8 = 1;
#line 63
$memory_7 = $memory_7 - $memory_8;
#line 63
undef($memory_8);
#line 63
$memory_5 = array::subarray($memory_2, $memory_6, $memory_7);
#line 63
undef($memory_7);
#line 63
undef($memory_6);
#line 63
$memory_2 = $memory_5;
#line 63
undef($memory_5);
#line 64
$memory_5 = c_rt_lib::ov_mk_none('ok');
#line 64
undef($memory_0);
#line 64
undef($memory_1);
#line 64
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_5;
#line 64
undef($memory_5);
#line 64
undef($memory_0);
#line 64
undef($memory_1);
#line 64
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;}

sub module_checker_priv::get_loop_from_stack($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 68
$memory_2 = [];
#line 69
$memory_4 = 0;
#line 69
$memory_5 = 1;
#line 69
$memory_6 = c_rt_lib::array_len($memory_1);
#line 69
label_3:
#line 69
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 69
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 69
$memory_3 = $memory_1->[$memory_4];
#line 70
$memory_8 = c_rt_lib::to_nl($memory_3 eq $memory_0);
#line 70
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 70
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 70
$memory_9 = [];
#line 70
$memory_2 = $memory_9;
#line 70
undef($memory_9);
#line 70
goto label_5;
#line 70
label_5:
#line 70
undef($memory_8);
#line 71
array::push($memory_2, $memory_3);
#line 72
$memory_4 = $memory_4 + $memory_5;
#line 72
goto label_3;
#line 72
label_1:
#line 72
undef($memory_3);
#line 72
undef($memory_4);
#line 72
undef($memory_5);
#line 72
undef($memory_6);
#line 72
undef($memory_7);
#line 73
array::push($memory_2, $memory_0);
#line 74
undef($memory_0);
#line 74
undef($memory_1);
#line 74
return $memory_2;
#line 74
undef($memory_2);
#line 74
undef($memory_0);
#line 74
undef($memory_1);
#line 74
return;
}

sub module_checker::__var_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 78
$memory_4 = ptd::none();
#line 78
$memory_5 = ptd::none();
#line 78
$memory_6 = ptd::none();
#line 78
$memory_3 = {const => $memory_4,none => $memory_5,value => $memory_6,};
#line 78
undef($memory_4);
#line 78
undef($memory_5);
#line 78
undef($memory_6);
#line 78
$memory_2 = ptd::var($memory_3);
#line 78
undef($memory_3);
#line 78
$memory_3 = {
	module => "boolean_t",
	name => "type",
};
#line 78
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 78
$memory_4 = {
	module => "boolean_t",
	name => "type",
};
#line 78
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 78
$memory_1 = {write => $memory_2,read => $memory_3,is_required => $memory_4,};
#line 78
undef($memory_2);
#line 78
undef($memory_3);
#line 78
undef($memory_4);
#line 78
$memory_0 = ptd::rec($memory_1);
#line 78
undef($memory_1);
#line 78
return $memory_0;
#line 78
undef($memory_0);
#line 78
return;
}

my $_var_t;
sub module_checker::var_t() {
	$_var_t = module_checker::__var_t() unless defined $_var_t;
	return $_var_t;
}

sub module_checker::__return_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 86
$memory_2 = ptd::none();
#line 86
$memory_3 = ptd::none();
#line 86
$memory_4 = ptd::none();
#line 86
$memory_5 = ptd::none();
#line 86
$memory_6 = ptd::none();
#line 86
$memory_1 = {void => $memory_2,none => $memory_3,value => $memory_4,was_void => $memory_5,was_value => $memory_6,};
#line 86
undef($memory_2);
#line 86
undef($memory_3);
#line 86
undef($memory_4);
#line 86
undef($memory_5);
#line 86
undef($memory_6);
#line 86
$memory_0 = ptd::var($memory_1);
#line 86
undef($memory_1);
#line 86
return $memory_0;
#line 86
undef($memory_0);
#line 86
return;
}

my $_return_t;
sub module_checker::return_t() {
	$_return_t = module_checker::__return_t() unless defined $_return_t;
	return $_return_t;
}

sub module_checker::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 96
$memory_2 = {
	module => "boolean_t",
	name => "type",
};
#line 96
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 96
$memory_5 = {
	module => "boolean_t",
	name => "type",
};
#line 96
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 96
$memory_6 = {
	module => "module_checker",
	name => "return_t",
};
#line 96
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 96
$memory_4 = {was => $memory_5,arg => $memory_6,};
#line 96
undef($memory_5);
#line 96
undef($memory_6);
#line 96
$memory_3 = ptd::rec($memory_4);
#line 96
undef($memory_4);
#line 96
$memory_5 = {
	module => "module_checker",
	name => "var_t",
};
#line 96
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 96
$memory_4 = ptd::hash($memory_5);
#line 96
undef($memory_5);
#line 96
$memory_5 = {
	module => "tc_types",
	name => "errors_t",
};
#line 96
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 96
$memory_9 = ptd::sim();
#line 96
$memory_8 = ptd::hash($memory_9);
#line 96
undef($memory_9);
#line 96
$memory_10 = ptd::sim();
#line 96
$memory_9 = ptd::hash($memory_10);
#line 96
undef($memory_10);
#line 96
$memory_7 = {func => $memory_8,module => $memory_9,};
#line 96
undef($memory_8);
#line 96
undef($memory_9);
#line 96
$memory_6 = ptd::rec($memory_7);
#line 96
undef($memory_7);
#line 96
$memory_7 = ptd::sim();
#line 96
$memory_1 = {in_loop => $memory_2,return => $memory_3,vars => $memory_4,errors => $memory_5,called => $memory_6,current_module => $memory_7,};
#line 96
undef($memory_2);
#line 96
undef($memory_3);
#line 96
undef($memory_4);
#line 96
undef($memory_5);
#line 96
undef($memory_6);
#line 96
undef($memory_7);
#line 96
$memory_0 = ptd::rec($memory_1);
#line 96
undef($memory_1);
#line 96
return $memory_0;
#line 96
undef($memory_0);
#line 96
return;
}

my $_state_t;
sub module_checker::state_t() {
	$_state_t = module_checker::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub module_checker::__save_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 107
$memory_2 = {
	module => "boolean_t",
	name => "type",
};
#line 107
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 107
$memory_4 = {
	module => "module_checker",
	name => "var_t",
};
#line 107
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 107
$memory_3 = ptd::hash($memory_4);
#line 107
undef($memory_4);
#line 107
$memory_1 = {in_loop => $memory_2,vars => $memory_3,};
#line 107
undef($memory_2);
#line 107
undef($memory_3);
#line 107
$memory_0 = ptd::rec($memory_1);
#line 107
undef($memory_1);
#line 107
return $memory_0;
#line 107
undef($memory_0);
#line 107
return;
}

my $_save_t;
sub module_checker::save_t() {
	$_save_t = module_checker::__save_t() unless defined $_save_t;
	return $_save_t;
}

sub module_checker_priv::add_error($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 111
$memory_2 = "errors";
#line 111
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 111
$memory_4 = $memory_0->{'current_line'};
#line 111
$memory_5 = $memory_0->{'module'};
#line 111
$memory_6 = c_rt_lib::ov_mk_none('error');
#line 111
$memory_7 = 1;
#line 111
$memory_7 = -$memory_7;
#line 111
$memory_3 = {message => $memory_1,line => $memory_4,module => $memory_5,type => $memory_6,column => $memory_7,};
#line 111
undef($memory_4);
#line 111
undef($memory_5);
#line 111
undef($memory_6);
#line 111
undef($memory_7);
#line 111
array::push($memory_2, $memory_3);
#line 111
undef($memory_3);
#line 111
$memory_3 = "errors";
#line 111
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 111
undef($memory_3);
#line 111
undef($memory_2);
#line 111
undef($memory_1);
#line 111
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub module_checker_priv::add_warning($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 116
$memory_2 = "warnings";
#line 116
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 116
$memory_4 = $memory_0->{'current_line'};
#line 116
$memory_5 = $memory_0->{'module'};
#line 116
$memory_6 = c_rt_lib::ov_mk_none('warning');
#line 116
$memory_7 = 1;
#line 116
$memory_7 = -$memory_7;
#line 116
$memory_3 = {message => $memory_1,line => $memory_4,module => $memory_5,type => $memory_6,column => $memory_7,};
#line 116
undef($memory_4);
#line 116
undef($memory_5);
#line 116
undef($memory_6);
#line 116
undef($memory_7);
#line 116
array::push($memory_2, $memory_3);
#line 116
undef($memory_3);
#line 116
$memory_3 = "warnings";
#line 116
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 116
undef($memory_3);
#line 116
undef($memory_2);
#line 116
undef($memory_1);
#line 116
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub module_checker_priv::set_used_function($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 121
$memory_3 = 0;
#line 121
hash::set_value($memory_2, $memory_0, $memory_3);
#line 121
undef($memory_3);
#line 122
$memory_3 = hash::get_value($memory_1, $memory_0);
#line 122
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 122
label_3:
#line 122
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 122
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 122
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 122
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 123
$memory_7 = hash::has_key($memory_1, $memory_4);
#line 123
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 123
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 123
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 123
undef($memory_7);
#line 123
goto label_2;
#line 123
goto label_5;
#line 123
label_5:
#line 123
undef($memory_7);
#line 124
$memory_7 = hash::has_key($memory_2, $memory_4);
#line 124
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 124
if (c_rt_lib::check_true($memory_7)) {goto label_7;}
#line 124
undef($memory_7);
#line 124
goto label_2;
#line 124
goto label_7;
#line 124
label_7:
#line 124
undef($memory_7);
#line 125
module_checker_priv::set_used_function($memory_4, $memory_1, $memory_2);
#line 125
label_2:
#line 126
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 126
goto label_3;
#line 126
label_1:
#line 126
undef($memory_3);
#line 126
undef($memory_4);
#line 126
undef($memory_5);
#line 126
undef($memory_6);
#line 126
undef($memory_0);
#line 126
undef($memory_1);
#line 126
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub module_checker::check_module($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];
#line 130
$memory_2 = [];
#line 130
$memory_3 = [];
#line 130
$memory_4 = 1;
#line 130
$memory_4 = -$memory_4;
#line 130
$memory_5 = $memory_0->{'name'};
#line 130
$memory_1 = {errors => $memory_2,warnings => $memory_3,current_line => $memory_4,module => $memory_5,};
#line 130
undef($memory_2);
#line 130
undef($memory_3);
#line 130
undef($memory_4);
#line 130
undef($memory_5);
#line 131
$memory_3 = {};
#line 131
$memory_4 = {};
#line 131
$memory_2 = {func => $memory_3,module => $memory_4,};
#line 131
undef($memory_3);
#line 131
undef($memory_4);
#line 132
$memory_5 = c_rt_lib::to_nl(0);
#line 132
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 132
$memory_4 = {was => $memory_5,arg => $memory_6,};
#line 132
undef($memory_5);
#line 132
undef($memory_6);
#line 132
$memory_5 = $memory_0->{'name'};
#line 132
$memory_6 = c_rt_lib::to_nl(0);
#line 132
$memory_7 = {};
#line 132
$memory_3 = {return => $memory_4,current_module => $memory_5,in_loop => $memory_6,called => $memory_2,vars => $memory_7,errors => $memory_1,};
#line 132
undef($memory_4);
#line 132
undef($memory_5);
#line 132
undef($memory_6);
#line 132
undef($memory_7);
#line 140
$memory_4 = {};
#line 141
$memory_5 = {};
#line 142
$memory_6 = $memory_0->{'fun_def'};
#line 142
$memory_8 = 0;
#line 142
$memory_9 = 1;
#line 142
$memory_10 = c_rt_lib::array_len($memory_6);
#line 142
label_3:
#line 142
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 142
if (c_rt_lib::check_true($memory_11)) {goto label_1;}
#line 142
$memory_7 = $memory_6->[$memory_8];
#line 143
$memory_12 = $memory_7->{'line'};
#line 143
$memory_13 = "errors";
#line 143
$memory_13 = c_rt_lib::get_ref_hash($memory_3, $memory_13);
#line 143
$memory_14 = $memory_12;
#line 143
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'current_line'} = $memory_14;
#line 143
$memory_15 = "errors";
#line 143
c_rt_lib::set_ref_hash($memory_3, $memory_15, $memory_13);
#line 143
undef($memory_15);
#line 143
undef($memory_12);
#line 143
undef($memory_13);
#line 143
undef($memory_14);
#line 144
$memory_12 = {};
#line 144
$memory_13 = $memory_12;
#line 144
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'vars'} = $memory_13;
#line 144
undef($memory_12);
#line 144
undef($memory_13);
#line 145
$memory_13 = c_rt_lib::to_nl(0);
#line 145
$memory_15 = $memory_7->{'ret_type'};
#line 145
$memory_14 = module_checker_priv::check_return_type($memory_15, $memory_3);
#line 145
undef($memory_15);
#line 145
$memory_12 = {was => $memory_13,arg => $memory_14,};
#line 145
undef($memory_13);
#line 145
undef($memory_14);
#line 145
$memory_13 = $memory_12;
#line 145
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'return'} = $memory_13;
#line 145
undef($memory_12);
#line 145
undef($memory_13);
#line 146
$memory_12 = module_checker_priv::save_block($memory_3);
#line 147
$memory_13 = $memory_7->{'args'};
#line 147
$memory_15 = 0;
#line 147
$memory_16 = 1;
#line 147
$memory_17 = c_rt_lib::array_len($memory_13);
#line 147
label_6:
#line 147
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 147
if (c_rt_lib::check_true($memory_18)) {goto label_4;}
#line 147
$memory_14 = $memory_13->[$memory_15];
#line 148
$memory_19 = $memory_14->{'name'};
#line 148
$memory_20 = c_rt_lib::to_nl(0);
#line 148
$memory_21 = c_rt_lib::to_nl(0);
#line 148
module_checker_priv::add_var($memory_19, $memory_20, $memory_21, $memory_3);
#line 148
undef($memory_21);
#line 148
undef($memory_20);
#line 148
undef($memory_19);
#line 149
$memory_19 = $memory_14->{'type'};
#line 149
module_checker_priv::check_type($memory_19, $memory_3);
#line 149
undef($memory_19);
#line 150
$memory_19 = $memory_14->{'name'};
#line 150
$memory_20 = c_rt_lib::ov_mk_none('set');
#line 150
module_checker_priv::use_var($memory_19, $memory_20, $memory_3);
#line 150
undef($memory_20);
#line 150
undef($memory_19);
#line 151
$memory_15 = $memory_15 + $memory_16;
#line 151
goto label_6;
#line 151
label_4:
#line 151
undef($memory_13);
#line 151
undef($memory_14);
#line 151
undef($memory_15);
#line 151
undef($memory_16);
#line 151
undef($memory_17);
#line 151
undef($memory_18);
#line 152
$memory_13 = $memory_7->{'cmd'};
#line 152
module_checker_priv::check_cmd($memory_13, $memory_3);
#line 152
undef($memory_13);
#line 153
$memory_13 = $memory_7->{'args'};
#line 153
$memory_15 = 0;
#line 153
$memory_16 = 1;
#line 153
$memory_17 = c_rt_lib::array_len($memory_13);
#line 153
label_9:
#line 153
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 153
if (c_rt_lib::check_true($memory_18)) {goto label_7;}
#line 153
$memory_14 = $memory_13->[$memory_15];
#line 154
$memory_19 = $memory_14->{'mod'};
#line 154
$memory_19 = c_rt_lib::ov_is($memory_19, 'ref');
#line 154
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 154
if (c_rt_lib::check_true($memory_19)) {goto label_11;}
#line 155
$memory_20 = $memory_14->{'name'};
#line 155
$memory_21 = c_rt_lib::ov_mk_none('get');
#line 155
module_checker_priv::use_var($memory_20, $memory_21, $memory_3);
#line 155
undef($memory_21);
#line 155
undef($memory_20);
#line 156
goto label_11;
#line 156
label_11:
#line 156
undef($memory_19);
#line 157
$memory_15 = $memory_15 + $memory_16;
#line 157
goto label_9;
#line 157
label_7:
#line 157
undef($memory_13);
#line 157
undef($memory_14);
#line 157
undef($memory_15);
#line 157
undef($memory_16);
#line 157
undef($memory_17);
#line 157
undef($memory_18);
#line 158
module_checker_priv::load_block($memory_3, $memory_12);
#line 159
$memory_13 = $memory_3->{'return'};
#line 159
$memory_13 = $memory_13->{'was'};
#line 159
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 159
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 159
if (c_rt_lib::check_true($memory_13)) {goto label_13;}
#line 160
$memory_14 = $memory_3->{'return'};
#line 160
$memory_14 = $memory_14->{'arg'};
#line 160
$memory_14 = c_rt_lib::ov_is($memory_14, 'value');
#line 160
if (c_rt_lib::check_true($memory_14)) {goto label_16;}
#line 160
$memory_14 = $memory_3->{'return'};
#line 160
$memory_14 = $memory_14->{'arg'};
#line 160
$memory_14 = c_rt_lib::ov_is($memory_14, 'was_value');
#line 160
label_16:
#line 160
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 160
if (c_rt_lib::check_true($memory_14)) {goto label_15;}
#line 160
$memory_15 = "errors";
#line 160
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 160
$memory_16 = "no return value at end of function";
#line 160
module_checker_priv::add_error($memory_15, $memory_16);
#line 160
undef($memory_16);
#line 160
$memory_16 = "errors";
#line 160
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_15);
#line 160
undef($memory_16);
#line 160
undef($memory_15);
#line 160
goto label_15;
#line 160
label_15:
#line 160
undef($memory_14);
#line 162
goto label_13;
#line 162
label_13:
#line 162
undef($memory_13);
#line 163
$memory_14 = $memory_7->{'access'};
#line 163
$memory_14 = c_rt_lib::ov_is($memory_14, 'pub');
#line 163
if (c_rt_lib::check_true($memory_14)) {goto label_18;}
#line 163
$memory_14 = "";
#line 163
goto label_17;
#line 163
label_18:
#line 163
$memory_14 = $memory_0->{'name'};
#line 163
label_17:
#line 163
$memory_15 = $memory_7->{'name'};
#line 163
$memory_16 = $memory_0->{'name'};
#line 163
$memory_13 = module_checker_priv::get_fun_key($memory_14, $memory_15, $memory_16);
#line 163
undef($memory_16);
#line 163
undef($memory_15);
#line 163
undef($memory_14);
#line 164
$memory_14 = $memory_3->{'called'};
#line 164
$memory_14 = $memory_14->{'func'};
#line 164
hash::set_value($memory_4, $memory_13, $memory_14);
#line 164
undef($memory_14);
#line 165
$memory_14 = $memory_7->{'access'};
#line 165
$memory_14 = c_rt_lib::ov_is($memory_14, 'priv');
#line 165
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 165
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 165
if (c_rt_lib::check_true($memory_14)) {goto label_20;}
#line 165
$memory_15 = 0;
#line 165
hash::set_value($memory_5, $memory_13, $memory_15);
#line 165
undef($memory_15);
#line 165
goto label_20;
#line 165
label_20:
#line 165
undef($memory_14);
#line 166
$memory_14 = {};
#line 166
$memory_15 = "called";
#line 166
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 166
$memory_16 = $memory_14;
#line 166
 if (c_rt_lib::get_hashcount($memory_15) > 1) {$memory_15 = {%{$memory_15}};}$memory_15->{'func'} = $memory_16;
#line 166
$memory_17 = "called";
#line 166
c_rt_lib::set_ref_hash($memory_3, $memory_17, $memory_15);
#line 166
undef($memory_17);
#line 166
undef($memory_14);
#line 166
undef($memory_15);
#line 166
undef($memory_16);
#line 166
undef($memory_12);
#line 166
undef($memory_13);
#line 167
$memory_8 = $memory_8 + $memory_9;
#line 167
goto label_3;
#line 167
label_1:
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
undef($memory_11);
#line 168
$memory_6 = {};
#line 169
$memory_7 = $memory_0->{'import'};
#line 169
$memory_9 = 0;
#line 169
$memory_10 = 1;
#line 169
$memory_11 = c_rt_lib::array_len($memory_7);
#line 169
label_23:
#line 169
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 169
if (c_rt_lib::check_true($memory_12)) {goto label_21;}
#line 169
$memory_8 = $memory_7->[$memory_9];
#line 170
$memory_13 = $memory_8->{'line'};
#line 170
$memory_14 = "errors";
#line 170
$memory_14 = c_rt_lib::get_ref_hash($memory_3, $memory_14);
#line 170
$memory_15 = $memory_13;
#line 170
 if (c_rt_lib::get_hashcount($memory_14) > 1) {$memory_14 = {%{$memory_14}};}$memory_14->{'current_line'} = $memory_15;
#line 170
$memory_16 = "errors";
#line 170
c_rt_lib::set_ref_hash($memory_3, $memory_16, $memory_14);
#line 170
undef($memory_16);
#line 170
undef($memory_13);
#line 170
undef($memory_14);
#line 170
undef($memory_15);
#line 171
$memory_14 = $memory_8->{'name'};
#line 171
$memory_13 = hash::has_key($memory_6, $memory_14);
#line 171
undef($memory_14);
#line 171
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 171
if (c_rt_lib::check_true($memory_13)) {goto label_25;}
#line 171
$memory_14 = "errors";
#line 171
$memory_14 = c_rt_lib::get_ref_hash($memory_3, $memory_14);
#line 171
$memory_15 = "multiple use module:";
#line 171
$memory_16 = $memory_8->{'name'};
#line 171
$memory_15 = $memory_15 . $memory_16;
#line 171
undef($memory_16);
#line 171
module_checker_priv::add_warning($memory_14, $memory_15);
#line 171
undef($memory_15);
#line 171
$memory_15 = "errors";
#line 171
c_rt_lib::set_ref_hash($memory_3, $memory_15, $memory_14);
#line 171
undef($memory_15);
#line 171
undef($memory_14);
#line 171
goto label_25;
#line 171
label_25:
#line 171
undef($memory_13);
#line 172
$memory_14 = $memory_3->{'called'};
#line 172
$memory_14 = $memory_14->{'module'};
#line 172
$memory_15 = $memory_8->{'name'};
#line 172
$memory_13 = hash::has_key($memory_14, $memory_15);
#line 172
undef($memory_15);
#line 172
undef($memory_14);
#line 172
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 172
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 172
if (c_rt_lib::check_true($memory_13)) {goto label_27;}
#line 172
$memory_14 = "errors";
#line 172
$memory_14 = c_rt_lib::get_ref_hash($memory_3, $memory_14);
#line 172
$memory_15 = "unused module:";
#line 172
$memory_16 = $memory_8->{'name'};
#line 172
$memory_15 = $memory_15 . $memory_16;
#line 172
undef($memory_16);
#line 172
module_checker_priv::add_warning($memory_14, $memory_15);
#line 172
undef($memory_15);
#line 172
$memory_15 = "errors";
#line 172
c_rt_lib::set_ref_hash($memory_3, $memory_15, $memory_14);
#line 172
undef($memory_15);
#line 172
undef($memory_14);
#line 172
goto label_27;
#line 172
label_27:
#line 172
undef($memory_13);
#line 174
$memory_13 = $memory_8->{'name'};
#line 174
$memory_14 = c_rt_lib::to_nl(1);
#line 174
hash::set_value($memory_6, $memory_13, $memory_14);
#line 174
undef($memory_14);
#line 174
undef($memory_13);
#line 175
$memory_9 = $memory_9 + $memory_10;
#line 175
goto label_23;
#line 175
label_21:
#line 175
undef($memory_7);
#line 175
undef($memory_8);
#line 175
undef($memory_9);
#line 175
undef($memory_10);
#line 175
undef($memory_11);
#line 175
undef($memory_12);
#line 176
$memory_7 = $memory_3->{'called'};
#line 176
$memory_7 = $memory_7->{'module'};
#line 176
$memory_10 = c_rt_lib::init_iter($memory_7);
#line 176
label_30:
#line 176
$memory_8 = c_rt_lib::is_end_hash($memory_10);
#line 176
if (c_rt_lib::check_true($memory_8)) {goto label_28;}
#line 176
$memory_8 = c_rt_lib::get_key_iter($memory_10);
#line 176
$memory_9 = c_rt_lib::hash_get_value($memory_7, $memory_8);
#line 177
$memory_11 = "errors";
#line 177
$memory_11 = c_rt_lib::get_ref_hash($memory_3, $memory_11);
#line 177
$memory_12 = $memory_9;
#line 177
 if (c_rt_lib::get_hashcount($memory_11) > 1) {$memory_11 = {%{$memory_11}};}$memory_11->{'current_line'} = $memory_12;
#line 177
$memory_13 = "errors";
#line 177
c_rt_lib::set_ref_hash($memory_3, $memory_13, $memory_11);
#line 177
undef($memory_13);
#line 177
undef($memory_11);
#line 177
undef($memory_12);
#line 178
$memory_11 = $memory_0->{'name'};
#line 178
$memory_11 = c_rt_lib::to_nl($memory_11 eq $memory_8);
#line 178
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 178
if (c_rt_lib::check_true($memory_11)) {goto label_32;}
#line 178
undef($memory_11);
#line 178
goto label_29;
#line 178
goto label_32;
#line 178
label_32:
#line 178
undef($memory_11);
#line 179
$memory_11 = hash::has_key($memory_6, $memory_8);
#line 179
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 179
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 179
if (c_rt_lib::check_true($memory_11)) {goto label_34;}
#line 179
$memory_12 = "errors";
#line 179
$memory_12 = c_rt_lib::get_ref_hash($memory_3, $memory_12);
#line 179
$memory_13 = "module '";
#line 179
$memory_13 = $memory_13 . $memory_8;
#line 179
$memory_14 = "' not imported";
#line 179
$memory_13 = $memory_13 . $memory_14;
#line 179
undef($memory_14);
#line 179
module_checker_priv::add_error($memory_12, $memory_13);
#line 179
undef($memory_13);
#line 179
$memory_13 = "errors";
#line 179
c_rt_lib::set_ref_hash($memory_3, $memory_13, $memory_12);
#line 179
undef($memory_13);
#line 179
undef($memory_12);
#line 179
goto label_34;
#line 179
label_34:
#line 179
undef($memory_11);
#line 179
label_29:
#line 180
$memory_10 = c_rt_lib::next_iter($memory_10);
#line 180
goto label_30;
#line 180
label_28:
#line 180
undef($memory_7);
#line 180
undef($memory_8);
#line 180
undef($memory_9);
#line 180
undef($memory_10);
#line 181
$memory_7 = $memory_5;
#line 182
$memory_10 = c_rt_lib::init_iter($memory_7);
#line 182
label_37:
#line 182
$memory_8 = c_rt_lib::is_end_hash($memory_10);
#line 182
if (c_rt_lib::check_true($memory_8)) {goto label_35;}
#line 182
$memory_8 = c_rt_lib::get_key_iter($memory_10);
#line 182
$memory_9 = c_rt_lib::hash_get_value($memory_7, $memory_8);
#line 183
module_checker_priv::set_used_function($memory_8, $memory_4, $memory_5);
#line 184
$memory_10 = c_rt_lib::next_iter($memory_10);
#line 184
goto label_37;
#line 184
label_35:
#line 184
undef($memory_8);
#line 184
undef($memory_9);
#line 184
undef($memory_10);
#line 185
$memory_8 = $memory_0->{'fun_def'};
#line 185
$memory_10 = 0;
#line 185
$memory_11 = 1;
#line 185
$memory_12 = c_rt_lib::array_len($memory_8);
#line 185
label_40:
#line 185
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 185
if (c_rt_lib::check_true($memory_13)) {goto label_38;}
#line 185
$memory_9 = $memory_8->[$memory_10];
#line 186
$memory_14 = $memory_9->{'access'};
#line 186
$memory_14 = c_rt_lib::ov_is($memory_14, 'pub');
#line 186
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 186
if (c_rt_lib::check_true($memory_14)) {goto label_42;}
#line 186
undef($memory_14);
#line 186
goto label_39;
#line 186
goto label_42;
#line 186
label_42:
#line 186
undef($memory_14);
#line 187
$memory_15 = "priv:";
#line 187
$memory_16 = $memory_0->{'name'};
#line 187
$memory_15 = $memory_15 . $memory_16;
#line 187
undef($memory_16);
#line 187
$memory_16 = "::";
#line 187
$memory_15 = $memory_15 . $memory_16;
#line 187
undef($memory_16);
#line 187
$memory_16 = $memory_9->{'name'};
#line 187
$memory_15 = $memory_15 . $memory_16;
#line 187
undef($memory_16);
#line 187
$memory_14 = hash::has_key($memory_5, $memory_15);
#line 187
undef($memory_15);
#line 187
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 187
if (c_rt_lib::check_true($memory_14)) {goto label_44;}
#line 187
undef($memory_14);
#line 187
goto label_39;
#line 187
goto label_44;
#line 187
label_44:
#line 187
undef($memory_14);
#line 188
$memory_14 = $memory_9->{'line'};
#line 188
$memory_15 = "errors";
#line 188
$memory_15 = c_rt_lib::get_ref_hash($memory_3, $memory_15);
#line 188
$memory_16 = $memory_14;
#line 188
 if (c_rt_lib::get_hashcount($memory_15) > 1) {$memory_15 = {%{$memory_15}};}$memory_15->{'current_line'} = $memory_16;
#line 188
$memory_17 = "errors";
#line 188
c_rt_lib::set_ref_hash($memory_3, $memory_17, $memory_15);
#line 188
undef($memory_17);
#line 188
undef($memory_14);
#line 188
undef($memory_15);
#line 188
undef($memory_16);
#line 189
$memory_14 = "errors";
#line 189
$memory_14 = c_rt_lib::get_ref_hash($memory_3, $memory_14);
#line 189
$memory_15 = "unused function: ";
#line 189
$memory_16 = $memory_0->{'name'};
#line 189
$memory_15 = $memory_15 . $memory_16;
#line 189
undef($memory_16);
#line 189
$memory_16 = "_priv::";
#line 189
$memory_15 = $memory_15 . $memory_16;
#line 189
undef($memory_16);
#line 189
$memory_16 = $memory_9->{'name'};
#line 189
$memory_15 = $memory_15 . $memory_16;
#line 189
undef($memory_16);
#line 189
module_checker_priv::add_warning($memory_14, $memory_15);
#line 189
undef($memory_15);
#line 189
$memory_15 = "errors";
#line 189
c_rt_lib::set_ref_hash($memory_3, $memory_15, $memory_14);
#line 189
undef($memory_15);
#line 189
undef($memory_14);
#line 189
label_39:
#line 190
$memory_10 = $memory_10 + $memory_11;
#line 190
goto label_40;
#line 190
label_38:
#line 190
undef($memory_8);
#line 190
undef($memory_9);
#line 190
undef($memory_10);
#line 190
undef($memory_11);
#line 190
undef($memory_12);
#line 190
undef($memory_13);
#line 191
$memory_8 = $memory_3->{'errors'};
#line 191
undef($memory_0);
#line 191
undef($memory_1);
#line 191
undef($memory_2);
#line 191
undef($memory_3);
#line 191
undef($memory_4);
#line 191
undef($memory_5);
#line 191
undef($memory_6);
#line 191
undef($memory_7);
#line 191
return $memory_8;
#line 191
undef($memory_8);
#line 191
undef($memory_1);
#line 191
undef($memory_2);
#line 191
undef($memory_3);
#line 191
undef($memory_4);
#line 191
undef($memory_5);
#line 191
undef($memory_6);
#line 191
undef($memory_7);
#line 191
undef($memory_0);
#line 191
return;
}

sub module_checker_priv::check_types_imported($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 195
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 195
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 196
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 196
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 198
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 198
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 200
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 200
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 204
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 204
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 213
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 213
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 214
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 214
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 215
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 215
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 222
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 222
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 222
$memory_2 = "NOMATCHALERT";
#line 222
$memory_2 = [$memory_2,$memory_0];
#line 222
die(dfile::ssave($memory_2));
#line 195
label_2:
#line 196
goto label_1;
#line 196
label_3:
#line 196
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 197
module_checker_priv::check_types_imported($memory_3, $memory_1);
#line 197
undef($memory_3);
#line 198
goto label_1;
#line 198
label_4:
#line 198
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 199
module_checker_priv::check_types_imported($memory_3, $memory_1);
#line 199
undef($memory_3);
#line 200
goto label_1;
#line 200
label_5:
#line 200
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 201
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 201
label_13:
#line 201
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 201
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 201
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 201
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 202
module_checker_priv::check_types_imported($memory_5, $memory_1);
#line 203
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 203
goto label_13;
#line 203
label_11:
#line 203
undef($memory_4);
#line 203
undef($memory_5);
#line 203
undef($memory_6);
#line 203
undef($memory_3);
#line 204
goto label_1;
#line 204
label_6:
#line 204
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 205
$memory_5 = "::";
#line 205
$memory_4 = string::index2($memory_3, $memory_5);
#line 205
undef($memory_5);
#line 206
$memory_5 = 0;
#line 206
$memory_5 = c_rt_lib::to_nl($memory_4 >= $memory_5);
#line 206
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 206
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 207
$memory_7 = 0;
#line 207
$memory_6 = string::substr($memory_3, $memory_7, $memory_4);
#line 207
undef($memory_7);
#line 208
$memory_8 = 2;
#line 208
$memory_8 = $memory_4 + $memory_8;
#line 208
$memory_9 = string::length($memory_3);
#line 208
$memory_9 = $memory_9 - $memory_4;
#line 208
$memory_10 = 2;
#line 208
$memory_9 = $memory_9 - $memory_10;
#line 208
undef($memory_10);
#line 208
$memory_7 = string::substr($memory_3, $memory_8, $memory_9);
#line 208
undef($memory_9);
#line 208
undef($memory_8);
#line 209
module_checker_priv::add_fun_used($memory_6, $memory_7, $memory_1);
#line 209
undef($memory_6);
#line 209
undef($memory_7);
#line 210
goto label_14;
#line 210
label_15:
#line 211
$memory_6 = "errors";
#line 211
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 211
$memory_7 = "wrong type function name '";
#line 211
$memory_7 = $memory_7 . $memory_3;
#line 211
$memory_8 = "' ";
#line 211
$memory_7 = $memory_7 . $memory_8;
#line 211
undef($memory_8);
#line 211
module_checker_priv::add_error($memory_6, $memory_7);
#line 211
undef($memory_7);
#line 211
$memory_7 = "errors";
#line 211
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_6);
#line 211
undef($memory_7);
#line 211
undef($memory_6);
#line 212
goto label_14;
#line 212
label_14:
#line 212
undef($memory_5);
#line 212
undef($memory_4);
#line 212
undef($memory_3);
#line 213
goto label_1;
#line 213
label_7:
#line 214
goto label_1;
#line 214
label_8:
#line 215
goto label_1;
#line 215
label_9:
#line 215
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 216
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 216
label_18:
#line 216
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 216
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 216
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 216
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 217
$memory_7 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 217
if (c_rt_lib::check_true($memory_7)) {goto label_20;}
#line 218
$memory_7 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 218
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 218
$memory_7 = "NOMATCHALERT";
#line 218
$memory_7 = [$memory_7,$memory_5];
#line 218
die(dfile::ssave($memory_7));
#line 217
label_20:
#line 218
goto label_19;
#line 218
label_21:
#line 218
$memory_8 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 219
module_checker_priv::check_types_imported($memory_8, $memory_1);
#line 219
undef($memory_8);
#line 220
goto label_19;
#line 220
label_19:
#line 220
undef($memory_7);
#line 221
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 221
goto label_18;
#line 221
label_16:
#line 221
undef($memory_4);
#line 221
undef($memory_5);
#line 221
undef($memory_6);
#line 221
undef($memory_3);
#line 222
goto label_1;
#line 222
label_10:
#line 223
goto label_1;
#line 223
label_1:
#line 223
undef($memory_2);
#line 223
undef($memory_0);
#line 223
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::get_fun_key($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 227
$memory_3 = "";
#line 227
$memory_3 = c_rt_lib::to_nl($memory_0 eq $memory_3);
#line 227
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 227
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 227
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 227
$memory_4 = "::";
#line 227
$memory_4 = $memory_0 . $memory_4;
#line 227
$memory_4 = $memory_4 . $memory_1;
#line 227
undef($memory_0);
#line 227
undef($memory_1);
#line 227
undef($memory_2);
#line 227
undef($memory_3);
#line 227
return $memory_4;
#line 227
undef($memory_4);
#line 227
goto label_2;
#line 227
label_2:
#line 227
undef($memory_3);
#line 228
$memory_3 = "priv:";
#line 228
$memory_3 = $memory_3 . $memory_2;
#line 228
$memory_4 = "::";
#line 228
$memory_3 = $memory_3 . $memory_4;
#line 228
undef($memory_4);
#line 228
$memory_3 = $memory_3 . $memory_1;
#line 228
undef($memory_0);
#line 228
undef($memory_1);
#line 228
undef($memory_2);
#line 228
return $memory_3;
#line 228
undef($memory_3);
#line 228
undef($memory_0);
#line 228
undef($memory_1);
#line 228
undef($memory_2);
#line 228
return;
}

sub module_checker_priv::add_fun_used($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 232
$memory_4 = $memory_2->{'current_module'};
#line 232
$memory_3 = module_checker_priv::get_fun_key($memory_0, $memory_1, $memory_4);
#line 232
undef($memory_4);
#line 233
$memory_5 = $memory_2->{'called'};
#line 233
$memory_5 = $memory_5->{'func'};
#line 233
$memory_4 = hash::has_key($memory_5, $memory_3);
#line 233
undef($memory_5);
#line 233
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 233
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 233
undef($memory_0);
#line 233
undef($memory_1);
#line 233
undef($memory_3);
#line 233
undef($memory_4);
#line 233
$_[2] = $memory_2;return;
#line 233
goto label_2;
#line 233
label_2:
#line 233
undef($memory_4);
#line 234
$memory_4 = "called";
#line 234
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 234
$memory_5 = "func";
#line 234
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 234
$memory_6 = $memory_2->{'errors'};
#line 234
$memory_6 = $memory_6->{'current_line'};
#line 234
hash::set_value($memory_5, $memory_3, $memory_6);
#line 234
undef($memory_6);
#line 234
$memory_6 = "func";
#line 234
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 234
$memory_6 = "called";
#line 234
c_rt_lib::set_ref_hash($memory_2, $memory_6, $memory_4);
#line 234
undef($memory_6);
#line 234
undef($memory_4);
#line 234
undef($memory_5);
#line 235
$memory_4 = "";
#line 235
$memory_4 = c_rt_lib::to_nl($memory_0 eq $memory_4);
#line 235
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 235
$memory_5 = $memory_2->{'called'};
#line 235
$memory_5 = $memory_5->{'module'};
#line 235
$memory_4 = hash::has_key($memory_5, $memory_0);
#line 235
undef($memory_5);
#line 235
label_5:
#line 235
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 235
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 235
undef($memory_0);
#line 235
undef($memory_1);
#line 235
undef($memory_3);
#line 235
undef($memory_4);
#line 235
$_[2] = $memory_2;return;
#line 235
goto label_4;
#line 235
label_4:
#line 235
undef($memory_4);
#line 236
$memory_4 = "called";
#line 236
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 236
$memory_5 = "module";
#line 236
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 236
$memory_6 = $memory_2->{'errors'};
#line 236
$memory_6 = $memory_6->{'current_line'};
#line 236
hash::set_value($memory_5, $memory_0, $memory_6);
#line 236
undef($memory_6);
#line 236
$memory_6 = "module";
#line 236
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 236
$memory_6 = "called";
#line 236
c_rt_lib::set_ref_hash($memory_2, $memory_6, $memory_4);
#line 236
undef($memory_6);
#line 236
undef($memory_4);
#line 236
undef($memory_5);
#line 236
undef($memory_3);
#line 236
undef($memory_0);
#line 236
undef($memory_1);
#line 236
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub module_checker_priv::check_return_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 240
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 240
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 242
$memory_2 = c_rt_lib::ov_is($memory_0, 'type');
#line 242
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 242
$memory_2 = "NOMATCHALERT";
#line 242
$memory_2 = [$memory_2,$memory_0];
#line 242
die(dfile::ssave($memory_2));
#line 240
label_2:
#line 241
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 241
undef($memory_0);
#line 241
undef($memory_2);
#line 241
$_[1] = $memory_1;return $memory_3;
#line 241
undef($memory_3);
#line 242
goto label_1;
#line 242
label_3:
#line 242
$memory_3 = c_rt_lib::ov_as($memory_0, 'type');
#line 243
$memory_4 = $memory_3;
#line 243
$memory_4 = c_rt_lib::ov_is($memory_4, 'fun_val');
#line 243
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 243
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 244
$memory_5 = $memory_3;
#line 244
$memory_5 = c_rt_lib::ov_as($memory_5, 'fun_val');
#line 245
$memory_6 = $memory_5->{'module'};
#line 245
$memory_8 = "ptd";
#line 245
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 245
undef($memory_8);
#line 245
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 245
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 245
$memory_6 = $memory_5->{'name'};
#line 245
$memory_8 = "void";
#line 245
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 245
undef($memory_8);
#line 245
label_8:
#line 245
undef($memory_7);
#line 245
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 245
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 246
$memory_7 = "ptd";
#line 246
$memory_8 = "void";
#line 246
module_checker_priv::add_fun_used($memory_7, $memory_8, $memory_1);
#line 246
undef($memory_8);
#line 246
undef($memory_7);
#line 247
$memory_7 = c_rt_lib::ov_mk_none('void');
#line 247
undef($memory_0);
#line 247
undef($memory_2);
#line 247
undef($memory_3);
#line 247
undef($memory_4);
#line 247
undef($memory_5);
#line 247
undef($memory_6);
#line 247
$_[1] = $memory_1;return $memory_7;
#line 247
undef($memory_7);
#line 248
goto label_7;
#line 248
label_7:
#line 248
undef($memory_6);
#line 248
undef($memory_5);
#line 249
goto label_5;
#line 249
label_5:
#line 249
undef($memory_4);
#line 249
undef($memory_3);
#line 250
goto label_1;
#line 250
label_1:
#line 250
undef($memory_2);
#line 251
module_checker_priv::check_type($memory_0, $memory_1);
#line 252
$memory_2 = c_rt_lib::ov_mk_none('value');
#line 252
undef($memory_0);
#line 252
$_[1] = $memory_1;return $memory_2;
#line 252
undef($memory_2);
#line 252
undef($memory_0);
#line 252
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::check_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 256
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 256
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 257
$memory_2 = c_rt_lib::ov_is($memory_0, 'type');
#line 257
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 257
$memory_2 = "NOMATCHALERT";
#line 257
$memory_2 = [$memory_2,$memory_0];
#line 257
die(dfile::ssave($memory_2));
#line 256
label_2:
#line 257
goto label_1;
#line 257
label_3:
#line 257
$memory_3 = c_rt_lib::ov_as($memory_0, 'type');
#line 258
$memory_4 = $memory_3;
#line 258
$memory_4 = c_rt_lib::ov_is($memory_4, 'fun_val');
#line 258
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 258
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 259
$memory_5 = $memory_3;
#line 259
$memory_5 = c_rt_lib::ov_as($memory_5, 'fun_val');
#line 260
$memory_6 = $memory_5->{'module'};
#line 260
$memory_7 = $memory_5->{'name'};
#line 260
module_checker_priv::add_fun_used($memory_6, $memory_7, $memory_1);
#line 260
undef($memory_7);
#line 260
undef($memory_6);
#line 260
undef($memory_5);
#line 261
goto label_5;
#line 261
label_5:
#line 261
undef($memory_4);
#line 262
$memory_4 = ptd_parser::try_value_to_ptd($memory_3);
#line 262
$memory_5 = c_rt_lib::ov_is($memory_4, 'err');
#line 262
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 264
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 264
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 264
$memory_5 = "NOMATCHALERT";
#line 264
$memory_5 = [$memory_5,$memory_4];
#line 264
die(dfile::ssave($memory_5));
#line 262
label_7:
#line 262
$memory_6 = c_rt_lib::ov_as($memory_4, 'err');
#line 263
$memory_7 = "errors";
#line 263
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 263
module_checker_priv::add_error($memory_7, $memory_6);
#line 263
$memory_8 = "errors";
#line 263
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_7);
#line 263
undef($memory_8);
#line 263
undef($memory_7);
#line 263
undef($memory_6);
#line 264
goto label_6;
#line 264
label_8:
#line 264
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 265
module_checker_priv::check_types_imported($memory_6, $memory_1);
#line 265
undef($memory_6);
#line 266
goto label_6;
#line 266
label_6:
#line 266
undef($memory_4);
#line 266
undef($memory_5);
#line 266
undef($memory_3);
#line 267
goto label_1;
#line 267
label_1:
#line 267
undef($memory_2);
#line 267
undef($memory_0);
#line 267
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::add_var($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 272
$memory_5 = $memory_3->{'vars'};
#line 272
$memory_4 = hash::has_key($memory_5, $memory_0);
#line 272
undef($memory_5);
#line 272
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 272
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 273
$memory_5 = "errors";
#line 273
$memory_5 = c_rt_lib::get_ref_hash($memory_3, $memory_5);
#line 273
$memory_6 = "redeclaration variable: ";
#line 273
$memory_6 = $memory_6 . $memory_0;
#line 273
module_checker_priv::add_error($memory_5, $memory_6);
#line 273
undef($memory_6);
#line 273
$memory_6 = "errors";
#line 273
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_5);
#line 273
undef($memory_6);
#line 273
undef($memory_5);
#line 274
goto label_2;
#line 274
label_2:
#line 274
undef($memory_4);
#line 275
$memory_5 = c_rt_lib::ov_mk_none('none');
#line 275
$memory_6 = c_rt_lib::to_nl(0);
#line 275
$memory_4 = {write => $memory_5,read => $memory_6,is_required => $memory_2,};
#line 275
undef($memory_5);
#line 275
undef($memory_6);
#line 276
$memory_5 = $memory_1;
#line 276
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 276
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 276
$memory_6 = c_rt_lib::ov_mk_none('const');
#line 276
$memory_7 = $memory_6;
#line 276
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'write'} = $memory_7;
#line 276
undef($memory_6);
#line 276
undef($memory_7);
#line 276
goto label_4;
#line 276
label_4:
#line 276
undef($memory_5);
#line 277
$memory_5 = "vars";
#line 277
$memory_5 = c_rt_lib::get_ref_hash($memory_3, $memory_5);
#line 277
hash::set_value($memory_5, $memory_0, $memory_4);
#line 277
$memory_6 = "vars";
#line 277
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_5);
#line 277
undef($memory_6);
#line 277
undef($memory_5);
#line 277
undef($memory_4);
#line 277
undef($memory_0);
#line 277
undef($memory_1);
#line 277
undef($memory_2);
#line 277
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub module_checker_priv::use_var($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 282
$memory_4 = $memory_2->{'vars'};
#line 282
$memory_3 = hash::has_key($memory_4, $memory_0);
#line 282
undef($memory_4);
#line 282
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 282
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 282
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 283
$memory_4 = "errors";
#line 283
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 283
$memory_5 = "unknown variable: ";
#line 283
$memory_5 = $memory_5 . $memory_0;
#line 283
module_checker_priv::add_error($memory_4, $memory_5);
#line 283
undef($memory_5);
#line 283
$memory_5 = "errors";
#line 283
c_rt_lib::set_ref_hash($memory_2, $memory_5, $memory_4);
#line 283
undef($memory_5);
#line 283
undef($memory_4);
#line 284
undef($memory_0);
#line 284
undef($memory_1);
#line 284
undef($memory_3);
#line 284
$_[2] = $memory_2;return;
#line 285
goto label_2;
#line 285
label_2:
#line 285
undef($memory_3);
#line 286
$memory_4 = $memory_2->{'vars'};
#line 286
$memory_3 = hash::get_value($memory_4, $memory_0);
#line 286
undef($memory_4);
#line 287
$memory_4 = c_rt_lib::ov_is($memory_1, 'get');
#line 287
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 289
$memory_4 = c_rt_lib::ov_is($memory_1, 'set');
#line 289
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 295
$memory_4 = c_rt_lib::ov_is($memory_1, 'mod');
#line 295
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 295
$memory_4 = "NOMATCHALERT";
#line 295
$memory_4 = [$memory_4,$memory_1];
#line 295
die(dfile::ssave($memory_4));
#line 287
label_4:
#line 288
$memory_5 = c_rt_lib::to_nl(1);
#line 288
$memory_6 = $memory_5;
#line 288
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'read'} = $memory_6;
#line 288
undef($memory_5);
#line 288
undef($memory_6);
#line 289
goto label_3;
#line 289
label_5:
#line 290
$memory_5 = $memory_3->{'write'};
#line 290
$memory_5 = c_rt_lib::ov_is($memory_5, 'const');
#line 290
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 290
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 291
$memory_6 = "errors";
#line 291
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 291
$memory_7 = "can't change const variable: ";
#line 291
$memory_7 = $memory_7 . $memory_0;
#line 291
module_checker_priv::add_error($memory_6, $memory_7);
#line 291
undef($memory_7);
#line 291
$memory_7 = "errors";
#line 291
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 291
undef($memory_7);
#line 291
undef($memory_6);
#line 292
undef($memory_0);
#line 292
undef($memory_1);
#line 292
undef($memory_3);
#line 292
undef($memory_4);
#line 292
undef($memory_5);
#line 292
$_[2] = $memory_2;return;
#line 293
goto label_8;
#line 293
label_8:
#line 293
undef($memory_5);
#line 294
$memory_5 = c_rt_lib::ov_mk_none('value');
#line 294
$memory_6 = $memory_5;
#line 294
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'write'} = $memory_6;
#line 294
undef($memory_5);
#line 294
undef($memory_6);
#line 295
goto label_3;
#line 295
label_6:
#line 296
$memory_5 = c_rt_lib::to_nl(1);
#line 296
$memory_6 = $memory_5;
#line 296
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'read'} = $memory_6;
#line 296
undef($memory_5);
#line 296
undef($memory_6);
#line 297
$memory_5 = $memory_3->{'write'};
#line 297
$memory_5 = c_rt_lib::ov_is($memory_5, 'const');
#line 297
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 297
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 298
$memory_6 = "errors";
#line 298
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 298
$memory_7 = "can't change const variable: ";
#line 298
$memory_7 = $memory_7 . $memory_0;
#line 298
module_checker_priv::add_error($memory_6, $memory_7);
#line 298
undef($memory_7);
#line 298
$memory_7 = "errors";
#line 298
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 298
undef($memory_7);
#line 298
undef($memory_6);
#line 299
undef($memory_0);
#line 299
undef($memory_1);
#line 299
undef($memory_3);
#line 299
undef($memory_4);
#line 299
undef($memory_5);
#line 299
$_[2] = $memory_2;return;
#line 300
goto label_10;
#line 300
label_10:
#line 300
undef($memory_5);
#line 301
$memory_5 = c_rt_lib::ov_mk_none('value');
#line 301
$memory_6 = $memory_5;
#line 301
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'write'} = $memory_6;
#line 301
undef($memory_5);
#line 301
undef($memory_6);
#line 302
goto label_3;
#line 302
label_3:
#line 302
undef($memory_4);
#line 303
$memory_4 = "vars";
#line 303
$memory_4 = c_rt_lib::get_ref_hash($memory_2, $memory_4);
#line 303
hash::set_value($memory_4, $memory_0, $memory_3);
#line 303
$memory_5 = "vars";
#line 303
c_rt_lib::set_ref_hash($memory_2, $memory_5, $memory_4);
#line 303
undef($memory_5);
#line 303
undef($memory_4);
#line 303
undef($memory_3);
#line 303
undef($memory_0);
#line 303
undef($memory_1);
#line 303
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub module_checker_priv::add_var_dec($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 308
$memory_4 = $memory_0->{'name'};
#line 308
module_checker_priv::add_var($memory_4, $memory_1, $memory_2, $memory_3);
#line 308
undef($memory_4);
#line 309
$memory_4 = $memory_0->{'type'};
#line 309
module_checker_priv::check_type($memory_4, $memory_3);
#line 309
undef($memory_4);
#line 310
$memory_4 = $memory_0->{'value'};
#line 310
$memory_5 = c_rt_lib::ov_is($memory_4, 'value');
#line 310
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 314
$memory_5 = c_rt_lib::ov_is($memory_4, 'none');
#line 314
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 314
$memory_5 = "NOMATCHALERT";
#line 314
$memory_5 = [$memory_5,$memory_4];
#line 314
die(dfile::ssave($memory_5));
#line 310
label_2:
#line 310
$memory_6 = c_rt_lib::ov_as($memory_4, 'value');
#line 311
module_checker_priv::check_val($memory_6, $memory_3);
#line 312
$memory_7 = $memory_1;
#line 312
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 312
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 312
$memory_8 = [];
#line 312
die(dfile::ssave($memory_8));
#line 312
goto label_5;
#line 312
label_5:
#line 312
undef($memory_7);
#line 312
undef($memory_8);
#line 313
$memory_7 = $memory_0->{'name'};
#line 313
$memory_8 = c_rt_lib::ov_mk_none('set');
#line 313
module_checker_priv::use_var($memory_7, $memory_8, $memory_3);
#line 313
undef($memory_8);
#line 313
undef($memory_7);
#line 313
undef($memory_6);
#line 314
goto label_1;
#line 314
label_3:
#line 315
goto label_1;
#line 315
label_1:
#line 315
undef($memory_4);
#line 315
undef($memory_5);
#line 315
undef($memory_0);
#line 315
undef($memory_1);
#line 315
undef($memory_2);
#line 315
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub module_checker_priv::check_cmd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 319
$memory_2 = $memory_0->{'debug'};
#line 319
$memory_2 = $memory_2->{'begin'};
#line 319
$memory_2 = $memory_2->{'line'};
#line 319
$memory_3 = "errors";
#line 319
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 319
$memory_4 = $memory_2;
#line 319
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'current_line'} = $memory_4;
#line 319
$memory_5 = "errors";
#line 319
c_rt_lib::set_ref_hash($memory_1, $memory_5, $memory_3);
#line 319
undef($memory_5);
#line 319
undef($memory_2);
#line 319
undef($memory_3);
#line 319
undef($memory_4);
#line 320
$memory_2 = $memory_1->{'return'};
#line 320
$memory_2 = $memory_2->{'was'};
#line 320
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 320
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 321
$memory_3 = "errors";
#line 321
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 321
$memory_4 = "never used command";
#line 321
module_checker_priv::add_warning($memory_3, $memory_4);
#line 321
undef($memory_4);
#line 321
$memory_4 = "errors";
#line 321
c_rt_lib::set_ref_hash($memory_1, $memory_4, $memory_3);
#line 321
undef($memory_4);
#line 321
undef($memory_3);
#line 322
$memory_3 = c_rt_lib::to_nl(0);
#line 322
$memory_4 = "return";
#line 322
$memory_4 = c_rt_lib::get_ref_hash($memory_1, $memory_4);
#line 322
$memory_5 = $memory_3;
#line 322
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'was'} = $memory_5;
#line 322
$memory_6 = "return";
#line 322
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_4);
#line 322
undef($memory_6);
#line 322
undef($memory_3);
#line 322
undef($memory_4);
#line 322
undef($memory_5);
#line 323
goto label_2;
#line 323
label_2:
#line 323
undef($memory_2);
#line 324
$memory_2 = $memory_0->{'cmd'};
#line 324
$memory_3 = c_rt_lib::ov_is($memory_2, 'if');
#line 324
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 338
$memory_3 = c_rt_lib::ov_is($memory_2, 'for');
#line 338
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 351
$memory_3 = c_rt_lib::ov_is($memory_2, 'fora');
#line 351
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 359
$memory_3 = c_rt_lib::ov_is($memory_2, 'forh');
#line 359
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 368
$memory_3 = c_rt_lib::ov_is($memory_2, 'loop');
#line 368
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 373
$memory_3 = c_rt_lib::ov_is($memory_2, 'rep');
#line 373
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 381
$memory_3 = c_rt_lib::ov_is($memory_2, 'while');
#line 381
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 388
$memory_3 = c_rt_lib::ov_is($memory_2, 'if_mod');
#line 388
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 392
$memory_3 = c_rt_lib::ov_is($memory_2, 'unless_mod');
#line 392
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 396
$memory_3 = c_rt_lib::ov_is($memory_2, 'break');
#line 396
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 400
$memory_3 = c_rt_lib::ov_is($memory_2, 'continue');
#line 400
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 404
$memory_3 = c_rt_lib::ov_is($memory_2, 'match');
#line 404
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 419
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 419
if (c_rt_lib::check_true($memory_3)) {goto label_16;}
#line 421
$memory_3 = c_rt_lib::ov_is($memory_2, 'return');
#line 421
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 437
$memory_3 = c_rt_lib::ov_is($memory_2, 'block');
#line 437
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 443
$memory_3 = c_rt_lib::ov_is($memory_2, 'die');
#line 443
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 448
$memory_3 = c_rt_lib::ov_is($memory_2, 'var_decl');
#line 448
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 450
$memory_3 = c_rt_lib::ov_is($memory_2, 'try');
#line 450
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 458
$memory_3 = c_rt_lib::ov_is($memory_2, 'ensure');
#line 458
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 466
$memory_3 = c_rt_lib::ov_is($memory_2, 'nop');
#line 466
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 466
$memory_3 = "NOMATCHALERT";
#line 466
$memory_3 = [$memory_3,$memory_2];
#line 466
die(dfile::ssave($memory_3));
#line 324
label_4:
#line 324
$memory_4 = c_rt_lib::ov_as($memory_2, 'if');
#line 325
$memory_5 = $memory_4->{'cond'};
#line 325
module_checker_priv::check_val($memory_5, $memory_1);
#line 325
undef($memory_5);
#line 326
$memory_5 = $memory_4->{'if'};
#line 326
module_checker_priv::check_cmd($memory_5, $memory_1);
#line 326
undef($memory_5);
#line 327
$memory_5 = $memory_1->{'return'};
#line 327
$memory_5 = $memory_5->{'was'};
#line 328
$memory_6 = $memory_4->{'elsif'};
#line 328
$memory_8 = 0;
#line 328
$memory_9 = 1;
#line 328
$memory_10 = c_rt_lib::array_len($memory_6);
#line 328
label_26:
#line 328
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 328
if (c_rt_lib::check_true($memory_11)) {goto label_24;}
#line 328
$memory_7 = $memory_6->[$memory_8];
#line 329
$memory_12 = c_rt_lib::to_nl(0);
#line 329
$memory_13 = "return";
#line 329
$memory_13 = c_rt_lib::get_ref_hash($memory_1, $memory_13);
#line 329
$memory_14 = $memory_12;
#line 329
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'was'} = $memory_14;
#line 329
$memory_15 = "return";
#line 329
c_rt_lib::set_ref_hash($memory_1, $memory_15, $memory_13);
#line 329
undef($memory_15);
#line 329
undef($memory_12);
#line 329
undef($memory_13);
#line 329
undef($memory_14);
#line 330
$memory_12 = $memory_7->{'cond'};
#line 330
module_checker_priv::check_val($memory_12, $memory_1);
#line 330
undef($memory_12);
#line 331
$memory_12 = $memory_7->{'cmd'};
#line 331
module_checker_priv::check_cmd($memory_12, $memory_1);
#line 331
undef($memory_12);
#line 332
$memory_12 = $memory_1->{'return'};
#line 332
$memory_12 = $memory_12->{'was'};
#line 332
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 332
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 332
if (c_rt_lib::check_true($memory_12)) {goto label_28;}
#line 332
$memory_13 = c_rt_lib::to_nl(0);
#line 332
$memory_5 = $memory_13;
#line 332
undef($memory_13);
#line 332
goto label_28;
#line 332
label_28:
#line 332
undef($memory_12);
#line 333
$memory_8 = $memory_8 + $memory_9;
#line 333
goto label_26;
#line 333
label_24:
#line 333
undef($memory_6);
#line 333
undef($memory_7);
#line 333
undef($memory_8);
#line 333
undef($memory_9);
#line 333
undef($memory_10);
#line 333
undef($memory_11);
#line 334
$memory_6 = c_rt_lib::to_nl(0);
#line 334
$memory_7 = "return";
#line 334
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 334
$memory_8 = $memory_6;
#line 334
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 334
$memory_9 = "return";
#line 334
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 334
undef($memory_9);
#line 334
undef($memory_6);
#line 334
undef($memory_7);
#line 334
undef($memory_8);
#line 335
$memory_6 = $memory_4->{'else'};
#line 335
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 335
undef($memory_6);
#line 336
$memory_6 = $memory_1->{'return'};
#line 336
$memory_6 = $memory_6->{'was'};
#line 336
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 336
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 336
if (c_rt_lib::check_true($memory_6)) {goto label_30;}
#line 336
$memory_7 = c_rt_lib::to_nl(0);
#line 336
$memory_5 = $memory_7;
#line 336
undef($memory_7);
#line 336
goto label_30;
#line 336
label_30:
#line 336
undef($memory_6);
#line 337
$memory_6 = "return";
#line 337
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 337
$memory_7 = $memory_5;
#line 337
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 337
$memory_8 = "return";
#line 337
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 337
undef($memory_8);
#line 337
undef($memory_6);
#line 337
undef($memory_7);
#line 337
undef($memory_5);
#line 337
undef($memory_4);
#line 338
goto label_3;
#line 338
label_5:
#line 338
$memory_4 = c_rt_lib::ov_as($memory_2, 'for');
#line 339
$memory_5 = module_checker_priv::save_block($memory_1);
#line 340
$memory_6 = $memory_4->{'start'};
#line 340
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 340
if (c_rt_lib::check_true($memory_7)) {goto label_32;}
#line 342
$memory_7 = c_rt_lib::ov_is($memory_6, 'var_decl');
#line 342
if (c_rt_lib::check_true($memory_7)) {goto label_33;}
#line 342
$memory_7 = "NOMATCHALERT";
#line 342
$memory_7 = [$memory_7,$memory_6];
#line 342
die(dfile::ssave($memory_7));
#line 340
label_32:
#line 340
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 341
module_checker_priv::check_val($memory_8, $memory_1);
#line 341
undef($memory_8);
#line 342
goto label_31;
#line 342
label_33:
#line 342
$memory_8 = c_rt_lib::ov_as($memory_6, 'var_decl');
#line 343
$memory_9 = c_rt_lib::to_nl(0);
#line 343
$memory_10 = c_rt_lib::to_nl(0);
#line 343
module_checker_priv::add_var_dec($memory_8, $memory_9, $memory_10, $memory_1);
#line 343
undef($memory_10);
#line 343
undef($memory_9);
#line 343
undef($memory_8);
#line 344
goto label_31;
#line 344
label_31:
#line 344
undef($memory_6);
#line 344
undef($memory_7);
#line 345
$memory_6 = $memory_4->{'cond'};
#line 345
module_checker_priv::check_val($memory_6, $memory_1);
#line 345
undef($memory_6);
#line 346
$memory_6 = c_rt_lib::to_nl(1);
#line 346
$memory_7 = $memory_6;
#line 346
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 346
undef($memory_6);
#line 346
undef($memory_7);
#line 347
$memory_6 = $memory_4->{'cmd'};
#line 347
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 347
undef($memory_6);
#line 348
$memory_6 = $memory_4->{'iter'};
#line 348
module_checker_priv::check_val($memory_6, $memory_1);
#line 348
undef($memory_6);
#line 349
module_checker_priv::load_block($memory_1, $memory_5);
#line 350
$memory_6 = c_rt_lib::to_nl(0);
#line 350
$memory_7 = "return";
#line 350
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 350
$memory_8 = $memory_6;
#line 350
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 350
$memory_9 = "return";
#line 350
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 350
undef($memory_9);
#line 350
undef($memory_6);
#line 350
undef($memory_7);
#line 350
undef($memory_8);
#line 350
undef($memory_5);
#line 350
undef($memory_4);
#line 351
goto label_3;
#line 351
label_6:
#line 351
$memory_4 = c_rt_lib::ov_as($memory_2, 'fora');
#line 352
$memory_5 = module_checker_priv::save_block($memory_1);
#line 353
$memory_6 = $memory_4->{'array'};
#line 353
module_checker_priv::check_val($memory_6, $memory_1);
#line 353
undef($memory_6);
#line 354
$memory_6 = $memory_4->{'iter'};
#line 354
$memory_7 = c_rt_lib::to_nl(1);
#line 354
$memory_8 = c_rt_lib::to_nl(1);
#line 354
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 354
undef($memory_8);
#line 354
undef($memory_7);
#line 354
undef($memory_6);
#line 355
$memory_6 = c_rt_lib::to_nl(1);
#line 355
$memory_7 = $memory_6;
#line 355
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 355
undef($memory_6);
#line 355
undef($memory_7);
#line 356
$memory_6 = $memory_4->{'cmd'};
#line 356
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 356
undef($memory_6);
#line 357
module_checker_priv::load_block($memory_1, $memory_5);
#line 358
$memory_6 = c_rt_lib::to_nl(0);
#line 358
$memory_7 = "return";
#line 358
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 358
$memory_8 = $memory_6;
#line 358
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 358
$memory_9 = "return";
#line 358
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 358
undef($memory_9);
#line 358
undef($memory_6);
#line 358
undef($memory_7);
#line 358
undef($memory_8);
#line 358
undef($memory_5);
#line 358
undef($memory_4);
#line 359
goto label_3;
#line 359
label_7:
#line 359
$memory_4 = c_rt_lib::ov_as($memory_2, 'forh');
#line 360
$memory_5 = module_checker_priv::save_block($memory_1);
#line 361
$memory_6 = $memory_4->{'hash'};
#line 361
module_checker_priv::check_val($memory_6, $memory_1);
#line 361
undef($memory_6);
#line 362
$memory_6 = $memory_4->{'val'};
#line 362
$memory_7 = c_rt_lib::to_nl(1);
#line 362
$memory_8 = c_rt_lib::to_nl(1);
#line 362
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 362
undef($memory_8);
#line 362
undef($memory_7);
#line 362
undef($memory_6);
#line 363
$memory_6 = $memory_4->{'key'};
#line 363
$memory_7 = c_rt_lib::to_nl(1);
#line 363
$memory_8 = c_rt_lib::to_nl(1);
#line 363
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 363
undef($memory_8);
#line 363
undef($memory_7);
#line 363
undef($memory_6);
#line 364
$memory_6 = c_rt_lib::to_nl(1);
#line 364
$memory_7 = $memory_6;
#line 364
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 364
undef($memory_6);
#line 364
undef($memory_7);
#line 365
$memory_6 = $memory_4->{'cmd'};
#line 365
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 365
undef($memory_6);
#line 366
module_checker_priv::load_block($memory_1, $memory_5);
#line 367
$memory_6 = c_rt_lib::to_nl(0);
#line 367
$memory_7 = "return";
#line 367
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 367
$memory_8 = $memory_6;
#line 367
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 367
$memory_9 = "return";
#line 367
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 367
undef($memory_9);
#line 367
undef($memory_6);
#line 367
undef($memory_7);
#line 367
undef($memory_8);
#line 367
undef($memory_5);
#line 367
undef($memory_4);
#line 368
goto label_3;
#line 368
label_8:
#line 368
$memory_4 = c_rt_lib::ov_as($memory_2, 'loop');
#line 369
$memory_5 = module_checker_priv::save_block($memory_1);
#line 370
$memory_6 = c_rt_lib::to_nl(1);
#line 370
$memory_7 = $memory_6;
#line 370
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 370
undef($memory_6);
#line 370
undef($memory_7);
#line 371
module_checker_priv::check_cmd($memory_4, $memory_1);
#line 372
module_checker_priv::load_block($memory_1, $memory_5);
#line 372
undef($memory_5);
#line 372
undef($memory_4);
#line 373
goto label_3;
#line 373
label_9:
#line 373
$memory_4 = c_rt_lib::ov_as($memory_2, 'rep');
#line 374
$memory_5 = module_checker_priv::save_block($memory_1);
#line 375
$memory_6 = $memory_4->{'count'};
#line 375
module_checker_priv::check_val($memory_6, $memory_1);
#line 375
undef($memory_6);
#line 376
$memory_6 = $memory_4->{'iter'};
#line 376
$memory_7 = c_rt_lib::to_nl(1);
#line 376
$memory_8 = c_rt_lib::to_nl(1);
#line 376
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 376
undef($memory_8);
#line 376
undef($memory_7);
#line 376
undef($memory_6);
#line 377
$memory_6 = c_rt_lib::to_nl(1);
#line 377
$memory_7 = $memory_6;
#line 377
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 377
undef($memory_6);
#line 377
undef($memory_7);
#line 378
$memory_6 = $memory_4->{'cmd'};
#line 378
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 378
undef($memory_6);
#line 379
module_checker_priv::load_block($memory_1, $memory_5);
#line 380
$memory_6 = c_rt_lib::to_nl(0);
#line 380
$memory_7 = "return";
#line 380
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 380
$memory_8 = $memory_6;
#line 380
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 380
$memory_9 = "return";
#line 380
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 380
undef($memory_9);
#line 380
undef($memory_6);
#line 380
undef($memory_7);
#line 380
undef($memory_8);
#line 380
undef($memory_5);
#line 380
undef($memory_4);
#line 381
goto label_3;
#line 381
label_10:
#line 381
$memory_4 = c_rt_lib::ov_as($memory_2, 'while');
#line 382
$memory_5 = module_checker_priv::save_block($memory_1);
#line 383
$memory_6 = $memory_4->{'cond'};
#line 383
module_checker_priv::check_val($memory_6, $memory_1);
#line 383
undef($memory_6);
#line 384
$memory_6 = c_rt_lib::to_nl(1);
#line 384
$memory_7 = $memory_6;
#line 384
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'in_loop'} = $memory_7;
#line 384
undef($memory_6);
#line 384
undef($memory_7);
#line 385
$memory_6 = $memory_4->{'cmd'};
#line 385
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 385
undef($memory_6);
#line 386
module_checker_priv::load_block($memory_1, $memory_5);
#line 387
$memory_6 = c_rt_lib::to_nl(0);
#line 387
$memory_7 = "return";
#line 387
$memory_7 = c_rt_lib::get_ref_hash($memory_1, $memory_7);
#line 387
$memory_8 = $memory_6;
#line 387
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'was'} = $memory_8;
#line 387
$memory_9 = "return";
#line 387
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_7);
#line 387
undef($memory_9);
#line 387
undef($memory_6);
#line 387
undef($memory_7);
#line 387
undef($memory_8);
#line 387
undef($memory_5);
#line 387
undef($memory_4);
#line 388
goto label_3;
#line 388
label_11:
#line 388
$memory_4 = c_rt_lib::ov_as($memory_2, 'if_mod');
#line 389
$memory_5 = $memory_4->{'cond'};
#line 389
module_checker_priv::check_val($memory_5, $memory_1);
#line 389
undef($memory_5);
#line 390
$memory_5 = $memory_4->{'cmd'};
#line 390
module_checker_priv::check_cmd($memory_5, $memory_1);
#line 390
undef($memory_5);
#line 391
$memory_5 = c_rt_lib::to_nl(0);
#line 391
$memory_6 = "return";
#line 391
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 391
$memory_7 = $memory_5;
#line 391
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 391
$memory_8 = "return";
#line 391
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 391
undef($memory_8);
#line 391
undef($memory_5);
#line 391
undef($memory_6);
#line 391
undef($memory_7);
#line 391
undef($memory_4);
#line 392
goto label_3;
#line 392
label_12:
#line 392
$memory_4 = c_rt_lib::ov_as($memory_2, 'unless_mod');
#line 393
$memory_5 = $memory_4->{'cond'};
#line 393
module_checker_priv::check_val($memory_5, $memory_1);
#line 393
undef($memory_5);
#line 394
$memory_5 = $memory_4->{'cmd'};
#line 394
module_checker_priv::check_cmd($memory_5, $memory_1);
#line 394
undef($memory_5);
#line 395
$memory_5 = c_rt_lib::to_nl(0);
#line 395
$memory_6 = "return";
#line 395
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 395
$memory_7 = $memory_5;
#line 395
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 395
$memory_8 = "return";
#line 395
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 395
undef($memory_8);
#line 395
undef($memory_5);
#line 395
undef($memory_6);
#line 395
undef($memory_7);
#line 395
undef($memory_4);
#line 396
goto label_3;
#line 396
label_13:
#line 397
$memory_4 = $memory_1->{'in_loop'};
#line 397
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 397
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 397
if (c_rt_lib::check_true($memory_4)) {goto label_35;}
#line 398
$memory_5 = "errors";
#line 398
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 398
$memory_6 = "command break can be used only in cyclic block";
#line 398
module_checker_priv::add_error($memory_5, $memory_6);
#line 398
undef($memory_6);
#line 398
$memory_6 = "errors";
#line 398
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_5);
#line 398
undef($memory_6);
#line 398
undef($memory_5);
#line 399
goto label_35;
#line 399
label_35:
#line 399
undef($memory_4);
#line 400
goto label_3;
#line 400
label_14:
#line 401
$memory_4 = $memory_1->{'in_loop'};
#line 401
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 401
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 401
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 402
$memory_5 = "errors";
#line 402
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 402
$memory_6 = "command continue can be used only in cyclic block";
#line 402
module_checker_priv::add_error($memory_5, $memory_6);
#line 402
undef($memory_6);
#line 402
$memory_6 = "errors";
#line 402
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_5);
#line 402
undef($memory_6);
#line 402
undef($memory_5);
#line 403
goto label_37;
#line 403
label_37:
#line 403
undef($memory_4);
#line 404
goto label_3;
#line 404
label_15:
#line 404
$memory_4 = c_rt_lib::ov_as($memory_2, 'match');
#line 405
$memory_5 = $memory_4->{'val'};
#line 405
module_checker_priv::check_val($memory_5, $memory_1);
#line 405
undef($memory_5);
#line 406
$memory_5 = c_rt_lib::to_nl(1);
#line 407
$memory_6 = $memory_4->{'branch_list'};
#line 407
$memory_8 = 0;
#line 407
$memory_9 = 1;
#line 407
$memory_10 = c_rt_lib::array_len($memory_6);
#line 407
label_40:
#line 407
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 407
if (c_rt_lib::check_true($memory_11)) {goto label_38;}
#line 407
$memory_7 = $memory_6->[$memory_8];
#line 408
$memory_12 = c_rt_lib::to_nl(0);
#line 408
$memory_13 = "return";
#line 408
$memory_13 = c_rt_lib::get_ref_hash($memory_1, $memory_13);
#line 408
$memory_14 = $memory_12;
#line 408
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'was'} = $memory_14;
#line 408
$memory_15 = "return";
#line 408
c_rt_lib::set_ref_hash($memory_1, $memory_15, $memory_13);
#line 408
undef($memory_15);
#line 408
undef($memory_12);
#line 408
undef($memory_13);
#line 408
undef($memory_14);
#line 409
$memory_12 = module_checker_priv::save_block($memory_1);
#line 410
$memory_13 = $memory_7->{'variant'};
#line 410
$memory_13 = $memory_13->{'value'};
#line 410
$memory_14 = c_rt_lib::ov_is($memory_13, 'none');
#line 410
if (c_rt_lib::check_true($memory_14)) {goto label_42;}
#line 411
$memory_14 = c_rt_lib::ov_is($memory_13, 'value');
#line 411
if (c_rt_lib::check_true($memory_14)) {goto label_43;}
#line 411
$memory_14 = "NOMATCHALERT";
#line 411
$memory_14 = [$memory_14,$memory_13];
#line 411
die(dfile::ssave($memory_14));
#line 410
label_42:
#line 411
goto label_41;
#line 411
label_43:
#line 411
$memory_15 = c_rt_lib::ov_as($memory_13, 'value');
#line 412
$memory_16 = c_rt_lib::to_nl(0);
#line 412
$memory_17 = c_rt_lib::to_nl(1);
#line 412
module_checker_priv::add_var_dec($memory_15, $memory_16, $memory_17, $memory_1);
#line 412
undef($memory_17);
#line 412
undef($memory_16);
#line 412
undef($memory_15);
#line 413
goto label_41;
#line 413
label_41:
#line 413
undef($memory_13);
#line 413
undef($memory_14);
#line 414
$memory_13 = $memory_7->{'cmd'};
#line 414
module_checker_priv::check_cmd($memory_13, $memory_1);
#line 414
undef($memory_13);
#line 415
$memory_13 = $memory_1->{'return'};
#line 415
$memory_13 = $memory_13->{'was'};
#line 415
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 415
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 415
if (c_rt_lib::check_true($memory_13)) {goto label_45;}
#line 415
$memory_14 = c_rt_lib::to_nl(0);
#line 415
$memory_5 = $memory_14;
#line 415
undef($memory_14);
#line 415
goto label_45;
#line 415
label_45:
#line 415
undef($memory_13);
#line 416
module_checker_priv::load_block($memory_1, $memory_12);
#line 416
undef($memory_12);
#line 417
$memory_8 = $memory_8 + $memory_9;
#line 417
goto label_40;
#line 417
label_38:
#line 417
undef($memory_6);
#line 417
undef($memory_7);
#line 417
undef($memory_8);
#line 417
undef($memory_9);
#line 417
undef($memory_10);
#line 417
undef($memory_11);
#line 418
$memory_6 = "return";
#line 418
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 418
$memory_7 = $memory_5;
#line 418
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 418
$memory_8 = "return";
#line 418
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 418
undef($memory_8);
#line 418
undef($memory_6);
#line 418
undef($memory_7);
#line 418
undef($memory_5);
#line 418
undef($memory_4);
#line 419
goto label_3;
#line 419
label_16:
#line 419
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 420
module_checker_priv::check_val($memory_4, $memory_1);
#line 420
undef($memory_4);
#line 421
goto label_3;
#line 421
label_17:
#line 421
$memory_4 = c_rt_lib::ov_as($memory_2, 'return');
#line 422
module_checker_priv::check_val($memory_4, $memory_1);
#line 423
$memory_5 = $memory_1->{'return'};
#line 423
$memory_5 = $memory_5->{'arg'};
#line 423
$memory_6 = c_rt_lib::ov_is($memory_5, 'value');
#line 423
if (c_rt_lib::check_true($memory_6)) {goto label_47;}
#line 425
$memory_6 = c_rt_lib::ov_is($memory_5, 'none');
#line 425
if (c_rt_lib::check_true($memory_6)) {goto label_48;}
#line 427
$memory_6 = c_rt_lib::ov_is($memory_5, 'was_value');
#line 427
if (c_rt_lib::check_true($memory_6)) {goto label_49;}
#line 430
$memory_6 = c_rt_lib::ov_is($memory_5, 'was_void');
#line 430
if (c_rt_lib::check_true($memory_6)) {goto label_50;}
#line 433
$memory_6 = c_rt_lib::ov_is($memory_5, 'void');
#line 433
if (c_rt_lib::check_true($memory_6)) {goto label_51;}
#line 433
$memory_6 = "NOMATCHALERT";
#line 433
$memory_6 = [$memory_6,$memory_5];
#line 433
die(dfile::ssave($memory_6));
#line 423
label_47:
#line 424
$memory_7 = $memory_4;
#line 424
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 424
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 424
if (c_rt_lib::check_true($memory_7)) {goto label_53;}
#line 424
$memory_8 = "errors";
#line 424
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 424
$memory_9 = "return command without value";
#line 424
module_checker_priv::add_error($memory_8, $memory_9);
#line 424
undef($memory_9);
#line 424
$memory_9 = "errors";
#line 424
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 424
undef($memory_9);
#line 424
undef($memory_8);
#line 424
goto label_53;
#line 424
label_53:
#line 424
undef($memory_7);
#line 425
goto label_46;
#line 425
label_48:
#line 426
$memory_7 = $memory_4;
#line 426
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 426
if (c_rt_lib::check_true($memory_7)) {goto label_55;}
#line 426
$memory_7 = c_rt_lib::ov_mk_none('was_value');
#line 426
goto label_54;
#line 426
label_55:
#line 426
$memory_7 = c_rt_lib::ov_mk_none('was_void');
#line 426
label_54:
#line 426
$memory_8 = "return";
#line 426
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 426
$memory_9 = $memory_7;
#line 426
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'arg'} = $memory_9;
#line 426
$memory_10 = "return";
#line 426
c_rt_lib::set_ref_hash($memory_1, $memory_10, $memory_8);
#line 426
undef($memory_10);
#line 426
undef($memory_7);
#line 426
undef($memory_8);
#line 426
undef($memory_9);
#line 427
goto label_46;
#line 427
label_49:
#line 428
$memory_7 = $memory_4;
#line 428
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 428
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 428
if (c_rt_lib::check_true($memory_7)) {goto label_57;}
#line 428
$memory_8 = "errors";
#line 428
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 428
$memory_9 = "previously was return with value";
#line 428
module_checker_priv::add_error($memory_8, $memory_9);
#line 428
undef($memory_9);
#line 428
$memory_9 = "errors";
#line 428
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 428
undef($memory_9);
#line 428
undef($memory_8);
#line 428
goto label_57;
#line 428
label_57:
#line 428
undef($memory_7);
#line 429
$memory_7 = $memory_4;
#line 429
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 429
if (c_rt_lib::check_true($memory_7)) {goto label_59;}
#line 429
$memory_7 = c_rt_lib::ov_mk_none('was_value');
#line 429
goto label_58;
#line 429
label_59:
#line 429
$memory_7 = c_rt_lib::ov_mk_none('was_void');
#line 429
label_58:
#line 429
$memory_8 = "return";
#line 429
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 429
$memory_9 = $memory_7;
#line 429
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'arg'} = $memory_9;
#line 429
$memory_10 = "return";
#line 429
c_rt_lib::set_ref_hash($memory_1, $memory_10, $memory_8);
#line 429
undef($memory_10);
#line 429
undef($memory_7);
#line 429
undef($memory_8);
#line 429
undef($memory_9);
#line 430
goto label_46;
#line 430
label_50:
#line 431
$memory_7 = $memory_4;
#line 431
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 431
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 431
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 431
if (c_rt_lib::check_true($memory_7)) {goto label_61;}
#line 431
$memory_8 = "errors";
#line 431
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 431
$memory_9 = "previously was empty return";
#line 431
module_checker_priv::add_error($memory_8, $memory_9);
#line 431
undef($memory_9);
#line 431
$memory_9 = "errors";
#line 431
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 431
undef($memory_9);
#line 431
undef($memory_8);
#line 431
goto label_61;
#line 431
label_61:
#line 431
undef($memory_7);
#line 432
$memory_7 = $memory_4;
#line 432
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 432
if (c_rt_lib::check_true($memory_7)) {goto label_63;}
#line 432
$memory_7 = c_rt_lib::ov_mk_none('was_value');
#line 432
goto label_62;
#line 432
label_63:
#line 432
$memory_7 = c_rt_lib::ov_mk_none('was_void');
#line 432
label_62:
#line 432
$memory_8 = "return";
#line 432
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 432
$memory_9 = $memory_7;
#line 432
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'arg'} = $memory_9;
#line 432
$memory_10 = "return";
#line 432
c_rt_lib::set_ref_hash($memory_1, $memory_10, $memory_8);
#line 432
undef($memory_10);
#line 432
undef($memory_7);
#line 432
undef($memory_8);
#line 432
undef($memory_9);
#line 433
goto label_46;
#line 433
label_51:
#line 434
$memory_7 = $memory_4;
#line 434
$memory_7 = c_rt_lib::ov_is($memory_7, 'nop');
#line 434
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 434
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 434
if (c_rt_lib::check_true($memory_7)) {goto label_65;}
#line 434
$memory_8 = "errors";
#line 434
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 434
$memory_9 = "return value in void function";
#line 434
module_checker_priv::add_error($memory_8, $memory_9);
#line 434
undef($memory_9);
#line 434
$memory_9 = "errors";
#line 434
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 434
undef($memory_9);
#line 434
undef($memory_8);
#line 434
goto label_65;
#line 434
label_65:
#line 434
undef($memory_7);
#line 435
goto label_46;
#line 435
label_46:
#line 435
undef($memory_5);
#line 435
undef($memory_6);
#line 436
$memory_5 = c_rt_lib::to_nl(1);
#line 436
$memory_6 = "return";
#line 436
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 436
$memory_7 = $memory_5;
#line 436
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 436
$memory_8 = "return";
#line 436
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 436
undef($memory_8);
#line 436
undef($memory_5);
#line 436
undef($memory_6);
#line 436
undef($memory_7);
#line 436
undef($memory_4);
#line 437
goto label_3;
#line 437
label_18:
#line 437
$memory_4 = c_rt_lib::ov_as($memory_2, 'block');
#line 438
$memory_5 = module_checker_priv::save_block($memory_1);
#line 439
$memory_7 = 0;
#line 439
$memory_8 = 1;
#line 439
$memory_9 = c_rt_lib::array_len($memory_4);
#line 439
label_68:
#line 439
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 439
if (c_rt_lib::check_true($memory_10)) {goto label_66;}
#line 439
$memory_6 = $memory_4->[$memory_7];
#line 440
module_checker_priv::check_cmd($memory_6, $memory_1);
#line 441
$memory_7 = $memory_7 + $memory_8;
#line 441
goto label_68;
#line 441
label_66:
#line 441
undef($memory_6);
#line 441
undef($memory_7);
#line 441
undef($memory_8);
#line 441
undef($memory_9);
#line 441
undef($memory_10);
#line 442
module_checker_priv::load_block($memory_1, $memory_5);
#line 442
undef($memory_5);
#line 442
undef($memory_4);
#line 443
goto label_3;
#line 443
label_19:
#line 443
$memory_4 = c_rt_lib::ov_as($memory_2, 'die');
#line 444
$memory_6 = 0;
#line 444
$memory_7 = 1;
#line 444
$memory_8 = c_rt_lib::array_len($memory_4);
#line 444
label_71:
#line 444
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 444
if (c_rt_lib::check_true($memory_9)) {goto label_69;}
#line 444
$memory_5 = $memory_4->[$memory_6];
#line 445
module_checker_priv::check_val($memory_5, $memory_1);
#line 446
$memory_6 = $memory_6 + $memory_7;
#line 446
goto label_71;
#line 446
label_69:
#line 446
undef($memory_5);
#line 446
undef($memory_6);
#line 446
undef($memory_7);
#line 446
undef($memory_8);
#line 446
undef($memory_9);
#line 447
$memory_5 = c_rt_lib::to_nl(1);
#line 447
$memory_6 = "return";
#line 447
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 447
$memory_7 = $memory_5;
#line 447
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'was'} = $memory_7;
#line 447
$memory_8 = "return";
#line 447
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 447
undef($memory_8);
#line 447
undef($memory_5);
#line 447
undef($memory_6);
#line 447
undef($memory_7);
#line 447
undef($memory_4);
#line 448
goto label_3;
#line 448
label_20:
#line 448
$memory_4 = c_rt_lib::ov_as($memory_2, 'var_decl');
#line 449
$memory_5 = c_rt_lib::to_nl(0);
#line 449
$memory_6 = c_rt_lib::to_nl(0);
#line 449
module_checker_priv::add_var_dec($memory_4, $memory_5, $memory_6, $memory_1);
#line 449
undef($memory_6);
#line 449
undef($memory_5);
#line 449
undef($memory_4);
#line 450
goto label_3;
#line 450
label_21:
#line 450
$memory_4 = c_rt_lib::ov_as($memory_2, 'try');
#line 451
$memory_5 = c_rt_lib::ov_is($memory_4, 'decl');
#line 451
if (c_rt_lib::check_true($memory_5)) {goto label_73;}
#line 453
$memory_5 = c_rt_lib::ov_is($memory_4, 'lval');
#line 453
if (c_rt_lib::check_true($memory_5)) {goto label_74;}
#line 455
$memory_5 = c_rt_lib::ov_is($memory_4, 'expr');
#line 455
if (c_rt_lib::check_true($memory_5)) {goto label_75;}
#line 455
$memory_5 = "NOMATCHALERT";
#line 455
$memory_5 = [$memory_5,$memory_4];
#line 455
die(dfile::ssave($memory_5));
#line 451
label_73:
#line 451
$memory_6 = c_rt_lib::ov_as($memory_4, 'decl');
#line 452
$memory_7 = c_rt_lib::to_nl(0);
#line 452
$memory_8 = c_rt_lib::to_nl(0);
#line 452
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 452
undef($memory_8);
#line 452
undef($memory_7);
#line 452
undef($memory_6);
#line 453
goto label_72;
#line 453
label_74:
#line 453
$memory_6 = c_rt_lib::ov_as($memory_4, 'lval');
#line 454
$memory_7 = c_rt_lib::ov_mk_arg('bin_op', $memory_6);
#line 454
module_checker_priv::check_val($memory_7, $memory_1);
#line 454
undef($memory_7);
#line 454
undef($memory_6);
#line 455
goto label_72;
#line 455
label_75:
#line 455
$memory_6 = c_rt_lib::ov_as($memory_4, 'expr');
#line 456
module_checker_priv::check_val($memory_6, $memory_1);
#line 456
undef($memory_6);
#line 457
goto label_72;
#line 457
label_72:
#line 457
undef($memory_5);
#line 457
undef($memory_4);
#line 458
goto label_3;
#line 458
label_22:
#line 458
$memory_4 = c_rt_lib::ov_as($memory_2, 'ensure');
#line 459
$memory_5 = c_rt_lib::ov_is($memory_4, 'decl');
#line 459
if (c_rt_lib::check_true($memory_5)) {goto label_77;}
#line 461
$memory_5 = c_rt_lib::ov_is($memory_4, 'lval');
#line 461
if (c_rt_lib::check_true($memory_5)) {goto label_78;}
#line 463
$memory_5 = c_rt_lib::ov_is($memory_4, 'expr');
#line 463
if (c_rt_lib::check_true($memory_5)) {goto label_79;}
#line 463
$memory_5 = "NOMATCHALERT";
#line 463
$memory_5 = [$memory_5,$memory_4];
#line 463
die(dfile::ssave($memory_5));
#line 459
label_77:
#line 459
$memory_6 = c_rt_lib::ov_as($memory_4, 'decl');
#line 460
$memory_7 = c_rt_lib::to_nl(0);
#line 460
$memory_8 = c_rt_lib::to_nl(0);
#line 460
module_checker_priv::add_var_dec($memory_6, $memory_7, $memory_8, $memory_1);
#line 460
undef($memory_8);
#line 460
undef($memory_7);
#line 460
undef($memory_6);
#line 461
goto label_76;
#line 461
label_78:
#line 461
$memory_6 = c_rt_lib::ov_as($memory_4, 'lval');
#line 462
$memory_7 = c_rt_lib::ov_mk_arg('bin_op', $memory_6);
#line 462
module_checker_priv::check_val($memory_7, $memory_1);
#line 462
undef($memory_7);
#line 462
undef($memory_6);
#line 463
goto label_76;
#line 463
label_79:
#line 463
$memory_6 = c_rt_lib::ov_as($memory_4, 'expr');
#line 464
module_checker_priv::check_val($memory_6, $memory_1);
#line 464
undef($memory_6);
#line 465
goto label_76;
#line 465
label_76:
#line 465
undef($memory_5);
#line 465
undef($memory_4);
#line 466
goto label_3;
#line 466
label_23:
#line 467
goto label_3;
#line 467
label_3:
#line 467
undef($memory_2);
#line 467
undef($memory_3);
#line 467
undef($memory_0);
#line 467
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::check_lvalue($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 471
$memory_2 = $memory_0;
#line 471
$memory_2 = c_rt_lib::ov_is($memory_2, 'var');
#line 471
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 471
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 472
$memory_3 = $memory_0;
#line 472
$memory_3 = c_rt_lib::ov_as($memory_3, 'var');
#line 472
$memory_4 = c_rt_lib::ov_mk_none('mod');
#line 472
module_checker_priv::use_var($memory_3, $memory_4, $memory_1);
#line 472
undef($memory_4);
#line 472
undef($memory_3);
#line 473
undef($memory_0);
#line 473
undef($memory_2);
#line 473
$_[1] = $memory_1;return;
#line 474
goto label_3;
#line 474
label_2:
#line 474
$memory_2 = $memory_0;
#line 474
$memory_2 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 474
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 474
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 475
$memory_3 = $memory_0;
#line 475
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 476
$memory_4 = $memory_3->{'op'};
#line 476
$memory_5 = "->";
#line 476
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 476
undef($memory_5);
#line 476
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 476
$memory_4 = $memory_3->{'op'};
#line 476
$memory_5 = "ARRAY_INDEX";
#line 476
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 476
undef($memory_5);
#line 476
label_6:
#line 476
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 476
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 477
$memory_5 = $memory_3->{'left'};
#line 477
module_checker_priv::check_lvalue($memory_5, $memory_1);
#line 477
undef($memory_5);
#line 478
$memory_5 = $memory_3->{'right'};
#line 478
module_checker_priv::check_val($memory_5, $memory_1);
#line 478
undef($memory_5);
#line 479
undef($memory_0);
#line 479
undef($memory_2);
#line 479
undef($memory_3);
#line 479
undef($memory_4);
#line 479
$_[1] = $memory_1;return;
#line 480
goto label_5;
#line 480
label_5:
#line 480
undef($memory_4);
#line 480
undef($memory_3);
#line 481
goto label_3;
#line 481
label_3:
#line 481
undef($memory_2);
#line 482
$memory_2 = "errors";
#line 482
$memory_2 = c_rt_lib::get_ref_hash($memory_1, $memory_2);
#line 482
$memory_3 = "invalid expression for lvalue";
#line 482
module_checker_priv::add_error($memory_2, $memory_3);
#line 482
undef($memory_3);
#line 482
$memory_3 = "errors";
#line 482
c_rt_lib::set_ref_hash($memory_1, $memory_3, $memory_2);
#line 482
undef($memory_3);
#line 482
undef($memory_2);
#line 482
undef($memory_0);
#line 482
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::check_val($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 486
$memory_2 = c_rt_lib::ov_is($memory_0, 'ternary_op');
#line 486
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 490
$memory_2 = c_rt_lib::ov_is($memory_0, 'parenthesis');
#line 490
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 492
$memory_2 = c_rt_lib::ov_is($memory_0, 'variant');
#line 492
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 494
$memory_2 = c_rt_lib::ov_is($memory_0, 'const');
#line 494
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 495
$memory_2 = c_rt_lib::ov_is($memory_0, 'string');
#line 495
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 496
$memory_2 = c_rt_lib::ov_is($memory_0, 'nop');
#line 496
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 497
$memory_2 = c_rt_lib::ov_is($memory_0, 'hash_key');
#line 497
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 498
$memory_2 = c_rt_lib::ov_is($memory_0, 'arr_decl');
#line 498
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 502
$memory_2 = c_rt_lib::ov_is($memory_0, 'hash_decl');
#line 502
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 507
$memory_2 = c_rt_lib::ov_is($memory_0, 'var');
#line 507
if (c_rt_lib::check_true($memory_2)) {goto label_11;}
#line 509
$memory_2 = c_rt_lib::ov_is($memory_0, 'bin_op');
#line 509
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 521
$memory_2 = c_rt_lib::ov_is($memory_0, 'var_op');
#line 521
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 523
$memory_2 = c_rt_lib::ov_is($memory_0, 'unary_op');
#line 523
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 525
$memory_2 = c_rt_lib::ov_is($memory_0, 'fun_label');
#line 525
if (c_rt_lib::check_true($memory_2)) {goto label_15;}
#line 527
$memory_2 = c_rt_lib::ov_is($memory_0, 'fun_val');
#line 527
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 536
$memory_2 = c_rt_lib::ov_is($memory_0, 'post_inc');
#line 536
if (c_rt_lib::check_true($memory_2)) {goto label_17;}
#line 538
$memory_2 = c_rt_lib::ov_is($memory_0, 'post_dec');
#line 538
if (c_rt_lib::check_true($memory_2)) {goto label_18;}
#line 538
$memory_2 = "NOMATCHALERT";
#line 538
$memory_2 = [$memory_2,$memory_0];
#line 538
die(dfile::ssave($memory_2));
#line 486
label_2:
#line 486
$memory_3 = c_rt_lib::ov_as($memory_0, 'ternary_op');
#line 487
$memory_4 = $memory_3->{'fst'};
#line 487
module_checker_priv::check_val($memory_4, $memory_1);
#line 487
undef($memory_4);
#line 488
$memory_4 = $memory_3->{'snd'};
#line 488
module_checker_priv::check_val($memory_4, $memory_1);
#line 488
undef($memory_4);
#line 489
$memory_4 = $memory_3->{'thrd'};
#line 489
module_checker_priv::check_val($memory_4, $memory_1);
#line 489
undef($memory_4);
#line 489
undef($memory_3);
#line 490
goto label_1;
#line 490
label_3:
#line 490
$memory_3 = c_rt_lib::ov_as($memory_0, 'parenthesis');
#line 491
module_checker_priv::check_val($memory_3, $memory_1);
#line 491
undef($memory_3);
#line 492
goto label_1;
#line 492
label_4:
#line 492
$memory_3 = c_rt_lib::ov_as($memory_0, 'variant');
#line 493
$memory_4 = $memory_3->{'var'};
#line 493
module_checker_priv::check_val($memory_4, $memory_1);
#line 493
undef($memory_4);
#line 493
undef($memory_3);
#line 494
goto label_1;
#line 494
label_5:
#line 494
$memory_3 = c_rt_lib::ov_as($memory_0, 'const');
#line 494
undef($memory_3);
#line 495
goto label_1;
#line 495
label_6:
#line 495
$memory_3 = c_rt_lib::ov_as($memory_0, 'string');
#line 495
undef($memory_3);
#line 496
goto label_1;
#line 496
label_7:
#line 497
goto label_1;
#line 497
label_8:
#line 497
$memory_3 = c_rt_lib::ov_as($memory_0, 'hash_key');
#line 497
undef($memory_3);
#line 498
goto label_1;
#line 498
label_9:
#line 498
$memory_3 = c_rt_lib::ov_as($memory_0, 'arr_decl');
#line 499
$memory_5 = 0;
#line 499
$memory_6 = 1;
#line 499
$memory_7 = c_rt_lib::array_len($memory_3);
#line 499
label_21:
#line 499
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 499
if (c_rt_lib::check_true($memory_8)) {goto label_19;}
#line 499
$memory_4 = $memory_3->[$memory_5];
#line 500
module_checker_priv::check_val($memory_4, $memory_1);
#line 501
$memory_5 = $memory_5 + $memory_6;
#line 501
goto label_21;
#line 501
label_19:
#line 501
undef($memory_4);
#line 501
undef($memory_5);
#line 501
undef($memory_6);
#line 501
undef($memory_7);
#line 501
undef($memory_8);
#line 501
undef($memory_3);
#line 502
goto label_1;
#line 502
label_10:
#line 502
$memory_3 = c_rt_lib::ov_as($memory_0, 'hash_decl');
#line 503
$memory_5 = 0;
#line 503
$memory_6 = 1;
#line 503
$memory_7 = c_rt_lib::array_len($memory_3);
#line 503
label_24:
#line 503
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 503
if (c_rt_lib::check_true($memory_8)) {goto label_22;}
#line 503
$memory_4 = $memory_3->[$memory_5];
#line 505
$memory_9 = $memory_4->{'val'};
#line 505
module_checker_priv::check_val($memory_9, $memory_1);
#line 505
undef($memory_9);
#line 506
$memory_5 = $memory_5 + $memory_6;
#line 506
goto label_24;
#line 506
label_22:
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
undef($memory_3);
#line 507
goto label_1;
#line 507
label_11:
#line 507
$memory_3 = c_rt_lib::ov_as($memory_0, 'var');
#line 508
$memory_4 = c_rt_lib::ov_mk_none('get');
#line 508
module_checker_priv::use_var($memory_3, $memory_4, $memory_1);
#line 508
undef($memory_4);
#line 508
undef($memory_3);
#line 509
goto label_1;
#line 509
label_12:
#line 509
$memory_3 = c_rt_lib::ov_as($memory_0, 'bin_op');
#line 510
$memory_4 = $memory_3->{'op'};
#line 511
$memory_5 = "=";
#line 511
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 511
if (c_rt_lib::check_true($memory_5)) {goto label_31;}
#line 511
$memory_5 = "+=";
#line 511
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 511
label_31:
#line 511
if (c_rt_lib::check_true($memory_5)) {goto label_30;}
#line 511
$memory_5 = "-=";
#line 511
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 511
label_30:
#line 511
if (c_rt_lib::check_true($memory_5)) {goto label_29;}
#line 511
$memory_5 = "*=";
#line 511
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 511
label_29:
#line 511
if (c_rt_lib::check_true($memory_5)) {goto label_28;}
#line 511
$memory_5 = "/=";
#line 511
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 511
label_28:
#line 511
if (c_rt_lib::check_true($memory_5)) {goto label_27;}
#line 511
$memory_5 = ".=";
#line 511
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 511
label_27:
#line 511
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 511
if (c_rt_lib::check_true($memory_5)) {goto label_26;}
#line 512
$memory_6 = $memory_3->{'left'};
#line 512
$memory_6 = c_rt_lib::ov_is($memory_6, 'var');
#line 512
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 512
if (c_rt_lib::check_true($memory_7)) {goto label_34;}
#line 512
$memory_6 = "=";
#line 512
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 512
label_34:
#line 512
undef($memory_7);
#line 512
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 512
if (c_rt_lib::check_true($memory_6)) {goto label_33;}
#line 513
$memory_7 = $memory_3->{'left'};
#line 513
$memory_7 = c_rt_lib::ov_as($memory_7, 'var');
#line 513
$memory_8 = c_rt_lib::ov_mk_none('set');
#line 513
module_checker_priv::use_var($memory_7, $memory_8, $memory_1);
#line 513
undef($memory_8);
#line 513
undef($memory_7);
#line 514
goto label_32;
#line 514
label_33:
#line 515
$memory_7 = $memory_3->{'left'};
#line 515
module_checker_priv::check_lvalue($memory_7, $memory_1);
#line 515
undef($memory_7);
#line 516
goto label_32;
#line 516
label_32:
#line 516
undef($memory_6);
#line 517
goto label_25;
#line 517
label_26:
#line 518
$memory_6 = $memory_3->{'left'};
#line 518
module_checker_priv::check_val($memory_6, $memory_1);
#line 518
undef($memory_6);
#line 519
goto label_25;
#line 519
label_25:
#line 519
undef($memory_5);
#line 520
$memory_5 = $memory_3->{'right'};
#line 520
module_checker_priv::check_val($memory_5, $memory_1);
#line 520
undef($memory_5);
#line 520
undef($memory_4);
#line 520
undef($memory_3);
#line 521
goto label_1;
#line 521
label_13:
#line 521
$memory_3 = c_rt_lib::ov_as($memory_0, 'var_op');
#line 522
$memory_4 = $memory_3->{'left'};
#line 522
module_checker_priv::check_val($memory_4, $memory_1);
#line 522
undef($memory_4);
#line 522
undef($memory_3);
#line 523
goto label_1;
#line 523
label_14:
#line 523
$memory_3 = c_rt_lib::ov_as($memory_0, 'unary_op');
#line 524
$memory_4 = $memory_3->{'val'};
#line 524
module_checker_priv::check_val($memory_4, $memory_1);
#line 524
undef($memory_4);
#line 524
undef($memory_3);
#line 525
goto label_1;
#line 525
label_15:
#line 525
$memory_3 = c_rt_lib::ov_as($memory_0, 'fun_label');
#line 526
$memory_4 = $memory_3->{'module'};
#line 526
$memory_5 = $memory_3->{'name'};
#line 526
module_checker_priv::add_fun_used($memory_4, $memory_5, $memory_1);
#line 526
undef($memory_5);
#line 526
undef($memory_4);
#line 526
undef($memory_3);
#line 527
goto label_1;
#line 527
label_16:
#line 527
$memory_3 = c_rt_lib::ov_as($memory_0, 'fun_val');
#line 528
$memory_4 = $memory_3->{'args'};
#line 528
$memory_6 = 0;
#line 528
$memory_7 = 1;
#line 528
$memory_8 = c_rt_lib::array_len($memory_4);
#line 528
label_37:
#line 528
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 528
if (c_rt_lib::check_true($memory_9)) {goto label_35;}
#line 528
$memory_5 = $memory_4->[$memory_6];
#line 529
$memory_10 = $memory_5->{'mod'};
#line 529
$memory_11 = c_rt_lib::ov_is($memory_10, 'none');
#line 529
if (c_rt_lib::check_true($memory_11)) {goto label_39;}
#line 531
$memory_11 = c_rt_lib::ov_is($memory_10, 'ref');
#line 531
if (c_rt_lib::check_true($memory_11)) {goto label_40;}
#line 531
$memory_11 = "NOMATCHALERT";
#line 531
$memory_11 = [$memory_11,$memory_10];
#line 531
die(dfile::ssave($memory_11));
#line 529
label_39:
#line 530
$memory_12 = $memory_5->{'val'};
#line 530
module_checker_priv::check_val($memory_12, $memory_1);
#line 530
undef($memory_12);
#line 531
goto label_38;
#line 531
label_40:
#line 532
$memory_12 = $memory_5->{'val'};
#line 532
module_checker_priv::check_lvalue($memory_12, $memory_1);
#line 532
undef($memory_12);
#line 533
goto label_38;
#line 533
label_38:
#line 533
undef($memory_10);
#line 533
undef($memory_11);
#line 534
$memory_6 = $memory_6 + $memory_7;
#line 534
goto label_37;
#line 534
label_35:
#line 534
undef($memory_4);
#line 534
undef($memory_5);
#line 534
undef($memory_6);
#line 534
undef($memory_7);
#line 534
undef($memory_8);
#line 534
undef($memory_9);
#line 535
$memory_4 = $memory_3->{'module'};
#line 535
$memory_5 = $memory_3->{'name'};
#line 535
module_checker_priv::add_fun_used($memory_4, $memory_5, $memory_1);
#line 535
undef($memory_5);
#line 535
undef($memory_4);
#line 535
undef($memory_3);
#line 536
goto label_1;
#line 536
label_17:
#line 536
$memory_3 = c_rt_lib::ov_as($memory_0, 'post_inc');
#line 537
module_checker_priv::check_val($memory_3, $memory_1);
#line 537
undef($memory_3);
#line 538
goto label_1;
#line 538
label_18:
#line 538
$memory_3 = c_rt_lib::ov_as($memory_0, 'post_dec');
#line 539
module_checker_priv::check_val($memory_3, $memory_1);
#line 539
undef($memory_3);
#line 540
goto label_1;
#line 540
label_1:
#line 540
undef($memory_2);
#line 540
undef($memory_0);
#line 540
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub module_checker_priv::save_block($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 544
$memory_2 = $memory_0->{'in_loop'};
#line 544
$memory_3 = $memory_0->{'vars'};
#line 544
$memory_1 = {in_loop => $memory_2,vars => $memory_3,};
#line 544
undef($memory_2);
#line 544
undef($memory_3);
#line 544
$_[0] = $memory_0;return $memory_1;
#line 544
undef($memory_1);
#line 544
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub module_checker_priv::load_block($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 548
$memory_2 = $memory_1->{'in_loop'};
#line 548
$memory_3 = $memory_2;
#line 548
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'in_loop'} = $memory_3;
#line 548
undef($memory_2);
#line 548
undef($memory_3);
#line 549
$memory_3 = $memory_0->{'vars'};
#line 549
$memory_2 = hash::keys($memory_3);
#line 549
undef($memory_3);
#line 550
$memory_4 = 0;
#line 550
$memory_5 = 1;
#line 550
$memory_6 = c_rt_lib::array_len($memory_2);
#line 550
label_3:
#line 550
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 550
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 550
$memory_3 = $memory_2->[$memory_4];
#line 551
$memory_9 = $memory_1->{'vars'};
#line 551
$memory_8 = hash::has_key($memory_9, $memory_3);
#line 551
undef($memory_9);
#line 551
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 551
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 551
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 552
$memory_10 = $memory_0->{'vars'};
#line 552
$memory_9 = hash::get_value($memory_10, $memory_3);
#line 552
undef($memory_10);
#line 553
$memory_10 = "vars";
#line 553
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 553
hash::delete($memory_10, $memory_3);
#line 553
$memory_11 = "vars";
#line 553
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 553
undef($memory_11);
#line 553
undef($memory_10);
#line 554
$memory_10 = $memory_9->{'read'};
#line 554
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 554
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 554
if (c_rt_lib::check_true($memory_11)) {goto label_8;}
#line 554
$memory_10 = $memory_9->{'is_required'};
#line 554
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 554
label_8:
#line 554
undef($memory_11);
#line 554
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 554
if (c_rt_lib::check_true($memory_10)) {goto label_7;}
#line 555
$memory_11 = "errors";
#line 555
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 555
$memory_12 = "never read variable: ";
#line 555
$memory_12 = $memory_12 . $memory_3;
#line 555
module_checker_priv::add_warning($memory_11, $memory_12);
#line 555
undef($memory_12);
#line 555
$memory_12 = "errors";
#line 555
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_11);
#line 555
undef($memory_12);
#line 555
undef($memory_11);
#line 556
goto label_7;
#line 556
label_7:
#line 556
undef($memory_10);
#line 556
undef($memory_9);
#line 557
goto label_5;
#line 557
label_5:
#line 557
undef($memory_8);
#line 558
$memory_4 = $memory_4 + $memory_5;
#line 558
goto label_3;
#line 558
label_1:
#line 558
undef($memory_3);
#line 558
undef($memory_4);
#line 558
undef($memory_5);
#line 558
undef($memory_6);
#line 558
undef($memory_7);
#line 558
undef($memory_2);
#line 558
undef($memory_1);
#line 558
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
