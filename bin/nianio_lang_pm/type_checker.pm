use c_rt_lib;
use array;
use ptd;
use tct;
use tc_types;
use hash;
use enum;
use string;
use boolean_t;
use nast;
use ptd_parser;
use ptd_system;
use singleton;
sub type_checker_priv::type_to_ptd;
sub type_checker_priv::get_fun_def_key;
sub type_checker_priv::get_fun_key;
sub type_checker_priv::return_type_to_tct;
sub type_checker_priv::check_types_imported;
sub type_checker_priv::prepare_def_fun;
sub type_checker::check;
sub type_checker::check_modules;
sub type_checker_priv::check_module;
sub type_checker_priv::join_vars;
sub type_checker_priv::set_end_function;
sub type_checker_priv::check_cmd;
sub type_checker_priv::break_continue_block;
sub type_checker_priv::check_try_ensure;
sub type_checker_priv::check_forh;
sub type_checker_priv::check_fora;
sub type_checker_priv::check_while;
sub type_checker_priv::check_rep;
sub type_checker_priv::check_match;
sub type_checker_priv::check_val;
sub type_checker_priv::unary_op_dec_inc;
sub type_checker_priv::get_special_functions;
sub type_checker_priv::get_special_function_def;
sub type_checker_priv::check_special_function;
sub type_checker_priv::rec_get_var_from_lval;
sub type_checker_priv::mk_new_type_lval;
sub type_checker_priv::set_type_to_lval;
sub type_checker_priv::set_type_to_lval_spec;
sub type_checker_priv::get_type_left_site_equation;
sub type_checker_priv::get_type_record_key;
sub type_checker_priv::get_type_from_bin_op_and_check;
sub type_checker_priv::get_print_tct_type_name;
sub type_checker_priv::get_print_tct_label;
sub type_checker_priv::get_print_check_info;
sub type_checker_priv::check_var_decl;
sub type_checker_priv::check_var_decl_try;
sub type_checker_priv::add_var_to_vars;
sub type_checker_priv::add_var_decl_to_vars;
sub type_checker_priv::add_var_decl_with_type_and_check;
sub type_checker_priv::is_known;
sub type_checker_priv::get_function_name;
sub type_checker_priv::get_fun_module;
sub type_checker_priv::get_function_def;
sub type_checker_priv::check_function_exists;
sub type_checker_priv::add_error;
sub type_checker_priv::add_warning;

return 1;

sub type_checker_priv::type_to_ptd($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 20
$memory_2 = c_rt_lib::ov_is($memory_0, 'type');
#line 20
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 27
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 27
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 27
$memory_2 = "NOMATCHALERT";
#line 27
$memory_2 = [$memory_2,$memory_0];
#line 27
die(dfile::ssave($memory_2));
#line 20
label_2:
#line 20
$memory_3 = c_rt_lib::ov_as($memory_0, 'type');
#line 21
$memory_4 = ptd_parser::try_value_to_ptd($memory_3);
#line 21
$memory_5 = c_rt_lib::ov_is($memory_4, 'err');
#line 21
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 24
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 24
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 24
$memory_5 = "NOMATCHALERT";
#line 24
$memory_5 = [$memory_5,$memory_4];
#line 24
die(dfile::ssave($memory_5));
#line 21
label_5:
#line 21
$memory_6 = c_rt_lib::ov_as($memory_4, 'err');
#line 22
type_checker_priv::add_error($memory_1, $memory_6);
#line 23
$memory_7 = tct::tct_im();
#line 23
undef($memory_0);
#line 23
undef($memory_2);
#line 23
undef($memory_3);
#line 23
undef($memory_4);
#line 23
undef($memory_5);
#line 23
undef($memory_6);
#line 23
$_[1] = $memory_1;return $memory_7;
#line 23
undef($memory_7);
#line 23
undef($memory_6);
#line 24
goto label_4;
#line 24
label_6:
#line 24
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 25
undef($memory_0);
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 25
undef($memory_4);
#line 25
undef($memory_5);
#line 25
$_[1] = $memory_1;return $memory_6;
#line 25
undef($memory_6);
#line 26
goto label_4;
#line 26
label_4:
#line 26
undef($memory_4);
#line 26
undef($memory_5);
#line 26
undef($memory_3);
#line 27
goto label_1;
#line 27
label_3:
#line 28
$memory_3 = tct::tct_im();
#line 28
undef($memory_0);
#line 28
undef($memory_2);
#line 28
$_[1] = $memory_1;return $memory_3;
#line 28
undef($memory_3);
#line 29
goto label_1;
#line 29
label_1:
#line 29
undef($memory_2);
#line 29
undef($memory_0);
#line 29
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub type_checker_priv::get_fun_def_key($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 33
$memory_1 = $memory_0->{'access'};
#line 33
$memory_2 = c_rt_lib::ov_is($memory_1, 'pub');
#line 33
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 35
$memory_2 = c_rt_lib::ov_is($memory_1, 'priv');
#line 35
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 35
$memory_2 = "NOMATCHALERT";
#line 35
$memory_2 = [$memory_2,$memory_1];
#line 35
die(dfile::ssave($memory_2));
#line 33
label_2:
#line 34
$memory_3 = $memory_0->{'name'};
#line 34
undef($memory_0);
#line 34
undef($memory_1);
#line 34
undef($memory_2);
#line 34
return $memory_3;
#line 34
undef($memory_3);
#line 35
goto label_1;
#line 35
label_3:
#line 36
$memory_3 = "priv::";
#line 36
$memory_4 = $memory_0->{'name'};
#line 36
$memory_3 = $memory_3 . $memory_4;
#line 36
undef($memory_4);
#line 36
undef($memory_0);
#line 36
undef($memory_1);
#line 36
undef($memory_2);
#line 36
return $memory_3;
#line 36
undef($memory_3);
#line 37
goto label_1;
#line 37
label_1:
#line 37
undef($memory_1);
#line 37
undef($memory_2);
#line 37
undef($memory_0);
#line 37
return;
}

sub type_checker_priv::get_fun_key($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 41
$memory_2 = "";
#line 42
$memory_3 = "";
#line 42
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 42
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 42
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 42
$memory_4 = "priv::";
#line 42
$memory_2 = $memory_2 . $memory_4;
#line 42
undef($memory_4);
#line 42
goto label_2;
#line 42
label_2:
#line 42
undef($memory_3);
#line 43
$memory_3 = $memory_2 . $memory_0;
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
undef($memory_2);
#line 43
return $memory_3;
#line 43
undef($memory_3);
#line 43
undef($memory_2);
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
return;
}

sub type_checker_priv::return_type_to_tct($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 47
$memory_2 = c_rt_lib::ov_is($memory_0, 'type');
#line 47
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 55
$memory_2 = c_rt_lib::ov_is($memory_0, 'none');
#line 55
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 55
$memory_2 = "NOMATCHALERT";
#line 55
$memory_2 = [$memory_2,$memory_0];
#line 55
die(dfile::ssave($memory_2));
#line 47
label_2:
#line 47
$memory_3 = c_rt_lib::ov_as($memory_0, 'type');
#line 48
$memory_4 = $memory_3;
#line 48
$memory_4 = c_rt_lib::ov_is($memory_4, 'fun_val');
#line 48
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 48
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 49
$memory_5 = $memory_3;
#line 49
$memory_5 = c_rt_lib::ov_as($memory_5, 'fun_val');
#line 50
$memory_6 = $memory_5->{'module'};
#line 50
$memory_8 = "ptd";
#line 50
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 50
undef($memory_8);
#line 50
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 50
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 50
$memory_6 = $memory_5->{'name'};
#line 50
$memory_8 = "void";
#line 50
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_8);
#line 50
undef($memory_8);
#line 50
label_8:
#line 50
undef($memory_7);
#line 50
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 50
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 51
$memory_7 = tct::void();
#line 51
undef($memory_0);
#line 51
undef($memory_2);
#line 51
undef($memory_3);
#line 51
undef($memory_4);
#line 51
undef($memory_5);
#line 51
undef($memory_6);
#line 51
$_[1] = $memory_1;return $memory_7;
#line 51
undef($memory_7);
#line 52
goto label_7;
#line 52
label_7:
#line 52
undef($memory_6);
#line 52
undef($memory_5);
#line 53
goto label_5;
#line 53
label_5:
#line 53
undef($memory_4);
#line 54
$memory_4 = type_checker_priv::type_to_ptd($memory_0, $memory_1);
#line 54
undef($memory_0);
#line 54
undef($memory_2);
#line 54
undef($memory_3);
#line 54
$_[1] = $memory_1;return $memory_4;
#line 54
undef($memory_4);
#line 54
undef($memory_3);
#line 55
goto label_1;
#line 55
label_3:
#line 56
$memory_3 = tct::tct_im();
#line 56
undef($memory_0);
#line 56
undef($memory_2);
#line 56
$_[1] = $memory_1;return $memory_3;
#line 56
undef($memory_3);
#line 57
goto label_1;
#line 57
label_1:
#line 57
undef($memory_2);
#line 57
undef($memory_0);
#line 57
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub type_checker_priv::check_types_imported($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 62
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 62
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 63
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 63
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 65
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 65
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 67
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 67
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 71
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 71
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 80
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 80
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 81
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 81
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 82
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 82
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 89
$memory_3 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 89
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 89
$memory_3 = "NOMATCHALERT";
#line 89
$memory_3 = [$memory_3,$memory_0];
#line 89
die(dfile::ssave($memory_3));
#line 62
label_2:
#line 63
goto label_1;
#line 63
label_3:
#line 63
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 64
type_checker_priv::check_types_imported($memory_4, $memory_1, $memory_2);
#line 64
undef($memory_4);
#line 65
goto label_1;
#line 65
label_4:
#line 65
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 66
type_checker_priv::check_types_imported($memory_4, $memory_1, $memory_2);
#line 66
undef($memory_4);
#line 67
goto label_1;
#line 67
label_5:
#line 67
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 68
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 68
label_13:
#line 68
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 68
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 68
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 68
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 69
type_checker_priv::check_types_imported($memory_6, $memory_1, $memory_2);
#line 70
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 70
goto label_13;
#line 70
label_11:
#line 70
undef($memory_5);
#line 70
undef($memory_6);
#line 70
undef($memory_7);
#line 70
undef($memory_4);
#line 71
goto label_1;
#line 71
label_6:
#line 71
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 72
$memory_6 = "::";
#line 72
$memory_5 = string::index2($memory_4, $memory_6);
#line 72
undef($memory_6);
#line 73
$memory_6 = 0;
#line 73
$memory_6 = c_rt_lib::to_nl($memory_5 >= $memory_6);
#line 73
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 73
if (c_rt_lib::check_true($memory_6)) {goto label_15;}
#line 74
$memory_8 = 0;
#line 74
$memory_7 = string::substr($memory_4, $memory_8, $memory_5);
#line 74
undef($memory_8);
#line 75
$memory_9 = 2;
#line 75
$memory_9 = $memory_5 + $memory_9;
#line 75
$memory_10 = string::length($memory_4);
#line 75
$memory_10 = $memory_10 - $memory_5;
#line 75
$memory_11 = 2;
#line 75
$memory_10 = $memory_10 - $memory_11;
#line 75
undef($memory_11);
#line 75
$memory_8 = string::substr($memory_4, $memory_9, $memory_10);
#line 75
undef($memory_10);
#line 75
undef($memory_9);
#line 76
type_checker_priv::check_function_exists($memory_7, $memory_8, $memory_1, $memory_2);
#line 76
undef($memory_7);
#line 76
undef($memory_8);
#line 77
goto label_14;
#line 77
label_15:
#line 78
$memory_7 = "wrong type name '";
#line 78
$memory_7 = $memory_7 . $memory_4;
#line 78
$memory_8 = "' ";
#line 78
$memory_7 = $memory_7 . $memory_8;
#line 78
undef($memory_8);
#line 78
type_checker_priv::add_error($memory_2, $memory_7);
#line 78
undef($memory_7);
#line 79
goto label_14;
#line 79
label_14:
#line 79
undef($memory_6);
#line 79
undef($memory_5);
#line 79
undef($memory_4);
#line 80
goto label_1;
#line 80
label_7:
#line 81
goto label_1;
#line 81
label_8:
#line 82
goto label_1;
#line 82
label_9:
#line 82
$memory_4 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 83
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 83
label_18:
#line 83
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 83
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 83
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 83
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 84
$memory_8 = c_rt_lib::ov_is($memory_6, 'no_param');
#line 84
if (c_rt_lib::check_true($memory_8)) {goto label_20;}
#line 85
$memory_8 = c_rt_lib::ov_is($memory_6, 'with_param');
#line 85
if (c_rt_lib::check_true($memory_8)) {goto label_21;}
#line 85
$memory_8 = "NOMATCHALERT";
#line 85
$memory_8 = [$memory_8,$memory_6];
#line 85
die(dfile::ssave($memory_8));
#line 84
label_20:
#line 85
goto label_19;
#line 85
label_21:
#line 85
$memory_9 = c_rt_lib::ov_as($memory_6, 'with_param');
#line 86
type_checker_priv::check_types_imported($memory_9, $memory_1, $memory_2);
#line 86
undef($memory_9);
#line 87
goto label_19;
#line 87
label_19:
#line 87
undef($memory_8);
#line 88
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 88
goto label_18;
#line 88
label_16:
#line 88
undef($memory_5);
#line 88
undef($memory_6);
#line 88
undef($memory_7);
#line 88
undef($memory_4);
#line 89
goto label_1;
#line 89
label_10:
#line 90
goto label_1;
#line 90
label_1:
#line 90
undef($memory_3);
#line 90
undef($memory_0);
#line 90
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub type_checker_priv::prepare_def_fun($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
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
$memory_6 = 1;
#line 96
$memory_6 = -$memory_6;
#line 96
$memory_7 = $memory_6;
#line 96
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'current_line'} = $memory_7;
#line 96
undef($memory_6);
#line 96
undef($memory_7);
#line 97
$memory_6 = $memory_3;
#line 97
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'module'} = $memory_6;
#line 97
undef($memory_6);
#line 98
$memory_6 = {};
#line 99
$memory_7 = $memory_4->{'fun_def'};
#line 99
$memory_9 = 0;
#line 99
$memory_10 = 1;
#line 99
$memory_11 = c_rt_lib::array_len($memory_7);
#line 99
label_6:
#line 99
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 99
if (c_rt_lib::check_true($memory_12)) {goto label_4;}
#line 99
$memory_8 = $memory_7->[$memory_9];
#line 100
$memory_13 = [];
#line 101
$memory_14 = $memory_8->{'args'};
#line 101
$memory_16 = 0;
#line 101
$memory_17 = 1;
#line 101
$memory_18 = c_rt_lib::array_len($memory_14);
#line 101
label_9:
#line 101
$memory_19 = c_rt_lib::to_nl($memory_16 >= $memory_18);
#line 101
if (c_rt_lib::check_true($memory_19)) {goto label_7;}
#line 101
$memory_15 = $memory_14->[$memory_16];
#line 102
$memory_21 = $memory_15->{'name'};
#line 102
$memory_22 = $memory_15->{'mod'};
#line 102
$memory_24 = $memory_15->{'type'};
#line 102
$memory_23 = type_checker_priv::type_to_ptd($memory_24, $memory_1);
#line 102
undef($memory_24);
#line 102
$memory_20 = {name => $memory_21,mod => $memory_22,type => $memory_23,};
#line 102
undef($memory_21);
#line 102
undef($memory_22);
#line 102
undef($memory_23);
#line 102
array::push($memory_13, $memory_20);
#line 102
undef($memory_20);
#line 107
$memory_16 = $memory_16 + $memory_17;
#line 107
goto label_9;
#line 107
label_7:
#line 107
undef($memory_14);
#line 107
undef($memory_15);
#line 107
undef($memory_16);
#line 107
undef($memory_17);
#line 107
undef($memory_18);
#line 107
undef($memory_19);
#line 108
$memory_15 = $memory_8->{'cmd'};
#line 108
$memory_16 = c_rt_lib::ov_mk_none('no');
#line 108
$memory_17 = c_rt_lib::ov_mk_none('no');
#line 108
$memory_18 = $memory_8->{'name'};
#line 108
$memory_19 = $memory_8->{'access'};
#line 108
$memory_21 = $memory_8->{'ret_type'};
#line 108
$memory_20 = type_checker_priv::return_type_to_tct($memory_21, $memory_1);
#line 108
undef($memory_21);
#line 108
$memory_14 = {cmd => $memory_15,is_type => $memory_16,ref_types => $memory_17,name => $memory_18,module => $memory_3,access => $memory_19,args => $memory_13,ret_type => $memory_20,};
#line 108
undef($memory_15);
#line 108
undef($memory_16);
#line 108
undef($memory_17);
#line 108
undef($memory_18);
#line 108
undef($memory_19);
#line 108
undef($memory_20);
#line 118
$memory_15 = type_checker_priv::get_fun_def_key($memory_14);
#line 119
$memory_16 = hash::has_key($memory_6, $memory_15);
#line 119
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 119
if (c_rt_lib::check_true($memory_16)) {goto label_11;}
#line 119
$memory_17 = "redefine function: ";
#line 119
$memory_17 = $memory_17 . $memory_15;
#line 119
type_checker_priv::add_error($memory_1, $memory_17);
#line 119
undef($memory_17);
#line 119
goto label_11;
#line 119
label_11:
#line 119
undef($memory_16);
#line 120
hash::set_value($memory_6, $memory_15, $memory_14);
#line 120
undef($memory_13);
#line 120
undef($memory_14);
#line 120
undef($memory_15);
#line 121
$memory_9 = $memory_9 + $memory_10;
#line 121
goto label_6;
#line 121
label_4:
#line 121
undef($memory_7);
#line 121
undef($memory_8);
#line 121
undef($memory_9);
#line 121
undef($memory_10);
#line 121
undef($memory_11);
#line 121
undef($memory_12);
#line 122
hash::set_value($memory_2, $memory_3, $memory_6);
#line 122
undef($memory_6);
#line 123
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 123
goto label_3;
#line 123
label_1:
#line 123
undef($memory_3);
#line 123
undef($memory_4);
#line 123
undef($memory_5);
#line 124
undef($memory_0);
#line 124
$_[1] = $memory_1;return $memory_2;
#line 124
undef($memory_2);
#line 124
undef($memory_0);
#line 124
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub type_checker::check($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 129
$memory_2 = type_checker::check_modules($memory_0, $memory_1);
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

sub type_checker::check_modules($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 134
$memory_3 = [];
#line 134
$memory_4 = [];
#line 134
$memory_5 = 1;
#line 134
$memory_5 = -$memory_5;
#line 134
$memory_6 = "";
#line 134
$memory_2 = {errors => $memory_3,warnings => $memory_4,current_line => $memory_5,module => $memory_6,};
#line 134
undef($memory_3);
#line 134
undef($memory_4);
#line 134
undef($memory_5);
#line 134
undef($memory_6);
#line 135
$memory_3 = type_checker_priv::prepare_def_fun($memory_1, $memory_2);
#line 136
$memory_5 = [];
#line 136
$memory_6 = [];
#line 136
$memory_4 = {delete => $memory_5,create => $memory_6,};
#line 136
undef($memory_5);
#line 136
undef($memory_6);
#line 137
$memory_7 = c_rt_lib::init_iter($memory_0);
#line 137
label_3:
#line 137
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 137
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 137
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 137
$memory_6 = c_rt_lib::hash_get_value($memory_0, $memory_5);
#line 138
$memory_8 = 1;
#line 138
$memory_8 = -$memory_8;
#line 138
$memory_9 = $memory_8;
#line 138
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'current_line'} = $memory_9;
#line 138
undef($memory_8);
#line 138
undef($memory_9);
#line 139
$memory_8 = $memory_5;
#line 139
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'module'} = $memory_8;
#line 139
undef($memory_8);
#line 140
type_checker_priv::check_module($memory_6, $memory_3, $memory_2, $memory_4);
#line 141
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 141
goto label_3;
#line 141
label_1:
#line 141
undef($memory_5);
#line 141
undef($memory_6);
#line 141
undef($memory_7);
#line 142
$memory_6 = $memory_2->{'errors'};
#line 142
$memory_7 = $memory_2->{'warnings'};
#line 142
$memory_5 = {errors => $memory_6,deref => $memory_4,warnings => $memory_7,};
#line 142
undef($memory_6);
#line 142
undef($memory_7);
#line 142
undef($memory_0);
#line 142
undef($memory_1);
#line 142
undef($memory_2);
#line 142
undef($memory_3);
#line 142
undef($memory_4);
#line 142
return $memory_5;
#line 142
undef($memory_5);
#line 142
undef($memory_2);
#line 142
undef($memory_3);
#line 142
undef($memory_4);
#line 142
undef($memory_0);
#line 142
undef($memory_1);
#line 142
return;
}

sub type_checker_priv::check_module($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 147
$memory_6 = $memory_0->{'name'};
#line 147
$memory_8 = {};
#line 147
$memory_9 = c_rt_lib::to_nl(0);
#line 147
$memory_7 = {vars => $memory_8,is => $memory_9,};
#line 147
undef($memory_8);
#line 147
undef($memory_9);
#line 147
$memory_8 = tct::empty();
#line 147
$memory_5 = {deref => $memory_3,current_module => $memory_6,breaks => $memory_7,ret_type => $memory_8,};
#line 147
undef($memory_6);
#line 147
undef($memory_7);
#line 147
undef($memory_8);
#line 147
$memory_6 = {};
#line 147
$memory_4 = {env => $memory_5,imports => $memory_6,funs => $memory_1,};
#line 147
undef($memory_5);
#line 147
undef($memory_6);
#line 157
$memory_5 = $memory_0->{'import'};
#line 157
$memory_7 = 0;
#line 157
$memory_8 = 1;
#line 157
$memory_9 = c_rt_lib::array_len($memory_5);
#line 157
label_3:
#line 157
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 157
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 157
$memory_6 = $memory_5->[$memory_7];
#line 158
$memory_11 = "imports";
#line 158
$memory_11 = c_rt_lib::get_ref_hash($memory_4, $memory_11);
#line 158
$memory_12 = $memory_6->{'name'};
#line 158
$memory_13 = c_rt_lib::to_nl(1);
#line 158
hash::set_value($memory_11, $memory_12, $memory_13);
#line 158
undef($memory_13);
#line 158
undef($memory_12);
#line 158
$memory_12 = "imports";
#line 158
c_rt_lib::set_ref_hash($memory_4, $memory_12, $memory_11);
#line 158
undef($memory_12);
#line 158
undef($memory_11);
#line 159
$memory_7 = $memory_7 + $memory_8;
#line 159
goto label_3;
#line 159
label_1:
#line 159
undef($memory_5);
#line 159
undef($memory_6);
#line 159
undef($memory_7);
#line 159
undef($memory_8);
#line 159
undef($memory_9);
#line 159
undef($memory_10);
#line 160
$memory_5 = "imports";
#line 160
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 160
$memory_6 = $memory_0->{'name'};
#line 160
$memory_7 = c_rt_lib::to_nl(1);
#line 160
hash::set_value($memory_5, $memory_6, $memory_7);
#line 160
undef($memory_7);
#line 160
undef($memory_6);
#line 160
$memory_6 = "imports";
#line 160
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 160
undef($memory_6);
#line 160
undef($memory_5);
#line 161
$memory_5 = $memory_0->{'fun_def'};
#line 161
$memory_7 = 0;
#line 161
$memory_8 = 1;
#line 161
$memory_9 = c_rt_lib::array_len($memory_5);
#line 161
label_6:
#line 161
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 161
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 161
$memory_6 = $memory_5->[$memory_7];
#line 162
$memory_11 = {};
#line 163
$memory_12 = $memory_6->{'args'};
#line 163
$memory_14 = 0;
#line 163
$memory_15 = 1;
#line 163
$memory_16 = c_rt_lib::array_len($memory_12);
#line 163
label_9:
#line 163
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 163
if (c_rt_lib::check_true($memory_17)) {goto label_7;}
#line 163
$memory_13 = $memory_12->[$memory_14];
#line 164
$memory_19 = $memory_13->{'type'};
#line 164
$memory_18 = type_checker_priv::type_to_ptd($memory_19, $memory_2);
#line 164
undef($memory_19);
#line 165
type_checker_priv::check_types_imported($memory_18, $memory_4, $memory_2);
#line 166
$memory_19 = $memory_13->{'name'};
#line 166
type_checker_priv::add_var_decl_to_vars($memory_18, $memory_19, $memory_11);
#line 166
undef($memory_19);
#line 166
undef($memory_18);
#line 167
$memory_14 = $memory_14 + $memory_15;
#line 167
goto label_9;
#line 167
label_7:
#line 167
undef($memory_12);
#line 167
undef($memory_13);
#line 167
undef($memory_14);
#line 167
undef($memory_15);
#line 167
undef($memory_16);
#line 167
undef($memory_17);
#line 168
$memory_13 = $memory_6->{'ret_type'};
#line 168
$memory_12 = type_checker_priv::return_type_to_tct($memory_13, $memory_2);
#line 168
undef($memory_13);
#line 168
$memory_13 = "env";
#line 168
$memory_13 = c_rt_lib::get_ref_hash($memory_4, $memory_13);
#line 168
$memory_14 = $memory_12;
#line 168
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'ret_type'} = $memory_14;
#line 168
$memory_15 = "env";
#line 168
c_rt_lib::set_ref_hash($memory_4, $memory_15, $memory_13);
#line 168
undef($memory_15);
#line 168
undef($memory_12);
#line 168
undef($memory_13);
#line 168
undef($memory_14);
#line 169
$memory_12 = $memory_4->{'env'};
#line 169
$memory_12 = $memory_12->{'ret_type'};
#line 169
type_checker_priv::check_types_imported($memory_12, $memory_4, $memory_2);
#line 169
undef($memory_12);
#line 170
$memory_12 = $memory_6->{'cmd'};
#line 170
type_checker_priv::check_cmd($memory_12, $memory_4, $memory_11, $memory_2);
#line 170
undef($memory_12);
#line 170
undef($memory_11);
#line 171
$memory_7 = $memory_7 + $memory_8;
#line 171
goto label_6;
#line 171
label_4:
#line 171
undef($memory_5);
#line 171
undef($memory_6);
#line 171
undef($memory_7);
#line 171
undef($memory_8);
#line 171
undef($memory_9);
#line 171
undef($memory_10);
#line 172
$memory_5 = $memory_4->{'funs'};
#line 172
$memory_1 = $memory_5;
#line 172
undef($memory_5);
#line 173
$memory_5 = $memory_4->{'env'};
#line 173
$memory_5 = $memory_5->{'deref'};
#line 173
$memory_3 = $memory_5;
#line 173
undef($memory_5);
#line 173
undef($memory_4);
#line 173
undef($memory_0);
#line 173
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::join_vars($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 178
$memory_5 = "__END";
#line 178
$memory_4 = hash::has_key($memory_1, $memory_5);
#line 178
undef($memory_5);
#line 178
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 178
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 178
undef($memory_1);
#line 178
undef($memory_4);
#line 178
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;return;
#line 178
goto label_2;
#line 178
label_2:
#line 178
undef($memory_4);
#line 179
$memory_5 = "__END";
#line 179
$memory_4 = hash::has_key($memory_0, $memory_5);
#line 179
undef($memory_5);
#line 179
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 179
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 180
$memory_0 = $memory_1;
#line 181
undef($memory_1);
#line 181
undef($memory_4);
#line 181
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;return;
#line 182
goto label_4;
#line 182
label_4:
#line 182
undef($memory_4);
#line 183
$memory_6 = c_rt_lib::init_iter($memory_0);
#line 183
label_7:
#line 183
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 183
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 183
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 183
$memory_5 = c_rt_lib::hash_get_value($memory_0, $memory_4);
#line 184
$memory_7 = $memory_5->{'overwrited'};
#line 184
$memory_8 = c_rt_lib::ov_is($memory_7, 'yes');
#line 184
if (c_rt_lib::check_true($memory_8)) {goto label_9;}
#line 191
$memory_8 = c_rt_lib::ov_is($memory_7, 'no');
#line 191
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 191
$memory_8 = "NOMATCHALERT";
#line 191
$memory_8 = [$memory_8,$memory_7];
#line 191
die(dfile::ssave($memory_8));
#line 184
label_9:
#line 185
$memory_9 = $memory_5->{'type'};
#line 186
$memory_10 = hash::get_value($memory_1, $memory_4);
#line 186
$memory_10 = $memory_10->{'type'};
#line 187
$memory_12 = c_rt_lib::ov_mk_none('yes');
#line 187
$memory_13 = ptd_system::cross_type($memory_9, $memory_10, $memory_2, $memory_3);
#line 187
$memory_11 = {overwrited => $memory_12,type => $memory_13,};
#line 187
undef($memory_12);
#line 187
undef($memory_13);
#line 187
hash::set_value($memory_0, $memory_4, $memory_11);
#line 187
undef($memory_11);
#line 187
undef($memory_9);
#line 187
undef($memory_10);
#line 191
goto label_8;
#line 191
label_10:
#line 192
goto label_8;
#line 192
label_8:
#line 192
undef($memory_7);
#line 192
undef($memory_8);
#line 193
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 193
goto label_7;
#line 193
label_5:
#line 193
undef($memory_4);
#line 193
undef($memory_5);
#line 193
undef($memory_6);
#line 193
undef($memory_1);
#line 193
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[0] = $memory_0;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::set_end_function($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 197
$memory_1 = "__END";
#line 197
$memory_3 = c_rt_lib::ov_mk_none('yes');
#line 197
$memory_4 = tct::empty();
#line 197
$memory_2 = {overwrited => $memory_3,type => $memory_4,};
#line 197
undef($memory_3);
#line 197
undef($memory_4);
#line 197
hash::set_value($memory_0, $memory_1, $memory_2);
#line 197
undef($memory_2);
#line 197
undef($memory_1);
#line 197
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub type_checker_priv::check_cmd($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 202
$memory_4 = $memory_0->{'debug'};
#line 202
$memory_4 = $memory_4->{'begin'};
#line 202
$memory_4 = $memory_4->{'line'};
#line 202
$memory_5 = $memory_4;
#line 202
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'current_line'} = $memory_5;
#line 202
undef($memory_4);
#line 202
undef($memory_5);
#line 203
$memory_4 = {};
#line 204
$memory_5 = $memory_2;
#line 205
$memory_6 = $memory_0->{'cmd'};
#line 205
$memory_7 = c_rt_lib::ov_is($memory_6, 'if');
#line 205
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 224
$memory_7 = c_rt_lib::ov_is($memory_6, 'for');
#line 224
if (c_rt_lib::check_true($memory_7)) {goto label_3;}
#line 241
$memory_7 = c_rt_lib::ov_is($memory_6, 'fora');
#line 241
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 243
$memory_7 = c_rt_lib::ov_is($memory_6, 'forh');
#line 243
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 245
$memory_7 = c_rt_lib::ov_is($memory_6, 'loop');
#line 245
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 247
$memory_7 = c_rt_lib::ov_is($memory_6, 'rep');
#line 247
if (c_rt_lib::check_true($memory_7)) {goto label_7;}
#line 249
$memory_7 = c_rt_lib::ov_is($memory_6, 'while');
#line 249
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 251
$memory_7 = c_rt_lib::ov_is($memory_6, 'if_mod');
#line 251
if (c_rt_lib::check_true($memory_7)) {goto label_9;}
#line 259
$memory_7 = c_rt_lib::ov_is($memory_6, 'unless_mod');
#line 259
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 267
$memory_7 = c_rt_lib::ov_is($memory_6, 'break');
#line 267
if (c_rt_lib::check_true($memory_7)) {goto label_11;}
#line 275
$memory_7 = c_rt_lib::ov_is($memory_6, 'continue');
#line 275
if (c_rt_lib::check_true($memory_7)) {goto label_12;}
#line 283
$memory_7 = c_rt_lib::ov_is($memory_6, 'match');
#line 283
if (c_rt_lib::check_true($memory_7)) {goto label_13;}
#line 285
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 285
if (c_rt_lib::check_true($memory_7)) {goto label_14;}
#line 287
$memory_7 = c_rt_lib::ov_is($memory_6, 'return');
#line 287
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 301
$memory_7 = c_rt_lib::ov_is($memory_6, 'block');
#line 301
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 307
$memory_7 = c_rt_lib::ov_is($memory_6, 'die');
#line 307
if (c_rt_lib::check_true($memory_7)) {goto label_17;}
#line 312
$memory_7 = c_rt_lib::ov_is($memory_6, 'var_decl');
#line 312
if (c_rt_lib::check_true($memory_7)) {goto label_18;}
#line 314
$memory_7 = c_rt_lib::ov_is($memory_6, 'try');
#line 314
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 325
$memory_7 = c_rt_lib::ov_is($memory_6, 'ensure');
#line 325
if (c_rt_lib::check_true($memory_7)) {goto label_20;}
#line 329
$memory_7 = c_rt_lib::ov_is($memory_6, 'nop');
#line 329
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 329
$memory_7 = "NOMATCHALERT";
#line 329
$memory_7 = [$memory_7,$memory_6];
#line 329
die(dfile::ssave($memory_7));
#line 205
label_2:
#line 205
$memory_8 = c_rt_lib::ov_as($memory_6, 'if');
#line 206
$memory_10 = $memory_8->{'cond'};
#line 206
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_5, $memory_3);
#line 206
undef($memory_10);
#line 207
$memory_10 = ptd_system::is_condition_type($memory_9, $memory_1, $memory_3);
#line 207
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 207
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 207
if (c_rt_lib::check_true($memory_10)) {goto label_23;}
#line 207
$memory_11 = "if argument should be sim or boolean instead of ";
#line 207
$memory_13 = $memory_9->{'type'};
#line 207
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 207
undef($memory_13);
#line 207
$memory_11 = $memory_11 . $memory_12;
#line 207
undef($memory_12);
#line 207
type_checker_priv::add_error($memory_3, $memory_11);
#line 207
undef($memory_11);
#line 207
goto label_23;
#line 207
label_23:
#line 207
undef($memory_10);
#line 210
$memory_10 = $memory_5;
#line 211
$memory_11 = $memory_8->{'if'};
#line 211
type_checker_priv::check_cmd($memory_11, $memory_1, $memory_10, $memory_3);
#line 211
undef($memory_11);
#line 212
$memory_11 = $memory_8->{'elsif'};
#line 212
$memory_13 = 0;
#line 212
$memory_14 = 1;
#line 212
$memory_15 = c_rt_lib::array_len($memory_11);
#line 212
label_26:
#line 212
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 212
if (c_rt_lib::check_true($memory_16)) {goto label_24;}
#line 212
$memory_12 = $memory_11->[$memory_13];
#line 213
$memory_17 = $memory_12->{'cmd'};
#line 213
$memory_17 = $memory_17->{'debug'};
#line 213
$memory_17 = $memory_17->{'begin'};
#line 213
$memory_17 = $memory_17->{'line'};
#line 213
$memory_18 = $memory_17;
#line 213
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'current_line'} = $memory_18;
#line 213
undef($memory_17);
#line 213
undef($memory_18);
#line 214
$memory_18 = $memory_12->{'cond'};
#line 214
$memory_17 = type_checker_priv::check_val($memory_18, $memory_1, $memory_5, $memory_3);
#line 214
undef($memory_18);
#line 215
$memory_18 = ptd_system::is_condition_type($memory_17, $memory_1, $memory_3);
#line 215
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 215
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 215
if (c_rt_lib::check_true($memory_18)) {goto label_28;}
#line 215
$memory_19 = "elsif condition should be sim or boolean instead of ";
#line 215
$memory_21 = $memory_17->{'type'};
#line 215
$memory_20 = type_checker_priv::get_print_tct_type_name($memory_21);
#line 215
undef($memory_21);
#line 215
$memory_19 = $memory_19 . $memory_20;
#line 215
undef($memory_20);
#line 215
type_checker_priv::add_error($memory_3, $memory_19);
#line 215
undef($memory_19);
#line 215
goto label_28;
#line 215
label_28:
#line 215
undef($memory_18);
#line 218
$memory_18 = $memory_5;
#line 219
$memory_19 = $memory_12->{'cmd'};
#line 219
type_checker_priv::check_cmd($memory_19, $memory_1, $memory_18, $memory_3);
#line 219
undef($memory_19);
#line 220
type_checker_priv::join_vars($memory_10, $memory_18, $memory_1, $memory_3);
#line 220
undef($memory_17);
#line 220
undef($memory_18);
#line 221
$memory_13 = $memory_13 + $memory_14;
#line 221
goto label_26;
#line 221
label_24:
#line 221
undef($memory_11);
#line 221
undef($memory_12);
#line 221
undef($memory_13);
#line 221
undef($memory_14);
#line 221
undef($memory_15);
#line 221
undef($memory_16);
#line 222
$memory_11 = $memory_8->{'else'};
#line 222
type_checker_priv::check_cmd($memory_11, $memory_1, $memory_5, $memory_3);
#line 222
undef($memory_11);
#line 223
type_checker_priv::join_vars($memory_5, $memory_10, $memory_1, $memory_3);
#line 223
undef($memory_9);
#line 223
undef($memory_10);
#line 223
undef($memory_8);
#line 224
goto label_1;
#line 224
label_3:
#line 224
$memory_8 = c_rt_lib::ov_as($memory_6, 'for');
#line 225
$memory_9 = $memory_8->{'start'};
#line 225
$memory_10 = c_rt_lib::ov_is($memory_9, 'value');
#line 225
if (c_rt_lib::check_true($memory_10)) {goto label_30;}
#line 227
$memory_10 = c_rt_lib::ov_is($memory_9, 'var_decl');
#line 227
if (c_rt_lib::check_true($memory_10)) {goto label_31;}
#line 227
$memory_10 = "NOMATCHALERT";
#line 227
$memory_10 = [$memory_10,$memory_9];
#line 227
die(dfile::ssave($memory_10));
#line 225
label_30:
#line 225
$memory_11 = c_rt_lib::ov_as($memory_9, 'value');
#line 226
type_checker_priv::check_val($memory_11, $memory_1, $memory_5, $memory_3);
#line 226
undef($memory_11);
#line 227
goto label_29;
#line 227
label_31:
#line 227
$memory_11 = c_rt_lib::ov_as($memory_9, 'var_decl');
#line 228
$memory_12 = type_checker_priv::check_var_decl($memory_11, $memory_1, $memory_5, $memory_3);
#line 228
$memory_13 = $memory_11->{'name'};
#line 228
type_checker_priv::add_var_to_vars($memory_12, $memory_13, $memory_5);
#line 228
undef($memory_13);
#line 228
undef($memory_12);
#line 228
undef($memory_11);
#line 229
goto label_29;
#line 229
label_29:
#line 229
undef($memory_9);
#line 229
undef($memory_10);
#line 230
$memory_9 = $memory_5;
#line 231
$memory_10 = $memory_8->{'cond'};
#line 231
$memory_10 = c_rt_lib::ov_is($memory_10, 'nop');
#line 231
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 231
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 231
if (c_rt_lib::check_true($memory_10)) {goto label_33;}
#line 232
$memory_12 = $memory_8->{'cond'};
#line 232
$memory_11 = type_checker_priv::check_val($memory_12, $memory_1, $memory_9, $memory_3);
#line 232
undef($memory_12);
#line 233
$memory_12 = ptd_system::is_condition_type($memory_11, $memory_1, $memory_3);
#line 233
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 233
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 233
if (c_rt_lib::check_true($memory_12)) {goto label_35;}
#line 233
$memory_13 = "for condition should be sim or boolean instead of ";
#line 233
$memory_15 = $memory_11->{'type'};
#line 233
$memory_14 = type_checker_priv::get_print_tct_type_name($memory_15);
#line 233
undef($memory_15);
#line 233
$memory_13 = $memory_13 . $memory_14;
#line 233
undef($memory_14);
#line 233
type_checker_priv::add_error($memory_3, $memory_13);
#line 233
undef($memory_13);
#line 233
goto label_35;
#line 233
label_35:
#line 233
undef($memory_12);
#line 236
type_checker_priv::join_vars($memory_9, $memory_5, $memory_1, $memory_3);
#line 236
undef($memory_11);
#line 237
goto label_33;
#line 237
label_33:
#line 237
undef($memory_10);
#line 238
$memory_10 = $memory_8->{'cmd'};
#line 238
type_checker_priv::break_continue_block($memory_10, $memory_1, $memory_9, $memory_3);
#line 238
undef($memory_10);
#line 239
$memory_10 = $memory_8->{'iter'};
#line 239
type_checker_priv::check_val($memory_10, $memory_1, $memory_9, $memory_3);
#line 239
undef($memory_10);
#line 240
type_checker_priv::join_vars($memory_5, $memory_9, $memory_1, $memory_3);
#line 240
undef($memory_9);
#line 240
undef($memory_8);
#line 241
goto label_1;
#line 241
label_4:
#line 241
$memory_8 = c_rt_lib::ov_as($memory_6, 'fora');
#line 242
type_checker_priv::check_fora($memory_8, $memory_1, $memory_5, $memory_3);
#line 242
undef($memory_8);
#line 243
goto label_1;
#line 243
label_5:
#line 243
$memory_8 = c_rt_lib::ov_as($memory_6, 'forh');
#line 244
type_checker_priv::check_forh($memory_8, $memory_1, $memory_5, $memory_3);
#line 244
undef($memory_8);
#line 245
goto label_1;
#line 245
label_6:
#line 245
$memory_8 = c_rt_lib::ov_as($memory_6, 'loop');
#line 246
type_checker_priv::break_continue_block($memory_8, $memory_1, $memory_5, $memory_3);
#line 246
undef($memory_8);
#line 247
goto label_1;
#line 247
label_7:
#line 247
$memory_8 = c_rt_lib::ov_as($memory_6, 'rep');
#line 248
type_checker_priv::check_rep($memory_8, $memory_1, $memory_5, $memory_3);
#line 248
undef($memory_8);
#line 249
goto label_1;
#line 249
label_8:
#line 249
$memory_8 = c_rt_lib::ov_as($memory_6, 'while');
#line 250
type_checker_priv::check_while($memory_8, $memory_1, $memory_5, $memory_3);
#line 250
undef($memory_8);
#line 251
goto label_1;
#line 251
label_9:
#line 251
$memory_8 = c_rt_lib::ov_as($memory_6, 'if_mod');
#line 252
$memory_10 = $memory_8->{'cond'};
#line 252
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_5, $memory_3);
#line 252
undef($memory_10);
#line 253
$memory_10 = ptd_system::is_condition_type($memory_9, $memory_1, $memory_3);
#line 253
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 253
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 253
if (c_rt_lib::check_true($memory_10)) {goto label_37;}
#line 253
$memory_11 = "if argument should be sim or boolean type instead of ";
#line 253
$memory_13 = $memory_9->{'type'};
#line 253
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 253
undef($memory_13);
#line 253
$memory_11 = $memory_11 . $memory_12;
#line 253
undef($memory_12);
#line 253
type_checker_priv::add_error($memory_3, $memory_11);
#line 253
undef($memory_11);
#line 253
goto label_37;
#line 253
label_37:
#line 253
undef($memory_10);
#line 256
$memory_10 = $memory_5;
#line 257
$memory_11 = $memory_8->{'cmd'};
#line 257
type_checker_priv::check_cmd($memory_11, $memory_1, $memory_10, $memory_3);
#line 257
undef($memory_11);
#line 258
type_checker_priv::join_vars($memory_5, $memory_10, $memory_1, $memory_3);
#line 258
undef($memory_9);
#line 258
undef($memory_10);
#line 258
undef($memory_8);
#line 259
goto label_1;
#line 259
label_10:
#line 259
$memory_8 = c_rt_lib::ov_as($memory_6, 'unless_mod');
#line 260
$memory_10 = $memory_8->{'cond'};
#line 260
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_5, $memory_3);
#line 260
undef($memory_10);
#line 261
$memory_10 = ptd_system::is_condition_type($memory_9, $memory_1, $memory_3);
#line 261
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 261
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 261
if (c_rt_lib::check_true($memory_10)) {goto label_39;}
#line 261
$memory_11 = "unless argument should be sim or boolean type instead of ";
#line 261
$memory_13 = $memory_9->{'type'};
#line 261
$memory_12 = type_checker_priv::get_print_tct_type_name($memory_13);
#line 261
undef($memory_13);
#line 261
$memory_11 = $memory_11 . $memory_12;
#line 261
undef($memory_12);
#line 261
type_checker_priv::add_error($memory_3, $memory_11);
#line 261
undef($memory_11);
#line 261
goto label_39;
#line 261
label_39:
#line 261
undef($memory_10);
#line 264
$memory_10 = $memory_5;
#line 265
$memory_11 = $memory_8->{'cmd'};
#line 265
type_checker_priv::check_cmd($memory_11, $memory_1, $memory_10, $memory_3);
#line 265
undef($memory_11);
#line 266
type_checker_priv::join_vars($memory_5, $memory_10, $memory_1, $memory_3);
#line 266
undef($memory_9);
#line 266
undef($memory_10);
#line 266
undef($memory_8);
#line 267
goto label_1;
#line 267
label_11:
#line 268
$memory_8 = $memory_1->{'env'};
#line 268
$memory_8 = $memory_8->{'breaks'};
#line 268
$memory_8 = $memory_8->{'is'};
#line 268
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 268
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 268
if (c_rt_lib::check_true($memory_8)) {goto label_41;}
#line 269
$memory_9 = "command break can be used only in cyclic block";
#line 269
type_checker_priv::add_error($memory_3, $memory_9);
#line 269
undef($memory_9);
#line 270
goto label_40;
#line 270
label_41:
#line 271
$memory_9 = $memory_1->{'env'};
#line 271
$memory_9 = $memory_9->{'breaks'};
#line 271
$memory_9 = $memory_9->{'vars'};
#line 272
type_checker_priv::join_vars($memory_9, $memory_5, $memory_1, $memory_3);
#line 273
$memory_10 = "env";
#line 273
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 273
$memory_11 = "breaks";
#line 273
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 273
$memory_12 = $memory_9;
#line 273
 if (c_rt_lib::get_hashcount($memory_11) > 1) {$memory_11 = {%{$memory_11}};}$memory_11->{'vars'} = $memory_12;
