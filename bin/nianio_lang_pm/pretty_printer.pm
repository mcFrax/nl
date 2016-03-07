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
#line 339
$memory_1 = c_rt_lib::ov_is($memory_0, 'var_op');
#line 339
if (c_rt_lib::check_true($memory_1)) {goto label_10;}
#line 354
$memory_1 = c_rt_lib::ov_is($memory_0, 'post_dec');
#line 354
if (c_rt_lib::check_true($memory_1)) {goto label_11;}
#line 356
$memory_1 = c_rt_lib::ov_is($memory_0, 'post_inc');
#line 356
if (c_rt_lib::check_true($memory_1)) {goto label_12;}
#line 358
$memory_1 = c_rt_lib::ov_is($memory_0, 'unary_op');
#line 358
if (c_rt_lib::check_true($memory_1)) {goto label_13;}
#line 360
$memory_1 = c_rt_lib::ov_is($memory_0, 'fun_val');
#line 360
if (c_rt_lib::check_true($memory_1)) {goto label_14;}
#line 384
$memory_1 = c_rt_lib::ov_is($memory_0, 'nop');
#line 384
if (c_rt_lib::check_true($memory_1)) {goto label_15;}
#line 386
$memory_1 = c_rt_lib::ov_is($memory_0, 'arr_decl');
#line 386
if (c_rt_lib::check_true($memory_1)) {goto label_16;}
#line 388
$memory_1 = c_rt_lib::ov_is($memory_0, 'hash_decl');
#line 388
if (c_rt_lib::check_true($memory_1)) {goto label_17;}
#line 390
$memory_1 = c_rt_lib::ov_is($memory_0, 'fun_label');
#line 390
if (c_rt_lib::check_true($memory_1)) {goto label_18;}
#line 390
$memory_1 = "NOMATCHALERT";
#line 390
$memory_1 = [$memory_1,$memory_0];
#line 390
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
$memory_4 = "->";
#line 320
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 320
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 320
if (c_rt_lib::check_true($memory_4)) {goto label_27;}
#line 322
$memory_7 = $memory_2->{'left'};
#line 322
$memory_6 = pretty_printer_priv::is_to_change_ov($memory_7);
#line 322
undef($memory_7);
#line 322
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 322
if (c_rt_lib::check_true($memory_6)) {goto label_29;}
#line 323
$memory_10 = "(";
#line 323
$memory_9 = wprinter::build_sim($memory_10);
#line 323
undef($memory_10);
#line 323
$memory_11 = $memory_2->{'left'};
#line 323
$memory_10 = pretty_printer_priv::print_val($memory_11);
#line 323
undef($memory_11);
#line 323
$memory_12 = ")";
#line 323
$memory_11 = wprinter::build_sim($memory_12);
#line 323
undef($memory_12);
#line 323
$memory_8 = [$memory_9,$memory_10,$memory_11];
#line 323
undef($memory_9);
#line 323
undef($memory_10);
#line 323
undef($memory_11);
#line 323
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 323
undef($memory_8);
#line 323
$memory_5 = $memory_7;
#line 323
undef($memory_7);
#line 328
goto label_28;
#line 328
label_29:
#line 329
$memory_8 = $memory_2->{'left'};
#line 329
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 329
undef($memory_8);
#line 329
$memory_5 = $memory_7;
#line 329
undef($memory_7);
#line 330
goto label_28;
#line 330
label_28:
#line 330
undef($memory_6);
#line 331
$memory_8 = wprinter::build_sim($memory_3);
#line 331
$memory_10 = $memory_2->{'right'};
#line 331
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 331
undef($memory_10);
#line 331
$memory_7 = [$memory_5,$memory_8,$memory_9];
#line 331
undef($memory_8);
#line 331
undef($memory_9);
#line 331
$memory_6 = wprinter::build_pretty_op_l($memory_7);
#line 331
undef($memory_7);
#line 331
undef($memory_0);
#line 331
undef($memory_1);
#line 331
undef($memory_2);
#line 331
undef($memory_3);
#line 331
undef($memory_4);
#line 331
undef($memory_5);
#line 331
return $memory_6;
#line 331
undef($memory_6);
#line 331
undef($memory_5);
#line 332
goto label_25;
#line 332
label_27:
#line 333
$memory_10 = $memory_2->{'left'};
#line 333
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 333
undef($memory_10);
#line 333
$memory_10 = wprinter::get_sep();
#line 333
$memory_11 = wprinter::build_sim($memory_3);
#line 333
$memory_8 = [$memory_9,$memory_10,$memory_11];
#line 333
undef($memory_9);
#line 333
undef($memory_10);
#line 333
undef($memory_11);
#line 333
$memory_7 = wprinter::build_pretty_op_l($memory_8);
#line 333
undef($memory_8);
#line 333
$memory_8 = wprinter::get_sep();
#line 333
$memory_10 = $memory_2->{'right'};
#line 333
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 333
undef($memory_10);
#line 333
$memory_6 = [$memory_7,$memory_8,$memory_9];
#line 333
undef($memory_7);
#line 333
undef($memory_8);
#line 333
undef($memory_9);
#line 333
$memory_5 = wprinter::build_pretty_op_l($memory_6);
#line 333
undef($memory_6);
#line 333
undef($memory_0);
#line 333
undef($memory_1);
#line 333
undef($memory_2);
#line 333
undef($memory_3);
#line 333
undef($memory_4);
#line 333
return $memory_5;
#line 333
undef($memory_5);
#line 338
goto label_25;
#line 338
label_25:
#line 338
undef($memory_4);
#line 338
undef($memory_3);
#line 338
undef($memory_2);
#line 339
goto label_1;
#line 339
label_10:
#line 339
$memory_2 = c_rt_lib::ov_as($memory_0, 'var_op');
#line 341
$memory_4 = $memory_2->{'op'};
#line 341
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_as');
#line 341
if (c_rt_lib::check_true($memory_5)) {goto label_31;}
#line 343
$memory_5 = c_rt_lib::ov_is($memory_4, 'ov_is');
#line 343
if (c_rt_lib::check_true($memory_5)) {goto label_32;}
#line 343
$memory_5 = "NOMATCHALERT";
#line 343
$memory_5 = [$memory_5,$memory_4];
#line 343
die(dfile::ssave($memory_5));
#line 341
label_31:
#line 342
$memory_6 = "as";
#line 342
$memory_3 = $memory_6;
#line 342
undef($memory_6);
#line 343
goto label_30;
#line 343
label_32:
#line 344
$memory_6 = "is";
#line 344
$memory_3 = $memory_6;
#line 344
undef($memory_6);
#line 345
goto label_30;
#line 345
label_30:
#line 345
undef($memory_4);
#line 345
undef($memory_5);
#line 346
$memory_7 = $memory_2->{'left'};
#line 346
$memory_6 = pretty_printer_priv::print_val($memory_7);
#line 346
undef($memory_7);
#line 346
$memory_7 = wprinter::get_sep();
#line 346
$memory_8 = wprinter::build_sim($memory_3);
#line 346
$memory_9 = wprinter::get_sep();
#line 346
$memory_11 = ":";
#line 346
$memory_10 = wprinter::build_sim($memory_11);
#line 346
undef($memory_11);
#line 346
$memory_12 = $memory_2->{'case'};
#line 346
$memory_11 = wprinter::build_sim($memory_12);
#line 346
undef($memory_12);
#line 346
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10,$memory_11];
#line 346
undef($memory_6);
#line 346
undef($memory_7);
#line 346
undef($memory_8);
#line 346
undef($memory_9);
#line 346
undef($memory_10);
#line 346
undef($memory_11);
#line 346
$memory_4 = wprinter::build_pretty_op_l($memory_5);
#line 346
undef($memory_5);
#line 346
undef($memory_0);
#line 346
undef($memory_1);
#line 346
undef($memory_2);
#line 346
undef($memory_3);
#line 346
return $memory_4;
#line 346
undef($memory_4);
#line 346
undef($memory_3);
#line 346
undef($memory_2);
#line 354
goto label_1;
#line 354
label_11:
#line 354
$memory_2 = c_rt_lib::ov_as($memory_0, 'post_dec');
#line 355
$memory_5 = pretty_printer_priv::print_val($memory_2);
#line 355
$memory_7 = "--";
#line 355
$memory_6 = wprinter::build_sim($memory_7);
#line 355
undef($memory_7);
#line 355
$memory_4 = [$memory_5,$memory_6];
#line 355
undef($memory_5);
#line 355
undef($memory_6);
#line 355
$memory_3 = wprinter::build_pretty_op_l($memory_4);
#line 355
undef($memory_4);
#line 355
undef($memory_0);
#line 355
undef($memory_1);
#line 355
undef($memory_2);
#line 355
return $memory_3;
#line 355
undef($memory_3);
#line 355
undef($memory_2);
#line 356
goto label_1;
#line 356
label_12:
#line 356
$memory_2 = c_rt_lib::ov_as($memory_0, 'post_inc');
#line 357
$memory_5 = pretty_printer_priv::print_val($memory_2);
#line 357
$memory_7 = "++";
#line 357
$memory_6 = wprinter::build_sim($memory_7);
#line 357
undef($memory_7);
#line 357
$memory_4 = [$memory_5,$memory_6];
#line 357
undef($memory_5);
#line 357
undef($memory_6);
#line 357
$memory_3 = wprinter::build_pretty_op_l($memory_4);
#line 357
undef($memory_4);
#line 357
undef($memory_0);
#line 357
undef($memory_1);
#line 357
undef($memory_2);
#line 357
return $memory_3;
#line 357
undef($memory_3);
#line 357
undef($memory_2);
#line 358
goto label_1;
#line 358
label_13:
#line 358
$memory_2 = c_rt_lib::ov_as($memory_0, 'unary_op');
#line 359
$memory_5 = $memory_2->{'op'};
#line 359
$memory_4 = wprinter::build_sim($memory_5);
#line 359
undef($memory_5);
#line 359
$memory_6 = $memory_2->{'val'};
#line 359
$memory_5 = pretty_printer_priv::print_val($memory_6);
#line 359
undef($memory_6);
#line 359
$memory_3 = wprinter::build_pretty_bind($memory_4, $memory_5);
#line 359
undef($memory_5);
#line 359
undef($memory_4);
#line 359
undef($memory_0);
#line 359
undef($memory_1);
#line 359
undef($memory_2);
#line 359
return $memory_3;
#line 359
undef($memory_3);
#line 359
undef($memory_2);
#line 360
goto label_1;
#line 360
label_14:
#line 360
$memory_2 = c_rt_lib::ov_as($memory_0, 'fun_val');
#line 361
$memory_4 = $memory_2->{'name'};
#line 361
$memory_5 = $memory_2->{'module'};
#line 361
$memory_3 = pretty_printer_priv::get_fun_label($memory_4, $memory_5);
#line 361
undef($memory_5);
#line 361
undef($memory_4);
#line 361
$memory_4 = "(";
#line 361
$memory_3 = $memory_3 . $memory_4;
#line 361
undef($memory_4);
#line 362
$memory_5 = $memory_2->{'args'};
#line 362
$memory_4 = array::len($memory_5);
#line 362
undef($memory_5);
#line 362
$memory_5 = 1;
#line 362
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 362
undef($memory_5);
#line 362
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 362
if (c_rt_lib::check_true($memory_4)) {goto label_34;}
#line 363
$memory_5 = $memory_2->{'args'};
#line 363
$memory_6 = 0;
#line 363
$memory_5 = $memory_5->[$memory_6];
#line 363
undef($memory_6);
#line 363
$memory_5 = $memory_5->{'val'};
#line 364
$memory_6 = $memory_5;
#line 364
$memory_6 = c_rt_lib::ov_is($memory_6, 'hash_decl');
#line 364
if (c_rt_lib::check_true($memory_6)) {goto label_37;}
#line 364
$memory_6 = $memory_5;
#line 364
$memory_6 = c_rt_lib::ov_is($memory_6, 'arr_decl');
#line 364
label_37:
#line 364
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 364
if (c_rt_lib::check_true($memory_6)) {goto label_36;}
#line 365
$memory_8 = ")";
#line 365
$memory_7 = pretty_printer_priv::get_compressed_fun_val($memory_5, $memory_3, $memory_8);
#line 365
undef($memory_8);
#line 365
undef($memory_0);
#line 365
undef($memory_1);
#line 365
undef($memory_2);
#line 365
undef($memory_3);
#line 365
undef($memory_4);
#line 365
undef($memory_5);
#line 365
undef($memory_6);
#line 365
return $memory_7;
#line 365
undef($memory_7);
#line 366
goto label_36;
#line 366
label_36:
#line 366
undef($memory_6);
#line 366
undef($memory_5);
#line 367
goto label_38;
#line 367
label_34:
#line 367
$memory_4 = pretty_printer_priv::is_to_change_ov($memory_0);
#line 367
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 367
if (c_rt_lib::check_true($memory_4)) {goto label_38;}
#line 368
$memory_8 = $memory_2->{'args'};
#line 368
$memory_9 = 0;
#line 368
$memory_8 = $memory_8->[$memory_9];
#line 368
undef($memory_9);
#line 368
$memory_8 = $memory_8->{'val'};
#line 368
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 368
undef($memory_8);
#line 368
$memory_8 = wprinter::get_sep();
#line 368
$memory_10 = $memory_2->{'name'};
#line 368
$memory_9 = wprinter::build_sim($memory_10);
#line 368
undef($memory_10);
#line 368
$memory_10 = wprinter::get_sep();
#line 368
$memory_12 = ":";
#line 368
$memory_13 = $memory_2->{'args'};
#line 368
$memory_14 = 1;
#line 368
$memory_13 = $memory_13->[$memory_14];
#line 368
undef($memory_14);
#line 368
$memory_13 = $memory_13->{'val'};
#line 368
$memory_13 = c_rt_lib::ov_as($memory_13, 'string');
#line 368
$memory_13 = $memory_13->{'arr'};
#line 368
$memory_14 = 0;
#line 368
$memory_13 = $memory_13->[$memory_14];
#line 368
undef($memory_14);
#line 368
$memory_12 = $memory_12 . $memory_13;
#line 368
undef($memory_13);
#line 368
$memory_11 = wprinter::build_sim($memory_12);
#line 368
undef($memory_12);
#line 368
$memory_6 = [$memory_7,$memory_8,$memory_9,$memory_10,$memory_11];
#line 368
undef($memory_7);
#line 368
undef($memory_8);
#line 368
undef($memory_9);
#line 368
undef($memory_10);
#line 368
undef($memory_11);
#line 368
$memory_5 = wprinter::build_pretty_op_l($memory_6);
#line 368
undef($memory_6);
#line 368
undef($memory_0);
#line 368
undef($memory_1);
#line 368
undef($memory_2);
#line 368
undef($memory_3);
#line 368
undef($memory_4);
#line 368
return $memory_5;
#line 368
undef($memory_5);
#line 375
goto label_38;
#line 375
label_38:
#line 375
undef($memory_4);
#line 376
$memory_5 = wprinter::build_sim($memory_3);
#line 376
$memory_4 = [$memory_5];
#line 376
undef($memory_5);
#line 377
$memory_6 = $memory_2->{'args'};
#line 377
$memory_5 = pretty_printer_priv::join_print_fun_arg($memory_6);
#line 377
undef($memory_6);
#line 377
array::append($memory_4, $memory_5);
#line 377
undef($memory_5);
#line 378
$memory_6 = ")";
#line 378
$memory_5 = wprinter::build_sim($memory_6);
#line 378
undef($memory_6);
#line 378
array::push($memory_4, $memory_5);
#line 378
undef($memory_5);
#line 379
$memory_7 = $memory_2->{'args'};
#line 379
$memory_5 = pretty_printer_priv::count_structs($memory_7);
#line 379
undef($memory_7);
#line 379
$memory_8 = $memory_2->{'args'};
#line 379
$memory_7 = array::len($memory_8);
#line 379
undef($memory_8);
#line 379
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 379
undef($memory_7);
#line 379
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 379
if (c_rt_lib::check_true($memory_6)) {goto label_42;}
#line 379
$memory_7 = $memory_2->{'args'};
#line 379
$memory_5 = array::len($memory_7);
#line 379
undef($memory_7);
#line 379
$memory_7 = 0;
#line 379
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_7);
#line 379
undef($memory_7);
#line 379
label_42:
#line 379
undef($memory_6);
#line 379
if (c_rt_lib::check_true($memory_5)) {goto label_41;}
#line 379
$memory_7 = $memory_2->{'args'};
#line 379
$memory_5 = array::len($memory_7);
#line 379
undef($memory_7);
#line 379
$memory_7 = 1;
#line 379
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 379
undef($memory_7);
#line 379
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 379
if (c_rt_lib::check_true($memory_6)) {goto label_43;}
#line 379
$memory_5 = $memory_2->{'args'};
#line 379
$memory_7 = 0;
#line 379
$memory_5 = $memory_5->[$memory_7];
#line 379
undef($memory_7);
#line 379
$memory_5 = $memory_5->{'val'};
#line 379
$memory_5 = c_rt_lib::ov_is($memory_5, 'fun_val');
#line 379
label_43:
#line 379
undef($memory_6);
#line 379
label_41:
#line 379
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 379
if (c_rt_lib::check_true($memory_5)) {goto label_40;}
#line 379
$memory_6 = wprinter::build_pretty_op_l($memory_4);
#line 379
undef($memory_0);
#line 379
undef($memory_1);
#line 379
undef($memory_2);
#line 379
undef($memory_3);
#line 379
undef($memory_4);
#line 379
undef($memory_5);
#line 379
return $memory_6;
#line 379
undef($memory_6);
#line 379
goto label_40;
#line 379
label_40:
#line 379
undef($memory_5);
#line 383
$memory_5 = wprinter::build_pretty_l($memory_4);
#line 383
undef($memory_0);
#line 383
undef($memory_1);
#line 383
undef($memory_2);
#line 383
undef($memory_3);
#line 383
undef($memory_4);
#line 383
return $memory_5;
#line 383
undef($memory_5);
#line 383
undef($memory_3);
#line 383
undef($memory_4);
#line 383
undef($memory_2);
#line 384
goto label_1;
#line 384
label_15:
#line 385
$memory_3 = 0;
#line 385
$memory_4 = "";
#line 385
$memory_4 = c_rt_lib::ov_mk_arg('sim', $memory_4);
#line 385
$memory_2 = {len => $memory_3,el => $memory_4,};
#line 385
undef($memory_3);
#line 385
undef($memory_4);
#line 385
undef($memory_0);
#line 385
undef($memory_1);
#line 385
return $memory_2;
#line 385
undef($memory_2);
#line 386
goto label_1;
#line 386
label_16:
#line 386
$memory_2 = c_rt_lib::ov_as($memory_0, 'arr_decl');
#line 387
$memory_4 = c_rt_lib::ov_mk_arg('arr_decl', $memory_2);
#line 387
$memory_5 = "";
#line 387
$memory_6 = "";
#line 387
$memory_3 = pretty_printer_priv::get_compressed_fun_val($memory_4, $memory_5, $memory_6);
#line 387
undef($memory_6);
#line 387
undef($memory_5);
#line 387
undef($memory_4);
#line 387
undef($memory_0);
#line 387
undef($memory_1);
#line 387
undef($memory_2);
#line 387
return $memory_3;
#line 387
undef($memory_3);
#line 387
undef($memory_2);
#line 388
goto label_1;
#line 388
label_17:
#line 388
$memory_2 = c_rt_lib::ov_as($memory_0, 'hash_decl');
#line 389
$memory_4 = pretty_printer_priv::join_print_hash_elem($memory_2);
#line 389
$memory_5 = "{";
#line 389
$memory_6 = "}";
#line 389
$memory_3 = wprinter::build_pretty_arr_decl($memory_4, $memory_5, $memory_6);
#line 389
undef($memory_6);
#line 389
undef($memory_5);
#line 389
undef($memory_4);
#line 389
undef($memory_0);
#line 389
undef($memory_1);
#line 389
undef($memory_2);
#line 389
return $memory_3;
#line 389
undef($memory_3);
#line 389
undef($memory_2);
#line 390
goto label_1;
#line 390
label_18:
#line 390
$memory_2 = c_rt_lib::ov_as($memory_0, 'fun_label');
#line 391
$memory_5 = $memory_2->{'name'};
#line 391
$memory_6 = $memory_2->{'module'};
#line 391
$memory_4 = pretty_printer_priv::get_fun_label($memory_5, $memory_6);
#line 391
undef($memory_6);
#line 391
undef($memory_5);
#line 391
$memory_3 = wprinter::build_sim($memory_4);
#line 391
undef($memory_4);
#line 391
undef($memory_0);
#line 391
undef($memory_1);
#line 391
undef($memory_2);
#line 391
return $memory_3;
#line 391
undef($memory_3);
#line 391
undef($memory_2);
#line 392
goto label_1;
#line 392
label_1:
#line 392
undef($memory_1);
#line 392
undef($memory_0);
#line 392
return;
}

