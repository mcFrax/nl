use c_rt_lib;
use string;
use array;
use ptd;
use nast;
use wprinter;
use boolean_t;
sub pretty_printer_priv::state_print;
sub pretty_printer::struct_t;
sub pretty_printer::print_module_to_struct;
sub pretty_printer::print_module_to_str;
sub pretty_printer_priv::print_fun_def;
sub pretty_printer_priv::print_fun_def_head;
sub pretty_printer_priv::join_print_var_decl;
sub pretty_printer_priv::print_var_decl;
sub pretty_printer_priv::pind;
sub pretty_printer_priv::join_print_hash_elem;
sub pretty_printer_priv::print_hash_elem;
sub pretty_printer_priv::print_variant;
sub pretty_printer_priv::print_variant_case_decl;
sub pretty_printer_priv::join_print_fun_arg;
sub pretty_printer_priv::print_fun_arg;
sub pretty_printer_priv::count_structs;
sub pretty_printer_priv::get_compressed_fun_val;
sub pretty_printer_priv::print_st;
sub pretty_printer_priv::get_fun_label;
sub pretty_printer_priv::string_to_nl;
sub pretty_printer_priv::join_print_val;
sub pretty_printer_priv::is_to_change_ov;
sub pretty_printer_priv::print_val;
sub pretty_printer_priv::print_cond_mod;
sub pretty_printer_priv::print_loop;
sub pretty_printer_priv::print_loop_or_mod;
sub pretty_printer_priv::print_try_ensure;
sub pretty_printer_priv::print_return;
sub pretty_printer_priv::print_sim_value;
sub pretty_printer_priv::print_break;
sub pretty_printer_priv::print_continue;
sub pretty_printer_priv::print_die;
sub pretty_printer_priv::print_simple_statement;
sub pretty_printer_priv::flush_sim_statement;
sub pretty_printer_priv::print_cmd;

return 1;

sub pretty_printer_priv::state_print($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 14
$memory_2 = "out";
#line 14
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 14
$memory_2 = $memory_2 . $memory_1;
#line 14
$memory_3 = "out";
#line 14
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 14
undef($memory_3);
#line 14
undef($memory_2);
#line 14
undef($memory_1);
#line 14
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer::__struct_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 18
$memory_3 = ptd::sim();
#line 18
$memory_2 = ptd::arr($memory_3);
#line 18
undef($memory_3);
#line 18
$memory_6 = ptd::sim();
#line 18
$memory_7 = ptd::sim();
#line 18
$memory_8 = ptd::sim();
#line 18
$memory_5 = {name => $memory_6,head => $memory_7,body => $memory_8,};
#line 18
undef($memory_6);
#line 18
undef($memory_7);
#line 18
undef($memory_8);
#line 18
$memory_4 = ptd::rec($memory_5);
#line 18
undef($memory_5);
#line 18
$memory_3 = ptd::arr($memory_4);
#line 18
undef($memory_4);
#line 18
$memory_1 = {imports => $memory_2,functions => $memory_3,};
#line 18
undef($memory_2);
#line 18
undef($memory_3);
#line 18
$memory_0 = ptd::rec($memory_1);
#line 18
undef($memory_1);
#line 18
return $memory_0;
#line 18
undef($memory_0);
#line 18
return;
}

my $_struct_t;
sub pretty_printer::struct_t() {
	$_struct_t = pretty_printer::__struct_t() unless defined $_struct_t;
	return $_struct_t;
}

sub pretty_printer::print_module_to_struct($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];
#line 25
$memory_2 = [];
#line 25
$memory_3 = [];
#line 25
$memory_1 = {imports => $memory_2,functions => $memory_3,};
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 26
$memory_2 = $memory_0->{'import'};
#line 26
$memory_4 = 0;
#line 26
$memory_5 = 1;
#line 26
$memory_6 = c_rt_lib::array_len($memory_2);
#line 26
label_3:
#line 26
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 26
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 26
$memory_3 = $memory_2->[$memory_4];
#line 27
$memory_8 = "imports";
#line 27
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 27
$memory_9 = "use ";
#line 27
$memory_10 = $memory_3->{'name'};
#line 27
$memory_9 = $memory_9 . $memory_10;
#line 27
undef($memory_10);
#line 27
$memory_10 = ";";
#line 27
$memory_9 = $memory_9 . $memory_10;
#line 27
undef($memory_10);
#line 27
$memory_10 = string::lf();
#line 27
$memory_9 = $memory_9 . $memory_10;
#line 27
undef($memory_10);
#line 27
array::push($memory_8, $memory_9);
#line 27
undef($memory_9);
#line 27
$memory_9 = "imports";
#line 27
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 27
undef($memory_9);
#line 27
undef($memory_8);
#line 28
$memory_4 = $memory_4 + $memory_5;
#line 28
goto label_3;
#line 28
label_1:
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
#line 29
$memory_2 = $memory_0->{'fun_def'};
#line 29
$memory_4 = 0;
#line 29
$memory_5 = 1;
#line 29
$memory_6 = c_rt_lib::array_len($memory_2);
#line 29
label_6:
#line 29
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 29
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 29
$memory_3 = $memory_2->[$memory_4];
#line 30
$memory_9 = "";
#line 30
$memory_8 = {out => $memory_9,};
#line 30
undef($memory_9);
#line 31
$memory_9 = string::lf();
#line 31
pretty_printer_priv::state_print($memory_8, $memory_9);
#line 31
undef($memory_9);
#line 32
$memory_9 = $memory_0->{'name'};
#line 32
pretty_printer_priv::print_fun_def_head($memory_8, $memory_3, $memory_9);
#line 32
undef($memory_9);
#line 33
$memory_9 = $memory_8->{'out'};
#line 34
$memory_10 = "";
#line 34
$memory_11 = $memory_10;
#line 34
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'out'} = $memory_11;
#line 34
undef($memory_10);
#line 34
undef($memory_11);
#line 35
$memory_10 = $memory_3->{'cmd'};
#line 35
$memory_10 = $memory_10->{'cmd'};
#line 35
$memory_10 = c_rt_lib::ov_as($memory_10, 'block');
#line 35
$memory_12 = 0;
#line 35
$memory_13 = 1;
#line 35
$memory_14 = c_rt_lib::array_len($memory_10);
#line 35
label_9:
#line 35
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 35
if (c_rt_lib::check_true($memory_15)) {goto label_7;}
#line 35
$memory_11 = $memory_10->[$memory_12];
#line 36
$memory_16 = string::lf();
#line 36
$memory_18 = 1;
#line 36
$memory_17 = pretty_printer_priv::pind($memory_18);
#line 36
undef($memory_18);
#line 36
$memory_16 = $memory_16 . $memory_17;
#line 36
undef($memory_17);
#line 36
pretty_printer_priv::state_print($memory_8, $memory_16);
#line 36
undef($memory_16);
#line 37
$memory_16 = 1;
#line 37
pretty_printer_priv::print_cmd($memory_8, $memory_11, $memory_16);
#line 37
undef($memory_16);
#line 38
$memory_12 = $memory_12 + $memory_13;
#line 38
goto label_9;
#line 38
label_7:
#line 38
undef($memory_10);
#line 38
undef($memory_11);
#line 38
undef($memory_12);
#line 38
undef($memory_13);
#line 38
undef($memory_14);
#line 38
undef($memory_15);
#line 39
$memory_10 = "functions";
#line 39
$memory_10 = c_rt_lib::get_ref_hash($memory_1, $memory_10);
#line 39
$memory_12 = $memory_3->{'access'};
#line 39
$memory_12 = c_rt_lib::ov_is($memory_12, 'priv');
#line 39
if (c_rt_lib::check_true($memory_12)) {goto label_11;}
#line 39
$memory_12 = "";
#line 39
goto label_10;
#line 39
label_11:
#line 39
$memory_12 = "::";
#line 39
label_10:
#line 39
$memory_13 = $memory_3->{'name'};
#line 39
$memory_12 = $memory_12 . $memory_13;
#line 39
undef($memory_13);
#line 39
$memory_13 = $memory_8->{'out'};
#line 39
$memory_11 = {name => $memory_12,head => $memory_9,body => $memory_13,};
#line 39
undef($memory_12);
#line 39
undef($memory_13);
#line 39
array::push($memory_10, $memory_11);
#line 39
undef($memory_11);
#line 39
$memory_11 = "functions";
#line 39
c_rt_lib::set_ref_hash($memory_1, $memory_11, $memory_10);
#line 39
undef($memory_11);
#line 39
undef($memory_10);
#line 39
undef($memory_8);
#line 39
undef($memory_9);
#line 44
$memory_4 = $memory_4 + $memory_5;
#line 44
goto label_6;
#line 44
label_4:
#line 44
undef($memory_2);
#line 44
undef($memory_3);
#line 44
undef($memory_4);
#line 44
undef($memory_5);
#line 44
undef($memory_6);
#line 44
undef($memory_7);
#line 45
undef($memory_0);
#line 45
return $memory_1;
#line 45
undef($memory_1);
#line 45
undef($memory_0);
#line 45
return;
}

sub pretty_printer::print_module_to_str($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 49
$memory_2 = "";
#line 49
$memory_1 = {out => $memory_2,};
#line 49
undef($memory_2);
#line 50
$memory_2 = "###";
#line 50
$memory_3 = string::lf();
#line 50
$memory_2 = $memory_2 . $memory_3;
#line 50
undef($memory_3);
#line 50
$memory_3 = "# (c) Atinea Sp. z o.o.";
#line 50
$memory_2 = $memory_2 . $memory_3;
#line 50
undef($memory_3);
#line 50
$memory_3 = string::lf();
#line 50
$memory_2 = $memory_2 . $memory_3;
#line 50
undef($memory_3);
#line 50
$memory_3 = "###";
#line 50
$memory_2 = $memory_2 . $memory_3;
#line 50
undef($memory_3);
#line 50
$memory_3 = string::lf();
#line 50
$memory_2 = $memory_2 . $memory_3;
#line 50
undef($memory_3);
#line 50
$memory_3 = string::lf();
#line 50
$memory_2 = $memory_2 . $memory_3;
#line 50
undef($memory_3);
#line 50
$memory_3 = string::lf();
#line 50
$memory_2 = $memory_2 . $memory_3;
#line 50
undef($memory_3);
#line 50
pretty_printer_priv::state_print($memory_1, $memory_2);
#line 50
undef($memory_2);
#line 52
$memory_2 = [];
#line 53
$memory_3 = $memory_0->{'import'};
#line 53
$memory_5 = 0;
#line 53
$memory_6 = 1;
#line 53
$memory_7 = c_rt_lib::array_len($memory_3);
#line 53
label_3:
#line 53
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 53
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 53
$memory_4 = $memory_3->[$memory_5];
#line 54
$memory_9 = "use ";
#line 54
$memory_10 = $memory_4->{'name'};
#line 54
$memory_9 = $memory_9 . $memory_10;
#line 54
undef($memory_10);
#line 54
$memory_10 = ";";
#line 54
$memory_9 = $memory_9 . $memory_10;
#line 54
undef($memory_10);
#line 54
array::push($memory_2, $memory_9);
#line 54
undef($memory_9);
#line 55
$memory_5 = $memory_5 + $memory_6;
#line 55
goto label_3;
#line 55
label_1:
#line 55
undef($memory_3);
#line 55
undef($memory_4);
#line 55
undef($memory_5);
#line 55
undef($memory_6);
#line 55
undef($memory_7);
#line 55
undef($memory_8);
#line 56
$memory_4 = string::lf();
#line 56
$memory_3 = array::join($memory_4, $memory_2);
#line 56
undef($memory_4);
#line 56
pretty_printer_priv::state_print($memory_1, $memory_3);
#line 56
undef($memory_3);
#line 57
$memory_3 = string::lf();
#line 57
$memory_4 = string::lf();
#line 57
$memory_3 = $memory_3 . $memory_4;
#line 57
undef($memory_4);
#line 57
pretty_printer_priv::state_print($memory_1, $memory_3);
#line 57
undef($memory_3);
#line 58
$memory_3 = $memory_0->{'fun_def'};
#line 58
$memory_5 = 0;
#line 58
$memory_6 = 1;
#line 58
$memory_7 = c_rt_lib::array_len($memory_3);
#line 58
label_6:
#line 58
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 58
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 58
$memory_4 = $memory_3->[$memory_5];
#line 59
$memory_9 = $memory_0->{'name'};
#line 59
pretty_printer_priv::print_fun_def($memory_1, $memory_4, $memory_9);
#line 59
undef($memory_9);
#line 60
$memory_9 = string::lf();
#line 60
$memory_10 = string::lf();
#line 60
$memory_9 = $memory_9 . $memory_10;
#line 60
undef($memory_10);
#line 60
pretty_printer_priv::state_print($memory_1, $memory_9);
#line 60
undef($memory_9);
#line 61
$memory_5 = $memory_5 + $memory_6;
#line 61
goto label_6;
#line 61
label_4:
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
#line 62
$memory_3 = $memory_1->{'out'};
#line 62
undef($memory_0);
#line 62
undef($memory_1);
#line 62
undef($memory_2);
#line 62
return $memory_3;
#line 62
undef($memory_3);
#line 62
undef($memory_1);
#line 62
undef($memory_2);
#line 62
undef($memory_0);
#line 62
return;
}

