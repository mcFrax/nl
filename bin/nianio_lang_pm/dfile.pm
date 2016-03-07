use c_rt_lib;
use ov;
use c_fe_lib;
use c_std_lib;
use string;
use hash;
use array;
use nl;
use boolean_t;
use ptd;
sub dfile::fsave;
sub dfile::fload;
sub dfile::ssave;
sub dfile::debug;
sub dfile::ssave_net_format;
sub dfile_priv::eat_ws;
sub dfile_priv::get_char;
sub dfile_priv::is_ov;
sub dfile_priv::eat_non_ws;
sub dfile_priv::parse_scalar;
sub dfile_priv::match_s;
sub dfile::state_t;
sub dfile_priv::parse;
sub dfile::sload;
sub dfile::try_sload;
sub dfile::state_out;
sub dfile_priv::sp;
sub dfile_priv::sprintstr;
sub dfile_priv::is_simple_string;
sub dfile_priv::sprint_hash_key;
sub dfile_priv::get_ind;
sub dfile_priv::sprint_hash;
sub dfile_priv::handle_debug;
sub dfile_priv::sprint;
sub dfile_priv::print_net_formatstr;
sub dfile_priv::print_net_format;

return 1;

sub dfile::fsave($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 17
$memory_4 = dfile::ssave($memory_1);
#line 17
$memory_3 = c_fe_lib::string_to_file($memory_0, $memory_4);
#line 17
undef($memory_4);
#line 17
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 17
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 17
$memory_3 = c_rt_lib::ov_mk_arg('ensure', $memory_3);
#line 17
die(dfile::ssave($memory_3));
#line 17
label_1:
#line 17
undef($memory_2);
#line 17
undef($memory_3);
#line 17
undef($memory_0);
#line 17
undef($memory_1);
#line 17
return;
}

sub dfile::fload($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 21
$memory_3 = c_fe_lib::file_to_string($memory_0);
#line 21
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 21
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 21
$memory_3 = c_rt_lib::ov_mk_arg('ensure', $memory_3);
#line 21
die(dfile::ssave($memory_3));
#line 21
label_1:
#line 21
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 21
undef($memory_2);
#line 21
undef($memory_3);
#line 22
$memory_2 = dfile::sload($memory_1);
#line 22
undef($memory_0);
#line 22
undef($memory_1);
#line 22
return $memory_2;
#line 22
undef($memory_2);
#line 22
undef($memory_1);
#line 22
undef($memory_0);
#line 22
return;
}

sub dfile::ssave($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 26
$memory_2 = "";
#line 26
$memory_3 = {};
#line 26
$memory_1 = {str => $memory_2,objects => $memory_3,};
#line 26
undef($memory_2);
#line 26
undef($memory_3);
#line 27
$memory_2 = 0;
#line 27
$memory_3 = c_rt_lib::to_nl(0);
#line 27
dfile_priv::sprint($memory_1, $memory_0, $memory_2, $memory_3);
#line 27
undef($memory_3);
#line 27
undef($memory_2);
#line 28
$memory_2 = $memory_1->{'str'};
#line 28
undef($memory_0);
#line 28
undef($memory_1);
#line 28
return $memory_2;
#line 28
undef($memory_2);
#line 28
undef($memory_1);
#line 28
undef($memory_0);
#line 28
return;
}

sub dfile::debug($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 32
$memory_2 = "";
#line 32
$memory_3 = {};
#line 32
$memory_1 = {str => $memory_2,objects => $memory_3,};
#line 32
undef($memory_2);
#line 32
undef($memory_3);
#line 33
$memory_2 = 0;
#line 33
$memory_3 = c_rt_lib::to_nl(1);
#line 33
dfile_priv::sprint($memory_1, $memory_0, $memory_2, $memory_3);
#line 33
undef($memory_3);
#line 33
undef($memory_2);
#line 34
$memory_2 = $memory_1->{'str'};
#line 34
undef($memory_0);
#line 34
undef($memory_1);
#line 34
return $memory_2;
#line 34
undef($memory_2);
#line 34
undef($memory_1);
#line 34
undef($memory_0);
#line 34
return;
}

sub dfile::ssave_net_format($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 38
$memory_2 = "";
#line 38
$memory_3 = {};
#line 38
$memory_1 = {str => $memory_2,objects => $memory_3,};
#line 38
undef($memory_2);
#line 38
undef($memory_3);
#line 39
dfile_priv::print_net_format($memory_1, $memory_0);
#line 40
$memory_2 = $memory_1->{'str'};
#line 40
undef($memory_0);
#line 40
undef($memory_1);
#line 40
return $memory_2;
#line 40
undef($memory_2);
#line 40
undef($memory_1);
#line 40
undef($memory_0);
#line 40
return;
}

