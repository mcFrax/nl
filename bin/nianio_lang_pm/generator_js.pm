use c_rt_lib;
use array;
use nl;
use string;
use string_utils;
use boolean_t;
use ov;
use nlasm;
use ptd;
sub generator_js::generate;
sub generator_js_priv::get_function_name;
sub generator_js_priv::escape_mod_fun_name;
sub generator_js_priv::escape_string;
sub generator_js_priv::is_singleton_use_function;
sub generator_js_priv::print_function_or_singleton;
sub generator_js_priv::print_function;
sub generator_js_priv::print_command;
sub generator_js_priv::print_arr;
sub generator_js_priv::print_bin_op;
sub generator_js_priv::print_call;
sub generator_js_priv::print_const_arr;
sub generator_js_priv::print_const_hash;
sub generator_js_priv::print_const_ov;
sub generator_js_priv::print_const_value;
sub generator_js_priv::print_goto;
sub generator_js_priv::print_hash;
sub generator_js_priv::print_ov_mk;
sub generator_js_priv::print_register;
sub generator_js_priv::print_register_value;
sub generator_js_priv::print_register_to_assign;
sub generator_js_priv::print_return;
sub generator_js_priv::print_una_op;

return 1;

sub generator_js::generate($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 16
$memory_1 = "";
#line 17
$memory_2 = $memory_0->{'functions'};
#line 17
$memory_4 = 0;
#line 17
$memory_5 = 1;
#line 17
$memory_6 = c_rt_lib::array_len($memory_2);
#line 17
label_3:
#line 17
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 17
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 17
$memory_3 = $memory_2->[$memory_4];
#line 17
$memory_9 = $memory_0->{'module_name'};
#line 17
$memory_8 = generator_js_priv::print_function_or_singleton($memory_3, $memory_9);
#line 17
undef($memory_9);
#line 17
$memory_1 = $memory_1 . $memory_8;
#line 17
undef($memory_8);
#line 17
$memory_4 = $memory_4 + $memory_5;
#line 17
goto label_3;
#line 17
label_1:
#line 17
undef($memory_2);
#line 17
undef($memory_3);
#line 17
undef($memory_4);
#line 17
undef($memory_5);
#line 17
undef($memory_6);
#line 17
undef($memory_7);
#line 18
undef($memory_0);
#line 18
return $memory_1;
#line 18
undef($memory_1);
#line 18
undef($memory_0);
#line 18
return;
}

sub generator_js_priv::get_function_name($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];
#line 22
$memory_2 = $memory_0->{'access'};
#line 22
$memory_3 = c_rt_lib::ov_is($memory_2, 'pub');
#line 22
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 24
$memory_3 = c_rt_lib::ov_is($memory_2, 'priv');
#line 24
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 24
$memory_3 = "NOMATCHALERT";
#line 24
$memory_3 = [$memory_3,$memory_2];
#line 24
die(dfile::ssave($memory_3));
#line 22
label_2:
#line 23
$memory_4 = generator_js_priv::escape_mod_fun_name($memory_1);
#line 23
$memory_5 = 0;
#line 23
$memory_4 = $memory_4 . $memory_5;
#line 23
undef($memory_5);
#line 23
$memory_6 = $memory_0->{'name'};
#line 23
$memory_5 = generator_js_priv::escape_mod_fun_name($memory_6);
#line 23
undef($memory_6);
#line 23
$memory_4 = $memory_4 . $memory_5;
#line 23
undef($memory_5);
#line 23
undef($memory_0);
#line 23
undef($memory_1);
#line 23
undef($memory_2);
#line 23
undef($memory_3);
#line 23
return $memory_4;
#line 23
undef($memory_4);
#line 24
goto label_1;
#line 24
label_3:
#line 25
$memory_4 = generator_js_priv::escape_mod_fun_name($memory_1);
#line 25
$memory_5 = "_priv0";
#line 25
$memory_4 = $memory_4 . $memory_5;
#line 25
undef($memory_5);
#line 25
$memory_6 = $memory_0->{'name'};
#line 25
$memory_5 = generator_js_priv::escape_mod_fun_name($memory_6);
#line 25
undef($memory_6);
#line 25
$memory_4 = $memory_4 . $memory_5;
#line 25
undef($memory_5);
#line 25
undef($memory_0);
#line 25
undef($memory_1);
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 25
return $memory_4;
#line 25
undef($memory_4);
#line 26
goto label_1;
#line 26
label_1:
#line 26
undef($memory_2);
#line 26
undef($memory_3);
#line 26
undef($memory_0);
#line 26
undef($memory_1);
#line 26
return;
}

sub generator_js_priv::escape_mod_fun_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 30
$memory_2 = 0;
#line 30
$memory_3 = "00";
#line 30
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 30
undef($memory_3);
#line 30
undef($memory_2);
#line 30
undef($memory_0);
#line 30
return $memory_1;
#line 30
undef($memory_1);
#line 30
undef($memory_0);
#line 30
return;
}

sub generator_js_priv::escape_string($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 34
$memory_2 = "\\";
#line 34
$memory_3 = "\\\\";
#line 34
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 34
undef($memory_3);
#line 34
undef($memory_2);
#line 34
$memory_0 = $memory_1;
#line 34
undef($memory_1);
#line 35
$memory_2 = "\"";
#line 35
$memory_3 = "\\\"";
#line 35
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 35
undef($memory_3);
#line 35
undef($memory_2);
#line 35
$memory_0 = $memory_1;
#line 35
undef($memory_1);
#line 36
$memory_3 = 13;
#line 36
$memory_2 = string::chr($memory_3);
#line 36
undef($memory_3);
#line 36
$memory_3 = string::lf();
#line 36
$memory_2 = $memory_2 . $memory_3;
#line 36
undef($memory_3);
#line 36
$memory_3 = "\\r\\n";
#line 36
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 36
undef($memory_3);
#line 36
undef($memory_2);
#line 36
$memory_0 = $memory_1;
#line 36
undef($memory_1);
#line 37
$memory_2 = string::lf();
#line 37
$memory_3 = "\\n";
#line 37
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 37
undef($memory_3);
#line 37
undef($memory_2);
#line 37
undef($memory_0);
#line 37
return $memory_1;
#line 37
undef($memory_1);
#line 37
undef($memory_0);
#line 37
return;
}

