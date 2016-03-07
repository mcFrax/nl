use c_rt_lib;
use string;
use array;
use hash;
use boolean_t;
use ptd;
use nast;
use ntokenizer;
use singleton;
use compiler_lib;
sub nparser_priv::get_end_list;
sub nparser::parse_ret_t;
sub nparser::state_t;
sub nparser::try_value_t;
sub nparser::try_cmd_t;
sub nparser::sparse;
sub nparser_priv::add_error;
sub nparser_priv::eat;
sub nparser_priv::try_eat;
sub nparser_priv::parse_module;
sub nparser_priv::parse_fun_arg_list;
sub nparser_priv::parse_fun_def;
sub nparser_priv::parse_fun_val_arg_list;
sub nparser_priv::parse_expr_list;
sub nparser_priv::parse_fun_val_arg;
sub nparser_priv::parse_fun_label;
sub nparser_priv::parse_label;
sub nparser_priv::parse_hash_key;
sub nparser_priv::parse_hash;
sub nparser_priv::parse_arr;
sub nparser_priv::parse_expr;
sub nparser_priv::parse_type;
sub nparser_priv::parse_expr_rec_left;
sub nparser_priv::parse_expr_rec;
sub nparser_priv::eat_text;
sub nparser_priv::parse_variant_label;
sub nparser_priv::parse_variant;
sub nparser_priv::check_lvalue;
sub nparser_priv::parse_variant_decl;
sub nparser_priv::parse_var_decl;
sub nparser_priv::parse_var_decl_sim;
sub nparser_priv::parse_cond;
sub nparser_priv::parse_block;
sub nparser_priv::parse_try_ensure;
sub nparser_priv::get_debug_from_begin;
sub nparser_priv::parse_cmd;

return 1;

sub nparser_priv::__get_end_list() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 17
$memory_2 = ";";
#line 17
$memory_3 = "if";
#line 17
$memory_4 = "unless";
#line 17
$memory_5 = "fora";
#line 17
$memory_6 = "forh";
#line 17
$memory_7 = "rep";
#line 17
$memory_8 = "while";
#line 17
$memory_1 = [$memory_2,$memory_3,$memory_4,$memory_5,$memory_6,$memory_7,$memory_8];
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
#line 17
undef($memory_8);
#line 17
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 17
undef($memory_1);
#line 17
return $memory_0;
#line 17
undef($memory_0);
#line 17
return;
}

my $_get_end_list;
sub nparser_priv::get_end_list() {
	$_get_end_list = nparser_priv::__get_end_list() unless defined $_get_end_list;
	return $_get_end_list;
}

sub nparser::__parse_ret_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 21
$memory_2 = {
	module => "nast",
	name => "module_t",
};
#line 21
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 21
$memory_3 = {
	module => "compiler_lib",
	name => "errors_t",
};
#line 21
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 21
$memory_1 = {ok => $memory_2,error => $memory_3,};
#line 21
undef($memory_2);
#line 21
undef($memory_3);
#line 21
$memory_0 = ptd::var($memory_1);
#line 21
undef($memory_1);
#line 21
return $memory_0;
#line 21
undef($memory_0);
#line 21
return;
}

my $_parse_ret_t;
sub nparser::parse_ret_t() {
	$_parse_ret_t = nparser::__parse_ret_t() unless defined $_parse_ret_t;
	return $_parse_ret_t;
}

sub nparser::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 25
$memory_2 = {
	module => "ntokenizer",
	name => "state_t",
};
#line 25
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 25
$memory_3 = {
	module => "compiler_lib",
	name => "errors_t",
};
#line 25
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 25
$memory_4 = ptd::sim();
#line 25
$memory_1 = {state => $memory_2,errors => $memory_3,module_name => $memory_4,};
#line 25
undef($memory_2);
#line 25
undef($memory_3);
#line 25
undef($memory_4);
#line 25
$memory_0 = ptd::rec($memory_1);
#line 25
undef($memory_1);
#line 25
return $memory_0;
#line 25
undef($memory_0);
#line 25
return;
}

my $_state_t;
sub nparser::state_t() {
	$_state_t = nparser::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub nparser::__try_value_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 29
$memory_2 = {
	module => "nast",
	name => "value_t",
};
#line 29
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 29
$memory_3 = ptd::sim();
#line 29
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 29
undef($memory_2);
#line 29
undef($memory_3);
#line 29
$memory_0 = ptd::var($memory_1);
#line 29
undef($memory_1);
#line 29
return $memory_0;
#line 29
undef($memory_0);
#line 29
return;
}

my $_try_value_t;
sub nparser::try_value_t() {
	$_try_value_t = nparser::__try_value_t() unless defined $_try_value_t;
	return $_try_value_t;
}

sub nparser::__try_cmd_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 33
$memory_2 = {
	module => "nast",
	name => "cmd_t",
};
#line 33
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 33
$memory_3 = ptd::sim();
#line 33
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 33
undef($memory_2);
#line 33
undef($memory_3);
#line 33
$memory_0 = ptd::var($memory_1);
#line 33
undef($memory_1);
#line 33
return $memory_0;
#line 33
undef($memory_0);
#line 33
return;
}

my $_try_cmd_t;
sub nparser::try_cmd_t() {
	$_try_cmd_t = nparser::__try_cmd_t() unless defined $_try_cmd_t;
	return $_try_cmd_t;
}

sub nparser::sparse($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 40
$memory_3 = [];
#line 40
$memory_4 = ntokenizer::init($memory_0);
#line 40
$memory_2 = {errors => $memory_3,state => $memory_4,module_name => $memory_1,};
#line 40
undef($memory_3);
#line 40
undef($memory_4);
#line 41
$memory_3 = nparser_priv::parse_module($memory_2, $memory_1);
#line 42
$memory_5 = $memory_2->{'errors'};
#line 42
$memory_4 = array::len($memory_5);
#line 42
undef($memory_5);
#line 42
$memory_5 = 0;
#line 42
$memory_4 = c_rt_lib::to_nl($memory_4 > $memory_5);
#line 42
undef($memory_5);
#line 42
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 42
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 42
$memory_5 = $memory_2->{'errors'};
#line 42
$memory_5 = c_rt_lib::ov_mk_arg('error', $memory_5);
#line 42
undef($memory_0);
#line 42
undef($memory_1);
#line 42
undef($memory_2);
#line 42
undef($memory_3);
#line 42
undef($memory_4);
#line 42
return $memory_5;
#line 42
undef($memory_5);
#line 42
goto label_2;
#line 42
label_2:
#line 42
undef($memory_4);
#line 43
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
return $memory_4;
#line 43
undef($memory_4);
#line 43
undef($memory_2);
#line 43
undef($memory_3);
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
return;
}