sub pretty_printer_priv::print_fun_def($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 66
pretty_printer_priv::print_fun_def_head($memory_0, $memory_1, $memory_2);
#line 67
$memory_3 = $memory_1->{'cmd'};
#line 67
$memory_4 = 0;
#line 67
pretty_printer_priv::print_st($memory_0, $memory_3, $memory_4);
#line 67
undef($memory_4);
#line 67
undef($memory_3);
#line 67
undef($memory_1);
#line 67
undef($memory_2);
#line 67
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_fun_def_head($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 71
$memory_3 = "";
#line 72
$memory_4 = $memory_1->{'access'};
#line 72
$memory_5 = c_rt_lib::ov_is($memory_4, 'pub');
#line 72
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 74
$memory_5 = c_rt_lib::ov_is($memory_4, 'priv');
#line 74
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 74
$memory_5 = "NOMATCHALERT";
#line 74
$memory_5 = [$memory_5,$memory_4];
#line 74
die(dfile::ssave($memory_5));
#line 72
label_2:
#line 73
$memory_6 = "::";
#line 73
$memory_6 = $memory_2 . $memory_6;
#line 73
$memory_3 = $memory_3 . $memory_6;
#line 73
undef($memory_6);
#line 74
goto label_1;
#line 74
label_3:
#line 75
goto label_1;
#line 75
label_1:
#line 75
undef($memory_4);
#line 75
undef($memory_5);
#line 76
$memory_4 = $memory_1->{'name'};
#line 76
$memory_3 = $memory_3 . $memory_4;
#line 76
undef($memory_4);
#line 77
$memory_6 = "def";
#line 77
$memory_5 = wprinter::build_sim($memory_6);
#line 77
undef($memory_6);
#line 77
$memory_6 = wprinter::get_sep();
#line 77
$memory_7 = wprinter::build_sim($memory_3);
#line 77
$memory_9 = "(";
#line 77
$memory_8 = wprinter::build_sim($memory_9);
#line 77
undef($memory_9);
#line 77
$memory_4 = [$memory_5,$memory_6,$memory_7,$memory_8];
#line 77
undef($memory_5);
#line 77
undef($memory_6);
#line 77
undef($memory_7);
#line 77
undef($memory_8);
#line 83
$memory_6 = $memory_1->{'args'};
#line 83
$memory_5 = array::len($memory_6);
#line 83
undef($memory_6);
#line 83
$memory_6 = 0;
#line 83
$memory_7 = 1;
#line 83
label_6:
#line 83
$memory_8 = c_rt_lib::to_nl($memory_6 >= $memory_5);
#line 83
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 84
$memory_9 = $memory_1->{'args'};
#line 84
$memory_9 = $memory_9->[$memory_6];
#line 85
$memory_10 = $memory_9->{'mod'};
#line 85
$memory_11 = c_rt_lib::ov_is($memory_10, 'ref');
#line 85
if (c_rt_lib::check_true($memory_11)) {goto label_8;}
#line 87
$memory_11 = c_rt_lib::ov_is($memory_10, 'none');
#line 87
if (c_rt_lib::check_true($memory_11)) {goto label_9;}
#line 87
$memory_11 = "NOMATCHALERT";
#line 87
$memory_11 = [$memory_11,$memory_10];
#line 87
die(dfile::ssave($memory_11));
#line 85
label_8:
#line 86
$memory_14 = "ref";
#line 86
$memory_13 = wprinter::build_sim($memory_14);
#line 86
undef($memory_14);
#line 86
$memory_14 = wprinter::get_sep();
#line 86
$memory_12 = [$memory_13,$memory_14];
#line 86
undef($memory_13);
#line 86
undef($memory_14);
#line 86
array::append($memory_4, $memory_12);
#line 86
undef($memory_12);
#line 87
goto label_7;
#line 87
label_9:
#line 88
goto label_7;
#line 88
label_7:
#line 88
undef($memory_10);
#line 88
undef($memory_11);
#line 89
$memory_11 = $memory_9->{'name'};
#line 89
$memory_10 = wprinter::build_sim($memory_11);
#line 89
undef($memory_11);
#line 89
array::push($memory_4, $memory_10);
#line 89
undef($memory_10);
#line 90
$memory_10 = $memory_9->{'type'};
#line 90
$memory_11 = c_rt_lib::ov_is($memory_10, 'type');
#line 90
if (c_rt_lib::check_true($memory_11)) {goto label_11;}
#line 92
$memory_11 = c_rt_lib::ov_is($memory_10, 'none');
#line 92
if (c_rt_lib::check_true($memory_11)) {goto label_12;}
#line 92
$memory_11 = "NOMATCHALERT";
#line 92
$memory_11 = [$memory_11,$memory_10];
#line 92
die(dfile::ssave($memory_11));
#line 90
label_11:
#line 90
$memory_12 = c_rt_lib::ov_as($memory_10, 'type');
#line 91
$memory_14 = wprinter::get_sep();
#line 91
$memory_16 = ":";
#line 91
$memory_15 = wprinter::build_sim($memory_16);
#line 91
undef($memory_16);
#line 91
$memory_16 = wprinter::get_sep();
#line 91
$memory_17 = pretty_printer_priv::print_val($memory_12);
#line 91
$memory_13 = [$memory_14,$memory_15,$memory_16,$memory_17];
#line 91
undef($memory_14);
#line 91
undef($memory_15);
#line 91
undef($memory_16);
#line 91
undef($memory_17);
#line 91
array::append($memory_4, $memory_13);
#line 91
undef($memory_13);
#line 91
undef($memory_12);
#line 92
goto label_10;
#line 92
label_12:
#line 93
goto label_10;
#line 93
label_10:
#line 93
undef($memory_10);
#line 93
undef($memory_11);
#line 94
$memory_11 = $memory_1->{'args'};
#line 94
$memory_10 = array::len($memory_11);
#line 94
undef($memory_11);
#line 94
$memory_11 = 1;
#line 94
$memory_10 = $memory_10 - $memory_11;
#line 94
undef($memory_11);
#line 94
$memory_10 = c_rt_lib::to_nl($memory_6 != $memory_10);
#line 94
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 94
if (c_rt_lib::check_true($memory_10)) {goto label_14;}
#line 94
$memory_13 = ",";
#line 94
$memory_12 = wprinter::build_sim($memory_13);
#line 94
undef($memory_13);
#line 94
$memory_13 = wprinter::get_sep();
#line 94
$memory_11 = [$memory_12,$memory_13];
#line 94
undef($memory_12);
#line 94
undef($memory_13);
#line 94
array::append($memory_4, $memory_11);
#line 94
undef($memory_11);
#line 94
goto label_14;
#line 94
label_14:
#line 94
undef($memory_10);
#line 94
undef($memory_9);
#line 95
$memory_6 = $memory_6 + $memory_7;
#line 95
goto label_6;
#line 95
label_4:
#line 95
undef($memory_5);
#line 95
undef($memory_6);
#line 95
undef($memory_7);
#line 95
undef($memory_8);
#line 96
$memory_6 = ")";
#line 96
$memory_5 = wprinter::build_sim($memory_6);
#line 96
undef($memory_6);
#line 96
array::push($memory_4, $memory_5);
#line 96
undef($memory_5);
#line 97
$memory_5 = $memory_1->{'ret_type'};
#line 97
$memory_6 = c_rt_lib::ov_is($memory_5, 'type');
#line 97
if (c_rt_lib::check_true($memory_6)) {goto label_16;}
#line 104
$memory_6 = c_rt_lib::ov_is($memory_5, 'none');
#line 104
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 104
$memory_6 = "NOMATCHALERT";
#line 104
$memory_6 = [$memory_6,$memory_5];
#line 104
die(dfile::ssave($memory_6));
#line 97
label_16:
#line 97
$memory_7 = c_rt_lib::ov_as($memory_5, 'type');
#line 98
$memory_9 = wprinter::get_sep();
#line 98
$memory_11 = ":";
#line 98
$memory_10 = wprinter::build_sim($memory_11);
#line 98
undef($memory_11);
#line 98
$memory_11 = wprinter::get_sep();
#line 98
$memory_12 = pretty_printer_priv::print_sim_value($memory_7);
#line 98
$memory_8 = [$memory_9,$memory_10,$memory_11,$memory_12];
#line 98
undef($memory_9);
#line 98
undef($memory_10);
#line 98
undef($memory_11);
#line 98
undef($memory_12);
#line 98
array::append($memory_4, $memory_8);
#line 98
undef($memory_8);
#line 98
undef($memory_7);
#line 104
goto label_15;
#line 104
label_17:
#line 105
goto label_15;
#line 105
label_15:
#line 105
undef($memory_5);
#line 105
undef($memory_6);
#line 106
$memory_5 = wprinter::build_pretty_l($memory_4);
#line 106
$memory_6 = 0;
#line 106
wprinter::print_t($memory_0, $memory_5, $memory_6);
#line 106
undef($memory_6);
#line 106
undef($memory_5);
#line 106
undef($memory_3);
#line 106
undef($memory_4);
#line 106
undef($memory_1);
#line 106
undef($memory_2);
#line 106
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::join_print_var_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 110
$memory_1 = [];
#line 111
$memory_2 = array::len($memory_0);
#line 111
$memory_3 = 0;
#line 111
$memory_4 = 1;
#line 111
label_3:
#line 111
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 111
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 112
$memory_7 = $memory_0->[$memory_3];
#line 112
$memory_6 = pretty_printer_priv::print_var_decl($memory_7);
#line 112
undef($memory_7);
#line 112
array::push($memory_1, $memory_6);
#line 112
undef($memory_6);
#line 113
$memory_6 = array::len($memory_0);
#line 113
$memory_7 = 1;
#line 113
$memory_6 = $memory_6 - $memory_7;
#line 113
undef($memory_7);
#line 113
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 113
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 113
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 113
$memory_9 = ",";
#line 113
$memory_8 = wprinter::build_sim($memory_9);
#line 113
undef($memory_9);
#line 113
$memory_9 = wprinter::get_sep();
#line 113
$memory_7 = [$memory_8,$memory_9];
#line 113
undef($memory_8);
#line 113
undef($memory_9);
#line 113
array::append($memory_1, $memory_7);
#line 113
undef($memory_7);
#line 113
goto label_5;
#line 113
label_5:
#line 113
undef($memory_6);
#line 114
$memory_3 = $memory_3 + $memory_4;
#line 114
goto label_3;
#line 114
label_1:
#line 114
undef($memory_2);
#line 114
undef($memory_3);
#line 114
undef($memory_4);
#line 114
undef($memory_5);
#line 115
undef($memory_0);
#line 115
return $memory_1;
#line 115
undef($memory_1);
#line 115
undef($memory_0);
#line 115
return;
}

sub pretty_printer_priv::print_var_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];
#line 119
$memory_3 = "var";
#line 119
$memory_2 = wprinter::build_sim($memory_3);
#line 119
undef($memory_3);
#line 119
$memory_3 = wprinter::get_sep();
#line 119
$memory_1 = [$memory_2,$memory_3];
#line 119
undef($memory_2);
#line 119
undef($memory_3);
#line 120
$memory_2 = $memory_0->{'type'};
#line 120
$memory_3 = c_rt_lib::ov_is($memory_2, 'type');
#line 120
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 128
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 128
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 128
$memory_3 = "NOMATCHALERT";
#line 128
$memory_3 = [$memory_3,$memory_2];
#line 128
die(dfile::ssave($memory_3));
#line 120
label_2:
#line 120
$memory_4 = c_rt_lib::ov_as($memory_2, 'type');
#line 121
$memory_7 = $memory_0->{'name'};
#line 121
$memory_6 = wprinter::build_sim($memory_7);
#line 121
undef($memory_7);
#line 121
$memory_7 = wprinter::get_sep();
#line 121
$memory_9 = ":";
#line 121
$memory_8 = wprinter::build_sim($memory_9);
#line 121
undef($memory_9);
#line 121
$memory_9 = wprinter::get_sep();
#line 121
$memory_10 = pretty_printer_priv::print_val($memory_4);
#line 121
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10];
#line 121
undef($memory_6);
#line 121
undef($memory_7);
#line 121
undef($memory_8);
#line 121
undef($memory_9);
#line 121
undef($memory_10);
#line 121
array::append($memory_1, $memory_5);
#line 121
undef($memory_5);
#line 121
undef($memory_4);
#line 128
goto label_1;
#line 128
label_3:
#line 129
$memory_5 = $memory_0->{'name'};
#line 129
$memory_4 = wprinter::build_sim($memory_5);
#line 129
undef($memory_5);
#line 129
array::push($memory_1, $memory_4);
#line 129
undef($memory_4);
#line 130
goto label_1;
#line 130
label_1:
#line 130
undef($memory_2);
#line 130
undef($memory_3);
#line 131
$memory_2 = $memory_0->{'value'};
#line 131
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 131
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 133
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 133
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 133
$memory_3 = "NOMATCHALERT";
#line 133
$memory_3 = [$memory_3,$memory_2];
#line 133
die(dfile::ssave($memory_3));
#line 131
label_5:
#line 131
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 132
$memory_6 = wprinter::get_sep();
#line 132
$memory_8 = "=";
#line 132
$memory_7 = wprinter::build_sim($memory_8);
#line 132
undef($memory_8);
#line 132
$memory_8 = wprinter::get_sep();
#line 132
$memory_9 = pretty_printer_priv::print_val($memory_4);
#line 132
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9];
#line 132
undef($memory_6);
#line 132
undef($memory_7);
#line 132
undef($memory_8);
#line 132
undef($memory_9);
#line 132
array::append($memory_1, $memory_5);
#line 132
undef($memory_5);
#line 132
undef($memory_4);
#line 133
goto label_4;
#line 133
label_6:
#line 134
goto label_4;
#line 134
label_4:
#line 134
undef($memory_2);
#line 134
undef($memory_3);
#line 135
$memory_2 = wprinter::build_pretty_l($memory_1);
#line 135
undef($memory_0);
#line 135
undef($memory_1);
#line 135
return $memory_2;
#line 135
undef($memory_2);
#line 135
undef($memory_1);
#line 135
undef($memory_0);
#line 135
return;
}

sub pretty_printer_priv::pind($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 139
$memory_1 = "";
#line 140
$memory_2 = 0;
#line 140
$memory_3 = 1;
#line 140
label_3:
#line 140
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_0);
#line 140
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 140
$memory_6 = 9;
#line 140
$memory_5 = string::chr($memory_6);
#line 140
undef($memory_6);
#line 140
$memory_1 = $memory_1 . $memory_5;
#line 140
undef($memory_5);
#line 140
$memory_2 = $memory_2 + $memory_3;
#line 140
goto label_3;
#line 140
label_1:
#line 140
undef($memory_2);
#line 140
undef($memory_3);
#line 140
undef($memory_4);
#line 141
undef($memory_0);
#line 141
return $memory_1;
#line 141
undef($memory_1);
#line 141
undef($memory_0);
#line 141
return;
}

sub pretty_printer_priv::join_print_hash_elem($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 145
$memory_1 = [];
#line 146
$memory_2 = array::len($memory_0);
#line 146
$memory_3 = 0;
#line 146
$memory_4 = 1;
#line 146
label_3:
#line 146
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 146
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 147
$memory_7 = $memory_0->[$memory_3];
#line 147
$memory_6 = pretty_printer_priv::print_hash_elem($memory_7);
#line 147
undef($memory_7);
#line 147
array::push($memory_1, $memory_6);
#line 147
undef($memory_6);
#line 148
$memory_6 = array::len($memory_0);
#line 148
$memory_7 = 1;
#line 148
$memory_6 = $memory_6 - $memory_7;
#line 148
undef($memory_7);
#line 148
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 148
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 148
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 148
$memory_9 = ",";
#line 148
$memory_8 = wprinter::build_sim($memory_9);
#line 148
undef($memory_9);
#line 148
$memory_9 = wprinter::get_sep();
#line 148
$memory_7 = [$memory_8,$memory_9];
#line 148
undef($memory_8);
#line 148
undef($memory_9);
#line 148
array::append($memory_1, $memory_7);
#line 148
undef($memory_7);
#line 148
goto label_5;
#line 148
label_5:
#line 148
undef($memory_6);
#line 149
$memory_3 = $memory_3 + $memory_4;
#line 149
goto label_3;
#line 149
label_1:
#line 149
undef($memory_2);
#line 149
undef($memory_3);
#line 149
undef($memory_4);
#line 149
undef($memory_5);
#line 150
undef($memory_0);
#line 150
return $memory_1;
#line 150
undef($memory_1);
#line 150
undef($memory_0);
#line 150
return;
}

sub pretty_printer_priv::print_hash_elem($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 154
$memory_1 = $memory_0->{'val'};
#line 154
$memory_1 = c_rt_lib::ov_is($memory_1, 'hash_decl');
#line 154
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 154
$memory_1 = $memory_0->{'val'};
#line 154
$memory_1 = c_rt_lib::ov_is($memory_1, 'arr_decl');
#line 154
label_3:
#line 154
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 154
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 155
$memory_2 = $memory_0->{'key'};
#line 155
$memory_2 = c_rt_lib::ov_as($memory_2, 'hash_key');
#line 156
$memory_4 = $memory_0->{'val'};
#line 156
$memory_5 = " => ";
#line 156
$memory_5 = $memory_2 . $memory_5;
#line 156
$memory_6 = "";
#line 156
$memory_3 = pretty_printer_priv::get_compressed_fun_val($memory_4, $memory_5, $memory_6);
#line 156
undef($memory_6);
#line 156
undef($memory_5);
#line 156
undef($memory_4);
#line 156
undef($memory_0);
#line 156
undef($memory_1);
#line 156
undef($memory_2);
#line 156
return $memory_3;
#line 156
undef($memory_3);
#line 156
undef($memory_2);
#line 157
goto label_2;
#line 157
label_2:
#line 157
undef($memory_1);
#line 158
$memory_4 = $memory_0->{'key'};
#line 158
$memory_3 = pretty_printer_priv::print_val($memory_4);
#line 158
undef($memory_4);
#line 158
$memory_4 = wprinter::get_sep();
#line 158
$memory_6 = "=>";
#line 158
$memory_5 = wprinter::build_sim($memory_6);
#line 158
undef($memory_6);
#line 158
$memory_6 = wprinter::get_sep();
#line 158
$memory_8 = $memory_0->{'val'};
#line 158
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 158
undef($memory_8);
#line 158
$memory_2 = [$memory_3,$memory_4,$memory_5,$memory_6,$memory_7];
#line 158
undef($memory_3);
#line 158
undef($memory_4);
#line 158
undef($memory_5);
#line 158
undef($memory_6);
#line 158
undef($memory_7);
#line 158
$memory_1 = wprinter::build_pretty_l($memory_2);
#line 158
undef($memory_2);
#line 158
undef($memory_0);
#line 158
return $memory_1;
#line 158
undef($memory_1);
#line 158
undef($memory_0);
#line 158
return;
}