#line 273
$memory_13 = "breaks";
#line 273
c_rt_lib::set_ref_hash($memory_10, $memory_13, $memory_11);
#line 273
$memory_13 = "env";
#line 273
c_rt_lib::set_ref_hash($memory_1, $memory_13, $memory_10);
#line 273
undef($memory_13);
#line 273
undef($memory_10);
#line 273
undef($memory_11);
#line 273
undef($memory_12);
#line 273
undef($memory_9);
#line 274
goto label_40;
#line 274
label_40:
#line 274
undef($memory_8);
#line 275
goto label_1;
#line 275
label_12:
#line 276
$memory_8 = $memory_1->{'env'};
#line 276
$memory_8 = $memory_8->{'breaks'};
#line 276
$memory_8 = $memory_8->{'is'};
#line 276
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 276
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 276
if (c_rt_lib::check_true($memory_8)) {goto label_43;}
#line 277
$memory_9 = "command continue can be used only in cyclic block";
#line 277
type_checker_priv::add_error($memory_3, $memory_9);
#line 277
undef($memory_9);
#line 278
goto label_42;
#line 278
label_43:
#line 279
$memory_9 = $memory_1->{'env'};
#line 279
$memory_9 = $memory_9->{'breaks'};
#line 279
$memory_9 = $memory_9->{'vars'};
#line 280
type_checker_priv::join_vars($memory_9, $memory_5, $memory_1, $memory_3);
#line 281
$memory_10 = "env";
#line 281
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 281
$memory_11 = "breaks";
#line 281
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 281
$memory_12 = $memory_9;
#line 281
 if (c_rt_lib::get_hashcount($memory_11) > 1) {$memory_11 = {%{$memory_11}};}$memory_11->{'vars'} = $memory_12;
