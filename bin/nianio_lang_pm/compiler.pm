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
$memory_3 = compiler_priv::compile_strict_file($memory_1);
#line 133
undef($memory_0);
#line 133
undef($memory_1);
#line 133
undef($memory_2);
#line 133
return $memory_3;
#line 133
undef($memory_3);
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
#line 142
$memory_2 = c_rt_lib::to_nl(1);
#line 142
undef($memory_0);
#line 142
undef($memory_1);
#line 142
return $memory_2;
#line 142
undef($memory_2);
#line 142
undef($memory_1);
#line 142
undef($memory_0);
#line 142
return;
}

sub compiler_priv::__get_known_func() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;
#line 146
$memory_0 = {};
#line 147
$memory_1 = "nl::print";
#line 147
$memory_3 = {
	module => "nl",
	name => "print",
};
#line 147
$memory_3 = c_rt_lib::ov_mk_arg('ref', $memory_3);
#line 147
$memory_4 = c_rt_lib::ov_mk_none('sequential');
#line 147
$memory_6 = ptd::sim();
#line 147
$memory_5 = [$memory_6];
#line 147
undef($memory_6);
#line 147
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 147
$memory_2 = {func => $memory_3,type => $memory_4,args => $memory_5,return => $memory_6,};
#line 147
undef($memory_3);
#line 147
undef($memory_4);
#line 147
undef($memory_5);
#line 147
undef($memory_6);
#line 147
hash::set_value($memory_0, $memory_1, $memory_2);
#line 147
undef($memory_2);
#line 147
undef($memory_1);
#line 148
return $memory_0;
#line 148
undef($memory_0);
#line 148
return;
}

my $_get_known_func;
sub compiler_priv::get_known_func() {
	$_get_known_func = compiler_priv::__get_known_func() unless defined $_get_known_func;
	return $_get_known_func;
}

sub compiler_priv::exec_interpreter($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];
#line 152
$memory_1 = {};
#line 153
$memory_3 = {};
#line 153
$memory_4 = {};
#line 153
$memory_5 = {};
#line 153
$memory_6 = {};
#line 153
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 153
$memory_2 = {module_errors => $memory_3,module_warnings => $memory_4,type_errors => $memory_5,type_warnings => $memory_6,loop_error => $memory_7,};
#line 153
undef($memory_3);
#line 153
undef($memory_4);
#line 153
undef($memory_5);
#line 153
undef($memory_6);
#line 153
undef($memory_7);
#line 160
$memory_3 = 0;
#line 161
$memory_4 = compiler_priv::get_files_to_parse($memory_0);
#line 162
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 162
label_3:
#line 162
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 162
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 162
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 162
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 163
$memory_9 = $memory_6->{'src'};
#line 163
$memory_8 = compiler_priv::parse_module($memory_5, $memory_9, $memory_2);
#line 163
undef($memory_9);
#line 163
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 163
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 165
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 165
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 165
$memory_9 = "NOMATCHALERT";
#line 165
$memory_9 = [$memory_9,$memory_8];
#line 165
die(dfile::ssave($memory_9));
#line 163
label_5:
#line 163
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 164
hash::set_value($memory_1, $memory_5, $memory_10);
#line 164
undef($memory_10);
#line 165
goto label_4;
#line 165
label_6:
#line 165
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 166
$memory_11 = 1;
#line 166
$memory_3 = $memory_3 + $memory_11;
#line 166
undef($memory_11);
#line 166
undef($memory_10);
#line 167
goto label_4;
#line 167
label_4:
#line 167
undef($memory_8);
#line 167
undef($memory_9);
#line 168
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 168
goto label_3;
#line 168
label_1:
#line 168
undef($memory_5);
#line 168
undef($memory_6);
#line 168
undef($memory_7);
#line 169
$memory_5 = 0;
#line 169
$memory_5 = c_rt_lib::to_nl($memory_3 != $memory_5);
#line 169
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 169
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 170
compiler_priv::show_and_count_errors($memory_2, $memory_0);
#line 171
undef($memory_0);
#line 171
undef($memory_1);
#line 171
undef($memory_2);
#line 171
undef($memory_3);
#line 171
undef($memory_4);
#line 171
undef($memory_5);
#line 171
return;
#line 172
goto label_8;
#line 172
label_8:
#line 172
undef($memory_5);
#line 173
$memory_5 = $memory_0->{'deref'};
#line 173
compiler_priv::check_modules($memory_1, $memory_2, $memory_5);
#line 173
undef($memory_5);
#line 174
$memory_5 = compiler_priv::show_and_count_errors($memory_2, $memory_0);
#line 174
$memory_6 = 0;
#line 174
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 174
undef($memory_6);
#line 174
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 174
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 175
undef($memory_0);
#line 175
undef($memory_1);
#line 175
undef($memory_2);
#line 175
undef($memory_3);
#line 175
undef($memory_4);
#line 175
undef($memory_5);
#line 175
return;
#line 176
goto label_10;
#line 176
label_10:
#line 176
undef($memory_5);
#line 177
$memory_6 = {};
#line 177
$memory_7 = $memory_0->{'optimization'};
#line 177
$memory_5 = post_processing::init($memory_6, $memory_7);
#line 177
undef($memory_7);
#line 177
undef($memory_6);
#line 178
$memory_6 = compiler_priv::translate($memory_1, $memory_5);
#line 179
$memory_7 = [];
#line 180
$memory_8 = "";
#line 181
$memory_11 = c_rt_lib::init_iter($memory_6);
#line 181
label_13:
#line 181
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 181
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 181
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 181
$memory_10 = c_rt_lib::hash_get_value($memory_6, $memory_9);
#line 182
$memory_12 = $memory_10->{'functions'};
#line 182
$memory_14 = 0;
#line 182
$memory_15 = 1;
#line 182
$memory_16 = c_rt_lib::array_len($memory_12);
#line 182
label_16:
#line 182
$memory_17 = c_rt_lib::to_nl($memory_14 >= $memory_16);
#line 182
if (c_rt_lib::check_true($memory_17)) {goto label_14;}
#line 182
$memory_13 = $memory_12->[$memory_14];
#line 183
$memory_18 = $memory_13->{'name'};
#line 183
$memory_19 = "main";
#line 183
$memory_18 = c_rt_lib::to_nl($memory_18 eq $memory_19);
#line 183
undef($memory_19);
#line 183
$memory_18 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_18));
#line 183
if (c_rt_lib::check_true($memory_18)) {goto label_18;}
#line 184
$memory_8 = $memory_9;
#line 185
goto label_18;
#line 185
label_18:
#line 185
undef($memory_18);
#line 186
$memory_14 = $memory_14 + $memory_15;
#line 186
goto label_16;
#line 186
label_14:
#line 186
undef($memory_12);
#line 186
undef($memory_13);
#line 186
undef($memory_14);
#line 186
undef($memory_15);
#line 186
undef($memory_16);
#line 186
undef($memory_17);
#line 187
array::push($memory_7, $memory_10);
#line 188
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 188
goto label_13;
#line 188
label_11:
#line 188
undef($memory_9);
#line 188
undef($memory_10);
#line 188
undef($memory_11);
#line 189
$memory_10 = compiler_priv::get_known_func();
#line 189
$memory_9 = interpreter::init($memory_7, $memory_10);
#line 189
undef($memory_10);
#line 190
$memory_12 = "main";
#line 190
$memory_11 = interpreter::start($memory_9, $memory_12, $memory_8);
#line 190
undef($memory_12);
#line 190
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 190
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 190
$memory_11 = c_rt_lib::ov_mk_arg('ensure', $memory_11);
#line 190
die(dfile::ssave($memory_11));
#line 190
label_19:
#line 190
undef($memory_10);
#line 190
undef($memory_11);
#line 191
$memory_11 = interpreter::exec_all_code($memory_9);
#line 191
$memory_10 = c_rt_lib::ov_is($memory_11, 'ok');
#line 191
if (c_rt_lib::check_true($memory_10)) {goto label_20;}
#line 191
$memory_11 = c_rt_lib::ov_mk_arg('ensure', $memory_11);
#line 191
die(dfile::ssave($memory_11));
#line 191
label_20:
#line 191
undef($memory_10);
#line 191
undef($memory_11);
#line 191
undef($memory_1);
#line 191
undef($memory_2);
#line 191
undef($memory_3);
#line 191
undef($memory_4);
#line 191
undef($memory_5);
#line 191
undef($memory_6);
#line 191
undef($memory_7);
#line 191
undef($memory_8);
#line 191
undef($memory_9);
#line 191
undef($memory_0);
#line 191
return;
}

sub compiler_priv::get_module_name($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];
#line 195
$memory_1 = string::length($memory_0);
#line 195
$memory_2 = 1;
#line 195
$memory_1 = $memory_1 - $memory_2;
#line 195
undef($memory_2);
#line 196
label_2:
#line 196
$memory_2 = 0;
#line 196
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 196
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 196
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 196
$memory_5 = 1;
#line 196
$memory_2 = string::substr($memory_0, $memory_1, $memory_5);
#line 196
undef($memory_5);
#line 196
$memory_5 = "/";
#line 196
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_5);
#line 196
undef($memory_5);
#line 196
label_4:
#line 196
undef($memory_4);
#line 196
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 196
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 196
$memory_4 = 1;
#line 196
$memory_2 = string::substr($memory_0, $memory_1, $memory_4);
#line 196
undef($memory_4);
#line 196
$memory_4 = "\\";
#line 196
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_4);
#line 196
undef($memory_4);
#line 196
label_3:
#line 196
undef($memory_3);
#line 196
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 196
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 197
$memory_4 = 1;
#line 197
$memory_3 = string::substr($memory_0, $memory_1, $memory_4);
#line 197
undef($memory_4);
#line 197
$memory_4 = ".";
#line 197
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 197
undef($memory_4);
#line 197
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 197
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 198
$memory_4 = 1;
#line 198
$memory_1 = $memory_1 - $memory_4;
#line 198
undef($memory_4);
#line 199
undef($memory_3);
#line 199
goto label_1;
#line 200
goto label_6;
#line 200
label_6:
#line 200
undef($memory_3);
#line 201
$memory_3 = 1;
#line 201
$memory_1 = $memory_1 - $memory_3;
#line 201
undef($memory_3);
#line 202
goto label_2;
#line 202
label_1:
#line 202
undef($memory_2);
#line 203
$memory_2 = "";
#line 204
label_8:
#line 204
$memory_3 = 0;
#line 204
$memory_3 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 204
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 204
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 204
$memory_6 = 1;
#line 204
$memory_3 = string::substr($memory_0, $memory_1, $memory_6);
#line 204
undef($memory_6);
#line 204
$memory_6 = "/";
#line 204
$memory_3 = c_rt_lib::to_nl($memory_3 ne $memory_6);
#line 204
undef($memory_6);
#line 204
label_10:
#line 204
undef($memory_5);
#line 204
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 204
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 204
$memory_5 = 1;
#line 204
$memory_3 = string::substr($memory_0, $memory_1, $memory_5);
#line 204
undef($memory_5);
#line 204
$memory_5 = "\\";
#line 204
$memory_3 = c_rt_lib::to_nl($memory_3 ne $memory_5);
#line 204
undef($memory_5);
#line 204
label_9:
#line 204
undef($memory_4);
#line 204
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 204
if (c_rt_lib::check_true($memory_3)) {goto label_7;}
#line 205
$memory_5 = 1;
#line 205
$memory_4 = string::substr($memory_0, $memory_1, $memory_5);
#line 205
undef($memory_5);
#line 205
$memory_4 = $memory_4 . $memory_2;
#line 205
$memory_2 = $memory_4;
#line 205
undef($memory_4);
#line 206
$memory_4 = 1;
#line 206
$memory_1 = $memory_1 - $memory_4;
#line 206
undef($memory_4);
#line 207
goto label_8;
#line 207
label_7:
#line 207
undef($memory_3);
#line 208
undef($memory_0);
#line 208
undef($memory_1);
#line 208
return $memory_2;
#line 208
undef($memory_1);
#line 208
undef($memory_2);
#line 208
undef($memory_0);
#line 208
return;
}

sub compiler_priv::has_extension($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];
#line 212
$memory_2 = string::length($memory_1);
#line 213
$memory_3 = string::length($memory_0);
#line 213
$memory_3 = c_rt_lib::to_nl($memory_3 <= $memory_2);
#line 213
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 213
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 213
$memory_4 = c_rt_lib::to_nl(0);
#line 213
undef($memory_0);
#line 213
undef($memory_1);
#line 213
undef($memory_2);
#line 213
undef($memory_3);
#line 213
return $memory_4;
#line 213
undef($memory_4);
#line 213
goto label_2;
#line 213
label_2:
#line 213
undef($memory_3);
#line 214
$memory_4 = string::length($memory_0);
#line 214
$memory_4 = $memory_4 - $memory_2;
#line 214
$memory_3 = string::substr($memory_0, $memory_4, $memory_2);
#line 214
undef($memory_4);
#line 214
$memory_2 = $memory_3;
#line 214
undef($memory_3);
#line 215
$memory_3 = c_rt_lib::to_nl($memory_2 eq $memory_1);
#line 215
undef($memory_0);
#line 215
undef($memory_1);
#line 215
undef($memory_2);
#line 215
return $memory_3;
#line 215
undef($memory_3);
#line 215
undef($memory_2);
#line 215
undef($memory_0);
#line 215
undef($memory_1);
#line 215
return;
}

sub compiler_priv::get_generator_state($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 219
$memory_1 = c_rt_lib::ov_is($memory_0, 'pm');
#line 219
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 221
$memory_1 = c_rt_lib::ov_is($memory_0, 'nla');
#line 221
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 223
$memory_1 = c_rt_lib::ov_is($memory_0, 'c');
#line 223
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 225
$memory_1 = c_rt_lib::ov_is($memory_0, 'ast');
#line 225
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 227
$memory_1 = c_rt_lib::ov_is($memory_0, 'nl');
#line 227
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 229
$memory_1 = c_rt_lib::ov_is($memory_0, 'js');
#line 229
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 231
$memory_1 = c_rt_lib::ov_is($memory_0, 'java');
#line 231
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 231
$memory_1 = "NOMATCHALERT";
#line 231
$memory_1 = [$memory_1,$memory_0];
#line 231
die(dfile::ssave($memory_1));
#line 219
label_2:
#line 220
$memory_2 = generator_c::get_empty_state();
#line 220
undef($memory_0);
#line 220
undef($memory_1);
#line 220
return $memory_2;
#line 220
undef($memory_2);
#line 221
goto label_1;
#line 221
label_3:
#line 222
$memory_2 = generator_c::get_empty_state();
#line 222
undef($memory_0);
#line 222
undef($memory_1);
#line 222
return $memory_2;
#line 222
undef($memory_2);
#line 223
goto label_1;
#line 223
label_4:
#line 224
$memory_2 = generator_c::get_empty_state();
#line 224
undef($memory_0);
#line 224
undef($memory_1);
#line 224
return $memory_2;
#line 224
undef($memory_2);
#line 225
goto label_1;
#line 225
label_5:
#line 226
$memory_2 = [];
#line 226
die(dfile::ssave($memory_2));
#line 226
undef($memory_2);
#line 227
goto label_1;
#line 227
label_6:
#line 228
$memory_2 = [];
#line 228
die(dfile::ssave($memory_2));
#line 228
undef($memory_2);
#line 229
goto label_1;
#line 229
label_7:
#line 230
$memory_2 = generator_c::get_empty_state();
#line 230
undef($memory_0);
#line 230
undef($memory_1);
#line 230
return $memory_2;
#line 230
undef($memory_2);
#line 231
goto label_1;
#line 231
label_8:
#line 232
$memory_2 = generator_c::get_empty_state();
#line 232
undef($memory_0);
#line 232
undef($memory_1);
#line 232
return $memory_2;
#line 232
undef($memory_2);
#line 233
goto label_1;
#line 233
label_1:
#line 233
undef($memory_1);
#line 233
undef($memory_0);
#line 233
return;
}

