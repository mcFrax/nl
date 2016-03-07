use c_rt_lib;
use hash;
use array;
use ov;
use c_std_lib;
sub ptd::arr;
sub ptd::rec;
sub ptd::sim;
sub ptd::none;
sub ptd::void;
sub ptd::hash;
sub ptd::ptd_im;
sub ptd::var;
sub ptd::meta_type;
sub ptd::ensure;
sub ptd::ensure_only_dynamic;
sub ptd::ensure_only_static_do_not_touch_without_permission;
sub ptd::ensure_dyn;
sub ptd::is_ref_type;
sub ptd_priv::exec;
sub ptd::cast_t;
sub ptd::try_cast;
sub ptd::try_dynamic_cast;
sub ptd::imm_kind_t;
sub ptd::cast_error_t;
sub ptd::get_imm_kind;
sub ptd_priv::try_dynamic_cast;

return 1;

sub ptd::arr($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 12
$memory_1 = c_rt_lib::ov_mk_arg('ptd_arr', $memory_0);
#line 12
undef($memory_0);
#line 12
return $memory_1;
#line 12
undef($memory_1);
#line 12
undef($memory_0);
#line 12
return;
}

sub ptd::rec($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 16
$memory_1 = c_rt_lib::ov_mk_arg('ptd_rec', $memory_0);
#line 16
undef($memory_0);
#line 16
return $memory_1;
#line 16
undef($memory_1);
#line 16
undef($memory_0);
#line 16
return;
}

sub ptd::__sim() {
my $memory_0;
#line 20
$memory_0 = c_rt_lib::ov_mk_none('ptd_sim');
#line 20
return $memory_0;
#line 20
undef($memory_0);
#line 20
return;
}

my $_sim;
sub ptd::sim() {
	$_sim = ptd::__sim() unless defined $_sim;
	return $_sim;
}

sub ptd::__none() {
my $memory_0;
#line 24
$memory_0 = c_rt_lib::ov_mk_none('ptd_var_none');
#line 24
return $memory_0;
#line 24
undef($memory_0);
#line 24
return;
}

my $_none;
sub ptd::none() {
	$_none = ptd::__none() unless defined $_none;
	return $_none;
}

sub ptd::__void() {
my $memory_0;
#line 28
$memory_0 = c_rt_lib::ov_mk_none('ptd_void');
#line 28
return $memory_0;
#line 28
undef($memory_0);
#line 28
return;
}

my $_void;
sub ptd::void() {
	$_void = ptd::__void() unless defined $_void;
	return $_void;
}

sub ptd::hash($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 32
$memory_1 = c_rt_lib::ov_mk_arg('ptd_hash', $memory_0);
#line 32
undef($memory_0);
#line 32
return $memory_1;
#line 32
undef($memory_1);
#line 32
undef($memory_0);
#line 32
return;
}

sub ptd::__ptd_im() {
my $memory_0;
#line 36
$memory_0 = c_rt_lib::ov_mk_none('ptd_im');
#line 36
return $memory_0;
#line 36
undef($memory_0);
#line 36
return;
}

my $_ptd_im;
sub ptd::ptd_im() {
	$_ptd_im = ptd::__ptd_im() unless defined $_ptd_im;
	return $_ptd_im;
}

sub ptd::var($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 40
$memory_1 = {};
#line 41
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 41
label_3:
#line 41
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 41
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 41
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 41
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 43
$memory_6 = $memory_3;
#line 43
$memory_6 = c_rt_lib::ov_is($memory_6, 'ptd_var_none');
#line 43
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 43
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 44
$memory_7 = c_rt_lib::ov_mk_none('no_param');
#line 44
$memory_5 = $memory_7;
#line 44
undef($memory_7);
#line 45
goto label_4;
#line 45
label_5:
#line 46
$memory_7 = c_rt_lib::ov_mk_arg('with_param', $memory_3);
#line 46
$memory_5 = $memory_7;
#line 46
undef($memory_7);
#line 47
goto label_4;
#line 47
label_4:
#line 47
undef($memory_6);
#line 48
hash::set_value($memory_1, $memory_2, $memory_5);
#line 48
undef($memory_5);
#line 49
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 49
goto label_3;
#line 49
label_1:
#line 49
undef($memory_2);
#line 49
undef($memory_3);
#line 49
undef($memory_4);
#line 50
$memory_3 = {
	module => "ptd",
	name => "meta_type",
};
#line 50
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 50
$memory_4 = c_rt_lib::ov_mk_arg('ptd_var', $memory_1);
#line 50
$memory_2 = ptd::ensure_only_static_do_not_touch_without_permission($memory_3, $memory_4);
#line 50
undef($memory_4);
#line 50
undef($memory_3);
#line 50
undef($memory_0);
#line 50
undef($memory_1);
#line 50
return $memory_2;
#line 50
undef($memory_2);
#line 50
undef($memory_1);
#line 50
undef($memory_0);
#line 50
return;
}

sub ptd::__meta_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 54
$memory_3 = {
	module => "ptd",
	name => "meta_type",
};
#line 54
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 54
$memory_2 = ptd::hash($memory_3);
#line 54
undef($memory_3);
#line 54
$memory_3 = {
	module => "ptd",
	name => "meta_type",
};
#line 54
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 54
$memory_4 = {
	module => "ptd",
	name => "meta_type",
};
#line 54
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 54
$memory_8 = {
	module => "ptd",
	name => "meta_type",
};
#line 54
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 54
$memory_9 = ptd::none();
#line 54
$memory_7 = {with_param => $memory_8,no_param => $memory_9,};
#line 54
undef($memory_8);
#line 54
undef($memory_9);
#line 54
$memory_6 = ptd::var($memory_7);
#line 54
undef($memory_7);
#line 54
$memory_5 = ptd::hash($memory_6);
#line 54
undef($memory_6);
#line 54
$memory_8 = ptd::sim();
#line 54
$memory_9 = ptd::sim();
#line 54
$memory_7 = {module => $memory_8,name => $memory_9,};
#line 54
undef($memory_8);
#line 54
undef($memory_9);
#line 54
$memory_6 = ptd::rec($memory_7);
#line 54
undef($memory_7);
#line 54
$memory_7 = ptd::none();
#line 54
$memory_8 = ptd::none();
#line 54
$memory_1 = {ptd_rec => $memory_2,ptd_hash => $memory_3,ptd_arr => $memory_4,ptd_var => $memory_5,ref => $memory_6,ptd_sim => $memory_7,ptd_im => $memory_8,};
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
$memory_0 = ptd::var($memory_1);
#line 54
undef($memory_1);
#line 54
return $memory_0;
#line 54
undef($memory_0);
#line 54
return;
}