sub generator_js_priv::is_singleton_use_function($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];
#line 41
$memory_2 = $memory_0->{'args_type'};
#line 41
$memory_1 = array::len($memory_2);
#line 41
undef($memory_2);
#line 41
$memory_2 = 0;
#line 41
$memory_1 = c_rt_lib::to_nl($memory_1 > $memory_2);
#line 41
undef($memory_2);
#line 41
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 41
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 41
$memory_2 = c_rt_lib::to_nl(0);
#line 41
undef($memory_0);
#line 41
undef($memory_1);
#line 41
return $memory_2;
#line 41
undef($memory_2);
#line 41
goto label_2;
#line 41
label_2:
#line 41
undef($memory_1);
#line 42
$memory_1 = $memory_0->{'annotation'};
#line 42
$memory_1 = c_rt_lib::ov_is($memory_1, 'math');
#line 42
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 42
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 42
$memory_2 = c_rt_lib::to_nl(1);
#line 42
undef($memory_0);
#line 42
undef($memory_1);
#line 42
return $memory_2;
#line 42
undef($memory_2);
#line 42
goto label_4;
#line 42
label_4:
#line 42
undef($memory_1);
#line 43
$memory_1 = c_rt_lib::to_nl(0);
#line 45
$memory_3 = $memory_0->{'commands'};
#line 45
$memory_5 = 0;
#line 45
$memory_6 = 1;
#line 45
$memory_7 = c_rt_lib::array_len($memory_3);
#line 45
label_7:
#line 45
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 45
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 45
$memory_4 = $memory_3->[$memory_5];
#line 46
$memory_9 = $memory_4->{'cmd'};
#line 47
$memory_10 = $memory_9;
#line 47
$memory_10 = c_rt_lib::ov_is($memory_10, 'call');
#line 47
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 47
if (c_rt_lib::check_true($memory_10)) {goto label_9;}
#line 48
$memory_11 = $memory_9;
#line 48
$memory_11 = c_rt_lib::ov_as($memory_11, 'call');
#line 49
$memory_12 = $memory_11->{'fun_name'};
#line 49
$memory_13 = "sigleton_do_not_use_without_approval";
#line 49
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 49
undef($memory_13);
#line 49
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 49
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 49
if (c_rt_lib::check_true($memory_12)) {goto label_11;}
#line 49
undef($memory_9);
#line 49
undef($memory_10);
#line 49
undef($memory_11);
#line 49
undef($memory_12);
#line 49
goto label_6;
#line 49
goto label_11;
#line 49
label_11:
#line 49
undef($memory_12);
#line 50
$memory_12 = $memory_11->{'mod'};
#line 50
$memory_13 = "singleton";
#line 50
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_13);
#line 50
undef($memory_13);
#line 50
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 50
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 50
if (c_rt_lib::check_true($memory_12)) {goto label_13;}
#line 50
undef($memory_9);
#line 50
undef($memory_10);
#line 50
undef($memory_11);
#line 50
undef($memory_12);
#line 50
goto label_6;
#line 50
goto label_13;
#line 50
label_13:
#line 50
undef($memory_12);
#line 51
$memory_12 = c_rt_lib::to_nl(1);
#line 51
$memory_1 = $memory_12;
#line 51
undef($memory_12);
#line 52
$memory_12 = $memory_11->{'dest'};
#line 52
$memory_2 = $memory_12;
#line 52
undef($memory_12);
#line 52
undef($memory_11);
#line 53
goto label_8;
#line 53
label_9:
#line 53
$memory_10 = $memory_9;
#line 53
$memory_10 = c_rt_lib::ov_is($memory_10, 'return');
#line 53
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 53
if (c_rt_lib::check_true($memory_10)) {goto label_14;}
#line 54
$memory_11 = $memory_1;
#line 54
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 54
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 54
if (c_rt_lib::check_true($memory_11)) {goto label_16;}
#line 54
$memory_12 = c_rt_lib::to_nl(0);
#line 54
undef($memory_0);
#line 54
undef($memory_1);
#line 54
undef($memory_2);
#line 54
undef($memory_3);
#line 54
undef($memory_4);
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
return $memory_12;
#line 54
undef($memory_12);
#line 54
goto label_16;
#line 54
label_16:
#line 54
undef($memory_11);
#line 55
$memory_11 = $memory_9;
#line 55
$memory_11 = c_rt_lib::ov_as($memory_11, 'return');
#line 56
$memory_12 = $memory_11;
#line 56
$memory_12 = c_rt_lib::ov_is($memory_12, 'val');
#line 56
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 56
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 56
if (c_rt_lib::check_true($memory_12)) {goto label_18;}
#line 56
$memory_13 = c_rt_lib::to_nl(0);
#line 56
undef($memory_0);
#line 56
undef($memory_1);
#line 56
undef($memory_2);
#line 56
undef($memory_3);
#line 56
undef($memory_4);
#line 56
undef($memory_5);
#line 56
undef($memory_6);
#line 56
undef($memory_7);
#line 56
undef($memory_8);
#line 56
undef($memory_9);
#line 56
undef($memory_10);
#line 56
undef($memory_11);
#line 56
undef($memory_12);
#line 56
return $memory_13;
#line 56
undef($memory_13);
#line 56
goto label_18;
#line 56
label_18:
#line 56
undef($memory_12);
#line 57
$memory_12 = $memory_11;
#line 57
$memory_12 = c_rt_lib::ov_as($memory_12, 'val');
#line 57
$memory_12 = c_rt_lib::to_nl($memory_12 eq $memory_2);
#line 57
undef($memory_0);
#line 57
undef($memory_1);
#line 57
undef($memory_2);
#line 57
undef($memory_3);
#line 57
undef($memory_4);
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
return $memory_12;
#line 57
undef($memory_12);
#line 57
undef($memory_11);
#line 58
goto label_8;
#line 58
label_14:
#line 58
$memory_10 = $memory_9;
#line 58
$memory_10 = c_rt_lib::ov_is($memory_10, 'prt_lbl');
#line 58
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 58
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 59
goto label_8;
#line 59
label_19:
#line 59
$memory_10 = $memory_9;
#line 59
$memory_10 = c_rt_lib::ov_is($memory_10, 'clear');
#line 59
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 59
if (c_rt_lib::check_true($memory_10)) {goto label_20;}
#line 60
goto label_8;
#line 60
label_20:
#line 61
$memory_11 = $memory_1;
#line 61
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 61
if (c_rt_lib::check_true($memory_11)) {goto label_22;}
#line 61
$memory_12 = c_rt_lib::to_nl(0);
#line 61
undef($memory_0);
#line 61
undef($memory_1);
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
#line 61
undef($memory_8);
#line 61
undef($memory_9);
#line 61
undef($memory_10);
#line 61
undef($memory_11);
#line 61
return $memory_12;
#line 61
undef($memory_12);
#line 61
goto label_22;
#line 61
label_22:
#line 61
undef($memory_11);
#line 62
goto label_8;
#line 62
label_8:
#line 62
undef($memory_10);
#line 62
undef($memory_9);
#line 62
label_6:
#line 63
$memory_5 = $memory_5 + $memory_6;
#line 63
goto label_7;
#line 63
label_5:
#line 63
undef($memory_3);
#line 63
undef($memory_4);
#line 63
undef($memory_5);
#line 63
undef($memory_6);
#line 63
undef($memory_7);
#line 63
undef($memory_8);
#line 64
$memory_3 = c_rt_lib::to_nl(0);
#line 64
undef($memory_0);
#line 64
undef($memory_1);
#line 64
undef($memory_2);
#line 64
return $memory_3;
#line 64
undef($memory_3);
#line 64
undef($memory_1);
#line 64
undef($memory_2);
#line 64
undef($memory_0);
#line 64
return;
}

sub generator_js_priv::print_function_or_singleton($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 68
$memory_2 = generator_js_priv::is_singleton_use_function($memory_0);
#line 68
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 68
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 69
$memory_3 = generator_js_priv::get_function_name($memory_0, $memory_1);
#line 70
$memory_4 = $memory_0;
#line 71
$memory_5 = "SINGLETON__";
#line 71
$memory_6 = $memory_0->{'name'};
#line 71
$memory_5 = $memory_5 . $memory_6;
#line 71
undef($memory_6);
#line 71
$memory_6 = $memory_5;
#line 71
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'name'} = $memory_6;
#line 71
undef($memory_5);
#line 71
undef($memory_6);
#line 72
$memory_5 = generator_js_priv::get_function_name($memory_4, $memory_1);
#line 73
$memory_6 = "value__singleton__";
#line 73
$memory_6 = $memory_6 . $memory_5;
#line 74
$memory_7 = generator_js_priv::print_function($memory_4, $memory_1);
#line 75
$memory_8 = "var ";
#line 75
$memory_8 = $memory_8 . $memory_6;
#line 75
$memory_9 = ";
function ";
#line 75
$memory_8 = $memory_8 . $memory_9;
#line 75
undef($memory_9);
#line 75
$memory_8 = $memory_8 . $memory_3;
#line 75
$memory_9 = "(){
	if (";
#line 75
$memory_8 = $memory_8 . $memory_9;
#line 75
undef($memory_9);
#line 75
$memory_8 = $memory_8 . $memory_6;
#line 75
$memory_9 = " === undefined) {
		";
#line 75
$memory_8 = $memory_8 . $memory_9;
#line 75
undef($memory_9);
#line 75
$memory_8 = $memory_8 . $memory_6;
#line 75
$memory_9 = " = ";
#line 75
$memory_8 = $memory_8 . $memory_9;
#line 75
undef($memory_9);
#line 75
$memory_8 = $memory_8 . $memory_5;
#line 75
$memory_9 = "();
	}
	return ";
#line 75
$memory_8 = $memory_8 . $memory_9;
#line 75
undef($memory_9);
#line 75
$memory_8 = $memory_8 . $memory_6;
#line 75
$memory_9 = ";
}";
#line 75
$memory_8 = $memory_8 . $memory_9;
#line 75
undef($memory_9);
#line 75
$memory_7 = $memory_7 . $memory_8;
#line 75
undef($memory_8);
#line 82
undef($memory_0);
#line 82
undef($memory_1);
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
return $memory_7;
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
goto label_1;
#line 83
label_2:
#line 84
$memory_3 = generator_js_priv::print_function($memory_0, $memory_1);
#line 84
undef($memory_0);
#line 84
undef($memory_1);
#line 84
undef($memory_2);
#line 84
return $memory_3;
#line 84
undef($memory_3);
#line 85
goto label_1;
#line 85
label_1:
#line 85
undef($memory_2);
#line 85
undef($memory_0);
#line 85
undef($memory_1);
#line 85
return;
}

