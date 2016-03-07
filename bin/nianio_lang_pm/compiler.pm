use c_rt_lib;
use c_fe_lib;
use string;
use hash;
use array;
use dfile;
use ptd;
use nast;
use nparser;
use boolean_t;
use pretty_printer;
use generator_c;
use generator_pm;
use generator_js;
use generator_java;
use translator;
use nlasm;
use post_processing;
use tc_types;
use type_checker;
use module_checker;
use interpreter;
use nl;
use compiler_lib;
sub compiler_priv::get_dir_cache_name;
sub compiler_priv::get_dir_pretty_name;
sub compiler_priv::get_default_deref_file;
sub compiler_priv::get_default_math_file;
sub compiler::parse_check_t;
sub compiler::errors_hash_t;
sub compiler::errors_group_t;
sub compiler::language_t;
sub compiler::destination_t;
sub compiler::module_t;
sub compiler::deref_t;
sub compiler::try_t;
sub compiler::input_type;
sub compiler::file_t;
sub compiler::compile;
sub compiler_priv::get_known_func;
sub compiler_priv::exec_interpreter;
sub compiler_priv::get_module_name;
sub compiler_priv::has_extension;
sub compiler_priv::get_generator_state;
sub compiler_priv::get_out_ext;
sub compiler_priv::mk_path;
sub compiler_priv::mk_path_module;
sub compiler_priv::get_all_nianio_file;
sub compiler_priv::get_files_to_parse;
sub compiler_priv::parse_module;
sub compiler_priv::get_mathematical_func;
sub compiler_priv::compile_ide;
sub compiler_priv::compile_strict_file;
sub compiler_priv::construct_error_message;
sub compiler_priv::show_and_count_errors;
sub compiler_priv::translate;
sub compiler_priv::check_modules;
sub compiler_priv::try_save_file;
sub compiler_priv::generate_modules_to_files;
sub compiler_priv::save_module_to_file;
sub compiler_priv::get_dir;
sub compiler_priv::parse_command_line_args;

return 1;

sub compiler_priv::__get_dir_cache_name() {
my $memory_0;
#line 31
$memory_0 = "cache_nl";
#line 31
return $memory_0;
#line 31
undef($memory_0);
#line 31
return;
}

my $_get_dir_cache_name;
sub compiler_priv::get_dir_cache_name() {
	$_get_dir_cache_name = compiler_priv::__get_dir_cache_name() unless defined $_get_dir_cache_name;
	return $_get_dir_cache_name;
}

sub compiler_priv::__get_dir_pretty_name() {
my $memory_0;
#line 35
$memory_0 = "pretty_nl";
#line 35
return $memory_0;
#line 35
undef($memory_0);
#line 35
return;
}

my $_get_dir_pretty_name;
sub compiler_priv::get_dir_pretty_name() {
	$_get_dir_pretty_name = compiler_priv::__get_dir_pretty_name() unless defined $_get_dir_pretty_name;
	return $_get_dir_pretty_name;
}

sub compiler_priv::__get_default_deref_file() {
my $memory_0;
#line 39
$memory_0 = "deref.gr";
#line 39
return $memory_0;
#line 39
undef($memory_0);
#line 39
return;
}

my $_get_default_deref_file;
sub compiler_priv::get_default_deref_file() {
	$_get_default_deref_file = compiler_priv::__get_default_deref_file() unless defined $_get_default_deref_file;
	return $_get_default_deref_file;
}

sub compiler_priv::__get_default_math_file() {
my $memory_0;
#line 43
$memory_0 = "math_fun.gr";
#line 43
return $memory_0;
#line 43
undef($memory_0);
#line 43
return;
}

my $_get_default_math_file;
sub compiler_priv::get_default_math_file() {
	$_get_default_math_file = compiler_priv::__get_default_math_file() unless defined $_get_default_math_file;
	return $_get_default_math_file;
}

sub compiler::__parse_check_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 47
$memory_3 = {
	module => "nast",
	name => "module_t",
};
#line 47
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 47
$memory_2 = ptd::hash($memory_3);
#line 47
undef($memory_3);
#line 47
$memory_4 = ptd::sim();
#line 47
$memory_3 = ptd::arr($memory_4);
#line 47
undef($memory_4);
#line 47
$memory_4 = {
	module => "tc_types",
	name => "deref_types",
};
#line 47
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 47
$memory_1 = {asts => $memory_2,errors => $memory_3,deref_type => $memory_4,};
#line 47
undef($memory_2);
#line 47
undef($memory_3);
#line 47
undef($memory_4);
#line 47
$memory_0 = ptd::rec($memory_1);
#line 47
undef($memory_1);
#line 47
return $memory_0;
#line 47
undef($memory_0);
#line 47
return;
}

my $_parse_check_t;
sub compiler::parse_check_t() {
	$_parse_check_t = compiler::__parse_check_t() unless defined $_parse_check_t;
	return $_parse_check_t;
}

sub compiler::__errors_hash_t() {
my $memory_0;my $memory_1;my $memory_2;
#line 55
$memory_2 = {
	module => "compiler_lib",
	name => "error_t",
};
#line 55
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 55
$memory_1 = ptd::arr($memory_2);
#line 55
undef($memory_2);
#line 55
$memory_0 = ptd::hash($memory_1);
#line 55
undef($memory_1);
#line 55
return $memory_0;
#line 55
undef($memory_0);
#line 55
return;
}

my $_errors_hash_t;
sub compiler::errors_hash_t() {
	$_errors_hash_t = compiler::__errors_hash_t() unless defined $_errors_hash_t;
	return $_errors_hash_t;
}

sub compiler::__errors_group_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 59
$memory_2 = {
	module => "compiler",
	name => "errors_hash_t",
};
#line 59
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 59
$memory_3 = {
	module => "compiler",
	name => "errors_hash_t",
};
#line 59
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 59
$memory_4 = {
	module => "compiler",
	name => "errors_hash_t",
};
#line 59
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 59
$memory_5 = {
	module => "compiler",
	name => "errors_hash_t",
};
#line 59
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 59
$memory_6 = {
	module => "module_checker",
	name => "ret_t",
};
#line 59
$memory_6 = c_rt_lib::ov_mk_arg('ref', $memory_6);
#line 59
$memory_1 = {module_errors => $memory_2,module_warnings => $memory_3,type_errors => $memory_4,type_warnings => $memory_5,loop_error => $memory_6,};
#line 59
undef($memory_2);
#line 59
undef($memory_3);
#line 59
undef($memory_4);
#line 59
undef($memory_5);
#line 59
undef($memory_6);
#line 59
$memory_0 = ptd::rec($memory_1);
#line 59
undef($memory_1);
#line 59
return $memory_0;
#line 59
undef($memory_0);
#line 59
return;
}

my $_errors_group_t;
sub compiler::errors_group_t() {
	$_errors_group_t = compiler::__errors_group_t() unless defined $_errors_group_t;
	return $_errors_group_t;
}

sub compiler::__language_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;
#line 69
$memory_2 = ptd::none();
#line 69
$memory_3 = ptd::none();
#line 69
$memory_4 = ptd::none();
#line 69
$memory_5 = ptd::none();
#line 69
$memory_6 = ptd::none();
#line 69
$memory_7 = ptd::none();
#line 69
$memory_8 = ptd::none();
#line 69
$memory_1 = {pm => $memory_2,nla => $memory_3,c => $memory_4,nl => $memory_5,ast => $memory_6,js => $memory_7,java => $memory_8,};
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
$memory_0 = ptd::var($memory_1);
#line 69
undef($memory_1);
#line 69
return $memory_0;
#line 69
undef($memory_0);
#line 69
return;
}

my $_language_t;
sub compiler::language_t() {
	$_language_t = compiler::__language_t() unless defined $_language_t;
	return $_language_t;
}

sub compiler::__destination_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;
#line 81
$memory_2 = ptd::sim();
#line 81
$memory_3 = ptd::sim();
#line 81
$memory_6 = ptd::sim();
#line 81
$memory_7 = ptd::sim();
#line 81
$memory_5 = {c => $memory_6,h => $memory_7,};
#line 81
undef($memory_6);
#line 81
undef($memory_7);
#line 81
$memory_4 = ptd::rec($memory_5);
#line 81
undef($memory_5);
#line 81
$memory_5 = ptd::sim();
#line 81
$memory_6 = ptd::sim();
#line 81
$memory_7 = ptd::sim();
#line 81
$memory_8 = ptd::sim();
#line 81
$memory_9 = ptd::none();
#line 81
$memory_1 = {pm => $memory_2,nla => $memory_3,c => $memory_4,nl => $memory_5,ast => $memory_6,js => $memory_7,java => $memory_8,none => $memory_9,};
#line 81
undef($memory_2);
#line 81
undef($memory_3);
#line 81
undef($memory_4);
#line 81
undef($memory_5);
#line 81
undef($memory_6);
#line 81
undef($memory_7);
#line 81
undef($memory_8);
#line 81
undef($memory_9);
#line 81
$memory_0 = ptd::var($memory_1);
#line 81
undef($memory_1);
#line 81
return $memory_0;
#line 81
undef($memory_0);
#line 81
return;
}

my $_destination_t;
sub compiler::destination_t() {
	$_destination_t = compiler::__destination_t() unless defined $_destination_t;
	return $_destination_t;
}

sub compiler::__module_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;
#line 94
$memory_3 = ptd::sim();
#line 94
$memory_4 = {
	module => "compiler",
	name => "destination_t",
};
#line 94
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 94
$memory_2 = {src => $memory_3,dst => $memory_4,};
#line 94
undef($memory_3);
#line 94
undef($memory_4);
#line 94
$memory_1 = ptd::rec($memory_2);
#line 94
undef($memory_2);
#line 94
$memory_0 = ptd::hash($memory_1);
#line 94
undef($memory_1);
#line 94
return $memory_0;
#line 94
undef($memory_0);
#line 94
return;
}

my $_module_t;
sub compiler::module_t() {
	$_module_t = compiler::__module_t() unless defined $_module_t;
	return $_module_t;
}

sub compiler::__deref_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 98
$memory_2 = ptd::sim();
#line 98
$memory_3 = ptd::none();
#line 98
$memory_1 = {yes => $memory_2,no => $memory_3,};
#line 98
undef($memory_2);
#line 98
undef($memory_3);
#line 98
$memory_0 = ptd::var($memory_1);
#line 98
undef($memory_1);
#line 98
return $memory_0;
#line 98
undef($memory_0);
#line 98
return;
}

my $_deref_t;
sub compiler::deref_t() {
	$_deref_t = compiler::__deref_t() unless defined $_deref_t;
	return $_deref_t;
}

sub compiler::__try_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 102
$memory_2 = ptd::sim();
#line 102
$memory_3 = ptd::sim();
#line 102
$memory_1 = {err => $memory_2,ok => $memory_3,};
#line 102
undef($memory_2);
#line 102
undef($memory_3);
#line 102
$memory_0 = ptd::var($memory_1);
#line 102
undef($memory_1);
#line 102
return $memory_0;
#line 102
undef($memory_0);
#line 102
return;
}

my $_try_t;
sub compiler::try_t() {
	$_try_t = compiler::__try_t() unless defined $_try_t;
	return $_try_t;
}

sub compiler::__input_type() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;
#line 106
$memory_3 = ptd::sim();
#line 106
$memory_2 = ptd::arr($memory_3);
#line 106
undef($memory_3);
#line 106
$memory_3 = ptd::sim();
#line 106
$memory_4 = {
	module => "compiler",
	name => "deref_t",
};
#line 106
$memory_4 = c_rt_lib::ov_mk_arg('ref', $memory_4);
#line 106
$memory_7 = ptd::none();
#line 106
$memory_8 = ptd::none();
#line 106
$memory_9 = ptd::none();
#line 106
$memory_10 = ptd::none();
#line 106
$memory_11 = ptd::none();
#line 106
$memory_6 = {o0 => $memory_7,o1 => $memory_8,o2 => $memory_9,o3 => $memory_10,o4 => $memory_11,};
#line 106
undef($memory_7);
#line 106
undef($memory_8);
#line 106
undef($memory_9);
#line 106
undef($memory_10);
#line 106
undef($memory_11);
#line 106
$memory_5 = ptd::var($memory_6);
#line 106
undef($memory_6);
#line 106
$memory_6 = ptd::sim();
#line 106
$memory_9 = ptd::none();
#line 106
$memory_10 = ptd::none();
#line 106
$memory_11 = ptd::none();
#line 106
$memory_12 = ptd::sim();
#line 106
$memory_8 = {strict => $memory_9,exec => $memory_10,ide => $memory_11,idex => $memory_12,};
#line 106
undef($memory_9);
#line 106
undef($memory_10);
#line 106
undef($memory_11);
#line 106
undef($memory_12);
#line 106
$memory_7 = ptd::var($memory_8);
#line 106
undef($memory_8);
#line 106
$memory_8 = {
	module => "compiler",
	name => "language_t",
};
#line 106
$memory_8 = c_rt_lib::ov_mk_arg('ref', $memory_8);
#line 106
$memory_11 = ptd::none();
#line 106
$memory_12 = ptd::none();
#line 106
$memory_10 = {norm => $memory_11,wall => $memory_12,};
#line 106
undef($memory_11);
#line 106
undef($memory_12);
#line 106
$memory_9 = ptd::var($memory_10);
#line 106
undef($memory_10);
#line 106
$memory_1 = {input_path => $memory_2,cache_path => $memory_3,deref => $memory_4,optimization => $memory_5,math_fun => $memory_6,mode => $memory_7,language => $memory_8,alarm => $memory_9,};
#line 106
undef($memory_2);
#line 106
undef($memory_3);
#line 106
undef($memory_4);
#line 106
undef($memory_5);
#line 106
undef($memory_6);
#line 106
undef($memory_7);
#line 106
undef($memory_8);
#line 106
undef($memory_9);
#line 106
$memory_0 = ptd::rec($memory_1);
#line 106
undef($memory_1);
#line 106
return $memory_0;
#line 106
undef($memory_0);
#line 106
return;
}

my $_input_type;
sub compiler::input_type() {
	$_input_type = compiler::__input_type() unless defined $_input_type;
	return $_input_type;
}

sub compiler::__file_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;
#line 125
$memory_2 = ptd::sim();
#line 125
$memory_3 = ptd::sim();
#line 125
$memory_1 = {ok => $memory_2,err => $memory_3,};
#line 125
undef($memory_2);
#line 125
undef($memory_3);
#line 125
$memory_0 = ptd::var($memory_1);
#line 125
undef($memory_1);
#line 125
return $memory_0;
#line 125
undef($memory_0);
#line 125
return;
}

my $_file_t;
sub compiler::file_t() {
	$_file_t = compiler::__file_t() unless defined $_file_t;
	return $_file_t;
}

sub compiler::compile($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 129
$memory_1 = compiler_priv::parse_command_line_args($memory_0);
#line 130
$memory_2 = $memory_1->{'cache_path'};
#line 130
c_fe_lib::mk_path($memory_2);
#line 130
undef($memory_2);
#line 131
$memory_2 = $memory_1->{'mode'};
#line 131
$memory_2 = c_rt_lib::ov_is($memory_2, 'strict');
#line 131
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 131
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 132
$memory_3 = "strict mode processing...";
#line 132
c_fe_lib::print($memory_3);
#line 132
undef($memory_3);
#line 133
compiler_priv::compile_strict_file($memory_1);
#line 134
goto label_1;
#line 134
label_2:
#line 134
$memory_2 = $memory_1->{'mode'};
#line 134
$memory_2 = c_rt_lib::ov_is($memory_2, 'ide');
#line 134
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 134
$memory_2 = $memory_1->{'mode'};
#line 134
$memory_2 = c_rt_lib::ov_is($memory_2, 'idex');
#line 134
label_4:
#line 134
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 134
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 135
$memory_3 = "ide mode processing...";
#line 135
c_fe_lib::print($memory_3);
#line 135
undef($memory_3);
#line 136
compiler_priv::compile_ide($memory_1);
#line 137
goto label_1;
#line 137
label_3:
#line 137
$memory_2 = $memory_1->{'mode'};
#line 137
$memory_2 = c_rt_lib::ov_is($memory_2, 'exec');
#line 137
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 137
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 138
compiler_priv::exec_interpreter($memory_1);
#line 139
goto label_1;
#line 139
label_5:
#line 140
$memory_3 = [];
#line 140
die(dfile::ssave($memory_3));
#line 140
undef($memory_3);
#line 141
goto label_1;
#line 141
label_1:
#line 141
undef($memory_2);
#line 141
undef($memory_1);
#line 141
undef($memory_0);
#line 141
return;
}

sub compiler_priv::__get_known_func() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 145
$memory_0 = {};
#line 146
$memory_1 = "nl::print";
#line 146
$memory_3 = {
	module => "nl",
	name => "print",
};
#line 146
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 146
$memory_4 = c_rt_lib::ov_mk_none('sequential');
#line 146
$memory_6 = ptd::sim();
#line 146
$memory_5 = [$memory_6];
#line 146
undef($memory_6);
#line 146
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 146
$memory_2 = {func => $memory_3,type => $memory_4,args => $memory_5,return => $memory_6,};
#line 146
undef($memory_3);
#line 146
undef($memory_4);
#line 146
undef($memory_5);
#line 146
undef($memory_6);
#line 146
hash::set_value($memory_0, $memory_1, $memory_2);
#line 146
undef($memory_2);
#line 146
undef($memory_1);
#line 147
return $memory_0;
#line 147
undef($memory_0);
#line 147
return;
}

my $_get_known_func;
sub compiler_priv::get_known_func() {
	$_get_known_func = compiler_priv::__get_known_func() unless defined $_get_known_func;
	return $_get_known_func;
}