sub pretty_printer_priv::print_variant($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 168
$memory_1 = $memory_0->{'name'};
#line 168
$memory_3 = "TRUE";
#line 168
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 168
undef($memory_3);
#line 168
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 168
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 168
$memory_1 = $memory_0->{'var'};
#line 168
$memory_1 = c_rt_lib::ov_is($memory_1, 'nop');
#line 168
label_3:
#line 168
undef($memory_2);
#line 168
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 168
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 169
$memory_3 = "true";
#line 169
$memory_2 = wprinter::build_sim($memory_3);
#line 169
undef($memory_3);
#line 169
undef($memory_0);
#line 169
undef($memory_1);
#line 169
return $memory_2;
#line 169
undef($memory_2);
#line 170
goto label_4;
#line 170
label_2:
#line 170
$memory_1 = $memory_0->{'name'};
#line 170
$memory_3 = "FALSE";
#line 170
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 170
undef($memory_3);
#line 170
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 170
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 170
$memory_1 = $memory_0->{'var'};
#line 170
$memory_1 = c_rt_lib::ov_is($memory_1, 'nop');
#line 170
label_5:
#line 170
undef($memory_2);
#line 170
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 170
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 171
$memory_3 = "false";
#line 171
$memory_2 = wprinter::build_sim($memory_3);
#line 171
undef($memory_3);
#line 171
undef($memory_0);
#line 171
undef($memory_1);
#line 171
return $memory_2;
#line 171
undef($memory_2);
#line 172
goto label_4;
#line 172
label_4:
#line 172
undef($memory_1);
#line 173
$memory_1 = $memory_0->{'var'};
#line 173
$memory_1 = c_rt_lib::ov_is($memory_1, 'arr_decl');
#line 173
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 173
$memory_1 = $memory_0->{'var'};
#line 173
$memory_1 = c_rt_lib::ov_is($memory_1, 'hash_decl');
#line 173
label_8:
#line 173
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 173
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 174
$memory_3 = $memory_0->{'var'};
#line 174
$memory_4 = ":";
#line 174
$memory_5 = $memory_0->{'name'};
#line 174
$memory_4 = $memory_4 . $memory_5;
#line 174
undef($memory_5);
#line 174
$memory_5 = "(";
#line 174
$memory_4 = $memory_4 . $memory_5;
#line 174
undef($memory_5);
#line 174
$memory_5 = ")";
#line 174
$memory_2 = pretty_printer_priv::get_compressed_fun_val($memory_3, $memory_4, $memory_5);
#line 174
undef($memory_5);
#line 174
undef($memory_4);
#line 174
undef($memory_3);
#line 174
undef($memory_0);
#line 174
undef($memory_1);
#line 174
return $memory_2;
#line 174
undef($memory_2);
#line 175
goto label_7;
#line 175
label_7:
#line 175
undef($memory_1);
#line 176
$memory_1 = [];
#line 177
$memory_3 = ":";
#line 177
$memory_4 = $memory_0->{'name'};
#line 177
$memory_3 = $memory_3 . $memory_4;
#line 177
undef($memory_4);
#line 177
$memory_2 = wprinter::build_sim($memory_3);
#line 177
undef($memory_3);
#line 177
array::push($memory_1, $memory_2);
#line 177
undef($memory_2);
#line 178
$memory_2 = $memory_0->{'var'};
#line 178
$memory_2 = c_rt_lib::ov_is($memory_2, 'nop');
#line 178
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 178
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 178
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 178
$memory_5 = "(";
#line 178
$memory_4 = wprinter::build_sim($memory_5);
#line 178
undef($memory_5);
#line 178
$memory_6 = $memory_0->{'var'};
#line 178
$memory_5 = pretty_printer_priv::print_val($memory_6);
#line 178
undef($memory_6);
#line 178
$memory_7 = ")";
#line 178
$memory_6 = wprinter::build_sim($memory_7);
#line 178
undef($memory_7);
#line 178
$memory_3 = [$memory_4,$memory_5,$memory_6];
#line 178
undef($memory_4);
#line 178
undef($memory_5);
#line 178
undef($memory_6);
#line 178
array::append($memory_1, $memory_3);
#line 178
undef($memory_3);
#line 178
goto label_10;
#line 178
label_10:
#line 178
undef($memory_2);
#line 180
$memory_2 = wprinter::build_pretty_op_l($memory_1);
#line 180
undef($memory_0);
#line 180
undef($memory_1);
#line 180
return $memory_2;
#line 180
undef($memory_2);
#line 180
undef($memory_1);
#line 180
undef($memory_0);
#line 180
return;
}

sub pretty_printer_priv::print_variant_case_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 184
$memory_3 = ":";
#line 184
$memory_4 = $memory_0->{'name'};
#line 184
$memory_3 = $memory_3 . $memory_4;
#line 184
undef($memory_4);
#line 184
$memory_2 = wprinter::build_sim($memory_3);
#line 184
undef($memory_3);
#line 184
$memory_1 = [$memory_2];
#line 184
undef($memory_2);
#line 185
$memory_2 = $memory_0->{'value'};
#line 185
$memory_3 = c_rt_lib::ov_is($memory_2, 'value');
#line 185
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 187
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 187
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 187
$memory_3 = "NOMATCHALERT";
#line 187
$memory_3 = [$memory_3,$memory_2];
#line 187
die(dfile::ssave($memory_3));
#line 185
label_2:
#line 185
$memory_4 = c_rt_lib::ov_as($memory_2, 'value');
#line 186
$memory_7 = "(";
#line 186
$memory_6 = wprinter::build_sim($memory_7);
#line 186
undef($memory_7);
#line 186
$memory_7 = pretty_printer_priv::print_var_decl($memory_4);
#line 186
$memory_9 = ")";
#line 186
$memory_8 = wprinter::build_sim($memory_9);
#line 186
undef($memory_9);
#line 186
$memory_5 = [$memory_6,$memory_7,$memory_8];
#line 186
undef($memory_6);
#line 186
undef($memory_7);
#line 186
undef($memory_8);
#line 186
array::append($memory_1, $memory_5);
#line 186
undef($memory_5);
#line 186
undef($memory_4);
#line 187
goto label_1;
#line 187
label_3:
#line 188
goto label_1;
#line 188
label_1:
#line 188
undef($memory_2);
#line 188
undef($memory_3);
#line 189
$memory_2 = wprinter::build_pretty_op_l($memory_1);
#line 189
undef($memory_0);
#line 189
undef($memory_1);
#line 189
return $memory_2;
#line 189
undef($memory_2);
#line 189
undef($memory_1);
#line 189
undef($memory_0);
#line 189
return;
}

sub pretty_printer_priv::join_print_fun_arg($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 193
$memory_1 = [];
#line 194
$memory_2 = array::len($memory_0);
#line 194
$memory_3 = 0;
#line 194
$memory_4 = 1;
#line 194
label_3:
#line 194
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 194
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 195
$memory_7 = $memory_0->[$memory_3];
#line 195
$memory_6 = pretty_printer_priv::print_fun_arg($memory_7);
#line 195
undef($memory_7);
#line 195
array::push($memory_1, $memory_6);
#line 195
undef($memory_6);
#line 196
$memory_6 = array::len($memory_0);
#line 196
$memory_7 = 1;
#line 196
$memory_6 = $memory_6 - $memory_7;
#line 196
undef($memory_7);
#line 196
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 196
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 196
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 196
$memory_9 = ",";
#line 196
$memory_8 = wprinter::build_sim($memory_9);
#line 196
undef($memory_9);
#line 196
$memory_9 = wprinter::get_sep();
#line 196
$memory_7 = [$memory_8,$memory_9];
#line 196
undef($memory_8);
#line 196
undef($memory_9);
#line 196
array::append($memory_1, $memory_7);
#line 196
undef($memory_7);
#line 196
goto label_5;
#line 196
label_5:
#line 196
undef($memory_6);
#line 197
$memory_3 = $memory_3 + $memory_4;
#line 197
goto label_3;
#line 197
label_1:
#line 197
undef($memory_2);
#line 197
undef($memory_3);
#line 197
undef($memory_4);
#line 197
undef($memory_5);
#line 198
undef($memory_0);
#line 198
return $memory_1;
#line 198
undef($memory_1);
#line 198
undef($memory_0);
#line 198
return;
}

sub pretty_printer_priv::print_fun_arg($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 202
$memory_1 = [];
#line 203
$memory_2 = $memory_0->{'mod'};
#line 203
$memory_3 = c_rt_lib::ov_is($memory_2, 'ref');
#line 203
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 205
$memory_3 = c_rt_lib::ov_is($memory_2, 'none');
#line 205
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 205
$memory_3 = "NOMATCHALERT";
#line 205
$memory_3 = [$memory_3,$memory_2];
#line 205
die(dfile::ssave($memory_3));
#line 203
label_2:
#line 204
$memory_6 = "ref";
#line 204
$memory_5 = wprinter::build_sim($memory_6);
#line 204
undef($memory_6);
#line 204
$memory_6 = wprinter::get_sep();
#line 204
$memory_4 = [$memory_5,$memory_6];
#line 204
undef($memory_5);
#line 204
undef($memory_6);
#line 204
array::append($memory_1, $memory_4);
#line 204
undef($memory_4);
#line 205
goto label_1;
#line 205
label_3:
#line 206
goto label_1;
#line 206
label_1:
#line 206
undef($memory_2);
#line 206
undef($memory_3);
#line 207
$memory_3 = $memory_0->{'val'};
#line 207
$memory_2 = pretty_printer_priv::print_val($memory_3);
#line 207
undef($memory_3);
#line 207
array::push($memory_1, $memory_2);
#line 207
undef($memory_2);
#line 208
$memory_2 = wprinter::build_pretty_op_l($memory_1);
#line 208
undef($memory_0);
#line 208
undef($memory_1);
#line 208
return $memory_2;
#line 208
undef($memory_2);
#line 208
undef($memory_1);
#line 208
undef($memory_0);
#line 208
return;
}

sub pretty_printer_priv::count_structs($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 212
$memory_1 = 0;
#line 213
$memory_3 = 0;
#line 213
$memory_4 = 1;
#line 213
$memory_5 = c_rt_lib::array_len($memory_0);
#line 213
label_3:
#line 213
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 213
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 213
$memory_2 = $memory_0->[$memory_3];
#line 214
$memory_7 = $memory_2->{'val'};
#line 214
$memory_7 = c_rt_lib::ov_is($memory_7, 'arr_decl');
#line 214
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 214
$memory_7 = $memory_2->{'val'};
#line 214
$memory_7 = c_rt_lib::ov_is($memory_7, 'hash_decl');
#line 214
label_6:
#line 214
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 214
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 214
$memory_8 = 1;
#line 214
$memory_1 = $memory_1 + $memory_8;
#line 214
undef($memory_8);
#line 214
goto label_5;
#line 214
label_5:
#line 214
undef($memory_7);
#line 215
$memory_3 = $memory_3 + $memory_4;
#line 215
goto label_3;
#line 215
label_1:
#line 215
undef($memory_2);
#line 215
undef($memory_3);
#line 215
undef($memory_4);
#line 215
undef($memory_5);
#line 215
undef($memory_6);
#line 216
undef($memory_0);
#line 216
return $memory_1;
#line 216
undef($memory_1);
#line 216
undef($memory_0);
#line 216
return;
}

sub pretty_printer_priv::get_compressed_fun_val($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 221
$memory_4 = $memory_1;
#line 222
$memory_5 = $memory_2;
#line 223
label_2:
#line 224
$memory_6 = $memory_0;
#line 224
$memory_6 = c_rt_lib::ov_is($memory_6, 'arr_decl');
#line 224
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 224
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 225
$memory_7 = $memory_0;
#line 225
$memory_7 = c_rt_lib::ov_as($memory_7, 'arr_decl');
#line 226
$memory_8 = "[";
#line 226
$memory_4 = $memory_4 . $memory_8;
#line 226
undef($memory_8);
#line 227
$memory_8 = "]";
#line 227
$memory_8 = $memory_8 . $memory_5;
#line 227
$memory_5 = $memory_8;
#line 227
undef($memory_8);
#line 228
$memory_8 = array::len($memory_7);
#line 228
$memory_9 = 1;
#line 228
$memory_8 = c_rt_lib::to_nl($memory_8 != $memory_9);
#line 228
undef($memory_9);
#line 228
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 228
if (c_rt_lib::check_true($memory_8)) {goto label_6;}
#line 229
$memory_9 = pretty_printer_priv::join_print_val($memory_7);
#line 229
$memory_3 = $memory_9;
#line 229
undef($memory_9);
#line 230
undef($memory_6);
#line 230
undef($memory_7);
#line 230
undef($memory_8);
#line 230
goto label_1;
#line 231
goto label_6;
#line 231
label_6:
#line 231
undef($memory_8);
#line 232
$memory_9 = 0;
#line 232
$memory_8 = $memory_7->[$memory_9];
#line 232
undef($memory_9);
#line 232
$memory_0 = $memory_8;
#line 232
undef($memory_8);
#line 232
undef($memory_7);
#line 233
goto label_3;
#line 233
label_4:
#line 233
$memory_6 = $memory_0;
#line 233
$memory_6 = c_rt_lib::ov_is($memory_6, 'hash_decl');
#line 233
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 233
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 234
$memory_7 = $memory_0;
#line 234
$memory_7 = c_rt_lib::ov_as($memory_7, 'hash_decl');
#line 235
$memory_8 = "{";
#line 235
$memory_4 = $memory_4 . $memory_8;
#line 235
undef($memory_8);
#line 236
$memory_8 = "}";
#line 236
$memory_8 = $memory_8 . $memory_5;
#line 236
$memory_5 = $memory_8;
#line 236
undef($memory_8);
#line 237
$memory_8 = pretty_printer_priv::join_print_hash_elem($memory_7);
#line 237
$memory_3 = $memory_8;
#line 237
undef($memory_8);
#line 238
undef($memory_6);
#line 238
undef($memory_7);
#line 238
goto label_1;
#line 238
undef($memory_7);
#line 239
goto label_3;
#line 239
label_7:
#line 240
$memory_8 = pretty_printer_priv::print_val($memory_0);
#line 240
$memory_7 = [$memory_8];
#line 240
undef($memory_8);
#line 240
$memory_3 = $memory_7;
#line 240
undef($memory_7);
#line 241
undef($memory_6);
#line 241
goto label_1;
#line 242
goto label_3;
#line 242
label_3:
#line 242
undef($memory_6);
#line 223
goto label_2;
#line 223
label_1:
#line 244
$memory_6 = wprinter::build_pretty_arr_decl($memory_3, $memory_4, $memory_5);
#line 244
undef($memory_0);
#line 244
undef($memory_1);
#line 244
undef($memory_2);
#line 244
undef($memory_3);
#line 244
undef($memory_4);
#line 244
undef($memory_5);
#line 244
return $memory_6;
#line 244
undef($memory_6);
#line 244
undef($memory_3);
#line 244
undef($memory_4);
#line 244
undef($memory_5);
#line 244
undef($memory_0);
#line 244
undef($memory_1);
#line 244
undef($memory_2);
#line 244
return;
}