sub nparser_priv::add_error($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 47
$memory_3 = $memory_0->{'state'};
#line 47
$memory_2 = ntokenizer::get_line($memory_3);
#line 47
undef($memory_3);
#line 48
$memory_4 = $memory_0->{'state'};
#line 48
$memory_3 = ntokenizer::get_column($memory_4);
#line 48
undef($memory_4);
#line 49
$memory_4 = "errors";
#line 49
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 49
$memory_6 = $memory_0->{'module_name'};
#line 49
$memory_7 = c_rt_lib::ov_mk_none('error');
#line 49
$memory_5 = {line => $memory_2,module => $memory_6,column => $memory_3,message => $memory_1,type => $memory_7,};
#line 49
undef($memory_6);
#line 49
undef($memory_7);
#line 49
array::push($memory_4, $memory_5);
#line 49
undef($memory_5);
#line 49
$memory_5 = "errors";
#line 49
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 49
undef($memory_5);
#line 49
undef($memory_4);
#line 49
undef($memory_2);
#line 49
undef($memory_3);
#line 49
undef($memory_1);
#line 49
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::eat($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 53
$memory_3 = "state";
#line 53
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 53
$memory_2 = ntokenizer::eat_token($memory_3, $memory_1);
#line 53
$memory_4 = "state";
#line 53
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 53
undef($memory_4);
#line 53
undef($memory_3);
#line 53
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 53
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 53
$memory_3 = c_rt_lib::to_nl(1);
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 53
$_[0] = $memory_0;return $memory_3;
#line 53
undef($memory_3);
#line 53
goto label_2;
#line 53
label_2:
#line 53
undef($memory_2);
#line 54
$memory_2 = "expected: ";
#line 54
$memory_2 = $memory_2 . $memory_1;
#line 54
$memory_3 = string::lf();
#line 54
$memory_2 = $memory_2 . $memory_3;
#line 54
undef($memory_3);
#line 54
$memory_4 = $memory_0->{'state'};
#line 54
$memory_3 = ntokenizer::info($memory_4);
#line 54
undef($memory_4);
#line 54
$memory_2 = $memory_2 . $memory_3;
#line 54
undef($memory_3);
#line 54
nparser_priv::add_error($memory_0, $memory_2);
#line 54
undef($memory_2);
#line 55
$memory_2 = c_rt_lib::to_nl(0);
#line 55
undef($memory_1);
#line 55
$_[0] = $memory_0;return $memory_2;
#line 55
undef($memory_2);
#line 55
undef($memory_1);
#line 55
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::try_eat($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 59
$memory_3 = "state";
#line 59
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 59
$memory_2 = ntokenizer::eat_token($memory_3, $memory_1);
#line 59
$memory_4 = "state";
#line 59
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 59
undef($memory_4);
#line 59
undef($memory_3);
#line 59
undef($memory_1);
#line 59
$_[0] = $memory_0;return $memory_2;
#line 59
undef($memory_2);
#line 59
undef($memory_1);
#line 59
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_module($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 63
$memory_3 = [];
#line 63
$memory_4 = [];
#line 63
$memory_2 = {name => $memory_1,import => $memory_3,fun_def => $memory_4,};
#line 63
undef($memory_3);
#line 63
undef($memory_4);
#line 64
label_2:
#line 64
$memory_4 = "use";
#line 64
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 64
undef($memory_4);
#line 64
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 64
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 65
$memory_5 = $memory_0->{'state'};
#line 65
$memory_4 = ntokenizer::get_line($memory_5);
#line 65
undef($memory_5);
#line 66
$memory_6 = "state";
#line 66
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 66
$memory_7 = c_rt_lib::ov_mk_none('word');
#line 66
$memory_5 = ntokenizer::is_type($memory_6, $memory_7);
#line 66
undef($memory_7);
#line 66
$memory_7 = "state";
#line 66
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 66
undef($memory_7);
#line 66
undef($memory_6);
#line 66
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 66
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 67
$memory_6 = "import";
#line 67
$memory_6 = c_rt_lib::get_ref_hash($memory_2, $memory_6);
#line 67
$memory_9 = "state";
#line 67
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 67
$memory_10 = c_rt_lib::ov_mk_none('word');
#line 67
$memory_8 = ntokenizer::eat_type($memory_9, $memory_10);
#line 67
undef($memory_10);
#line 67
$memory_10 = "state";
#line 67
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 67
undef($memory_10);
#line 67
undef($memory_9);
#line 67
$memory_7 = {name => $memory_8,line => $memory_4,};
#line 67
undef($memory_8);
#line 67
array::push($memory_6, $memory_7);
#line 67
undef($memory_7);
#line 67
$memory_7 = "import";
#line 67
c_rt_lib::set_ref_hash($memory_2, $memory_7, $memory_6);
#line 67
undef($memory_7);
#line 67
undef($memory_6);
#line 68
goto label_3;
#line 68
label_4:
#line 69
$memory_6 = "expected word as name of module";
#line 69
nparser_priv::add_error($memory_0, $memory_6);
#line 69
undef($memory_6);
#line 70
goto label_3;
#line 70
label_3:
#line 70
undef($memory_5);
#line 71
$memory_5 = ";";
#line 71
nparser_priv::eat($memory_0, $memory_5);
#line 71
undef($memory_5);
#line 71
undef($memory_4);
#line 72
goto label_2;
#line 72
label_1:
#line 72
undef($memory_3);
#line 73
label_6:
#line 73
$memory_4 = "state";
#line 73
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 73
$memory_5 = "def";
#line 73
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 73
undef($memory_5);
#line 73
$memory_5 = "state";
#line 73
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 73
undef($memory_5);
#line 73
undef($memory_4);
#line 73
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 73
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 74
$memory_4 = nparser_priv::parse_fun_def($memory_0, $memory_1);
#line 74
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 74
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 76
$memory_5 = c_rt_lib::ov_is($memory_4, 'err');
#line 76
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 76
$memory_5 = "NOMATCHALERT";
#line 76
$memory_5 = [$memory_5,$memory_4];
#line 76
die(dfile::ssave($memory_5));
#line 74
label_8:
#line 74
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 75
$memory_7 = "fun_def";
#line 75
$memory_7 = c_rt_lib::get_ref_hash($memory_2, $memory_7);
#line 75
array::push($memory_7, $memory_6);
#line 75
$memory_8 = "fun_def";
#line 75
c_rt_lib::set_ref_hash($memory_2, $memory_8, $memory_7);
#line 75
undef($memory_8);
#line 75
undef($memory_7);
#line 75
undef($memory_6);
#line 76
goto label_7;
#line 76
label_9:
#line 76
$memory_6 = c_rt_lib::ov_as($memory_4, 'err');
#line 77
nparser_priv::add_error($memory_0, $memory_6);
#line 78
undef($memory_1);
#line 78
undef($memory_3);
#line 78
undef($memory_4);
#line 78
undef($memory_5);
#line 78
undef($memory_6);
#line 78
$_[0] = $memory_0;return $memory_2;
#line 78
undef($memory_6);
#line 79
goto label_7;
#line 79
label_7:
#line 79
undef($memory_4);
#line 79
undef($memory_5);
#line 80
goto label_6;
#line 80
label_5:
#line 80
undef($memory_3);
#line 81
$memory_4 = "state";
#line 81
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 81
$memory_5 = c_rt_lib::ov_mk_none('end');
#line 81
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 81
undef($memory_5);
#line 81
$memory_5 = "state";
#line 81
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 81
undef($memory_5);
#line 81
undef($memory_4);
#line 81
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 81
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 81
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 81
$memory_4 = "expected function definition";
#line 81
nparser_priv::add_error($memory_0, $memory_4);
#line 81
undef($memory_4);
#line 81
goto label_11;
#line 81
label_11:
#line 81
undef($memory_3);
#line 82
undef($memory_1);
#line 82
$_[0] = $memory_0;return $memory_2;
#line 82
undef($memory_2);
#line 82
undef($memory_1);
#line 82
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_arg_list($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 89
$memory_1 = "(";
#line 89
nparser_priv::eat($memory_0, $memory_1);
#line 89
undef($memory_1);
#line 90
$memory_1 = [];
#line 91
label_2:
#line 91
$memory_3 = "state";
#line 91
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 91
$memory_4 = ")";
#line 91
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 91
undef($memory_4);
#line 91
$memory_4 = "state";
#line 91
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 91
undef($memory_4);
#line 91
undef($memory_3);
#line 91
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 91
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 91
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 92
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 92
$memory_5 = c_rt_lib::ov_mk_none('none');
#line 92
$memory_6 = "";
#line 92
$memory_3 = {mod => $memory_4,type => $memory_5,name => $memory_6,};
#line 92
undef($memory_4);
#line 92
undef($memory_5);
#line 92
undef($memory_6);
#line 93
$memory_5 = "ref";
#line 93
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 93
undef($memory_5);
#line 93
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 93
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 93
$memory_5 = c_rt_lib::ov_mk_none('ref');
#line 93
$memory_6 = $memory_5;
#line 93
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'mod'} = $memory_6;
#line 93
undef($memory_5);
#line 93
undef($memory_6);
#line 93
goto label_4;
#line 93
label_4:
#line 93
undef($memory_4);
#line 94
$memory_5 = "state";
#line 94
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 94
$memory_6 = c_rt_lib::ov_mk_none('word');
#line 94
$memory_4 = ntokenizer::is_type($memory_5, $memory_6);
#line 94
undef($memory_6);
#line 94
$memory_6 = "state";
#line 94
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 94
undef($memory_6);
#line 94
undef($memory_5);
#line 94
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 94
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 95
$memory_6 = "state";
#line 95
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 95
$memory_7 = c_rt_lib::ov_mk_none('word');
#line 95
$memory_5 = ntokenizer::eat_type($memory_6, $memory_7);
#line 95
undef($memory_7);
#line 95
$memory_7 = "state";
#line 95
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 95
undef($memory_7);
#line 95
undef($memory_6);
#line 95
$memory_6 = $memory_5;
#line 95
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'name'} = $memory_6;
#line 95
undef($memory_5);
#line 95
undef($memory_6);
#line 96
goto label_5;
#line 96
label_6:
#line 97
$memory_5 = "word expected as fun arg name";
#line 97
nparser_priv::add_error($memory_0, $memory_5);
#line 97
undef($memory_5);
#line 98
goto label_5;
#line 98
label_5:
#line 98
undef($memory_4);
#line 99
$memory_5 = ":";
#line 99
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 99
undef($memory_5);
#line 99
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 99
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 100
$memory_7 = nparser_priv::parse_type($memory_0);
#line 100
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 100
if (c_rt_lib::check_true($memory_6)) {goto label_9;}
#line 100
undef($memory_1);
#line 100
undef($memory_2);
#line 100
undef($memory_3);
#line 100
undef($memory_4);
#line 100
undef($memory_5);
#line 100
undef($memory_6);
#line 100
$_[0] = $memory_0;return $memory_7;
#line 100
label_9:
#line 100
$memory_5 = c_rt_lib::ov_as($memory_7, 'ok');
#line 100
undef($memory_6);
#line 100
undef($memory_7);
#line 101
$memory_6 = c_rt_lib::ov_mk_arg('type', $memory_5);
#line 101
$memory_7 = $memory_6;
#line 101
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'type'} = $memory_7;
#line 101
undef($memory_6);
#line 101
undef($memory_7);
#line 101
undef($memory_5);
#line 102
goto label_8;
#line 102
label_8:
#line 102
undef($memory_4);
#line 103
array::push($memory_1, $memory_3);
#line 104
$memory_5 = ",";
#line 104
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 104
undef($memory_5);
#line 104
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 104
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 104
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 104
undef($memory_3);
#line 104
undef($memory_4);
#line 104
goto label_1;
#line 104
goto label_11;
#line 104
label_11:
#line 104
undef($memory_4);
#line 104
undef($memory_3);
#line 105
goto label_2;
#line 105
label_1:
#line 105
undef($memory_2);
#line 106
$memory_2 = ")";
#line 106
nparser_priv::eat($memory_0, $memory_2);
#line 106
undef($memory_2);
#line 107
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 107
undef($memory_1);
#line 107
$_[0] = $memory_0;return $memory_2;
#line 107
undef($memory_2);
#line 107
undef($memory_1);
#line 107
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_def($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 114
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 114
$memory_5 = $memory_0->{'state'};
#line 114
$memory_4 = ntokenizer::get_line($memory_5);
#line 114
undef($memory_5);
#line 114
$memory_5 = [];
#line 114
$memory_6 = "";
#line 114
$memory_8 = nparser_priv::get_debug_from_begin($memory_0);
#line 114
$memory_9 = c_rt_lib::ov_mk_none('nop');
#line 114
$memory_7 = {debug => $memory_8,cmd => $memory_9,};
#line 114
undef($memory_8);
#line 114
undef($memory_9);
#line 114
$memory_8 = c_rt_lib::ov_mk_none('priv');
#line 114
$memory_2 = {ret_type => $memory_3,line => $memory_4,args => $memory_5,name => $memory_6,cmd => $memory_7,access => $memory_8,};
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
#line 114
undef($memory_8);
#line 122
$memory_3 = "def";
#line 122
nparser_priv::eat($memory_0, $memory_3);
#line 122
undef($memory_3);
#line 123
$memory_4 = nparser_priv::eat_text($memory_0);
#line 123
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 123
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 123
undef($memory_1);
#line 123
undef($memory_2);
#line 123
undef($memory_3);
#line 123
$_[0] = $memory_0;return $memory_4;
#line 123
label_1:
#line 123
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 123
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_5;
#line 123
undef($memory_3);
#line 123
undef($memory_4);
#line 123
undef($memory_5);
#line 124
$memory_4 = "::";
#line 124
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 124
undef($memory_4);
#line 124
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 124
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 125
$memory_4 = $memory_2->{'name'};
#line 125
$memory_4 = c_rt_lib::to_nl($memory_4 ne $memory_1);
#line 125
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 125
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 126
$memory_5 = "incorrect module name: ";
#line 126
$memory_6 = $memory_2->{'name'};
#line 126
$memory_5 = $memory_5 . $memory_6;
#line 126
undef($memory_6);
#line 126
$memory_6 = " of function, expected: ";
#line 126
$memory_5 = $memory_5 . $memory_6;
#line 126
undef($memory_6);
#line 126
$memory_5 = $memory_5 . $memory_1;
#line 126
nparser_priv::add_error($memory_0, $memory_5);
#line 126
undef($memory_5);
#line 127
goto label_5;
#line 127
label_5:
#line 127
undef($memory_4);
#line 128
$memory_5 = nparser_priv::eat_text($memory_0);
#line 128
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 128
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 128
undef($memory_1);
#line 128
undef($memory_2);
#line 128
undef($memory_3);
#line 128
undef($memory_4);
#line 128
$_[0] = $memory_0;return $memory_5;
#line 128
label_6:
#line 128
$memory_6 = c_rt_lib::ov_as($memory_5, 'ok');
#line 128
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_6;
#line 128
undef($memory_4);
#line 128
undef($memory_5);
#line 128
undef($memory_6);
#line 129
$memory_4 = c_rt_lib::ov_mk_none('pub');
#line 129
$memory_5 = $memory_4;
#line 129
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'access'} = $memory_5;
#line 129
undef($memory_4);
#line 129
undef($memory_5);
#line 130
goto label_3;
#line 130
label_3:
#line 130
undef($memory_3);
#line 131
$memory_4 = nparser_priv::parse_fun_arg_list($memory_0);
#line 131
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 131
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 131
undef($memory_1);
#line 131
undef($memory_2);
#line 131
undef($memory_3);
#line 131
$_[0] = $memory_0;return $memory_4;
#line 131
label_7:
#line 131
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 131
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'args'} = $memory_5;
#line 131
undef($memory_3);
#line 131
undef($memory_4);
#line 131
undef($memory_5);
#line 132
$memory_4 = "state";
#line 132
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 132
$memory_5 = ":";
#line 132
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 132
undef($memory_5);
#line 132
$memory_5 = "state";
#line 132
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 132
undef($memory_5);
#line 132
undef($memory_4);
#line 132
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 132
if (c_rt_lib::check_true($memory_3)) {goto label_9;}
#line 133
$memory_4 = ":";
#line 133
nparser_priv::eat($memory_0, $memory_4);
#line 133
undef($memory_4);
#line 134
$memory_6 = nparser_priv::parse_type($memory_0);
#line 134
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 134
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 134
undef($memory_1);
#line 134
undef($memory_2);
#line 134
undef($memory_3);
#line 134
undef($memory_4);
#line 134
undef($memory_5);
#line 134
$_[0] = $memory_0;return $memory_6;
#line 134
label_10:
#line 134
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 134
undef($memory_5);
#line 134
undef($memory_6);
#line 135
$memory_5 = c_rt_lib::ov_mk_arg('type', $memory_4);
#line 135
$memory_6 = $memory_5;
#line 135
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'ret_type'} = $memory_6;
#line 135
undef($memory_5);
#line 135
undef($memory_6);
#line 135
undef($memory_4);
#line 136
goto label_9;
#line 136
label_9:
#line 136
undef($memory_3);
#line 137
$memory_4 = nparser_priv::parse_block($memory_0);
#line 137
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 137
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 137
undef($memory_1);
#line 137
undef($memory_2);
#line 137
undef($memory_3);
#line 137
$_[0] = $memory_0;return $memory_4;
#line 137
label_11:
#line 137
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 137
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'cmd'} = $memory_5;
#line 137
undef($memory_3);
#line 137
undef($memory_4);
#line 137
undef($memory_5);
#line 138
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 138
undef($memory_1);
#line 138
undef($memory_2);
#line 138
$_[0] = $memory_0;return $memory_3;
#line 138
undef($memory_3);
#line 138
undef($memory_2);
#line 138
undef($memory_1);
#line 138
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_val_arg_list($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 145
$memory_1 = [];
#line 146
label_2:
#line 146
$memory_3 = "state";
#line 146
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 146
$memory_4 = ")";
#line 146
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 146
undef($memory_4);
#line 146
$memory_4 = "state";
#line 146
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 146
undef($memory_4);
#line 146
undef($memory_3);
#line 146
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 146
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 146
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 147
$memory_5 = nparser_priv::parse_fun_val_arg($memory_0);
#line 147
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 147
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 147
undef($memory_1);
#line 147
undef($memory_2);
#line 147
undef($memory_3);
#line 147
undef($memory_4);
#line 147
$_[0] = $memory_0;return $memory_5;
#line 147
label_3:
#line 147
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 147
undef($memory_4);
#line 147
undef($memory_5);
#line 148
array::push($memory_1, $memory_3);
#line 149
$memory_5 = ",";
#line 149
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 149
undef($memory_5);
#line 149
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 149
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 149
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 149
undef($memory_3);
#line 149
undef($memory_4);
#line 149
goto label_1;
#line 149
goto label_5;
#line 149
label_5:
#line 149
undef($memory_4);
#line 149
undef($memory_3);
#line 150
goto label_2;
#line 150
label_1:
#line 150
undef($memory_2);
#line 151
$memory_2 = ")";
#line 151
nparser_priv::eat($memory_0, $memory_2);
#line 151
undef($memory_2);
#line 152
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 152
undef($memory_1);
#line 152
$_[0] = $memory_0;return $memory_2;
#line 152
undef($memory_2);
#line 152
undef($memory_1);
#line 152
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr_list($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 156
$memory_1 = [];
#line 157
label_2:
#line 157
$memory_3 = "state";
#line 157
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 157
$memory_4 = ")";
#line 157
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 157
undef($memory_4);
#line 157
$memory_4 = "state";
#line 157
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 157
undef($memory_4);
#line 157
undef($memory_3);
#line 157
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 157
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 157
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 158
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 158
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 158
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 158
undef($memory_1);
#line 158
undef($memory_2);
#line 158
undef($memory_3);
#line 158
undef($memory_4);
#line 158
$_[0] = $memory_0;return $memory_5;
#line 158
label_3:
#line 158
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 158
undef($memory_4);
#line 158
undef($memory_5);
#line 159
array::push($memory_1, $memory_3);
#line 160
$memory_5 = ",";
#line 160
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 160
undef($memory_5);
#line 160
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 160
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 160
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 160
undef($memory_3);
#line 160
undef($memory_4);
#line 160
goto label_1;
#line 160
goto label_5;
#line 160
label_5:
#line 160
undef($memory_4);
#line 160
undef($memory_3);
#line 161
goto label_2;
#line 161
label_1:
#line 161
undef($memory_2);
#line 162
$memory_2 = ")";
#line 162
nparser_priv::eat($memory_0, $memory_2);
#line 162
undef($memory_2);
#line 163
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 163
undef($memory_1);
#line 163
$_[0] = $memory_0;return $memory_2;
#line 163
undef($memory_2);
#line 163
undef($memory_1);
#line 163
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_val_arg($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 167
$memory_1 = {};
#line 168
$memory_3 = "ref";
#line 168
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 168
undef($memory_3);
#line 168
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 168
$memory_2 = c_rt_lib::ov_mk_none('none');
#line 168
goto label_1;
#line 168
label_2:
#line 168
$memory_2 = c_rt_lib::ov_mk_none('ref');
#line 168
label_1:
#line 168
$memory_3 = $memory_2;
#line 168
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mod'} = $memory_3;
#line 168
undef($memory_2);
#line 168
undef($memory_3);
#line 169
$memory_3 = nparser_priv::parse_expr($memory_0);
#line 169
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 169
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 169
undef($memory_1);
#line 169
undef($memory_2);
#line 169
$_[0] = $memory_0;return $memory_3;
#line 169
label_3:
#line 169
$memory_4 = c_rt_lib::ov_as($memory_3, 'ok');
#line 169
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'val'} = $memory_4;
#line 169
undef($memory_2);
#line 169
undef($memory_3);
#line 169
undef($memory_4);
#line 170
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 170
undef($memory_1);
#line 170
$_[0] = $memory_0;return $memory_2;
#line 170
undef($memory_2);
#line 170
undef($memory_1);
#line 170
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_fun_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 174
$memory_2 = "";
#line 174
$memory_3 = "";
#line 174
$memory_1 = {name => $memory_2,module => $memory_3,};
#line 174
undef($memory_2);
#line 174
undef($memory_3);
#line 175
$memory_3 = "state";
#line 175
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 175
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 175
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 175
undef($memory_4);
#line 175
$memory_4 = "state";
#line 175
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 175
undef($memory_4);
#line 175
undef($memory_3);
#line 175
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 175
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 175
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 176
$memory_3 = "after '\@' module name of function expacted";
#line 176
nparser_priv::add_error($memory_0, $memory_3);
#line 176
undef($memory_3);
#line 177
undef($memory_2);
#line 177
$_[0] = $memory_0;return $memory_1;
#line 178
goto label_2;
#line 178
label_2:
#line 178
undef($memory_2);
#line 179
$memory_3 = "state";
#line 179
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 179
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 179
$memory_2 = ntokenizer::eat_type($memory_3, $memory_4);
#line 179
undef($memory_4);
#line 179
$memory_4 = "state";
#line 179
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 179
undef($memory_4);
#line 179
undef($memory_3);
#line 179
$memory_3 = $memory_2;
#line 179
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'module'} = $memory_3;
#line 179
undef($memory_2);
#line 179
undef($memory_3);
#line 180
$memory_4 = "::";
#line 180
$memory_2 = nparser_priv::try_eat($memory_0, $memory_4);
#line 180
undef($memory_4);
#line 180
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 180
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 180
$memory_4 = "state";
#line 180
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 180
$memory_2 = ntokenizer::is_text($memory_4);
#line 180
$memory_5 = "state";
#line 180
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 180
undef($memory_5);
#line 180
undef($memory_4);
#line 180
label_5:
#line 180
undef($memory_3);
#line 180
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 180
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 181
$memory_4 = "state";
#line 181
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 181
$memory_3 = ntokenizer::eat_text($memory_4);
#line 181
$memory_5 = "state";
#line 181
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 181
undef($memory_5);
#line 181
undef($memory_4);
#line 181
$memory_4 = $memory_3;
#line 181
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'name'} = $memory_4;
#line 181
undef($memory_3);
#line 181
undef($memory_4);
#line 182
goto label_3;
#line 182
label_4:
#line 183
$memory_3 = "reference of function can be taken only to public function";
#line 183
nparser_priv::add_error($memory_0, $memory_3);
#line 183
undef($memory_3);
#line 184
goto label_3;
#line 184
label_3:
#line 184
undef($memory_2);
#line 185
$_[0] = $memory_0;return $memory_1;
#line 185
undef($memory_1);
#line 185
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 192
$memory_2 = "state";
#line 192
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 192
$memory_3 = c_rt_lib::ov_mk_none('word');
#line 192
$memory_1 = ntokenizer::eat_type($memory_2, $memory_3);
#line 192
undef($memory_3);
#line 192
$memory_3 = "state";
#line 192
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 192
undef($memory_3);
#line 192
undef($memory_2);
#line 193
$memory_4 = "state";
#line 193
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 193
$memory_5 = "(";
#line 193
$memory_2 = ntokenizer::next_is($memory_4, $memory_5);
#line 193
undef($memory_5);
#line 193
$memory_5 = "state";
#line 193
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 193
undef($memory_5);
#line 193
undef($memory_4);
#line 193
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 193
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 193
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 193
$memory_4 = "state";
#line 193
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 193
$memory_5 = "::";
#line 193
$memory_2 = ntokenizer::next_is($memory_4, $memory_5);
#line 193
undef($memory_5);
#line 193
$memory_5 = "state";
#line 193
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 193
undef($memory_5);
#line 193
undef($memory_4);
#line 193
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 193
label_3:
#line 193
undef($memory_3);
#line 193
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 193
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 193
$memory_3 = c_rt_lib::ov_mk_arg('var', $memory_1);
#line 193
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 193
undef($memory_1);
#line 193
undef($memory_2);
#line 193
$_[0] = $memory_0;return $memory_3;
#line 193
undef($memory_3);
#line 193
goto label_2;
#line 193
label_2:
#line 193
undef($memory_2);
#line 195
$memory_3 = "";
#line 195
$memory_4 = "";
#line 195
$memory_5 = [];
#line 195
$memory_2 = {module => $memory_3,name => $memory_4,args => $memory_5,};
#line 195
undef($memory_3);
#line 195
undef($memory_4);
#line 195
undef($memory_5);
#line 196
$memory_4 = "::";
#line 196
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 196
undef($memory_4);
#line 196
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 196
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 197
$memory_4 = $memory_1;
#line 197
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'module'} = $memory_4;
#line 197
undef($memory_4);
#line 198
$memory_5 = nparser_priv::eat_text($memory_0);
#line 198
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 198
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 198
undef($memory_1);
#line 198
undef($memory_2);
#line 198
undef($memory_3);
#line 198
undef($memory_4);
#line 198
$_[0] = $memory_0;return $memory_5;
#line 198
label_6:
#line 198
$memory_6 = c_rt_lib::ov_as($memory_5, 'ok');
#line 198
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_6;
#line 198
undef($memory_4);
#line 198
undef($memory_5);
#line 198
undef($memory_6);
#line 199
goto label_4;
#line 199
label_5:
#line 200
$memory_4 = $memory_1;
#line 200
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'name'} = $memory_4;
#line 200
undef($memory_4);
#line 201
goto label_4;
#line 201
label_4:
#line 201
undef($memory_3);
#line 202
$memory_3 = "(";
#line 202
nparser_priv::eat($memory_0, $memory_3);
#line 202
undef($memory_3);
#line 203
$memory_4 = nparser_priv::parse_fun_val_arg_list($memory_0);
#line 203
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 203
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 203
undef($memory_1);
#line 203
undef($memory_2);
#line 203
undef($memory_3);
#line 203
$_[0] = $memory_0;return $memory_4;
#line 203
label_7:
#line 203
$memory_5 = c_rt_lib::ov_as($memory_4, 'ok');
#line 203
 if (c_rt_lib::get_hashcount($memory_2) > 1) {$memory_2 = {%{$memory_2}};}$memory_2->{'args'} = $memory_5;