sub compiler_priv::get_out_ext($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 237
$memory_1 = c_rt_lib::ov_is($memory_0, 'pm');
#line 237
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 239
$memory_1 = c_rt_lib::ov_is($memory_0, 'nla');
#line 239
if (c_rt_lib::check_true($memory_1)) {goto label_3;}
#line 241
$memory_1 = c_rt_lib::ov_is($memory_0, 'c');
#line 241
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 243
$memory_1 = c_rt_lib::ov_is($memory_0, 'ast');
#line 243
if (c_rt_lib::check_true($memory_1)) {goto label_5;}
#line 245
$memory_1 = c_rt_lib::ov_is($memory_0, 'nl');
#line 245
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 247
$memory_1 = c_rt_lib::ov_is($memory_0, 'js');
#line 247
if (c_rt_lib::check_true($memory_1)) {goto label_7;}
#line 249
$memory_1 = c_rt_lib::ov_is($memory_0, 'java');
#line 249
if (c_rt_lib::check_true($memory_1)) {goto label_8;}
#line 249
$memory_1 = "NOMATCHALERT";
#line 249
$memory_1 = [$memory_1,$memory_0];
#line 249
die(dfile::ssave($memory_1));
#line 237
label_2:
#line 238
$memory_2 = ".pm";
#line 238
undef($memory_0);
#line 238
undef($memory_1);
#line 238
return $memory_2;
#line 238
undef($memory_2);
#line 239
goto label_1;
#line 239
label_3:
#line 240
$memory_2 = ".nla";
#line 240
undef($memory_0);
#line 240
undef($memory_1);
#line 240
return $memory_2;
#line 240
undef($memory_2);
#line 241
goto label_1;
#line 241
label_4:
#line 242
$memory_2 = ".c";
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
#line 244
$memory_2 = ".ast";
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
#line 246
$memory_2 = ".nl";
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
#line 248
$memory_2 = ".js";
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
$memory_2 = ".java";
#line 250
undef($memory_0);
#line 250
undef($memory_1);
#line 250
return $memory_2;
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

sub compiler_priv::mk_path($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 255
$memory_2 = ".";
#line 255
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 255
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 255
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 255
undef($memory_0);
#line 255
undef($memory_1);
#line 255
undef($memory_2);
#line 255
return;
#line 255
goto label_2;
#line 255
label_2:
#line 255
undef($memory_2);
#line 256
$memory_2 = compiler_priv::get_dir($memory_1);
#line 256
compiler_priv::mk_path($memory_0, $memory_2);
#line 256
undef($memory_2);
#line 257
$memory_2 = $memory_0 . $memory_1;
#line 257
c_fe_lib::mk_path($memory_2);
#line 257
undef($memory_2);
#line 257
undef($memory_0);
#line 257
undef($memory_1);
#line 257
return;
}

sub compiler_priv::mk_path_module($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 262
$memory_3 = $memory_2->{'cache_path'};
#line 262
$memory_3 = $memory_3 . $memory_1;
#line 263
$memory_4 = $memory_0->{'file'};
#line 264
$memory_5 = $memory_2->{'language'};
#line 264
$memory_6 = c_rt_lib::ov_is($memory_5, 'pm');
#line 264
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 266
$memory_6 = c_rt_lib::ov_is($memory_5, 'nla');
#line 266
if (c_rt_lib::check_true($memory_6)) {goto label_3;}
#line 268
$memory_6 = c_rt_lib::ov_is($memory_5, 'c');
#line 268
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 270
$memory_6 = c_rt_lib::ov_is($memory_5, 'nl');
#line 270
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 278
$memory_6 = c_rt_lib::ov_is($memory_5, 'ast');
#line 278
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 280
$memory_6 = c_rt_lib::ov_is($memory_5, 'js');
#line 280
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 282
$memory_6 = c_rt_lib::ov_is($memory_5, 'java');
#line 282
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 282
$memory_6 = "NOMATCHALERT";
#line 282
$memory_6 = [$memory_6,$memory_5];
#line 282
die(dfile::ssave($memory_6));
#line 264
label_2:
#line 265
$memory_8 = ".pm";
#line 265
$memory_8 = $memory_3 . $memory_8;
#line 265
$memory_8 = c_rt_lib::ov_mk_arg('pm', $memory_8);
#line 265
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 265
undef($memory_8);
#line 265
undef($memory_0);
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
return $memory_7;
#line 265
undef($memory_7);
#line 266
goto label_1;
#line 266
label_3:
#line 267
$memory_8 = ".nla";
#line 267
$memory_8 = $memory_3 . $memory_8;
#line 267
$memory_8 = c_rt_lib::ov_mk_arg('nla', $memory_8);
#line 267
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 267
undef($memory_8);
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
undef($memory_5);
#line 267
undef($memory_6);
#line 267
return $memory_7;
#line 267
undef($memory_7);
#line 268
goto label_1;
#line 268
label_4:
#line 269
$memory_9 = ".c";
#line 269
$memory_9 = $memory_3 . $memory_9;
#line 269
$memory_10 = ".h";
#line 269
$memory_10 = $memory_3 . $memory_10;
#line 269
$memory_8 = {c => $memory_9,h => $memory_10,};
#line 269
undef($memory_9);
#line 269
undef($memory_10);
#line 269
$memory_8 = c_rt_lib::ov_mk_arg('c', $memory_8);
#line 269
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 269
undef($memory_8);
#line 269
undef($memory_0);
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
return $memory_7;
#line 269
undef($memory_7);
#line 270
goto label_1;
#line 270
label_5:
#line 271
$memory_8 = $memory_0->{'dir'};
#line 271
$memory_7 = string::length($memory_8);
#line 271
undef($memory_8);
#line 272
$memory_8 = compiler_priv::get_dir($memory_4);
#line 273
$memory_9 = $memory_2->{'cache_path'};
#line 273
$memory_9 = $memory_9 . $memory_8;
#line 273
$memory_10 = "/";
#line 273
$memory_9 = $memory_9 . $memory_10;
#line 273
undef($memory_10);
#line 273
$memory_9 = $memory_9 . $memory_1;
#line 273
$memory_3 = $memory_9;
#line 273
undef($memory_9);
#line 274
$memory_9 = string::length($memory_8);
#line 274
$memory_9 = c_rt_lib::to_nl($memory_7 < $memory_9);
#line 274
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 274
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 275
$memory_10 = $memory_2->{'cache_path'};
#line 275
$memory_12 = 1;
#line 275
$memory_12 = $memory_7 + $memory_12;
#line 275
$memory_11 = string::substr2($memory_8, $memory_12);
#line 275
undef($memory_12);
#line 275
compiler_priv::mk_path($memory_10, $memory_11);
#line 275
undef($memory_11);
#line 275
undef($memory_10);
#line 276
goto label_10;
#line 276
label_10:
#line 276
undef($memory_9);
#line 277
$memory_10 = ".nl";
#line 277
$memory_10 = $memory_3 . $memory_10;
#line 277
$memory_10 = c_rt_lib::ov_mk_arg('nl', $memory_10);
#line 277
$memory_9 = {src => $memory_4,dst => $memory_10,};
#line 277
undef($memory_10);
#line 277
undef($memory_0);
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
undef($memory_8);
#line 277
return $memory_9;
#line 277
undef($memory_9);
#line 277
undef($memory_7);
#line 277
undef($memory_8);
#line 278
goto label_1;
#line 278
label_6:
#line 279
$memory_8 = ".ast";
#line 279
$memory_8 = $memory_3 . $memory_8;
#line 279
$memory_8 = c_rt_lib::ov_mk_arg('ast', $memory_8);
#line 279
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 279
undef($memory_8);
#line 279
undef($memory_0);
#line 279
undef($memory_1);
#line 279
undef($memory_2);
#line 279
undef($memory_3);
#line 279
undef($memory_4);
#line 279
undef($memory_5);
#line 279
undef($memory_6);
#line 279
return $memory_7;
#line 279
undef($memory_7);
#line 280
goto label_1;
#line 280
label_7:
#line 281
$memory_8 = ".js";
#line 281
$memory_8 = $memory_3 . $memory_8;
#line 281
$memory_8 = c_rt_lib::ov_mk_arg('js', $memory_8);
#line 281
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 281
undef($memory_8);
#line 281
undef($memory_0);
#line 281
undef($memory_1);
#line 281
undef($memory_2);
#line 281
undef($memory_3);
#line 281
undef($memory_4);
#line 281
undef($memory_5);
#line 281
undef($memory_6);
#line 281
return $memory_7;
#line 281
undef($memory_7);
#line 282
goto label_1;
#line 282
label_8:
#line 283
$memory_8 = "_NL.java";
#line 283
$memory_8 = $memory_3 . $memory_8;
#line 283
$memory_8 = c_rt_lib::ov_mk_arg('java', $memory_8);
#line 283
$memory_7 = {src => $memory_4,dst => $memory_8,};
#line 283
undef($memory_8);
#line 283
undef($memory_0);
#line 283
undef($memory_1);
#line 283
undef($memory_2);
#line 283
undef($memory_3);
#line 283
undef($memory_4);
#line 283
undef($memory_5);
#line 283
undef($memory_6);
#line 283
return $memory_7;
#line 283
undef($memory_7);
#line 284
goto label_1;
#line 284
label_1:
#line 284
undef($memory_5);
#line 284
undef($memory_6);
#line 284
undef($memory_3);
#line 284
undef($memory_4);
#line 284
undef($memory_0);
#line 284
undef($memory_1);
#line 284
undef($memory_2);
#line 284
return;
}

sub compiler_priv::get_all_nianio_file($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];
#line 288
$memory_1 = [];
#line 289
$memory_4 = ptd::sim();
#line 289
$memory_3 = ptd::arr($memory_4);
#line 289
undef($memory_4);
#line 289
$memory_4 = c_fe_lib::get_module_files_rec($memory_0);
#line 289
$memory_2 = ptd::ensure($memory_3, $memory_4);
#line 289
undef($memory_4);
#line 289
undef($memory_3);
#line 290
$memory_4 = 0;
#line 290
$memory_5 = 1;
#line 290
$memory_6 = c_rt_lib::array_len($memory_2);
#line 290
label_3:
#line 290
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 290
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 290
$memory_3 = $memory_2->[$memory_4];
#line 291
$memory_9 = ".nl";
#line 291
$memory_8 = compiler_priv::has_extension($memory_3, $memory_9);
#line 291
undef($memory_9);
#line 291
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 291
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 291
array::push($memory_1, $memory_3);
#line 291
goto label_5;
#line 291
label_5:
#line 291
undef($memory_8);
#line 292
$memory_4 = $memory_4 + $memory_5;
#line 292
goto label_3;
#line 292
label_1:
#line 292
undef($memory_3);
#line 292
undef($memory_4);
#line 292
undef($memory_5);
#line 292
undef($memory_6);
#line 292
undef($memory_7);
#line 293
undef($memory_0);
#line 293
undef($memory_2);
#line 293
return $memory_1;
#line 293
undef($memory_1);
#line 293
undef($memory_2);
#line 293
undef($memory_0);
#line 293
return;
}

sub compiler_priv::get_files_to_parse($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];
#line 297
$memory_1 = $memory_0->{'cache_path'};
#line 298
$memory_2 = [];
#line 299
$memory_3 = $memory_0->{'input_path'};
#line 299
$memory_5 = 0;
#line 299
$memory_6 = 1;
#line 299
$memory_7 = c_rt_lib::array_len($memory_3);
#line 299
label_3:
#line 299
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 299
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 299
$memory_4 = $memory_3->[$memory_5];
#line 300
$memory_10 = ".nl";
#line 300
$memory_9 = compiler_priv::has_extension($memory_4, $memory_10);
#line 300
undef($memory_10);
#line 300
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 300
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 301
$memory_11 = compiler_priv::get_dir($memory_4);
#line 301
$memory_10 = {dir => $memory_11,file => $memory_4,};
#line 301
undef($memory_11);
#line 301
array::push($memory_2, $memory_10);
#line 301
undef($memory_10);
#line 302
goto label_4;
#line 302
label_5:
#line 303
$memory_10 = compiler_priv::get_all_nianio_file($memory_4);
#line 303
$memory_12 = 0;
#line 303
$memory_13 = 1;
#line 303
$memory_14 = c_rt_lib::array_len($memory_10);
#line 303
label_8:
#line 303
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 303
if (c_rt_lib::check_true($memory_15)) {goto label_6;}
#line 303
$memory_11 = $memory_10->[$memory_12];
#line 304
$memory_16 = {dir => $memory_4,file => $memory_11,};
#line 304
array::push($memory_2, $memory_16);
#line 304
undef($memory_16);
#line 305
$memory_12 = $memory_12 + $memory_13;
#line 305
goto label_8;
#line 305
label_6:
#line 305
undef($memory_10);
#line 305
undef($memory_11);
#line 305
undef($memory_12);
#line 305
undef($memory_13);
#line 305
undef($memory_14);
#line 305
undef($memory_15);
#line 306
goto label_4;
#line 306
label_4:
#line 306
undef($memory_9);
#line 307
$memory_5 = $memory_5 + $memory_6;
#line 307
goto label_3;
#line 307
label_1:
#line 307
undef($memory_3);
#line 307
undef($memory_4);
#line 307
undef($memory_5);
#line 307
undef($memory_6);
#line 307
undef($memory_7);
#line 307
undef($memory_8);
#line 308
$memory_4 = $memory_0->{'language'};
#line 308
$memory_3 = compiler_priv::get_out_ext($memory_4);
#line 308
undef($memory_4);
#line 309
$memory_4 = {};
#line 310
$memory_5 = c_fe_lib::get_module_files($memory_1);
#line 310
$memory_6 = c_rt_lib::ov_is($memory_5, 'ok');
#line 310
if (c_rt_lib::check_true($memory_6)) {goto label_10;}
#line 315
$memory_6 = c_rt_lib::ov_is($memory_5, 'err');
#line 315
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 315
$memory_6 = "NOMATCHALERT";
#line 315
$memory_6 = [$memory_6,$memory_5];
#line 315
die(dfile::ssave($memory_6));
#line 310
label_10:
#line 310
$memory_7 = c_rt_lib::ov_as($memory_5, 'ok');
#line 311
$memory_10 = ptd::sim();
#line 311
$memory_9 = ptd::arr($memory_10);
#line 311
undef($memory_10);
#line 311
$memory_8 = ptd::ensure($memory_9, $memory_7);
#line 311
undef($memory_9);
#line 311
$memory_10 = 0;
#line 311
$memory_11 = 1;
#line 311
$memory_12 = c_rt_lib::array_len($memory_8);
#line 311
label_14:
#line 311
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 311
if (c_rt_lib::check_true($memory_13)) {goto label_12;}
#line 311
$memory_9 = $memory_8->[$memory_10];
#line 312
$memory_14 = compiler_priv::has_extension($memory_9, $memory_3);
#line 312
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 312
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 312
if (c_rt_lib::check_true($memory_14)) {goto label_16;}
#line 312
undef($memory_14);
#line 312
goto label_13;
#line 312
goto label_16;
#line 312
label_16:
#line 312
undef($memory_14);
#line 313
$memory_14 = compiler_priv::get_module_name($memory_9);
#line 313
hash::set_value($memory_4, $memory_14, $memory_9);
#line 313
undef($memory_14);
#line 313
label_13:
#line 314
$memory_10 = $memory_10 + $memory_11;
#line 314
goto label_14;
#line 314
label_12:
#line 314
undef($memory_8);
#line 314
undef($memory_9);
#line 314
undef($memory_10);
#line 314
undef($memory_11);
#line 314
undef($memory_12);
#line 314
undef($memory_13);
#line 314
undef($memory_7);
#line 315
goto label_9;
#line 315
label_11:
#line 315
$memory_7 = c_rt_lib::ov_as($memory_5, 'err');
#line 316
$memory_8 = {};
#line 316
undef($memory_0);
#line 316
undef($memory_1);
#line 316
undef($memory_2);
#line 316
undef($memory_3);
#line 316
undef($memory_4);
#line 316
undef($memory_5);
#line 316
undef($memory_6);
#line 316
undef($memory_7);
#line 316
return $memory_8;
#line 316
undef($memory_8);
#line 316
undef($memory_7);
#line 317
goto label_9;
#line 317
label_9:
#line 317
undef($memory_5);
#line 317
undef($memory_6);
#line 318
$memory_5 = {};
#line 319
$memory_7 = 0;
#line 319
$memory_8 = 1;
#line 319
$memory_9 = c_rt_lib::array_len($memory_2);
#line 319
label_19:
#line 319
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 319
if (c_rt_lib::check_true($memory_10)) {goto label_17;}
#line 319
$memory_6 = $memory_2->[$memory_7];
#line 320
$memory_12 = $memory_6->{'file'};
#line 320
$memory_11 = compiler_priv::get_module_name($memory_12);
#line 320
undef($memory_12);
#line 321
$memory_12 = compiler_priv::mk_path_module($memory_6, $memory_11, $memory_0);
#line 322
hash::set_value($memory_5, $memory_11, $memory_12);
#line 322
undef($memory_11);
#line 322
undef($memory_12);
#line 323
$memory_7 = $memory_7 + $memory_8;
#line 323
goto label_19;
#line 323
label_17:
#line 323
undef($memory_6);
#line 323
undef($memory_7);
#line 323
undef($memory_8);
#line 323
undef($memory_9);
#line 323
undef($memory_10);
#line 324
undef($memory_0);
#line 324
undef($memory_1);
#line 324
undef($memory_2);
#line 324
undef($memory_3);
#line 324
undef($memory_4);
#line 324
return $memory_5;
#line 324
undef($memory_1);
#line 324
undef($memory_2);
#line 324
undef($memory_3);
#line 324
undef($memory_4);
#line 324
undef($memory_5);
#line 324
undef($memory_0);
#line 324
return;
}