sub pretty_printer_priv::print_st($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 248
$memory_3 = " ";
#line 248
pretty_printer_priv::state_print($memory_0, $memory_3);
#line 248
undef($memory_3);
#line 249
pretty_printer_priv::print_cmd($memory_0, $memory_1, $memory_2);
#line 249
undef($memory_1);
#line 249
undef($memory_2);
#line 249
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::get_fun_label($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 253
$memory_2 = "";
#line 253
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 253
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 253
$memory_2 = "::";
#line 253
$memory_2 = $memory_1 . $memory_2;
#line 253
$memory_2 = $memory_2 . $memory_0;
#line 253
goto label_1;
#line 253
label_2:
#line 253
$memory_2 = $memory_0;
#line 253
label_1:
#line 253
undef($memory_0);
#line 253
undef($memory_1);
#line 253
return $memory_2;
#line 253
undef($memory_2);
#line 253
undef($memory_0);
#line 253
undef($memory_1);
#line 253
return;
}

sub pretty_printer_priv::string_to_nl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 257
$memory_2 = "'";
#line 257
$memory_3 = "''";
#line 257
$memory_1 = string::replace($memory_0, $memory_2, $memory_3);
#line 257
undef($memory_3);
#line 257
undef($memory_2);
#line 257
undef($memory_0);
#line 257
return $memory_1;
#line 257
undef($memory_1);
#line 257
undef($memory_0);
#line 257
return;
}

sub pretty_printer_priv::join_print_val($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 261
$memory_1 = [];
#line 262
$memory_2 = array::len($memory_0);
#line 262
$memory_3 = 0;
#line 262
$memory_4 = 1;
#line 262
label_3:
#line 262
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_2);
#line 262
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 263
$memory_7 = $memory_0->[$memory_3];
#line 263
$memory_6 = pretty_printer_priv::print_val($memory_7);
#line 263
undef($memory_7);
#line 263
array::push($memory_1, $memory_6);
#line 263
undef($memory_6);
#line 264
$memory_6 = array::len($memory_0);
#line 264
$memory_7 = 1;
#line 264
$memory_6 = $memory_6 - $memory_7;
#line 264
undef($memory_7);
#line 264
$memory_6 = c_rt_lib::to_nl($memory_3 != $memory_6);
#line 264
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 264
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 264
$memory_9 = ",";
#line 264
$memory_8 = wprinter::build_sim($memory_9);
#line 264
undef($memory_9);
#line 264
$memory_9 = wprinter::get_sep();
#line 264
$memory_7 = [$memory_8,$memory_9];
#line 264
undef($memory_8);
#line 264
undef($memory_9);
#line 264
array::append($memory_1, $memory_7);
#line 264
undef($memory_7);
#line 264
goto label_5;
#line 264
label_5:
#line 264
undef($memory_6);
#line 265
$memory_3 = $memory_3 + $memory_4;
#line 265
goto label_3;
#line 265
label_1:
#line 265
undef($memory_2);
#line 265
undef($memory_3);
#line 265
undef($memory_4);
#line 265
undef($memory_5);
#line 266
undef($memory_0);
#line 266
return $memory_1;
#line 266
undef($memory_1);
#line 266
undef($memory_0);
#line 266
return;
}

sub pretty_printer_priv::is_to_change_ov($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 270
$memory_1 = $memory_0;
#line 270
$memory_1 = c_rt_lib::ov_is($memory_1, 'fun_val');
#line 270
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 270
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 270
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 270
$memory_2 = c_rt_lib::to_nl(0);
#line 270
undef($memory_0);
#line 270
undef($memory_1);
#line 270
return $memory_2;
#line 270
undef($memory_2);
#line 270
goto label_2;
#line 270
label_2:
#line 270
undef($memory_1);
#line 271
$memory_1 = $memory_0;
#line 271
$memory_1 = c_rt_lib::ov_as($memory_1, 'fun_val');
#line 272
$memory_4 = $memory_1->{'args'};
#line 272
$memory_2 = array::len($memory_4);
#line 272
undef($memory_4);
#line 272
$memory_4 = 2;
#line 272
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_4);
#line 272
undef($memory_4);
#line 272
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 272
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 272
$memory_2 = $memory_1->{'module'};
#line 272
$memory_4 = "ov";
#line 272
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 272
undef($memory_4);
#line 272
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 272
$memory_2 = $memory_1->{'module'};
#line 272
$memory_4 = "c_ov";
#line 272
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 272
undef($memory_4);
#line 272
label_6:
#line 272
undef($memory_3);
#line 272
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 272
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 273
$memory_3 = $memory_1->{'name'};
#line 273
$memory_5 = "as";
#line 273
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 273
undef($memory_5);
#line 273
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 273
$memory_3 = $memory_1->{'name'};
#line 273
$memory_5 = "is";
#line 273
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 273
undef($memory_5);
#line 273
label_10:
#line 273
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 273
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 273
$memory_3 = $memory_1->{'args'};
#line 273
$memory_5 = 1;
#line 273
$memory_3 = $memory_3->[$memory_5];
#line 273
undef($memory_5);
#line 273
$memory_3 = $memory_3->{'val'};
#line 273
$memory_3 = c_rt_lib::ov_is($memory_3, 'string');
#line 273
label_9:
#line 273
undef($memory_4);
#line 273
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 273
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 274
$memory_4 = $memory_1->{'args'};
#line 274
$memory_5 = 1;
#line 274
$memory_4 = $memory_4->[$memory_5];
#line 274
undef($memory_5);
#line 274
$memory_4 = $memory_4->{'val'};
#line 274
$memory_4 = c_rt_lib::ov_as($memory_4, 'string');
#line 275
$memory_7 = $memory_4->{'arr'};
#line 275
$memory_5 = array::len($memory_7);
#line 275
undef($memory_7);
#line 275
$memory_7 = 1;
#line 275
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 275
undef($memory_7);
#line 275
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 275
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 275
$memory_7 = $memory_4->{'arr'};
#line 275
$memory_8 = 0;
#line 275
$memory_7 = $memory_7->[$memory_8];
#line 275
undef($memory_8);
#line 275
$memory_8 = " ";
#line 275
$memory_5 = string::index2($memory_7, $memory_8);
#line 275
undef($memory_8);
#line 275
undef($memory_7);
#line 275
$memory_7 = 0;
#line 275
$memory_5 = c_rt_lib::to_nl($memory_5 < $memory_7);
#line 275
undef($memory_7);
#line 275
label_13:
#line 275
undef($memory_6);
#line 275
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 275
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 276
$memory_6 = c_rt_lib::to_nl(1);
#line 276
undef($memory_0);
#line 276
undef($memory_1);
#line 276
undef($memory_2);
#line 276
undef($memory_3);
#line 276
undef($memory_4);
#line 276
undef($memory_5);
#line 276
return $memory_6;
#line 276
undef($memory_6);
#line 277
goto label_12;
#line 277
label_12:
#line 277
undef($memory_5);
#line 277
undef($memory_4);
#line 278
goto label_8;
#line 278
label_8:
#line 278
undef($memory_3);
#line 279
goto label_4;
#line 279
label_4:
#line 279
undef($memory_2);
#line 280
$memory_2 = c_rt_lib::to_nl(0);
#line 280
undef($memory_0);
#line 280
undef($memory_1);
#line 280
return $memory_2;
#line 280
undef($memory_2);
#line 280
undef($memory_1);
#line 280
undef($memory_0);
#line 280
return;
}

sub pretty_printer_priv::print_val($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];
#line 284
$memory_1 = c_rt_lib::ov_is($memory_0, 'const');
#line 284
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 286
$memory_1 = c_rt_lib::ov_is($memory_0, 'string');
#line 286
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 296
$memory_1 = c_rt_lib::ov_is($memory_0, 'hash_key');
#line 296
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 298
$memory_1 = c_rt_lib::ov_is($memory_0, 'variant');
#line 298
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 300
$memory_1 = c_rt_lib::ov_is($memory_0, 'var');
#line 300
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 302
$memory_1 = c_rt_lib::ov_is($memory_0, 'parenthesis');
#line 302
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 304
$memory_1 = c_rt_lib::ov_is($memory_0, 'ternary_op');
#line 304
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 312
$memory_1 = c_rt_lib::ov_is($memory_0, 'bin_op');
#line 312
if (c_rt_lib::check_true($memory_1)) {goto label_9;}
#line 345
$memory_1 = c_rt_lib::ov_is($memory_0, 'var_op');
#line 345
if (c_rt_lib::check_true($memory_1)) {goto label_10;}
#line 360
$memory_1 = c_rt_lib::ov_is($memory_0, 'post_dec');
#line 360
if (c_rt_lib::check_true($memory_1)) {goto label_11;}
#line 362
$memory_1 = c_rt_lib::ov_is($memory_0, 'post_inc');
#line 362
if (c_rt_lib::check_true($memory_1)) {goto label_12;}
#line 364
$memory_1 = c_rt_lib::ov_is($memory_0, 'unary_op');
#line 364
if (c_rt_lib::check_true($memory_1)) {goto label_13;}
#line 366
$memory_1 = c_rt_lib::ov_is($memory_0, 'fun_val');
#line 366
if (c_rt_lib::check_true($memory_1)) {goto label_14;}
#line 390
$memory_1 = c_rt_lib::ov_is($memory_0, 'nop');
#line 390
if (c_rt_lib::check_true($memory_1)) {goto label_15;}
#line 392
$memory_1 = c_rt_lib::ov_is($memory_0, 'arr_decl');
#line 392
if (c_rt_lib::check_true($memory_1)) {goto label_16;}
#line 394
$memory_1 = c_rt_lib::ov_is($memory_0, 'hash_decl');
#line 394
if (c_rt_lib::check_true($memory_1)) {goto label_17;}
#line 396
$memory_1 = c_rt_lib::ov_is($memory_0, 'fun_label');
#line 396
if (c_rt_lib::check_true($memory_1)) {goto label_18;}
#line 396
$memory_1 = "NOMATCHALERT";
#line 396
$memory_1 = [$memory_1,$memory_0];
#line 396
die(dfile::ssave($memory_1));
#line 284
label_2:
#line 284
$memory_2 = c_rt_lib::ov_as($memory_0, 'const');
#line 285
$memory_3 = wprinter::build_sim($memory_2);
#line 285
undef($memory_0);
#line 285
undef($memory_1);
#line 285
undef($memory_2);
#line 285
return $memory_3;
#line 285
undef($memory_3);
#line 285
undef($memory_2);
#line 286
goto label_1;
#line 286
label_3:
#line 286
$memory_2 = c_rt_lib::ov_as($memory_0, 'string');
#line 287
$memory_3 = [];
#line 288
$memory_4 = $memory_2->{'arr'};
#line 288
$memory_6 = 0;
#line 288
$memory_7 = 1;
#line 288
$memory_8 = c_rt_lib::array_len($memory_4);
#line 288
label_21:
#line 288
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 288
if (c_rt_lib::check_true($memory_9)) {goto label_19;}
#line 288
$memory_5 = $memory_4->[$memory_6];
#line 289
$memory_10 = "'";
#line 289
$memory_11 = pretty_printer_priv::string_to_nl($memory_5);
#line 289
$memory_10 = $memory_10 . $memory_11;
#line 289
undef($memory_11);
#line 289
array::push($memory_3, $memory_10);
#line 289
undef($memory_10);
#line 290
$memory_6 = $memory_6 + $memory_7;
#line 290
goto label_21;
#line 290
label_19:
#line 290
undef($memory_4);
#line 290
undef($memory_5);
#line 290
undef($memory_6);
#line 290
undef($memory_7);
#line 290
undef($memory_8);
#line 290
undef($memory_9);
#line 291
$memory_4 = $memory_2->{'last'};
#line 291
$memory_5 = c_rt_lib::ov_is($memory_4, 'new_line');
#line 291
if (c_rt_lib::check_true($memory_5)) {goto label_23;}
#line 292
$memory_5 = c_rt_lib::ov_is($memory_4, 'end');
#line 292
if (c_rt_lib::check_true($memory_5)) {goto label_24;}
#line 292
$memory_5 = "NOMATCHALERT";
#line 292
$memory_5 = [$memory_5,$memory_4];
#line 292
die(dfile::ssave($memory_5));
#line 291
label_23:
#line 292
goto label_22;
#line 292
label_24:
#line 293
$memory_7 = array::len($memory_3);
#line 293
$memory_8 = 1;
#line 293
$memory_7 = $memory_7 - $memory_8;
#line 293
undef($memory_8);
#line 293
$memory_6 = $memory_3->[$memory_7];
#line 293
undef($memory_7);
#line 293
$memory_7 = "'";
#line 293
$memory_6 = $memory_6 . $memory_7;
#line 293
undef($memory_7);
#line 293
$memory_8 = array::len($memory_3);
#line 293
$memory_9 = 1;
#line 293
$memory_8 = $memory_8 - $memory_9;
#line 293
undef($memory_9);
#line 293
$memory_7 = $memory_6;
#line 293
 if (c_rt_lib::get_arrcount($memory_3) > 1) {$memory_3 = [@{$memory_3}];}$memory_3->[$memory_8] = $memory_7;