sub generator_js_priv::print_function($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 89
$memory_2 = string::lf();
#line 89
$memory_3 = "function ";
#line 89
$memory_2 = $memory_2 . $memory_3;
#line 89
undef($memory_3);
#line 90
$memory_3 = generator_js_priv::get_function_name($memory_0, $memory_1);
#line 90
$memory_4 = "(";
#line 90
$memory_3 = $memory_3 . $memory_4;
#line 90
undef($memory_4);
#line 90
$memory_2 = $memory_2 . $memory_3;
#line 90
undef($memory_3);
#line 91
$memory_4 = $memory_0->{'args_type'};
#line 91
$memory_3 = array::len($memory_4);
#line 91
undef($memory_4);
#line 91
$memory_4 = 0;
#line 91
$memory_5 = 1;
#line 91
label_3:
#line 91
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 91
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 92
$memory_7 = 0;
#line 92
$memory_7 = c_rt_lib::to_nl($memory_4 == $memory_7);
#line 92
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 92
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 92
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 92
$memory_8 = ", ";
#line 92
$memory_2 = $memory_2 . $memory_8;
#line 92
undef($memory_8);
#line 92
goto label_5;
#line 92
label_5:
#line 92
undef($memory_7);
#line 93
$memory_7 = "___arg__";
#line 93
$memory_7 = $memory_7 . $memory_4;
#line 93
$memory_2 = $memory_2 . $memory_7;
#line 93
undef($memory_7);
#line 94
$memory_4 = $memory_4 + $memory_5;
#line 94
goto label_3;
#line 94
label_1:
#line 94
undef($memory_3);
#line 94
undef($memory_4);
#line 94
undef($memory_5);
#line 94
undef($memory_6);
#line 95
$memory_3 = ") {";
#line 95
$memory_4 = string::lf();
#line 95
$memory_3 = $memory_3 . $memory_4;
#line 95
undef($memory_4);
#line 95
$memory_2 = $memory_2 . $memory_3;
#line 95
undef($memory_3);
#line 96
$memory_4 = $memory_0->{'args_type'};
#line 96
$memory_3 = array::len($memory_4);
#line 96
undef($memory_4);
#line 96
$memory_4 = 0;
#line 96
$memory_5 = 1;
#line 96
label_8:
#line 96
$memory_6 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 96
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 97
$memory_7 = $memory_0->{'args_type'};
#line 97
$memory_7 = $memory_7->[$memory_4];
#line 97
$memory_8 = c_rt_lib::ov_is($memory_7, 'val');
#line 97
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 99
$memory_8 = c_rt_lib::ov_is($memory_7, 'ref');
#line 99
if (c_rt_lib::check_true($memory_8)) {goto label_11;}
#line 99
$memory_8 = "NOMATCHALERT";
#line 99
$memory_8 = [$memory_8,$memory_7];
#line 99
die(dfile::ssave($memory_8));
#line 97
label_10:
#line 98
$memory_9 = "var ___nl__";
#line 98
$memory_9 = $memory_9 . $memory_4;
#line 98
$memory_10 = " = new ImRef(___arg__";
#line 98
$memory_9 = $memory_9 . $memory_10;
#line 98
undef($memory_10);
#line 98
$memory_9 = $memory_9 . $memory_4;
#line 98
$memory_10 = ".value);";
#line 98
$memory_9 = $memory_9 . $memory_10;
#line 98
undef($memory_10);
#line 98
$memory_2 = $memory_2 . $memory_9;
#line 98
undef($memory_9);
#line 99
goto label_9;
#line 99
label_11:
#line 100
$memory_9 = "var ___nl__";
#line 100
$memory_9 = $memory_9 . $memory_4;
#line 100
$memory_10 = " = ___arg__";
#line 100
$memory_9 = $memory_9 . $memory_10;
#line 100
undef($memory_10);
#line 100
$memory_9 = $memory_9 . $memory_4;
#line 100
$memory_10 = ";";
#line 100
$memory_9 = $memory_9 . $memory_10;
#line 100
undef($memory_10);
#line 100
$memory_2 = $memory_2 . $memory_9;
#line 100
undef($memory_9);
#line 101
goto label_9;
#line 101
label_9:
#line 101
undef($memory_7);
#line 101
undef($memory_8);
#line 102
$memory_4 = $memory_4 + $memory_5;
#line 102
goto label_8;
#line 102
label_6:
#line 102
undef($memory_3);
#line 102
undef($memory_4);
#line 102
undef($memory_5);
#line 102
undef($memory_6);
#line 103
$memory_3 = string::lf();
#line 103
$memory_2 = $memory_2 . $memory_3;
#line 103
undef($memory_3);
#line 104
$memory_4 = $memory_0->{'args_type'};
#line 104
$memory_3 = array::len($memory_4);
#line 104
undef($memory_4);
#line 104
label_13:
#line 104
$memory_4 = $memory_0->{'reg_size'};
#line 104
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_4);
#line 104
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 104
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 105
$memory_5 = "var ___nl__";
#line 105
$memory_5 = $memory_5 . $memory_3;
#line 105
$memory_6 = " = new ImRef(null);";
#line 105
$memory_5 = $memory_5 . $memory_6;
#line 105
undef($memory_6);
#line 105
$memory_6 = string::lf();
#line 105
$memory_5 = $memory_5 . $memory_6;
#line 105
undef($memory_6);
#line 105
$memory_2 = $memory_2 . $memory_5;
#line 105
undef($memory_5);
#line 105
$memory_5 = 1;
#line 105
$memory_3 = $memory_3 + $memory_5;
#line 105
undef($memory_5);
#line 106
goto label_13;
#line 106
label_12:
#line 106
undef($memory_3);
#line 106
undef($memory_4);
#line 107
$memory_3 = "var label = null; while (1) { switch (label) { default: ";
#line 107
$memory_4 = string::lf();
#line 107
$memory_3 = $memory_3 . $memory_4;
#line 107
undef($memory_4);
#line 107
$memory_2 = $memory_2 . $memory_3;
#line 107
undef($memory_3);
#line 108
$memory_3 = $memory_0->{'commands'};
#line 108
$memory_5 = 0;
#line 108
$memory_6 = 1;
#line 108
$memory_7 = c_rt_lib::array_len($memory_3);
#line 108
label_17:
#line 108
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 108
if (c_rt_lib::check_true($memory_8)) {goto label_15;}
#line 108
$memory_4 = $memory_3->[$memory_5];
#line 108
$memory_9 = generator_js_priv::print_command($memory_1, $memory_4);
#line 108
$memory_2 = $memory_2 . $memory_9;
#line 108
undef($memory_9);
#line 108
$memory_5 = $memory_5 + $memory_6;
#line 108
goto label_17;
#line 108
label_15:
#line 108
undef($memory_3);
#line 108
undef($memory_4);
#line 108
undef($memory_5);
#line 108
undef($memory_6);
#line 108
undef($memory_7);
#line 108
undef($memory_8);
#line 109
$memory_3 = "}}}";
#line 109
$memory_3 = $memory_2 . $memory_3;
#line 109
$memory_4 = string::lf();
#line 109
$memory_3 = $memory_3 . $memory_4;
#line 109
undef($memory_4);
#line 109
undef($memory_0);
#line 109
undef($memory_1);
#line 109
undef($memory_2);
#line 109
return $memory_3;
#line 109
undef($memory_3);
#line 109
undef($memory_2);
#line 109
undef($memory_0);
#line 109
undef($memory_1);
#line 109
return;
}