sub compiler_priv::parse_module($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 331
$memory_3 = "processing ";
#line 331
$memory_3 = $memory_3 . $memory_0;
#line 331
$memory_4 = "...";
#line 331
$memory_3 = $memory_3 . $memory_4;
#line 331
undef($memory_4);
#line 331
c_fe_lib::print($memory_3);
#line 331
undef($memory_3);
#line 332
$memory_8 = ptd::sim();
#line 332
$memory_9 = ptd::sim();
#line 332
$memory_7 = {ok => $memory_8,err => $memory_9,};
#line 332
undef($memory_8);
#line 332
undef($memory_9);
#line 332
$memory_6 = ptd::var($memory_7);
#line 332
undef($memory_7);
#line 332
$memory_7 = c_fe_lib::file_to_string($memory_1);
#line 332
$memory_5 = ptd::ensure($memory_6, $memory_7);
#line 332
undef($memory_7);
#line 332
undef($memory_6);
#line 332
$memory_4 = c_rt_lib::ov_is($memory_5, 'ok');
#line 332
if (c_rt_lib::check_true($memory_4)) {goto label_1;}
#line 332
undef($memory_0);
#line 332
undef($memory_1);
#line 332
undef($memory_3);
#line 332
undef($memory_4);
#line 332
$_[2] = $memory_2;return $memory_5;
#line 332
label_1:
#line 332
$memory_3 = c_rt_lib::ov_as($memory_5, 'ok');
#line 332
undef($memory_4);
#line 332
undef($memory_5);
#line 333
$memory_4 = nparser::sparse($memory_3, $memory_0);
#line 334
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 334
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 340
$memory_5 = c_rt_lib::ov_is($memory_4, 'error');
#line 340
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 340
$memory_5 = "NOMATCHALERT";
#line 340
$memory_5 = [$memory_5,$memory_4];
#line 340
die(dfile::ssave($memory_5));
#line 334
label_3:
#line 334
$memory_6 = c_rt_lib::ov_as($memory_4, 'ok');
#line 335
$memory_7 = module_checker::check_module($memory_6);
#line 336
$memory_8 = "module_warnings";
#line 336
$memory_8 = c_rt_lib::get_ref_hash($memory_2, $memory_8);
#line 336
$memory_9 = $memory_7->{'warnings'};
#line 336
hash::set_value($memory_8, $memory_0, $memory_9);
#line 336
undef($memory_9);
#line 336
$memory_9 = "module_warnings";
#line 336
c_rt_lib::set_ref_hash($memory_2, $memory_9, $memory_8);
#line 336
undef($memory_9);
#line 336
undef($memory_8);
#line 337
$memory_8 = "module_errors";
#line 337
$memory_8 = c_rt_lib::get_ref_hash($memory_2, $memory_8);
#line 337
$memory_9 = $memory_7->{'errors'};
#line 337
hash::set_value($memory_8, $memory_0, $memory_9);
#line 337
undef($memory_9);
#line 337
$memory_9 = "module_errors";
#line 337
c_rt_lib::set_ref_hash($memory_2, $memory_9, $memory_8);
#line 337
undef($memory_9);
#line 337
undef($memory_8);
#line 338
$memory_9 = $memory_7->{'errors'};
#line 338
$memory_8 = array::len($memory_9);
#line 338
undef($memory_9);
#line 338
$memory_9 = 0;
#line 338
$memory_8 = c_rt_lib::to_nl($memory_8 == $memory_9);
#line 338
undef($memory_9);
#line 338
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 338
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 338
if (c_rt_lib::check_true($memory_8)) {goto label_6;}
#line 338
$memory_9 = "";
#line 338
$memory_9 = c_rt_lib::ov_mk_arg('err', $memory_9);
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
undef($memory_8);
#line 338
$_[2] = $memory_2;return $memory_9;
#line 338
undef($memory_9);
#line 338
goto label_6;
#line 338
label_6:
#line 338
undef($memory_8);
#line 339
$memory_8 = c_rt_lib::ov_mk_arg('ok', $memory_6);
#line 339
undef($memory_0);
#line 339
undef($memory_1);
#line 339
undef($memory_3);
#line 339
undef($memory_4);
#line 339
undef($memory_5);
#line 339
undef($memory_6);
#line 339
undef($memory_7);
#line 339
$_[2] = $memory_2;return $memory_8;
#line 339
undef($memory_8);
#line 339
undef($memory_7);
#line 339
undef($memory_6);
#line 340
goto label_2;
#line 340
label_4:
#line 340
$memory_6 = c_rt_lib::ov_as($memory_4, 'error');
#line 341
$memory_7 = "module_warnings";
#line 341
$memory_7 = c_rt_lib::get_ref_hash($memory_2, $memory_7);
#line 341
$memory_8 = [];
#line 341
hash::set_value($memory_7, $memory_0, $memory_8);
#line 341
undef($memory_8);
#line 341
$memory_8 = "module_warnings";
#line 341
c_rt_lib::set_ref_hash($memory_2, $memory_8, $memory_7);
#line 341
undef($memory_8);
#line 341
undef($memory_7);
#line 342
$memory_7 = "module_errors";
#line 342
$memory_7 = c_rt_lib::get_ref_hash($memory_2, $memory_7);
#line 342
hash::set_value($memory_7, $memory_0, $memory_6);
#line 342
$memory_8 = "module_errors";
#line 342
c_rt_lib::set_ref_hash($memory_2, $memory_8, $memory_7);
#line 342
undef($memory_8);
#line 342
undef($memory_7);
#line 343
$memory_7 = "";
#line 343
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_7);
#line 343
undef($memory_0);
#line 343
undef($memory_1);
#line 343
undef($memory_3);
#line 343
undef($memory_4);
#line 343
undef($memory_5);
#line 343
undef($memory_6);
#line 343
$_[2] = $memory_2;return $memory_7;
#line 343
undef($memory_7);
#line 343
undef($memory_6);
#line 344
goto label_2;
#line 344
label_2:
#line 344
undef($memory_5);
#line 344
undef($memory_3);
#line 344
undef($memory_4);
#line 344
undef($memory_0);
#line 344
undef($memory_1);
#line 344
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub compiler_priv::get_mathematical_func($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];
#line 348
$memory_1 = {};
#line 349
$memory_3 = $memory_0->{'math_fun'};
#line 349
$memory_2 = c_fe_lib::file_to_string($memory_3);
#line 349
undef($memory_3);
#line 349
$memory_3 = c_rt_lib::ov_is($memory_2, 'ok');
#line 349
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 362
$memory_3 = c_rt_lib::ov_is($memory_2, 'err');
#line 362
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 362
$memory_3 = "NOMATCHALERT";
#line 362
$memory_3 = [$memory_3,$memory_2];
#line 362
die(dfile::ssave($memory_3));
#line 349
label_2:
#line 349
$memory_4 = c_rt_lib::ov_as($memory_2, 'ok');
#line 350
$memory_5 = "list of mathematical functions loaded";
#line 350
c_fe_lib::print($memory_5);
#line 350
undef($memory_5);
#line 351
$memory_5 = dfile::try_sload($memory_4);
#line 352
$memory_6 = [];
#line 353
$memory_7 = c_rt_lib::ov_is($memory_5, 'ok');
#line 353
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 355
$memory_7 = c_rt_lib::ov_is($memory_5, 'err');
#line 355
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 355
$memory_7 = "NOMATCHALERT";
#line 355
$memory_7 = [$memory_7,$memory_5];
#line 355
die(dfile::ssave($memory_7));
#line 353
label_5:
#line 353
$memory_8 = c_rt_lib::ov_as($memory_5, 'ok');
#line 354
$memory_6 = $memory_8;
#line 354
undef($memory_8);
#line 355
goto label_4;
#line 355
label_6:
#line 355
$memory_8 = c_rt_lib::ov_as($memory_5, 'err');
#line 356
$memory_9 = "could not parse list of mathematical functions:";
#line 356
c_fe_lib::print($memory_9);
#line 356
undef($memory_9);
#line 357
c_fe_lib::print($memory_8);
#line 357
undef($memory_8);
#line 358
goto label_4;
#line 358
label_4:
#line 358
undef($memory_7);
#line 359
$memory_8 = 0;
#line 359
$memory_9 = 1;
#line 359
$memory_10 = c_rt_lib::array_len($memory_6);
#line 359
label_9:
#line 359
$memory_11 = c_rt_lib::to_nl($memory_8 >= $memory_10);
#line 359
if (c_rt_lib::check_true($memory_11)) {goto label_7;}
#line 359
$memory_7 = $memory_6->[$memory_8];
#line 360
$memory_12 = 1;
#line 360
hash::set_value($memory_1, $memory_7, $memory_12);
#line 360
undef($memory_12);
#line 361
$memory_8 = $memory_8 + $memory_9;
#line 361
goto label_9;
#line 361
label_7:
#line 361
undef($memory_7);
#line 361
undef($memory_8);
#line 361
undef($memory_9);
#line 361
undef($memory_10);
#line 361
undef($memory_11);
#line 361
undef($memory_5);
#line 361
undef($memory_6);
#line 361
undef($memory_4);
#line 362
goto label_1;
#line 362
label_3:
#line 362
$memory_4 = c_rt_lib::ov_as($memory_2, 'err');
#line 363
$memory_5 = "NOT LOAD: list of mathematical functions";
#line 363
c_fe_lib::print($memory_5);
#line 363
undef($memory_5);
#line 363
undef($memory_4);
#line 364
goto label_1;
#line 364
label_1:
#line 364
undef($memory_2);
#line 364
undef($memory_3);
#line 365
undef($memory_0);
#line 365
return $memory_1;
#line 365
undef($memory_1);
#line 365
undef($memory_0);
#line 365
return;
}

sub compiler_priv::compile_ide($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];
#line 369
$memory_1 = {};
#line 370
$memory_2 = {};
#line 371
$memory_3 = {};
#line 372
$memory_4 = {};
#line 373
$memory_6 = {};
#line 373
$memory_7 = {};
#line 373
$memory_8 = {};
#line 373
$memory_9 = {};
#line 373
$memory_10 = c_rt_lib::ov_mk_none('ok');
#line 373
$memory_5 = {module_errors => $memory_6,module_warnings => $memory_7,type_errors => $memory_8,type_warnings => $memory_9,loop_error => $memory_10,};
#line 373
undef($memory_6);
#line 373
undef($memory_7);
#line 373
undef($memory_8);
#line 373
undef($memory_9);
#line 373
undef($memory_10);
#line 380
$memory_7 = compiler_priv::get_mathematical_func($memory_0);
#line 380
$memory_8 = $memory_0->{'optimization'};
#line 380
$memory_6 = post_processing::init($memory_7, $memory_8);
#line 380
undef($memory_8);
#line 380
undef($memory_7);
#line 381
$memory_7 = {};
#line 382
$memory_9 = $memory_0->{'language'};
#line 382
$memory_8 = compiler_priv::get_generator_state($memory_9);
#line 382
undef($memory_9);
#line 383
label_2:
#line 384
$memory_9 = {};
#line 384
$memory_10 = $memory_9;
#line 384
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'type_errors'} = $memory_10;
#line 384
undef($memory_9);
#line 384
undef($memory_10);
#line 385
$memory_9 = {};
#line 385
$memory_10 = $memory_9;
#line 385
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'type_warnings'} = $memory_10;
#line 385
undef($memory_9);
#line 385
undef($memory_10);
#line 386
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 386
$memory_10 = $memory_9;
#line 386
 if (c_rt_lib::get_hashcount($memory_5) > 1) {$memory_5 = {%{$memory_5}};}$memory_5->{'loop_error'} = $memory_10;