#line 203
undef($memory_3);
#line 203
undef($memory_4);
#line 203
undef($memory_5);
#line 204
$memory_3 = c_rt_lib::ov_mk_arg('fun_val', $memory_2);
#line 204
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 204
undef($memory_1);
#line 204
undef($memory_2);
#line 204
$_[0] = $memory_0;return $memory_3;
#line 204
undef($memory_3);
#line 204
undef($memory_1);
#line 204
undef($memory_2);
#line 204
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_hash_key($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 208
$memory_2 = "state";
#line 208
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 208
$memory_1 = ntokenizer::is_text($memory_2);
#line 208
$memory_3 = "state";
#line 208
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 208
undef($memory_3);
#line 208
undef($memory_2);
#line 208
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 208
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 208
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 208
$memory_2 = "";
#line 208
$memory_2 = c_rt_lib::ov_mk_arg('hash_key', $memory_2);
#line 208
undef($memory_1);
#line 208
$_[0] = $memory_0;return $memory_2;
#line 208
undef($memory_2);
#line 208
goto label_2;
#line 208
label_2:
#line 208
undef($memory_1);
#line 209
$memory_2 = "state";
#line 209
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 209
$memory_1 = ntokenizer::eat_text($memory_2);
#line 209
$memory_3 = "state";
#line 209
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 209
undef($memory_3);
#line 209
undef($memory_2);
#line 210
$memory_2 = c_rt_lib::ov_mk_arg('hash_key', $memory_1);
#line 210
undef($memory_1);
#line 210
$_[0] = $memory_0;return $memory_2;
#line 210
undef($memory_2);
#line 210
undef($memory_1);
#line 210
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_hash($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 214
$memory_1 = [];
#line 215
$memory_2 = "{";
#line 215
nparser_priv::eat($memory_0, $memory_2);
#line 215
undef($memory_2);
#line 216
label_2:
#line 216
$memory_3 = "state";
#line 216
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 216
$memory_4 = "}";
#line 216
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 216
undef($memory_4);
#line 216
$memory_4 = "state";
#line 216
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 216
undef($memory_4);
#line 216
undef($memory_3);
#line 216
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 216
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 216
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 217
$memory_4 = c_rt_lib::ov_mk_none('nop');
#line 217
$memory_5 = c_rt_lib::ov_mk_none('nop');
#line 217
$memory_3 = {key => $memory_4,val => $memory_5,};
#line 217
undef($memory_4);
#line 217
undef($memory_5);
#line 218
$memory_4 = nparser_priv::parse_hash_key($memory_0);
#line 218
$memory_5 = $memory_4;
#line 218
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'key'} = $memory_5;
#line 218
undef($memory_4);
#line 218
undef($memory_5);
#line 219
$memory_4 = "=>";
#line 219
nparser_priv::eat($memory_0, $memory_4);
#line 219
undef($memory_4);
#line 220
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 220
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 220
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 220
undef($memory_1);
#line 220
undef($memory_2);
#line 220
undef($memory_3);
#line 220
undef($memory_4);
#line 220
$_[0] = $memory_0;return $memory_5;
#line 220
label_3:
#line 220
$memory_6 = c_rt_lib::ov_as($memory_5, 'ok');
#line 220
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'val'} = $memory_6;
#line 220
undef($memory_4);
#line 220
undef($memory_5);
#line 220
undef($memory_6);
#line 221
array::push($memory_1, $memory_3);
#line 222
$memory_5 = ",";
#line 222
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 222
undef($memory_5);
#line 222
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 222
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 222
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 222
undef($memory_3);
#line 222
undef($memory_4);
#line 222
goto label_1;
#line 222
goto label_5;
#line 222
label_5:
#line 222
undef($memory_4);
#line 222
undef($memory_3);
#line 223
goto label_2;
#line 223
label_1:
#line 223
undef($memory_2);
#line 224
$memory_2 = "}";
#line 224
nparser_priv::eat($memory_0, $memory_2);
#line 224
undef($memory_2);
#line 225
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 225
undef($memory_1);
#line 225
$_[0] = $memory_0;return $memory_2;
#line 225
undef($memory_2);
#line 225
undef($memory_1);
#line 225
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_arr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 229
$memory_1 = [];
#line 230
$memory_2 = "[";
#line 230
nparser_priv::eat($memory_0, $memory_2);
#line 230
undef($memory_2);
#line 231
label_2:
#line 231
$memory_3 = "state";
#line 231
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 231
$memory_4 = "]";
#line 231
$memory_2 = ntokenizer::next_is($memory_3, $memory_4);
#line 231
undef($memory_4);
#line 231
$memory_4 = "state";
#line 231
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 231
undef($memory_4);
#line 231
undef($memory_3);
#line 231
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 231
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 231
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 232
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 232
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 232
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 232
undef($memory_1);
#line 232
undef($memory_2);
#line 232
undef($memory_3);
#line 232
undef($memory_4);
#line 232
$_[0] = $memory_0;return $memory_5;
#line 232
label_3:
#line 232
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 232
undef($memory_4);
#line 232
undef($memory_5);
#line 233
array::push($memory_1, $memory_3);
#line 234
$memory_5 = ",";
#line 234
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 234
undef($memory_5);
#line 234
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 234
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 234
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 234
undef($memory_3);
#line 234
undef($memory_4);
#line 234
goto label_1;
#line 234
goto label_5;
#line 234
label_5:
#line 234
undef($memory_4);
#line 234
undef($memory_3);
#line 235
goto label_2;
#line 235
label_1:
#line 235
undef($memory_2);
#line 236
$memory_2 = "]";
#line 236
nparser_priv::eat($memory_0, $memory_2);
#line 236
undef($memory_2);
#line 237
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 237
undef($memory_1);
#line 237
$_[0] = $memory_0;return $memory_2;
#line 237
undef($memory_2);
#line 237
undef($memory_1);
#line 237
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 241
$memory_4 = 0;
#line 241
$memory_3 = nparser_priv::parse_expr_rec($memory_0, $memory_4);
#line 241
undef($memory_4);
#line 241
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 241
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 241
undef($memory_1);
#line 241
undef($memory_2);
#line 241
$_[0] = $memory_0;return $memory_3;
#line 241
label_1:
#line 241
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 241
undef($memory_2);
#line 241
undef($memory_3);
#line 242
$memory_3 = 0;
#line 242
$memory_2 = nparser_priv::parse_expr_rec_left($memory_0, $memory_1, $memory_3);
#line 242
undef($memory_3);
#line 242
undef($memory_1);
#line 242
$_[0] = $memory_0;return $memory_2;
#line 242
undef($memory_2);
#line 242
undef($memory_1);
#line 242
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_type($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 246
$memory_2 = "\@";
#line 246
$memory_1 = nparser_priv::try_eat($memory_0, $memory_2);
#line 246
undef($memory_2);
#line 246
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 246
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 247
$memory_3 = "\@";
#line 247
$memory_4 = nparser_priv::parse_fun_label($memory_0);
#line 247
$memory_4 = c_rt_lib::ov_mk_arg('fun_label', $memory_4);
#line 247
$memory_2 = {op => $memory_3,val => $memory_4,};
#line 247
undef($memory_3);
#line 247
undef($memory_4);
#line 247
$memory_2 = c_rt_lib::ov_mk_arg('unary_op', $memory_2);
#line 247
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 247
undef($memory_1);
#line 247
$_[0] = $memory_0;return $memory_2;
#line 247
undef($memory_2);
#line 248
goto label_2;
#line 248
label_2:
#line 248
undef($memory_1);
#line 249
$memory_2 = "state";
#line 249
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 249
$memory_3 = c_rt_lib::ov_mk_none('word');
#line 249
$memory_1 = ntokenizer::is_type($memory_2, $memory_3);
#line 249
undef($memory_3);
#line 249
$memory_3 = "state";
#line 249
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 249
undef($memory_3);
#line 249
undef($memory_2);
#line 249
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 249
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 250
$memory_4 = nparser_priv::parse_label($memory_0);
#line 250
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 250
if (c_rt_lib::check_true($memory_3)) {goto label_5;}
#line 250
undef($memory_1);
#line 250
undef($memory_2);
#line 250
undef($memory_3);
#line 250
$_[0] = $memory_0;return $memory_4;
#line 250
label_5:
#line 250
$memory_2 = c_rt_lib::ov_as($memory_4, 'ok');
#line 250
undef($memory_3);
#line 250
undef($memory_4);
#line 251
$memory_3 = $memory_2;
#line 251
$memory_3 = c_rt_lib::ov_is($memory_3, 'fun_val');
#line 251
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 251
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 251
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 251
undef($memory_1);
#line 251
undef($memory_2);
#line 251
undef($memory_3);
#line 251
$_[0] = $memory_0;return $memory_4;
#line 251
undef($memory_4);
#line 251
goto label_7;
#line 251
label_7:
#line 251
undef($memory_3);
#line 251
undef($memory_2);
#line 252
goto label_4;
#line 252
label_4:
#line 252
undef($memory_1);
#line 253
$memory_1 = "wrong format of type, expected '\@' or function call";
#line 253
nparser_priv::add_error($memory_0, $memory_1);
#line 253
undef($memory_1);
#line 254
$memory_1 = c_rt_lib::ov_mk_none('nop');
#line 254
$memory_1 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 254
$_[0] = $memory_0;return $memory_1;
#line 254
undef($memory_1);
#line 254
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr_rec_left($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 258
label_2:
#line 259
$memory_4 = "state";
#line 259
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 259
$memory_3 = ntokenizer::get_token($memory_4);
#line 259
$memory_5 = "state";
#line 259
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 259
undef($memory_5);
#line 259
undef($memory_4);
#line 261
$memory_6 = nast::get_ternary_ops();
#line 261
$memory_5 = hash::has_key($memory_6, $memory_3);
#line 261
undef($memory_6);
#line 261
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 261
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 262
$memory_4 = $memory_3;
#line 263
$memory_6 = "?";
#line 263
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 263
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 263
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 264
$memory_8 = nast::get_ternary_ops();
#line 264
$memory_9 = "?";
#line 264
$memory_7 = hash::get_value($memory_8, $memory_9);
#line 264
undef($memory_9);
#line 264
undef($memory_8);
#line 265
$memory_8 = $memory_7->{'prec'};
#line 265
$memory_8 = c_rt_lib::to_nl($memory_8 < $memory_2);
#line 265
if (c_rt_lib::check_true($memory_8)) {goto label_9;}
#line 265
$memory_8 = $memory_7->{'prec'};
#line 265
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_2);
#line 265
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 265
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 265
$memory_8 = $memory_7->{'assoc'};
#line 265
$memory_8 = c_rt_lib::ov_is($memory_8, 'left');
#line 265
label_10:
#line 265
undef($memory_9);
#line 265
label_9:
#line 265
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 265
if (c_rt_lib::check_true($memory_8)) {goto label_8;}
#line 265
$memory_9 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 265
undef($memory_1);
#line 265
undef($memory_2);
#line 265
undef($memory_3);
#line 265
undef($memory_4);
#line 265
undef($memory_5);
#line 265
undef($memory_6);
#line 265
undef($memory_7);
#line 265
undef($memory_8);
#line 265
$_[0] = $memory_0;return $memory_9;
#line 265
undef($memory_9);
#line 265
goto label_8;
#line 265
label_8:
#line 265
undef($memory_8);
#line 266
nparser_priv::eat($memory_0, $memory_4);
#line 267
$memory_10 = nparser_priv::parse_expr($memory_0);
#line 267
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 267
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 267
undef($memory_1);
#line 267
undef($memory_2);
#line 267
undef($memory_3);
#line 267
undef($memory_4);
#line 267
undef($memory_5);
#line 267
undef($memory_6);
#line 267
undef($memory_7);
#line 267
undef($memory_8);
#line 267
undef($memory_9);
#line 267
$_[0] = $memory_0;return $memory_10;
#line 267
label_11:
#line 267
$memory_8 = c_rt_lib::ov_as($memory_10, 'ok');
#line 267
undef($memory_9);
#line 267
undef($memory_10);
#line 268
$memory_9 = ":";
#line 268
nparser_priv::eat($memory_0, $memory_9);
#line 268
undef($memory_9);
#line 269
$memory_12 = $memory_7->{'prec'};
#line 269
$memory_11 = nparser_priv::parse_expr_rec($memory_0, $memory_12);
#line 269
undef($memory_12);
#line 269
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 269
if (c_rt_lib::check_true($memory_10)) {goto label_12;}
#line 269
undef($memory_1);
#line 269
undef($memory_2);
#line 269
undef($memory_3);
#line 269
undef($memory_4);
#line 269
undef($memory_5);
#line 269
undef($memory_6);
#line 269
undef($memory_7);
#line 269
undef($memory_8);
#line 269
undef($memory_9);
#line 269
undef($memory_10);
#line 269
$_[0] = $memory_0;return $memory_11;
#line 269
label_12:
#line 269
$memory_9 = c_rt_lib::ov_as($memory_11, 'ok');
#line 269
undef($memory_10);
#line 269
undef($memory_11);
#line 270
$memory_11 = "?";
#line 270
$memory_10 = {fst => $memory_1,snd => $memory_8,thrd => $memory_9,op => $memory_11,};
#line 270
undef($memory_11);
#line 270
$memory_10 = c_rt_lib::ov_mk_arg('ternary_op', $memory_10);
#line 270
$memory_1 = $memory_10;
#line 270
undef($memory_10);
#line 270
undef($memory_7);
#line 270
undef($memory_8);
#line 270
undef($memory_9);
#line 271
goto label_5;
#line 271
label_6:
#line 272
$memory_7 = "ternary op: ";
#line 272
$memory_7 = $memory_7 . $memory_4;
#line 272
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 272
undef($memory_1);
#line 272
undef($memory_2);
#line 272
undef($memory_3);
#line 272
undef($memory_4);
#line 272
undef($memory_5);
#line 272
undef($memory_6);
#line 272
$_[0] = $memory_0;return $memory_7;
#line 272
undef($memory_7);
#line 273
goto label_5;
#line 273
label_5:
#line 273
undef($memory_6);
#line 274
goto label_3;
#line 274
label_4:
#line 274
$memory_6 = nast::get_bin_ops();
#line 274
$memory_5 = hash::has_key($memory_6, $memory_3);
#line 274
undef($memory_6);
#line 274
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 274
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 275
$memory_4 = $memory_3;
#line 276
$memory_7 = nast::get_bin_ops();
#line 276
$memory_6 = hash::get_value($memory_7, $memory_3);
#line 276
undef($memory_7);
#line 277
$memory_7 = $memory_6->{'prec'};
#line 277
$memory_7 = c_rt_lib::to_nl($memory_7 < $memory_2);
#line 277
if (c_rt_lib::check_true($memory_7)) {goto label_16;}
#line 277
$memory_7 = $memory_6->{'prec'};
#line 277
$memory_7 = c_rt_lib::to_nl($memory_7 == $memory_2);
#line 277
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 277
if (c_rt_lib::check_true($memory_8)) {goto label_17;}
#line 277
$memory_7 = $memory_6->{'assoc'};
#line 277
$memory_7 = c_rt_lib::ov_is($memory_7, 'left');
#line 277
label_17:
#line 277
undef($memory_8);
#line 277
label_16:
#line 277
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 277
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 277
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 277
undef($memory_1);
#line 277
undef($memory_2);
#line 277
undef($memory_3);
#line 277
undef($memory_4);
#line 277
undef($memory_5);
#line 277
undef($memory_6);
#line 277
undef($memory_7);
#line 277
$_[0] = $memory_0;return $memory_8;
#line 277
undef($memory_8);
#line 277
goto label_15;
#line 277
label_15:
#line 277
undef($memory_7);
#line 278
nparser_priv::eat($memory_0, $memory_3);
#line 279
$memory_7 = "->";
#line 279
$memory_7 = c_rt_lib::to_nl($memory_4 eq $memory_7);
#line 279
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 279
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 280
$memory_9 = nparser_priv::parse_hash_key($memory_0);
#line 280
$memory_8 = {op => $memory_4,left => $memory_1,right => $memory_9,};
#line 280
undef($memory_9);
#line 280
$memory_8 = c_rt_lib::ov_mk_arg('bin_op', $memory_8);
#line 280
$memory_1 = $memory_8;
#line 280
undef($memory_8);
#line 281
goto label_18;
#line 281
label_19:
#line 281
$memory_7 = "as";
#line 281
$memory_7 = c_rt_lib::to_nl($memory_4 eq $memory_7);
#line 281
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 281
if (c_rt_lib::check_true($memory_7)) {goto label_20;}
#line 282
$memory_8 = ":";
#line 282
nparser_priv::eat($memory_0, $memory_8);
#line 282
undef($memory_8);
#line 283
$memory_8 = nparser_priv::parse_variant_label($memory_0);
#line 284
$memory_10 = c_rt_lib::ov_mk_none('ov_as');
#line 284
$memory_9 = {op => $memory_10,left => $memory_1,case => $memory_8,};
#line 284
undef($memory_10);
#line 284
$memory_9 = c_rt_lib::ov_mk_arg('var_op', $memory_9);
#line 284
$memory_1 = $memory_9;
#line 284
undef($memory_9);
#line 284
undef($memory_8);
#line 285
goto label_18;
#line 285
label_20:
#line 285
$memory_7 = "is";
#line 285
$memory_7 = c_rt_lib::to_nl($memory_4 eq $memory_7);
#line 285
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 285
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 286
$memory_8 = ":";
#line 286
nparser_priv::eat($memory_0, $memory_8);
#line 286
undef($memory_8);
#line 287
$memory_8 = nparser_priv::parse_variant_label($memory_0);
#line 288
$memory_10 = c_rt_lib::ov_mk_none('ov_is');
#line 288
$memory_9 = {op => $memory_10,left => $memory_1,case => $memory_8,};
#line 288
undef($memory_10);
#line 288
$memory_9 = c_rt_lib::ov_mk_arg('var_op', $memory_9);
#line 288
$memory_1 = $memory_9;
#line 288
undef($memory_9);
#line 288
undef($memory_8);
#line 289
goto label_18;
#line 289
label_21:
#line 290
$memory_8 = "=";
#line 290
$memory_8 = c_rt_lib::to_nl($memory_4 eq $memory_8);
#line 290
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 290
if (c_rt_lib::check_true($memory_8)) {goto label_23;}
#line 290
nparser_priv::check_lvalue($memory_0, $memory_1);
#line 290
goto label_23;
#line 290
label_23:
#line 290
undef($memory_8);
#line 291
$memory_12 = nast::get_bin_ops();
#line 291
$memory_11 = hash::get_value($memory_12, $memory_4);
#line 291
undef($memory_12);
#line 291
$memory_11 = $memory_11->{'prec'};
#line 291
$memory_10 = nparser_priv::parse_expr_rec($memory_0, $memory_11);
#line 291
undef($memory_11);
#line 291
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 291
if (c_rt_lib::check_true($memory_9)) {goto label_24;}
#line 291
undef($memory_1);
#line 291
undef($memory_2);
#line 291
undef($memory_3);
#line 291
undef($memory_4);
#line 291
undef($memory_5);
#line 291
undef($memory_6);
#line 291
undef($memory_7);
#line 291
undef($memory_8);
#line 291
undef($memory_9);
#line 291
$_[0] = $memory_0;return $memory_10;
#line 291
label_24:
#line 291
$memory_8 = c_rt_lib::ov_as($memory_10, 'ok');
#line 291
undef($memory_9);
#line 291
undef($memory_10);
#line 292
$memory_9 = {left => $memory_1,op => $memory_4,right => $memory_8,};
#line 292
$memory_9 = c_rt_lib::ov_mk_arg('bin_op', $memory_9);
#line 292
$memory_1 = $memory_9;
#line 292
undef($memory_9);
#line 292
undef($memory_8);
#line 293
goto label_18;
#line 293
label_18:
#line 293
undef($memory_7);
#line 293
undef($memory_6);
#line 294
goto label_3;
#line 294
label_13:
#line 294
$memory_6 = "[";
#line 294
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 294
undef($memory_6);
#line 294
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 294
if (c_rt_lib::check_true($memory_5)) {goto label_25;}
#line 295
$memory_6 = "ARRAY_INDEX";
#line 295
$memory_4 = $memory_6;
#line 295
undef($memory_6);
#line 296
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 296
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 296
if (c_rt_lib::check_true($memory_7)) {goto label_26;}
#line 296
undef($memory_1);
#line 296
undef($memory_2);
#line 296
undef($memory_3);
#line 296
undef($memory_4);
#line 296
undef($memory_5);
#line 296
undef($memory_6);
#line 296
undef($memory_7);
#line 296
$_[0] = $memory_0;return $memory_8;
#line 296
label_26:
#line 296
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 296
undef($memory_7);
#line 296
undef($memory_8);
#line 297
$memory_7 = "]";
#line 297
nparser_priv::eat($memory_0, $memory_7);
#line 297
undef($memory_7);
#line 298
$memory_7 = {op => $memory_4,left => $memory_1,right => $memory_6,};
#line 298
$memory_7 = c_rt_lib::ov_mk_arg('bin_op', $memory_7);
#line 298
$memory_1 = $memory_7;
#line 298
undef($memory_7);
#line 298
undef($memory_6);
#line 299
goto label_3;
#line 299
label_25:
#line 299
$memory_6 = "++";
#line 299
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 299
undef($memory_6);
#line 299
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 299
if (c_rt_lib::check_true($memory_5)) {goto label_27;}
#line 300
$memory_6 = c_rt_lib::ov_mk_arg('post_inc', $memory_1);
#line 300
$memory_1 = $memory_6;
#line 300
undef($memory_6);
#line 301
goto label_3;
#line 301
label_27:
#line 301
$memory_6 = "--";
#line 301
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 301
undef($memory_6);
#line 301
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 301
if (c_rt_lib::check_true($memory_5)) {goto label_28;}
#line 302
$memory_6 = c_rt_lib::ov_mk_arg('post_dec', $memory_1);
#line 302
$memory_1 = $memory_6;
#line 302
undef($memory_6);
#line 303
goto label_3;
#line 303
label_28:
#line 304
$memory_6 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 304
undef($memory_1);
#line 304
undef($memory_2);
#line 304
undef($memory_3);
#line 304
undef($memory_4);
#line 304
undef($memory_5);
#line 304
$_[0] = $memory_0;return $memory_6;
#line 304
undef($memory_6);
#line 305
goto label_3;
#line 305
label_3:
#line 305
undef($memory_5);
#line 305
undef($memory_3);
#line 305
undef($memory_4);
#line 258
goto label_2;
#line 307
$memory_3 = [];
#line 307
die(dfile::ssave($memory_3));
#line 307
undef($memory_3);
#line 307
undef($memory_1);
#line 307
undef($memory_2);
#line 307
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_expr_rec($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 312
$memory_4 = "(";
#line 312
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 312
undef($memory_4);
#line 312
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 312
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 313
$memory_6 = nparser_priv::parse_expr($memory_0);
#line 313
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 313
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 313
undef($memory_1);
#line 313
undef($memory_2);
#line 313
undef($memory_3);
#line 313
undef($memory_4);
#line 313
undef($memory_5);
#line 313
$_[0] = $memory_0;return $memory_6;
#line 313
label_3:
#line 313
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 313
undef($memory_5);
#line 313
undef($memory_6);
#line 314
$memory_5 = c_rt_lib::ov_mk_arg('parenthesis', $memory_4);
#line 314
$memory_2 = $memory_5;
#line 314
undef($memory_5);
#line 315
$memory_5 = ")";
#line 315
nparser_priv::eat($memory_0, $memory_5);
#line 315
undef($memory_5);
#line 315
undef($memory_4);
#line 316
goto label_1;
#line 316
label_2:
#line 316
$memory_4 = "state";
#line 316
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 316
$memory_5 = "{";
#line 316
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 316
undef($memory_5);
#line 316
$memory_5 = "state";
#line 316
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 316
undef($memory_5);
#line 316
undef($memory_4);
#line 316
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 316
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 317
$memory_6 = nparser_priv::parse_hash($memory_0);
#line 317
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 317
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 317
undef($memory_1);
#line 317
undef($memory_2);
#line 317
undef($memory_3);
#line 317
undef($memory_4);
#line 317
undef($memory_5);
#line 317
$_[0] = $memory_0;return $memory_6;
#line 317
label_5:
#line 317
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 317
undef($memory_5);
#line 317
undef($memory_6);
#line 318
$memory_5 = c_rt_lib::ov_mk_arg('hash_decl', $memory_4);
#line 318
$memory_2 = $memory_5;
#line 318
undef($memory_5);
#line 318
undef($memory_4);
#line 319
goto label_1;
#line 319
label_4:
#line 319
$memory_4 = "state";
#line 319
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 319
$memory_5 = "[";
#line 319
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 319
undef($memory_5);
#line 319
$memory_5 = "state";
#line 319
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 319
undef($memory_5);
#line 319
undef($memory_4);
#line 319
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 319
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 320
$memory_6 = nparser_priv::parse_arr($memory_0);
#line 320
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 320
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 320
undef($memory_1);
#line 320
undef($memory_2);
#line 320
undef($memory_3);
#line 320
undef($memory_4);
#line 320
undef($memory_5);
#line 320
$_[0] = $memory_0;return $memory_6;
#line 320
label_7:
#line 320
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 320
undef($memory_5);
#line 320
undef($memory_6);
#line 321
$memory_5 = c_rt_lib::ov_mk_arg('arr_decl', $memory_4);
#line 321
$memory_2 = $memory_5;
#line 321
undef($memory_5);
#line 321
undef($memory_4);
#line 322
goto label_1;
#line 322
label_6:
#line 322
$memory_4 = "state";
#line 322
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 322
$memory_5 = ":";
#line 322
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 322
undef($memory_5);
#line 322
$memory_5 = "state";
#line 322
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 322
undef($memory_5);
#line 322
undef($memory_4);
#line 322
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 322
if (c_rt_lib::check_true($memory_3)) {goto label_8;}
#line 323
$memory_6 = nparser_priv::parse_variant($memory_0);
#line 323
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 323
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 323
undef($memory_1);
#line 323
undef($memory_2);
#line 323
undef($memory_3);
#line 323
undef($memory_4);
#line 323
undef($memory_5);
#line 323
$_[0] = $memory_0;return $memory_6;
#line 323
label_9:
#line 323
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 323
undef($memory_5);
#line 323
undef($memory_6);
#line 324
$memory_5 = c_rt_lib::ov_mk_arg('variant', $memory_4);
#line 324
$memory_2 = $memory_5;
#line 324
undef($memory_5);
#line 324
undef($memory_4);
#line 325
goto label_1;
#line 325
label_8:
#line 325
$memory_4 = "state";
#line 325
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 325
$memory_5 = c_rt_lib::ov_mk_none('number');
#line 325
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 325
undef($memory_5);
#line 325
$memory_5 = "state";
#line 325
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 325
undef($memory_5);
#line 325
undef($memory_4);
#line 325
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 325
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 326
$memory_5 = "state";
#line 326
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 326
$memory_6 = c_rt_lib::ov_mk_none('number');
#line 326
$memory_4 = ntokenizer::eat_type($memory_5, $memory_6);
#line 326
undef($memory_6);
#line 326
$memory_6 = "state";
#line 326
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 326
undef($memory_6);
#line 326
undef($memory_5);
#line 326
$memory_4 = c_rt_lib::ov_mk_arg('const', $memory_4);
#line 326
$memory_2 = $memory_4;
#line 326
undef($memory_4);
#line 327
goto label_1;
#line 327
label_10:
#line 327
$memory_4 = "state";
#line 327
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 327
$memory_5 = c_rt_lib::ov_mk_none('multi_string');
#line 327
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 327
undef($memory_5);
#line 327
$memory_5 = "state";
#line 327
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 327
undef($memory_5);
#line 327
undef($memory_4);
#line 327
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 327
$memory_4 = "state";
#line 327
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 327
$memory_5 = c_rt_lib::ov_mk_none('string');
#line 327
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 327
undef($memory_5);
#line 327
$memory_5 = "state";
#line 327
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 327
undef($memory_5);
#line 327
undef($memory_4);
#line 327
label_12:
#line 327
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 327
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 328
$memory_5 = [];
#line 328
$memory_4 = {arr => $memory_5,};
#line 328
undef($memory_5);
#line 329
label_14:
#line 329
$memory_6 = "state";
#line 329
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 329
$memory_7 = c_rt_lib::ov_mk_none('multi_string');
#line 329
$memory_5 = ntokenizer::is_type($memory_6, $memory_7);
#line 329
undef($memory_7);
#line 329
$memory_7 = "state";
#line 329
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 329
undef($memory_7);
#line 329
undef($memory_6);
#line 329
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 329
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 330
$memory_6 = "arr";
#line 330
$memory_6 = c_rt_lib::get_ref_hash($memory_4, $memory_6);
#line 330
$memory_8 = "state";
#line 330
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 330
$memory_9 = c_rt_lib::ov_mk_none('multi_string');
#line 330
$memory_7 = ntokenizer::eat_type($memory_8, $memory_9);
#line 330
undef($memory_9);
#line 330
$memory_9 = "state";
#line 330
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_8);
#line 330
undef($memory_9);
#line 330
undef($memory_8);
#line 330
array::push($memory_6, $memory_7);
#line 330
undef($memory_7);
#line 330
$memory_7 = "arr";
#line 330
c_rt_lib::set_ref_hash($memory_4, $memory_7, $memory_6);
#line 330
undef($memory_7);
#line 330
undef($memory_6);
#line 331
goto label_14;
#line 331
label_13:
#line 331
undef($memory_5);
#line 332
$memory_6 = "state";
#line 332
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 332
$memory_7 = c_rt_lib::ov_mk_none('string');
#line 332
$memory_5 = ntokenizer::is_type($memory_6, $memory_7);
#line 332
undef($memory_7);
#line 332
$memory_7 = "state";
#line 332
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 332
undef($memory_7);
#line 332
undef($memory_6);
#line 332
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 332
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 333
$memory_6 = "arr";
#line 333
$memory_6 = c_rt_lib::get_ref_hash($memory_4, $memory_6);
#line 333
$memory_8 = "state";
#line 333
$memory_8 = c_rt_lib::get_ref_hash($memory_0, $memory_8);
#line 333
$memory_9 = c_rt_lib::ov_mk_none('string');
#line 333
$memory_7 = ntokenizer::eat_type($memory_8, $memory_9);
#line 333
undef($memory_9);
#line 333
$memory_9 = "state";
#line 333
c_rt_lib::set_ref_hash($memory_0, $memory_9, $memory_8);
#line 333
undef($memory_9);
#line 333
undef($memory_8);
#line 333
array::push($memory_6, $memory_7);
#line 333
undef($memory_7);
#line 333
$memory_7 = "arr";
#line 333
c_rt_lib::set_ref_hash($memory_4, $memory_7, $memory_6);
#line 333
undef($memory_7);
#line 333
undef($memory_6);
#line 334
$memory_6 = c_rt_lib::ov_mk_none('end');
#line 334
$memory_7 = $memory_6;
#line 334
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'last'} = $memory_7;
#line 334
undef($memory_6);
#line 334
undef($memory_7);
#line 335
goto label_15;
#line 335
label_16:
#line 336
$memory_6 = c_rt_lib::ov_mk_none('new_line');
#line 336
$memory_7 = $memory_6;
#line 336
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'last'} = $memory_7;
#line 336
undef($memory_6);
#line 336
undef($memory_7);
#line 337
goto label_15;
#line 337
label_15:
#line 337
undef($memory_5);
#line 338
$memory_5 = c_rt_lib::ov_mk_arg('string', $memory_4);
#line 338
$memory_2 = $memory_5;
#line 338
undef($memory_5);
#line 338
undef($memory_4);
#line 339
goto label_1;
#line 339
label_11:
#line 339
$memory_4 = "state";
#line 339
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 339
$memory_5 = c_rt_lib::ov_mk_none('word');
#line 339
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 339
undef($memory_5);
#line 339
$memory_5 = "state";
#line 339
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 339
undef($memory_5);
#line 339
undef($memory_4);
#line 339
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 339
if (c_rt_lib::check_true($memory_3)) {goto label_17;}
#line 340
$memory_5 = nparser_priv::parse_label($memory_0);
#line 340
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 340
if (c_rt_lib::check_true($memory_4)) {goto label_18;}
#line 340
undef($memory_1);
#line 340
undef($memory_2);
#line 340
undef($memory_3);
#line 340
undef($memory_4);
#line 340
$_[0] = $memory_0;return $memory_5;
#line 340
label_18:
#line 340
$memory_2 = c_rt_lib::ov_as($memory_5, 'ok');
#line 340
undef($memory_4);
#line 340
undef($memory_5);
#line 341
goto label_1;
#line 341
label_17:
#line 341
$memory_5 = "state";
#line 341
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 341
$memory_6 = c_rt_lib::ov_mk_none('operator');
#line 341
$memory_3 = ntokenizer::is_type($memory_5, $memory_6);
#line 341
undef($memory_6);
#line 341
$memory_6 = "state";
#line 341
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 341
undef($memory_6);
#line 341
undef($memory_5);
#line 341
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 341
if (c_rt_lib::check_true($memory_4)) {goto label_20;}
#line 341
$memory_5 = nast::get_unary_ops();
#line 341
$memory_7 = "state";
#line 341
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 341
$memory_6 = ntokenizer::get_token($memory_7);
#line 341
$memory_8 = "state";
#line 341
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 341
undef($memory_8);
#line 341
undef($memory_7);
#line 341
$memory_3 = hash::has_key($memory_5, $memory_6);
#line 341
undef($memory_6);
#line 341
undef($memory_5);
#line 341
label_20:
#line 341
undef($memory_4);
#line 341
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 341
if (c_rt_lib::check_true($memory_3)) {goto label_19;}
#line 343
$memory_5 = "state";
#line 343
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 343
$memory_6 = c_rt_lib::ov_mk_none('operator');
#line 343
$memory_4 = ntokenizer::eat_type($memory_5, $memory_6);
#line 343
undef($memory_6);
#line 343
$memory_6 = "state";
#line 343
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 343
undef($memory_6);
#line 343
undef($memory_5);
#line 345
$memory_6 = "\@";
#line 345
$memory_6 = c_rt_lib::to_nl($memory_4 eq $memory_6);
#line 345
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 345
if (c_rt_lib::check_true($memory_6)) {goto label_22;}
#line 346
$memory_7 = nparser_priv::parse_fun_label($memory_0);
#line 346
$memory_7 = c_rt_lib::ov_mk_arg('fun_label', $memory_7);
#line 346
$memory_5 = $memory_7;
#line 346
undef($memory_7);
#line 347
goto label_21;
#line 347
label_22:
#line 348
$memory_10 = nast::get_unary_ops();
#line 348
$memory_9 = hash::get_value($memory_10, $memory_4);
#line 348
undef($memory_10);
#line 348
$memory_9 = $memory_9->{'prec'};
#line 348
$memory_8 = nparser_priv::parse_expr_rec($memory_0, $memory_9);
#line 348
undef($memory_9);
#line 348
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 348
if (c_rt_lib::check_true($memory_7)) {goto label_23;}
#line 348
undef($memory_1);
#line 348
undef($memory_2);
#line 348
undef($memory_3);
#line 348
undef($memory_4);
#line 348
undef($memory_5);
#line 348
undef($memory_6);
#line 348
undef($memory_7);
#line 348
$_[0] = $memory_0;return $memory_8;
#line 348
label_23:
#line 348
$memory_5 = c_rt_lib::ov_as($memory_8, 'ok');
#line 348
undef($memory_7);
#line 348
undef($memory_8);
#line 349
$memory_7 = $memory_5;
#line 349
$memory_7 = c_rt_lib::ov_is($memory_7, 'unary_op');
#line 349
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 349
if (c_rt_lib::check_true($memory_7)) {goto label_25;}
#line 349
$memory_8 = "unary operator after unary operator";
#line 349
nparser_priv::add_error($memory_0, $memory_8);
#line 349
undef($memory_8);
#line 349
goto label_25;
#line 349
label_25:
#line 349
undef($memory_7);
#line 350
goto label_21;
#line 350
label_21:
#line 350
undef($memory_6);
#line 351
$memory_6 = {op => $memory_4,val => $memory_5,};
#line 351
$memory_6 = c_rt_lib::ov_mk_arg('unary_op', $memory_6);
#line 351
$memory_2 = $memory_6;
#line 351
undef($memory_6);
#line 351
undef($memory_4);
#line 351
undef($memory_5);
#line 352
goto label_1;
#line 352
label_19:
#line 352
$memory_4 = "state";
#line 352
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 352
$memory_5 = c_rt_lib::ov_mk_none('keyword');
#line 352
$memory_3 = ntokenizer::is_type($memory_4, $memory_5);
#line 352
undef($memory_5);
#line 352
$memory_5 = "state";
#line 352
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 352
undef($memory_5);
#line 352
undef($memory_4);
#line 352
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 352
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 353
$memory_5 = "true";
#line 353
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 353
undef($memory_5);
#line 353
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 353
if (c_rt_lib::check_true($memory_4)) {goto label_28;}
#line 354
$memory_6 = "TRUE";
#line 354
$memory_7 = c_rt_lib::ov_mk_none('nop');
#line 354
$memory_5 = {name => $memory_6,var => $memory_7,};
#line 354
undef($memory_6);
#line 354
undef($memory_7);
#line 354
$memory_5 = c_rt_lib::ov_mk_arg('variant', $memory_5);
#line 354
$memory_2 = $memory_5;
#line 354
undef($memory_5);
#line 355
goto label_27;
#line 355
label_28:
#line 355
$memory_5 = "false";
#line 355
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 355
undef($memory_5);
#line 355
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 355
if (c_rt_lib::check_true($memory_4)) {goto label_29;}
#line 356
$memory_6 = "FALSE";
#line 356
$memory_7 = c_rt_lib::ov_mk_none('nop');
#line 356
$memory_5 = {name => $memory_6,var => $memory_7,};
#line 356
undef($memory_6);
#line 356
undef($memory_7);
#line 356
$memory_5 = c_rt_lib::ov_mk_arg('variant', $memory_5);
#line 356
$memory_2 = $memory_5;
#line 356
undef($memory_5);
#line 357
goto label_27;
#line 357
label_29:
#line 358
$memory_5 = "use keyword in wrong context:";
#line 358
$memory_6 = string::lf();
#line 358
$memory_5 = $memory_5 . $memory_6;
#line 358
undef($memory_6);
#line 358
$memory_7 = $memory_0->{'state'};
#line 358
$memory_6 = ntokenizer::info($memory_7);
#line 358
undef($memory_7);
#line 358
$memory_5 = $memory_5 . $memory_6;
#line 358
undef($memory_6);
#line 359
nparser_priv::add_error($memory_0, $memory_5);
#line 360
$memory_6 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 360
undef($memory_1);
#line 360
undef($memory_2);
#line 360
undef($memory_3);
#line 360
undef($memory_4);
#line 360
undef($memory_5);
#line 360
$_[0] = $memory_0;return $memory_6;
#line 360
undef($memory_6);
#line 360
undef($memory_5);
#line 361
goto label_27;
#line 361
label_27:
#line 361
undef($memory_4);
#line 362
goto label_1;
#line 362
label_26:
#line 363
$memory_4 = "error in parse_expr:";
#line 363
$memory_5 = string::lf();
#line 363
$memory_4 = $memory_4 . $memory_5;
#line 363
undef($memory_5);
#line 363
$memory_6 = $memory_0->{'state'};
#line 363
$memory_5 = ntokenizer::info($memory_6);
#line 363
undef($memory_6);
#line 363
$memory_4 = $memory_4 . $memory_5;
#line 363
undef($memory_5);
#line 364
nparser_priv::add_error($memory_0, $memory_4);
#line 365
$memory_5 = c_rt_lib::ov_mk_arg('err', $memory_4);
#line 365
undef($memory_1);
#line 365
undef($memory_2);
#line 365
undef($memory_3);
#line 365
undef($memory_4);
#line 365
$_[0] = $memory_0;return $memory_5;
#line 365
undef($memory_5);
#line 365
undef($memory_4);
#line 366
goto label_1;
#line 366
label_1:
#line 366
undef($memory_3);
#line 367
$memory_3 = nparser_priv::parse_expr_rec_left($memory_0, $memory_2, $memory_1);
#line 367
undef($memory_1);
#line 367
undef($memory_2);
#line 367
$_[0] = $memory_0;return $memory_3;
#line 367
undef($memory_3);
#line 367
undef($memory_2);
#line 367
undef($memory_1);
#line 367
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::eat_text($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 371
$memory_2 = "state";
#line 371
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 371
$memory_1 = ntokenizer::is_text($memory_2);
#line 371
$memory_3 = "state";
#line 371
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 371
undef($memory_3);
#line 371
undef($memory_2);
#line 371
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 371
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 372
$memory_3 = "state";
#line 372
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 372
$memory_2 = ntokenizer::eat_text($memory_3);
#line 372
$memory_4 = "state";
#line 372
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 372
undef($memory_4);
#line 372
undef($memory_3);
#line 372
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_2);
#line 372
undef($memory_1);
#line 372
$_[0] = $memory_0;return $memory_2;
#line 372
undef($memory_2);
#line 373
goto label_1;
#line 373
label_2:
#line 374
$memory_2 = "word expected";
#line 374
nparser_priv::add_error($memory_0, $memory_2);
#line 374
undef($memory_2);
#line 375
$memory_2 = "word expected";
#line 375
$memory_2 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 375
undef($memory_1);
#line 375
$_[0] = $memory_0;return $memory_2;
#line 375
undef($memory_2);
#line 376
goto label_1;
#line 376
label_1:
#line 376
undef($memory_1);
#line 376
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_variant_label($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 380
$memory_2 = "state";
#line 380
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 380
$memory_1 = ntokenizer::is_text($memory_2);
#line 380
$memory_3 = "state";
#line 380
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 380
undef($memory_3);
#line 380
undef($memory_2);
#line 380
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 380
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 381
$memory_3 = "state";
#line 381
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 381
$memory_2 = ntokenizer::eat_text($memory_3);
#line 381
$memory_4 = "state";
#line 381
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 381
undef($memory_4);
#line 381
undef($memory_3);
#line 381
undef($memory_1);
#line 381
$_[0] = $memory_0;return $memory_2;
#line 381
undef($memory_2);
#line 382
goto label_1;
#line 382
label_2:
#line 383
$memory_2 = "word expected";
#line 383
nparser_priv::add_error($memory_0, $memory_2);
#line 383
undef($memory_2);
#line 384
$memory_2 = "";
#line 384
undef($memory_1);
#line 384
$_[0] = $memory_0;return $memory_2;
#line 384
undef($memory_2);
#line 385
goto label_1;
#line 385
label_1:
#line 385
undef($memory_1);
#line 385
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_variant($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 389
$memory_1 = ":";
#line 389
nparser_priv::eat($memory_0, $memory_1);
#line 389
undef($memory_1);
#line 390
$memory_1 = nparser_priv::parse_variant_label($memory_0);
#line 391
$memory_2 = c_rt_lib::ov_mk_none('nop');
#line 392
$memory_4 = "(";
#line 392
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 392
undef($memory_4);
#line 392
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 392
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 393
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 393
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 393
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 393
undef($memory_1);
#line 393
undef($memory_2);
#line 393
undef($memory_3);
#line 393
undef($memory_4);
#line 393
$_[0] = $memory_0;return $memory_5;
#line 393
label_3:
#line 393
$memory_2 = c_rt_lib::ov_as($memory_5, 'ok');
#line 393
undef($memory_4);
#line 393
undef($memory_5);
#line 394
$memory_4 = ")";
#line 394
nparser_priv::eat($memory_0, $memory_4);
#line 394
undef($memory_4);
#line 395
goto label_1;
#line 395
label_2:
#line 396
$memory_4 = c_rt_lib::ov_mk_none('nop');
#line 396
$memory_2 = $memory_4;
#line 396
undef($memory_4);
#line 397
goto label_1;
#line 397
label_1:
#line 397
undef($memory_3);
#line 398
$memory_3 = {name => $memory_1,var => $memory_2,};
#line 398
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 398
undef($memory_1);
#line 398
undef($memory_2);
#line 398
$_[0] = $memory_0;return $memory_3;
#line 398
undef($memory_3);
#line 398
undef($memory_1);
#line 398
undef($memory_2);
#line 398
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::check_lvalue($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 402
$memory_2 = $memory_1;
#line 402
$memory_2 = c_rt_lib::ov_is($memory_2, 'var');
#line 402
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 402
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 403
undef($memory_1);
#line 403
undef($memory_2);
#line 403
$_[0] = $memory_0;return;
#line 404
goto label_3;
#line 404
label_2:
#line 404
$memory_2 = $memory_1;
#line 404
$memory_2 = c_rt_lib::ov_is($memory_2, 'bin_op');
#line 404
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 404
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 405
$memory_3 = $memory_1;
#line 405
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 406
$memory_4 = $memory_3->{'op'};
#line 406
$memory_5 = "->";
#line 406
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 406
undef($memory_5);
#line 406
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 406
$memory_4 = $memory_3->{'op'};
#line 406
$memory_5 = "ARRAY_INDEX";
#line 406
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 406
undef($memory_5);
#line 406
label_6:
#line 406
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 406
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 407
$memory_5 = $memory_3->{'left'};
#line 407
nparser_priv::check_lvalue($memory_0, $memory_5);
#line 407
undef($memory_5);
#line 408
undef($memory_1);
#line 408
undef($memory_2);
#line 408
undef($memory_3);
#line 408
undef($memory_4);
#line 408
$_[0] = $memory_0;return;
#line 409
goto label_5;
#line 409
label_5:
#line 409
undef($memory_4);
#line 409
undef($memory_3);
#line 410
goto label_3;
#line 410
label_3:
#line 410
undef($memory_2);
#line 411
$memory_2 = "invalid expr for lvalue";
#line 411
nparser_priv::add_error($memory_0, $memory_2);
#line 411
undef($memory_2);
#line 411
undef($memory_1);
#line 411
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_variant_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 415
$memory_1 = ":";
#line 415
nparser_priv::eat($memory_0, $memory_1);
#line 415
undef($memory_1);
#line 416
$memory_2 = nparser_priv::parse_variant_label($memory_0);
#line 416
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 416
$memory_1 = {name => $memory_2,value => $memory_3,};
#line 416
undef($memory_2);
#line 416
undef($memory_3);
#line 417
$memory_3 = "(";
#line 417
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 417
undef($memory_3);
#line 417
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 417
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 418
$memory_3 = nparser_priv::parse_var_decl_sim($memory_0);
#line 418
$memory_3 = c_rt_lib::ov_mk_arg('value', $memory_3);
#line 418
$memory_4 = $memory_3;
#line 418
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'value'} = $memory_4;
#line 418
undef($memory_3);
#line 418
undef($memory_4);
#line 419
$memory_3 = ")";
#line 419
nparser_priv::eat($memory_0, $memory_3);
#line 419
undef($memory_3);
#line 420
goto label_2;
#line 420
label_2:
#line 420
undef($memory_2);
#line 421
$_[0] = $memory_0;return $memory_1;
#line 421
undef($memory_1);
#line 421
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_var_decl($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 425
$memory_1 = "var";
#line 425
nparser_priv::eat($memory_0, $memory_1);
#line 425
undef($memory_1);
#line 426
$memory_2 = "";
#line 426
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 426
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 426
$memory_1 = {name => $memory_2,type => $memory_3,value => $memory_4,};
#line 426
undef($memory_2);
#line 426
undef($memory_3);
#line 426
undef($memory_4);
#line 427
$memory_3 = "state";
#line 427
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 427
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 427
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 427
undef($memory_4);
#line 427
$memory_4 = "state";
#line 427
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 427
undef($memory_4);
#line 427
undef($memory_3);
#line 427
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 427
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 428
$memory_4 = "state";
#line 428
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 428
$memory_5 = c_rt_lib::ov_mk_none('word');
#line 428
$memory_3 = ntokenizer::eat_type($memory_4, $memory_5);
#line 428
undef($memory_5);
#line 428
$memory_5 = "state";
#line 428
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 428
undef($memory_5);
#line 428
undef($memory_4);
#line 428
$memory_4 = $memory_3;
#line 428
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'name'} = $memory_4;
#line 428
undef($memory_3);
#line 428
undef($memory_4);
#line 429
goto label_1;
#line 429
label_2:
#line 430
$memory_3 = "variable name expected";
#line 430
nparser_priv::add_error($memory_0, $memory_3);
#line 430
undef($memory_3);
#line 431
goto label_1;
#line 431
label_1:
#line 431
undef($memory_2);
#line 432
$memory_3 = ":";
#line 432
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 432
undef($memory_3);
#line 432
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 432
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 433
$memory_5 = nparser_priv::parse_type($memory_0);
#line 433
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 433
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 433
undef($memory_1);
#line 433
undef($memory_2);
#line 433
undef($memory_3);
#line 433
undef($memory_4);
#line 433
$_[0] = $memory_0;return $memory_5;
#line 433
label_5:
#line 433
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 433
undef($memory_4);
#line 433
undef($memory_5);
#line 434
$memory_4 = c_rt_lib::ov_mk_arg('type', $memory_3);
#line 434
$memory_5 = $memory_4;
#line 434
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'type'} = $memory_5;
#line 434
undef($memory_4);
#line 434
undef($memory_5);
#line 434
undef($memory_3);
#line 435
goto label_4;
#line 435
label_4:
#line 435
undef($memory_2);
#line 436
$memory_3 = "=";
#line 436
$memory_2 = nparser_priv::try_eat($memory_0, $memory_3);
#line 436
undef($memory_3);
#line 436
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 436
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 437
$memory_5 = nparser_priv::parse_expr($memory_0);
#line 437
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 437
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 437
undef($memory_1);
#line 437
undef($memory_2);
#line 437
undef($memory_3);
#line 437
undef($memory_4);
#line 437
$_[0] = $memory_0;return $memory_5;
#line 437
label_8:
#line 437
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 437
undef($memory_4);
#line 437
undef($memory_5);
#line 438
$memory_4 = c_rt_lib::ov_mk_arg('value', $memory_3);
#line 438
$memory_5 = $memory_4;
#line 438
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'value'} = $memory_5;
#line 438
undef($memory_4);
#line 438
undef($memory_5);
#line 438
undef($memory_3);
#line 439
goto label_7;
#line 439
label_7:
#line 439
undef($memory_2);
#line 440
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 440
undef($memory_1);
#line 440
$_[0] = $memory_0;return $memory_2;
#line 440
undef($memory_2);
#line 440
undef($memory_1);
#line 440
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_var_decl_sim($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 444
$memory_1 = "var";
#line 444
nparser_priv::eat($memory_0, $memory_1);
#line 444
undef($memory_1);
#line 445
$memory_2 = "";
#line 445
$memory_3 = c_rt_lib::ov_mk_none('none');
#line 445
$memory_4 = c_rt_lib::ov_mk_none('none');
#line 445
$memory_1 = {name => $memory_2,type => $memory_3,value => $memory_4,};
#line 445
undef($memory_2);
#line 445
undef($memory_3);
#line 445
undef($memory_4);
#line 446
$memory_3 = "state";
#line 446
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 446
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 446
$memory_2 = ntokenizer::is_type($memory_3, $memory_4);
#line 446
undef($memory_4);
#line 446
$memory_4 = "state";
#line 446
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 446
undef($memory_4);
#line 446
undef($memory_3);
#line 446
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 446
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 447
$memory_4 = "state";
#line 447
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 447
$memory_5 = c_rt_lib::ov_mk_none('word');
#line 447
$memory_3 = ntokenizer::eat_type($memory_4, $memory_5);
#line 447
undef($memory_5);
#line 447
$memory_5 = "state";
#line 447
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 447
undef($memory_5);
#line 447
undef($memory_4);
#line 447
$memory_4 = $memory_3;
#line 447
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'name'} = $memory_4;
#line 447
undef($memory_3);
#line 447
undef($memory_4);
#line 448
goto label_1;
#line 448
label_2:
#line 449
$memory_3 = "variable name expected";
#line 449
nparser_priv::add_error($memory_0, $memory_3);
#line 449
undef($memory_3);
#line 450
goto label_1;
#line 450
label_1:
#line 450
undef($memory_2);
#line 451
$_[0] = $memory_0;return $memory_1;
#line 451
undef($memory_1);
#line 451
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_cond($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 455
$memory_1 = "(";
#line 455
nparser_priv::eat($memory_0, $memory_1);
#line 455
undef($memory_1);
#line 456
$memory_3 = nparser_priv::parse_expr($memory_0);
#line 456
$memory_2 = c_rt_lib::ov_is($memory_3, 'ok');
#line 456
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 456
undef($memory_1);
#line 456
undef($memory_2);
#line 456
$_[0] = $memory_0;return $memory_3;
#line 456
label_1:
#line 456
$memory_1 = c_rt_lib::ov_as($memory_3, 'ok');
#line 456
undef($memory_2);
#line 456
undef($memory_3);
#line 457
$memory_2 = ")";
#line 457
nparser_priv::eat($memory_0, $memory_2);
#line 457
undef($memory_2);
#line 458
$memory_2 = c_rt_lib::ov_mk_arg('ok', $memory_1);
#line 458
undef($memory_1);
#line 458
$_[0] = $memory_0;return $memory_2;
#line 458
undef($memory_2);
#line 458
undef($memory_1);
#line 458
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_block($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 462
$memory_2 = "state";
#line 462
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 462
$memory_1 = ntokenizer::get_place($memory_2);
#line 462
$memory_3 = "state";
#line 462
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 462
undef($memory_3);
#line 462
undef($memory_2);
#line 463
$memory_2 = "{";
#line 463
nparser_priv::eat($memory_0, $memory_2);
#line 463
undef($memory_2);
#line 464
$memory_2 = [];
#line 465
label_2:
#line 465
$memory_4 = "}";
#line 465
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 465
undef($memory_4);
#line 465
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 465
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 465
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 466
$memory_5 = ";";
#line 466
$memory_4 = nparser_priv::try_eat($memory_0, $memory_5);
#line 466
undef($memory_5);
#line 466
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 466
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 466
undef($memory_4);
#line 466
goto label_2;
#line 466
goto label_4;
#line 466
label_4:
#line 466
undef($memory_4);
#line 467
$memory_6 = nparser_priv::parse_cmd($memory_0);
#line 467
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 467
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 467
undef($memory_1);
#line 467
undef($memory_2);
#line 467
undef($memory_3);
#line 467
undef($memory_4);
#line 467
undef($memory_5);
#line 467
$_[0] = $memory_0;return $memory_6;
#line 467
label_5:
#line 467
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 467
undef($memory_5);
#line 467
undef($memory_6);
#line 468
array::push($memory_2, $memory_4);
#line 468
undef($memory_4);
#line 469
goto label_2;
#line 469
label_1:
#line 469
undef($memory_3);
#line 470
$memory_4 = "state";
#line 470
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 470
$memory_3 = ntokenizer::get_place_ws($memory_4);
#line 470
$memory_5 = "state";
#line 470
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 470
undef($memory_5);
#line 470
undef($memory_4);
#line 471
$memory_4 = {begin => $memory_1,end => $memory_3,};
#line 472
$memory_6 = c_rt_lib::ov_mk_arg('block', $memory_2);
#line 472
$memory_5 = {debug => $memory_4,cmd => $memory_6,};
#line 472
undef($memory_6);
#line 472
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
#line 472
undef($memory_1);
#line 472
undef($memory_2);
#line 472
undef($memory_3);
#line 472
undef($memory_4);
#line 472
$_[0] = $memory_0;return $memory_5;
#line 472
undef($memory_5);
#line 472
undef($memory_1);
#line 472
undef($memory_2);
#line 472
undef($memory_3);
#line 472
undef($memory_4);
#line 472
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::parse_try_ensure($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 476
$memory_2 = "state";
#line 476
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 476
$memory_3 = "var";
#line 476
$memory_1 = ntokenizer::next_is($memory_2, $memory_3);
#line 476
undef($memory_3);
#line 476
$memory_3 = "state";
#line 476
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 476
undef($memory_3);
#line 476
undef($memory_2);
#line 476
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 476
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 477
$memory_4 = nparser_priv::parse_var_decl($memory_0);
#line 477
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 477
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 477
undef($memory_1);
#line 477
undef($memory_2);
#line 477
undef($memory_3);
#line 477
$_[0] = $memory_0;return $memory_4;
#line 477
label_3:
#line 477
$memory_2 = c_rt_lib::ov_as($memory_4, 'ok');
#line 477
undef($memory_3);
#line 477
undef($memory_4);
#line 478
$memory_3 = c_rt_lib::ov_mk_arg('decl', $memory_2);
#line 478
$memory_3 = c_rt_lib::ov_mk_arg('ok', $memory_3);
#line 478
undef($memory_1);
#line 478
undef($memory_2);
#line 478
$_[0] = $memory_0;return $memory_3;
#line 478
undef($memory_3);
#line 478
undef($memory_2);
#line 479
goto label_1;
#line 479
label_2:
#line 480
$memory_4 = nparser_priv::parse_expr($memory_0);
#line 480
$memory_3 = c_rt_lib::ov_is($memory_4, 'ok');
#line 480
if (c_rt_lib::check_true($memory_3)) {goto label_4;}
#line 480
undef($memory_1);
#line 480
undef($memory_2);
#line 480
undef($memory_3);
#line 480
$_[0] = $memory_0;return $memory_4;
#line 480
label_4:
#line 480
$memory_2 = c_rt_lib::ov_as($memory_4, 'ok');
#line 480
undef($memory_3);
#line 480
undef($memory_4);
#line 481
$memory_3 = $memory_2;
#line 481
$memory_3 = c_rt_lib::ov_is($memory_3, 'bin_op');
#line 481
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 481
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 481
$memory_3 = $memory_2;
#line 481
$memory_3 = c_rt_lib::ov_as($memory_3, 'bin_op');
#line 481
$memory_3 = $memory_3->{'op'};
#line 481
$memory_5 = "=";
#line 481
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_5);
#line 481
undef($memory_5);
#line 481
label_7:
#line 481
undef($memory_4);
#line 481
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 481
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 482
$memory_4 = $memory_2;
#line 482
$memory_4 = c_rt_lib::ov_as($memory_4, 'bin_op');
#line 482
$memory_4 = c_rt_lib::ov_mk_arg('lval', $memory_4);
#line 482
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 482
undef($memory_1);
#line 482
undef($memory_2);
#line 482
undef($memory_3);
#line 482
$_[0] = $memory_0;return $memory_4;
#line 482
undef($memory_4);
#line 483
goto label_5;
#line 483
label_6:
#line 484
$memory_4 = c_rt_lib::ov_mk_arg('expr', $memory_2);
#line 484
$memory_4 = c_rt_lib::ov_mk_arg('ok', $memory_4);
#line 484
undef($memory_1);
#line 484
undef($memory_2);
#line 484
undef($memory_3);
#line 484
$_[0] = $memory_0;return $memory_4;
#line 484
undef($memory_4);
#line 485
goto label_5;
#line 485
label_5:
#line 485
undef($memory_3);
#line 485
undef($memory_2);
#line 486
goto label_1;
#line 486
label_1:
#line 486
undef($memory_1);
#line 486
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub nparser_priv::get_debug_from_begin($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 490
$memory_3 = "state";
#line 490
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 490
$memory_2 = ntokenizer::get_place($memory_3);
#line 490
$memory_4 = "state";
#line 490
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 490
undef($memory_4);
#line 490
undef($memory_3);
#line 490
$memory_4 = "state";
#line 490
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 490
$memory_3 = ntokenizer::get_place($memory_4);
#line 490
$memory_5 = "state";
#line 490
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 490
undef($memory_5);
#line 490
undef($memory_4);
#line 490
$memory_1 = {begin => $memory_2,end => $memory_3,};
#line 490
undef($memory_2);
#line 490
undef($memory_3);
#line 490
undef($memory_0);
#line 490
return $memory_1;
#line 490
undef($memory_1);
#line 490
undef($memory_0);
#line 490
return;
}

sub nparser_priv::parse_cmd($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 494
$memory_2 = "state";
#line 494
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 494
$memory_1 = ntokenizer::get_place($memory_2);
#line 494
$memory_3 = "state";
#line 494
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 494
undef($memory_3);
#line 494
undef($memory_2);
#line 496
$memory_4 = "if";
#line 496
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 496
undef($memory_4);
#line 496
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 496
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 497
$memory_4 = {};
#line 498
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 498
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 498
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 498
undef($memory_1);
#line 498
undef($memory_2);
#line 498
undef($memory_3);
#line 498
undef($memory_4);
#line 498
undef($memory_5);
#line 498
$_[0] = $memory_0;return $memory_6;
#line 498
label_3:
#line 498
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 498
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_7;
#line 498
undef($memory_5);
#line 498
undef($memory_6);
#line 498
undef($memory_7);
#line 499
$memory_6 = nparser_priv::parse_block($memory_0);
#line 499
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 499
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 499
undef($memory_1);
#line 499
undef($memory_2);
#line 499
undef($memory_3);
#line 499
undef($memory_4);
#line 499
undef($memory_5);
#line 499
$_[0] = $memory_0;return $memory_6;
#line 499
label_4:
#line 499
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 499
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'if'} = $memory_7;
#line 499
undef($memory_5);
#line 499
undef($memory_6);
#line 499
undef($memory_7);
#line 500
$memory_5 = [];
#line 501
$memory_6 = [];
#line 501
$memory_7 = $memory_6;
#line 501
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'elsif'} = $memory_7;
#line 501
undef($memory_6);
#line 501
undef($memory_7);
#line 502
label_6:
#line 502
$memory_7 = "elsif";
#line 502
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 502
undef($memory_7);
#line 502
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 502
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 503
$memory_7 = {};
#line 504
$memory_9 = "state";
#line 504
$memory_9 = c_rt_lib::get_ref_hash($memory_0, $memory_9);
#line 504
$memory_8 = ntokenizer::get_place($memory_9);
#line 504
$memory_10 = "state";
#line 504
c_rt_lib::set_ref_hash($memory_0, $memory_10, $memory_9);
#line 504
undef($memory_10);
#line 504
undef($memory_9);
#line 505
$memory_10 = nparser_priv::parse_cond($memory_0);
#line 505
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 505
if (c_rt_lib::check_true($memory_9)) {goto label_7;}
#line 505
undef($memory_1);
#line 505
undef($memory_2);
#line 505
undef($memory_3);
#line 505
undef($memory_4);
#line 505
undef($memory_5);
#line 505
undef($memory_6);
#line 505
undef($memory_7);
#line 505
undef($memory_8);
#line 505
undef($memory_9);
#line 505
$_[0] = $memory_0;return $memory_10;
#line 505
label_7:
#line 505
$memory_11 = c_rt_lib::ov_as($memory_10, 'ok');
#line 505
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'cond'} = $memory_11;
#line 505
undef($memory_9);
#line 505
undef($memory_10);
#line 505
undef($memory_11);
#line 506
$memory_10 = "state";
#line 506
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 506
$memory_9 = ntokenizer::get_place_ws($memory_10);
#line 506
$memory_11 = "state";
#line 506
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 506
undef($memory_11);
#line 506
undef($memory_10);
#line 507
$memory_10 = {begin => $memory_8,end => $memory_9,};
#line 507
$memory_11 = $memory_10;
#line 507
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'debug'} = $memory_11;
#line 507
undef($memory_10);
#line 507
undef($memory_11);
#line 508
$memory_11 = nparser_priv::parse_block($memory_0);
#line 508
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 508
if (c_rt_lib::check_true($memory_10)) {goto label_8;}
#line 508
undef($memory_1);
#line 508
undef($memory_2);
#line 508
undef($memory_3);
#line 508
undef($memory_4);
#line 508
undef($memory_5);
#line 508
undef($memory_6);
#line 508
undef($memory_7);
#line 508
undef($memory_8);
#line 508
undef($memory_9);
#line 508
undef($memory_10);
#line 508
$_[0] = $memory_0;return $memory_11;
#line 508
label_8:
#line 508
$memory_12 = c_rt_lib::ov_as($memory_11, 'ok');
#line 508
 if (c_rt_lib::get_hashcount($memory_7) > 1) {$memory_7 = {%{$memory_7}};}$memory_7->{'cmd'} = $memory_12;