sub compiler_priv::exec_interpreter($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];
#line 151
$memory_1 = {};
#line 152
$memory_3 = {};
#line 152
$memory_4 = {};
#line 152
$memory_5 = {};
#line 152
$memory_6 = {};
#line 152
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 152
$memory_2 = {module_errors => $memory_3,module_warnings => $memory_4,type_errors => $memory_5,type_warnings => $memory_6,loop_error => $memory_7,};
#line 152
undef($memory_3);
#line 152
undef($memory_4);
#line 152
undef($memory_5);
#line 152
undef($memory_6);
#line 152
undef($memory_7);
#line 159
$memory_3 = 0;
#line 160
$memory_4 = compiler_priv::get_files_to_parse($memory_0);
#line 161
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 161
label_3:
#line 161
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 161
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 161
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 161
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 162
$memory_9 = $memory_6->{'src'};
#line 162
$memory_8 = compiler_priv::parse_module($memory_5, $memory_9, $memory_2);
#line 162
undef($memory_9);
#line 162
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 162
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 164
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 164
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 164
$memory_9 = "NOMATCHALERT";
#line 164
$memory_9 = [$memory_9,$memory_8];
#line 164
die(dfile::ssave($memory_9));
#line 162
label_5:
#line 162
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 163
hash::set_value($memory_1, $memory_5, $memory_10);
#line 163
undef($memory_10);
#line 164
goto label_4;
#line 164
label_6:
#line 164
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 165
$memory_11 = 1;
#line 165
$memory_3 = $memory_3 + $memory_11;
#line 165
undef($memory_11);
#line 165
undef($memory_10);
#line 166
goto label_4;
#line 166
label_4:
#line 166
undef($memory_8);
#line 166
undef($memory_9);
#line 167
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 167
goto label_3;
#line 167
label_1:
#line 167
undef($memory_5);
#line 167
undef($memory_6);
#line 167
undef($memory_7);
#line 168
$memory_5 = 0;
#line 168
$memory_5 = c_rt_lib::to_nl($memory_3 != $memory_5);
#line 168
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 168
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 169
compiler_priv::show_and_count_errors($memory_2, $memory_0);
#line 170
undef($memory_0);
#line 170
undef($memory_1);
#line 170
undef($memory_2);
#line 170
undef($memory_3);
#line 170
undef($memory_4);
#line 170
undef($memory_5);
#line 170
return;
#line 171
goto label_8;
#line 171
label_8:
#line 171
undef($memory_5);
#line 172
$memory_5 = $memory_0->{'deref'};
#line 172
compiler_priv::check_modules($memory_1, $memory_2, $memory_5);
#line 172
undef($memory_5);
#line 173
$memory_5 = compiler_priv::show_and_count_errors($memory_2, $memory_0);
#line 173
$memory_6 = 0;
#line 173
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 173
undef($memory_6);
#line 173
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 173
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 174
undef($memory_0);
#line 174
undef($memory_1);
#line 174
undef($memory_2);
#line 174
undef($memory_3);
#line 174
undef($memory_4);
#line 174
undef($memory_5);
#line 174
return;
#line 175
goto label_10;
#line 175
label_10:
#line 175
undef($memory_5);
#line 176
$memory_6 = {};
#line 176
$memory_7 = $memory_0->{'optimization'};
#line 176
$memory_5 = post_processing::init($memory_6, $memory_7);
#line 176
undef($memory_7);
#line 176
undef($memory_6);
#line 177
$memory_6 = compiler_priv::translate($memory_1, $memory_5);
#line 178
$memory_7 = [];
#line 179
$memory_8 = "";
#line 180
$memory_11 = c_rt_lib::init_iter($memory_6);
#line 180
label_13:
#line 180
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 180
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 180
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 180
$memory_10 = c_rt_lib::hash_get_value($memory_6, $memory_9);
#line 181
$memory_12 = $memory_10->{'functions'};
#line 181
$memory_14 = 0;
#line 181
$memory_15 = 1;
#line 181
$memory_16 = c_rt_lib::array_len($memory_12);
#line 181
label_16:
#line 181
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 181
if (c_rt_lib::check_true($memory_17)) {goto label_14;}
#line 181
$memory_13 = $memory_12->[$memory_14];
#line 182
$memory_18 = $memory_13->{'name'};
#line 182
$memory_19 = "main";
#line 182
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 182
undef($memory_19);
#line 182
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 182
if (c_rt_lib::check_true($memory_18)) {goto label_18;}
#line 183
$memory_8 = $memory_9;
#line 184
goto label_18;
#line 184
label_18:
#line 184
undef($memory_18);
#line 185
$memory_14 = $memory_14 + $memory_15;
#line 185
goto label_16;
#line 185
label_14:
#line 185
undef($memory_12);
#line 185
undef($memory_13);
#line 185
undef($memory_14);
#line 185
undef($memory_15);
#line 185
undef($memory_16);
#line 185
undef($memory_17);
#line 186
array::push($memory_7, $memory_10);
#line 187
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 187
goto label_13;
#line 187
label_11:
#line 187
undef($memory_9);
#line 187
undef($memory_10);
#line 187
undef($memory_11);
#line 188
$memory_10 = compiler_priv::get_known_func();
#line 188
$memory_9 = interpreter::init($memory_7, $memory_10);
#line 188
undef($memory_10);
#line 189
$memory_12 = "main";
#line 189
$memory_11 = interpreter::start($memory_9, $memory_12, $memory_8);
#line 189
undef($memory_12);
#line 189
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 189
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 189
$memory_11 = c_rt_lib::ov_mk_arg('ensure', $memory_11);
#line 189
die(dfile::ssave($memory_11));
#line 189
label_19:
#line 189
undef($memory_10);
#line 189
undef($memory_11);
#line 190
$memory_11 = interpreter::exec_all_code($memory_9);
#line 190
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 190
if (c_rt_lib::check_true($memory_10)) {goto label_20;}
#line 190
$memory_11 = c_rt_lib::ov_mk_arg('ensure', $memory_11);
#line 190
die(dfile::ssave($memory_11));
#line 190
label_20:
#line 190
undef($memory_10);
#line 190
undef($memory_11);
#line 190
undef($memory_1);
#line 190
undef($memory_2);
#line 190
undef($memory_3);
#line 190
undef($memory_4);
#line 190
undef($memory_5);
#line 190
undef($memory_6);
#line 190
undef($memory_7);
#line 190
undef($memory_8);
#line 190
undef($memory_9);
#line 190
undef($memory_0);
#line 190
return;
}

sub compiler_priv::get_module_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 194
$memory_1 = string::length($memory_0);
#line 194
$memory_2 = 1;
#line 194
$memory_1 = $memory_1 - $memory_2;
#line 194
undef($memory_2);
#line 195
label_2:
#line 195
$memory_2 = 0;
#line 195
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 195
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 195
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 195
$memory_5 = 1;
#line 195
$memory_2 = string::substr($memory_0, $memory_1, $memory_5);
#line 195
undef($memory_5);
#line 195
$memory_5 = "/";
#line 195
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_5);
#line 195
undef($memory_5);
#line 195
label_4:
#line 195
undef($memory_4);
#line 195
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 195
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 195
$memory_4 = 1;
#line 195
$memory_2 = string::substr($memory_0, $memory_1, $memory_4);
#line 195
undef($memory_4);
#line 195
$memory_4 = "\\";
#line 195
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_4);
#line 195
undef($memory_4);
#line 195
label_3:
#line 195
undef($memory_3);
#line 195
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 195
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 196
$memory_4 = 1;
#line 196
$memory_3 = string::substr($memory_0, $memory_1, $memory_4);
#line 196
undef($memory_4);
#line 196
$memory_4 = ".";
#line 196
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 196
undef($memory_4);
#line 196
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 196
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 197
$memory_4 = 1;
#line 197
$memory_1 = $memory_1 - $memory_4;
#line 197
undef($memory_4);
#line 198
undef($memory_3);
#line 198
goto label_1;
#line 199
goto label_6;
#line 199
label_6:
#line 199
undef($memory_3);
#line 200
$memory_3 = 1;
#line 200
$memory_1 = $memory_1 - $memory_3;
#line 200
undef($memory_3);
#line 201
goto label_2;
#line 201
label_1:
#line 201
undef($memory_2);
#line 202
$memory_2 = "";
#line 203
label_8:
#line 203
$memory_3 = 0;
#line 203
$memory_3 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 203
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 203
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 203
$memory_6 = 1;
#line 203
$memory_3 = string::substr($memory_0, $memory_1, $memory_6);
#line 203
undef($memory_6);
#line 203
$memory_6 = "/";
#line 203
$memory_3 = c_rt_lib::to_nl($memory_3 ne $memory_6);
#line 203
undef($memory_6);
#line 203
label_10:
#line 203
undef($memory_5);
#line 203
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 203
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 203
$memory_5 = 1;
#line 203
$memory_3 = string::substr($memory_0, $memory_1, $memory_5);
#line 203
undef($memory_5);
#line 203
$memory_5 = "\\";
#line 203
$memory_3 = c_rt_lib::to_nl($memory_3 ne $memory_5);
#line 203
undef($memory_5);
#line 203
label_9:
#line 203
undef($memory_4);
#line 203
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 203
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 204
$memory_5 = 1;
#line 204
$memory_4 = string::substr($memory_0, $memory_1, $memory_5);
#line 204
undef($memory_5);
#line 204
$memory_4 = $memory_4 . $memory_2;
#line 204
$memory_2 = $memory_4;
#line 204
undef($memory_4);
#line 205
$memory_4 = 1;
#line 205
$memory_1 = $memory_1 - $memory_4;
#line 205
undef($memory_4);
#line 206
goto label_8;
#line 206
label_7:
#line 206
undef($memory_3);
#line 207
undef($memory_0);
#line 207
undef($memory_1);
#line 207
return $memory_2;
#line 207
undef($memory_1);
#line 207
undef($memory_2);
#line 207
undef($memory_0);
#line 207
return;
}

sub compiler_priv::has_extension($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 211
$memory_2 = string::length($memory_1);
#line 212
$memory_3 = string::length($memory_0);
#line 212
$memory_3 = c_rt_lib::to_nl($memory_3 <= $memory_2);
#line 212
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 212
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 212
$memory_4 = c_rt_lib::to_nl(0);
#line 212
undef($memory_0);
#line 212
undef($memory_1);
#line 212
undef($memory_2);
#line 212
undef($memory_3);
#line 212
return $memory_4;
#line 212
undef($memory_4);
#line 212
goto label_2;
#line 212
label_2:
#line 212
undef($memory_3);
#line 213
$memory_4 = string::length($memory_0);
#line 213
$memory_4 = $memory_4 - $memory_2;
#line 213
$memory_3 = string::substr($memory_0, $memory_4, $memory_2);
#line 213
undef($memory_4);
#line 213
$memory_2 = $memory_3;
#line 213
undef($memory_3);
#line 214
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_1);
#line 214
undef($memory_0);
#line 214
undef($memory_1);
#line 214
undef($memory_2);
#line 214
return $memory_3;
#line 214
undef($memory_3);
#line 214
undef($memory_2);
#line 214
undef($memory_0);
#line 214
undef($memory_1);
#line 214
return;
}

sub compiler_priv::get_generator_state($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 218
$memory_1 = c_rt_lib::ov_is($memory_0, 'pm');
#line 218
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 220
$memory_1 = c_rt_lib::ov_is($memory_0, 'nla');
#line 220
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 222
$memory_1 = c_rt_lib::ov_is($memory_0, 'c');
#line 222
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 224
$memory_1 = c_rt_lib::ov_is($memory_0, 'ast');
#line 224
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 226
$memory_1 = c_rt_lib::ov_is($memory_0, 'nl');
#line 226
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 228
$memory_1 = c_rt_lib::ov_is($memory_0, 'js');
#line 228
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 230
$memory_1 = c_rt_lib::ov_is($memory_0, 'java');
#line 230
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 230
$memory_1 = "NOMATCHALERT";
#line 230
$memory_1 = [$memory_1,$memory_0];
#line 230
die(dfile::ssave($memory_1));
#line 218
label_2:
#line 219
$memory_2 = generator_c::get_empty_state();
#line 219
undef($memory_0);
#line 219
undef($memory_1);
#line 219
return $memory_2;
#line 219
undef($memory_2);
#line 220
goto label_1;
#line 220
label_3:
#line 221
$memory_2 = generator_c::get_empty_state();
#line 221
undef($memory_0);
#line 221
undef($memory_1);
#line 221
return $memory_2;
#line 221
undef($memory_2);
#line 222
goto label_1;
#line 222
label_4:
#line 223
$memory_2 = generator_c::get_empty_state();
#line 223
undef($memory_0);
#line 223
undef($memory_1);
#line 223
return $memory_2;
#line 223
undef($memory_2);
#line 224
goto label_1;
#line 224
label_5:
#line 225
$memory_2 = [];
#line 225
die(dfile::ssave($memory_2));
#line 225
undef($memory_2);
#line 226
goto label_1;
#line 226
label_6:
#line 227
$memory_2 = [];
#line 227
die(dfile::ssave($memory_2));
#line 227
undef($memory_2);
#line 228
goto label_1;
#line 228
label_7:
#line 229
$memory_2 = generator_c::get_empty_state();
#line 229
undef($memory_0);
#line 229
undef($memory_1);
#line 229
return $memory_2;
#line 229
undef($memory_2);
#line 230
goto label_1;
#line 230
label_8:
#line 231
$memory_2 = generator_c::get_empty_state();
#line 231
undef($memory_0);
#line 231
undef($memory_1);
#line 231
return $memory_2;
#line 231
undef($memory_2);
#line 232
goto label_1;
#line 232
label_1:
#line 232
undef($memory_1);
#line 232
undef($memory_0);
#line 232
return;
}

sub compiler_priv::get_out_ext($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 236
$memory_1 = c_rt_lib::ov_is($memory_0, 'pm');
#line 236
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 238
$memory_1 = c_rt_lib::ov_is($memory_0, 'nla');
#line 238
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 240
$memory_1 = c_rt_lib::ov_is($memory_0, 'c');
#line 240
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 242
$memory_1 = c_rt_lib::ov_is($memory_0, 'ast');
#line 242
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 244
$memory_1 = c_rt_lib::ov_is($memory_0, 'nl');
#line 244
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 246
$memory_1 = c_rt_lib::ov_is($memory_0, 'js');
#line 246
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 248
$memory_1 = c_rt_lib::ov_is($memory_0, 'java');
#line 248
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 248
$memory_1 = "NOMATCHALERT";
#line 248
$memory_1 = [$memory_1,$memory_0];
#line 248
die(dfile::ssave($memory_1));
#line 236
label_2:
#line 237
$memory_2 = ".pm";
#line 237
undef($memory_0);
#line 237
undef($memory_1);
#line 237
return $memory_2;
#line 237
undef($memory_2);
#line 238
goto label_1;
#line 238
label_3:
#line 239
$memory_2 = ".nla";
#line 239
undef($memory_0);
#line 239
undef($memory_1);
#line 239
return $memory_2;
#line 239
undef($memory_2);
#line 240
goto label_1;
#line 240
label_4:
#line 241
$memory_2 = ".c";
#line 241
undef($memory_0);
#line 241
undef($memory_1);
#line 241
return $memory_2;
#line 241
undef($memory_2);
#line 242
goto label_1;
#line 242
label_5:
#line 243
$memory_2 = ".ast";
#line 243
undef($memory_0);
#line 243
undef($memory_1);
#line 243
return $memory_2;
#line 243
undef($memory_2);
#line 244
goto label_1;
#line 244
label_6:
#line 245
$memory_2 = ".nl";
#line 245
undef($memory_0);
#line 245
undef($memory_1);
#line 245
return $memory_2;
#line 245
undef($memory_2);
#line 246
goto label_1;
#line 246
label_7:
#line 247
$memory_2 = ".js";
#line 247
undef($memory_0);
#line 247
undef($memory_1);
#line 247
return $memory_2;
#line 247
undef($memory_2);
#line 248
goto label_1;
#line 248
label_8:
#line 249
$memory_2 = ".java";
#line 249
undef($memory_0);
#line 249
undef($memory_1);
#line 249
return $memory_2;
#line 249
undef($memory_2);
#line 250
goto label_1;
#line 250
label_1:
#line 250
undef($memory_1);
#line 250
undef($memory_0);
#line 250
return;
}

sub compiler_priv::mk_path($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 254
$memory_2 = ".";
#line 254
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 254
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 254
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 254
undef($memory_0);
#line 254
undef($memory_1);
#line 254
undef($memory_2);
#line 254
return;
#line 254
goto label_2;
#line 254
label_2:
#line 254
undef($memory_2);
#line 255
$memory_2 = compiler_priv::get_dir($memory_1);
#line 255
compiler_priv::mk_path($memory_0, $memory_2);
#line 255
undef($memory_2);
#line 256
$memory_2 = $memory_0 . $memory_1;
#line 256
c_fe_lib::mk_path($memory_2);
#line 256
undef($memory_2);
#line 256
undef($memory_0);
#line 256
undef($memory_1);
#line 256
return;
}

