use c_rt_lib;
use nlasm;
use translator;
use nparser;
use module_checker;
use type_checker;
use array;
use hash;
use generator_js;
use post_processing;
use ptd;
use pretty_printer;
use nast;
use compiler_lib;
sub string_compiler::compile;
sub string_compiler::modules_t;
sub string_compiler::type_check_t;
sub string_compiler::printed_struct_t;
sub string_compiler::error_t;
sub string_compiler::print_modules;
sub string_compiler::parse_module;
sub string_compiler::check_type;
sub string_compiler::compile_to_nlasm;
sub string_compiler::compile_to_js;

return 1;

sub string_compiler::compile($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 24
$memory_2 = nparser::sparse($memory_0, $memory_1);
#line 25
$memory_3 = c_rt_lib::ov_is($memory_2, 'ok');
#line 25
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 37
$memory_3 = c_rt_lib::ov_is($memory_2, 'error');
#line 37
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 37
$memory_3 = "NOMATCHALERT";
#line 37
$memory_3 = [$memory_3,$memory_2];
#line 37
die(dfile::ssave($memory_3));
#line 25
label_2:
#line 25
$memory_4 = c_rt_lib::ov_as($memory_2, 'ok');
#line 26
$memory_5 = [];
#line 27
$memory_6 = module_checker::check_module($memory_4);
#line 28
$memory_7 = $memory_6->{'errors'};
#line 28
$memory_5 = $memory_7;
#line 28
undef($memory_7);
#line 29
$memory_7 = array::len($memory_5);
#line 29
$memory_8 = 0;
#line 29
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_8);
#line 29
undef($memory_8);
#line 29
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 29
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 30
$memory_8 = {};
#line 31
$memory_9 = $memory_4->{'name'};
#line 31
hash::set_value($memory_8, $memory_9, $memory_4);
#line 31
undef($memory_9);
#line 32
$memory_9 = type_checker::check_modules($memory_8, $memory_8);
#line 33
$memory_10 = $memory_9->{'errors'};
#line 33
$memory_5 = $memory_10;
#line 33
undef($memory_10);
#line 33
undef($memory_8);
#line 33
undef($memory_9);
#line 34
goto label_5;
#line 34
label_5:
#line 34
undef($memory_7);
#line 35
$memory_7 = array::len($memory_5);
#line 35
$memory_8 = 0;
#line 35
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_8);
#line 35
undef($memory_8);
#line 35
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 35
if (c_rt_lib::check_true($memory_7)) {goto label_7;}
#line 35
$memory_8 = translator::translate($memory_4);
#line 35
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_8);
#line 35
undef($memory_0);
#line 35
undef($memory_1);
#line 35
undef($memory_2);
#line 35
undef($memory_3);
#line 35
undef($memory_4);
#line 35
undef($memory_5);
#line 35
undef($memory_6);
#line 35
undef($memory_7);
#line 35
return $memory_8;
#line 35
undef($memory_8);
#line 35
goto label_7;
#line 35
label_7:
#line 35
undef($memory_7);
#line 36
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 36
undef($memory_0);
#line 36
undef($memory_1);
#line 36
undef($memory_2);
#line 36
undef($memory_3);
#line 36
undef($memory_4);
#line 36
undef($memory_5);
#line 36
undef($memory_6);
#line 36
return $memory_7;
#line 36
undef($memory_7);
#line 36
undef($memory_5);
#line 36
undef($memory_6);
#line 36
undef($memory_4);
#line 37
goto label_1;
#line 37
label_3:
#line 37
$memory_4 = c_rt_lib::ov_as($memory_2, 'error');
#line 38
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 38
undef($memory_0);
#line 38
undef($memory_1);
#line 38
undef($memory_2);
#line 38
undef($memory_3);
#line 38
undef($memory_4);
#line 38
return $memory_5;
#line 38
undef($memory_5);
#line 38
undef($memory_4);
#line 39
goto label_1;
#line 39
label_1:
#line 39
undef($memory_3);
#line 39
undef($memory_2);
#line 39
undef($memory_0);
#line 39
undef($memory_1);
#line 39
return;
}