#line 508
undef($memory_10);
#line 508
undef($memory_11);
#line 508
undef($memory_12);
#line 509
array::push($memory_5, $memory_7);
#line 509
undef($memory_7);
#line 509
undef($memory_8);
#line 509
undef($memory_9);
#line 510
goto label_6;
#line 510
label_5:
#line 510
undef($memory_6);
#line 511
$memory_6 = $memory_5;
#line 511
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'elsif'} = $memory_6;
#line 511
undef($memory_6);
#line 512
$memory_7 = "else";
#line 512
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 512
undef($memory_7);
#line 512
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 512
if (c_rt_lib::check_true($memory_6)) {goto label_10;}
#line 513
$memory_8 = nparser_priv::parse_block($memory_0);
#line 513
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 513
if (c_rt_lib::check_true($memory_7)) {goto label_11;}
#line 513
undef($memory_1);
#line 513
undef($memory_2);
#line 513
undef($memory_3);
#line 513
undef($memory_4);
#line 513
undef($memory_5);
#line 513
undef($memory_6);
#line 513
undef($memory_7);
#line 513
$_[0] = $memory_0;return $memory_8;
#line 513
label_11:
#line 513
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 513
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'else'} = $memory_9;
#line 513
undef($memory_7);
#line 513
undef($memory_8);
#line 513
undef($memory_9);
#line 514
goto label_9;
#line 514
label_10:
#line 515
$memory_8 = nparser_priv::get_debug_from_begin($memory_0);
#line 515
$memory_9 = c_rt_lib::ov_mk_none('nop');
#line 515
$memory_7 = {debug => $memory_8,cmd => $memory_9,};
#line 515
undef($memory_8);
#line 515
undef($memory_9);
#line 515
$memory_8 = $memory_7;
#line 515
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'else'} = $memory_8;
#line 515
undef($memory_7);
#line 515
undef($memory_8);
#line 516
goto label_9;
#line 516
label_9:
#line 516
undef($memory_6);
#line 517
$memory_6 = c_rt_lib::ov_mk_arg('if', $memory_4);
#line 517
$memory_2 = $memory_6;
#line 517
undef($memory_6);
#line 517
undef($memory_4);
#line 517
undef($memory_5);
#line 518
goto label_1;
#line 518
label_2:
#line 518
$memory_4 = "fora";
#line 518
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 518
undef($memory_4);
#line 518
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 518
if (c_rt_lib::check_true($memory_3)) {goto label_12;}
#line 519
$memory_4 = {};
#line 520
$memory_5 = c_rt_lib::to_nl(0);
#line 520
$memory_6 = $memory_5;
#line 520
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 520
undef($memory_5);
#line 520
undef($memory_6);
#line 521
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 521
$memory_6 = $memory_5;
#line 521
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_6;
#line 521
undef($memory_5);
#line 521
undef($memory_6);
#line 522
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 522
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 522
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 522
undef($memory_1);
#line 522
undef($memory_2);
#line 522
undef($memory_3);
#line 522
undef($memory_4);
#line 522
undef($memory_5);
#line 522
$_[0] = $memory_0;return $memory_6;
#line 522
label_13:
#line 522
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 522
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'array'} = $memory_7;
#line 522
undef($memory_5);
#line 522
undef($memory_6);
#line 522
undef($memory_7);
#line 523
$memory_6 = nparser_priv::parse_block($memory_0);
#line 523
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 523
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 523
undef($memory_1);
#line 523
undef($memory_2);
#line 523
undef($memory_3);
#line 523
undef($memory_4);
#line 523
undef($memory_5);
#line 523
$_[0] = $memory_0;return $memory_6;
#line 523
label_14:
#line 523
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 523
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 523
undef($memory_5);
#line 523
undef($memory_6);
#line 523
undef($memory_7);
#line 524
$memory_5 = c_rt_lib::ov_mk_arg('fora', $memory_4);
#line 524
$memory_2 = $memory_5;
#line 524
undef($memory_5);
#line 524
undef($memory_4);
#line 525
goto label_1;
#line 525
label_12:
#line 525
$memory_4 = "rep";
#line 525
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 525
undef($memory_4);
#line 525
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 525
if (c_rt_lib::check_true($memory_3)) {goto label_15;}
#line 526
$memory_4 = {};
#line 527
$memory_5 = c_rt_lib::to_nl(0);
#line 527
$memory_6 = $memory_5;
#line 527
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 527
undef($memory_5);
#line 527
undef($memory_6);
#line 528
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 528
$memory_6 = $memory_5;
#line 528
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_6;
#line 528
undef($memory_5);
#line 528
undef($memory_6);
#line 529
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 529
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 529
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 529
undef($memory_1);
#line 529
undef($memory_2);
#line 529
undef($memory_3);
#line 529
undef($memory_4);
#line 529
undef($memory_5);
#line 529
$_[0] = $memory_0;return $memory_6;
#line 529
label_16:
#line 529
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 529
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'count'} = $memory_7;
#line 529
undef($memory_5);
#line 529
undef($memory_6);
#line 529
undef($memory_7);
#line 530
$memory_6 = nparser_priv::parse_block($memory_0);
#line 530
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 530
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 530
undef($memory_1);
#line 530
undef($memory_2);
#line 530
undef($memory_3);
#line 530
undef($memory_4);
#line 530
undef($memory_5);
#line 530
$_[0] = $memory_0;return $memory_6;
#line 530
label_17:
#line 530
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 530
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 530
undef($memory_5);
#line 530
undef($memory_6);
#line 530
undef($memory_7);
#line 531
$memory_5 = c_rt_lib::ov_mk_arg('rep', $memory_4);
#line 531
$memory_2 = $memory_5;
#line 531
undef($memory_5);
#line 531
undef($memory_4);
#line 532
goto label_1;
#line 532
label_15:
#line 532
$memory_4 = "loop";
#line 532
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 532
undef($memory_4);
#line 532
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 532
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 533
$memory_6 = nparser_priv::parse_block($memory_0);
#line 533
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 533
if (c_rt_lib::check_true($memory_5)) {goto label_19;}
#line 533
undef($memory_1);
#line 533
undef($memory_2);
#line 533
undef($memory_3);
#line 533
undef($memory_4);
#line 533
undef($memory_5);
#line 533
$_[0] = $memory_0;return $memory_6;
#line 533
label_19:
#line 533
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 533
undef($memory_5);
#line 533
undef($memory_6);
#line 534
$memory_5 = c_rt_lib::ov_mk_arg('loop', $memory_4);
#line 534
$memory_2 = $memory_5;
#line 534
undef($memory_5);
#line 534
undef($memory_4);
#line 535
goto label_1;
#line 535
label_18:
#line 535
$memory_4 = "forh";
#line 535
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 535
undef($memory_4);
#line 535
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 535
if (c_rt_lib::check_true($memory_3)) {goto label_20;}
#line 536
$memory_4 = {};
#line 537
$memory_5 = c_rt_lib::to_nl(0);
#line 537
$memory_6 = $memory_5;
#line 537
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 537
undef($memory_5);
#line 537
undef($memory_6);
#line 538
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 538
$memory_6 = $memory_5;
#line 538
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'key'} = $memory_6;
#line 538
undef($memory_5);
#line 538
undef($memory_6);
#line 539
$memory_5 = ",";
#line 539
nparser_priv::eat($memory_0, $memory_5);
#line 539
undef($memory_5);
#line 540
$memory_5 = nparser_priv::parse_var_decl_sim($memory_0);
#line 540
$memory_6 = $memory_5;
#line 540
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'val'} = $memory_6;
#line 540
undef($memory_5);
#line 540
undef($memory_6);
#line 541
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 541
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 541
if (c_rt_lib::check_true($memory_5)) {goto label_21;}
#line 541
undef($memory_1);
#line 541
undef($memory_2);
#line 541
undef($memory_3);
#line 541
undef($memory_4);
#line 541
undef($memory_5);
#line 541
$_[0] = $memory_0;return $memory_6;
#line 541
label_21:
#line 541
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 541
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'hash'} = $memory_7;
#line 541
undef($memory_5);
#line 541
undef($memory_6);
#line 541
undef($memory_7);
#line 542
$memory_6 = nparser_priv::parse_block($memory_0);
#line 542
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 542
if (c_rt_lib::check_true($memory_5)) {goto label_22;}
#line 542
undef($memory_1);
#line 542
undef($memory_2);
#line 542
undef($memory_3);
#line 542
undef($memory_4);
#line 542
undef($memory_5);
#line 542
$_[0] = $memory_0;return $memory_6;
#line 542
label_22:
#line 542
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 542
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 542
undef($memory_5);
#line 542
undef($memory_6);
#line 542
undef($memory_7);
#line 543
$memory_5 = c_rt_lib::ov_mk_arg('forh', $memory_4);
#line 543
$memory_2 = $memory_5;
#line 543
undef($memory_5);
#line 543
undef($memory_4);
#line 544
goto label_1;
#line 544
label_20:
#line 544
$memory_4 = "while";
#line 544
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 544
undef($memory_4);
#line 544
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 544
if (c_rt_lib::check_true($memory_3)) {goto label_23;}
#line 545
$memory_4 = {};
#line 546
$memory_5 = c_rt_lib::to_nl(0);
#line 546
$memory_6 = $memory_5;
#line 546
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'short'} = $memory_6;
#line 546
undef($memory_5);
#line 546
undef($memory_6);
#line 547
$memory_6 = nparser_priv::parse_cond($memory_0);
#line 547
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 547
if (c_rt_lib::check_true($memory_5)) {goto label_24;}
#line 547
undef($memory_1);
#line 547
undef($memory_2);
#line 547
undef($memory_3);
#line 547
undef($memory_4);
#line 547
undef($memory_5);
#line 547
$_[0] = $memory_0;return $memory_6;
#line 547
label_24:
#line 547
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 547
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_7;
#line 547
undef($memory_5);
#line 547
undef($memory_6);
#line 547
undef($memory_7);
#line 548
$memory_6 = nparser_priv::parse_block($memory_0);
#line 548
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 548
if (c_rt_lib::check_true($memory_5)) {goto label_25;}
#line 548
undef($memory_1);
#line 548
undef($memory_2);
#line 548
undef($memory_3);
#line 548
undef($memory_4);
#line 548
undef($memory_5);
#line 548
$_[0] = $memory_0;return $memory_6;
#line 548
label_25:
#line 548
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 548
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 548
undef($memory_5);
#line 548
undef($memory_6);
#line 548
undef($memory_7);
#line 549
$memory_5 = c_rt_lib::ov_mk_arg('while', $memory_4);
#line 549
$memory_2 = $memory_5;
#line 549
undef($memory_5);
#line 549
undef($memory_4);
#line 550
goto label_1;
#line 550
label_23:
#line 550
$memory_4 = "for";
#line 550
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 550
undef($memory_4);
#line 550
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 550
if (c_rt_lib::check_true($memory_3)) {goto label_26;}
#line 551
$memory_4 = {};
#line 552
$memory_5 = "(";
#line 552
nparser_priv::eat($memory_0, $memory_5);
#line 552
undef($memory_5);
#line 553
$memory_6 = "state";
#line 553
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 553
$memory_7 = "var";
#line 553
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 553
undef($memory_7);
#line 553
$memory_7 = "state";
#line 553
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 553
undef($memory_7);
#line 553
undef($memory_6);
#line 553
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 553
if (c_rt_lib::check_true($memory_5)) {goto label_28;}
#line 554
$memory_8 = nparser_priv::parse_var_decl($memory_0);
#line 554
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 554
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
#line 554
undef($memory_1);
#line 554
undef($memory_2);
#line 554
undef($memory_3);
#line 554
undef($memory_4);
#line 554
undef($memory_5);
#line 554
undef($memory_6);
#line 554
undef($memory_7);
#line 554
$_[0] = $memory_0;return $memory_8;
#line 554
label_29:
#line 554
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 554
undef($memory_7);
#line 554
undef($memory_8);
#line 555
$memory_7 = c_rt_lib::ov_mk_arg('var_decl', $memory_6);
#line 555
$memory_8 = $memory_7;
#line 555
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'start'} = $memory_8;
#line 555
undef($memory_7);
#line 555
undef($memory_8);
#line 555
undef($memory_6);
#line 556
goto label_27;
#line 556
label_28:
#line 556
$memory_6 = "state";
#line 556
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 556
$memory_7 = ";";
#line 556
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 556
undef($memory_7);
#line 556
$memory_7 = "state";
#line 556
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 556
undef($memory_7);
#line 556
undef($memory_6);
#line 556
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 556
if (c_rt_lib::check_true($memory_5)) {goto label_30;}
#line 557
$memory_6 = c_rt_lib::ov_mk_none('nop');
#line 557
$memory_6 = c_rt_lib::ov_mk_arg('value', $memory_6);
#line 557
$memory_7 = $memory_6;
#line 557
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'start'} = $memory_7;
#line 557
undef($memory_6);
#line 557
undef($memory_7);
#line 558
goto label_27;
#line 558
label_30:
#line 559
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 559
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 559
if (c_rt_lib::check_true($memory_7)) {goto label_31;}
#line 559
undef($memory_1);
#line 559
undef($memory_2);
#line 559
undef($memory_3);
#line 559
undef($memory_4);
#line 559
undef($memory_5);
#line 559
undef($memory_6);
#line 559
undef($memory_7);
#line 559
$_[0] = $memory_0;return $memory_8;
#line 559
label_31:
#line 559
$memory_6 = c_rt_lib::ov_as($memory_8, 'ok');
#line 559
undef($memory_7);
#line 559
undef($memory_8);
#line 560
$memory_7 = c_rt_lib::ov_mk_arg('value', $memory_6);
#line 560
$memory_8 = $memory_7;
#line 560
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'start'} = $memory_8;
#line 560
undef($memory_7);
#line 560
undef($memory_8);
#line 560
undef($memory_6);
#line 561
goto label_27;
#line 561
label_27:
#line 561
undef($memory_5);
#line 562
$memory_5 = ";";
#line 562
nparser_priv::eat($memory_0, $memory_5);
#line 562
undef($memory_5);
#line 563
$memory_5 = c_rt_lib::ov_mk_none('nop');
#line 563
$memory_6 = $memory_5;
#line 563
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_6;
#line 563
undef($memory_5);
#line 563
undef($memory_6);
#line 564
$memory_6 = "state";
#line 564
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 564
$memory_7 = ";";
#line 564
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 564
undef($memory_7);
#line 564
$memory_7 = "state";
#line 564
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 564
undef($memory_7);
#line 564
undef($memory_6);
#line 564
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 564
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 564
if (c_rt_lib::check_true($memory_5)) {goto label_33;}
#line 564
$memory_7 = nparser_priv::parse_expr($memory_0);
#line 564
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 564
if (c_rt_lib::check_true($memory_6)) {goto label_34;}
#line 564
undef($memory_1);
#line 564
undef($memory_2);
#line 564
undef($memory_3);
#line 564
undef($memory_4);
#line 564
undef($memory_5);
#line 564
undef($memory_6);
#line 564
$_[0] = $memory_0;return $memory_7;
#line 564
label_34:
#line 564
$memory_8 = c_rt_lib::ov_as($memory_7, 'ok');
#line 564
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cond'} = $memory_8;
#line 564
undef($memory_6);
#line 564
undef($memory_7);
#line 564
undef($memory_8);
#line 564
goto label_33;
#line 564
label_33:
#line 564
undef($memory_5);
#line 565
$memory_5 = ";";
#line 565
nparser_priv::eat($memory_0, $memory_5);
#line 565
undef($memory_5);
#line 566
$memory_5 = c_rt_lib::ov_mk_none('nop');
#line 566
$memory_6 = $memory_5;
#line 566
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_6;
#line 566
undef($memory_5);
#line 566
undef($memory_6);
#line 567
$memory_6 = "state";
#line 567
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 567
$memory_7 = ")";
#line 567
$memory_5 = ntokenizer::next_is($memory_6, $memory_7);
#line 567
undef($memory_7);
#line 567
$memory_7 = "state";
#line 567
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 567
undef($memory_7);
#line 567
undef($memory_6);
#line 567
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 567
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 567
if (c_rt_lib::check_true($memory_5)) {goto label_36;}
#line 567
$memory_7 = nparser_priv::parse_expr($memory_0);
#line 567
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 567
if (c_rt_lib::check_true($memory_6)) {goto label_37;}
#line 567
undef($memory_1);
#line 567
undef($memory_2);
#line 567
undef($memory_3);
#line 567
undef($memory_4);
#line 567
undef($memory_5);
#line 567
undef($memory_6);
#line 567
$_[0] = $memory_0;return $memory_7;
#line 567
label_37:
#line 567
$memory_8 = c_rt_lib::ov_as($memory_7, 'ok');
#line 567
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'iter'} = $memory_8;
#line 567
undef($memory_6);
#line 567
undef($memory_7);
#line 567
undef($memory_8);
#line 567
goto label_36;
#line 567
label_36:
#line 567
undef($memory_5);
#line 568
$memory_5 = ")";
#line 568
nparser_priv::eat($memory_0, $memory_5);
#line 568
undef($memory_5);
#line 569
$memory_6 = nparser_priv::parse_block($memory_0);
#line 569
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 569
if (c_rt_lib::check_true($memory_5)) {goto label_38;}
#line 569
undef($memory_1);
#line 569
undef($memory_2);
#line 569
undef($memory_3);
#line 569
undef($memory_4);
#line 569
undef($memory_5);
#line 569
$_[0] = $memory_0;return $memory_6;
#line 569
label_38:
#line 569
$memory_7 = c_rt_lib::ov_as($memory_6, 'ok');
#line 569
 if (c_rt_lib::get_hashcount($memory_4) > 1) {$memory_4 = {%{$memory_4}};}$memory_4->{'cmd'} = $memory_7;