sub compiler_priv::mk_path_module($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 261
$memory_3 = $memory_2->{'cache_path'};
#line 261
$memory_3 = $memory_3 . $memory_1;
#line 262
$memory_4 = $memory_0->{'file'};
#line 263
$memory_5 = $memory_2->{'language'};
#line 263
$memory_6 = c_rt_lib::ov_is($memory_5, 'pm');
#line 263
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 265
$memory_6 = c_rt_lib::ov_is($memory_5, 'nla');
#line 265
if (c_rt_lib::check_true($memory_6)) {goto label_3;}
#line 267
$memory_6 = c_rt_lib::ov_is($memory_5, 'c');
#line 267
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 269
$memory_6 = c_rt_lib::ov_is($memory_5, 'nl');
#line 269
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 277
$memory_6 = c_rt_lib::ov_is($memory_5, 'ast');
#line 277
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 279
$memory_6 = c_rt_lib::ov_is($memory_5, 'js');
#line 279
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 281
$memory_6 = c_rt_lib::ov_is($memory_5, 'java');
#line 281
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 281
$memory_6 = "NOMATCHALERT";
#line 281
$memory_6 = [$memory_6,$memory_5];
#line 281
die(dfile::ssave($memory_6));
#line 263
label_2:
#line 264
$memory_8 = ".pm";
#line 264
$memory_8 = $memory_3 . $memory_8;
#line 264
$memory_8 = c_rt_lib::ov_mk_arg('pm', $memory_8);
#line 264
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 264
undef($memory_8);
#line 264
undef($memory_0);
#line 264
undef($memory_1);
#line 264
undef($memory_2);
#line 264
undef($memory_3);
#line 264
undef($memory_4);
#line 264
undef($memory_5);
#line 264
undef($memory_6);
#line 264
return $memory_7;
#line 264
undef($memory_7);
#line 265
goto label_1;
#line 265
label_3:
#line 266
$memory_8 = ".nla";
#line 266
$memory_8 = $memory_3 . $memory_8;
#line 266
$memory_8 = c_rt_lib::ov_mk_arg('nla', $memory_8);
#line 266
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 266
undef($memory_8);
#line 266
undef($memory_0);
#line 266
undef($memory_1);
#line 266
undef($memory_2);
#line 266
undef($memory_3);
#line 266
undef($memory_4);
#line 266
undef($memory_5);
#line 266
undef($memory_6);
#line 266
return $memory_7;
#line 266
undef($memory_7);
#line 267
goto label_1;
#line 267
label_4:
#line 268
$memory_9 = ".c";
#line 268
$memory_9 = $memory_3 . $memory_9;
#line 268
$memory_10 = ".h";
#line 268
$memory_10 = $memory_3 . $memory_10;
#line 268
$memory_8 = {c => $memory_9,h => $memory_10,};
#line 268
undef($memory_9);
#line 268
undef($memory_10);
#line 268
$memory_8 = c_rt_lib::ov_mk_arg('c', $memory_8);
#line 268
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 268
undef($memory_8);
#line 268
undef($memory_0);
#line 268
undef($memory_1);
#line 268
undef($memory_2);
#line 268
undef($memory_3);
#line 268
undef($memory_4);
#line 268
undef($memory_5);
#line 268
undef($memory_6);
#line 268
return $memory_7;
#line 268
undef($memory_7);
#line 269
goto label_1;
#line 269
label_5:
#line 270
$memory_8 = $memory_0->{'dir'};
#line 270
$memory_7 = string::length($memory_8);
#line 270
undef($memory_8);
#line 271
$memory_8 = compiler_priv::get_dir($memory_4);
#line 272
$memory_9 = $memory_2->{'cache_path'};
#line 272
$memory_9 = $memory_9 . $memory_8;
#line 272
$memory_10 = "/";
#line 272
$memory_9 = $memory_9 . $memory_10;
#line 272
undef($memory_10);
#line 272
$memory_9 = $memory_9 . $memory_1;
#line 272
$memory_3 = $memory_9;
#line 272
undef($memory_9);
#line 273
$memory_9 = string::length($memory_8);
#line 273
$memory_9 = c_rt_lib::to_nl($memory_7 < $memory_9);
#line 273
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 273
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 274
$memory_10 = $memory_2->{'cache_path'};
#line 274
$memory_12 = 1;
#line 274
$memory_12 = $memory_7 + $memory_12;
#line 274
$memory_11 = string::substr2($memory_8, $memory_12);
#line 274
undef($memory_12);
#line 274
compiler_priv::mk_path($memory_10, $memory_11);
#line 274
undef($memory_11);
#line 274
undef($memory_10);
#line 275
goto label_10;
#line 275
label_10:
#line 275
undef($memory_9);
#line 276
$memory_10 = ".nl";
#line 276
$memory_10 = $memory_3 . $memory_10;
#line 276
$memory_10 = c_rt_lib::ov_mk_arg('nl', $memory_10);
#line 276
$memory_9 = {src => $memory_4,dst => $memory_10,};
#line 276
undef($memory_10);
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
undef($memory_6);
#line 276
undef($memory_7);
#line 276
undef($memory_8);
#line 276
return $memory_9;
#line 276
undef($memory_9);
#line 276
undef($memory_7);
#line 276
undef($memory_8);
#line 277
goto label_1;
#line 277
label_6:
#line 278
$memory_8 = ".ast";
#line 278
$memory_8 = $memory_3 . $memory_8;
#line 278
$memory_8 = c_rt_lib::ov_mk_arg('ast', $memory_8);
#line 278
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 278
undef($memory_8);
#line 278
undef($memory_0);
#line 278
undef($memory_1);
#line 278
undef($memory_2);
#line 278
undef($memory_3);
#line 278
undef($memory_4);
#line 278
undef($memory_5);
#line 278
undef($memory_6);
#line 278
return $memory_7;
#line 278
undef($memory_7);
#line 279
goto label_1;
#line 279
label_7:
#line 280
$memory_8 = ".js";
#line 280
$memory_8 = $memory_3 . $memory_8;
#line 280
$memory_8 = c_rt_lib::ov_mk_arg('js', $memory_8);
#line 280
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 280
undef($memory_8);
#line 280
undef($memory_0);
#line 280
undef($memory_1);
#line 280
undef($memory_2);
#line 280
undef($memory_3);
#line 280
undef($memory_4);
#line 280
undef($memory_5);
#line 280
undef($memory_6);
#line 280
return $memory_7;
#line 280
undef($memory_7);
#line 281
goto label_1;
#line 281
label_8:
#line 282
$memory_8 = "_NL.java";
#line 282
$memory_8 = $memory_3 . $memory_8;
#line 282
$memory_8 = c_rt_lib::ov_mk_arg('java', $memory_8);
#line 282
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 282
undef($memory_8);
#line 282
undef($memory_0);
#line 282
undef($memory_1);
#line 282
undef($memory_2);
#line 282
undef($memory_3);
#line 282
undef($memory_4);
#line 282
undef($memory_5);
#line 282
undef($memory_6);
#line 282
return $memory_7;
#line 282
undef($memory_7);
#line 283
goto label_1;
#line 283
label_1:
#line 283
undef($memory_5);
#line 283
undef($memory_6);
#line 283
undef($memory_3);
#line 283
undef($memory_4);
#line 283
undef($memory_0);
#line 283
undef($memory_1);
#line 283
undef($memory_2);
#line 283
return;
}

sub compiler_priv::get_all_nianio_file($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 287
$memory_1 = [];
#line 288
$memory_4 = ptd::sim();
#line 288
$memory_3 = ptd::arr($memory_4);
#line 288
undef($memory_4);
#line 288
$memory_4 = c_fe_lib::get_module_files_rec($memory_0);
#line 288
$memory_2 = ptd::ensure($memory_3, $memory_4);
#line 288
undef($memory_4);
#line 288
undef($memory_3);
#line 289
$memory_4 = 0;
#line 289
$memory_5 = 1;
#line 289
$memory_6 = c_rt_lib::array_len($memory_2);
#line 289
label_3:
#line 289
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 289
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 289
$memory_3 = $memory_2->[$memory_4];
#line 290
$memory_9 = ".nl";
#line 290
$memory_8 = compiler_priv::has_extension($memory_3, $memory_9);
#line 290
undef($memory_9);
#line 290
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 290
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 290
array::push($memory_1, $memory_3);
#line 290
goto label_5;
#line 290
label_5:
#line 290
undef($memory_8);
#line 291
$memory_4 = $memory_4 + $memory_5;
#line 291
goto label_3;
#line 291
label_1:
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
#line 292
undef($memory_0);
#line 292
undef($memory_2);
#line 292
return $memory_1;
#line 292
undef($memory_1);
#line 292
undef($memory_2);
#line 292
undef($memory_0);
#line 292
return;
}

sub compiler_priv::get_files_to_parse($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];
#line 296
$memory_1 = $memory_0->{'cache_path'};
#line 297
$memory_2 = [];
#line 298
$memory_3 = $memory_0->{'input_path'};
#line 298
$memory_5 = 0;
#line 298
$memory_6 = 1;
#line 298
$memory_7 = c_rt_lib::array_len($memory_3);
#line 298
label_3:
#line 298
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 298
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 298
$memory_4 = $memory_3->[$memory_5];
#line 299
$memory_10 = ".nl";
#line 299
$memory_9 = compiler_priv::has_extension($memory_4, $memory_10);
#line 299
undef($memory_10);
#line 299
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 299
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 300
$memory_11 = compiler_priv::get_dir($memory_4);
#line 300
$memory_10 = {dir => $memory_11,file => $memory_4,};
#line 300
undef($memory_11);
#line 300
array::push($memory_2, $memory_10);
#line 300
undef($memory_10);
#line 301
goto label_4;
#line 301
label_5:
#line 302
$memory_10 = compiler_priv::get_all_nianio_file($memory_4);
#line 302
$memory_12 = 0;
#line 302
$memory_13 = 1;
#line 302
$memory_14 = c_rt_lib::array_len($memory_10);
#line 302
label_8:
#line 302
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 302
if (c_rt_lib::check_true($memory_15)) {goto label_6;}
#line 302
$memory_11 = $memory_10->[$memory_12];
#line 303
$memory_16 = {dir => $memory_4,file => $memory_11,};
#line 303
array::push($memory_2, $memory_16);
#line 303
undef($memory_16);
#line 304
$memory_12 = $memory_12 + $memory_13;
#line 304
goto label_8;
#line 304
label_6:
#line 304
undef($memory_10);
#line 304
undef($memory_11);
#line 304
undef($memory_12);
#line 304
undef($memory_13);
#line 304
undef($memory_14);
#line 304
undef($memory_15);
#line 305
goto label_4;
#line 305
label_4:
#line 305
undef($memory_9);
#line 306
$memory_5 = $memory_5 + $memory_6;
#line 306
goto label_3;
#line 306
label_1:
#line 306
undef($memory_3);
#line 306
undef($memory_4);
#line 306
undef($memory_5);
#line 306
undef($memory_6);
#line 306
undef($memory_7);
#line 306
undef($memory_8);
#line 307
$memory_4 = $memory_0->{'language'};
#line 307
$memory_3 = compiler_priv::get_out_ext($memory_4);
#line 307
undef($memory_4);
#line 308
$memory_4 = {};
#line 309
$memory_5 = c_fe_lib::get_module_files($memory_1);
#line 309
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 309
if (c_rt_lib::check_true($memory_6)) {goto label_10;}
#line 314
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 314
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 314
$memory_6 = "NOMATCHALERT";
#line 314
$memory_6 = [$memory_6,$memory_5];
#line 314
die(dfile::ssave($memory_6));
#line 309
label_10:
#line 309
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 310
$memory_10 = ptd::sim();
#line 310
$memory_9 = ptd::arr($memory_10);
#line 310
undef($memory_10);
#line 310
$memory_8 = ptd::ensure($memory_9, $memory_7);
#line 310
undef($memory_9);
#line 310
$memory_10 = 0;
#line 310
$memory_11 = 1;
#line 310
$memory_12 = c_rt_lib::array_len($memory_8);
#line 310
label_14:
#line 310
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 310
if (c_rt_lib::check_true($memory_13)) {goto label_12;}
#line 310
$memory_9 = $memory_8->[$memory_10];
#line 311
$memory_14 = compiler_priv::has_extension($memory_9, $memory_3);
#line 311
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 311
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 311
if (c_rt_lib::check_true($memory_14)) {goto label_16;}
#line 311
undef($memory_14);
#line 311
goto label_13;
#line 311
goto label_16;
#line 311
label_16:
#line 311
undef($memory_14);
#line 312
$memory_14 = compiler_priv::get_module_name($memory_9);
#line 312
hash::set_value($memory_4, $memory_14, $memory_9);
#line 312
undef($memory_14);
#line 312
label_13:
#line 313
$memory_10 = $memory_10 + $memory_11;
#line 313
goto label_14;
#line 313
label_12:
#line 313
undef($memory_8);
#line 313
undef($memory_9);
#line 313
undef($memory_10);
#line 313
undef($memory_11);
#line 313
undef($memory_12);
#line 313
undef($memory_13);
#line 313
undef($memory_7);
#line 314
goto label_9;
#line 314
label_11:
#line 314
$memory_7 = c_rt_lib::ov_as($memory_5, 'err');
#line 315
$memory_8 = {};
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
undef($memory_5);
#line 315
undef($memory_6);
#line 315
undef($memory_7);
#line 315
return $memory_8;
#line 315
undef($memory_8);
#line 315
undef($memory_7);
#line 316
goto label_9;
#line 316
label_9:
#line 316
undef($memory_5);
#line 316
undef($memory_6);
#line 317
$memory_5 = {};
#line 318
$memory_7 = 0;
#line 318
$memory_8 = 1;
#line 318
$memory_9 = c_rt_lib::array_len($memory_2);
#line 318
label_19:
#line 318
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 318
if (c_rt_lib::check_true($memory_10)) {goto label_17;}
#line 318
$memory_6 = $memory_2->[$memory_7];
#line 319
$memory_12 = $memory_6->{'file'};
#line 319
$memory_11 = compiler_priv::get_module_name($memory_12);
#line 319
undef($memory_12);
#line 320
$memory_12 = compiler_priv::mk_path_module($memory_6, $memory_11, $memory_0);
#line 321
hash::set_value($memory_5, $memory_11, $memory_12);
#line 321
undef($memory_11);
#line 321
undef($memory_12);
#line 322
$memory_7 = $memory_7 + $memory_8;
#line 322
goto label_19;
#line 322
label_17:
#line 322
undef($memory_6);
#line 322
undef($memory_7);
#line 322
undef($memory_8);
#line 322
undef($memory_9);
#line 322
undef($memory_10);
#line 323
undef($memory_0);
#line 323
undef($memory_1);
#line 323
undef($memory_2);
#line 323
undef($memory_3);
#line 323
undef($memory_4);
#line 323
return $memory_5;
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
undef($memory_0);
#line 323
return;
}