sub pretty_printer_priv::print_cond_mod($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 397
$memory_7 = wprinter::build_sim($memory_1);
#line 397
$memory_8 = wprinter::get_sep();
#line 397
$memory_10 = pretty_printer_priv::join_print_var_decl($memory_3);
#line 397
$memory_9 = wprinter::build_pretty_l($memory_10);
#line 397
undef($memory_10);
#line 397
$memory_6 = [$memory_7,$memory_8,$memory_9];
#line 397
undef($memory_7);
#line 397
undef($memory_8);
#line 397
undef($memory_9);
#line 402
$memory_7 = array::len($memory_3);
#line 402
$memory_8 = 0;
#line 402
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 402
undef($memory_8);
#line 402
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 402
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 402
$memory_9 = " ";
#line 402
$memory_8 = wprinter::build_sim($memory_9);
#line 402
undef($memory_9);
#line 402
array::push($memory_6, $memory_8);
#line 402
undef($memory_8);
#line 402
goto label_2;
#line 402
label_2:
#line 402
undef($memory_7);
#line 403
$memory_7 = array::len($memory_3);
#line 403
$memory_8 = 0;
#line 403
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 403
undef($memory_8);
#line 403
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 403
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 403
$memory_9 = "(";
#line 403
$memory_8 = wprinter::build_sim($memory_9);
#line 403
undef($memory_9);
#line 403
array::push($memory_6, $memory_8);
#line 403
undef($memory_8);
#line 403
goto label_4;
#line 403
label_4:
#line 403
undef($memory_7);
#line 404
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 404
array::push($memory_6, $memory_7);
#line 404
undef($memory_7);
#line 405
$memory_7 = array::len($memory_3);
#line 405
$memory_8 = 0;
#line 405
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 405
undef($memory_8);
#line 405
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 405
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 405
$memory_9 = ")";
#line 405
$memory_8 = wprinter::build_sim($memory_9);
#line 405
undef($memory_9);
#line 405
array::push($memory_6, $memory_8);
#line 405
undef($memory_8);
#line 405
goto label_6;
#line 405
label_6:
#line 405
undef($memory_7);
#line 406
$memory_9 = pretty_printer_priv::print_simple_statement($memory_2);
#line 406
$memory_10 = wprinter::get_sep();
#line 406
$memory_11 = wprinter::build_pretty_op_l($memory_6);
#line 406
$memory_8 = [$memory_9,$memory_10,$memory_11];
#line 406
undef($memory_9);
#line 406
undef($memory_10);
#line 406
undef($memory_11);
#line 406
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 406
undef($memory_8);
#line 406
wprinter::print_t($memory_0, $memory_7, $memory_5);
#line 406
undef($memory_7);
#line 411
$memory_7 = ";";
#line 411
pretty_printer_priv::state_print($memory_0, $memory_7);
#line 411
undef($memory_7);
#line 411
undef($memory_6);
#line 411
undef($memory_1);
#line 411
undef($memory_2);
#line 411
undef($memory_3);
#line 411
undef($memory_4);
#line 411
undef($memory_5);
#line 411
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_loop($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];
#line 416
$memory_7 = wprinter::build_sim($memory_1);
#line 416
$memory_8 = wprinter::get_sep();
#line 416
$memory_6 = [$memory_7,$memory_8];
#line 416
undef($memory_7);
#line 416
undef($memory_8);
#line 417
$memory_7 = pretty_printer_priv::join_print_var_decl($memory_3);
#line 417
array::append($memory_6, $memory_7);
#line 417
undef($memory_7);
#line 418
$memory_7 = array::len($memory_3);
#line 418
$memory_8 = 0;
#line 418
$memory_7 = c_rt_lib::to_nl($memory_7 > $memory_8);
#line 418
undef($memory_8);
#line 418
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 418
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 418
$memory_9 = " ";
#line 418
$memory_8 = wprinter::build_sim($memory_9);
#line 418
undef($memory_9);
#line 418
array::push($memory_6, $memory_8);
#line 418
undef($memory_8);
#line 418
goto label_2;
#line 418
label_2:
#line 418
undef($memory_7);
#line 419
$memory_8 = "(";
#line 419
$memory_7 = wprinter::build_sim($memory_8);
#line 419
undef($memory_8);
#line 419
array::push($memory_6, $memory_7);
#line 419
undef($memory_7);
#line 420
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 421
$memory_8 = $memory_7->{'el'};
#line 421
$memory_8 = c_rt_lib::ov_is($memory_8, 'arr');
#line 421
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 421
if (c_rt_lib::check_true($memory_8)) {goto label_4;}
#line 422
$memory_9 = $memory_7->{'el'};
#line 422
$memory_9 = c_rt_lib::ov_as($memory_9, 'arr');
#line 422
$memory_9 = $memory_9->{'arr'};
#line 422
array::append($memory_6, $memory_9);
#line 422
undef($memory_9);
#line 423
goto label_3;
#line 423
label_4:
#line 424
array::push($memory_6, $memory_7);
#line 425
goto label_3;
#line 425
label_3:
#line 425
undef($memory_8);
#line 426
$memory_9 = ")";
#line 426
$memory_8 = wprinter::build_sim($memory_9);
#line 426
undef($memory_9);
#line 426
array::push($memory_6, $memory_8);
#line 426
undef($memory_8);
#line 427
$memory_8 = wprinter::build_pretty_l($memory_6);
#line 427
wprinter::print_t($memory_0, $memory_8, $memory_5);
#line 427
undef($memory_8);
#line 428
pretty_printer_priv::print_st($memory_0, $memory_2, $memory_5);
#line 428
undef($memory_6);
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
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_loop_or_mod($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];$memory_6 = $_[6];
#line 433
$memory_7 = $memory_1;
#line 433
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 433
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 434
pretty_printer_priv::print_cond_mod($memory_0, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6);
#line 435
goto label_1;
#line 435
label_2:
#line 436
pretty_printer_priv::print_loop($memory_0, $memory_2, $memory_3, $memory_4, $memory_5, $memory_6);
#line 437
goto label_1;
#line 437
label_1:
#line 437
undef($memory_7);
#line 437
undef($memory_1);
#line 437
undef($memory_2);
#line 437
undef($memory_3);
#line 437
undef($memory_4);
#line 437
undef($memory_5);
#line 437
undef($memory_6);
#line 437
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_try_ensure($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];
#line 441
$memory_3 = wprinter::build_sim($memory_1);
#line 441
$memory_2 = [$memory_3];
#line 441
undef($memory_3);
#line 442
$memory_3 = c_rt_lib::ov_is($memory_0, 'decl');
#line 442
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 444
$memory_3 = c_rt_lib::ov_is($memory_0, 'expr');
#line 444
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 446
$memory_3 = c_rt_lib::ov_is($memory_0, 'lval');
#line 446
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 446
$memory_3 = "NOMATCHALERT";
#line 446
$memory_3 = [$memory_3,$memory_0];
#line 446
die(dfile::ssave($memory_3));
#line 442
label_2:
#line 442
$memory_4 = c_rt_lib::ov_as($memory_0, 'decl');
#line 443
$memory_6 = wprinter::get_sep();
#line 443
$memory_7 = pretty_printer_priv::print_var_decl($memory_4);
#line 443
$memory_5 = [$memory_6,$memory_7];
#line 443
undef($memory_6);
#line 443
undef($memory_7);
#line 443
array::append($memory_2, $memory_5);
#line 443
undef($memory_5);
#line 443
undef($memory_4);
#line 444
goto label_1;
#line 444
label_3:
#line 444
$memory_4 = c_rt_lib::ov_as($memory_0, 'expr');
#line 445
$memory_6 = wprinter::get_sep();
#line 445
$memory_7 = pretty_printer_priv::print_val($memory_4);
#line 445
$memory_5 = [$memory_6,$memory_7];
#line 445
undef($memory_6);
#line 445
undef($memory_7);
#line 445
array::append($memory_2, $memory_5);
#line 445
undef($memory_5);
#line 445
undef($memory_4);
#line 446
goto label_1;
#line 446
label_4:
#line 446
$memory_4 = c_rt_lib::ov_as($memory_0, 'lval');
#line 447
$memory_6 = wprinter::get_sep();
#line 447
$memory_8 = $memory_4->{'left'};
#line 447
$memory_7 = pretty_printer_priv::print_val($memory_8);
#line 447
undef($memory_8);
#line 447
$memory_8 = wprinter::get_sep();
#line 447
$memory_10 = $memory_4->{'op'};
#line 447
$memory_9 = wprinter::build_sim($memory_10);
#line 447
undef($memory_10);
#line 447
$memory_10 = wprinter::get_sep();
#line 447
$memory_12 = $memory_4->{'right'};
#line 447
$memory_11 = pretty_printer_priv::print_val($memory_12);
#line 447
undef($memory_12);
#line 447
$memory_5 = [$memory_6,$memory_7,$memory_8,$memory_9,$memory_10,$memory_11];
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
undef($memory_11);
#line 447
array::append($memory_2, $memory_5);
#line 447
undef($memory_5);
#line 447
undef($memory_4);
#line 455
goto label_1;
#line 455
label_1:
#line 455
undef($memory_3);
#line 456
$memory_3 = wprinter::build_pretty_l($memory_2);
#line 456
undef($memory_0);
#line 456
undef($memory_1);
#line 456
undef($memory_2);
#line 456
return $memory_3;
#line 456
undef($memory_3);
#line 456
undef($memory_2);
#line 456
undef($memory_0);
#line 456
undef($memory_1);
#line 456
return;
}