sub string_compiler::__modules_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 43
$memory_3 = ptd::sim();
#line 43
$memory_4 = ptd::sim();
#line 43
$memory_2 = {code => $memory_3,module_name => $memory_4,};
#line 43
undef($memory_3);
#line 43
undef($memory_4);
#line 43
$memory_1 = ptd::rec($memory_2);
#line 43
undef($memory_2);
#line 43
$memory_0 = ptd::hash($memory_1);
#line 43
undef($memory_1);
#line 43
return $memory_0;
#line 43
undef($memory_0);
#line 43
return;
}

my $_modules_t;
sub string_compiler::modules_t() {
	$_modules_t = string_compiler::__modules_t() unless defined $_modules_t;
	return $_modules_t;
}

sub string_compiler::__type_check_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 47
$memory_4 = ptd::sim();
#line 47
$memory_3 = ptd::arr($memory_4);
#line 47
undef($memory_4);
#line 47
$memory_5 = ptd::sim();
#line 47
$memory_4 = ptd::arr($memory_5);
#line 47
undef($memory_5);
#line 47
$memory_2 = {check => $memory_3,lib => $memory_4,};
#line 47
undef($memory_3);
#line 47
undef($memory_4);
#line 47
$memory_1 = ptd::rec($memory_2);
#line 47
undef($memory_2);
#line 47
$memory_0 = ptd::arr($memory_1);
#line 47
undef($memory_1);
#line 47
return $memory_0;
#line 47
undef($memory_0);
#line 47
return;
}

my $_type_check_t;
sub string_compiler::type_check_t() {
	$_type_check_t = string_compiler::__type_check_t() unless defined $_type_check_t;
	return $_type_check_t;
}

sub string_compiler::__printed_struct_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 51
$memory_3 = ptd::sim();
#line 51
$memory_2 = ptd::arr($memory_3);
#line 51
undef($memory_3);
#line 51
$memory_6 = ptd::sim();
#line 51
$memory_7 = ptd::sim();
#line 51
$memory_8 = ptd::sim();
#line 51
$memory_5 = {name => $memory_6,head => $memory_7,body => $memory_8,};
#line 51
undef($memory_6);
#line 51
undef($memory_7);
#line 51
undef($memory_8);
#line 51
$memory_4 = ptd::rec($memory_5);
#line 51
undef($memory_5);
#line 51
$memory_3 = ptd::arr($memory_4);
#line 51
undef($memory_4);
#line 51
$memory_1 = {imports => $memory_2,functions => $memory_3,};
#line 51
undef($memory_2);
#line 51
undef($memory_3);
#line 51
$memory_0 = ptd::rec($memory_1);
#line 51
undef($memory_1);
#line 51
return $memory_0;
#line 51
undef($memory_0);
#line 51
return;
}

my $_printed_struct_t;
sub string_compiler::printed_struct_t() {
	$_printed_struct_t = string_compiler::__printed_struct_t() unless defined $_printed_struct_t;
	return $_printed_struct_t;
}

sub string_compiler::__error_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 58
$memory_2 = {
	module => "compiler_lib",
	name => "error_t",
};
#line 58
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 58
$memory_3 = ptd::sim();
#line 58
$memory_1 = {error => $memory_2,key => $memory_3,};
#line 58
undef($memory_2);
#line 58
undef($memory_3);
#line 58
$memory_0 = ptd::rec($memory_1);
#line 58
undef($memory_1);
#line 58
return $memory_0;
#line 58
undef($memory_0);
#line 58
return;
}

my $_error_t;
sub string_compiler::error_t() {
	$_error_t = string_compiler::__error_t() unless defined $_error_t;
	return $_error_t;
}

sub string_compiler::print_modules($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 62
$memory_1 = {};
#line 63
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 63
label_3:
#line 63
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 63
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 63
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 63
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 64
$memory_5 = pretty_printer::print_module_to_struct($memory_3);
#line 64
hash::set_value($memory_1, $memory_2, $memory_5);
#line 64
undef($memory_5);
#line 65
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 65
goto label_3;
#line 65
label_1:
#line 65
undef($memory_2);
#line 65
undef($memory_3);
#line 65
undef($memory_4);
#line 66
undef($memory_0);
#line 66
return $memory_1;
#line 66
undef($memory_1);
#line 66
undef($memory_0);
#line 66
return;
}