#line 293
undef($memory_6);
#line 293
undef($memory_7);
#line 293
undef($memory_8);
#line 294
goto label_22;
#line 294
label_22:
#line 294
undef($memory_4);
#line 294
undef($memory_5);
#line 295
$memory_5 = $memory_2->{'last'};
#line 295
$memory_4 = wprinter::build_str_arr($memory_3, $memory_5);
#line 295
undef($memory_5);
#line 295
undef($memory_0);
#line 295
undef($memory_1);
#line 295
undef($memory_2);
#line 295
undef($memory_3);
#line 295
return $memory_4;
#line 295
undef($memory_4);
#line 295
undef($memory_3);
#line 295
undef($memory_2);
#line 296
goto label_1;
#line 296
label_4:
#line 296
$memory_2 = c_rt_lib::ov_as($memory_0, 'hash_key');
#line 297
$memory_3 = wprinter::build_sim($memory_2);
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
#line 297
undef($memory_2);
#line 298
goto label_1;
#line 298
label_5:
#line 298
$memory_2 = c_rt_lib::ov_as($memory_0, 'variant');
#line 299
$memory_3 = pretty_printer_priv::print_variant($memory_2);
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
#line 299
undef($memory_2);
#line 300
goto label_1;
#line 300
label_6:
#line 300
$memory_2 = c_rt_lib::ov_as($memory_0, 'var');
#line 301
$memory_3 = wprinter::build_sim($memory_2);
#line 301
undef($memory_0);
#line 301
undef($memory_1);
#line 301
undef($memory_2);
#line 301
return $memory_3;
#line 301
undef($memory_3);
#line 301
undef($memory_2);
#line 302
goto label_1;
#line 302
label_7:
#line 302
$memory_2 = c_rt_lib::ov_as($memory_0, 'parenthesis');
#line 303
$memory_6 = "(";
#line 303
$memory_5 = wprinter::build_sim($memory_6);
#line 303
undef($memory_6);
#line 303
$memory_6 = pretty_printer_priv::print_val($memory_2);
#line 303
$memory_8 = ")";
#line 303
$memory_7 = wprinter::build_sim($memory_8);
#line 303
undef($memory_8);
#line 303
$memory_4 = [$memory_5,$memory_6,$memory_7];
#line 303
undef($memory_5);
#line 303
undef($memory_6);
#line 303
undef($memory_7);
#line 303
$memory_3 = wprinter::build_pretty_a($memory_4);
#line 303
undef($memory_4);
#line 303
undef($memory_0);
#line 303
undef($memory_1);
#line 303
undef($memory_2);
#line 303
return $memory_3;
#line 303
undef($memory_3);
#line 303
undef($memory_2);
#line 304
goto label_1;
#line 304
label_8:
#line 304
$memory_2 = c_rt_lib::ov_as($memory_0, 'ternary_op');
#line 305
$memory_6 = $memory_2->{'fst'};
#line 305
$memory_5 = pretty_printer_priv::print_val($memory_6);
#line 305
undef($memory_6);
#line 305
$memory_6 = wprinter::get_sep();
#line 305
$memory_10 = "? ";
#line 305
$memory_9 = wprinter::build_sim($memory_10);
#line 305
undef($memory_10);
#line 305
$memory_11 = $memory_2->{'snd'};
#line 305
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 305
undef($memory_11);
#line 305
$memory_8 = [$memory_9,$memory_10];
#line 305
undef($memory_9);
#line 305
undef($memory_10);
#line 305
$memory_7 = wprinter::build_pretty_op_l($memory_8);
#line 305
undef($memory_8);
#line 305
$memory_8 = wprinter::get_sep();
#line 305
$memory_12 = ": ";
#line 305
$memory_11 = wprinter::build_sim($memory_12);
#line 305
undef($memory_12);
#line 305
$memory_13 = $memory_2->{'thrd'};
#line 305
$memory_12 = pretty_printer_priv::print_val($memory_13);
#line 305
undef($memory_13);
#line 305
$memory_10 = [$memory_11,$memory_12];
#line 305
undef($memory_11);
#line 305
undef($memory_12);
#line 305
$memory_9 = wprinter::build_pretty_op_l($memory_10);
#line 305
undef($memory_10);
#line 305
$memory_4 = [$memory_5,$memory_6,$memory_7,$memory_8,$memory_9];
#line 305
undef($memory_5);
#line 305
undef($memory_6);
#line 305
undef($memory_7);
#line 305
undef($memory_8);
#line 305
undef($memory_9);
#line 305
$memory_3 = wprinter::build_pretty_a($memory_4);
#line 305
undef($memory_4);
#line 305
undef($memory_0);
#line 305
undef($memory_1);
#line 305
undef($memory_2);
#line 305
return $memory_3;
#line 305
undef($memory_3);
#line 305
undef($memory_2);
#line 312
goto label_1;
#line 312
label_9:
#line 312
$memory_2 = c_rt_lib::ov_as($memory_0, 'bin_op');
#line 313
$memory_3 = $memory_2->{'op'};
#line 314
$memory_4 = "ARRAY_INDEX";
#line 314
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 314
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 314
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 315
$memory_10 = $memory_2->{'left'};
#line 315
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 315
undef($memory_10);
#line 315
$memory_11 = "[";
#line 315
$memory_10 = wprinter::build_sim($memory_11);
#line 315
undef($memory_11);
#line 315
$memory_8 = [$memory_9,$memory_10];
#line 315
undef($memory_9);
#line 315
undef($memory_10);
#line 315
$memory_7 = wprinter::build_pretty_l($memory_8);
#line 315
undef($memory_8);
#line 315
$memory_9 = $memory_2->{'right'};
#line 315
$memory_8 = pretty_printer_priv::print_val($memory_9);
#line 315
undef($memory_9);
#line 315
$memory_10 = "]";
#line 315
$memory_9 = wprinter::build_sim($memory_10);
#line 315
undef($memory_10);
#line 315
$memory_6 = [$memory_7,$memory_8,$memory_9];
#line 315
undef($memory_7);
#line 315
undef($memory_8);
#line 315
undef($memory_9);
#line 315
$memory_5 = wprinter::build_pretty_a($memory_6);
#line 315
undef($memory_6);
#line 315
undef($memory_0);
#line 315
undef($memory_1);
#line 315
undef($memory_2);
#line 315
undef($memory_3);
#line 315
undef($memory_4);
#line 315
return $memory_5;
#line 315
undef($memory_5);
#line 320
goto label_25;
#line 320
label_26:
#line 320
$memory_4 = "HASH_INDEX";
#line 320
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 320
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 320
if (c_rt_lib::check_true($memory_4)) {goto label_27;}
#line 321
$memory_10 = $memory_2->{'left'};
#line 321
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 321
undef($memory_10);
#line 321
$memory_11 = "{";
#line 321
$memory_10 = wprinter::build_sim($memory_11);
#line 321
undef($memory_11);
#line 321
$memory_8 = [$memory_9,$memory_10];
#line 321
undef($memory_9);
#line 321
undef($memory_10);
#line 321
$memory_7 = wprinter::build_pretty_l($memory_8);
#line 321
undef($memory_8);
#line 321
$memory_9 = $memory_2->{'right'};
#line 321
$memory_8 = pretty_printer_priv::print_val($memory_9);
#line 321
undef($memory_9);
#line 321
$memory_10 = "}";
#line 321
$memory_9 = wprinter::build_sim($memory_10);
#line 321
undef($memory_10);
#line 321
$memory_6 = [$memory_7,$memory_8,$memory_9];
#line 321
undef($memory_7);
#line 321
undef($memory_8);
#line 321
undef($memory_9);
#line 321
$memory_5 = wprinter::build_pretty_a($memory_6);
#line 321
undef($memory_6);
#line 321
undef($memory_0);
#line 321
undef($memory_1);
#line 321
undef($memory_2);
#line 321
undef($memory_3);
#line 321
undef($memory_4);
#line 321
return $memory_5;
#line 321
undef($memory_5);
#line 326
goto label_25;
#line 326
label_27:
#line 326
$memory_4 = "->";
#line 326
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 326
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 326
if (c_rt_lib::check_true($memory_4)) {goto label_28;}
#line 328
$memory_7 = $memory_2->{'left'};
#line 328
$memory_6 = pretty_printer_priv::is_to_change_ov($memory_7);
#line 328
undef($memory_7);
#line 328
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 328
if (c_rt_lib::check_true($memory_6)) {goto label_30;}
#line 329
$memory_10 = "(";
#line 329
$memory_9 = wprinter::build_sim($memory_10);
#line 329
undef($memory_10);
#line 329
$memory_11 = $memory_2->{'left'};
#line 329
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 329
undef($memory_11);
#line 329
$memory_12 = ")";
#line 329
$memory_11 = wprinter::build_sim($memory_12);
#line 329
undef($memory_12);
#line 329
$memory_8 = [$memory_9,$memory_10,$memory_11];
#line 329
undef($memory_9);
#line 329
undef($memory_10);
#line 329
undef($memory_11);
#line 329
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 329
undef($memory_8);
#line 329
$memory_5 = $memory_7;
#line 329
undef($memory_7);
#line 334
goto label_29;
#line 334
label_30:
#line 335
$memory_8 = $memory_2->{'left'};
#line 335
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 335
undef($memory_8);
#line 335
$memory_5 = $memory_7;
#line 335
undef($memory_7);
#line 336
goto label_29;
#line 336
label_29:
#line 336
undef($memory_6);
#line 337
$memory_8 = wprinter::build_sim($memory_3);
#line 337
$memory_10 = $memory_2->{'right'};
#line 337
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 337
undef($memory_10);
#line 337
$memory_7 = [$memory_5,$memory_8,$memory_9];
#line 337
undef($memory_8);
#line 337
undef($memory_9);
#line 337
$memory_6 = wprinter::build_pretty_op_l($memory_7);
#line 337
undef($memory_7);
#line 337
undef($memory_0);
#line 337
undef($memory_1);
#line 337
undef($memory_2);
#line 337
undef($memory_3);
#line 337
undef($memory_4);
#line 337
undef($memory_5);
#line 337
return $memory_6;
#line 337
undef($memory_6);
#line 337
undef($memory_5);
#line 338
goto label_25;
#line 338
label_28:
#line 339
$memory_10 = $memory_2->{'left'};
#line 339
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 339
undef($memory_10);
#line 339
$memory_10 = wprinter::get_sep();
#line 339
$memory_11 = wprinter::build_sim($memory_3);
#line 339
$memory_8 = [$memory_9,$memory_10,$memory_11];
#line 339
undef($memory_9);
#line 339
undef($memory_10);
#line 339
undef($memory_11);
#line 339
$memory_7 = wprinter::build_pretty_op_l($memory_8);
#line 339
undef($memory_8);
#line 339
$memory_8 = wprinter::get_sep();
#line 339
$memory_10 = $memory_2->{'right'};
#line 339
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 339
undef($memory_10);
#line 339
$memory_6 = [$memory_7,$memory_8,$memory_9];
#line 339
undef($memory_7);
#line 339
undef($memory_8);
#line 339
undef($memory_9);
#line 339
$memory_5 = wprinter::build_pretty_op_l($memory_6);
#line 339
undef($memory_6);
#line 339
undef($memory_0);
#line 339
undef($memory_1);
#line 339
undef($memory_2);
#line 339
undef($memory_3);
#line 339
undef($memory_4);
#line 339
return $memory_5;
#line 339
undef($memory_5);
#line 344
goto label_25;
#line 344
label_25:
#line 344
undef($memory_4);
#line 344
undef($memory_3);
#line 344
undef($memory_2);
#line 345
goto label_1;
#line 345
label_10:
#line 345
$memory_2 = c_rt_lib::ov_as($memory_0, 'var_op');
#line 347
$memory_4 = $memory_2->{'op'};
#line 347
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_as');
#line 347
if (c_rt_lib::check_true($memory_5)) {goto label_32;}
#line 349
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_is');
#line 349
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 349
$memory_5 = "NOMATCHALERT";
#line 349
$memory_5 = [$memory_5,$memory_4];
#line 349
die(dfile::ssave($memory_5));
#line 347
label_32:
#line 348
$memory_6 = "as";
#line 348
$memory_3 = $memory_6;
#line 348
undef($memory_6);
#line 349
goto label_31;
#line 349
label_33:
#line 350
$memory_6 = "is";
#line 350
$memory_3 = $memory_6;
#line 350
undef($memory_6);
#line 351
goto label_31;
#line 351
label_31:
#line 351
undef($memory_4);
#line 351
undef($memory_5);
#line 352
$memory_7 = $memory_2->{'left'};
#line 352
$memory_6 = pretty_printer_priv::print_val($memory_7);
#line 352
undef($memory_7);
#line 352
$memory_7 = wprinter::get_sep();
#line 352
$memory_8 = wprinter::build_sim($memory_3);
#line 352
$memory_9 = wprinter::get_sep();
#line 352
$memory_11 = ":";
#line 352
$memory_10 = wprinter::build_sim($memory_11);
#line 352
undef($memory_11);
#line 352
$memory_12 = $memory_2->{'case'};
#line 352
$memory_11 = wprinter::build_sim($memory_12);
#line 352
undef($memory_12);
#line 352
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10,$memory_11];
#line 352
undef($memory_6);
#line 352
undef($memory_7);
#line 352
undef($memory_8);
#line 352
undef($memory_9);
#line 352
undef($memory_10);
#line 352
undef($memory_11);
#line 352
$memory_4 = wprinter::build_pretty_op_l($memory_5);
#line 352
undef($memory_5);
#line 352
undef($memory_0);
#line 352
undef($memory_1);
#line 352
undef($memory_2);
#line 352
undef($memory_3);
#line 352
return $memory_4;
#line 352
undef($memory_4);
#line 352
undef($memory_3);
#line 352
undef($memory_2);
#line 360
goto label_1;
#line 360
label_11:
#line 360
$memory_2 = c_rt_lib::ov_as($memory_0, 'post_dec');
#line 361
$memory_5 = pretty_printer_priv::print_val($memory_2);
#line 361
$memory_7 = "--";
#line 361
$memory_6 = wprinter::build_sim($memory_7);
#line 361
undef($memory_7);
#line 361
$memory_4 = [$memory_5,$memory_6];
#line 361
undef($memory_5);
#line 361
undef($memory_6);
#line 361
$memory_3 = wprinter::build_pretty_op_l($memory_4);
#line 361
undef($memory_4);
#line 361
undef($memory_0);
#line 361
undef($memory_1);
#line 361
undef($memory_2);
#line 361
return $memory_3;
#line 361
undef($memory_3);
#line 361
undef($memory_2);
#line 362
goto label_1;
#line 362
label_12:
#line 362
$memory_2 = c_rt_lib::ov_as($memory_0, 'post_inc');
#line 363
$memory_5 = pretty_printer_priv::print_val($memory_2);
#line 363
$memory_7 = "++";
#line 363
$memory_6 = wprinter::build_sim($memory_7);
#line 363
undef($memory_7);
#line 363
$memory_4 = [$memory_5,$memory_6];
#line 363
undef($memory_5);
#line 363
undef($memory_6);
#line 363
$memory_3 = wprinter::build_pretty_op_l($memory_4);
#line 363
undef($memory_4);
#line 363
undef($memory_0);
#line 363
undef($memory_1);
#line 363
undef($memory_2);
#line 363
return $memory_3;
#line 363
undef($memory_3);
#line 363
undef($memory_2);
#line 364
goto label_1;
#line 364
label_13:
#line 364
$memory_2 = c_rt_lib::ov_as($memory_0, 'unary_op');
#line 365
$memory_5 = $memory_2->{'op'};
#line 365
$memory_4 = wprinter::build_sim($memory_5);
#line 365
undef($memory_5);
#line 365
$memory_6 = $memory_2->{'val'};
#line 365
$memory_5 = pretty_printer_priv::print_val($memory_6);
#line 365
undef($memory_6);
#line 365
$memory_3 = wprinter::build_pretty_bind($memory_4, $memory_5);
#line 365
undef($memory_5);
#line 365
undef($memory_4);
#line 365
undef($memory_0);
#line 365
undef($memory_1);
#line 365
undef($memory_2);
#line 365
return $memory_3;
#line 365
undef($memory_3);
#line 365
undef($memory_2);
#line 366
goto label_1;
#line 366
label_14:
#line 366
$memory_2 = c_rt_lib::ov_as($memory_0, 'fun_val');
#line 367
$memory_4 = $memory_2->{'name'};
#line 367
$memory_5 = $memory_2->{'module'};
#line 367
$memory_3 = pretty_printer_priv::get_fun_label($memory_4, $memory_5);
#line 367
undef($memory_5);
#line 367
undef($memory_4);
#line 367
$memory_4 = "(";
#line 367
$memory_3 = $memory_3 . $memory_4;
#line 367
undef($memory_4);
#line 368
$memory_5 = $memory_2->{'args'};
#line 368
$memory_4 = array::len($memory_5);
#line 368
undef($memory_5);
#line 368
$memory_5 = 1;
#line 368
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 368
undef($memory_5);
#line 368
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 368
if (c_rt_lib::check_true($memory_4)) {goto label_35;}
#line 369
$memory_5 = $memory_2->{'args'};
#line 369
$memory_6 = 0;
#line 369
$memory_5 = $memory_5->[$memory_6];
#line 369
undef($memory_6);
#line 369
$memory_5 = $memory_5->{'val'};
#line 370
$memory_6 = $memory_5;
#line 370
$memory_6 = c_rt_lib::ov_is($memory_6, 'hash_decl');
#line 370
if (c_rt_lib::check_true($memory_6)) {goto label_38;}
#line 370
$memory_6 = $memory_5;
#line 370
$memory_6 = c_rt_lib::ov_is($memory_6, 'arr_decl');
#line 370
label_38:
#line 370
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 370
if (c_rt_lib::check_true($memory_6)) {goto label_37;}
#line 371
$memory_8 = ")";
#line 371
$memory_7 = pretty_printer_priv::get_compressed_fun_val($memory_5, $memory_3, $memory_8);
#line 371
undef($memory_8);
#line 371
undef($memory_0);
#line 371
undef($memory_1);
#line 371
undef($memory_2);
#line 371
undef($memory_3);
#line 371
undef($memory_4);
#line 371
undef($memory_5);
#line 371
undef($memory_6);
#line 371
return $memory_7;
#line 371
undef($memory_7);
#line 372
goto label_37;
#line 372
label_37:
#line 372
undef($memory_6);
#line 372
undef($memory_5);
#line 373
goto label_39;
#line 373
label_35:
#line 373
$memory_4 = pretty_printer_priv::is_to_change_ov($memory_0);
#line 373
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 373
if (c_rt_lib::check_true($memory_4)) {goto label_39;}
#line 374
$memory_8 = $memory_2->{'args'};
#line 374
$memory_9 = 0;
#line 374
$memory_8 = $memory_8->[$memory_9];
#line 374
undef($memory_9);
#line 374
$memory_8 = $memory_8->{'val'};
#line 374
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 374
undef($memory_8);
#line 374
$memory_8 = wprinter::get_sep();
#line 374
$memory_10 = $memory_2->{'name'};
#line 374
$memory_9 = wprinter::build_sim($memory_10);
#line 374
undef($memory_10);
#line 374
$memory_10 = wprinter::get_sep();
#line 374
$memory_12 = ":";
#line 374
$memory_13 = $memory_2->{'args'};
#line 374
$memory_14 = 1;
#line 374
$memory_13 = $memory_13->[$memory_14];
#line 374
undef($memory_14);
#line 374
$memory_13 = $memory_13->{'val'};
#line 374
$memory_13 = c_rt_lib::ov_as($memory_13, 'string');
#line 374
$memory_13 = $memory_13->{'arr'};
#line 374
$memory_14 = 0;
#line 374
$memory_13 = $memory_13->[$memory_14];
#line 374
undef($memory_14);
#line 374
$memory_12 = $memory_12 . $memory_13;
#line 374
undef($memory_13);
#line 374
$memory_11 = wprinter::build_sim($memory_12);
#line 374
undef($memory_12);
#line 374
$memory_6 = [$memory_7,$memory_8,$memory_9,$memory_10,$memory_11];
#line 374
undef($memory_7);
#line 374
undef($memory_8);
#line 374
undef($memory_9);
#line 374
undef($memory_10);
#line 374
undef($memory_11);
#line 374
$memory_5 = wprinter::build_pretty_op_l($memory_6);
#line 374
undef($memory_6);
#line 374
undef($memory_0);
#line 374
undef($memory_1);
#line 374
undef($memory_2);
#line 374
undef($memory_3);
#line 374
undef($memory_4);
#line 374
return $memory_5;
#line 374
undef($memory_5);
#line 381
goto label_39;
#line 381
label_39:
#line 381
undef($memory_4);
#line 382
$memory_5 = wprinter::build_sim($memory_3);
#line 382
$memory_4 = [$memory_5];
#line 382
undef($memory_5);
#line 383
$memory_6 = $memory_2->{'args'};
#line 383
$memory_5 = pretty_printer_priv::join_print_fun_arg($memory_6);
#line 383
undef($memory_6);
#line 383
array::append($memory_4, $memory_5);
#line 383
undef($memory_5);
#line 384
$memory_6 = ")";
#line 384
$memory_5 = wprinter::build_sim($memory_6);
#line 384
undef($memory_6);
#line 384
array::push($memory_4, $memory_5);
#line 384
undef($memory_5);
#line 385
$memory_7 = $memory_2->{'args'};
#line 385
$memory_5 = pretty_printer_priv::count_structs($memory_7);
#line 385
undef($memory_7);
#line 385
$memory_8 = $memory_2->{'args'};
#line 385
$memory_7 = array::len($memory_8);
#line 385
undef($memory_8);
#line 385
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 385
undef($memory_7);
#line 385
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 385
if (c_rt_lib::check_true($memory_6)) {goto label_43;}
#line 385
$memory_7 = $memory_2->{'args'};
#line 385
$memory_5 = array::len($memory_7);
#line 385
undef($memory_7);
#line 385
$memory_7 = 0;
#line 385
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_7);
#line 385
undef($memory_7);
#line 385
label_43:
#line 385
undef($memory_6);
#line 385
if (c_rt_lib::check_true($memory_5)) {goto label_42;}
#line 385
$memory_7 = $memory_2->{'args'};
#line 385
$memory_5 = array::len($memory_7);
#line 385
undef($memory_7);
#line 385
$memory_7 = 1;
#line 385
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 385
undef($memory_7);
#line 385
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 385
if (c_rt_lib::check_true($memory_6)) {goto label_44;}
#line 385
$memory_5 = $memory_2->{'args'};
#line 385
$memory_7 = 0;
#line 385
$memory_5 = $memory_5->[$memory_7];
#line 385
undef($memory_7);
#line 385
$memory_5 = $memory_5->{'val'};
#line 385
$memory_5 = c_rt_lib::ov_is($memory_5, 'fun_val');
#line 385
label_44:
#line 385
undef($memory_6);
#line 385
label_42:
#line 385
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 385
if (c_rt_lib::check_true($memory_5)) {goto label_41;}
#line 385
$memory_6 = wprinter::build_pretty_op_l($memory_4);
#line 385
undef($memory_0);
#line 385
undef($memory_1);
#line 385
undef($memory_2);
#line 385
undef($memory_3);
#line 385
undef($memory_4);
#line 385
undef($memory_5);
#line 385
return $memory_6;
#line 385
undef($memory_6);
#line 385
goto label_41;
#line 385
label_41:
#line 385
undef($memory_5);
#line 389
$memory_5 = wprinter::build_pretty_l($memory_4);
#line 389
undef($memory_0);
#line 389
undef($memory_1);
#line 389
undef($memory_2);
#line 389
undef($memory_3);
#line 389
undef($memory_4);
#line 389
return $memory_5;
#line 389
undef($memory_5);
#line 389
undef($memory_3);
#line 389
undef($memory_4);
#line 389
undef($memory_2);
#line 390
goto label_1;
#line 390
label_15:
#line 391
$memory_3 = 0;
#line 391
$memory_4 = "";
#line 391
$memory_4 = c_rt_lib::ov_mk_arg('sim', $memory_4);
#line 391
$memory_2 = {len => $memory_3,el => $memory_4,};
#line 391
undef($memory_3);
#line 391
undef($memory_4);
#line 391
undef($memory_0);
#line 391
undef($memory_1);
#line 391
return $memory_2;
#line 391
undef($memory_2);
#line 392
goto label_1;
#line 392
label_16:
#line 392
$memory_2 = c_rt_lib::ov_as($memory_0, 'arr_decl');
#line 393
$memory_4 = c_rt_lib::ov_mk_arg('arr_decl', $memory_2);
#line 393
$memory_5 = "";
#line 393
$memory_6 = "";
#line 393
$memory_3 = pretty_printer_priv::get_compressed_fun_val($memory_4, $memory_5, $memory_6);
#line 393
undef($memory_6);
#line 393
undef($memory_5);
#line 393
undef($memory_4);
#line 393
undef($memory_0);
#line 393
undef($memory_1);
#line 393
undef($memory_2);
#line 393
return $memory_3;
#line 393
undef($memory_3);
#line 393
undef($memory_2);
#line 394
goto label_1;
#line 394
label_17:
#line 394
$memory_2 = c_rt_lib::ov_as($memory_0, 'hash_decl');
#line 395
$memory_4 = pretty_printer_priv::join_print_hash_elem($memory_2);
#line 395
$memory_5 = "{";
#line 395
$memory_6 = "}";
#line 395
$memory_3 = wprinter::build_pretty_arr_decl($memory_4, $memory_5, $memory_6);
#line 395
undef($memory_6);
#line 395
undef($memory_5);
#line 395
undef($memory_4);
#line 395
undef($memory_0);
#line 395
undef($memory_1);
#line 395
undef($memory_2);
#line 395
return $memory_3;
#line 395
undef($memory_3);
#line 395
undef($memory_2);
#line 396
goto label_1;
#line 396
label_18:
#line 396
$memory_2 = c_rt_lib::ov_as($memory_0, 'fun_label');
#line 397
$memory_5 = $memory_2->{'name'};
#line 397
$memory_6 = $memory_2->{'module'};
#line 397
$memory_4 = pretty_printer_priv::get_fun_label($memory_5, $memory_6);
#line 397
undef($memory_6);
#line 397
undef($memory_5);
#line 397
$memory_3 = wprinter::build_sim($memory_4);
#line 397
undef($memory_4);
#line 397
undef($memory_0);
#line 397
undef($memory_1);
#line 397
undef($memory_2);
#line 397
return $memory_3;
#line 397
undef($memory_3);
#line 397
undef($memory_2);
#line 398
goto label_1;
#line 398
label_1:
#line 398
undef($memory_1);
#line 398
undef($memory_0);
#line 398
return;
}

