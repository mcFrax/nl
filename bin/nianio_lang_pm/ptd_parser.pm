use c_rt_lib;
use tct;
use array;
use hash;
use ov;
use nast;
use ptd;
sub ptd_parser::fun_def_to_ptd;
sub ptd_parser::try_value_to_ptd;
sub ptd_parser_priv::parse_hash;

return 1;

sub ptd_parser::fun_def_to_ptd($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 14
$memory_1 = $memory_0->{'cmd'};
#line 15
$memory_2 = $memory_1;
#line 15
$memory_2 = c_rt_lib::ov_as($memory_2, 'block');
#line 15
$memory_1 = $memory_2;
#line 15
undef($memory_2);
#line 16
$memory_2 = array::len($memory_1);
#line 16
$memory_4 = 1;
#line 16
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_4);
#line 16
undef($memory_4);
#line 16
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 16
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 16
$memory_4 = 0;
#line 16
$memory_2 = $memory_1->[$memory_4];
#line 16
undef($memory_4);
#line 16
$memory_2 = $memory_2->{'cmd'};
#line 16
$memory_2 = c_rt_lib::ov_is($memory_2, 'return');
#line 16
label_3:
#line 16
undef($memory_3);
#line 16
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 16
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 16
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 16
$memory_3 = "type function should have only a return command";
#line 16
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 16
undef($memory_0);
#line 16
undef($memory_1);
#line 16
undef($memory_2);
#line 16
return $memory_3;
#line 16
undef($memory_3);
#line 16
goto label_2;
#line 16
label_2:
#line 16
undef($memory_2);
#line 17
$memory_4 = 0;
#line 17
$memory_3 = $memory_1->[$memory_4];
#line 17
undef($memory_4);
#line 17
$memory_3 = $memory_3->{'cmd'};
#line 17
$memory_3 = c_rt_lib::ov_as($memory_3, 'return');
#line 17
$memory_2 = ptd_parser::try_value_to_ptd($memory_3);
#line 17
undef($memory_3);
#line 17
undef($memory_0);
#line 17
undef($memory_1);
#line 17
return $memory_2;
#line 17
undef($memory_2);
#line 17
undef($memory_1);
#line 17
undef($memory_0);
#line 17
return;
}