sub pretty_printer_priv::print_return($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 460
$memory_3 = "return";
#line 460
$memory_2 = wprinter::build_sim($memory_3);
#line 460
undef($memory_3);
#line 460
$memory_1 = [$memory_2];
#line 460
undef($memory_2);
#line 461
$memory_2 = $memory_0;
#line 461
$memory_2 = c_rt_lib::ov_is($memory_2, 'nop');
#line 461
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 461
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 461
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 462
$memory_4 = wprinter::get_sep();
#line 462
$memory_5 = pretty_printer_priv::print_val($memory_0);
#line 462
$memory_3 = [$memory_4,$memory_5];
#line 462
undef($memory_4);
#line 462
undef($memory_5);
#line 462
array::append($memory_1, $memory_3);
#line 462
undef($memory_3);
#line 463
goto label_2;
#line 463
label_2:
#line 463
undef($memory_2);
#line 464
$memory_2 = wprinter::build_pretty_l($memory_1);
#line 464
undef($memory_0);
#line 464
undef($memory_1);
#line 464
return $memory_2;
#line 464
undef($memory_2);
#line 464
undef($memory_1);
#line 464
undef($memory_0);
#line 464
return;
}

sub pretty_printer_priv::print_sim_value($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 468
$memory_1 = pretty_printer_priv::print_val($memory_0);
#line 469
$memory_2 = $memory_1->{'el'};
#line 469
$memory_2 = c_rt_lib::ov_is($memory_2, 'arr');
#line 469
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 469
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 470
$memory_4 = $memory_1->{'el'};
#line 470
$memory_4 = c_rt_lib::ov_as($memory_4, 'arr');
#line 470
$memory_4 = $memory_4->{'arr'};
#line 470
$memory_3 = wprinter::build_pretty_l($memory_4);
#line 470
undef($memory_4);
#line 470
$memory_1 = $memory_3;
#line 470
undef($memory_3);
#line 471
goto label_2;
#line 471
label_2:
#line 471
undef($memory_2);
#line 472
undef($memory_0);
#line 472
return $memory_1;
#line 472
undef($memory_1);
#line 472
undef($memory_0);
#line 472
return;
}