sub pretty_printer_priv::print_cond_mod($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 403
$memory_7 = wprinter::build_sim($memory_1);
#line 403
$memory_8 = wprinter::get_sep();
#line 403
$memory_10 = pretty_printer_priv::join_print_var_decl($memory_3);
#line 403
$memory_9 = wprinter::build_pretty_l($memory_10);
#line 403
undef($memory_10);
#line 403
$memory_6 = [$memory_7,$memory_8,$memory_9];
#line 403
undef($memory_7);
#line 403
undef($memory_8);
#line 403
undef($memory_9);
#line 408
$memory_7 = array::len($memory_3);
#line 408
$memory_8 = 0;
#line 408
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 408
undef($memory_8);
#line 408
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 408
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 408
$memory_9 = " ";
#line 408
$memory_8 = wprinter::build_sim($memory_9);
#line 408
undef($memory_9);
#line 408
array::push($memory_6, $memory_8);
#line 408
undef($memory_8);
#line 408
goto label_2;
#line 408
label_2:
#line 408
undef($memory_7);
#line 409
$memory_7 = array::len($memory_3);
#line 409
$memory_8 = 0;
#line 409
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 409
undef($memory_8);
#line 409
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 409
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 409
$memory_9 = "(";
#line 409
$memory_8 = wprinter::build_sim($memory_9);
#line 409
undef($memory_9);
#line 409
array::push($memory_6, $memory_8);
#line 409
undef($memory_8);
#line 409
goto label_4;
#line 409
label_4:
#line 409
undef($memory_7);
#line 410
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 410
array::push($memory_6, $memory_7);
#line 410
undef($memory_7);
#line 411
$memory_7 = array::len($memory_3);
#line 411
$memory_8 = 0;
#line 411
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 411
undef($memory_8);
#line 411
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 411
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 411
$memory_9 = ")";
#line 411
$memory_8 = wprinter::build_sim($memory_9);
#line 411
undef($memory_9);
#line 411
array::push($memory_6, $memory_8);
#line 411
undef($memory_8);
#line 411
goto label_6;
#line 411
label_6:
#line 411
undef($memory_7);
#line 412
$memory_9 = pretty_printer_priv::print_simple_statement($memory_2);
#line 412
$memory_10 = wprinter::get_sep();
#line 412
$memory_11 = wprinter::build_pretty_op_l($memory_6);
#line 412
$memory_8 = [$memory_9,$memory_10,$memory_11];
#line 412
undef($memory_9);
#line 412
undef($memory_10);
#line 412
undef($memory_11);
#line 412
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 412
undef($memory_8);
#line 412
wprinter::print_t($memory_0, $memory_7, $memory_5);
#line 412
undef($memory_7);
#line 417
$memory_7 = ";";
#line 417
pretty_printer_priv::state_print($memory_0, $memory_7);
#line 417
undef($memory_7);
#line 417
undef($memory_6);
#line 417
undef($memory_1);
#line 417
undef($memory_2);
#line 417
undef($memory_3);
#line 417
undef($memory_4);
#line 417
undef($memory_5);
#line 417
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_loop($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 422
$memory_7 = wprinter::build_sim($memory_1);
#line 422
$memory_8 = wprinter::get_sep();
#line 422
$memory_6 = [$memory_7,$memory_8];
#line 422
undef($memory_7);
#line 422
undef($memory_8);
#line 423
$memory_7 = pretty_printer_priv::join_print_var_decl($memory_3);
#line 423
array::append($memory_6, $memory_7);
#line 423
undef($memory_7);
#line 424
$memory_7 = array::len($memory_3);
#line 424
$memory_8 = 0;
#line 424
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 424
undef($memory_8);
#line 424
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 424
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 424
$memory_9 = " ";
#line 424
$memory_8 = wprinter::build_sim($memory_9);
#line 424
undef($memory_9);
#line 424
array::push($memory_6, $memory_8);
#line 424
undef($memory_8);
#line 424
goto label_2;
#line 424
label_2:
#line 424
undef($memory_7);
#line 425
$memory_8 = "(";
#line 425
$memory_7 = wprinter::build_sim($memory_8);
#line 425
undef($memory_8);
#line 425
array::push($memory_6, $memory_7);
#line 425
undef($memory_7);
#line 426
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 427
$memory_8 = $memory_7->{'el'};
#line 427
$memory_8 = c_rt_lib::ov_is($memory_8, 'arr');
#line 427
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 427
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 428
$memory_9 = $memory_7->{'el'};
#line 428
$memory_9 = c_rt_lib::ov_as($memory_9, 'arr');
#line 428
$memory_9 = $memory_9->{'arr'};
#line 428
array::append($memory_6, $memory_9);
#line 428
undef($memory_9);
#line 429
goto label_3;
#line 429
label_4:
#line 430
array::push($memory_6, $memory_7);
#line 431
goto label_3;
#line 431
label_3:
#line 431
undef($memory_8);
#line 432
$memory_9 = ")";
#line 432
$memory_8 = wprinter::build_sim($memory_9);
#line 432
undef($memory_9);
#line 432
array::push($memory_6, $memory_8);
#line 432
undef($memory_8);
#line 433
$memory_8 = wprinter::build_pretty_l($memory_6);
#line 433
wprinter::print_t($memory_0, $memory_8, $memory_5);
#line 433
undef($memory_8);
#line 434
pretty_printer_priv::print_st($memory_0, $memory_2, $memory_5);
#line 434
undef($memory_6);
#line 434
undef($memory_7);
#line 434
undef($memory_1);
#line 434
undef($memory_2);
#line 434
undef($memory_3);
#line 434
undef($memory_4);
#line 434
undef($memory_5);
#line 434
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_loop_or_mod($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];$memory_6 = $_[6];
#line 439
$memory_7 = $memory_1;
#line 439
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 439
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 440
pretty_printer_priv::print_cond_mod($memory_0, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6);
#line 441
goto label_1;
#line 441
label_2:
#line 442
pretty_printer_priv::print_loop($memory_0, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6);
#line 443
goto label_1;
#line 443
label_1:
#line 443
undef($memory_7);
#line 443
undef($memory_1);
#line 443
undef($memory_2);
#line 443
undef($memory_3);
#line 443
undef($memory_4);
#line 443
undef($memory_5);
#line 443
undef($memory_6);
#line 443
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_try_ensure($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];
#line 447
$memory_3 = wprinter::build_sim($memory_1);
#line 447
$memory_2 = [$memory_3];
#line 447
undef($memory_3);
#line 448
$memory_3 = c_rt_lib::ov_is($memory_0, 'decl');
#line 448
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 450
$memory_3 = c_rt_lib::ov_is($memory_0, 'expr');
#line 450
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 452
$memory_3 = c_rt_lib::ov_is($memory_0, 'lval');
#line 452
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 452
$memory_3 = "NOMATCHALERT";
#line 452
$memory_3 = [$memory_3,$memory_0];
#line 452
die(dfile::ssave($memory_3));
#line 448
label_2:
#line 448
$memory_4 = c_rt_lib::ov_as($memory_0, 'decl');
#line 449
$memory_6 = wprinter::get_sep();
#line 449
$memory_7 = pretty_printer_priv::print_var_decl($memory_4);
#line 449
$memory_5 = [$memory_6,$memory_7];
#line 449
undef($memory_6);
#line 449
undef($memory_7);
#line 449
array::append($memory_2, $memory_5);
#line 449
undef($memory_5);
#line 449
undef($memory_4);
#line 450
goto label_1;
#line 450
label_3:
#line 450
$memory_4 = c_rt_lib::ov_as($memory_0, 'expr');
#line 451
$memory_6 = wprinter::get_sep();
#line 451
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 451
$memory_5 = [$memory_6,$memory_7];
#line 451
undef($memory_6);
#line 451
undef($memory_7);
#line 451
array::append($memory_2, $memory_5);
#line 451
undef($memory_5);
#line 451
undef($memory_4);
#line 452
goto label_1;
#line 452
label_4:
#line 452
$memory_4 = c_rt_lib::ov_as($memory_0, 'lval');
#line 453
$memory_6 = wprinter::get_sep();
#line 453
$memory_8 = $memory_4->{'left'};
#line 453
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 453
undef($memory_8);
#line 453
$memory_8 = wprinter::get_sep();
#line 453
$memory_10 = $memory_4->{'op'};
#line 453
$memory_9 = wprinter::build_sim($memory_10);
#line 453
undef($memory_10);
#line 453
$memory_10 = wprinter::get_sep();
#line 453
$memory_12 = $memory_4->{'right'};
#line 453
$memory_11 = pretty_printer_priv::print_val($memory_12);
#line 453
undef($memory_12);
#line 453
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10,$memory_11];
#line 453
undef($memory_6);
#line 453
undef($memory_7);
#line 453
undef($memory_8);
#line 453
undef($memory_9);
#line 453
undef($memory_10);
#line 453
undef($memory_11);
#line 453
array::append($memory_2, $memory_5);
#line 453
undef($memory_5);
#line 453
undef($memory_4);
#line 461
goto label_1;
#line 461
label_1:
#line 461
undef($memory_3);
#line 462
$memory_3 = wprinter::build_pretty_l($memory_2);
#line 462
undef($memory_0);
#line 462
undef($memory_1);
#line 462
undef($memory_2);
#line 462
return $memory_3;
#line 462
undef($memory_3);
#line 462
undef($memory_2);
#line 462
undef($memory_0);
#line 462
undef($memory_1);
#line 462
return;
}