sub generator_js_priv::print_command($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 114
$memory_3 = $memory_1->{'cmd'};
#line 114
$memory_4 = c_rt_lib::ov_is($memory_3, 'arr_decl');
#line 114
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 116
$memory_4 = c_rt_lib::ov_is($memory_3, 'hash_decl');
#line 116
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 118
$memory_4 = c_rt_lib::ov_is($memory_3, 'call');
#line 118
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 120
$memory_4 = c_rt_lib::ov_is($memory_3, 'func');
#line 120
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 123
$memory_4 = c_rt_lib::ov_is($memory_3, 'una_op');
#line 123
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 125
$memory_4 = c_rt_lib::ov_is($memory_3, 'bin_op');
#line 125
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 127
$memory_4 = c_rt_lib::ov_is($memory_3, 'ov_is');
#line 127
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 130
$memory_4 = c_rt_lib::ov_is($memory_3, 'ov_as');
#line 130
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 133
$memory_4 = c_rt_lib::ov_is($memory_3, 'return');
#line 133
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 135
$memory_4 = c_rt_lib::ov_is($memory_3, 'die');
#line 135
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 137
$memory_4 = c_rt_lib::ov_is($memory_3, 'move');
#line 137
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 139
$memory_4 = c_rt_lib::ov_is($memory_3, 'load_const');
#line 139
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 141
$memory_4 = c_rt_lib::ov_is($memory_3, 'get_frm_idx');
#line 141
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 144
$memory_4 = c_rt_lib::ov_is($memory_3, 'set_at_idx');
#line 144
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 148
$memory_4 = c_rt_lib::ov_is($memory_3, 'get_val');
#line 148
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 151
$memory_4 = c_rt_lib::ov_is($memory_3, 'set_val');
#line 151
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 155
$memory_4 = c_rt_lib::ov_is($memory_3, 'ov_mk');
#line 155
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 157
$memory_4 = c_rt_lib::ov_is($memory_3, 'prt_lbl');
#line 157
if (c_rt_lib::check_true($memory_4)) {goto label_19;}
#line 159
$memory_4 = c_rt_lib::ov_is($memory_3, 'if_goto');
#line 159
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 162
$memory_4 = c_rt_lib::ov_is($memory_3, 'goto');
#line 162
if (c_rt_lib::check_true($memory_4)) {goto label_21;}
#line 164
$memory_4 = c_rt_lib::ov_is($memory_3, 'clear');
#line 164
if (c_rt_lib::check_true($memory_4)) {goto label_22;}
#line 164
$memory_4 = "NOMATCHALERT";
#line 164
$memory_4 = [$memory_4,$memory_3];
#line 164
die(dfile::ssave($memory_4));
#line 114
label_2:
#line 114
$memory_5 = c_rt_lib::ov_as($memory_3, 'arr_decl');
#line 115
$memory_7 = $memory_5->{'dest'};
#line 115
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 115
undef($memory_7);
#line 115
$memory_8 = $memory_5->{'src'};
#line 115
$memory_7 = generator_js_priv::print_arr($memory_8);
#line 115
undef($memory_8);
#line 115
$memory_6 = $memory_6 . $memory_7;
#line 115
undef($memory_7);
#line 115
$memory_7 = ";";
#line 115
$memory_6 = $memory_6 . $memory_7;
#line 115
undef($memory_7);
#line 115
$memory_2 = $memory_6;
#line 115
undef($memory_6);
#line 115
undef($memory_5);
#line 116
goto label_1;
#line 116
label_3:
#line 116
$memory_5 = c_rt_lib::ov_as($memory_3, 'hash_decl');
#line 117
$memory_7 = $memory_5->{'dest'};
#line 117
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 117
undef($memory_7);
#line 117
$memory_8 = $memory_5->{'src'};
#line 117
$memory_7 = generator_js_priv::print_hash($memory_8);
#line 117
undef($memory_8);
#line 117
$memory_6 = $memory_6 . $memory_7;
#line 117
undef($memory_7);
#line 117
$memory_7 = ";";
#line 117
$memory_6 = $memory_6 . $memory_7;
#line 117
undef($memory_7);
#line 117
$memory_2 = $memory_6;
#line 117
undef($memory_6);
#line 117
undef($memory_5);
#line 118
goto label_1;
#line 118
label_4:
#line 118
$memory_5 = c_rt_lib::ov_as($memory_3, 'call');
#line 119
$memory_7 = $memory_5->{'dest'};
#line 119
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 119
undef($memory_7);
#line 119
$memory_8 = $memory_5->{'mod'};
#line 119
$memory_9 = $memory_5->{'fun_name'};
#line 119
$memory_10 = $memory_5->{'args'};
#line 119
$memory_7 = generator_js_priv::print_call($memory_0, $memory_8, $memory_9, $memory_10);
#line 119
undef($memory_10);
#line 119
undef($memory_9);
#line 119
undef($memory_8);
#line 119
$memory_6 = $memory_6 . $memory_7;
#line 119
undef($memory_7);
#line 119
$memory_2 = $memory_6;
#line 119
undef($memory_6);
#line 119
undef($memory_5);
#line 120
goto label_1;
#line 120
label_5:
#line 120
$memory_5 = c_rt_lib::ov_as($memory_3, 'func');
#line 121
$memory_7 = $memory_5->{'dest'};
#line 121
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 121
undef($memory_7);
#line 121
$memory_9 = $memory_5->{'module'};
#line 121
$memory_10 = $memory_5->{'name'};
#line 121
$memory_8 = {module => $memory_9,name => $memory_10,};
#line 121
undef($memory_9);
#line 121
undef($memory_10);
#line 121
$memory_7 = generator_js_priv::print_const_hash($memory_8);
#line 121
undef($memory_8);
#line 121
$memory_6 = $memory_6 . $memory_7;
#line 121
undef($memory_7);
#line 121
$memory_7 = ";";
#line 121
$memory_6 = $memory_6 . $memory_7;
#line 121
undef($memory_7);
#line 121
$memory_2 = $memory_6;
#line 121
undef($memory_6);
#line 121
undef($memory_5);
#line 123
goto label_1;
#line 123
label_6:
#line 123
$memory_5 = c_rt_lib::ov_as($memory_3, 'una_op');
#line 124
$memory_6 = generator_js_priv::print_una_op($memory_5);
#line 124
$memory_2 = $memory_6;
#line 124
undef($memory_6);
#line 124
undef($memory_5);
#line 125
goto label_1;
#line 125
label_7:
#line 125
$memory_5 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 126
$memory_6 = generator_js_priv::print_bin_op($memory_5);
#line 126
$memory_2 = $memory_6;
#line 126
undef($memory_6);
#line 126
undef($memory_5);
#line 127
goto label_1;
#line 127
label_8:
#line 127
$memory_5 = c_rt_lib::ov_as($memory_3, 'ov_is');
#line 128
$memory_7 = $memory_5->{'dest'};
#line 128
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 128
undef($memory_7);
#line 128
$memory_7 = "c_rt_lib0ov_is(";
#line 128
$memory_6 = $memory_6 . $memory_7;
#line 128
undef($memory_7);
#line 128
$memory_8 = $memory_5->{'src'};
#line 128
$memory_7 = generator_js_priv::print_register($memory_8);
#line 128
undef($memory_8);
#line 128
$memory_6 = $memory_6 . $memory_7;
#line 128
undef($memory_7);
#line 128
$memory_7 = ", new ImRef(\"";
#line 128
$memory_6 = $memory_6 . $memory_7;
#line 128
undef($memory_7);
#line 128
$memory_8 = $memory_5->{'type'};
#line 128
$memory_7 = generator_js_priv::escape_string($memory_8);
#line 128
undef($memory_8);
#line 128
$memory_6 = $memory_6 . $memory_7;
#line 128
undef($memory_7);
#line 128
$memory_7 = "\"));";
#line 128
$memory_6 = $memory_6 . $memory_7;
#line 128
undef($memory_7);
#line 128
$memory_2 = $memory_6;
#line 128
undef($memory_6);
#line 128
undef($memory_5);
#line 130
goto label_1;
#line 130
label_9:
#line 130
$memory_5 = c_rt_lib::ov_as($memory_3, 'ov_as');
#line 131
$memory_7 = $memory_5->{'dest'};
#line 131
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 131
undef($memory_7);
#line 131
$memory_7 = "c_rt_lib0ov_as(";
#line 131
$memory_6 = $memory_6 . $memory_7;
#line 131
undef($memory_7);
#line 131
$memory_8 = $memory_5->{'src'};
#line 131
$memory_7 = generator_js_priv::print_register($memory_8);
#line 131
undef($memory_8);
#line 131
$memory_6 = $memory_6 . $memory_7;
#line 131
undef($memory_7);
#line 131
$memory_7 = ", new ImRef(\"";
#line 131
$memory_6 = $memory_6 . $memory_7;
#line 131
undef($memory_7);
#line 131
$memory_8 = $memory_5->{'type'};
#line 131
$memory_7 = generator_js_priv::escape_string($memory_8);
#line 131
undef($memory_8);
#line 131
$memory_6 = $memory_6 . $memory_7;
#line 131
undef($memory_7);
#line 131
$memory_7 = "\"));";
#line 131
$memory_6 = $memory_6 . $memory_7;
#line 131
undef($memory_7);
#line 131
$memory_2 = $memory_6;
#line 131
undef($memory_6);
#line 131
undef($memory_5);
#line 133
goto label_1;
#line 133
label_10:
#line 133
$memory_5 = c_rt_lib::ov_as($memory_3, 'return');
#line 134
$memory_6 = generator_js_priv::print_return($memory_5);
#line 134
$memory_2 = $memory_6;
#line 134
undef($memory_6);
#line 134
undef($memory_5);
#line 135
goto label_1;
#line 135
label_11:
#line 135
$memory_5 = c_rt_lib::ov_as($memory_3, 'die');
#line 136
$memory_6 = "nl_die();";
#line 136
$memory_2 = $memory_6;
#line 136
undef($memory_6);
#line 136
undef($memory_5);
#line 137
goto label_1;
#line 137
label_12:
#line 137
$memory_5 = c_rt_lib::ov_as($memory_3, 'move');
#line 138
$memory_7 = $memory_5->{'dest'};
#line 138
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 138
undef($memory_7);
#line 138
$memory_8 = $memory_5->{'src'};
#line 138
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 138
undef($memory_8);
#line 138
$memory_6 = $memory_6 . $memory_7;
#line 138
undef($memory_7);
#line 138
$memory_7 = ";";
#line 138
$memory_6 = $memory_6 . $memory_7;
#line 138
undef($memory_7);
#line 138
$memory_2 = $memory_6;
#line 138
undef($memory_6);
#line 138
undef($memory_5);
#line 139
goto label_1;
#line 139
label_13:
#line 139
$memory_5 = c_rt_lib::ov_as($memory_3, 'load_const');
#line 140
$memory_7 = $memory_5->{'dest'};
#line 140
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 140
undef($memory_7);
#line 140
$memory_8 = $memory_5->{'val'};
#line 140
$memory_7 = generator_js_priv::print_const_value($memory_8);
#line 140
undef($memory_8);
#line 140
$memory_6 = $memory_6 . $memory_7;
#line 140
undef($memory_7);
#line 140
$memory_7 = ";";
#line 140
$memory_6 = $memory_6 . $memory_7;
#line 140
undef($memory_7);
#line 140
$memory_2 = $memory_6;
#line 140
undef($memory_6);
#line 140
undef($memory_5);
#line 141
goto label_1;
#line 141
label_14:
#line 141
$memory_5 = c_rt_lib::ov_as($memory_3, 'get_frm_idx');
#line 142
$memory_7 = $memory_5->{'dest'};
#line 142
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 142
undef($memory_7);
#line 142
$memory_8 = $memory_5->{'src'};
#line 142
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 142
undef($memory_8);
#line 142
$memory_6 = $memory_6 . $memory_7;
#line 142
undef($memory_7);
#line 142
$memory_7 = "[Math.floor(";
#line 142
$memory_6 = $memory_6 . $memory_7;
#line 142
undef($memory_7);
#line 142
$memory_8 = $memory_5->{'idx'};
#line 142
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 142
undef($memory_8);
#line 142
$memory_6 = $memory_6 . $memory_7;
#line 142
undef($memory_7);
#line 142
$memory_7 = ")];";
#line 142
$memory_6 = $memory_6 . $memory_7;
#line 142
undef($memory_7);
#line 142
$memory_2 = $memory_6;
#line 142
undef($memory_6);
#line 142
undef($memory_5);
#line 144
goto label_1;
#line 144
label_15:
#line 144
$memory_5 = c_rt_lib::ov_as($memory_3, 'set_at_idx');
#line 145
$memory_7 = $memory_5->{'src'};
#line 145
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 145
undef($memory_7);
#line 145
$memory_8 = $memory_5->{'src'};
#line 145
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 145
undef($memory_8);
#line 145
$memory_6 = $memory_6 . $memory_7;
#line 145
undef($memory_7);
#line 145
$memory_7 = ".slice();";
#line 145
$memory_6 = $memory_6 . $memory_7;
#line 145
undef($memory_7);
#line 145
$memory_2 = $memory_6;
#line 145
undef($memory_6);
#line 146
$memory_7 = $memory_5->{'src'};
#line 146
$memory_6 = generator_js_priv::print_register_value($memory_7);
#line 146
undef($memory_7);
#line 146
$memory_7 = "[Math.floor(";
#line 146
$memory_6 = $memory_6 . $memory_7;
#line 146
undef($memory_7);
#line 146
$memory_8 = $memory_5->{'idx'};
#line 146
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 146
undef($memory_8);
#line 146
$memory_6 = $memory_6 . $memory_7;
#line 146
undef($memory_7);
#line 146
$memory_7 = ")] = ";
#line 146
$memory_6 = $memory_6 . $memory_7;
#line 146
undef($memory_7);
#line 146
$memory_8 = $memory_5->{'val'};
#line 146
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 146
undef($memory_8);
#line 146
$memory_6 = $memory_6 . $memory_7;
#line 146
undef($memory_7);
#line 146
$memory_7 = ";";
#line 146
$memory_6 = $memory_6 . $memory_7;
#line 146
undef($memory_7);
#line 146
$memory_2 = $memory_2 . $memory_6;
#line 146
undef($memory_6);
#line 146
undef($memory_5);
#line 148
goto label_1;
#line 148
label_16:
#line 148
$memory_5 = c_rt_lib::ov_as($memory_3, 'get_val');
#line 149
$memory_7 = $memory_5->{'dest'};
#line 149
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 149
undef($memory_7);
#line 149
$memory_8 = $memory_5->{'src'};
#line 149
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 149
undef($memory_8);
#line 149
$memory_6 = $memory_6 . $memory_7;
#line 149
undef($memory_7);
#line 149
$memory_7 = "[\"";
#line 149
$memory_6 = $memory_6 . $memory_7;
#line 149
undef($memory_7);
#line 149
$memory_8 = $memory_5->{'key'};
#line 149
$memory_7 = generator_js_priv::escape_string($memory_8);
#line 149
undef($memory_8);
#line 149
$memory_6 = $memory_6 . $memory_7;
#line 149
undef($memory_7);
#line 149
$memory_7 = "\"];";
#line 149
$memory_6 = $memory_6 . $memory_7;
#line 149
undef($memory_7);
#line 149
$memory_2 = $memory_6;
#line 149
undef($memory_6);
#line 149
undef($memory_5);
#line 151
goto label_1;
#line 151
label_17:
#line 151
$memory_5 = c_rt_lib::ov_as($memory_3, 'set_val');
#line 152
$memory_7 = $memory_5->{'src'};
#line 152
$memory_6 = generator_js_priv::print_register_to_assign($memory_7);
#line 152
undef($memory_7);
#line 152
$memory_7 = "c_rt_lib0clone(";
#line 152
$memory_6 = $memory_6 . $memory_7;
#line 152
undef($memory_7);
#line 152
$memory_8 = $memory_5->{'src'};
#line 152
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 152
undef($memory_8);
#line 152
$memory_6 = $memory_6 . $memory_7;
#line 152
undef($memory_7);
#line 152
$memory_7 = ");";
#line 152
$memory_6 = $memory_6 . $memory_7;
#line 152
undef($memory_7);
#line 152
$memory_2 = $memory_6;
#line 152
undef($memory_6);
#line 153
$memory_7 = $memory_5->{'src'};
#line 153
$memory_6 = generator_js_priv::print_register_value($memory_7);
#line 153
undef($memory_7);
#line 153
$memory_7 = "[\"";
#line 153
$memory_6 = $memory_6 . $memory_7;
#line 153
undef($memory_7);
#line 153
$memory_8 = $memory_5->{'key'};
#line 153
$memory_7 = generator_js_priv::escape_string($memory_8);
#line 153
undef($memory_8);
#line 153
$memory_6 = $memory_6 . $memory_7;
#line 153
undef($memory_7);
#line 153
$memory_7 = "\"] = ";
#line 153
$memory_6 = $memory_6 . $memory_7;
#line 153
undef($memory_7);
#line 153
$memory_8 = $memory_5->{'val'};
#line 153
$memory_7 = generator_js_priv::print_register_value($memory_8);
#line 153
undef($memory_8);
#line 153
$memory_6 = $memory_6 . $memory_7;
#line 153
undef($memory_7);
#line 153
$memory_7 = ";";
#line 153
$memory_6 = $memory_6 . $memory_7;
#line 153
undef($memory_7);
#line 153
$memory_2 = $memory_2 . $memory_6;
#line 153
undef($memory_6);
#line 153
undef($memory_5);
#line 155
goto label_1;
#line 155
label_18:
#line 155
$memory_5 = c_rt_lib::ov_as($memory_3, 'ov_mk');
#line 156
$memory_6 = generator_js_priv::print_ov_mk($memory_5);
#line 156
$memory_2 = $memory_6;
#line 156
undef($memory_6);
#line 156
undef($memory_5);
#line 157
goto label_1;
#line 157
label_19:
#line 157
$memory_5 = c_rt_lib::ov_as($memory_3, 'prt_lbl');
#line 158
$memory_6 = "case \"";
#line 158
$memory_6 = $memory_6 . $memory_5;
#line 158
$memory_7 = "\":";
#line 158
$memory_6 = $memory_6 . $memory_7;
#line 158
undef($memory_7);
#line 158
$memory_2 = $memory_6;
#line 158
undef($memory_6);
#line 158
undef($memory_5);
#line 159
goto label_1;
#line 159
label_20:
#line 159
$memory_5 = c_rt_lib::ov_as($memory_3, 'if_goto');
#line 160
$memory_6 = "if (c_rt_lib0check_true_native(";
#line 160
$memory_8 = $memory_5->{'src'};
#line 160
$memory_7 = generator_js_priv::print_register($memory_8);
#line 160
undef($memory_8);
#line 160
$memory_6 = $memory_6 . $memory_7;
#line 160
undef($memory_7);
#line 160
$memory_7 = ")) {";
#line 160
$memory_6 = $memory_6 . $memory_7;
#line 160
undef($memory_7);
#line 160
$memory_8 = $memory_5->{'dest'};
#line 160
$memory_7 = generator_js_priv::print_goto($memory_8);
#line 160
undef($memory_8);
#line 160
$memory_6 = $memory_6 . $memory_7;
#line 160
undef($memory_7);
#line 160
$memory_7 = "}";
#line 160
$memory_6 = $memory_6 . $memory_7;
#line 160
undef($memory_7);
#line 160
$memory_2 = $memory_6;
#line 160
undef($memory_6);
#line 160
undef($memory_5);
#line 162
goto label_1;
#line 162
label_21:
#line 162
$memory_5 = c_rt_lib::ov_as($memory_3, 'goto');
#line 163
$memory_6 = generator_js_priv::print_goto($memory_5);
#line 163
$memory_2 = $memory_6;
#line 163
undef($memory_6);
#line 163
undef($memory_5);
#line 164
goto label_1;
#line 164
label_22:
#line 164
$memory_5 = c_rt_lib::ov_as($memory_3, 'clear');
#line 165
$memory_6 = generator_js_priv::print_register_to_assign($memory_5);
#line 165
$memory_7 = "null";
#line 165
$memory_6 = $memory_6 . $memory_7;
#line 165
undef($memory_7);
#line 165
$memory_2 = $memory_6;
#line 165
undef($memory_6);
#line 165
undef($memory_5);
#line 166
goto label_1;
#line 166
label_1:
#line 166
undef($memory_3);
#line 166
undef($memory_4);
#line 167
$memory_3 = "//line ";
#line 167
$memory_4 = $memory_1->{'debug'};
#line 167
$memory_4 = $memory_4->{'nast_debug'};
#line 167
$memory_4 = $memory_4->{'begin'};
#line 167
$memory_4 = $memory_4->{'line'};
#line 167
$memory_3 = $memory_3 . $memory_4;
#line 167
undef($memory_4);
#line 167
$memory_4 = string::lf();
#line 167
$memory_3 = $memory_3 . $memory_4;
#line 167
undef($memory_4);
#line 167
$memory_3 = $memory_3 . $memory_2;
#line 167
$memory_4 = string::lf();
#line 167
$memory_3 = $memory_3 . $memory_4;
#line 167
undef($memory_4);
#line 167
undef($memory_0);
#line 167
undef($memory_1);
#line 167
undef($memory_2);
#line 167
return $memory_3;
#line 167
undef($memory_3);
#line 167
undef($memory_2);
#line 167
undef($memory_0);
#line 167
undef($memory_1);
#line 167
return;
}