#line 281
$memory_13 = "breaks";
#line 281
c_rt_lib::set_ref_hash($memory_10, $memory_13, $memory_11);
#line 281
$memory_13 = "env";
#line 281
c_rt_lib::set_ref_hash($memory_1, $memory_13, $memory_10);
#line 281
undef($memory_13);
#line 281
undef($memory_10);
#line 281
undef($memory_11);
#line 281
undef($memory_12);
#line 281
undef($memory_9);
#line 282
goto label_42;
#line 282
label_42:
#line 282
undef($memory_8);
#line 283
goto label_1;
#line 283
label_13:
#line 283
$memory_8 = c_rt_lib::ov_as($memory_6, 'match');
#line 284
type_checker_priv::check_match($memory_8, $memory_1, $memory_5, $memory_3);
#line 284
undef($memory_8);
#line 285
goto label_1;
#line 285
label_14:
#line 285
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 286
type_checker_priv::check_val($memory_8, $memory_1, $memory_5, $memory_3);
#line 286
undef($memory_8);
#line 287
goto label_1;
#line 287
label_15:
#line 287
$memory_8 = c_rt_lib::ov_as($memory_6, 'return');
#line 288
$memory_9 = type_checker_priv::check_val($memory_8, $memory_1, $memory_5, $memory_3);
#line 289
$memory_10 = $memory_1->{'env'};
#line 289
$memory_10 = $memory_10->{'ret_type'};
#line 289
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_void');
#line 289
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 289
if (c_rt_lib::check_true($memory_11)) {goto label_46;}
#line 289
$memory_10 = $memory_9->{'type'};
#line 289
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_empty');
#line 289
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 289
label_46:
#line 289
undef($memory_11);
#line 289
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 289
if (c_rt_lib::check_true($memory_10)) {goto label_45;}
#line 290
$memory_11 = "can't return value in void function";
#line 290
type_checker_priv::add_error($memory_3, $memory_11);
#line 290
undef($memory_11);
#line 291
goto label_50;
#line 291
label_45:
#line 291
$memory_10 = $memory_1->{'env'};
#line 291
$memory_10 = $memory_10->{'ret_type'};
#line 291
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_void');
#line 291
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 291
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 291
if (c_rt_lib::check_true($memory_12)) {goto label_49;}
#line 291
$memory_10 = $memory_1->{'env'};
#line 291
$memory_10 = $memory_10->{'ret_type'};
#line 291
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_im');
#line 291
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 291
label_49:
#line 291
undef($memory_12);
#line 291
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 291
if (c_rt_lib::check_true($memory_11)) {goto label_48;}
#line 291
$memory_10 = $memory_9->{'type'};
#line 291
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_empty');
#line 291
label_48:
#line 291
undef($memory_11);
#line 291
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 291
if (c_rt_lib::check_true($memory_10)) {goto label_47;}
#line 293
$memory_11 = "must be returned value in non void function";
#line 293
type_checker_priv::add_error($memory_3, $memory_11);
#line 293
undef($memory_11);
#line 294
goto label_50;
#line 294
label_47:
#line 294
$memory_10 = $memory_1->{'env'};
#line 294
$memory_10 = $memory_10->{'ret_type'};
#line 294
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_void');
#line 294
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 294
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 294
if (c_rt_lib::check_true($memory_11)) {goto label_51;}
#line 294
$memory_10 = $memory_9->{'type'};
#line 294
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_empty');
#line 294
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 294
label_51:
#line 294
undef($memory_11);
#line 294
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 294
if (c_rt_lib::check_true($memory_10)) {goto label_50;}
#line 295
$memory_12 = $memory_1->{'env'};
#line 295
$memory_12 = $memory_12->{'ret_type'};
#line 295
$memory_11 = ptd_system::check_assignment($memory_12, $memory_9, $memory_1, $memory_3);
#line 295
undef($memory_12);
#line 296
$memory_12 = $memory_11;
#line 296
$memory_12 = c_rt_lib::ov_is($memory_12, 'err');
#line 296
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 296
if (c_rt_lib::check_true($memory_12)) {goto label_53;}
#line 297
$memory_13 = "the return value have the wrong type: ";
#line 297
$memory_14 = type_checker_priv::get_print_check_info($memory_11);
#line 297
$memory_13 = $memory_13 . $memory_14;
#line 297
undef($memory_14);
#line 297
type_checker_priv::add_error($memory_3, $memory_13);
#line 297
undef($memory_13);
#line 298
goto label_53;
#line 298
label_53:
#line 298
undef($memory_12);
#line 298
undef($memory_11);
#line 299
goto label_50;
#line 299
label_50:
#line 299
undef($memory_10);
#line 300
type_checker_priv::set_end_function($memory_5);
#line 300
undef($memory_9);
#line 300
undef($memory_8);
#line 301
goto label_1;
#line 301
label_16:
#line 301
$memory_8 = c_rt_lib::ov_as($memory_6, 'block');
#line 302
$memory_10 = 0;
#line 302
$memory_11 = 1;
#line 302
$memory_12 = c_rt_lib::array_len($memory_8);
#line 302
label_56:
#line 302
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 302
if (c_rt_lib::check_true($memory_13)) {goto label_54;}
#line 302
$memory_9 = $memory_8->[$memory_10];
#line 303
$memory_14 = type_checker_priv::check_cmd($memory_9, $memory_1, $memory_5, $memory_3);
#line 303
$memory_17 = c_rt_lib::init_iter($memory_14);
#line 303
label_59:
#line 303
$memory_15 = c_rt_lib::is_end_hash($memory_17);
#line 303
if (c_rt_lib::check_true($memory_15)) {goto label_57;}
#line 303
$memory_15 = c_rt_lib::get_key_iter($memory_17);
#line 303
$memory_16 = c_rt_lib::hash_get_value($memory_14, $memory_15);
#line 304
type_checker_priv::add_var_to_vars($memory_16, $memory_15, $memory_5);
#line 305
$memory_17 = c_rt_lib::next_iter($memory_17);
#line 305
goto label_59;
#line 305
label_57:
#line 305
undef($memory_14);
#line 305
undef($memory_15);
#line 305
undef($memory_16);
#line 305
undef($memory_17);
#line 306
$memory_10 = $memory_10 + $memory_11;
#line 306
goto label_56;
#line 306
label_54:
#line 306
undef($memory_9);
#line 306
undef($memory_10);
#line 306
undef($memory_11);
#line 306
undef($memory_12);
#line 306
undef($memory_13);
#line 306
undef($memory_8);
#line 307
goto label_1;
#line 307
label_17:
#line 307
$memory_8 = c_rt_lib::ov_as($memory_6, 'die');
#line 308
$memory_10 = 0;
#line 308
$memory_11 = 1;
#line 308
$memory_12 = c_rt_lib::array_len($memory_8);
#line 308
label_62:
#line 308
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 308
if (c_rt_lib::check_true($memory_13)) {goto label_60;}
#line 308
$memory_9 = $memory_8->[$memory_10];
#line 309
type_checker_priv::check_val($memory_9, $memory_1, $memory_5, $memory_3);
#line 310
$memory_10 = $memory_10 + $memory_11;
#line 310
goto label_62;
#line 310
label_60:
#line 310
undef($memory_9);
#line 310
undef($memory_10);
#line 310
undef($memory_11);
#line 310
undef($memory_12);
#line 310
undef($memory_13);
#line 311
type_checker_priv::set_end_function($memory_5);
#line 311
undef($memory_8);
#line 312
goto label_1;
#line 312
label_18:
#line 312
$memory_8 = c_rt_lib::ov_as($memory_6, 'var_decl');
#line 313
$memory_9 = $memory_8->{'name'};
#line 313
$memory_10 = type_checker_priv::check_var_decl($memory_8, $memory_1, $memory_5, $memory_3);
#line 313
hash::set_value($memory_4, $memory_9, $memory_10);
#line 313
undef($memory_10);
#line 313
undef($memory_9);
#line 313
undef($memory_8);
#line 314
goto label_1;
#line 314
label_19:
#line 314
$memory_8 = c_rt_lib::ov_as($memory_6, 'try');
#line 315
$memory_10 = $memory_1->{'env'};
#line 315
$memory_10 = $memory_10->{'ret_type'};
#line 315
$memory_11 = c_rt_lib::ov_mk_none('speculation');
#line 315
$memory_9 = {type => $memory_10,src => $memory_11,};
#line 315
undef($memory_10);
#line 315
undef($memory_11);
#line 316
$memory_10 = ptd_system::is_try_ensure_type($memory_9, $memory_1, $memory_3);
#line 316
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 316
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 316
if (c_rt_lib::check_true($memory_10)) {goto label_64;}
#line 316
$memory_11 = "function in which is used 'try' must return variant: ok, err ";
#line 316
type_checker_priv::add_error($memory_3, $memory_11);
#line 316
undef($memory_11);
#line 316
goto label_64;
#line 316
label_64:
#line 316
undef($memory_10);
#line 318
$memory_10 = type_checker_priv::check_try_ensure($memory_8, $memory_1, $memory_5, $memory_3);
#line 319
$memory_13 = $memory_1->{'env'};
#line 319
$memory_13 = $memory_13->{'ret_type'};
#line 319
$memory_14 = c_rt_lib::ov_mk_none('known');
#line 319
$memory_12 = {type => $memory_13,src => $memory_14,};
#line 319
undef($memory_13);
#line 319
undef($memory_14);
#line 319
$memory_11 = ptd_system::try_get_ensure_sub_types($memory_12, $memory_1, $memory_3);
#line 319
undef($memory_12);
#line 320
$memory_13 = $memory_11->{'err'};
#line 320
$memory_14 = $memory_10->{'err_type'};
#line 320
$memory_12 = ptd_system::check_assignment($memory_13, $memory_14, $memory_1, $memory_3);
#line 320
undef($memory_14);
#line 320
undef($memory_13);
#line 321
$memory_13 = $memory_12;
#line 321
$memory_13 = c_rt_lib::ov_is($memory_13, 'err');
#line 321
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 321
if (c_rt_lib::check_true($memory_13)) {goto label_66;}
#line 322
$memory_14 = "the return value have the wrong type: ";
#line 322
$memory_15 = type_checker_priv::get_print_check_info($memory_12);
#line 322
$memory_14 = $memory_14 . $memory_15;
#line 322
undef($memory_15);
#line 322
type_checker_priv::add_error($memory_3, $memory_14);
#line 322
undef($memory_14);
#line 323
goto label_66;
#line 323
label_66:
#line 323
undef($memory_13);
#line 324
$memory_13 = $memory_10->{'vars'};
#line 324
$memory_4 = $memory_13;
#line 324
undef($memory_13);
#line 324
undef($memory_9);
#line 324
undef($memory_10);
#line 324
undef($memory_11);
#line 324
undef($memory_12);
#line 324
undef($memory_8);
#line 325
goto label_1;
#line 325
label_20:
#line 325
$memory_8 = c_rt_lib::ov_as($memory_6, 'ensure');
#line 326
$memory_9 = type_checker_priv::check_try_ensure($memory_8, $memory_1, $memory_5, $memory_3);
#line 328
$memory_10 = $memory_9->{'vars'};
#line 328
$memory_4 = $memory_10;
#line 328
undef($memory_10);
#line 328
undef($memory_9);
#line 328
undef($memory_8);
#line 329
goto label_1;
#line 329
label_21:
#line 330
goto label_1;
#line 330
label_1:
#line 330
undef($memory_6);
#line 330
undef($memory_7);
#line 331
$memory_8 = c_rt_lib::init_iter($memory_2);
#line 331
label_69:
#line 331
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 331
if (c_rt_lib::check_true($memory_6)) {goto label_67;}
#line 331
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 331
$memory_7 = c_rt_lib::hash_get_value($memory_2, $memory_6);
#line 332
$memory_9 = hash::get_value($memory_5, $memory_6);
#line 332
hash::set_value($memory_2, $memory_6, $memory_9);
#line 332
undef($memory_9);
#line 333
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 333
goto label_69;
#line 333
label_67:
#line 333
undef($memory_6);
#line 333
undef($memory_7);
#line 333
undef($memory_8);
#line 334
$memory_7 = "__END";
#line 334
$memory_6 = hash::has_key($memory_5, $memory_7);
#line 334
undef($memory_7);
#line 334
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 334
if (c_rt_lib::check_true($memory_6)) {goto label_71;}
#line 335
$memory_7 = "__END";
#line 335
$memory_9 = c_rt_lib::ov_mk_none('yes');
#line 335
$memory_10 = tct::empty();
#line 335
$memory_8 = {overwrited => $memory_9,type => $memory_10,};
#line 335
undef($memory_9);
#line 335
undef($memory_10);
#line 335
hash::set_value($memory_2, $memory_7, $memory_8);
#line 335
undef($memory_8);
#line 335
undef($memory_7);
#line 336
goto label_71;
#line 336
label_71:
#line 336
undef($memory_6);
#line 337
undef($memory_0);
#line 337
undef($memory_5);
#line 337
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 337
undef($memory_4);
#line 337
undef($memory_5);
#line 337
undef($memory_0);
#line 337
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::break_continue_block($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 342
$memory_4 = $memory_1->{'env'};
#line 342
$memory_4 = $memory_4->{'breaks'};
#line 343
$memory_6 = c_rt_lib::to_nl(1);
#line 343
$memory_5 = {is => $memory_6,vars => $memory_2,};
#line 343
undef($memory_6);
#line 343
$memory_6 = "env";
#line 343
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 343
$memory_7 = $memory_5;
#line 343
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'breaks'} = $memory_7;
#line 343
$memory_8 = "env";
#line 343
c_rt_lib::set_ref_hash($memory_1, $memory_8, $memory_6);
#line 343
undef($memory_8);
#line 343
undef($memory_5);
#line 343
undef($memory_6);
#line 343
undef($memory_7);
#line 344
type_checker_priv::check_cmd($memory_0, $memory_1, $memory_2, $memory_3);
#line 345
$memory_5 = $memory_1->{'env'};
#line 345
$memory_5 = $memory_5->{'breaks'};
#line 345
$memory_5 = $memory_5->{'vars'};
#line 345
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 345
undef($memory_5);
#line 346
$memory_5 = "env";
#line 346
$memory_5 = c_rt_lib::get_ref_hash($memory_1, $memory_5);
#line 346
$memory_6 = $memory_4;
#line 346
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'breaks'} = $memory_6;
#line 346
$memory_7 = "env";
#line 346
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_5);
#line 346
undef($memory_7);
#line 346
undef($memory_5);
#line 346
undef($memory_6);
#line 346
undef($memory_4);
#line 346
undef($memory_0);
#line 346
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_try_ensure($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 351
$memory_4 = {};
#line 352
$memory_6 = tct::empty();
#line 352
$memory_7 = c_rt_lib::ov_mk_none('speculation');
#line 352
$memory_5 = {type => $memory_6,src => $memory_7,};
#line 352
undef($memory_6);
#line 352
undef($memory_7);
#line 353
$memory_6 = tct::tct_im();
#line 354
$memory_7 = c_rt_lib::ov_is($memory_0, 'decl');
#line 354
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 359
$memory_7 = c_rt_lib::ov_is($memory_0, 'lval');
#line 359
if (c_rt_lib::check_true($memory_7)) {goto label_3;}
#line 371
$memory_7 = c_rt_lib::ov_is($memory_0, 'expr');
#line 371
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 371
$memory_7 = "NOMATCHALERT";
#line 371
$memory_7 = [$memory_7,$memory_0];
#line 371
die(dfile::ssave($memory_7));
#line 354
label_2:
#line 354
$memory_8 = c_rt_lib::ov_as($memory_0, 'decl');
#line 355
$memory_10 = c_rt_lib::to_nl(1);
#line 355
$memory_9 = type_checker_priv::check_var_decl_try($memory_8, $memory_10, $memory_1, $memory_2, $memory_3);
#line 355
undef($memory_10);
#line 356
$memory_10 = $memory_8->{'name'};
#line 356
$memory_11 = $memory_9->{'ok'};
#line 356
hash::set_value($memory_4, $memory_10, $memory_11);
#line 356
undef($memory_11);
#line 356
undef($memory_10);
#line 357
$memory_10 = $memory_9->{'err'};
#line 357
$memory_5 = $memory_10;
#line 357
undef($memory_10);
#line 358
$memory_10 = $memory_9->{'ok'};
#line 358
$memory_10 = $memory_10->{'type'};
#line 358
$memory_6 = $memory_10;
#line 358
undef($memory_10);
#line 358
undef($memory_9);
#line 358
undef($memory_8);
#line 359
goto label_1;
#line 359
label_3:
#line 359
$memory_8 = c_rt_lib::ov_as($memory_0, 'lval');
#line 360
$memory_10 = $memory_8->{'right'};
#line 360
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_2, $memory_3);
#line 360
undef($memory_10);
#line 361
$memory_11 = $memory_3->{'errors'};
#line 361
$memory_10 = array::len($memory_11);
#line 361
undef($memory_11);
#line 362
$memory_12 = $memory_8->{'left'};
#line 362
$memory_11 = type_checker_priv::get_type_left_site_equation($memory_12, $memory_1, $memory_2, $memory_3);
#line 362
undef($memory_12);
#line 363
$memory_13 = $memory_3->{'errors'};
#line 363
$memory_12 = array::len($memory_13);
#line 363
undef($memory_13);
#line 363
$memory_12 = $memory_12 - $memory_10;
#line 363
$memory_10 = $memory_12;
#line 363
undef($memory_12);
#line 364
$memory_12 = 0;
#line 364
$memory_12 = c_rt_lib::to_nl($memory_10 == $memory_12);
#line 364
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 364
if (c_rt_lib::check_true($memory_12)) {goto label_6;}
#line 365
$memory_13 = ptd_system::try_get_ensure_sub_types($memory_9, $memory_1, $memory_3);
#line 366
$memory_14 = $memory_13->{'ok'};
#line 366
$memory_15 = $memory_14;
#line 366
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_15;
#line 366
undef($memory_14);
#line 366
undef($memory_15);
#line 367
$memory_14 = $memory_8->{'left'};
#line 367
type_checker_priv::set_type_to_lval($memory_14, $memory_11, $memory_9, $memory_1, $memory_2, $memory_3);
#line 367
undef($memory_14);
#line 368
$memory_15 = $memory_13->{'err'};
#line 368
$memory_16 = $memory_9->{'src'};
#line 368
$memory_14 = {type => $memory_15,src => $memory_16,};
#line 368
undef($memory_15);
#line 368
undef($memory_16);
#line 368
$memory_5 = $memory_14;
#line 368
undef($memory_14);
#line 369
$memory_14 = $memory_13->{'ok'};
#line 369
$memory_6 = $memory_14;
#line 369
undef($memory_14);
#line 369
undef($memory_13);
#line 370
goto label_6;
#line 370
label_6:
#line 370
undef($memory_12);
#line 370
undef($memory_9);
#line 370
undef($memory_10);
#line 370
undef($memory_11);
#line 370
undef($memory_8);
#line 371
goto label_1;
#line 371
label_4:
#line 371
$memory_8 = c_rt_lib::ov_as($memory_0, 'expr');
#line 372
$memory_9 = type_checker_priv::check_val($memory_8, $memory_1, $memory_2, $memory_3);
#line 373
$memory_10 = ptd_system::try_get_ensure_sub_types($memory_9, $memory_1, $memory_3);
#line 374
$memory_12 = $memory_10->{'err'};
#line 374
$memory_13 = $memory_9->{'src'};
#line 374
$memory_11 = {type => $memory_12,src => $memory_13,};
#line 374
undef($memory_12);
#line 374
undef($memory_13);
#line 374
$memory_5 = $memory_11;
#line 374
undef($memory_11);
#line 375
$memory_11 = $memory_10->{'ok'};
#line 375
$memory_6 = $memory_11;
#line 375
undef($memory_11);
#line 375
undef($memory_9);
#line 375
undef($memory_10);
#line 375
undef($memory_8);
#line 376
goto label_1;
#line 376
label_1:
#line 376
undef($memory_7);
#line 377
$memory_7 = $memory_5->{'type'};
#line 377
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_empty');
#line 377
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 377
if (c_rt_lib::check_true($memory_8)) {goto label_9;}
#line 377
$memory_7 = $memory_6;
#line 377
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_empty');
#line 377
label_9:
#line 377
undef($memory_8);
#line 377
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 377
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 377
$memory_8 = "empty, no value used as variant in try/ensure";
#line 377
type_checker_priv::add_error($memory_3, $memory_8);
#line 377
undef($memory_8);
#line 377
goto label_8;
#line 377
label_8:
#line 377
undef($memory_7);
#line 378
$memory_7 = {vars => $memory_4,err_type => $memory_5,};
#line 378
undef($memory_0);
#line 378
undef($memory_4);
#line 378
undef($memory_5);
#line 378
undef($memory_6);
#line 378
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 378
undef($memory_7);
#line 378
undef($memory_4);
#line 378
undef($memory_5);
#line 378
undef($memory_6);
#line 378
undef($memory_0);
#line 378
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_forh($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 383
$memory_6 = $memory_0->{'hash'};
#line 383
$memory_5 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 383
undef($memory_6);
#line 383
$memory_4 = ptd_system::can_delete($memory_5, $memory_1, $memory_3);
#line 383
undef($memory_5);
#line 385
$memory_7 = tct::tct_im();
#line 385
$memory_6 = tct::hash($memory_7);
#line 385
undef($memory_7);
#line 385
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 385
undef($memory_6);
#line 385
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 385
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 386
goto label_1;
#line 386
label_2:
#line 386
$memory_7 = {};
#line 386
$memory_6 = tct::rec($memory_7);
#line 386
undef($memory_7);
#line 386
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 386
undef($memory_6);
#line 386
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 386
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 387
$memory_6 = type_checker_priv::is_known($memory_4);
#line 387
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 387
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 387
$memory_7 = "forh argument should be a hash not rec";
#line 387
type_checker_priv::add_error($memory_3, $memory_7);
#line 387
undef($memory_7);
#line 387
goto label_5;
#line 387
label_5:
#line 387
undef($memory_6);
#line 388
goto label_1;
#line 388
label_3:
#line 389
$memory_6 = "forh argument should be a hash type instead of ";
#line 389
$memory_8 = $memory_4->{'type'};
#line 389
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 389
undef($memory_8);
#line 389
$memory_6 = $memory_6 . $memory_7;
#line 389
undef($memory_7);
#line 389
type_checker_priv::add_error($memory_3, $memory_6);
#line 389
undef($memory_6);
#line 391
goto label_1;
#line 391
label_1:
#line 391
undef($memory_5);
#line 392
$memory_5 = $memory_4->{'type'};
#line 392
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_hash');
#line 392
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 392
$memory_5 = tct::tct_im();
#line 392
goto label_6;
#line 392
label_7:
#line 392
$memory_5 = $memory_4->{'type'};
#line 392
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_hash');
#line 392
label_6:
#line 392
$memory_6 = $memory_5;
#line 392
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_6;
#line 392
undef($memory_5);
#line 392
undef($memory_6);
#line 393
$memory_5 = $memory_2;
#line 394
$memory_6 = $memory_0->{'key'};
#line 394
$memory_8 = tct::sim();
#line 394
$memory_9 = c_rt_lib::ov_mk_none('speculation');
#line 394
$memory_7 = {type => $memory_8,src => $memory_9,};
#line 394
undef($memory_8);
#line 394
undef($memory_9);
#line 394
type_checker_priv::add_var_decl_with_type_and_check($memory_6, $memory_7, $memory_5, $memory_3);
#line 394
undef($memory_7);
#line 394
undef($memory_6);
#line 395
$memory_6 = $memory_0->{'val'};
#line 395
type_checker_priv::add_var_decl_with_type_and_check($memory_6, $memory_4, $memory_5, $memory_3);
#line 395
undef($memory_6);
#line 396
$memory_6 = $memory_0->{'cmd'};
#line 396
type_checker_priv::break_continue_block($memory_6, $memory_1, $memory_5, $memory_3);
#line 396
undef($memory_6);
#line 397
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 397
undef($memory_4);
#line 397
undef($memory_5);
#line 397
undef($memory_0);
#line 397
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_fora($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 402
$memory_6 = $memory_0->{'array'};
#line 402
$memory_5 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 402
undef($memory_6);
#line 402
$memory_4 = ptd_system::can_delete($memory_5, $memory_1, $memory_3);
#line 402
undef($memory_5);
#line 404
$memory_7 = tct::tct_im();
#line 404
$memory_6 = tct::arr($memory_7);
#line 404
undef($memory_7);
#line 404
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 404
undef($memory_6);
#line 404
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 404
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 404
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 404
$memory_6 = "fora argument should be an array instead of ";
#line 404
$memory_8 = $memory_4->{'type'};
#line 404
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 404
undef($memory_8);
#line 404
$memory_6 = $memory_6 . $memory_7;
#line 404
undef($memory_7);
#line 404
type_checker_priv::add_error($memory_3, $memory_6);
#line 404
undef($memory_6);
#line 404
goto label_2;
#line 404
label_2:
#line 404
undef($memory_5);
#line 406
$memory_5 = $memory_4->{'type'};
#line 406
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_arr');
#line 406
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 406
$memory_5 = tct::tct_im();
#line 406
goto label_3;
#line 406
label_4:
#line 406
$memory_5 = $memory_4->{'type'};
#line 406
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_arr');
#line 406
label_3:
#line 406
$memory_6 = $memory_5;
#line 406
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_6;
#line 406
undef($memory_5);
#line 406
undef($memory_6);
#line 407
$memory_5 = $memory_2;
#line 408
$memory_6 = $memory_0->{'iter'};
#line 408
type_checker_priv::add_var_decl_with_type_and_check($memory_6, $memory_4, $memory_5, $memory_3);
#line 408
undef($memory_6);
#line 409
$memory_6 = $memory_0->{'cmd'};
#line 409
type_checker_priv::break_continue_block($memory_6, $memory_1, $memory_5, $memory_3);
#line 409
undef($memory_6);
#line 410
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 410
undef($memory_4);
#line 410
undef($memory_5);
#line 410
undef($memory_0);
#line 410
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_while($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 415
$memory_5 = $memory_0->{'cond'};
#line 415
$memory_4 = type_checker_priv::check_val($memory_5, $memory_1, $memory_2, $memory_3);
#line 415
undef($memory_5);
#line 416
$memory_5 = ptd_system::is_condition_type($memory_4, $memory_1, $memory_3);
#line 416
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 416
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 416
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 416
$memory_6 = "while argument should be sim or boolean type insteand of ";
#line 416
$memory_8 = $memory_4->{'type'};
#line 416
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 416
undef($memory_8);
#line 416
$memory_6 = $memory_6 . $memory_7;
#line 416
undef($memory_7);
#line 416
type_checker_priv::add_error($memory_3, $memory_6);
#line 416
undef($memory_6);
#line 416
goto label_2;
#line 416
label_2:
#line 416
undef($memory_5);
#line 419
$memory_5 = $memory_2;
#line 420
$memory_6 = $memory_0->{'cmd'};
#line 420
type_checker_priv::break_continue_block($memory_6, $memory_1, $memory_5, $memory_3);
#line 420
undef($memory_6);
#line 421
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 421
undef($memory_4);
#line 421
undef($memory_5);
#line 421
undef($memory_0);
#line 421
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_rep($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 426
$memory_5 = $memory_0->{'count'};
#line 426
$memory_4 = type_checker_priv::check_val($memory_5, $memory_1, $memory_2, $memory_3);
#line 426
undef($memory_5);
#line 427
$memory_6 = tct::sim();
#line 427
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 427
undef($memory_6);
#line 427
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 427
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 427
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 427
$memory_6 = "rep argument should be a number instead of ";
#line 427
$memory_8 = $memory_4->{'type'};
#line 427
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 427
undef($memory_8);
#line 427
$memory_6 = $memory_6 . $memory_7;
#line 427
undef($memory_7);
#line 427
type_checker_priv::add_error($memory_3, $memory_6);
#line 427
undef($memory_6);
#line 427
goto label_2;
#line 427
label_2:
#line 427
undef($memory_5);
#line 429
$memory_5 = $memory_2;
#line 430
$memory_6 = $memory_0->{'iter'};
#line 430
$memory_8 = tct::sim();
#line 430
$memory_9 = c_rt_lib::ov_mk_none('speculation');
#line 430
$memory_7 = {type => $memory_8,src => $memory_9,};
#line 430
undef($memory_8);
#line 430
undef($memory_9);
#line 430
type_checker_priv::add_var_decl_with_type_and_check($memory_6, $memory_7, $memory_5, $memory_3);
#line 430
undef($memory_7);
#line 430
undef($memory_6);
#line 431
$memory_6 = $memory_0->{'cmd'};
#line 431
type_checker_priv::break_continue_block($memory_6, $memory_1, $memory_5, $memory_3);
#line 431
undef($memory_6);
#line 432
type_checker_priv::join_vars($memory_2, $memory_5, $memory_1, $memory_3);
#line 432
undef($memory_4);
#line 432
undef($memory_5);
#line 432
undef($memory_0);
#line 432
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_match($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 437
$memory_6 = $memory_0->{'val'};
#line 437
$memory_5 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 437
undef($memory_6);
#line 437
$memory_4 = ptd_system::can_delete($memory_5, $memory_1, $memory_3);
#line 437
undef($memory_5);
#line 439
$memory_5 = $memory_0->{'branch_list'};
#line 440
$memory_6 = c_rt_lib::to_nl(0);
#line 441
$memory_7 = {};
#line 442
$memory_8 = {};
#line 443
$memory_11 = {};
#line 443
$memory_10 = tct::var($memory_11);
#line 443
undef($memory_11);
#line 443
$memory_9 = ptd_system::is_accepted($memory_4, $memory_10, $memory_1, $memory_3);
#line 443
undef($memory_10);
#line 443
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 443
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 443
if (c_rt_lib::check_true($memory_9)) {goto label_2;}
#line 444
$memory_10 = "wrong type used as match argument: ";
#line 444
$memory_12 = $memory_4->{'type'};
#line 444
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 444
undef($memory_12);
#line 444
$memory_10 = $memory_10 . $memory_11;
#line 444
undef($memory_11);
#line 444
type_checker_priv::add_error($memory_3, $memory_10);
#line 444
undef($memory_10);
#line 445
goto label_2;
#line 445
label_2:
#line 445
undef($memory_9);
#line 446
$memory_9 = $memory_4->{'type'};
#line 446
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_var');
#line 446
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 446
if (c_rt_lib::check_true($memory_9)) {goto label_4;}
#line 447
$memory_10 = $memory_4->{'type'};
#line 447
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_var');
#line 447
$memory_8 = $memory_10;
#line 447
undef($memory_10);
#line 448
$memory_10 = {};
#line 449
$memory_12 = 0;
#line 449
$memory_13 = 1;
#line 449
$memory_14 = c_rt_lib::array_len($memory_5);
#line 449
label_7:
#line 449
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 449
if (c_rt_lib::check_true($memory_15)) {goto label_5;}
#line 449
$memory_11 = $memory_5->[$memory_12];
#line 450
$memory_16 = $memory_11->{'variant'};
#line 450
$memory_16 = $memory_16->{'name'};
#line 451
$memory_17 = hash::has_key($memory_8, $memory_16);
#line 451
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 451
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 451
if (c_rt_lib::check_true($memory_17)) {goto label_9;}
#line 452
$memory_18 = type_checker_priv::is_known($memory_4);
#line 452
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 452
if (c_rt_lib::check_true($memory_18)) {goto label_11;}
#line 452
$memory_19 = "variant definition `:";
#line 452
$memory_19 = $memory_19 . $memory_16;
#line 452
$memory_20 = "' does not exist";
#line 452
$memory_19 = $memory_19 . $memory_20;
#line 452
undef($memory_20);
#line 452
type_checker_priv::add_error($memory_3, $memory_19);
#line 452
undef($memory_19);
#line 452
goto label_11;
#line 452
label_11:
#line 452
undef($memory_18);
#line 454
undef($memory_16);
#line 454
undef($memory_17);
#line 454
goto label_6;
#line 455
goto label_9;
#line 455
label_9:
#line 455
undef($memory_17);
#line 456
$memory_17 = c_rt_lib::to_nl(1);
#line 456
hash::set_value($memory_10, $memory_16, $memory_17);
#line 456
undef($memory_17);
#line 457
$memory_17 = hash::get_value($memory_8, $memory_16);
#line 457
$memory_18 = c_rt_lib::ov_is($memory_17, 'with_param');
#line 457
if (c_rt_lib::check_true($memory_18)) {goto label_13;}
#line 459
$memory_18 = c_rt_lib::ov_is($memory_17, 'no_param');
#line 459
if (c_rt_lib::check_true($memory_18)) {goto label_14;}
#line 459
$memory_18 = "NOMATCHALERT";
#line 459
$memory_18 = [$memory_18,$memory_17];
#line 459
die(dfile::ssave($memory_18));
#line 457
label_13:
#line 457
$memory_19 = c_rt_lib::ov_as($memory_17, 'with_param');
#line 458
hash::set_value($memory_7, $memory_16, $memory_19);
#line 458
undef($memory_19);
#line 459
goto label_12;
#line 459
label_14:
#line 460
goto label_12;
#line 460
label_12:
#line 460
undef($memory_17);
#line 460
undef($memory_18);
#line 460
undef($memory_16);
#line 460
label_6:
#line 461
$memory_12 = $memory_12 + $memory_13;
#line 461
goto label_7;
#line 461
label_5:
#line 461
undef($memory_11);
#line 461
undef($memory_12);
#line 461
undef($memory_13);
#line 461
undef($memory_14);
#line 461
undef($memory_15);
#line 462
$memory_13 = c_rt_lib::init_iter($memory_8);
#line 462
label_17:
#line 462
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 462
if (c_rt_lib::check_true($memory_11)) {goto label_15;}
#line 462
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 462
$memory_12 = c_rt_lib::hash_get_value($memory_8, $memory_11);
#line 463
$memory_14 = hash::has_key($memory_10, $memory_11);
#line 463
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 463
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 463
if (c_rt_lib::check_true($memory_14)) {goto label_19;}
#line 464
$memory_15 = "unchecked match variants: ";
#line 464
$memory_15 = $memory_15 . $memory_11;
#line 464
type_checker_priv::add_error($memory_3, $memory_15);
#line 464
undef($memory_15);
#line 465
goto label_19;
#line 465
label_19:
#line 465
undef($memory_14);
#line 466
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 466
goto label_17;
#line 466
label_15:
#line 466
undef($memory_11);
#line 466
undef($memory_12);
#line 466
undef($memory_13);
#line 467
$memory_11 = c_rt_lib::to_nl(1);
#line 467
$memory_6 = $memory_11;
#line 467
undef($memory_11);
#line 467
undef($memory_10);
#line 468
goto label_4;
#line 468
label_4:
#line 468
undef($memory_9);
#line 469
$memory_9 = $memory_2;
#line 470
$memory_10 = c_rt_lib::to_nl(1);
#line 471
$memory_11 = {};
#line 472
$memory_13 = 0;
#line 472
$memory_14 = 1;
#line 472
$memory_15 = c_rt_lib::array_len($memory_5);
#line 472
label_22:
#line 472
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 472
if (c_rt_lib::check_true($memory_16)) {goto label_20;}
#line 472
$memory_12 = $memory_5->[$memory_13];
#line 473
$memory_17 = $memory_2;
#line 474
$memory_18 = $memory_12->{'variant'};
#line 474
$memory_18 = $memory_18->{'name'};
#line 475
$memory_19 = hash::has_key($memory_11, $memory_18);
#line 475
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 475
if (c_rt_lib::check_true($memory_19)) {goto label_24;}
#line 475
$memory_20 = "repeated the case name in match: ";
#line 475
$memory_20 = $memory_20 . $memory_18;
#line 475
type_checker_priv::add_error($memory_3, $memory_20);
#line 475
undef($memory_20);
#line 475
goto label_24;
#line 475
label_24:
#line 475
undef($memory_19);
#line 477
$memory_19 = 1;
#line 477
hash::set_value($memory_11, $memory_18, $memory_19);
#line 477
undef($memory_19);
#line 478
$memory_19 = $memory_12->{'variant'};
#line 478
$memory_19 = $memory_19->{'value'};
#line 478
$memory_20 = c_rt_lib::ov_is($memory_19, 'value');
#line 478
if (c_rt_lib::check_true($memory_20)) {goto label_26;}
#line 492
$memory_20 = c_rt_lib::ov_is($memory_19, 'none');
#line 492
if (c_rt_lib::check_true($memory_20)) {goto label_27;}
#line 492
$memory_20 = "NOMATCHALERT";
#line 492
$memory_20 = [$memory_20,$memory_19];
#line 492
die(dfile::ssave($memory_20));
#line 478
label_26:
#line 478
$memory_21 = c_rt_lib::ov_as($memory_19, 'value');
#line 479
type_checker_priv::check_var_decl($memory_21, $memory_1, $memory_17, $memory_3);
#line 481
$memory_23 = $memory_6;
#line 481
$memory_23 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_23));
#line 481
if (c_rt_lib::check_true($memory_23)) {goto label_29;}
#line 482
$memory_24 = hash::has_key($memory_8, $memory_18);
#line 482
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 482
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 482
if (c_rt_lib::check_true($memory_24)) {goto label_31;}
#line 482
undef($memory_17);
#line 482
undef($memory_18);
#line 482
undef($memory_19);
#line 482
undef($memory_20);
#line 482
undef($memory_21);
#line 482
undef($memory_22);
#line 482
undef($memory_23);
#line 482
undef($memory_24);
#line 482
goto label_21;
#line 482
goto label_31;
#line 482
label_31:
#line 482
undef($memory_24);
#line 483
$memory_24 = hash::has_key($memory_7, $memory_18);
#line 483
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 483
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 483
if (c_rt_lib::check_true($memory_24)) {goto label_33;}
#line 484
$memory_25 = "variant `:";
#line 484
$memory_25 = $memory_25 . $memory_18;
#line 484
$memory_26 = "' should has no param";
#line 484
$memory_25 = $memory_25 . $memory_26;
#line 484
undef($memory_26);
#line 484
type_checker_priv::add_error($memory_3, $memory_25);
#line 484
undef($memory_25);
#line 485
undef($memory_17);
#line 485
undef($memory_18);
#line 485
undef($memory_19);
#line 485
undef($memory_20);
#line 485
undef($memory_21);
#line 485
undef($memory_22);
#line 485
undef($memory_23);
#line 485
undef($memory_24);
#line 485
goto label_21;
#line 486
goto label_33;
#line 486
label_33:
#line 486
undef($memory_24);
#line 487
$memory_24 = hash::get_value($memory_7, $memory_18);
#line 487
$memory_22 = $memory_24;
#line 487
undef($memory_24);
#line 488
goto label_28;
#line 488
label_29:
#line 489
$memory_24 = tct::tct_im();
#line 489
$memory_22 = $memory_24;
#line 489
undef($memory_24);
#line 490
goto label_28;
#line 490
label_28:
#line 490
undef($memory_23);
#line 491
$memory_23 = $memory_21->{'name'};
#line 491
type_checker_priv::add_var_decl_to_vars($memory_22, $memory_23, $memory_17);
#line 491
undef($memory_23);
#line 491
undef($memory_22);
#line 491
undef($memory_21);
#line 492
goto label_25;
#line 492
label_27:
#line 493
$memory_21 = hash::has_key($memory_7, $memory_18);
#line 493
$memory_21 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_21));
#line 493
if (c_rt_lib::check_true($memory_21)) {goto label_35;}
#line 494
$memory_22 = "variant `:";
#line 494
$memory_22 = $memory_22 . $memory_18;
#line 494
$memory_23 = " should has param";
#line 494
$memory_22 = $memory_22 . $memory_23;
#line 494
undef($memory_23);
#line 494
type_checker_priv::add_error($memory_3, $memory_22);
#line 494
undef($memory_22);
#line 495
goto label_35;
#line 495
label_35:
#line 495
undef($memory_21);
#line 496
goto label_25;
#line 496
label_25:
#line 496
undef($memory_19);
#line 496
undef($memory_20);
#line 497
$memory_19 = $memory_12->{'cmd'};
#line 497
type_checker_priv::check_cmd($memory_19, $memory_1, $memory_17, $memory_3);
#line 497
undef($memory_19);
#line 498
$memory_19 = $memory_12->{'variant'};
#line 498
$memory_19 = $memory_19->{'value'};
#line 498
$memory_20 = c_rt_lib::ov_is($memory_19, 'value');
#line 498
if (c_rt_lib::check_true($memory_20)) {goto label_37;}
#line 500
$memory_20 = c_rt_lib::ov_is($memory_19, 'none');
#line 500
if (c_rt_lib::check_true($memory_20)) {goto label_38;}
#line 500
$memory_20 = "NOMATCHALERT";
#line 500
$memory_20 = [$memory_20,$memory_19];
#line 500
die(dfile::ssave($memory_20));
#line 498
label_37:
#line 498
$memory_21 = c_rt_lib::ov_as($memory_19, 'value');
#line 499
$memory_23 = $memory_21->{'name'};
#line 499
$memory_22 = hash::has_key($memory_9, $memory_23);
#line 499
undef($memory_23);
#line 499
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 499
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 499
if (c_rt_lib::check_true($memory_22)) {goto label_40;}
#line 499
$memory_23 = $memory_21->{'name'};
#line 499
hash::delete($memory_17, $memory_23);
#line 499
undef($memory_23);
#line 499
goto label_40;
#line 499
label_40:
#line 499
undef($memory_22);
#line 499
undef($memory_21);
#line 500
goto label_36;
#line 500
label_38:
#line 501
goto label_36;
#line 501
label_36:
#line 501
undef($memory_19);
#line 501
undef($memory_20);
#line 502
$memory_19 = $memory_10;
#line 502
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 502
if (c_rt_lib::check_true($memory_19)) {goto label_42;}
#line 503
$memory_9 = $memory_17;
#line 504
goto label_41;
#line 504
label_42:
#line 505
type_checker_priv::join_vars($memory_9, $memory_17, $memory_1, $memory_3);
#line 506
goto label_41;
#line 506
label_41:
#line 506
undef($memory_19);
#line 507
$memory_19 = c_rt_lib::to_nl(0);
#line 507
$memory_10 = $memory_19;
#line 507
undef($memory_19);
#line 507
undef($memory_17);
#line 507
undef($memory_18);
#line 507
label_21:
#line 508
$memory_13 = $memory_13 + $memory_14;
#line 508
goto label_22;
#line 508
label_20:
#line 508
undef($memory_12);
#line 508
undef($memory_13);
#line 508
undef($memory_14);
#line 508
undef($memory_15);
#line 508
undef($memory_16);
#line 509
$memory_2 = $memory_9;
#line 509
undef($memory_4);
#line 509
undef($memory_5);
#line 509
undef($memory_6);
#line 509
undef($memory_7);
#line 509
undef($memory_8);
#line 509
undef($memory_9);
#line 509
undef($memory_10);
#line 509
undef($memory_11);
#line 509
undef($memory_0);
#line 509
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_val($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;my $memory_26;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 514
$memory_5 = tct::tct_im();
#line 514
$memory_6 = c_rt_lib::ov_mk_none('speculation');
#line 514
$memory_4 = {type => $memory_5,src => $memory_6,};
#line 514
undef($memory_5);
#line 514
undef($memory_6);
#line 515
$memory_5 = c_rt_lib::ov_is($memory_0, 'ternary_op');
#line 515
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 531
$memory_5 = c_rt_lib::ov_is($memory_0, 'hash_key');
#line 531
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 533
$memory_5 = c_rt_lib::ov_is($memory_0, 'nop');
#line 533
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 535
$memory_5 = c_rt_lib::ov_is($memory_0, 'parenthesis');
#line 535
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 537
$memory_5 = c_rt_lib::ov_is($memory_0, 'variant');
#line 537
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 551
$memory_5 = c_rt_lib::ov_is($memory_0, 'const');
#line 551
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 553
$memory_5 = c_rt_lib::ov_is($memory_0, 'arr_decl');
#line 553
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 573
$memory_5 = c_rt_lib::ov_is($memory_0, 'hash_decl');
#line 573
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 589
$memory_5 = c_rt_lib::ov_is($memory_0, 'var');
#line 589
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 600
$memory_5 = c_rt_lib::ov_is($memory_0, 'bin_op');
#line 600
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 602
$memory_5 = c_rt_lib::ov_is($memory_0, 'var_op');
#line 602
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 635
$memory_5 = c_rt_lib::ov_is($memory_0, 'unary_op');
#line 635
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 661
$memory_5 = c_rt_lib::ov_is($memory_0, 'fun_label');
#line 661
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 664
$memory_5 = c_rt_lib::ov_is($memory_0, 'fun_val');
#line 664
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 725
$memory_5 = c_rt_lib::ov_is($memory_0, 'string');
#line 725
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 727
$memory_5 = c_rt_lib::ov_is($memory_0, 'post_inc');
#line 727
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 729
$memory_5 = c_rt_lib::ov_is($memory_0, 'post_dec');
#line 729
if (c_rt_lib::check_true($memory_5)) {goto label_18;}
#line 729
$memory_5 = "NOMATCHALERT";
#line 729
$memory_5 = [$memory_5,$memory_0];
#line 729
die(dfile::ssave($memory_5));
#line 515
label_2:
#line 515
$memory_6 = c_rt_lib::ov_as($memory_0, 'ternary_op');
#line 516
$memory_8 = $memory_6->{'fst'};
#line 516
$memory_7 = type_checker_priv::check_val($memory_8, $memory_1, $memory_2, $memory_3);
#line 516
undef($memory_8);
#line 517
$memory_8 = ptd_system::is_condition_type($memory_7, $memory_1, $memory_3);
#line 517
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 517
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 517
if (c_rt_lib::check_true($memory_8)) {goto label_20;}
#line 517
$memory_9 = "ternary op first argument should be sim or boolean type instead of ";
#line 517
$memory_11 = $memory_7->{'type'};
#line 517
$memory_10 = type_checker_priv::get_print_tct_type_name($memory_11);
#line 517
undef($memory_11);
#line 517
$memory_9 = $memory_9 . $memory_10;
#line 517
undef($memory_10);
#line 517
type_checker_priv::add_error($memory_3, $memory_9);
#line 517
undef($memory_9);
#line 517
goto label_20;
#line 517
label_20:
#line 517
undef($memory_8);
#line 520
$memory_9 = $memory_6->{'snd'};
#line 520
$memory_8 = type_checker_priv::check_val($memory_9, $memory_1, $memory_2, $memory_3);
#line 520
undef($memory_9);
#line 520
$memory_8 = $memory_8->{'type'};
#line 521
$memory_9 = $memory_8;
#line 521
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_void');
#line 521
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 521
if (c_rt_lib::check_true($memory_9)) {goto label_22;}
#line 522
$memory_10 = $memory_8;
#line 522
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 522
undef($memory_10);
#line 523
goto label_21;
#line 523
label_22:
#line 524
$memory_11 = $memory_6->{'thrd'};
#line 524
$memory_10 = type_checker_priv::check_val($memory_11, $memory_1, $memory_2, $memory_3);
#line 524
undef($memory_11);
#line 524
$memory_10 = $memory_10->{'type'};
#line 525
$memory_11 = $memory_10;
#line 525
$memory_11 = c_rt_lib::ov_is($memory_11, 'tct_void');
#line 525
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 525
if (c_rt_lib::check_true($memory_11)) {goto label_24;}
#line 526
$memory_12 = $memory_10;
#line 526
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_12;
#line 526
undef($memory_12);
#line 527
goto label_23;
#line 527
label_24:
#line 528
$memory_12 = ptd_system::cross_type($memory_8, $memory_10, $memory_1, $memory_3);
#line 528
$memory_13 = $memory_12;
#line 528
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_13;
#line 528
undef($memory_12);
#line 528
undef($memory_13);
#line 529
goto label_23;
#line 529
label_23:
#line 529
undef($memory_11);
#line 529
undef($memory_10);
#line 530
goto label_21;
#line 530
label_21:
#line 530
undef($memory_9);
#line 530
undef($memory_7);
#line 530
undef($memory_8);
#line 530
undef($memory_6);
#line 531
goto label_1;
#line 531
label_3:
#line 531
$memory_6 = c_rt_lib::ov_as($memory_0, 'hash_key');
#line 532
$memory_7 = tct::sim();
#line 532
$memory_8 = $memory_7;
#line 532
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_8;
#line 532
undef($memory_7);
#line 532
undef($memory_8);
#line 532
undef($memory_6);
#line 533
goto label_1;
#line 533
label_4:
#line 534
$memory_6 = tct::empty();
#line 534
$memory_7 = $memory_6;
#line 534
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_7;
#line 534
undef($memory_6);
#line 534
undef($memory_7);
#line 535
goto label_1;
#line 535
label_5:
#line 535
$memory_6 = c_rt_lib::ov_as($memory_0, 'parenthesis');
#line 536
$memory_7 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 536
undef($memory_0);
#line 536
undef($memory_4);
#line 536
undef($memory_5);
#line 536
undef($memory_6);
#line 536
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 536
undef($memory_7);
#line 536
undef($memory_6);
#line 537
goto label_1;
#line 537
label_6:
#line 537
$memory_6 = c_rt_lib::ov_as($memory_0, 'variant');
#line 538
$memory_7 = $memory_6->{'name'};
#line 538
$memory_8 = "TRUE";
#line 538
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 538
undef($memory_8);
#line 538
if (c_rt_lib::check_true($memory_7)) {goto label_27;}
#line 538
$memory_7 = $memory_6->{'name'};
#line 538
$memory_8 = "FALSE";
#line 538
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_8);
#line 538
undef($memory_8);
#line 538
label_27:
#line 538
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 538
if (c_rt_lib::check_true($memory_7)) {goto label_26;}
#line 539
$memory_8 = tct::bool();
#line 539
$memory_9 = $memory_8;
#line 539
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 539
undef($memory_8);
#line 539
undef($memory_9);
#line 540
undef($memory_0);
#line 540
undef($memory_5);
#line 540
undef($memory_6);
#line 540
undef($memory_7);
#line 540
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 541
goto label_26;
#line 541
label_26:
#line 541
undef($memory_7);
#line 542
$memory_7 = {};
#line 543
$memory_8 = $memory_6->{'var'};
#line 543
$memory_8 = c_rt_lib::ov_is($memory_8, 'nop');
#line 543
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 543
if (c_rt_lib::check_true($memory_8)) {goto label_29;}
#line 544
$memory_9 = $memory_6->{'name'};
#line 544
$memory_10 = tct::none();
#line 544
hash::set_value($memory_7, $memory_9, $memory_10);
#line 544
undef($memory_10);
#line 544
undef($memory_9);
#line 545
goto label_28;
#line 545
label_29:
#line 546
$memory_10 = $memory_6->{'var'};
#line 546
$memory_9 = type_checker_priv::check_val($memory_10, $memory_1, $memory_2, $memory_3);
#line 546
undef($memory_10);
#line 547
$memory_10 = $memory_6->{'name'};
#line 547
$memory_11 = $memory_9->{'type'};
#line 547
hash::set_value($memory_7, $memory_10, $memory_11);
#line 547
undef($memory_11);
#line 547
undef($memory_10);
#line 548
$memory_10 = $memory_9->{'src'};
#line 548
$memory_11 = $memory_10;
#line 548
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'src'} = $memory_11;
#line 548
undef($memory_10);
#line 548
undef($memory_11);
#line 548
undef($memory_9);
#line 549
goto label_28;
#line 549
label_28:
#line 549
undef($memory_8);
#line 550
$memory_8 = tct::var($memory_7);
#line 550
$memory_9 = $memory_8;
#line 550
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 550
undef($memory_8);
#line 550
undef($memory_9);
#line 550
undef($memory_7);
#line 550
undef($memory_6);
#line 551
goto label_1;
#line 551
label_7:
#line 551
$memory_6 = c_rt_lib::ov_as($memory_0, 'const');
#line 552
$memory_7 = tct::sim();
#line 552
$memory_8 = $memory_7;
#line 552
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_8;
#line 552
undef($memory_7);
#line 552
undef($memory_8);
#line 552
undef($memory_6);
#line 553
goto label_1;
#line 553
label_8:
#line 553
$memory_6 = c_rt_lib::ov_as($memory_0, 'arr_decl');
#line 554
$memory_7 = array::len($memory_6);
#line 554
$memory_8 = 0;
#line 554
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_8);
#line 554
undef($memory_8);
#line 554
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 554
if (c_rt_lib::check_true($memory_7)) {goto label_31;}
#line 555
$memory_9 = tct::empty();
#line 555
$memory_8 = tct::arr($memory_9);
#line 555
undef($memory_9);
#line 555
$memory_9 = $memory_8;
#line 555
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 555
undef($memory_8);
#line 555
undef($memory_9);
#line 556
undef($memory_0);
#line 556
undef($memory_5);
#line 556
undef($memory_6);
#line 556
undef($memory_7);
#line 556
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 557
goto label_31;
#line 557
label_31:
#line 557
undef($memory_7);
#line 558
$memory_7 = [];
#line 559
$memory_8 = c_rt_lib::to_nl(0);
#line 560
$memory_10 = 0;
#line 560
$memory_11 = 1;
#line 560
$memory_12 = c_rt_lib::array_len($memory_6);
#line 560
label_34:
#line 560
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 560
if (c_rt_lib::check_true($memory_13)) {goto label_32;}
#line 560
$memory_9 = $memory_6->[$memory_10];
#line 561
$memory_14 = type_checker_priv::check_val($memory_9, $memory_1, $memory_2, $memory_3);
#line 562
array::push($memory_7, $memory_14);
#line 563
$memory_15 = type_checker_priv::is_known($memory_14);
#line 563
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 563
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 563
if (c_rt_lib::check_true($memory_15)) {goto label_36;}
#line 563
$memory_16 = c_rt_lib::to_nl(1);
#line 563
$memory_8 = $memory_16;
#line 563
undef($memory_16);
#line 563
goto label_36;
#line 563
label_36:
#line 563
undef($memory_15);
#line 563
undef($memory_14);
#line 564
$memory_10 = $memory_10 + $memory_11;
#line 564
goto label_34;
#line 564
label_32:
#line 564
undef($memory_9);
#line 564
undef($memory_10);
#line 564
undef($memory_11);
#line 564
undef($memory_12);
#line 564
undef($memory_13);
#line 565
$memory_10 = 0;
#line 565
$memory_9 = $memory_7->[$memory_10];
#line 565
undef($memory_10);
#line 565
$memory_9 = $memory_9->{'type'};
#line 566
$memory_10 = $memory_8;
#line 566
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 566
if (c_rt_lib::check_true($memory_10)) {goto label_38;}
#line 566
$memory_11 = tct::tct_im();
#line 566
$memory_13 = 0;
#line 566
$memory_12 = $memory_7->[$memory_13];
#line 566
undef($memory_13);
#line 566
ptd_system::check_assignment($memory_11, $memory_12, $memory_1, $memory_3);
#line 566
undef($memory_12);
#line 566
undef($memory_11);
#line 566
goto label_38;
#line 566
label_38:
#line 566
undef($memory_10);
#line 567
$memory_10 = 1;
#line 567
label_40:
#line 567
$memory_11 = array::len($memory_7);
#line 567
$memory_11 = c_rt_lib::to_nl($memory_10 < $memory_11);
#line 567
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 567
if (c_rt_lib::check_true($memory_11)) {goto label_39;}
#line 568
$memory_13 = $memory_7->[$memory_10];
#line 568
$memory_13 = $memory_13->{'type'};
#line 568
$memory_12 = ptd_system::cross_type($memory_9, $memory_13, $memory_1, $memory_3);
#line 568
undef($memory_13);
#line 568
$memory_9 = $memory_12;
#line 568
undef($memory_12);
#line 569
$memory_12 = $memory_8;
#line 569
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 569
if (c_rt_lib::check_true($memory_12)) {goto label_43;}
#line 569
$memory_13 = tct::tct_im();
#line 569
$memory_14 = $memory_7->[$memory_10];
#line 569
ptd_system::check_assignment($memory_13, $memory_14, $memory_1, $memory_3);
#line 569
undef($memory_14);
#line 569
undef($memory_13);
#line 569
goto label_43;
#line 569
label_43:
#line 569
undef($memory_12);
#line 569
$memory_12 = 1;
#line 569
$memory_10 = $memory_10 + $memory_12;
#line 569
undef($memory_12);
#line 570
goto label_40;
#line 570
label_39:
#line 570
undef($memory_10);
#line 570
undef($memory_11);
#line 571
$memory_10 = $memory_8;
#line 571
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 571
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 571
if (c_rt_lib::check_true($memory_10)) {goto label_45;}
#line 571
$memory_11 = c_rt_lib::ov_mk_none('known');
#line 571
$memory_12 = $memory_11;
#line 571
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'src'} = $memory_12;
#line 571
undef($memory_11);
#line 571
undef($memory_12);
#line 571
goto label_45;
#line 571
label_45:
#line 571
undef($memory_10);
#line 572
$memory_10 = tct::arr($memory_9);
#line 572
$memory_11 = $memory_10;
#line 572
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_11;
#line 572
undef($memory_10);
#line 572
undef($memory_11);
#line 572
undef($memory_7);
#line 572
undef($memory_8);
#line 572
undef($memory_9);
#line 572
undef($memory_6);
#line 573
goto label_1;
#line 573
label_9:
#line 573
$memory_6 = c_rt_lib::ov_as($memory_0, 'hash_decl');
#line 574
$memory_7 = {};
#line 575
$memory_8 = c_rt_lib::to_nl(0);
#line 576
$memory_10 = 0;
#line 576
$memory_11 = 1;
#line 576
$memory_12 = c_rt_lib::array_len($memory_6);
#line 576
label_48:
#line 576
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 576
if (c_rt_lib::check_true($memory_13)) {goto label_46;}
#line 576
$memory_9 = $memory_6->[$memory_10];
#line 577
$memory_14 = $memory_9->{'key'};
#line 577
$memory_14 = c_rt_lib::ov_as($memory_14, 'hash_key');
#line 578
$memory_16 = $memory_9->{'val'};
#line 578
$memory_15 = type_checker_priv::check_val($memory_16, $memory_1, $memory_2, $memory_3);
#line 578
undef($memory_16);
#line 579
hash::set_value($memory_7, $memory_14, $memory_15);
#line 580
$memory_16 = type_checker_priv::is_known($memory_15);
#line 580
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 580
$memory_16 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_16));
#line 580
if (c_rt_lib::check_true($memory_16)) {goto label_50;}
#line 580
$memory_17 = c_rt_lib::to_nl(1);
#line 580
$memory_8 = $memory_17;
#line 580
undef($memory_17);
#line 580
goto label_50;
#line 580
label_50:
#line 580
undef($memory_16);
#line 580
undef($memory_14);
#line 580
undef($memory_15);
#line 581
$memory_10 = $memory_10 + $memory_11;
#line 581
goto label_48;
#line 581
label_46:
#line 581
undef($memory_9);
#line 581
undef($memory_10);
#line 581
undef($memory_11);
#line 581
undef($memory_12);
#line 581
undef($memory_13);
#line 582
$memory_9 = {};
#line 583
$memory_12 = c_rt_lib::init_iter($memory_7);
#line 583
label_53:
#line 583
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 583
if (c_rt_lib::check_true($memory_10)) {goto label_51;}
#line 583
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 583
$memory_11 = c_rt_lib::hash_get_value($memory_7, $memory_10);
#line 584
$memory_13 = $memory_8;
#line 584
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 584
if (c_rt_lib::check_true($memory_13)) {goto label_55;}
#line 584
$memory_14 = tct::tct_im();
#line 584
ptd_system::check_assignment($memory_14, $memory_11, $memory_1, $memory_3);
#line 584
undef($memory_14);
#line 584
goto label_55;
#line 584
label_55:
#line 584
undef($memory_13);
#line 585
$memory_13 = $memory_11->{'type'};
#line 585
hash::set_value($memory_9, $memory_10, $memory_13);
#line 585
undef($memory_13);
#line 586
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 586
goto label_53;
#line 586
label_51:
#line 586
undef($memory_10);
#line 586
undef($memory_11);
#line 586
undef($memory_12);
#line 587
$memory_10 = $memory_8;
#line 587
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 587
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 587
if (c_rt_lib::check_true($memory_10)) {goto label_57;}
#line 587
$memory_11 = c_rt_lib::ov_mk_none('knownhash');
#line 587
$memory_12 = $memory_11;
#line 587
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'src'} = $memory_12;
#line 587
undef($memory_11);
#line 587
undef($memory_12);
#line 587
goto label_57;
#line 587
label_57:
#line 587
undef($memory_10);
#line 588
$memory_10 = tct::rec($memory_9);
#line 588
$memory_11 = $memory_10;
#line 588
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_11;
#line 588
undef($memory_10);
#line 588
undef($memory_11);
#line 588
undef($memory_7);
#line 588
undef($memory_8);
#line 588
undef($memory_9);
#line 588
undef($memory_6);
#line 589
goto label_1;
#line 589
label_10:
#line 589
$memory_6 = c_rt_lib::ov_as($memory_0, 'var');
#line 590
$memory_7 = hash::has_key($memory_2, $memory_6);
#line 590
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 590
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 590
if (c_rt_lib::check_true($memory_7)) {goto label_59;}
#line 591
$memory_8 = "variable `";
#line 591
$memory_8 = $memory_8 . $memory_6;
#line 591
$memory_9 = "' does not exist";
#line 591
$memory_8 = $memory_8 . $memory_9;
#line 591
undef($memory_9);
#line 591
type_checker_priv::add_error($memory_3, $memory_8);
#line 591
undef($memory_8);
#line 592
undef($memory_0);
#line 592
undef($memory_5);
#line 592
undef($memory_6);
#line 592
undef($memory_7);
#line 592
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 593
goto label_59;
#line 593
label_59:
#line 593
undef($memory_7);
#line 594
$memory_7 = hash::get_value($memory_2, $memory_6);
#line 595
$memory_8 = $memory_7->{'overwrited'};
#line 595
$memory_9 = c_rt_lib::ov_is($memory_8, 'yes');
#line 595
if (c_rt_lib::check_true($memory_9)) {goto label_61;}
#line 597
$memory_9 = c_rt_lib::ov_is($memory_8, 'no');
#line 597
if (c_rt_lib::check_true($memory_9)) {goto label_62;}
#line 597
$memory_9 = "NOMATCHALERT";
#line 597
$memory_9 = [$memory_9,$memory_8];
#line 597
die(dfile::ssave($memory_9));
#line 595
label_61:
#line 596
$memory_11 = $memory_7->{'type'};
#line 596
$memory_12 = c_rt_lib::ov_mk_none('speculation');
#line 596
$memory_10 = {type => $memory_11,src => $memory_12,};
#line 596
undef($memory_11);
#line 596
undef($memory_12);
#line 596
undef($memory_0);
#line 596
undef($memory_4);
#line 596
undef($memory_5);
#line 596
undef($memory_6);
#line 596
undef($memory_7);
#line 596
undef($memory_8);
#line 596
undef($memory_9);
#line 596
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_10;
#line 596
undef($memory_10);
#line 597
goto label_60;
#line 597
label_62:
#line 598
$memory_11 = $memory_7->{'type'};
#line 598
$memory_12 = c_rt_lib::ov_mk_none('known');
#line 598
$memory_10 = {type => $memory_11,src => $memory_12,};
#line 598
undef($memory_11);
#line 598
undef($memory_12);
#line 598
undef($memory_0);
#line 598
undef($memory_4);
#line 598
undef($memory_5);
#line 598
undef($memory_6);
#line 598
undef($memory_7);
#line 598
undef($memory_8);
#line 598
undef($memory_9);
#line 598
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_10;
#line 598
undef($memory_10);
#line 599
goto label_60;
#line 599
label_60:
#line 599
undef($memory_8);
#line 599
undef($memory_9);
#line 599
undef($memory_7);
#line 599
undef($memory_6);
#line 600
goto label_1;
#line 600
label_11:
#line 600
$memory_6 = c_rt_lib::ov_as($memory_0, 'bin_op');
#line 601
$memory_7 = type_checker_priv::get_type_from_bin_op_and_check($memory_6, $memory_1, $memory_2, $memory_3);
#line 601
undef($memory_0);
#line 601
undef($memory_4);
#line 601
undef($memory_5);
#line 601
undef($memory_6);
#line 601
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 601
undef($memory_7);
#line 601
undef($memory_6);
#line 602
goto label_1;
#line 602
label_12:
#line 602
$memory_6 = c_rt_lib::ov_as($memory_0, 'var_op');
#line 603
$memory_9 = $memory_6->{'left'};
#line 603
$memory_8 = type_checker_priv::check_val($memory_9, $memory_1, $memory_2, $memory_3);
#line 603
undef($memory_9);
#line 603
$memory_7 = ptd_system::can_delete($memory_8, $memory_1, $memory_3);
#line 603
undef($memory_8);
#line 606
$memory_9 = $memory_6->{'op'};
#line 606
$memory_10 = c_rt_lib::ov_is($memory_9, 'ov_is');
#line 606
if (c_rt_lib::check_true($memory_10)) {goto label_64;}
#line 608
$memory_10 = c_rt_lib::ov_is($memory_9, 'ov_as');
#line 608
if (c_rt_lib::check_true($memory_10)) {goto label_65;}
#line 608
$memory_10 = "NOMATCHALERT";
#line 608
$memory_10 = [$memory_10,$memory_9];
#line 608
die(dfile::ssave($memory_10));
#line 606
label_64:
#line 607
$memory_12 = tct::bool();
#line 607
$memory_13 = c_rt_lib::ov_mk_none('speculation');
#line 607
$memory_11 = {type => $memory_12,src => $memory_13,};
#line 607
undef($memory_12);
#line 607
undef($memory_13);
#line 607
$memory_8 = $memory_11;
#line 607
undef($memory_11);
#line 608
goto label_63;
#line 608
label_65:
#line 609
$memory_12 = tct::tct_im();
#line 609
$memory_13 = $memory_7->{'src'};
#line 609
$memory_11 = {type => $memory_12,src => $memory_13,};
#line 609
undef($memory_12);
#line 609
undef($memory_13);
#line 609
$memory_8 = $memory_11;
#line 609
undef($memory_11);
#line 610
goto label_63;
#line 610
label_63:
#line 610
undef($memory_9);
#line 610
undef($memory_10);
#line 611
$memory_11 = {};
#line 611
$memory_10 = tct::var($memory_11);
#line 611
undef($memory_11);
#line 611
$memory_9 = ptd_system::is_accepted($memory_7, $memory_10, $memory_1, $memory_3);
#line 611
undef($memory_10);
#line 611
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 611
if (c_rt_lib::check_true($memory_9)) {goto label_67;}
#line 612
$memory_10 = $memory_7->{'type'};
#line 612
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_var');
#line 612
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 612
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 612
if (c_rt_lib::check_true($memory_10)) {goto label_69;}
#line 612
undef($memory_0);
#line 612
undef($memory_4);
#line 612
undef($memory_5);
#line 612
undef($memory_6);
#line 612
undef($memory_7);
#line 612
undef($memory_9);
#line 612
undef($memory_10);
#line 612
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 612
goto label_69;
#line 612
label_69:
#line 612
undef($memory_10);
#line 613
$memory_10 = $memory_7->{'type'};
#line 613
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_var');
#line 614
$memory_12 = $memory_6->{'case'};
#line 614
$memory_11 = hash::has_key($memory_10, $memory_12);
#line 614
undef($memory_12);
#line 614
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 614
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 614
if (c_rt_lib::check_true($memory_11)) {goto label_71;}
#line 615
$memory_12 = "case ";
#line 615
$memory_13 = $memory_6->{'case'};
#line 615
$memory_12 = $memory_12 . $memory_13;
#line 615
undef($memory_13);
#line 615
$memory_13 = " don't exists is: ";
#line 615
$memory_12 = $memory_12 . $memory_13;
#line 615
undef($memory_13);
#line 615
$memory_14 = $memory_7->{'type'};
#line 615
$memory_13 = type_checker_priv::get_print_tct_type_name($memory_14);
#line 615
undef($memory_14);
#line 615
$memory_12 = $memory_12 . $memory_13;
#line 615
undef($memory_13);
#line 615
type_checker_priv::add_error($memory_3, $memory_12);
#line 615
undef($memory_12);
#line 617
undef($memory_0);
#line 617
undef($memory_4);
#line 617
undef($memory_5);
#line 617
undef($memory_6);
#line 617
undef($memory_7);
#line 617
undef($memory_9);
#line 617
undef($memory_10);
#line 617
undef($memory_11);
#line 617
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 618
goto label_71;
#line 618
label_71:
#line 618
undef($memory_11);
#line 619
$memory_11 = $memory_6->{'op'};
#line 619
$memory_12 = c_rt_lib::ov_is($memory_11, 'ov_is');
#line 619
if (c_rt_lib::check_true($memory_12)) {goto label_73;}
#line 620
$memory_12 = c_rt_lib::ov_is($memory_11, 'ov_as');
#line 620
if (c_rt_lib::check_true($memory_12)) {goto label_74;}
#line 620
$memory_12 = "NOMATCHALERT";
#line 620
$memory_12 = [$memory_12,$memory_11];
#line 620
die(dfile::ssave($memory_12));
#line 619
label_73:
#line 620
goto label_72;
#line 620
label_74:
#line 621
$memory_14 = $memory_6->{'case'};
#line 621
$memory_13 = hash::get_value($memory_10, $memory_14);
#line 621
undef($memory_14);
#line 622
$memory_14 = c_rt_lib::ov_is($memory_13, 'with_param');
#line 622
if (c_rt_lib::check_true($memory_14)) {goto label_76;}
#line 624
$memory_14 = c_rt_lib::ov_is($memory_13, 'no_param');
#line 624
if (c_rt_lib::check_true($memory_14)) {goto label_77;}
#line 624
$memory_14 = "NOMATCHALERT";
#line 624
$memory_14 = [$memory_14,$memory_13];
#line 624
die(dfile::ssave($memory_14));
#line 622
label_76:
#line 622
$memory_15 = c_rt_lib::ov_as($memory_13, 'with_param');
#line 623
$memory_16 = $memory_15;
#line 623
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'type'} = $memory_16;
#line 623
undef($memory_16);
#line 623
undef($memory_15);
#line 624
goto label_75;
#line 624
label_77:
#line 625
$memory_15 = "case ";
#line 625
$memory_16 = $memory_6->{'case'};
#line 625
$memory_15 = $memory_15 . $memory_16;
#line 625
undef($memory_16);
#line 625
$memory_16 = " don't have value: ";
#line 625
$memory_15 = $memory_15 . $memory_16;
#line 625
undef($memory_16);
#line 625
$memory_17 = $memory_7->{'type'};
#line 625
$memory_16 = type_checker_priv::get_print_tct_type_name($memory_17);
#line 625
undef($memory_17);
#line 625
$memory_15 = $memory_15 . $memory_16;
#line 625
undef($memory_16);
#line 625
type_checker_priv::add_error($memory_3, $memory_15);
#line 625
undef($memory_15);
#line 627
goto label_75;
#line 627
label_75:
#line 627
undef($memory_14);
#line 627
undef($memory_13);
#line 628
goto label_72;
#line 628
label_72:
#line 628
undef($memory_11);
#line 628
undef($memory_12);
#line 629
undef($memory_0);
#line 629
undef($memory_4);
#line 629
undef($memory_5);
#line 629
undef($memory_6);
#line 629
undef($memory_7);
#line 629
undef($memory_9);
#line 629
undef($memory_10);
#line 629
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 629
undef($memory_10);
#line 630
goto label_66;
#line 630
label_67:
#line 631
$memory_10 = "binary operator 'as/is' can be applied only to variant: ";
#line 631
$memory_12 = $memory_7->{'type'};
#line 631
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 631
undef($memory_12);
#line 631
$memory_10 = $memory_10 . $memory_11;
#line 631
undef($memory_11);
#line 631
type_checker_priv::add_error($memory_3, $memory_10);
#line 631
undef($memory_10);
#line 633
undef($memory_0);
#line 633
undef($memory_4);
#line 633
undef($memory_5);
#line 633
undef($memory_6);
#line 633
undef($memory_7);
#line 633
undef($memory_9);
#line 633
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 634
goto label_66;
#line 634
label_66:
#line 634
undef($memory_9);
#line 634
undef($memory_7);
#line 634
undef($memory_8);
#line 634
undef($memory_6);
#line 635
goto label_1;
#line 635
label_13:
#line 635
$memory_6 = c_rt_lib::ov_as($memory_0, 'unary_op');
#line 636
$memory_8 = $memory_6->{'val'};
#line 636
$memory_7 = type_checker_priv::check_val($memory_8, $memory_1, $memory_2, $memory_3);
#line 636
undef($memory_8);
#line 637
$memory_8 = $memory_6->{'op'};
#line 637
$memory_9 = "!";
#line 637
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 637
undef($memory_9);
#line 637
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 637
if (c_rt_lib::check_true($memory_8)) {goto label_79;}
#line 638
$memory_9 = ptd_system::is_condition_type($memory_7, $memory_1, $memory_3);
#line 638
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 638
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 638
if (c_rt_lib::check_true($memory_9)) {goto label_81;}
#line 639
$memory_10 = "incorrect type of argument operator '!' : ";
#line 639
$memory_12 = $memory_7->{'type'};
#line 639
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 639
undef($memory_12);
#line 639
$memory_10 = $memory_10 . $memory_11;
#line 639
undef($memory_11);
#line 639
type_checker_priv::add_error($memory_3, $memory_10);
#line 639
undef($memory_10);
#line 641
goto label_81;
#line 641
label_81:
#line 641
undef($memory_9);
#line 642
$memory_9 = tct::bool();
#line 642
$memory_10 = $memory_9;
#line 642
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 642
undef($memory_9);
#line 642
undef($memory_10);
#line 643
undef($memory_0);
#line 643
undef($memory_5);
#line 643
undef($memory_6);
#line 643
undef($memory_7);
#line 643
undef($memory_8);
#line 643
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 644
goto label_78;
#line 644
label_79:
#line 644
$memory_8 = $memory_6->{'op'};
#line 644
$memory_9 = "\@";
#line 644
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 644
undef($memory_9);
#line 644
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 644
if (c_rt_lib::check_true($memory_8)) {goto label_82;}
#line 645
$memory_10 = tct::func();
#line 645
$memory_9 = ptd_system::is_accepted($memory_7, $memory_10, $memory_1, $memory_3);
#line 645
undef($memory_10);
#line 645
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 645
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 645
if (c_rt_lib::check_true($memory_9)) {goto label_84;}
#line 646
$memory_10 = "incorrect type of argument operator '";
#line 646
$memory_11 = $memory_6->{'op'};
#line 646
$memory_10 = $memory_10 . $memory_11;
#line 646
undef($memory_11);
#line 646
$memory_11 = "' : ";
#line 646
$memory_10 = $memory_10 . $memory_11;
#line 646
undef($memory_11);
#line 646
$memory_12 = $memory_7->{'type'};
#line 646
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 646
undef($memory_12);
#line 646
$memory_10 = $memory_10 . $memory_11;
#line 646
undef($memory_11);
#line 646
type_checker_priv::add_error($memory_3, $memory_10);
#line 646
undef($memory_10);
#line 648
goto label_84;
#line 648
label_84:
#line 648
undef($memory_9);
#line 649
$memory_11 = tct::func();
#line 649
$memory_10 = {ref => $memory_11,};
#line 649
undef($memory_11);
#line 649
$memory_9 = tct::var($memory_10);
#line 649
undef($memory_10);
#line 649
$memory_10 = $memory_9;
#line 649
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 649
undef($memory_9);
#line 649
undef($memory_10);
#line 650
undef($memory_0);
#line 650
undef($memory_5);
#line 650
undef($memory_6);
#line 650
undef($memory_7);
#line 650
undef($memory_8);
#line 650
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 651
goto label_78;
#line 651
label_82:
#line 651
$memory_8 = $memory_6->{'op'};
#line 651
$memory_9 = "--";
#line 651
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 651
undef($memory_9);
#line 651
if (c_rt_lib::check_true($memory_8)) {goto label_86;}
#line 651
$memory_8 = $memory_6->{'op'};
#line 651
$memory_9 = "++";
#line 651
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 651
undef($memory_9);
#line 651
label_86:
#line 651
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 651
if (c_rt_lib::check_true($memory_8)) {goto label_85;}
#line 652
$memory_10 = $memory_6->{'val'};
#line 652
$memory_11 = "incorrect type of argument operator '";
#line 652
$memory_12 = $memory_6->{'op'};
#line 652
$memory_11 = $memory_11 . $memory_12;
#line 652
undef($memory_12);
#line 652
$memory_12 = "' : ";
#line 652
$memory_11 = $memory_11 . $memory_12;
#line 652
undef($memory_12);
#line 652
$memory_9 = type_checker_priv::unary_op_dec_inc($memory_10, $memory_11, $memory_1, $memory_2, $memory_3);
#line 652
undef($memory_11);
#line 652
undef($memory_10);
#line 652
undef($memory_0);
#line 652
undef($memory_4);
#line 652
undef($memory_5);
#line 652
undef($memory_6);
#line 652
undef($memory_7);
#line 652
undef($memory_8);
#line 652
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 652
undef($memory_9);
#line 654
goto label_78;
#line 654
label_85:
#line 655
$memory_10 = tct::sim();
#line 655
$memory_9 = ptd_system::is_accepted($memory_7, $memory_10, $memory_1, $memory_3);
#line 655
undef($memory_10);
#line 655
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 655
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 655
if (c_rt_lib::check_true($memory_9)) {goto label_88;}
#line 656
$memory_10 = "incorrect type of argument operator '";
#line 656
$memory_11 = $memory_6->{'op'};
#line 656
$memory_10 = $memory_10 . $memory_11;
#line 656
undef($memory_11);
#line 656
$memory_11 = "' : ";
#line 656
$memory_10 = $memory_10 . $memory_11;
#line 656
undef($memory_11);
#line 656
$memory_12 = $memory_7->{'type'};
#line 656
$memory_11 = type_checker_priv::get_print_tct_type_name($memory_12);
#line 656
undef($memory_12);
#line 656
$memory_10 = $memory_10 . $memory_11;
#line 656
undef($memory_11);
#line 656
type_checker_priv::add_error($memory_3, $memory_10);
#line 656
undef($memory_10);
#line 658
goto label_88;
#line 658
label_88:
#line 658
undef($memory_9);
#line 659
goto label_78;
#line 659
label_78:
#line 659
undef($memory_8);
#line 660
$memory_8 = tct::sim();
#line 660
$memory_9 = $memory_8;
#line 660
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 660
undef($memory_8);
#line 660
undef($memory_9);
#line 660
undef($memory_7);
#line 660
undef($memory_6);
#line 661
goto label_1;
#line 661
label_14:
#line 661
$memory_6 = c_rt_lib::ov_as($memory_0, 'fun_label');
#line 662
$memory_7 = $memory_6->{'module'};
#line 662
$memory_8 = $memory_6->{'name'};
#line 662
type_checker_priv::check_function_exists($memory_7, $memory_8, $memory_1, $memory_3);
#line 662
undef($memory_8);
#line 662
undef($memory_7);
#line 663
$memory_7 = tct::func();
#line 663
$memory_8 = $memory_7;
#line 663
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_8;
#line 663
undef($memory_7);
#line 663
undef($memory_8);
#line 663
undef($memory_6);
#line 664
goto label_1;
#line 664
label_15:
#line 664
$memory_6 = c_rt_lib::ov_as($memory_0, 'fun_val');
#line 665
$memory_7 = [];
#line 666
$memory_8 = $memory_6->{'args'};
#line 666
$memory_10 = 0;
#line 666
$memory_11 = 1;
#line 666
$memory_12 = c_rt_lib::array_len($memory_8);
#line 666
label_91:
#line 666
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 666
if (c_rt_lib::check_true($memory_13)) {goto label_89;}
#line 666
$memory_9 = $memory_8->[$memory_10];
#line 667
$memory_15 = $memory_9->{'val'};
#line 667
$memory_14 = type_checker_priv::check_val($memory_15, $memory_1, $memory_2, $memory_3);
#line 667
undef($memory_15);
#line 667
array::push($memory_7, $memory_14);
#line 667
undef($memory_14);
#line 668
$memory_10 = $memory_10 + $memory_11;
#line 668
goto label_91;
#line 668
label_89:
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
$memory_9 = $memory_6->{'module'};
#line 669
$memory_10 = $memory_6->{'name'};
#line 669
$memory_8 = type_checker_priv::get_special_function_def($memory_9, $memory_10);
#line 669
undef($memory_10);
#line 669
undef($memory_9);
#line 670
$memory_9 = c_rt_lib::to_nl(0);
#line 671
$memory_10 = $memory_8->{'access'};
#line 671
$memory_11 = c_rt_lib::ov_is($memory_10, 'pub');
#line 671
if (c_rt_lib::check_true($memory_11)) {goto label_93;}
#line 677
$memory_11 = c_rt_lib::ov_is($memory_10, 'priv');
#line 677
if (c_rt_lib::check_true($memory_11)) {goto label_94;}
#line 677
$memory_11 = "NOMATCHALERT";
#line 677
$memory_11 = [$memory_11,$memory_10];
#line 677
die(dfile::ssave($memory_11));
#line 671
label_93:
#line 672
$memory_12 = c_rt_lib::to_nl(1);
#line 672
$memory_9 = $memory_12;
#line 672
undef($memory_12);
#line 673
$memory_13 = $memory_1->{'imports'};
#line 673
$memory_14 = $memory_6->{'module'};
#line 673
$memory_12 = hash::has_key($memory_13, $memory_14);
#line 673
undef($memory_14);
#line 673
undef($memory_13);
#line 673
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 673
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 673
if (c_rt_lib::check_true($memory_12)) {goto label_96;}
#line 674
$memory_13 = "module '";
#line 674
$memory_14 = $memory_6->{'module'};
#line 674
$memory_13 = $memory_13 . $memory_14;
#line 674
undef($memory_14);
#line 674
$memory_14 = "' not imported";
#line 674
$memory_13 = $memory_13 . $memory_14;
#line 674
undef($memory_14);
#line 674
type_checker_priv::add_error($memory_3, $memory_13);
#line 674
undef($memory_13);
#line 675
$memory_13 = "imports";
#line 675
$memory_13 = c_rt_lib::get_ref_hash($memory_1, $memory_13);
#line 675
$memory_14 = $memory_6->{'module'};
#line 675
$memory_15 = c_rt_lib::to_nl(0);
#line 675
hash::set_value($memory_13, $memory_14, $memory_15);
#line 675
undef($memory_15);
#line 675
undef($memory_14);
#line 675
$memory_14 = "imports";
#line 675
c_rt_lib::set_ref_hash($memory_1, $memory_14, $memory_13);
#line 675
undef($memory_14);
#line 675
undef($memory_13);
#line 676
goto label_96;
#line 676
label_96:
#line 676
undef($memory_12);
#line 677
goto label_92;
#line 677
label_94:
#line 678
$memory_13 = $memory_6->{'module'};
#line 678
$memory_14 = $memory_6->{'name'};
#line 678
$memory_12 = type_checker_priv::check_function_exists($memory_13, $memory_14, $memory_1, $memory_3);
#line 678
undef($memory_14);
#line 678
undef($memory_13);
#line 678
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 678
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 678
if (c_rt_lib::check_true($memory_12)) {goto label_98;}
#line 678
undef($memory_0);
#line 678
undef($memory_5);
#line 678
undef($memory_6);
#line 678
undef($memory_7);
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
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 678
goto label_98;
#line 678
label_98:
#line 678
undef($memory_12);
#line 679
$memory_13 = $memory_6->{'module'};
#line 679
$memory_14 = $memory_6->{'name'};
#line 679
$memory_12 = type_checker_priv::get_function_def($memory_13, $memory_14, $memory_1);
#line 679
undef($memory_14);
#line 679
undef($memory_13);
#line 679
$memory_8 = $memory_12;
#line 679
undef($memory_12);
#line 680
goto label_92;
#line 680
label_92:
#line 680
undef($memory_10);
#line 680
undef($memory_11);
#line 681
$memory_11 = $memory_6->{'args'};
#line 681
$memory_10 = array::len($memory_11);
#line 681
undef($memory_11);
#line 681
$memory_12 = $memory_8->{'args'};
#line 681
$memory_11 = array::len($memory_12);
#line 681
undef($memory_12);
#line 681
$memory_10 = c_rt_lib::to_nl($memory_10 != $memory_11);
#line 681
undef($memory_11);
#line 681
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 681
if (c_rt_lib::check_true($memory_10)) {goto label_100;}
#line 682
$memory_11 = "wrong number ";
#line 682
$memory_13 = $memory_6->{'args'};
#line 682
$memory_12 = array::len($memory_13);
#line 682
undef($memory_13);
#line 682
$memory_11 = $memory_11 . $memory_12;
#line 682
undef($memory_12);
#line 682
$memory_12 = " of function arguments : ";
#line 682
$memory_11 = $memory_11 . $memory_12;
#line 682
undef($memory_12);
#line 682
$memory_13 = $memory_6->{'module'};
#line 682
$memory_14 = $memory_6->{'name'};
#line 682
$memory_12 = type_checker_priv::get_function_name($memory_13, $memory_14);
#line 682
undef($memory_14);
#line 682
undef($memory_13);
#line 682
$memory_11 = $memory_11 . $memory_12;
#line 682
undef($memory_12);
#line 682
type_checker_priv::add_error($memory_3, $memory_11);
#line 682
undef($memory_11);
#line 684
undef($memory_0);
#line 684
undef($memory_5);
#line 684
undef($memory_6);
#line 684
undef($memory_7);
#line 684
undef($memory_8);
#line 684
undef($memory_9);
#line 684
undef($memory_10);
#line 684
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 685
goto label_100;
#line 685
label_100:
#line 685
undef($memory_10);
#line 686
$memory_10 = {};
#line 687
$memory_12 = $memory_6->{'args'};
#line 687
$memory_11 = array::len($memory_12);
#line 687
undef($memory_12);
#line 687
$memory_12 = 0;
#line 687
$memory_13 = 1;
#line 687
label_103:
#line 687
$memory_14 = c_rt_lib::to_nl($memory_12 >= $memory_11);
#line 687
if (c_rt_lib::check_true($memory_14)) {goto label_101;}
#line 688
$memory_15 = $memory_6->{'args'};
#line 688
$memory_15 = $memory_15->[$memory_12];
#line 689
$memory_16 = $memory_8->{'args'};
#line 689
$memory_16 = $memory_16->[$memory_12];
#line 690
$memory_18 = $memory_16->{'mod'};
#line 690
$memory_19 = $memory_15->{'mod'};
#line 690
$memory_17 = enum::eq($memory_18, $memory_19);
#line 690
undef($memory_19);
#line 690
undef($memory_18);
#line 690
if (c_rt_lib::check_true($memory_17)) {goto label_106;}
#line 690
$memory_19 = $memory_16->{'mod'};
#line 690
$memory_20 = c_rt_lib::ov_mk_none('fun');
#line 690
$memory_17 = enum::eq($memory_19, $memory_20);
#line 690
undef($memory_20);
#line 690
undef($memory_19);
#line 690
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 690
if (c_rt_lib::check_true($memory_18)) {goto label_107;}
#line 690
$memory_19 = $memory_15->{'mod'};
#line 690
$memory_20 = c_rt_lib::ov_mk_none('none');
#line 690
$memory_17 = enum::eq($memory_19, $memory_20);
#line 690
undef($memory_20);
#line 690
undef($memory_19);
#line 690
label_107:
#line 690
undef($memory_18);
#line 690
label_106:
#line 690
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 690
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 690
if (c_rt_lib::check_true($memory_17)) {goto label_105;}
#line 690
$memory_18 = "arg no. ";
#line 690
$memory_19 = 1;
#line 690
$memory_19 = $memory_12 + $memory_19;
#line 690
$memory_18 = $memory_18 . $memory_19;
#line 690
undef($memory_19);
#line 690
$memory_19 = " '";
#line 690
$memory_18 = $memory_18 . $memory_19;
#line 690
undef($memory_19);
#line 690
$memory_19 = $memory_16->{'name'};
#line 690
$memory_18 = $memory_18 . $memory_19;
#line 690
undef($memory_19);
#line 690
$memory_19 = "' ref mismatched with function prototype";
#line 690
$memory_18 = $memory_18 . $memory_19;
#line 690
undef($memory_19);
#line 690
type_checker_priv::add_error($memory_3, $memory_18);
#line 690
undef($memory_18);
#line 690
goto label_105;
#line 690
label_105:
#line 690
undef($memory_17);
#line 696
$memory_18 = $memory_9;
#line 696
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 696
if (c_rt_lib::check_true($memory_18)) {goto label_109;}
#line 697
$memory_19 = $memory_7->[$memory_12];
#line 698
$memory_20 = c_rt_lib::ov_mk_none('speculation');
#line 698
$memory_21 = $memory_20;
#line 698
 if (c_rt_lib::get_hashcount($memory_19) > 1) {$memory_19 = {%{$memory_19}};}$memory_19->{'src'} = $memory_21;