sub string_compiler::parse_module($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];
#line 73
$memory_1 = [];
#line 74
$memory_2 = {};
#line 75
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 75
label_3:
#line 75
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 75
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 75
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 75
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 76
$memory_7 = $memory_4->{'code'};
#line 76
$memory_8 = $memory_4->{'module_name'};
#line 76
$memory_6 = nparser::sparse($memory_7, $memory_8);
#line 76
undef($memory_8);
#line 76
undef($memory_7);
#line 76
$memory_7 = c_rt_lib::ov_is($memory_6, 'ok');
#line 76
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 82
$memory_7 = c_rt_lib::ov_is($memory_6, 'error');
#line 82
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 82
$memory_7 = "NOMATCHALERT";
#line 82
$memory_7 = [$memory_7,$memory_6];
#line 82
die(dfile::ssave($memory_7));
#line 76
label_5:
#line 76
$memory_8 = c_rt_lib::ov_as($memory_6, 'ok');
#line 77
$memory_9 = module_checker::check_module($memory_8);
#line 78
$memory_10 = $memory_9->{'errors'};
#line 78
$memory_12 = 0;
#line 78
$memory_13 = 1;
#line 78
$memory_14 = c_rt_lib::array_len($memory_10);
#line 78
label_9:
#line 78
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 78
if (c_rt_lib::check_true($memory_15)) {goto label_7;}
#line 78
$memory_11 = $memory_10->[$memory_12];
#line 79
$memory_16 = {error => $memory_11,key => $memory_3,};
#line 79
array::push($memory_1, $memory_16);
#line 79
undef($memory_16);
#line 80
$memory_12 = $memory_12 + $memory_13;
#line 80
goto label_9;
#line 80
label_7:
#line 80
undef($memory_10);
#line 80
undef($memory_11);
#line 80
undef($memory_12);
#line 80
undef($memory_13);
#line 80
undef($memory_14);
#line 80
undef($memory_15);
#line 81
hash::set_value($memory_2, $memory_3, $memory_8);
#line 81
undef($memory_9);
#line 81
undef($memory_8);
#line 82
goto label_4;
#line 82
label_6:
#line 82
$memory_8 = c_rt_lib::ov_as($memory_6, 'error');
#line 83
$memory_10 = 0;
#line 83
$memory_11 = 1;
#line 83
$memory_12 = c_rt_lib::array_len($memory_8);
#line 83
label_12:
#line 83
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 83
if (c_rt_lib::check_true($memory_13)) {goto label_10;}
#line 83
$memory_9 = $memory_8->[$memory_10];
#line 84
$memory_14 = {error => $memory_9,key => $memory_3,};
#line 84
array::push($memory_1, $memory_14);
#line 84
undef($memory_14);
#line 85
$memory_10 = $memory_10 + $memory_11;
#line 85
goto label_12;
#line 85
label_10:
#line 85
undef($memory_9);
#line 85
undef($memory_10);
#line 85
undef($memory_11);
#line 85
undef($memory_12);
#line 85
undef($memory_13);
#line 85
undef($memory_8);
#line 86
goto label_4;
#line 86
label_4:
#line 86
undef($memory_6);
#line 86
undef($memory_7);
#line 87
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 87
goto label_3;
#line 87
label_1:
#line 87
undef($memory_3);
#line 87
undef($memory_4);
#line 87
undef($memory_5);
#line 88
$memory_3 = array::len($memory_1);
#line 88
$memory_4 = 0;
#line 88
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_4);
#line 88
undef($memory_4);
#line 88
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 88
if (c_rt_lib::check_true($memory_3)) {goto label_14;}
#line 88
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_1);
#line 88
undef($memory_0);
#line 88
undef($memory_1);
#line 88
undef($memory_2);
#line 88
undef($memory_3);
#line 88
return $memory_4;
#line 88
undef($memory_4);
#line 88
goto label_14;
#line 88
label_14:
#line 88
undef($memory_3);
#line 89
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 89
undef($memory_0);
#line 89
undef($memory_1);
#line 89
undef($memory_2);
#line 89
return $memory_3;
#line 89
undef($memory_3);
#line 89
undef($memory_1);
#line 89
undef($memory_2);
#line 89
undef($memory_0);
#line 89
return;
}