sub generator_js_priv::print_arr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 171
$memory_1 = "[";
#line 172
$memory_3 = 0;
#line 172
$memory_4 = 1;
#line 172
$memory_5 = c_rt_lib::array_len($memory_0);
#line 172
label_3:
#line 172
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 172
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 172
$memory_2 = $memory_0->[$memory_3];
#line 172
$memory_7 = generator_js_priv::print_register_value($memory_2);
#line 172
$memory_8 = ",";
#line 172
$memory_7 = $memory_7 . $memory_8;
#line 172
undef($memory_8);
#line 172
$memory_1 = $memory_1 . $memory_7;
#line 172
undef($memory_7);
#line 172
$memory_3 = $memory_3 + $memory_4;
#line 172
goto label_3;
#line 172
label_1:
#line 172
undef($memory_2);
#line 172
undef($memory_3);
#line 172
undef($memory_4);
#line 172
undef($memory_5);
#line 172
undef($memory_6);
#line 173
$memory_2 = "]";
#line 173
$memory_2 = $memory_1 . $memory_2;
#line 173
undef($memory_0);
#line 173
undef($memory_1);
#line 173
return $memory_2;
#line 173
undef($memory_2);
#line 173
undef($memory_1);
#line 173
undef($memory_0);
#line 173
return;
}