#line 386
undef($memory_9);
#line 386
undef($memory_10);
#line 387
$memory_9 = compiler_priv::get_files_to_parse($memory_0);
#line 388
$memory_10 = 0;
#line 389
$memory_13 = c_rt_lib::init_iter($memory_9);
#line 389
label_5:
#line 389
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 389
if (c_rt_lib::check_true($memory_11)) {goto label_3;}
#line 389
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 389
$memory_12 = c_rt_lib::hash_get_value($memory_9, $memory_11);
#line 390
$memory_15 = $memory_12->{'src'};
#line 390
$memory_14 = c_fe_lib::get_modif_time($memory_15);
#line 390
undef($memory_15);
#line 391
$memory_15 = $memory_14;
#line 391
$memory_15 = c_rt_lib::ov_is($memory_15, 'err');
#line 391
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 391
if (c_rt_lib::check_true($memory_15)) {goto label_7;}
#line 391
undef($memory_14);
#line 391
undef($memory_15);
#line 391
goto label_4;
#line 391
goto label_7;
#line 391
label_7:
#line 391
undef($memory_15);
#line 392
$memory_15 = $memory_14;
#line 392
$memory_15 = c_rt_lib::ov_as($memory_15, 'ok');
#line 392
$memory_14 = $memory_15;
#line 392
undef($memory_15);
#line 393
$memory_15 = hash::has_key($memory_1, $memory_11);
#line 393
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 393
if (c_rt_lib::check_true($memory_15)) {goto label_9;}
#line 394
$memory_16 = hash::get_value($memory_1, $memory_11);
#line 395
$memory_17 = c_rt_lib::to_nl($memory_14 > $memory_16);
#line 395
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 395
$memory_17 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_17));
#line 395
if (c_rt_lib::check_true($memory_17)) {goto label_11;}
#line 395
undef($memory_14);
#line 395
undef($memory_15);
#line 395
undef($memory_16);
#line 395
undef($memory_17);
#line 395
goto label_4;
#line 395
goto label_11;
#line 395
label_11:
#line 395
undef($memory_17);
#line 395
undef($memory_16);
#line 396
goto label_9;
#line 396
label_9:
#line 396
undef($memory_15);
#line 397
hash::set_value($memory_1, $memory_11, $memory_14);
#line 398
hash::set_value($memory_4, $memory_11, $memory_12);
#line 399
$memory_15 = 1;
#line 399
$memory_10 = $memory_10 + $memory_15;
#line 399
undef($memory_15);
#line 399
undef($memory_14);
#line 399
label_4:
#line 400
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 400
goto label_5;
#line 400
label_3:
#line 400
undef($memory_11);
#line 400
undef($memory_12);
#line 400
undef($memory_13);
#line 401
$memory_13 = c_rt_lib::init_iter($memory_7);
#line 401
label_14:
#line 401
$memory_11 = c_rt_lib::is_end_hash($memory_13);
#line 401
if (c_rt_lib::check_true($memory_11)) {goto label_12;}
#line 401
$memory_11 = c_rt_lib::get_key_iter($memory_13);
#line 401
$memory_12 = c_rt_lib::hash_get_value($memory_7, $memory_11);
#line 402
$memory_14 = hash::has_key($memory_9, $memory_11);
#line 402
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 402
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 402
if (c_rt_lib::check_true($memory_14)) {goto label_16;}
#line 403
$memory_15 = 1;
#line 403
$memory_10 = $memory_10 + $memory_15;
#line 403
undef($memory_15);
#line 404
$memory_15 = "module_errors";
#line 404
$memory_15 = c_rt_lib::get_ref_hash($memory_5, $memory_15);
#line 404
hash::delete($memory_15, $memory_11);
#line 404
$memory_16 = "module_errors";
#line 404
c_rt_lib::set_ref_hash($memory_5, $memory_16, $memory_15);
#line 404
undef($memory_16);
#line 404
undef($memory_15);
#line 405
$memory_15 = "module_warnings";
#line 405
$memory_15 = c_rt_lib::get_ref_hash($memory_5, $memory_15);
#line 405
hash::delete($memory_15, $memory_11);
#line 405
$memory_16 = "module_warnings";
#line 405
c_rt_lib::set_ref_hash($memory_5, $memory_16, $memory_15);
#line 405
undef($memory_16);
#line 405
undef($memory_15);
#line 406
hash::delete($memory_2, $memory_11);
#line 407
hash::delete($memory_1, $memory_11);
#line 408
hash::delete($memory_4, $memory_11);
#line 409
hash::delete($memory_3, $memory_11);
#line 410
post_processing::clear_module_from_state($memory_6, $memory_11);
#line 411
$memory_15 = $memory_0->{'language'};
#line 411
$memory_15 = c_rt_lib::ov_is($memory_15, 'c');
#line 411
$memory_15 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_15));
#line 411
if (c_rt_lib::check_true($memory_15)) {goto label_18;}
#line 412
generator_c::clear_module_from_state($memory_8, $memory_11);
#line 413
goto label_18;
#line 413
label_18:
#line 413
undef($memory_15);
#line 414
goto label_16;
#line 414
label_16:
#line 414
undef($memory_14);
#line 415
$memory_13 = c_rt_lib::next_iter($memory_13);
#line 415
goto label_14;
#line 415
label_12:
#line 415
undef($memory_11);
#line 415
undef($memory_12);
#line 415
undef($memory_13);
#line 416
$memory_7 = $memory_9;
#line 417
$memory_11 = 0;
#line 417
$memory_11 = c_rt_lib::to_nl($memory_10 == $memory_11);
#line 417
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 417
if (c_rt_lib::check_true($memory_11)) {goto label_20;}
#line 418
$memory_12 = 1;
#line 418
c_fe_lib::sleep($memory_12);
#line 418
undef($memory_12);
#line 419
undef($memory_9);
#line 419
undef($memory_10);
#line 419
undef($memory_11);
#line 419
goto label_2;
#line 420
goto label_20;
#line 420
label_20:
#line 420
undef($memory_11);
#line 421
$memory_11 = {};
#line 422
$memory_14 = c_rt_lib::init_iter($memory_4);
#line 422
label_23:
#line 422
$memory_12 = c_rt_lib::is_end_hash($memory_14);
#line 422
if (c_rt_lib::check_true($memory_12)) {goto label_21;}
#line 422
$memory_12 = c_rt_lib::get_key_iter($memory_14);
#line 422
$memory_13 = c_rt_lib::hash_get_value($memory_4, $memory_12);
#line 423
$memory_16 = $memory_13->{'src'};
#line 423
$memory_15 = compiler_priv::parse_module($memory_12, $memory_16, $memory_5);
#line 423
undef($memory_16);
#line 423
$memory_16 = c_rt_lib::ov_is($memory_15, 'ok');
#line 423
if (c_rt_lib::check_true($memory_16)) {goto label_25;}
#line 426
$memory_16 = c_rt_lib::ov_is($memory_15, 'err');
#line 426
if (c_rt_lib::check_true($memory_16)) {goto label_26;}
#line 426
$memory_16 = "NOMATCHALERT";
#line 426
$memory_16 = [$memory_16,$memory_15];
#line 426
die(dfile::ssave($memory_16));
#line 423
label_25:
#line 423
$memory_17 = c_rt_lib::ov_as($memory_15, 'ok');
#line 424
hash::set_value($memory_2, $memory_12, $memory_17);
#line 425
hash::set_value($memory_3, $memory_12, $memory_17);
#line 425
undef($memory_17);
#line 426
goto label_24;
#line 426
label_26:
#line 426
$memory_17 = c_rt_lib::ov_as($memory_15, 'err');
#line 427
hash::set_value($memory_11, $memory_12, $memory_13);
#line 427
undef($memory_17);
#line 428
goto label_24;
#line 428
label_24:
#line 428
undef($memory_15);
#line 428
undef($memory_16);
#line 429
$memory_14 = c_rt_lib::next_iter($memory_14);
#line 429
goto label_23;
#line 429
label_21:
#line 429
undef($memory_12);
#line 429
undef($memory_13);
#line 429
undef($memory_14);
#line 430
$memory_4 = $memory_11;
#line 431
$memory_12 = hash::size($memory_4);
#line 431
$memory_13 = 0;
#line 431
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 431
undef($memory_13);
#line 431
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 431
if (c_rt_lib::check_true($memory_12)) {goto label_28;}
#line 432
compiler_priv::show_and_count_errors($memory_5, $memory_0);
#line 433
$memory_13 = string::lf();
#line 433
$memory_14 = "ERROR: while parsing ";
#line 433
$memory_13 = $memory_13 . $memory_14;
#line 433
undef($memory_14);
#line 433
$memory_14 = hash::size($memory_4);
#line 433
$memory_13 = $memory_13 . $memory_14;
#line 433
undef($memory_14);
#line 433
$memory_14 = " modules";
#line 433
$memory_13 = $memory_13 . $memory_14;
#line 433
undef($memory_14);
#line 433
c_fe_lib::print($memory_13);
#line 433
undef($memory_13);
#line 434
$memory_13 = "############################################################";
#line 434
c_fe_lib::print($memory_13);
#line 434
undef($memory_13);
#line 435
undef($memory_9);
#line 435
undef($memory_10);
#line 435
undef($memory_11);
#line 435
undef($memory_12);
#line 435
goto label_2;
#line 436
goto label_28;
#line 436
label_28:
#line 436
undef($memory_12);
#line 437
$memory_12 = $memory_0->{'deref'};
#line 437
compiler_priv::check_modules($memory_2, $memory_5, $memory_12);
#line 437
undef($memory_12);
#line 438
$memory_12 = compiler_priv::show_and_count_errors($memory_5, $memory_0);
#line 438
$memory_13 = 0;
#line 438
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 438
undef($memory_13);
#line 438
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 438
if (c_rt_lib::check_true($memory_12)) {goto label_30;}
#line 439
$memory_13 = "############################################################";
#line 439
c_fe_lib::print($memory_13);
#line 439
undef($memory_13);
#line 440
undef($memory_9);
#line 440
undef($memory_10);
#line 440
undef($memory_11);
#line 440
undef($memory_12);
#line 440
goto label_2;
#line 441
goto label_30;
#line 441
label_30:
#line 441
undef($memory_12);
#line 442
$memory_12 = $memory_0->{'language'};
#line 442
$memory_12 = c_rt_lib::ov_is($memory_12, 'ast');
#line 442
if (c_rt_lib::check_true($memory_12)) {goto label_33;}
#line 442
$memory_12 = $memory_0->{'language'};
#line 442
$memory_12 = c_rt_lib::ov_is($memory_12, 'nl');
#line 442
label_33:
#line 442
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 442
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 442
if (c_rt_lib::check_true($memory_12)) {goto label_32;}
#line 443
$memory_13 = "search constants...";
#line 443
c_fe_lib::print($memory_13);
#line 443
undef($memory_13);
#line 444
$memory_13 = {};
#line 445
$memory_14 = compiler_priv::translate($memory_3, $memory_6);
#line 446
$memory_16 = $memory_0->{'cache_path'};
#line 446
$memory_17 = $memory_0->{'language'};
#line 446
$memory_15 = compiler_priv::generate_modules_to_files($memory_14, $memory_9, $memory_16, $memory_8, $memory_17);
#line 446
undef($memory_17);
#line 446
undef($memory_16);
#line 447
$memory_16 = c_rt_lib::ov_is($memory_15, 'err');
#line 447
if (c_rt_lib::check_true($memory_16)) {goto label_35;}
#line 451
$memory_16 = c_rt_lib::ov_is($memory_15, 'ok');
#line 451
if (c_rt_lib::check_true($memory_16)) {goto label_36;}
#line 451
$memory_16 = "NOMATCHALERT";
#line 451
$memory_16 = [$memory_16,$memory_15];
#line 451
die(dfile::ssave($memory_16));
#line 447
label_35:
#line 447
$memory_17 = c_rt_lib::ov_as($memory_15, 'err');
#line 448
$memory_20 = c_rt_lib::init_iter($memory_17);
#line 448
label_39:
#line 448
$memory_18 = c_rt_lib::is_end_hash($memory_20);
#line 448
if (c_rt_lib::check_true($memory_18)) {goto label_37;}
#line 448
$memory_18 = c_rt_lib::get_key_iter($memory_20);
#line 448
$memory_19 = c_rt_lib::hash_get_value($memory_17, $memory_18);
#line 449
$memory_21 = hash::get_value($memory_2, $memory_18);
#line 449
hash::set_value($memory_13, $memory_18, $memory_21);
#line 449
undef($memory_21);
#line 450
$memory_20 = c_rt_lib::next_iter($memory_20);
#line 450
goto label_39;
#line 450
label_37:
#line 450
undef($memory_18);
#line 450
undef($memory_19);
#line 450
undef($memory_20);
#line 450
undef($memory_17);
#line 451
goto label_34;
#line 451
label_36:
#line 451
$memory_17 = c_rt_lib::ov_as($memory_15, 'ok');
#line 451
undef($memory_17);
#line 452
goto label_34;
#line 452
label_34:
#line 452
undef($memory_15);
#line 452
undef($memory_16);
#line 453
$memory_3 = $memory_13;
#line 453
undef($memory_13);
#line 453
undef($memory_14);
#line 454
goto label_31;
#line 454
label_32:
#line 455
$memory_13 = {};
#line 456
$memory_16 = c_rt_lib::init_iter($memory_3);
#line 456
label_42:
#line 456
$memory_14 = c_rt_lib::is_end_hash($memory_16);
#line 456
if (c_rt_lib::check_true($memory_14)) {goto label_40;}
#line 456
$memory_14 = c_rt_lib::get_key_iter($memory_16);
#line 456
$memory_15 = c_rt_lib::hash_get_value($memory_3, $memory_14);
#line 457
$memory_17 = "saving file: ";
#line 457
$memory_17 = $memory_17 . $memory_14;
#line 457
c_fe_lib::print($memory_17);
#line 457
undef($memory_17);
#line 458
$memory_18 = hash::get_value($memory_9, $memory_14);
#line 458
$memory_18 = $memory_18->{'dst'};
#line 458
$memory_17 = compiler_priv::save_module_to_file($memory_15, $memory_18);
#line 458
undef($memory_18);
#line 458
$memory_18 = c_rt_lib::ov_is($memory_17, 'err');
#line 458
if (c_rt_lib::check_true($memory_18)) {goto label_44;}
#line 461
$memory_18 = c_rt_lib::ov_is($memory_17, 'ok');
#line 461
if (c_rt_lib::check_true($memory_18)) {goto label_45;}
#line 461
$memory_18 = "NOMATCHALERT";
#line 461
$memory_18 = [$memory_18,$memory_17];
#line 461
die(dfile::ssave($memory_18));
#line 458
label_44:
#line 458
$memory_19 = c_rt_lib::ov_as($memory_17, 'err');
#line 459
$memory_20 = "ERROR: ";
#line 459
$memory_20 = $memory_20 . $memory_19;
#line 459
c_fe_lib::print($memory_20);
#line 459
undef($memory_20);
#line 460
hash::set_value($memory_13, $memory_14, $memory_15);
#line 460
undef($memory_19);
#line 461
goto label_43;
#line 461
label_45:
#line 461
$memory_19 = c_rt_lib::ov_as($memory_17, 'ok');
#line 461
undef($memory_19);
#line 462
goto label_43;
#line 462
label_43:
#line 462
undef($memory_17);
#line 462
undef($memory_18);
#line 463
$memory_16 = c_rt_lib::next_iter($memory_16);
#line 463
goto label_42;
#line 463
label_40:
#line 463
undef($memory_14);
#line 463
undef($memory_15);
#line 463
undef($memory_16);
#line 464
$memory_3 = $memory_13;
#line 464
undef($memory_13);
#line 465
goto label_31;
#line 465
label_31:
#line 465
undef($memory_12);
#line 466
$memory_12 = hash::size($memory_3);
#line 466
$memory_13 = 0;
#line 466
$memory_12 = c_rt_lib::to_nl($memory_12 > $memory_13);
#line 466
undef($memory_13);
#line 466
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 466
if (c_rt_lib::check_true($memory_12)) {goto label_47;}
#line 467
$memory_13 = "Can not save ";
#line 467
$memory_14 = hash::size($memory_3);
#line 467
$memory_13 = $memory_13 . $memory_14;
#line 467
undef($memory_14);
#line 467
$memory_14 = " files. ";
#line 467
$memory_13 = $memory_13 . $memory_14;
#line 467
undef($memory_14);
#line 468
$memory_14 = string::lf();
#line 468
$memory_15 = "ERROR: ";
#line 468
$memory_14 = $memory_14 . $memory_15;
#line 468
undef($memory_15);
#line 468
$memory_14 = $memory_14 . $memory_13;
#line 468
c_fe_lib::print($memory_14);
#line 468
undef($memory_14);
#line 468
undef($memory_13);
#line 469
goto label_46;
#line 469
label_47:
#line 470
$memory_13 = $memory_0->{'mode'};
#line 470
$memory_13 = c_rt_lib::ov_is($memory_13, 'idex');
#line 470
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 470
if (c_rt_lib::check_true($memory_13)) {goto label_49;}
#line 470
$memory_14 = $memory_0->{'mode'};
#line 470
$memory_14 = c_rt_lib::ov_as($memory_14, 'idex');
#line 470
c_fe_lib::exec_cmd($memory_14);
#line 470
undef($memory_14);
#line 470
goto label_49;
#line 470
label_49:
#line 470
undef($memory_13);
#line 471
$memory_13 = string::lf();
#line 471
$memory_14 = "OK: compile, check types and save changes without errors";
#line 471
$memory_13 = $memory_13 . $memory_14;
#line 471
undef($memory_14);
#line 471
c_fe_lib::print($memory_13);
#line 471
undef($memory_13);
#line 472
goto label_46;
#line 472
label_46:
#line 472
undef($memory_12);
#line 473
$memory_12 = "############################################################";
#line 473
c_fe_lib::print($memory_12);
#line 473
undef($memory_12);
#line 473
undef($memory_9);
#line 473
undef($memory_10);
#line 473
undef($memory_11);
#line 383
goto label_2;
#line 383
undef($memory_1);
#line 383
undef($memory_2);
#line 383
undef($memory_3);
#line 383
undef($memory_4);
#line 383
undef($memory_5);
#line 383
undef($memory_6);
#line 383
undef($memory_7);
#line 383
undef($memory_8);
#line 383
undef($memory_0);
#line 383
return;
}