#line 698
undef($memory_20);
#line 698
undef($memory_21);
#line 699
$memory_21 = $memory_16->{'type'};
#line 699
$memory_20 = ptd_system::is_accepted_info($memory_19, $memory_21, $memory_1, $memory_3);
#line 699
undef($memory_21);
#line 699
$memory_17 = $memory_20;
#line 699
undef($memory_20);
#line 699
undef($memory_19);
#line 700
goto label_108;
#line 700
label_109:
#line 701
$memory_19 = $memory_16->{'mod'};
#line 701
$memory_19 = c_rt_lib::ov_is($memory_19, 'ref');
#line 701
$memory_19 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_19));
#line 701
if (c_rt_lib::check_true($memory_19)) {goto label_111;}
#line 702
$memory_21 = $memory_3->{'errors'};
#line 702
$memory_20 = array::len($memory_21);
#line 702
undef($memory_21);
#line 703
$memory_22 = $memory_15->{'val'};
#line 703
$memory_21 = type_checker_priv::rec_get_var_from_lval($memory_22, $memory_3);
#line 703
undef($memory_22);
#line 704
$memory_23 = $memory_3->{'errors'};
#line 704
$memory_22 = array::len($memory_23);
#line 704
undef($memory_23);
#line 704
$memory_22 = c_rt_lib::to_nl($memory_20 == $memory_22);
#line 704
$memory_22 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_22));
#line 704
if (c_rt_lib::check_true($memory_22)) {goto label_113;}
#line 705
$memory_24 = 0;
#line 705
$memory_23 = $memory_21->[$memory_24];
#line 705
undef($memory_24);
#line 705
$memory_23 = c_rt_lib::ov_as($memory_23, 'var');
#line 706
$memory_24 = hash::has_key($memory_10, $memory_23);
#line 706
$memory_24 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_24));
#line 706
if (c_rt_lib::check_true($memory_24)) {goto label_115;}
#line 707
$memory_25 = "many ref-arguments come from the same variable: ";
#line 707
$memory_25 = $memory_25 . $memory_23;
#line 707
type_checker_priv::add_warning($memory_3, $memory_25);
#line 707
undef($memory_25);
#line 708
goto label_115;
#line 708
label_115:
#line 708
undef($memory_24);
#line 709
$memory_24 = 0;
#line 709
hash::set_value($memory_10, $memory_23, $memory_24);
#line 709
undef($memory_24);
#line 710
$memory_25 = $memory_16->{'type'};
#line 710
$memory_26 = c_rt_lib::ov_mk_none('known');
#line 710
$memory_24 = {type => $memory_25,src => $memory_26,};
#line 710
undef($memory_25);
#line 710
undef($memory_26);
#line 711
$memory_25 = $memory_15->{'val'};
#line 711
$memory_26 = $memory_7->[$memory_12];
#line 711
type_checker_priv::set_type_to_lval($memory_25, $memory_26, $memory_24, $memory_1, $memory_2, $memory_3);
#line 711
undef($memory_26);
#line 711
undef($memory_25);
#line 711
undef($memory_23);
#line 711
undef($memory_24);
#line 712
goto label_113;
#line 712
label_113:
#line 712
undef($memory_22);
#line 712
undef($memory_20);
#line 712
undef($memory_21);
#line 713
goto label_111;
#line 713
label_111:
#line 713
undef($memory_19);
#line 714
$memory_20 = $memory_16->{'type'};
#line 714
$memory_21 = $memory_7->[$memory_12];
#line 714
$memory_19 = ptd_system::check_assignment($memory_20, $memory_21, $memory_1, $memory_3);
#line 714
undef($memory_21);
#line 714
undef($memory_20);
#line 714
$memory_17 = $memory_19;
#line 714
undef($memory_19);
#line 716
goto label_108;
#line 716
label_108:
#line 716
undef($memory_18);
#line 717
$memory_18 = $memory_17;
#line 717
$memory_18 = c_rt_lib::ov_is($memory_18, 'err');
#line 717
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 717
if (c_rt_lib::check_true($memory_18)) {goto label_117;}
#line 718
$memory_19 = "In function call: ";
#line 718
$memory_21 = $memory_6->{'module'};
#line 718
$memory_22 = $memory_6->{'name'};
#line 718
$memory_20 = type_checker_priv::get_function_name($memory_21, $memory_22);
#line 718
undef($memory_22);
#line 718
undef($memory_21);
#line 718
$memory_19 = $memory_19 . $memory_20;
#line 718
undef($memory_20);
#line 718
$memory_20 = " argument no.";
#line 718
$memory_19 = $memory_19 . $memory_20;
#line 718
undef($memory_20);
#line 718
$memory_20 = 1;
#line 718
$memory_20 = $memory_12 + $memory_20;
#line 718
$memory_19 = $memory_19 . $memory_20;
#line 718
undef($memory_20);
#line 718
$memory_20 = " '";
#line 718
$memory_19 = $memory_19 . $memory_20;
#line 718
undef($memory_20);
#line 718
$memory_20 = $memory_16->{'name'};
#line 718
$memory_19 = $memory_19 . $memory_20;
#line 718
undef($memory_20);
#line 718
$memory_20 = "' has invalid type: ";
#line 718
$memory_19 = $memory_19 . $memory_20;
#line 718
undef($memory_20);
#line 718
$memory_20 = type_checker_priv::get_print_check_info($memory_17);
#line 718
$memory_19 = $memory_19 . $memory_20;
#line 718
undef($memory_20);
#line 718
type_checker_priv::add_error($memory_3, $memory_19);
#line 718
undef($memory_19);
#line 721
goto label_117;
#line 721
label_117:
#line 721
undef($memory_18);
#line 721
undef($memory_15);
#line 721
undef($memory_16);
#line 721
undef($memory_17);
#line 722
$memory_12 = $memory_12 + $memory_13;
#line 722
goto label_103;
#line 722
label_101:
#line 722
undef($memory_11);
#line 722
undef($memory_12);
#line 722
undef($memory_13);
#line 722
undef($memory_14);
#line 723
$memory_13 = $memory_8->{'ret_type'};
#line 723
$memory_14 = c_rt_lib::ov_mk_none('known');
#line 723
$memory_12 = {type => $memory_13,src => $memory_14,};
#line 723
undef($memory_13);
#line 723
undef($memory_14);
#line 723
$memory_11 = type_checker_priv::check_special_function($memory_12, $memory_6, $memory_7, $memory_1, $memory_2, $memory_3);
#line 723
undef($memory_12);
#line 723
$memory_4 = $memory_11;
#line 723
undef($memory_11);
#line 723
undef($memory_7);
#line 723
undef($memory_8);
#line 723
undef($memory_9);
#line 723
undef($memory_10);
#line 723
undef($memory_6);
#line 725
goto label_1;
#line 725
label_16:
#line 725
$memory_6 = c_rt_lib::ov_as($memory_0, 'string');
#line 726
$memory_7 = tct::sim();
#line 726
$memory_8 = $memory_7;
#line 726
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_8;
#line 726
undef($memory_7);
#line 726
undef($memory_8);
#line 726
undef($memory_6);
#line 727
goto label_1;
#line 727
label_17:
#line 727
$memory_6 = c_rt_lib::ov_as($memory_0, 'post_inc');
#line 728
$memory_8 = "wrong type in post increment : ";
#line 728
$memory_7 = type_checker_priv::unary_op_dec_inc($memory_6, $memory_8, $memory_1, $memory_2, $memory_3);
#line 728
undef($memory_8);
#line 728
undef($memory_0);
#line 728
undef($memory_4);
#line 728
undef($memory_5);
#line 728
undef($memory_6);
#line 728
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 728
undef($memory_7);
#line 728
undef($memory_6);
#line 729
goto label_1;
#line 729
label_18:
#line 729
$memory_6 = c_rt_lib::ov_as($memory_0, 'post_dec');
#line 730
$memory_8 = "wrong type in post decrement : ";
#line 730
$memory_7 = type_checker_priv::unary_op_dec_inc($memory_6, $memory_8, $memory_1, $memory_2, $memory_3);
#line 730
undef($memory_8);
#line 730
undef($memory_0);
#line 730
undef($memory_4);
#line 730
undef($memory_5);
#line 730
undef($memory_6);
#line 730
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 730
undef($memory_7);
#line 730
undef($memory_6);
#line 731
goto label_1;
#line 731
label_1:
#line 731
undef($memory_5);
#line 732
undef($memory_0);
#line 732
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 732
undef($memory_4);
#line 732
undef($memory_0);
#line 732
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::unary_op_dec_inc($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 736
$memory_5 = type_checker_priv::check_val($memory_0, $memory_2, $memory_3, $memory_4);
#line 737
$memory_7 = tct::sim();
#line 737
$memory_6 = ptd_system::is_accepted($memory_5, $memory_7, $memory_2, $memory_4);
#line 737
undef($memory_7);
#line 737
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 737
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 737
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 738
$memory_8 = $memory_5->{'type'};
#line 738
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 738
undef($memory_8);
#line 738
$memory_7 = $memory_1 . $memory_7;
#line 738
type_checker_priv::add_error($memory_4, $memory_7);
#line 738
undef($memory_7);
#line 739
goto label_2;
#line 739
label_2:
#line 739
undef($memory_6);
#line 740
$memory_6 = tct::sim();
#line 740
$memory_7 = $memory_6;
#line 740
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'type'} = $memory_7;
#line 740
undef($memory_6);
#line 740
undef($memory_7);
#line 741
$memory_7 = $memory_4->{'errors'};
#line 741
$memory_6 = array::len($memory_7);
#line 741
undef($memory_7);
#line 742
$memory_7 = type_checker_priv::get_type_left_site_equation($memory_0, $memory_2, $memory_3, $memory_4);
#line 743
$memory_9 = $memory_4->{'errors'};
#line 743
$memory_8 = array::len($memory_9);
#line 743
undef($memory_9);
#line 743
$memory_8 = $memory_8 - $memory_6;
#line 743
$memory_9 = 0;
#line 743
$memory_8 = c_rt_lib::to_nl($memory_8 > $memory_9);
#line 743
undef($memory_9);
#line 743
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 743
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 744
undef($memory_0);
#line 744
undef($memory_1);
#line 744
undef($memory_5);
#line 744
undef($memory_6);
#line 744
undef($memory_8);
#line 744
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_7;
#line 745
goto label_4;
#line 745
label_4:
#line 745
undef($memory_8);
#line 746
$memory_8 = type_checker_priv::set_type_to_lval($memory_0, $memory_7, $memory_5, $memory_2, $memory_3, $memory_4);
#line 746
undef($memory_0);
#line 746
undef($memory_1);
#line 746
undef($memory_5);
#line 746
undef($memory_6);
#line 746
undef($memory_7);
#line 746
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_8;
#line 746
undef($memory_8);
#line 746
undef($memory_5);
#line 746
undef($memory_6);
#line 746
undef($memory_7);
#line 746
undef($memory_0);
#line 746
undef($memory_1);
#line 746
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;}