sub generator_js_priv::print_bin_op($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 177
$memory_2 = $memory_0->{'dest'};
#line 177
$memory_1 = generator_js_priv::print_register_to_assign($memory_2);
#line 177
undef($memory_2);
#line 178
$memory_2 = $memory_0->{'op'};
#line 178
$memory_3 = ">=";
#line 178
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 178
undef($memory_3);
#line 178
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 178
$memory_2 = $memory_0->{'op'};
#line 178
$memory_3 = "<=";
#line 178
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 178
undef($memory_3);
#line 178
label_7:
#line 178
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 178
$memory_2 = $memory_0->{'op'};
#line 178
$memory_3 = "<";
#line 178
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 178
undef($memory_3);
#line 178
label_6:
#line 178
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 178
$memory_2 = $memory_0->{'op'};
#line 178
$memory_3 = ">";
#line 178
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 178
undef($memory_3);
#line 178
label_5:
#line 178
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 178
$memory_2 = $memory_0->{'op'};
#line 178
$memory_3 = "==";
#line 178
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 178
undef($memory_3);
#line 178
label_4:
#line 178
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 178
$memory_2 = $memory_0->{'op'};
#line 178
$memory_3 = "!=";
#line 178
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 178
undef($memory_3);
#line 178
label_3:
#line 178
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 178
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 180
$memory_3 = "c_rt_lib0native_to_nl(parseFloat(";
#line 180
$memory_3 = $memory_1 . $memory_3;
#line 180
$memory_5 = $memory_0->{'left'};
#line 180
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 180
undef($memory_5);
#line 180
$memory_3 = $memory_3 . $memory_4;
#line 180
undef($memory_4);
#line 180
$memory_4 = ") ";
#line 180
$memory_3 = $memory_3 . $memory_4;
#line 180
undef($memory_4);
#line 180
$memory_4 = $memory_0->{'op'};
#line 180
$memory_3 = $memory_3 . $memory_4;
#line 180
undef($memory_4);
#line 180
$memory_4 = " parseFloat(";
#line 180
$memory_3 = $memory_3 . $memory_4;
#line 180
undef($memory_4);
#line 180
$memory_5 = $memory_0->{'right'};
#line 180
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 180
undef($memory_5);
#line 180
$memory_3 = $memory_3 . $memory_4;
#line 180
undef($memory_4);
#line 180
$memory_4 = "));";
#line 180
$memory_3 = $memory_3 . $memory_4;
#line 180
undef($memory_4);
#line 180
undef($memory_0);
#line 180
undef($memory_1);
#line 180
undef($memory_2);
#line 180
return $memory_3;
#line 180
undef($memory_3);
#line 182
goto label_1;
#line 182
label_2:
#line 182
$memory_2 = $memory_0->{'op'};
#line 182
$memory_3 = "eq";
#line 182
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 182
undef($memory_3);
#line 182
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 182
$memory_2 = $memory_0->{'op'};
#line 182
$memory_3 = "ne";
#line 182
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 182
undef($memory_3);
#line 182
label_9:
#line 182
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 182
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 183
$memory_3 = "c_rt_lib0native_to_nl(";
#line 183
$memory_5 = $memory_0->{'left'};
#line 183
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 183
undef($memory_5);
#line 183
$memory_3 = $memory_3 . $memory_4;
#line 183
undef($memory_4);
#line 183
$memory_4 = ".toString()";
#line 183
$memory_3 = $memory_3 . $memory_4;
#line 183
undef($memory_4);
#line 183
$memory_1 = $memory_1 . $memory_3;
#line 183
undef($memory_3);
#line 184
$memory_3 = $memory_0->{'op'};
#line 184
$memory_4 = "eq";
#line 184
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 184
undef($memory_4);
#line 184
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 184
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 185
$memory_4 = " == ";
#line 185
$memory_1 = $memory_1 . $memory_4;
#line 185
undef($memory_4);
#line 186
goto label_10;
#line 186
label_11:
#line 187
$memory_4 = " != ";
#line 187
$memory_1 = $memory_1 . $memory_4;
#line 187
undef($memory_4);
#line 188
goto label_10;
#line 188
label_10:
#line 188
undef($memory_3);
#line 189
$memory_4 = $memory_0->{'right'};
#line 189
$memory_3 = generator_js_priv::print_register_value($memory_4);
#line 189
undef($memory_4);
#line 189
$memory_3 = $memory_1 . $memory_3;
#line 189
$memory_4 = ".toString());";
#line 189
$memory_3 = $memory_3 . $memory_4;
#line 189
undef($memory_4);
#line 189
undef($memory_0);
#line 189
undef($memory_1);
#line 189
undef($memory_2);
#line 189
return $memory_3;
#line 189
undef($memory_3);
#line 190
goto label_1;
#line 190
label_8:
#line 190
$memory_2 = $memory_0->{'op'};
#line 190
$memory_3 = ".";
#line 190
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 190
undef($memory_3);
#line 190
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 190
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 191
$memory_4 = $memory_0->{'left'};
#line 191
$memory_3 = generator_js_priv::print_register_value($memory_4);
#line 191
undef($memory_4);
#line 191
$memory_3 = $memory_1 . $memory_3;
#line 191
$memory_4 = ".toString() + ";
#line 191
$memory_3 = $memory_3 . $memory_4;
#line 191
undef($memory_4);
#line 191
$memory_5 = $memory_0->{'right'};
#line 191
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 191
undef($memory_5);
#line 191
$memory_3 = $memory_3 . $memory_4;
#line 191
undef($memory_4);
#line 191
$memory_4 = ".toString();";
#line 191
$memory_3 = $memory_3 . $memory_4;
#line 191
undef($memory_4);
#line 191
undef($memory_0);
#line 191
undef($memory_1);
#line 191
undef($memory_2);
#line 191
return $memory_3;
#line 191
undef($memory_3);
#line 193
goto label_1;
#line 193
label_12:
#line 194
$memory_3 = "parseFloat(";
#line 194
$memory_3 = $memory_1 . $memory_3;
#line 194
$memory_5 = $memory_0->{'left'};
#line 194
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 194
undef($memory_5);
#line 194
$memory_3 = $memory_3 . $memory_4;
#line 194
undef($memory_4);
#line 194
$memory_4 = ") ";
#line 194
$memory_3 = $memory_3 . $memory_4;
#line 194
undef($memory_4);
#line 194
$memory_4 = $memory_0->{'op'};
#line 194
$memory_3 = $memory_3 . $memory_4;
#line 194
undef($memory_4);
#line 194
$memory_4 = " parseFloat(";
#line 194
$memory_3 = $memory_3 . $memory_4;
#line 194
undef($memory_4);
#line 194
$memory_5 = $memory_0->{'right'};
#line 194
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 194
undef($memory_5);
#line 194
$memory_3 = $memory_3 . $memory_4;
#line 194
undef($memory_4);
#line 194
$memory_4 = ");";
#line 194
$memory_3 = $memory_3 . $memory_4;
#line 194
undef($memory_4);
#line 194
undef($memory_0);
#line 194
undef($memory_1);
#line 194
undef($memory_2);
#line 194
return $memory_3;
#line 194
undef($memory_3);
#line 196
goto label_1;
#line 196
label_1:
#line 196
undef($memory_2);
#line 196
undef($memory_1);
#line 196
undef($memory_0);
#line 196
return;
}

sub generator_js_priv::print_call($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 200
$memory_4 = "";
#line 200
$memory_4 = c_rt_lib::to_nl($memory_1 eq $memory_4);
#line 200
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 200
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 200
$memory_5 = "_priv";
#line 200
$memory_5 = $memory_0 . $memory_5;
#line 200
$memory_1 = $memory_5;
#line 200
undef($memory_5);
#line 200
goto label_2;
#line 200
label_2:
#line 200
undef($memory_4);
#line 201
$memory_4 = generator_js_priv::escape_mod_fun_name($memory_1);
#line 201
$memory_5 = 0;
#line 201
$memory_4 = $memory_4 . $memory_5;
#line 201
undef($memory_5);
#line 201
$memory_5 = generator_js_priv::escape_mod_fun_name($memory_2);
#line 201
$memory_4 = $memory_4 . $memory_5;
#line 201
undef($memory_5);
#line 201
$memory_5 = "(";
#line 201
$memory_4 = $memory_4 . $memory_5;
#line 201
undef($memory_5);
#line 202
$memory_5 = 0;
#line 203
$memory_7 = 0;
#line 203
$memory_8 = 1;
#line 203
$memory_9 = c_rt_lib::array_len($memory_3);
#line 203
label_5:
#line 203
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 203
if (c_rt_lib::check_true($memory_10)) {goto label_3;}
#line 203
$memory_6 = $memory_3->[$memory_7];
#line 204
$memory_11 = 0;
#line 204
$memory_11 = c_rt_lib::to_nl($memory_5 == $memory_11);
#line 204
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 204
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 204
if (c_rt_lib::check_true($memory_11)) {goto label_7;}
#line 204
$memory_12 = ",";
#line 204
$memory_4 = $memory_4 . $memory_12;
#line 204
undef($memory_12);
#line 204
goto label_7;
#line 204
label_7:
#line 204
undef($memory_11);
#line 205
$memory_11 = 1;
#line 205
$memory_5 = $memory_5 + $memory_11;
#line 205
undef($memory_11);
#line 206
$memory_11 = c_rt_lib::ov_is($memory_6, 'ref');
#line 206
if (c_rt_lib::check_true($memory_11)) {goto label_9;}
#line 208
$memory_11 = c_rt_lib::ov_is($memory_6, 'val');
#line 208
if (c_rt_lib::check_true($memory_11)) {goto label_10;}
#line 208
$memory_11 = "NOMATCHALERT";
#line 208
$memory_11 = [$memory_11,$memory_6];
#line 208
die(dfile::ssave($memory_11));
#line 206
label_9:
#line 206
$memory_12 = c_rt_lib::ov_as($memory_6, 'ref');
#line 207
$memory_13 = generator_js_priv::print_register($memory_12);
#line 207
$memory_4 = $memory_4 . $memory_13;
#line 207
undef($memory_13);
#line 207
undef($memory_12);
#line 208
goto label_8;
#line 208
label_10:
#line 208
$memory_12 = c_rt_lib::ov_as($memory_6, 'val');
#line 209
$memory_13 = generator_js_priv::print_register($memory_12);
#line 209
$memory_4 = $memory_4 . $memory_13;
#line 209
undef($memory_13);
#line 209
undef($memory_12);
#line 210
goto label_8;
#line 210
label_8:
#line 210
undef($memory_11);
#line 211
$memory_7 = $memory_7 + $memory_8;
#line 211
goto label_5;
#line 211
label_3:
#line 211
undef($memory_6);
#line 211
undef($memory_7);
#line 211
undef($memory_8);
#line 211
undef($memory_9);
#line 211
undef($memory_10);
#line 212
$memory_6 = ");";
#line 212
$memory_6 = $memory_4 . $memory_6;
#line 212
undef($memory_0);
#line 212
undef($memory_1);
#line 212
undef($memory_2);
#line 212
undef($memory_3);
#line 212
undef($memory_4);
#line 212
undef($memory_5);
#line 212
return $memory_6;
#line 212
undef($memory_6);
#line 212
undef($memory_4);
#line 212
undef($memory_5);
#line 212
undef($memory_0);
#line 212
undef($memory_1);
#line 212
undef($memory_2);
#line 212
undef($memory_3);
#line 212
return;
}