sub string_compiler::check_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;$memory_0 = $_[0];$memory_1 = $_[1];
#line 96
$memory_2 = [];
#line 97
$memory_4 = 0;
#line 97
$memory_5 = 1;
#line 97
$memory_6 = c_rt_lib::array_len($memory_0);
#line 97
label_3:
#line 97
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 97
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 97
$memory_3 = $memory_0->[$memory_4];
#line 98
$memory_8 = {};
#line 99
$memory_9 = {};
#line 100
$memory_10 = {};
#line 101
$memory_11 = $memory_3->{'lib'};
#line 101
$memory_13 = 0;
#line 101
$memory_14 = 1;
#line 101
$memory_15 = c_rt_lib::array_len($memory_11);
#line 101
label_6:
#line 101
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 101
if (c_rt_lib::check_true($memory_16)) {goto label_4;}
#line 101
$memory_12 = $memory_11->[$memory_13];
#line 102
$memory_17 = hash::get_value($memory_1, $memory_12);
#line 102
$memory_17 = $memory_17->{'name'};
#line 102
$memory_18 = hash::get_value($memory_1, $memory_12);
#line 102
hash::set_value($memory_8, $memory_17, $memory_18);
#line 102
undef($memory_18);
#line 102
undef($memory_17);
#line 103
$memory_17 = hash::get_value($memory_1, $memory_12);
#line 103
$memory_17 = $memory_17->{'name'};
#line 103
hash::set_value($memory_10, $memory_17, $memory_12);
#line 103
undef($memory_17);
#line 104
$memory_13 = $memory_13 + $memory_14;
#line 104
goto label_6;
#line 104
label_4:
#line 104
undef($memory_11);
#line 104
undef($memory_12);
#line 104
undef($memory_13);
#line 104
undef($memory_14);
#line 104
undef($memory_15);
#line 104
undef($memory_16);
#line 105
$memory_11 = $memory_3->{'check'};
#line 105
$memory_13 = 0;
#line 105
$memory_14 = 1;
#line 105
$memory_15 = c_rt_lib::array_len($memory_11);
#line 105
label_9:
#line 105
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 105
if (c_rt_lib::check_true($memory_16)) {goto label_7;}
#line 105
$memory_12 = $memory_11->[$memory_13];
#line 106
$memory_17 = hash::get_value($memory_1, $memory_12);
#line 106
$memory_17 = $memory_17->{'name'};
#line 106
$memory_18 = hash::get_value($memory_1, $memory_12);
#line 106
hash::set_value($memory_9, $memory_17, $memory_18);
#line 106
undef($memory_18);
#line 106
undef($memory_17);
#line 107
$memory_17 = hash::get_value($memory_1, $memory_12);
#line 107
$memory_17 = $memory_17->{'name'};
#line 107
hash::set_value($memory_10, $memory_17, $memory_12);
#line 107
undef($memory_17);
#line 108
$memory_13 = $memory_13 + $memory_14;
#line 108
goto label_9;
#line 108
label_7:
#line 108
undef($memory_11);
#line 108
undef($memory_12);
#line 108
undef($memory_13);
#line 108
undef($memory_14);
#line 108
undef($memory_15);
#line 108
undef($memory_16);
#line 109
$memory_11 = type_checker::check_modules($memory_9, $memory_8);
#line 110
$memory_12 = $memory_11->{'errors'};
#line 110
$memory_14 = 0;
#line 110
$memory_15 = 1;
#line 110
$memory_16 = c_rt_lib::array_len($memory_12);
#line 110
label_12:
#line 110
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 110
if (c_rt_lib::check_true($memory_17)) {goto label_10;}
#line 110
$memory_13 = $memory_12->[$memory_14];
#line 111
$memory_20 = $memory_13->{'module'};
#line 111
$memory_19 = hash::get_value($memory_10, $memory_20);
#line 111
undef($memory_20);
#line 111
$memory_18 = {error => $memory_13,key => $memory_19,};
#line 111
undef($memory_19);
#line 111
array::push($memory_2, $memory_18);
#line 111
undef($memory_18);
#line 112
$memory_14 = $memory_14 + $memory_15;
#line 112
goto label_12;
#line 112
label_10:
#line 112
undef($memory_12);
#line 112
undef($memory_13);
#line 112
undef($memory_14);
#line 112
undef($memory_15);
#line 112
undef($memory_16);
#line 112
undef($memory_17);
#line 113
$memory_13 = $memory_11->{'errors'};
#line 113
$memory_12 = array::len($memory_13);
#line 113
undef($memory_13);
#line 113
$memory_13 = 0;
#line 113
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 113
undef($memory_13);
#line 113
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 113
if (c_rt_lib::check_true($memory_12)) {goto label_14;}
#line 113
$memory_13 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 113
undef($memory_0);
#line 113
undef($memory_1);
#line 113
undef($memory_2);
#line 113
undef($memory_3);
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
#line 113
undef($memory_9);
#line 113
undef($memory_10);
#line 113
undef($memory_11);
#line 113
undef($memory_12);
#line 113
return $memory_13;
#line 113
undef($memory_13);
#line 113
goto label_14;
#line 113
label_14:
#line 113
undef($memory_12);
#line 113
undef($memory_8);
#line 113
undef($memory_9);
#line 113
undef($memory_10);
#line 113
undef($memory_11);
#line 114
$memory_4 = $memory_4 + $memory_5;
#line 114
goto label_3;
#line 114
label_1:
#line 114
undef($memory_3);
#line 114
undef($memory_4);
#line 114
undef($memory_5);
#line 114
undef($memory_6);
#line 114
undef($memory_7);
#line 115
$memory_3 = "";
#line 115
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 115
undef($memory_0);
#line 115
undef($memory_1);
#line 115
undef($memory_2);
#line 115
return $memory_3;
#line 115
undef($memory_3);
#line 115
undef($memory_2);
#line 115
undef($memory_0);
#line 115
undef($memory_1);
#line 115
return;
}