my $_meta_type;
sub ptd::meta_type() {
	$_meta_type = ptd::__meta_type() unless defined $_meta_type;
	return $_meta_type;
}

sub ptd::ensure($$) {
my $memory_0;my $memory_1;$memory_0 = $_[0];$memory_1 = $_[1];
#line 69
ptd::ensure_dyn($memory_0, $memory_1);
#line 70
undef($memory_0);
#line 70
return $memory_1;
#line 70
undef($memory_0);
#line 70
undef($memory_1);
#line 70
return;
}

sub ptd::ensure_only_dynamic($$) {
my $memory_0;my $memory_1;$memory_0 = $_[0];$memory_1 = $_[1];
#line 74
ptd::ensure_dyn($memory_0, $memory_1);
#line 75
undef($memory_0);
#line 75
return $memory_1;
#line 75
undef($memory_0);
#line 75
undef($memory_1);
#line 75
return;
}

sub ptd::ensure_only_static_do_not_touch_without_permission($$) {
my $memory_0;my $memory_1;$memory_0 = $_[0];$memory_1 = $_[1];
#line 80
undef($memory_0);
#line 80
return $memory_1;
#line 80
undef($memory_0);
#line 80
undef($memory_1);
#line 80
return;
}

sub ptd::ensure_dyn($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 84
$memory_2 = c_std_lib::is_variant($memory_0);
#line 84
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 84
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 84
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 84
$memory_4 = "1 Not ov reference in ensure";
#line 84
$memory_3 = [$memory_4];
#line 84
undef($memory_4);
#line 84
die(dfile::ssave($memory_3));
#line 84
goto label_2;
#line 84
label_2:
#line 84
undef($memory_2);
#line 84
undef($memory_3);
#line 85
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_hash');
#line 85
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 90
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_arr');
#line 90
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 95
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_rec');
#line 95
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 102
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_sim');
#line 102
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 104
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_var');
#line 104
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 115
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_im');
#line 115
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 116
$memory_2 = c_rt_lib::ov_is($memory_0, 'ref');
#line 116
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 116
$memory_2 = "NOMATCHALERT";
#line 116
$memory_2 = [$memory_2,$memory_0];
#line 116
die(dfile::ssave($memory_2));
#line 85
label_4:
#line 85
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_hash');
#line 86
$memory_4 = c_std_lib::is_hash($memory_1);
#line 86
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 86
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 86
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 86
$memory_6 = "2 HASH ref expected ";
#line 86
$memory_5 = [$memory_6];
#line 86
undef($memory_6);
#line 86
die(dfile::ssave($memory_5));
#line 86
goto label_12;
#line 86
label_12:
#line 86
undef($memory_4);
#line 86
undef($memory_5);
#line 87
$memory_6 = c_rt_lib::init_iter($memory_1);
#line 87
label_15:
#line 87
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 87
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 87
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 87
$memory_5 = c_rt_lib::hash_get_value($memory_1, $memory_4);
#line 88
ptd::ensure_dyn($memory_3, $memory_5);
#line 89
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 89
goto label_15;
#line 89
label_13:
#line 89
undef($memory_4);
#line 89
undef($memory_5);
#line 89
undef($memory_6);
#line 89
undef($memory_3);
#line 90
goto label_3;
#line 90
label_5:
#line 90
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_arr');
#line 91
$memory_4 = c_std_lib::is_array($memory_1);
#line 91
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 91
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 91
if (c_rt_lib::check_true($memory_4)) {goto label_17;}
#line 91
$memory_6 = "3 ARRAY ref expected ";
#line 91
$memory_5 = [$memory_6];
#line 91
undef($memory_6);
#line 91
die(dfile::ssave($memory_5));
#line 91
goto label_17;
#line 91
label_17:
#line 91
undef($memory_4);
#line 91
undef($memory_5);
#line 92
$memory_5 = 0;
#line 92
$memory_6 = 1;
#line 92
$memory_7 = c_rt_lib::array_len($memory_1);
#line 92
label_20:
#line 92
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 92
if (c_rt_lib::check_true($memory_8)) {goto label_18;}
#line 92
$memory_4 = $memory_1->[$memory_5];
#line 93
ptd::ensure_dyn($memory_3, $memory_4);
#line 94
$memory_5 = $memory_5 + $memory_6;
#line 94
goto label_20;
#line 94
label_18:
#line 94
undef($memory_4);
#line 94
undef($memory_5);
#line 94
undef($memory_6);
#line 94
undef($memory_7);
#line 94
undef($memory_8);
#line 94
undef($memory_3);
#line 95
goto label_3;
#line 95
label_6:
#line 95
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_rec');
#line 96
$memory_4 = c_std_lib::is_hash($memory_1);
#line 96
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 96
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 96
if (c_rt_lib::check_true($memory_4)) {goto label_22;}
#line 96
$memory_6 = "4 HASH ref expected ";
#line 96
$memory_5 = [$memory_6];
#line 96
undef($memory_6);
#line 96
die(dfile::ssave($memory_5));
#line 96
goto label_22;
#line 96
label_22:
#line 96
undef($memory_4);
#line 96
undef($memory_5);
#line 97
$memory_4 = hash::size($memory_3);
#line 97
$memory_5 = hash::size($memory_1);
#line 97
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 97
undef($memory_5);
#line 97
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 97
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 97
if (c_rt_lib::check_true($memory_4)) {goto label_24;}
#line 97
$memory_6 = "5 keys amount mismatch in ptd_rec";
#line 97
$memory_5 = [$memory_6];
#line 97
undef($memory_6);
#line 97
die(dfile::ssave($memory_5));
#line 97
goto label_24;
#line 97
label_24:
#line 97
undef($memory_4);
#line 97
undef($memory_5);
#line 98
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 98
label_27:
#line 98
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 98
if (c_rt_lib::check_true($memory_4)) {goto label_25;}
#line 98
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 98
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 99
$memory_7 = hash::has_key($memory_1, $memory_4);
#line 99
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 99
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 99
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
#line 99
$memory_9 = "6 key ";
#line 99
$memory_9 = $memory_9 . $memory_4;
#line 99
$memory_10 = " not exists in hash";
#line 99
$memory_9 = $memory_9 . $memory_10;
#line 99
undef($memory_10);
#line 99
$memory_8 = [$memory_9];
#line 99
undef($memory_9);
#line 99
die(dfile::ssave($memory_8));
#line 99
goto label_29;
#line 99
label_29:
#line 99
undef($memory_7);
#line 99
undef($memory_8);
#line 100
$memory_7 = hash::get_value($memory_1, $memory_4);
#line 100
ptd::ensure_dyn($memory_5, $memory_7);
#line 100
undef($memory_7);
#line 101
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 101
goto label_27;
#line 101
label_25:
#line 101
undef($memory_4);
#line 101
undef($memory_5);
#line 101
undef($memory_6);
#line 101
undef($memory_3);
#line 102
goto label_3;
#line 102
label_7:
#line 103
$memory_3 = c_std_lib::is_sim($memory_1);
#line 103
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 103
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 103
if (c_rt_lib::check_true($memory_3)) {goto label_31;}
#line 103
$memory_5 = "8 wrong sim ref ";
#line 103
$memory_4 = [$memory_5];
#line 103
undef($memory_5);
#line 103
die(dfile::ssave($memory_4));
#line 103
goto label_31;
#line 103
label_31:
#line 103
undef($memory_3);
#line 103
undef($memory_4);
#line 104
goto label_3;
#line 104
label_8:
#line 104
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_var');
#line 105
$memory_4 = c_std_lib::is_variant($memory_1);
#line 105
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 105
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 105
if (c_rt_lib::check_true($memory_4)) {goto label_33;}
#line 105
$memory_6 = "9 not ov ref";
#line 105
$memory_5 = [$memory_6];
#line 105
undef($memory_6);
#line 105
die(dfile::ssave($memory_5));
#line 105
goto label_33;
#line 105
label_33:
#line 105
undef($memory_4);
#line 105
undef($memory_5);
#line 106
$memory_4 = ov::get_element($memory_1);
#line 107
$memory_5 = hash::has_key($memory_3, $memory_4);
#line 107
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 107
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 107
if (c_rt_lib::check_true($memory_5)) {goto label_35;}
#line 107
$memory_7 = "10 Case ";
#line 107
$memory_7 = $memory_7 . $memory_4;
#line 107
$memory_8 = " not allowed in variant. ";
#line 107
$memory_7 = $memory_7 . $memory_8;
#line 107
undef($memory_8);
#line 107
$memory_6 = [$memory_7];
#line 107
undef($memory_7);
#line 107
die(dfile::ssave($memory_6));
#line 107
goto label_35;
#line 107
label_35:
#line 107
undef($memory_5);
#line 107
undef($memory_6);
#line 108
$memory_5 = hash::get_value($memory_3, $memory_4);
#line 109
$memory_6 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 109
if (c_rt_lib::check_true($memory_6)) {goto label_37;}
#line 112
$memory_6 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 112
if (c_rt_lib::check_true($memory_6)) {goto label_38;}
#line 112
$memory_6 = "NOMATCHALERT";
#line 112
$memory_6 = [$memory_6,$memory_5];
#line 112
die(dfile::ssave($memory_6));
#line 109
label_37:
#line 109
$memory_7 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 110
$memory_8 = ov::has_value($memory_1);
#line 110
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 110
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 110
if (c_rt_lib::check_true($memory_8)) {goto label_40;}
#line 110
$memory_10 = "12 with_param ov has no value";
#line 110
$memory_9 = [$memory_10];
#line 110
undef($memory_10);
#line 110
die(dfile::ssave($memory_9));
#line 110
goto label_40;
#line 110
label_40:
#line 110
undef($memory_8);
#line 110
undef($memory_9);
#line 111
$memory_8 = ov::get_value($memory_1);
#line 111
ptd::ensure_dyn($memory_7, $memory_8);
#line 111
undef($memory_8);
#line 111
undef($memory_7);
#line 112
goto label_36;
#line 112
label_38:
#line 113
$memory_7 = ov::has_value($memory_1);
#line 113
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 113
if (c_rt_lib::check_true($memory_7)) {goto label_42;}
#line 113
$memory_9 = "11 no_param ov has value";
#line 113
$memory_8 = [$memory_9];
#line 113
undef($memory_9);
#line 113
die(dfile::ssave($memory_8));
#line 113
goto label_42;
#line 113
label_42:
#line 113
undef($memory_7);
#line 113
undef($memory_8);
#line 114
goto label_36;
#line 114
label_36:
#line 114
undef($memory_6);
#line 114
undef($memory_4);
#line 114
undef($memory_5);
#line 114
undef($memory_3);
#line 115
goto label_3;
#line 115
label_9:
#line 116
goto label_3;
#line 116
label_10:
#line 116
$memory_3 = c_rt_lib::ov_as($memory_0, 'ref');
#line 117
$memory_5 = [];
#line 117
$memory_4 = ptd_priv::exec($memory_0, $memory_5);
#line 117
undef($memory_5);
#line 117
ptd::ensure_dyn($memory_4, $memory_1);
#line 117
undef($memory_4);
#line 117
undef($memory_3);
#line 118
goto label_3;
#line 118
label_3:
#line 118
undef($memory_2);
#line 118
undef($memory_0);
#line 118
undef($memory_1);
#line 118
return;
}