sub pretty_printer_priv::print_return($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 466
$memory_3 = "return";
#line 466
$memory_2 = wprinter::build_sim($memory_3);
#line 466
undef($memory_3);
#line 466
$memory_1 = [$memory_2];
#line 466
undef($memory_2);
#line 467
$memory_2 = $memory_0;
#line 467
$memory_2 = c_rt_lib::ov_is($memory_2, 'nop');
#line 467
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 467
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 467
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 468
$memory_4 = wprinter::get_sep();
#line 468
$memory_5 = pretty_printer_priv::print_val($memory_0);
#line 468
$memory_3 = [$memory_4,$memory_5];
#line 468
undef($memory_4);
#line 468
undef($memory_5);
#line 468
array::append($memory_1, $memory_3);
#line 468
undef($memory_3);
#line 469
goto label_2;
#line 469
label_2:
#line 469
undef($memory_2);
#line 470
$memory_2 = wprinter::build_pretty_l($memory_1);
#line 470
undef($memory_0);
#line 470
undef($memory_1);
#line 470
return $memory_2;
#line 470
undef($memory_2);
#line 470
undef($memory_1);
#line 470
undef($memory_0);
#line 470
return;
}

sub pretty_printer_priv::print_sim_value($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 474
$memory_1 = pretty_printer_priv::print_val($memory_0);
#line 475
$memory_2 = $memory_1->{'el'};
#line 475
$memory_2 = c_rt_lib::ov_is($memory_2, 'arr');
#line 475
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 475
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 476
$memory_4 = $memory_1->{'el'};
#line 476
$memory_4 = c_rt_lib::ov_as($memory_4, 'arr');
#line 476
$memory_4 = $memory_4->{'arr'};
#line 476
$memory_3 = wprinter::build_pretty_l($memory_4);
#line 476
undef($memory_4);
#line 476
$memory_1 = $memory_3;
#line 476
undef($memory_3);
#line 477
goto label_2;
#line 477
label_2:
#line 477
undef($memory_2);
#line 478
undef($memory_0);
#line 478
return $memory_1;
#line 478
undef($memory_1);
#line 478
undef($memory_0);
#line 478
return;
}

sub pretty_printer_priv::__print_break() {
my $memory_0;my $memory_1;
#line 482
$memory_1 = "break";
#line 482
$memory_0 = wprinter::build_sim($memory_1);
#line 482
undef($memory_1);
#line 482
return $memory_0;
#line 482
undef($memory_0);
#line 482
return;
}

my $_print_break;
sub pretty_printer_priv::print_break() {
	$_print_break = pretty_printer_priv::__print_break() unless defined $_print_break;
	return $_print_break;
}

sub pretty_printer_priv::__print_continue() {
my $memory_0;my $memory_1;
#line 486
$memory_1 = "continue";
#line 486
$memory_0 = wprinter::build_sim($memory_1);
#line 486
undef($memory_1);
#line 486
return $memory_0;
#line 486
undef($memory_0);
#line 486
return;
}

my $_print_continue;
sub pretty_printer_priv::print_continue() {
	$_print_continue = pretty_printer_priv::__print_continue() unless defined $_print_continue;
	return $_print_continue;
}

sub pretty_printer_priv::print_die($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 490
$memory_3 = "die";
#line 490
$memory_2 = wprinter::build_sim($memory_3);
#line 490
undef($memory_3);
#line 490
$memory_1 = [$memory_2];
#line 490
undef($memory_2);
#line 491
$memory_2 = array::len($memory_0);
#line 491
$memory_3 = 0;
#line 491
$memory_2 = c_rt_lib::to_nl($memory_2 > $memory_3);
#line 491
undef($memory_3);
#line 491
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 491
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 491
$memory_5 = "(";
#line 491
$memory_4 = wprinter::build_sim($memory_5);
#line 491
undef($memory_5);
#line 491
$memory_6 = pretty_printer_priv::join_print_val($memory_0);
#line 491
$memory_5 = wprinter::build_pretty_l($memory_6);
#line 491
undef($memory_6);
#line 491
$memory_7 = ")";
#line 491
$memory_6 = wprinter::build_sim($memory_7);
#line 491
undef($memory_7);
#line 491
$memory_3 = [$memory_4,$memory_5,$memory_6];
#line 491
undef($memory_4);
#line 491
undef($memory_5);
#line 491
undef($memory_6);
#line 491
array::append($memory_1, $memory_3);
#line 491
undef($memory_3);
#line 491
goto label_2;
#line 491
label_2:
#line 491
undef($memory_2);
#line 497
$memory_2 = wprinter::build_pretty_a($memory_1);
#line 497
undef($memory_0);
#line 497
undef($memory_1);
#line 497
return $memory_2;
#line 497
undef($memory_2);
#line 497
undef($memory_1);
#line 497
undef($memory_0);
#line 497
return;
}

sub pretty_printer_priv::print_simple_statement($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 501
$memory_1 = $memory_0->{'cmd'};
#line 501
$memory_1 = c_rt_lib::ov_is($memory_1, 'value');
#line 501
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 501
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 502
$memory_3 = $memory_0->{'cmd'};
#line 502
$memory_3 = c_rt_lib::ov_as($memory_3, 'value');
#line 502
$memory_2 = pretty_printer_priv::print_sim_value($memory_3);
#line 502
undef($memory_3);
#line 502
undef($memory_0);
#line 502
undef($memory_1);
#line 502
return $memory_2;
#line 502
undef($memory_2);
#line 503
goto label_1;
#line 503
label_2:
#line 503
$memory_1 = $memory_0->{'cmd'};
#line 503
$memory_1 = c_rt_lib::ov_is($memory_1, 'return');
#line 503
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 503
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 504
$memory_3 = $memory_0->{'cmd'};
#line 504
$memory_3 = c_rt_lib::ov_as($memory_3, 'return');
#line 504
$memory_2 = pretty_printer_priv::print_return($memory_3);
#line 504
undef($memory_3);
#line 504
undef($memory_0);
#line 504
undef($memory_1);
#line 504
return $memory_2;
#line 504
undef($memory_2);
#line 505
goto label_1;
#line 505
label_3:
#line 505
$memory_1 = $memory_0->{'cmd'};
#line 505
$memory_1 = c_rt_lib::ov_is($memory_1, 'break');
#line 505
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 505
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 506
$memory_2 = pretty_printer_priv::print_break();
#line 506
undef($memory_0);
#line 506
undef($memory_1);
#line 506
return $memory_2;
#line 506
undef($memory_2);
#line 507
goto label_1;
#line 507
label_4:
#line 507
$memory_1 = $memory_0->{'cmd'};
#line 507
$memory_1 = c_rt_lib::ov_is($memory_1, 'continue');
#line 507
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 507
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 508
$memory_2 = pretty_printer_priv::print_continue();
#line 508
undef($memory_0);
#line 508
undef($memory_1);
#line 508
return $memory_2;
#line 508
undef($memory_2);
#line 509
goto label_1;
#line 509
label_5:
#line 509
$memory_1 = $memory_0->{'cmd'};
#line 509
$memory_1 = c_rt_lib::ov_is($memory_1, 'die');
#line 509
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 509
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 510
$memory_3 = $memory_0->{'cmd'};
#line 510
$memory_3 = c_rt_lib::ov_as($memory_3, 'die');
#line 510
$memory_2 = pretty_printer_priv::print_die($memory_3);
#line 510
undef($memory_3);
#line 510
undef($memory_0);
#line 510
undef($memory_1);
#line 510
return $memory_2;
#line 510
undef($memory_2);
#line 511
goto label_1;
#line 511
label_6:
#line 511
$memory_1 = $memory_0->{'cmd'};
#line 511
$memory_1 = c_rt_lib::ov_is($memory_1, 'try');
#line 511
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 511
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 512
$memory_3 = $memory_0->{'cmd'};
#line 512
$memory_3 = c_rt_lib::ov_as($memory_3, 'try');
#line 512
$memory_4 = "try";
#line 512
$memory_2 = pretty_printer_priv::print_try_ensure($memory_3, $memory_4);
#line 512
undef($memory_4);
#line 512
undef($memory_3);
#line 512
undef($memory_0);
#line 512
undef($memory_1);
#line 512
return $memory_2;
#line 512
undef($memory_2);
#line 513
goto label_1;
#line 513
label_7:
#line 513
$memory_1 = $memory_0->{'cmd'};
#line 513
$memory_1 = c_rt_lib::ov_is($memory_1, 'ensure');
#line 513
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 513
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 514
$memory_3 = $memory_0->{'cmd'};
#line 514
$memory_3 = c_rt_lib::ov_as($memory_3, 'ensure');
#line 514
$memory_4 = "ensure";
#line 514
$memory_2 = pretty_printer_priv::print_try_ensure($memory_3, $memory_4);
#line 514
undef($memory_4);
#line 514
undef($memory_3);
#line 514
undef($memory_0);
#line 514
undef($memory_1);
#line 514
return $memory_2;
#line 514
undef($memory_2);
#line 515
goto label_1;
#line 515
label_8:
#line 516
$memory_2 = [$memory_0];
#line 516
die(dfile::ssave($memory_2));
#line 516
undef($memory_2);
#line 517
goto label_1;
#line 517
label_1:
#line 517
undef($memory_1);
#line 517
undef($memory_0);
#line 517
return;
}