sub type_checker_priv::__get_special_functions() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 750
$memory_0 = {};
#line 751
$memory_1 = "ptd::ensure";
#line 751
$memory_3 = tct::tct_im();
#line 751
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 751
$memory_7 = tct::tct_im();
#line 751
$memory_8 = "";
#line 751
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 751
undef($memory_6);
#line 751
undef($memory_7);
#line 751
undef($memory_8);
#line 751
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 751
$memory_8 = tct::tct_im();
#line 751
$memory_9 = "";
#line 751
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 751
undef($memory_7);
#line 751
undef($memory_8);
#line 751
undef($memory_9);
#line 751
$memory_4 = [$memory_5,$memory_6];
#line 751
undef($memory_5);
#line 751
undef($memory_6);
#line 751
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 751
undef($memory_3);
#line 751
undef($memory_4);
#line 751
hash::set_value($memory_0, $memory_1, $memory_2);
#line 751
undef($memory_2);
#line 751
undef($memory_1);
#line 755
$memory_1 = "ptd::try_cast";
#line 755
$memory_3 = tct::tct_im();
#line 755
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 755
$memory_7 = tct::tct_im();
#line 755
$memory_8 = "";
#line 755
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 755
undef($memory_6);
#line 755
undef($memory_7);
#line 755
undef($memory_8);
#line 755
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 755
$memory_8 = tct::tct_im();
#line 755
$memory_9 = "";
#line 755
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 755
undef($memory_7);
#line 755
undef($memory_8);
#line 755
undef($memory_9);
#line 755
$memory_4 = [$memory_5,$memory_6];
#line 755
undef($memory_5);
#line 755
undef($memory_6);
#line 755
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 755
undef($memory_3);
#line 755
undef($memory_4);
#line 755
hash::set_value($memory_0, $memory_1, $memory_2);
#line 755
undef($memory_2);
#line 755
undef($memory_1);
#line 759
$memory_1 = "ptd::ensure_only_static_do_not_touch_without_permission";
#line 759
$memory_3 = tct::tct_im();
#line 759
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 759
$memory_7 = tct::tct_im();
#line 759
$memory_8 = "";
#line 759
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 759
undef($memory_6);
#line 759
undef($memory_7);
#line 759
undef($memory_8);
#line 759
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 759
$memory_8 = tct::tct_im();
#line 759
$memory_9 = "";
#line 759
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 759
undef($memory_7);
#line 759
undef($memory_8);
#line 759
undef($memory_9);
#line 759
$memory_4 = [$memory_5,$memory_6];
#line 759
undef($memory_5);
#line 759
undef($memory_6);
#line 759
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 759
undef($memory_3);
#line 759
undef($memory_4);
#line 759
hash::set_value($memory_0, $memory_1, $memory_2);
#line 759
undef($memory_2);
#line 759
undef($memory_1);
#line 763
$memory_1 = "array::push";
#line 763
$memory_3 = tct::void();
#line 763
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 763
$memory_8 = tct::tct_im();
#line 763
$memory_7 = tct::arr($memory_8);
#line 763
undef($memory_8);
#line 763
$memory_8 = "";
#line 763
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 763
undef($memory_6);
#line 763
undef($memory_7);
#line 763
undef($memory_8);
#line 763
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 763
$memory_8 = tct::tct_im();
#line 763
$memory_9 = "";
#line 763
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 763
undef($memory_7);
#line 763
undef($memory_8);
#line 763
undef($memory_9);
#line 763
$memory_4 = [$memory_5,$memory_6];
#line 763
undef($memory_5);
#line 763
undef($memory_6);
#line 763
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 763
undef($memory_3);
#line 763
undef($memory_4);
#line 763
hash::set_value($memory_0, $memory_1, $memory_2);
#line 763
undef($memory_2);
#line 763
undef($memory_1);
#line 770
$memory_1 = "array::subarray";
#line 770
$memory_3 = tct::tct_im();
#line 770
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 770
$memory_8 = tct::tct_im();
#line 770
$memory_7 = tct::arr($memory_8);
#line 770
undef($memory_8);
#line 770
$memory_8 = "";
#line 770
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 770
undef($memory_6);
#line 770
undef($memory_7);
#line 770
undef($memory_8);
#line 770
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 770
$memory_8 = tct::sim();
#line 770
$memory_9 = "";
#line 770
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 770
undef($memory_7);
#line 770
undef($memory_8);
#line 770
undef($memory_9);
#line 770
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 770
$memory_9 = tct::sim();
#line 770
$memory_10 = "";
#line 770
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 770
undef($memory_8);
#line 770
undef($memory_9);
#line 770
undef($memory_10);
#line 770
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 770
undef($memory_5);
#line 770
undef($memory_6);
#line 770
undef($memory_7);
#line 770
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 770
undef($memory_3);
#line 770
undef($memory_4);
#line 770
hash::set_value($memory_0, $memory_1, $memory_2);
#line 770
undef($memory_2);
#line 770
undef($memory_1);
#line 778
$memory_1 = "array::join";
#line 778
$memory_3 = tct::sim();
#line 778
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 778
$memory_7 = tct::sim();
#line 778
$memory_8 = "";
#line 778
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 778
undef($memory_6);
#line 778
undef($memory_7);
#line 778
undef($memory_8);
#line 778
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 778
$memory_9 = tct::sim();
#line 778
$memory_8 = tct::arr($memory_9);
#line 778
undef($memory_9);
#line 778
$memory_9 = "";
#line 778
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 778
undef($memory_7);
#line 778
undef($memory_8);
#line 778
undef($memory_9);
#line 778
$memory_4 = [$memory_5,$memory_6];
#line 778
undef($memory_5);
#line 778
undef($memory_6);
#line 778
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 778
undef($memory_3);
#line 778
undef($memory_4);
#line 778
hash::set_value($memory_0, $memory_1, $memory_2);
#line 778
undef($memory_2);
#line 778
undef($memory_1);
#line 785
$memory_1 = "array::append";
#line 785
$memory_3 = tct::void();
#line 785
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 785
$memory_8 = tct::tct_im();
#line 785
$memory_7 = tct::arr($memory_8);
#line 785
undef($memory_8);
#line 785
$memory_8 = "";
#line 785
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 785
undef($memory_6);
#line 785
undef($memory_7);
#line 785
undef($memory_8);
#line 785
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 785
$memory_9 = tct::tct_im();
#line 785
$memory_8 = tct::arr($memory_9);
#line 785
undef($memory_9);
#line 785
$memory_9 = "";
#line 785
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 785
undef($memory_7);
#line 785
undef($memory_8);
#line 785
undef($memory_9);
#line 785
$memory_4 = [$memory_5,$memory_6];
#line 785
undef($memory_5);
#line 785
undef($memory_6);
#line 785
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 785
undef($memory_3);
#line 785
undef($memory_4);
#line 785
hash::set_value($memory_0, $memory_1, $memory_2);
#line 785
undef($memory_2);
#line 785
undef($memory_1);
#line 792
$memory_1 = "array::len";
#line 792
$memory_3 = tct::sim();
#line 792
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 792
$memory_8 = tct::tct_im();
#line 792
$memory_7 = tct::arr($memory_8);
#line 792
undef($memory_8);
#line 792
$memory_8 = "";
#line 792
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 792
undef($memory_6);
#line 792
undef($memory_7);
#line 792
undef($memory_8);
#line 792
$memory_4 = [$memory_5];
#line 792
undef($memory_5);
#line 792
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 792
undef($memory_3);
#line 792
undef($memory_4);
#line 792
hash::set_value($memory_0, $memory_1, $memory_2);
#line 792
undef($memory_2);
#line 792
undef($memory_1);
#line 796
$memory_1 = "array::pop";
#line 796
$memory_3 = tct::void();
#line 796
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 796
$memory_8 = tct::tct_im();
#line 796
$memory_7 = tct::arr($memory_8);
#line 796
undef($memory_8);
#line 796
$memory_8 = "";
#line 796
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 796
undef($memory_6);
#line 796
undef($memory_7);
#line 796
undef($memory_8);
#line 796
$memory_4 = [$memory_5];
#line 796
undef($memory_5);
#line 796
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 796
undef($memory_3);
#line 796
undef($memory_4);
#line 796
hash::set_value($memory_0, $memory_1, $memory_2);
#line 796
undef($memory_2);
#line 796
undef($memory_1);
#line 800
$memory_1 = "array::sort";
#line 800
$memory_3 = tct::void();
#line 800
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 800
$memory_8 = tct::sim();
#line 800
$memory_7 = tct::arr($memory_8);
#line 800
undef($memory_8);
#line 800
$memory_8 = "";
#line 800
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 800
undef($memory_6);
#line 800
undef($memory_7);
#line 800
undef($memory_8);
#line 800
$memory_4 = [$memory_5];
#line 800
undef($memory_5);
#line 800
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 800
undef($memory_3);
#line 800
undef($memory_4);
#line 800
hash::set_value($memory_0, $memory_1, $memory_2);
#line 800
undef($memory_2);
#line 800
undef($memory_1);
#line 804
$memory_1 = "hash::set_value";
#line 804
$memory_3 = tct::void();
#line 804
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 804
$memory_8 = tct::tct_im();
#line 804
$memory_7 = tct::hash($memory_8);
#line 804
undef($memory_8);
#line 804
$memory_8 = "";
#line 804
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 804
undef($memory_6);
#line 804
undef($memory_7);
#line 804
undef($memory_8);
#line 804
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 804
$memory_8 = tct::sim();
#line 804
$memory_9 = "";
#line 804
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 804
undef($memory_7);
#line 804
undef($memory_8);
#line 804
undef($memory_9);
#line 804
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 804
$memory_9 = tct::tct_im();
#line 804
$memory_10 = "";
#line 804
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 804
undef($memory_8);
#line 804
undef($memory_9);
#line 804
undef($memory_10);
#line 804
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 804
undef($memory_5);
#line 804
undef($memory_6);
#line 804
undef($memory_7);
#line 804
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 804
undef($memory_3);
#line 804
undef($memory_4);
#line 804
hash::set_value($memory_0, $memory_1, $memory_2);
#line 804
undef($memory_2);
#line 804
undef($memory_1);
#line 812
$memory_1 = "hash::get_value";
#line 812
$memory_3 = tct::tct_im();
#line 812
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 812
$memory_8 = tct::tct_im();
#line 812
$memory_7 = tct::hash($memory_8);
#line 812
undef($memory_8);
#line 812
$memory_8 = "";
#line 812
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 812
undef($memory_6);
#line 812
undef($memory_7);
#line 812
undef($memory_8);
#line 812
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 812
$memory_8 = tct::sim();
#line 812
$memory_9 = "";
#line 812
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 812
undef($memory_7);
#line 812
undef($memory_8);
#line 812
undef($memory_9);
#line 812
$memory_4 = [$memory_5,$memory_6];
#line 812
undef($memory_5);
#line 812
undef($memory_6);
#line 812
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 812
undef($memory_3);
#line 812
undef($memory_4);
#line 812
hash::set_value($memory_0, $memory_1, $memory_2);
#line 812
undef($memory_2);
#line 812
undef($memory_1);
#line 819
$memory_1 = "hash::has_key";
#line 819
$memory_3 = tct::bool();
#line 819
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 819
$memory_8 = tct::tct_im();
#line 819
$memory_7 = tct::hash($memory_8);
#line 819
undef($memory_8);
#line 819
$memory_8 = "";
#line 819
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 819
undef($memory_6);
#line 819
undef($memory_7);
#line 819
undef($memory_8);
#line 819
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 819
$memory_8 = tct::sim();
#line 819
$memory_9 = "";
#line 819
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 819
undef($memory_7);
#line 819
undef($memory_8);
#line 819
undef($memory_9);
#line 819
$memory_4 = [$memory_5,$memory_6];
#line 819
undef($memory_5);
#line 819
undef($memory_6);
#line 819
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 819
undef($memory_3);
#line 819
undef($memory_4);
#line 819
hash::set_value($memory_0, $memory_1, $memory_2);
#line 819
undef($memory_2);
#line 819
undef($memory_1);
#line 826
$memory_1 = "hash::delete";
#line 826
$memory_3 = tct::void();
#line 826
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 826
$memory_8 = tct::tct_im();
#line 826
$memory_7 = tct::hash($memory_8);
#line 826
undef($memory_8);
#line 826
$memory_8 = "";
#line 826
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 826
undef($memory_6);
#line 826
undef($memory_7);
#line 826
undef($memory_8);
#line 826
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 826
$memory_8 = tct::sim();
#line 826
$memory_9 = "";
#line 826
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 826
undef($memory_7);
#line 826
undef($memory_8);
#line 826
undef($memory_9);
#line 826
$memory_4 = [$memory_5,$memory_6];
#line 826
undef($memory_5);
#line 826
undef($memory_6);
#line 826
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 826
undef($memory_3);
#line 826
undef($memory_4);
#line 826
hash::set_value($memory_0, $memory_1, $memory_2);
#line 826
undef($memory_2);
#line 826
undef($memory_1);
#line 833
$memory_1 = "hash::size";
#line 833
$memory_3 = tct::sim();
#line 833
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 833
$memory_8 = tct::tct_im();
#line 833
$memory_7 = tct::hash($memory_8);
#line 833
undef($memory_8);
#line 833
$memory_8 = "";
#line 833
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 833
undef($memory_6);
#line 833
undef($memory_7);
#line 833
undef($memory_8);
#line 833
$memory_4 = [$memory_5];
#line 833
undef($memory_5);
#line 833
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 833
undef($memory_3);
#line 833
undef($memory_4);
#line 833
hash::set_value($memory_0, $memory_1, $memory_2);
#line 833
undef($memory_2);
#line 833
undef($memory_1);
#line 837
$memory_1 = "hash::values";
#line 837
$memory_4 = tct::tct_im();
#line 837
$memory_3 = tct::arr($memory_4);
#line 837
undef($memory_4);
#line 837
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 837
$memory_8 = tct::tct_im();
#line 837
$memory_7 = tct::hash($memory_8);
#line 837
undef($memory_8);
#line 837
$memory_8 = "";
#line 837
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 837
undef($memory_6);
#line 837
undef($memory_7);
#line 837
undef($memory_8);
#line 837
$memory_4 = [$memory_5];
#line 837
undef($memory_5);
#line 837
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 837
undef($memory_3);
#line 837
undef($memory_4);
#line 837
hash::set_value($memory_0, $memory_1, $memory_2);
#line 837
undef($memory_2);
#line 837
undef($memory_1);
#line 841
$memory_1 = "hash::keys";
#line 841
$memory_4 = tct::sim();
#line 841
$memory_3 = tct::arr($memory_4);
#line 841
undef($memory_4);
#line 841
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 841
$memory_8 = tct::tct_im();
#line 841
$memory_7 = tct::hash($memory_8);
#line 841
undef($memory_8);
#line 841
$memory_8 = "";
#line 841
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 841
undef($memory_6);
#line 841
undef($memory_7);
#line 841
undef($memory_8);
#line 841
$memory_4 = [$memory_5];
#line 841
undef($memory_5);
#line 841
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 841
undef($memory_3);
#line 841
undef($memory_4);
#line 841
hash::set_value($memory_0, $memory_1, $memory_2);
#line 841
undef($memory_2);
#line 841
undef($memory_1);
#line 845
$memory_1 = "hash::add_all";
#line 845
$memory_3 = tct::void();
#line 845
$memory_6 = c_rt_lib::ov_mk_none('ref');
#line 845
$memory_8 = tct::tct_im();
#line 845
$memory_7 = tct::hash($memory_8);
#line 845
undef($memory_8);
#line 845
$memory_8 = "";
#line 845
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 845
undef($memory_6);
#line 845
undef($memory_7);
#line 845
undef($memory_8);
#line 845
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 845
$memory_9 = tct::tct_im();
#line 845
$memory_8 = tct::hash($memory_9);
#line 845
undef($memory_9);
#line 845
$memory_9 = "";
#line 845
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 845
undef($memory_7);
#line 845
undef($memory_8);
#line 845
undef($memory_9);
#line 845
$memory_4 = [$memory_5,$memory_6];
#line 845
undef($memory_5);
#line 845
undef($memory_6);
#line 845
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 845
undef($memory_3);
#line 845
undef($memory_4);
#line 845
hash::set_value($memory_0, $memory_1, $memory_2);
#line 845
undef($memory_2);
#line 845
undef($memory_1);
#line 852
$memory_1 = "ov::is";
#line 852
$memory_3 = tct::bool();
#line 852
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 852
$memory_8 = {};
#line 852
$memory_7 = tct::var($memory_8);
#line 852
undef($memory_8);
#line 852
$memory_8 = "";
#line 852
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 852
undef($memory_6);
#line 852
undef($memory_7);
#line 852
undef($memory_8);
#line 852
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 852
$memory_8 = tct::sim();
#line 852
$memory_9 = "";
#line 852
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 852
undef($memory_7);
#line 852
undef($memory_8);
#line 852
undef($memory_9);
#line 852
$memory_4 = [$memory_5,$memory_6];
#line 852
undef($memory_5);
#line 852
undef($memory_6);
#line 852
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 852
undef($memory_3);
#line 852
undef($memory_4);
#line 852
hash::set_value($memory_0, $memory_1, $memory_2);
#line 852
undef($memory_2);
#line 852
undef($memory_1);
#line 856
$memory_1 = "ov::as";
#line 856
$memory_3 = tct::tct_im();
#line 856
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 856
$memory_8 = {};
#line 856
$memory_7 = tct::var($memory_8);
#line 856
undef($memory_8);
#line 856
$memory_8 = "";
#line 856
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 856
undef($memory_6);
#line 856
undef($memory_7);
#line 856
undef($memory_8);
#line 856
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 856
$memory_8 = tct::sim();
#line 856
$memory_9 = "";
#line 856
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 856
undef($memory_7);
#line 856
undef($memory_8);
#line 856
undef($memory_9);
#line 856
$memory_4 = [$memory_5,$memory_6];
#line 856
undef($memory_5);
#line 856
undef($memory_6);
#line 856
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 856
undef($memory_3);
#line 856
undef($memory_4);
#line 856
hash::set_value($memory_0, $memory_1, $memory_2);
#line 856
undef($memory_2);
#line 856
undef($memory_1);
#line 860
$memory_1 = "dfile::ssave";
#line 860
$memory_3 = tct::sim();
#line 860
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 860
$memory_7 = tct::tct_im();
#line 860
$memory_8 = "";
#line 860
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 860
undef($memory_6);
#line 860
undef($memory_7);
#line 860
undef($memory_8);
#line 860
$memory_4 = [$memory_5];
#line 860
undef($memory_5);
#line 860
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 860
undef($memory_3);
#line 860
undef($memory_4);
#line 860
hash::set_value($memory_0, $memory_1, $memory_2);
#line 860
undef($memory_2);
#line 860
undef($memory_1);
#line 861
$memory_1 = "string::lf";
#line 861
$memory_3 = tct::sim();
#line 861
$memory_4 = [];
#line 861
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 861
undef($memory_3);
#line 861
undef($memory_4);
#line 861
hash::set_value($memory_0, $memory_1, $memory_2);
#line 861
undef($memory_2);
#line 861
undef($memory_1);
#line 862
$memory_1 = "string::length";
#line 862
$memory_3 = tct::sim();
#line 862
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 862
$memory_7 = tct::sim();
#line 862
$memory_8 = "";
#line 862
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 862
undef($memory_6);
#line 862
undef($memory_7);
#line 862
undef($memory_8);
#line 862
$memory_4 = [$memory_5];
#line 862
undef($memory_5);
#line 862
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 862
undef($memory_3);
#line 862
undef($memory_4);
#line 862
hash::set_value($memory_0, $memory_1, $memory_2);
#line 862
undef($memory_2);
#line 862
undef($memory_1);
#line 863
$memory_1 = "string::substr";
#line 863
$memory_3 = tct::sim();
#line 863
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 863
$memory_7 = tct::sim();
#line 863
$memory_8 = "";
#line 863
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 863
undef($memory_6);
#line 863
undef($memory_7);
#line 863
undef($memory_8);
#line 863
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 863
$memory_8 = tct::sim();
#line 863
$memory_9 = "";
#line 863
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 863
undef($memory_7);
#line 863
undef($memory_8);
#line 863
undef($memory_9);
#line 863
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 863
$memory_9 = tct::sim();
#line 863
$memory_10 = "";
#line 863
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 863
undef($memory_8);
#line 863
undef($memory_9);
#line 863
undef($memory_10);
#line 863
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 863
undef($memory_5);
#line 863
undef($memory_6);
#line 863
undef($memory_7);
#line 863
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 863
undef($memory_3);
#line 863
undef($memory_4);
#line 863
hash::set_value($memory_0, $memory_1, $memory_2);
#line 863
undef($memory_2);
#line 863
undef($memory_1);
#line 871
$memory_1 = "string::replace";
#line 871
$memory_3 = tct::sim();
#line 871
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 871
$memory_7 = tct::sim();
#line 871
$memory_8 = "";
#line 871
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 871
undef($memory_6);
#line 871
undef($memory_7);
#line 871
undef($memory_8);
#line 871
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 871
$memory_8 = tct::sim();
#line 871
$memory_9 = "";
#line 871
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 871
undef($memory_7);
#line 871
undef($memory_8);
#line 871
undef($memory_9);
#line 871
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 871
$memory_9 = tct::sim();
#line 871
$memory_10 = "";
#line 871
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 871
undef($memory_8);
#line 871
undef($memory_9);
#line 871
undef($memory_10);
#line 871
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 871
undef($memory_5);
#line 871
undef($memory_6);
#line 871
undef($memory_7);
#line 871
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 871
undef($memory_3);
#line 871
undef($memory_4);
#line 871
hash::set_value($memory_0, $memory_1, $memory_2);
#line 871
undef($memory_2);
#line 871
undef($memory_1);
#line 879
$memory_1 = "string::chr";
#line 879
$memory_3 = tct::sim();
#line 879
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 879
$memory_7 = tct::sim();
#line 879
$memory_8 = "";
#line 879
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 879
undef($memory_6);
#line 879
undef($memory_7);
#line 879
undef($memory_8);
#line 879
$memory_4 = [$memory_5];
#line 879
undef($memory_5);
#line 879
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 879
undef($memory_3);
#line 879
undef($memory_4);
#line 879
hash::set_value($memory_0, $memory_1, $memory_2);
#line 879
undef($memory_2);
#line 879
undef($memory_1);
#line 880
$memory_1 = "string::ord";
#line 880
$memory_3 = tct::sim();
#line 880
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 880
$memory_7 = tct::sim();
#line 880
$memory_8 = "";
#line 880
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 880
undef($memory_6);
#line 880
undef($memory_7);
#line 880
undef($memory_8);
#line 880
$memory_4 = [$memory_5];
#line 880
undef($memory_5);
#line 880
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 880
undef($memory_3);
#line 880
undef($memory_4);
#line 880
hash::set_value($memory_0, $memory_1, $memory_2);
#line 880
undef($memory_2);
#line 880
undef($memory_1);
#line 881
$memory_1 = "string::split";
#line 881
$memory_4 = tct::sim();
#line 881
$memory_3 = tct::arr($memory_4);
#line 881
undef($memory_4);
#line 881
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 881
$memory_7 = tct::sim();
#line 881
$memory_8 = "";
#line 881
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 881
undef($memory_6);
#line 881
undef($memory_7);
#line 881
undef($memory_8);
#line 881
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 881
$memory_8 = tct::sim();
#line 881
$memory_9 = "";
#line 881
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 881
undef($memory_7);
#line 881
undef($memory_8);
#line 881
undef($memory_9);
#line 881
$memory_4 = [$memory_5,$memory_6];
#line 881
undef($memory_5);
#line 881
undef($memory_6);
#line 881
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 881
undef($memory_3);
#line 881
undef($memory_4);
#line 881
hash::set_value($memory_0, $memory_1, $memory_2);
#line 881
undef($memory_2);
#line 881
undef($memory_1);
#line 885
$memory_1 = "c_std_lib::fast_substr";
#line 885
$memory_3 = tct::sim();
#line 885
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 885
$memory_7 = tct::tct_im();
#line 885
$memory_8 = "";
#line 885
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 885
undef($memory_6);
#line 885
undef($memory_7);
#line 885
undef($memory_8);
#line 885
$memory_7 = c_rt_lib::ov_mk_none('none');
#line 885
$memory_8 = tct::tct_im();
#line 885
$memory_9 = "";
#line 885
$memory_6 = {mod => $memory_7,type => $memory_8,name => $memory_9,};
#line 885
undef($memory_7);
#line 885
undef($memory_8);
#line 885
undef($memory_9);
#line 885
$memory_8 = c_rt_lib::ov_mk_none('none');
#line 885
$memory_9 = tct::tct_im();
#line 885
$memory_10 = "";
#line 885
$memory_7 = {mod => $memory_8,type => $memory_9,name => $memory_10,};
#line 885
undef($memory_8);
#line 885
undef($memory_9);
#line 885
undef($memory_10);
#line 885
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 885
undef($memory_5);
#line 885
undef($memory_6);
#line 885
undef($memory_7);
#line 885
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 885
undef($memory_3);
#line 885
undef($memory_4);
#line 885
hash::set_value($memory_0, $memory_1, $memory_2);
#line 885
undef($memory_2);
#line 885
undef($memory_1);
#line 893
$memory_1 = "c_singleton::sigleton_do_not_use_without_approval";
#line 893
$memory_3 = tct::tct_im();
#line 893
$memory_6 = c_rt_lib::ov_mk_none('none');
#line 893
$memory_7 = tct::tct_im();
#line 893
$memory_8 = "";
#line 893
$memory_5 = {mod => $memory_6,type => $memory_7,name => $memory_8,};
#line 893
undef($memory_6);
#line 893
undef($memory_7);
#line 893
undef($memory_8);
#line 893
$memory_4 = [$memory_5];
#line 893
undef($memory_5);
#line 893
$memory_2 = {r => $memory_3,a => $memory_4,};
#line 893
undef($memory_3);
#line 893
undef($memory_4);
#line 893
hash::set_value($memory_0, $memory_1, $memory_2);
#line 893
undef($memory_2);
#line 893
undef($memory_1);
#line 897
$memory_1 = singleton::sigleton_do_not_use_without_approval($memory_0);
#line 897
undef($memory_0);
#line 897
return $memory_1;
#line 897
undef($memory_1);
#line 897
undef($memory_0);
#line 897
return;
}

my $_get_special_functions;
sub type_checker_priv::get_special_functions() {
	$_get_special_functions = type_checker_priv::__get_special_functions() unless defined $_get_special_functions;
	return $_get_special_functions;
}

sub type_checker_priv::get_special_function_def($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 901
$memory_2 = type_checker_priv::get_special_functions();
#line 902
$memory_5 = nast::empty_debug();
#line 902
$memory_6 = c_rt_lib::ov_mk_none('nop');
#line 902
$memory_4 = {debug => $memory_5,cmd => $memory_6,};
#line 902
undef($memory_5);
#line 902
undef($memory_6);
#line 902
$memory_5 = c_rt_lib::ov_mk_none('no');
#line 902
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 902
$memory_7 = c_rt_lib::ov_mk_none('pub');
#line 902
$memory_8 = [];
#line 902
$memory_9 = tct::empty();
#line 902
$memory_3 = {cmd => $memory_4,is_type => $memory_5,ref_types => $memory_6,name => $memory_1,module => $memory_0,access => $memory_7,args => $memory_8,ret_type => $memory_9,};
#line 902
undef($memory_4);
#line 902
undef($memory_5);
#line 902
undef($memory_6);
#line 902
undef($memory_7);
#line 902
undef($memory_8);
#line 902
undef($memory_9);
#line 912
$memory_4 = type_checker_priv::get_function_name($memory_0, $memory_1);
#line 912
$memory_1 = $memory_4;
#line 912
undef($memory_4);
#line 913
$memory_4 = hash::has_key($memory_2, $memory_1);
#line 913
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 913
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 914
$memory_5 = hash::get_value($memory_2, $memory_1);
#line 915
$memory_6 = $memory_5->{'a'};
#line 915
$memory_7 = $memory_6;
#line 915
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'args'} = $memory_7;
#line 915
undef($memory_6);
#line 915
undef($memory_7);
#line 916
$memory_6 = $memory_5->{'r'};
#line 916
$memory_7 = $memory_6;
#line 916
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'ret_type'} = $memory_7;
#line 916
undef($memory_6);
#line 916
undef($memory_7);
#line 916
undef($memory_5);
#line 917
goto label_1;
#line 917
label_2:
#line 918
$memory_5 = c_rt_lib::ov_mk_none('priv');
#line 918
$memory_6 = $memory_5;
#line 918
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'access'} = $memory_6;
#line 918
undef($memory_5);
#line 918
undef($memory_6);
#line 919
goto label_1;
#line 919
label_1:
#line 919
undef($memory_4);
#line 920
undef($memory_0);
#line 920
undef($memory_1);
#line 920
undef($memory_2);
#line 920
return $memory_3;
#line 920
undef($memory_2);
#line 920
undef($memory_3);
#line 920
undef($memory_0);
#line 920
undef($memory_1);
#line 920
return;
}