sub compiler_priv::compile_strict_file($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];
#line 478
$memory_1 = {};
#line 479
$memory_3 = {};
#line 479
$memory_4 = {};
#line 479
$memory_5 = {};
#line 479
$memory_6 = {};
#line 479
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 479
$memory_2 = {module_errors => $memory_3,module_warnings => $memory_4,type_errors => $memory_5,type_warnings => $memory_6,loop_error => $memory_7,};
#line 479
undef($memory_3);
#line 479
undef($memory_4);
#line 479
undef($memory_5);
#line 479
undef($memory_6);
#line 479
undef($memory_7);
#line 486
$memory_3 = 0;
#line 487
$memory_4 = compiler_priv::get_files_to_parse($memory_0);
#line 488
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 488
label_3:
#line 488
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 488
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 488
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 488
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 489
$memory_9 = $memory_6->{'src'};
#line 489
$memory_8 = compiler_priv::parse_module($memory_5, $memory_9, $memory_2);
#line 489
undef($memory_9);
#line 489
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 489
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 491
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 491
if (c_rt_lib::check_true($memory_9)) {goto label_6;}
#line 491
$memory_9 = "NOMATCHALERT";
#line 491
$memory_9 = [$memory_9,$memory_8];
#line 491
die(dfile::ssave($memory_9));
#line 489
label_5:
#line 489
$memory_10 = c_rt_lib::ov_as($memory_8, 'ok');
#line 490
hash::set_value($memory_1, $memory_5, $memory_10);
#line 490
undef($memory_10);
#line 491
goto label_4;
#line 491
label_6:
#line 491
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 492
$memory_11 = 1;
#line 492
$memory_3 = $memory_3 + $memory_11;
#line 492
undef($memory_11);
#line 492
undef($memory_10);
#line 493
goto label_4;
#line 493
label_4:
#line 493
undef($memory_8);
#line 493
undef($memory_9);
#line 494
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 494
goto label_3;
#line 494
label_1:
#line 494
undef($memory_5);
#line 494
undef($memory_6);
#line 494
undef($memory_7);
#line 495
$memory_5 = 0;
#line 495
$memory_5 = c_rt_lib::to_nl($memory_3 != $memory_5);
#line 495
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 495
if (c_rt_lib::check_true($memory_5)) {goto label_8;}
#line 496
compiler_priv::show_and_count_errors($memory_2, $memory_0);
#line 497
$memory_6 = c_rt_lib::to_nl(0);
#line 497
undef($memory_0);
#line 497
undef($memory_1);
#line 497
undef($memory_2);
#line 497
undef($memory_3);
#line 497
undef($memory_4);
#line 497
undef($memory_5);
#line 497
return $memory_6;
#line 497
undef($memory_6);
#line 498
goto label_8;
#line 498
label_8:
#line 498
undef($memory_5);
#line 499
$memory_5 = $memory_0->{'deref'};
#line 499
compiler_priv::check_modules($memory_1, $memory_2, $memory_5);
#line 499
undef($memory_5);
#line 500
$memory_5 = compiler_priv::show_and_count_errors($memory_2, $memory_0);
#line 500
$memory_6 = 0;
#line 500
$memory_5 = c_rt_lib::to_nl($memory_5 > $memory_6);
#line 500
undef($memory_6);
#line 500
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 500
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 501
$memory_6 = c_rt_lib::to_nl(0);
#line 501
undef($memory_0);
#line 501
undef($memory_1);
#line 501
undef($memory_2);
#line 501
undef($memory_3);
#line 501
undef($memory_4);
#line 501
undef($memory_5);
#line 501
return $memory_6;
#line 501
undef($memory_6);
#line 502
goto label_10;
#line 502
label_10:
#line 502
undef($memory_5);
#line 503
$memory_5 = $memory_0->{'language'};
#line 503
$memory_5 = c_rt_lib::ov_is($memory_5, 'ast');
#line 503
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 503
$memory_5 = $memory_0->{'language'};
#line 503
$memory_5 = c_rt_lib::ov_is($memory_5, 'nl');
#line 503
label_13:
#line 503
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 503
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 503
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 504
$memory_7 = $memory_0->{'language'};
#line 504
$memory_6 = compiler_priv::get_generator_state($memory_7);
#line 504
undef($memory_7);
#line 505
$memory_7 = "search constants...";
#line 505
c_fe_lib::print($memory_7);
#line 505
undef($memory_7);
#line 506
$memory_8 = compiler_priv::get_mathematical_func($memory_0);
#line 506
$memory_9 = $memory_0->{'optimization'};
#line 506
$memory_7 = post_processing::init($memory_8, $memory_9);
#line 506
undef($memory_9);
#line 506
undef($memory_8);
#line 507
$memory_8 = compiler_priv::translate($memory_1, $memory_7);
#line 508
$memory_9 = $memory_0->{'cache_path'};
#line 508
$memory_10 = $memory_0->{'language'};
#line 508
compiler_priv::generate_modules_to_files($memory_8, $memory_4, $memory_9, $memory_6, $memory_10);
#line 508
undef($memory_10);
#line 508
undef($memory_9);
#line 508
undef($memory_6);
#line 508
undef($memory_7);
#line 508
undef($memory_8);
#line 509
goto label_11;
#line 509
label_12:
#line 510
$memory_8 = c_rt_lib::init_iter($memory_1);
#line 510
label_16:
#line 510
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 510
if (c_rt_lib::check_true($memory_6)) {goto label_14;}
#line 510
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 510
$memory_7 = c_rt_lib::hash_get_value($memory_1, $memory_6);
#line 511
$memory_9 = "saving file: ";
#line 511
$memory_9 = $memory_9 . $memory_6;
#line 511
c_fe_lib::print($memory_9);
#line 511
undef($memory_9);
#line 512
$memory_10 = hash::get_value($memory_4, $memory_6);
#line 512
$memory_10 = $memory_10->{'dst'};
#line 512
$memory_9 = compiler_priv::save_module_to_file($memory_7, $memory_10);
#line 512
undef($memory_10);
#line 512
$memory_10 = c_rt_lib::ov_is($memory_9, 'err');
#line 512
if (c_rt_lib::check_true($memory_10)) {goto label_18;}
#line 515
$memory_10 = c_rt_lib::ov_is($memory_9, 'ok');
#line 515
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 515
$memory_10 = "NOMATCHALERT";
#line 515
$memory_10 = [$memory_10,$memory_9];
#line 515
die(dfile::ssave($memory_10));
#line 512
label_18:
#line 512
$memory_11 = c_rt_lib::ov_as($memory_9, 'err');
#line 513
$memory_12 = "ERROR: ";
#line 513
$memory_12 = $memory_12 . $memory_11;
#line 513
c_fe_lib::print($memory_12);
#line 513
undef($memory_12);
#line 514
$memory_12 = c_rt_lib::to_nl(0);
#line 514
undef($memory_0);
#line 514
undef($memory_1);
#line 514
undef($memory_2);
#line 514
undef($memory_3);
#line 514
undef($memory_4);
#line 514
undef($memory_5);
#line 514
undef($memory_6);
#line 514
undef($memory_7);
#line 514
undef($memory_8);
#line 514
undef($memory_9);
#line 514
undef($memory_10);
#line 514
undef($memory_11);
#line 514
return $memory_12;
#line 514
undef($memory_12);
#line 514
undef($memory_11);
#line 515
goto label_17;
#line 515
label_19:
#line 515
$memory_11 = c_rt_lib::ov_as($memory_9, 'ok');
#line 515
undef($memory_11);
#line 516
goto label_17;
#line 516
label_17:
#line 516
undef($memory_9);
#line 516
undef($memory_10);
#line 517
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 517
goto label_16;
#line 517
label_14:
#line 517
undef($memory_6);
#line 517
undef($memory_7);
#line 517
undef($memory_8);
#line 518
goto label_11;
#line 518
label_11:
#line 518
undef($memory_5);
#line 519
$memory_5 = c_rt_lib::to_nl(1);
#line 519
undef($memory_0);
#line 519
undef($memory_1);
#line 519
undef($memory_2);
#line 519
undef($memory_3);
#line 519
undef($memory_4);
#line 519
return $memory_5;
#line 519
undef($memory_5);
#line 519
undef($memory_1);
#line 519
undef($memory_2);
#line 519
undef($memory_3);
#line 519
undef($memory_4);
#line 519
undef($memory_0);
#line 519
return;
}

sub compiler_priv::construct_error_message($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 523
$memory_1 = "";
#line 524
$memory_3 = $memory_0->{'module'};
#line 524
$memory_2 = string::length($memory_3);
#line 524
undef($memory_3);
#line 524
$memory_3 = 0;
#line 524
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_3);
#line 524
undef($memory_3);
#line 524
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 524
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 524
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 524
$memory_3 = " mod: ";
#line 524
$memory_4 = $memory_0->{'module'};
#line 524
$memory_3 = $memory_3 . $memory_4;
#line 524
undef($memory_4);
#line 524
$memory_1 = $memory_1 . $memory_3;
#line 524
undef($memory_3);
#line 524
goto label_2;
#line 524
label_2:
#line 524
undef($memory_2);
#line 525
$memory_3 = $memory_0->{'line'};
#line 525
$memory_2 = string::length($memory_3);
#line 525
undef($memory_3);
#line 525
$memory_3 = 0;
#line 525
$memory_2 = c_rt_lib::to_nl($memory_2 == $memory_3);
#line 525
undef($memory_3);
#line 525
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 525
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 525
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 525
$memory_3 = " line: ";
#line 525
$memory_4 = $memory_0->{'line'};
#line 525
$memory_3 = $memory_3 . $memory_4;
#line 525
undef($memory_4);
#line 525
$memory_1 = $memory_1 . $memory_3;
#line 525
undef($memory_3);
#line 525
goto label_4;
#line 525
label_4:
#line 525
undef($memory_2);
#line 526
$memory_2 = string::lf();
#line 526
$memory_3 = "     ";
#line 526
$memory_2 = $memory_2 . $memory_3;
#line 526
undef($memory_3);
#line 526
$memory_3 = $memory_0->{'message'};
#line 526
$memory_2 = $memory_2 . $memory_3;
#line 526
undef($memory_3);
#line 526
$memory_1 = $memory_1 . $memory_2;
#line 526
undef($memory_2);
#line 527
undef($memory_0);
#line 527
return $memory_1;
#line 527
undef($memory_1);
#line 527
undef($memory_0);
#line 527
return;
}

sub compiler_priv::show_and_count_errors($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;$memory_0 = $_[0];$memory_1 = $_[1];
#line 531
$memory_2 = 0;
#line 532
$memory_3 = 0;
#line 533
$memory_4 = $memory_0->{'module_warnings'};
#line 533
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 533
label_3:
#line 533
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 533
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 533
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 533
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 534
$memory_8 = "WAR";
#line 535
$memory_9 = $memory_1->{'alarm'};
#line 535
$memory_9 = c_rt_lib::ov_is($memory_9, 'wall');
#line 535
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 535
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 535
$memory_10 = "ERR";
#line 535
$memory_8 = $memory_10;
#line 535
undef($memory_10);
#line 535
goto label_5;
#line 535
label_5:
#line 535
undef($memory_9);
#line 536
$memory_10 = 0;
#line 536
$memory_11 = 1;
#line 536
$memory_12 = c_rt_lib::array_len($memory_6);
#line 536
label_8:
#line 536
$memory_13 = c_rt_lib::to_nl($memory_10 >= $memory_12);
#line 536
if (c_rt_lib::check_true($memory_13)) {goto label_6;}
#line 536
$memory_9 = $memory_6->[$memory_10];
#line 537
$memory_14 = compiler_priv::construct_error_message($memory_9);
#line 537
$memory_14 = $memory_8 . $memory_14;
#line 537
c_fe_lib::print($memory_14);
#line 537
undef($memory_14);
#line 538
$memory_10 = $memory_10 + $memory_11;
#line 538
goto label_8;
#line 538
label_6:
#line 538
undef($memory_9);
#line 538
undef($memory_10);
#line 538
undef($memory_11);
#line 538
undef($memory_12);
#line 538
undef($memory_13);
#line 539
$memory_9 = array::len($memory_6);
#line 539
$memory_2 = $memory_2 + $memory_9;
#line 539
undef($memory_9);
#line 540
$memory_10 = $memory_0->{'type_warnings'};
#line 540
$memory_9 = hash::has_key($memory_10, $memory_5);
#line 540
undef($memory_10);
#line 540
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 540
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 541
$memory_11 = $memory_0->{'type_warnings'};
#line 541
$memory_10 = hash::get_value($memory_11, $memory_5);
#line 541
undef($memory_11);
#line 542
$memory_12 = 0;
#line 542
$memory_13 = 1;
#line 542
$memory_14 = c_rt_lib::array_len($memory_10);
#line 542
label_13:
#line 542
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 542
if (c_rt_lib::check_true($memory_15)) {goto label_11;}
#line 542
$memory_11 = $memory_10->[$memory_12];
#line 543
$memory_16 = compiler_priv::construct_error_message($memory_11);
#line 543
$memory_16 = $memory_8 . $memory_16;
#line 543
c_fe_lib::print($memory_16);
#line 543
undef($memory_16);
#line 544
$memory_12 = $memory_12 + $memory_13;
#line 544
goto label_13;
#line 544
label_11:
#line 544
undef($memory_11);
#line 544
undef($memory_12);
#line 544
undef($memory_13);
#line 544
undef($memory_14);
#line 544
undef($memory_15);
#line 545
$memory_11 = array::len($memory_10);
#line 545
$memory_2 = $memory_2 + $memory_11;
#line 545
undef($memory_11);
#line 545
undef($memory_10);
#line 546
goto label_10;
#line 546
label_10:
#line 546
undef($memory_9);
#line 547
$memory_9 = "ERR";
#line 547
$memory_8 = $memory_9;
#line 547
undef($memory_9);
#line 548
$memory_10 = $memory_0->{'module_errors'};
#line 548
$memory_9 = hash::get_value($memory_10, $memory_5);
#line 548
undef($memory_10);
#line 549
$memory_11 = 0;
#line 549
$memory_12 = 1;
#line 549
$memory_13 = c_rt_lib::array_len($memory_9);
#line 549
label_16:
#line 549
$memory_14 = c_rt_lib::to_nl($memory_11 >= $memory_13);
#line 549
if (c_rt_lib::check_true($memory_14)) {goto label_14;}
#line 549
$memory_10 = $memory_9->[$memory_11];
#line 550
$memory_15 = "ERR";
#line 550
$memory_16 = compiler_priv::construct_error_message($memory_10);
#line 550
$memory_15 = $memory_15 . $memory_16;
#line 550
undef($memory_16);
#line 550
c_fe_lib::print($memory_15);
#line 550
undef($memory_15);
#line 551
$memory_11 = $memory_11 + $memory_12;
#line 551
goto label_16;
#line 551
label_14:
#line 551
undef($memory_10);
#line 551
undef($memory_11);
#line 551
undef($memory_12);
#line 551
undef($memory_13);
#line 551
undef($memory_14);
#line 552
$memory_10 = array::len($memory_9);
#line 552
$memory_3 = $memory_3 + $memory_10;
#line 552
undef($memory_10);
#line 553
$memory_11 = $memory_0->{'type_errors'};
#line 553
$memory_10 = hash::has_key($memory_11, $memory_5);
#line 553
undef($memory_11);
#line 553
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 553
if (c_rt_lib::check_true($memory_10)) {goto label_18;}
#line 554
$memory_12 = $memory_0->{'type_errors'};
#line 554
$memory_11 = hash::get_value($memory_12, $memory_5);
#line 554
undef($memory_12);
#line 555
$memory_13 = 0;
#line 555
$memory_14 = 1;
#line 555
$memory_15 = c_rt_lib::array_len($memory_11);
#line 555
label_21:
#line 555
$memory_16 = c_rt_lib::to_nl($memory_13 >= $memory_15);
#line 555
if (c_rt_lib::check_true($memory_16)) {goto label_19;}
#line 555
$memory_12 = $memory_11->[$memory_13];
#line 556
$memory_17 = "ERR";
#line 556
$memory_18 = compiler_priv::construct_error_message($memory_12);
#line 556
$memory_17 = $memory_17 . $memory_18;
#line 556
undef($memory_18);
#line 556
c_fe_lib::print($memory_17);
#line 556
undef($memory_17);
#line 557
$memory_13 = $memory_13 + $memory_14;
#line 557
goto label_21;
#line 557
label_19:
#line 557
undef($memory_12);
#line 557
undef($memory_13);
#line 557
undef($memory_14);
#line 557
undef($memory_15);
#line 557
undef($memory_16);
#line 558
$memory_12 = array::len($memory_11);
#line 558
$memory_3 = $memory_3 + $memory_12;
#line 558
undef($memory_12);
#line 558
undef($memory_11);
#line 559
goto label_18;
#line 559
label_18:
#line 559
undef($memory_10);
#line 559
undef($memory_8);
#line 559
undef($memory_9);
#line 560
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 560
goto label_3;
#line 560
label_1:
#line 560
undef($memory_4);
#line 560
undef($memory_5);
#line 560
undef($memory_6);
#line 560
undef($memory_7);
#line 561
$memory_4 = $memory_0->{'loop_error'};
#line 561
$memory_5 = c_rt_lib::ov_is($memory_4, 'loop');
#line 561
if (c_rt_lib::check_true($memory_5)) {goto label_23;}
#line 568
$memory_5 = c_rt_lib::ov_is($memory_4, 'ok');
#line 568
if (c_rt_lib::check_true($memory_5)) {goto label_24;}
#line 568
$memory_5 = "NOMATCHALERT";
#line 568
$memory_5 = [$memory_5,$memory_4];
#line 568
die(dfile::ssave($memory_5));
#line 561
label_23:
#line 561
$memory_6 = c_rt_lib::ov_as($memory_4, 'loop');
#line 562
$memory_7 = "";
#line 563
$memory_9 = 0;
#line 563
$memory_10 = 1;
#line 563
$memory_11 = c_rt_lib::array_len($memory_6);
#line 563
label_27:
#line 563
$memory_12 = c_rt_lib::to_nl($memory_9 >= $memory_11);
#line 563
if (c_rt_lib::check_true($memory_12)) {goto label_25;}
#line 563
$memory_8 = $memory_6->[$memory_9];
#line 564
$memory_13 = " -> ";
#line 564
$memory_13 = $memory_8 . $memory_13;
#line 564
$memory_7 = $memory_7 . $memory_13;
#line 564
undef($memory_13);
#line 565
$memory_9 = $memory_9 + $memory_10;
#line 565
goto label_27;
#line 565
label_25:
#line 565
undef($memory_8);
#line 565
undef($memory_9);
#line 565
undef($memory_10);
#line 565
undef($memory_11);
#line 565
undef($memory_12);
#line 566
$memory_8 = "ERR Loop found in module imports: ";
#line 566
$memory_8 = $memory_8 . $memory_7;
#line 566
$memory_9 = ". ";
#line 566
$memory_8 = $memory_8 . $memory_9;
#line 566
undef($memory_9);
#line 566
c_fe_lib::print($memory_8);
#line 566
undef($memory_8);
#line 567
$memory_8 = 1;
#line 567
$memory_3 = $memory_3 + $memory_8;
#line 567
undef($memory_8);
#line 567
undef($memory_7);
#line 567
undef($memory_6);
#line 568
goto label_22;
#line 568
label_24:
#line 569
goto label_22;
#line 569
label_22:
#line 569
undef($memory_4);
#line 569
undef($memory_5);
#line 570
$memory_4 = $memory_1->{'alarm'};
#line 570
$memory_4 = c_rt_lib::ov_is($memory_4, 'wall');
#line 570
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 570
if (c_rt_lib::check_true($memory_4)) {goto label_29;}
#line 571
$memory_3 = $memory_3 + $memory_2;
#line 572
$memory_5 = 0;
#line 572
$memory_2 = $memory_5;
#line 572
undef($memory_5);
#line 573
goto label_29;
#line 573
label_29:
#line 573
undef($memory_4);
#line 574
$memory_4 = "ERR: ";
#line 574
$memory_4 = $memory_4 . $memory_3;
#line 574
$memory_5 = " WAR: ";
#line 574
$memory_4 = $memory_4 . $memory_5;
#line 574
undef($memory_5);
#line 574
$memory_4 = $memory_4 . $memory_2;
#line 574
c_fe_lib::print($memory_4);
#line 574
undef($memory_4);
#line 575
undef($memory_0);
#line 575
undef($memory_1);
#line 575
undef($memory_2);
#line 575
return $memory_3;
#line 575
undef($memory_2);
#line 575
undef($memory_3);
#line 575
undef($memory_0);
#line 575
undef($memory_1);
#line 575
return;
}