sub ptd_parser::try_value_to_ptd($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];
#line 21
$memory_1 = $memory_0;
#line 21
$memory_1 = c_rt_lib::ov_is($memory_1, 'unary_op');
#line 21
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 21
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 22
$memory_2 = $memory_0;
#line 22
$memory_2 = c_rt_lib::ov_as($memory_2, 'unary_op');
#line 23
$memory_3 = $memory_2->{'op'};
#line 23
$memory_4 = "\@";
#line 23
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 23
undef($memory_4);
#line 23
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 23
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 23
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 23
$memory_4 = "ptd function argument can be other ptd function or reference type start witch \@: ";
#line 23
$memory_5 = $memory_2->{'op'};
#line 23
$memory_4 = $memory_4 . $memory_5;
#line 23
undef($memory_5);
#line 23
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_4);
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
#line 23
goto label_4;
#line 23
label_4:
#line 23
undef($memory_3);
#line 25
$memory_3 = $memory_2->{'val'};
#line 25
$memory_3 = c_rt_lib::ov_as($memory_3, 'fun_label');
#line 26
$memory_5 = $memory_3->{'module'};
#line 26
$memory_6 = "::";
#line 26
$memory_5 = $memory_5 . $memory_6;
#line 26
undef($memory_6);
#line 26
$memory_6 = $memory_3->{'name'};
#line 26
$memory_5 = $memory_5 . $memory_6;
#line 26
undef($memory_6);
#line 26
$memory_4 = tct::ref($memory_5);
#line 26
undef($memory_5);
#line 26
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 26
undef($memory_0);
#line 26
undef($memory_1);
#line 26
undef($memory_2);
#line 26
undef($memory_3);
#line 26
return $memory_4;
#line 26
undef($memory_4);
#line 26
undef($memory_2);
#line 26
undef($memory_3);
#line 27
goto label_2;
#line 27
label_2:
#line 27
undef($memory_1);
#line 28
$memory_1 = $memory_0;
#line 28
$memory_1 = c_rt_lib::ov_is($memory_1, 'fun_val');
#line 28
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 28
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 28
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 28
$memory_2 = "can parse only function: ";
#line 28
$memory_3 = ov::get_element($memory_0);
#line 28
$memory_2 = $memory_2 . $memory_3;
#line 28
undef($memory_3);
#line 28
$memory_2 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 28
undef($memory_0);
#line 28
undef($memory_1);
#line 28
return $memory_2;
#line 28
undef($memory_2);
#line 28
goto label_6;
#line 28
label_6:
#line 28
undef($memory_1);
#line 29
$memory_1 = $memory_0;
#line 29
$memory_1 = c_rt_lib::ov_as($memory_1, 'fun_val');
#line 30
$memory_2 = $memory_1->{'module'};
#line 30
$memory_3 = "ptd";
#line 30
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 30
undef($memory_3);
#line 30
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 30
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 30
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 30
$memory_3 = "can parse only ptd function: ";
#line 30
$memory_4 = $memory_1->{'module'};
#line 30
$memory_3 = $memory_3 . $memory_4;
#line 30
undef($memory_4);
#line 30
$memory_4 = "::";
#line 30
$memory_3 = $memory_3 . $memory_4;
#line 30
undef($memory_4);
#line 30
$memory_4 = $memory_1->{'name'};
#line 30
$memory_3 = $memory_3 . $memory_4;
#line 30
undef($memory_4);
#line 30
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 30
undef($memory_0);
#line 30
undef($memory_1);
#line 30
undef($memory_2);
#line 30
return $memory_3;
#line 30
undef($memory_3);
#line 30
goto label_8;
#line 30
label_8:
#line 30
undef($memory_2);
#line 32
$memory_3 = $memory_1->{'args'};
#line 32
$memory_2 = array::len($memory_3);
#line 32
undef($memory_3);
#line 33
$memory_3 = $memory_1->{'name'};
#line 34
$memory_4 = "sim";
#line 34
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 34
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 34
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 35
$memory_5 = 0;
#line 35
$memory_5 = c_rt_lib::to_nl($memory_2 == $memory_5);
#line 35
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 35
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 35
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 35
$memory_6 = "sim can't have arguments: ";
#line 35
$memory_6 = $memory_6 . $memory_2;
#line 35
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
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
return $memory_6;
#line 35
undef($memory_6);
#line 35
goto label_12;
#line 35
label_12:
#line 35
undef($memory_5);
#line 36
$memory_5 = tct::sim();
#line 36
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
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
return $memory_5;
#line 36
undef($memory_5);
#line 37
goto label_16;
#line 37
label_10:
#line 37
$memory_4 = "ptd_im";
#line 37
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 37
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 37
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 38
$memory_5 = 0;
#line 38
$memory_5 = c_rt_lib::to_nl($memory_2 == $memory_5);
#line 38
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 38
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 38
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 38
$memory_6 = "im can't have arguments: ";
#line 38
$memory_6 = $memory_6 . $memory_2;
#line 38
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
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
undef($memory_5);
#line 38
return $memory_6;
#line 38
undef($memory_6);
#line 38
goto label_15;
#line 38
label_15:
#line 38
undef($memory_5);
#line 39
$memory_5 = tct::tct_im();
#line 39
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
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
return $memory_5;
#line 39
undef($memory_5);
#line 40
goto label_16;
#line 40
label_13:
#line 40
$memory_4 = "void";
#line 40
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 40
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 40
if (c_rt_lib::check_true($memory_4)) {goto label_16;}
#line 41
$memory_5 = "Void type can be used only as a return type of function";
#line 41
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 41
undef($memory_0);
#line 41
undef($memory_1);
#line 41
undef($memory_2);
#line 41
undef($memory_3);
#line 41
undef($memory_4);
#line 41
return $memory_5;
#line 41
undef($memory_5);
#line 42
goto label_16;
#line 42
label_16:
#line 42
undef($memory_4);
#line 43
$memory_4 = "none";
#line 43
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 43
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 43
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 43
$memory_5 = "'none' type can be used only in 'var' type";
#line 43
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
undef($memory_4);
#line 43
return $memory_5;
#line 43
undef($memory_5);
#line 43
goto label_18;
#line 43
label_18:
#line 43
undef($memory_4);
#line 44
$memory_5 = $memory_1->{'args'};
#line 44
$memory_4 = array::len($memory_5);
#line 44
undef($memory_5);
#line 44
$memory_5 = 1;
#line 44
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 44
undef($memory_5);
#line 44
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 44
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 44
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 44
$memory_5 = "expected one argument in ";
#line 44
$memory_5 = $memory_5 . $memory_3;
#line 44
$memory_6 = " function call";
#line 44
$memory_5 = $memory_5 . $memory_6;
#line 44
undef($memory_6);
#line 44
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 44
undef($memory_0);
#line 44
undef($memory_1);
#line 44
undef($memory_2);
#line 44
undef($memory_3);
#line 44
undef($memory_4);
#line 44
return $memory_5;
#line 44
undef($memory_5);
#line 44
goto label_20;
#line 44
label_20:
#line 44
undef($memory_4);
#line 45
$memory_4 = $memory_1->{'args'};
#line 45
$memory_5 = 0;
#line 45
$memory_4 = $memory_4->[$memory_5];
#line 45
undef($memory_5);
#line 45
$memory_4 = $memory_4->{'val'};
#line 46
$memory_5 = "rec";
#line 46
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 46
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 46
if (c_rt_lib::check_true($memory_5)) {goto label_22;}
#line 47
$memory_6 = $memory_4;
#line 47
$memory_6 = c_rt_lib::ov_is($memory_6, 'hash_decl');
#line 47
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 47
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 47
if (c_rt_lib::check_true($memory_6)) {goto label_24;}
#line 47
$memory_7 = "rec must have hash: ";
#line 47
$memory_8 = ov::get_element($memory_4);
#line 47
$memory_7 = $memory_7 . $memory_8;
#line 47
undef($memory_8);
#line 47
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 47
undef($memory_0);
#line 47
undef($memory_1);
#line 47
undef($memory_2);
#line 47
undef($memory_3);
#line 47
undef($memory_4);
#line 47
undef($memory_5);
#line 47
undef($memory_6);
#line 47
return $memory_7;
#line 47
undef($memory_7);
#line 47
goto label_24;
#line 47
label_24:
#line 47
undef($memory_6);
#line 48
$memory_8 = ptd_parser_priv::parse_hash($memory_4);
#line 48
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 48
if (c_rt_lib::check_true($memory_7)) {goto label_25;}
#line 48
undef($memory_0);
#line 48
undef($memory_1);
#line 48
undef($memory_2);
#line 48
undef($memory_3);
#line 48
undef($memory_4);
#line 48
undef($memory_5);
#line 48
undef($memory_6);
#line 48
undef($memory_7);
#line 48
return $memory_8;
#line 48
label_25:
#line 48
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 48
undef($memory_7);
#line 48
undef($memory_8);
#line 49
$memory_7 = tct::rec($memory_6);
#line 49
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_7);
#line 49
undef($memory_0);
#line 49
undef($memory_1);
#line 49
undef($memory_2);
#line 49
undef($memory_3);
#line 49
undef($memory_4);
#line 49
undef($memory_5);
#line 49
undef($memory_6);
#line 49
return $memory_7;
#line 49
undef($memory_7);
#line 49
undef($memory_6);
#line 50
goto label_21;
#line 50
label_22:
#line 50
$memory_5 = "hash";
#line 50
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 50
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 50
if (c_rt_lib::check_true($memory_5)) {goto label_26;}
#line 51
$memory_8 = ptd_parser::try_value_to_ptd($memory_4);
#line 51
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 51
if (c_rt_lib::check_true($memory_7)) {goto label_27;}
#line 51
undef($memory_0);
#line 51
undef($memory_1);
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
undef($memory_7);
#line 51
return $memory_8;
#line 51
label_27:
#line 51
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 51
undef($memory_7);
#line 51
undef($memory_8);
#line 52
$memory_7 = tct::hash($memory_6);
#line 52
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_7);
#line 52
undef($memory_0);
#line 52
undef($memory_1);
#line 52
undef($memory_2);
#line 52
undef($memory_3);
#line 52
undef($memory_4);
#line 52
undef($memory_5);
#line 52
undef($memory_6);
#line 52
return $memory_7;
#line 52
undef($memory_7);
#line 52
undef($memory_6);
#line 53
goto label_21;
#line 53
label_26:
#line 53
$memory_5 = "arr";
#line 53
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 53
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 53
if (c_rt_lib::check_true($memory_5)) {goto label_28;}
#line 54
$memory_8 = ptd_parser::try_value_to_ptd($memory_4);
#line 54
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 54
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
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
return $memory_8;
#line 54
label_29:
#line 54
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 54
undef($memory_7);
#line 54
undef($memory_8);
#line 55
$memory_7 = tct::arr($memory_6);
#line 55
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_7);
#line 55
undef($memory_0);
#line 55
undef($memory_1);
#line 55
undef($memory_2);
#line 55
undef($memory_3);
#line 55
undef($memory_4);
#line 55
undef($memory_5);
#line 55
undef($memory_6);
#line 55
return $memory_7;
#line 55
undef($memory_7);
#line 55
undef($memory_6);
#line 56
goto label_21;
#line 56
label_28:
#line 56
$memory_5 = "var";
#line 56
$memory_5 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 56
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 56
if (c_rt_lib::check_true($memory_5)) {goto label_30;}
#line 57
$memory_6 = 1;
#line 57
$memory_6 = c_rt_lib::to_nl($memory_2 == $memory_6);
#line 57
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 57
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 57
if (c_rt_lib::check_true($memory_6)) {goto label_32;}
#line 57
$memory_7 = "var must have hash";
#line 57
$memory_7 = $memory_7 . $memory_2;
#line 57
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
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
return $memory_7;
#line 57
undef($memory_7);
#line 57
goto label_32;
#line 57
label_32:
#line 57
undef($memory_6);
#line 58
$memory_6 = $memory_4;
#line 58
$memory_6 = c_rt_lib::ov_is($memory_6, 'hash_decl');
#line 58
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 58
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 58
if (c_rt_lib::check_true($memory_6)) {goto label_34;}
#line 58
$memory_7 = "var must have hash: ";
#line 58
$memory_8 = ov::get_element($memory_4);
#line 58
$memory_7 = $memory_7 . $memory_8;
#line 58
undef($memory_8);
#line 58
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 58
undef($memory_0);
#line 58
undef($memory_1);
#line 58
undef($memory_2);
#line 58
undef($memory_3);
#line 58
undef($memory_4);
#line 58
undef($memory_5);
#line 58
undef($memory_6);
#line 58
return $memory_7;
#line 58
undef($memory_7);
#line 58
goto label_34;
#line 58
label_34:
#line 58
undef($memory_6);
#line 59
$memory_6 = $memory_4;
#line 59
$memory_6 = c_rt_lib::ov_as($memory_6, 'hash_decl');
#line 60
$memory_7 = {};
#line 61
$memory_9 = 0;
#line 61
$memory_10 = 1;
#line 61
$memory_11 = c_rt_lib::array_len($memory_6);
#line 61
label_37:
#line 61
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 61
if (c_rt_lib::check_true($memory_12)) {goto label_35;}
#line 61
$memory_8 = $memory_6->[$memory_9];
#line 62
$memory_13 = $memory_8->{'val'};
#line 62
$memory_13 = c_rt_lib::ov_is($memory_13, 'fun_val');
#line 62
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 62
if (c_rt_lib::check_true($memory_13)) {goto label_39;}
#line 63
$memory_14 = $memory_8->{'val'};
#line 63
$memory_14 = c_rt_lib::ov_as($memory_14, 'fun_val');
#line 63
$memory_1 = $memory_14;
#line 63
undef($memory_14);
#line 64
$memory_14 = $memory_1->{'module'};
#line 64
$memory_16 = "ptd";
#line 64
$memory_14 = c_rt_lib::to_nl($memory_14 eq $memory_16);
#line 64
undef($memory_16);
#line 64
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 64
if (c_rt_lib::check_true($memory_15)) {goto label_42;}
#line 64
$memory_14 = $memory_1->{'name'};
#line 64
$memory_16 = "none";
#line 64
$memory_14 = c_rt_lib::to_nl($memory_14 eq $memory_16);
#line 64
undef($memory_16);
#line 64
label_42:
#line 64
undef($memory_15);
#line 64
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 64
if (c_rt_lib::check_true($memory_14)) {goto label_41;}
#line 65
$memory_15 = $memory_8->{'key'};
#line 65
$memory_15 = c_rt_lib::ov_as($memory_15, 'hash_key');
#line 65
$memory_16 = tct::none();
#line 65
hash::set_value($memory_7, $memory_15, $memory_16);
#line 65
undef($memory_16);
#line 65
undef($memory_15);
#line 66
undef($memory_13);
#line 66
undef($memory_14);
#line 66
goto label_36;
#line 67
goto label_41;
#line 67
label_41:
#line 67
undef($memory_14);
#line 68
goto label_39;
#line 68
label_39:
#line 68
undef($memory_13);
#line 69
$memory_16 = $memory_8->{'val'};
#line 69
$memory_15 = ptd_parser::try_value_to_ptd($memory_16);
#line 69
undef($memory_16);
#line 69
$memory_14 = c_rt_lib::ov_is($memory_15, 'ok');
#line 69
if (c_rt_lib::check_true($memory_14)) {goto label_43;}
#line 69
undef($memory_0);
#line 69
undef($memory_1);
#line 69
undef($memory_2);
#line 69
undef($memory_3);
#line 69
undef($memory_4);
#line 69
undef($memory_5);
#line 69
undef($memory_6);
#line 69
undef($memory_7);
#line 69
undef($memory_8);
#line 69
undef($memory_9);
#line 69
undef($memory_10);
#line 69
undef($memory_11);
#line 69
undef($memory_12);
#line 69
undef($memory_13);
#line 69
undef($memory_14);
#line 69
return $memory_15;
#line 69
label_43:
#line 69
$memory_13 = c_rt_lib::ov_as($memory_15, 'ok');
#line 69
undef($memory_14);
#line 69
undef($memory_15);
#line 70
$memory_14 = $memory_8->{'key'};
#line 70
$memory_14 = c_rt_lib::ov_as($memory_14, 'hash_key');
#line 70
hash::set_value($memory_7, $memory_14, $memory_13);
#line 70
undef($memory_14);
#line 70
undef($memory_13);
#line 70
label_36:
#line 71
$memory_9 = $memory_9 + $memory_10;
#line 71
goto label_37;
#line 71
label_35:
#line 71
undef($memory_8);
#line 71
undef($memory_9);
#line 71
undef($memory_10);
#line 71
undef($memory_11);
#line 71
undef($memory_12);
#line 72
$memory_8 = tct::var($memory_7);
#line 72
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_8);
#line 72
undef($memory_0);
#line 72
undef($memory_1);
#line 72
undef($memory_2);
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
#line 72
return $memory_8;
#line 72
undef($memory_8);
#line 72
undef($memory_6);
#line 72
undef($memory_7);
#line 73
goto label_21;
#line 73
label_30:
#line 74
$memory_6 = "it is not type function : ";
#line 74
$memory_6 = $memory_6 . $memory_3;
#line 74
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_6);
#line 74
undef($memory_0);
#line 74
undef($memory_1);
#line 74
undef($memory_2);
#line 74
undef($memory_3);
#line 74
undef($memory_4);
#line 74
undef($memory_5);
#line 74
return $memory_6;
#line 74
undef($memory_6);
#line 75
goto label_21;
#line 75
label_21:
#line 75
undef($memory_5);
#line 75
undef($memory_1);
#line 75
undef($memory_2);
#line 75
undef($memory_3);
#line 75
undef($memory_4);
#line 75
undef($memory_0);
#line 75
return;
}