sub type_checker_priv::check_special_function($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 926
$memory_7 = $memory_1->{'module'};
#line 926
$memory_8 = $memory_1->{'name'};
#line 926
$memory_6 = type_checker_priv::get_function_name($memory_7, $memory_8);
#line 926
undef($memory_8);
#line 926
undef($memory_7);
#line 927
$memory_7 = "ptd::ensure";
#line 927
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 927
if (c_rt_lib::check_true($memory_7)) {goto label_3;}
#line 927
$memory_7 = "ptd::ensure_only_static_do_not_touch_without_permission";
#line 927
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 927
label_3:
#line 927
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 927
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 928
$memory_9 = $memory_1->{'args'};
#line 928
$memory_10 = 0;
#line 928
$memory_9 = $memory_9->[$memory_10];
#line 928
undef($memory_10);
#line 928
$memory_9 = $memory_9->{'val'};
#line 928
$memory_8 = ptd_parser::try_value_to_ptd($memory_9);
#line 928
undef($memory_9);
#line 928
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 928
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 931
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 931
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 931
$memory_9 = "NOMATCHALERT";
#line 931
$memory_9 = [$memory_9,$memory_8];
#line 931
die(dfile::ssave($memory_9));
#line 928
label_5:
#line 928
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 929
type_checker_priv::add_error($memory_5, $memory_10);
#line 930
$memory_11 = tct::tct_im();
#line 930
$memory_12 = $memory_11;
#line 930
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_12;
#line 930
undef($memory_11);
#line 930
undef($memory_12);
#line 930
undef($memory_10);
#line 931
goto label_4;
#line 931
label_6:
#line 931
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 932
$memory_13 = 1;
#line 932
$memory_12 = $memory_2->[$memory_13];
#line 932
undef($memory_13);
#line 932
$memory_11 = ptd_system::cast_type($memory_10, $memory_12, $memory_3, $memory_5);
#line 932
undef($memory_12);
#line 933
$memory_12 = $memory_11;
#line 933
$memory_12 = c_rt_lib::ov_is($memory_12, 'err');
#line 933
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 933
if (c_rt_lib::check_true($memory_12)) {goto label_8;}
#line 934
$memory_13 = "this casting of type cannot be correct: ";
#line 934
$memory_14 = type_checker_priv::get_print_check_info($memory_11);
#line 934
$memory_13 = $memory_13 . $memory_14;
#line 934
undef($memory_14);
#line 934
type_checker_priv::add_error($memory_5, $memory_13);
#line 934
undef($memory_13);
#line 935
goto label_8;
#line 935
label_8:
#line 935
undef($memory_12);
#line 936
$memory_12 = $memory_10;
#line 936
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_12;
#line 936
undef($memory_12);
#line 937
type_checker_priv::check_types_imported($memory_10, $memory_3, $memory_5);
#line 937
undef($memory_11);
#line 937
undef($memory_10);
#line 938
goto label_4;
#line 938
label_4:
#line 938
undef($memory_8);
#line 938
undef($memory_9);
#line 939
goto label_2;
#line 939
label_2:
#line 939
undef($memory_7);
#line 940
$memory_7 = "ptd::try_cast";
#line 940
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 940
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 940
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 941
$memory_9 = $memory_1->{'args'};
#line 941
$memory_10 = 0;
#line 941
$memory_9 = $memory_9->[$memory_10];
#line 941
undef($memory_10);
#line 941
$memory_9 = $memory_9->{'val'};
#line 941
$memory_8 = ptd_parser::try_value_to_ptd($memory_9);
#line 941
undef($memory_9);
#line 941
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 941
if (c_rt_lib::check_true($memory_9)) {goto label_12;}
#line 944
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 944
if (c_rt_lib::check_true($memory_9)) {goto label_13;}
#line 944
$memory_9 = "NOMATCHALERT";
#line 944
$memory_9 = [$memory_9,$memory_8];
#line 944
die(dfile::ssave($memory_9));
#line 941
label_12:
#line 941
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 942
type_checker_priv::add_error($memory_5, $memory_10);
#line 943
$memory_11 = tct::tct_im();
#line 943
$memory_12 = $memory_11;
#line 943
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_12;
#line 943
undef($memory_11);
#line 943
undef($memory_12);
#line 943
undef($memory_10);
#line 944
goto label_11;
#line 944
label_13:
#line 944
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 945
$memory_12 = $memory_1->{'module'};
#line 945
$memory_13 = $memory_1->{'name'};
#line 945
$memory_11 = type_checker_priv::get_function_def($memory_12, $memory_13, $memory_3);
#line 945
undef($memory_13);
#line 945
undef($memory_12);
#line 946
$memory_13 = $memory_11->{'ret_type'};
#line 946
$memory_14 = c_rt_lib::ov_mk_none('known');
#line 946
$memory_12 = {type => $memory_13,src => $memory_14,};
#line 946
undef($memory_13);
#line 946
undef($memory_14);
#line 947
$memory_13 = ptd_system::can_delete($memory_12, $memory_3, $memory_5);
#line 947
$memory_13 = $memory_13->{'type'};
#line 947
$memory_14 = $memory_13;
#line 947
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_14;
#line 947
undef($memory_13);
#line 947
undef($memory_14);
#line 948
$memory_13 = ptd_system::is_try_ensure_type($memory_0, $memory_3, $memory_5);
#line 948
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 948
if (c_rt_lib::check_true($memory_13)) {goto label_15;}
#line 949
$memory_17 = $memory_0->{'type'};
#line 949
$memory_18 = "err";
#line 949
$memory_16 = tct::try_var_as_case($memory_17, $memory_18);
#line 949
undef($memory_18);
#line 949
undef($memory_17);
#line 949
$memory_15 = c_rt_lib::ov_is($memory_16, 'ok');
#line 949
if (c_rt_lib::check_true($memory_15)) {goto label_16;}
#line 949
$memory_16 = c_rt_lib::ov_mk_arg('ensure', $memory_16);
#line 949
die(dfile::ssave($memory_16));
#line 949
label_16:
#line 949
$memory_14 = c_rt_lib::ov_as($memory_16, 'ok');
#line 949
undef($memory_15);
#line 949
undef($memory_16);
#line 950
$memory_16 = {ok => $memory_10,err => $memory_14,};
#line 950
$memory_15 = tct::var($memory_16);
#line 950
undef($memory_16);
#line 950
$memory_16 = $memory_15;
#line 950
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_16;
#line 950
undef($memory_15);
#line 950
undef($memory_16);
#line 950
undef($memory_14);
#line 951
goto label_14;
#line 951
label_15:
#line 952
$memory_14 = "function ptd::try_cast must return variant: ok, err ";
#line 952
type_checker_priv::add_error($memory_5, $memory_14);
#line 952
undef($memory_14);
#line 953
goto label_14;
#line 953
label_14:
#line 953
undef($memory_13);
#line 954
type_checker_priv::check_types_imported($memory_10, $memory_3, $memory_5);
#line 954
undef($memory_11);
#line 954
undef($memory_12);
#line 954
undef($memory_10);
#line 955
goto label_11;
#line 955
label_11:
#line 955
undef($memory_8);
#line 955
undef($memory_9);
#line 956
goto label_10;
#line 956
label_10:
#line 956
undef($memory_7);
#line 957
$memory_7 = "array::push";
#line 957
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 957
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 957
if (c_rt_lib::check_true($memory_7)) {goto label_18;}
#line 958
$memory_10 = 1;
#line 958
$memory_9 = $memory_2->[$memory_10];
#line 958
undef($memory_10);
#line 958
$memory_9 = $memory_9->{'type'};
#line 958
$memory_8 = tct::arr($memory_9);
#line 958
undef($memory_9);
#line 958
$memory_10 = 1;
#line 958
$memory_9 = c_rt_lib::get_ref_arr($memory_2, $memory_10);
#line 958
$memory_11 = $memory_8;
#line 958
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_11;
#line 958
c_rt_lib::set_ref_arr($memory_2, $memory_10, $memory_9);
#line 958
undef($memory_8);
#line 958
undef($memory_9);
#line 958
undef($memory_10);
#line 958
undef($memory_11);
#line 959
$memory_8 = $memory_1->{'args'};
#line 959
$memory_9 = 0;
#line 959
$memory_8 = $memory_8->[$memory_9];
#line 959
undef($memory_9);
#line 959
$memory_8 = $memory_8->{'val'};
#line 959
$memory_10 = 0;
#line 959
$memory_9 = $memory_2->[$memory_10];
#line 959
undef($memory_10);
#line 959
$memory_11 = 1;
#line 959
$memory_10 = $memory_2->[$memory_11];
#line 959
undef($memory_11);
#line 959
$memory_12 = tct::empty();
#line 959
$memory_11 = tct::arr($memory_12);
#line 959
undef($memory_12);
#line 959
type_checker_priv::set_type_to_lval_spec($memory_8, $memory_9, $memory_10, $memory_11, $memory_3, $memory_4, $memory_5);
#line 959
undef($memory_11);
#line 959
undef($memory_10);
#line 959
undef($memory_9);
#line 959
undef($memory_8);
#line 961
goto label_18;
#line 961
label_18:
#line 961
undef($memory_7);
#line 962
$memory_7 = "array::append";
#line 962
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 962
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 962
if (c_rt_lib::check_true($memory_7)) {goto label_20;}
#line 963
$memory_8 = $memory_1->{'args'};
#line 963
$memory_9 = 0;
#line 963
$memory_8 = $memory_8->[$memory_9];
#line 963
undef($memory_9);
#line 963
$memory_8 = $memory_8->{'val'};
#line 963
$memory_10 = 0;
#line 963
$memory_9 = $memory_2->[$memory_10];
#line 963
undef($memory_10);
#line 963
$memory_11 = 1;
#line 963
$memory_10 = $memory_2->[$memory_11];
#line 963
undef($memory_11);
#line 963
$memory_12 = tct::empty();
#line 963
$memory_11 = tct::arr($memory_12);
#line 963
undef($memory_12);
#line 963
type_checker_priv::set_type_to_lval_spec($memory_8, $memory_9, $memory_10, $memory_11, $memory_3, $memory_4, $memory_5);
#line 963
undef($memory_11);
#line 963
undef($memory_10);
#line 963
undef($memory_9);
#line 963
undef($memory_8);
#line 965
goto label_20;
#line 965
label_20:
#line 965
undef($memory_7);
#line 966
$memory_7 = "array::subarray";
#line 966
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 966
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 966
if (c_rt_lib::check_true($memory_7)) {goto label_22;}
#line 967
$memory_9 = 0;
#line 967
$memory_8 = $memory_2->[$memory_9];
#line 967
undef($memory_9);
#line 967
undef($memory_0);
#line 967
undef($memory_1);
#line 967
undef($memory_2);
#line 967
undef($memory_6);
#line 967
undef($memory_7);
#line 967
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_8;
#line 967
undef($memory_8);
#line 968
goto label_22;
#line 968
label_22:
#line 968
undef($memory_7);
#line 969
$memory_7 = "hash::set_value";
#line 969
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 969
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 969
if (c_rt_lib::check_true($memory_7)) {goto label_24;}
#line 970
$memory_10 = 2;
#line 970
$memory_9 = $memory_2->[$memory_10];
#line 970
undef($memory_10);
#line 970
$memory_9 = $memory_9->{'type'};
#line 970
$memory_8 = tct::hash($memory_9);
#line 970
undef($memory_9);
#line 970
$memory_10 = 2;
#line 970
$memory_9 = c_rt_lib::get_ref_arr($memory_2, $memory_10);
#line 970
$memory_11 = $memory_8;
#line 970
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_11;
#line 970
c_rt_lib::set_ref_arr($memory_2, $memory_10, $memory_9);
#line 970
undef($memory_8);
#line 970
undef($memory_9);
#line 970
undef($memory_10);
#line 970
undef($memory_11);
#line 971
$memory_8 = $memory_1->{'args'};
#line 971
$memory_9 = 0;
#line 971
$memory_8 = $memory_8->[$memory_9];
#line 971
undef($memory_9);
#line 971
$memory_8 = $memory_8->{'val'};
#line 971
$memory_10 = 0;
#line 971
$memory_9 = $memory_2->[$memory_10];
#line 971
undef($memory_10);
#line 971
$memory_11 = 2;
#line 971
$memory_10 = $memory_2->[$memory_11];
#line 971
undef($memory_11);
#line 971
$memory_12 = {};
#line 971
$memory_11 = tct::rec($memory_12);
#line 971
undef($memory_12);
#line 971
type_checker_priv::set_type_to_lval_spec($memory_8, $memory_9, $memory_10, $memory_11, $memory_3, $memory_4, $memory_5);
#line 971
undef($memory_11);
#line 971
undef($memory_10);
#line 971
undef($memory_9);
#line 971
undef($memory_8);
#line 973
goto label_24;
#line 973
label_24:
#line 973
undef($memory_7);
#line 974
$memory_7 = "hash::delete";
#line 974
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 974
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 974
if (c_rt_lib::check_true($memory_7)) {goto label_26;}
#line 975
$memory_10 = 0;
#line 975
$memory_9 = $memory_2->[$memory_10];
#line 975
undef($memory_10);
#line 975
$memory_8 = ptd_system::can_delete($memory_9, $memory_3, $memory_5);
#line 975
undef($memory_9);
#line 976
$memory_9 = $memory_8->{'type'};
#line 976
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_rec');
#line 976
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 976
if (c_rt_lib::check_true($memory_9)) {goto label_28;}
#line 977
$memory_10 = $memory_8;
#line 978
$memory_13 = tct::empty();
#line 978
$memory_12 = tct::hash($memory_13);
#line 978
undef($memory_13);
#line 978
$memory_13 = $memory_8->{'type'};
#line 978
$memory_11 = ptd_system::cross_type($memory_12, $memory_13, $memory_3, $memory_5);
#line 978
undef($memory_13);
#line 978
undef($memory_12);
#line 978
$memory_12 = $memory_11;
#line 978
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'type'} = $memory_12;
#line 978
undef($memory_11);
#line 978
undef($memory_12);
#line 979
$memory_11 = $memory_1->{'args'};
#line 979
$memory_12 = 0;
#line 979
$memory_11 = $memory_11->[$memory_12];
#line 979
undef($memory_12);
#line 979
$memory_11 = $memory_11->{'val'};
#line 979
$memory_13 = {};
#line 979
$memory_12 = tct::rec($memory_13);
#line 979
undef($memory_13);
#line 979
type_checker_priv::set_type_to_lval_spec($memory_11, $memory_8, $memory_10, $memory_12, $memory_3, $memory_4, $memory_5);
#line 979
undef($memory_12);
#line 979
undef($memory_11);
#line 979
undef($memory_10);
#line 980
goto label_28;
#line 980
label_28:
#line 980
undef($memory_9);
#line 980
undef($memory_8);
#line 981
goto label_26;
#line 981
label_26:
#line 981
undef($memory_7);
#line 982
$memory_7 = "hash::get_value";
#line 982
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 982
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 982
if (c_rt_lib::check_true($memory_7)) {goto label_30;}
#line 983
$memory_10 = 0;
#line 983
$memory_9 = $memory_2->[$memory_10];
#line 983
undef($memory_10);
#line 983
$memory_8 = ptd_system::can_delete($memory_9, $memory_3, $memory_5);
#line 983
undef($memory_9);
#line 984
$memory_9 = $memory_8->{'src'};
#line 984
$memory_10 = $memory_9;
#line 984
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'src'} = $memory_10;
#line 984
undef($memory_9);
#line 984
undef($memory_10);
#line 985
$memory_9 = $memory_8->{'type'};
#line 985
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_hash');
#line 985
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 985
if (c_rt_lib::check_true($memory_9)) {goto label_32;}
#line 985
$memory_10 = $memory_8->{'type'};
#line 985
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_hash');
#line 985
$memory_11 = $memory_10;
#line 985
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_11;
#line 985
undef($memory_10);
#line 985
undef($memory_11);
#line 985
goto label_32;
#line 985
label_32:
#line 985
undef($memory_9);
#line 985
undef($memory_8);
#line 986
goto label_30;
#line 986
label_30:
#line 986
undef($memory_7);
#line 987
$memory_7 = "hash::values";
#line 987
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 987
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 987
if (c_rt_lib::check_true($memory_7)) {goto label_34;}
#line 988
$memory_10 = 0;
#line 988
$memory_9 = $memory_2->[$memory_10];
#line 988
undef($memory_10);
#line 988
$memory_8 = ptd_system::can_delete($memory_9, $memory_3, $memory_5);
#line 988
undef($memory_9);
#line 989
$memory_9 = $memory_8->{'src'};
#line 989
$memory_10 = $memory_9;
#line 989
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'src'} = $memory_10;
#line 989
undef($memory_9);
#line 989
undef($memory_10);
#line 990
$memory_9 = $memory_8->{'type'};
#line 990
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_hash');
#line 990
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 990
if (c_rt_lib::check_true($memory_9)) {goto label_36;}
#line 990
$memory_11 = $memory_8->{'type'};
#line 990
$memory_11 = c_rt_lib::ov_as($memory_11, 'tct_hash');
#line 990
$memory_10 = tct::arr($memory_11);
#line 990
undef($memory_11);
#line 990
$memory_11 = $memory_10;
#line 990
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_11;
#line 990
undef($memory_10);
#line 990
undef($memory_11);
#line 990
goto label_36;
#line 990
label_36:
#line 990
undef($memory_9);
#line 990
undef($memory_8);
#line 991
goto label_34;
#line 991
label_34:
#line 991
undef($memory_7);
#line 992
$memory_7 = "hash::add_all";
#line 992
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 992
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 992
if (c_rt_lib::check_true($memory_7)) {goto label_38;}
#line 993
$memory_8 = $memory_1->{'args'};
#line 993
$memory_9 = 0;
#line 993
$memory_8 = $memory_8->[$memory_9];
#line 993
undef($memory_9);
#line 993
$memory_8 = $memory_8->{'val'};
#line 993
$memory_10 = 0;
#line 993
$memory_9 = $memory_2->[$memory_10];
#line 993
undef($memory_10);
#line 993
$memory_11 = 1;
#line 993
$memory_10 = $memory_2->[$memory_11];
#line 993
undef($memory_11);
#line 993
$memory_12 = {};
#line 993
$memory_11 = tct::rec($memory_12);
#line 993
undef($memory_12);
#line 993
type_checker_priv::set_type_to_lval_spec($memory_8, $memory_9, $memory_10, $memory_11, $memory_3, $memory_4, $memory_5);
#line 993
undef($memory_11);
#line 993
undef($memory_10);
#line 993
undef($memory_9);
#line 993
undef($memory_8);
#line 995
goto label_38;
#line 995
label_38:
#line 995
undef($memory_7);
#line 997
$memory_7 = "ov::as";
#line 997
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 997
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 997
if (c_rt_lib::check_true($memory_7)) {goto label_40;}
#line 998
$memory_8 = tct::tct_im();
#line 998
$memory_10 = 0;
#line 998
$memory_9 = $memory_2->[$memory_10];
#line 998
undef($memory_10);
#line 998
ptd_system::check_assignment($memory_8, $memory_9, $memory_3, $memory_5);
#line 998
undef($memory_9);
#line 998
undef($memory_8);
#line 999
goto label_40;
#line 999
label_40:
#line 999
undef($memory_7);
#line 1000
$memory_7 = "dfile::ssave";
#line 1000
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1000
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1000
if (c_rt_lib::check_true($memory_7)) {goto label_42;}
#line 1001
$memory_8 = tct::tct_im();
#line 1001
$memory_10 = 0;
#line 1001
$memory_9 = $memory_2->[$memory_10];
#line 1001
undef($memory_10);
#line 1001
ptd_system::check_assignment($memory_8, $memory_9, $memory_3, $memory_5);
#line 1001
undef($memory_9);
#line 1001
undef($memory_8);
#line 1002
goto label_42;
#line 1002
label_42:
#line 1002
undef($memory_7);
#line 1003
$memory_7 = "singleton::sigleton_do_not_use_without_approval";
#line 1003
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 1003
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1003
if (c_rt_lib::check_true($memory_7)) {goto label_44;}
#line 1004
$memory_9 = 0;
#line 1004
$memory_8 = $memory_2->[$memory_9];
#line 1004
undef($memory_9);
#line 1004
undef($memory_0);
#line 1004
undef($memory_1);
#line 1004
undef($memory_2);
#line 1004
undef($memory_6);
#line 1004
undef($memory_7);
#line 1004
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_8;
#line 1004
undef($memory_8);
#line 1005
goto label_44;
#line 1005
label_44:
#line 1005
undef($memory_7);
#line 1006
undef($memory_1);
#line 1006
undef($memory_2);
#line 1006
undef($memory_6);
#line 1006
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_0;
#line 1006
undef($memory_6);
#line 1006
undef($memory_0);
#line 1006
undef($memory_1);
#line 1006
undef($memory_2);
#line 1006
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;}

sub type_checker_priv::rec_get_var_from_lval($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 1010
$memory_2 = [];
#line 1011
$memory_3 = $memory_0;
#line 1011
$memory_3 = c_rt_lib::ov_is($memory_3, 'var');
#line 1011
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1011
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 1012
$memory_4 = $memory_0;
#line 1012
$memory_4 = c_rt_lib::ov_as($memory_4, 'var');
#line 1013
$memory_5 = c_rt_lib::ov_mk_arg('var', $memory_4);
#line 1013
array::push($memory_2, $memory_5);
#line 1013
undef($memory_5);
#line 1013
undef($memory_4);
#line 1014
goto label_1;
#line 1014
label_2:
#line 1014
$memory_3 = $memory_0;
#line 1014
$memory_3 = c_rt_lib::ov_is($memory_3, 'bin_op');
#line 1014
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1014
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 1015
$memory_4 = $memory_0;
#line 1015
$memory_4 = c_rt_lib::ov_as($memory_4, 'bin_op');
#line 1016
$memory_5 = $memory_4->{'op'};
#line 1016
$memory_6 = "->";
#line 1016
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 1016
undef($memory_6);
#line 1016
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1016
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 1017
$memory_7 = $memory_4->{'left'};
#line 1017
$memory_6 = type_checker_priv::rec_get_var_from_lval($memory_7, $memory_1);
#line 1017
undef($memory_7);
#line 1017
$memory_2 = $memory_6;
#line 1017
undef($memory_6);
#line 1018
$memory_6 = $memory_4->{'right'};
#line 1018
$memory_6 = c_rt_lib::ov_as($memory_6, 'hash_key');
#line 1018
$memory_6 = c_rt_lib::ov_mk_arg('rec', $memory_6);
#line 1018
array::push($memory_2, $memory_6);
#line 1018
undef($memory_6);
#line 1019
goto label_4;
#line 1019
label_5:
#line 1019
$memory_5 = $memory_4->{'op'};
#line 1019
$memory_6 = "ARRAY_INDEX";
#line 1019
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 1019
undef($memory_6);
#line 1019
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1019
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 1020
$memory_7 = $memory_4->{'left'};
#line 1020
$memory_6 = type_checker_priv::rec_get_var_from_lval($memory_7, $memory_1);
#line 1020
undef($memory_7);
#line 1020
$memory_2 = $memory_6;
#line 1020
undef($memory_6);
#line 1021
$memory_6 = c_rt_lib::ov_mk_none('arr');
#line 1021
array::push($memory_2, $memory_6);
#line 1021
undef($memory_6);
#line 1022
goto label_4;
#line 1022
label_6:
#line 1022
$memory_5 = $memory_4->{'op'};
#line 1022
$memory_6 = "HASH_INDEX";
#line 1022
$memory_5 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 1022
undef($memory_6);
#line 1022
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1022
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 1023
$memory_7 = $memory_4->{'left'};
#line 1023
$memory_6 = type_checker_priv::rec_get_var_from_lval($memory_7, $memory_1);
#line 1023
undef($memory_7);
#line 1023
$memory_2 = $memory_6;
#line 1023
undef($memory_6);
#line 1024
$memory_6 = c_rt_lib::ov_mk_none('hashkey');
#line 1024
array::push($memory_2, $memory_6);
#line 1024
undef($memory_6);
#line 1025
goto label_4;
#line 1025
label_7:
#line 1026
$memory_6 = "invalid operator ";
#line 1026
$memory_7 = $memory_4->{'op'};
#line 1026
$memory_6 = $memory_6 . $memory_7;
#line 1026
undef($memory_7);
#line 1026
$memory_7 = " used in lvalue";
#line 1026
$memory_6 = $memory_6 . $memory_7;
#line 1026
undef($memory_7);
#line 1026
type_checker_priv::add_error($memory_1, $memory_6);
#line 1026
undef($memory_6);
#line 1027
goto label_4;
#line 1027
label_4:
#line 1027
undef($memory_5);
#line 1027
undef($memory_4);
#line 1028
goto label_1;
#line 1028
label_3:
#line 1029
$memory_4 = "invalid type for lvalue";
#line 1029
type_checker_priv::add_error($memory_1, $memory_4);
#line 1029
undef($memory_4);
#line 1030
goto label_1;
#line 1030
label_1:
#line 1030
undef($memory_3);
#line 1031
undef($memory_0);
#line 1031
$_[1] = $memory_1;return $memory_2;
#line 1031
undef($memory_2);
#line 1031
undef($memory_0);
#line 1031
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub type_checker_priv::mk_new_type_lval($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 1036
$memory_7 = 1;
#line 1036
$memory_8 = array::len($memory_0);
#line 1036
$memory_9 = 1;
#line 1036
$memory_8 = $memory_8 - $memory_9;
#line 1036
undef($memory_9);
#line 1036
$memory_6 = array::subarray($memory_0, $memory_7, $memory_8);
#line 1036
undef($memory_8);
#line 1036
undef($memory_7);
#line 1036
$memory_0 = $memory_6;
#line 1036
undef($memory_6);
#line 1037
$memory_6 = array::len($memory_0);
#line 1037
$memory_7 = 0;
#line 1037
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 1037
undef($memory_7);
#line 1037
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1037
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 1038
$memory_7 = type_checker_priv::is_known($memory_2);
#line 1038
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1038
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 1039
$memory_9 = $memory_2->{'type'};
#line 1039
$memory_8 = ptd_system::check_assignment($memory_9, $memory_1, $memory_4, $memory_5);
#line 1039
undef($memory_9);
#line 1040
$memory_9 = $memory_8;
#line 1040
$memory_9 = c_rt_lib::ov_is($memory_9, 'err');
#line 1040
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1040
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 1041
$memory_10 = "invalid type in assignment: ";
#line 1041
$memory_11 = type_checker_priv::get_print_check_info($memory_8);
#line 1041
$memory_10 = $memory_10 . $memory_11;
#line 1041
undef($memory_11);
#line 1041
type_checker_priv::add_error($memory_5, $memory_10);
#line 1041
undef($memory_10);
#line 1042
goto label_6;
#line 1042
label_6:
#line 1042
undef($memory_9);
#line 1043
$memory_9 = $memory_2->{'type'};
#line 1043
undef($memory_0);
#line 1043
undef($memory_1);
#line 1043
undef($memory_2);
#line 1043
undef($memory_3);
#line 1043
undef($memory_6);
#line 1043
undef($memory_7);
#line 1043
undef($memory_8);
#line 1043
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 1043
undef($memory_9);
#line 1043
undef($memory_8);
#line 1044
goto label_3;
#line 1044
label_4:
#line 1045
$memory_8 = tct::tct_im();
#line 1045
ptd_system::check_assignment($memory_8, $memory_1, $memory_4, $memory_5);
#line 1045
undef($memory_8);
#line 1046
$memory_8 = ptd_system::can_create($memory_2, $memory_4, $memory_5);
#line 1046
$memory_2 = $memory_8;
#line 1046
undef($memory_8);
#line 1047
$memory_9 = $memory_2->{'type'};
#line 1047
$memory_8 = ptd_system::is_equal($memory_9, $memory_3);
#line 1047
undef($memory_9);
#line 1047
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1047
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 1047
$memory_9 = $memory_1->{'type'};
#line 1047
undef($memory_0);
#line 1047
undef($memory_1);
#line 1047
undef($memory_2);
#line 1047
undef($memory_3);
#line 1047
undef($memory_6);
#line 1047
undef($memory_7);
#line 1047
undef($memory_8);
#line 1047
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 1047
undef($memory_9);
#line 1047
goto label_8;
#line 1047
label_8:
#line 1047
undef($memory_8);
#line 1048
$memory_9 = $memory_2->{'type'};
#line 1048
$memory_10 = $memory_1->{'type'};
#line 1048
$memory_8 = ptd_system::cross_type($memory_9, $memory_10, $memory_4, $memory_5);
#line 1048
undef($memory_10);
#line 1048
undef($memory_9);
#line 1048
undef($memory_0);
#line 1048
undef($memory_1);
#line 1048
undef($memory_2);
#line 1048
undef($memory_3);
#line 1048
undef($memory_6);
#line 1048
undef($memory_7);
#line 1048
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_8;
#line 1048
undef($memory_8);
#line 1049
goto label_3;
#line 1049
label_3:
#line 1049
undef($memory_7);
#line 1050
goto label_1;
#line 1050
label_2:
#line 1051
$memory_7 = ptd_system::can_create($memory_2, $memory_4, $memory_5);
#line 1051
$memory_2 = $memory_7;
#line 1051
undef($memory_7);
#line 1052
$memory_8 = 0;
#line 1052
$memory_7 = $memory_0->[$memory_8];
#line 1052
undef($memory_8);
#line 1052
$memory_8 = c_rt_lib::ov_is($memory_7, 'var');
#line 1052
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 1054
$memory_8 = c_rt_lib::ov_is($memory_7, 'arr');
#line 1054
if (c_rt_lib::check_true($memory_8)) {goto label_11;}
#line 1058
$memory_8 = c_rt_lib::ov_is($memory_7, 'hashkey');
#line 1058
if (c_rt_lib::check_true($memory_8)) {goto label_12;}
#line 1062
$memory_8 = c_rt_lib::ov_is($memory_7, 'rec');
#line 1062
if (c_rt_lib::check_true($memory_8)) {goto label_13;}
#line 1062
$memory_8 = "NOMATCHALERT";
#line 1062
$memory_8 = [$memory_8,$memory_7];
#line 1062
die(dfile::ssave($memory_8));
#line 1052
label_10:
#line 1052
$memory_9 = c_rt_lib::ov_as($memory_7, 'var');
#line 1053
$memory_10 = [$memory_0];
#line 1053
die(dfile::ssave($memory_10));
#line 1053
undef($memory_10);
#line 1053
undef($memory_9);
#line 1054
goto label_9;
#line 1054
label_11:
#line 1055
$memory_9 = $memory_2->{'type'};
#line 1055
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_arr');
#line 1055
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1055
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1055
if (c_rt_lib::check_true($memory_9)) {goto label_15;}
#line 1055
$memory_10 = tct::tct_im();
#line 1055
undef($memory_0);
#line 1055
undef($memory_1);
#line 1055
undef($memory_2);
#line 1055
undef($memory_3);
#line 1055
undef($memory_6);
#line 1055
undef($memory_7);
#line 1055
undef($memory_8);
#line 1055
undef($memory_9);
#line 1055
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 1055
undef($memory_10);
#line 1055
goto label_15;
#line 1055
label_15:
#line 1055
undef($memory_9);
#line 1056
$memory_9 = $memory_2->{'type'};
#line 1056
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_arr');
#line 1056
$memory_10 = $memory_9;
#line 1056
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'type'} = $memory_10;
#line 1056
undef($memory_9);
#line 1056
undef($memory_10);
#line 1057
$memory_10 = type_checker_priv::mk_new_type_lval($memory_0, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5);
#line 1057
$memory_9 = tct::arr($memory_10);
#line 1057
undef($memory_10);
#line 1057
undef($memory_0);
#line 1057
undef($memory_1);
#line 1057
undef($memory_2);
#line 1057
undef($memory_3);
#line 1057
undef($memory_6);
#line 1057
undef($memory_7);
#line 1057
undef($memory_8);
#line 1057
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 1057
undef($memory_9);
#line 1058
goto label_9;
#line 1058
label_12:
#line 1059
$memory_9 = $memory_2->{'type'};
#line 1059
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_hash');
#line 1059
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1059
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1059
if (c_rt_lib::check_true($memory_9)) {goto label_17;}
#line 1059
$memory_10 = tct::tct_im();
#line 1059
undef($memory_0);
#line 1059
undef($memory_1);
#line 1059
undef($memory_2);
#line 1059
undef($memory_3);
#line 1059
undef($memory_6);
#line 1059
undef($memory_7);
#line 1059
undef($memory_8);
#line 1059
undef($memory_9);
#line 1059
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 1059
undef($memory_10);
#line 1059
goto label_17;
#line 1059
label_17:
#line 1059
undef($memory_9);
#line 1060
$memory_9 = $memory_2->{'type'};
#line 1060
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_hash');
#line 1060
$memory_10 = $memory_9;
#line 1060
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'type'} = $memory_10;
#line 1060
undef($memory_9);
#line 1060
undef($memory_10);
#line 1061
$memory_10 = type_checker_priv::mk_new_type_lval($memory_0, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5);
#line 1061
$memory_9 = tct::hash($memory_10);
#line 1061
undef($memory_10);
#line 1061
undef($memory_0);
#line 1061
undef($memory_1);
#line 1061
undef($memory_2);
#line 1061
undef($memory_3);
#line 1061
undef($memory_6);
#line 1061
undef($memory_7);
#line 1061
undef($memory_8);
#line 1061
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 1061
undef($memory_9);
#line 1062
goto label_9;
#line 1062
label_13:
#line 1062
$memory_9 = c_rt_lib::ov_as($memory_7, 'rec');
#line 1063
$memory_10 = $memory_2->{'type'};
#line 1063
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_rec');
#line 1063
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1063
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1063
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 1063
$memory_11 = tct::tct_im();
#line 1063
undef($memory_0);
#line 1063
undef($memory_1);
#line 1063
undef($memory_2);
#line 1063
undef($memory_3);
#line 1063
undef($memory_6);
#line 1063
undef($memory_7);
#line 1063
undef($memory_8);
#line 1063
undef($memory_9);
#line 1063
undef($memory_10);
#line 1063
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_11;
#line 1063
undef($memory_11);
#line 1063
goto label_19;
#line 1063
label_19:
#line 1063
undef($memory_10);
#line 1064
$memory_10 = $memory_2->{'type'};
#line 1064
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_rec');
#line 1065
$memory_11 = hash::has_key($memory_10, $memory_9);
#line 1065
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 1065
if (c_rt_lib::check_true($memory_11)) {goto label_21;}
#line 1066
$memory_12 = hash::get_value($memory_10, $memory_9);
#line 1066
$memory_13 = $memory_12;
#line 1066
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'type'} = $memory_13;
#line 1066
undef($memory_12);
#line 1066
undef($memory_13);
#line 1067
$memory_12 = type_checker_priv::mk_new_type_lval($memory_0, $memory_1, $memory_2, $memory_3, $memory_4, $memory_5);
#line 1067
hash::set_value($memory_10, $memory_9, $memory_12);
#line 1067
undef($memory_12);
#line 1069
goto label_20;
#line 1069
label_21:
#line 1070
$memory_12 = array::len($memory_0);
#line 1070
$memory_13 = 1;
#line 1070
$memory_12 = c_rt_lib::to_nl($memory_12 != $memory_13);
#line 1070
undef($memory_13);
#line 1070
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 1070
if (c_rt_lib::check_true($memory_12)) {goto label_23;}
#line 1071
$memory_13 = tct::tct_im();
#line 1071
undef($memory_0);
#line 1071
undef($memory_1);
#line 1071
undef($memory_2);
#line 1071
undef($memory_3);
#line 1071
undef($memory_6);
#line 1071
undef($memory_7);
#line 1071
undef($memory_8);
#line 1071
undef($memory_9);
#line 1071
undef($memory_10);
#line 1071
undef($memory_11);
#line 1071
undef($memory_12);
#line 1071
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_13;
#line 1071
undef($memory_13);
#line 1072
goto label_23;
#line 1072
label_23:
#line 1072
undef($memory_12);
#line 1073
$memory_12 = tct::tct_im();
#line 1073
ptd_system::check_assignment($memory_12, $memory_1, $memory_4, $memory_5);
#line 1073
undef($memory_12);
#line 1074
$memory_12 = $memory_1->{'type'};
#line 1074
hash::set_value($memory_10, $memory_9, $memory_12);
#line 1074
undef($memory_12);
#line 1075
goto label_20;
#line 1075
label_20:
#line 1075
undef($memory_11);
#line 1076
$memory_11 = tct::rec($memory_10);
#line 1076
undef($memory_0);
#line 1076
undef($memory_1);
#line 1076
undef($memory_2);
#line 1076
undef($memory_3);
#line 1076
undef($memory_6);
#line 1076
undef($memory_7);
#line 1076
undef($memory_8);
#line 1076
undef($memory_9);
#line 1076
undef($memory_10);
#line 1076
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_11;
#line 1076
undef($memory_11);
#line 1076
undef($memory_10);
#line 1076
undef($memory_9);
#line 1077
goto label_9;
#line 1077
label_9:
#line 1077
undef($memory_7);
#line 1077
undef($memory_8);
#line 1078
goto label_1;
#line 1078
label_1:
#line 1078
undef($memory_6);
#line 1078
undef($memory_0);
#line 1078
undef($memory_1);
#line 1078
undef($memory_2);
#line 1078
undef($memory_3);
#line 1078
$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[4] = $memory_4;$_[5] = $memory_5;}

sub type_checker_priv::set_type_to_lval($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 1083
$memory_7 = $memory_1->{'type'};
#line 1083
$memory_6 = type_checker_priv::set_type_to_lval_spec($memory_0, $memory_1, $memory_2, $memory_7, $memory_3, $memory_4, $memory_5);
#line 1083
undef($memory_7);
#line 1083
undef($memory_0);
#line 1083
undef($memory_1);
#line 1083
undef($memory_2);
#line 1083
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_6;
#line 1083
undef($memory_6);
#line 1083
undef($memory_0);
#line 1083
undef($memory_1);
#line 1083
undef($memory_2);
#line 1083
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[3] = $memory_3;$_[4] = $memory_4;$_[5] = $memory_5;}

sub type_checker_priv::set_type_to_lval_spec($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);$memory_6 = $_[6];Scalar::Util::weaken($_[6]) if ref($_[6]);
#line 1089
$memory_8 = $memory_6->{'errors'};
#line 1089
$memory_7 = array::len($memory_8);
#line 1089
undef($memory_8);
#line 1090
$memory_8 = type_checker_priv::rec_get_var_from_lval($memory_0, $memory_6);
#line 1091
$memory_10 = $memory_6->{'errors'};
#line 1091
$memory_9 = array::len($memory_10);
#line 1091
undef($memory_10);
#line 1091
$memory_9 = c_rt_lib::to_nl($memory_7 != $memory_9);
#line 1091
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1091
if (c_rt_lib::check_true($memory_9)) {goto label_2;}
#line 1091
undef($memory_0);
#line 1091
undef($memory_2);
#line 1091
undef($memory_3);
#line 1091
undef($memory_7);
#line 1091
undef($memory_8);
#line 1091
undef($memory_9);
#line 1091
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_1;
#line 1091
goto label_2;
#line 1091
label_2:
#line 1091
undef($memory_9);
#line 1092
$memory_10 = 0;
#line 1092
$memory_9 = $memory_8->[$memory_10];
#line 1092
undef($memory_10);
#line 1092
$memory_9 = c_rt_lib::ov_as($memory_9, 'var');
#line 1093
$memory_10 = hash::has_key($memory_5, $memory_9);
#line 1093
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1093
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1093
if (c_rt_lib::check_true($memory_10)) {goto label_4;}
#line 1094
$memory_11 = "variable ";
#line 1094
$memory_11 = $memory_11 . $memory_9;
#line 1094
$memory_12 = " dont exist";
#line 1094
$memory_11 = $memory_11 . $memory_12;
#line 1094
undef($memory_12);
#line 1094
type_checker_priv::add_error($memory_6, $memory_11);
#line 1094
undef($memory_11);
#line 1095
undef($memory_0);
#line 1095
undef($memory_2);
#line 1095
undef($memory_3);
#line 1095
undef($memory_7);
#line 1095
undef($memory_8);
#line 1095
undef($memory_9);
#line 1095
undef($memory_10);
#line 1095
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_1;
#line 1096
goto label_4;
#line 1096
label_4:
#line 1096
undef($memory_10);
#line 1097
$memory_10 = hash::get_value($memory_5, $memory_9);
#line 1098
$memory_11 = $memory_10->{'overwrited'};
#line 1098
$memory_12 = c_rt_lib::ov_is($memory_11, 'yes');
#line 1098
if (c_rt_lib::check_true($memory_12)) {goto label_6;}
#line 1103
$memory_12 = c_rt_lib::ov_is($memory_11, 'no');
#line 1103
if (c_rt_lib::check_true($memory_12)) {goto label_7;}
#line 1103
$memory_12 = "NOMATCHALERT";
#line 1103
$memory_12 = [$memory_12,$memory_11];
#line 1103
die(dfile::ssave($memory_12));
#line 1098
label_6:
#line 1099
$memory_15 = $memory_10->{'type'};
#line 1099
$memory_16 = c_rt_lib::ov_mk_none('speculation');
#line 1099
$memory_14 = {type => $memory_15,src => $memory_16,};
#line 1099
undef($memory_15);
#line 1099
undef($memory_16);
#line 1099
$memory_13 = type_checker_priv::mk_new_type_lval($memory_8, $memory_2, $memory_14, $memory_3, $memory_4, $memory_6);
#line 1099
undef($memory_14);
#line 1101
$memory_15 = c_rt_lib::ov_mk_none('yes');
#line 1101
$memory_14 = {overwrited => $memory_15,type => $memory_13,};
#line 1101
undef($memory_15);
#line 1101
hash::set_value($memory_5, $memory_9, $memory_14);
#line 1101
undef($memory_14);
#line 1102
undef($memory_0);
#line 1102
undef($memory_1);
#line 1102
undef($memory_3);
#line 1102
undef($memory_7);
#line 1102
undef($memory_8);
#line 1102
undef($memory_9);
#line 1102
undef($memory_10);
#line 1102
undef($memory_11);
#line 1102
undef($memory_12);
#line 1102
undef($memory_13);
#line 1102
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_2;
#line 1102
undef($memory_13);
#line 1103
goto label_5;
#line 1103
label_7:
#line 1104
$memory_14 = $memory_10->{'type'};
#line 1104
$memory_15 = c_rt_lib::ov_mk_none('known');
#line 1104
$memory_13 = {type => $memory_14,src => $memory_15,};
#line 1104
undef($memory_14);
#line 1104
undef($memory_15);
#line 1104
type_checker_priv::mk_new_type_lval($memory_8, $memory_2, $memory_13, $memory_3, $memory_4, $memory_6);
#line 1104
undef($memory_13);
#line 1105
undef($memory_0);
#line 1105
undef($memory_2);
#line 1105
undef($memory_3);
#line 1105
undef($memory_7);
#line 1105
undef($memory_8);
#line 1105
undef($memory_9);
#line 1105
undef($memory_10);
#line 1105
undef($memory_11);
#line 1105
undef($memory_12);
#line 1105
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_1;
#line 1106
goto label_5;
#line 1106
label_5:
#line 1106
undef($memory_11);
#line 1106
undef($memory_12);
#line 1106
undef($memory_7);
#line 1106
undef($memory_8);
#line 1106
undef($memory_9);
#line 1106
undef($memory_10);
#line 1106
undef($memory_0);
#line 1106
undef($memory_1);
#line 1106
undef($memory_2);
#line 1106
undef($memory_3);
#line 1106
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;return;
$_[4] = $memory_4;$_[5] = $memory_5;$_[6] = $memory_6;}