sub pretty_printer_priv::__print_break() {
my $memory_0;my $memory_1;
#line 476
$memory_1 = "break";
#line 476
$memory_0 = wprinter::build_sim($memory_1);
#line 476
undef($memory_1);
#line 476
return $memory_0;
#line 476
undef($memory_0);
#line 476
return;
}

my $_print_break;
sub pretty_printer_priv::print_break() {
	$_print_break = pretty_printer_priv::__print_break() unless defined $_print_break;
	return $_print_break;
}

sub pretty_printer_priv::__print_continue() {
my $memory_0;my $memory_1;
#line 480
$memory_1 = "continue";
#line 480
$memory_0 = wprinter::build_sim($memory_1);
#line 480
undef($memory_1);
#line 480
return $memory_0;
#line 480
undef($memory_0);
#line 480
return;
}

my $_print_continue;
sub pretty_printer_priv::print_continue() {
	$_print_continue = pretty_printer_priv::__print_continue() unless defined $_print_continue;
	return $_print_continue;
}

sub pretty_printer_priv::print_die($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 484
$memory_3 = "die";
#line 484
$memory_2 = wprinter::build_sim($memory_3);
#line 484
undef($memory_3);
#line 484
$memory_1 = [$memory_2];
#line 484
undef($memory_2);
#line 485
$memory_2 = array::len($memory_0);
#line 485
$memory_3 = 0;
#line 485
$memory_2 = c_rt_lib::to_nl($memory_2 > $memory_3);
#line 485
undef($memory_3);
#line 485
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 485
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 485
$memory_5 = "(";
#line 485
$memory_4 = wprinter::build_sim($memory_5);
#line 485
undef($memory_5);
#line 485
$memory_6 = pretty_printer_priv::join_print_val($memory_0);
#line 485
$memory_5 = wprinter::build_pretty_l($memory_6);
#line 485
undef($memory_6);
#line 485
$memory_7 = ")";
#line 485
$memory_6 = wprinter::build_sim($memory_7);
#line 485
undef($memory_7);
#line 485
$memory_3 = [$memory_4,$memory_5,$memory_6];
#line 485
undef($memory_4);
#line 485
undef($memory_5);
#line 485
undef($memory_6);
#line 485
array::append($memory_1, $memory_3);
#line 485
undef($memory_3);
#line 485
goto label_2;
#line 485
label_2:
#line 485
undef($memory_2);
#line 491
$memory_2 = wprinter::build_pretty_a($memory_1);
#line 491
undef($memory_0);
#line 491
undef($memory_1);
#line 491
return $memory_2;
#line 491
undef($memory_2);
#line 491
undef($memory_1);
#line 491
undef($memory_0);
#line 491
return;
}

