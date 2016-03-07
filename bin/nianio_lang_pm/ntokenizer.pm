use c_rt_lib;
use ov;
use nast;
use ptd;
use array;
use hash;
use string;
use enum;
use c_std_lib;
use boolean_t;
use singleton;
sub ntokenizer_priv::get_keywords;
sub ntokenizer_priv::get_char_oper;
sub ntokenizer_priv::get_lett_oper;
sub ntokenizer::state_t;
sub ntokenizer::token_t;
sub ntokenizer::init;
sub ntokenizer_priv::get_char;
sub ntokenizer_priv::get_next_char;
sub ntokenizer_priv::eat_ws;
sub ntokenizer_priv::is_token;
sub ntokenizer::eat_token;
sub ntokenizer::get_line;
sub ntokenizer::get_column;
sub ntokenizer::get_place;
sub ntokenizer::get_place_ws;
sub ntokenizer::get_token;
sub ntokenizer::is_type;
sub ntokenizer::next_is;
sub ntokenizer::eat_type;
sub ntokenizer::is_text;
sub ntokenizer::eat_text;
sub ntokenizer::info;
sub ntokenizer_priv::is_hex_number;
sub ntokenizer_priv::try_get_operator;
sub ntokenizer_priv::get_next_token;

return 1;

sub ntokenizer_priv::__get_keywords() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;my $memory_22;my $memory_23;my $memory_24;my $memory_25;
#line 18
$memory_2 = "";
#line 18
$memory_3 = "";
#line 18
$memory_4 = "";
#line 18
$memory_5 = "";
#line 18
$memory_6 = "";
#line 18
$memory_7 = "";
#line 18
$memory_8 = "";
#line 18
$memory_9 = "";
#line 18
$memory_10 = "";
#line 18
$memory_11 = "";
#line 18
$memory_12 = "";
#line 18
$memory_13 = "";
#line 18
$memory_14 = "";
#line 18
$memory_15 = "";
#line 18
$memory_16 = "";
#line 18
$memory_17 = "";
#line 18
$memory_18 = "";
#line 18
$memory_19 = "";
#line 18
$memory_20 = "";
#line 18
$memory_21 = "";
#line 18
$memory_22 = "";
#line 18
$memory_23 = "";
#line 18
$memory_24 = "";
#line 18
$memory_25 = "";
#line 18
$memory_1 = {use => $memory_2,fora => $memory_3,forh => $memory_4,for => $memory_5,rep => $memory_6,loop => $memory_7,while => $memory_8,if => $memory_9,elsif => $memory_10,else => $memory_11,var => $memory_12,def => $memory_13,ref => $memory_14,match => $memory_15,case => $memory_16,unless => $memory_17,true => $memory_18,false => $memory_19,continue => $memory_20,break => $memory_21,return => $memory_22,try => $memory_23,ensure => $memory_24,die => $memory_25,};
#line 18
undef($memory_2);
#line 18
undef($memory_3);
#line 18
undef($memory_4);
#line 18
undef($memory_5);
#line 18
undef($memory_6);
#line 18
undef($memory_7);
#line 18
undef($memory_8);
#line 18
undef($memory_9);
#line 18
undef($memory_10);
#line 18
undef($memory_11);
#line 18
undef($memory_12);
#line 18
undef($memory_13);
#line 18
undef($memory_14);
#line 18
undef($memory_15);
#line 18
undef($memory_16);
#line 18
undef($memory_17);
#line 18
undef($memory_18);
#line 18
undef($memory_19);
#line 18
undef($memory_20);
#line 18
undef($memory_21);
#line 18
undef($memory_22);
#line 18
undef($memory_23);
#line 18
undef($memory_24);
#line 18
undef($memory_25);
#line 18
$memory_0 = singleton::sigleton_do_not_use_without_approval($memory_1);
#line 18
undef($memory_1);
#line 18
return $memory_0;
#line 18
undef($memory_0);
#line 18
return;
}

my $_get_keywords;
sub ntokenizer_priv::get_keywords() {
	$_get_keywords = ntokenizer_priv::__get_keywords() unless defined $_get_keywords;
	return $_get_keywords;
}

sub ntokenizer_priv::__get_char_oper() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;
#line 47
$memory_1 = [];
#line 47
$memory_2 = [];
#line 47
$memory_3 = [];
#line 47
$memory_0 = [$memory_1,$memory_2,$memory_3];
#line 47
undef($memory_1);
#line 47
undef($memory_2);
#line 47
undef($memory_3);
#line 48
$memory_2 = nast::get_unary_ops();
#line 48
$memory_3 = nast::get_bin_ops();
#line 48
$memory_4 = nast::get_ternary_ops();
#line 48
$memory_1 = [$memory_2,$memory_3,$memory_4];
#line 48
undef($memory_2);
#line 48
undef($memory_3);
#line 48
undef($memory_4);
#line 48
$memory_3 = 0;
#line 48
$memory_4 = 1;
#line 48
$memory_5 = c_rt_lib::array_len($memory_1);
#line 48
label_3:
#line 48
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 48
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 48
$memory_2 = $memory_1->[$memory_3];
#line 49
$memory_9 = c_rt_lib::init_iter($memory_2);
#line 49
label_6:
#line 49
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 49
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 49
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 49
$memory_8 = c_rt_lib::hash_get_value($memory_2, $memory_7);
#line 50
$memory_12 = 0;
#line 50
$memory_13 = 1;
#line 50
$memory_11 = string::substr($memory_7, $memory_12, $memory_13);
#line 50
undef($memory_13);
#line 50
undef($memory_12);
#line 50
$memory_10 = string::is_letter($memory_11);
#line 50
undef($memory_11);
#line 50
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 50
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 50
if (c_rt_lib::check_true($memory_10)) {goto label_8;}
#line 50
$memory_12 = string::length($memory_7);
#line 50
$memory_13 = 1;
#line 50
$memory_12 = $memory_12 - $memory_13;
#line 50
undef($memory_13);
#line 50
$memory_11 = c_rt_lib::get_ref_arr($memory_0, $memory_12);
#line 50
array::push($memory_11, $memory_7);
#line 50
c_rt_lib::set_ref_arr($memory_0, $memory_12, $memory_11);
#line 50
undef($memory_11);
#line 50
undef($memory_12);
#line 50
goto label_8;
#line 50
label_8:
#line 50
undef($memory_10);
#line 51
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 51
goto label_6;
#line 51
label_4:
#line 51
undef($memory_7);
#line 51
undef($memory_8);
#line 51
undef($memory_9);
#line 52
$memory_3 = $memory_3 + $memory_4;
#line 52
goto label_3;
#line 52
label_1:
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
#line 53
$memory_2 = 2;
#line 53
$memory_1 = c_rt_lib::get_ref_arr($memory_0, $memory_2);
#line 53
$memory_4 = 1;
#line 53
$memory_3 = $memory_0->[$memory_4];
#line 53
undef($memory_4);
#line 53
array::append($memory_1, $memory_3);
#line 53
undef($memory_3);
#line 53
c_rt_lib::set_ref_arr($memory_0, $memory_2, $memory_1);
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 54
$memory_2 = 2;
#line 54
$memory_1 = c_rt_lib::get_ref_arr($memory_0, $memory_2);
#line 54
$memory_4 = 0;
#line 54
$memory_3 = $memory_0->[$memory_4];
#line 54
undef($memory_4);
#line 54
array::append($memory_1, $memory_3);
#line 54
undef($memory_3);
#line 54
c_rt_lib::set_ref_arr($memory_0, $memory_2, $memory_1);
#line 54
undef($memory_1);
#line 54
undef($memory_2);
#line 55
$memory_3 = 2;
#line 55
$memory_2 = $memory_0->[$memory_3];
#line 55
undef($memory_3);
#line 55
$memory_1 = singleton::sigleton_do_not_use_without_approval($memory_2);
#line 55
undef($memory_2);
#line 55
undef($memory_0);
#line 55
return $memory_1;
#line 55
undef($memory_1);
#line 55
undef($memory_0);
#line 55
return;
}