sub compiler_priv::translate($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 579
$memory_2 = {};
#line 580
$memory_5 = c_rt_lib::init_iter($memory_0);
#line 580
label_3:
#line 580
$memory_3 = c_rt_lib::is_end_hash($memory_5);
#line 580
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 580
$memory_3 = c_rt_lib::get_key_iter($memory_5);
#line 580
$memory_4 = c_rt_lib::hash_get_value($memory_0, $memory_3);
#line 581
$memory_6 = translator::translate($memory_4);
#line 582
hash::set_value($memory_2, $memory_3, $memory_6);
#line 582
undef($memory_6);
#line 583
$memory_5 = c_rt_lib::next_iter($memory_5);
#line 583
goto label_3;
#line 583
label_1:
#line 583
undef($memory_3);
#line 583
undef($memory_4);
#line 583
undef($memory_5);
#line 584
post_processing::find($memory_1, $memory_2);
#line 585
undef($memory_0);
#line 585
$_[1] = $memory_1;return $memory_2;
#line 585
undef($memory_2);
#line 585
undef($memory_0);
#line 585
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub compiler_priv::check_modules($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];
#line 590
$memory_3 = "type checking...";
#line 590
c_fe_lib::print($memory_3);
#line 590
undef($memory_3);
#line 591
$memory_3 = type_checker::check_modules($memory_0, $memory_0);
#line 592
$memory_5 = $memory_3->{'errors'};
#line 592
$memory_4 = array::len($memory_5);
#line 592
undef($memory_5);
#line 593
$memory_5 = $memory_3->{'errors'};
#line 593
$memory_7 = 0;
#line 593
$memory_8 = 1;
#line 593
$memory_9 = c_rt_lib::array_len($memory_5);
#line 593
label_3:
#line 593
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 593
if (c_rt_lib::check_true($memory_10)) {goto label_1;}
#line 593
$memory_6 = $memory_5->[$memory_7];
#line 594
$memory_11 = [];
#line 595
$memory_13 = $memory_1->{'type_errors'};
#line 595
$memory_14 = $memory_6->{'module'};
#line 595
$memory_12 = hash::has_key($memory_13, $memory_14);
#line 595
undef($memory_14);
#line 595
undef($memory_13);
#line 595
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 595
if (c_rt_lib::check_true($memory_12)) {goto label_5;}
#line 596
$memory_14 = $memory_1->{'type_errors'};
#line 596
$memory_15 = $memory_6->{'module'};
#line 596
$memory_13 = hash::get_value($memory_14, $memory_15);
#line 596
undef($memory_15);
#line 596
undef($memory_14);
#line 596
$memory_11 = $memory_13;
#line 596
undef($memory_13);
#line 597
goto label_5;
#line 597
label_5:
#line 597
undef($memory_12);
#line 598
array::push($memory_11, $memory_6);
#line 599
$memory_12 = "type_errors";
#line 599
$memory_12 = c_rt_lib::get_ref_hash($memory_1, $memory_12);
#line 599
$memory_13 = $memory_6->{'module'};
#line 599
hash::set_value($memory_12, $memory_13, $memory_11);
#line 599
undef($memory_13);
#line 599
$memory_13 = "type_errors";
#line 599
c_rt_lib::set_ref_hash($memory_1, $memory_13, $memory_12);
#line 599
undef($memory_13);
#line 599
undef($memory_12);
#line 599
undef($memory_11);
#line 600
$memory_7 = $memory_7 + $memory_8;
#line 600
goto label_3;
#line 600
label_1:
#line 600
undef($memory_5);
#line 600
undef($memory_6);
#line 600
undef($memory_7);
#line 600
undef($memory_8);
#line 600
undef($memory_9);
#line 600
undef($memory_10);
#line 601
$memory_5 = $memory_3->{'warnings'};
#line 601
$memory_7 = 0;
#line 601
$memory_8 = 1;
#line 601
$memory_9 = c_rt_lib::array_len($memory_5);
#line 601
label_8:
#line 601
$memory_10 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 601
if (c_rt_lib::check_true($memory_10)) {goto label_6;}
#line 601
$memory_6 = $memory_5->[$memory_7];
#line 602
$memory_11 = [];
#line 603
$memory_13 = $memory_1->{'type_warnings'};
#line 603
$memory_14 = $memory_6->{'module'};
#line 603
$memory_12 = hash::has_key($memory_13, $memory_14);
#line 603
undef($memory_14);
#line 603
undef($memory_13);
#line 603
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 603
if (c_rt_lib::check_true($memory_12)) {goto label_10;}
#line 604
$memory_14 = $memory_1->{'type_warnings'};
#line 604
$memory_15 = $memory_6->{'module'};
#line 604
$memory_13 = hash::get_value($memory_14, $memory_15);
#line 604
undef($memory_15);
#line 604
undef($memory_14);
#line 604
$memory_11 = $memory_13;
#line 604
undef($memory_13);
#line 605
goto label_10;
#line 605
label_10:
#line 605
undef($memory_12);
#line 606
array::push($memory_11, $memory_6);
#line 607
$memory_12 = "type_warnings";
#line 607
$memory_12 = c_rt_lib::get_ref_hash($memory_1, $memory_12);
#line 607
$memory_13 = $memory_6->{'module'};
#line 607
hash::set_value($memory_12, $memory_13, $memory_11);
#line 607
undef($memory_13);
#line 607
$memory_13 = "type_warnings";
#line 607
c_rt_lib::set_ref_hash($memory_1, $memory_13, $memory_12);
#line 607
undef($memory_13);
#line 607
undef($memory_12);
#line 607
undef($memory_11);
#line 608
$memory_7 = $memory_7 + $memory_8;
#line 608
goto label_8;
#line 608
label_6:
#line 608
undef($memory_5);
#line 608
undef($memory_6);
#line 608
undef($memory_7);
#line 608
undef($memory_8);
#line 608
undef($memory_9);
#line 608
undef($memory_10);
#line 609
$memory_5 = 0;
#line 609
$memory_5 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 609
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 609
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 609
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 609
$memory_6 = "Found ";
#line 609
$memory_6 = $memory_6 . $memory_4;
#line 609
$memory_7 = " errors of types. ";
#line 609
$memory_6 = $memory_6 . $memory_7;
#line 609
undef($memory_7);
#line 609
c_fe_lib::print($memory_6);
#line 609
undef($memory_6);
#line 609
goto label_12;
#line 609
label_12:
#line 609
undef($memory_5);
#line 610
$memory_5 = {};
#line 611
$memory_8 = c_rt_lib::init_iter($memory_0);
#line 611
label_15:
#line 611
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 611
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 611
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 611
$memory_7 = c_rt_lib::hash_get_value($memory_0, $memory_6);
#line 612
$memory_9 = [];
#line 613
$memory_10 = $memory_7->{'import'};
#line 613
$memory_12 = 0;
#line 613
$memory_13 = 1;
#line 613
$memory_14 = c_rt_lib::array_len($memory_10);
#line 613
label_18:
#line 613
$memory_15 = c_rt_lib::to_nl($memory_12 >= $memory_14);
#line 613
if (c_rt_lib::check_true($memory_15)) {goto label_16;}
#line 613
$memory_11 = $memory_10->[$memory_12];
#line 614
$memory_16 = $memory_11->{'name'};
#line 614
array::push($memory_9, $memory_16);
#line 614
undef($memory_16);
#line 615
$memory_12 = $memory_12 + $memory_13;
#line 615
goto label_18;
#line 615
label_16:
#line 615
undef($memory_10);
#line 615
undef($memory_11);
#line 615
undef($memory_12);
#line 615
undef($memory_13);
#line 615
undef($memory_14);
#line 615
undef($memory_15);
#line 616
hash::set_value($memory_5, $memory_6, $memory_9);
#line 616
undef($memory_9);
#line 617
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 617
goto label_15;
#line 617
label_13:
#line 617
undef($memory_6);
#line 617
undef($memory_7);
#line 617
undef($memory_8);
#line 618
$memory_6 = module_checker::search_loops($memory_5);
#line 618
$memory_7 = $memory_6;
#line 618
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'loop_error'} = $memory_7;
#line 618
undef($memory_6);
#line 618
undef($memory_7);
#line 619
$memory_6 = $memory_2;
#line 619
$memory_6 = c_rt_lib::ov_is($memory_6, 'yes');
#line 619
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 619
if (c_rt_lib::check_true($memory_6)) {goto label_20;}
#line 620
$memory_7 = "deleted types: ";
#line 620
$memory_9 = $memory_3->{'deref'};
#line 620
$memory_9 = $memory_9->{'delete'};
#line 620
$memory_8 = array::len($memory_9);
#line 620
undef($memory_9);
#line 620
$memory_7 = $memory_7 . $memory_8;
#line 620
undef($memory_8);
#line 620
c_fe_lib::print($memory_7);
#line 620
undef($memory_7);
#line 621
$memory_7 = "created types: ";
#line 621
$memory_9 = $memory_3->{'deref'};
#line 621
$memory_9 = $memory_9->{'create'};
#line 621
$memory_8 = array::len($memory_9);
#line 621
undef($memory_9);
#line 621
$memory_7 = $memory_7 . $memory_8;
#line 621
undef($memory_8);
#line 621
c_fe_lib::print($memory_7);
#line 621
undef($memory_7);
#line 622
$memory_7 = $memory_2;
#line 622
$memory_7 = c_rt_lib::ov_as($memory_7, 'yes');
#line 622
$memory_9 = $memory_3->{'deref'};
#line 622
$memory_8 = dfile::ssave($memory_9);
#line 622
undef($memory_9);
#line 622
c_fe_lib::string_to_file($memory_7, $memory_8);
#line 622
undef($memory_8);
#line 622
undef($memory_7);
#line 623
goto label_20;
#line 623
label_20:
#line 623
undef($memory_6);
#line 623
undef($memory_3);
#line 623
undef($memory_4);
#line 623
undef($memory_5);
#line 623
undef($memory_0);
#line 623
undef($memory_2);
#line 623
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub compiler_priv::try_save_file($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 627
$memory_3 = c_fe_lib::string_to_file($memory_1, $memory_0);
#line 627
$memory_4 = c_rt_lib::ov_is($memory_3, 'ok');
#line 627
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 628
$memory_4 = c_rt_lib::ov_is($memory_3, 'err');
#line 628
if (c_rt_lib::check_true($memory_4)) {goto label_3;}
#line 628
$memory_4 = "NOMATCHALERT";
#line 628
$memory_4 = [$memory_4,$memory_3];
#line 628
die(dfile::ssave($memory_4));
#line 627
label_2:
#line 627
$memory_5 = c_rt_lib::ov_as($memory_3, 'ok');
#line 627
undef($memory_5);
#line 628
goto label_1;
#line 628
label_3:
#line 628
$memory_5 = c_rt_lib::ov_as($memory_3, 'err');
#line 629
$memory_6 = "ERROR: ";
#line 629
$memory_6 = $memory_6 . $memory_5;
#line 629
c_fe_lib::print($memory_6);
#line 629
undef($memory_6);
#line 630
$memory_6 = c_rt_lib::to_nl(1);
#line 630
$memory_2 = $memory_6;
#line 630
undef($memory_6);
#line 630
undef($memory_5);
#line 631
goto label_1;
#line 631
label_1:
#line 631
undef($memory_3);
#line 631
undef($memory_4);
#line 631
undef($memory_0);
#line 631
undef($memory_1);
#line 631
$_[2] = $memory_2;return;
$_[2] = $memory_2;}