sub pretty_printer_priv::print_simple_statement($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 495
$memory_1 = $memory_0->{'cmd'};
#line 495
$memory_1 = c_rt_lib::ov_is($memory_1, 'value');
#line 495
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 495
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 496
$memory_3 = $memory_0->{'cmd'};
#line 496
$memory_3 = c_rt_lib::ov_as($memory_3, 'value');
#line 496
$memory_2 = pretty_printer_priv::print_sim_value($memory_3);
#line 496
undef($memory_3);
#line 496
undef($memory_0);
#line 496
undef($memory_1);
#line 496
return $memory_2;
#line 496
undef($memory_2);
#line 497
goto label_1;
#line 497
label_2:
#line 497
$memory_1 = $memory_0->{'cmd'};
#line 497
$memory_1 = c_rt_lib::ov_is($memory_1, 'return');
#line 497
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 497
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 498
$memory_3 = $memory_0->{'cmd'};
#line 498
$memory_3 = c_rt_lib::ov_as($memory_3, 'return');
#line 498
$memory_2 = pretty_printer_priv::print_return($memory_3);
#line 498
undef($memory_3);
#line 498
undef($memory_0);
#line 498
undef($memory_1);
#line 498
return $memory_2;
#line 498
undef($memory_2);
#line 499
goto label_1;
#line 499
label_3:
#line 499
$memory_1 = $memory_0->{'cmd'};
#line 499
$memory_1 = c_rt_lib::ov_is($memory_1, 'break');
#line 499
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 499
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 500
$memory_2 = pretty_printer_priv::print_break();
#line 500
undef($memory_0);
#line 500
undef($memory_1);
#line 500
return $memory_2;
#line 500
undef($memory_2);
#line 501
goto label_1;
#line 501
label_4:
#line 501
$memory_1 = $memory_0->{'cmd'};
#line 501
$memory_1 = c_rt_lib::ov_is($memory_1, 'continue');
#line 501
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 501
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 502
$memory_2 = pretty_printer_priv::print_continue();
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
label_5:
#line 503
$memory_1 = $memory_0->{'cmd'};
#line 503
$memory_1 = c_rt_lib::ov_is($memory_1, 'die');
#line 503
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 503
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 504
$memory_3 = $memory_0->{'cmd'};
#line 504
$memory_3 = c_rt_lib::ov_as($memory_3, 'die');
#line 504
$memory_2 = pretty_printer_priv::print_die($memory_3);
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
label_6:
#line 505
$memory_1 = $memory_0->{'cmd'};
#line 505
$memory_1 = c_rt_lib::ov_is($memory_1, 'try');
#line 505
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 505
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 506
$memory_3 = $memory_0->{'cmd'};
#line 506
$memory_3 = c_rt_lib::ov_as($memory_3, 'try');
#line 506
$memory_4 = "try";
#line 506
$memory_2 = pretty_printer_priv::print_try_ensure($memory_3, $memory_4);
#line 506
undef($memory_4);
#line 506
undef($memory_3);
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
label_7:
#line 507
$memory_1 = $memory_0->{'cmd'};
#line 507
$memory_1 = c_rt_lib::ov_is($memory_1, 'ensure');
#line 507
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 507
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 508
$memory_3 = $memory_0->{'cmd'};
#line 508
$memory_3 = c_rt_lib::ov_as($memory_3, 'ensure');
#line 508
$memory_4 = "ensure";
#line 508
$memory_2 = pretty_printer_priv::print_try_ensure($memory_3, $memory_4);
#line 508
undef($memory_4);
#line 508
undef($memory_3);
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
label_8:
#line 510
$memory_2 = [$memory_0];
#line 510
die(dfile::ssave($memory_2));
#line 510
undef($memory_2);
#line 511
goto label_1;
#line 511
label_1:
#line 511
undef($memory_1);
#line 511
undef($memory_0);
#line 511
return;
}