sub type_checker_priv::get_type_left_site_equation($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1111
$memory_4 = $memory_0;
#line 1111
$memory_4 = c_rt_lib::ov_is($memory_4, 'bin_op');
#line 1111
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1111
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 1111
$memory_4 = $memory_0;
#line 1111
$memory_4 = c_rt_lib::ov_as($memory_4, 'bin_op');
#line 1111
$memory_4 = $memory_4->{'op'};
#line 1111
$memory_6 = "->";
#line 1111
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 1111
undef($memory_6);
#line 1111
label_3:
#line 1111
undef($memory_5);
#line 1111
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1111
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 1112
$memory_6 = $memory_0;
#line 1112
$memory_6 = c_rt_lib::ov_as($memory_6, 'bin_op');
#line 1112
$memory_5 = type_checker_priv::get_type_record_key($memory_6, $memory_1, $memory_2, $memory_3);
#line 1112
undef($memory_6);
#line 1112
undef($memory_0);
#line 1112
undef($memory_4);
#line 1112
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 1112
undef($memory_5);
#line 1113
goto label_1;
#line 1113
label_2:
#line 1114
$memory_5 = type_checker_priv::check_val($memory_0, $memory_1, $memory_2, $memory_3);
#line 1114
undef($memory_0);
#line 1114
undef($memory_4);
#line 1114
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 1114
undef($memory_5);
#line 1115
goto label_1;
#line 1115
label_1:
#line 1115
undef($memory_4);
#line 1115
undef($memory_0);
#line 1115
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::get_type_record_key($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1120
$memory_5 = $memory_0->{'left'};
#line 1120
$memory_4 = type_checker_priv::check_val($memory_5, $memory_1, $memory_2, $memory_3);
#line 1120
undef($memory_5);
#line 1121
$memory_5 = ptd_system::can_delete($memory_4, $memory_1, $memory_3);
#line 1121
$memory_4 = $memory_5;
#line 1121
undef($memory_5);
#line 1122
$memory_5 = $memory_4->{'type'};
#line 1122
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_rec');
#line 1122
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1122
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 1123
$memory_6 = $memory_4->{'type'};
#line 1123
$memory_6 = c_rt_lib::ov_as($memory_6, 'tct_rec');
#line 1124
$memory_7 = $memory_0->{'right'};
#line 1124
$memory_7 = c_rt_lib::ov_as($memory_7, 'hash_key');
#line 1125
$memory_8 = hash::has_key($memory_6, $memory_7);
#line 1125
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1125
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1125
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 1126
$memory_9 = type_checker_priv::is_known($memory_4);
#line 1126
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1126
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 1126
$memory_10 = "unknown record key: ";
#line 1126
$memory_10 = $memory_10 . $memory_7;
#line 1126
type_checker_priv::add_error($memory_3, $memory_10);
#line 1126
undef($memory_10);
#line 1126
goto label_6;
#line 1126
label_6:
#line 1126
undef($memory_9);
#line 1127
$memory_9 = tct::tct_im();
#line 1127
$memory_10 = $memory_9;
#line 1127
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_10;
#line 1127
undef($memory_9);
#line 1127
undef($memory_10);
#line 1128
undef($memory_0);
#line 1128
undef($memory_5);
#line 1128
undef($memory_6);
#line 1128
undef($memory_7);
#line 1128
undef($memory_8);
#line 1128
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1129
goto label_4;
#line 1129
label_4:
#line 1129
undef($memory_8);
#line 1130
$memory_8 = hash::get_value($memory_6, $memory_7);
#line 1130
$memory_9 = $memory_8;
#line 1130
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_9;
#line 1130
undef($memory_8);
#line 1130
undef($memory_9);
#line 1131
undef($memory_0);
#line 1131
undef($memory_5);
#line 1131
undef($memory_6);
#line 1131
undef($memory_7);
#line 1131
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1131
undef($memory_6);
#line 1131
undef($memory_7);
#line 1132
goto label_2;
#line 1132
label_2:
#line 1132
undef($memory_5);
#line 1133
$memory_5 = $memory_4->{'type'};
#line 1133
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_hash');
#line 1133
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1133
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 1134
$memory_6 = $memory_4->{'type'};
#line 1134
$memory_6 = c_rt_lib::ov_as($memory_6, 'tct_hash');
#line 1134
$memory_7 = $memory_6;
#line 1134
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_7;
#line 1134
undef($memory_6);
#line 1134
undef($memory_7);
#line 1135
undef($memory_0);
#line 1135
undef($memory_5);
#line 1135
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1136
goto label_8;
#line 1136
label_8:
#line 1136
undef($memory_5);
#line 1137
$memory_7 = {};
#line 1137
$memory_6 = tct::rec($memory_7);
#line 1137
undef($memory_7);
#line 1137
$memory_5 = ptd_system::is_accepted($memory_4, $memory_6, $memory_1, $memory_3);
#line 1137
undef($memory_6);
#line 1137
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1137
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1137
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 1138
$memory_6 = "binary operator -> can be applied only to record : ";
#line 1138
$memory_8 = $memory_4->{'type'};
#line 1138
$memory_7 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 1138
undef($memory_8);
#line 1138
$memory_6 = $memory_6 . $memory_7;
#line 1138
undef($memory_7);
#line 1138
type_checker_priv::add_error($memory_3, $memory_6);
#line 1138
undef($memory_6);
#line 1140
goto label_10;
#line 1140
label_10:
#line 1140
undef($memory_5);
#line 1141
$memory_5 = tct::tct_im();
#line 1141
$memory_6 = $memory_5;
#line 1141
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'type'} = $memory_6;
#line 1141
undef($memory_5);
#line 1141
undef($memory_6);
#line 1142
undef($memory_0);
#line 1142
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1142
undef($memory_4);
#line 1142
undef($memory_0);
#line 1142
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::get_type_from_bin_op_and_check($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1147
$memory_4 = $memory_0->{'op'};
#line 1148
$memory_6 = $memory_0->{'right'};
#line 1148
$memory_5 = type_checker_priv::check_val($memory_6, $memory_1, $memory_2, $memory_3);
#line 1148
undef($memory_6);
#line 1149
$memory_6 = "=";
#line 1149
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 1149
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1149
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 1150
$memory_7 = $memory_5->{'type'};
#line 1150
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_void');
#line 1150
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 1150
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 1151
$memory_8 = "cannot use 'void' type returned from function as value";
#line 1151
type_checker_priv::add_error($memory_3, $memory_8);
#line 1151
undef($memory_8);
#line 1152
$memory_9 = tct::tct_im();
#line 1152
$memory_10 = c_rt_lib::ov_mk_none('speculation');
#line 1152
$memory_8 = {type => $memory_9,src => $memory_10,};
#line 1152
undef($memory_9);
#line 1152
undef($memory_10);
#line 1152
undef($memory_0);
#line 1152
undef($memory_4);
#line 1152
undef($memory_5);
#line 1152
undef($memory_6);
#line 1152
undef($memory_7);
#line 1152
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 1152
undef($memory_8);
#line 1153
goto label_4;
#line 1153
label_4:
#line 1153
undef($memory_7);
#line 1154
$memory_8 = $memory_3->{'errors'};
#line 1154
$memory_7 = array::len($memory_8);
#line 1154
undef($memory_8);
#line 1155
$memory_9 = $memory_0->{'left'};
#line 1155
$memory_8 = type_checker_priv::get_type_left_site_equation($memory_9, $memory_1, $memory_2, $memory_3);
#line 1155
undef($memory_9);
#line 1156
$memory_10 = $memory_3->{'errors'};
#line 1156
$memory_9 = array::len($memory_10);
#line 1156
undef($memory_10);
#line 1156
$memory_9 = $memory_9 - $memory_7;
#line 1156
$memory_10 = 0;
#line 1156
$memory_9 = c_rt_lib::to_nl($memory_9 > $memory_10);
#line 1156
undef($memory_10);
#line 1156
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1156
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 1156
undef($memory_0);
#line 1156
undef($memory_4);
#line 1156
undef($memory_5);
#line 1156
undef($memory_6);
#line 1156
undef($memory_7);
#line 1156
undef($memory_9);
#line 1156
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_8;
#line 1156
goto label_6;
#line 1156
label_6:
#line 1156
undef($memory_9);
#line 1157
$memory_10 = $memory_0->{'left'};
#line 1157
$memory_9 = type_checker_priv::set_type_to_lval($memory_10, $memory_8, $memory_5, $memory_1, $memory_2, $memory_3);
#line 1157
undef($memory_10);
#line 1157
undef($memory_0);
#line 1157
undef($memory_4);
#line 1157
undef($memory_5);
#line 1157
undef($memory_6);
#line 1157
undef($memory_7);
#line 1157
undef($memory_8);
#line 1157
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 1157
undef($memory_9);
#line 1157
undef($memory_7);
#line 1157
undef($memory_8);
#line 1158
goto label_2;
#line 1158
label_2:
#line 1158
undef($memory_6);
#line 1159
$memory_8 = $memory_0->{'left'};
#line 1159
$memory_7 = type_checker_priv::check_val($memory_8, $memory_1, $memory_2, $memory_3);
#line 1159
undef($memory_8);
#line 1159
$memory_6 = ptd_system::can_delete($memory_7, $memory_1, $memory_3);
#line 1159
undef($memory_7);
#line 1161
$memory_8 = tct::tct_im();
#line 1161
$memory_9 = $memory_6->{'src'};
#line 1161
$memory_7 = {type => $memory_8,src => $memory_9,};
#line 1161
undef($memory_8);
#line 1161
undef($memory_9);
#line 1162
$memory_8 = "->";
#line 1162
$memory_8 = c_rt_lib::to_nl($memory_4 eq $memory_8);
#line 1162
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1162
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 1163
$memory_9 = type_checker_priv::get_type_record_key($memory_0, $memory_1, $memory_2, $memory_3);
#line 1163
undef($memory_0);
#line 1163
undef($memory_4);
#line 1163
undef($memory_5);
#line 1163
undef($memory_6);
#line 1163
undef($memory_7);
#line 1163
undef($memory_8);
#line 1163
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 1163
undef($memory_9);
#line 1164
goto label_8;
#line 1164
label_8:
#line 1164
undef($memory_8);
#line 1165
$memory_8 = "ARRAY_INDEX";
#line 1165
$memory_8 = c_rt_lib::to_nl($memory_4 eq $memory_8);
#line 1165
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1165
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 1166
$memory_11 = tct::tct_im();
#line 1166
$memory_10 = tct::arr($memory_11);
#line 1166
undef($memory_11);
#line 1166
$memory_9 = ptd_system::is_accepted($memory_6, $memory_10, $memory_1, $memory_3);
#line 1166
undef($memory_10);
#line 1166
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1166
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1166
if (c_rt_lib::check_true($memory_9)) {goto label_12;}
#line 1167
$memory_10 = "array operator '[]' can be applied only to array";
#line 1167
type_checker_priv::add_error($memory_3, $memory_10);
#line 1167
undef($memory_10);
#line 1168
undef($memory_0);
#line 1168
undef($memory_4);
#line 1168
undef($memory_5);
#line 1168
undef($memory_6);
#line 1168
undef($memory_8);
#line 1168
undef($memory_9);
#line 1168
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 1169
goto label_12;
#line 1169
label_12:
#line 1169
undef($memory_9);
#line 1170
$memory_10 = tct::sim();
#line 1170
$memory_9 = ptd_system::is_accepted($memory_5, $memory_10, $memory_1, $memory_3);
#line 1170
undef($memory_10);
#line 1170
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1170
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1170
if (c_rt_lib::check_true($memory_9)) {goto label_14;}
#line 1171
$memory_10 = "array index should be number";
#line 1171
type_checker_priv::add_error($memory_3, $memory_10);
#line 1171
undef($memory_10);
#line 1172
goto label_14;
#line 1172
label_14:
#line 1172
undef($memory_9);
#line 1174
$memory_9 = $memory_6->{'type'};
#line 1174
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_arr');
#line 1174
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1174
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 1175
$memory_10 = $memory_6->{'type'};
#line 1175
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_arr');
#line 1175
$memory_11 = $memory_10;
#line 1175
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'type'} = $memory_11;
#line 1175
undef($memory_10);
#line 1175
undef($memory_11);
#line 1176
goto label_15;
#line 1176
label_16:
#line 1177
$memory_10 = $memory_6->{'type'};
#line 1177
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_im');
#line 1177
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 1177
$memory_10 = $memory_6->{'type'};
#line 1177
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_empty');
#line 1177
label_19:
#line 1177
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1177
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1177
if (c_rt_lib::check_true($memory_10)) {goto label_18;}
#line 1177
$memory_11 = [];
#line 1177
die(dfile::ssave($memory_11));
#line 1177
goto label_18;
#line 1177
label_18:
#line 1177
undef($memory_10);
#line 1177
undef($memory_11);
#line 1178
goto label_15;
#line 1178
label_15:
#line 1178
undef($memory_9);
#line 1179
undef($memory_0);
#line 1179
undef($memory_4);
#line 1179
undef($memory_5);
#line 1179
undef($memory_7);
#line 1179
undef($memory_8);
#line 1179
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1180
goto label_10;
#line 1180
label_10:
#line 1180
undef($memory_8);
#line 1181
$memory_8 = "HASH_INDEX";
#line 1181
$memory_8 = c_rt_lib::to_nl($memory_4 eq $memory_8);
#line 1181
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1181
if (c_rt_lib::check_true($memory_8)) {goto label_21;}
#line 1182
$memory_11 = tct::tct_im();
#line 1182
$memory_10 = tct::hash($memory_11);
#line 1182
undef($memory_11);
#line 1182
$memory_9 = ptd_system::is_accepted($memory_6, $memory_10, $memory_1, $memory_3);
#line 1182
undef($memory_10);
#line 1182
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1182
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1182
if (c_rt_lib::check_true($memory_9)) {goto label_23;}
#line 1183
$memory_10 = "hash operator '{}' can be applied only to hash";
#line 1183
type_checker_priv::add_error($memory_3, $memory_10);
#line 1183
undef($memory_10);
#line 1184
undef($memory_0);
#line 1184
undef($memory_4);
#line 1184
undef($memory_5);
#line 1184
undef($memory_6);
#line 1184
undef($memory_8);
#line 1184
undef($memory_9);
#line 1184
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 1185
goto label_23;
#line 1185
label_23:
#line 1185
undef($memory_9);
#line 1186
$memory_10 = tct::sim();
#line 1186
$memory_9 = ptd_system::is_accepted($memory_5, $memory_10, $memory_1, $memory_3);
#line 1186
undef($memory_10);
#line 1186
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1186
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1186
if (c_rt_lib::check_true($memory_9)) {goto label_25;}
#line 1187
$memory_10 = "hash index should be string";
#line 1187
type_checker_priv::add_error($memory_3, $memory_10);
#line 1187
undef($memory_10);
#line 1188
goto label_25;
#line 1188
label_25:
#line 1188
undef($memory_9);
#line 1190
$memory_9 = $memory_6->{'type'};
#line 1190
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_hash');
#line 1190
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1190
if (c_rt_lib::check_true($memory_9)) {goto label_27;}
#line 1191
$memory_10 = $memory_6->{'type'};
#line 1191
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_hash');
#line 1191
$memory_11 = $memory_10;
#line 1191
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'type'} = $memory_11;
#line 1191
undef($memory_10);
#line 1191
undef($memory_11);
#line 1192
goto label_26;
#line 1192
label_27:
#line 1192
$memory_9 = $memory_6->{'type'};
#line 1192
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_rec');
#line 1192
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1192
if (c_rt_lib::check_true($memory_9)) {goto label_28;}
#line 1193
$memory_11 = 1;
#line 1193
$memory_12 = {};
#line 1193
$memory_13 = {};
#line 1193
$memory_14 = c_rt_lib::to_nl(0);
#line 1193
$memory_15 = c_rt_lib::to_nl(0);
#line 1193
$memory_10 = {level => $memory_11,from => $memory_12,to => $memory_13,check => $memory_14,cast => $memory_15,};
#line 1193
undef($memory_11);
#line 1193
undef($memory_12);
#line 1193
undef($memory_13);
#line 1193
undef($memory_14);
#line 1193
undef($memory_15);
#line 1194
$memory_12 = $memory_6->{'type'};
#line 1194
$memory_11 = ptd_system::rec_to_hash($memory_12, $memory_10, $memory_1, $memory_3);
#line 1194
undef($memory_12);
#line 1194
$memory_12 = $memory_11;
#line 1194
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'type'} = $memory_12;
#line 1194
undef($memory_11);
#line 1194
undef($memory_12);
#line 1194
undef($memory_10);
#line 1195
goto label_26;
#line 1195
label_28:
#line 1196
$memory_10 = $memory_6->{'type'};
#line 1196
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_im');
#line 1196
if (c_rt_lib::check_true($memory_10)) {goto label_31;}
#line 1196
$memory_10 = $memory_6->{'type'};
#line 1196
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_empty');
#line 1196
label_31:
#line 1196
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1196
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1196
if (c_rt_lib::check_true($memory_10)) {goto label_30;}
#line 1196
$memory_11 = [];
#line 1196
die(dfile::ssave($memory_11));
#line 1196
goto label_30;
#line 1196
label_30:
#line 1196
undef($memory_10);
#line 1196
undef($memory_11);
#line 1197
goto label_26;
#line 1197
label_26:
#line 1197
undef($memory_9);
#line 1198
undef($memory_0);
#line 1198
undef($memory_4);
#line 1198
undef($memory_5);
#line 1198
undef($memory_7);
#line 1198
undef($memory_8);
#line 1198
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1199
goto label_21;
#line 1199
label_21:
#line 1199
undef($memory_8);
#line 1200
$memory_8 = "[]=";
#line 1200
$memory_8 = c_rt_lib::to_nl($memory_4 eq $memory_8);
#line 1200
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 1200
if (c_rt_lib::check_true($memory_8)) {goto label_33;}
#line 1201
$memory_11 = tct::tct_im();
#line 1201
$memory_10 = tct::arr($memory_11);
#line 1201
undef($memory_11);
#line 1201
$memory_9 = ptd_system::is_accepted($memory_6, $memory_10, $memory_1, $memory_3);
#line 1201
undef($memory_10);
#line 1201
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1201
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1201
if (c_rt_lib::check_true($memory_9)) {goto label_35;}
#line 1202
$memory_10 = "array operator '[]=' can be applied only to array";
#line 1202
type_checker_priv::add_error($memory_3, $memory_10);
#line 1202
undef($memory_10);
#line 1203
undef($memory_0);
#line 1203
undef($memory_4);
#line 1203
undef($memory_5);
#line 1203
undef($memory_6);
#line 1203
undef($memory_8);
#line 1203
undef($memory_9);
#line 1203
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_7;
#line 1204
goto label_35;
#line 1204
label_35:
#line 1204
undef($memory_9);
#line 1205
$memory_10 = $memory_5->{'type'};
#line 1205
$memory_9 = tct::arr($memory_10);
#line 1205
undef($memory_10);
#line 1205
$memory_10 = $memory_9;
#line 1205
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'type'} = $memory_10;
#line 1205
undef($memory_9);
#line 1205
undef($memory_10);
#line 1206
$memory_9 = $memory_0->{'left'};
#line 1206
$memory_11 = tct::empty();
#line 1206
$memory_10 = tct::arr($memory_11);
#line 1206
undef($memory_11);
#line 1206
type_checker_priv::set_type_to_lval_spec($memory_9, $memory_6, $memory_5, $memory_10, $memory_1, $memory_2, $memory_3);
#line 1206
undef($memory_10);
#line 1206
undef($memory_9);
#line 1208
$memory_9 = $memory_6->{'type'};
#line 1208
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_arr');
#line 1208
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1208
if (c_rt_lib::check_true($memory_9)) {goto label_37;}
#line 1208
$memory_10 = $memory_6->{'type'};
#line 1208
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_arr');
#line 1208
$memory_11 = $memory_10;
#line 1208
 if (c_rt_lib::get_hashcount($memory_6) > 1) {$memory_6 = {%{$memory_6}};}$memory_6->{'type'} = $memory_11;
#line 1208
undef($memory_10);
#line 1208
undef($memory_11);
#line 1208
goto label_37;
#line 1208
label_37:
#line 1208
undef($memory_9);
#line 1209
undef($memory_0);
#line 1209
undef($memory_4);
#line 1209
undef($memory_5);
#line 1209
undef($memory_7);
#line 1209
undef($memory_8);
#line 1209
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1210
goto label_33;
#line 1210
label_33:
#line 1210
undef($memory_8);
#line 1211
$memory_8 = tc_types::get_bin_op_def($memory_4);
#line 1212
$memory_10 = $memory_8->{'arg1'};
#line 1212
$memory_9 = ptd_system::is_accepted($memory_6, $memory_10, $memory_1, $memory_3);
#line 1212
undef($memory_10);
#line 1212
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1212
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1212
if (c_rt_lib::check_true($memory_9)) {goto label_39;}
#line 1213
$memory_10 = "incorrect type of the first argument operator '";
#line 1213
$memory_10 = $memory_10 . $memory_4;
#line 1213
$memory_11 = "'";
#line 1213
$memory_10 = $memory_10 . $memory_11;
#line 1213
undef($memory_11);
#line 1213
type_checker_priv::add_error($memory_3, $memory_10);
#line 1213
undef($memory_10);
#line 1214
goto label_39;
#line 1214
label_39:
#line 1214
undef($memory_9);
#line 1215
$memory_10 = $memory_8->{'arg2'};
#line 1215
$memory_9 = ptd_system::is_accepted($memory_5, $memory_10, $memory_1, $memory_3);
#line 1215
undef($memory_10);
#line 1215
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1215
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1215
if (c_rt_lib::check_true($memory_9)) {goto label_41;}
#line 1216
$memory_10 = "incorrect type of the second argument operator '";
#line 1216
$memory_10 = $memory_10 . $memory_4;
#line 1216
$memory_11 = "'";
#line 1216
$memory_10 = $memory_10 . $memory_11;
#line 1216
undef($memory_11);
#line 1216
type_checker_priv::add_error($memory_3, $memory_10);
#line 1216
undef($memory_10);
#line 1217
goto label_41;
#line 1217
label_41:
#line 1217
undef($memory_9);
#line 1218
$memory_10 = $memory_8->{'ret'};
#line 1218
$memory_11 = c_rt_lib::ov_mk_none('speculation');
#line 1218
$memory_9 = {type => $memory_10,src => $memory_11,};
#line 1218
undef($memory_10);
#line 1218
undef($memory_11);
#line 1218
undef($memory_0);
#line 1218
undef($memory_4);
#line 1218
undef($memory_5);
#line 1218
undef($memory_6);
#line 1218
undef($memory_7);
#line 1218
undef($memory_8);
#line 1218
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_9;
#line 1218
undef($memory_9);
#line 1218
undef($memory_4);
#line 1218
undef($memory_5);
#line 1218
undef($memory_6);
#line 1218
undef($memory_7);
#line 1218
undef($memory_8);
#line 1218
undef($memory_0);
#line 1218
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::get_print_tct_type_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 1222
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 1222
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 1224
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 1224
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 1226
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 1226
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 1228
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 1228
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 1230
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 1230
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 1232
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 1232
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 1234
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 1234
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 1244
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 1244
if (c_rt_lib::check_true($memory_1)) {goto label_9;}
#line 1250
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 1250
if (c_rt_lib::check_true($memory_1)) {goto label_10;}
#line 1250
$memory_1 = "NOMATCHALERT";
#line 1250
$memory_1 = [$memory_1,$memory_0];
#line 1250
die(dfile::ssave($memory_1));
#line 1222
label_2:
#line 1223
$memory_2 = "";
#line 1223
undef($memory_0);
#line 1223
undef($memory_1);
#line 1223
return $memory_2;
#line 1223
undef($memory_2);
#line 1224
goto label_1;
#line 1224
label_3:
#line 1225
$memory_2 = "ptd::ptd_im()";
#line 1225
undef($memory_0);
#line 1225
undef($memory_1);
#line 1225
return $memory_2;
#line 1225
undef($memory_2);
#line 1226
goto label_1;
#line 1226
label_4:
#line 1227
$memory_2 = "ptd::void()";
#line 1227
undef($memory_0);
#line 1227
undef($memory_1);
#line 1227
return $memory_2;
#line 1227
undef($memory_2);
#line 1228
goto label_1;
#line 1228
label_5:
#line 1229
$memory_2 = "ptd::sim()";
#line 1229
undef($memory_0);
#line 1229
undef($memory_1);
#line 1229
return $memory_2;
#line 1229
undef($memory_2);
#line 1230
goto label_1;
#line 1230
label_6:
#line 1230
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 1231
$memory_3 = "\@";
#line 1231
$memory_3 = $memory_3 . $memory_2;
#line 1231
undef($memory_0);
#line 1231
undef($memory_1);
#line 1231
undef($memory_2);
#line 1231
return $memory_3;
#line 1231
undef($memory_3);
#line 1231
undef($memory_2);
#line 1232
goto label_1;
#line 1232
label_7:
#line 1232
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 1233
$memory_3 = "ptd::arr(";
#line 1233
$memory_4 = type_checker_priv::get_print_tct_type_name($memory_2);
#line 1233
$memory_3 = $memory_3 . $memory_4;
#line 1233
undef($memory_4);
#line 1233
$memory_4 = ")";
#line 1233
$memory_3 = $memory_3 . $memory_4;
#line 1233
undef($memory_4);
#line 1233
undef($memory_0);
#line 1233
undef($memory_1);
#line 1233
undef($memory_2);
#line 1233
return $memory_3;
#line 1233
undef($memory_3);
#line 1233
undef($memory_2);
#line 1234
goto label_1;
#line 1234
label_8:
#line 1234
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 1235
$memory_3 = "ptd::var(";
#line 1236
$memory_6 = c_rt_lib::init_iter($memory_2);
#line 1236
label_13:
#line 1236
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 1236
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 1236
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 1236
$memory_5 = c_rt_lib::hash_get_value($memory_2, $memory_4);
#line 1237
$memory_7 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 1237
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 1239
$memory_7 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 1239
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 1239
$memory_7 = "NOMATCHALERT";
#line 1239
$memory_7 = [$memory_7,$memory_5];
#line 1239
die(dfile::ssave($memory_7));
#line 1237
label_15:
#line 1237
$memory_8 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 1238
$memory_9 = " => ";
#line 1238
$memory_9 = $memory_4 . $memory_9;
#line 1238
$memory_10 = type_checker_priv::get_print_tct_type_name($memory_8);
#line 1238
$memory_9 = $memory_9 . $memory_10;
#line 1238
undef($memory_10);
#line 1238
$memory_10 = ", ";
#line 1238
$memory_9 = $memory_9 . $memory_10;
#line 1238
undef($memory_10);
#line 1238
$memory_3 = $memory_3 . $memory_9;
#line 1238
undef($memory_9);
#line 1238
undef($memory_8);
#line 1239
goto label_14;
#line 1239
label_16:
#line 1240
$memory_8 = ", ";
#line 1240
$memory_8 = $memory_4 . $memory_8;
#line 1240
$memory_3 = $memory_3 . $memory_8;
#line 1240
undef($memory_8);
#line 1241
goto label_14;
#line 1241
label_14:
#line 1241
undef($memory_7);
#line 1242
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 1242
goto label_13;
#line 1242
label_11:
#line 1242
undef($memory_4);
#line 1242
undef($memory_5);
#line 1242
undef($memory_6);
#line 1243
$memory_4 = ")";
#line 1243
$memory_4 = $memory_3 . $memory_4;
#line 1243
undef($memory_0);
#line 1243
undef($memory_1);
#line 1243
undef($memory_2);
#line 1243
undef($memory_3);
#line 1243
return $memory_4;
#line 1243
undef($memory_4);
#line 1243
undef($memory_3);
#line 1243
undef($memory_2);
#line 1244
goto label_1;
#line 1244
label_9:
#line 1244
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 1245
$memory_3 = "ptd::rec(";
#line 1246
$memory_6 = c_rt_lib::init_iter($memory_2);
#line 1246
label_19:
#line 1246
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 1246
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 1246
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 1246
$memory_5 = c_rt_lib::hash_get_value($memory_2, $memory_4);
#line 1247
$memory_7 = " => ";
#line 1247
$memory_7 = $memory_4 . $memory_7;
#line 1247
$memory_8 = type_checker_priv::get_print_tct_type_name($memory_5);
#line 1247
$memory_7 = $memory_7 . $memory_8;
#line 1247
undef($memory_8);
#line 1247
$memory_8 = ", ";
#line 1247
$memory_7 = $memory_7 . $memory_8;
#line 1247
undef($memory_8);
#line 1247
$memory_3 = $memory_3 . $memory_7;
#line 1247
undef($memory_7);
#line 1248
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 1248
goto label_19;
#line 1248
label_17:
#line 1248
undef($memory_4);
#line 1248
undef($memory_5);
#line 1248
undef($memory_6);
#line 1249
$memory_4 = ")";
#line 1249
$memory_4 = $memory_3 . $memory_4;
#line 1249
undef($memory_0);
#line 1249
undef($memory_1);
#line 1249
undef($memory_2);
#line 1249
undef($memory_3);
#line 1249
return $memory_4;
#line 1249
undef($memory_4);
#line 1249
undef($memory_3);
#line 1249
undef($memory_2);
#line 1250
goto label_1;
#line 1250
label_10:
#line 1250
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 1251
$memory_3 = "ptd::hash(";
#line 1251
$memory_4 = type_checker_priv::get_print_tct_type_name($memory_2);
#line 1251
$memory_3 = $memory_3 . $memory_4;
#line 1251
undef($memory_4);
#line 1251
$memory_4 = ")";
#line 1251
$memory_3 = $memory_3 . $memory_4;
#line 1251
undef($memory_4);
#line 1251
undef($memory_0);
#line 1251
undef($memory_1);
#line 1251
undef($memory_2);
#line 1251
return $memory_3;
#line 1251
undef($memory_3);
#line 1251
undef($memory_2);
#line 1252
goto label_1;
#line 1252
label_1:
#line 1252
undef($memory_1);
#line 1252
undef($memory_0);
#line 1252
return;
}

sub type_checker_priv::get_print_tct_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 1256
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 1256
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 1258
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 1258
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 1260
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 1260
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 1262
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 1262
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 1264
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 1264
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 1266
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 1266
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 1268
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 1268
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 1270
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 1270
if (c_rt_lib::check_true($memory_1)) {goto label_9;}
#line 1272
$memory_1 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 1272
if (c_rt_lib::check_true($memory_1)) {goto label_10;}
#line 1272
$memory_1 = "NOMATCHALERT";
#line 1272
$memory_1 = [$memory_1,$memory_0];
#line 1272
die(dfile::ssave($memory_1));
#line 1256
label_2:
#line 1257
$memory_2 = "ptd::ptd_empty";
#line 1257
undef($memory_0);
#line 1257
undef($memory_1);
#line 1257
return $memory_2;
#line 1257
undef($memory_2);
#line 1258
goto label_1;
#line 1258
label_3:
#line 1259
$memory_2 = "ptd::ptd_im";
#line 1259
undef($memory_0);
#line 1259
undef($memory_1);
#line 1259
return $memory_2;
#line 1259
undef($memory_2);
#line 1260
goto label_1;
#line 1260
label_4:
#line 1261
$memory_2 = "ptd::void";
#line 1261
undef($memory_0);
#line 1261
undef($memory_1);
#line 1261
return $memory_2;
#line 1261
undef($memory_2);
#line 1262
goto label_1;
#line 1262
label_5:
#line 1263
$memory_2 = "ptd::sim";
#line 1263
undef($memory_0);
#line 1263
undef($memory_1);
#line 1263
return $memory_2;
#line 1263
undef($memory_2);
#line 1264
goto label_1;
#line 1264
label_6:
#line 1264
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 1265
$memory_3 = "ptd::ref";
#line 1265
undef($memory_0);
#line 1265
undef($memory_1);
#line 1265
undef($memory_2);
#line 1265
return $memory_3;
#line 1265
undef($memory_3);
#line 1265
undef($memory_2);
#line 1266
goto label_1;
#line 1266
label_7:
#line 1266
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 1267
$memory_3 = "ptd::arr";
#line 1267
undef($memory_0);
#line 1267
undef($memory_1);
#line 1267
undef($memory_2);
#line 1267
return $memory_3;
#line 1267
undef($memory_3);
#line 1267
undef($memory_2);
#line 1268
goto label_1;
#line 1268
label_8:
#line 1268
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 1269
$memory_3 = "ptd::var";
#line 1269
undef($memory_0);
#line 1269
undef($memory_1);
#line 1269
undef($memory_2);
#line 1269
return $memory_3;
#line 1269
undef($memory_3);
#line 1269
undef($memory_2);
#line 1270
goto label_1;
#line 1270
label_9:
#line 1270
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 1271
$memory_3 = "ptd::rec";
#line 1271
undef($memory_0);
#line 1271
undef($memory_1);
#line 1271
undef($memory_2);
#line 1271
return $memory_3;
#line 1271
undef($memory_3);
#line 1271
undef($memory_2);
#line 1272
goto label_1;
#line 1272
label_10:
#line 1272
$memory_2 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 1273
$memory_3 = "ptd::hash";
#line 1273
undef($memory_0);
#line 1273
undef($memory_1);
#line 1273
undef($memory_2);
#line 1273
return $memory_3;
#line 1273
undef($memory_3);
#line 1273
undef($memory_2);
#line 1274
goto label_1;
#line 1274
label_1:
#line 1274
undef($memory_1);
#line 1274
undef($memory_0);
#line 1274
return;
}