sub compiler_priv::parse_module($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 330
$memory_3 = "processing ";
#line 330
$memory_3 = $memory_3 . $memory_0;
#line 330
$memory_4 = "...";
#line 330
$memory_3 = $memory_3 . $memory_4;
#line 330
undef($memory_4);
#line 330
c_fe_lib::print($memory_3);
#line 330
undef($memory_3);
#line 331
$memory_8 = ptd::sim();
#line 331
$memory_9 = ptd::sim();
#line 331
$memory_7 = {ok => $memory_8,err => $memory_9,};
#line 331
undef($memory_8);
#line 331
undef($memory_9);
#line 331
$memory_6 = ptd::var($memory_7);
#line 331
undef($memory_7);
#line 331
$memory_7 = c_fe_lib::file_to_string($memory_1);
#line 331
$memory_5 = ptd::ensure($memory_6, $memory_7);
#line 331
undef($memory_7);
#line 331
undef($memory_6);
#line 331
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 331
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 331
undef($memory_0);
#line 331
undef($memory_1);
#line 331
undef($memory_3);
#line 331
undef($memory_4);
#line 331
$_[2] = $memory_2;return $memory_5;
#line 331
label_1:
#line 331
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 331
undef($memory_4);
#line 331
undef($memory_5);
#line 332
$memory_4 = nparser::sparse($memory_3, $memory_0);
#line 333
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 333
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 339
$memory_5 = c_rt_lib::ov_is($memory_4, 'error');
#line 339
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 339
$memory_5 = "NOMATCHALERT";
#line 339
$memory_5 = [$memory_5,$memory_4];
#line 339
die(dfile::ssave($memory_5));
#line 333
label_3:
#line 333
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 334
$memory_7 = module_checker::check_module($memory_6);
#line 335
$memory_8 = "module_warnings";
#line 335
$memory_8 = c_rt_lib::get_ref_hash($memory_2, $memory_8);
#line 335
$memory_9 = $memory_7->{'warnings'};
#line 335
hash::set_value($memory_8, $memory_0, $memory_9);
#line 335
undef($memory_9);
#line 335
$memory_9 = "module_warnings";
#line 335
c_rt_lib::set_ref_hash($memory_2, $memory_9, $memory_8);
#line 335
undef($memory_9);
#line 335
undef($memory_8);
#line 336
$memory_8 = "module_errors";
#line 336
$memory_8 = c_rt_lib::get_ref_hash($memory_2, $memory_8);
#line 336
$memory_9 = $memory_7->{'errors'};
#line 336
hash::set_value($memory_8, $memory_0, $memory_9);
#line 336
undef($memory_9);
#line 336
$memory_9 = "module_errors";
#line 336
c_rt_lib::set_ref_hash($memory_2, $memory_9, $memory_8);
#line 336
undef($memory_9);
#line 336
undef($memory_8);
#line 337
$memory_9 = $memory_7->{'errors'};
#line 337
$memory_8 = array::len($memory_9);
#line 337
undef($memory_9);
#line 337
$memory_9 = 0;
#line 337
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 337
undef($memory_9);
#line 337
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 337
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 337
if (c_rt_lib::check_true($memory_8)) {goto label_6;}
#line 337
$memory_9 = "";
#line 337
$memory_9 = c_rt_lib::ov_mk_arg('err', $memory_9);
#line 337
undef($memory_0);
#line 337
undef($memory_1);
#line 337
undef($memory_3);
#line 337
undef($memory_4);
#line 337
undef($memory_5);
#line 337
undef($memory_6);
#line 337
undef($memory_7);
#line 337
undef($memory_8);
#line 337
$_[2] = $memory_2;return $memory_9;
#line 337
undef($memory_9);
#line 337
goto label_6;
#line 337
label_6:
#line 337
undef($memory_8);
#line 338
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_6);
#line 338
undef($memory_0);
#line 338
undef($memory_1);
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
#line 338
$_[2] = $memory_2;return $memory_8;
#line 338
undef($memory_8);
#line 338
undef($memory_7);
#line 338
undef($memory_6);
#line 339
goto label_2;
#line 339
label_4:
#line 339
$memory_6 = c_rt_lib::ov_as($memory_4, 'error');
#line 340
$memory_7 = "module_warnings";
#line 340
$memory_7 = c_rt_lib::get_ref_hash($memory_2, $memory_7);
#line 340
$memory_8 = [];
#line 340
hash::set_value($memory_7, $memory_0, $memory_8);
#line 340
undef($memory_8);
#line 340
$memory_8 = "module_warnings";
#line 340
c_rt_lib::set_ref_hash($memory_2, $memory_8, $memory_7);
#line 340
undef($memory_8);
#line 340
undef($memory_7);
#line 341
$memory_7 = "module_errors";
#line 341
$memory_7 = c_rt_lib::get_ref_hash($memory_2, $memory_7);
#line 341
hash::set_value($memory_7, $memory_0, $memory_6);
#line 341
$memory_8 = "module_errors";
#line 341
c_rt_lib::set_ref_hash($memory_2, $memory_8, $memory_7);
#line 341
undef($memory_8);
#line 341
undef($memory_7);
#line 342
$memory_7 = "";
#line 342
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 342
undef($memory_0);
#line 342
undef($memory_1);
#line 342
undef($memory_3);
#line 342
undef($memory_4);
#line 342
undef($memory_5);
#line 342
undef($memory_6);
#line 342
$_[2] = $memory_2;return $memory_7;
#line 342
undef($memory_7);
#line 342
undef($memory_6);
#line 343
goto label_2;
#line 343
label_2:
#line 343
undef($memory_5);
#line 343
undef($memory_3);
#line 343
undef($memory_4);
#line 343
undef($memory_0);
#line 343
undef($memory_1);
#line 343
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub compiler_priv::get_mathematical_func($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];
#line 347
$memory_1 = {};
#line 348
$memory_3 = $memory_0->{'math_fun'};
#line 348
$memory_2 = c_fe_lib::file_to_string($memory_3);
#line 348
undef($memory_3);
#line 348
$memory_3 = c_rt_lib::ov_is($memory_2, 'ok');
#line 348
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 361
$memory_3 = c_rt_lib::ov_is($memory_2, 'err');
#line 361
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 361
$memory_3 = "NOMATCHALERT";
#line 361
$memory_3 = [$memory_3,$memory_2];
#line 361
die(dfile::ssave($memory_3));
#line 348
label_2:
#line 348
$memory_4 = c_rt_lib::ov_as($memory_2, 'ok');
#line 349
$memory_5 = "list of mathematical functions loaded";
#line 349
c_fe_lib::print($memory_5);
#line 349
undef($memory_5);
#line 350
$memory_5 = dfile::try_sload($memory_4);
#line 351
$memory_6 = [];
#line 352
$memory_7 = c_rt_lib::ov_is($memory_5, 'ok');
#line 352
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 354
$memory_7 = c_rt_lib::ov_is($memory_5, 'err');
#line 354
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 354
$memory_7 = "NOMATCHALERT";
#line 354
$memory_7 = [$memory_7,$memory_5];
#line 354
die(dfile::ssave($memory_7));
#line 352
label_5:
#line 352
$memory_8 = c_rt_lib::ov_as($memory_5, 'ok');
#line 353
$memory_6 = $memory_8;
#line 353
undef($memory_8);
#line 354
goto label_4;
#line 354
label_6:
#line 354
$memory_8 = c_rt_lib::ov_as($memory_5, 'err');
#line 355
$memory_9 = "could not parse list of mathematical functions:";
#line 355
c_fe_lib::print($memory_9);
#line 355
undef($memory_9);
#line 356
c_fe_lib::print($memory_8);
#line 356
undef($memory_8);
#line 357
goto label_4;
#line 357
label_4:
#line 357
undef($memory_7);
#line 358
$memory_8 = 0;
#line 358
$memory_9 = 1;
#line 358
$memory_10 = c_rt_lib::array_len($memory_6);
#line 358
label_9:
#line 358
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 358
if (c_rt_lib::check_true($memory_11)) {goto label_7;}
#line 358
$memory_7 = $memory_6->[$memory_8];
#line 359
$memory_12 = 1;
#line 359
hash::set_value($memory_1, $memory_7, $memory_12);
#line 359
undef($memory_12);
#line 360
$memory_8 = $memory_8 + $memory_9;
#line 360
goto label_9;
#line 360
label_7:
#line 360
undef($memory_7);
#line 360
undef($memory_8);
#line 360
undef($memory_9);
#line 360
undef($memory_10);
#line 360
undef($memory_11);
#line 360
undef($memory_5);
#line 360
undef($memory_6);
#line 360
undef($memory_4);
#line 361
goto label_1;
#line 361
label_3:
#line 361
$memory_4 = c_rt_lib::ov_as($memory_2, 'err');
#line 362
$memory_5 = "NOT LOAD: list of mathematical functions";
#line 362
c_fe_lib::print($memory_5);
#line 362
undef($memory_5);
#line 362
undef($memory_4);
#line 363
goto label_1;
#line 363
label_1:
#line 363
undef($memory_2);
#line 363
undef($memory_3);
#line 364
undef($memory_0);
#line 364
return $memory_1;
#line 364
undef($memory_1);
#line 364
undef($memory_0);
#line 364
return;
}

sub compiler_priv::compile_ide($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];
#line 368
$memory_1 = {};
#line 369
$memory_2 = {};
#line 370
$memory_3 = {};
#line 371
$memory_4 = {};
#line 372
$memory_6 = {};
#line 372
$memory_7 = {};
#line 372
$memory_8 = {};
#line 372
$memory_9 = {};
#line 372
$memory_10 = c_rt_lib::ov_mk_none('ok');
#line 372
$memory_5 = {module_errors => $memory_6,module_warnings => $memory_7,type_errors => $memory_8,type_warnings => $memory_9,loop_error => $memory_10,};
#line 372
undef($memory_6);
#line 372
undef($memory_7);
#line 372
undef($memory_8);
#line 372
undef($memory_9);
#line 372
undef($memory_10);
#line 379
$memory_7 = compiler_priv::get_mathematical_func($memory_0);
#line 379
$memory_8 = $memory_0->{'optimization'};
#line 379
$memory_6 = post_processing::init($memory_7, $memory_8);
#line 379
undef($memory_8);
#line 379
undef($memory_7);
#line 380
$memory_7 = {};
#line 381
$memory_9 = $memory_0->{'language'};
#line 381
$memory_8 = compiler_priv::get_generator_state($memory_9);
#line 381
undef($memory_9);
#line 382
label_2:
#line 383
$memory_9 = {};
#line 383
$memory_10 = $memory_9;
#line 383
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'type_errors'} = $memory_10;
#line 383
undef($memory_9);
#line 383
undef($memory_10);
#line 384
$memory_9 = {};
#line 384
$memory_10 = $memory_9;
#line 384
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'type_warnings'} = $memory_10;
#line 384
undef($memory_9);
#line 384
undef($memory_10);
#line 385
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 385
$memory_10 = $memory_9;
#line 385
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'loop_error'} = $memory_10;
#line 385
undef($memory_9);
#line 385
undef($memory_10);
#line 386
$memory_9 = compiler_priv::get_files_to_parse($memory_0);
#line 387
$memory_10 = 0;
#line 388
$memory_13 = c_rt_lib::init_iter($memory_9);
#line 388
label_5:
#line 388
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 388
if (c_rt_lib::check_true($memory_11)) {goto label_3;}
#line 388
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 388
$memory_12 = c_rt_lib::hash_get_value($memory_9, $memory_11);
#line 389
$memory_15 = $memory_12->{'src'};
#line 389
$memory_14 = c_fe_lib::get_modif_time($memory_15);
#line 389
undef($memory_15);
#line 390
$memory_15 = $memory_14;
#line 390
$memory_15 = c_rt_lib::ov_is($memory_15, 'err');
#line 390
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 390
if (c_rt_lib::check_true($memory_15)) {goto label_7;}
#line 390
undef($memory_14);
#line 390
undef($memory_15);
#line 390
goto label_4;
#line 390
goto label_7;
#line 390
label_7:
#line 390
undef($memory_15);
#line 391
$memory_15 = $memory_14;
#line 391
$memory_15 = c_rt_lib::ov_as($memory_15, 'ok');
#line 391
$memory_14 = $memory_15;
#line 391
undef($memory_15);
#line 392
$memory_15 = hash::has_key($memory_1, $memory_11);
#line 392
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 392
if (c_rt_lib::check_true($memory_15)) {goto label_9;}
#line 393
$memory_16 = hash::get_value($memory_1, $memory_11);
#line 394
$memory_17 = c_rt_lib::to_nl($memory_14 > $memory_16);
#line 394
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 394
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 394
if (c_rt_lib::check_true($memory_17)) {goto label_11;}
#line 394
undef($memory_14);
#line 394
undef($memory_15);
#line 394
undef($memory_16);
#line 394
undef($memory_17);
#line 394
goto label_4;
#line 394
goto label_11;
#line 394
label_11:
#line 394
undef($memory_17);
#line 394
undef($memory_16);
#line 395
goto label_9;
#line 395
label_9:
#line 395
undef($memory_15);
#line 396
hash::set_value($memory_1, $memory_11, $memory_14);
#line 397
hash::set_value($memory_4, $memory_11, $memory_12);
#line 398
$memory_15 = 1;
#line 398
$memory_10 = $memory_10 + $memory_15;
#line 398
undef($memory_15);
#line 398
undef($memory_14);
#line 398
label_4:
#line 399
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 399
goto label_5;
#line 399
label_3:
#line 399
undef($memory_11);
#line 399
undef($memory_12);
#line 399
undef($memory_13);
#line 400
$memory_13 = c_rt_lib::init_iter($memory_7);
#line 400
label_14:
#line 400
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 400
if (c_rt_lib::check_true($memory_11)) {goto label_12;}
#line 400
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 400
$memory_12 = c_rt_lib::hash_get_value($memory_7, $memory_11);
#line 401
$memory_14 = hash::has_key($memory_9, $memory_11);
#line 401
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 401
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 401
if (c_rt_lib::check_true($memory_14)) {goto label_16;}
#line 402
$memory_15 = 1;
#line 402
$memory_10 = $memory_10 + $memory_15;
#line 402
undef($memory_15);
#line 403
$memory_15 = "module_errors";
#line 403
$memory_15 = c_rt_lib::get_ref_hash($memory_5, $memory_15);
#line 403
hash::delete($memory_15, $memory_11);
#line 403
$memory_16 = "module_errors";
#line 403
c_rt_lib::set_ref_hash($memory_5, $memory_16, $memory_15);
#line 403
undef($memory_16);
#line 403
undef($memory_15);
#line 404
$memory_15 = "module_warnings";
#line 404
$memory_15 = c_rt_lib::get_ref_hash($memory_5, $memory_15);
#line 404
hash::delete($memory_15, $memory_11);
#line 404
$memory_16 = "module_warnings";
#line 404
c_rt_lib::set_ref_hash($memory_5, $memory_16, $memory_15);
#line 404
undef($memory_16);
#line 404
undef($memory_15);
#line 405
hash::delete($memory_2, $memory_11);
#line 406
hash::delete($memory_1, $memory_11);
#line 407
hash::delete($memory_4, $memory_11);
#line 408
hash::delete($memory_3, $memory_11);
#line 409
post_processing::clear_module_from_state($memory_6, $memory_11);
#line 410
$memory_15 = $memory_0->{'language'};
#line 410
$memory_15 = c_rt_lib::ov_is($memory_15, 'c');
#line 410
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 410
if (c_rt_lib::check_true($memory_15)) {goto label_18;}
#line 411
generator_c::clear_module_from_state($memory_8, $memory_11);
#line 412
goto label_18;
#line 412
label_18:
#line 412
undef($memory_15);
#line 413
goto label_16;
#line 413
label_16:
#line 413
undef($memory_14);
#line 414
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 414
goto label_14;
#line 414
label_12:
#line 414
undef($memory_11);
#line 414
undef($memory_12);
#line 414
undef($memory_13);
#line 415
$memory_7 = $memory_9;
#line 416
$memory_11 = 0;
#line 416
$memory_11 = c_rt_lib::to_nl($memory_10 == $memory_11);
#line 416
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 416
if (c_rt_lib::check_true($memory_11)) {goto label_20;}
#line 417
$memory_12 = 1;
#line 417
c_fe_lib::sleep($memory_12);
#line 417
undef($memory_12);
#line 418
undef($memory_9);
#line 418
undef($memory_10);
#line 418
undef($memory_11);
#line 418
goto label_2;
#line 419
goto label_20;
#line 419
label_20:
#line 419
undef($memory_11);
#line 420
$memory_11 = {};
#line 421
$memory_14 = c_rt_lib::init_iter($memory_4);
#line 421
label_23:
#line 421
$memory_12 = c_rt_lib::is_end_hash($memory_14);
#line 421
if (c_rt_lib::check_true($memory_12)) {goto label_21;}
#line 421
$memory_12 = c_rt_lib::get_key_iter($memory_14);
#line 421
$memory_13 = c_rt_lib::hash_get_value($memory_4, $memory_12);
#line 422
$memory_16 = $memory_13->{'src'};
#line 422
$memory_15 = compiler_priv::parse_module($memory_12, $memory_16, $memory_5);
#line 422
undef($memory_16);
#line 422
$memory_16 = c_rt_lib::ov_is($memory_15, 'ok');
#line 422
if (c_rt_lib::check_true($memory_16)) {goto label_25;}
#line 425
$memory_16 = c_rt_lib::ov_is($memory_15, 'err');
#line 425
if (c_rt_lib::check_true($memory_16)) {goto label_26;}
#line 425
$memory_16 = "NOMATCHALERT";
#line 425
$memory_16 = [$memory_16,$memory_15];
#line 425
die(dfile::ssave($memory_16));
#line 422
label_25:
#line 422
$memory_17 = c_rt_lib::ov_as($memory_15, 'ok');
#line 423
hash::set_value($memory_2, $memory_12, $memory_17);
#line 424
hash::set_value($memory_3, $memory_12, $memory_17);
#line 424
undef($memory_17);
#line 425
goto label_24;
#line 425
label_26:
#line 425
$memory_17 = c_rt_lib::ov_as($memory_15, 'err');
#line 426
hash::set_value($memory_11, $memory_12, $memory_13);
#line 426
undef($memory_17);
#line 427
goto label_24;
#line 427
label_24:
#line 427
undef($memory_15);
#line 427
undef($memory_16);
#line 428
$memory_14 = c_rt_lib::next_iter($memory_14);
#line 428
goto label_23;
#line 428
label_21:
#line 428
undef($memory_12);
#line 428
undef($memory_13);
#line 428
undef($memory_14);
#line 429
$memory_4 = $memory_11;
#line 430
$memory_12 = hash::size($memory_4);
#line 430
$memory_13 = 0;
#line 430
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 430
undef($memory_13);
#line 430
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 430
if (c_rt_lib::check_true($memory_12)) {goto label_28;}
#line 431
compiler_priv::show_and_count_errors($memory_5, $memory_0);
#line 432
$memory_13 = string::lf();
#line 432
$memory_14 = "ERROR: while parsing ";
#line 432
$memory_13 = $memory_13 . $memory_14;
#line 432
undef($memory_14);
#line 432
$memory_14 = hash::size($memory_4);
#line 432
$memory_13 = $memory_13 . $memory_14;
#line 432
undef($memory_14);
#line 432
$memory_14 = " modules";
#line 432
$memory_13 = $memory_13 . $memory_14;
#line 432
undef($memory_14);
#line 432
c_fe_lib::print($memory_13);
#line 432
undef($memory_13);
#line 433
$memory_13 = "############################################################";
#line 433
c_fe_lib::print($memory_13);
#line 433
undef($memory_13);
#line 434
undef($memory_9);
#line 434
undef($memory_10);
#line 434
undef($memory_11);
#line 434
undef($memory_12);
#line 434
goto label_2;
#line 435
goto label_28;
#line 435
label_28:
#line 435
undef($memory_12);
#line 436
$memory_12 = $memory_0->{'deref'};
#line 436
compiler_priv::check_modules($memory_2, $memory_5, $memory_12);
#line 436
undef($memory_12);
#line 437
$memory_12 = compiler_priv::show_and_count_errors($memory_5, $memory_0);
#line 437
$memory_13 = 0;
#line 437
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 437
undef($memory_13);
#line 437
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 437
if (c_rt_lib::check_true($memory_12)) {goto label_30;}
#line 438
$memory_13 = "############################################################";
#line 438
c_fe_lib::print($memory_13);
#line 438
undef($memory_13);
#line 439
undef($memory_9);
#line 439
undef($memory_10);
#line 439
undef($memory_11);
#line 439
undef($memory_12);
#line 439
goto label_2;
#line 440
goto label_30;
#line 440
label_30:
#line 440
undef($memory_12);
#line 441
$memory_12 = $memory_0->{'language'};
#line 441
$memory_12 = c_rt_lib::ov_is($memory_12, 'ast');
#line 441
if (c_rt_lib::check_true($memory_12)) {goto label_33;}
#line 441
$memory_12 = $memory_0->{'language'};
#line 441
$memory_12 = c_rt_lib::ov_is($memory_12, 'nl');
#line 441
label_33:
#line 441
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 441
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 441
if (c_rt_lib::check_true($memory_12)) {goto label_32;}
#line 442
$memory_13 = "search constants...";
#line 442
c_fe_lib::print($memory_13);
#line 442
undef($memory_13);
#line 443
$memory_13 = {};
#line 444
$memory_14 = compiler_priv::translate($memory_3, $memory_6);
#line 445
$memory_16 = $memory_0->{'cache_path'};
#line 445
$memory_17 = $memory_0->{'language'};
#line 445
$memory_15 = compiler_priv::generate_modules_to_files($memory_14, $memory_9, $memory_16, $memory_8, $memory_17);
#line 445
undef($memory_17);
#line 445
undef($memory_16);
#line 446
$memory_16 = c_rt_lib::ov_is($memory_15, 'err');
#line 446
if (c_rt_lib::check_true($memory_16)) {goto label_35;}
#line 450
$memory_16 = c_rt_lib::ov_is($memory_15, 'ok');
#line 450
if (c_rt_lib::check_true($memory_16)) {goto label_36;}
#line 450
$memory_16 = "NOMATCHALERT";
#line 450
$memory_16 = [$memory_16,$memory_15];
#line 450
die(dfile::ssave($memory_16));
#line 446
label_35:
#line 446
$memory_17 = c_rt_lib::ov_as($memory_15, 'err');
#line 447
$memory_20 = c_rt_lib::init_iter($memory_17);
#line 447
label_39:
#line 447
$memory_18 = c_rt_lib::is_end_hash($memory_20);
#line 447
if (c_rt_lib::check_true($memory_18)) {goto label_37;}
#line 447
$memory_18 = c_rt_lib::get_key_iter($memory_20);
#line 447
$memory_19 = c_rt_lib::hash_get_value($memory_17, $memory_18);
#line 448
$memory_21 = hash::get_value($memory_2, $memory_18);
#line 448
hash::set_value($memory_13, $memory_18, $memory_21);
#line 448
undef($memory_21);
#line 449
$memory_20 = c_rt_lib::next_iter($memory_20);
#line 449
goto label_39;
#line 449
label_37:
#line 449
undef($memory_18);
#line 449
undef($memory_19);
#line 449
undef($memory_20);
#line 449
undef($memory_17);
#line 450
goto label_34;
#line 450
label_36:
#line 450
$memory_17 = c_rt_lib::ov_as($memory_15, 'ok');
#line 450
undef($memory_17);
#line 451
goto label_34;
#line 451
label_34:
#line 451
undef($memory_15);
#line 451
undef($memory_16);
#line 452
$memory_3 = $memory_13;
#line 452
undef($memory_13);
#line 452
undef($memory_14);
#line 453
goto label_31;
#line 453
label_32:
#line 454
$memory_13 = {};
#line 455
$memory_16 = c_rt_lib::init_iter($memory_3);
#line 455
label_42:
#line 455
$memory_14 = c_rt_lib::is_end_hash($memory_16);
#line 455
if (c_rt_lib::check_true($memory_14)) {goto label_40;}
#line 455
$memory_14 = c_rt_lib::get_key_iter($memory_16);
#line 455
$memory_15 = c_rt_lib::hash_get_value($memory_3, $memory_14);
#line 456
$memory_17 = "saving file: ";
#line 456
$memory_17 = $memory_17 . $memory_14;
#line 456
c_fe_lib::print($memory_17);
#line 456
undef($memory_17);
#line 457
$memory_18 = hash::get_value($memory_9, $memory_14);
#line 457
$memory_18 = $memory_18->{'dst'};
#line 457
$memory_17 = compiler_priv::save_module_to_file($memory_15, $memory_18);
#line 457
undef($memory_18);
#line 457
$memory_18 = c_rt_lib::ov_is($memory_17, 'err');
#line 457
if (c_rt_lib::check_true($memory_18)) {goto label_44;}
#line 460
$memory_18 = c_rt_lib::ov_is($memory_17, 'ok');
#line 460
if (c_rt_lib::check_true($memory_18)) {goto label_45;}
#line 460
$memory_18 = "NOMATCHALERT";
#line 460
$memory_18 = [$memory_18,$memory_17];
#line 460
die(dfile::ssave($memory_18));
#line 457
label_44:
#line 457
$memory_19 = c_rt_lib::ov_as($memory_17, 'err');
#line 458
$memory_20 = "ERROR: ";
#line 458
$memory_20 = $memory_20 . $memory_19;
#line 458
c_fe_lib::print($memory_20);
#line 458
undef($memory_20);
#line 459
hash::set_value($memory_13, $memory_14, $memory_15);
#line 459
undef($memory_19);
#line 460
goto label_43;
#line 460
label_45:
#line 460
$memory_19 = c_rt_lib::ov_as($memory_17, 'ok');
#line 460
undef($memory_19);
#line 461
goto label_43;
#line 461
label_43:
#line 461
undef($memory_17);
#line 461
undef($memory_18);
#line 462
$memory_16 = c_rt_lib::next_iter($memory_16);
#line 462
goto label_42;
#line 462
label_40:
#line 462
undef($memory_14);
#line 462
undef($memory_15);
#line 462
undef($memory_16);
#line 463
$memory_3 = $memory_13;
#line 463
undef($memory_13);
#line 464
goto label_31;
#line 464
label_31:
#line 464
undef($memory_12);
#line 465
$memory_12 = hash::size($memory_3);
#line 465
$memory_13 = 0;
#line 465
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 465
undef($memory_13);
#line 465
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 465
if (c_rt_lib::check_true($memory_12)) {goto label_47;}
#line 466
$memory_13 = "Can not save ";
#line 466
$memory_14 = hash::size($memory_3);
#line 466
$memory_13 = $memory_13 . $memory_14;
#line 466
undef($memory_14);
#line 466
$memory_14 = " files. ";
#line 466
$memory_13 = $memory_13 . $memory_14;
#line 466
undef($memory_14);
#line 467
$memory_14 = string::lf();
#line 467
$memory_15 = "ERROR: ";
#line 467
$memory_14 = $memory_14 . $memory_15;
#line 467
undef($memory_15);
#line 467
$memory_14 = $memory_14 . $memory_13;
#line 467
c_fe_lib::print($memory_14);
#line 467
undef($memory_14);
#line 467
undef($memory_13);
#line 468
goto label_46;
#line 468
label_47:
#line 469
$memory_13 = $memory_0->{'mode'};
#line 469
$memory_13 = c_rt_lib::ov_is($memory_13, 'idex');
#line 469
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 469
if (c_rt_lib::check_true($memory_13)) {goto label_49;}
#line 469
$memory_14 = $memory_0->{'mode'};
#line 469
$memory_14 = c_rt_lib::ov_as($memory_14, 'idex');
#line 469
c_fe_lib::exec_cmd($memory_14);
#line 469
undef($memory_14);
#line 469
goto label_49;
#line 469
label_49:
#line 469
undef($memory_13);
#line 470
$memory_13 = string::lf();
#line 470
$memory_14 = "OK: compile, check types and save changes without errors";
#line 470
$memory_13 = $memory_13 . $memory_14;
#line 470
undef($memory_14);
#line 470
c_fe_lib::print($memory_13);
#line 470
undef($memory_13);
#line 471
goto label_46;
#line 471
label_46:
#line 471
undef($memory_12);
#line 472
$memory_12 = "############################################################";
#line 472
c_fe_lib::print($memory_12);
#line 472
undef($memory_12);
#line 472
undef($memory_9);
#line 472
undef($memory_10);
#line 472
undef($memory_11);
#line 382
goto label_2;
#line 382
undef($memory_1);
#line 382
undef($memory_2);
#line 382
undef($memory_3);
#line 382
undef($memory_4);
#line 382
undef($memory_5);
#line 382
undef($memory_6);
#line 382
undef($memory_7);
#line 382
undef($memory_8);
#line 382
undef($memory_0);
#line 382
return;
}