my $_get_char_oper;
sub ntokenizer_priv::get_char_oper() {
	$_get_char_oper = ntokenizer_priv::__get_char_oper() unless defined $_get_char_oper;
	return $_get_char_oper;
}

sub ntokenizer_priv::__get_lett_oper() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;
#line 59
$memory_0 = {};
#line 60
$memory_2 = nast::get_unary_ops();
#line 60
$memory_3 = nast::get_bin_ops();
#line 60
$memory_4 = nast::get_ternary_ops();
#line 60
$memory_1 = [$memory_2,$memory_3,$memory_4];
#line 60
undef($memory_2);
#line 60
undef($memory_3);
#line 60
undef($memory_4);
#line 60
$memory_3 = 0;
#line 60
$memory_4 = 1;
#line 60
$memory_5 = c_rt_lib::array_len($memory_1);
#line 60
label_3:
#line 60
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 60
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 60
$memory_2 = $memory_1->[$memory_3];
#line 61
$memory_9 = c_rt_lib::init_iter($memory_2);
#line 61
label_6:
#line 61
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 61
if (c_rt_lib::check_true($memory_7)) {goto label_4;}
#line 61
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 61
$memory_8 = c_rt_lib::hash_get_value($memory_2, $memory_7);
#line 62
$memory_12 = 0;
#line 62
$memory_13 = 1;
#line 62
$memory_11 = string::substr($memory_7, $memory_12, $memory_13);
#line 62
undef($memory_13);
#line 62
undef($memory_12);
#line 62
$memory_10 = string::is_letter($memory_11);
#line 62
undef($memory_11);
#line 62
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 62
if (c_rt_lib::check_true($memory_10)) {goto label_8;}
#line 62
$memory_11 = "";
#line 62
hash::set_value($memory_0, $memory_7, $memory_11);
#line 62
undef($memory_11);
#line 62
goto label_8;
#line 62
label_8:
#line 62
undef($memory_10);
#line 63
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 63
goto label_6;
#line 63
label_4:
#line 63
undef($memory_7);
#line 63
undef($memory_8);
#line 63
undef($memory_9);
#line 64
$memory_3 = $memory_3 + $memory_4;
#line 64
goto label_3;
#line 64
label_1:
#line 64
undef($memory_1);
#line 64
undef($memory_2);
#line 64
undef($memory_3);
#line 64
undef($memory_4);
#line 64
undef($memory_5);
#line 64
undef($memory_6);
#line 65
$memory_1 = singleton::sigleton_do_not_use_without_approval($memory_0);
#line 65
undef($memory_0);
#line 65
return $memory_1;
#line 65
undef($memory_1);
#line 65
undef($memory_0);
#line 65
return;
}

my $_get_lett_oper;
sub ntokenizer_priv::get_lett_oper() {
	$_get_lett_oper = ntokenizer_priv::__get_lett_oper() unless defined $_get_lett_oper;
	return $_get_lett_oper;
}

sub ntokenizer::__state_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;
#line 69
$memory_3 = ptd::sim();
#line 69
$memory_2 = ptd::arr($memory_3);
#line 69
undef($memory_3);
#line 69
$memory_3 = ptd::sim();
#line 69
$memory_4 = ptd::sim();
#line 69
$memory_5 = {
	module => "ntokenizer",
	name => "token_t",
};
#line 69
$memory_5 = c_rt_lib::ov_mk_arg('ref', $memory_5);
#line 69
$memory_6 = ptd::sim();
#line 69
$memory_7 = ptd::sim();
#line 69
$memory_8 = ptd::sim();
#line 69
$memory_11 = ptd::sim();
#line 69
$memory_12 = ptd::sim();
#line 69
$memory_10 = {line => $memory_11,position => $memory_12,};
#line 69
undef($memory_11);
#line 69
undef($memory_12);
#line 69
$memory_9 = ptd::rec($memory_10);
#line 69
undef($memory_10);
#line 69
$memory_12 = ptd::sim();
#line 69
$memory_13 = ptd::sim();
#line 69
$memory_11 = {line => $memory_12,position => $memory_13,};
#line 69
undef($memory_12);
#line 69
undef($memory_13);
#line 69
$memory_10 = ptd::rec($memory_11);
#line 69
undef($memory_11);
#line 69
$memory_1 = {text => $memory_2,pos => $memory_3,len => $memory_4,type => $memory_5,next_token => $memory_6,ln_nr => $memory_7,ln_pos => $memory_8,place => $memory_9,place_ws => $memory_10,};
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
$memory_0 = ptd::rec($memory_1);
#line 69
undef($memory_1);
#line 69
return $memory_0;
#line 69
undef($memory_0);
#line 69
return;
}

my $_state_t;
sub ntokenizer::state_t() {
	$_state_t = ntokenizer::__state_t() unless defined $_state_t;
	return $_state_t;
}

sub ntokenizer::__token_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;
#line 83
$memory_2 = ptd::none();
#line 83
$memory_3 = ptd::none();
#line 83
$memory_4 = ptd::none();
#line 83
$memory_5 = ptd::none();
#line 83
$memory_6 = ptd::none();
#line 83
$memory_7 = ptd::none();
#line 83
$memory_8 = ptd::none();
#line 83
$memory_9 = ptd::none();
#line 83
$memory_10 = ptd::none();
#line 83
$memory_1 = {end => $memory_2,delimiter => $memory_3,operator => $memory_4,number => $memory_5,keyword => $memory_6,word => $memory_7,multi_string => $memory_8,string => $memory_9,error => $memory_10,};
#line 83
undef($memory_2);
#line 83
undef($memory_3);
#line 83
undef($memory_4);
#line 83
undef($memory_5);
#line 83
undef($memory_6);
#line 83
undef($memory_7);
#line 83
undef($memory_8);
#line 83
undef($memory_9);
#line 83
undef($memory_10);
#line 83
$memory_0 = ptd::var($memory_1);
#line 83
undef($memory_1);
#line 83
return $memory_0;
#line 83
undef($memory_0);
#line 83
return;
}

my $_token_t;
sub ntokenizer::token_t() {
	$_token_t = ntokenizer::__token_t() unless defined $_token_t;
	return $_token_t;
}

sub ntokenizer::init($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;$memory_0 = $_[0];
#line 97
$memory_2 = [$memory_0];
#line 97
$memory_3 = string::length($memory_0);
#line 97
$memory_4 = 0;
#line 97
$memory_5 = c_rt_lib::ov_mk_none('end');
#line 97
$memory_6 = "";
#line 97
$memory_7 = 1;
#line 97
$memory_8 = 1;
#line 97
$memory_10 = 1;
#line 97
$memory_11 = 0;
#line 97
$memory_9 = {line => $memory_10,position => $memory_11,};
#line 97
undef($memory_10);
#line 97
undef($memory_11);
#line 97
$memory_11 = 1;
#line 97
$memory_12 = 0;
#line 97
$memory_10 = {line => $memory_11,position => $memory_12,};
#line 97
undef($memory_11);
#line 97
undef($memory_12);
#line 97
$memory_1 = {text => $memory_2,len => $memory_3,pos => $memory_4,type => $memory_5,next_token => $memory_6,ln_nr => $memory_7,ln_pos => $memory_8,place => $memory_9,place_ws => $memory_10,};
#line 97
undef($memory_2);
#line 97
undef($memory_3);
#line 97
undef($memory_4);
#line 97
undef($memory_5);
#line 97
undef($memory_6);
#line 97
undef($memory_7);
#line 97
undef($memory_8);
#line 97
undef($memory_9);
#line 97
undef($memory_10);
#line 108
ntokenizer_priv::get_next_token($memory_1);
#line 109
undef($memory_0);
#line 109
return $memory_1;
#line 109
undef($memory_1);
#line 109
undef($memory_0);
#line 109
return;
}