sub type_checker_priv::get_print_check_info($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];
#line 1278
$memory_1 = c_rt_lib::ov_is($memory_0, 'ok');
#line 1278
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 1280
$memory_1 = c_rt_lib::ov_is($memory_0, 'err');
#line 1280
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 1280
$memory_1 = "NOMATCHALERT";
#line 1280
$memory_1 = [$memory_1,$memory_0];
#line 1280
die(dfile::ssave($memory_1));
#line 1278
label_2:
#line 1279
$memory_2 = [];
#line 1279
die(dfile::ssave($memory_2));
#line 1279
undef($memory_2);
#line 1280
goto label_1;
#line 1280
label_3:
#line 1280
$memory_2 = c_rt_lib::ov_as($memory_0, 'err');
#line 1281
$memory_3 = " ";
#line 1282
$memory_5 = $memory_2->{'stack'};
#line 1282
$memory_4 = array::len($memory_5);
#line 1282
undef($memory_5);
#line 1282
$memory_5 = 1;
#line 1282
$memory_4 = $memory_4 - $memory_5;
#line 1282
undef($memory_5);
#line 1282
label_5:
#line 1282
$memory_5 = 0;
#line 1282
$memory_5 = c_rt_lib::to_nl($memory_4 >= $memory_5);
#line 1282
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1282
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 1283
$memory_6 = $memory_2->{'stack'};
#line 1283
$memory_6 = $memory_6->[$memory_4];
#line 1283
$memory_7 = c_rt_lib::ov_is($memory_6, 'ptd_arr');
#line 1283
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 1285
$memory_7 = c_rt_lib::ov_is($memory_6, 'ptd_var');
#line 1285
if (c_rt_lib::check_true($memory_7)) {goto label_9;}
#line 1287
$memory_7 = c_rt_lib::ov_is($memory_6, 'ptd_rec');
#line 1287
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 1289
$memory_7 = c_rt_lib::ov_is($memory_6, 'ptd_hash');
#line 1289
if (c_rt_lib::check_true($memory_7)) {goto label_11;}
#line 1289
$memory_7 = "NOMATCHALERT";
#line 1289
$memory_7 = [$memory_7,$memory_6];
#line 1289
die(dfile::ssave($memory_7));
#line 1283
label_8:
#line 1284
$memory_8 = "ptd::arr";
#line 1284
$memory_3 = $memory_3 . $memory_8;
#line 1284
undef($memory_8);
#line 1285
goto label_7;
#line 1285
label_9:
#line 1285
$memory_8 = c_rt_lib::ov_as($memory_6, 'ptd_var');
#line 1286
$memory_9 = "ptd::var(";
#line 1286
$memory_9 = $memory_9 . $memory_8;
#line 1286
$memory_10 = ")";
#line 1286
$memory_9 = $memory_9 . $memory_10;
#line 1286
undef($memory_10);
#line 1286
$memory_3 = $memory_3 . $memory_9;
#line 1286
undef($memory_9);
#line 1286
undef($memory_8);
#line 1287
goto label_7;
#line 1287
label_10:
#line 1287
$memory_8 = c_rt_lib::ov_as($memory_6, 'ptd_rec');
#line 1288
$memory_9 = "ptd::rec(";
#line 1288
$memory_9 = $memory_9 . $memory_8;
#line 1288
$memory_10 = ")";
#line 1288
$memory_9 = $memory_9 . $memory_10;
#line 1288
undef($memory_10);
#line 1288
$memory_3 = $memory_3 . $memory_9;
#line 1288
undef($memory_9);
#line 1288
undef($memory_8);
#line 1289
goto label_7;
#line 1289
label_11:
#line 1290
$memory_8 = "ptd::hash";
#line 1290
$memory_3 = $memory_3 . $memory_8;
#line 1290
undef($memory_8);
#line 1291
goto label_7;
#line 1291
label_7:
#line 1291
undef($memory_6);
#line 1291
undef($memory_7);
#line 1292
$memory_6 = "->";
#line 1292
$memory_3 = $memory_3 . $memory_6;
#line 1292
undef($memory_6);
#line 1292
$memory_6 = 1;
#line 1292
$memory_4 = $memory_4 - $memory_6;
#line 1292
undef($memory_6);
#line 1293
goto label_5;
#line 1293
label_4:
#line 1293
undef($memory_4);
#line 1293
undef($memory_5);
#line 1294
$memory_4 = $memory_2->{'from'};
#line 1294
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_rec');
#line 1294
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1294
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 1294
$memory_4 = $memory_2->{'to'};
#line 1294
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_rec');
#line 1294
label_14:
#line 1294
undef($memory_5);
#line 1294
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1294
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 1295
$memory_5 = $memory_2->{'from'};
#line 1295
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_rec');
#line 1295
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 1295
label_17:
#line 1295
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 1295
if (c_rt_lib::check_true($memory_6)) {goto label_15;}
#line 1295
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 1295
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 1296
$memory_10 = $memory_2->{'to'};
#line 1296
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_rec');
#line 1296
$memory_9 = hash::has_key($memory_10, $memory_6);
#line 1296
undef($memory_10);
#line 1296
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1296
if (c_rt_lib::check_true($memory_9)) {goto label_19;}
#line 1296
undef($memory_9);
#line 1296
goto label_16;
#line 1296
goto label_19;
#line 1296
label_19:
#line 1296
undef($memory_9);
#line 1297
$memory_9 = "(ptd::rec with field: '";
#line 1297
$memory_9 = $memory_3 . $memory_9;
#line 1297
$memory_9 = $memory_9 . $memory_6;
#line 1297
$memory_10 = "' instead of ptd::rec without field: '";
#line 1297
$memory_9 = $memory_9 . $memory_10;
#line 1297
undef($memory_10);
#line 1297
$memory_9 = $memory_9 . $memory_6;
#line 1297
$memory_10 = "')";
#line 1297
$memory_9 = $memory_9 . $memory_10;
#line 1297
undef($memory_10);
#line 1297
undef($memory_0);
#line 1297
undef($memory_1);
#line 1297
undef($memory_2);
#line 1297
undef($memory_3);
#line 1297
undef($memory_4);
#line 1297
undef($memory_5);
#line 1297
undef($memory_6);
#line 1297
undef($memory_7);
#line 1297
undef($memory_8);
#line 1297
return $memory_9;
#line 1297
undef($memory_9);
#line 1297
label_16:
#line 1299
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 1299
goto label_17;
#line 1299
label_15:
#line 1299
undef($memory_5);
#line 1299
undef($memory_6);
#line 1299
undef($memory_7);
#line 1299
undef($memory_8);
#line 1300
$memory_5 = $memory_2->{'to'};
#line 1300
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_rec');
#line 1300
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 1300
label_22:
#line 1300
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 1300
if (c_rt_lib::check_true($memory_6)) {goto label_20;}
#line 1300
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 1300
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 1301
$memory_10 = $memory_2->{'from'};
#line 1301
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_rec');
#line 1301
$memory_9 = hash::has_key($memory_10, $memory_6);
#line 1301
undef($memory_10);
#line 1301
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 1301
if (c_rt_lib::check_true($memory_9)) {goto label_24;}
#line 1301
undef($memory_9);
#line 1301
goto label_21;
#line 1301
goto label_24;
#line 1301
label_24:
#line 1301
undef($memory_9);
#line 1302
$memory_9 = "(ptd::rec without field: '";
#line 1302
$memory_9 = $memory_3 . $memory_9;
#line 1302
$memory_9 = $memory_9 . $memory_6;
#line 1302
$memory_10 = "' instead of ptd::rec with field: '";
#line 1302
$memory_9 = $memory_9 . $memory_10;
#line 1302
undef($memory_10);
#line 1302
$memory_9 = $memory_9 . $memory_6;
#line 1302
$memory_10 = "')";
#line 1302
$memory_9 = $memory_9 . $memory_10;
#line 1302
undef($memory_10);
#line 1302
undef($memory_0);
#line 1302
undef($memory_1);
#line 1302
undef($memory_2);
#line 1302
undef($memory_3);
#line 1302
undef($memory_4);
#line 1302
undef($memory_5);
#line 1302
undef($memory_6);
#line 1302
undef($memory_7);
#line 1302
undef($memory_8);
#line 1302
return $memory_9;
#line 1302
undef($memory_9);
#line 1302
label_21:
#line 1304
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 1304
goto label_22;
#line 1304
label_20:
#line 1304
undef($memory_5);
#line 1304
undef($memory_6);
#line 1304
undef($memory_7);
#line 1304
undef($memory_8);
#line 1305
goto label_12;
#line 1305
label_13:
#line 1305
$memory_4 = $memory_2->{'from'};
#line 1305
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_var');
#line 1305
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1305
if (c_rt_lib::check_true($memory_5)) {goto label_26;}
#line 1305
$memory_4 = $memory_2->{'to'};
#line 1305
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_var');
#line 1305
label_26:
#line 1305
undef($memory_5);
#line 1305
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1305
if (c_rt_lib::check_true($memory_4)) {goto label_25;}
#line 1306
$memory_5 = $memory_2->{'from'};
#line 1306
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_var');
#line 1306
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 1306
label_29:
#line 1306
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 1306
if (c_rt_lib::check_true($memory_6)) {goto label_27;}
#line 1306
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 1306
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 1307
$memory_9 = $memory_2->{'to'};
#line 1307
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_var');
#line 1308
$memory_10 = hash::has_key($memory_9, $memory_6);
#line 1308
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1308
if (c_rt_lib::check_true($memory_10)) {goto label_31;}
#line 1309
$memory_11 = c_rt_lib::ov_is($memory_7, 'no_param');
#line 1309
if (c_rt_lib::check_true($memory_11)) {goto label_33;}
#line 1314
$memory_11 = c_rt_lib::ov_is($memory_7, 'with_param');
#line 1314
if (c_rt_lib::check_true($memory_11)) {goto label_34;}
#line 1314
$memory_11 = "NOMATCHALERT";
#line 1314
$memory_11 = [$memory_11,$memory_7];
#line 1314
die(dfile::ssave($memory_11));
#line 1309
label_33:
#line 1310
$memory_12 = hash::get_value($memory_9, $memory_6);
#line 1310
$memory_12 = c_rt_lib::ov_is($memory_12, 'with_param');
#line 1310
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 1310
if (c_rt_lib::check_true($memory_12)) {goto label_36;}
#line 1311
$memory_13 = "(ptd::var case: '";
#line 1311
$memory_13 = $memory_3 . $memory_13;
#line 1311
$memory_13 = $memory_13 . $memory_6;
#line 1311
$memory_14 = "' no_param instead of ptd::var case: '";
#line 1311
$memory_13 = $memory_13 . $memory_14;
#line 1311
undef($memory_14);
#line 1311
$memory_13 = $memory_13 . $memory_6;
#line 1311
$memory_14 = "' with_param)";
#line 1311
$memory_13 = $memory_13 . $memory_14;
#line 1311
undef($memory_14);
#line 1311
undef($memory_0);
#line 1311
undef($memory_1);
#line 1311
undef($memory_2);
#line 1311
undef($memory_3);
#line 1311
undef($memory_4);
#line 1311
undef($memory_5);
#line 1311
undef($memory_6);
#line 1311
undef($memory_7);
#line 1311
undef($memory_8);
#line 1311
undef($memory_9);
#line 1311
undef($memory_10);
#line 1311
undef($memory_11);
#line 1311
undef($memory_12);
#line 1311
return $memory_13;
#line 1311
undef($memory_13);
#line 1313
goto label_36;
#line 1313
label_36:
#line 1313
undef($memory_12);
#line 1314
goto label_32;
#line 1314
label_34:
#line 1314
$memory_12 = c_rt_lib::ov_as($memory_7, 'with_param');
#line 1315
$memory_13 = hash::get_value($memory_9, $memory_6);
#line 1315
$memory_13 = c_rt_lib::ov_is($memory_13, 'no_param');
#line 1315
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 1315
if (c_rt_lib::check_true($memory_13)) {goto label_38;}
#line 1316
$memory_14 = "(ptd::var case: '";
#line 1316
$memory_14 = $memory_3 . $memory_14;
#line 1316
$memory_14 = $memory_14 . $memory_6;
#line 1316
$memory_15 = "' with_param instead of ptd::var case: '";
#line 1316
$memory_14 = $memory_14 . $memory_15;
#line 1316
undef($memory_15);
#line 1316
$memory_14 = $memory_14 . $memory_6;
#line 1316
$memory_15 = "' no_param)";
#line 1316
$memory_14 = $memory_14 . $memory_15;
#line 1316
undef($memory_15);
#line 1316
undef($memory_0);
#line 1316
undef($memory_1);
#line 1316
undef($memory_2);
#line 1316
undef($memory_3);
#line 1316
undef($memory_4);
#line 1316
undef($memory_5);
#line 1316
undef($memory_6);
#line 1316
undef($memory_7);
#line 1316
undef($memory_8);
#line 1316
undef($memory_9);
#line 1316
undef($memory_10);
#line 1316
undef($memory_11);
#line 1316
undef($memory_12);
#line 1316
undef($memory_13);
#line 1316
return $memory_14;
#line 1316
undef($memory_14);
#line 1318
goto label_38;
#line 1318
label_38:
#line 1318
undef($memory_13);
#line 1318
undef($memory_12);
#line 1319
goto label_32;
#line 1319
label_32:
#line 1319
undef($memory_11);
#line 1320
goto label_30;
#line 1320
label_31:
#line 1321
$memory_11 = "(ptd::var with case: '";
#line 1321
$memory_11 = $memory_3 . $memory_11;
#line 1321
$memory_11 = $memory_11 . $memory_6;
#line 1321
$memory_12 = "' instead of ptd::var without case: '";
#line 1321
$memory_11 = $memory_11 . $memory_12;
#line 1321
undef($memory_12);
#line 1321
$memory_11 = $memory_11 . $memory_6;
#line 1321
$memory_12 = "')";
#line 1321
$memory_11 = $memory_11 . $memory_12;
#line 1321
undef($memory_12);
#line 1321
undef($memory_0);
#line 1321
undef($memory_1);
#line 1321
undef($memory_2);
#line 1321
undef($memory_3);
#line 1321
undef($memory_4);
#line 1321
undef($memory_5);
#line 1321
undef($memory_6);
#line 1321
undef($memory_7);
#line 1321
undef($memory_8);
#line 1321
undef($memory_9);
#line 1321
undef($memory_10);
#line 1321
return $memory_11;
#line 1321
undef($memory_11);
#line 1323
goto label_30;
#line 1323
label_30:
#line 1323
undef($memory_10);
#line 1323
undef($memory_9);
#line 1324
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 1324
goto label_29;
#line 1324
label_27:
#line 1324
undef($memory_5);
#line 1324
undef($memory_6);
#line 1324
undef($memory_7);
#line 1324
undef($memory_8);
#line 1325
goto label_12;
#line 1325
label_25:
#line 1326
$memory_5 = "(";
#line 1326
$memory_7 = $memory_2->{'from'};
#line 1326
$memory_6 = type_checker_priv::get_print_tct_label($memory_7);
#line 1326
undef($memory_7);
#line 1326
$memory_5 = $memory_5 . $memory_6;
#line 1326
undef($memory_6);
#line 1326
$memory_6 = " instead of ";
#line 1326
$memory_5 = $memory_5 . $memory_6;
#line 1326
undef($memory_6);
#line 1326
$memory_7 = $memory_2->{'to'};
#line 1326
$memory_6 = type_checker_priv::get_print_tct_label($memory_7);
#line 1326
undef($memory_7);
#line 1326
$memory_5 = $memory_5 . $memory_6;
#line 1326
undef($memory_6);
#line 1326
$memory_6 = ")";
#line 1326
$memory_5 = $memory_5 . $memory_6;
#line 1326
undef($memory_6);
#line 1326
$memory_3 = $memory_3 . $memory_5;
#line 1326
undef($memory_5);
#line 1327
goto label_12;
#line 1327
label_12:
#line 1327
undef($memory_4);
#line 1328
undef($memory_0);
#line 1328
undef($memory_1);
#line 1328
undef($memory_2);
#line 1328
return $memory_3;
#line 1328
undef($memory_3);
#line 1328
undef($memory_2);
#line 1329
goto label_1;
#line 1329
label_1:
#line 1329
undef($memory_1);
#line 1329
undef($memory_0);
#line 1329
return;
}

sub type_checker_priv::check_var_decl($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1334
$memory_5 = c_rt_lib::to_nl(0);
#line 1334
$memory_4 = type_checker_priv::check_var_decl_try($memory_0, $memory_5, $memory_1, $memory_2, $memory_3);
#line 1334
undef($memory_5);
#line 1334
$memory_4 = $memory_4->{'ok'};
#line 1334
undef($memory_0);
#line 1334
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 1334
undef($memory_4);
#line 1334
undef($memory_0);
#line 1334
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::check_var_decl_try($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 1339
$memory_6 = $memory_0->{'name'};
#line 1339
$memory_5 = hash::has_key($memory_3, $memory_6);
#line 1339
undef($memory_6);
#line 1339
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1339
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 1339
$memory_6 = "variable '";
#line 1339
$memory_7 = $memory_0->{'name'};
#line 1339
$memory_6 = $memory_6 . $memory_7;
#line 1339
undef($memory_7);
#line 1339
$memory_7 = "' already exists";
#line 1339
$memory_6 = $memory_6 . $memory_7;
#line 1339
undef($memory_7);
#line 1339
type_checker_priv::add_error($memory_4, $memory_6);
#line 1339
undef($memory_6);
#line 1339
goto label_2;
#line 1339
label_2:
#line 1339
undef($memory_5);
#line 1340
$memory_7 = c_rt_lib::ov_mk_none('yes');
#line 1340
$memory_8 = tct::empty();
#line 1340
$memory_6 = {overwrited => $memory_7,type => $memory_8,};
#line 1340
undef($memory_7);
#line 1340
undef($memory_8);
#line 1340
$memory_8 = tct::empty();
#line 1340
$memory_9 = c_rt_lib::ov_mk_none('speculation');
#line 1340
$memory_7 = {type => $memory_8,src => $memory_9,};
#line 1340
undef($memory_8);
#line 1340
undef($memory_9);
#line 1340
$memory_5 = {ok => $memory_6,err => $memory_7,};
#line 1340
undef($memory_6);
#line 1340
undef($memory_7);
#line 1344
$memory_6 = $memory_0->{'type'};
#line 1344
$memory_7 = c_rt_lib::ov_is($memory_6, 'type');
#line 1344
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 1353
$memory_7 = c_rt_lib::ov_is($memory_6, 'none');
#line 1353
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 1353
$memory_7 = "NOMATCHALERT";
#line 1353
$memory_7 = [$memory_7,$memory_6];
#line 1353
die(dfile::ssave($memory_7));
#line 1344
label_4:
#line 1344
$memory_8 = c_rt_lib::ov_as($memory_6, 'type');
#line 1345
$memory_9 = ptd_parser::try_value_to_ptd($memory_8);
#line 1345
$memory_10 = c_rt_lib::ov_is($memory_9, 'err');
#line 1345
if (c_rt_lib::check_true($memory_10)) {goto label_7;}
#line 1348
$memory_10 = c_rt_lib::ov_is($memory_9, 'ok');
#line 1348
if (c_rt_lib::check_true($memory_10)) {goto label_8;}
#line 1348
$memory_10 = "NOMATCHALERT";
#line 1348
$memory_10 = [$memory_10,$memory_9];
#line 1348
die(dfile::ssave($memory_10));
#line 1345
label_7:
#line 1345
$memory_11 = c_rt_lib::ov_as($memory_9, 'err');
#line 1346
type_checker_priv::add_error($memory_4, $memory_11);
#line 1347
$memory_12 = tct::tct_im();
#line 1347
$memory_13 = "ok";
#line 1347
$memory_13 = c_rt_lib::get_ref_hash($memory_5, $memory_13);
#line 1347
$memory_14 = $memory_12;
#line 1347
 if (c_rt_lib::get_hashcount($memory_13) > 1) {$memory_13 = {%{$memory_13}};}$memory_13->{'type'} = $memory_14;
#line 1347
$memory_15 = "ok";
#line 1347
c_rt_lib::set_ref_hash($memory_5, $memory_15, $memory_13);
#line 1347
undef($memory_15);
#line 1347
undef($memory_12);
#line 1347
undef($memory_13);
#line 1347
undef($memory_14);
#line 1347
undef($memory_11);
#line 1348
goto label_6;
#line 1348
label_8:
#line 1348
$memory_11 = c_rt_lib::ov_as($memory_9, 'ok');
#line 1349
$memory_12 = "ok";
#line 1349
$memory_12 = c_rt_lib::get_ref_hash($memory_5, $memory_12);
#line 1349
$memory_13 = $memory_11;
#line 1349
 if (c_rt_lib::get_hashcount($memory_12) > 1) {$memory_12 = {%{$memory_12}};}$memory_12->{'type'} = $memory_13;
#line 1349
$memory_14 = "ok";
#line 1349
c_rt_lib::set_ref_hash($memory_5, $memory_14, $memory_12);
#line 1349
undef($memory_14);
#line 1349
undef($memory_12);
#line 1349
undef($memory_13);
#line 1350
type_checker_priv::check_types_imported($memory_11, $memory_2, $memory_4);
#line 1350
undef($memory_11);
#line 1351
goto label_6;
#line 1351
label_6:
#line 1351
undef($memory_9);
#line 1351
undef($memory_10);
#line 1352
$memory_9 = c_rt_lib::ov_mk_none('no');
#line 1352
$memory_10 = "ok";
#line 1352
$memory_10 = c_rt_lib::get_ref_hash($memory_5, $memory_10);
#line 1352
$memory_11 = $memory_9;
#line 1352
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'overwrited'} = $memory_11;
#line 1352
$memory_12 = "ok";
#line 1352
c_rt_lib::set_ref_hash($memory_5, $memory_12, $memory_10);
#line 1352
undef($memory_12);
#line 1352
undef($memory_9);
#line 1352
undef($memory_10);
#line 1352
undef($memory_11);
#line 1352
undef($memory_8);
#line 1353
goto label_3;
#line 1353
label_5:
#line 1354
goto label_3;
#line 1354
label_3:
#line 1354
undef($memory_6);
#line 1354
undef($memory_7);
#line 1355
$memory_6 = $memory_0->{'value'};
#line 1355
$memory_7 = c_rt_lib::ov_is($memory_6, 'value');
#line 1355
if (c_rt_lib::check_true($memory_7)) {goto label_10;}
#line 1375
$memory_7 = c_rt_lib::ov_is($memory_6, 'none');
#line 1375
if (c_rt_lib::check_true($memory_7)) {goto label_11;}
#line 1375
$memory_7 = "NOMATCHALERT";
#line 1375
$memory_7 = [$memory_7,$memory_6];
#line 1375
die(dfile::ssave($memory_7));
#line 1355
label_10:
#line 1355
$memory_8 = c_rt_lib::ov_as($memory_6, 'value');
#line 1356
$memory_9 = type_checker_priv::check_val($memory_8, $memory_2, $memory_3, $memory_4);
#line 1357
$memory_10 = $memory_9->{'type'};
#line 1357
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_void');
#line 1357
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1357
if (c_rt_lib::check_true($memory_10)) {goto label_13;}
#line 1358
$memory_11 = "cannot use 'void' type returned from function as value";
#line 1358
type_checker_priv::add_error($memory_4, $memory_11);
#line 1358
undef($memory_11);
#line 1359
undef($memory_0);
#line 1359
undef($memory_1);
#line 1359
undef($memory_6);
#line 1359
undef($memory_7);
#line 1359
undef($memory_8);
#line 1359
undef($memory_9);
#line 1359
undef($memory_10);
#line 1359
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_5;
#line 1360
goto label_13;
#line 1360
label_13:
#line 1360
undef($memory_10);
#line 1361
$memory_10 = $memory_1;
#line 1361
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1361
if (c_rt_lib::check_true($memory_10)) {goto label_15;}
#line 1362
$memory_11 = ptd_system::try_get_ensure_sub_types($memory_9, $memory_2, $memory_4);
#line 1363
$memory_13 = $memory_11->{'err'};
#line 1363
$memory_14 = $memory_9->{'src'};
#line 1363
$memory_12 = {type => $memory_13,src => $memory_14,};
#line 1363
undef($memory_13);
#line 1363
undef($memory_14);
#line 1363
$memory_13 = $memory_12;
#line 1363
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'err'} = $memory_13;
#line 1363
undef($memory_12);
#line 1363
undef($memory_13);
#line 1364
$memory_12 = $memory_11->{'ok'};
#line 1364
$memory_13 = $memory_12;
#line 1364
 if (c_rt_lib::get_hashcount($memory_9) > 1) {$memory_9 = {%{$memory_9}};}$memory_9->{'type'} = $memory_13;
#line 1364
undef($memory_12);
#line 1364
undef($memory_13);
#line 1364
undef($memory_11);
#line 1365
goto label_15;
#line 1365
label_15:
#line 1365
undef($memory_10);
#line 1366
$memory_10 = $memory_5->{'ok'};
#line 1366
$memory_10 = $memory_10->{'type'};
#line 1366
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_empty');
#line 1366
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 1366
if (c_rt_lib::check_true($memory_10)) {goto label_17;}
#line 1367
$memory_11 = tct::tct_im();
#line 1367
ptd_system::check_assignment($memory_11, $memory_9, $memory_2, $memory_4);
#line 1367
undef($memory_11);
#line 1368
$memory_11 = $memory_9->{'type'};
#line 1368
$memory_12 = "ok";
#line 1368
$memory_12 = c_rt_lib::get_ref_hash($memory_5, $memory_12);
#line 1368
$memory_13 = $memory_11;
#line 1368
 if (c_rt_lib::get_hashcount($memory_12) > 1) {$memory_12 = {%{$memory_12}};}$memory_12->{'type'} = $memory_13;
#line 1368
$memory_14 = "ok";
#line 1368
c_rt_lib::set_ref_hash($memory_5, $memory_14, $memory_12);
#line 1368
undef($memory_14);
#line 1368
undef($memory_11);
#line 1368
undef($memory_12);
#line 1368
undef($memory_13);
#line 1369
goto label_16;
#line 1369
label_17:
#line 1370
$memory_12 = $memory_5->{'ok'};
#line 1370
$memory_12 = $memory_12->{'type'};
#line 1370
$memory_11 = ptd_system::check_assignment($memory_12, $memory_9, $memory_2, $memory_4);
#line 1370
undef($memory_12);
#line 1371
$memory_12 = $memory_11;
#line 1371
$memory_12 = c_rt_lib::ov_is($memory_12, 'err');
#line 1371
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 1371
if (c_rt_lib::check_true($memory_12)) {goto label_19;}
#line 1372
$memory_13 = "invalid type in variable declaration: ";
#line 1372
$memory_14 = type_checker_priv::get_print_check_info($memory_11);
#line 1372
$memory_13 = $memory_13 . $memory_14;
#line 1372
undef($memory_14);
#line 1372
type_checker_priv::add_error($memory_4, $memory_13);
#line 1372
undef($memory_13);
#line 1373
goto label_19;
#line 1373
label_19:
#line 1373
undef($memory_12);
#line 1373
undef($memory_11);
#line 1374
goto label_16;
#line 1374
label_16:
#line 1374
undef($memory_10);
#line 1374
undef($memory_9);
#line 1374
undef($memory_8);
#line 1375
goto label_9;
#line 1375
label_11:
#line 1376
goto label_9;
#line 1376
label_9:
#line 1376
undef($memory_6);
#line 1376
undef($memory_7);
#line 1377
undef($memory_0);
#line 1377
undef($memory_1);
#line 1377
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return $memory_5;
#line 1377
undef($memory_5);
#line 1377
undef($memory_0);
#line 1377
undef($memory_1);
#line 1377
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[2] = $memory_2;$_[3] = $memory_3;$_[4] = $memory_4;}

sub type_checker_priv::add_var_to_vars($$$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 1381
hash::set_value($memory_2, $memory_1, $memory_0);
#line 1381
undef($memory_0);
#line 1381
undef($memory_1);
#line 1381
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub type_checker_priv::add_var_decl_to_vars($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 1385
$memory_3 = $memory_0;
#line 1385
$memory_3 = c_rt_lib::ov_is($memory_3, 'tct_im');
#line 1385
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 1385
$memory_3 = $memory_0;
#line 1385
$memory_3 = c_rt_lib::ov_is($memory_3, 'tct_empty');
#line 1385
label_3:
#line 1385
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 1385
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 1386
$memory_5 = c_rt_lib::ov_mk_none('yes');
#line 1386
$memory_4 = {overwrited => $memory_5,type => $memory_0,};
#line 1386
undef($memory_5);
#line 1386
type_checker_priv::add_var_to_vars($memory_4, $memory_1, $memory_2);
#line 1386
undef($memory_4);
#line 1387
goto label_1;
#line 1387
label_2:
#line 1388
$memory_5 = c_rt_lib::ov_mk_none('no');
#line 1388
$memory_4 = {overwrited => $memory_5,type => $memory_0,};
#line 1388
undef($memory_5);
#line 1388
type_checker_priv::add_var_to_vars($memory_4, $memory_1, $memory_2);
#line 1388
undef($memory_4);
#line 1389
goto label_1;
#line 1389
label_1:
#line 1389
undef($memory_3);
#line 1389
undef($memory_0);
#line 1389
undef($memory_1);
#line 1389
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub type_checker_priv::add_var_decl_with_type_and_check($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1394
$memory_5 = $memory_0->{'name'};
#line 1394
$memory_4 = hash::has_key($memory_2, $memory_5);
#line 1394
undef($memory_5);
#line 1394
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1394
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 1394
$memory_5 = "variable `";
#line 1394
$memory_6 = $memory_0->{'name'};
#line 1394
$memory_5 = $memory_5 . $memory_6;
#line 1394
undef($memory_6);
#line 1394
$memory_6 = "' already exists";
#line 1394
$memory_5 = $memory_5 . $memory_6;
#line 1394
undef($memory_6);
#line 1394
type_checker_priv::add_error($memory_3, $memory_5);
#line 1394
undef($memory_5);
#line 1394
goto label_2;
#line 1394
label_2:
#line 1394
undef($memory_4);
#line 1395
$memory_4 = type_checker_priv::is_known($memory_1);
#line 1395
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 1395
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 1396
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 1396
$memory_7 = $memory_1->{'type'};
#line 1396
$memory_5 = {overwrited => $memory_6,type => $memory_7,};
#line 1396
undef($memory_6);
#line 1396
undef($memory_7);
#line 1396
$memory_6 = $memory_0->{'name'};
#line 1396
type_checker_priv::add_var_to_vars($memory_5, $memory_6, $memory_2);
#line 1396
undef($memory_6);
#line 1396
undef($memory_5);
#line 1397
goto label_3;
#line 1397
label_4:
#line 1398
$memory_6 = c_rt_lib::ov_mk_none('yes');
#line 1398
$memory_7 = $memory_1->{'type'};
#line 1398
$memory_5 = {overwrited => $memory_6,type => $memory_7,};
#line 1398
undef($memory_6);
#line 1398
undef($memory_7);
#line 1398
$memory_6 = $memory_0->{'name'};
#line 1398
type_checker_priv::add_var_to_vars($memory_5, $memory_6, $memory_2);
#line 1398
undef($memory_6);
#line 1398
undef($memory_5);
#line 1399
goto label_3;
#line 1399
label_3:
#line 1399
undef($memory_4);
#line 1399
undef($memory_0);
#line 1399
undef($memory_1);
#line 1399
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::is_known($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 1403
$memory_2 = $memory_0->{'src'};
#line 1403
$memory_1 = ptd_system::is_known($memory_2);
#line 1403
undef($memory_2);
#line 1403
undef($memory_0);
#line 1403
return $memory_1;
#line 1403
undef($memory_1);
#line 1403
undef($memory_0);
#line 1403
return;
}

sub type_checker_priv::get_function_name($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 1407
$memory_2 = "";
#line 1407
$memory_2 = c_rt_lib::to_nl($memory_0 ne $memory_2);
#line 1407
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 1407
$memory_2 = "";
#line 1407
goto label_1;
#line 1407
label_2:
#line 1407
$memory_2 = "::";
#line 1407
$memory_2 = $memory_0 . $memory_2;
#line 1407
label_1:
#line 1407
$memory_2 = $memory_2 . $memory_1;
#line 1407
undef($memory_0);
#line 1407
undef($memory_1);
#line 1407
return $memory_2;
#line 1407
undef($memory_2);
#line 1407
undef($memory_0);
#line 1407
undef($memory_1);
#line 1407
return;
}

sub type_checker_priv::get_fun_module($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 1411
$memory_2 = "";
#line 1411
$memory_2 = c_rt_lib::to_nl($memory_0 eq $memory_2);
#line 1411
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 1411
$memory_2 = $memory_0;
#line 1411
goto label_1;
#line 1411
label_2:
#line 1411
$memory_2 = $memory_1;
#line 1411
label_1:
#line 1411
undef($memory_0);
#line 1411
undef($memory_1);
#line 1411
return $memory_2;
#line 1411
undef($memory_2);
#line 1411
undef($memory_0);
#line 1411
undef($memory_1);
#line 1411
return;
}

sub type_checker_priv::get_function_def($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 1416
$memory_5 = $memory_2->{'funs'};
#line 1416
$memory_7 = $memory_2->{'env'};
#line 1416
$memory_7 = $memory_7->{'current_module'};
#line 1416
$memory_6 = type_checker_priv::get_fun_module($memory_0, $memory_7);
#line 1416
undef($memory_7);
#line 1416
$memory_4 = hash::get_value($memory_5, $memory_6);
#line 1416
undef($memory_6);
#line 1416
undef($memory_5);
#line 1416
$memory_5 = type_checker_priv::get_fun_key($memory_1, $memory_0);
#line 1416
$memory_3 = hash::get_value($memory_4, $memory_5);
#line 1416
undef($memory_5);
#line 1416
undef($memory_4);
#line 1416
undef($memory_0);
#line 1416
undef($memory_1);
#line 1416
undef($memory_2);
#line 1416
return $memory_3;
#line 1416
undef($memory_3);
#line 1416
undef($memory_0);
#line 1416
undef($memory_1);
#line 1416
undef($memory_2);
#line 1416
return;
}

sub type_checker_priv::check_function_exists($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 1422
$memory_5 = $memory_2->{'env'};
#line 1422
$memory_5 = $memory_5->{'current_module'};
#line 1422
$memory_4 = type_checker_priv::get_fun_module($memory_0, $memory_5);
#line 1422
undef($memory_5);
#line 1423
$memory_6 = $memory_2->{'imports'};
#line 1423
$memory_5 = hash::has_key($memory_6, $memory_4);
#line 1423
undef($memory_6);
#line 1423
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1423
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 1423
$memory_6 = $memory_2->{'imports'};
#line 1423
$memory_5 = hash::get_value($memory_6, $memory_4);
#line 1423
undef($memory_6);
#line 1423
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1423
label_3:
#line 1423
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1423
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 1424
$memory_7 = $memory_2->{'imports'};
#line 1424
$memory_6 = hash::has_key($memory_7, $memory_4);
#line 1424
undef($memory_7);
#line 1424
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1424
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 1424
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 1424
$memory_7 = "module '";
#line 1424
$memory_7 = $memory_7 . $memory_4;
#line 1424
$memory_8 = "' not imported";
#line 1424
$memory_7 = $memory_7 . $memory_8;
#line 1424
undef($memory_8);
#line 1424
type_checker_priv::add_error($memory_3, $memory_7);
#line 1424
undef($memory_7);
#line 1424
goto label_5;
#line 1424
label_5:
#line 1424
undef($memory_6);
#line 1425
$memory_6 = "imports";
#line 1425
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 1425
$memory_7 = c_rt_lib::to_nl(0);
#line 1425
hash::set_value($memory_6, $memory_4, $memory_7);
#line 1425
undef($memory_7);
#line 1425
$memory_7 = "imports";
#line 1425
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 1425
undef($memory_7);
#line 1425
undef($memory_6);
#line 1426
$memory_6 = c_rt_lib::to_nl(0);
#line 1426
undef($memory_0);
#line 1426
undef($memory_1);
#line 1426
undef($memory_4);
#line 1426
undef($memory_5);
#line 1426
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1426
undef($memory_6);
#line 1427
goto label_6;
#line 1427
label_2:
#line 1427
$memory_6 = $memory_2->{'funs'};
#line 1427
$memory_5 = hash::has_key($memory_6, $memory_4);
#line 1427
undef($memory_6);
#line 1427
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1427
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1427
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 1428
$memory_6 = c_rt_lib::to_nl(0);
#line 1428
undef($memory_0);
#line 1428
undef($memory_1);
#line 1428
undef($memory_4);
#line 1428
undef($memory_5);
#line 1428
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1428
undef($memory_6);
#line 1429
goto label_6;
#line 1429
label_6:
#line 1429
undef($memory_5);
#line 1430
$memory_7 = $memory_2->{'funs'};
#line 1430
$memory_6 = hash::get_value($memory_7, $memory_4);
#line 1430
undef($memory_7);
#line 1430
$memory_7 = type_checker_priv::get_fun_key($memory_1, $memory_0);
#line 1430
$memory_5 = hash::has_key($memory_6, $memory_7);
#line 1430
undef($memory_7);
#line 1430
undef($memory_6);
#line 1430
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1430
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 1430
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 1431
$memory_6 = "function `";
#line 1431
$memory_7 = type_checker_priv::get_function_name($memory_0, $memory_1);
#line 1431
$memory_6 = $memory_6 . $memory_7;
#line 1431
undef($memory_7);
#line 1431
$memory_7 = "' does not exist";
#line 1431
$memory_6 = $memory_6 . $memory_7;
#line 1431
undef($memory_7);
#line 1431
type_checker_priv::add_error($memory_3, $memory_6);
#line 1431
undef($memory_6);
#line 1432
$memory_6 = c_rt_lib::to_nl(0);
#line 1432
undef($memory_0);
#line 1432
undef($memory_1);
#line 1432
undef($memory_4);
#line 1432
undef($memory_5);
#line 1432
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 1432
undef($memory_6);
#line 1433
goto label_8;
#line 1433
label_8:
#line 1433
undef($memory_5);
#line 1434
$memory_5 = c_rt_lib::to_nl(1);
#line 1434
undef($memory_0);
#line 1434
undef($memory_1);
#line 1434
undef($memory_4);
#line 1434
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 1434
undef($memory_5);
#line 1434
undef($memory_4);
#line 1434
undef($memory_0);
#line 1434
undef($memory_1);
#line 1434
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub type_checker_priv::add_error($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 1438
$memory_2 = "errors";
#line 1438
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 1438
$memory_4 = $memory_0->{'current_line'};
#line 1438
$memory_5 = $memory_0->{'module'};
#line 1438
$memory_6 = 1;
#line 1438
$memory_6 = -$memory_6;
#line 1438
$memory_7 = c_rt_lib::ov_mk_none('error');
#line 1438
$memory_3 = {message => $memory_1,line => $memory_4,module => $memory_5,column => $memory_6,type => $memory_7,};
#line 1438
undef($memory_4);
#line 1438
undef($memory_5);
#line 1438
undef($memory_6);
#line 1438
undef($memory_7);
#line 1438
array::push($memory_2, $memory_3);
#line 1438
undef($memory_3);
#line 1438
$memory_3 = "errors";
#line 1438
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 1438
undef($memory_3);
#line 1438
undef($memory_2);
#line 1438
undef($memory_1);
#line 1438
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub type_checker_priv::add_warning($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 1442
$memory_2 = "warnings";
#line 1442
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 1442
$memory_4 = $memory_0->{'current_line'};
#line 1442
$memory_5 = $memory_0->{'module'};
#line 1442
$memory_6 = 1;
#line 1442
$memory_6 = -$memory_6;
#line 1442
$memory_7 = c_rt_lib::ov_mk_none('warning');
#line 1442
$memory_3 = {message => $memory_1,line => $memory_4,module => $memory_5,column => $memory_6,type => $memory_7,};
#line 1442
undef($memory_4);
#line 1442
undef($memory_5);
#line 1442
undef($memory_6);
#line 1442
undef($memory_7);
#line 1442
array::push($memory_2, $memory_3);
#line 1442
undef($memory_3);
#line 1442
$memory_3 = "warnings";
#line 1442
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 1442
undef($memory_3);
#line 1442
undef($memory_2);
#line 1442
undef($memory_1);
#line 1442
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