sub ptd::is_ref_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 122
$memory_2 = c_rt_lib::ov_is($memory_0, 'ref');
#line 122
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 132
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_im');
#line 132
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 133
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_sim');
#line 133
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 134
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_arr');
#line 134
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 135
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_var');
#line 135
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 136
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_rec');
#line 136
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 137
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_hash');
#line 137
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 137
$memory_2 = "NOMATCHALERT";
#line 137
$memory_2 = [$memory_2,$memory_0];
#line 137
die(dfile::ssave($memory_2));
#line 122
label_2:
#line 122
$memory_3 = c_rt_lib::ov_as($memory_0, 'ref');
#line 123
$memory_4 = $memory_1;
#line 123
$memory_4 = c_rt_lib::ov_is($memory_4, 'ref');
#line 123
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 123
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 123
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 123
$memory_5 = c_rt_lib::to_nl(0);
#line 123
undef($memory_0);
#line 123
undef($memory_1);
#line 123
undef($memory_2);
#line 123
undef($memory_3);
#line 123
undef($memory_4);
#line 123
return $memory_5;
#line 123
undef($memory_5);
#line 123
goto label_10;
#line 123
label_10:
#line 123
undef($memory_4);
#line 124
$memory_4 = $memory_1;
#line 124
$memory_4 = c_rt_lib::ov_as($memory_4, 'ref');
#line 125
$memory_5 = c_std_lib::is_hash($memory_4);
#line 125
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 125
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 126
$memory_6 = $memory_4->{'module'};
#line 126
$memory_7 = $memory_3->{'module'};
#line 126
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 126
undef($memory_7);
#line 126
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 126
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 126
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 126
$memory_7 = c_rt_lib::to_nl(0);
#line 126
undef($memory_0);
#line 126
undef($memory_1);
#line 126
undef($memory_2);
#line 126
undef($memory_3);
#line 126
undef($memory_4);
#line 126
undef($memory_5);
#line 126
undef($memory_6);
#line 126
return $memory_7;
#line 126
undef($memory_7);
#line 126
goto label_14;
#line 126
label_14:
#line 126
undef($memory_6);
#line 127
$memory_6 = $memory_4->{'name'};
#line 127
$memory_7 = $memory_3->{'name'};
#line 127
$memory_6 = c_rt_lib::to_nl($memory_6 eq $memory_7);
#line 127
undef($memory_7);
#line 127
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 127
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 127
if (c_rt_lib::check_true($memory_6)) {goto label_16;}
#line 127
$memory_7 = c_rt_lib::to_nl(0);
#line 127
undef($memory_0);
#line 127
undef($memory_1);
#line 127
undef($memory_2);
#line 127
undef($memory_3);
#line 127
undef($memory_4);
#line 127
undef($memory_5);
#line 127
undef($memory_6);
#line 127
return $memory_7;
#line 127
undef($memory_7);
#line 127
goto label_16;
#line 127
label_16:
#line 127
undef($memory_6);
#line 128
goto label_11;
#line 128
label_12:
#line 129
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_3);
#line 129
undef($memory_0);
#line 129
undef($memory_1);
#line 129
undef($memory_2);
#line 129
undef($memory_3);
#line 129
undef($memory_4);
#line 129
undef($memory_5);
#line 129
return $memory_6;
#line 129
undef($memory_6);
#line 130
goto label_11;
#line 130
label_11:
#line 130
undef($memory_5);
#line 131
$memory_5 = c_rt_lib::to_nl(1);
#line 131
undef($memory_0);
#line 131
undef($memory_1);
#line 131
undef($memory_2);
#line 131
undef($memory_3);
#line 131
undef($memory_4);
#line 131
return $memory_5;
#line 131
undef($memory_5);
#line 131
undef($memory_4);
#line 131
undef($memory_3);
#line 132
goto label_1;
#line 132
label_3:
#line 133
goto label_1;
#line 133
label_4:
#line 134
goto label_1;
#line 134
label_5:
#line 134
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_arr');
#line 134
undef($memory_3);
#line 135
goto label_1;
#line 135
label_6:
#line 135
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_var');
#line 135
undef($memory_3);
#line 136
goto label_1;
#line 136
label_7:
#line 136
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_rec');
#line 136
undef($memory_3);
#line 137
goto label_1;
#line 137
label_8:
#line 137
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_hash');
#line 137
undef($memory_3);
#line 138
goto label_1;
#line 138
label_1:
#line 138
undef($memory_2);
#line 139
$memory_2 = c_rt_lib::to_nl(0);
#line 139
undef($memory_0);
#line 139
undef($memory_1);
#line 139
return $memory_2;
#line 139
undef($memory_2);
#line 139
undef($memory_0);
#line 139
undef($memory_1);
#line 139
return;
}