sub pretty_printer_priv::flush_sim_statement($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 515
wprinter::print_t($memory_0, $memory_1, $memory_2);
#line 516
$memory_3 = ";";
#line 516
pretty_printer_priv::state_print($memory_0, $memory_3);
#line 516
undef($memory_3);
#line 516
undef($memory_1);
#line 516
undef($memory_2);
#line 516
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub pretty_printer_priv::print_cmd($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 520
$memory_3 = $memory_1->{'cmd'};
#line 520
$memory_4 = c_rt_lib::ov_is($memory_3, 'if');
#line 520
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 530
$memory_4 = c_rt_lib::ov_is($memory_3, 'while');
#line 530
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 532
$memory_4 = c_rt_lib::ov_is($memory_3, 'for');
#line 532
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 551
$memory_4 = c_rt_lib::ov_is($memory_3, 'block');
#line 551
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 558
$memory_4 = c_rt_lib::ov_is($memory_3, 'nop');
#line 558
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 560
$memory_4 = c_rt_lib::ov_is($memory_3, 'match');
#line 560
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 571
$memory_4 = c_rt_lib::ov_is($memory_3, 'fora');
#line 571
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 573
$memory_4 = c_rt_lib::ov_is($memory_3, 'forh');
#line 573
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 576
$memory_4 = c_rt_lib::ov_is($memory_3, 'rep');
#line 576
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 578
$memory_4 = c_rt_lib::ov_is($memory_3, 'loop');
#line 578
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 581
$memory_4 = c_rt_lib::ov_is($memory_3, 'if_mod');
#line 581
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 583
$memory_4 = c_rt_lib::ov_is($memory_3, 'unless_mod');
#line 583
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 585
$memory_4 = c_rt_lib::ov_is($memory_3, 'value');
#line 585
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 587
$memory_4 = c_rt_lib::ov_is($memory_3, 'try');
#line 587
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 589
$memory_4 = c_rt_lib::ov_is($memory_3, 'ensure');
#line 589
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 591
$memory_4 = c_rt_lib::ov_is($memory_3, 'return');
#line 591
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 593
$memory_4 = c_rt_lib::ov_is($memory_3, 'break');
#line 593
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 595
$memory_4 = c_rt_lib::ov_is($memory_3, 'continue');
#line 595
if (c_rt_lib::check_true($memory_4)) {goto label_19;}
#line 597
$memory_4 = c_rt_lib::ov_is($memory_3, 'die');
#line 597
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 599
$memory_4 = c_rt_lib::ov_is($memory_3, 'var_decl');
#line 599
if (c_rt_lib::check_true($memory_4)) {goto label_21;}
#line 599
$memory_4 = "NOMATCHALERT";
#line 599
$memory_4 = [$memory_4,$memory_3];
#line 599
die(dfile::ssave($memory_4));
#line 520
label_2:
#line 520
$memory_5 = c_rt_lib::ov_as($memory_3, 'if');
#line 521
$memory_6 = "if";
#line 521
$memory_7 = $memory_5->{'if'};
#line 521
$memory_8 = [];
#line 521
$memory_9 = $memory_5->{'cond'};
#line 521
pretty_printer_priv::print_loop($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 521
undef($memory_9);
#line 521
undef($memory_8);
#line 521
undef($memory_7);
#line 521
undef($memory_6);
#line 522
$memory_6 = $memory_5->{'elsif'};
#line 522
$memory_8 = 0;
#line 522
$memory_9 = 1;
#line 522
$memory_10 = c_rt_lib::array_len($memory_6);
#line 522
label_24:
#line 522
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 522
if (c_rt_lib::check_true($memory_11)) {goto label_22;}
#line 522
$memory_7 = $memory_6->[$memory_8];
#line 523
$memory_12 = " ";
#line 523
pretty_printer_priv::state_print($memory_0, $memory_12);
#line 523
undef($memory_12);
#line 524
$memory_12 = "elsif";
#line 524
$memory_13 = $memory_7->{'cmd'};
#line 524
$memory_14 = [];
#line 524
$memory_15 = $memory_7->{'cond'};
#line 524
pretty_printer_priv::print_loop($memory_0, $memory_12, $memory_13, $memory_14, $memory_15, $memory_2);
#line 524
undef($memory_15);
#line 524
undef($memory_14);
#line 524
undef($memory_13);
#line 524
undef($memory_12);
#line 525
$memory_8 = $memory_8 + $memory_9;
#line 525
goto label_24;
#line 525
label_22:
#line 525
undef($memory_6);
#line 525
undef($memory_7);
#line 525
undef($memory_8);
#line 525
undef($memory_9);
#line 525
undef($memory_10);
#line 525
undef($memory_11);
#line 526
$memory_6 = $memory_5->{'else'};
#line 526
$memory_6 = $memory_6->{'cmd'};
#line 526
$memory_6 = c_rt_lib::ov_is($memory_6, 'nop');
#line 526
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 526
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 526
if (c_rt_lib::check_true($memory_6)) {goto label_26;}
#line 527
$memory_7 = " else";
#line 527
pretty_printer_priv::state_print($memory_0, $memory_7);
#line 527
undef($memory_7);
#line 528
$memory_7 = $memory_5->{'else'};
#line 528
pretty_printer_priv::print_st($memory_0, $memory_7, $memory_2);
#line 528
undef($memory_7);
#line 529
goto label_26;
#line 529
label_26:
#line 529
undef($memory_6);
#line 529
undef($memory_5);
#line 530
goto label_1;
#line 530
label_3:
#line 530
$memory_5 = c_rt_lib::ov_as($memory_3, 'while');
#line 531
$memory_6 = $memory_5->{'short'};
#line 531
$memory_7 = "while";
#line 531
$memory_8 = $memory_5->{'cmd'};
#line 531
$memory_9 = [];
#line 531
$memory_10 = $memory_5->{'cond'};
#line 531
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 531
undef($memory_10);
#line 531
undef($memory_9);
#line 531
undef($memory_8);
#line 531
undef($memory_7);
#line 531
undef($memory_6);
#line 531
undef($memory_5);
#line 532
goto label_1;
#line 532
label_4:
#line 532
$memory_5 = c_rt_lib::ov_as($memory_3, 'for');
#line 534
$memory_7 = $memory_5->{'start'};
#line 534
$memory_8 = c_rt_lib::ov_is($memory_7, 'value');
#line 534
if (c_rt_lib::check_true($memory_8)) {goto label_28;}
#line 536
$memory_8 = c_rt_lib::ov_is($memory_7, 'var_decl');
#line 536
if (c_rt_lib::check_true($memory_8)) {goto label_29;}
#line 536
$memory_8 = "NOMATCHALERT";
#line 536
$memory_8 = [$memory_8,$memory_7];
#line 536
die(dfile::ssave($memory_8));
#line 534
label_28:
#line 534
$memory_9 = c_rt_lib::ov_as($memory_7, 'value');
#line 535
$memory_10 = pretty_printer_priv::print_val($memory_9);
#line 535
$memory_6 = $memory_10;
#line 535
undef($memory_10);
#line 535
undef($memory_9);
#line 536
goto label_27;
#line 536
label_29:
#line 536
$memory_9 = c_rt_lib::ov_as($memory_7, 'var_decl');
#line 537
$memory_10 = pretty_printer_priv::print_var_decl($memory_9);
#line 537
$memory_6 = $memory_10;
#line 537
undef($memory_10);
#line 537
undef($memory_9);
#line 538
goto label_27;
#line 538
label_27:
#line 538
undef($memory_7);
#line 538
undef($memory_8);
#line 539
$memory_10 = "for(";
#line 539
$memory_9 = wprinter::build_sim($memory_10);
#line 539
undef($memory_10);
#line 539
$memory_11 = ";";
#line 539
$memory_10 = wprinter::build_sim($memory_11);
#line 539
undef($memory_11);
#line 539
$memory_11 = wprinter::get_sep();
#line 539
$memory_13 = $memory_5->{'cond'};
#line 539
$memory_12 = pretty_printer_priv::print_val($memory_13);
#line 539
undef($memory_13);
#line 539
$memory_14 = ";";
#line 539
$memory_13 = wprinter::build_sim($memory_14);
#line 539
undef($memory_14);
#line 539
$memory_14 = wprinter::get_sep();
#line 539
$memory_16 = $memory_5->{'iter'};
#line 539
$memory_15 = pretty_printer_priv::print_val($memory_16);
#line 539
undef($memory_16);
#line 539
$memory_17 = ") ";
#line 539
$memory_16 = wprinter::build_sim($memory_17);
#line 539
undef($memory_17);
#line 539
$memory_8 = [$memory_9,$memory_6,$memory_10,$memory_11,$memory_12,$memory_13,$memory_14,$memory_15,$memory_16];
#line 539
undef($memory_9);
#line 539
undef($memory_10);
#line 539
undef($memory_11);
#line 539
undef($memory_12);
#line 539
undef($memory_13);
#line 539
undef($memory_14);
#line 539
undef($memory_15);
#line 539
undef($memory_16);
#line 539
$memory_7 = wprinter::build_pretty_a($memory_8);
#line 539
undef($memory_8);
#line 539
wprinter::print_t($memory_0, $memory_7, $memory_2);
#line 539
undef($memory_7);
#line 550
$memory_7 = $memory_5->{'cmd'};
#line 550
pretty_printer_priv::print_cmd($memory_0, $memory_7, $memory_2);
#line 550
undef($memory_7);
#line 550
undef($memory_6);
#line 550
undef($memory_5);
#line 551
goto label_1;
#line 551
label_5:
#line 551
$memory_5 = c_rt_lib::ov_as($memory_3, 'block');
#line 552
$memory_6 = "{";
#line 552
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 552
undef($memory_6);
#line 553
$memory_7 = 0;
#line 553
$memory_8 = 1;
#line 553
$memory_9 = c_rt_lib::array_len($memory_5);
#line 553
label_32:
#line 553
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 553
if (c_rt_lib::check_true($memory_10)) {goto label_30;}
#line 553
$memory_6 = $memory_5->[$memory_7];
#line 554
$memory_11 = string::lf();
#line 554
$memory_13 = 1;
#line 554
$memory_13 = $memory_2 + $memory_13;
#line 554
$memory_12 = pretty_printer_priv::pind($memory_13);
#line 554
undef($memory_13);
#line 554
$memory_11 = $memory_11 . $memory_12;
#line 554
undef($memory_12);
#line 554
pretty_printer_priv::state_print($memory_0, $memory_11);
#line 554
undef($memory_11);
#line 555
$memory_11 = 1;
#line 555
$memory_11 = $memory_2 + $memory_11;
#line 555
pretty_printer_priv::print_cmd($memory_0, $memory_6, $memory_11);
#line 555
undef($memory_11);
#line 556
$memory_7 = $memory_7 + $memory_8;
#line 556
goto label_32;
#line 556
label_30:
#line 556
undef($memory_6);
#line 556
undef($memory_7);
#line 556
undef($memory_8);
#line 556
undef($memory_9);
#line 556
undef($memory_10);
#line 557
$memory_6 = string::lf();
#line 557
$memory_7 = pretty_printer_priv::pind($memory_2);
#line 557
$memory_6 = $memory_6 . $memory_7;
#line 557
undef($memory_7);
#line 557
$memory_7 = "}";
#line 557
$memory_6 = $memory_6 . $memory_7;
#line 557
undef($memory_7);
#line 557
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 557
undef($memory_6);
#line 557
undef($memory_5);
#line 558
goto label_1;
#line 558
label_6:
#line 559
$memory_5 = ";";
#line 559
pretty_printer_priv::state_print($memory_0, $memory_5);
#line 559
undef($memory_5);
#line 560
goto label_1;
#line 560
label_7:
#line 560
$memory_5 = c_rt_lib::ov_as($memory_3, 'match');
#line 561
$memory_9 = "match (";
#line 561
$memory_8 = wprinter::build_sim($memory_9);
#line 561
undef($memory_9);
#line 561
$memory_10 = $memory_5->{'val'};
#line 561
$memory_9 = pretty_printer_priv::print_val($memory_10);
#line 561
undef($memory_10);
#line 561
$memory_11 = ")";
#line 561
$memory_10 = wprinter::build_sim($memory_11);
#line 561
undef($memory_11);
#line 561
$memory_7 = [$memory_8,$memory_9,$memory_10];
#line 561
undef($memory_8);
#line 561
undef($memory_9);
#line 561
undef($memory_10);
#line 561
$memory_6 = wprinter::build_pretty_a($memory_7);
#line 561
undef($memory_7);
#line 561
wprinter::print_t($memory_0, $memory_6, $memory_2);
#line 561
undef($memory_6);
#line 566
$memory_6 = $memory_5->{'branch_list'};
#line 566
$memory_8 = 0;
#line 566
$memory_9 = 1;
#line 566
$memory_10 = c_rt_lib::array_len($memory_6);
#line 566
label_35:
#line 566
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 566
if (c_rt_lib::check_true($memory_11)) {goto label_33;}
#line 566
$memory_7 = $memory_6->[$memory_8];
#line 567
$memory_12 = " case ";
#line 567
pretty_printer_priv::state_print($memory_0, $memory_12);
#line 567
undef($memory_12);
#line 568
$memory_13 = $memory_7->{'variant'};
#line 568
$memory_12 = pretty_printer_priv::print_variant_case_decl($memory_13);
#line 568
undef($memory_13);
#line 568
$memory_13 = 1;
#line 568
$memory_13 = $memory_2 + $memory_13;
#line 568
wprinter::print_t($memory_0, $memory_12, $memory_13);
#line 568
undef($memory_13);
#line 568
undef($memory_12);
#line 569
$memory_12 = $memory_7->{'cmd'};
#line 569
pretty_printer_priv::print_st($memory_0, $memory_12, $memory_2);
#line 569
undef($memory_12);
#line 570
$memory_8 = $memory_8 + $memory_9;
#line 570
goto label_35;
#line 570
label_33:
#line 570
undef($memory_6);
#line 570
undef($memory_7);
#line 570
undef($memory_8);
#line 570
undef($memory_9);
#line 570
undef($memory_10);
#line 570
undef($memory_11);
#line 570
undef($memory_5);
#line 571
goto label_1;
#line 571
label_8:
#line 571
$memory_5 = c_rt_lib::ov_as($memory_3, 'fora');
#line 572
$memory_6 = $memory_5->{'short'};
#line 572
$memory_7 = "fora";
#line 572
$memory_8 = $memory_5->{'cmd'};
#line 572
$memory_10 = $memory_5->{'iter'};
#line 572
$memory_9 = [$memory_10];
#line 572
undef($memory_10);
#line 572
$memory_10 = $memory_5->{'array'};
#line 572
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 572
undef($memory_10);
#line 572
undef($memory_9);
#line 572
undef($memory_8);
#line 572
undef($memory_7);
#line 572
undef($memory_6);
#line 572
undef($memory_5);
#line 573
goto label_1;
#line 573
label_9:
#line 573
$memory_5 = c_rt_lib::ov_as($memory_3, 'forh');
#line 574
$memory_6 = $memory_5->{'short'};
#line 574
$memory_7 = "forh";
#line 574
$memory_8 = $memory_5->{'cmd'};
#line 574
$memory_10 = $memory_5->{'key'};
#line 574
$memory_11 = $memory_5->{'val'};
#line 574
$memory_9 = [$memory_10,$memory_11];
#line 574
undef($memory_10);
#line 574
undef($memory_11);
#line 574
$memory_10 = $memory_5->{'hash'};
#line 574
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 574
undef($memory_10);
#line 574
undef($memory_9);
#line 574
undef($memory_8);
#line 574
undef($memory_7);
#line 574
undef($memory_6);
#line 574
undef($memory_5);
#line 576
goto label_1;
#line 576
label_10:
#line 576
$memory_5 = c_rt_lib::ov_as($memory_3, 'rep');
#line 577
$memory_6 = $memory_5->{'short'};
#line 577
$memory_7 = "rep";
#line 577
$memory_8 = $memory_5->{'cmd'};
#line 577
$memory_10 = $memory_5->{'iter'};
#line 577
$memory_9 = [$memory_10];
#line 577
undef($memory_10);
#line 577
$memory_10 = $memory_5->{'count'};
#line 577
pretty_printer_priv::print_loop_or_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_10, $memory_2);
#line 577
undef($memory_10);
#line 577
undef($memory_9);
#line 577
undef($memory_8);
#line 577
undef($memory_7);
#line 577
undef($memory_6);
#line 577
undef($memory_5);
#line 578
goto label_1;
#line 578
label_11:
#line 578
$memory_5 = c_rt_lib::ov_as($memory_3, 'loop');
#line 579
$memory_6 = "loop";
#line 579
pretty_printer_priv::state_print($memory_0, $memory_6);
#line 579
undef($memory_6);
#line 580
pretty_printer_priv::print_st($memory_0, $memory_5, $memory_2);
#line 580
undef($memory_5);
#line 581
goto label_1;
#line 581
label_12:
#line 581
$memory_5 = c_rt_lib::ov_as($memory_3, 'if_mod');
#line 582
$memory_6 = "if";
#line 582
$memory_7 = $memory_5->{'cmd'};
#line 582
$memory_8 = [];
#line 582
$memory_9 = $memory_5->{'cond'};
#line 582
pretty_printer_priv::print_cond_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 582
undef($memory_9);
#line 582
undef($memory_8);
#line 582
undef($memory_7);
#line 582
undef($memory_6);
#line 582
undef($memory_5);
#line 583
goto label_1;
#line 583
label_13:
#line 583
$memory_5 = c_rt_lib::ov_as($memory_3, 'unless_mod');
#line 584
$memory_6 = "unless";
#line 584
$memory_7 = $memory_5->{'cmd'};
#line 584
$memory_8 = [];
#line 584
$memory_9 = $memory_5->{'cond'};
#line 584
pretty_printer_priv::print_cond_mod($memory_0, $memory_6, $memory_7, $memory_8, $memory_9, $memory_2);
#line 584
undef($memory_9);
#line 584
undef($memory_8);
#line 584
undef($memory_7);
#line 584
undef($memory_6);
#line 584
undef($memory_5);
#line 585
goto label_1;
#line 585
label_14:
#line 585
$memory_5 = c_rt_lib::ov_as($memory_3, 'value');
#line 586
$memory_6 = pretty_printer_priv::print_sim_value($memory_5);
#line 586
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 586
undef($memory_6);
#line 586
undef($memory_5);
#line 587
goto label_1;
#line 587
label_15:
#line 587
$memory_5 = c_rt_lib::ov_as($memory_3, 'try');
#line 588
$memory_7 = "try";
#line 588
$memory_6 = pretty_printer_priv::print_try_ensure($memory_5, $memory_7);
#line 588
undef($memory_7);
#line 588
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 588
undef($memory_6);
#line 588
undef($memory_5);
#line 589
goto label_1;
#line 589
label_16:
#line 589
$memory_5 = c_rt_lib::ov_as($memory_3, 'ensure');
#line 590
$memory_7 = "ensure";
#line 590
$memory_6 = pretty_printer_priv::print_try_ensure($memory_5, $memory_7);
#line 590
undef($memory_7);
#line 590
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 590
undef($memory_6);
#line 590
undef($memory_5);
#line 591
goto label_1;
#line 591
label_17:
#line 591
$memory_5 = c_rt_lib::ov_as($memory_3, 'return');
#line 592
$memory_6 = pretty_printer_priv::print_return($memory_5);
#line 592
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 592
undef($memory_6);
#line 592
undef($memory_5);
#line 593
goto label_1;
#line 593
label_18:
#line 594
$memory_5 = pretty_printer_priv::print_break();
#line 594
pretty_printer_priv::flush_sim_statement($memory_0, $memory_5, $memory_2);
#line 594
undef($memory_5);
#line 595
goto label_1;
#line 595
label_19:
#line 596
$memory_5 = pretty_printer_priv::print_continue();
#line 596
pretty_printer_priv::flush_sim_statement($memory_0, $memory_5, $memory_2);
#line 596
undef($memory_5);
#line 597
goto label_1;
#line 597
label_20:
#line 597
$memory_5 = c_rt_lib::ov_as($memory_3, 'die');
#line 598
$memory_6 = pretty_printer_priv::print_die($memory_5);
#line 598
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 598
undef($memory_6);
#line 598
undef($memory_5);
#line 599
goto label_1;
#line 599
label_21:
#line 599
$memory_5 = c_rt_lib::ov_as($memory_3, 'var_decl');
#line 600
$memory_6 = pretty_printer_priv::print_var_decl($memory_5);
#line 600
pretty_printer_priv::flush_sim_statement($memory_0, $memory_6, $memory_2);
#line 600
undef($memory_6);
#line 600
undef($memory_5);
#line 601
goto label_1;
#line 601
label_1:
#line 601
undef($memory_3);
#line 601
undef($memory_4);
#line 601
undef($memory_1);
#line 601
undef($memory_2);
#line 601
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