sub ptd_parser_priv::parse_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];
#line 79
$memory_1 = $memory_0;
#line 79
$memory_1 = c_rt_lib::ov_as($memory_1, 'hash_decl');
#line 80
$memory_2 = {};
#line 81
$memory_4 = 0;
#line 81
$memory_5 = 1;
#line 81
$memory_6 = c_rt_lib::array_len($memory_1);
#line 81
label_3:
#line 81
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 81
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 81
$memory_3 = $memory_1->[$memory_4];
#line 82
$memory_11 = $memory_3->{'val'};
#line 82
$memory_10 = ptd_parser::try_value_to_ptd($memory_11);
#line 82
undef($memory_11);
#line 82
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 82
if (c_rt_lib::check_true($memory_9)) {goto label_4;}
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
undef($memory_7);
#line 82
undef($memory_8);
#line 82
undef($memory_9);
#line 82
return $memory_10;
#line 82
label_4:
#line 82
$memory_8 = c_rt_lib::ov_as($memory_10, 'ok');
#line 82
undef($memory_9);
#line 82
undef($memory_10);
#line 83
$memory_9 = $memory_3->{'key'};
#line 83
$memory_9 = c_rt_lib::ov_as($memory_9, 'hash_key');
#line 83
hash::set_value($memory_2, $memory_9, $memory_8);
#line 83
undef($memory_9);
#line 83
undef($memory_8);
#line 84
$memory_4 = $memory_4 + $memory_5;
#line 84
goto label_3;
#line 84
label_1:
#line 84
undef($memory_3);
#line 84
undef($memory_4);
#line 84
undef($memory_5);
#line 84
undef($memory_6);
#line 84
undef($memory_7);
#line 85
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 85
undef($memory_0);
#line 85
undef($memory_1);
#line 85
undef($memory_2);
#line 85
return $memory_3;
#line 85
undef($memory_3);
#line 85
undef($memory_1);
#line 85
undef($memory_2);
#line 85
undef($memory_0);
#line 85
return;
}