sub compiler_priv::compile_strict_file($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];
#line 477
$memory_1 = {};
#line 478
$memory_3 = {};
#line 478
$memory_4 = {};
#line 478
$memory_5 = {};
#line 478
$memory_6 = {};
#line 478
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 478
$memory_2 = {module_errors => $memory_3,module_warnings => $memory_4,type_errors => $memory_5,type_warnings => $memory_6,loop_error => $memory_7,};
#line 478
undef($memory_3);
#line 478
undef($memory_4);
#line 478
undef($memory_5);
#line 478
undef($memory_6);
#line 478
undef($memory_7);
#line 485
$memory_3 = 0;
#line 486
$memory_4 = compiler_priv::get_files_to_parse($memory_0);
#line 487
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 487
label_3:
#line 487
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 487
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 487
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 487
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 488
$memory_9 = $memory_6->{'src'};
#line 488
$memory_8 = compiler_priv::parse_module($memory_5, $memory_9, $memory_2);
#line 488
undef($memory_9);
#line 488
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 488
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 490
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 490
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 490
$memory_9 = "NOMATCHALERT";
#line 490
$memory_9 = [$memory_9,$memory_8];
#line 490
die(dfile::ssave($memory_9));
#line 488
label_5:
#line 488
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 489
hash::set_value($memory_1, $memory_5, $memory_10);
#line 489
undef($memory_10);
#line 490
goto label_4;
#line 490
label_6:
#line 490
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 491
$memory_11 = 1;
#line 491
$memory_3 = $memory_3 + $memory_11;
#line 491
undef($memory_11);
#line 491
undef($memory_10);
#line 492
goto label_4;
#line 492
label_4:
#line 492
undef($memory_8);
#line 492
undef($memory_9);
#line 493
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 493
goto label_3;
#line 493
label_1:
#line 493
undef($memory_5);
#line 493
undef($memory_6);
#line 493
undef($memory_7);
#line 494
$memory_5 = 0;
#line 494
$memory_5 = c_rt_lib::to_nl($memory_3 != $memory_5);
#line 494
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 494
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 495
compiler_priv::show_and_count_errors($memory_2, $memory_0);
#line 496
undef($memory_0);
#line 496
undef($memory_1);
#line 496
undef($memory_2);
#line 496
undef($memory_3);
#line 496
undef($memory_4);
#line 496
undef($memory_5);
#line 496
return;
#line 497
goto label_8;
#line 497
label_8:
#line 497
undef($memory_5);
#line 498
$memory_5 = $memory_0->{'deref'};
#line 498
compiler_priv::check_modules($memory_1, $memory_2, $memory_5);
#line 498
undef($memory_5);
#line 499
$memory_5 = compiler_priv::show_and_count_errors($memory_2, $memory_0);
#line 499
$memory_6 = 0;
#line 499
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 499
undef($memory_6);
#line 499
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 499
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 500
undef($memory_0);
#line 500
undef($memory_1);
#line 500
undef($memory_2);
#line 500
undef($memory_3);
#line 500
undef($memory_4);
#line 500
undef($memory_5);
#line 500
return;
#line 501
goto label_10;
#line 501
label_10:
#line 501
undef($memory_5);
#line 502
$memory_5 = $memory_0->{'language'};
#line 502
$memory_5 = c_rt_lib::ov_is($memory_5, 'ast');
#line 502
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 502
$memory_5 = $memory_0->{'language'};
#line 502
$memory_5 = c_rt_lib::ov_is($memory_5, 'nl');
#line 502
label_13:
#line 502
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 502
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 502
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 503
$memory_7 = $memory_0->{'language'};
#line 503
$memory_6 = compiler_priv::get_generator_state($memory_7);
#line 503
undef($memory_7);
#line 504
$memory_7 = "search constants...";
#line 504
c_fe_lib::print($memory_7);
#line 504
undef($memory_7);
#line 505
$memory_8 = compiler_priv::get_mathematical_func($memory_0);
#line 505
$memory_9 = $memory_0->{'optimization'};
#line 505
$memory_7 = post_processing::init($memory_8, $memory_9);
#line 505
undef($memory_9);
#line 505
undef($memory_8);
#line 506
$memory_8 = compiler_priv::translate($memory_1, $memory_7);
#line 507
$memory_9 = $memory_0->{'cache_path'};
#line 507
$memory_10 = $memory_0->{'language'};
#line 507
compiler_priv::generate_modules_to_files($memory_8, $memory_4, $memory_9, $memory_6, $memory_10);
#line 507
undef($memory_10);
#line 507
undef($memory_9);
#line 507
undef($memory_6);
#line 507
undef($memory_7);
#line 507
undef($memory_8);
#line 508
goto label_11;
#line 508
label_12:
#line 509
$memory_8 = c_rt_lib::init_iter($memory_1);
#line 509
label_16:
#line 509
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 509
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 509
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 509
$memory_7 = c_rt_lib::hash_get_value($memory_1, $memory_6);
#line 510
$memory_9 = "saving file: ";
#line 510
$memory_9 = $memory_9 . $memory_6;
#line 510
c_fe_lib::print($memory_9);
#line 510
undef($memory_9);
#line 511
$memory_10 = hash::get_value($memory_4, $memory_6);
#line 511
$memory_10 = $memory_10->{'dst'};
#line 511
$memory_9 = compiler_priv::save_module_to_file($memory_7, $memory_10);
#line 511
undef($memory_10);
#line 511
$memory_10 = c_rt_lib::ov_is($memory_9, 'err');
#line 511
if (c_rt_lib::check_true($memory_10)) {goto label_18;}
#line 513
$memory_10 = c_rt_lib::ov_is($memory_9, 'ok');
#line 513
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 513
$memory_10 = "NOMATCHALERT";
#line 513
$memory_10 = [$memory_10,$memory_9];
#line 513
die(dfile::ssave($memory_10));
#line 511
label_18:
#line 511
$memory_11 = c_rt_lib::ov_as($memory_9, 'err');
#line 512
$memory_12 = "ERROR: ";
#line 512
$memory_12 = $memory_12 . $memory_11;
#line 512
c_fe_lib::print($memory_12);
#line 512
undef($memory_12);
#line 512
undef($memory_11);
#line 513
goto label_17;
#line 513
label_19:
#line 513
$memory_11 = c_rt_lib::ov_as($memory_9, 'ok');
#line 513
undef($memory_11);
#line 514
goto label_17;
#line 514
label_17:
#line 514
undef($memory_9);
#line 514
undef($memory_10);
#line 515
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 515
goto label_16;
#line 515
label_14:
#line 515
undef($memory_6);
#line 515
undef($memory_7);
#line 515
undef($memory_8);
#line 516
goto label_11;
#line 516
label_11:
#line 516
undef($memory_5);
#line 516
undef($memory_1);
#line 516
undef($memory_2);
#line 516
undef($memory_3);
#line 516
undef($memory_4);
#line 516
undef($memory_0);
#line 516
return;
}

sub compiler_priv::construct_error_message($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 520
$memory_1 = "";
#line 521
$memory_3 = $memory_0->{'module'};
#line 521
$memory_2 = string::length($memory_3);
#line 521
undef($memory_3);
#line 521
$memory_3 = 0;
#line 521
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_3);
#line 521
undef($memory_3);
#line 521
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 521
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 521
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 521
$memory_3 = " mod: ";
#line 521
$memory_4 = $memory_0->{'module'};
#line 521
$memory_3 = $memory_3 . $memory_4;
#line 521
undef($memory_4);
#line 521
$memory_1 = $memory_1 . $memory_3;
#line 521
undef($memory_3);
#line 521
goto label_2;
#line 521
label_2:
#line 521
undef($memory_2);
#line 522
$memory_3 = $memory_0->{'line'};
#line 522
$memory_2 = string::length($memory_3);
#line 522
undef($memory_3);
#line 522
$memory_3 = 0;
#line 522
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_3);
#line 522
undef($memory_3);
#line 522
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 522
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 522
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 522
$memory_3 = " line: ";
#line 522
$memory_4 = $memory_0->{'line'};
#line 522
$memory_3 = $memory_3 . $memory_4;
#line 522
undef($memory_4);
#line 522
$memory_1 = $memory_1 . $memory_3;
#line 522
undef($memory_3);
#line 522
goto label_4;
#line 522
label_4:
#line 522
undef($memory_2);
#line 523
$memory_2 = string::lf();
#line 523
$memory_3 = "     ";
#line 523
$memory_2 = $memory_2 . $memory_3;
#line 523
undef($memory_3);
#line 523
$memory_3 = $memory_0->{'message'};
#line 523
$memory_2 = $memory_2 . $memory_3;
#line 523
undef($memory_3);
#line 523
$memory_1 = $memory_1 . $memory_2;
#line 523
undef($memory_2);
#line 524
undef($memory_0);
#line 524
return $memory_1;
#line 524
undef($memory_1);
#line 524
undef($memory_0);
#line 524
return;
}