sub dfile_priv::eat_ws($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 44
label_2:
#line 45
$memory_1 = $memory_0->{'pos'};
#line 45
$memory_2 = $memory_0->{'len'};
#line 45
$memory_1 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 45
undef($memory_2);
#line 45
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 45
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 45
undef($memory_1);
#line 45
$_[0] = $memory_0;return;
#line 45
goto label_4;
#line 45
label_4:
#line 45
undef($memory_1);
#line 46
$memory_2 = dfile_priv::get_char($memory_0);
#line 46
$memory_1 = string::ord($memory_2);
#line 46
undef($memory_2);
#line 47
$memory_2 = 9;
#line 47
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 47
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 47
$memory_2 = 10;
#line 47
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 47
label_9:
#line 47
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 47
$memory_2 = 13;
#line 47
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 47
label_8:
#line 47
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 47
$memory_2 = 32;
#line 47
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 47
label_7:
#line 47
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 47
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 48
$memory_3 = "pos";
#line 48
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 48
$memory_4 = 1;
#line 48
$memory_3 = $memory_3 + $memory_4;
#line 48
$memory_5 = "pos";
#line 48
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 48
undef($memory_5);
#line 48
undef($memory_3);
#line 48
undef($memory_4);
#line 49
goto label_5;
#line 49
label_6:
#line 50
undef($memory_1);
#line 50
undef($memory_2);
#line 50
$_[0] = $memory_0;return;
#line 51
goto label_5;
#line 51
label_5:
#line 51
undef($memory_2);
#line 51
undef($memory_1);
#line 44
goto label_2;
#line 44
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::get_char($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 56
$memory_2 = ptd::sim();
#line 56
$memory_4 = $memory_0->{'str'};
#line 56
$memory_5 = $memory_0->{'pos'};
#line 56
$memory_6 = 1;
#line 56
$memory_3 = c_std_lib::fast_substr($memory_4, $memory_5, $memory_6);
#line 56
undef($memory_6);
#line 56
undef($memory_5);
#line 56
undef($memory_4);
#line 56
$memory_1 = ptd::ensure($memory_2, $memory_3);
#line 56
undef($memory_3);
#line 56
undef($memory_2);
#line 56
$_[0] = $memory_0;return $memory_1;
#line 56
undef($memory_1);
#line 56
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::is_ov($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 60
$memory_2 = $memory_0->{'str'};
#line 60
$memory_3 = $memory_0->{'pos'};
#line 60
$memory_4 = 7;
#line 60
$memory_1 = c_std_lib::fast_substr($memory_2, $memory_3, $memory_4);
#line 60
undef($memory_4);
#line 60
undef($memory_3);
#line 60
undef($memory_2);
#line 60
$memory_2 = "ov::mk(";
#line 60
$memory_1 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 60
undef($memory_2);
#line 60
$_[0] = $memory_0;return $memory_1;
#line 60
undef($memory_1);
#line 60
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::eat_non_ws($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 64
$memory_2 = "";
#line 65
$memory_3 = $memory_0->{'len'};
#line 66
$memory_4 = $memory_0->{'pos'};
#line 66
$memory_4 = c_rt_lib::to_nl($memory_4 >= $memory_3);
#line 66
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 66
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 67
$memory_5 = c_rt_lib::to_nl(1);
#line 67
$memory_1 = $memory_5;
#line 67
undef($memory_5);
#line 68
$memory_5 = "pos ";
#line 68
$memory_6 = $memory_0->{'pos'};
#line 68
$memory_5 = $memory_5 . $memory_6;
#line 68
undef($memory_6);
#line 68
$memory_6 = ": expected scalar";
#line 68
$memory_5 = $memory_5 . $memory_6;
#line 68
undef($memory_6);
#line 68
undef($memory_2);
#line 68
undef($memory_3);
#line 68
undef($memory_4);
#line 68
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_5;
#line 68
undef($memory_5);
#line 69
goto label_2;
#line 69
label_2:
#line 69
undef($memory_4);
#line 70
label_4:
#line 71
$memory_4 = dfile_priv::get_char($memory_0);
#line 72
$memory_5 = string::is_letter($memory_4);
#line 72
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 72
$memory_5 = string::is_digit($memory_4);
#line 72
label_8:
#line 72
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 72
$memory_5 = "_";
#line 72
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 72
label_7:
#line 72
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 72
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 72
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 72
undef($memory_4);
#line 72
undef($memory_5);
#line 72
goto label_3;
#line 72
goto label_6;
#line 72
label_6:
#line 72
undef($memory_5);
#line 73
$memory_5 = "pos";
#line 73
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 73
$memory_6 = 1;
#line 73
$memory_5 = $memory_5 + $memory_6;
#line 73
$memory_7 = "pos";
#line 73
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 73
undef($memory_7);
#line 73
undef($memory_5);
#line 73
undef($memory_6);
#line 74
$memory_2 = $memory_2 . $memory_4;
#line 75
$memory_5 = $memory_0->{'pos'};
#line 75
$memory_5 = c_rt_lib::to_nl($memory_5 >= $memory_3);
#line 75
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 75
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 75
undef($memory_4);
#line 75
undef($memory_5);
#line 75
goto label_3;
#line 75
goto label_10;
#line 75
label_10:
#line 75
undef($memory_5);
#line 75
undef($memory_4);
#line 70
goto label_4;
#line 70
label_3:
#line 77
$memory_4 = "";
#line 77
$memory_4 = c_rt_lib::to_nl($memory_2 eq $memory_4);
#line 77
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 77
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 78
$memory_5 = c_rt_lib::to_nl(1);
#line 78
$memory_1 = $memory_5;
#line 78
undef($memory_5);
#line 79
$memory_5 = "pos ";
#line 79
$memory_6 = $memory_0->{'pos'};
#line 79
$memory_5 = $memory_5 . $memory_6;
#line 79
undef($memory_6);
#line 79
$memory_6 = ": expected scalar";
#line 79
$memory_5 = $memory_5 . $memory_6;
#line 79
undef($memory_6);
#line 79
undef($memory_2);
#line 79
undef($memory_3);
#line 79
undef($memory_4);
#line 79
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_5;
#line 79
undef($memory_5);
#line 80
goto label_12;
#line 80
label_12:
#line 80
undef($memory_4);
#line 81
undef($memory_3);
#line 81
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_2;
#line 81
undef($memory_2);
#line 81
undef($memory_3);
#line 81
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub dfile_priv::parse_scalar($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 85
dfile_priv::eat_ws($memory_0);
#line 86
$memory_2 = dfile_priv::get_char($memory_0);
#line 86
$memory_3 = "\"";
#line 86
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 86
undef($memory_3);
#line 86
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 86
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 87
$memory_3 = "pos";
#line 87
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 87
$memory_4 = 1;
#line 87
$memory_3 = $memory_3 + $memory_4;
#line 87
$memory_5 = "pos";
#line 87
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 87
undef($memory_5);
#line 87
undef($memory_3);
#line 87
undef($memory_4);
#line 88
$memory_3 = "";
#line 89
label_4:
#line 90
$memory_4 = $memory_0->{'pos'};
#line 90
$memory_5 = $memory_0->{'len'};
#line 90
$memory_4 = c_rt_lib::to_nl($memory_4 >= $memory_5);
#line 90
undef($memory_5);
#line 90
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 90
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 91
$memory_5 = c_rt_lib::to_nl(1);
#line 91
$memory_1 = $memory_5;
#line 91
undef($memory_5);
#line 92
$memory_5 = "pos ";
#line 92
$memory_6 = $memory_0->{'pos'};
#line 92
$memory_5 = $memory_5 . $memory_6;
#line 92
undef($memory_6);
#line 92
$memory_6 = ": expected \"";
#line 92
$memory_5 = $memory_5 . $memory_6;
#line 92
undef($memory_6);
#line 92
undef($memory_2);
#line 92
undef($memory_3);
#line 92
undef($memory_4);
#line 92
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_5;
#line 92
undef($memory_5);
#line 93
goto label_6;
#line 93
label_6:
#line 93
undef($memory_4);
#line 94
$memory_4 = dfile_priv::get_char($memory_0);
#line 95
$memory_5 = "pos";
#line 95
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 95
$memory_6 = 1;
#line 95
$memory_5 = $memory_5 + $memory_6;
#line 95
$memory_7 = "pos";
#line 95
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 95
undef($memory_7);
#line 95
undef($memory_5);
#line 95
undef($memory_6);
#line 96
$memory_5 = "\"";
#line 96
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 96
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 96
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 96
undef($memory_4);
#line 96
undef($memory_5);
#line 96
goto label_3;
#line 96
goto label_8;
#line 96
label_8:
#line 96
undef($memory_5);
#line 97
$memory_5 = "\\";
#line 97
$memory_5 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 97
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 97
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 98
$memory_6 = dfile_priv::get_char($memory_0);
#line 99
$memory_7 = "n";
#line 99
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 99
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 99
if (c_rt_lib::check_true($memory_7)) {goto label_12;}
#line 100
$memory_8 = string::lf();
#line 100
$memory_3 = $memory_3 . $memory_8;
#line 100
undef($memory_8);
#line 101
goto label_11;
#line 101
label_12:
#line 101
$memory_7 = "r";
#line 101
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 101
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 101
if (c_rt_lib::check_true($memory_7)) {goto label_13;}
#line 102
$memory_8 = string::r();
#line 102
$memory_3 = $memory_3 . $memory_8;
#line 102
undef($memory_8);
#line 103
goto label_11;
#line 103
label_13:
#line 103
$memory_7 = "t";
#line 103
$memory_7 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 103
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 103
if (c_rt_lib::check_true($memory_7)) {goto label_14;}
#line 104
$memory_8 = string::tab();
#line 104
$memory_3 = $memory_3 . $memory_8;
#line 104
undef($memory_8);
#line 105
goto label_11;
#line 105
label_14:
#line 106
$memory_3 = $memory_3 . $memory_6;
#line 107
goto label_11;
#line 107
label_11:
#line 107
undef($memory_7);
#line 108
$memory_7 = "pos";
#line 108
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 108
$memory_8 = 1;
#line 108
$memory_7 = $memory_7 + $memory_8;
#line 108
$memory_9 = "pos";
#line 108
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_7);
#line 108
undef($memory_9);
#line 108
undef($memory_7);
#line 108
undef($memory_8);
#line 108
undef($memory_6);
#line 109
goto label_9;
#line 109
label_10:
#line 110
$memory_3 = $memory_3 . $memory_4;
#line 111
goto label_9;
#line 111
label_9:
#line 111
undef($memory_5);
#line 111
undef($memory_4);
#line 89
goto label_4;
#line 89
label_3:
#line 113
undef($memory_2);
#line 113
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_3;
#line 113
undef($memory_3);
#line 114
goto label_1;
#line 114
label_2:
#line 115
$memory_3 = dfile_priv::eat_non_ws($memory_0, $memory_1);
#line 115
undef($memory_2);
#line 115
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_3;
#line 115
undef($memory_3);
#line 116
goto label_1;
#line 116
label_1:
#line 116
undef($memory_2);
#line 116
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub dfile_priv::match_s($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 120
$memory_2 = string::length($memory_1);
#line 121
$memory_4 = $memory_0->{'str'};
#line 121
$memory_5 = $memory_0->{'pos'};
#line 121
$memory_3 = c_std_lib::fast_substr($memory_4, $memory_5, $memory_2);
#line 121
undef($memory_5);
#line 121
undef($memory_4);
#line 121
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_1);
#line 121
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 121
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 122
$memory_4 = "pos";
#line 122
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 122
$memory_4 = $memory_4 + $memory_2;
#line 122
$memory_5 = "pos";
#line 122
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 122
undef($memory_5);
#line 122
undef($memory_4);
#line 123
$memory_4 = c_rt_lib::to_nl(1);
#line 123
undef($memory_1);
#line 123
undef($memory_2);
#line 123
undef($memory_3);
#line 123
$_[0] = $memory_0;return $memory_4;
#line 123
undef($memory_4);
#line 124
goto label_1;
#line 124
label_2:
#line 125
$memory_4 = c_rt_lib::to_nl(0);
#line 125
undef($memory_1);
#line 125
undef($memory_2);
#line 125
undef($memory_3);
#line 125
$_[0] = $memory_0;return $memory_4;
#line 125
undef($memory_4);
#line 126
goto label_1;
#line 126
label_1:
#line 126
undef($memory_3);
#line 126
undef($memory_2);
#line 126
undef($memory_1);
#line 126
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 130
$memory_3 = ptd::sim();
#line 130
$memory_2 = ptd::arr($memory_3);
#line 130
undef($memory_3);
#line 130
$memory_3 = ptd::sim();
#line 130
$memory_4 = ptd::sim();
#line 130
$memory_1 = {str => $memory_2,len => $memory_3,pos => $memory_4,};
#line 130
undef($memory_2);
#line 130
undef($memory_3);
#line 130
undef($memory_4);
#line 130
$memory_0 = ptd::rec($memory_1);
#line 130
undef($memory_1);
#line 130
return $memory_0;
#line 130
undef($memory_0);
#line 130
return;
}

my $_state_t;
sub dfile::state_t() {
	$_state_t = dfile::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub dfile_priv::parse($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 134
dfile_priv::eat_ws($memory_0);
#line 135
$memory_2 = dfile_priv::get_char($memory_0);
#line 136
$memory_3 = "{";
#line 136
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 136
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 136
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 137
$memory_4 = 1;
#line 137
$memory_5 = "pos";
#line 137
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 137
$memory_5 = $memory_5 + $memory_4;
#line 137
$memory_6 = "pos";
#line 137
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 137
undef($memory_6);
#line 137
undef($memory_4);
#line 137
undef($memory_5);
#line 138
$memory_4 = {};
#line 139
dfile_priv::eat_ws($memory_0);
#line 140
label_4:
#line 140
$memory_6 = "}";
#line 140
$memory_5 = dfile_priv::match_s($memory_0, $memory_6);
#line 140
undef($memory_6);
#line 140
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 140
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 140
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 141
$memory_6 = dfile_priv::parse_scalar($memory_0, $memory_1);
#line 142
$memory_7 = $memory_1;
#line 142
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 142
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 142
undef($memory_2);
#line 142
undef($memory_3);
#line 142
undef($memory_4);
#line 142
undef($memory_5);
#line 142
undef($memory_7);
#line 142
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_6;
#line 142
goto label_6;
#line 142
label_6:
#line 142
undef($memory_7);
#line 143
dfile_priv::eat_ws($memory_0);
#line 144
$memory_8 = "=>";
#line 144
$memory_7 = dfile_priv::match_s($memory_0, $memory_8);
#line 144
undef($memory_8);
#line 144
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 144
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 144
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 145
$memory_8 = c_rt_lib::to_nl(1);
#line 145
$memory_1 = $memory_8;
#line 145
undef($memory_8);
#line 146
$memory_8 = "pos ";
#line 146
$memory_9 = $memory_0->{'pos'};
#line 146
$memory_8 = $memory_8 . $memory_9;
#line 146
undef($memory_9);
#line 146
$memory_9 = ": expected =>";
#line 146
$memory_8 = $memory_8 . $memory_9;
#line 146
undef($memory_9);
#line 146
undef($memory_2);
#line 146
undef($memory_3);
#line 146
undef($memory_4);
#line 146
undef($memory_5);
#line 146
undef($memory_6);
#line 146
undef($memory_7);
#line 146
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_8;
#line 146
undef($memory_8);
#line 147
goto label_8;
#line 147
label_8:
#line 147
undef($memory_7);
#line 148
$memory_7 = dfile_priv::parse($memory_0, $memory_1);
#line 149
$memory_8 = $memory_1;
#line 149
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 149
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 149
undef($memory_2);
#line 149
undef($memory_3);
#line 149
undef($memory_4);
#line 149
undef($memory_5);
#line 149
undef($memory_6);
#line 149
undef($memory_8);
#line 149
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_7;
#line 149
goto label_10;
#line 149
label_10:
#line 149
undef($memory_8);
#line 150
hash::set_value($memory_4, $memory_6, $memory_7);
#line 151
dfile_priv::eat_ws($memory_0);
#line 152
$memory_9 = ",";
#line 152
$memory_8 = dfile_priv::match_s($memory_0, $memory_9);
#line 152
undef($memory_9);
#line 152
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 152
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 152
if (c_rt_lib::check_true($memory_8)) {goto label_12;}
#line 153
$memory_9 = c_rt_lib::to_nl(1);
#line 153
$memory_1 = $memory_9;
#line 153
undef($memory_9);
#line 154
$memory_9 = "pos ";
#line 154
$memory_10 = $memory_0->{'pos'};
#line 154
$memory_9 = $memory_9 . $memory_10;
#line 154
undef($memory_10);
#line 154
$memory_10 = ": expected ,";
#line 154
$memory_9 = $memory_9 . $memory_10;
#line 154
undef($memory_10);
#line 154
undef($memory_2);
#line 154
undef($memory_3);
#line 154
undef($memory_4);
#line 154
undef($memory_5);
#line 154
undef($memory_6);
#line 154
undef($memory_7);
#line 154
undef($memory_8);
#line 154
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_9;
#line 154
undef($memory_9);
#line 155
goto label_12;
#line 155
label_12:
#line 155
undef($memory_8);
#line 156
dfile_priv::eat_ws($memory_0);
#line 156
undef($memory_6);
#line 156
undef($memory_7);
#line 157
goto label_4;
#line 157
label_3:
#line 157
undef($memory_5);
#line 158
undef($memory_2);
#line 158
undef($memory_3);
#line 158
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_4;
#line 158
undef($memory_4);
#line 159
goto label_1;
#line 159
label_2:
#line 159
$memory_3 = "[";
#line 159
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 159
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 159
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 160
$memory_4 = 1;
#line 160
$memory_5 = "pos";
#line 160
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 160
$memory_5 = $memory_5 + $memory_4;
#line 160
$memory_6 = "pos";
#line 160
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 160
undef($memory_6);
#line 160
undef($memory_4);
#line 160
undef($memory_5);
#line 161
$memory_4 = [];
#line 162
dfile_priv::eat_ws($memory_0);
#line 163
label_15:
#line 163
$memory_6 = "]";
#line 163
$memory_5 = dfile_priv::match_s($memory_0, $memory_6);
#line 163
undef($memory_6);
#line 163
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 163
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 163
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 164
$memory_6 = dfile_priv::parse($memory_0, $memory_1);
#line 165
$memory_7 = $memory_1;
#line 165
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 165
if (c_rt_lib::check_true($memory_7)) {goto label_17;}
#line 165
undef($memory_2);
#line 165
undef($memory_3);
#line 165
undef($memory_4);
#line 165
undef($memory_5);
#line 165
undef($memory_7);
#line 165
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_6;
#line 165
goto label_17;
#line 165
label_17:
#line 165
undef($memory_7);
#line 166
array::push($memory_4, $memory_6);
#line 167
$memory_8 = ",";
#line 167
$memory_7 = dfile_priv::match_s($memory_0, $memory_8);
#line 167
undef($memory_8);
#line 167
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 167
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 167
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 168
$memory_8 = c_rt_lib::to_nl(1);
#line 168
$memory_1 = $memory_8;
#line 168
undef($memory_8);
#line 169
$memory_8 = "pos ";
#line 169
$memory_9 = $memory_0->{'pos'};
#line 169
$memory_8 = $memory_8 . $memory_9;
#line 169
undef($memory_9);
#line 169
$memory_9 = ": expected ,";
#line 169
$memory_8 = $memory_8 . $memory_9;
#line 169
undef($memory_9);
#line 169
undef($memory_2);
#line 169
undef($memory_3);
#line 169
undef($memory_4);
#line 169
undef($memory_5);
#line 169
undef($memory_6);
#line 169
undef($memory_7);
#line 169
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_8;
#line 169
undef($memory_8);
#line 170
goto label_19;
#line 170
label_19:
#line 170
undef($memory_7);
#line 171
dfile_priv::eat_ws($memory_0);
#line 171
undef($memory_6);
#line 172
goto label_15;
#line 172
label_14:
#line 172
undef($memory_5);
#line 173
undef($memory_2);
#line 173
undef($memory_3);
#line 173
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_4;
#line 173
undef($memory_4);
#line 174
goto label_1;
#line 174
label_13:
#line 174
$memory_3 = "o";
#line 174
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 174
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 174
if (c_rt_lib::check_true($memory_4)) {goto label_21;}
#line 174
$memory_3 = dfile_priv::is_ov($memory_0);
#line 174
label_21:
#line 174
undef($memory_4);
#line 174
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 174
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 175
$memory_4 = 7;
#line 175
$memory_5 = "pos";
#line 175
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 175
$memory_5 = $memory_5 + $memory_4;
#line 175
$memory_6 = "pos";
#line 175
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 175
undef($memory_6);
#line 175
undef($memory_4);
#line 175
undef($memory_5);
#line 176
$memory_4 = dfile_priv::parse_scalar($memory_0, $memory_1);
#line 177
$memory_5 = $memory_1;
#line 177
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 177
if (c_rt_lib::check_true($memory_5)) {goto label_23;}
#line 177
undef($memory_2);
#line 177
undef($memory_3);
#line 177
undef($memory_5);
#line 177
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_4;
#line 177
goto label_23;
#line 177
label_23:
#line 177
undef($memory_5);
#line 178
dfile_priv::eat_ws($memory_0);
#line 179
$memory_6 = ",";
#line 179
$memory_5 = dfile_priv::match_s($memory_0, $memory_6);
#line 179
undef($memory_6);
#line 179
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 179
if (c_rt_lib::check_true($memory_5)) {goto label_25;}
#line 180
$memory_6 = dfile_priv::parse($memory_0, $memory_1);
#line 181
$memory_7 = $memory_1;
#line 181
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 181
if (c_rt_lib::check_true($memory_7)) {goto label_27;}
#line 181
undef($memory_2);
#line 181
undef($memory_3);
#line 181
undef($memory_4);
#line 181
undef($memory_5);
#line 181
undef($memory_7);
#line 181
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_6;
#line 181
goto label_27;
#line 181
label_27:
#line 181
undef($memory_7);
#line 182
dfile_priv::eat_ws($memory_0);
#line 183
$memory_8 = ")";
#line 183
$memory_7 = dfile_priv::match_s($memory_0, $memory_8);
#line 183
undef($memory_8);
#line 183
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 183
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 183
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
#line 184
$memory_8 = c_rt_lib::to_nl(1);
#line 184
$memory_1 = $memory_8;
#line 184
undef($memory_8);
#line 185
$memory_8 = "pos ";
#line 185
$memory_9 = $memory_0->{'pos'};
#line 185
$memory_8 = $memory_8 . $memory_9;
#line 185
undef($memory_9);
#line 185
$memory_9 = ": expected )";
#line 185
$memory_8 = $memory_8 . $memory_9;
#line 185
undef($memory_9);
#line 185
undef($memory_2);
#line 185
undef($memory_3);
#line 185
undef($memory_4);
#line 185
undef($memory_5);
#line 185
undef($memory_6);
#line 185
undef($memory_7);
#line 185
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_8;
#line 185
undef($memory_8);
#line 186
goto label_29;
#line 186
label_29:
#line 186
undef($memory_7);
#line 187
$memory_7 = ov::mk_val($memory_4, $memory_6);
#line 187
undef($memory_2);
#line 187
undef($memory_3);
#line 187
undef($memory_4);
#line 187
undef($memory_5);
#line 187
undef($memory_6);
#line 187
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_7;
#line 187
undef($memory_7);
#line 187
undef($memory_6);
#line 188
goto label_25;
#line 188
label_25:
#line 188
undef($memory_5);
#line 189
dfile_priv::eat_ws($memory_0);
#line 190
$memory_6 = ")";
#line 190
$memory_5 = dfile_priv::match_s($memory_0, $memory_6);
#line 190
undef($memory_6);
#line 190
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 190
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 190
if (c_rt_lib::check_true($memory_5)) {goto label_31;}
#line 191
$memory_6 = c_rt_lib::to_nl(1);
#line 191
$memory_1 = $memory_6;
#line 191
undef($memory_6);
#line 192
$memory_6 = "pos ";
#line 192
$memory_7 = $memory_0->{'pos'};
#line 192
$memory_6 = $memory_6 . $memory_7;
#line 192
undef($memory_7);
#line 192
$memory_7 = ": expected )";
#line 192
$memory_6 = $memory_6 . $memory_7;
#line 192
undef($memory_7);
#line 192
undef($memory_2);
#line 192
undef($memory_3);
#line 192
undef($memory_4);
#line 192
undef($memory_5);
#line 192
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_6;
#line 192
undef($memory_6);
#line 193
goto label_31;
#line 193
label_31:
#line 193
undef($memory_5);
#line 194
dfile_priv::eat_ws($memory_0);
#line 195
$memory_5 = ov::mk($memory_4);
#line 195
undef($memory_2);
#line 195
undef($memory_3);
#line 195
undef($memory_4);
#line 195
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_5;
#line 195
undef($memory_5);
#line 195
undef($memory_4);
#line 196
goto label_1;
#line 196
label_20:
#line 197
$memory_4 = dfile_priv::parse_scalar($memory_0, $memory_1);
#line 197
undef($memory_2);
#line 197
undef($memory_3);
#line 197
$_[0] = $memory_0;$_[1] = $memory_1;return $memory_4;
#line 197
undef($memory_4);
#line 198
goto label_1;
#line 198
label_1:
#line 198
undef($memory_3);
#line 198
undef($memory_2);
#line 198
$_[0] = $memory_0;$_[1] = $memory_1;return;
$_[0] = $memory_0;$_[1] = $memory_1;}

sub dfile::sload($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 202
$memory_3 = dfile::try_sload($memory_0);
#line 202
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 202
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 202
$memory_3 = c_rt_lib::ov_mk_arg('ensure', $memory_3);
#line 202
die(dfile::ssave($memory_3));
#line 202
label_1:
#line 202
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 202
undef($memory_2);
#line 202
undef($memory_3);
#line 203
undef($memory_0);
#line 203
return $memory_1;
#line 203
undef($memory_1);
#line 203
undef($memory_0);
#line 203
return;
}

sub dfile::try_sload($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 207
$memory_2 = ptd::sim();
#line 207
$memory_1 = ptd::ensure($memory_2, $memory_0);
#line 207
undef($memory_2);
#line 208
$memory_3 = [$memory_1];
#line 208
$memory_4 = 0;
#line 208
$memory_5 = string::length($memory_1);
#line 208
$memory_2 = {str => $memory_3,pos => $memory_4,len => $memory_5,};
#line 208
undef($memory_3);
#line 208
undef($memory_4);
#line 208
undef($memory_5);
#line 209
$memory_3 = c_rt_lib::to_nl(0);
#line 210
$memory_4 = "use utf8;";
#line 210
dfile_priv::match_s($memory_2, $memory_4);
#line 210
undef($memory_4);
#line 211
dfile_priv::eat_ws($memory_2);
#line 212
$memory_4 = dfile_priv::parse($memory_2, $memory_3);
#line 213
dfile_priv::eat_ws($memory_2);
#line 214
$memory_5 = $memory_3;
#line 214
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 214
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 214
if (c_rt_lib::check_true($memory_6)) {goto label_3;}
#line 214
$memory_5 = $memory_2->{'pos'};
#line 214
$memory_7 = $memory_2->{'len'};
#line 214
$memory_5 = c_rt_lib::to_nl($memory_5 != $memory_7);
#line 214
undef($memory_7);
#line 214
label_3:
#line 214
undef($memory_6);
#line 214
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 214
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 215
$memory_6 = c_rt_lib::to_nl(1);
#line 215
$memory_3 = $memory_6;
#line 215
undef($memory_6);
#line 216
$memory_6 = "pos ";
#line 216
$memory_7 = $memory_2->{'pos'};
#line 216
$memory_6 = $memory_6 . $memory_7;
#line 216
undef($memory_7);
#line 216
$memory_7 = ": expected eof";
#line 216
$memory_6 = $memory_6 . $memory_7;
#line 216
undef($memory_7);
#line 216
$memory_4 = $memory_6;
#line 216
undef($memory_6);
#line 217
goto label_2;
#line 217
label_2:
#line 217
undef($memory_5);
#line 218
$memory_5 = $memory_3;
#line 218
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 218
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 219
$memory_7 = ptd::sim();
#line 219
$memory_6 = ptd::ensure($memory_7, $memory_4);
#line 219
undef($memory_7);
#line 219
$memory_4 = $memory_6;
#line 219
undef($memory_6);
#line 220
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 220
undef($memory_0);
#line 220
undef($memory_1);
#line 220
undef($memory_2);
#line 220
undef($memory_3);
#line 220
undef($memory_4);
#line 220
undef($memory_5);
#line 220
return $memory_6;
#line 220
undef($memory_6);
#line 221
goto label_4;
#line 221
label_5:
#line 222
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 222
undef($memory_0);
#line 222
undef($memory_1);
#line 222
undef($memory_2);
#line 222
undef($memory_3);
#line 222
undef($memory_4);
#line 222
undef($memory_5);
#line 222
return $memory_6;
#line 222
undef($memory_6);
#line 223
goto label_4;
#line 223
label_4:
#line 223
undef($memory_5);
#line 223
undef($memory_1);
#line 223
undef($memory_2);
#line 223
undef($memory_3);
#line 223
undef($memory_4);
#line 223
undef($memory_0);
#line 223
return;
}

sub dfile::__state_out() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 227
$memory_2 = ptd::sim();
#line 227
$memory_4 = {
	module => "boolean_t",
	name => "type",
};
#line 227
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 227
$memory_3 = ptd::hash($memory_4);
#line 227
undef($memory_4);
#line 227
$memory_1 = {str => $memory_2,objects => $memory_3,};
#line 227
undef($memory_2);
#line 227
undef($memory_3);
#line 227
$memory_0 = ptd::rec($memory_1);
#line 227
undef($memory_1);
#line 227
return $memory_0;
#line 227
undef($memory_0);
#line 227
return;
}

my $_state_out;
sub dfile::state_out() {
	$_state_out = dfile::__state_out() unless defined $_state_out;
	return $_state_out;
}

sub dfile_priv::sp($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 231
$memory_2 = "str";
#line 231
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 231
$memory_2 = $memory_2 . $memory_1;
#line 231
$memory_3 = "str";
#line 231
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 231
undef($memory_3);
#line 231
undef($memory_2);
#line 231
undef($memory_1);
#line 231
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::sprintstr($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 235
$memory_2 = "";
#line 235
$memory_1 = $memory_1 . $memory_2;
#line 235
undef($memory_2);
#line 236
$memory_3 = "\\";
#line 236
$memory_4 = "\\\\";
#line 236
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 236
undef($memory_4);
#line 236
undef($memory_3);
#line 236
$memory_1 = $memory_2;
#line 236
undef($memory_2);
#line 237
$memory_3 = "\$";
#line 237
$memory_4 = "\\\$";
#line 237
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 237
undef($memory_4);
#line 237
undef($memory_3);
#line 237
$memory_1 = $memory_2;
#line 237
undef($memory_2);
#line 238
$memory_3 = "\@";
#line 238
$memory_4 = "\\\@";
#line 238
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 238
undef($memory_4);
#line 238
undef($memory_3);
#line 238
$memory_1 = $memory_2;
#line 238
undef($memory_2);
#line 239
$memory_3 = "\"";
#line 239
$memory_4 = "\\\"";
#line 239
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 239
undef($memory_4);
#line 239
undef($memory_3);
#line 239
$memory_1 = $memory_2;
#line 239
undef($memory_2);
#line 240
$memory_2 = "\"";
#line 240
$memory_2 = $memory_2 . $memory_1;
#line 240
$memory_3 = "\"";
#line 240
$memory_2 = $memory_2 . $memory_3;
#line 240
undef($memory_3);
#line 240
dfile_priv::sp($memory_0, $memory_2);
#line 240
undef($memory_2);
#line 240
undef($memory_1);
#line 240
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::is_simple_string($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 244
$memory_1 = string::length($memory_0);
#line 245
$memory_2 = 0;
#line 245
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 245
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 245
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 245
$memory_3 = c_rt_lib::to_nl(0);
#line 245
undef($memory_0);
#line 245
undef($memory_1);
#line 245
undef($memory_2);
#line 245
return $memory_3;
#line 245
undef($memory_3);
#line 245
goto label_2;
#line 245
label_2:
#line 245
undef($memory_2);
#line 246
$memory_4 = 0;
#line 246
$memory_5 = 1;
#line 246
$memory_3 = string::substr($memory_0, $memory_4, $memory_5);
#line 246
undef($memory_5);
#line 246
undef($memory_4);
#line 246
$memory_2 = string::is_letter($memory_3);
#line 246
undef($memory_3);
#line 246
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 246
$memory_3 = 0;
#line 246
$memory_4 = 1;
#line 246
$memory_2 = string::substr($memory_0, $memory_3, $memory_4);
#line 246
undef($memory_4);
#line 246
undef($memory_3);
#line 246
$memory_3 = "_";
#line 246
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 246
undef($memory_3);
#line 246
label_5:
#line 246
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 246
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 246
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 246
$memory_3 = c_rt_lib::to_nl(0);
#line 246
undef($memory_0);
#line 246
undef($memory_1);
#line 246
undef($memory_2);
#line 246
return $memory_3;
#line 246
undef($memory_3);
#line 246
goto label_4;
#line 246
label_4:
#line 246
undef($memory_2);
#line 247
$memory_2 = 0;
#line 247
$memory_3 = 1;
#line 247
label_8:
#line 247
$memory_4 = c_rt_lib::to_nl($memory_2 >= $memory_1);
#line 247
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 248
$memory_6 = 1;
#line 248
$memory_5 = string::substr($memory_0, $memory_2, $memory_6);
#line 248
undef($memory_6);
#line 249
$memory_6 = string::is_letter($memory_5);
#line 249
if (c_rt_lib::check_true($memory_6)) {goto label_12;}
#line 249
$memory_6 = string::is_digit($memory_5);
#line 249
label_12:
#line 249
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 249
$memory_6 = "_";
#line 249
$memory_6 = c_rt_lib::to_nl($memory_5 eq $memory_6);
#line 249
label_11:
#line 249
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 249
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 249
if (c_rt_lib::check_true($memory_6)) {goto label_10;}
#line 249
$memory_7 = c_rt_lib::to_nl(0);
#line 249
undef($memory_0);
#line 249
undef($memory_1);
#line 249
undef($memory_2);
#line 249
undef($memory_3);
#line 249
undef($memory_4);
#line 249
undef($memory_5);
#line 249
undef($memory_6);
#line 249
return $memory_7;
#line 249
undef($memory_7);
#line 249
goto label_10;
#line 249
label_10:
#line 249
undef($memory_6);
#line 249
undef($memory_5);
#line 250
$memory_2 = $memory_2 + $memory_3;
#line 250
goto label_8;
#line 250
label_6:
#line 250
undef($memory_2);
#line 250
undef($memory_3);
#line 250
undef($memory_4);
#line 251
$memory_2 = c_rt_lib::to_nl(1);
#line 251
undef($memory_0);
#line 251
undef($memory_1);
#line 251
return $memory_2;
#line 251
undef($memory_2);
#line 251
undef($memory_1);
#line 251
undef($memory_0);
#line 251
return;
}

sub dfile_priv::sprint_hash_key($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 255
$memory_2 = dfile_priv::is_simple_string($memory_1);
#line 255
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 255
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 256
dfile_priv::sp($memory_0, $memory_1);
#line 257
goto label_1;
#line 257
label_2:
#line 258
dfile_priv::sprintstr($memory_0, $memory_1);
#line 259
goto label_1;
#line 259
label_1:
#line 259
undef($memory_2);
#line 259
undef($memory_1);
#line 259
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::get_ind($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 263
$memory_2 = string::tab();
#line 263
$memory_1 = string::char_times($memory_2, $memory_0);
#line 263
undef($memory_2);
#line 263
undef($memory_0);
#line 263
return $memory_1;
#line 263
undef($memory_1);
#line 263
undef($memory_0);
#line 263
return;
}

sub dfile_priv::sprint_hash($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 268
$memory_4 = "{";
#line 268
$memory_5 = string::lf();
#line 268
$memory_4 = $memory_4 . $memory_5;
#line 268
undef($memory_5);
#line 268
dfile_priv::sp($memory_0, $memory_4);
#line 268
undef($memory_4);
#line 269
$memory_6 = ptd::sim();
#line 269
$memory_5 = ptd::arr($memory_6);
#line 269
undef($memory_6);
#line 269
$memory_6 = hash::keys($memory_1);
#line 269
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 269
undef($memory_6);
#line 269
undef($memory_5);
#line 270
array::sort($memory_4);
#line 271
$memory_6 = 0;
#line 271
$memory_7 = 1;
#line 271
$memory_8 = c_rt_lib::array_len($memory_4);
#line 271
label_3:
#line 271
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 271
if (c_rt_lib::check_true($memory_9)) {goto label_1;}
#line 271
$memory_5 = $memory_4->[$memory_6];
#line 272
$memory_10 = hash::get_value($memory_1, $memory_5);
#line 273
$memory_12 = 1;
#line 273
$memory_12 = $memory_2 + $memory_12;
#line 273
$memory_11 = dfile_priv::get_ind($memory_12);
#line 273
undef($memory_12);
#line 273
dfile_priv::sp($memory_0, $memory_11);
#line 273
undef($memory_11);
#line 274
dfile_priv::sprint_hash_key($memory_0, $memory_5);
#line 275
$memory_11 = " => ";
#line 275
dfile_priv::sp($memory_0, $memory_11);
#line 275
undef($memory_11);
#line 276
$memory_11 = 1;
#line 276
$memory_11 = $memory_2 + $memory_11;
#line 276
dfile_priv::sprint($memory_0, $memory_10, $memory_11, $memory_3);
#line 276
undef($memory_11);
#line 277
$memory_11 = ",";
#line 277
$memory_12 = string::lf();
#line 277
$memory_11 = $memory_11 . $memory_12;
#line 277
undef($memory_12);
#line 277
dfile_priv::sp($memory_0, $memory_11);
#line 277
undef($memory_11);
#line 277
undef($memory_10);
#line 278
$memory_6 = $memory_6 + $memory_7;
#line 278
goto label_3;
#line 278
label_1:
#line 278
undef($memory_5);
#line 278
undef($memory_6);
#line 278
undef($memory_7);
#line 278
undef($memory_8);
#line 278
undef($memory_9);
#line 279
$memory_5 = dfile_priv::get_ind($memory_2);
#line 279
$memory_6 = "}";
#line 279
$memory_5 = $memory_5 . $memory_6;
#line 279
undef($memory_6);
#line 279
dfile_priv::sp($memory_0, $memory_5);
#line 279
undef($memory_5);
#line 279
undef($memory_4);
#line 279
undef($memory_1);
#line 279
undef($memory_2);
#line 279
undef($memory_3);
#line 279
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::handle_debug($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 283
$memory_2 = nl::is_hash($memory_1);
#line 283
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 283
$memory_2 = nl::is_array($memory_1);
#line 283
label_4:
#line 283
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 283
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 283
$memory_4 = $memory_0->{'objects'};
#line 283
$memory_2 = hash::has_key($memory_4, $memory_1);
#line 283
undef($memory_4);
#line 283
label_3:
#line 283
undef($memory_3);
#line 283
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 283
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 284
dfile_priv::sp($memory_0, $memory_1);
#line 285
$memory_3 = c_rt_lib::to_nl(1);
#line 285
undef($memory_1);
#line 285
undef($memory_2);
#line 285
$_[0] = $memory_0;return $memory_3;
#line 285
undef($memory_3);
#line 286
goto label_1;
#line 286
label_2:
#line 287
$memory_3 = "objects";
#line 287
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 287
$memory_4 = c_rt_lib::to_nl(1);
#line 287
hash::set_value($memory_3, $memory_1, $memory_4);
#line 287
undef($memory_4);
#line 287
$memory_4 = "objects";
#line 287
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 287
undef($memory_4);
#line 287
undef($memory_3);
#line 288
$memory_3 = c_rt_lib::to_nl(0);
#line 288
undef($memory_1);
#line 288
undef($memory_2);
#line 288
$_[0] = $memory_0;return $memory_3;
#line 288
undef($memory_3);
#line 289
goto label_1;
#line 289
label_1:
#line 289
undef($memory_2);
#line 289
undef($memory_1);
#line 289
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::sprint($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];
#line 294
$memory_4 = $memory_3;
#line 294
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 294
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 294
$memory_4 = dfile_priv::handle_debug($memory_0, $memory_1);
#line 294
label_3:
#line 294
undef($memory_5);
#line 294
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 294
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 294
undef($memory_1);
#line 294
undef($memory_2);
#line 294
undef($memory_3);
#line 294
undef($memory_4);
#line 294
$_[0] = $memory_0;return;
#line 294
goto label_2;
#line 294
label_2:
#line 294
undef($memory_4);
#line 295
$memory_4 = nl::is_sim($memory_1);
#line 295
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 295
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 296
dfile_priv::sprintstr($memory_0, $memory_1);
#line 297
goto label_4;
#line 297
label_5:
#line 297
$memory_4 = nl::is_array($memory_1);
#line 297
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 297
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 298
$memory_5 = "[";
#line 298
$memory_6 = string::lf();
#line 298
$memory_5 = $memory_5 . $memory_6;
#line 298
undef($memory_6);
#line 298
dfile_priv::sp($memory_0, $memory_5);
#line 298
undef($memory_5);
#line 299
$memory_6 = 0;
#line 299
$memory_7 = 1;
#line 299
$memory_8 = c_rt_lib::array_len($memory_1);
#line 299
label_9:
#line 299
$memory_9 = c_rt_lib::to_nl($memory_6 >= $memory_8);
#line 299
if (c_rt_lib::check_true($memory_9)) {goto label_7;}
#line 299
$memory_5 = $memory_1->[$memory_6];
#line 300
$memory_11 = 1;
#line 300
$memory_11 = $memory_2 + $memory_11;
#line 300
$memory_10 = dfile_priv::get_ind($memory_11);
#line 300
undef($memory_11);
#line 300
dfile_priv::sp($memory_0, $memory_10);
#line 300
undef($memory_10);
#line 301
$memory_10 = 1;
#line 301
$memory_10 = $memory_2 + $memory_10;
#line 301
dfile_priv::sprint($memory_0, $memory_5, $memory_10, $memory_3);
#line 301
undef($memory_10);
#line 302
$memory_10 = ",";
#line 302
$memory_11 = string::lf();
#line 302
$memory_10 = $memory_10 . $memory_11;
#line 302
undef($memory_11);
#line 302
dfile_priv::sp($memory_0, $memory_10);
#line 302
undef($memory_10);
#line 303
$memory_6 = $memory_6 + $memory_7;
#line 303
goto label_9;
#line 303
label_7:
#line 303
undef($memory_5);
#line 303
undef($memory_6);
#line 303
undef($memory_7);
#line 303
undef($memory_8);
#line 303
undef($memory_9);
#line 304
$memory_5 = dfile_priv::get_ind($memory_2);
#line 304
$memory_6 = "]";
#line 304
$memory_5 = $memory_5 . $memory_6;
#line 304
undef($memory_6);
#line 304
dfile_priv::sp($memory_0, $memory_5);
#line 304
undef($memory_5);
#line 305
goto label_4;
#line 305
label_6:
#line 305
$memory_4 = nl::is_hash($memory_1);
#line 305
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 305
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 306
dfile_priv::sprint_hash($memory_0, $memory_1, $memory_2, $memory_3);
#line 307
goto label_4;
#line 307
label_10:
#line 307
$memory_4 = nl::is_variant($memory_1);
#line 307
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 307
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 308
$memory_5 = "ov::mk(";
#line 308
dfile_priv::sp($memory_0, $memory_5);
#line 308
undef($memory_5);
#line 309
$memory_5 = ov::get_element($memory_1);
#line 309
dfile_priv::sprintstr($memory_0, $memory_5);
#line 309
undef($memory_5);
#line 310
$memory_5 = ov::has_value($memory_1);
#line 310
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 310
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 311
$memory_6 = ", ";
#line 311
dfile_priv::sp($memory_0, $memory_6);
#line 311
undef($memory_6);
#line 312
$memory_6 = ov::get_value($memory_1);
#line 312
dfile_priv::sprint($memory_0, $memory_6, $memory_2, $memory_3);
#line 312
undef($memory_6);
#line 313
goto label_13;
#line 313
label_13:
#line 313
undef($memory_5);
#line 314
$memory_5 = ")";
#line 314
dfile_priv::sp($memory_0, $memory_5);
#line 314
undef($memory_5);
#line 315
goto label_4;
#line 315
label_11:
#line 316
$memory_5 = [];
#line 316
die(dfile::ssave($memory_5));
#line 316
undef($memory_5);
#line 317
goto label_4;
#line 317
label_4:
#line 317
undef($memory_4);
#line 317
undef($memory_1);
#line 317
undef($memory_2);
#line 317
undef($memory_3);
#line 317
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::print_net_formatstr($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 321
$memory_2 = "";
#line 321
$memory_1 = $memory_1 . $memory_2;
#line 321
undef($memory_2);
#line 322
$memory_3 = "\\";
#line 322
$memory_4 = "\\\\";
#line 322
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 322
undef($memory_4);
#line 322
undef($memory_3);
#line 322
$memory_1 = $memory_2;
#line 322
undef($memory_2);
#line 323
$memory_3 = string::lf();
#line 323
$memory_4 = "\\n";
#line 323
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 323
undef($memory_4);
#line 323
undef($memory_3);
#line 323
$memory_1 = $memory_2;
#line 323
undef($memory_2);
#line 324
$memory_3 = "\$";
#line 324
$memory_4 = "\\\$";
#line 324
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 324
undef($memory_4);
#line 324
undef($memory_3);
#line 324
$memory_1 = $memory_2;
#line 324
undef($memory_2);
#line 325
$memory_3 = "\@";
#line 325
$memory_4 = "\\\@";
#line 325
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 325
undef($memory_4);
#line 325
undef($memory_3);
#line 325
$memory_1 = $memory_2;
#line 325
undef($memory_2);
#line 326
$memory_3 = "\"";
#line 326
$memory_4 = "\\\"";
#line 326
$memory_2 = string::replace($memory_1, $memory_3, $memory_4);
#line 326
undef($memory_4);
#line 326
undef($memory_3);
#line 326
$memory_1 = $memory_2;
#line 326
undef($memory_2);
#line 327
$memory_2 = "\"";
#line 327
$memory_2 = $memory_2 . $memory_1;
#line 327
$memory_3 = "\"";
#line 327
$memory_2 = $memory_2 . $memory_3;
#line 327
undef($memory_3);
#line 327
dfile_priv::sp($memory_0, $memory_2);
#line 327
undef($memory_2);
#line 327
undef($memory_1);
#line 327
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub dfile_priv::print_net_format($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 331
$memory_2 = nl::is_sim($memory_1);
#line 331
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 331
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 332
dfile_priv::print_net_formatstr($memory_0, $memory_1);
#line 333
goto label_1;
#line 333
label_2:
#line 333
$memory_2 = nl::is_array($memory_1);
#line 333
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 333
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 334
$memory_3 = "[";
#line 334
dfile_priv::sp($memory_0, $memory_3);
#line 334
undef($memory_3);
#line 335
$memory_4 = 0;
#line 335
$memory_5 = 1;
#line 335
$memory_6 = c_rt_lib::array_len($memory_1);
#line 335
label_6:
#line 335
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 335
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 335
$memory_3 = $memory_1->[$memory_4];
#line 336
dfile_priv::print_net_format($memory_0, $memory_3);
#line 337
$memory_8 = ",";
#line 337
dfile_priv::sp($memory_0, $memory_8);
#line 337
undef($memory_8);
#line 338
$memory_4 = $memory_4 + $memory_5;
#line 338
goto label_6;
#line 338
label_4:
#line 338
undef($memory_3);
#line 338
undef($memory_4);
#line 338
undef($memory_5);
#line 338
undef($memory_6);
#line 338
undef($memory_7);
#line 339
$memory_3 = "]";
#line 339
dfile_priv::sp($memory_0, $memory_3);
#line 339
undef($memory_3);
#line 340
goto label_1;
#line 340
label_3:
#line 340
$memory_2 = nl::is_hash($memory_1);
#line 340
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 340
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 341
$memory_3 = "{";
#line 341
dfile_priv::sp($memory_0, $memory_3);
#line 341
undef($memory_3);
#line 342
$memory_3 = hash::keys($memory_1);
#line 342
$memory_5 = 0;
#line 342
$memory_6 = 1;
#line 342
$memory_7 = c_rt_lib::array_len($memory_3);
#line 342
label_10:
#line 342
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 342
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 342
$memory_4 = $memory_3->[$memory_5];
#line 343
$memory_9 = hash::get_value($memory_1, $memory_4);
#line 344
$memory_11 = "";
#line 344
$memory_11 = $memory_4 . $memory_11;
#line 344
$memory_10 = dfile_priv::is_simple_string($memory_11);
#line 344
undef($memory_11);
#line 344
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 344
if (c_rt_lib::check_true($memory_10)) {goto label_12;}
#line 345
dfile_priv::sp($memory_0, $memory_4);
#line 346
goto label_11;
#line 346
label_12:
#line 347
dfile_priv::print_net_formatstr($memory_0, $memory_4);
#line 348
goto label_11;
#line 348
label_11:
#line 348
undef($memory_10);
#line 349
$memory_10 = "=>";
#line 349
dfile_priv::sp($memory_0, $memory_10);
#line 349
undef($memory_10);
#line 350
dfile_priv::print_net_format($memory_0, $memory_9);
#line 351
$memory_10 = ",";
#line 351
dfile_priv::sp($memory_0, $memory_10);
#line 351
undef($memory_10);
#line 351
undef($memory_9);
#line 352
$memory_5 = $memory_5 + $memory_6;
#line 352
goto label_10;
#line 352
label_8:
#line 352
undef($memory_3);
#line 352
undef($memory_4);
#line 352
undef($memory_5);
#line 352
undef($memory_6);
#line 352
undef($memory_7);
#line 352
undef($memory_8);
#line 353
$memory_3 = "}";
#line 353
dfile_priv::sp($memory_0, $memory_3);
#line 353
undef($memory_3);
#line 354
goto label_1;
#line 354
label_7:
#line 354
$memory_2 = nl::is_variant($memory_1);
#line 354
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 354
if (c_rt_lib::check_true($memory_2)) {goto label_13;}
#line 355
$memory_3 = "ov::mk(";
#line 355
dfile_priv::sp($memory_0, $memory_3);
#line 355
undef($memory_3);
#line 356
$memory_3 = ov::get_element($memory_1);
#line 356
dfile_priv::print_net_formatstr($memory_0, $memory_3);
#line 356
undef($memory_3);
#line 357
$memory_3 = ov::has_value($memory_1);
#line 357
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 357
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 358
$memory_4 = ",";
#line 358
dfile_priv::sp($memory_0, $memory_4);
#line 358
undef($memory_4);
#line 359
$memory_4 = ov::get_value($memory_1);
#line 359
dfile_priv::print_net_format($memory_0, $memory_4);
#line 359
undef($memory_4);
#line 360
goto label_15;
#line 360
label_15:
#line 360
undef($memory_3);
#line 361
$memory_3 = ")";
#line 361
dfile_priv::sp($memory_0, $memory_3);
#line 361
undef($memory_3);
#line 362
goto label_1;
#line 362
label_13:
#line 363
$memory_3 = [$memory_1];
#line 363
die(dfile::ssave($memory_3));
#line 363
undef($memory_3);
#line 364
goto label_1;
#line 364
label_1:
#line 364
undef($memory_2);
#line 364
undef($memory_1);
#line 364
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