sub generator_js_priv::print_const_arr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 216
$memory_1 = "[";
#line 217
$memory_3 = 0;
#line 217
$memory_4 = 1;
#line 217
$memory_5 = c_rt_lib::array_len($memory_0);
#line 217
label_3:
#line 217
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 217
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 217
$memory_2 = $memory_0->[$memory_3];
#line 217
$memory_7 = generator_js_priv::print_const_value($memory_2);
#line 217
$memory_8 = ",";
#line 217
$memory_7 = $memory_7 . $memory_8;
#line 217
undef($memory_8);
#line 217
$memory_1 = $memory_1 . $memory_7;
#line 217
undef($memory_7);
#line 217
$memory_3 = $memory_3 + $memory_4;
#line 217
goto label_3;
#line 217
label_1:
#line 217
undef($memory_2);
#line 217
undef($memory_3);
#line 217
undef($memory_4);
#line 217
undef($memory_5);
#line 217
undef($memory_6);
#line 218
$memory_2 = "]";
#line 218
$memory_2 = $memory_1 . $memory_2;
#line 218
undef($memory_0);
#line 218
undef($memory_1);
#line 218
return $memory_2;
#line 218
undef($memory_2);
#line 218
undef($memory_1);
#line 218
undef($memory_0);
#line 218
return;
}

sub generator_js_priv::print_const_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 222
$memory_1 = "{";
#line 223
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 223
label_3:
#line 223
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 223
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 223
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 223
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 223
$memory_5 = "\"";
#line 223
$memory_6 = generator_js_priv::escape_string($memory_2);
#line 223
$memory_5 = $memory_5 . $memory_6;
#line 223
undef($memory_6);
#line 223
$memory_6 = "\":";
#line 223
$memory_5 = $memory_5 . $memory_6;
#line 223
undef($memory_6);
#line 223
$memory_6 = generator_js_priv::print_const_value($memory_3);
#line 223
$memory_5 = $memory_5 . $memory_6;
#line 223
undef($memory_6);
#line 223
$memory_6 = ",";
#line 223
$memory_5 = $memory_5 . $memory_6;
#line 223
undef($memory_6);
#line 223
$memory_1 = $memory_1 . $memory_5;
#line 223
undef($memory_5);
#line 223
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 223
goto label_3;
#line 223
label_1:
#line 223
undef($memory_2);
#line 223
undef($memory_3);
#line 223
undef($memory_4);
#line 224
$memory_2 = "}";
#line 224
$memory_2 = $memory_1 . $memory_2;
#line 224
undef($memory_0);
#line 224
undef($memory_1);
#line 224
return $memory_2;
#line 224
undef($memory_2);
#line 224
undef($memory_1);
#line 224
undef($memory_0);
#line 224
return;
}

sub generator_js_priv::print_const_ov($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 228
$memory_1 = "";
#line 229
$memory_2 = ov::has_value($memory_0);
#line 229
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 229
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 230
$memory_3 = "new OV(\"";
#line 230
$memory_5 = ov::get_element($memory_0);
#line 230
$memory_4 = generator_js_priv::escape_string($memory_5);
#line 230
undef($memory_5);
#line 230
$memory_3 = $memory_3 . $memory_4;
#line 230
undef($memory_4);
#line 230
$memory_4 = "\", ";
#line 230
$memory_3 = $memory_3 . $memory_4;
#line 230
undef($memory_4);
#line 230
$memory_5 = ov::get_value($memory_0);
#line 230
$memory_4 = generator_js_priv::print_const_value($memory_5);
#line 230
undef($memory_5);
#line 230
$memory_3 = $memory_3 . $memory_4;
#line 230
undef($memory_4);
#line 230
$memory_4 = ")";
#line 230
$memory_3 = $memory_3 . $memory_4;
#line 230
undef($memory_4);
#line 230
$memory_1 = $memory_3;
#line 230
undef($memory_3);
#line 232
goto label_1;
#line 232
label_2:
#line 233
$memory_3 = "new OV(\"";
#line 233
$memory_5 = ov::get_element($memory_0);
#line 233
$memory_4 = generator_js_priv::escape_string($memory_5);
#line 233
undef($memory_5);
#line 233
$memory_3 = $memory_3 . $memory_4;
#line 233
undef($memory_4);
#line 233
$memory_4 = "\", null)";
#line 233
$memory_3 = $memory_3 . $memory_4;
#line 233
undef($memory_4);
#line 233
$memory_1 = $memory_3;
#line 233
undef($memory_3);
#line 234
goto label_1;
#line 234
label_1:
#line 234
undef($memory_2);
#line 235
undef($memory_0);
#line 235
return $memory_1;
#line 235
undef($memory_1);
#line 235
undef($memory_0);
#line 235
return;
}

sub generator_js_priv::print_const_value($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 239
$memory_1 = nl::is_sim($memory_0);
#line 239
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 239
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 239
$memory_4 = "";
#line 239
$memory_4 = $memory_0 . $memory_4;
#line 239
$memory_1 = string_utils::is_integer($memory_4);
#line 239
undef($memory_4);
#line 239
label_4:
#line 239
undef($memory_3);
#line 239
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 239
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 239
$memory_1 = 0;
#line 239
$memory_1 = $memory_1 + $memory_0;
#line 239
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_0);
#line 239
label_3:
#line 239
undef($memory_2);
#line 239
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 239
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 240
undef($memory_1);
#line 240
return $memory_0;
#line 241
goto label_1;
#line 241
label_2:
#line 241
$memory_1 = nl::is_sim($memory_0);
#line 241
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 241
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 242
$memory_2 = "\"";
#line 242
$memory_3 = generator_js_priv::escape_string($memory_0);
#line 242
$memory_2 = $memory_2 . $memory_3;
#line 242
undef($memory_3);
#line 242
$memory_3 = "\"";
#line 242
$memory_2 = $memory_2 . $memory_3;
#line 242
undef($memory_3);
#line 242
undef($memory_0);
#line 242
undef($memory_1);
#line 242
return $memory_2;
#line 242
undef($memory_2);
#line 243
goto label_1;
#line 243
label_5:
#line 243
$memory_1 = nl::is_array($memory_0);
#line 243
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 243
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 244
$memory_2 = generator_js_priv::print_const_arr($memory_0);
#line 244
undef($memory_0);
#line 244
undef($memory_1);
#line 244
return $memory_2;
#line 244
undef($memory_2);
#line 245
goto label_1;
#line 245
label_6:
#line 245
$memory_1 = nl::is_hash($memory_0);
#line 245
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 245
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 246
$memory_2 = generator_js_priv::print_const_hash($memory_0);
#line 246
undef($memory_0);
#line 246
undef($memory_1);
#line 246
return $memory_2;
#line 246
undef($memory_2);
#line 247
goto label_1;
#line 247
label_7:
#line 247
$memory_1 = nl::is_variant($memory_0);
#line 247
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 247
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 248
$memory_2 = generator_js_priv::print_const_ov($memory_0);
#line 248
undef($memory_0);
#line 248
undef($memory_1);
#line 248
return $memory_2;
#line 248
undef($memory_2);
#line 249
goto label_1;
#line 249
label_8:
#line 250
$memory_2 = [];
#line 250
die(dfile::ssave($memory_2));
#line 250
undef($memory_2);
#line 251
goto label_1;
#line 251
label_1:
#line 251
undef($memory_1);
#line 251
undef($memory_0);
#line 251
return;
}

sub generator_js_priv::print_goto($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 255
$memory_1 = "label = \"";
#line 255
$memory_1 = $memory_1 . $memory_0;
#line 255
$memory_2 = "\"; continue;";
#line 255
$memory_1 = $memory_1 . $memory_2;
#line 255
undef($memory_2);
#line 255
undef($memory_0);
#line 255
return $memory_1;
#line 255
undef($memory_1);
#line 255
undef($memory_0);
#line 255
return;
}