sub compiler_priv::show_and_count_errors($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];
#line 528
$memory_2 = 0;
#line 529
$memory_3 = 0;
#line 530
$memory_4 = $memory_0->{'module_warnings'};
#line 530
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 530
label_3:
#line 530
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 530
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 530
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 530
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 531
$memory_8 = "WAR";
#line 532
$memory_9 = $memory_1->{'alarm'};
#line 532
$memory_9 = c_rt_lib::ov_is($memory_9, 'wall');
#line 532
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 532
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 532
$memory_10 = "ERR";
#line 532
$memory_8 = $memory_10;
#line 532
undef($memory_10);
#line 532
goto label_5;
#line 532
label_5:
#line 532
undef($memory_9);
#line 533
$memory_10 = 0;
#line 533
$memory_11 = 1;
#line 533
$memory_12 = c_rt_lib::array_len($memory_6);
#line 533
label_8:
#line 533
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 533
if (c_rt_lib::check_true($memory_13)) {goto label_6;}
#line 533
$memory_9 = $memory_6->[$memory_10];
#line 534
$memory_14 = compiler_priv::construct_error_message($memory_9);
#line 534
$memory_14 = $memory_8 . $memory_14;
#line 534
c_fe_lib::print($memory_14);
#line 534
undef($memory_14);
#line 535
$memory_10 = $memory_10 + $memory_11;
#line 535
goto label_8;
#line 535
label_6:
#line 535
undef($memory_9);
#line 535
undef($memory_10);
#line 535
undef($memory_11);
#line 535
undef($memory_12);
#line 535
undef($memory_13);
#line 536
$memory_9 = array::len($memory_6);
#line 536
$memory_2 = $memory_2 + $memory_9;
#line 536
undef($memory_9);
#line 537
$memory_10 = $memory_0->{'type_warnings'};
#line 537
$memory_9 = hash::has_key($memory_10, $memory_5);
#line 537
undef($memory_10);
#line 537
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 537
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 538
$memory_11 = $memory_0->{'type_warnings'};
#line 538
$memory_10 = hash::get_value($memory_11, $memory_5);
#line 538
undef($memory_11);
#line 539
$memory_12 = 0;
#line 539
$memory_13 = 1;
#line 539
$memory_14 = c_rt_lib::array_len($memory_10);
#line 539
label_13:
#line 539
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 539
if (c_rt_lib::check_true($memory_15)) {goto label_11;}
#line 539
$memory_11 = $memory_10->[$memory_12];
#line 540
$memory_16 = compiler_priv::construct_error_message($memory_11);
#line 540
$memory_16 = $memory_8 . $memory_16;
#line 540
c_fe_lib::print($memory_16);
#line 540
undef($memory_16);
#line 541
$memory_12 = $memory_12 + $memory_13;
#line 541
goto label_13;
#line 541
label_11:
#line 541
undef($memory_11);
#line 541
undef($memory_12);
#line 541
undef($memory_13);
#line 541
undef($memory_14);
#line 541
undef($memory_15);
#line 542
$memory_11 = array::len($memory_10);
#line 542
$memory_2 = $memory_2 + $memory_11;
#line 542
undef($memory_11);
#line 542
undef($memory_10);
#line 543
goto label_10;
#line 543
label_10:
#line 543
undef($memory_9);
#line 544
$memory_9 = "ERR";
#line 544
$memory_8 = $memory_9;
#line 544
undef($memory_9);
#line 545
$memory_10 = $memory_0->{'module_errors'};
#line 545
$memory_9 = hash::get_value($memory_10, $memory_5);
#line 545
undef($memory_10);
#line 546
$memory_11 = 0;
#line 546
$memory_12 = 1;
#line 546
$memory_13 = c_rt_lib::array_len($memory_9);
#line 546
label_16:
#line 546
$memory_14 = c_rt_lib::to_nl($memory_11 >= $memory_13);
#line 546
if (c_rt_lib::check_true($memory_14)) {goto label_14;}
#line 546
$memory_10 = $memory_9->[$memory_11];
#line 547
$memory_15 = "ERR";
#line 547
$memory_16 = compiler_priv::construct_error_message($memory_10);
#line 547
$memory_15 = $memory_15 . $memory_16;
#line 547
undef($memory_16);
#line 547
c_fe_lib::print($memory_15);
#line 547
undef($memory_15);
#line 548
$memory_11 = $memory_11 + $memory_12;
#line 548
goto label_16;
#line 548
label_14:
#line 548
undef($memory_10);
#line 548
undef($memory_11);
#line 548
undef($memory_12);
#line 548
undef($memory_13);
#line 548
undef($memory_14);
#line 549
$memory_10 = array::len($memory_9);
#line 549
$memory_3 = $memory_3 + $memory_10;
#line 549
undef($memory_10);
#line 550
$memory_11 = $memory_0->{'type_errors'};
#line 550
$memory_10 = hash::has_key($memory_11, $memory_5);
#line 550
undef($memory_11);
#line 550
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 550
if (c_rt_lib::check_true($memory_10)) {goto label_18;}
#line 551
$memory_12 = $memory_0->{'type_errors'};
#line 551
$memory_11 = hash::get_value($memory_12, $memory_5);
#line 551
undef($memory_12);
#line 552
$memory_13 = 0;
#line 552
$memory_14 = 1;
#line 552
$memory_15 = c_rt_lib::array_len($memory_11);
#line 552
label_21:
#line 552
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 552
if (c_rt_lib::check_true($memory_16)) {goto label_19;}
#line 552
$memory_12 = $memory_11->[$memory_13];
#line 553
$memory_17 = "ERR";
#line 553
$memory_18 = compiler_priv::construct_error_message($memory_12);
#line 553
$memory_17 = $memory_17 . $memory_18;
#line 553
undef($memory_18);
#line 553
c_fe_lib::print($memory_17);
#line 553
undef($memory_17);
#line 554
$memory_13 = $memory_13 + $memory_14;
#line 554
goto label_21;
#line 554
label_19:
#line 554
undef($memory_12);
#line 554
undef($memory_13);
#line 554
undef($memory_14);
#line 554
undef($memory_15);
#line 554
undef($memory_16);
#line 555
$memory_12 = array::len($memory_11);
#line 555
$memory_3 = $memory_3 + $memory_12;
#line 555
undef($memory_12);
#line 555
undef($memory_11);
#line 556
goto label_18;
#line 556
label_18:
#line 556
undef($memory_10);
#line 556
undef($memory_8);
#line 556
undef($memory_9);
#line 557
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 557
goto label_3;
#line 557
label_1:
#line 557
undef($memory_4);
#line 557
undef($memory_5);
#line 557
undef($memory_6);
#line 557
undef($memory_7);
#line 558
$memory_4 = $memory_0->{'loop_error'};
#line 558
$memory_5 = c_rt_lib::ov_is($memory_4, 'loop');
#line 558
if (c_rt_lib::check_true($memory_5)) {goto label_23;}
#line 565
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 565
if (c_rt_lib::check_true($memory_5)) {goto label_24;}
#line 565
$memory_5 = "NOMATCHALERT";
#line 565
$memory_5 = [$memory_5,$memory_4];
#line 565
die(dfile::ssave($memory_5));
#line 558
label_23:
#line 558
$memory_6 = c_rt_lib::ov_as($memory_4, 'loop');
#line 559
$memory_7 = "";
#line 560
$memory_9 = 0;
#line 560
$memory_10 = 1;
#line 560
$memory_11 = c_rt_lib::array_len($memory_6);
#line 560
label_27:
#line 560
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 560
if (c_rt_lib::check_true($memory_12)) {goto label_25;}
#line 560
$memory_8 = $memory_6->[$memory_9];
#line 561
$memory_13 = " -> ";
#line 561
$memory_13 = $memory_8 . $memory_13;
#line 561
$memory_7 = $memory_7 . $memory_13;
#line 561
undef($memory_13);
#line 562
$memory_9 = $memory_9 + $memory_10;
#line 562
goto label_27;
#line 562
label_25:
#line 562
undef($memory_8);
#line 562
undef($memory_9);
#line 562
undef($memory_10);
#line 562
undef($memory_11);
#line 562
undef($memory_12);
#line 563
$memory_8 = "ERR Loop found in module imports: ";
#line 563
$memory_8 = $memory_8 . $memory_7;
#line 563
$memory_9 = ". ";
#line 563
$memory_8 = $memory_8 . $memory_9;
#line 563
undef($memory_9);
#line 563
c_fe_lib::print($memory_8);
#line 563
undef($memory_8);
#line 564
$memory_8 = 1;
#line 564
$memory_3 = $memory_3 + $memory_8;
#line 564
undef($memory_8);
#line 564
undef($memory_7);
#line 564
undef($memory_6);
#line 565
goto label_22;
#line 565
label_24:
#line 566
goto label_22;
#line 566
label_22:
#line 566
undef($memory_4);
#line 566
undef($memory_5);
#line 567
$memory_4 = $memory_1->{'alarm'};
#line 567
$memory_4 = c_rt_lib::ov_is($memory_4, 'wall');
#line 567
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 567
if (c_rt_lib::check_true($memory_4)) {goto label_29;}
#line 568
$memory_3 = $memory_3 + $memory_2;
#line 569
$memory_5 = 0;
#line 569
$memory_2 = $memory_5;
#line 569
undef($memory_5);
#line 570
goto label_29;
#line 570
label_29:
#line 570
undef($memory_4);
#line 571
$memory_4 = "ERR: ";
#line 571
$memory_4 = $memory_4 . $memory_3;
#line 571
$memory_5 = " WAR: ";
#line 571
$memory_4 = $memory_4 . $memory_5;
#line 571
undef($memory_5);
#line 571
$memory_4 = $memory_4 . $memory_2;
#line 571
c_fe_lib::print($memory_4);
#line 571
undef($memory_4);
#line 572
undef($memory_0);
#line 572
undef($memory_1);
#line 572
undef($memory_2);
#line 572
return $memory_3;
#line 572
undef($memory_2);
#line 572
undef($memory_3);
#line 572
undef($memory_0);
#line 572
undef($memory_1);
#line 572
return;
}