sub ptd_priv::exec($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 143
$memory_2 = c_std_lib::exec($memory_0, $memory_1);
#line 143
undef($memory_0);
#line 143
undef($memory_1);
#line 143
return $memory_2;
#line 143
undef($memory_2);
#line 143
undef($memory_0);
#line 143
undef($memory_1);
#line 143
return;
}

sub ptd::__cast_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 147
$memory_2 = ptd::ptd_im();
#line 147
$memory_3 = {
	module => "ptd",
	name => "cast_error_t",
};
#line 147
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 147
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 147
undef($memory_2);
#line 147
undef($memory_3);
#line 147
$memory_0 = ptd::var($memory_1);
#line 147
undef($memory_1);
#line 147
return $memory_0;
#line 147
undef($memory_0);
#line 147
return;
}

my $_cast_t;
sub ptd::cast_t() {
	$_cast_t = ptd::__cast_t() unless defined $_cast_t;
	return $_cast_t;
}

sub ptd::try_cast($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 154
$memory_2 = ptd::try_dynamic_cast($memory_0, $memory_1);
#line 154
undef($memory_0);
#line 154
undef($memory_1);
#line 154
return $memory_2;
#line 154
undef($memory_2);
#line 154
undef($memory_0);
#line 154
undef($memory_1);
#line 154
return;
}

sub ptd::try_dynamic_cast($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 157
$memory_2 = ptd_priv::try_dynamic_cast($memory_0, $memory_1);
#line 158
$memory_3 = array::len($memory_2);
#line 158
$memory_4 = 0;
#line 158
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 158
undef($memory_4);
#line 158
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 158
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 159
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 159
undef($memory_0);
#line 159
undef($memory_1);
#line 159
undef($memory_2);
#line 159
undef($memory_3);
#line 159
return $memory_4;
#line 159
undef($memory_4);
#line 160
goto label_2;
#line 160
label_2:
#line 160
undef($memory_3);
#line 161
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 161
undef($memory_0);
#line 161
undef($memory_1);
#line 161
undef($memory_2);
#line 161
return $memory_3;
#line 161
undef($memory_3);
#line 161
undef($memory_2);
#line 161
undef($memory_0);
#line 161
undef($memory_1);
#line 161
return;
}