sub generator_js_priv::print_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 259
$memory_1 = "{";
#line 260
$memory_3 = 0;
#line 260
$memory_4 = 1;
#line 260
$memory_5 = c_rt_lib::array_len($memory_0);
#line 260
label_3:
#line 260
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 260
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 260
$memory_2 = $memory_0->[$memory_3];
#line 260
$memory_7 = "\"";
#line 260
$memory_9 = $memory_2->{'key'};
#line 260
$memory_8 = generator_js_priv::escape_string($memory_9);
#line 260
undef($memory_9);
#line 260
$memory_7 = $memory_7 . $memory_8;
#line 260
undef($memory_8);
#line 260
$memory_8 = "\":";
#line 260
$memory_7 = $memory_7 . $memory_8;
#line 260
undef($memory_8);
#line 260
$memory_9 = $memory_2->{'val'};
#line 260
$memory_8 = generator_js_priv::print_register_value($memory_9);
#line 260
undef($memory_9);
#line 260
$memory_7 = $memory_7 . $memory_8;
#line 260
undef($memory_8);
#line 260
$memory_8 = ",";
#line 260
$memory_7 = $memory_7 . $memory_8;
#line 260
undef($memory_8);
#line 260
$memory_1 = $memory_1 . $memory_7;
#line 260
undef($memory_7);
#line 260
$memory_3 = $memory_3 + $memory_4;
#line 260
goto label_3;
#line 260
label_1:
#line 260
undef($memory_2);
#line 260
undef($memory_3);
#line 260
undef($memory_4);
#line 260
undef($memory_5);
#line 260
undef($memory_6);
#line 261
$memory_2 = "}";
#line 261
$memory_2 = $memory_1 . $memory_2;
#line 261
undef($memory_0);
#line 261
undef($memory_1);
#line 261
return $memory_2;
#line 261
undef($memory_2);
#line 261
undef($memory_1);
#line 261
undef($memory_0);
#line 261
return;
}

sub generator_js_priv::print_ov_mk($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 265
$memory_2 = $memory_0->{'dest'};
#line 265
$memory_1 = generator_js_priv::print_register_to_assign($memory_2);
#line 265
undef($memory_2);
#line 266
$memory_2 = $memory_0->{'src'};
#line 266
$memory_3 = c_rt_lib::ov_is($memory_2, 'arg');
#line 266
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 268
$memory_3 = c_rt_lib::ov_is($memory_2, 'emp');
#line 268
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 268
$memory_3 = "NOMATCHALERT";
#line 268
$memory_3 = [$memory_3,$memory_2];
#line 268
die(dfile::ssave($memory_3));
#line 266
label_2:
#line 266
$memory_4 = c_rt_lib::ov_as($memory_2, 'arg');
#line 267
$memory_5 = "c_rt_lib0ov_mk_arg(\"";
#line 267
$memory_5 = $memory_1 . $memory_5;
#line 267
$memory_7 = $memory_0->{'name'};
#line 267
$memory_6 = generator_js_priv::escape_string($memory_7);
#line 267
undef($memory_7);
#line 267
$memory_5 = $memory_5 . $memory_6;
#line 267
undef($memory_6);
#line 267
$memory_6 = "\", ";
#line 267
$memory_5 = $memory_5 . $memory_6;
#line 267
undef($memory_6);
#line 267
$memory_6 = generator_js_priv::print_register($memory_4);
#line 267
$memory_5 = $memory_5 . $memory_6;
#line 267
undef($memory_6);
#line 267
$memory_6 = ");";
#line 267
$memory_5 = $memory_5 . $memory_6;
#line 267
undef($memory_6);
#line 267
undef($memory_0);
#line 267
undef($memory_1);
#line 267
undef($memory_2);
#line 267
undef($memory_3);
#line 267
undef($memory_4);
#line 267
return $memory_5;
#line 267
undef($memory_5);
#line 267
undef($memory_4);
#line 268
goto label_1;
#line 268
label_3:
#line 269
$memory_4 = "c_rt_lib0ov_mk_none(\"";
#line 269
$memory_4 = $memory_1 . $memory_4;
#line 269
$memory_6 = $memory_0->{'name'};
#line 269
$memory_5 = generator_js_priv::escape_string($memory_6);
#line 269
undef($memory_6);
#line 269
$memory_4 = $memory_4 . $memory_5;
#line 269
undef($memory_5);
#line 269
$memory_5 = "\");";
#line 269
$memory_4 = $memory_4 . $memory_5;
#line 269
undef($memory_5);
#line 269
undef($memory_0);
#line 269
undef($memory_1);
#line 269
undef($memory_2);
#line 269
undef($memory_3);
#line 269
return $memory_4;
#line 269
undef($memory_4);
#line 270
goto label_1;
#line 270
label_1:
#line 270
undef($memory_2);
#line 270
undef($memory_3);
#line 270
undef($memory_1);
#line 270
undef($memory_0);
#line 270
return;
}

sub generator_js_priv::print_register($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 274
$memory_1 = "___nl__";
#line 274
$memory_1 = $memory_1 . $memory_0;
#line 274
undef($memory_0);
#line 274
return $memory_1;
#line 274
undef($memory_1);
#line 274
undef($memory_0);
#line 274
return;
}

sub generator_js_priv::print_register_value($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 278
$memory_1 = generator_js_priv::print_register($memory_0);
#line 278
$memory_2 = ".value";
#line 278
$memory_1 = $memory_1 . $memory_2;
#line 278
undef($memory_2);
#line 278
undef($memory_0);
#line 278
return $memory_1;
#line 278
undef($memory_1);
#line 278
undef($memory_0);
#line 278
return;
}

sub generator_js_priv::print_register_to_assign($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 282
$memory_1 = "";
#line 282
$memory_1 = c_rt_lib::to_nl($memory_0 eq $memory_1);
#line 282
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 282
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 282
$memory_2 = "";
#line 282
undef($memory_0);
#line 282
undef($memory_1);
#line 282
return $memory_2;
#line 282
undef($memory_2);
#line 282
goto label_2;
#line 282
label_2:
#line 282
undef($memory_1);
#line 283
$memory_1 = generator_js_priv::print_register_value($memory_0);
#line 283
$memory_2 = " = ";
#line 283
$memory_1 = $memory_1 . $memory_2;
#line 283
undef($memory_2);
#line 283
undef($memory_0);
#line 283
return $memory_1;
#line 283
undef($memory_1);
#line 283
undef($memory_0);
#line 283
return;
}

sub generator_js_priv::print_return($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 287
$memory_1 = c_rt_lib::ov_is($memory_0, 'val');
#line 287
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 289
$memory_1 = c_rt_lib::ov_is($memory_0, 'emp');
#line 289
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 289
$memory_1 = "NOMATCHALERT";
#line 289
$memory_1 = [$memory_1,$memory_0];
#line 289
die(dfile::ssave($memory_1));
#line 287
label_2:
#line 287
$memory_2 = c_rt_lib::ov_as($memory_0, 'val');
#line 288
$memory_3 = "return ";
#line 288
$memory_4 = generator_js_priv::print_register_value($memory_2);
#line 288
$memory_3 = $memory_3 . $memory_4;
#line 288
undef($memory_4);
#line 288
$memory_4 = ";";
#line 288
$memory_3 = $memory_3 . $memory_4;
#line 288
undef($memory_4);
#line 288
undef($memory_0);
#line 288
undef($memory_1);
#line 288
undef($memory_2);
#line 288
return $memory_3;
#line 288
undef($memory_3);
#line 288
undef($memory_2);
#line 289
goto label_1;
#line 289
label_3:
#line 290
$memory_2 = "return null;";
#line 290
undef($memory_0);
#line 290
undef($memory_1);
#line 290
return $memory_2;
#line 290
undef($memory_2);
#line 291
goto label_1;
#line 291
label_1:
#line 291
undef($memory_1);
#line 291
undef($memory_0);
#line 291
return;
}

sub generator_js_priv::print_una_op($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 295
$memory_2 = $memory_0->{'dest'};
#line 295
$memory_1 = generator_js_priv::print_register_to_assign($memory_2);
#line 295
undef($memory_2);
#line 296
$memory_2 = $memory_0->{'op'};
#line 296
$memory_3 = "!";
#line 296
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 296
undef($memory_3);
#line 296
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 296
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 297
$memory_3 = "c_rt_lib0native_to_nl(!c_rt_lib0check_true_native(";
#line 297
$memory_3 = $memory_1 . $memory_3;
#line 297
$memory_5 = $memory_0->{'src'};
#line 297
$memory_4 = generator_js_priv::print_register($memory_5);
#line 297
undef($memory_5);
#line 297
$memory_3 = $memory_3 . $memory_4;
#line 297
undef($memory_4);
#line 297
$memory_4 = "));";
#line 297
$memory_3 = $memory_3 . $memory_4;
#line 297
undef($memory_4);
#line 297
undef($memory_0);
#line 297
undef($memory_1);
#line 297
undef($memory_2);
#line 297
return $memory_3;
#line 297
undef($memory_3);
#line 298
goto label_1;
#line 298
label_2:
#line 299
$memory_3 = $memory_0->{'op'};
#line 299
$memory_3 = $memory_1 . $memory_3;
#line 299
$memory_5 = $memory_0->{'src'};
#line 299
$memory_4 = generator_js_priv::print_register_value($memory_5);
#line 299
undef($memory_5);
#line 299
$memory_3 = $memory_3 . $memory_4;
#line 299
undef($memory_4);
#line 299
$memory_4 = ";";
#line 299
$memory_3 = $memory_3 . $memory_4;
#line 299
undef($memory_4);
#line 299
undef($memory_0);
#line 299
undef($memory_1);
#line 299
undef($memory_2);
#line 299
return $memory_3;
#line 299
undef($memory_3);
#line 300
goto label_1;
#line 300
label_1:
#line 300
undef($memory_2);
#line 300
undef($memory_1);
#line 300
undef($memory_0);
#line 300
return;
}