sub compiler_priv::translate($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 576
$memory_2 = {};
#line 577
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 577
label_3:
#line 577
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 577
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 577
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 577
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 578
$memory_6 = translator::translate($memory_4);
#line 579
hash::set_value($memory_2, $memory_3, $memory_6);
#line 579
undef($memory_6);
#line 580
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 580
goto label_3;
#line 580
label_1:
#line 580
undef($memory_3);
#line 580
undef($memory_4);
#line 580
undef($memory_5);
#line 581
post_processing::find($memory_1, $memory_2);
#line 582
undef($memory_0);
#line 582
$_[1] = $memory_1;return $memory_2;
#line 582
undef($memory_2);
#line 582
undef($memory_0);
#line 582
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub compiler_priv::check_modules($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];
#line 587
$memory_3 = "type checking...";
#line 587
c_fe_lib::print($memory_3);
#line 587
undef($memory_3);
#line 588
$memory_3 = type_checker::check_modules($memory_0, $memory_0);
#line 589
$memory_5 = $memory_3->{'errors'};
#line 589
$memory_4 = array::len($memory_5);
#line 589
undef($memory_5);
#line 590
$memory_5 = $memory_3->{'errors'};
#line 590
$memory_7 = 0;
#line 590
$memory_8 = 1;
#line 590
$memory_9 = c_rt_lib::array_len($memory_5);
#line 590
label_3:
#line 590
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 590
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 590
$memory_6 = $memory_5->[$memory_7];
#line 591
$memory_11 = [];
#line 592
$memory_13 = $memory_1->{'type_errors'};
#line 592
$memory_14 = $memory_6->{'module'};
#line 592
$memory_12 = hash::has_key($memory_13, $memory_14);
#line 592
undef($memory_14);
#line 592
undef($memory_13);
#line 592
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 592
if (c_rt_lib::check_true($memory_12)) {goto label_5;}
#line 593
$memory_14 = $memory_1->{'type_errors'};
#line 593
$memory_15 = $memory_6->{'module'};
#line 593
$memory_13 = hash::get_value($memory_14, $memory_15);
#line 593
undef($memory_15);
#line 593
undef($memory_14);
#line 593
$memory_11 = $memory_13;
#line 593
undef($memory_13);
#line 594
goto label_5;
#line 594
label_5:
#line 594
undef($memory_12);
#line 595
array::push($memory_11, $memory_6);
#line 596
$memory_12 = "type_errors";
#line 596
$memory_12 = c_rt_lib::get_ref_hash($memory_1, $memory_12);
#line 596
$memory_13 = $memory_6->{'module'};
#line 596
hash::set_value($memory_12, $memory_13, $memory_11);
#line 596
undef($memory_13);
#line 596
$memory_13 = "type_errors";
#line 596
c_rt_lib::set_ref_hash($memory_1, $memory_13, $memory_12);
#line 596
undef($memory_13);
#line 596
undef($memory_12);
#line 596
undef($memory_11);
#line 597
$memory_7 = $memory_7 + $memory_8;
#line 597
goto label_3;
#line 597
label_1:
#line 597
undef($memory_5);
#line 597
undef($memory_6);
#line 597
undef($memory_7);
#line 597
undef($memory_8);
#line 597
undef($memory_9);
#line 597
undef($memory_10);
#line 598
$memory_5 = $memory_3->{'warnings'};
#line 598
$memory_7 = 0;
#line 598
$memory_8 = 1;
#line 598
$memory_9 = c_rt_lib::array_len($memory_5);
#line 598
label_8:
#line 598
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 598
if (c_rt_lib::check_true($memory_10)) {goto label_6;}
#line 598
$memory_6 = $memory_5->[$memory_7];
#line 599
$memory_11 = [];
#line 600
$memory_13 = $memory_1->{'type_warnings'};
#line 600
$memory_14 = $memory_6->{'module'};
#line 600
$memory_12 = hash::has_key($memory_13, $memory_14);
#line 600
undef($memory_14);
#line 600
undef($memory_13);
#line 600
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 600
if (c_rt_lib::check_true($memory_12)) {goto label_10;}
#line 601
$memory_14 = $memory_1->{'type_warnings'};
#line 601
$memory_15 = $memory_6->{'module'};
#line 601
$memory_13 = hash::get_value($memory_14, $memory_15);
#line 601
undef($memory_15);
#line 601
undef($memory_14);
#line 601
$memory_11 = $memory_13;
#line 601
undef($memory_13);
#line 602
goto label_10;
#line 602
label_10:
#line 602
undef($memory_12);
#line 603
array::push($memory_11, $memory_6);
#line 604
$memory_12 = "type_warnings";
#line 604
$memory_12 = c_rt_lib::get_ref_hash($memory_1, $memory_12);
#line 604
$memory_13 = $memory_6->{'module'};
#line 604
hash::set_value($memory_12, $memory_13, $memory_11);
#line 604
undef($memory_13);
#line 604
$memory_13 = "type_warnings";
#line 604
c_rt_lib::set_ref_hash($memory_1, $memory_13, $memory_12);
#line 604
undef($memory_13);
#line 604
undef($memory_12);
#line 604
undef($memory_11);
#line 605
$memory_7 = $memory_7 + $memory_8;
#line 605
goto label_8;
#line 605
label_6:
#line 605
undef($memory_5);
#line 605
undef($memory_6);
#line 605
undef($memory_7);
#line 605
undef($memory_8);
#line 605
undef($memory_9);
#line 605
undef($memory_10);
#line 606
$memory_5 = 0;
#line 606
$memory_5 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 606
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 606
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 606
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 606
$memory_6 = "Found ";
#line 606
$memory_6 = $memory_6 . $memory_4;
#line 606
$memory_7 = " errors of types. ";
#line 606
$memory_6 = $memory_6 . $memory_7;
#line 606
undef($memory_7);
#line 606
c_fe_lib::print($memory_6);
#line 606
undef($memory_6);
#line 606
goto label_12;
#line 606
label_12:
#line 606
undef($memory_5);
#line 607
$memory_5 = {};
#line 608
$memory_8 = c_rt_lib::init_iter($memory_0);
#line 608
label_15:
#line 608
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 608
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 608
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 608
$memory_7 = c_rt_lib::hash_get_value($memory_0, $memory_6);
#line 609
$memory_9 = [];
#line 610
$memory_10 = $memory_7->{'import'};
#line 610
$memory_12 = 0;
#line 610
$memory_13 = 1;
#line 610
$memory_14 = c_rt_lib::array_len($memory_10);
#line 610
label_18:
#line 610
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 610
if (c_rt_lib::check_true($memory_15)) {goto label_16;}
#line 610
$memory_11 = $memory_10->[$memory_12];
#line 611
$memory_16 = $memory_11->{'name'};
#line 611
array::push($memory_9, $memory_16);
#line 611
undef($memory_16);
#line 612
$memory_12 = $memory_12 + $memory_13;
#line 612
goto label_18;
#line 612
label_16:
#line 612
undef($memory_10);
#line 612
undef($memory_11);
#line 612
undef($memory_12);
#line 612
undef($memory_13);
#line 612
undef($memory_14);
#line 612
undef($memory_15);
#line 613
hash::set_value($memory_5, $memory_6, $memory_9);
#line 613
undef($memory_9);
#line 614
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 614
goto label_15;
#line 614
label_13:
#line 614
undef($memory_6);
#line 614
undef($memory_7);
#line 614
undef($memory_8);
#line 615
$memory_6 = module_checker::search_loops($memory_5);
#line 615
$memory_7 = $memory_6;
#line 615
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_error'} = $memory_7;
#line 615
undef($memory_6);
#line 615
undef($memory_7);
#line 616
$memory_6 = $memory_2;
#line 616
$memory_6 = c_rt_lib::ov_is($memory_6, 'yes');
#line 616
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 616
if (c_rt_lib::check_true($memory_6)) {goto label_20;}
#line 617
$memory_7 = "deleted types: ";
#line 617
$memory_9 = $memory_3->{'deref'};
#line 617
$memory_9 = $memory_9->{'delete'};
#line 617
$memory_8 = array::len($memory_9);
#line 617
undef($memory_9);
#line 617
$memory_7 = $memory_7 . $memory_8;
#line 617
undef($memory_8);
#line 617
c_fe_lib::print($memory_7);
#line 617
undef($memory_7);
#line 618
$memory_7 = "created types: ";
#line 618
$memory_9 = $memory_3->{'deref'};
#line 618
$memory_9 = $memory_9->{'create'};
#line 618
$memory_8 = array::len($memory_9);
#line 618
undef($memory_9);
#line 618
$memory_7 = $memory_7 . $memory_8;
#line 618
undef($memory_8);
#line 618
c_fe_lib::print($memory_7);
#line 618
undef($memory_7);
#line 619
$memory_7 = $memory_2;
#line 619
$memory_7 = c_rt_lib::ov_as($memory_7, 'yes');
#line 619
$memory_9 = $memory_3->{'deref'};
#line 619
$memory_8 = dfile::ssave($memory_9);
#line 619
undef($memory_9);
#line 619
c_fe_lib::string_to_file($memory_7, $memory_8);
#line 619
undef($memory_8);
#line 619
undef($memory_7);
#line 620
goto label_20;
#line 620
label_20:
#line 620
undef($memory_6);
#line 620
undef($memory_3);
#line 620
undef($memory_4);
#line 620
undef($memory_5);
#line 620
undef($memory_0);
#line 620
undef($memory_2);
#line 620
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub compiler_priv::try_save_file($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 624
$memory_3 = c_fe_lib::string_to_file($memory_1, $memory_0);
#line 624
$memory_4 = c_rt_lib::ov_is($memory_3, 'ok');
#line 624
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 625
$memory_4 = c_rt_lib::ov_is($memory_3, 'err');
#line 625
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 625
$memory_4 = "NOMATCHALERT";
#line 625
$memory_4 = [$memory_4,$memory_3];
#line 625
die(dfile::ssave($memory_4));
#line 624
label_2:
#line 624
$memory_5 = c_rt_lib::ov_as($memory_3, 'ok');
#line 624
undef($memory_5);
#line 625
goto label_1;
#line 625
label_3:
#line 625
$memory_5 = c_rt_lib::ov_as($memory_3, 'err');
#line 626
$memory_6 = "ERROR: ";
#line 626
$memory_6 = $memory_6 . $memory_5;
#line 626
c_fe_lib::print($memory_6);
#line 626
undef($memory_6);
#line 627
$memory_6 = c_rt_lib::to_nl(1);
#line 627
$memory_2 = $memory_6;
#line 627
undef($memory_6);
#line 627
undef($memory_5);
#line 628
goto label_1;
#line 628
label_1:
#line 628
undef($memory_3);
#line 628
undef($memory_4);
#line 628
undef($memory_0);
#line 628
undef($memory_1);
#line 628
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub compiler_priv::generate_modules_to_files($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];
#line 636
$memory_5 = {};
#line 637
$memory_6 = c_rt_lib::ov_is($memory_4, 'nla');
#line 637
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 645
$memory_6 = c_rt_lib::ov_is($memory_4, 'c');
#line 645
if (c_rt_lib::check_true($memory_6)) {goto label_3;}
#line 659
$memory_6 = c_rt_lib::ov_is($memory_4, 'pm');
#line 659
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 668
$memory_6 = c_rt_lib::ov_is($memory_4, 'js');
#line 668
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 677
$memory_6 = c_rt_lib::ov_is($memory_4, 'java');
#line 677
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 686
$memory_6 = c_rt_lib::ov_is($memory_4, 'nl');
#line 686
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 688
$memory_6 = c_rt_lib::ov_is($memory_4, 'ast');
#line 688
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 688
$memory_6 = "NOMATCHALERT";
#line 688
$memory_6 = [$memory_6,$memory_4];
#line 688
die(dfile::ssave($memory_6));
#line 637
label_2:
#line 638
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 638
label_11:
#line 638
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 638
if (c_rt_lib::check_true($memory_7)) {goto label_9;}
#line 638
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 638
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 639
$memory_10 = c_rt_lib::to_nl(0);
#line 640
$memory_11 = hash::get_value($memory_1, $memory_7);
#line 640
$memory_11 = $memory_11->{'dst'};
#line 640
$memory_11 = c_rt_lib::ov_as($memory_11, 'nla');
#line 641
$memory_12 = "saving file: ";
#line 641
$memory_12 = $memory_12 . $memory_7;
#line 641
c_fe_lib::print($memory_12);
#line 641
undef($memory_12);
#line 642
$memory_12 = dfile::ssave($memory_8);
#line 642
compiler_priv::try_save_file($memory_12, $memory_11, $memory_10);
#line 642
undef($memory_12);
#line 643
$memory_12 = $memory_10;
#line 643
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 643
if (c_rt_lib::check_true($memory_12)) {goto label_13;}
#line 643
$memory_13 = "";
#line 643
hash::set_value($memory_5, $memory_7, $memory_13);
#line 643
undef($memory_13);
#line 643
goto label_13;
#line 643
label_13:
#line 643
undef($memory_12);
#line 643
undef($memory_10);
#line 643
undef($memory_11);
#line 644
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 644
goto label_11;
#line 644
label_9:
#line 644
undef($memory_7);
#line 644
undef($memory_8);
#line 644
undef($memory_9);
#line 645
goto label_1;
#line 645
label_3:
#line 646
$memory_7 = generator_c::generate($memory_0, $memory_3);
#line 647
$memory_8 = c_rt_lib::to_nl(0);
#line 648
$memory_9 = $memory_7->{'modules'};
#line 648
$memory_12 = c_rt_lib::init_iter($memory_9);
#line 648
label_16:
#line 648
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 648
if (c_rt_lib::check_true($memory_10)) {goto label_14;}
#line 648
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 648
$memory_11 = c_rt_lib::hash_get_value($memory_9, $memory_10);
#line 649
$memory_13 = c_rt_lib::to_nl(0);
#line 649
$memory_8 = $memory_13;
#line 649
undef($memory_13);
#line 650
$memory_13 = hash::get_value($memory_1, $memory_10);
#line 650
$memory_13 = $memory_13->{'dst'};
#line 650
$memory_13 = c_rt_lib::ov_as($memory_13, 'c');
#line 651
$memory_14 = "saving file: ";
#line 651
$memory_14 = $memory_14 . $memory_10;
#line 651
c_fe_lib::print($memory_14);
#line 651
undef($memory_14);
#line 652
$memory_14 = $memory_11->{'c'};
#line 652
$memory_15 = $memory_13->{'c'};
#line 652
compiler_priv::try_save_file($memory_14, $memory_15, $memory_8);
#line 652
undef($memory_15);
#line 652
undef($memory_14);
#line 653
$memory_14 = $memory_11->{'h'};
#line 653
$memory_15 = $memory_13->{'h'};
#line 653
compiler_priv::try_save_file($memory_14, $memory_15, $memory_8);
#line 653
undef($memory_15);
#line 653
undef($memory_14);
#line 654
$memory_14 = $memory_8;
#line 654
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 654
if (c_rt_lib::check_true($memory_14)) {goto label_18;}
#line 654
$memory_15 = "";
#line 654
hash::set_value($memory_5, $memory_10, $memory_15);
#line 654
undef($memory_15);
#line 654
goto label_18;
#line 654
label_18:
#line 654
undef($memory_14);
#line 654
undef($memory_13);
#line 655
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 655
goto label_16;
#line 655
label_14:
#line 655
undef($memory_9);
#line 655
undef($memory_10);
#line 655
undef($memory_11);
#line 655
undef($memory_12);
#line 656
$memory_9 = "saving global const file";
#line 656
c_fe_lib::print($memory_9);
#line 656
undef($memory_9);
#line 657
$memory_9 = $memory_7->{'global_const'};
#line 657
$memory_9 = $memory_9->{'c'};
#line 657
$memory_10 = "c_global_const.c";
#line 657
$memory_10 = $memory_2 . $memory_10;
#line 657
compiler_priv::try_save_file($memory_9, $memory_10, $memory_8);
#line 657
undef($memory_10);
#line 657
undef($memory_9);
#line 658
$memory_9 = $memory_7->{'global_const'};
#line 658
$memory_9 = $memory_9->{'h'};
#line 658
$memory_10 = "c_global_const.h";
#line 658
$memory_10 = $memory_2 . $memory_10;
#line 658
compiler_priv::try_save_file($memory_9, $memory_10, $memory_8);
#line 658
undef($memory_10);
#line 658
undef($memory_9);
#line 658
undef($memory_7);
#line 658
undef($memory_8);
#line 659
goto label_1;
#line 659
label_4:
#line 660
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 660
label_21:
#line 660
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 660
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 660
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 660
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 661
$memory_10 = c_rt_lib::to_nl(0);
#line 662
$memory_11 = generator_pm::generate($memory_8);
#line 663
$memory_12 = hash::get_value($memory_1, $memory_7);
#line 663
$memory_12 = $memory_12->{'dst'};
#line 663
$memory_12 = c_rt_lib::ov_as($memory_12, 'pm');
#line 664
$memory_13 = "saving file: ";
#line 664
$memory_13 = $memory_13 . $memory_7;
#line 664
c_fe_lib::print($memory_13);
#line 664
undef($memory_13);
#line 665
compiler_priv::try_save_file($memory_11, $memory_12, $memory_10);
#line 666
$memory_13 = $memory_10;
#line 666
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 666
if (c_rt_lib::check_true($memory_13)) {goto label_23;}
#line 666
$memory_14 = "";
#line 666
hash::set_value($memory_5, $memory_7, $memory_14);
#line 666
undef($memory_14);
#line 666
goto label_23;
#line 666
label_23:
#line 666
undef($memory_13);
#line 666
undef($memory_10);
#line 666
undef($memory_11);
#line 666
undef($memory_12);
#line 667
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 667
goto label_21;
#line 667
label_19:
#line 667
undef($memory_7);
#line 667
undef($memory_8);
#line 667
undef($memory_9);
#line 668
goto label_1;
#line 668
label_5:
#line 669
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 669
label_26:
#line 669
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 669
if (c_rt_lib::check_true($memory_7)) {goto label_24;}
#line 669
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 669
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 670
$memory_10 = c_rt_lib::to_nl(0);
#line 671
$memory_11 = generator_js::generate($memory_8);
#line 672
$memory_12 = hash::get_value($memory_1, $memory_7);
#line 672
$memory_12 = $memory_12->{'dst'};
#line 672
$memory_12 = c_rt_lib::ov_as($memory_12, 'js');
#line 673
$memory_13 = "saving file: ";
#line 673
$memory_13 = $memory_13 . $memory_7;
#line 673
c_fe_lib::print($memory_13);
#line 673
undef($memory_13);
#line 674
compiler_priv::try_save_file($memory_11, $memory_12, $memory_10);
#line 675
$memory_13 = $memory_10;
#line 675
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 675
if (c_rt_lib::check_true($memory_13)) {goto label_28;}
#line 675
$memory_14 = "";
#line 675
hash::set_value($memory_5, $memory_7, $memory_14);
#line 675
undef($memory_14);
#line 675
goto label_28;
#line 675
label_28:
#line 675
undef($memory_13);
#line 675
undef($memory_10);
#line 675
undef($memory_11);
#line 675
undef($memory_12);
#line 676
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 676
goto label_26;
#line 676
label_24:
#line 676
undef($memory_7);
#line 676
undef($memory_8);
#line 676
undef($memory_9);
#line 677
goto label_1;
#line 677
label_6:
#line 678
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 678
label_31:
#line 678
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 678
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
#line 678
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 678
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 679
$memory_10 = c_rt_lib::to_nl(0);
#line 680
$memory_11 = generator_java::generate($memory_8);
#line 681
$memory_12 = hash::get_value($memory_1, $memory_7);
#line 681
$memory_12 = $memory_12->{'dst'};
#line 681
$memory_12 = c_rt_lib::ov_as($memory_12, 'java');
#line 682
$memory_13 = "saving file: ";
#line 682
$memory_13 = $memory_13 . $memory_7;
#line 682
c_fe_lib::print($memory_13);
#line 682
undef($memory_13);
#line 683
compiler_priv::try_save_file($memory_11, $memory_12, $memory_10);
#line 684
$memory_13 = $memory_10;
#line 684
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 684
if (c_rt_lib::check_true($memory_13)) {goto label_33;}
#line 684
$memory_14 = "";
#line 684
hash::set_value($memory_5, $memory_7, $memory_14);
#line 684
undef($memory_14);
#line 684
goto label_33;
#line 684
label_33:
#line 684
undef($memory_13);
#line 684
undef($memory_10);
#line 684
undef($memory_11);
#line 684
undef($memory_12);
#line 685
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 685
goto label_31;
#line 685
label_29:
#line 685
undef($memory_7);
#line 685
undef($memory_8);
#line 685
undef($memory_9);
#line 686
goto label_1;
#line 686
label_7:
#line 687
$memory_7 = [];
#line 687
die(dfile::ssave($memory_7));
#line 687
undef($memory_7);
#line 688
goto label_1;
#line 688
label_8:
#line 689
$memory_7 = [];
#line 689
die(dfile::ssave($memory_7));
#line 689
undef($memory_7);
#line 690
goto label_1;
#line 690
label_1:
#line 690
undef($memory_6);
#line 691
$memory_6 = hash::size($memory_5);
#line 691
$memory_7 = 0;
#line 691
$memory_6 = c_rt_lib::to_nl($memory_6 > $memory_7);
#line 691
undef($memory_7);
#line 691
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 691
if (c_rt_lib::check_true($memory_6)) {goto label_35;}
#line 692
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 692
undef($memory_0);
#line 692
undef($memory_1);
#line 692
undef($memory_2);
#line 692
undef($memory_4);
#line 692
undef($memory_5);
#line 692
undef($memory_6);
#line 692
$_[3] = $memory_3;return $memory_7;
#line 692
undef($memory_7);
#line 693
goto label_34;
#line 693
label_35:
#line 694
$memory_7 = "";
#line 694
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_7);
#line 694
undef($memory_0);
#line 694
undef($memory_1);
#line 694
undef($memory_2);
#line 694
undef($memory_4);
#line 694
undef($memory_5);
#line 694
undef($memory_6);
#line 694
$_[3] = $memory_3;return $memory_7;
#line 694
undef($memory_7);
#line 695
goto label_34;
#line 695
label_34:
#line 695
undef($memory_6);
#line 695
undef($memory_5);
#line 695
undef($memory_0);
#line 695
undef($memory_1);
#line 695
undef($memory_2);
#line 695
undef($memory_4);
#line 695
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub compiler_priv::save_module_to_file($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 699
$memory_2 = c_rt_lib::ov_is($memory_1, 'nla');
#line 699
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 701
$memory_2 = c_rt_lib::ov_is($memory_1, 'c');
#line 701
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 703
$memory_2 = c_rt_lib::ov_is($memory_1, 'pm');
#line 703
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 705
$memory_2 = c_rt_lib::ov_is($memory_1, 'js');
#line 705
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 707
$memory_2 = c_rt_lib::ov_is($memory_1, 'java');
#line 707
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 709
$memory_2 = c_rt_lib::ov_is($memory_1, 'nl');
#line 709
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 711
$memory_2 = c_rt_lib::ov_is($memory_1, 'ast');
#line 711
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 713
$memory_2 = c_rt_lib::ov_is($memory_1, 'none');
#line 713
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 713
$memory_2 = "NOMATCHALERT";
#line 713
$memory_2 = [$memory_2,$memory_1];
#line 713
die(dfile::ssave($memory_2));
#line 699
label_2:
#line 699
$memory_3 = c_rt_lib::ov_as($memory_1, 'nla');
#line 700
$memory_4 = [];
#line 700
die(dfile::ssave($memory_4));
#line 700
undef($memory_4);
#line 700
undef($memory_3);
#line 701
goto label_1;
#line 701
label_3:
#line 701
$memory_3 = c_rt_lib::ov_as($memory_1, 'c');
#line 702
$memory_4 = [];
#line 702
die(dfile::ssave($memory_4));
#line 702
undef($memory_4);
#line 702
undef($memory_3);
#line 703
goto label_1;
#line 703
label_4:
#line 703
$memory_3 = c_rt_lib::ov_as($memory_1, 'pm');
#line 704
$memory_4 = [];
#line 704
die(dfile::ssave($memory_4));
#line 704
undef($memory_4);
#line 704
undef($memory_3);
#line 705
goto label_1;
#line 705
label_5:
#line 705
$memory_3 = c_rt_lib::ov_as($memory_1, 'js');
#line 706
$memory_4 = [];
#line 706
die(dfile::ssave($memory_4));
#line 706
undef($memory_4);
#line 706
undef($memory_3);
#line 707
goto label_1;
#line 707
label_6:
#line 707
$memory_3 = c_rt_lib::ov_as($memory_1, 'java');
#line 708
$memory_4 = [];
#line 708
die(dfile::ssave($memory_4));
#line 708
undef($memory_4);
#line 708
undef($memory_3);
#line 709
goto label_1;
#line 709
label_7:
#line 709
$memory_3 = c_rt_lib::ov_as($memory_1, 'nl');
#line 710
$memory_5 = {
	module => "compiler",
	name => "file_t",
};
#line 710
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 710
$memory_7 = pretty_printer::print_module_to_str($memory_0);
#line 710
$memory_6 = c_fe_lib::string_to_file($memory_3, $memory_7);
#line 710
undef($memory_7);
#line 710
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 710
undef($memory_6);
#line 710
undef($memory_5);
#line 710
undef($memory_0);
#line 710
undef($memory_1);
#line 710
undef($memory_2);
#line 710
undef($memory_3);
#line 710
return $memory_4;
#line 710
undef($memory_4);
#line 710
undef($memory_3);
#line 711
goto label_1;
#line 711
label_8:
#line 711
$memory_3 = c_rt_lib::ov_as($memory_1, 'ast');
#line 712
$memory_5 = {
	module => "compiler",
	name => "file_t",
};
#line 712
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 712
$memory_7 = dfile::ssave($memory_0);
#line 712
$memory_6 = c_fe_lib::string_to_file($memory_3, $memory_7);
#line 712
undef($memory_7);
#line 712
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 712
undef($memory_6);
#line 712
undef($memory_5);
#line 712
undef($memory_0);
#line 712
undef($memory_1);
#line 712
undef($memory_2);
#line 712
undef($memory_3);
#line 712
return $memory_4;
#line 712
undef($memory_4);
#line 712
undef($memory_3);
#line 713
goto label_1;
#line 713
label_9:
#line 714
$memory_3 = [];
#line 714
die(dfile::ssave($memory_3));
#line 714
undef($memory_3);
#line 715
goto label_1;
#line 715
label_1:
#line 715
undef($memory_2);
#line 715
undef($memory_0);
#line 715
undef($memory_1);
#line 715
return;
}

sub compiler_priv::get_dir($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 719
$memory_1 = string::length($memory_0);
#line 719
$memory_2 = 1;
#line 719
$memory_1 = $memory_1 - $memory_2;
#line 719
undef($memory_2);
#line 720
$memory_3 = 1;
#line 720
$memory_2 = string::substr($memory_0, $memory_1, $memory_3);
#line 720
undef($memory_3);
#line 720
$memory_3 = "/";
#line 720
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 720
undef($memory_3);
#line 720
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 720
$memory_3 = 1;
#line 720
$memory_2 = string::substr($memory_0, $memory_1, $memory_3);
#line 720
undef($memory_3);
#line 720
$memory_3 = "\\";
#line 720
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 720
undef($memory_3);
#line 720
label_3:
#line 720
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 720
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 720
$memory_3 = 1;
#line 720
$memory_1 = $memory_1 - $memory_3;
#line 720
undef($memory_3);
#line 720
goto label_2;
#line 720
label_2:
#line 720
undef($memory_2);
#line 721
label_5:
#line 721
$memory_2 = 0;
#line 721
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 721
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 721
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 721
$memory_5 = 1;
#line 721
$memory_2 = string::substr($memory_0, $memory_1, $memory_5);
#line 721
undef($memory_5);
#line 721
$memory_5 = "/";
#line 721
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_5);
#line 721
undef($memory_5);
#line 721
label_7:
#line 721
undef($memory_4);
#line 721
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 721
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 721
$memory_4 = 1;
#line 721
$memory_2 = string::substr($memory_0, $memory_1, $memory_4);
#line 721
undef($memory_4);
#line 721
$memory_4 = "\\";
#line 721
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_4);
#line 721
undef($memory_4);
#line 721
label_6:
#line 721
undef($memory_3);
#line 721
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 721
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 721
$memory_3 = 1;
#line 721
$memory_1 = $memory_1 - $memory_3;
#line 721
undef($memory_3);
#line 721
goto label_5;
#line 721
label_4:
#line 721
undef($memory_2);
#line 722
$memory_2 = 0;
#line 722
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 722
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 722
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 722
$memory_3 = ".";
#line 722
undef($memory_0);
#line 722
undef($memory_1);
#line 722
undef($memory_2);
#line 722
return $memory_3;
#line 722
undef($memory_3);
#line 722
goto label_9;
#line 722
label_9:
#line 722
undef($memory_2);
#line 723
$memory_3 = 0;
#line 723
$memory_2 = string::substr($memory_0, $memory_3, $memory_1);
#line 723
undef($memory_3);
#line 723
undef($memory_0);
#line 723
undef($memory_1);
#line 723
return $memory_2;
#line 723
undef($memory_2);
#line 723
undef($memory_1);
#line 723
undef($memory_0);
#line 723
return;
}

