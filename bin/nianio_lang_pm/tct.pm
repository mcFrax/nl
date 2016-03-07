use c_rt_lib;
use hash;
use ptd;
sub tct::arr;
sub tct::rec;
sub tct::ref;
sub tct::sim;
sub tct::none;
sub tct::void;
sub tct::empty;
sub tct::hash;
sub tct::tct_im;
sub tct::bool;
sub tct::func;
sub tct::var;
sub tct::try_var_as_case;
sub tct::meta_type;

return 1;

sub tct::arr($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 10
$memory_1 = c_rt_lib::ov_mk_arg('tct_arr', $memory_0);
#line 10
undef($memory_0);
#line 10
return $memory_1;
#line 10
undef($memory_1);
#line 10
undef($memory_0);
#line 10
return;
}

sub tct::rec($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 14
$memory_1 = c_rt_lib::ov_mk_arg('tct_rec', $memory_0);
#line 14
undef($memory_0);
#line 14
return $memory_1;
#line 14
undef($memory_1);
#line 14
undef($memory_0);
#line 14
return;
}

sub tct::ref($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 18
$memory_1 = c_rt_lib::ov_mk_arg('tct_ref', $memory_0);
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

sub tct::__sim() {
my $memory_0;
#line 22
$memory_0 = c_rt_lib::ov_mk_none('tct_sim');
#line 22
return $memory_0;
#line 22
undef($memory_0);
#line 22
return;
}

my $_sim;
sub tct::sim() {
	$_sim = tct::__sim() unless defined $_sim;
	return $_sim;
}

sub tct::__none() {
my $memory_0;
#line 26
$memory_0 = c_rt_lib::ov_mk_none('tct_var_none');
#line 26
return $memory_0;
#line 26
undef($memory_0);
#line 26
return;
}

my $_none;
sub tct::none() {
	$_none = tct::__none() unless defined $_none;
	return $_none;
}

sub tct::__void() {
my $memory_0;
#line 30
$memory_0 = c_rt_lib::ov_mk_none('tct_void');
#line 30
return $memory_0;
#line 30
undef($memory_0);
#line 30
return;
}

my $_void;
sub tct::void() {
	$_void = tct::__void() unless defined $_void;
	return $_void;
}

sub tct::__empty() {
my $memory_0;
#line 34
$memory_0 = c_rt_lib::ov_mk_none('tct_empty');
#line 34
return $memory_0;
#line 34
undef($memory_0);
#line 34
return;
}

my $_empty;
sub tct::empty() {
	$_empty = tct::__empty() unless defined $_empty;
	return $_empty;
}

sub tct::hash($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 38
$memory_1 = c_rt_lib::ov_mk_arg('tct_hash', $memory_0);
#line 38
undef($memory_0);
#line 38
return $memory_1;
#line 38
undef($memory_1);
#line 38
undef($memory_0);
#line 38
return;
}

sub tct::__tct_im() {
my $memory_0;
#line 42
$memory_0 = c_rt_lib::ov_mk_none('tct_im');
#line 42
return $memory_0;
#line 42
undef($memory_0);
#line 42
return;
}

my $_tct_im;
sub tct::tct_im() {
	$_tct_im = tct::__tct_im() unless defined $_tct_im;
	return $_tct_im;
}

sub tct::bool() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 46
$memory_2 = tct::none();
#line 46
$memory_3 = tct::none();
#line 46
$memory_1 = {FALSE => $memory_2,TRUE => $memory_3,};
#line 46
undef($memory_2);
#line 46
undef($memory_3);
#line 46
$memory_0 = tct::var($memory_1);
#line 46
undef($memory_1);
#line 46
return $memory_0;
#line 46
undef($memory_0);
#line 46
return;
}

sub tct::__func() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 49
$memory_2 = tct::sim();
#line 49
$memory_3 = tct::sim();
#line 49
$memory_1 = {module => $memory_2,name => $memory_3,};
#line 49
undef($memory_2);
#line 49
undef($memory_3);
#line 49
$memory_0 = tct::rec($memory_1);
#line 49
undef($memory_1);
#line 49
return $memory_0;
#line 49
undef($memory_0);
#line 49
return;
}

my $_func;
sub tct::func() {
	$_func = tct::__func() unless defined $_func;
	return $_func;
}

sub tct::var($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];
#line 53
$memory_1 = {};
#line 54
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 54
label_3:
#line 54
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 54
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 54
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 54
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 56
$memory_6 = $memory_3;
#line 56
$memory_6 = c_rt_lib::ov_is($memory_6, 'tct_var_none');
#line 56
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 56
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 57
$memory_7 = c_rt_lib::ov_mk_none('no_param');
#line 57
$memory_5 = $memory_7;
#line 57
undef($memory_7);
#line 58
goto label_4;
#line 58
label_5:
#line 59
$memory_8 = {
	module => "tct",
	name => "meta_type",
};
#line 59
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 59
$memory_7 = ptd::ensure($memory_8, $memory_3);
#line 59
undef($memory_8);
#line 59
$memory_7 = c_rt_lib::ov_mk_arg('with_param', $memory_7);
#line 59
$memory_5 = $memory_7;
#line 59
undef($memory_7);
#line 60
goto label_4;
#line 60
label_4:
#line 60
undef($memory_6);
#line 61
hash::set_value($memory_1, $memory_2, $memory_5);
#line 61
undef($memory_5);
#line 62
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 62
goto label_3;
#line 62
label_1:
#line 62
undef($memory_2);
#line 62
undef($memory_3);
#line 62
undef($memory_4);
#line 63
$memory_2 = c_rt_lib::ov_mk_arg('tct_var', $memory_1);
#line 63
undef($memory_0);
#line 63
undef($memory_1);
#line 63
return $memory_2;
#line 63
undef($memory_2);
#line 63
undef($memory_1);
#line 63
undef($memory_0);
#line 63
return;
}