sub string_compiler::compile_to_nlasm($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 122
$memory_1 = [];
#line 123
$memory_2 = {};
#line 124
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 124
label_3:
#line 124
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 124
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 124
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 124
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 125
$memory_6 = nparser::sparse($memory_4, $memory_3);
#line 125
$memory_7 = c_rt_lib::ov_is($memory_6, 'ok');
#line 125
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 129
$memory_7 = c_rt_lib::ov_is($memory_6, 'error');
#line 129
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 129
$memory_7 = "NOMATCHALERT";
#line 129
$memory_7 = [$memory_7,$memory_6];
#line 129
die(dfile::ssave($memory_7));
#line 125
label_5:
#line 125
$memory_8 = c_rt_lib::ov_as($memory_6, 'ok');
#line 126
$memory_9 = module_checker::check_module($memory_8);
#line 127
$memory_10 = $memory_9->{'errors'};
#line 127
array::append($memory_1, $memory_10);
#line 127
undef($memory_10);
#line 128
hash::set_value($memory_2, $memory_3, $memory_8);
#line 128
undef($memory_9);
#line 128
undef($memory_8);
#line 129
goto label_4;
#line 129
label_6:
#line 129
$memory_8 = c_rt_lib::ov_as($memory_6, 'error');
#line 130
array::append($memory_1, $memory_8);
#line 130
undef($memory_8);
#line 131
goto label_4;
#line 131
label_4:
#line 131
undef($memory_6);
#line 131
undef($memory_7);
#line 132
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 132
goto label_3;
#line 132
label_1:
#line 132
undef($memory_3);
#line 132
undef($memory_4);
#line 132
undef($memory_5);
#line 133
$memory_3 = array::len($memory_1);
#line 133
$memory_4 = 0;
#line 133
$memory_3 = c_rt_lib::to_nl($memory_3 > $memory_4);
#line 133
undef($memory_4);
#line 133
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 133
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 133
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_1);
#line 133
undef($memory_0);
#line 133
undef($memory_1);
#line 133
undef($memory_2);
#line 133
undef($memory_3);
#line 133
return $memory_4;
#line 133
undef($memory_4);
#line 133
goto label_8;
#line 133
label_8:
#line 133
undef($memory_3);
#line 134
$memory_3 = type_checker::check_modules($memory_2, $memory_2);
#line 135
$memory_5 = $memory_3->{'errors'};
#line 135
$memory_4 = array::len($memory_5);
#line 135
undef($memory_5);
#line 135
$memory_5 = 0;
#line 135
$memory_4 = c_rt_lib::to_nl($memory_4 > $memory_5);
#line 135
undef($memory_5);
#line 135
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 135
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 135
$memory_5 = $memory_3->{'errors'};
#line 135
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 135
undef($memory_0);
#line 135
undef($memory_1);
#line 135
undef($memory_2);
#line 135
undef($memory_3);
#line 135
undef($memory_4);
#line 135
return $memory_5;
#line 135
undef($memory_5);
#line 135
goto label_10;
#line 135
label_10:
#line 135
undef($memory_4);
#line 136
$memory_4 = {};
#line 137
$memory_7 = c_rt_lib::init_iter($memory_2);
#line 137
label_13:
#line 137
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 137
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 137
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 137
$memory_6 = c_rt_lib::hash_get_value($memory_2, $memory_5);
#line 138
$memory_8 = translator::translate($memory_6);
#line 138
hash::set_value($memory_4, $memory_5, $memory_8);
#line 138
undef($memory_8);
#line 139
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 139
goto label_13;
#line 139
label_11:
#line 139
undef($memory_5);
#line 139
undef($memory_6);
#line 139
undef($memory_7);
#line 140
$memory_6 = {};
#line 140
$memory_7 = c_rt_lib::ov_mk_none('o0');
#line 140
$memory_5 = post_processing::init($memory_6, $memory_7);
#line 140
undef($memory_7);
#line 140
undef($memory_6);
#line 141
post_processing::find($memory_5, $memory_4);
#line 142
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_4);
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
undef($memory_5);
#line 142
return $memory_6;
#line 142
undef($memory_6);
#line 142
undef($memory_1);
#line 142
undef($memory_2);
#line 142
undef($memory_3);
#line 142
undef($memory_4);
#line 142
undef($memory_5);
#line 142
undef($memory_0);
#line 142
return;
}