sub compiler_priv::parse_command_line_args($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];
#line 727
$memory_2 = c_rt_lib::ov_mk_none('c');
#line 727
$memory_3 = c_rt_lib::ov_mk_none('strict');
#line 727
$memory_5 = ".";
#line 727
$memory_4 = [$memory_5];
#line 727
undef($memory_5);
#line 727
$memory_5 = c_rt_lib::ov_mk_none('o1');
#line 727
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 727
$memory_7 = compiler_priv::get_default_math_file();
#line 727
$memory_8 = "";
#line 727
$memory_9 = c_rt_lib::ov_mk_none('norm');
#line 727
$memory_1 = {language => $memory_2,mode => $memory_3,input_path => $memory_4,optimization => $memory_5,deref => $memory_6,math_fun => $memory_7,cache_path => $memory_8,alarm => $memory_9,};
#line 727
undef($memory_2);
#line 727
undef($memory_3);
#line 727
undef($memory_4);
#line 727
undef($memory_5);
#line 727
undef($memory_6);
#line 727
undef($memory_7);
#line 727
undef($memory_8);
#line 727
undef($memory_9);
#line 737
$memory_2 = c_rt_lib::to_nl(0);
#line 738
$memory_3 = compiler_priv::get_dir_cache_name();
#line 739
$memory_4 = 1;
#line 739
label_2:
#line 739
$memory_5 = array::len($memory_0);
#line 739
$memory_5 = c_rt_lib::to_nl($memory_4 < $memory_5);
#line 739
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 739
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 740
$memory_6 = $memory_0->[$memory_4];
#line 741
$memory_7 = string::length($memory_6);
#line 741
$memory_9 = 2;
#line 741
$memory_7 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 741
undef($memory_9);
#line 741
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 741
if (c_rt_lib::check_true($memory_8)) {goto label_6;}
#line 741
$memory_9 = 0;
#line 741
$memory_10 = 2;
#line 741
$memory_7 = string::substr($memory_6, $memory_9, $memory_10);
#line 741
undef($memory_10);
#line 741
undef($memory_9);
#line 741
$memory_9 = "--";
#line 741
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_9);
#line 741
undef($memory_9);
#line 741
label_6:
#line 741
undef($memory_8);
#line 741
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 741
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 742
$memory_9 = 2;
#line 742
$memory_10 = string::length($memory_6);
#line 742
$memory_11 = 2;
#line 742
$memory_10 = $memory_10 - $memory_11;
#line 742
undef($memory_11);
#line 742
$memory_8 = string::substr($memory_6, $memory_9, $memory_10);
#line 742
undef($memory_10);
#line 742
undef($memory_9);
#line 743
$memory_9 = "deref";
#line 743
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 743
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 743
if (c_rt_lib::check_true($memory_9)) {goto label_8;}
#line 744
$memory_10 = "";
#line 744
$memory_10 = c_rt_lib::ov_mk_arg('yes', $memory_10);
#line 744
$memory_11 = $memory_10;
#line 744
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'deref'} = $memory_11;
#line 744
undef($memory_10);
#line 744
undef($memory_11);
#line 745
goto label_7;
#line 745
label_8:
#line 745
$memory_9 = "nla";
#line 745
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 745
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 745
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 746
$memory_10 = c_rt_lib::ov_mk_none('nla');
#line 746
$memory_11 = $memory_10;
#line 746
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 746
undef($memory_10);
#line 746
undef($memory_11);
#line 747
goto label_7;
#line 747
label_9:
#line 747
$memory_9 = "ast";
#line 747
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 747
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 747
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 748
$memory_10 = c_rt_lib::ov_mk_none('ast');
#line 748
$memory_11 = $memory_10;
#line 748
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 748
undef($memory_10);
#line 748
undef($memory_11);
#line 749
goto label_7;
#line 749
label_10:
#line 749
$memory_9 = "pm";
#line 749
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 749
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 749
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 750
$memory_10 = c_rt_lib::ov_mk_none('pm');
#line 750
$memory_11 = $memory_10;
#line 750
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 750
undef($memory_10);
#line 750
undef($memory_11);
#line 751
goto label_7;
#line 751
label_11:
#line 751
$memory_9 = "c";
#line 751
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 751
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 751
if (c_rt_lib::check_true($memory_9)) {goto label_12;}
#line 752
$memory_10 = c_rt_lib::ov_mk_none('c');
#line 752
$memory_11 = $memory_10;
#line 752
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 752
undef($memory_10);
#line 752
undef($memory_11);
#line 753
goto label_7;
#line 753
label_12:
#line 753
$memory_9 = "js";
#line 753
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 753
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 753
if (c_rt_lib::check_true($memory_9)) {goto label_13;}
#line 754
$memory_10 = c_rt_lib::ov_mk_none('js');
#line 754
$memory_11 = $memory_10;
#line 754
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 754
undef($memory_10);
#line 754
undef($memory_11);
#line 755
goto label_7;
#line 755
label_13:
#line 755
$memory_9 = "java";
#line 755
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 755
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 755
if (c_rt_lib::check_true($memory_9)) {goto label_14;}
#line 756
$memory_10 = c_rt_lib::ov_mk_none('java');
#line 756
$memory_11 = $memory_10;
#line 756
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 756
undef($memory_10);
#line 756
undef($memory_11);
#line 757
goto label_7;
#line 757
label_14:
#line 757
$memory_9 = "nl";
#line 757
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 757
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 757
if (c_rt_lib::check_true($memory_9)) {goto label_15;}
#line 758
$memory_10 = c_rt_lib::ov_mk_none('nl');
#line 758
$memory_11 = $memory_10;
#line 758
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 758
undef($memory_10);
#line 758
undef($memory_11);
#line 759
$memory_10 = compiler_priv::get_dir_pretty_name();
#line 759
$memory_3 = $memory_10;
#line 759
undef($memory_10);
#line 760
goto label_7;
#line 760
label_15:
#line 760
$memory_9 = "ide";
#line 760
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 760
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 760
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 761
$memory_10 = c_rt_lib::ov_mk_none('ide');
#line 761
$memory_11 = $memory_10;
#line 761
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 761
undef($memory_10);
#line 761
undef($memory_11);
#line 762
goto label_7;
#line 762
label_16:
#line 762
$memory_9 = "idex";
#line 762
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 762
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 762
if (c_rt_lib::check_true($memory_9)) {goto label_17;}
#line 763
$memory_10 = 1;
#line 763
$memory_4 = $memory_4 + $memory_10;
#line 763
undef($memory_10);
#line 764
$memory_10 = array::len($memory_0);
#line 764
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 764
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 764
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 764
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 764
$memory_11 = [];
#line 764
die(dfile::ssave($memory_11));
#line 764
goto label_19;
#line 764
label_19:
#line 764
undef($memory_10);
#line 764
undef($memory_11);
#line 765
$memory_10 = $memory_0->[$memory_4];
#line 765
$memory_10 = c_rt_lib::ov_mk_arg('idex', $memory_10);
#line 765
$memory_11 = $memory_10;
#line 765
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 765
undef($memory_10);
#line 765
undef($memory_11);
#line 766
goto label_7;
#line 766
label_17:
#line 766
$memory_9 = "strict";
#line 766
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 766
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 766
if (c_rt_lib::check_true($memory_9)) {goto label_20;}
#line 767
$memory_10 = c_rt_lib::ov_mk_none('strict');
#line 767
$memory_11 = $memory_10;
#line 767
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 767
undef($memory_10);
#line 767
undef($memory_11);
#line 768
goto label_7;
#line 768
label_20:
#line 768
$memory_9 = "exec";
#line 768
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 768
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 768
if (c_rt_lib::check_true($memory_9)) {goto label_21;}
#line 769
$memory_10 = c_rt_lib::ov_mk_none('exec');
#line 769
$memory_11 = $memory_10;
#line 769
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 769
undef($memory_10);
#line 769
undef($memory_11);
#line 770
goto label_7;
#line 770
label_21:
#line 770
$memory_9 = "o";
#line 770
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 770
if (c_rt_lib::check_true($memory_9)) {goto label_23;}
#line 770
$memory_9 = "out";
#line 770
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 770
label_23:
#line 770
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 770
if (c_rt_lib::check_true($memory_9)) {goto label_22;}
#line 771
$memory_10 = 1;
#line 771
$memory_4 = $memory_4 + $memory_10;
#line 771
undef($memory_10);
#line 772
$memory_10 = array::len($memory_0);
#line 772
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 772
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 772
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 772
if (c_rt_lib::check_true($memory_10)) {goto label_25;}
#line 772
$memory_11 = [];
#line 772
die(dfile::ssave($memory_11));
#line 772
goto label_25;
#line 772
label_25:
#line 772
undef($memory_10);
#line 772
undef($memory_11);
#line 773
$memory_10 = $memory_0->[$memory_4];
#line 773
$memory_11 = "/";
#line 773
$memory_10 = $memory_10 . $memory_11;
#line 773
undef($memory_11);
#line 773
$memory_11 = $memory_10;
#line 773
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'cache_path'} = $memory_11;
#line 773
undef($memory_10);
#line 773
undef($memory_11);
#line 774
goto label_7;
#line 774
label_22:
#line 774
$memory_9 = "math";
#line 774
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 774
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 774
if (c_rt_lib::check_true($memory_9)) {goto label_26;}
#line 775
$memory_10 = 1;
#line 775
$memory_4 = $memory_4 + $memory_10;
#line 775
undef($memory_10);
#line 776
$memory_10 = array::len($memory_0);
#line 776
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 776
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 776
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 776
if (c_rt_lib::check_true($memory_10)) {goto label_28;}
#line 776
$memory_11 = [];
#line 776
die(dfile::ssave($memory_11));
#line 776
goto label_28;
#line 776
label_28:
#line 776
undef($memory_10);
#line 776
undef($memory_11);
#line 777
$memory_10 = $memory_0->[$memory_4];
#line 777
$memory_11 = $memory_10;
#line 777
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'math_fun'} = $memory_11;
#line 777
undef($memory_10);
#line 777
undef($memory_11);
#line 778
goto label_7;
#line 778
label_26:
#line 778
$memory_9 = "O0";
#line 778
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 778
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 778
if (c_rt_lib::check_true($memory_9)) {goto label_29;}
#line 779
$memory_10 = c_rt_lib::ov_mk_none('o0');
#line 779
$memory_11 = $memory_10;
#line 779
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 779
undef($memory_10);
#line 779
undef($memory_11);
#line 780
goto label_7;
#line 780
label_29:
#line 780
$memory_9 = "O1";
#line 780
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 780
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 780
if (c_rt_lib::check_true($memory_9)) {goto label_30;}
#line 781
$memory_10 = c_rt_lib::ov_mk_none('o1');
#line 781
$memory_11 = $memory_10;
#line 781
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 781
undef($memory_10);
#line 781
undef($memory_11);
#line 782
goto label_7;
#line 782
label_30:
#line 782
$memory_9 = "O2";
#line 782
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 782
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 782
if (c_rt_lib::check_true($memory_9)) {goto label_31;}
#line 783
$memory_10 = c_rt_lib::ov_mk_none('o2');
#line 783
$memory_11 = $memory_10;
#line 783
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 783
undef($memory_10);
#line 783
undef($memory_11);
#line 784
goto label_7;
#line 784
label_31:
#line 784
$memory_9 = "O3";
#line 784
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 784
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 784
if (c_rt_lib::check_true($memory_9)) {goto label_32;}
#line 785
$memory_10 = c_rt_lib::ov_mk_none('o3');
#line 785
$memory_11 = $memory_10;
#line 785
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 785
undef($memory_10);
#line 785
undef($memory_11);
#line 786
goto label_7;
#line 786
label_32:
#line 786
$memory_9 = "O4";
#line 786
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 786
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 786
if (c_rt_lib::check_true($memory_9)) {goto label_33;}
#line 787
$memory_10 = c_rt_lib::ov_mk_none('o4');
#line 787
$memory_11 = $memory_10;
#line 787
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 787
undef($memory_10);
#line 787
undef($memory_11);
#line 788
goto label_7;
#line 788
label_33:
#line 788
$memory_9 = "Wall";
#line 788
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 788
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 788
if (c_rt_lib::check_true($memory_9)) {goto label_34;}
#line 789
$memory_10 = c_rt_lib::ov_mk_none('wall');
#line 789
$memory_11 = $memory_10;
#line 789
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'alarm'} = $memory_11;
#line 789
undef($memory_10);
#line 789
undef($memory_11);
#line 790
goto label_7;
#line 790
label_34:
#line 791
$memory_10 = "unknown compiler option: ";
#line 791
$memory_10 = $memory_10 . $memory_6;
#line 791
c_fe_lib::print($memory_10);
#line 791
undef($memory_10);
#line 792
goto label_7;
#line 792
label_7:
#line 792
undef($memory_9);
#line 792
undef($memory_8);
#line 793
goto label_4;
#line 793
label_5:
#line 794
$memory_8 = $memory_2;
#line 794
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 794
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 794
if (c_rt_lib::check_true($memory_8)) {goto label_36;}
#line 794
$memory_9 = [];
#line 794
$memory_10 = $memory_9;
#line 794
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'input_path'} = $memory_10;
#line 794
undef($memory_9);
#line 794
undef($memory_10);
#line 794
goto label_36;
#line 794
label_36:
#line 794
undef($memory_8);
#line 795
$memory_8 = "input_path";
#line 795
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 795
array::push($memory_8, $memory_6);
#line 795
$memory_9 = "input_path";
#line 795
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 795
undef($memory_9);
#line 795
undef($memory_8);
#line 796
$memory_8 = c_rt_lib::to_nl(1);
#line 796
$memory_2 = $memory_8;
#line 796
undef($memory_8);
#line 797
goto label_4;
#line 797
label_4:
#line 797
undef($memory_7);
#line 797
undef($memory_6);
#line 797
$memory_6 = 1;
#line 797
$memory_4 = $memory_4 + $memory_6;
#line 797
undef($memory_6);
#line 798
goto label_2;
#line 798
label_1:
#line 798
undef($memory_4);
#line 798
undef($memory_5);
#line 799
$memory_4 = $memory_1->{'cache_path'};
#line 799
$memory_5 = "";
#line 799
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 799
undef($memory_5);
#line 799
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 799
if (c_rt_lib::check_true($memory_4)) {goto label_38;}
#line 800
$memory_5 = "./";
#line 800
$memory_5 = $memory_5 . $memory_3;
#line 800
$memory_6 = "/";
#line 800
$memory_5 = $memory_5 . $memory_6;
#line 800
undef($memory_6);
#line 800
$memory_6 = $memory_5;
#line 800
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'cache_path'} = $memory_6;
#line 800
undef($memory_5);
#line 800
undef($memory_6);
#line 801
goto label_38;
#line 801
label_38:
#line 801
undef($memory_4);
#line 802
$memory_4 = $memory_1->{'deref'};
#line 802
$memory_4 = c_rt_lib::ov_is($memory_4, 'yes');
#line 802
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 802
if (c_rt_lib::check_true($memory_4)) {goto label_40;}
#line 802
$memory_5 = $memory_1->{'cache_path'};
#line 802
$memory_6 = compiler_priv::get_default_deref_file();
#line 802
$memory_5 = $memory_5 . $memory_6;
#line 802
undef($memory_6);
#line 802
$memory_5 = c_rt_lib::ov_mk_arg('yes', $memory_5);
#line 802
$memory_6 = $memory_5;
#line 802
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'deref'} = $memory_6;
#line 802
undef($memory_5);
#line 802
undef($memory_6);
#line 802
goto label_40;
#line 802
label_40:
#line 802
undef($memory_4);
#line 803
undef($memory_0);
#line 803
undef($memory_2);
#line 803
undef($memory_3);
#line 803
return $memory_1;
#line 803
undef($memory_1);
#line 803
undef($memory_2);
#line 803
undef($memory_3);
#line 803
undef($memory_0);
#line 803
return;
}