sub ntokenizer_priv::get_char($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 113
$memory_2 = $memory_0->{'text'};
#line 113
$memory_3 = $memory_0->{'pos'};
#line 113
$memory_4 = 1;
#line 113
$memory_1 = c_std_lib::fast_substr($memory_2, $memory_3, $memory_4);
#line 113
undef($memory_4);
#line 113
undef($memory_3);
#line 113
undef($memory_2);
#line 113
$memory_2 = "";
#line 113
$memory_1 = $memory_1 . $memory_2;
#line 113
undef($memory_2);
#line 113
$_[0] = $memory_0;return $memory_1;
#line 113
undef($memory_1);
#line 113
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer_priv::get_next_char($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 117
$memory_1 = $memory_0->{'len'};
#line 117
$memory_2 = $memory_0->{'pos'};
#line 117
$memory_3 = 1;
#line 117
$memory_2 = $memory_2 + $memory_3;
#line 117
undef($memory_3);
#line 117
$memory_1 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 117
undef($memory_2);
#line 117
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 117
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 117
$memory_2 = "";
#line 117
undef($memory_1);
#line 117
$_[0] = $memory_0;return $memory_2;
#line 117
undef($memory_2);
#line 117
goto label_2;
#line 117
label_2:
#line 117
undef($memory_1);
#line 118
$memory_2 = $memory_0->{'text'};
#line 118
$memory_3 = $memory_0->{'pos'};
#line 118
$memory_4 = 1;
#line 118
$memory_3 = $memory_3 + $memory_4;
#line 118
undef($memory_4);
#line 118
$memory_4 = 1;
#line 118
$memory_1 = c_std_lib::fast_substr($memory_2, $memory_3, $memory_4);
#line 118
undef($memory_4);
#line 118
undef($memory_3);
#line 118
undef($memory_2);
#line 118
$memory_2 = "";
#line 118
$memory_1 = $memory_1 . $memory_2;
#line 118
undef($memory_2);
#line 118
$_[0] = $memory_0;return $memory_1;
#line 118
undef($memory_1);
#line 118
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer_priv::eat_ws($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 122
label_2:
#line 123
$memory_1 = $memory_0->{'pos'};
#line 123
$memory_2 = $memory_0->{'len'};
#line 123
$memory_1 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 123
undef($memory_2);
#line 123
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 123
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 123
undef($memory_1);
#line 123
$_[0] = $memory_0;return;
#line 123
goto label_4;
#line 123
label_4:
#line 123
undef($memory_1);
#line 124
$memory_2 = ntokenizer_priv::get_char($memory_0);
#line 124
$memory_1 = string::ord($memory_2);
#line 124
undef($memory_2);
#line 125
$memory_2 = 9;
#line 125
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 125
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 125
$memory_2 = 13;
#line 125
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 125
label_8:
#line 125
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 125
$memory_2 = 32;
#line 125
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 125
label_7:
#line 125
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 125
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 126
$memory_3 = "pos";
#line 126
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 126
$memory_4 = 1;
#line 126
$memory_3 = $memory_3 + $memory_4;
#line 126
$memory_5 = "pos";
#line 126
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 126
undef($memory_5);
#line 126
undef($memory_3);
#line 126
undef($memory_4);
#line 127
goto label_5;
#line 127
label_6:
#line 127
$memory_2 = 10;
#line 127
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 127
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 127
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 128
$memory_3 = "pos";
#line 128
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 128
$memory_4 = 1;
#line 128
$memory_3 = $memory_3 + $memory_4;
#line 128
$memory_5 = "pos";
#line 128
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 128
undef($memory_5);
#line 128
undef($memory_3);
#line 128
undef($memory_4);
#line 129
$memory_3 = $memory_0->{'pos'};
#line 129
$memory_4 = $memory_3;
#line 129
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'ln_pos'} = $memory_4;
#line 129
undef($memory_3);
#line 129
undef($memory_4);
#line 130
$memory_3 = "ln_nr";
#line 130
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 130
$memory_4 = 1;
#line 130
$memory_3 = $memory_3 + $memory_4;
#line 130
$memory_5 = "ln_nr";
#line 130
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 130
undef($memory_5);
#line 130
undef($memory_3);
#line 130
undef($memory_4);
#line 131
goto label_5;
#line 131
label_9:
#line 131
$memory_2 = 35;
#line 131
$memory_2 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 131
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 131
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 132
label_12:
#line 132
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 132
$memory_3 = string::ord($memory_4);
#line 132
undef($memory_4);
#line 132
$memory_4 = 10;
#line 132
$memory_3 = c_rt_lib::to_nl($memory_3 != $memory_4);
#line 132
undef($memory_4);
#line 132
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 132
if (c_rt_lib::check_true($memory_3)) {goto label_11;}
#line 133
$memory_4 = "pos";
#line 133
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 133
$memory_5 = 1;
#line 133
$memory_4 = $memory_4 + $memory_5;
#line 133
$memory_6 = "pos";
#line 133
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 133
undef($memory_6);
#line 133
undef($memory_4);
#line 133
undef($memory_5);
#line 134
$memory_4 = $memory_0->{'pos'};
#line 134
$memory_5 = $memory_0->{'len'};
#line 134
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 134
undef($memory_5);
#line 134
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 134
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 134
undef($memory_1);
#line 134
undef($memory_2);
#line 134
undef($memory_3);
#line 134
undef($memory_4);
#line 134
$_[0] = $memory_0;return;
#line 134
goto label_14;
#line 134
label_14:
#line 134
undef($memory_4);
#line 135
goto label_12;
#line 135
label_11:
#line 135
undef($memory_3);
#line 136
goto label_5;
#line 136
label_10:
#line 137
undef($memory_1);
#line 137
undef($memory_2);
#line 137
$_[0] = $memory_0;return;
#line 138
goto label_5;
#line 138
label_5:
#line 138
undef($memory_2);
#line 138
undef($memory_1);
#line 122
goto label_2;
#line 122
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer_priv::is_token($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 143
$memory_1 = $memory_0->{'type'};
#line 143
$memory_1 = c_rt_lib::ov_is($memory_1, 'delimiter');
#line 143
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 143
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 143
$memory_2 = c_rt_lib::to_nl(1);
#line 143
undef($memory_1);
#line 143
$_[0] = $memory_0;return $memory_2;
#line 143
undef($memory_2);
#line 143
goto label_2;
#line 143
label_2:
#line 143
undef($memory_1);
#line 144
$memory_1 = $memory_0->{'type'};
#line 144
$memory_1 = c_rt_lib::ov_is($memory_1, 'operator');
#line 144
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 144
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 144
$memory_2 = c_rt_lib::to_nl(1);
#line 144
undef($memory_1);
#line 144
$_[0] = $memory_0;return $memory_2;
#line 144
undef($memory_2);
#line 144
goto label_4;
#line 144
label_4:
#line 144
undef($memory_1);
#line 145
$memory_1 = $memory_0->{'type'};
#line 145
$memory_1 = c_rt_lib::ov_is($memory_1, 'keyword');
#line 145
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 145
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 145
$memory_2 = c_rt_lib::to_nl(1);
#line 145
undef($memory_1);
#line 145
$_[0] = $memory_0;return $memory_2;
#line 145
undef($memory_2);
#line 145
goto label_6;
#line 145
label_6:
#line 145
undef($memory_1);
#line 146
$memory_1 = c_rt_lib::to_nl(0);
#line 146
$_[0] = $memory_0;return $memory_1;
#line 146
undef($memory_1);
#line 146
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::eat_token($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 150
$memory_2 = $memory_0->{'next_token'};
#line 150
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 150
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 150
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 150
$memory_2 = ntokenizer_priv::is_token($memory_0);
#line 150
label_3:
#line 150
undef($memory_3);
#line 150
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 150
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 151
ntokenizer_priv::get_next_token($memory_0);
#line 152
$memory_3 = c_rt_lib::to_nl(1);
#line 152
undef($memory_1);
#line 152
undef($memory_2);
#line 152
$_[0] = $memory_0;return $memory_3;
#line 152
undef($memory_3);
#line 153
goto label_2;
#line 153
label_2:
#line 153
undef($memory_2);
#line 154
$memory_2 = c_rt_lib::to_nl(0);
#line 154
undef($memory_1);
#line 154
$_[0] = $memory_0;return $memory_2;
#line 154
undef($memory_2);
#line 154
undef($memory_1);
#line 154
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::get_line($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 158
$memory_1 = $memory_0->{'ln_nr'};
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

sub ntokenizer::get_column($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 161
$memory_1 = 1;
#line 161
$memory_2 = $memory_0->{'pos'};
#line 161
$memory_1 = $memory_1 + $memory_2;
#line 161
undef($memory_2);
#line 161
$memory_2 = $memory_0->{'ln_pos'};
#line 161
$memory_1 = $memory_1 - $memory_2;
#line 161
undef($memory_2);
#line 161
$memory_3 = $memory_0->{'next_token'};
#line 161
$memory_2 = string::length($memory_3);
#line 161
undef($memory_3);
#line 161
$memory_1 = $memory_1 - $memory_2;
#line 161
undef($memory_2);
#line 161
undef($memory_0);
#line 161
return $memory_1;
#line 161
undef($memory_1);
#line 161
undef($memory_0);
#line 161
return;
}

sub ntokenizer::get_place($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 164
$memory_1 = $memory_0->{'place'};
#line 164
$_[0] = $memory_0;return $memory_1;
#line 164
undef($memory_1);
#line 164
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::get_place_ws($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 168
$memory_1 = $memory_0->{'place_ws'};
#line 168
$_[0] = $memory_0;return $memory_1;
#line 168
undef($memory_1);
#line 168
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::get_token($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 172
$memory_1 = $memory_0->{'next_token'};
#line 172
$_[0] = $memory_0;return $memory_1;
#line 172
undef($memory_1);
#line 172
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::is_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 176
$memory_3 = $memory_0->{'type'};
#line 176
$memory_2 = enum::eq($memory_3, $memory_1);
#line 176
undef($memory_3);
#line 176
undef($memory_1);
#line 176
$_[0] = $memory_0;return $memory_2;
#line 176
undef($memory_2);
#line 176
undef($memory_1);
#line 176
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::next_is($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 180
$memory_2 = $memory_0->{'next_token'};
#line 180
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 180
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 180
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 180
$memory_2 = ntokenizer_priv::is_token($memory_0);
#line 180
label_1:
#line 180
undef($memory_3);
#line 180
undef($memory_1);
#line 180
$_[0] = $memory_0;return $memory_2;
#line 180
undef($memory_2);
#line 180
undef($memory_1);
#line 180
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::eat_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 184
$memory_2 = ntokenizer::is_type($memory_0, $memory_1);
#line 184
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 184
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 184
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 184
$memory_3 = [];
#line 184
die(dfile::ssave($memory_3));
#line 184
goto label_2;
#line 184
label_2:
#line 184
undef($memory_2);
#line 184
undef($memory_3);
#line 185
$memory_2 = $memory_0->{'next_token'};
#line 186
ntokenizer_priv::get_next_token($memory_0);
#line 187
undef($memory_1);
#line 187
$_[0] = $memory_0;return $memory_2;
#line 187
undef($memory_2);
#line 187
undef($memory_1);
#line 187
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::is_text($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 191
$memory_2 = c_rt_lib::ov_mk_none('word');
#line 191
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 191
undef($memory_2);
#line 191
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 191
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 191
$memory_2 = c_rt_lib::to_nl(1);
#line 191
undef($memory_1);
#line 191
$_[0] = $memory_0;return $memory_2;
#line 191
undef($memory_2);
#line 191
goto label_2;
#line 191
label_2:
#line 191
undef($memory_1);
#line 192
$memory_2 = c_rt_lib::ov_mk_none('keyword');
#line 192
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 192
undef($memory_2);
#line 192
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 192
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 192
$memory_2 = c_rt_lib::to_nl(1);
#line 192
undef($memory_1);
#line 192
$_[0] = $memory_0;return $memory_2;
#line 192
undef($memory_2);
#line 192
goto label_4;
#line 192
label_4:
#line 192
undef($memory_1);
#line 193
$memory_2 = c_rt_lib::ov_mk_none('operator');
#line 193
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 193
undef($memory_2);
#line 193
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 193
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 194
$memory_4 = $memory_0->{'next_token'};
#line 194
$memory_5 = 0;
#line 194
$memory_6 = 1;
#line 194
$memory_3 = string::substr($memory_4, $memory_5, $memory_6);
#line 194
undef($memory_6);
#line 194
undef($memory_5);
#line 194
undef($memory_4);
#line 194
$memory_2 = string::is_letter($memory_3);
#line 194
undef($memory_3);
#line 194
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 194
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 194
$memory_3 = c_rt_lib::to_nl(1);
#line 194
undef($memory_1);
#line 194
undef($memory_2);
#line 194
$_[0] = $memory_0;return $memory_3;
#line 194
undef($memory_3);
#line 194
goto label_8;
#line 194
label_8:
#line 194
undef($memory_2);
#line 195
goto label_6;
#line 195
label_6:
#line 195
undef($memory_1);
#line 196
$memory_1 = c_rt_lib::to_nl(0);
#line 196
$_[0] = $memory_0;return $memory_1;
#line 196
undef($memory_1);
#line 196
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::eat_text($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 200
$memory_2 = c_rt_lib::ov_mk_none('word');
#line 200
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 200
undef($memory_2);
#line 200
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 200
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 200
$memory_3 = c_rt_lib::ov_mk_none('word');
#line 200
$memory_2 = ntokenizer::eat_type($memory_0, $memory_3);
#line 200
undef($memory_3);
#line 200
undef($memory_1);
#line 200
$_[0] = $memory_0;return $memory_2;
#line 200
undef($memory_2);
#line 200
goto label_2;
#line 200
label_2:
#line 200
undef($memory_1);
#line 201
$memory_2 = c_rt_lib::ov_mk_none('keyword');
#line 201
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 201
undef($memory_2);
#line 201
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 201
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 201
$memory_3 = c_rt_lib::ov_mk_none('keyword');
#line 201
$memory_2 = ntokenizer::eat_type($memory_0, $memory_3);
#line 201
undef($memory_3);
#line 201
undef($memory_1);
#line 201
$_[0] = $memory_0;return $memory_2;
#line 201
undef($memory_2);
#line 201
goto label_4;
#line 201
label_4:
#line 201
undef($memory_1);
#line 202
$memory_2 = c_rt_lib::ov_mk_none('operator');
#line 202
$memory_1 = ntokenizer::is_type($memory_0, $memory_2);
#line 202
undef($memory_2);
#line 202
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 202
if (c_rt_lib::check_true($memory_1)) {goto label_6;}
#line 203
$memory_4 = $memory_0->{'next_token'};
#line 203
$memory_5 = 0;
#line 203
$memory_6 = 1;
#line 203
$memory_3 = string::substr($memory_4, $memory_5, $memory_6);
#line 203
undef($memory_6);
#line 203
undef($memory_5);
#line 203
undef($memory_4);
#line 203
$memory_2 = string::is_letter($memory_3);
#line 203
undef($memory_3);
#line 203
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 203
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 203
$memory_4 = c_rt_lib::ov_mk_none('operator');
#line 203
$memory_3 = ntokenizer::eat_type($memory_0, $memory_4);
#line 203
undef($memory_4);
#line 203
undef($memory_1);
#line 203
undef($memory_2);
#line 203
$_[0] = $memory_0;return $memory_3;
#line 203
undef($memory_3);
#line 203
goto label_8;
#line 203
label_8:
#line 203
undef($memory_2);
#line 205
goto label_6;
#line 205
label_6:
#line 205
undef($memory_1);
#line 206
$memory_1 = [];
#line 206
die(dfile::ssave($memory_1));
#line 206
undef($memory_1);
#line 206
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ntokenizer::info($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 210
$memory_1 = "stopped on the : '";
#line 210
$memory_2 = $memory_0->{'next_token'};
#line 210
$memory_1 = $memory_1 . $memory_2;
#line 210
undef($memory_2);
#line 210
$memory_2 = "' of type: ";
#line 210
$memory_1 = $memory_1 . $memory_2;
#line 210
undef($memory_2);
#line 210
$memory_3 = $memory_0->{'type'};
#line 210
$memory_2 = ov::get_element($memory_3);
#line 210
undef($memory_3);
#line 210
$memory_1 = $memory_1 . $memory_2;
#line 210
undef($memory_2);
#line 210
undef($memory_0);
#line 210
return $memory_1;
#line 210
undef($memory_1);
#line 210
undef($memory_0);
#line 210
return;
}

sub ntokenizer_priv::is_hex_number($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 214
$memory_1 = string::is_digit($memory_0);
#line 214
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 214
$memory_1 = string::ord($memory_0);
#line 214
$memory_3 = 65;
#line 214
$memory_1 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 214
undef($memory_3);
#line 214
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 214
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 214
$memory_1 = string::ord($memory_0);
#line 214
$memory_3 = 70;
#line 214
$memory_1 = c_rt_lib::to_nl($memory_1 <= $memory_3);
#line 214
undef($memory_3);
#line 214
label_3:
#line 214
undef($memory_2);
#line 214
label_2:
#line 214
if (c_rt_lib::check_true($memory_1)) {goto label_1;}
#line 214
$memory_1 = string::ord($memory_0);
#line 214
$memory_3 = 97;
#line 214
$memory_1 = c_rt_lib::to_nl($memory_1 >= $memory_3);
#line 214
undef($memory_3);
#line 214
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 214
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 214
$memory_1 = string::ord($memory_0);
#line 214
$memory_3 = 102;
#line 214
$memory_1 = c_rt_lib::to_nl($memory_1 <= $memory_3);
#line 214
undef($memory_3);
#line 214
label_4:
#line 214
undef($memory_2);
#line 214
label_1:
#line 214
undef($memory_0);
#line 214
return $memory_1;
#line 214
undef($memory_1);
#line 214
undef($memory_0);
#line 214
return;
}

sub ntokenizer_priv::try_get_operator($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 219
$memory_2 = ntokenizer_priv::get_char_oper();
#line 219
$memory_4 = 0;
#line 219
$memory_5 = 1;
#line 219
$memory_6 = c_rt_lib::array_len($memory_2);
#line 219
label_3:
#line 219
$memory_7 = c_rt_lib::to_nl($memory_4 >= $memory_6);
#line 219
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 219
$memory_3 = $memory_2->[$memory_4];
#line 220
$memory_8 = $memory_0->{'len'};
#line 220
$memory_9 = 1;
#line 220
$memory_10 = $memory_0->{'pos'};
#line 220
$memory_9 = $memory_9 + $memory_10;
#line 220
undef($memory_10);
#line 220
$memory_10 = string::length($memory_3);
#line 220
$memory_9 = $memory_9 + $memory_10;
#line 220
undef($memory_10);
#line 220
$memory_8 = c_rt_lib::to_nl($memory_8 < $memory_9);
#line 220
undef($memory_9);
#line 220
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 220
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 220
undef($memory_8);
#line 220
goto label_2;
#line 220
goto label_5;
#line 220
label_5:
#line 220
undef($memory_8);
#line 221
$memory_9 = $memory_0->{'text'};
#line 221
$memory_10 = $memory_0->{'pos'};
#line 221
$memory_11 = string::length($memory_3);
#line 221
$memory_8 = c_std_lib::fast_substr($memory_9, $memory_10, $memory_11);
#line 221
undef($memory_11);
#line 221
undef($memory_10);
#line 221
undef($memory_9);
#line 221
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_3);
#line 221
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 221
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 222
$memory_11 = ntokenizer_priv::get_char($memory_0);
#line 222
$memory_9 = string::is_letter($memory_11);
#line 222
undef($memory_11);
#line 222
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 222
if (c_rt_lib::check_true($memory_10)) {goto label_10;}
#line 222
$memory_12 = $memory_0->{'text'};
#line 222
$memory_13 = $memory_0->{'pos'};
#line 222
$memory_14 = string::length($memory_3);
#line 222
$memory_13 = $memory_13 + $memory_14;
#line 222
undef($memory_14);
#line 222
$memory_14 = 1;
#line 222
$memory_11 = c_std_lib::fast_substr($memory_12, $memory_13, $memory_14);
#line 222
undef($memory_14);
#line 222
undef($memory_13);
#line 222
undef($memory_12);
#line 222
$memory_9 = string::is_letter($memory_11);
#line 222
undef($memory_11);
#line 222
label_10:
#line 222
undef($memory_10);
#line 222
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 222
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 222
undef($memory_8);
#line 222
undef($memory_9);
#line 222
goto label_2;
#line 222
goto label_9;
#line 222
label_9:
#line 222
undef($memory_9);
#line 226
$memory_1 = $memory_3;
#line 227
$memory_9 = c_rt_lib::to_nl(1);
#line 227
undef($memory_0);
#line 227
undef($memory_2);
#line 227
undef($memory_3);
#line 227
undef($memory_4);
#line 227
undef($memory_5);
#line 227
undef($memory_6);
#line 227
undef($memory_7);
#line 227
undef($memory_8);
#line 227
$_[1] = $memory_1;return $memory_9;
#line 227
undef($memory_9);
#line 228
goto label_7;
#line 228
label_7:
#line 228
undef($memory_8);
#line 228
label_2:
#line 229
$memory_4 = $memory_4 + $memory_5;
#line 229
goto label_3;
#line 229
label_1:
#line 229
undef($memory_2);
#line 229
undef($memory_3);
#line 229
undef($memory_4);
#line 229
undef($memory_5);
#line 229
undef($memory_6);
#line 229
undef($memory_7);
#line 230
$memory_2 = c_rt_lib::to_nl(0);
#line 230
undef($memory_0);
#line 230
$_[1] = $memory_1;return $memory_2;
#line 230
undef($memory_2);
#line 230
undef($memory_0);
#line 230
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub ntokenizer_priv::get_next_token($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 234
$memory_2 = $memory_0->{'ln_nr'};
#line 234
$memory_3 = $memory_0->{'pos'};
#line 234
$memory_4 = $memory_0->{'ln_pos'};
#line 234
$memory_3 = $memory_3 - $memory_4;
#line 234
undef($memory_4);
#line 234
$memory_4 = 1;
#line 234
$memory_3 = $memory_3 + $memory_4;
#line 234
undef($memory_4);
#line 234
$memory_1 = {line => $memory_2,position => $memory_3,};
#line 234
undef($memory_2);
#line 234
undef($memory_3);
#line 234
$memory_2 = $memory_1;
#line 234
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'place_ws'} = $memory_2;
#line 234
undef($memory_1);
#line 234
undef($memory_2);
#line 235
ntokenizer_priv::eat_ws($memory_0);
#line 236
$memory_2 = $memory_0->{'ln_nr'};
#line 236
$memory_3 = $memory_0->{'pos'};
#line 236
$memory_4 = $memory_0->{'ln_pos'};
#line 236
$memory_3 = $memory_3 - $memory_4;
#line 236
undef($memory_4);
#line 236
$memory_4 = 1;
#line 236
$memory_3 = $memory_3 + $memory_4;
#line 236
undef($memory_4);
#line 236
$memory_1 = {line => $memory_2,position => $memory_3,};
#line 236
undef($memory_2);
#line 236
undef($memory_3);
#line 236
$memory_2 = $memory_1;
#line 236
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'place'} = $memory_2;
#line 236
undef($memory_1);
#line 236
undef($memory_2);
#line 237
$memory_1 = $memory_0->{'type'};
#line 237
$memory_1 = c_rt_lib::ov_is($memory_1, 'error');
#line 237
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 237
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 237
undef($memory_1);
#line 237
$_[0] = $memory_0;return;
#line 237
goto label_2;
#line 237
label_2:
#line 237
undef($memory_1);
#line 238
$memory_1 = $memory_0->{'pos'};
#line 238
$memory_2 = $memory_0->{'len'};
#line 238
$memory_1 = c_rt_lib::to_nl($memory_1 == $memory_2);
#line 238
undef($memory_2);
#line 238
$memory_1 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_1));
#line 238
if (c_rt_lib::check_true($memory_1)) {goto label_4;}
#line 239
$memory_2 = c_rt_lib::ov_mk_none('end');
#line 239
$memory_3 = $memory_2;
#line 239
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_3;
#line 239
undef($memory_2);
#line 239
undef($memory_3);
#line 240
$memory_2 = "";
#line 240
$memory_3 = $memory_2;
#line 240
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 240
undef($memory_2);
#line 240
undef($memory_3);
#line 241
undef($memory_1);
#line 241
$_[0] = $memory_0;return;
#line 242
goto label_4;
#line 242
label_4:
#line 242
undef($memory_1);
#line 243
$memory_1 = ntokenizer_priv::get_char($memory_0);
#line 244
$memory_2 = "'";
#line 244
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 244
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 244
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 245
$memory_3 = "";
#line 245
$memory_4 = $memory_3;
#line 245
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_4;
#line 245
undef($memory_3);
#line 245
undef($memory_4);
#line 246
$memory_3 = c_rt_lib::ov_mk_none('string');
#line 246
$memory_4 = $memory_3;
#line 246
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 246
undef($memory_3);
#line 246
undef($memory_4);
#line 247
label_8:
#line 248
$memory_3 = 1;
#line 248
$memory_4 = "pos";
#line 248
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 248
$memory_4 = $memory_4 + $memory_3;
#line 248
$memory_5 = "pos";
#line 248
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 248
undef($memory_5);
#line 248
undef($memory_3);
#line 248
undef($memory_4);
#line 249
$memory_3 = ntokenizer_priv::get_char($memory_0);
#line 249
$memory_1 = $memory_3;
#line 249
undef($memory_3);
#line 250
$memory_3 = "'";
#line 250
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 250
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 250
if (c_rt_lib::check_true($memory_3)) {goto label_10;}
#line 251
$memory_4 = 1;
#line 251
$memory_5 = "pos";
#line 251
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 251
$memory_5 = $memory_5 + $memory_4;
#line 251
$memory_6 = "pos";
#line 251
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 251
undef($memory_6);
#line 251
undef($memory_4);
#line 251
undef($memory_5);
#line 252
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 252
$memory_5 = "'";
#line 252
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 252
undef($memory_5);
#line 252
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 252
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 252
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 252
undef($memory_1);
#line 252
undef($memory_2);
#line 252
undef($memory_3);
#line 252
undef($memory_4);
#line 252
$_[0] = $memory_0;return;
#line 252
goto label_12;
#line 252
label_12:
#line 252
undef($memory_4);
#line 253
goto label_13;
#line 253
label_10:
#line 253
$memory_3 = string::ord($memory_1);
#line 253
$memory_4 = 10;
#line 253
$memory_3 = c_rt_lib::to_nl($memory_3 == $memory_4);
#line 253
undef($memory_4);
#line 253
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 253
if (c_rt_lib::check_true($memory_3)) {goto label_13;}
#line 254
$memory_4 = c_rt_lib::ov_mk_none('multi_string');
#line 254
$memory_5 = $memory_4;
#line 254
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_5;
#line 254
undef($memory_4);
#line 254
undef($memory_5);
#line 255
undef($memory_1);
#line 255
undef($memory_2);
#line 255
undef($memory_3);
#line 255
$_[0] = $memory_0;return;
#line 256
goto label_13;
#line 256
label_13:
#line 256
undef($memory_3);
#line 257
$memory_3 = "next_token";
#line 257
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 257
$memory_3 = $memory_3 . $memory_1;
#line 257
$memory_4 = "next_token";
#line 257
c_rt_lib::set_ref_hash($memory_0, $memory_4, $memory_3);
#line 257
undef($memory_4);
#line 257
undef($memory_3);
#line 247
goto label_8;
#line 259
goto label_5;
#line 259
label_6:
#line 259
$memory_2 = ntokenizer_priv::get_next_char($memory_0);
#line 259
$memory_2 = $memory_1 . $memory_2;
#line 259
$memory_3 = "=>";
#line 259
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 259
undef($memory_3);
#line 259
if (c_rt_lib::check_true($memory_2)) {goto label_15;}
#line 259
$memory_2 = ntokenizer_priv::get_next_char($memory_0);
#line 259
$memory_2 = $memory_1 . $memory_2;
#line 259
$memory_3 = "::";
#line 259
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 259
undef($memory_3);
#line 259
label_15:
#line 259
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 259
if (c_rt_lib::check_true($memory_2)) {goto label_14;}
#line 260
$memory_3 = c_rt_lib::ov_mk_none('delimiter');
#line 260
$memory_4 = $memory_3;
#line 260
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 260
undef($memory_3);
#line 260
undef($memory_4);
#line 261
$memory_3 = ntokenizer_priv::get_next_char($memory_0);
#line 261
$memory_3 = $memory_1 . $memory_3;
#line 261
$memory_4 = $memory_3;
#line 261
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_4;
#line 261
undef($memory_3);
#line 261
undef($memory_4);
#line 262
$memory_3 = 2;
#line 262
$memory_4 = "pos";
#line 262
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 262
$memory_4 = $memory_4 + $memory_3;
#line 262
$memory_5 = "pos";
#line 262
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 262
undef($memory_5);
#line 262
undef($memory_3);
#line 262
undef($memory_4);
#line 263
goto label_5;
#line 263
label_14:
#line 263
$memory_3 = ";:,[]{}()";
#line 263
$memory_2 = string::index2($memory_3, $memory_1);
#line 263
undef($memory_3);
#line 263
$memory_3 = 0;
#line 263
$memory_2 = c_rt_lib::to_nl($memory_2 >= $memory_3);
#line 263
undef($memory_3);
#line 263
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 263
if (c_rt_lib::check_true($memory_2)) {goto label_16;}
#line 264
$memory_3 = c_rt_lib::ov_mk_none('delimiter');
#line 264
$memory_4 = $memory_3;
#line 264
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 264
undef($memory_3);
#line 264
undef($memory_4);
#line 265
$memory_3 = $memory_1;
#line 265
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 265
undef($memory_3);
#line 266
$memory_3 = "pos";
#line 266
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 266
$memory_4 = 1;
#line 266
$memory_3 = $memory_3 + $memory_4;
#line 266
$memory_5 = "pos";
#line 266
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 266
undef($memory_5);
#line 266
undef($memory_3);
#line 266
undef($memory_4);
#line 267
goto label_5;
#line 267
label_16:
#line 267
$memory_2 = string::is_letter($memory_1);
#line 267
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 267
if (c_rt_lib::check_true($memory_2)) {goto label_17;}
#line 268
$memory_3 = $memory_1;
#line 268
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 268
undef($memory_3);
#line 269
$memory_3 = "pos";
#line 269
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 269
$memory_4 = 1;
#line 269
$memory_3 = $memory_3 + $memory_4;
#line 269
$memory_5 = "pos";
#line 269
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 269
undef($memory_5);
#line 269
undef($memory_3);
#line 269
undef($memory_4);
#line 270
$memory_3 = ntokenizer_priv::get_char($memory_0);
#line 270
$memory_1 = $memory_3;
#line 270
undef($memory_3);
#line 271
label_19:
#line 271
$memory_3 = "";
#line 271
$memory_3 = c_rt_lib::to_nl($memory_1 ne $memory_3);
#line 271
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 271
if (c_rt_lib::check_true($memory_4)) {goto label_21;}
#line 271
$memory_3 = string::is_letter($memory_1);
#line 271
if (c_rt_lib::check_true($memory_3)) {goto label_22;}
#line 271
$memory_3 = string::is_digit($memory_1);
#line 271
label_22:
#line 271
if (c_rt_lib::check_true($memory_3)) {goto label_21;}
#line 271
$memory_3 = "_";
#line 271
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 271
label_21:
#line 271
undef($memory_4);
#line 271
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 271
if (c_rt_lib::check_true($memory_3)) {goto label_18;}
#line 272
$memory_4 = "next_token";
#line 272
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 272
$memory_4 = $memory_4 . $memory_1;
#line 272
$memory_5 = "next_token";
#line 272
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 272
undef($memory_5);
#line 272
undef($memory_4);
#line 273
$memory_4 = "pos";
#line 273
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 273
$memory_5 = 1;
#line 273
$memory_4 = $memory_4 + $memory_5;
#line 273
$memory_6 = "pos";
#line 273
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 273
undef($memory_6);
#line 273
undef($memory_4);
#line 273
undef($memory_5);
#line 274
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 274
$memory_1 = $memory_4;
#line 274
undef($memory_4);
#line 275
goto label_19;
#line 275
label_18:
#line 275
undef($memory_3);
#line 276
$memory_4 = ntokenizer_priv::get_lett_oper();
#line 276
$memory_5 = $memory_0->{'next_token'};
#line 276
$memory_3 = hash::has_key($memory_4, $memory_5);
#line 276
undef($memory_5);
#line 276
undef($memory_4);
#line 276
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 276
if (c_rt_lib::check_true($memory_3)) {goto label_24;}
#line 277
$memory_4 = c_rt_lib::ov_mk_none('operator');
#line 277
$memory_5 = $memory_4;
#line 277
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_5;
#line 277
undef($memory_4);
#line 277
undef($memory_5);
#line 278
goto label_23;
#line 278
label_24:
#line 279
$memory_5 = ntokenizer_priv::get_keywords();
#line 279
$memory_6 = $memory_0->{'next_token'};
#line 279
$memory_4 = hash::has_key($memory_5, $memory_6);
#line 279
undef($memory_6);
#line 279
undef($memory_5);
#line 279
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 279
$memory_4 = c_rt_lib::ov_mk_none('word');
#line 279
goto label_25;
#line 279
label_26:
#line 279
$memory_4 = c_rt_lib::ov_mk_none('keyword');
#line 279
label_25:
#line 279
$memory_5 = $memory_4;
#line 279
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_5;
#line 279
undef($memory_4);
#line 279
undef($memory_5);
#line 280
goto label_23;
#line 280
label_23:
#line 280
undef($memory_3);
#line 281
goto label_5;
#line 281
label_17:
#line 281
$memory_2 = ntokenizer_priv::try_get_operator($memory_0, $memory_1);
#line 281
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 281
if (c_rt_lib::check_true($memory_2)) {goto label_27;}
#line 282
$memory_3 = c_rt_lib::ov_mk_none('operator');
#line 282
$memory_4 = $memory_3;
#line 282
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 282
undef($memory_3);
#line 282
undef($memory_4);
#line 283
$memory_3 = $memory_1;
#line 283
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 283
undef($memory_3);
#line 284
$memory_3 = string::length($memory_1);
#line 284
$memory_4 = "pos";
#line 284
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 284
$memory_4 = $memory_4 + $memory_3;
#line 284
$memory_5 = "pos";
#line 284
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 284
undef($memory_5);
#line 284
undef($memory_3);
#line 284
undef($memory_4);
#line 285
goto label_5;
#line 285
label_27:
#line 285
$memory_2 = string::is_digit($memory_1);
#line 285
if (c_rt_lib::check_true($memory_2)) {goto label_29;}
#line 285
$memory_2 = "-";
#line 285
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 285
if (c_rt_lib::check_true($memory_2)) {goto label_31;}
#line 285
$memory_2 = "+";
#line 285
$memory_2 = c_rt_lib::to_nl($memory_1 eq $memory_2);
#line 285
label_31:
#line 285
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 285
if (c_rt_lib::check_true($memory_3)) {goto label_30;}
#line 285
$memory_4 = ntokenizer_priv::get_next_char($memory_0);
#line 285
$memory_2 = string::is_digit($memory_4);
#line 285
undef($memory_4);
#line 285
label_30:
#line 285
undef($memory_3);
#line 285
label_29:
#line 285
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 285
if (c_rt_lib::check_true($memory_2)) {goto label_28;}
#line 286
$memory_3 = $memory_1;
#line 286
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 286
undef($memory_3);
#line 287
$memory_3 = c_rt_lib::ov_mk_none('number');
#line 287
$memory_4 = $memory_3;
#line 287
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 287
undef($memory_3);
#line 287
undef($memory_4);
#line 288
$memory_3 = "pos";
#line 288
$memory_3 = c_rt_lib::get_ref_hash($memory_0, $memory_3);
#line 288
$memory_4 = 1;
#line 288
$memory_3 = $memory_3 + $memory_4;
#line 288
$memory_5 = "pos";
#line 288
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_3);
#line 288
undef($memory_5);
#line 288
undef($memory_3);
#line 288
undef($memory_4);
#line 289
$memory_3 = "-";
#line 289
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 289
if (c_rt_lib::check_true($memory_3)) {goto label_34;}
#line 289
$memory_3 = "+";
#line 289
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 289
label_34:
#line 289
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 289
if (c_rt_lib::check_true($memory_3)) {goto label_33;}
#line 290
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 290
$memory_1 = $memory_4;
#line 290
undef($memory_4);
#line 291
$memory_4 = "next_token";
#line 291
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 291
$memory_4 = $memory_4 . $memory_1;
#line 291
$memory_5 = "next_token";
#line 291
c_rt_lib::set_ref_hash($memory_0, $memory_5, $memory_4);
#line 291
undef($memory_5);
#line 291
undef($memory_4);
#line 292
$memory_4 = "pos";
#line 292
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 292
$memory_5 = 1;
#line 292
$memory_4 = $memory_4 + $memory_5;
#line 292
$memory_6 = "pos";
#line 292
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 292
undef($memory_6);
#line 292
undef($memory_4);
#line 292
undef($memory_5);
#line 293
goto label_33;
#line 293
label_33:
#line 293
undef($memory_3);
#line 294
$memory_3 = 0;
#line 294
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 294
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 294
if (c_rt_lib::check_true($memory_5)) {goto label_38;}
#line 294
$memory_3 = ntokenizer_priv::get_char($memory_0);
#line 294
$memory_6 = "x";
#line 294
$memory_3 = c_rt_lib::to_nl($memory_3 eq $memory_6);
#line 294
undef($memory_6);
#line 294
label_38:
#line 294
undef($memory_5);
#line 294
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 294
if (c_rt_lib::check_true($memory_4)) {goto label_37;}
#line 294
$memory_5 = ntokenizer_priv::get_next_char($memory_0);
#line 294
$memory_3 = ntokenizer_priv::is_hex_number($memory_5);
#line 294
undef($memory_5);
#line 294
label_37:
#line 294
undef($memory_4);
#line 294
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 294
if (c_rt_lib::check_true($memory_3)) {goto label_36;}
#line 295
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 295
$memory_5 = "next_token";
#line 295
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 295
$memory_5 = $memory_5 . $memory_4;
#line 295
$memory_6 = "next_token";
#line 295
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 295
undef($memory_6);
#line 295
undef($memory_4);
#line 295
undef($memory_5);
#line 296
$memory_4 = "pos";
#line 296
$memory_4 = c_rt_lib::get_ref_hash($memory_0, $memory_4);
#line 296
$memory_5 = 1;
#line 296
$memory_4 = $memory_4 + $memory_5;
#line 296
$memory_6 = "pos";
#line 296
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_4);
#line 296
undef($memory_6);
#line 296
undef($memory_4);
#line 296
undef($memory_5);
#line 297
$memory_4 = ntokenizer_priv::get_char($memory_0);
#line 297
$memory_1 = $memory_4;
#line 297
undef($memory_4);
#line 298
label_40:
#line 298
$memory_4 = ntokenizer_priv::is_hex_number($memory_1);
#line 298
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 298
if (c_rt_lib::check_true($memory_4)) {goto label_39;}
#line 299
$memory_5 = "next_token";
#line 299
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 299
$memory_5 = $memory_5 . $memory_1;
#line 299
$memory_6 = "next_token";
#line 299
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 299
undef($memory_6);
#line 299
undef($memory_5);
#line 300
$memory_5 = "pos";
#line 300
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 300
$memory_6 = 1;
#line 300
$memory_5 = $memory_5 + $memory_6;
#line 300
$memory_7 = "pos";
#line 300
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 300
undef($memory_7);
#line 300
undef($memory_5);
#line 300
undef($memory_6);
#line 301
$memory_5 = ntokenizer_priv::get_char($memory_0);
#line 301
$memory_1 = $memory_5;
#line 301
undef($memory_5);
#line 302
goto label_40;
#line 302
label_39:
#line 302
undef($memory_4);
#line 303
goto label_35;
#line 303
label_36:
#line 304
$memory_4 = 0;
#line 305
label_42:
#line 306
$memory_5 = ntokenizer_priv::get_char($memory_0);
#line 306
$memory_1 = $memory_5;
#line 306
undef($memory_5);
#line 307
$memory_5 = 1;
#line 307
$memory_5 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 307
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 307
if (c_rt_lib::check_true($memory_5)) {goto label_44;}
#line 307
$memory_6 = 1;
#line 307
$memory_4 = $memory_4 + $memory_6;
#line 307
undef($memory_6);
#line 307
goto label_44;
#line 307
label_44:
#line 307
undef($memory_5);
#line 308
$memory_5 = ".";
#line 308
$memory_5 = c_rt_lib::to_nl($memory_1 eq $memory_5);
#line 308
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 308
if (c_rt_lib::check_true($memory_7)) {goto label_48;}
#line 308
$memory_8 = ntokenizer_priv::get_next_char($memory_0);
#line 308
$memory_5 = string::is_digit($memory_8);
#line 308
undef($memory_8);
#line 308
label_48:
#line 308
undef($memory_7);
#line 308
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 308
if (c_rt_lib::check_true($memory_6)) {goto label_47;}
#line 308
$memory_5 = 0;
#line 308
$memory_5 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 308
label_47:
#line 308
undef($memory_6);
#line 308
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 308
if (c_rt_lib::check_true($memory_5)) {goto label_46;}
#line 308
$memory_6 = 1;
#line 308
$memory_4 = $memory_6;
#line 308
undef($memory_6);
#line 308
goto label_46;
#line 308
label_46:
#line 308
undef($memory_5);
#line 309
$memory_5 = "";
#line 309
$memory_5 = c_rt_lib::to_nl($memory_1 eq $memory_5);
#line 309
if (c_rt_lib::check_true($memory_5)) {goto label_51;}
#line 309
$memory_5 = string::is_digit($memory_1);
#line 309
if (c_rt_lib::check_true($memory_5)) {goto label_52;}
#line 309
$memory_5 = 1;
#line 309
$memory_5 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 309
label_52:
#line 309
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 309
label_51:
#line 309
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 309
if (c_rt_lib::check_true($memory_5)) {goto label_50;}
#line 309
undef($memory_5);
#line 309
goto label_41;
#line 309
goto label_50;
#line 309
label_50:
#line 309
undef($memory_5);
#line 310
$memory_5 = "next_token";
#line 310
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 310
$memory_5 = $memory_5 . $memory_1;
#line 310
$memory_6 = "next_token";
#line 310
c_rt_lib::set_ref_hash($memory_0, $memory_6, $memory_5);
#line 310
undef($memory_6);
#line 310
undef($memory_5);
#line 311
$memory_5 = "pos";
#line 311
$memory_5 = c_rt_lib::get_ref_hash($memory_0, $memory_5);
#line 311
$memory_6 = 1;
#line 311
$memory_5 = $memory_5 + $memory_6;
#line 311
$memory_7 = "pos";
#line 311
c_rt_lib::set_ref_hash($memory_0, $memory_7, $memory_5);
#line 311
undef($memory_7);
#line 311
undef($memory_5);
#line 311
undef($memory_6);
#line 305
goto label_42;
#line 305
label_41:
#line 305
undef($memory_4);
#line 313
goto label_35;
#line 313
label_35:
#line 313
undef($memory_3);
#line 314
goto label_5;
#line 314
label_28:
#line 315
$memory_3 = c_rt_lib::ov_mk_none('error');
#line 315
$memory_4 = $memory_3;
#line 315
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_4;
#line 315
undef($memory_3);
#line 315
undef($memory_4);
#line 316
$memory_3 = $memory_1;
#line 316
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'next_token'} = $memory_3;
#line 316
undef($memory_3);
#line 317
goto label_5;
#line 317
label_5:
#line 317
undef($memory_2);
#line 317
undef($memory_1);
#line 317
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