sub tct::try_var_as_case($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 67
$memory_2 = $memory_0;
#line 67
$memory_2 = c_rt_lib::ov_is($memory_2, 'tct_var');
#line 67
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 67
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 67
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 67
$memory_3 = "";
#line 67
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 67
undef($memory_0);
#line 67
undef($memory_1);
#line 67
undef($memory_2);
#line 67
return $memory_3;
#line 67
undef($memory_3);
#line 67
goto label_2;
#line 67
label_2:
#line 67
undef($memory_2);
#line 68
$memory_3 = $memory_0;
#line 68
$memory_3 = c_rt_lib::ov_as($memory_3, 'tct_var');
#line 68
$memory_2 = hash::has_key($memory_3, $memory_1);
#line 68
undef($memory_3);
#line 68
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 68
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 68
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 68
$memory_3 = "";
#line 68
$memory_3 = c_rt_lib::ov_mk_arg('err', $memory_3);
#line 68
undef($memory_0);
#line 68
undef($memory_1);
#line 68
undef($memory_2);
#line 68
return $memory_3;
#line 68
undef($memory_3);
#line 68
goto label_4;
#line 68
label_4:
#line 68
undef($memory_2);
#line 69
$memory_3 = $memory_0;
#line 69
$memory_3 = c_rt_lib::ov_as($memory_3, 'tct_var');
#line 69
$memory_2 = hash::get_value($memory_3, $memory_1);
#line 69
undef($memory_3);
#line 70
$memory_3 = $memory_2;
#line 70
$memory_3 = c_rt_lib::ov_is($memory_3, 'with_param');
#line 70
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 70
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 70
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 70
$memory_4 = "";
#line 70
$memory_4 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 70
undef($memory_0);
#line 70
undef($memory_1);
#line 70
undef($memory_2);
#line 70
undef($memory_3);
#line 70
return $memory_4;
#line 70
undef($memory_4);
#line 70
goto label_6;
#line 70
label_6:
#line 70
undef($memory_3);
#line 71
$memory_3 = $memory_2;
#line 71
$memory_3 = c_rt_lib::ov_as($memory_3, 'with_param');
#line 71
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 71
undef($memory_0);
#line 71
undef($memory_1);
#line 71
undef($memory_2);
#line 71
return $memory_3;
#line 71
undef($memory_3);
#line 71
undef($memory_2);
#line 71
undef($memory_0);
#line 71
undef($memory_1);
#line 71
return;
}

sub tct::__meta_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 75
$memory_3 = {
	module => "tct",
	name => "meta_type",
};
#line 75
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 75
$memory_2 = ptd::hash($memory_3);
#line 75
undef($memory_3);
#line 75
$memory_3 = {
	module => "tct",
	name => "meta_type",
};
#line 75
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 75
$memory_4 = {
	module => "tct",
	name => "meta_type",
};
#line 75
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 75
$memory_8 = {
	module => "tct",
	name => "meta_type",
};
#line 75
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 75
$memory_9 = ptd::none();
#line 75
$memory_7 = {with_param => $memory_8,no_param => $memory_9,};
#line 75
undef($memory_8);
#line 75
undef($memory_9);
#line 75
$memory_6 = ptd::var($memory_7);
#line 75
undef($memory_7);
#line 75
$memory_5 = ptd::hash($memory_6);
#line 75
undef($memory_6);
#line 75
$memory_6 = ptd::sim();
#line 75
$memory_7 = ptd::none();
#line 75
$memory_8 = ptd::none();
#line 75
$memory_9 = ptd::none();
#line 75
$memory_10 = ptd::none();
#line 75
$memory_1 = {tct_rec => $memory_2,tct_hash => $memory_3,tct_arr => $memory_4,tct_var => $memory_5,tct_ref => $memory_6,tct_sim => $memory_7,tct_empty => $memory_8,tct_void => $memory_9,tct_im => $memory_10,};
#line 75
undef($memory_2);
#line 75
undef($memory_3);
#line 75
undef($memory_4);
#line 75
undef($memory_5);
#line 75
undef($memory_6);
#line 75
undef($memory_7);
#line 75
undef($memory_8);
#line 75
undef($memory_9);
#line 75
undef($memory_10);
#line 75
$memory_0 = ptd::var($memory_1);
#line 75
undef($memory_1);
#line 75
return $memory_0;
#line 75
undef($memory_0);
#line 75
return;
}

my $_meta_type;
sub tct::meta_type() {
	$_meta_type = tct::__meta_type() unless defined $_meta_type;
	return $_meta_type;
}