sub compiler_priv::generate_modules_to_files($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];
#line 639
$memory_5 = {};
#line 640
$memory_6 = c_rt_lib::ov_is($memory_4, 'nla');
#line 640
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 648
$memory_6 = c_rt_lib::ov_is($memory_4, 'c');
#line 648
if (c_rt_lib::check_true($memory_6)) {goto label_3;}
#line 662
$memory_6 = c_rt_lib::ov_is($memory_4, 'pm');
#line 662
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 671
$memory_6 = c_rt_lib::ov_is($memory_4, 'js');
#line 671
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 680
$memory_6 = c_rt_lib::ov_is($memory_4, 'java');
#line 680
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 689
$memory_6 = c_rt_lib::ov_is($memory_4, 'nl');
#line 689
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 691
$memory_6 = c_rt_lib::ov_is($memory_4, 'ast');
#line 691
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 691
$memory_6 = "NOMATCHALERT";
#line 691
$memory_6 = [$memory_6,$memory_4];
#line 691
die(dfile::ssave($memory_6));
#line 640
label_2:
#line 641
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 641
label_11:
#line 641
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 641
if (c_rt_lib::check_true($memory_7)) {goto label_9;}
#line 641
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 641
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 642
$memory_10 = c_rt_lib::to_nl(0);
#line 643
$memory_11 = hash::get_value($memory_1, $memory_7);
#line 643
$memory_11 = $memory_11->{'dst'};
#line 643
$memory_11 = c_rt_lib::ov_as($memory_11, 'nla');
#line 644
$memory_12 = "saving file: ";
#line 644
$memory_12 = $memory_12 . $memory_7;
#line 644
c_fe_lib::print($memory_12);
#line 644
undef($memory_12);
#line 645
$memory_12 = dfile::ssave($memory_8);
#line 645
compiler_priv::try_save_file($memory_12, $memory_11, $memory_10);
#line 645
undef($memory_12);
#line 646
$memory_12 = $memory_10;
#line 646
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 646
if (c_rt_lib::check_true($memory_12)) {goto label_13;}
#line 646
$memory_13 = "";
#line 646
hash::set_value($memory_5, $memory_7, $memory_13);
#line 646
undef($memory_13);
#line 646
goto label_13;
#line 646
label_13:
#line 646
undef($memory_12);
#line 646
undef($memory_10);
#line 646
undef($memory_11);
#line 647
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 647
goto label_11;
#line 647
label_9:
#line 647
undef($memory_7);
#line 647
undef($memory_8);
#line 647
undef($memory_9);
#line 648
goto label_1;
#line 648
label_3:
#line 649
$memory_7 = generator_c::generate($memory_0, $memory_3);
#line 650
$memory_8 = c_rt_lib::to_nl(0);
#line 651
$memory_9 = $memory_7->{'modules'};
#line 651
$memory_12 = c_rt_lib::init_iter($memory_9);
#line 651
label_16:
#line 651
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 651
if (c_rt_lib::check_true($memory_10)) {goto label_14;}
#line 651
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 651
$memory_11 = c_rt_lib::hash_get_value($memory_9, $memory_10);
#line 652
$memory_13 = c_rt_lib::to_nl(0);
#line 652
$memory_8 = $memory_13;
#line 652
undef($memory_13);
#line 653
$memory_13 = hash::get_value($memory_1, $memory_10);
#line 653
$memory_13 = $memory_13->{'dst'};
#line 653
$memory_13 = c_rt_lib::ov_as($memory_13, 'c');
#line 654
$memory_14 = "saving file: ";
#line 654
$memory_14 = $memory_14 . $memory_10;
#line 654
c_fe_lib::print($memory_14);
#line 654
undef($memory_14);
#line 655
$memory_14 = $memory_11->{'c'};
#line 655
$memory_15 = $memory_13->{'c'};
#line 655
compiler_priv::try_save_file($memory_14, $memory_15, $memory_8);
#line 655
undef($memory_15);
#line 655
undef($memory_14);
#line 656
$memory_14 = $memory_11->{'h'};
#line 656
$memory_15 = $memory_13->{'h'};
#line 656
compiler_priv::try_save_file($memory_14, $memory_15, $memory_8);
#line 656
undef($memory_15);
#line 656
undef($memory_14);
#line 657
$memory_14 = $memory_8;
#line 657
$memory_14 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_14));
#line 657
if (c_rt_lib::check_true($memory_14)) {goto label_18;}
#line 657
$memory_15 = "";
#line 657
hash::set_value($memory_5, $memory_10, $memory_15);
#line 657
undef($memory_15);
#line 657
goto label_18;
#line 657
label_18:
#line 657
undef($memory_14);
#line 657
undef($memory_13);
#line 658
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 658
goto label_16;
#line 658
label_14:
#line 658
undef($memory_9);
#line 658
undef($memory_10);
#line 658
undef($memory_11);
#line 658
undef($memory_12);
#line 659
$memory_9 = "saving global const file";
#line 659
c_fe_lib::print($memory_9);
#line 659
undef($memory_9);
#line 660
$memory_9 = $memory_7->{'global_const'};
#line 660
$memory_9 = $memory_9->{'c'};
#line 660
$memory_10 = "c_global_const.c";
#line 660
$memory_10 = $memory_2 . $memory_10;
#line 660
compiler_priv::try_save_file($memory_9, $memory_10, $memory_8);
#line 660
undef($memory_10);
#line 660
undef($memory_9);
#line 661
$memory_9 = $memory_7->{'global_const'};
#line 661
$memory_9 = $memory_9->{'h'};
#line 661
$memory_10 = "c_global_const.h";
#line 661
$memory_10 = $memory_2 . $memory_10;
#line 661
compiler_priv::try_save_file($memory_9, $memory_10, $memory_8);
#line 661
undef($memory_10);
#line 661
undef($memory_9);
#line 661
undef($memory_7);
#line 661
undef($memory_8);
#line 662
goto label_1;
#line 662
label_4:
#line 663
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 663
label_21:
#line 663
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 663
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 663
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 663
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 664
$memory_10 = c_rt_lib::to_nl(0);
#line 665
$memory_11 = generator_pm::generate($memory_8);
#line 666
$memory_12 = hash::get_value($memory_1, $memory_7);
#line 666
$memory_12 = $memory_12->{'dst'};
#line 666
$memory_12 = c_rt_lib::ov_as($memory_12, 'pm');
#line 667
$memory_13 = "saving file: ";
#line 667
$memory_13 = $memory_13 . $memory_7;
#line 667
c_fe_lib::print($memory_13);
#line 667
undef($memory_13);
#line 668
compiler_priv::try_save_file($memory_11, $memory_12, $memory_10);
#line 669
$memory_13 = $memory_10;
#line 669
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 669
if (c_rt_lib::check_true($memory_13)) {goto label_23;}
#line 669
$memory_14 = "";
#line 669
hash::set_value($memory_5, $memory_7, $memory_14);
#line 669
undef($memory_14);
#line 669
goto label_23;
#line 669
label_23:
#line 669
undef($memory_13);
#line 669
undef($memory_10);
#line 669
undef($memory_11);
#line 669
undef($memory_12);
#line 670
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 670
goto label_21;
#line 670
label_19:
#line 670
undef($memory_7);
#line 670
undef($memory_8);
#line 670
undef($memory_9);
#line 671
goto label_1;
#line 671
label_5:
#line 672
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 672
label_26:
#line 672
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 672
if (c_rt_lib::check_true($memory_7)) {goto label_24;}
#line 672
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 672
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 673
$memory_10 = c_rt_lib::to_nl(0);
#line 674
$memory_11 = generator_js::generate($memory_8);
#line 675
$memory_12 = hash::get_value($memory_1, $memory_7);
#line 675
$memory_12 = $memory_12->{'dst'};
#line 675
$memory_12 = c_rt_lib::ov_as($memory_12, 'js');
#line 676
$memory_13 = "saving file: ";
#line 676
$memory_13 = $memory_13 . $memory_7;
#line 676
c_fe_lib::print($memory_13);
#line 676
undef($memory_13);
#line 677
compiler_priv::try_save_file($memory_11, $memory_12, $memory_10);
#line 678
$memory_13 = $memory_10;
#line 678
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 678
if (c_rt_lib::check_true($memory_13)) {goto label_28;}
#line 678
$memory_14 = "";
#line 678
hash::set_value($memory_5, $memory_7, $memory_14);
#line 678
undef($memory_14);
#line 678
goto label_28;
#line 678
label_28:
#line 678
undef($memory_13);
#line 678
undef($memory_10);
#line 678
undef($memory_11);
#line 678
undef($memory_12);
#line 679
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 679
goto label_26;
#line 679
label_24:
#line 679
undef($memory_7);
#line 679
undef($memory_8);
#line 679
undef($memory_9);
#line 680
goto label_1;
#line 680
label_6:
#line 681
$memory_9 = c_rt_lib::init_iter($memory_0);
#line 681
label_31:
#line 681
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 681
if (c_rt_lib::check_true($memory_7)) {goto label_29;}
#line 681
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 681
$memory_8 = c_rt_lib::hash_get_value($memory_0, $memory_7);
#line 682
$memory_10 = c_rt_lib::to_nl(0);
#line 683
$memory_11 = generator_java::generate($memory_8);
#line 684
$memory_12 = hash::get_value($memory_1, $memory_7);
#line 684
$memory_12 = $memory_12->{'dst'};
#line 684
$memory_12 = c_rt_lib::ov_as($memory_12, 'java');
#line 685
$memory_13 = "saving file: ";
#line 685
$memory_13 = $memory_13 . $memory_7;
#line 685
c_fe_lib::print($memory_13);
#line 685
undef($memory_13);
#line 686
compiler_priv::try_save_file($memory_11, $memory_12, $memory_10);
#line 687
$memory_13 = $memory_10;
#line 687
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 687
if (c_rt_lib::check_true($memory_13)) {goto label_33;}
#line 687
$memory_14 = "";
#line 687
hash::set_value($memory_5, $memory_7, $memory_14);
#line 687
undef($memory_14);
#line 687
goto label_33;
#line 687
label_33:
#line 687
undef($memory_13);
#line 687
undef($memory_10);
#line 687
undef($memory_11);
#line 687
undef($memory_12);
#line 688
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 688
goto label_31;
#line 688
label_29:
#line 688
undef($memory_7);
#line 688
undef($memory_8);
#line 688
undef($memory_9);
#line 689
goto label_1;
#line 689
label_7:
#line 690
$memory_7 = [];
#line 690
die(dfile::ssave($memory_7));
#line 690
undef($memory_7);
#line 691
goto label_1;
#line 691
label_8:
#line 692
$memory_7 = [];
#line 692
die(dfile::ssave($memory_7));
#line 692
undef($memory_7);
#line 693
goto label_1;
#line 693
label_1:
#line 693
undef($memory_6);
#line 694
$memory_6 = hash::size($memory_5);
#line 694
$memory_7 = 0;
#line 694
$memory_6 = c_rt_lib::to_nl($memory_6 > $memory_7);
#line 694
undef($memory_7);
#line 694
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 694
if (c_rt_lib::check_true($memory_6)) {goto label_35;}
#line 695
$memory_7 = c_rt_lib::ov_mk_arg('err', $memory_5);
#line 695
undef($memory_0);
#line 695
undef($memory_1);
#line 695
undef($memory_2);
#line 695
undef($memory_4);
#line 695
undef($memory_5);
#line 695
undef($memory_6);
#line 695
$_[3] = $memory_3;return $memory_7;
#line 695
undef($memory_7);
#line 696
goto label_34;
#line 696
label_35:
#line 697
$memory_7 = "";
#line 697
$memory_7 = c_rt_lib::ov_mk_arg('ok', $memory_7);
#line 697
undef($memory_0);
#line 697
undef($memory_1);
#line 697
undef($memory_2);
#line 697
undef($memory_4);
#line 697
undef($memory_5);
#line 697
undef($memory_6);
#line 697
$_[3] = $memory_3;return $memory_7;
#line 697
undef($memory_7);
#line 698
goto label_34;
#line 698
label_34:
#line 698
undef($memory_6);
#line 698
undef($memory_5);
#line 698
undef($memory_0);
#line 698
undef($memory_1);
#line 698
undef($memory_2);
#line 698
undef($memory_4);
#line 698
$_[3] = $memory_3;return;
$_[3] = $memory_3;}

sub compiler_priv::save_module_to_file($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];
#line 702
$memory_2 = c_rt_lib::ov_is($memory_1, 'nla');
#line 702
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 704
$memory_2 = c_rt_lib::ov_is($memory_1, 'c');
#line 704
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 706
$memory_2 = c_rt_lib::ov_is($memory_1, 'pm');
#line 706
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 708
$memory_2 = c_rt_lib::ov_is($memory_1, 'js');
#line 708
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 710
$memory_2 = c_rt_lib::ov_is($memory_1, 'java');
#line 710
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 712
$memory_2 = c_rt_lib::ov_is($memory_1, 'nl');
#line 712
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 714
$memory_2 = c_rt_lib::ov_is($memory_1, 'ast');
#line 714
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 716
$memory_2 = c_rt_lib::ov_is($memory_1, 'none');
#line 716
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 716
$memory_2 = "NOMATCHALERT";
#line 716
$memory_2 = [$memory_2,$memory_1];
#line 716
die(dfile::ssave($memory_2));
#line 702
label_2:
#line 702
$memory_3 = c_rt_lib::ov_as($memory_1, 'nla');
#line 703
$memory_4 = [];
#line 703
die(dfile::ssave($memory_4));
#line 703
undef($memory_4);
#line 703
undef($memory_3);
#line 704
goto label_1;
#line 704
label_3:
#line 704
$memory_3 = c_rt_lib::ov_as($memory_1, 'c');
#line 705
$memory_4 = [];
#line 705
die(dfile::ssave($memory_4));
#line 705
undef($memory_4);
#line 705
undef($memory_3);
#line 706
goto label_1;
#line 706
label_4:
#line 706
$memory_3 = c_rt_lib::ov_as($memory_1, 'pm');
#line 707
$memory_4 = [];
#line 707
die(dfile::ssave($memory_4));
#line 707
undef($memory_4);
#line 707
undef($memory_3);
#line 708
goto label_1;
#line 708
label_5:
#line 708
$memory_3 = c_rt_lib::ov_as($memory_1, 'js');
#line 709
$memory_4 = [];
#line 709
die(dfile::ssave($memory_4));
#line 709
undef($memory_4);
#line 709
undef($memory_3);
#line 710
goto label_1;
#line 710
label_6:
#line 710
$memory_3 = c_rt_lib::ov_as($memory_1, 'java');
#line 711
$memory_4 = [];
#line 711
die(dfile::ssave($memory_4));
#line 711
undef($memory_4);
#line 711
undef($memory_3);
#line 712
goto label_1;
#line 712
label_7:
#line 712
$memory_3 = c_rt_lib::ov_as($memory_1, 'nl');
#line 713
$memory_5 = {
	module => "compiler",
	name => "file_t",
};
#line 713
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 713
$memory_7 = pretty_printer::print_module_to_str($memory_0);
#line 713
$memory_6 = c_fe_lib::string_to_file($memory_3, $memory_7);
#line 713
undef($memory_7);
#line 713
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 713
undef($memory_6);
#line 713
undef($memory_5);
#line 713
undef($memory_0);
#line 713
undef($memory_1);
#line 713
undef($memory_2);
#line 713
undef($memory_3);
#line 713
return $memory_4;
#line 713
undef($memory_4);
#line 713
undef($memory_3);
#line 714
goto label_1;
#line 714
label_8:
#line 714
$memory_3 = c_rt_lib::ov_as($memory_1, 'ast');
#line 715
$memory_5 = {
	module => "compiler",
	name => "file_t",
};
#line 715
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 715
$memory_7 = dfile::ssave($memory_0);
#line 715
$memory_6 = c_fe_lib::string_to_file($memory_3, $memory_7);
#line 715
undef($memory_7);
#line 715
$memory_4 = ptd::ensure($memory_5, $memory_6);
#line 715
undef($memory_6);
#line 715
undef($memory_5);
#line 715
undef($memory_0);
#line 715
undef($memory_1);
#line 715
undef($memory_2);
#line 715
undef($memory_3);
#line 715
return $memory_4;
#line 715
undef($memory_4);
#line 715
undef($memory_3);
#line 716
goto label_1;
#line 716
label_9:
#line 717
$memory_3 = [];
#line 717
die(dfile::ssave($memory_3));
#line 717
undef($memory_3);
#line 718
goto label_1;
#line 718
label_1:
#line 718
undef($memory_2);
#line 718
undef($memory_0);
#line 718
undef($memory_1);
#line 718
return;
}

sub compiler_priv::get_dir($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];
#line 722
$memory_1 = string::length($memory_0);
#line 722
$memory_2 = 1;
#line 722
$memory_1 = $memory_1 - $memory_2;
#line 722
undef($memory_2);
#line 723
$memory_3 = 1;
#line 723
$memory_2 = string::substr($memory_0, $memory_1, $memory_3);
#line 723
undef($memory_3);
#line 723
$memory_3 = "/";
#line 723
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 723
undef($memory_3);
#line 723
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 723
$memory_3 = 1;
#line 723
$memory_2 = string::substr($memory_0, $memory_1, $memory_3);
#line 723
undef($memory_3);
#line 723
$memory_3 = "\\";
#line 723
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 723
undef($memory_3);
#line 723
label_3:
#line 723
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 723
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 723
$memory_3 = 1;
#line 723
$memory_1 = $memory_1 - $memory_3;
#line 723
undef($memory_3);
#line 723
goto label_2;
#line 723
label_2:
#line 723
undef($memory_2);
#line 724
label_5:
#line 724
$memory_2 = 0;
#line 724
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 724
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 724
if (c_rt_lib::check_true($memory_4)) {goto label_7;}
#line 724
$memory_5 = 1;
#line 724
$memory_2 = string::substr($memory_0, $memory_1, $memory_5);
#line 724
undef($memory_5);
#line 724
$memory_5 = "/";
#line 724
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_5);
#line 724
undef($memory_5);
#line 724
label_7:
#line 724
undef($memory_4);
#line 724
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 724
if (c_rt_lib::check_true($memory_3)) {goto label_6;}
#line 724
$memory_4 = 1;
#line 724
$memory_2 = string::substr($memory_0, $memory_1, $memory_4);
#line 724
undef($memory_4);
#line 724
$memory_4 = "\\";
#line 724
$memory_2 = c_rt_lib::to_nl($memory_2 ne $memory_4);
#line 724
undef($memory_4);
#line 724
label_6:
#line 724
undef($memory_3);
#line 724
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 724
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 724
$memory_3 = 1;
#line 724
$memory_1 = $memory_1 - $memory_3;
#line 724
undef($memory_3);
#line 724
goto label_5;
#line 724
label_4:
#line 724
undef($memory_2);
#line 725
$memory_2 = 0;
#line 725
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 725
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 725
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 725
$memory_3 = ".";
#line 725
undef($memory_0);
#line 725
undef($memory_1);
#line 725
undef($memory_2);
#line 725
return $memory_3;
#line 725
undef($memory_3);
#line 725
goto label_9;
#line 725
label_9:
#line 725
undef($memory_2);
#line 726
$memory_3 = 0;
#line 726
$memory_2 = string::substr($memory_0, $memory_3, $memory_1);
#line 726
undef($memory_3);
#line 726
undef($memory_0);
#line 726
undef($memory_1);
#line 726
return $memory_2;
#line 726
undef($memory_2);
#line 726
undef($memory_1);
#line 726
undef($memory_0);
#line 726
return;
}