#line 569
undef($memory_5);
#line 569
undef($memory_6);
#line 569
undef($memory_7);
#line 570
$memory_5 = c_rt_lib::ov_mk_arg('for', $memory_4);
#line 570
$memory_2 = $memory_5;
#line 570
undef($memory_5);
#line 570
undef($memory_4);
#line 571
goto label_1;
#line 571
label_26:
#line 571
$memory_4 = "state";
#line 571
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 571
$memory_5 = "{";
#line 571
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 571
undef($memory_5);
#line 571
$memory_5 = "state";
#line 571
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 571
undef($memory_5);
#line 571
undef($memory_4);
#line 571
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 571
if (c_rt_lib::check_true($memory_3)) {goto label_39;}
#line 572
$memory_6 = nparser_priv::parse_block($memory_0);
#line 572
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 572
if (c_rt_lib::check_true($memory_5)) {goto label_40;}
#line 572
undef($memory_1);
#line 572
undef($memory_2);
#line 572
undef($memory_3);
#line 572
undef($memory_4);
#line 572
undef($memory_5);
#line 572
$_[0] = $memory_0;return $memory_6;
#line 572
label_40:
#line 572
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 572
undef($memory_5);
#line 572
undef($memory_6);
#line 573
$memory_5 = $memory_4->{'cmd'};
#line 573
$memory_2 = $memory_5;
#line 573
undef($memory_5);
#line 573
undef($memory_4);
#line 574
goto label_1;
#line 574
label_39:
#line 574
$memory_4 = "break";
#line 574
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 574
undef($memory_4);
#line 574
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 574
if (c_rt_lib::check_true($memory_3)) {goto label_41;}
#line 575
$memory_4 = c_rt_lib::ov_mk_none('break');
#line 575
$memory_2 = $memory_4;
#line 575
undef($memory_4);
#line 576
goto label_1;
#line 576
label_41:
#line 576
$memory_4 = "continue";
#line 576
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 576
undef($memory_4);
#line 576
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 576
if (c_rt_lib::check_true($memory_3)) {goto label_42;}
#line 577
$memory_4 = c_rt_lib::ov_mk_none('continue');
#line 577
$memory_2 = $memory_4;
#line 577
undef($memory_4);
#line 578
goto label_1;
#line 578
label_42:
#line 578
$memory_4 = "return";
#line 578
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 578
undef($memory_4);
#line 578
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 578
if (c_rt_lib::check_true($memory_3)) {goto label_43;}
#line 579
$memory_5 = "state";
#line 579
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 579
$memory_4 = ntokenizer::get_token($memory_5);
#line 579
$memory_6 = "state";
#line 579
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 579
undef($memory_6);
#line 579
undef($memory_5);
#line 580
$memory_5 = c_rt_lib::to_nl(0);
#line 581
$memory_6 = nparser_priv::get_end_list();
#line 581
$memory_8 = 0;
#line 581
$memory_9 = 1;
#line 581
$memory_10 = c_rt_lib::array_len($memory_6);
#line 581
label_46:
#line 581
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 581
if (c_rt_lib::check_true($memory_11)) {goto label_44;}
#line 581
$memory_7 = $memory_6->[$memory_8];
#line 582
$memory_12 = c_rt_lib::to_nl($memory_4 eq $memory_7);
#line 582
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 582
if (c_rt_lib::check_true($memory_12)) {goto label_48;}
#line 583
$memory_13 = c_rt_lib::to_nl(1);
#line 583
$memory_5 = $memory_13;
#line 583
undef($memory_13);
#line 584
undef($memory_12);
#line 584
goto label_44;
#line 585
goto label_48;
#line 585
label_48:
#line 585
undef($memory_12);
#line 586
$memory_8 = $memory_8 + $memory_9;
#line 586
goto label_46;
#line 586
label_44:
#line 586
undef($memory_6);
#line 586
undef($memory_7);
#line 586
undef($memory_8);
#line 586
undef($memory_9);
#line 586
undef($memory_10);
#line 586
undef($memory_11);
#line 587
$memory_6 = $memory_5;
#line 587
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 587
if (c_rt_lib::check_true($memory_6)) {goto label_50;}
#line 588
$memory_7 = c_rt_lib::ov_mk_none('nop');
#line 588
$memory_7 = c_rt_lib::ov_mk_arg('return', $memory_7);
#line 588
$memory_2 = $memory_7;
#line 588
undef($memory_7);
#line 589
goto label_49;
#line 589
label_50:
#line 590
$memory_9 = nparser_priv::parse_expr($memory_0);
#line 590
$memory_8 = c_rt_lib::ov_is($memory_9, 'ok');
#line 590
if (c_rt_lib::check_true($memory_8)) {goto label_51;}
#line 590
undef($memory_1);
#line 590
undef($memory_2);
#line 590
undef($memory_3);
#line 590
undef($memory_4);
#line 590
undef($memory_5);
#line 590
undef($memory_6);
#line 590
undef($memory_7);
#line 590
undef($memory_8);
#line 590
$_[0] = $memory_0;return $memory_9;
#line 590
label_51:
#line 590
$memory_7 = c_rt_lib::ov_as($memory_9, 'ok');
#line 590
undef($memory_8);
#line 590
undef($memory_9);
#line 591
$memory_8 = c_rt_lib::ov_mk_arg('return', $memory_7);
#line 591
$memory_2 = $memory_8;
#line 591
undef($memory_8);
#line 591
undef($memory_7);
#line 592
goto label_49;
#line 592
label_49:
#line 592
undef($memory_6);
#line 592
undef($memory_4);
#line 592
undef($memory_5);
#line 593
goto label_1;
#line 593
label_43:
#line 593
$memory_4 = "match";
#line 593
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 593
undef($memory_4);
#line 593
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 593
if (c_rt_lib::check_true($memory_3)) {goto label_52;}
#line 594
$memory_4 = "(";
#line 594
nparser_priv::eat($memory_0, $memory_4);
#line 594
undef($memory_4);
#line 595
$memory_6 = nparser_priv::parse_expr($memory_0);
#line 595
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 595
if (c_rt_lib::check_true($memory_5)) {goto label_53;}
#line 595
undef($memory_1);
#line 595
undef($memory_2);
#line 595
undef($memory_3);
#line 595
undef($memory_4);
#line 595
undef($memory_5);
#line 595
$_[0] = $memory_0;return $memory_6;
#line 595
label_53:
#line 595
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 595
undef($memory_5);
#line 595
undef($memory_6);
#line 596
$memory_6 = [];
#line 596
$memory_5 = {val => $memory_4,branch_list => $memory_6,};
#line 596
undef($memory_6);
#line 597
$memory_6 = ")";
#line 597
nparser_priv::eat($memory_0, $memory_6);
#line 597
undef($memory_6);
#line 598
$memory_7 = "state";
#line 598
$memory_7 = c_rt_lib::get_ref_hash($memory_0, $memory_7);
#line 598
$memory_6 = ntokenizer::get_place($memory_7);
#line 598
$memory_8 = "state";
#line 598
c_rt_lib::set_ref_hash($memory_0, $memory_8, $memory_7);
#line 598
undef($memory_8);
#line 598
undef($memory_7);
#line 599
label_55:
#line 599
$memory_8 = "case";
#line 599
$memory_7 = nparser_priv::try_eat($memory_0, $memory_8);
#line 599
undef($memory_8);
#line 599
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 599
if (c_rt_lib::check_true($memory_7)) {goto label_54;}
#line 600
$memory_9 = nparser_priv::parse_variant_decl($memory_0);
#line 600
$memory_8 = {variant => $memory_9,};
#line 600
undef($memory_9);
#line 601
$memory_11 = "state";
#line 601
$memory_11 = c_rt_lib::get_ref_hash($memory_0, $memory_11);
#line 601
$memory_10 = ntokenizer::get_place_ws($memory_11);
#line 601
$memory_12 = "state";
#line 601
c_rt_lib::set_ref_hash($memory_0, $memory_12, $memory_11);
#line 601
undef($memory_12);
#line 601
undef($memory_11);
#line 601
$memory_9 = {begin => $memory_6,end => $memory_10,};
#line 601
undef($memory_10);
#line 601
$memory_10 = $memory_9;
#line 601
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'debug'} = $memory_10;
#line 601
undef($memory_9);
#line 601
undef($memory_10);
#line 602
$memory_10 = nparser_priv::parse_block($memory_0);
#line 602
$memory_9 = c_rt_lib::ov_is($memory_10, 'ok');
#line 602
if (c_rt_lib::check_true($memory_9)) {goto label_56;}
#line 602
undef($memory_1);
#line 602
undef($memory_2);
#line 602
undef($memory_3);
#line 602
undef($memory_4);
#line 602
undef($memory_5);
#line 602
undef($memory_6);
#line 602
undef($memory_7);
#line 602
undef($memory_8);
#line 602
undef($memory_9);
#line 602
$_[0] = $memory_0;return $memory_10;
#line 602
label_56:
#line 602
$memory_11 = c_rt_lib::ov_as($memory_10, 'ok');
#line 602
 if (c_rt_lib::get_hashcount($memory_8) > 1) {$memory_8 = {%{$memory_8}};}$memory_8->{'cmd'} = $memory_11;