sub string_compiler::compile_to_js($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 149
$memory_3 = string_compiler::compile_to_nlasm($memory_0);
#line 149
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 149
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 149
undef($memory_0);
#line 149
undef($memory_1);
#line 149
undef($memory_2);
#line 149
return $memory_3;
#line 149
label_1:
#line 149
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 149
undef($memory_2);
#line 149
undef($memory_3);
#line 150
$memory_2 = {};
#line 151
$memory_5 = c_rt_lib::init_iter($memory_1);
#line 151
label_4:
#line 151
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 151
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 151
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 151
$memory_4 = c_rt_lib::hash_get_value($memory_1, $memory_3);
#line 152
$memory_6 = generator_js::generate($memory_4);
#line 152
hash::set_value($memory_2, $memory_3, $memory_6);
#line 152
undef($memory_6);
#line 153
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 153
goto label_4;
#line 153
label_2:
#line 153
undef($memory_3);
#line 153
undef($memory_4);
#line 153
undef($memory_5);
#line 154
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 154
undef($memory_0);
#line 154
undef($memory_1);
#line 154
undef($memory_2);
#line 154
return $memory_3;
#line 154
undef($memory_3);
#line 154
undef($memory_1);
#line 154
undef($memory_2);
#line 154
undef($memory_0);
#line 154
return;
}