sub compiler_priv::parse_command_line_args($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;$memory_0 = $_[0];
#line 730
$memory_2 = c_rt_lib::ov_mk_none('c');
#line 730
$memory_3 = c_rt_lib::ov_mk_none('strict');
#line 730
$memory_5 = ".";
#line 730
$memory_4 = [$memory_5];
#line 730
undef($memory_5);
#line 730
$memory_5 = c_rt_lib::ov_mk_none('o1');
#line 730
$memory_6 = c_rt_lib::ov_mk_none('no');
#line 730
$memory_7 = compiler_priv::get_default_math_file();
#line 730
$memory_8 = "";
#line 730
$memory_9 = c_rt_lib::ov_mk_none('norm');
#line 730
$memory_1 = {language => $memory_2,mode => $memory_3,input_path => $memory_4,optimization => $memory_5,deref => $memory_6,math_fun => $memory_7,cache_path => $memory_8,alarm => $memory_9,};
#line 730
undef($memory_2);
#line 730
undef($memory_3);
#line 730
undef($memory_4);
#line 730
undef($memory_5);
#line 730
undef($memory_6);
#line 730
undef($memory_7);
#line 730
undef($memory_8);
#line 730
undef($memory_9);
#line 740
$memory_2 = c_rt_lib::to_nl(0);
#line 741
$memory_3 = compiler_priv::get_dir_cache_name();
#line 742
$memory_4 = 1;
#line 742
label_2:
#line 742
$memory_5 = array::len($memory_0);
#line 742
$memory_5 = c_rt_lib::to_nl($memory_4 < $memory_5);
#line 742
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 742
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 743
$memory_6 = $memory_0->[$memory_4];
#line 744
$memory_7 = string::length($memory_6);
#line 744
$memory_9 = 2;
#line 744
$memory_7 = c_rt_lib::to_nl($memory_7 >= $memory_9);
#line 744
undef($memory_9);
#line 744
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 744
if (c_rt_lib::check_true($memory_8)) {goto label_6;}
#line 744
$memory_9 = 0;
#line 744
$memory_10 = 2;
#line 744
$memory_7 = string::substr($memory_6, $memory_9, $memory_10);
#line 744
undef($memory_10);
#line 744
undef($memory_9);
#line 744
$memory_9 = "--";
#line 744
$memory_7 = c_rt_lib::to_nl($memory_7 eq $memory_9);
#line 744
undef($memory_9);
#line 744
label_6:
#line 744
undef($memory_8);
#line 744
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 744
if (c_rt_lib::check_true($memory_7)) {goto label_5;}
#line 745
$memory_9 = 2;
#line 745
$memory_10 = string::length($memory_6);
#line 745
$memory_11 = 2;
#line 745
$memory_10 = $memory_10 - $memory_11;
#line 745
undef($memory_11);
#line 745
$memory_8 = string::substr($memory_6, $memory_9, $memory_10);
#line 745
undef($memory_10);
#line 745
undef($memory_9);
#line 746
$memory_9 = "deref";
#line 746
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 746
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 746
if (c_rt_lib::check_true($memory_9)) {goto label_8;}
#line 747
$memory_10 = "";
#line 747
$memory_10 = c_rt_lib::ov_mk_arg('yes', $memory_10);
#line 747
$memory_11 = $memory_10;
#line 747
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'deref'} = $memory_11;
#line 747
undef($memory_10);
#line 747
undef($memory_11);
#line 748
goto label_7;
#line 748
label_8:
#line 748
$memory_9 = "nla";
#line 748
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 748
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 748
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 749
$memory_10 = c_rt_lib::ov_mk_none('nla');
#line 749
$memory_11 = $memory_10;
#line 749
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 749
undef($memory_10);
#line 749
undef($memory_11);
#line 750
goto label_7;
#line 750
label_9:
#line 750
$memory_9 = "ast";
#line 750
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 750
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 750
if (c_rt_lib::check_true($memory_9)) {goto label_10;}
#line 751
$memory_10 = c_rt_lib::ov_mk_none('ast');
#line 751
$memory_11 = $memory_10;
#line 751
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 751
undef($memory_10);
#line 751
undef($memory_11);
#line 752
goto label_7;
#line 752
label_10:
#line 752
$memory_9 = "pm";
#line 752
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 752
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 752
if (c_rt_lib::check_true($memory_9)) {goto label_11;}
#line 753
$memory_10 = c_rt_lib::ov_mk_none('pm');
#line 753
$memory_11 = $memory_10;
#line 753
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 753
undef($memory_10);
#line 753
undef($memory_11);
#line 754
goto label_7;
#line 754
label_11:
#line 754
$memory_9 = "c";
#line 754
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 754
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 754
if (c_rt_lib::check_true($memory_9)) {goto label_12;}
#line 755
$memory_10 = c_rt_lib::ov_mk_none('c');
#line 755
$memory_11 = $memory_10;
#line 755
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 755
undef($memory_10);
#line 755
undef($memory_11);
#line 756
goto label_7;
#line 756
label_12:
#line 756
$memory_9 = "js";
#line 756
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 756
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 756
if (c_rt_lib::check_true($memory_9)) {goto label_13;}
#line 757
$memory_10 = c_rt_lib::ov_mk_none('js');
#line 757
$memory_11 = $memory_10;
#line 757
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 757
undef($memory_10);
#line 757
undef($memory_11);
#line 758
goto label_7;
#line 758
label_13:
#line 758
$memory_9 = "java";
#line 758
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 758
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 758
if (c_rt_lib::check_true($memory_9)) {goto label_14;}
#line 759
$memory_10 = c_rt_lib::ov_mk_none('java');
#line 759
$memory_11 = $memory_10;
#line 759
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 759
undef($memory_10);
#line 759
undef($memory_11);
#line 760
goto label_7;
#line 760
label_14:
#line 760
$memory_9 = "nl";
#line 760
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 760
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 760
if (c_rt_lib::check_true($memory_9)) {goto label_15;}
#line 761
$memory_10 = c_rt_lib::ov_mk_none('nl');
#line 761
$memory_11 = $memory_10;
#line 761
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'language'} = $memory_11;
#line 761
undef($memory_10);
#line 761
undef($memory_11);
#line 762
$memory_10 = compiler_priv::get_dir_pretty_name();
#line 762
$memory_3 = $memory_10;
#line 762
undef($memory_10);
#line 763
goto label_7;
#line 763
label_15:
#line 763
$memory_9 = "ide";
#line 763
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 763
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 763
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 764
$memory_10 = c_rt_lib::ov_mk_none('ide');
#line 764
$memory_11 = $memory_10;
#line 764
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 764
undef($memory_10);
#line 764
undef($memory_11);
#line 765
goto label_7;
#line 765
label_16:
#line 765
$memory_9 = "idex";
#line 765
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 765
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 765
if (c_rt_lib::check_true($memory_9)) {goto label_17;}
#line 766
$memory_10 = 1;
#line 766
$memory_4 = $memory_4 + $memory_10;
#line 766
undef($memory_10);
#line 767
$memory_10 = array::len($memory_0);
#line 767
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 767
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 767
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 767
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 767
$memory_11 = [];
#line 767
die(dfile::ssave($memory_11));
#line 767
goto label_19;
#line 767
label_19:
#line 767
undef($memory_10);
#line 767
undef($memory_11);
#line 768
$memory_10 = $memory_0->[$memory_4];
#line 768
$memory_10 = c_rt_lib::ov_mk_arg('idex', $memory_10);
#line 768
$memory_11 = $memory_10;
#line 768
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 768
undef($memory_10);
#line 768
undef($memory_11);
#line 769
goto label_7;
#line 769
label_17:
#line 769
$memory_9 = "strict";
#line 769
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 769
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 769
if (c_rt_lib::check_true($memory_9)) {goto label_20;}
#line 770
$memory_10 = c_rt_lib::ov_mk_none('strict');
#line 770
$memory_11 = $memory_10;
#line 770
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 770
undef($memory_10);
#line 770
undef($memory_11);
#line 771
goto label_7;
#line 771
label_20:
#line 771
$memory_9 = "exec";
#line 771
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 771
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 771
if (c_rt_lib::check_true($memory_9)) {goto label_21;}
#line 772
$memory_10 = c_rt_lib::ov_mk_none('exec');
#line 772
$memory_11 = $memory_10;
#line 772
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'mode'} = $memory_11;
#line 772
undef($memory_10);
#line 772
undef($memory_11);
#line 773
goto label_7;
#line 773
label_21:
#line 773
$memory_9 = "o";
#line 773
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 773
if (c_rt_lib::check_true($memory_9)) {goto label_23;}
#line 773
$memory_9 = "out";
#line 773
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 773
label_23:
#line 773
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 773
if (c_rt_lib::check_true($memory_9)) {goto label_22;}
#line 774
$memory_10 = 1;
#line 774
$memory_4 = $memory_4 + $memory_10;
#line 774
undef($memory_10);
#line 775
$memory_10 = array::len($memory_0);
#line 775
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 775
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 775
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 775
if (c_rt_lib::check_true($memory_10)) {goto label_25;}
#line 775
$memory_11 = [];
#line 775
die(dfile::ssave($memory_11));
#line 775
goto label_25;
#line 775
label_25:
#line 775
undef($memory_10);
#line 775
undef($memory_11);
#line 776
$memory_10 = $memory_0->[$memory_4];
#line 776
$memory_11 = "/";
#line 776
$memory_10 = $memory_10 . $memory_11;
#line 776
undef($memory_11);
#line 776
$memory_11 = $memory_10;
#line 776
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'cache_path'} = $memory_11;
#line 776
undef($memory_10);
#line 776
undef($memory_11);
#line 777
goto label_7;
#line 777
label_22:
#line 777
$memory_9 = "math";
#line 777
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 777
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 777
if (c_rt_lib::check_true($memory_9)) {goto label_26;}
#line 778
$memory_10 = 1;
#line 778
$memory_4 = $memory_4 + $memory_10;
#line 778
undef($memory_10);
#line 779
$memory_10 = array::len($memory_0);
#line 779
$memory_10 = c_rt_lib::to_nl($memory_4 < $memory_10);
#line 779
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 779
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 779
if (c_rt_lib::check_true($memory_10)) {goto label_28;}
#line 779
$memory_11 = [];
#line 779
die(dfile::ssave($memory_11));
#line 779
goto label_28;
#line 779
label_28:
#line 779
undef($memory_10);
#line 779
undef($memory_11);
#line 780
$memory_10 = $memory_0->[$memory_4];
#line 780
$memory_11 = $memory_10;
#line 780
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'math_fun'} = $memory_11;
#line 780
undef($memory_10);
#line 780
undef($memory_11);
#line 781
goto label_7;
#line 781
label_26:
#line 781
$memory_9 = "O0";
#line 781
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 781
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 781
if (c_rt_lib::check_true($memory_9)) {goto label_29;}
#line 782
$memory_10 = c_rt_lib::ov_mk_none('o0');
#line 782
$memory_11 = $memory_10;
#line 782
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 782
undef($memory_10);
#line 782
undef($memory_11);
#line 783
goto label_7;
#line 783
label_29:
#line 783
$memory_9 = "O1";
#line 783
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 783
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 783
if (c_rt_lib::check_true($memory_9)) {goto label_30;}
#line 784
$memory_10 = c_rt_lib::ov_mk_none('o1');
#line 784
$memory_11 = $memory_10;
#line 784
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 784
undef($memory_10);
#line 784
undef($memory_11);
#line 785
goto label_7;
#line 785
label_30:
#line 785
$memory_9 = "O2";
#line 785
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 785
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 785
if (c_rt_lib::check_true($memory_9)) {goto label_31;}
#line 786
$memory_10 = c_rt_lib::ov_mk_none('o2');
#line 786
$memory_11 = $memory_10;
#line 786
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 786
undef($memory_10);
#line 786
undef($memory_11);
#line 787
goto label_7;
#line 787
label_31:
#line 787
$memory_9 = "O3";
#line 787
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 787
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 787
if (c_rt_lib::check_true($memory_9)) {goto label_32;}
#line 788
$memory_10 = c_rt_lib::ov_mk_none('o3');
#line 788
$memory_11 = $memory_10;
#line 788
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 788
undef($memory_10);
#line 788
undef($memory_11);
#line 789
goto label_7;
#line 789
label_32:
#line 789
$memory_9 = "O4";
#line 789
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 789
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 789
if (c_rt_lib::check_true($memory_9)) {goto label_33;}
#line 790
$memory_10 = c_rt_lib::ov_mk_none('o4');
#line 790
$memory_11 = $memory_10;
#line 790
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'optimization'} = $memory_11;
#line 790
undef($memory_10);
#line 790
undef($memory_11);
#line 791
goto label_7;
#line 791
label_33:
#line 791
$memory_9 = "Wall";
#line 791
$memory_9 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 791
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 791
if (c_rt_lib::check_true($memory_9)) {goto label_34;}
#line 792
$memory_10 = c_rt_lib::ov_mk_none('wall');
#line 792
$memory_11 = $memory_10;
#line 792
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'alarm'} = $memory_11;
#line 792
undef($memory_10);
#line 792
undef($memory_11);
#line 793
goto label_7;
#line 793
label_34:
#line 794
$memory_10 = "unknown compiler option: ";
#line 794
$memory_10 = $memory_10 . $memory_6;
#line 794
c_fe_lib::print($memory_10);
#line 794
undef($memory_10);
#line 795
goto label_7;
#line 795
label_7:
#line 795
undef($memory_9);
#line 795
undef($memory_8);
#line 796
goto label_4;
#line 796
label_5:
#line 797
$memory_8 = $memory_2;
#line 797
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 797
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 797
if (c_rt_lib::check_true($memory_8)) {goto label_36;}
#line 797
$memory_9 = [];
#line 797
$memory_10 = $memory_9;
#line 797
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'input_path'} = $memory_10;
#line 797
undef($memory_9);
#line 797
undef($memory_10);
#line 797
goto label_36;
#line 797
label_36:
#line 797
undef($memory_8);
#line 798
$memory_8 = "input_path";
#line 798
$memory_8 = c_rt_lib::get_ref_hash($memory_1, $memory_8);
#line 798
array::push($memory_8, $memory_6);
#line 798
$memory_9 = "input_path";
#line 798
c_rt_lib::set_ref_hash($memory_1, $memory_9, $memory_8);
#line 798
undef($memory_9);
#line 798
undef($memory_8);
#line 799
$memory_8 = c_rt_lib::to_nl(1);
#line 799
$memory_2 = $memory_8;
#line 799
undef($memory_8);
#line 800
goto label_4;
#line 800
label_4:
#line 800
undef($memory_7);
#line 800
undef($memory_6);
#line 800
$memory_6 = 1;
#line 800
$memory_4 = $memory_4 + $memory_6;
#line 800
undef($memory_6);
#line 801
goto label_2;
#line 801
label_1:
#line 801
undef($memory_4);
#line 801
undef($memory_5);
#line 802
$memory_4 = $memory_1->{'cache_path'};
#line 802
$memory_5 = "";
#line 802
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 802
undef($memory_5);
#line 802
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 802
if (c_rt_lib::check_true($memory_4)) {goto label_38;}
#line 803
$memory_5 = "./";
#line 803
$memory_5 = $memory_5 . $memory_3;
#line 803
$memory_6 = "/";
#line 803
$memory_5 = $memory_5 . $memory_6;
#line 803
undef($memory_6);
#line 803
$memory_6 = $memory_5;
#line 803
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'cache_path'} = $memory_6;
#line 803
undef($memory_5);
#line 803
undef($memory_6);
#line 804
goto label_38;
#line 804
label_38:
#line 804
undef($memory_4);
#line 805
$memory_4 = $memory_1->{'deref'};
#line 805
$memory_4 = c_rt_lib::ov_is($memory_4, 'yes');
#line 805
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 805
if (c_rt_lib::check_true($memory_4)) {goto label_40;}
#line 805
$memory_5 = $memory_1->{'cache_path'};
#line 805
$memory_6 = compiler_priv::get_default_deref_file();
#line 805
$memory_5 = $memory_5 . $memory_6;
#line 805
undef($memory_6);
#line 805
$memory_5 = c_rt_lib::ov_mk_arg('yes', $memory_5);
#line 805
$memory_6 = $memory_5;
#line 805
 if (c_rt_lib::get_hashcount($memory_1) > 1) {$memory_1 = {%{$memory_1}};}$memory_1->{'deref'} = $memory_6;
#line 805
undef($memory_5);
#line 805
undef($memory_6);
#line 805
goto label_40;
#line 805
label_40:
#line 805
undef($memory_4);
#line 806
undef($memory_0);
#line 806
undef($memory_2);
#line 806
undef($memory_3);
#line 806
return $memory_1;
#line 806
undef($memory_1);
#line 806
undef($memory_2);
#line 806
undef($memory_3);
#line 806
undef($memory_0);
#line 806
return;
}