sub pretty_printer_priv::flush_sim_statement($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 521
wprinter::print_t($memory_0, $memory_1, $memory_2);
#line 522
$memory_3 = ";";
#line 522
pretty_printer_priv::state_print($memory_0, $memory_3);
#line 522
undef($memory_3);
#line 522
undef($memory_1);
#line 522
undef($memory_2);
#line 522
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_cmd($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 526
$memory_3 = $memory_1->{'cmd'};
#line 526
$memory_4 = c_rt_lib::ov_is($memory_3, 'if');
#line 526
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 536
$memory_4 = c_rt_lib::ov_is($memory_3, 'while');
#line 536
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 538
$memory_4 = c_rt_lib::ov_is($memory_3, 'for');
#line 538
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 557
$memory_4 = c_rt_lib::ov_is($memory_3, 'block');
#line 557
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 564
$memory_4 = c_rt_lib::ov_is($memory_3, 'nop');
#line 564
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 566
$memory_4 = c_rt_lib::ov_is($memory_3, 'match');
#line 566
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 577
$memory_4 = c_rt_lib::ov_is($memory_3, 'fora');
#line 577
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 579
$memory_4 = c_rt_lib::ov_is($memory_3, 'forh');
#line 579
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 582
$memory_4 = c_rt_lib::ov_is($memory_3, 'rep');
#line 582
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 584
$memory_4 = c_rt_lib::ov_is($memory_3, 'loop');
#line 584
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 587
$memory_4 = c_rt_lib::ov_is($memory_3, 'if_mod');
#line 587
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 589
$memory_4 = c_rt_lib::ov_is($memory_3, 'unless_mod');
#line 589
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 591
$memory_4 = c_rt_lib::ov_is($memory_3, 'value');
#line 591
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 593
$memory_4 = c_rt_lib::ov_is($memory_3, 'try');
#line 593
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 595
$memory_4 = c_rt_lib::ov_is($memory_3, 'ensure');
#line 595
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 597
$memory_4 = c_rt_lib::ov_is($memory_3, 'return');
#line 597
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 599
$memory_4 = c_rt_lib::ov_is($memory_3, 'break');
#line 599
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 601
$memory_4 = c_rt_lib::ov_is($memory_3, 'continue');
#line 601
if (c_rt_lib::check_true($memory_4)) {goto label_19;}
#line 603
$memory_4 = c_rt_lib::ov_is($memory_3, 'die');
#line 603
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 605
$memory_4 = c_rt_lib::ov_is($memory_3, 'var_decl');
#line 605
if (c_rt_lib::check_true($memory_4)) {goto label_21;}
#line 605
$memory_4 = "NOMATCHALERT";
#line 605
$memory_4 = [$memory_4,$memory_3];
#line 605
die(dfile::ssave($memory_4));
#line 526
label_2:
#line 526
$memory_5 = c_rt_lib::ov_as($memory_3, 'if');
#line 527
$memory_6 = "if";
#line 527
$memory_7 = $memory_5->{'if'};
#line 527
$memory_8 = [];
#line 527
$memory_9 = $memory_5->{'cond'};
#line 527
pretty_printer_priv::print_loop($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 527
undef($memory_9);
#line 527
undef($memory_8);
#line 527
undef($memory_7);
#line 527
undef($memory_6);
#line 528
$memory_6 = $memory_5->{'elsif'};
#line 528
$memory_8 = 0;
#line 528
$memory_9 = 1;
#line 528
$memory_10 = c_rt_lib::array_len($memory_6);
#line 528
label_24:
#line 528
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 528
if (c_rt_lib::check_true($memory_11)) {goto label_22;}
#line 528
$memory_7 = $memory_6->[$memory_8];
#line 529
$memory_12 = " ";
#line 529
pretty_printer_priv::state_print($memory_0, $memory_12);
#line 529
undef($memory_12);
#line 530
$memory_12 = "elsif";
#line 530
$memory_13 = $memory_7->{'cmd'};
#line 530
$memory_14 = [];
#line 530
$memory_15 = $memory_7->{'cond'};
#line 530
pretty_printer_priv::print_loop($memory_0, $memory_12, $memory_13, $memory_14, $memory_15, $memory_2);
#line 530
undef($memory_15);
#line 530
undef($memory_14);
#line 530
undef($memory_13);
#line 530
undef($memory_12);
#line 531
$memory_8 = $memory_8 + $memory_9;
#line 531
goto label_24;
#line 531
label_22:
#line 531
undef($memory_6);
#line 531
undef($memory_7);
#line 531
undef($memory_8);
#line 531
undef($memory_9);
#line 531
undef($memory_10);
#line 531
undef($memory_11);
#line 532
$memory_6 = $memory_5->{'else'};
#line 532
$memory_6 = $memory_6->{'cmd'};
#line 532
$memory_6 = c_rt_lib::ov_is($memory_6, 'nop');
#line 532
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 532
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 532
if (c_rt_lib::check_true($memory_6)) {goto label_26;}
#line 533
$memory_7 = " else";
#line 533
pretty_printer_priv::state_print($memory_0, $memory_7);
#line 533
undef($memory_7);
#line 534
$memory_7 = $memory_5->{'else'};
#line 534
pretty_printer_priv::print_st($memory_0, $memory_7, $memory_2);
#line 534
undef($memory_7);
#line 535
goto label_26;
#line 535
label_26:
#line 535
undef($memory_6);
#line 535
undef($memory_5);
#line 536
goto label_1;
#line 536
label_3:
#line 536
$memory_5 = c_rt_lib::ov_as($memory_3, 'while');
#line 537
$memory_6 = $memory_5->{'short'};
#line 537
$memory_7 = "while";
#line 537
$memory_8 = $memory_5->{'cmd'};
#line 537
$memory_9 = [];
#line 537
$memory_10 = $memory_5->{'cond'};
#line 537
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 537
undef($memory_10);
#line 537
undef($memory_9);
#line 537
undef($memory_8);
#line 537
undef($memory_7);
#line 537
undef($memory_6);
#line 537
undef($memory_5);
#line 538
goto label_1;
#line 538
label_4:
#line 538
$memory_5 = c_rt_lib::ov_as($memory_3, 'for');
#line 540
$memory_7 = $memory_5->{'start'};
#line 540
$memory_8 = c_rt_lib::ov_is($memory_7, 'value');
#line 540
if (c_rt_lib::check_true($memory_8)) {goto label_28;}
#line 542
$memory_8 = c_rt_lib::ov_is($memory_7, 'var_decl');
#line 542
if (c_rt_lib::check_true($memory_8)) {goto label_29;}
#line 542
$memory_8 = "NOMATCHALERT";
#line 542
$memory_8 = [$memory_8,$memory_7];
#line 542
die(dfile::ssave($memory_8));
#line 540
label_28:
#line 540
$memory_9 = c_rt_lib::ov_as($memory_7, 'value');
#line 541
$memory_10 = pretty_printer_priv::print_val($memory_9);
#line 541
$memory_6 = $memory_10;
#line 541
undef($memory_10);
#line 541
undef($memory_9);
#line 542
goto label_27;
#line 542
label_29:
#line 542
$memory_9 = c_rt_lib::ov_as($memory_7, 'var_decl');
#line 543
$memory_10 = pretty_printer_priv::print_var_decl($memory_9);
#line 543
$memory_6 = $memory_10;
#line 543
undef($memory_10);
#line 543
undef($memory_9);
#line 544
goto label_27;
#line 544
label_27:
#line 544
undef($memory_7);
#line 544
undef($memory_8);
#line 545
$memory_10 = "for(";
#line 545
$memory_9 = wprinter::build_sim($memory_10);
#line 545
undef($memory_10);
#line 545
$memory_11 = ";";
#line 545
$memory_10 = wprinter::build_sim($memory_11);
#line 545
undef($memory_11);
#line 545
$memory_11 = wprinter::get_sep();
#line 545
$memory_13 = $memory_5->{'cond'};
#line 545
$memory_12 = pretty_printer_priv::print_val($memory_13);
#line 545
undef($memory_13);
#line 545
$memory_14 = ";";
#line 545
$memory_13 = wprinter::build_sim($memory_14);
#line 545
undef($memory_14);
#line 545
$memory_14 = wprinter::get_sep();
#line 545
$memory_16 = $memory_5->{'iter'};
#line 545
$memory_15 = pretty_printer_priv::print_val($memory_16);
#line 545
undef($memory_16);
#line 545
$memory_17 = ") ";
#line 545
$memory_16 = wprinter::build_sim($memory_17);
#line 545
undef($memory_17);
#line 545
$memory_8 = [$memory_9,$memory_6,$memory_10,$memory_11,$memory_12,$memory_13,$memory_14,$memory_15,$memory_16];
#line 545
undef($memory_9);
#line 545
undef($memory_10);
#line 545
undef($memory_11);
#line 545
undef($memory_12);
#line 545
undef($memory_13);
#line 545
undef($memory_14);
#line 545
undef($memory_15);
#line 545
undef($memory_16);
#line 545
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 545
undef($memory_8);
#line 545
wprinter::print_t($memory_0, $memory_7, $memory_2);
#line 545
undef($memory_7);
#line 556
$memory_7 = $memory_5->{'cmd'};
#line 556
pretty_printer_priv::print_cmd($memory_0, $memory_7, $memory_2);
#line 556
undef($memory_7);
#line 556
undef($memory_6);
#line 556
undef($memory_5);
#line 557
goto label_1;
#line 557
label_5:
#line 557
$memory_5 = c_rt_lib::ov_as($memory_3, 'block');
#line 558
$memory_6 = "{";
#line 558
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 558
undef($memory_6);
#line 559
$memory_7 = 0;
#line 559
$memory_8 = 1;
#line 559
$memory_9 = c_rt_lib::array_len($memory_5);
#line 559
label_32:
#line 559
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 559
if (c_rt_lib::check_true($memory_10)) {goto label_30;}
#line 559
$memory_6 = $memory_5->[$memory_7];
#line 560
$memory_11 = string::lf();
#line 560
$memory_13 = 1;
#line 560
$memory_13 = $memory_2 + $memory_13;
#line 560
$memory_12 = pretty_printer_priv::pind($memory_13);
#line 560
undef($memory_13);
#line 560
$memory_11 = $memory_11 . $memory_12;
#line 560
undef($memory_12);
#line 560
pretty_printer_priv::state_print($memory_0, $memory_11);
#line 560
undef($memory_11);
#line 561
$memory_11 = 1;
#line 561
$memory_11 = $memory_2 + $memory_11;
#line 561
pretty_printer_priv::print_cmd($memory_0, $memory_6, $memory_11);
#line 561
undef($memory_11);
#line 562
$memory_7 = $memory_7 + $memory_8;
#line 562
goto label_32;
#line 562
label_30:
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
#line 563
$memory_6 = string::lf();
#line 563
$memory_7 = pretty_printer_priv::pind($memory_2);
#line 563
$memory_6 = $memory_6 . $memory_7;
#line 563
undef($memory_7);
#line 563
$memory_7 = "}";
#line 563
$memory_6 = $memory_6 . $memory_7;
#line 563
undef($memory_7);
#line 563
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 563
undef($memory_6);
#line 563
undef($memory_5);
#line 564
goto label_1;
#line 564
label_6:
#line 565
$memory_5 = ";";
#line 565
pretty_printer_priv::state_print($memory_0, $memory_5);
#line 565
undef($memory_5);
#line 566
goto label_1;
#line 566
label_7:
#line 566
$memory_5 = c_rt_lib::ov_as($memory_3, 'match');
#line 567
$memory_9 = "match (";
#line 567
$memory_8 = wprinter::build_sim($memory_9);
#line 567
undef($memory_9);
#line 567
$memory_10 = $memory_5->{'val'};
#line 567
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 567
undef($memory_10);
#line 567
$memory_11 = ")";
#line 567
$memory_10 = wprinter::build_sim($memory_11);
#line 567
undef($memory_11);
#line 567
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 567
undef($memory_8);
#line 567
undef($memory_9);
#line 567
undef($memory_10);
#line 567
$memory_6 = wprinter::build_pretty_a($memory_7);
#line 567
undef($memory_7);
#line 567
wprinter::print_t($memory_0, $memory_6, $memory_2);
#line 567
undef($memory_6);
#line 572
$memory_6 = $memory_5->{'branch_list'};
#line 572
$memory_8 = 0;
#line 572
$memory_9 = 1;
#line 572
$memory_10 = c_rt_lib::array_len($memory_6);
#line 572
label_35:
#line 572
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 572
if (c_rt_lib::check_true($memory_11)) {goto label_33;}
#line 572
$memory_7 = $memory_6->[$memory_8];
#line 573
$memory_12 = " case ";
#line 573
pretty_printer_priv::state_print($memory_0, $memory_12);
#line 573
undef($memory_12);
#line 574
$memory_13 = $memory_7->{'variant'};
#line 574
$memory_12 = pretty_printer_priv::print_variant_case_decl($memory_13);
#line 574
undef($memory_13);
#line 574
$memory_13 = 1;
#line 574
$memory_13 = $memory_2 + $memory_13;
#line 574
wprinter::print_t($memory_0, $memory_12, $memory_13);
#line 574
undef($memory_13);
#line 574
undef($memory_12);
#line 575
$memory_12 = $memory_7->{'cmd'};
#line 575
pretty_printer_priv::print_st($memory_0, $memory_12, $memory_2);
#line 575
undef($memory_12);
#line 576
$memory_8 = $memory_8 + $memory_9;
#line 576
goto label_35;
#line 576
label_33:
#line 576
undef($memory_6);
#line 576
undef($memory_7);
#line 576
undef($memory_8);
#line 576
undef($memory_9);
#line 576
undef($memory_10);
#line 576
undef($memory_11);
#line 576
undef($memory_5);
#line 577
goto label_1;
#line 577
label_8:
#line 577
$memory_5 = c_rt_lib::ov_as($memory_3, 'fora');
#line 578
$memory_6 = $memory_5->{'short'};
#line 578
$memory_7 = "fora";
#line 578
$memory_8 = $memory_5->{'cmd'};
#line 578
$memory_10 = $memory_5->{'iter'};
#line 578
$memory_9 = [$memory_10];
#line 578
undef($memory_10);
#line 578
$memory_10 = $memory_5->{'array'};
#line 578
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 578
undef($memory_10);
#line 578
undef($memory_9);
#line 578
undef($memory_8);
#line 578
undef($memory_7);
#line 578
undef($memory_6);
#line 578
undef($memory_5);
#line 579
goto label_1;
#line 579
label_9:
#line 579
$memory_5 = c_rt_lib::ov_as($memory_3, 'forh');
#line 580
$memory_6 = $memory_5->{'short'};
#line 580
$memory_7 = "forh";
#line 580
$memory_8 = $memory_5->{'cmd'};
#line 580
$memory_10 = $memory_5->{'key'};
#line 580
$memory_11 = $memory_5->{'val'};
#line 580
$memory_9 = [$memory_10,$memory_11];
#line 580
undef($memory_10);
#line 580
undef($memory_11);
#line 580
$memory_10 = $memory_5->{'hash'};
#line 580
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 580
undef($memory_10);
#line 580
undef($memory_9);
#line 580
undef($memory_8);
#line 580
undef($memory_7);
#line 580
undef($memory_6);
#line 580
undef($memory_5);
#line 582
goto label_1;
#line 582
label_10:
#line 582
$memory_5 = c_rt_lib::ov_as($memory_3, 'rep');
#line 583
$memory_6 = $memory_5->{'short'};
#line 583
$memory_7 = "rep";
#line 583
$memory_8 = $memory_5->{'cmd'};
#line 583
$memory_10 = $memory_5->{'iter'};
#line 583
$memory_9 = [$memory_10];
#line 583
undef($memory_10);
#line 583
$memory_10 = $memory_5->{'count'};
#line 583
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 583
undef($memory_10);
#line 583
undef($memory_9);
#line 583
undef($memory_8);
#line 583
undef($memory_7);
#line 583
undef($memory_6);
#line 583
undef($memory_5);
#line 584
goto label_1;
#line 584
label_11:
#line 584
$memory_5 = c_rt_lib::ov_as($memory_3, 'loop');
#line 585
$memory_6 = "loop";
#line 585
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 585
undef($memory_6);
#line 586
pretty_printer_priv::print_st($memory_0, $memory_5, $memory_2);
#line 586
undef($memory_5);
#line 587
goto label_1;
#line 587
label_12:
#line 587
$memory_5 = c_rt_lib::ov_as($memory_3, 'if_mod');
#line 588
$memory_6 = "if";
#line 588
$memory_7 = $memory_5->{'cmd'};
#line 588
$memory_8 = [];
#line 588
$memory_9 = $memory_5->{'cond'};
#line 588
pretty_printer_priv::print_cond_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 588
undef($memory_9);
#line 588
undef($memory_8);
#line 588
undef($memory_7);
#line 588
undef($memory_6);
#line 588
undef($memory_5);
#line 589
goto label_1;
#line 589
label_13:
#line 589
$memory_5 = c_rt_lib::ov_as($memory_3, 'unless_mod');
#line 590
$memory_6 = "unless";
#line 590
$memory_7 = $memory_5->{'cmd'};
#line 590
$memory_8 = [];
#line 590
$memory_9 = $memory_5->{'cond'};
#line 590
pretty_printer_priv::print_cond_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 590
undef($memory_9);
#line 590
undef($memory_8);
#line 590
undef($memory_7);
#line 590
undef($memory_6);
#line 590
undef($memory_5);
#line 591
goto label_1;
#line 591
label_14:
#line 591
$memory_5 = c_rt_lib::ov_as($memory_3, 'value');
#line 592
$memory_6 = pretty_printer_priv::print_sim_value($memory_5);
#line 592
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 592
undef($memory_6);
#line 592
undef($memory_5);
#line 593
goto label_1;
#line 593
label_15:
#line 593
$memory_5 = c_rt_lib::ov_as($memory_3, 'try');
#line 594
$memory_7 = "try";
#line 594
$memory_6 = pretty_printer_priv::print_try_ensure($memory_5, $memory_7);
#line 594
undef($memory_7);
#line 594
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 594
undef($memory_6);
#line 594
undef($memory_5);
#line 595
goto label_1;
#line 595
label_16:
#line 595
$memory_5 = c_rt_lib::ov_as($memory_3, 'ensure');
#line 596
$memory_7 = "ensure";
#line 596
$memory_6 = pretty_printer_priv::print_try_ensure($memory_5, $memory_7);
#line 596
undef($memory_7);
#line 596
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 596
undef($memory_6);
#line 596
undef($memory_5);
#line 597
goto label_1;
#line 597
label_17:
#line 597
$memory_5 = c_rt_lib::ov_as($memory_3, 'return');
#line 598
$memory_6 = pretty_printer_priv::print_return($memory_5);
#line 598
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 598
undef($memory_6);
#line 598
undef($memory_5);
#line 599
goto label_1;
#line 599
label_18:
#line 600
$memory_5 = pretty_printer_priv::print_break();
#line 600
pretty_printer_priv::flush_sim_statement($memory_0, $memory_5, $memory_2);
#line 600
undef($memory_5);
#line 601
goto label_1;
#line 601
label_19:
#line 602
$memory_5 = pretty_printer_priv::print_continue();
#line 602
pretty_printer_priv::flush_sim_statement($memory_0, $memory_5, $memory_2);
#line 602
undef($memory_5);
#line 603
goto label_1;
#line 603
label_20:
#line 603
$memory_5 = c_rt_lib::ov_as($memory_3, 'die');
#line 604
$memory_6 = pretty_printer_priv::print_die($memory_5);
#line 604
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 604
undef($memory_6);
#line 604
undef($memory_5);
#line 605
goto label_1;
#line 605
label_21:
#line 605
$memory_5 = c_rt_lib::ov_as($memory_3, 'var_decl');
#line 606
$memory_6 = pretty_printer_priv::print_var_decl($memory_5);
#line 606
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 606
undef($memory_6);
#line 606
undef($memory_5);
#line 607
goto label_1;
#line 607
label_1:
#line 607
undef($memory_3);
#line 607
undef($memory_4);
#line 607
undef($memory_1);
#line 607
undef($memory_2);
#line 607
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