#line 602
undef($memory_9);
#line 602
undef($memory_10);
#line 602
undef($memory_11);
#line 603
$memory_9 = "branch_list";
#line 603
$memory_9 = c_rt_lib::get_ref_hash($memory_5, $memory_9);
#line 603
array::push($memory_9, $memory_8);
#line 603
$memory_10 = "branch_list";
#line 603
c_rt_lib::set_ref_hash($memory_5, $memory_10, $memory_9);
#line 603
undef($memory_10);
#line 603
undef($memory_9);
#line 604
$memory_10 = "state";
#line 604
$memory_10 = c_rt_lib::get_ref_hash($memory_0, $memory_10);
#line 604
$memory_9 = ntokenizer::get_place($memory_10);
#line 604
$memory_11 = "state";
#line 604
c_rt_lib::set_ref_hash($memory_0, $memory_11, $memory_10);
#line 604
undef($memory_11);
#line 604
undef($memory_10);
#line 604
$memory_6 = $memory_9;
#line 604
undef($memory_9);
#line 604
undef($memory_8);
#line 605
goto label_55;
#line 605
label_54:
#line 605
undef($memory_7);
#line 606
$memory_7 = c_rt_lib::ov_mk_arg('match', $memory_5);
#line 606
$memory_2 = $memory_7;
#line 606
undef($memory_7);
#line 606
undef($memory_4);
#line 606
undef($memory_5);
#line 606
undef($memory_6);
#line 607
goto label_1;
#line 607
label_52:
#line 607
$memory_4 = "die";
#line 607
$memory_3 = nparser_priv::try_eat($memory_0, $memory_4);
#line 607
undef($memory_4);
#line 607
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 607
if (c_rt_lib::check_true($memory_3)) {goto label_57;}
#line 608
$memory_4 = [];
#line 609
$memory_6 = "(";
#line 609
$memory_5 = nparser_priv::try_eat($memory_0, $memory_6);
#line 609
undef($memory_6);
#line 609
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 609
if (c_rt_lib::check_true($memory_5)) {goto label_59;}
#line 610
$memory_7 = nparser_priv::parse_expr_list($memory_0);
#line 610
$memory_6 = c_rt_lib::ov_is($memory_7, 'ok');
#line 610
if (c_rt_lib::check_true($memory_6)) {goto label_60;}
#line 610
undef($memory_1);
#line 610
undef($memory_2);
#line 610
undef($memory_3);
#line 610
undef($memory_4);
#line 610
undef($memory_5);
#line 610
undef($memory_6);
#line 610
$_[0] = $memory_0;return $memory_7;
#line 610
label_60:
#line 610
$memory_4 = c_rt_lib::ov_as($memory_7, 'ok');
#line 610
undef($memory_6);
#line 610
undef($memory_7);
#line 611
goto label_59;
#line 611
label_59:
#line 611
undef($memory_5);
#line 612
$memory_5 = c_rt_lib::ov_mk_arg('die', $memory_4);
#line 612
$memory_2 = $memory_5;
#line 612
undef($memory_5);
#line 612
undef($memory_4);
#line 613
goto label_1;
#line 613
label_57:
#line 613
$memory_4 = "state";
#line 613
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 613
$memory_5 = "var";
#line 613
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 613
undef($memory_5);
#line 613
$memory_5 = "state";
#line 613
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 613
undef($memory_5);
#line 613
undef($memory_4);
#line 613
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 613
if (c_rt_lib::check_true($memory_3)) {goto label_61;}
#line 614
$memory_6 = nparser_priv::parse_var_decl($memory_0);
#line 614
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 614
if (c_rt_lib::check_true($memory_5)) {goto label_62;}
#line 614
undef($memory_1);
#line 614
undef($memory_2);
#line 614
undef($memory_3);
#line 614
undef($memory_4);
#line 614
undef($memory_5);
#line 614
$_[0] = $memory_0;return $memory_6;
#line 614
label_62:
#line 614
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 614
undef($memory_5);
#line 614
undef($memory_6);
#line 615
$memory_5 = c_rt_lib::ov_mk_arg('var_decl', $memory_4);
#line 615
$memory_2 = $memory_5;
#line 615
undef($memory_5);
#line 616
$memory_5 = ";";
#line 616
nparser_priv::eat($memory_0, $memory_5);
#line 616
undef($memory_5);
#line 616
undef($memory_4);
#line 617
goto label_1;
#line 617
label_61:
#line 617
$memory_4 = "state";
#line 617
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 617
$memory_5 = "try";
#line 617
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 617
undef($memory_5);
#line 617
$memory_5 = "state";
#line 617
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 617
undef($memory_5);
#line 617
undef($memory_4);
#line 617
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 617
if (c_rt_lib::check_true($memory_3)) {goto label_63;}
#line 618
$memory_4 = "try";
#line 618
nparser_priv::eat($memory_0, $memory_4);
#line 618
undef($memory_4);
#line 619
$memory_6 = nparser_priv::parse_try_ensure($memory_0);
#line 619
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 619
if (c_rt_lib::check_true($memory_5)) {goto label_64;}
#line 619
undef($memory_1);
#line 619
undef($memory_2);
#line 619
undef($memory_3);
#line 619
undef($memory_4);
#line 619
undef($memory_5);
#line 619
$_[0] = $memory_0;return $memory_6;
#line 619
label_64:
#line 619
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 619
undef($memory_5);
#line 619
undef($memory_6);
#line 620
$memory_5 = c_rt_lib::ov_mk_arg('try', $memory_4);
#line 620
$memory_2 = $memory_5;
#line 620
undef($memory_5);
#line 620
undef($memory_4);
#line 621
goto label_1;
#line 621
label_63:
#line 621
$memory_4 = "state";
#line 621
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 621
$memory_5 = "ensure";
#line 621
$memory_3 = ntokenizer::next_is($memory_4, $memory_5);
#line 621
undef($memory_5);
#line 621
$memory_5 = "state";
#line 621
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 621
undef($memory_5);
#line 621
undef($memory_4);
#line 621
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 621
if (c_rt_lib::check_true($memory_3)) {goto label_65;}
#line 622
$memory_4 = "ensure";
#line 622
nparser_priv::eat($memory_0, $memory_4);
#line 622
undef($memory_4);
#line 623
$memory_6 = nparser_priv::parse_try_ensure($memory_0);
#line 623
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 623
if (c_rt_lib::check_true($memory_5)) {goto label_66;}
#line 623
undef($memory_1);
#line 623
undef($memory_2);
#line 623
undef($memory_3);
#line 623
undef($memory_4);
#line 623
undef($memory_5);
#line 623
$_[0] = $memory_0;return $memory_6;
#line 623
label_66:
#line 623
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 623
undef($memory_5);
#line 623
undef($memory_6);
#line 624
$memory_5 = c_rt_lib::ov_mk_arg('ensure', $memory_4);
#line 624
$memory_2 = $memory_5;
#line 624
undef($memory_5);
#line 624
undef($memory_4);
#line 625
goto label_1;
#line 625
label_65:
#line 626
$memory_6 = nparser_priv::parse_expr($memory_0);
#line 626
$memory_5 = c_rt_lib::ov_is($memory_6, 'ok');
#line 626
if (c_rt_lib::check_true($memory_5)) {goto label_67;}
#line 626
undef($memory_1);
#line 626
undef($memory_2);
#line 626
undef($memory_3);
#line 626
undef($memory_4);
#line 626
undef($memory_5);
#line 626
$_[0] = $memory_0;return $memory_6;
#line 626
label_67:
#line 626
$memory_4 = c_rt_lib::ov_as($memory_6, 'ok');
#line 626
undef($memory_5);
#line 626
undef($memory_6);
#line 627
$memory_5 = c_rt_lib::ov_mk_arg('value', $memory_4);
#line 627
$memory_2 = $memory_5;
#line 627
undef($memory_5);
#line 627
undef($memory_4);
#line 628
goto label_1;
#line 628
label_1:
#line 628
undef($memory_3);
#line 629
$memory_3 = $memory_2;
#line 629
$memory_3 = c_rt_lib::ov_is($memory_3, 'break');
#line 629
if (c_rt_lib::check_true($memory_3)) {goto label_75;}
#line 629
$memory_3 = $memory_2;
#line 629
$memory_3 = c_rt_lib::ov_is($memory_3, 'continue');
#line 629
label_75:
#line 629
if (c_rt_lib::check_true($memory_3)) {goto label_74;}
#line 629
$memory_3 = $memory_2;
#line 629
$memory_3 = c_rt_lib::ov_is($memory_3, 'value');
#line 629
label_74:
#line 629
if (c_rt_lib::check_true($memory_3)) {goto label_73;}
#line 629
$memory_3 = $memory_2;
#line 629
$memory_3 = c_rt_lib::ov_is($memory_3, 'return');
#line 629
label_73:
#line 629
if (c_rt_lib::check_true($memory_3)) {goto label_72;}
#line 629
$memory_3 = $memory_2;
#line 629
$memory_3 = c_rt_lib::ov_is($memory_3, 'die');
#line 629
label_72:
#line 629
if (c_rt_lib::check_true($memory_3)) {goto label_71;}
#line 629
$memory_3 = $memory_2;
#line 629
$memory_3 = c_rt_lib::ov_is($memory_3, 'ensure');
#line 629
label_71:
#line 629
if (c_rt_lib::check_true($memory_3)) {goto label_70;}
#line 629
$memory_3 = $memory_2;
#line 629
$memory_3 = c_rt_lib::ov_is($memory_3, 'try');
#line 629
label_70:
#line 629
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 629
if (c_rt_lib::check_true($memory_3)) {goto label_69;}
#line 631
$memory_6 = "state";
#line 631
$memory_6 = c_rt_lib::get_ref_hash($memory_0, $memory_6);
#line 631
$memory_5 = ntokenizer::get_place_ws($memory_6);
#line 631
$memory_7 = "state";
#line 631
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_6);
#line 631
undef($memory_7);
#line 631
undef($memory_6);
#line 631
$memory_4 = {begin => $memory_1,end => $memory_5,};
#line 631
undef($memory_5);
#line 632
$memory_6 = {debug => $memory_4,cmd => $memory_2,};
#line 632
$memory_5 = {cmd => $memory_6,};
#line 632
undef($memory_6);
#line 633
$memory_7 = "fora";
#line 633
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 633
undef($memory_7);
#line 633
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 633
if (c_rt_lib::check_true($memory_6)) {goto label_77;}
#line 634
$memory_7 = c_rt_lib::to_nl(1);
#line 634
$memory_8 = $memory_7;
#line 634
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 634
undef($memory_7);
#line 634
undef($memory_8);
#line 635
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 635
$memory_8 = $memory_7;
#line 635
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'iter'} = $memory_8;
#line 635
undef($memory_7);
#line 635
undef($memory_8);
#line 636
$memory_7 = "(";
#line 636
nparser_priv::eat($memory_0, $memory_7);
#line 636
undef($memory_7);
#line 637
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 637
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 637
if (c_rt_lib::check_true($memory_7)) {goto label_78;}
#line 637
undef($memory_1);
#line 637
undef($memory_2);
#line 637
undef($memory_3);
#line 637
undef($memory_4);
#line 637
undef($memory_5);
#line 637
undef($memory_6);
#line 637
undef($memory_7);
#line 637
$_[0] = $memory_0;return $memory_8;
#line 637
label_78:
#line 637
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 637
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'array'} = $memory_9;
#line 637
undef($memory_7);
#line 637
undef($memory_8);
#line 637
undef($memory_9);
#line 638
$memory_7 = ")";
#line 638
nparser_priv::eat($memory_0, $memory_7);
#line 638
undef($memory_7);
#line 639
$memory_7 = c_rt_lib::ov_mk_arg('fora', $memory_5);
#line 639
$memory_2 = $memory_7;
#line 639
undef($memory_7);
#line 640
goto label_87;
#line 640
label_77:
#line 640
$memory_7 = "rep";
#line 640
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 640
undef($memory_7);
#line 640
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 640
if (c_rt_lib::check_true($memory_6)) {goto label_79;}
#line 641
$memory_7 = c_rt_lib::to_nl(1);
#line 641
$memory_8 = $memory_7;
#line 641
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 641
undef($memory_7);
#line 641
undef($memory_8);
#line 642
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 642
$memory_8 = $memory_7;
#line 642
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'iter'} = $memory_8;
#line 642
undef($memory_7);
#line 642
undef($memory_8);
#line 643
$memory_7 = "(";
#line 643
nparser_priv::eat($memory_0, $memory_7);
#line 643
undef($memory_7);
#line 644
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 644
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 644
if (c_rt_lib::check_true($memory_7)) {goto label_80;}
#line 644
undef($memory_1);
#line 644
undef($memory_2);
#line 644
undef($memory_3);
#line 644
undef($memory_4);
#line 644
undef($memory_5);
#line 644
undef($memory_6);
#line 644
undef($memory_7);
#line 644
$_[0] = $memory_0;return $memory_8;
#line 644
label_80:
#line 644
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 644
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'count'} = $memory_9;
#line 644
undef($memory_7);
#line 644
undef($memory_8);
#line 644
undef($memory_9);
#line 645
$memory_7 = ")";
#line 645
nparser_priv::eat($memory_0, $memory_7);
#line 645
undef($memory_7);
#line 646
$memory_7 = c_rt_lib::ov_mk_arg('rep', $memory_5);
#line 646
$memory_2 = $memory_7;
#line 646
undef($memory_7);
#line 647
goto label_87;
#line 647
label_79:
#line 647
$memory_7 = "forh";
#line 647
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 647
undef($memory_7);
#line 647
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 647
if (c_rt_lib::check_true($memory_6)) {goto label_81;}
#line 648
$memory_7 = c_rt_lib::to_nl(1);
#line 648
$memory_8 = $memory_7;
#line 648
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 648
undef($memory_7);
#line 648
undef($memory_8);
#line 649
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 649
$memory_8 = $memory_7;
#line 649
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'key'} = $memory_8;
#line 649
undef($memory_7);
#line 649
undef($memory_8);
#line 650
$memory_7 = ",";
#line 650
nparser_priv::eat($memory_0, $memory_7);
#line 650
undef($memory_7);
#line 651
$memory_7 = nparser_priv::parse_var_decl_sim($memory_0);
#line 651
$memory_8 = $memory_7;
#line 651
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'val'} = $memory_8;
#line 651
undef($memory_7);
#line 651
undef($memory_8);
#line 652
$memory_7 = "(";
#line 652
nparser_priv::eat($memory_0, $memory_7);
#line 652
undef($memory_7);
#line 653
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 653
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 653
if (c_rt_lib::check_true($memory_7)) {goto label_82;}
#line 653
undef($memory_1);
#line 653
undef($memory_2);
#line 653
undef($memory_3);
#line 653
undef($memory_4);
#line 653
undef($memory_5);
#line 653
undef($memory_6);
#line 653
undef($memory_7);
#line 653
$_[0] = $memory_0;return $memory_8;
#line 653
label_82:
#line 653
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 653
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'hash'} = $memory_9;
#line 653
undef($memory_7);
#line 653
undef($memory_8);
#line 653
undef($memory_9);
#line 654
$memory_7 = ")";
#line 654
nparser_priv::eat($memory_0, $memory_7);
#line 654
undef($memory_7);
#line 655
$memory_7 = c_rt_lib::ov_mk_arg('forh', $memory_5);
#line 655
$memory_2 = $memory_7;
#line 655
undef($memory_7);
#line 656
goto label_87;
#line 656
label_81:
#line 656
$memory_7 = "if";
#line 656
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 656
undef($memory_7);
#line 656
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 656
if (c_rt_lib::check_true($memory_6)) {goto label_83;}
#line 657
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 657
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 657
if (c_rt_lib::check_true($memory_7)) {goto label_84;}
#line 657
undef($memory_1);
#line 657
undef($memory_2);
#line 657
undef($memory_3);
#line 657
undef($memory_4);
#line 657
undef($memory_5);
#line 657
undef($memory_6);
#line 657
undef($memory_7);
#line 657
$_[0] = $memory_0;return $memory_8;
#line 657
label_84:
#line 657
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 657
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'cond'} = $memory_9;
#line 657
undef($memory_7);
#line 657
undef($memory_8);
#line 657
undef($memory_9);
#line 658
$memory_7 = c_rt_lib::ov_mk_arg('if_mod', $memory_5);
#line 658
$memory_2 = $memory_7;
#line 658
undef($memory_7);
#line 659
goto label_87;
#line 659
label_83:
#line 659
$memory_7 = "unless";
#line 659
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 659
undef($memory_7);
#line 659
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 659
if (c_rt_lib::check_true($memory_6)) {goto label_85;}
#line 660
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 660
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 660
if (c_rt_lib::check_true($memory_7)) {goto label_86;}
#line 660
undef($memory_1);
#line 660
undef($memory_2);
#line 660
undef($memory_3);
#line 660
undef($memory_4);
#line 660
undef($memory_5);
#line 660
undef($memory_6);
#line 660
undef($memory_7);
#line 660
$_[0] = $memory_0;return $memory_8;
#line 660
label_86:
#line 660
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 660
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'cond'} = $memory_9;
#line 660
undef($memory_7);
#line 660
undef($memory_8);
#line 660
undef($memory_9);
#line 661
$memory_7 = c_rt_lib::ov_mk_arg('unless_mod', $memory_5);
#line 661
$memory_2 = $memory_7;
#line 661
undef($memory_7);
#line 662
goto label_87;
#line 662
label_85:
#line 662
$memory_7 = "while";
#line 662
$memory_6 = nparser_priv::try_eat($memory_0, $memory_7);
#line 662
undef($memory_7);
#line 662
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 662
if (c_rt_lib::check_true($memory_6)) {goto label_87;}
#line 663
$memory_7 = c_rt_lib::to_nl(1);
#line 663
$memory_8 = $memory_7;
#line 663
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'short'} = $memory_8;
#line 663
undef($memory_7);
#line 663
undef($memory_8);
#line 664
$memory_8 = nparser_priv::parse_expr($memory_0);
#line 664
$memory_7 = c_rt_lib::ov_is($memory_8, 'ok');
#line 664
if (c_rt_lib::check_true($memory_7)) {goto label_88;}
#line 664
undef($memory_1);
#line 664
undef($memory_2);
#line 664
undef($memory_3);
#line 664
undef($memory_4);
#line 664
undef($memory_5);
#line 664
undef($memory_6);
#line 664
undef($memory_7);
#line 664
$_[0] = $memory_0;return $memory_8;
#line 664
label_88:
#line 664
$memory_9 = c_rt_lib::ov_as($memory_8, 'ok');
#line 664
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'cond'} = $memory_9;
#line 664
undef($memory_7);
#line 664
undef($memory_8);
#line 664
undef($memory_9);
#line 665
$memory_7 = c_rt_lib::ov_mk_arg('while', $memory_5);
#line 665
$memory_2 = $memory_7;
#line 665
undef($memory_7);
#line 666
goto label_87;
#line 666
label_87:
#line 666
undef($memory_6);
#line 667
$memory_6 = ";";
#line 667
nparser_priv::eat($memory_0, $memory_6);
#line 667
undef($memory_6);
#line 667
undef($memory_4);
#line 667
undef($memory_5);
#line 668
goto label_69;
#line 668
label_69:
#line 668
undef($memory_3);
#line 669
$memory_4 = "state";
#line 669
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 669
$memory_3 = ntokenizer::get_place_ws($memory_4);
#line 669
$memory_5 = "state";
#line 669
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 669
undef($memory_5);
#line 669
undef($memory_4);
#line 670
$memory_4 = {begin => $memory_1,end => $memory_3,};
#line 671
$memory_5 = {cmd => $memory_2,debug => $memory_4,};
#line 671
$memory_5 = c_rt_lib::ov_mk_arg('ok', $memory_5);
#line 671
undef($memory_1);
#line 671
undef($memory_2);
#line 671
undef($memory_3);
#line 671
undef($memory_4);
#line 671
$_[0] = $memory_0;return $memory_5;
#line 671
undef($memory_5);
#line 671
undef($memory_1);
#line 671
undef($memory_2);
#line 671
undef($memory_3);
#line 671
undef($memory_4);
#line 671
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