sub ptd::__imm_kind_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 165
$memory_2 = ptd::none();
#line 165
$memory_3 = ptd::none();
#line 165
$memory_4 = ptd::none();
#line 165
$memory_5 = ptd::none();
#line 165
$memory_1 = {sim => $memory_2,hash => $memory_3,variant => $memory_4,array => $memory_5,};
#line 165
undef($memory_2);
#line 165
undef($memory_3);
#line 165
undef($memory_4);
#line 165
undef($memory_5);
#line 165
$memory_0 = ptd::var($memory_1);
#line 165
undef($memory_1);
#line 165
return $memory_0;
#line 165
undef($memory_0);
#line 165
return;
}

my $_imm_kind_t;
sub ptd::imm_kind_t() {
	$_imm_kind_t = ptd::__imm_kind_t() unless defined $_imm_kind_t;
	return $_imm_kind_t;
}

sub ptd::__cast_error_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;
#line 174
$memory_5 = ptd::sim();
#line 174
$memory_6 = ptd::sim();
#line 174
$memory_7 = ptd::sim();
#line 174
$memory_8 = ptd::sim();
#line 174
$memory_9 = ptd::ptd_im();
#line 174
$memory_4 = {hash_key => $memory_5,array_index => $memory_6,rec_key => $memory_7,variant_value => $memory_8,type_ref => $memory_9,};
#line 174
undef($memory_5);
#line 174
undef($memory_6);
#line 174
undef($memory_7);
#line 174
undef($memory_8);
#line 174
undef($memory_9);
#line 174
$memory_3 = ptd::var($memory_4);
#line 174
undef($memory_4);
#line 174
$memory_6 = {
	module => "ptd",
	name => "imm_kind_t",
};
#line 174
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 174
$memory_7 = {
	module => "ptd",
	name => "imm_kind_t",
};
#line 174
$memory_7 = c_rt_lib::ov_mk_arg('ref', $memory_7);
#line 174
$memory_8 = {
	module => "ptd",
	name => "imm_kind_t",
};
#line 174
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 174
$memory_9 = {
	module => "ptd",
	name => "imm_kind_t",
};
#line 174
$memory_9 = c_rt_lib::ov_mk_arg('ref', $memory_9);
#line 174
$memory_10 = {
	module => "ptd",
	name => "imm_kind_t",
};
#line 174
$memory_10 = c_rt_lib::ov_mk_arg('ref', $memory_10);
#line 174
$memory_11 = {
	module => "ptd",
	name => "imm_kind_t",
};
#line 174
$memory_11 = c_rt_lib::ov_mk_arg('ref', $memory_11);
#line 174
$memory_12 = ptd::sim();
#line 174
$memory_13 = ptd::sim();
#line 174
$memory_14 = ptd::sim();
#line 174
$memory_15 = ptd::sim();
#line 174
$memory_16 = ptd::sim();
#line 174
$memory_5 = {is_not_type => $memory_6,hash_expected => $memory_7,array_expected => $memory_8,rec_expected => $memory_9,sim_expected => $memory_10,variant_expected => $memory_11,rec_size => $memory_12,no_key => $memory_13,unknown_case => $memory_14,has_value => $memory_15,no_value => $memory_16,};
#line 174
undef($memory_6);
#line 174
undef($memory_7);
#line 174
undef($memory_8);
#line 174
undef($memory_9);
#line 174
undef($memory_10);
#line 174
undef($memory_11);
#line 174
undef($memory_12);
#line 174
undef($memory_13);
#line 174
undef($memory_14);
#line 174
undef($memory_15);
#line 174
undef($memory_16);
#line 174
$memory_4 = ptd::var($memory_5);
#line 174
undef($memory_5);
#line 174
$memory_2 = {path => $memory_3,error => $memory_4,};
#line 174
undef($memory_3);
#line 174
undef($memory_4);
#line 174
$memory_1 = ptd::var($memory_2);
#line 174
undef($memory_2);
#line 174
$memory_0 = ptd::arr($memory_1);
#line 174
undef($memory_1);
#line 174
return $memory_0;
#line 174
undef($memory_0);
#line 174
return;
}

my $_cast_error_t;
sub ptd::cast_error_t() {
	$_cast_error_t = ptd::__cast_error_t() unless defined $_cast_error_t;
	return $_cast_error_t;
}

sub ptd::get_imm_kind($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 198
$memory_1 = c_std_lib::is_sim($memory_0);
#line 198
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 198
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 198
$memory_2 = c_rt_lib::ov_mk_none('sim');
#line 198
undef($memory_0);
#line 198
undef($memory_1);
#line 198
return $memory_2;
#line 198
undef($memory_2);
#line 198
goto label_2;
#line 198
label_2:
#line 198
undef($memory_1);
#line 199
$memory_1 = c_std_lib::is_variant($memory_0);
#line 199
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 199
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 199
$memory_2 = c_rt_lib::ov_mk_none('variant');
#line 199
undef($memory_0);
#line 199
undef($memory_1);
#line 199
return $memory_2;
#line 199
undef($memory_2);
#line 199
goto label_4;
#line 199
label_4:
#line 199
undef($memory_1);
#line 200
$memory_1 = c_std_lib::is_hash($memory_0);
#line 200
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 200
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 200
$memory_2 = c_rt_lib::ov_mk_none('hash');
#line 200
undef($memory_0);
#line 200
undef($memory_1);
#line 200
return $memory_2;
#line 200
undef($memory_2);
#line 200
goto label_6;
#line 200
label_6:
#line 200
undef($memory_1);
#line 201
$memory_1 = c_std_lib::is_array($memory_0);
#line 201
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 201
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 201
$memory_2 = c_rt_lib::ov_mk_none('array');
#line 201
undef($memory_0);
#line 201
undef($memory_1);
#line 201
return $memory_2;
#line 201
undef($memory_2);
#line 201
goto label_8;
#line 201
label_8:
#line 201
undef($memory_1);
#line 202
$memory_1 = [];
#line 202
die(dfile::ssave($memory_1));
#line 202
undef($memory_1);
#line 202
undef($memory_0);
#line 202
return;
}

sub ptd_priv::try_dynamic_cast($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 205
$memory_2 = c_std_lib::is_variant($memory_0);
#line 205
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 205
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 205
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 205
$memory_4 = ptd::get_imm_kind($memory_0);
#line 205
$memory_4 = c_rt_lib::ov_mk_arg('is_not_type', $memory_4);
#line 205
$memory_4 = c_rt_lib::ov_mk_arg('error', $memory_4);
#line 205
$memory_3 = [$memory_4];
#line 205
undef($memory_4);
#line 205
undef($memory_0);
#line 205
undef($memory_1);
#line 205
undef($memory_2);
#line 205
return $memory_3;
#line 205
undef($memory_3);
#line 205
goto label_2;
#line 205
label_2:
#line 205
undef($memory_2);
#line 206
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_hash');
#line 206
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 215
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_arr');
#line 215
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 224
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_rec');
#line 224
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 235
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_sim');
#line 235
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 237
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_var');
#line 237
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 252
$memory_2 = c_rt_lib::ov_is($memory_0, 'ptd_im');
#line 252
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 253
$memory_2 = c_rt_lib::ov_is($memory_0, 'ref');
#line 253
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 253
$memory_2 = "NOMATCHALERT";
#line 253
$memory_2 = [$memory_2,$memory_0];
#line 253
die(dfile::ssave($memory_2));
#line 206
label_4:
#line 206
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_hash');
#line 207
$memory_4 = c_std_lib::is_hash($memory_1);
#line 207
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 207
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 207
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 207
$memory_6 = ptd::get_imm_kind($memory_0);
#line 207
$memory_6 = c_rt_lib::ov_mk_arg('hash_expected', $memory_6);
#line 207
$memory_6 = c_rt_lib::ov_mk_arg('error', $memory_6);
#line 207
$memory_5 = [$memory_6];
#line 207
undef($memory_6);
#line 207
undef($memory_0);
#line 207
undef($memory_1);
#line 207
undef($memory_2);
#line 207
undef($memory_3);
#line 207
undef($memory_4);
#line 207
return $memory_5;
#line 207
undef($memory_5);
#line 207
goto label_12;
#line 207
label_12:
#line 207
undef($memory_4);
#line 208
$memory_6 = c_rt_lib::init_iter($memory_1);
#line 208
label_15:
#line 208
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 208
if (c_rt_lib::check_true($memory_4)) {goto label_13;}
#line 208
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 208
$memory_5 = c_rt_lib::hash_get_value($memory_1, $memory_4);
#line 209
$memory_7 = ptd_priv::try_dynamic_cast($memory_3, $memory_5);
#line 210
$memory_8 = array::len($memory_7);
#line 210
$memory_9 = 0;
#line 210
$memory_8 = c_rt_lib::to_nl($memory_8 > $memory_9);
#line 210
undef($memory_9);
#line 210
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 210
if (c_rt_lib::check_true($memory_8)) {goto label_17;}
#line 211
$memory_9 = c_rt_lib::ov_mk_arg('hash_key', $memory_4);
#line 211
$memory_9 = c_rt_lib::ov_mk_arg('path', $memory_9);
#line 211
array::push($memory_7, $memory_9);
#line 211
undef($memory_9);
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
undef($memory_6);
#line 212
undef($memory_8);
#line 212
return $memory_7;
#line 213
goto label_17;
#line 213
label_17:
#line 213
undef($memory_8);
#line 213
undef($memory_7);
#line 214
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 214
goto label_15;
#line 214
label_13:
#line 214
undef($memory_4);
#line 214
undef($memory_5);
#line 214
undef($memory_6);
#line 214
undef($memory_3);
#line 215
goto label_3;
#line 215
label_5:
#line 215
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_arr');
#line 216
$memory_4 = c_std_lib::is_array($memory_1);
#line 216
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 216
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 216
if (c_rt_lib::check_true($memory_4)) {goto label_19;}
#line 216
$memory_6 = ptd::get_imm_kind($memory_0);
#line 216
$memory_6 = c_rt_lib::ov_mk_arg('array_expected', $memory_6);
#line 216
$memory_6 = c_rt_lib::ov_mk_arg('error', $memory_6);
#line 216
$memory_5 = [$memory_6];
#line 216
undef($memory_6);
#line 216
undef($memory_0);
#line 216
undef($memory_1);
#line 216
undef($memory_2);
#line 216
undef($memory_3);
#line 216
undef($memory_4);
#line 216
return $memory_5;
#line 216
undef($memory_5);
#line 216
goto label_19;
#line 216
label_19:
#line 216
undef($memory_4);
#line 217
$memory_4 = array::len($memory_1);
#line 217
$memory_5 = 0;
#line 217
$memory_6 = 1;
#line 217
label_22:
#line 217
$memory_7 = c_rt_lib::to_nl($memory_5 >= $memory_4);
#line 217
if (c_rt_lib::check_true($memory_7)) {goto label_20;}
#line 218
$memory_9 = $memory_1->[$memory_5];
#line 218
$memory_8 = ptd_priv::try_dynamic_cast($memory_3, $memory_9);
#line 218
undef($memory_9);
#line 219
$memory_9 = array::len($memory_8);
#line 219
$memory_10 = 0;
#line 219
$memory_9 = c_rt_lib::to_nl($memory_9 > $memory_10);
#line 219
undef($memory_10);
#line 219
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 219
if (c_rt_lib::check_true($memory_9)) {goto label_24;}
#line 220
$memory_10 = c_rt_lib::ov_mk_arg('array_index', $memory_5);
#line 220
$memory_10 = c_rt_lib::ov_mk_arg('path', $memory_10);
#line 220
array::push($memory_8, $memory_10);
#line 220
undef($memory_10);
#line 221
undef($memory_0);
#line 221
undef($memory_1);
#line 221
undef($memory_2);
#line 221
undef($memory_3);
#line 221
undef($memory_4);
#line 221
undef($memory_5);
#line 221
undef($memory_6);
#line 221
undef($memory_7);
#line 221
undef($memory_9);
#line 221
return $memory_8;
#line 222
goto label_24;
#line 222
label_24:
#line 222
undef($memory_9);
#line 222
undef($memory_8);
#line 223
$memory_5 = $memory_5 + $memory_6;
#line 223
goto label_22;
#line 223
label_20:
#line 223
undef($memory_4);
#line 223
undef($memory_5);
#line 223
undef($memory_6);
#line 223
undef($memory_7);
#line 223
undef($memory_3);
#line 224
goto label_3;
#line 224
label_6:
#line 224
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_rec');
#line 225
$memory_4 = c_std_lib::is_hash($memory_1);
#line 225
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 225
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 225
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 225
$memory_6 = ptd::get_imm_kind($memory_0);
#line 225
$memory_6 = c_rt_lib::ov_mk_arg('rec_expected', $memory_6);
#line 225
$memory_6 = c_rt_lib::ov_mk_arg('error', $memory_6);
#line 225
$memory_5 = [$memory_6];
#line 225
undef($memory_6);
#line 225
undef($memory_0);
#line 225
undef($memory_1);
#line 225
undef($memory_2);
#line 225
undef($memory_3);
#line 225
undef($memory_4);
#line 225
return $memory_5;
#line 225
undef($memory_5);
#line 225
goto label_26;
#line 225
label_26:
#line 225
undef($memory_4);
#line 226
$memory_4 = hash::size($memory_3);
#line 226
$memory_5 = hash::size($memory_1);
#line 226
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 226
undef($memory_5);
#line 226
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 226
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 226
if (c_rt_lib::check_true($memory_4)) {goto label_28;}
#line 226
$memory_6 = hash::size($memory_1);
#line 226
$memory_6 = c_rt_lib::ov_mk_arg('rec_size', $memory_6);
#line 226
$memory_6 = c_rt_lib::ov_mk_arg('error', $memory_6);
#line 226
$memory_5 = [$memory_6];
#line 226
undef($memory_6);
#line 226
undef($memory_0);
#line 226
undef($memory_1);
#line 226
undef($memory_2);
#line 226
undef($memory_3);
#line 226
undef($memory_4);
#line 226
return $memory_5;
#line 226
undef($memory_5);
#line 226
goto label_28;
#line 226
label_28:
#line 226
undef($memory_4);
#line 227
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 227
label_31:
#line 227
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 227
if (c_rt_lib::check_true($memory_4)) {goto label_29;}
#line 227
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 227
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 228
$memory_7 = hash::has_key($memory_1, $memory_4);
#line 228
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 228
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 228
if (c_rt_lib::check_true($memory_7)) {goto label_33;}
#line 228
$memory_9 = c_rt_lib::ov_mk_arg('no_key', $memory_4);
#line 228
$memory_9 = c_rt_lib::ov_mk_arg('error', $memory_9);
#line 228
$memory_8 = [$memory_9];
#line 228
undef($memory_9);
#line 228
undef($memory_0);
#line 228
undef($memory_1);
#line 228
undef($memory_2);
#line 228
undef($memory_3);
#line 228
undef($memory_4);
#line 228
undef($memory_5);
#line 228
undef($memory_6);
#line 228
undef($memory_7);
#line 228
return $memory_8;
#line 228
undef($memory_8);
#line 228
goto label_33;
#line 228
label_33:
#line 228
undef($memory_7);
#line 229
$memory_8 = hash::get_value($memory_1, $memory_4);
#line 229
$memory_7 = ptd_priv::try_dynamic_cast($memory_5, $memory_8);
#line 229
undef($memory_8);
#line 230
$memory_8 = array::len($memory_7);
#line 230
$memory_9 = 0;
#line 230
$memory_8 = c_rt_lib::to_nl($memory_8 > $memory_9);
#line 230
undef($memory_9);
#line 230
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 230
if (c_rt_lib::check_true($memory_8)) {goto label_35;}
#line 231
$memory_9 = c_rt_lib::ov_mk_arg('rec_key', $memory_4);
#line 231
$memory_9 = c_rt_lib::ov_mk_arg('path', $memory_9);
#line 231
array::push($memory_7, $memory_9);
#line 231
undef($memory_9);
#line 232
undef($memory_0);
#line 232
undef($memory_1);
#line 232
undef($memory_2);
#line 232
undef($memory_3);
#line 232
undef($memory_4);
#line 232
undef($memory_5);
#line 232
undef($memory_6);
#line 232
undef($memory_8);
#line 232
return $memory_7;
#line 233
goto label_35;
#line 233
label_35:
#line 233
undef($memory_8);
#line 233
undef($memory_7);
#line 234
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 234
goto label_31;
#line 234
label_29:
#line 234
undef($memory_4);
#line 234
undef($memory_5);
#line 234
undef($memory_6);
#line 234
undef($memory_3);
#line 235
goto label_3;
#line 235
label_7:
#line 236
$memory_3 = c_std_lib::is_sim($memory_1);
#line 236
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 236
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 236
if (c_rt_lib::check_true($memory_3)) {goto label_37;}
#line 236
$memory_5 = ptd::get_imm_kind($memory_0);
#line 236
$memory_5 = c_rt_lib::ov_mk_arg('sim_expected', $memory_5);
#line 236
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
#line 236
$memory_4 = [$memory_5];
#line 236
undef($memory_5);
#line 236
undef($memory_0);
#line 236
undef($memory_1);
#line 236
undef($memory_2);
#line 236
undef($memory_3);
#line 236
return $memory_4;
#line 236
undef($memory_4);
#line 236
goto label_37;
#line 236
label_37:
#line 236
undef($memory_3);
#line 237
goto label_3;
#line 237
label_8:
#line 237
$memory_3 = c_rt_lib::ov_as($memory_0, 'ptd_var');
#line 238
$memory_4 = c_std_lib::is_variant($memory_1);
#line 238
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 238
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 238
if (c_rt_lib::check_true($memory_4)) {goto label_39;}
#line 238
$memory_6 = ptd::get_imm_kind($memory_0);
#line 238
$memory_6 = c_rt_lib::ov_mk_arg('variant_expected', $memory_6);
#line 238
$memory_6 = c_rt_lib::ov_mk_arg('error', $memory_6);
#line 238
$memory_5 = [$memory_6];
#line 238
undef($memory_6);
#line 238
undef($memory_0);
#line 238
undef($memory_1);
#line 238
undef($memory_2);
#line 238
undef($memory_3);
#line 238
undef($memory_4);
#line 238
return $memory_5;
#line 238
undef($memory_5);
#line 238
goto label_39;
#line 238
label_39:
#line 238
undef($memory_4);
#line 239
$memory_4 = ov::get_element($memory_1);
#line 240
$memory_5 = hash::has_key($memory_3, $memory_4);
#line 240
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 240
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 240
if (c_rt_lib::check_true($memory_5)) {goto label_41;}
#line 240
$memory_7 = "";
#line 240
$memory_7 = $memory_4 . $memory_7;
#line 240
$memory_7 = c_rt_lib::ov_mk_arg('unknown_case', $memory_7);
#line 240
$memory_7 = c_rt_lib::ov_mk_arg('error', $memory_7);
#line 240
$memory_6 = [$memory_7];
#line 240
undef($memory_7);
#line 240
undef($memory_0);
#line 240
undef($memory_1);
#line 240
undef($memory_2);
#line 240
undef($memory_3);
#line 240
undef($memory_4);
#line 240
undef($memory_5);
#line 240
return $memory_6;
#line 240
undef($memory_6);
#line 240
goto label_41;
#line 240
label_41:
#line 240
undef($memory_5);
#line 241
$memory_5 = hash::get_value($memory_3, $memory_4);
#line 242
$memory_6 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 242
if (c_rt_lib::check_true($memory_6)) {goto label_43;}
#line 249
$memory_6 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 249
if (c_rt_lib::check_true($memory_6)) {goto label_44;}
#line 249
$memory_6 = "NOMATCHALERT";
#line 249
$memory_6 = [$memory_6,$memory_5];
#line 249
die(dfile::ssave($memory_6));
#line 242
label_43:
#line 242
$memory_7 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 243
$memory_8 = ov::has_value($memory_1);
#line 243
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 243
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 243
if (c_rt_lib::check_true($memory_8)) {goto label_46;}
#line 243
$memory_10 = "";
#line 243
$memory_10 = $memory_4 . $memory_10;
#line 243
$memory_10 = c_rt_lib::ov_mk_arg('no_value', $memory_10);
#line 243
$memory_10 = c_rt_lib::ov_mk_arg('error', $memory_10);
#line 243
$memory_9 = [$memory_10];
#line 243
undef($memory_10);
#line 243
undef($memory_0);
#line 243
undef($memory_1);
#line 243
undef($memory_2);
#line 243
undef($memory_3);
#line 243
undef($memory_4);
#line 243
undef($memory_5);
#line 243
undef($memory_6);
#line 243
undef($memory_7);
#line 243
undef($memory_8);
#line 243
return $memory_9;
#line 243
undef($memory_9);
#line 243
goto label_46;
#line 243
label_46:
#line 243
undef($memory_8);
#line 244
$memory_9 = ov::get_value($memory_1);
#line 244
$memory_8 = ptd_priv::try_dynamic_cast($memory_7, $memory_9);
#line 244
undef($memory_9);
#line 245
$memory_9 = array::len($memory_8);
#line 245
$memory_10 = 0;
#line 245
$memory_9 = c_rt_lib::to_nl($memory_9 > $memory_10);
#line 245
undef($memory_10);
#line 245
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 245
if (c_rt_lib::check_true($memory_9)) {goto label_48;}
#line 246
$memory_10 = "";
#line 246
$memory_10 = $memory_4 . $memory_10;
#line 246
$memory_10 = c_rt_lib::ov_mk_arg('variant_value', $memory_10);
#line 246
$memory_10 = c_rt_lib::ov_mk_arg('path', $memory_10);
#line 246
array::push($memory_8, $memory_10);
#line 246
undef($memory_10);
#line 247
undef($memory_0);
#line 247
undef($memory_1);
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
undef($memory_7);
#line 247
undef($memory_9);
#line 247
return $memory_8;
#line 248
goto label_48;
#line 248
label_48:
#line 248
undef($memory_9);
#line 248
undef($memory_8);
#line 248
undef($memory_7);
#line 249
goto label_42;
#line 249
label_44:
#line 250
$memory_7 = ov::has_value($memory_1);
#line 250
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 250
if (c_rt_lib::check_true($memory_7)) {goto label_50;}
#line 250
$memory_9 = "";
#line 250
$memory_9 = $memory_4 . $memory_9;
#line 250
$memory_9 = c_rt_lib::ov_mk_arg('has_value', $memory_9);
#line 250
$memory_9 = c_rt_lib::ov_mk_arg('error', $memory_9);
#line 250
$memory_8 = [$memory_9];
#line 250
undef($memory_9);
#line 250
undef($memory_0);
#line 250
undef($memory_1);
#line 250
undef($memory_2);
#line 250
undef($memory_3);
#line 250
undef($memory_4);
#line 250
undef($memory_5);
#line 250
undef($memory_6);
#line 250
undef($memory_7);
#line 250
return $memory_8;
#line 250
undef($memory_8);
#line 250
goto label_50;
#line 250
label_50:
#line 250
undef($memory_7);
#line 251
goto label_42;
#line 251
label_42:
#line 251
undef($memory_6);
#line 251
undef($memory_4);
#line 251
undef($memory_5);
#line 251
undef($memory_3);
#line 252
goto label_3;
#line 252
label_9:
#line 253
goto label_3;
#line 253
label_10:
#line 253
$memory_3 = c_rt_lib::ov_as($memory_0, 'ref');
#line 254
$memory_6 = [];
#line 254
$memory_5 = ptd_priv::exec($memory_0, $memory_6);
#line 254
undef($memory_6);
#line 254
$memory_4 = ptd_priv::try_dynamic_cast($memory_5, $memory_1);
#line 254
undef($memory_5);
#line 255
$memory_5 = array::len($memory_4);
#line 255
$memory_6 = 0;
#line 255
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 255
undef($memory_6);
#line 255
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 255
if (c_rt_lib::check_true($memory_5)) {goto label_52;}
#line 256
$memory_6 = c_rt_lib::ov_mk_arg('type_ref', $memory_3);
#line 256
$memory_6 = c_rt_lib::ov_mk_arg('path', $memory_6);
#line 256
array::push($memory_4, $memory_6);
#line 256
undef($memory_6);
#line 257
undef($memory_0);
#line 257
undef($memory_1);
#line 257
undef($memory_2);
#line 257
undef($memory_3);
#line 257
undef($memory_5);
#line 257
return $memory_4;
#line 258
goto label_52;
#line 258
label_52:
#line 258
undef($memory_5);
#line 258
undef($memory_4);
#line 258
undef($memory_3);
#line 259
goto label_3;
#line 259
label_3:
#line 259
undef($memory_2);
#line 260
$memory_2 = [];
#line 260
undef($memory_0);
#line 260
undef($memory_1);
#line 260
return $memory_2;
#line 260
undef($memory_2);
#line 260
undef($memory_0);
#line 260
undef($memory_1);
#line 260
return;
}
