use c_rt_lib;
use ov;
use hash;
use ptd;
use tct;
use tc_types;
use boolean_t;
use string;
use array;
use ptd_parser;
sub ptd_system_priv::add_error;
sub ptd_system::is_known;
sub ptd_system::is_equal;
sub ptd_system::is_try_ensure_type;
sub ptd_system::try_get_ensure_sub_types;
sub ptd_system::is_condition_type;
sub ptd_system::is_accepted;
sub ptd_system::is_accepted_info;
sub ptd_system_priv::add_ref_name;
sub ptd_system_priv::is_cycle_ref;
sub ptd_system::cross_type;
sub ptd_system_priv::cross_type;
sub ptd_system::rec_to_hash;
sub ptd_system::cast_type;
sub ptd_system::check_assignment;
sub ptd_system_priv::mk_err;
sub ptd_system_priv::check_assignment_info;
sub ptd_system_priv::add_delete;
sub ptd_system_priv::add_create;
sub ptd_system::can_delete;
sub ptd_system::can_create;
sub ptd_system_priv::walk_on_type;
sub ptd_system_priv::get_all_ref_in_type;
sub ptd_system_priv::get_ref_in_type;
sub ptd_system_priv::get_function_def;
sub ptd_system::get_ref_type;

return 1;

sub ptd_system_priv::add_error($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 17
$memory_2 = "errors";
#line 17
$memory_2 = c_rt_lib::get_ref_hash($memory_0, $memory_2);
#line 17
$memory_4 = $memory_0->{'current_line'};
#line 17
$memory_5 = $memory_0->{'module'};
#line 17
$memory_6 = 1;
#line 17
$memory_6 = -$memory_6;
#line 17
$memory_7 = c_rt_lib::ov_mk_none('error');
#line 17
$memory_3 = {message => $memory_1,line => $memory_4,module => $memory_5,column => $memory_6,type => $memory_7,};
#line 17
undef($memory_4);
#line 17
undef($memory_5);
#line 17
undef($memory_6);
#line 17
undef($memory_7);
#line 17
array::push($memory_2, $memory_3);
#line 17
undef($memory_3);
#line 17
$memory_3 = "errors";
#line 17
c_rt_lib::set_ref_hash($memory_0, $memory_3, $memory_2);
#line 17
undef($memory_3);
#line 17
undef($memory_2);
#line 17
undef($memory_1);
#line 17
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub ptd_system::is_known($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 21
$memory_1 = $memory_0;
#line 21
$memory_1 = c_rt_lib::ov_is($memory_1, 'known');
#line 21
if (c_rt_lib::check_true($memory_1)) {goto label_1;}
#line 21
$memory_1 = $memory_0;
#line 21
$memory_1 = c_rt_lib::ov_is($memory_1, 'knownhash');
#line 21
label_1:
#line 21
undef($memory_0);
#line 21
return $memory_1;
#line 21
undef($memory_1);
#line 21
undef($memory_0);
#line 21
return;
}

sub ptd_system::is_equal($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];
#line 25
$memory_2 = ov::get_element($memory_0);
#line 25
$memory_3 = ov::get_element($memory_1);
#line 25
$memory_2 = c_rt_lib::to_nl($memory_2 eq $memory_3);
#line 25
undef($memory_3);
#line 25
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 25
$memory_2 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 25
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 25
$memory_3 = c_rt_lib::to_nl(0);
#line 25
undef($memory_0);
#line 25
undef($memory_1);
#line 25
undef($memory_2);
#line 25
return $memory_3;
#line 25
undef($memory_3);
#line 25
goto label_2;
#line 25
label_2:
#line 25
undef($memory_2);
#line 26
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 26
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 27
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 27
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 29
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 29
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 31
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 31
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 37
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 37
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 39
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 39
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 40
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 40
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 49
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 49
if (c_rt_lib::check_true($memory_2)) {goto label_11;}
#line 50
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 50
if (c_rt_lib::check_true($memory_2)) {goto label_12;}
#line 50
$memory_2 = "NOMATCHALERT";
#line 50
$memory_2 = [$memory_2,$memory_0];
#line 50
die(dfile::ssave($memory_2));
#line 26
label_4:
#line 27
goto label_3;
#line 27
label_5:
#line 27
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 28
$memory_5 = $memory_1;
#line 28
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_arr');
#line 28
$memory_4 = ptd_system::is_equal($memory_3, $memory_5);
#line 28
undef($memory_5);
#line 28
undef($memory_0);
#line 28
undef($memory_1);
#line 28
undef($memory_2);
#line 28
undef($memory_3);
#line 28
return $memory_4;
#line 28
undef($memory_4);
#line 28
undef($memory_3);
#line 29
goto label_3;
#line 29
label_6:
#line 29
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 30
$memory_5 = $memory_1;
#line 30
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_hash');
#line 30
$memory_4 = ptd_system::is_equal($memory_3, $memory_5);
#line 30
undef($memory_5);
#line 30
undef($memory_0);
#line 30
undef($memory_1);
#line 30
undef($memory_2);
#line 30
undef($memory_3);
#line 30
return $memory_4;
#line 30
undef($memory_4);
#line 30
undef($memory_3);
#line 31
goto label_3;
#line 31
label_7:
#line 31
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 32
$memory_5 = $memory_1;
#line 32
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_rec');
#line 32
$memory_4 = hash::size($memory_5);
#line 32
undef($memory_5);
#line 32
$memory_5 = hash::size($memory_3);
#line 32
$memory_4 = c_rt_lib::to_nl($memory_4 != $memory_5);
#line 32
undef($memory_5);
#line 32
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 32
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 32
$memory_5 = c_rt_lib::to_nl(0);
#line 32
undef($memory_0);
#line 32
undef($memory_1);
#line 32
undef($memory_2);
#line 32
undef($memory_3);
#line 32
undef($memory_4);
#line 32
return $memory_5;
#line 32
undef($memory_5);
#line 32
goto label_14;
#line 32
label_14:
#line 32
undef($memory_4);
#line 33
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 33
label_17:
#line 33
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 33
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 33
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 33
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 34
$memory_8 = $memory_1;
#line 34
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_rec');
#line 34
$memory_7 = hash::has_key($memory_8, $memory_4);
#line 34
undef($memory_8);
#line 34
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 34
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 34
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 34
$memory_8 = c_rt_lib::to_nl(0);
#line 34
undef($memory_0);
#line 34
undef($memory_1);
#line 34
undef($memory_2);
#line 34
undef($memory_3);
#line 34
undef($memory_4);
#line 34
undef($memory_5);
#line 34
undef($memory_6);
#line 34
undef($memory_7);
#line 34
return $memory_8;
#line 34
undef($memory_8);
#line 34
goto label_19;
#line 34
label_19:
#line 34
undef($memory_7);
#line 35
$memory_9 = $memory_1;
#line 35
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_rec');
#line 35
$memory_8 = hash::get_value($memory_9, $memory_4);
#line 35
undef($memory_9);
#line 35
$memory_7 = ptd_system::is_equal($memory_5, $memory_8);
#line 35
undef($memory_8);
#line 35
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 35
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 35
if (c_rt_lib::check_true($memory_7)) {goto label_21;}
#line 35
$memory_8 = c_rt_lib::to_nl(0);
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
undef($memory_6);
#line 35
undef($memory_7);
#line 35
return $memory_8;
#line 35
undef($memory_8);
#line 35
goto label_21;
#line 35
label_21:
#line 35
undef($memory_7);
#line 36
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 36
goto label_17;
#line 36
label_15:
#line 36
undef($memory_4);
#line 36
undef($memory_5);
#line 36
undef($memory_6);
#line 36
undef($memory_3);
#line 37
goto label_3;
#line 37
label_8:
#line 37
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 38
$memory_4 = $memory_1;
#line 38
$memory_4 = c_rt_lib::ov_as($memory_4, 'tct_ref');
#line 38
$memory_4 = c_rt_lib::to_nl($memory_3 eq $memory_4);
#line 38
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 38
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 38
if (c_rt_lib::check_true($memory_4)) {goto label_23;}
#line 38
$memory_5 = c_rt_lib::to_nl(0);
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
return $memory_5;
#line 38
undef($memory_5);
#line 38
goto label_23;
#line 38
label_23:
#line 38
undef($memory_4);
#line 38
undef($memory_3);
#line 39
goto label_3;
#line 39
label_9:
#line 40
goto label_3;
#line 40
label_10:
#line 40
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 41
$memory_5 = $memory_1;
#line 41
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_var');
#line 41
$memory_4 = hash::size($memory_5);
#line 41
undef($memory_5);
#line 41
$memory_5 = hash::size($memory_3);
#line 41
$memory_4 = c_rt_lib::to_nl($memory_4 != $memory_5);
#line 41
undef($memory_5);
#line 41
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 41
if (c_rt_lib::check_true($memory_4)) {goto label_25;}
#line 41
$memory_5 = c_rt_lib::to_nl(0);
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
#line 41
goto label_25;
#line 41
label_25:
#line 41
undef($memory_4);
#line 42
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 42
label_28:
#line 42
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 42
if (c_rt_lib::check_true($memory_4)) {goto label_26;}
#line 42
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 42
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 43
$memory_8 = $memory_1;
#line 43
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_var');
#line 43
$memory_7 = hash::has_key($memory_8, $memory_4);
#line 43
undef($memory_8);
#line 43
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 43
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 43
if (c_rt_lib::check_true($memory_7)) {goto label_30;}
#line 43
$memory_8 = c_rt_lib::to_nl(0);
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
undef($memory_5);
#line 43
undef($memory_6);
#line 43
undef($memory_7);
#line 43
return $memory_8;
#line 43
undef($memory_8);
#line 43
goto label_30;
#line 43
label_30:
#line 43
undef($memory_7);
#line 44
$memory_8 = $memory_1;
#line 44
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_var');
#line 44
$memory_7 = hash::get_value($memory_8, $memory_4);
#line 44
undef($memory_8);
#line 45
$memory_8 = $memory_5;
#line 45
$memory_8 = c_rt_lib::ov_is($memory_8, 'no_param');
#line 45
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 45
if (c_rt_lib::check_true($memory_9)) {goto label_33;}
#line 45
$memory_8 = $memory_7;
#line 45
$memory_8 = c_rt_lib::ov_is($memory_8, 'no_param');
#line 45
label_33:
#line 45
undef($memory_9);
#line 45
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 45
if (c_rt_lib::check_true($memory_8)) {goto label_32;}
#line 45
undef($memory_7);
#line 45
undef($memory_8);
#line 45
goto label_27;
#line 45
goto label_32;
#line 45
label_32:
#line 45
undef($memory_8);
#line 46
$memory_8 = $memory_5;
#line 46
$memory_8 = c_rt_lib::ov_is($memory_8, 'with_param');
#line 46
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 46
if (c_rt_lib::check_true($memory_9)) {goto label_36;}
#line 46
$memory_8 = $memory_7;
#line 46
$memory_8 = c_rt_lib::ov_is($memory_8, 'with_param');
#line 46
label_36:
#line 46
undef($memory_9);
#line 46
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 46
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 46
if (c_rt_lib::check_true($memory_8)) {goto label_35;}
#line 46
$memory_9 = c_rt_lib::to_nl(0);
#line 46
undef($memory_0);
#line 46
undef($memory_1);
#line 46
undef($memory_2);
#line 46
undef($memory_3);
#line 46
undef($memory_4);
#line 46
undef($memory_5);
#line 46
undef($memory_6);
#line 46
undef($memory_7);
#line 46
undef($memory_8);
#line 46
return $memory_9;
#line 46
undef($memory_9);
#line 46
goto label_35;
#line 46
label_35:
#line 46
undef($memory_8);
#line 47
$memory_9 = $memory_7;
#line 47
$memory_9 = c_rt_lib::ov_as($memory_9, 'with_param');
#line 47
$memory_10 = $memory_5;
#line 47
$memory_10 = c_rt_lib::ov_as($memory_10, 'with_param');
#line 47
$memory_8 = ptd_system::is_equal($memory_9, $memory_10);
#line 47
undef($memory_10);
#line 47
undef($memory_9);
#line 47
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 47
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 47
if (c_rt_lib::check_true($memory_8)) {goto label_38;}
#line 47
$memory_9 = c_rt_lib::to_nl(0);
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
undef($memory_7);
#line 47
undef($memory_8);
#line 47
return $memory_9;
#line 47
undef($memory_9);
#line 47
goto label_38;
#line 47
label_38:
#line 47
undef($memory_8);
#line 47
undef($memory_7);
#line 47
label_27:
#line 48
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 48
goto label_28;
#line 48
label_26:
#line 48
undef($memory_4);
#line 48
undef($memory_5);
#line 48
undef($memory_6);
#line 48
undef($memory_3);
#line 49
goto label_3;
#line 49
label_11:
#line 50
goto label_3;
#line 50
label_12:
#line 51
goto label_3;
#line 51
label_3:
#line 51
undef($memory_2);
#line 52
$memory_2 = c_rt_lib::to_nl(1);
#line 52
undef($memory_0);
#line 52
undef($memory_1);
#line 52
return $memory_2;
#line 52
undef($memory_2);
#line 52
undef($memory_0);
#line 52
undef($memory_1);
#line 52
return;
}

sub ptd_system::is_try_ensure_type($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 57
$memory_6 = tct::tct_im();
#line 57
$memory_7 = tct::tct_im();
#line 57
$memory_5 = {ok => $memory_6,err => $memory_7,};
#line 57
undef($memory_6);
#line 57
undef($memory_7);
#line 57
$memory_4 = tct::var($memory_5);
#line 57
undef($memory_5);
#line 57
$memory_3 = ptd_system::is_accepted($memory_0, $memory_4, $memory_1, $memory_2);
#line 57
undef($memory_4);
#line 57
undef($memory_0);
#line 57
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 57
undef($memory_3);
#line 57
undef($memory_0);
#line 57
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::try_get_ensure_sub_types($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 62
$memory_4 = tct::tct_im();
#line 62
$memory_5 = tct::tct_im();
#line 62
$memory_3 = {ok => $memory_4,err => $memory_5,};
#line 62
undef($memory_4);
#line 62
undef($memory_5);
#line 63
$memory_4 = ptd_system::can_delete($memory_0, $memory_1, $memory_2);
#line 63
$memory_0 = $memory_4;
#line 63
undef($memory_4);
#line 64
$memory_4 = ptd_system::is_try_ensure_type($memory_0, $memory_1, $memory_2);
#line 64
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 64
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 65
$memory_5 = $memory_0->{'type'};
#line 65
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_im');
#line 65
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 65
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 65
undef($memory_0);
#line 65
undef($memory_4);
#line 65
undef($memory_5);
#line 65
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 65
goto label_4;
#line 65
label_4:
#line 65
undef($memory_5);
#line 66
$memory_6 = tct::empty();
#line 66
$memory_7 = tct::empty();
#line 66
$memory_5 = {ok => $memory_6,err => $memory_7,};
#line 66
undef($memory_6);
#line 66
undef($memory_7);
#line 66
$memory_3 = $memory_5;
#line 66
undef($memory_5);
#line 67
$memory_5 = $memory_0->{'type'};
#line 67
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_var');
#line 67
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 67
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 67
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 67
undef($memory_0);
#line 67
undef($memory_4);
#line 67
undef($memory_5);
#line 67
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 67
goto label_6;
#line 67
label_6:
#line 67
undef($memory_5);
#line 68
$memory_5 = $memory_0->{'type'};
#line 68
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_var');
#line 69
$memory_7 = "ok";
#line 69
$memory_6 = hash::has_key($memory_5, $memory_7);
#line 69
undef($memory_7);
#line 69
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 69
if (c_rt_lib::check_true($memory_6)) {goto label_8;}
#line 70
$memory_8 = "ok";
#line 70
$memory_7 = hash::get_value($memory_5, $memory_8);
#line 70
undef($memory_8);
#line 71
$memory_8 = c_rt_lib::ov_is($memory_7, 'no_param');
#line 71
if (c_rt_lib::check_true($memory_8)) {goto label_10;}
#line 72
$memory_8 = c_rt_lib::ov_is($memory_7, 'with_param');
#line 72
if (c_rt_lib::check_true($memory_8)) {goto label_11;}
#line 72
$memory_8 = "NOMATCHALERT";
#line 72
$memory_8 = [$memory_8,$memory_7];
#line 72
die(dfile::ssave($memory_8));
#line 71
label_10:
#line 72
goto label_9;
#line 72
label_11:
#line 72
$memory_9 = c_rt_lib::ov_as($memory_7, 'with_param');
#line 73
$memory_10 = $memory_9;
#line 73
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'ok'} = $memory_10;
#line 73
undef($memory_10);
#line 73
undef($memory_9);
#line 74
goto label_9;
#line 74
label_9:
#line 74
undef($memory_8);
#line 74
undef($memory_7);
#line 75
goto label_8;
#line 75
label_8:
#line 75
undef($memory_6);
#line 76
$memory_7 = "err";
#line 76
$memory_6 = hash::has_key($memory_5, $memory_7);
#line 76
undef($memory_7);
#line 76
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 76
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 77
$memory_8 = "err";
#line 77
$memory_7 = hash::get_value($memory_5, $memory_8);
#line 77
undef($memory_8);
#line 78
$memory_8 = c_rt_lib::ov_is($memory_7, 'no_param');
#line 78
if (c_rt_lib::check_true($memory_8)) {goto label_15;}
#line 79
$memory_8 = c_rt_lib::ov_is($memory_7, 'with_param');
#line 79
if (c_rt_lib::check_true($memory_8)) {goto label_16;}
#line 79
$memory_8 = "NOMATCHALERT";
#line 79
$memory_8 = [$memory_8,$memory_7];
#line 79
die(dfile::ssave($memory_8));
#line 78
label_15:
#line 79
goto label_14;
#line 79
label_16:
#line 79
$memory_9 = c_rt_lib::ov_as($memory_7, 'with_param');
#line 80
$memory_10 = $memory_9;
#line 80
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'err'} = $memory_10;
#line 80
undef($memory_10);
#line 80
undef($memory_9);
#line 81
goto label_14;
#line 81
label_14:
#line 81
undef($memory_8);
#line 81
undef($memory_7);
#line 82
goto label_13;
#line 82
label_13:
#line 82
undef($memory_6);
#line 82
undef($memory_5);
#line 83
goto label_1;
#line 83
label_2:
#line 84
$memory_5 = "in try|ensure expr; expr must be variant: ok|err";
#line 84
ptd_system_priv::add_error($memory_2, $memory_5);
#line 84
undef($memory_5);
#line 85
goto label_1;
#line 85
label_1:
#line 85
undef($memory_4);
#line 86
undef($memory_0);
#line 86
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 86
undef($memory_3);
#line 86
undef($memory_0);
#line 86
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::is_condition_type($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 91
$memory_4 = tct::bool();
#line 91
$memory_3 = ptd_system::is_accepted($memory_0, $memory_4, $memory_1, $memory_2);
#line 91
undef($memory_4);
#line 91
undef($memory_0);
#line 91
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_3;
#line 91
undef($memory_3);
#line 91
undef($memory_0);
#line 91
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::is_accepted($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 96
$memory_4 = ptd_system::is_accepted_info($memory_0, $memory_1, $memory_2, $memory_3);
#line 97
$memory_5 = $memory_4;
#line 97
$memory_5 = c_rt_lib::ov_is($memory_5, 'ok');
#line 97
undef($memory_0);
#line 97
undef($memory_1);
#line 97
undef($memory_4);
#line 97
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 97
undef($memory_5);
#line 97
undef($memory_4);
#line 97
undef($memory_0);
#line 97
undef($memory_1);
#line 97
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system::is_accepted_info($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 102
$memory_4 = ptd_system::can_delete($memory_0, $memory_2, $memory_3);
#line 102
$memory_0 = $memory_4;
#line 102
undef($memory_4);
#line 103
$memory_4 = $memory_0->{'type'};
#line 103
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_im');
#line 103
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 103
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 103
$memory_5 = c_rt_lib::ov_mk_none('ok');
#line 103
undef($memory_0);
#line 103
undef($memory_1);
#line 103
undef($memory_4);
#line 103
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 103
undef($memory_5);
#line 103
goto label_2;
#line 103
label_2:
#line 103
undef($memory_4);
#line 104
$memory_4 = $memory_1;
#line 104
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_rec');
#line 104
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 104
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 105
$memory_7 = $memory_1;
#line 105
$memory_7 = c_rt_lib::ov_as($memory_7, 'tct_rec');
#line 105
$memory_5 = hash::size($memory_7);
#line 105
undef($memory_7);
#line 105
$memory_7 = 0;
#line 105
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 105
undef($memory_7);
#line 105
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 105
if (c_rt_lib::check_true($memory_6)) {goto label_7;}
#line 105
$memory_5 = $memory_0->{'type'};
#line 105
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_rec');
#line 105
label_7:
#line 105
undef($memory_6);
#line 105
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 105
if (c_rt_lib::check_true($memory_5)) {goto label_6;}
#line 105
$memory_6 = c_rt_lib::ov_mk_none('ok');
#line 105
undef($memory_0);
#line 105
undef($memory_1);
#line 105
undef($memory_4);
#line 105
undef($memory_5);
#line 105
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 105
undef($memory_6);
#line 105
goto label_6;
#line 105
label_6:
#line 105
undef($memory_5);
#line 106
goto label_8;
#line 106
label_4:
#line 106
$memory_4 = $memory_1;
#line 106
$memory_4 = c_rt_lib::ov_is($memory_4, 'tct_var');
#line 106
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 106
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 107
$memory_7 = $memory_1;
#line 107
$memory_7 = c_rt_lib::ov_as($memory_7, 'tct_var');
#line 107
$memory_5 = hash::size($memory_7);
#line 107
undef($memory_7);
#line 107
$memory_7 = 0;
#line 107
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_7);
#line 107
undef($memory_7);
#line 107
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 107
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 107
$memory_5 = $memory_0->{'type'};
#line 107
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_var');
#line 107
label_11:
#line 107
undef($memory_6);
#line 107
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 107
if (c_rt_lib::check_true($memory_5)) {goto label_10;}
#line 107
$memory_6 = c_rt_lib::ov_mk_none('ok');
#line 107
undef($memory_0);
#line 107
undef($memory_1);
#line 107
undef($memory_4);
#line 107
undef($memory_5);
#line 107
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_6;
#line 107
undef($memory_6);
#line 107
goto label_10;
#line 107
label_10:
#line 107
undef($memory_5);
#line 108
goto label_8;
#line 108
label_8:
#line 108
undef($memory_4);
#line 109
$memory_5 = 1;
#line 109
$memory_6 = {};
#line 109
$memory_7 = {};
#line 109
$memory_8 = c_rt_lib::to_nl(0);
#line 109
$memory_9 = c_rt_lib::to_nl(0);
#line 109
$memory_4 = {level => $memory_5,from => $memory_6,to => $memory_7,check => $memory_8,cast => $memory_9,};
#line 109
undef($memory_5);
#line 109
undef($memory_6);
#line 109
undef($memory_7);
#line 109
undef($memory_8);
#line 109
undef($memory_9);
#line 110
$memory_6 = $memory_0->{'type'};
#line 110
$memory_7 = $memory_0->{'src'};
#line 110
$memory_5 = ptd_system_priv::check_assignment_info($memory_1, $memory_6, $memory_4, $memory_7, $memory_2, $memory_3);
#line 110
undef($memory_7);
#line 110
undef($memory_6);
#line 110
undef($memory_0);
#line 110
undef($memory_1);
#line 110
undef($memory_4);
#line 110
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 110
undef($memory_5);
#line 110
undef($memory_4);
#line 110
undef($memory_0);
#line 110
undef($memory_1);
#line 110
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system_priv::add_ref_name($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 115
$memory_6 = $memory_0;
#line 115
$memory_6 = c_rt_lib::ov_as($memory_6, 'tct_ref');
#line 116
$memory_7 = hash::has_key($memory_1, $memory_6);
#line 116
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 116
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 116
$memory_8 = hash::get_value($memory_1, $memory_6);
#line 116
$memory_2 = $memory_8;
#line 116
undef($memory_8);
#line 116
goto label_2;
#line 116
label_2:
#line 116
undef($memory_7);
#line 117
array::push($memory_2, $memory_3);
#line 118
hash::set_value($memory_1, $memory_6, $memory_2);
#line 119
$memory_7 = ptd_system::get_ref_type($memory_6, $memory_4, $memory_5);
#line 119
$memory_0 = $memory_7;
#line 119
undef($memory_7);
#line 120
undef($memory_3);
#line 120
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[4] = $memory_4;$_[5] = $memory_5;return $memory_6;
#line 120
undef($memory_6);
#line 120
undef($memory_3);
#line 120
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[4] = $memory_4;$_[5] = $memory_5;}

sub ptd_system_priv::is_cycle_ref($$$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];$memory_4 = $_[4];$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);$memory_6 = $_[6];Scalar::Util::weaken($_[6]) if ref($_[6]);
#line 126
$memory_7 = $memory_0;
#line 126
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_ref');
#line 126
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 126
if (c_rt_lib::check_true($memory_8)) {goto label_3;}
#line 126
$memory_7 = $memory_1;
#line 126
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_ref');
#line 126
label_3:
#line 126
undef($memory_8);
#line 126
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 126
if (c_rt_lib::check_true($memory_7)) {goto label_2;}
#line 127
$memory_8 = $memory_0;
#line 127
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_ref');
#line 127
$memory_9 = $memory_1;
#line 127
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_ref');
#line 127
$memory_8 = c_rt_lib::to_nl($memory_8 eq $memory_9);
#line 127
undef($memory_9);
#line 127
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 127
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 127
$memory_9 = c_rt_lib::to_nl(1);
#line 127
undef($memory_3);
#line 127
undef($memory_4);
#line 127
undef($memory_7);
#line 127
undef($memory_8);
#line 127
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_9;
#line 127
undef($memory_9);
#line 127
goto label_5;
#line 127
label_5:
#line 127
undef($memory_8);
#line 128
$memory_8 = $memory_3;
#line 128
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 128
if (c_rt_lib::check_true($memory_9)) {goto label_8;}
#line 128
$memory_10 = c_rt_lib::ov_mk_none('speculation');
#line 128
$memory_8 = ptd_system_priv::check_assignment_info($memory_0, $memory_1, $memory_2, $memory_10, $memory_5, $memory_6);
#line 128
undef($memory_10);
#line 128
$memory_8 = c_rt_lib::ov_is($memory_8, 'ok');
#line 128
label_8:
#line 128
undef($memory_9);
#line 128
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 128
if (c_rt_lib::check_true($memory_8)) {goto label_7;}
#line 128
$memory_9 = c_rt_lib::to_nl(1);
#line 128
undef($memory_3);
#line 128
undef($memory_4);
#line 128
undef($memory_7);
#line 128
undef($memory_8);
#line 128
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_9;
#line 128
undef($memory_9);
#line 128
goto label_7;
#line 128
label_7:
#line 128
undef($memory_8);
#line 129
goto label_2;
#line 129
label_2:
#line 129
undef($memory_7);
#line 130
$memory_7 = [];
#line 131
$memory_8 = [];
#line 132
label_10:
#line 132
$memory_9 = $memory_1;
#line 132
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_ref');
#line 132
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 132
if (c_rt_lib::check_true($memory_9)) {goto label_9;}
#line 133
$memory_11 = "from";
#line 133
$memory_11 = c_rt_lib::get_ref_hash($memory_2, $memory_11);
#line 133
$memory_12 = $memory_2->{'level'};
#line 133
$memory_10 = ptd_system_priv::add_ref_name($memory_1, $memory_11, $memory_8, $memory_12, $memory_5, $memory_6);
#line 133
undef($memory_12);
#line 133
$memory_12 = "from";
#line 133
c_rt_lib::set_ref_hash($memory_2, $memory_12, $memory_11);
#line 133
undef($memory_12);
#line 133
undef($memory_11);
#line 134
$memory_11 = $memory_2->{'check'};
#line 134
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 134
if (c_rt_lib::check_true($memory_13)) {goto label_14;}
#line 134
$memory_11 = array::len($memory_8);
#line 134
$memory_14 = 1;
#line 134
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_14);
#line 134
undef($memory_14);
#line 134
label_14:
#line 134
undef($memory_13);
#line 134
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 134
if (c_rt_lib::check_true($memory_12)) {goto label_13;}
#line 134
$memory_11 = $memory_4;
#line 134
label_13:
#line 134
undef($memory_12);
#line 134
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 134
if (c_rt_lib::check_true($memory_11)) {goto label_12;}
#line 134
ptd_system_priv::add_delete($memory_10, $memory_5, $memory_6);
#line 134
goto label_12;
#line 134
label_12:
#line 134
undef($memory_11);
#line 134
undef($memory_10);
#line 135
goto label_10;
#line 135
label_9:
#line 135
undef($memory_9);
#line 136
$memory_9 = $memory_2->{'cast'};
#line 136
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 136
if (c_rt_lib::check_true($memory_9)) {goto label_16;}
#line 137
$memory_10 = $memory_1;
#line 137
$memory_10 = c_rt_lib::ov_is($memory_10, 'tct_im');
#line 137
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 137
if (c_rt_lib::check_true($memory_10)) {goto label_18;}
#line 138
$memory_11 = $memory_2->{'check'};
#line 138
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 138
if (c_rt_lib::check_true($memory_11)) {goto label_20;}
#line 138
$memory_12 = c_rt_lib::ov_mk_none('create');
#line 138
$memory_13 = $memory_2->{'to'};
#line 138
ptd_system_priv::walk_on_type($memory_0, $memory_12, $memory_13, $memory_5, $memory_6);
#line 138
undef($memory_13);
#line 138
undef($memory_12);
#line 138
goto label_20;
#line 138
label_20:
#line 138
undef($memory_11);
#line 139
$memory_11 = c_rt_lib::to_nl(1);
#line 139
undef($memory_3);
#line 139
undef($memory_4);
#line 139
undef($memory_7);
#line 139
undef($memory_8);
#line 139
undef($memory_9);
#line 139
undef($memory_10);
#line 139
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_11;
#line 139
undef($memory_11);
#line 140
goto label_18;
#line 140
label_18:
#line 140
undef($memory_10);
#line 141
goto label_16;
#line 141
label_16:
#line 141
undef($memory_9);
#line 142
label_22:
#line 142
$memory_9 = $memory_0;
#line 142
$memory_9 = c_rt_lib::ov_is($memory_9, 'tct_ref');
#line 142
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 142
if (c_rt_lib::check_true($memory_9)) {goto label_21;}
#line 143
$memory_11 = "to";
#line 143
$memory_11 = c_rt_lib::get_ref_hash($memory_2, $memory_11);
#line 143
$memory_12 = $memory_2->{'level'};
#line 143
$memory_10 = ptd_system_priv::add_ref_name($memory_0, $memory_11, $memory_7, $memory_12, $memory_5, $memory_6);
#line 143
undef($memory_12);
#line 143
$memory_12 = "to";
#line 143
c_rt_lib::set_ref_hash($memory_2, $memory_12, $memory_11);
#line 143
undef($memory_12);
#line 143
undef($memory_11);
#line 144
$memory_11 = $memory_2->{'check'};
#line 144
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 144
if (c_rt_lib::check_true($memory_12)) {goto label_25;}
#line 144
$memory_11 = array::len($memory_7);
#line 144
$memory_13 = 1;
#line 144
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_13);
#line 144
undef($memory_13);
#line 144
label_25:
#line 144
undef($memory_12);
#line 144
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 144
if (c_rt_lib::check_true($memory_11)) {goto label_24;}
#line 144
ptd_system_priv::add_create($memory_10, $memory_5, $memory_6);
#line 144
goto label_24;
#line 144
label_24:
#line 144
undef($memory_11);
#line 144
undef($memory_10);
#line 145
goto label_22;
#line 145
label_21:
#line 145
undef($memory_9);
#line 146
$memory_9 = 0;
#line 147
$memory_10 = 0;
#line 147
label_27:
#line 147
$memory_11 = array::len($memory_7);
#line 147
$memory_13 = 1;
#line 147
$memory_11 = $memory_11 - $memory_13;
#line 147
undef($memory_13);
#line 147
$memory_11 = c_rt_lib::to_nl($memory_10 < $memory_11);
#line 147
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 147
if (c_rt_lib::check_true($memory_12)) {goto label_29;}
#line 147
$memory_11 = array::len($memory_8);
#line 147
$memory_13 = 0;
#line 147
$memory_11 = c_rt_lib::to_nl($memory_11 > $memory_13);
#line 147
undef($memory_13);
#line 147
label_29:
#line 147
undef($memory_12);
#line 147
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 147
if (c_rt_lib::check_true($memory_11)) {goto label_26;}
#line 148
label_31:
#line 148
$memory_12 = $memory_8->[$memory_9];
#line 148
$memory_13 = $memory_7->[$memory_10];
#line 148
$memory_12 = c_rt_lib::to_nl($memory_12 < $memory_13);
#line 148
undef($memory_13);
#line 148
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 148
if (c_rt_lib::check_true($memory_12)) {goto label_30;}
#line 149
$memory_13 = 1;
#line 149
$memory_9 = $memory_9 + $memory_13;
#line 149
undef($memory_13);
#line 150
goto label_31;
#line 150
label_30:
#line 150
undef($memory_12);
#line 151
$memory_12 = $memory_8->[$memory_9];
#line 151
$memory_13 = $memory_7->[$memory_10];
#line 151
$memory_12 = c_rt_lib::to_nl($memory_12 == $memory_13);
#line 151
undef($memory_13);
#line 151
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 151
if (c_rt_lib::check_true($memory_12)) {goto label_33;}
#line 151
$memory_13 = c_rt_lib::to_nl(1);
#line 151
undef($memory_3);
#line 151
undef($memory_4);
#line 151
undef($memory_7);
#line 151
undef($memory_8);
#line 151
undef($memory_9);
#line 151
undef($memory_10);
#line 151
undef($memory_11);
#line 151
undef($memory_12);
#line 151
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_13;
#line 151
undef($memory_13);
#line 151
goto label_33;
#line 151
label_33:
#line 151
undef($memory_12);
#line 151
$memory_12 = 1;
#line 151
$memory_10 = $memory_10 + $memory_12;
#line 151
undef($memory_12);
#line 152
goto label_27;
#line 152
label_26:
#line 152
undef($memory_10);
#line 152
undef($memory_11);
#line 153
$memory_10 = 1;
#line 153
$memory_11 = "level";
#line 153
$memory_11 = c_rt_lib::get_ref_hash($memory_2, $memory_11);
#line 153
$memory_11 = $memory_11 + $memory_10;
#line 153
$memory_12 = "level";
#line 153
c_rt_lib::set_ref_hash($memory_2, $memory_12, $memory_11);
#line 153
undef($memory_12);
#line 153
undef($memory_10);
#line 153
undef($memory_11);
#line 154
$memory_10 = c_rt_lib::to_nl(0);
#line 154
undef($memory_3);
#line 154
undef($memory_4);
#line 154
undef($memory_7);
#line 154
undef($memory_8);
#line 154
undef($memory_9);
#line 154
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return $memory_10;
#line 154
undef($memory_10);
#line 154
undef($memory_7);
#line 154
undef($memory_8);
#line 154
undef($memory_9);
#line 154
undef($memory_3);
#line 154
undef($memory_4);
#line 154
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;return;
$_[0] = $memory_0;$_[1] = $memory_1;$_[2] = $memory_2;$_[5] = $memory_5;$_[6] = $memory_6;}

sub ptd_system::cross_type($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 159
$memory_5 = 1;
#line 159
$memory_6 = {};
#line 159
$memory_7 = {};
#line 159
$memory_8 = c_rt_lib::to_nl(0);
#line 159
$memory_9 = c_rt_lib::to_nl(0);
#line 159
$memory_4 = {level => $memory_5,from => $memory_6,to => $memory_7,check => $memory_8,cast => $memory_9,};
#line 159
undef($memory_5);
#line 159
undef($memory_6);
#line 159
undef($memory_7);
#line 159
undef($memory_8);
#line 159
undef($memory_9);
#line 160
$memory_5 = ptd_system_priv::cross_type($memory_0, $memory_1, $memory_4, $memory_2, $memory_3);
#line 160
undef($memory_0);
#line 160
undef($memory_1);
#line 160
undef($memory_4);
#line 160
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 160
undef($memory_5);
#line 160
undef($memory_4);
#line 160
undef($memory_0);
#line 160
undef($memory_1);
#line 160
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system_priv::cross_type($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 165
$memory_5 = $memory_1;
#line 165
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_im');
#line 165
if (c_rt_lib::check_true($memory_5)) {goto label_3;}
#line 165
$memory_5 = $memory_0;
#line 165
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_im');
#line 165
label_3:
#line 165
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 165
if (c_rt_lib::check_true($memory_5)) {goto label_2;}
#line 165
$memory_6 = c_rt_lib::ov_mk_none('tct_im');
#line 165
undef($memory_0);
#line 165
undef($memory_1);
#line 165
undef($memory_2);
#line 165
undef($memory_5);
#line 165
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_6;
#line 165
undef($memory_6);
#line 165
goto label_2;
#line 165
label_2:
#line 165
undef($memory_5);
#line 166
$memory_6 = c_rt_lib::to_nl(1);
#line 166
$memory_7 = c_rt_lib::to_nl(0);
#line 166
$memory_5 = ptd_system_priv::is_cycle_ref($memory_0, $memory_1, $memory_2, $memory_6, $memory_7, $memory_3, $memory_4);
#line 166
undef($memory_7);
#line 166
undef($memory_6);
#line 166
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 166
if (c_rt_lib::check_true($memory_5)) {goto label_5;}
#line 167
undef($memory_1);
#line 167
undef($memory_2);
#line 167
undef($memory_5);
#line 167
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_0;
#line 168
goto label_5;
#line 168
label_5:
#line 168
undef($memory_5);
#line 169
$memory_5 = $memory_2->{'level'};
#line 169
$memory_6 = 200;
#line 169
$memory_5 = c_rt_lib::to_nl($memory_5 == $memory_6);
#line 169
undef($memory_6);
#line 169
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 169
if (c_rt_lib::check_true($memory_5)) {goto label_7;}
#line 170
$memory_6 = "can't assignment two that diffrent type to one var";
#line 170
ptd_system_priv::add_error($memory_4, $memory_6);
#line 170
undef($memory_6);
#line 171
$memory_6 = c_rt_lib::ov_mk_none('tct_im');
#line 171
undef($memory_0);
#line 171
undef($memory_1);
#line 171
undef($memory_2);
#line 171
undef($memory_5);
#line 171
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_6;
#line 171
undef($memory_6);
#line 172
goto label_7;
#line 172
label_7:
#line 172
undef($memory_5);
#line 173
$memory_5 = $memory_1;
#line 173
$memory_5 = c_rt_lib::ov_is($memory_5, 'tct_empty');
#line 173
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 173
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 173
undef($memory_1);
#line 173
undef($memory_2);
#line 173
undef($memory_5);
#line 173
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_0;
#line 173
goto label_9;
#line 173
label_9:
#line 173
undef($memory_5);
#line 174
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 174
if (c_rt_lib::check_true($memory_5)) {goto label_11;}
#line 176
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 176
if (c_rt_lib::check_true($memory_5)) {goto label_12;}
#line 178
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 178
if (c_rt_lib::check_true($memory_5)) {goto label_13;}
#line 180
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 180
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 182
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 182
if (c_rt_lib::check_true($memory_5)) {goto label_15;}
#line 184
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 184
if (c_rt_lib::check_true($memory_5)) {goto label_16;}
#line 188
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 188
if (c_rt_lib::check_true($memory_5)) {goto label_17;}
#line 226
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 226
if (c_rt_lib::check_true($memory_5)) {goto label_18;}
#line 253
$memory_5 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 253
if (c_rt_lib::check_true($memory_5)) {goto label_19;}
#line 253
$memory_5 = "NOMATCHALERT";
#line 253
$memory_5 = [$memory_5,$memory_0];
#line 253
die(dfile::ssave($memory_5));
#line 174
label_11:
#line 175
undef($memory_0);
#line 175
undef($memory_2);
#line 175
undef($memory_5);
#line 175
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_1;
#line 176
goto label_10;
#line 176
label_12:
#line 177
$memory_6 = c_rt_lib::ov_mk_none('tct_im');
#line 177
undef($memory_0);
#line 177
undef($memory_1);
#line 177
undef($memory_2);
#line 177
undef($memory_5);
#line 177
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_6;
#line 177
undef($memory_6);
#line 178
goto label_10;
#line 178
label_13:
#line 179
$memory_6 = $memory_1;
#line 179
$memory_6 = c_rt_lib::ov_is($memory_6, 'tct_sim');
#line 179
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 179
if (c_rt_lib::check_true($memory_6)) {goto label_21;}
#line 179
$memory_7 = c_rt_lib::ov_mk_none('tct_sim');
#line 179
undef($memory_0);
#line 179
undef($memory_1);
#line 179
undef($memory_2);
#line 179
undef($memory_5);
#line 179
undef($memory_6);
#line 179
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_7;
#line 179
undef($memory_7);
#line 179
goto label_21;
#line 179
label_21:
#line 179
undef($memory_6);
#line 180
goto label_10;
#line 180
label_14:
#line 180
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 181
$memory_7 = [];
#line 181
die(dfile::ssave($memory_7));
#line 181
undef($memory_7);
#line 181
undef($memory_6);
#line 182
goto label_10;
#line 182
label_15:
#line 183
$memory_6 = [];
#line 183
die(dfile::ssave($memory_6));
#line 183
undef($memory_6);
#line 184
goto label_10;
#line 184
label_16:
#line 184
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 185
$memory_7 = $memory_1;
#line 185
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_arr');
#line 185
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 185
if (c_rt_lib::check_true($memory_7)) {goto label_23;}
#line 186
$memory_10 = $memory_1;
#line 186
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_arr');
#line 186
$memory_9 = ptd_system_priv::cross_type($memory_6, $memory_10, $memory_2, $memory_3, $memory_4);
#line 186
undef($memory_10);
#line 186
$memory_8 = tct::arr($memory_9);
#line 186
undef($memory_9);
#line 186
undef($memory_0);
#line 186
undef($memory_1);
#line 186
undef($memory_2);
#line 186
undef($memory_5);
#line 186
undef($memory_6);
#line 186
undef($memory_7);
#line 186
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_8;
#line 186
undef($memory_8);
#line 187
goto label_23;
#line 187
label_23:
#line 187
undef($memory_7);
#line 187
undef($memory_6);
#line 188
goto label_10;
#line 188
label_17:
#line 188
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 189
$memory_7 = $memory_6;
#line 190
$memory_8 = $memory_1;
#line 190
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_var');
#line 190
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 190
if (c_rt_lib::check_true($memory_8)) {goto label_25;}
#line 191
$memory_9 = $memory_1;
#line 191
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_var');
#line 192
$memory_12 = c_rt_lib::init_iter($memory_6);
#line 192
label_28:
#line 192
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 192
if (c_rt_lib::check_true($memory_10)) {goto label_26;}
#line 192
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 192
$memory_11 = c_rt_lib::hash_get_value($memory_6, $memory_10);
#line 193
$memory_13 = hash::has_key($memory_9, $memory_10);
#line 193
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 193
if (c_rt_lib::check_true($memory_13)) {goto label_30;}
#line 194
$memory_14 = hash::get_value($memory_9, $memory_10);
#line 195
$memory_15 = c_rt_lib::ov_is($memory_14, 'with_param');
#line 195
if (c_rt_lib::check_true($memory_15)) {goto label_32;}
#line 201
$memory_15 = c_rt_lib::ov_is($memory_14, 'no_param');
#line 201
if (c_rt_lib::check_true($memory_15)) {goto label_33;}
#line 201
$memory_15 = "NOMATCHALERT";
#line 201
$memory_15 = [$memory_15,$memory_14];
#line 201
die(dfile::ssave($memory_15));
#line 195
label_32:
#line 195
$memory_16 = c_rt_lib::ov_as($memory_14, 'with_param');
#line 196
$memory_17 = c_rt_lib::ov_is($memory_11, 'with_param');
#line 196
if (c_rt_lib::check_true($memory_17)) {goto label_35;}
#line 198
$memory_17 = c_rt_lib::ov_is($memory_11, 'no_param');
#line 198
if (c_rt_lib::check_true($memory_17)) {goto label_36;}
#line 198
$memory_17 = "NOMATCHALERT";
#line 198
$memory_17 = [$memory_17,$memory_11];
#line 198
die(dfile::ssave($memory_17));
#line 196
label_35:
#line 196
$memory_18 = c_rt_lib::ov_as($memory_11, 'with_param');
#line 197
$memory_19 = ptd_system_priv::cross_type($memory_16, $memory_18, $memory_2, $memory_3, $memory_4);
#line 197
hash::set_value($memory_7, $memory_10, $memory_19);
#line 197
undef($memory_19);
#line 197
undef($memory_18);
#line 198
goto label_34;
#line 198
label_36:
#line 199
$memory_18 = c_rt_lib::ov_mk_none('tct_im');
#line 199
undef($memory_0);
#line 199
undef($memory_1);
#line 199
undef($memory_2);
#line 199
undef($memory_5);
#line 199
undef($memory_6);
#line 199
undef($memory_7);
#line 199
undef($memory_8);
#line 199
undef($memory_9);
#line 199
undef($memory_10);
#line 199
undef($memory_11);
#line 199
undef($memory_12);
#line 199
undef($memory_13);
#line 199
undef($memory_14);
#line 199
undef($memory_15);
#line 199
undef($memory_16);
#line 199
undef($memory_17);
#line 199
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_18;
#line 199
undef($memory_18);
#line 200
goto label_34;
#line 200
label_34:
#line 200
undef($memory_17);
#line 200
undef($memory_16);
#line 201
goto label_31;
#line 201
label_33:
#line 202
$memory_16 = c_rt_lib::ov_is($memory_11, 'with_param');
#line 202
if (c_rt_lib::check_true($memory_16)) {goto label_38;}
#line 204
$memory_16 = c_rt_lib::ov_is($memory_11, 'no_param');
#line 204
if (c_rt_lib::check_true($memory_16)) {goto label_39;}
#line 204
$memory_16 = "NOMATCHALERT";
#line 204
$memory_16 = [$memory_16,$memory_11];
#line 204
die(dfile::ssave($memory_16));
#line 202
label_38:
#line 202
$memory_17 = c_rt_lib::ov_as($memory_11, 'with_param');
#line 203
$memory_18 = c_rt_lib::ov_mk_none('tct_im');
#line 203
undef($memory_0);
#line 203
undef($memory_1);
#line 203
undef($memory_2);
#line 203
undef($memory_5);
#line 203
undef($memory_6);
#line 203
undef($memory_7);
#line 203
undef($memory_8);
#line 203
undef($memory_9);
#line 203
undef($memory_10);
#line 203
undef($memory_11);
#line 203
undef($memory_12);
#line 203
undef($memory_13);
#line 203
undef($memory_14);
#line 203
undef($memory_15);
#line 203
undef($memory_16);
#line 203
undef($memory_17);
#line 203
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_18;
#line 203
undef($memory_18);
#line 203
undef($memory_17);
#line 204
goto label_37;
#line 204
label_39:
#line 205
$memory_17 = tct::none();
#line 205
hash::set_value($memory_7, $memory_10, $memory_17);
#line 205
undef($memory_17);
#line 206
goto label_37;
#line 206
label_37:
#line 206
undef($memory_16);
#line 207
goto label_31;
#line 207
label_31:
#line 207
undef($memory_15);
#line 207
undef($memory_14);
#line 208
goto label_29;
#line 208
label_30:
#line 209
$memory_14 = c_rt_lib::ov_is($memory_11, 'with_param');
#line 209
if (c_rt_lib::check_true($memory_14)) {goto label_41;}
#line 211
$memory_14 = c_rt_lib::ov_is($memory_11, 'no_param');
#line 211
if (c_rt_lib::check_true($memory_14)) {goto label_42;}
#line 211
$memory_14 = "NOMATCHALERT";
#line 211
$memory_14 = [$memory_14,$memory_11];
#line 211
die(dfile::ssave($memory_14));
#line 209
label_41:
#line 209
$memory_15 = c_rt_lib::ov_as($memory_11, 'with_param');
#line 210
hash::set_value($memory_7, $memory_10, $memory_15);
#line 210
undef($memory_15);
#line 211
goto label_40;
#line 211
label_42:
#line 212
$memory_15 = tct::none();
#line 212
hash::set_value($memory_7, $memory_10, $memory_15);
#line 212
undef($memory_15);
#line 213
goto label_40;
#line 213
label_40:
#line 213
undef($memory_14);
#line 214
goto label_29;
#line 214
label_29:
#line 214
undef($memory_13);
#line 215
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 215
goto label_28;
#line 215
label_26:
#line 215
undef($memory_10);
#line 215
undef($memory_11);
#line 215
undef($memory_12);
#line 216
$memory_12 = c_rt_lib::init_iter($memory_9);
#line 216
label_45:
#line 216
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 216
if (c_rt_lib::check_true($memory_10)) {goto label_43;}
#line 216
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 216
$memory_11 = c_rt_lib::hash_get_value($memory_9, $memory_10);
#line 217
$memory_13 = hash::has_key($memory_7, $memory_10);
#line 217
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 217
if (c_rt_lib::check_true($memory_13)) {goto label_47;}
#line 217
undef($memory_13);
#line 217
goto label_44;
#line 217
goto label_47;
#line 217
label_47:
#line 217
undef($memory_13);
#line 218
$memory_13 = c_rt_lib::ov_is($memory_11, 'with_param');
#line 218
if (c_rt_lib::check_true($memory_13)) {goto label_49;}
#line 220
$memory_13 = c_rt_lib::ov_is($memory_11, 'no_param');
#line 220
if (c_rt_lib::check_true($memory_13)) {goto label_50;}
#line 220
$memory_13 = "NOMATCHALERT";
#line 220
$memory_13 = [$memory_13,$memory_11];
#line 220
die(dfile::ssave($memory_13));
#line 218
label_49:
#line 218
$memory_14 = c_rt_lib::ov_as($memory_11, 'with_param');
#line 219
hash::set_value($memory_7, $memory_10, $memory_14);
#line 219
undef($memory_14);
#line 220
goto label_48;
#line 220
label_50:
#line 221
$memory_14 = tct::none();
#line 221
hash::set_value($memory_7, $memory_10, $memory_14);
#line 221
undef($memory_14);
#line 222
goto label_48;
#line 222
label_48:
#line 222
undef($memory_13);
#line 222
label_44:
#line 223
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 223
goto label_45;
#line 223
label_43:
#line 223
undef($memory_10);
#line 223
undef($memory_11);
#line 223
undef($memory_12);
#line 224
$memory_10 = tct::var($memory_7);
#line 224
undef($memory_0);
#line 224
undef($memory_1);
#line 224
undef($memory_2);
#line 224
undef($memory_5);
#line 224
undef($memory_6);
#line 224
undef($memory_7);
#line 224
undef($memory_8);
#line 224
undef($memory_9);
#line 224
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_10;
#line 224
undef($memory_10);
#line 224
undef($memory_9);
#line 225
goto label_25;
#line 225
label_25:
#line 225
undef($memory_8);
#line 225
undef($memory_7);
#line 225
undef($memory_6);
#line 226
goto label_10;
#line 226
label_18:
#line 226
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 227
$memory_7 = $memory_1;
#line 227
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_rec');
#line 227
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 227
if (c_rt_lib::check_true($memory_7)) {goto label_52;}
#line 228
$memory_8 = $memory_1;
#line 228
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_rec');
#line 229
$memory_9 = c_rt_lib::to_nl(0);
#line 230
$memory_12 = c_rt_lib::init_iter($memory_6);
#line 230
label_55:
#line 230
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 230
if (c_rt_lib::check_true($memory_10)) {goto label_53;}
#line 230
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 230
$memory_11 = c_rt_lib::hash_get_value($memory_6, $memory_10);
#line 231
$memory_13 = hash::has_key($memory_8, $memory_10);
#line 231
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 231
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 231
if (c_rt_lib::check_true($memory_13)) {goto label_57;}
#line 231
$memory_14 = c_rt_lib::to_nl(1);
#line 231
$memory_9 = $memory_14;
#line 231
undef($memory_14);
#line 231
goto label_57;
#line 231
label_57:
#line 231
undef($memory_13);
#line 232
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 232
goto label_55;
#line 232
label_53:
#line 232
undef($memory_10);
#line 232
undef($memory_11);
#line 232
undef($memory_12);
#line 233
$memory_12 = c_rt_lib::init_iter($memory_8);
#line 233
label_60:
#line 233
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 233
if (c_rt_lib::check_true($memory_10)) {goto label_58;}
#line 233
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 233
$memory_11 = c_rt_lib::hash_get_value($memory_8, $memory_10);
#line 234
$memory_13 = hash::has_key($memory_6, $memory_10);
#line 234
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 234
$memory_13 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_13));
#line 234
if (c_rt_lib::check_true($memory_13)) {goto label_62;}
#line 234
$memory_14 = c_rt_lib::to_nl(1);
#line 234
$memory_9 = $memory_14;
#line 234
undef($memory_14);
#line 234
goto label_62;
#line 234
label_62:
#line 234
undef($memory_13);
#line 235
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 235
goto label_60;
#line 235
label_58:
#line 235
undef($memory_10);
#line 235
undef($memory_11);
#line 235
undef($memory_12);
#line 236
$memory_10 = $memory_9;
#line 236
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 236
if (c_rt_lib::check_true($memory_10)) {goto label_64;}
#line 237
$memory_11 = ptd_system::rec_to_hash($memory_0, $memory_2, $memory_3, $memory_4);
#line 238
$memory_12 = ptd_system::rec_to_hash($memory_1, $memory_2, $memory_3, $memory_4);
#line 239
$memory_14 = ptd_system_priv::cross_type($memory_11, $memory_12, $memory_2, $memory_3, $memory_4);
#line 239
$memory_13 = tct::hash($memory_14);
#line 239
undef($memory_14);
#line 239
undef($memory_0);
#line 239
undef($memory_1);
#line 239
undef($memory_2);
#line 239
undef($memory_5);
#line 239
undef($memory_6);
#line 239
undef($memory_7);
#line 239
undef($memory_8);
#line 239
undef($memory_9);
#line 239
undef($memory_10);
#line 239
undef($memory_11);
#line 239
undef($memory_12);
#line 239
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_13;
#line 239
undef($memory_13);
#line 239
undef($memory_11);
#line 239
undef($memory_12);
#line 240
goto label_63;
#line 240
label_64:
#line 241
$memory_11 = {};
#line 242
$memory_14 = c_rt_lib::init_iter($memory_6);
#line 242
label_67:
#line 242
$memory_12 = c_rt_lib::is_end_hash($memory_14);
#line 242
if (c_rt_lib::check_true($memory_12)) {goto label_65;}
#line 242
$memory_12 = c_rt_lib::get_key_iter($memory_14);
#line 242
$memory_13 = c_rt_lib::hash_get_value($memory_6, $memory_12);
#line 243
$memory_16 = hash::get_value($memory_8, $memory_12);
#line 243
$memory_15 = ptd_system_priv::cross_type($memory_13, $memory_16, $memory_2, $memory_3, $memory_4);
#line 243
undef($memory_16);
#line 243
hash::set_value($memory_11, $memory_12, $memory_15);
#line 243
undef($memory_15);
#line 245
$memory_14 = c_rt_lib::next_iter($memory_14);
#line 245
goto label_67;
#line 245
label_65:
#line 245
undef($memory_12);
#line 245
undef($memory_13);
#line 245
undef($memory_14);
#line 246
$memory_12 = tct::rec($memory_11);
#line 246
undef($memory_0);
#line 246
undef($memory_1);
#line 246
undef($memory_2);
#line 246
undef($memory_5);
#line 246
undef($memory_6);
#line 246
undef($memory_7);
#line 246
undef($memory_8);
#line 246
undef($memory_9);
#line 246
undef($memory_10);
#line 246
undef($memory_11);
#line 246
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_12;
#line 246
undef($memory_12);
#line 246
undef($memory_11);
#line 247
goto label_63;
#line 247
label_63:
#line 247
undef($memory_10);
#line 247
undef($memory_8);
#line 247
undef($memory_9);
#line 248
goto label_52;
#line 248
label_52:
#line 248
undef($memory_7);
#line 249
$memory_7 = $memory_1;
#line 249
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_hash');
#line 249
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 249
if (c_rt_lib::check_true($memory_7)) {goto label_69;}
#line 250
$memory_8 = ptd_system::rec_to_hash($memory_0, $memory_2, $memory_3, $memory_4);
#line 251
$memory_11 = $memory_1;
#line 251
$memory_11 = c_rt_lib::ov_as($memory_11, 'tct_hash');
#line 251
$memory_10 = ptd_system::cross_type($memory_11, $memory_8, $memory_3, $memory_4);
#line 251
undef($memory_11);
#line 251
$memory_9 = tct::hash($memory_10);
#line 251
undef($memory_10);
#line 251
undef($memory_0);
#line 251
undef($memory_1);
#line 251
undef($memory_2);
#line 251
undef($memory_5);
#line 251
undef($memory_6);
#line 251
undef($memory_7);
#line 251
undef($memory_8);
#line 251
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_9;
#line 251
undef($memory_9);
#line 251
undef($memory_8);
#line 252
goto label_69;
#line 252
label_69:
#line 252
undef($memory_7);
#line 252
undef($memory_6);
#line 253
goto label_10;
#line 253
label_19:
#line 253
$memory_6 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 254
$memory_7 = $memory_1;
#line 254
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_hash');
#line 254
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 254
if (c_rt_lib::check_true($memory_7)) {goto label_71;}
#line 255
$memory_10 = $memory_1;
#line 255
$memory_10 = c_rt_lib::ov_as($memory_10, 'tct_hash');
#line 255
$memory_9 = ptd_system_priv::cross_type($memory_6, $memory_10, $memory_2, $memory_3, $memory_4);
#line 255
undef($memory_10);
#line 255
$memory_8 = tct::hash($memory_9);
#line 255
undef($memory_9);
#line 255
undef($memory_0);
#line 255
undef($memory_1);
#line 255
undef($memory_2);
#line 255
undef($memory_5);
#line 255
undef($memory_6);
#line 255
undef($memory_7);
#line 255
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_8;
#line 255
undef($memory_8);
#line 256
goto label_71;
#line 256
label_71:
#line 256
undef($memory_7);
#line 257
$memory_7 = $memory_1;
#line 257
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_rec');
#line 257
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 257
if (c_rt_lib::check_true($memory_7)) {goto label_73;}
#line 258
$memory_8 = ptd_system::rec_to_hash($memory_1, $memory_2, $memory_3, $memory_4);
#line 259
$memory_10 = ptd_system::cross_type($memory_6, $memory_8, $memory_3, $memory_4);
#line 259
$memory_9 = tct::hash($memory_10);
#line 259
undef($memory_10);
#line 259
undef($memory_0);
#line 259
undef($memory_1);
#line 259
undef($memory_2);
#line 259
undef($memory_5);
#line 259
undef($memory_6);
#line 259
undef($memory_7);
#line 259
undef($memory_8);
#line 259
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_9;
#line 259
undef($memory_9);
#line 259
undef($memory_8);
#line 260
goto label_73;
#line 260
label_73:
#line 260
undef($memory_7);
#line 260
undef($memory_6);
#line 261
goto label_10;
#line 261
label_10:
#line 261
undef($memory_5);
#line 262
$memory_5 = c_rt_lib::ov_mk_none('tct_im');
#line 262
undef($memory_0);
#line 262
undef($memory_1);
#line 262
undef($memory_2);
#line 262
$_[3] = $memory_3;$_[4] = $memory_4;return $memory_5;
#line 262
undef($memory_5);
#line 262
undef($memory_0);
#line 262
undef($memory_1);
#line 262
undef($memory_2);
#line 262
$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[3] = $memory_3;$_[4] = $memory_4;}

sub ptd_system::rec_to_hash($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 267
$memory_4 = tct::empty();
#line 268
$memory_5 = $memory_0;
#line 268
$memory_5 = c_rt_lib::ov_as($memory_5, 'tct_rec');
#line 268
$memory_8 = c_rt_lib::init_iter($memory_5);
#line 268
label_3:
#line 268
$memory_6 = c_rt_lib::is_end_hash($memory_8);
#line 268
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 268
$memory_6 = c_rt_lib::get_key_iter($memory_8);
#line 268
$memory_7 = c_rt_lib::hash_get_value($memory_5, $memory_6);
#line 269
$memory_9 = ptd_system_priv::cross_type($memory_7, $memory_4, $memory_1, $memory_2, $memory_3);
#line 269
$memory_4 = $memory_9;
#line 269
undef($memory_9);
#line 270
$memory_8 = c_rt_lib::next_iter($memory_8);
#line 270
goto label_3;
#line 270
label_1:
#line 270
undef($memory_5);
#line 270
undef($memory_6);
#line 270
undef($memory_7);
#line 270
undef($memory_8);
#line 271
undef($memory_0);
#line 271
undef($memory_1);
#line 271
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_4;
#line 271
undef($memory_4);
#line 271
undef($memory_0);
#line 271
undef($memory_1);
#line 271
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system::cast_type($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 276
$memory_5 = 1;
#line 276
$memory_6 = {};
#line 276
$memory_7 = {};
#line 276
$memory_8 = c_rt_lib::to_nl(1);
#line 276
$memory_9 = c_rt_lib::to_nl(1);
#line 276
$memory_4 = {level => $memory_5,from => $memory_6,to => $memory_7,check => $memory_8,cast => $memory_9,};
#line 276
undef($memory_5);
#line 276
undef($memory_6);
#line 276
undef($memory_7);
#line 276
undef($memory_8);
#line 276
undef($memory_9);
#line 277
$memory_6 = $memory_1->{'type'};
#line 277
$memory_7 = $memory_1->{'src'};
#line 277
$memory_5 = ptd_system_priv::check_assignment_info($memory_0, $memory_6, $memory_4, $memory_7, $memory_2, $memory_3);
#line 277
undef($memory_7);
#line 277
undef($memory_6);
#line 277
undef($memory_0);
#line 277
undef($memory_1);
#line 277
undef($memory_4);
#line 277
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 277
undef($memory_5);
#line 277
undef($memory_4);
#line 277
undef($memory_0);
#line 277
undef($memory_1);
#line 277
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system::check_assignment($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 282
$memory_5 = 1;
#line 282
$memory_6 = {};
#line 282
$memory_7 = {};
#line 282
$memory_8 = c_rt_lib::to_nl(1);
#line 282
$memory_9 = c_rt_lib::to_nl(0);
#line 282
$memory_4 = {level => $memory_5,from => $memory_6,to => $memory_7,check => $memory_8,cast => $memory_9,};
#line 282
undef($memory_5);
#line 282
undef($memory_6);
#line 282
undef($memory_7);
#line 282
undef($memory_8);
#line 282
undef($memory_9);
#line 283
$memory_6 = $memory_1->{'type'};
#line 283
$memory_7 = $memory_1->{'src'};
#line 283
$memory_5 = ptd_system_priv::check_assignment_info($memory_0, $memory_6, $memory_4, $memory_7, $memory_2, $memory_3);
#line 283
undef($memory_7);
#line 283
undef($memory_6);
#line 283
undef($memory_0);
#line 283
undef($memory_1);
#line 283
undef($memory_4);
#line 283
$_[2] = $memory_2;$_[3] = $memory_3;return $memory_5;
#line 283
undef($memory_5);
#line 283
undef($memory_4);
#line 283
undef($memory_0);
#line 283
undef($memory_1);
#line 283
$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system_priv::mk_err($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 287
$memory_3 = [];
#line 287
$memory_2 = {to => $memory_0,from => $memory_1,stack => $memory_3,};
#line 287
undef($memory_3);
#line 287
$memory_2 = c_rt_lib::ov_mk_arg('err', $memory_2);
#line 287
undef($memory_0);
#line 287
undef($memory_1);
#line 287
return $memory_2;
#line 287
undef($memory_2);
#line 287
undef($memory_0);
#line 287
undef($memory_1);
#line 287
return;
}

sub ptd_system_priv::check_assignment_info($$$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;my $memory_20;my $memory_21;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);$memory_5 = $_[5];Scalar::Util::weaken($_[5]) if ref($_[5]);
#line 292
$memory_6 = $memory_1;
#line 292
$memory_6 = c_rt_lib::ov_is($memory_6, 'tct_empty');
#line 292
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 292
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 292
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 292
undef($memory_0);
#line 292
undef($memory_1);
#line 292
undef($memory_2);
#line 292
undef($memory_3);
#line 292
undef($memory_6);
#line 292
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 292
undef($memory_7);
#line 292
goto label_2;
#line 292
label_2:
#line 292
undef($memory_6);
#line 293
$memory_6 = $memory_1;
#line 293
$memory_6 = c_rt_lib::ov_is($memory_6, 'tct_void');
#line 293
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 293
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 293
$memory_7 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 293
undef($memory_0);
#line 293
undef($memory_1);
#line 293
undef($memory_2);
#line 293
undef($memory_3);
#line 293
undef($memory_6);
#line 293
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 293
undef($memory_7);
#line 293
goto label_4;
#line 293
label_4:
#line 293
undef($memory_6);
#line 294
$memory_6 = $memory_0;
#line 294
$memory_6 = c_rt_lib::ov_is($memory_6, 'tct_im');
#line 294
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 294
if (c_rt_lib::check_true($memory_6)) {goto label_6;}
#line 295
$memory_7 = $memory_2->{'check'};
#line 295
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 295
if (c_rt_lib::check_true($memory_8)) {goto label_9;}
#line 295
$memory_7 = ptd_system::is_known($memory_3);
#line 295
label_9:
#line 295
undef($memory_8);
#line 295
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 295
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 295
$memory_8 = c_rt_lib::ov_mk_none('delete');
#line 295
$memory_9 = $memory_2->{'from'};
#line 295
ptd_system_priv::walk_on_type($memory_1, $memory_8, $memory_9, $memory_4, $memory_5);
#line 295
undef($memory_9);
#line 295
undef($memory_8);
#line 295
goto label_8;
#line 295
label_8:
#line 295
undef($memory_7);
#line 297
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 297
undef($memory_0);
#line 297
undef($memory_1);
#line 297
undef($memory_2);
#line 297
undef($memory_3);
#line 297
undef($memory_6);
#line 297
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 297
undef($memory_7);
#line 298
goto label_6;
#line 298
label_6:
#line 298
undef($memory_6);
#line 299
$memory_7 = c_rt_lib::to_nl(0);
#line 299
$memory_8 = ptd_system::is_known($memory_3);
#line 299
$memory_6 = ptd_system_priv::is_cycle_ref($memory_0, $memory_1, $memory_2, $memory_7, $memory_8, $memory_4, $memory_5);
#line 299
undef($memory_8);
#line 299
undef($memory_7);
#line 299
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 299
if (c_rt_lib::check_true($memory_6)) {goto label_11;}
#line 300
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 300
undef($memory_0);
#line 300
undef($memory_1);
#line 300
undef($memory_2);
#line 300
undef($memory_3);
#line 300
undef($memory_6);
#line 300
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 300
undef($memory_7);
#line 301
goto label_11;
#line 301
label_11:
#line 301
undef($memory_6);
#line 302
$memory_6 = $memory_2->{'level'};
#line 302
$memory_7 = 200;
#line 302
$memory_6 = c_rt_lib::to_nl($memory_6 == $memory_7);
#line 302
undef($memory_7);
#line 302
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 302
if (c_rt_lib::check_true($memory_6)) {goto label_13;}
#line 303
$memory_7 = "can't assignment this two type";
#line 303
ptd_system_priv::add_error($memory_5, $memory_7);
#line 303
undef($memory_7);
#line 304
$memory_7 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 304
undef($memory_0);
#line 304
undef($memory_1);
#line 304
undef($memory_2);
#line 304
undef($memory_3);
#line 304
undef($memory_6);
#line 304
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 304
undef($memory_7);
#line 305
goto label_13;
#line 305
label_13:
#line 305
undef($memory_6);
#line 306
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 306
if (c_rt_lib::check_true($memory_6)) {goto label_15;}
#line 308
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 308
if (c_rt_lib::check_true($memory_6)) {goto label_16;}
#line 317
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 317
if (c_rt_lib::check_true($memory_6)) {goto label_17;}
#line 337
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 337
if (c_rt_lib::check_true($memory_6)) {goto label_18;}
#line 364
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 364
if (c_rt_lib::check_true($memory_6)) {goto label_19;}
#line 366
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 366
if (c_rt_lib::check_true($memory_6)) {goto label_20;}
#line 368
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 368
if (c_rt_lib::check_true($memory_6)) {goto label_21;}
#line 371
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 371
if (c_rt_lib::check_true($memory_6)) {goto label_22;}
#line 397
$memory_6 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 397
if (c_rt_lib::check_true($memory_6)) {goto label_23;}
#line 397
$memory_6 = "NOMATCHALERT";
#line 397
$memory_6 = [$memory_6,$memory_0];
#line 397
die(dfile::ssave($memory_6));
#line 306
label_15:
#line 307
$memory_7 = c_rt_lib::ov_mk_none('ok');
#line 307
undef($memory_0);
#line 307
undef($memory_1);
#line 307
undef($memory_2);
#line 307
undef($memory_3);
#line 307
undef($memory_6);
#line 307
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 307
undef($memory_7);
#line 308
goto label_14;
#line 308
label_16:
#line 308
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 309
$memory_8 = $memory_1;
#line 309
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_arr');
#line 309
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 309
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 309
if (c_rt_lib::check_true($memory_8)) {goto label_25;}
#line 309
$memory_9 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 309
undef($memory_0);
#line 309
undef($memory_1);
#line 309
undef($memory_2);
#line 309
undef($memory_3);
#line 309
undef($memory_6);
#line 309
undef($memory_7);
#line 309
undef($memory_8);
#line 309
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 309
undef($memory_9);
#line 309
goto label_25;
#line 309
label_25:
#line 309
undef($memory_8);
#line 310
$memory_9 = $memory_1;
#line 310
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_arr');
#line 310
$memory_8 = ptd_system_priv::check_assignment_info($memory_7, $memory_9, $memory_2, $memory_3, $memory_4, $memory_5);
#line 310
undef($memory_9);
#line 311
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 311
if (c_rt_lib::check_true($memory_9)) {goto label_27;}
#line 313
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 313
if (c_rt_lib::check_true($memory_9)) {goto label_28;}
#line 313
$memory_9 = "NOMATCHALERT";
#line 313
$memory_9 = [$memory_9,$memory_8];
#line 313
die(dfile::ssave($memory_9));
#line 311
label_27:
#line 312
$memory_10 = c_rt_lib::ov_mk_none('ok');
#line 312
undef($memory_0);
#line 312
undef($memory_1);
#line 312
undef($memory_2);
#line 312
undef($memory_3);
#line 312
undef($memory_6);
#line 312
undef($memory_7);
#line 312
undef($memory_8);
#line 312
undef($memory_9);
#line 312
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 312
undef($memory_10);
#line 313
goto label_26;
#line 313
label_28:
#line 313
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 314
$memory_11 = "stack";
#line 314
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 314
$memory_12 = c_rt_lib::ov_mk_none('ptd_arr');
#line 314
array::push($memory_11, $memory_12);
#line 314
undef($memory_12);
#line 314
$memory_12 = "stack";
#line 314
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 314
undef($memory_12);
#line 314
undef($memory_11);
#line 315
$memory_11 = c_rt_lib::ov_mk_arg('err', $memory_10);
#line 315
undef($memory_0);
#line 315
undef($memory_1);
#line 315
undef($memory_2);
#line 315
undef($memory_3);
#line 315
undef($memory_6);
#line 315
undef($memory_7);
#line 315
undef($memory_8);
#line 315
undef($memory_9);
#line 315
undef($memory_10);
#line 315
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_11;
#line 315
undef($memory_11);
#line 315
undef($memory_10);
#line 316
goto label_26;
#line 316
label_26:
#line 316
undef($memory_9);
#line 316
undef($memory_8);
#line 316
undef($memory_7);
#line 317
goto label_14;
#line 317
label_17:
#line 317
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 318
$memory_8 = $memory_1;
#line 318
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_rec');
#line 318
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 318
if (c_rt_lib::check_true($memory_9)) {goto label_31;}
#line 318
$memory_8 = $memory_3;
#line 318
$memory_8 = c_rt_lib::ov_is($memory_8, 'known');
#line 318
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 318
label_31:
#line 318
undef($memory_9);
#line 318
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 318
if (c_rt_lib::check_true($memory_8)) {goto label_30;}
#line 319
$memory_9 = $memory_1;
#line 319
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_rec');
#line 319
$memory_12 = c_rt_lib::init_iter($memory_9);
#line 319
label_34:
#line 319
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 319
if (c_rt_lib::check_true($memory_10)) {goto label_32;}
#line 319
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 319
$memory_11 = c_rt_lib::hash_get_value($memory_9, $memory_10);
#line 320
$memory_13 = ptd_system_priv::check_assignment_info($memory_7, $memory_11, $memory_2, $memory_3, $memory_4, $memory_5);
#line 321
$memory_14 = c_rt_lib::ov_is($memory_13, 'ok');
#line 321
if (c_rt_lib::check_true($memory_14)) {goto label_36;}
#line 322
$memory_14 = c_rt_lib::ov_is($memory_13, 'err');
#line 322
if (c_rt_lib::check_true($memory_14)) {goto label_37;}
#line 322
$memory_14 = "NOMATCHALERT";
#line 322
$memory_14 = [$memory_14,$memory_13];
#line 322
die(dfile::ssave($memory_14));
#line 321
label_36:
#line 322
goto label_35;
#line 322
label_37:
#line 322
$memory_15 = c_rt_lib::ov_as($memory_13, 'err');
#line 323
$memory_16 = "stack";
#line 323
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 323
$memory_17 = c_rt_lib::ov_mk_arg('ptd_rec', $memory_10);
#line 323
array::push($memory_16, $memory_17);
#line 323
undef($memory_17);
#line 323
$memory_17 = "stack";
#line 323
c_rt_lib::set_ref_hash($memory_15, $memory_17, $memory_16);
#line 323
undef($memory_17);
#line 323
undef($memory_16);
#line 324
$memory_16 = c_rt_lib::ov_mk_arg('err', $memory_15);
#line 324
undef($memory_0);
#line 324
undef($memory_1);
#line 324
undef($memory_2);
#line 324
undef($memory_3);
#line 324
undef($memory_6);
#line 324
undef($memory_7);
#line 324
undef($memory_8);
#line 324
undef($memory_9);
#line 324
undef($memory_10);
#line 324
undef($memory_11);
#line 324
undef($memory_12);
#line 324
undef($memory_13);
#line 324
undef($memory_14);
#line 324
undef($memory_15);
#line 324
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 324
undef($memory_16);
#line 324
undef($memory_15);
#line 325
goto label_35;
#line 325
label_35:
#line 325
undef($memory_14);
#line 325
undef($memory_13);
#line 326
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 326
goto label_34;
#line 326
label_32:
#line 326
undef($memory_9);
#line 326
undef($memory_10);
#line 326
undef($memory_11);
#line 326
undef($memory_12);
#line 327
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 327
undef($memory_0);
#line 327
undef($memory_1);
#line 327
undef($memory_2);
#line 327
undef($memory_3);
#line 327
undef($memory_6);
#line 327
undef($memory_7);
#line 327
undef($memory_8);
#line 327
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 327
undef($memory_9);
#line 328
goto label_30;
#line 328
label_30:
#line 328
undef($memory_8);
#line 329
$memory_8 = $memory_1;
#line 329
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_hash');
#line 329
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 329
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 329
if (c_rt_lib::check_true($memory_8)) {goto label_39;}
#line 329
$memory_9 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 329
undef($memory_0);
#line 329
undef($memory_1);
#line 329
undef($memory_2);
#line 329
undef($memory_3);
#line 329
undef($memory_6);
#line 329
undef($memory_7);
#line 329
undef($memory_8);
#line 329
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 329
undef($memory_9);
#line 329
goto label_39;
#line 329
label_39:
#line 329
undef($memory_8);
#line 330
$memory_9 = $memory_1;
#line 330
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_hash');
#line 330
$memory_8 = ptd_system_priv::check_assignment_info($memory_7, $memory_9, $memory_2, $memory_3, $memory_4, $memory_5);
#line 330
undef($memory_9);
#line 331
$memory_9 = c_rt_lib::ov_is($memory_8, 'ok');
#line 331
if (c_rt_lib::check_true($memory_9)) {goto label_41;}
#line 333
$memory_9 = c_rt_lib::ov_is($memory_8, 'err');
#line 333
if (c_rt_lib::check_true($memory_9)) {goto label_42;}
#line 333
$memory_9 = "NOMATCHALERT";
#line 333
$memory_9 = [$memory_9,$memory_8];
#line 333
die(dfile::ssave($memory_9));
#line 331
label_41:
#line 332
$memory_10 = c_rt_lib::ov_mk_none('ok');
#line 332
undef($memory_0);
#line 332
undef($memory_1);
#line 332
undef($memory_2);
#line 332
undef($memory_3);
#line 332
undef($memory_6);
#line 332
undef($memory_7);
#line 332
undef($memory_8);
#line 332
undef($memory_9);
#line 332
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 332
undef($memory_10);
#line 333
goto label_40;
#line 333
label_42:
#line 333
$memory_10 = c_rt_lib::ov_as($memory_8, 'err');
#line 334
$memory_11 = "stack";
#line 334
$memory_11 = c_rt_lib::get_ref_hash($memory_10, $memory_11);
#line 334
$memory_12 = c_rt_lib::ov_mk_none('ptd_hash');
#line 334
array::push($memory_11, $memory_12);
#line 334
undef($memory_12);
#line 334
$memory_12 = "stack";
#line 334
c_rt_lib::set_ref_hash($memory_10, $memory_12, $memory_11);
#line 334
undef($memory_12);
#line 334
undef($memory_11);
#line 335
$memory_11 = c_rt_lib::ov_mk_arg('err', $memory_10);
#line 335
undef($memory_0);
#line 335
undef($memory_1);
#line 335
undef($memory_2);
#line 335
undef($memory_3);
#line 335
undef($memory_6);
#line 335
undef($memory_7);
#line 335
undef($memory_8);
#line 335
undef($memory_9);
#line 335
undef($memory_10);
#line 335
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_11;
#line 335
undef($memory_11);
#line 335
undef($memory_10);
#line 336
goto label_40;
#line 336
label_40:
#line 336
undef($memory_9);
#line 336
undef($memory_8);
#line 336
undef($memory_7);
#line 337
goto label_14;
#line 337
label_18:
#line 337
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 338
$memory_8 = $memory_2->{'cast'};
#line 338
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 338
if (c_rt_lib::check_true($memory_9)) {goto label_45;}
#line 338
$memory_8 = $memory_1;
#line 338
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_hash');
#line 338
label_45:
#line 338
undef($memory_9);
#line 338
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 338
if (c_rt_lib::check_true($memory_8)) {goto label_44;}
#line 339
$memory_9 = $memory_1;
#line 339
$memory_9 = c_rt_lib::ov_as($memory_9, 'tct_hash');
#line 340
$memory_12 = c_rt_lib::init_iter($memory_7);
#line 340
label_48:
#line 340
$memory_10 = c_rt_lib::is_end_hash($memory_12);
#line 340
if (c_rt_lib::check_true($memory_10)) {goto label_46;}
#line 340
$memory_10 = c_rt_lib::get_key_iter($memory_12);
#line 340
$memory_11 = c_rt_lib::hash_get_value($memory_7, $memory_10);
#line 341
$memory_13 = ptd_system_priv::check_assignment_info($memory_11, $memory_9, $memory_2, $memory_3, $memory_4, $memory_5);
#line 342
$memory_14 = c_rt_lib::ov_is($memory_13, 'ok');
#line 342
if (c_rt_lib::check_true($memory_14)) {goto label_50;}
#line 343
$memory_14 = c_rt_lib::ov_is($memory_13, 'err');
#line 343
if (c_rt_lib::check_true($memory_14)) {goto label_51;}
#line 343
$memory_14 = "NOMATCHALERT";
#line 343
$memory_14 = [$memory_14,$memory_13];
#line 343
die(dfile::ssave($memory_14));
#line 342
label_50:
#line 343
goto label_49;
#line 343
label_51:
#line 343
$memory_15 = c_rt_lib::ov_as($memory_13, 'err');
#line 344
$memory_16 = "stack";
#line 344
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 344
$memory_17 = c_rt_lib::ov_mk_arg('ptd_rec', $memory_10);
#line 344
array::push($memory_16, $memory_17);
#line 344
undef($memory_17);
#line 344
$memory_17 = "stack";
#line 344
c_rt_lib::set_ref_hash($memory_15, $memory_17, $memory_16);
#line 344
undef($memory_17);
#line 344
undef($memory_16);
#line 345
$memory_16 = c_rt_lib::ov_mk_arg('err', $memory_15);
#line 345
undef($memory_0);
#line 345
undef($memory_1);
#line 345
undef($memory_2);
#line 345
undef($memory_3);
#line 345
undef($memory_6);
#line 345
undef($memory_7);
#line 345
undef($memory_8);
#line 345
undef($memory_9);
#line 345
undef($memory_10);
#line 345
undef($memory_11);
#line 345
undef($memory_12);
#line 345
undef($memory_13);
#line 345
undef($memory_14);
#line 345
undef($memory_15);
#line 345
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 345
undef($memory_16);
#line 345
undef($memory_15);
#line 346
goto label_49;
#line 346
label_49:
#line 346
undef($memory_14);
#line 346
undef($memory_13);
#line 347
$memory_12 = c_rt_lib::next_iter($memory_12);
#line 347
goto label_48;
#line 347
label_46:
#line 347
undef($memory_10);
#line 347
undef($memory_11);
#line 347
undef($memory_12);
#line 348
$memory_10 = c_rt_lib::ov_mk_none('ok');
#line 348
undef($memory_0);
#line 348
undef($memory_1);
#line 348
undef($memory_2);
#line 348
undef($memory_3);
#line 348
undef($memory_6);
#line 348
undef($memory_7);
#line 348
undef($memory_8);
#line 348
undef($memory_9);
#line 348
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 348
undef($memory_10);
#line 348
undef($memory_9);
#line 349
goto label_44;
#line 349
label_44:
#line 349
undef($memory_8);
#line 350
$memory_8 = $memory_1;
#line 350
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_rec');
#line 350
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 350
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 350
if (c_rt_lib::check_true($memory_8)) {goto label_53;}
#line 350
$memory_9 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 350
undef($memory_0);
#line 350
undef($memory_1);
#line 350
undef($memory_2);
#line 350
undef($memory_3);
#line 350
undef($memory_6);
#line 350
undef($memory_7);
#line 350
undef($memory_8);
#line 350
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 350
undef($memory_9);
#line 350
goto label_53;
#line 350
label_53:
#line 350
undef($memory_8);
#line 351
$memory_8 = $memory_1;
#line 351
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_rec');
#line 352
$memory_9 = hash::size($memory_8);
#line 352
$memory_10 = hash::size($memory_7);
#line 352
$memory_9 = c_rt_lib::to_nl($memory_9 != $memory_10);
#line 352
undef($memory_10);
#line 352
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 352
if (c_rt_lib::check_true($memory_9)) {goto label_55;}
#line 352
$memory_10 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 352
undef($memory_0);
#line 352
undef($memory_1);
#line 352
undef($memory_2);
#line 352
undef($memory_3);
#line 352
undef($memory_6);
#line 352
undef($memory_7);
#line 352
undef($memory_8);
#line 352
undef($memory_9);
#line 352
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_10;
#line 352
undef($memory_10);
#line 352
goto label_55;
#line 352
label_55:
#line 352
undef($memory_9);
#line 353
$memory_11 = c_rt_lib::init_iter($memory_7);
#line 353
label_58:
#line 353
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 353
if (c_rt_lib::check_true($memory_9)) {goto label_56;}
#line 353
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 353
$memory_10 = c_rt_lib::hash_get_value($memory_7, $memory_9);
#line 354
$memory_12 = hash::has_key($memory_8, $memory_9);
#line 354
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 354
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 354
if (c_rt_lib::check_true($memory_12)) {goto label_60;}
#line 354
$memory_13 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 354
undef($memory_0);
#line 354
undef($memory_1);
#line 354
undef($memory_2);
#line 354
undef($memory_3);
#line 354
undef($memory_6);
#line 354
undef($memory_7);
#line 354
undef($memory_8);
#line 354
undef($memory_9);
#line 354
undef($memory_10);
#line 354
undef($memory_11);
#line 354
undef($memory_12);
#line 354
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_13;
#line 354
undef($memory_13);
#line 354
goto label_60;
#line 354
label_60:
#line 354
undef($memory_12);
#line 355
$memory_12 = hash::get_value($memory_8, $memory_9);
#line 356
$memory_13 = ptd_system_priv::check_assignment_info($memory_10, $memory_12, $memory_2, $memory_3, $memory_4, $memory_5);
#line 357
$memory_14 = c_rt_lib::ov_is($memory_13, 'ok');
#line 357
if (c_rt_lib::check_true($memory_14)) {goto label_62;}
#line 358
$memory_14 = c_rt_lib::ov_is($memory_13, 'err');
#line 358
if (c_rt_lib::check_true($memory_14)) {goto label_63;}
#line 358
$memory_14 = "NOMATCHALERT";
#line 358
$memory_14 = [$memory_14,$memory_13];
#line 358
die(dfile::ssave($memory_14));
#line 357
label_62:
#line 358
goto label_61;
#line 358
label_63:
#line 358
$memory_15 = c_rt_lib::ov_as($memory_13, 'err');
#line 359
$memory_16 = "stack";
#line 359
$memory_16 = c_rt_lib::get_ref_hash($memory_15, $memory_16);
#line 359
$memory_17 = c_rt_lib::ov_mk_arg('ptd_rec', $memory_9);
#line 359
array::push($memory_16, $memory_17);
#line 359
undef($memory_17);
#line 359
$memory_17 = "stack";
#line 359
c_rt_lib::set_ref_hash($memory_15, $memory_17, $memory_16);
#line 359
undef($memory_17);
#line 359
undef($memory_16);
#line 360
$memory_16 = c_rt_lib::ov_mk_arg('err', $memory_15);
#line 360
undef($memory_0);
#line 360
undef($memory_1);
#line 360
undef($memory_2);
#line 360
undef($memory_3);
#line 360
undef($memory_6);
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
undef($memory_12);
#line 360
undef($memory_13);
#line 360
undef($memory_14);
#line 360
undef($memory_15);
#line 360
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 360
undef($memory_16);
#line 360
undef($memory_15);
#line 361
goto label_61;
#line 361
label_61:
#line 361
undef($memory_14);
#line 361
undef($memory_12);
#line 361
undef($memory_13);
#line 362
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 362
goto label_58;
#line 362
label_56:
#line 362
undef($memory_9);
#line 362
undef($memory_10);
#line 362
undef($memory_11);
#line 363
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 363
undef($memory_0);
#line 363
undef($memory_1);
#line 363
undef($memory_2);
#line 363
undef($memory_3);
#line 363
undef($memory_6);
#line 363
undef($memory_7);
#line 363
undef($memory_8);
#line 363
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 363
undef($memory_9);
#line 363
undef($memory_8);
#line 363
undef($memory_7);
#line 364
goto label_14;
#line 364
label_19:
#line 364
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 365
$memory_8 = [];
#line 365
die(dfile::ssave($memory_8));
#line 365
undef($memory_8);
#line 365
undef($memory_7);
#line 366
goto label_14;
#line 366
label_20:
#line 367
$memory_7 = [];
#line 367
die(dfile::ssave($memory_7));
#line 367
undef($memory_7);
#line 368
goto label_14;
#line 368
label_21:
#line 369
$memory_7 = $memory_1;
#line 369
$memory_7 = c_rt_lib::ov_is($memory_7, 'tct_sim');
#line 369
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 369
if (c_rt_lib::check_true($memory_7)) {goto label_65;}
#line 369
$memory_8 = c_rt_lib::ov_mk_none('ok');
#line 369
undef($memory_0);
#line 369
undef($memory_1);
#line 369
undef($memory_2);
#line 369
undef($memory_3);
#line 369
undef($memory_6);
#line 369
undef($memory_7);
#line 369
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_8;
#line 369
undef($memory_8);
#line 369
goto label_65;
#line 369
label_65:
#line 369
undef($memory_7);
#line 370
$memory_7 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 370
undef($memory_0);
#line 370
undef($memory_1);
#line 370
undef($memory_2);
#line 370
undef($memory_3);
#line 370
undef($memory_6);
#line 370
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_7;
#line 370
undef($memory_7);
#line 371
goto label_14;
#line 371
label_22:
#line 371
$memory_7 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 372
$memory_8 = $memory_1;
#line 372
$memory_8 = c_rt_lib::ov_is($memory_8, 'tct_var');
#line 372
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 372
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 372
if (c_rt_lib::check_true($memory_8)) {goto label_67;}
#line 372
$memory_9 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 372
undef($memory_0);
#line 372
undef($memory_1);
#line 372
undef($memory_2);
#line 372
undef($memory_3);
#line 372
undef($memory_6);
#line 372
undef($memory_7);
#line 372
undef($memory_8);
#line 372
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 372
undef($memory_9);
#line 372
goto label_67;
#line 372
label_67:
#line 372
undef($memory_8);
#line 373
$memory_8 = $memory_1;
#line 373
$memory_8 = c_rt_lib::ov_as($memory_8, 'tct_var');
#line 374
$memory_11 = c_rt_lib::init_iter($memory_8);
#line 374
label_70:
#line 374
$memory_9 = c_rt_lib::is_end_hash($memory_11);
#line 374
if (c_rt_lib::check_true($memory_9)) {goto label_68;}
#line 374
$memory_9 = c_rt_lib::get_key_iter($memory_11);
#line 374
$memory_10 = c_rt_lib::hash_get_value($memory_8, $memory_9);
#line 375
$memory_12 = hash::has_key($memory_7, $memory_9);
#line 375
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 375
$memory_12 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_12));
#line 375
if (c_rt_lib::check_true($memory_12)) {goto label_72;}
#line 375
$memory_13 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 375
undef($memory_0);
#line 375
undef($memory_1);
#line 375
undef($memory_2);
#line 375
undef($memory_3);
#line 375
undef($memory_6);
#line 375
undef($memory_7);
#line 375
undef($memory_8);
#line 375
undef($memory_9);
#line 375
undef($memory_10);
#line 375
undef($memory_11);
#line 375
undef($memory_12);
#line 375
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_13;
#line 375
undef($memory_13);
#line 375
goto label_72;
#line 375
label_72:
#line 375
undef($memory_12);
#line 376
$memory_12 = hash::get_value($memory_7, $memory_9);
#line 377
$memory_13 = c_rt_lib::ov_is($memory_10, 'no_param');
#line 377
if (c_rt_lib::check_true($memory_13)) {goto label_74;}
#line 383
$memory_13 = c_rt_lib::ov_is($memory_10, 'with_param');
#line 383
if (c_rt_lib::check_true($memory_13)) {goto label_75;}
#line 383
$memory_13 = "NOMATCHALERT";
#line 383
$memory_13 = [$memory_13,$memory_10];
#line 383
die(dfile::ssave($memory_13));
#line 377
label_74:
#line 378
$memory_14 = c_rt_lib::ov_is($memory_12, 'no_param');
#line 378
if (c_rt_lib::check_true($memory_14)) {goto label_77;}
#line 380
$memory_14 = c_rt_lib::ov_is($memory_12, 'with_param');
#line 380
if (c_rt_lib::check_true($memory_14)) {goto label_78;}
#line 380
$memory_14 = "NOMATCHALERT";
#line 380
$memory_14 = [$memory_14,$memory_12];
#line 380
die(dfile::ssave($memory_14));
#line 378
label_77:
#line 379
undef($memory_12);
#line 379
undef($memory_13);
#line 379
undef($memory_14);
#line 379
goto label_69;
#line 380
goto label_76;
#line 380
label_78:
#line 380
$memory_15 = c_rt_lib::ov_as($memory_12, 'with_param');
#line 381
$memory_16 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 381
undef($memory_0);
#line 381
undef($memory_1);
#line 381
undef($memory_2);
#line 381
undef($memory_3);
#line 381
undef($memory_6);
#line 381
undef($memory_7);
#line 381
undef($memory_8);
#line 381
undef($memory_9);
#line 381
undef($memory_10);
#line 381
undef($memory_11);
#line 381
undef($memory_12);
#line 381
undef($memory_13);
#line 381
undef($memory_14);
#line 381
undef($memory_15);
#line 381
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 381
undef($memory_16);
#line 381
undef($memory_15);
#line 382
goto label_76;
#line 382
label_76:
#line 382
undef($memory_14);
#line 383
goto label_73;
#line 383
label_75:
#line 383
$memory_14 = c_rt_lib::ov_as($memory_10, 'with_param');
#line 384
$memory_15 = c_rt_lib::ov_is($memory_12, 'no_param');
#line 384
if (c_rt_lib::check_true($memory_15)) {goto label_80;}
#line 386
$memory_15 = c_rt_lib::ov_is($memory_12, 'with_param');
#line 386
if (c_rt_lib::check_true($memory_15)) {goto label_81;}
#line 386
$memory_15 = "NOMATCHALERT";
#line 386
$memory_15 = [$memory_15,$memory_12];
#line 386
die(dfile::ssave($memory_15));
#line 384
label_80:
#line 385
$memory_16 = ptd_system_priv::mk_err($memory_0, $memory_1);
#line 385
undef($memory_0);
#line 385
undef($memory_1);
#line 385
undef($memory_2);
#line 385
undef($memory_3);
#line 385
undef($memory_6);
#line 385
undef($memory_7);
#line 385
undef($memory_8);
#line 385
undef($memory_9);
#line 385
undef($memory_10);
#line 385
undef($memory_11);
#line 385
undef($memory_12);
#line 385
undef($memory_13);
#line 385
undef($memory_14);
#line 385
undef($memory_15);
#line 385
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_16;
#line 385
undef($memory_16);
#line 386
goto label_79;
#line 386
label_81:
#line 386
$memory_16 = c_rt_lib::ov_as($memory_12, 'with_param');
#line 387
$memory_17 = ptd_system_priv::check_assignment_info($memory_16, $memory_14, $memory_2, $memory_3, $memory_4, $memory_5);
#line 388
$memory_18 = c_rt_lib::ov_is($memory_17, 'ok');
#line 388
if (c_rt_lib::check_true($memory_18)) {goto label_83;}
#line 389
$memory_18 = c_rt_lib::ov_is($memory_17, 'err');
#line 389
if (c_rt_lib::check_true($memory_18)) {goto label_84;}
#line 389
$memory_18 = "NOMATCHALERT";
#line 389
$memory_18 = [$memory_18,$memory_17];
#line 389
die(dfile::ssave($memory_18));
#line 388
label_83:
#line 389
goto label_82;
#line 389
label_84:
#line 389
$memory_19 = c_rt_lib::ov_as($memory_17, 'err');
#line 390
$memory_20 = "stack";
#line 390
$memory_20 = c_rt_lib::get_ref_hash($memory_19, $memory_20);
#line 390
$memory_21 = c_rt_lib::ov_mk_arg('ptd_var', $memory_9);
#line 390
array::push($memory_20, $memory_21);
#line 390
undef($memory_21);
#line 390
$memory_21 = "stack";
#line 390
c_rt_lib::set_ref_hash($memory_19, $memory_21, $memory_20);
#line 390
undef($memory_21);
#line 390
undef($memory_20);
#line 391
$memory_20 = c_rt_lib::ov_mk_arg('err', $memory_19);
#line 391
undef($memory_0);
#line 391
undef($memory_1);
#line 391
undef($memory_2);
#line 391
undef($memory_3);
#line 391
undef($memory_6);
#line 391
undef($memory_7);
#line 391
undef($memory_8);
#line 391
undef($memory_9);
#line 391
undef($memory_10);
#line 391
undef($memory_11);
#line 391
undef($memory_12);
#line 391
undef($memory_13);
#line 391
undef($memory_14);
#line 391
undef($memory_15);
#line 391
undef($memory_16);
#line 391
undef($memory_17);
#line 391
undef($memory_18);
#line 391
undef($memory_19);
#line 391
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_20;
#line 391
undef($memory_20);
#line 391
undef($memory_19);
#line 392
goto label_82;
#line 392
label_82:
#line 392
undef($memory_18);
#line 392
undef($memory_17);
#line 392
undef($memory_16);
#line 393
goto label_79;
#line 393
label_79:
#line 393
undef($memory_15);
#line 393
undef($memory_14);
#line 394
goto label_73;
#line 394
label_73:
#line 394
undef($memory_13);
#line 394
undef($memory_12);
#line 394
label_69:
#line 395
$memory_11 = c_rt_lib::next_iter($memory_11);
#line 395
goto label_70;
#line 395
label_68:
#line 395
undef($memory_9);
#line 395
undef($memory_10);
#line 395
undef($memory_11);
#line 396
$memory_9 = c_rt_lib::ov_mk_none('ok');
#line 396
undef($memory_0);
#line 396
undef($memory_1);
#line 396
undef($memory_2);
#line 396
undef($memory_3);
#line 396
undef($memory_6);
#line 396
undef($memory_7);
#line 396
undef($memory_8);
#line 396
$_[4] = $memory_4;$_[5] = $memory_5;return $memory_9;
#line 396
undef($memory_9);
#line 396
undef($memory_8);
#line 396
undef($memory_7);
#line 397
goto label_14;
#line 397
label_23:
#line 398
$memory_7 = [];
#line 398
die(dfile::ssave($memory_7));
#line 398
undef($memory_7);
#line 399
goto label_14;
#line 399
label_14:
#line 399
undef($memory_6);
#line 399
undef($memory_0);
#line 399
undef($memory_1);
#line 399
undef($memory_2);
#line 399
undef($memory_3);
#line 399
$_[4] = $memory_4;$_[5] = $memory_5;return;
$_[4] = $memory_4;$_[5] = $memory_5;}

sub ptd_system_priv::add_delete($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 404
$memory_3 = "env";
#line 404
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 404
$memory_4 = "deref";
#line 404
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 404
$memory_5 = "delete";
#line 404
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 404
$memory_7 = $memory_2->{'current_line'};
#line 404
$memory_8 = $memory_1->{'env'};
#line 404
$memory_8 = $memory_8->{'current_module'};
#line 404
$memory_6 = {line => $memory_7,module => $memory_8,type_name => $memory_0,};
#line 404
undef($memory_7);
#line 404
undef($memory_8);
#line 404
array::push($memory_5, $memory_6);
#line 404
undef($memory_6);
#line 404
$memory_6 = "delete";
#line 404
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 404
$memory_6 = "deref";
#line 404
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 404
$memory_6 = "env";
#line 404
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_3);
#line 404
undef($memory_6);
#line 404
undef($memory_3);
#line 404
undef($memory_4);
#line 404
undef($memory_5);
#line 404
undef($memory_0);
#line 404
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system_priv::add_create($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 413
$memory_3 = "env";
#line 413
$memory_3 = c_rt_lib::get_ref_hash($memory_1, $memory_3);
#line 413
$memory_4 = "deref";
#line 413
$memory_4 = c_rt_lib::get_ref_hash($memory_3, $memory_4);
#line 413
$memory_5 = "create";
#line 413
$memory_5 = c_rt_lib::get_ref_hash($memory_4, $memory_5);
#line 413
$memory_7 = $memory_2->{'current_line'};
#line 413
$memory_8 = $memory_1->{'env'};
#line 413
$memory_8 = $memory_8->{'current_module'};
#line 413
$memory_6 = {line => $memory_7,module => $memory_8,type_name => $memory_0,};
#line 413
undef($memory_7);
#line 413
undef($memory_8);
#line 413
array::push($memory_5, $memory_6);
#line 413
undef($memory_6);
#line 413
$memory_6 = "create";
#line 413
c_rt_lib::set_ref_hash($memory_4, $memory_6, $memory_5);
#line 413
$memory_6 = "deref";
#line 413
c_rt_lib::set_ref_hash($memory_3, $memory_6, $memory_4);
#line 413
$memory_6 = "env";
#line 413
c_rt_lib::set_ref_hash($memory_1, $memory_6, $memory_3);
#line 413
undef($memory_6);
#line 413
undef($memory_3);
#line 413
undef($memory_4);
#line 413
undef($memory_5);
#line 413
undef($memory_0);
#line 413
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::can_delete($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 422
label_2:
#line 422
$memory_3 = $memory_0->{'type'};
#line 422
$memory_3 = c_rt_lib::ov_is($memory_3, 'tct_ref');
#line 422
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 422
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 423
$memory_4 = $memory_0->{'type'};
#line 423
$memory_4 = c_rt_lib::ov_as($memory_4, 'tct_ref');
#line 424
$memory_6 = $memory_0->{'src'};
#line 424
$memory_5 = ptd_system::is_known($memory_6);
#line 424
undef($memory_6);
#line 424
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 424
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 424
ptd_system_priv::add_delete($memory_4, $memory_1, $memory_2);
#line 424
goto label_4;
#line 424
label_4:
#line 424
undef($memory_5);
#line 425
$memory_5 = ptd_system::get_ref_type($memory_4, $memory_1, $memory_2);
#line 425
$memory_6 = $memory_5;
#line 425
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_6;
#line 425
undef($memory_5);
#line 425
undef($memory_6);
#line 425
undef($memory_4);
#line 426
goto label_2;
#line 426
label_1:
#line 426
undef($memory_3);
#line 427
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_0;
#line 427
undef($memory_0);
#line 427
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::can_create($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 432
label_2:
#line 432
$memory_3 = $memory_0->{'type'};
#line 432
$memory_3 = c_rt_lib::ov_is($memory_3, 'tct_ref');
#line 432
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 432
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 433
$memory_4 = $memory_0->{'type'};
#line 433
$memory_4 = c_rt_lib::ov_as($memory_4, 'tct_ref');
#line 434
$memory_6 = $memory_0->{'src'};
#line 434
$memory_5 = ptd_system::is_known($memory_6);
#line 434
undef($memory_6);
#line 434
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 434
if (c_rt_lib::check_true($memory_5)) {goto label_4;}
#line 434
ptd_system_priv::add_create($memory_4, $memory_1, $memory_2);
#line 434
goto label_4;
#line 434
label_4:
#line 434
undef($memory_5);
#line 435
$memory_5 = ptd_system::get_ref_type($memory_4, $memory_1, $memory_2);
#line 435
$memory_6 = $memory_5;
#line 435
 if (c_rt_lib::get_hashcount($memory_0) > 1) {$memory_0 = {%{$memory_0}};}$memory_0->{'type'} = $memory_6;
#line 435
undef($memory_5);
#line 435
undef($memory_6);
#line 435
undef($memory_4);
#line 436
goto label_2;
#line 436
label_1:
#line 436
undef($memory_3);
#line 437
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_0;
#line 437
undef($memory_0);
#line 437
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system_priv::walk_on_type($$$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;my $memory_11;my $memory_12;my $memory_13;my $memory_14;my $memory_15;my $memory_16;my $memory_17;my $memory_18;my $memory_19;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);$memory_4 = $_[4];Scalar::Util::weaken($_[4]) if ref($_[4]);
#line 442
$memory_5 = {};
#line 443
ptd_system_priv::get_ref_in_type($memory_0, $memory_5);
#line 444
$memory_6 = $memory_5;
#line 445
$memory_9 = c_rt_lib::init_iter($memory_6);
#line 445
label_3:
#line 445
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 445
if (c_rt_lib::check_true($memory_7)) {goto label_1;}
#line 445
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 445
$memory_8 = c_rt_lib::hash_get_value($memory_6, $memory_7);
#line 446
$memory_10 = ptd_system_priv::get_function_def($memory_7, $memory_3, $memory_4);
#line 447
$memory_11 = array::len($memory_10);
#line 447
$memory_12 = 0;
#line 447
$memory_11 = c_rt_lib::to_nl($memory_11 == $memory_12);
#line 447
undef($memory_12);
#line 447
$memory_11 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_11));
#line 447
if (c_rt_lib::check_true($memory_11)) {goto label_5;}
#line 447
undef($memory_0);
#line 447
undef($memory_1);
#line 447
undef($memory_2);
#line 447
undef($memory_5);
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
$_[3] = $memory_3;$_[4] = $memory_4;return;
#line 447
goto label_5;
#line 447
label_5:
#line 447
undef($memory_11);
#line 448
$memory_12 = 0;
#line 448
$memory_11 = $memory_10->[$memory_12];
#line 448
undef($memory_12);
#line 448
$memory_10 = $memory_11;
#line 448
undef($memory_11);
#line 449
$memory_11 = $memory_10->{'ref_types'};
#line 449
$memory_12 = c_rt_lib::ov_is($memory_11, 'yes');
#line 449
if (c_rt_lib::check_true($memory_12)) {goto label_7;}
#line 453
$memory_12 = c_rt_lib::ov_is($memory_11, 'no');
#line 453
if (c_rt_lib::check_true($memory_12)) {goto label_8;}
#line 453
$memory_12 = "NOMATCHALERT";
#line 453
$memory_12 = [$memory_12,$memory_11];
#line 453
die(dfile::ssave($memory_12));
#line 449
label_7:
#line 449
$memory_13 = c_rt_lib::ov_as($memory_11, 'yes');
#line 450
$memory_15 = 0;
#line 450
$memory_16 = 1;
#line 450
$memory_17 = c_rt_lib::array_len($memory_13);
#line 450
label_11:
#line 450
$memory_18 = c_rt_lib::to_nl($memory_15 >= $memory_17);
#line 450
if (c_rt_lib::check_true($memory_18)) {goto label_9;}
#line 450
$memory_14 = $memory_13->[$memory_15];
#line 451
$memory_19 = "";
#line 451
hash::set_value($memory_5, $memory_14, $memory_19);
#line 451
undef($memory_19);
#line 452
$memory_15 = $memory_15 + $memory_16;
#line 452
goto label_11;
#line 452
label_9:
#line 452
undef($memory_14);
#line 452
undef($memory_15);
#line 452
undef($memory_16);
#line 452
undef($memory_17);
#line 452
undef($memory_18);
#line 452
undef($memory_13);
#line 453
goto label_6;
#line 453
label_8:
#line 454
$memory_13 = ptd_system::get_ref_type($memory_7, $memory_3, $memory_4);
#line 454
$memory_0 = $memory_13;
#line 454
undef($memory_13);
#line 455
$memory_13 = {};
#line 456
ptd_system_priv::get_all_ref_in_type($memory_0, $memory_13, $memory_3, $memory_4);
#line 457
$memory_14 = [];
#line 458
$memory_17 = c_rt_lib::init_iter($memory_13);
#line 458
label_14:
#line 458
$memory_15 = c_rt_lib::is_end_hash($memory_17);
#line 458
if (c_rt_lib::check_true($memory_15)) {goto label_12;}
#line 458
$memory_15 = c_rt_lib::get_key_iter($memory_17);
#line 458
$memory_16 = c_rt_lib::hash_get_value($memory_13, $memory_15);
#line 459
$memory_18 = "";
#line 459
hash::set_value($memory_5, $memory_15, $memory_18);
#line 459
undef($memory_18);
#line 460
array::push($memory_14, $memory_15);
#line 461
$memory_17 = c_rt_lib::next_iter($memory_17);
#line 461
goto label_14;
#line 461
label_12:
#line 461
undef($memory_15);
#line 461
undef($memory_16);
#line 461
undef($memory_17);
#line 462
$memory_15 = ptd_system_priv::get_function_def($memory_7, $memory_3, $memory_4);
#line 462
$memory_16 = 0;
#line 462
$memory_15 = $memory_15->[$memory_16];
#line 462
undef($memory_16);
#line 462
$memory_10 = $memory_15;
#line 462
undef($memory_15);
#line 463
$memory_15 = c_rt_lib::ov_mk_arg('yes', $memory_14);
#line 463
$memory_16 = $memory_15;
#line 463
 if (c_rt_lib::get_hashcount($memory_10) > 1) {$memory_10 = {%{$memory_10}};}$memory_10->{'ref_types'} = $memory_16;
#line 463
undef($memory_15);
#line 463
undef($memory_16);
#line 464
$memory_16 = $memory_3->{'funs'};
#line 464
$memory_17 = $memory_10->{'module'};
#line 464
$memory_15 = hash::get_value($memory_16, $memory_17);
#line 464
undef($memory_17);
#line 464
undef($memory_16);
#line 465
$memory_16 = $memory_10->{'name'};
#line 465
hash::set_value($memory_15, $memory_16, $memory_10);
#line 465
undef($memory_16);
#line 466
$memory_16 = "funs";
#line 466
$memory_16 = c_rt_lib::get_ref_hash($memory_3, $memory_16);
#line 466
$memory_17 = $memory_10->{'module'};
#line 466
hash::set_value($memory_16, $memory_17, $memory_15);
#line 466
undef($memory_17);
#line 466
$memory_17 = "funs";
#line 466
c_rt_lib::set_ref_hash($memory_3, $memory_17, $memory_16);
#line 466
undef($memory_17);
#line 466
undef($memory_16);
#line 466
undef($memory_13);
#line 466
undef($memory_14);
#line 466
undef($memory_15);
#line 467
goto label_6;
#line 467
label_6:
#line 467
undef($memory_11);
#line 467
undef($memory_12);
#line 467
undef($memory_10);
#line 468
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 468
goto label_3;
#line 468
label_1:
#line 468
undef($memory_7);
#line 468
undef($memory_8);
#line 468
undef($memory_9);
#line 469
$memory_9 = c_rt_lib::init_iter($memory_5);
#line 469
label_17:
#line 469
$memory_7 = c_rt_lib::is_end_hash($memory_9);
#line 469
if (c_rt_lib::check_true($memory_7)) {goto label_15;}
#line 469
$memory_7 = c_rt_lib::get_key_iter($memory_9);
#line 469
$memory_8 = c_rt_lib::hash_get_value($memory_5, $memory_7);
#line 470
$memory_10 = hash::has_key($memory_2, $memory_7);
#line 470
$memory_10 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_10));
#line 470
if (c_rt_lib::check_true($memory_10)) {goto label_19;}
#line 470
undef($memory_10);
#line 470
goto label_16;
#line 470
goto label_19;
#line 470
label_19:
#line 470
undef($memory_10);
#line 471
$memory_10 = c_rt_lib::ov_is($memory_1, 'create');
#line 471
if (c_rt_lib::check_true($memory_10)) {goto label_21;}
#line 473
$memory_10 = c_rt_lib::ov_is($memory_1, 'delete');
#line 473
if (c_rt_lib::check_true($memory_10)) {goto label_22;}
#line 473
$memory_10 = "NOMATCHALERT";
#line 473
$memory_10 = [$memory_10,$memory_1];
#line 473
die(dfile::ssave($memory_10));
#line 471
label_21:
#line 472
ptd_system_priv::add_create($memory_7, $memory_3, $memory_4);
#line 473
goto label_20;
#line 473
label_22:
#line 474
ptd_system_priv::add_delete($memory_7, $memory_3, $memory_4);
#line 475
goto label_20;
#line 475
label_20:
#line 475
undef($memory_10);
#line 475
label_16:
#line 476
$memory_9 = c_rt_lib::next_iter($memory_9);
#line 476
goto label_17;
#line 476
label_15:
#line 476
undef($memory_7);
#line 476
undef($memory_8);
#line 476
undef($memory_9);
#line 476
undef($memory_5);
#line 476
undef($memory_6);
#line 476
undef($memory_0);
#line 476
undef($memory_1);
#line 476
undef($memory_2);
#line 476
$_[3] = $memory_3;$_[4] = $memory_4;return;
$_[3] = $memory_3;$_[4] = $memory_4;}

sub ptd_system_priv::get_all_ref_in_type($$$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);$memory_3 = $_[3];Scalar::Util::weaken($_[3]) if ref($_[3]);
#line 481
$memory_4 = {};
#line 482
ptd_system_priv::get_ref_in_type($memory_0, $memory_4);
#line 483
$memory_7 = c_rt_lib::init_iter($memory_4);
#line 483
label_3:
#line 483
$memory_5 = c_rt_lib::is_end_hash($memory_7);
#line 483
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 483
$memory_5 = c_rt_lib::get_key_iter($memory_7);
#line 483
$memory_6 = c_rt_lib::hash_get_value($memory_4, $memory_5);
#line 484
$memory_8 = hash::has_key($memory_1, $memory_5);
#line 484
$memory_8 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_8));
#line 484
if (c_rt_lib::check_true($memory_8)) {goto label_5;}
#line 484
undef($memory_8);
#line 484
goto label_2;
#line 484
goto label_5;
#line 484
label_5:
#line 484
undef($memory_8);
#line 485
$memory_8 = "";
#line 485
hash::set_value($memory_1, $memory_5, $memory_8);
#line 485
undef($memory_8);
#line 486
$memory_8 = ptd_system::get_ref_type($memory_5, $memory_2, $memory_3);
#line 486
$memory_0 = $memory_8;
#line 486
undef($memory_8);
#line 487
ptd_system_priv::get_all_ref_in_type($memory_0, $memory_1, $memory_2, $memory_3);
#line 487
label_2:
#line 488
$memory_7 = c_rt_lib::next_iter($memory_7);
#line 488
goto label_3;
#line 488
label_1:
#line 488
undef($memory_5);
#line 488
undef($memory_6);
#line 488
undef($memory_7);
#line 488
undef($memory_4);
#line 488
undef($memory_0);
#line 488
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;return;
$_[1] = $memory_1;$_[2] = $memory_2;$_[3] = $memory_3;}

sub ptd_system_priv::get_ref_in_type($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 492
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_im');
#line 492
if (c_rt_lib::check_true($memory_2)) {goto label_2;}
#line 493
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_arr');
#line 493
if (c_rt_lib::check_true($memory_2)) {goto label_3;}
#line 495
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_hash');
#line 495
if (c_rt_lib::check_true($memory_2)) {goto label_4;}
#line 497
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_rec');
#line 497
if (c_rt_lib::check_true($memory_2)) {goto label_5;}
#line 501
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_ref');
#line 501
if (c_rt_lib::check_true($memory_2)) {goto label_6;}
#line 503
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_void');
#line 503
if (c_rt_lib::check_true($memory_2)) {goto label_7;}
#line 504
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_sim');
#line 504
if (c_rt_lib::check_true($memory_2)) {goto label_8;}
#line 505
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_var');
#line 505
if (c_rt_lib::check_true($memory_2)) {goto label_9;}
#line 512
$memory_2 = c_rt_lib::ov_is($memory_0, 'tct_empty');
#line 512
if (c_rt_lib::check_true($memory_2)) {goto label_10;}
#line 512
$memory_2 = "NOMATCHALERT";
#line 512
$memory_2 = [$memory_2,$memory_0];
#line 512
die(dfile::ssave($memory_2));
#line 492
label_2:
#line 493
goto label_1;
#line 493
label_3:
#line 493
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_arr');
#line 494
ptd_system_priv::get_ref_in_type($memory_3, $memory_1);
#line 494
undef($memory_3);
#line 495
goto label_1;
#line 495
label_4:
#line 495
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_hash');
#line 496
ptd_system_priv::get_ref_in_type($memory_3, $memory_1);
#line 496
undef($memory_3);
#line 497
goto label_1;
#line 497
label_5:
#line 497
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_rec');
#line 498
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 498
label_13:
#line 498
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 498
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 498
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 498
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 499
ptd_system_priv::get_ref_in_type($memory_5, $memory_1);
#line 500
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 500
goto label_13;
#line 500
label_11:
#line 500
undef($memory_4);
#line 500
undef($memory_5);
#line 500
undef($memory_6);
#line 500
undef($memory_3);
#line 501
goto label_1;
#line 501
label_6:
#line 501
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_ref');
#line 502
$memory_4 = "";
#line 502
hash::set_value($memory_1, $memory_3, $memory_4);
#line 502
undef($memory_4);
#line 502
undef($memory_3);
#line 503
goto label_1;
#line 503
label_7:
#line 504
goto label_1;
#line 504
label_8:
#line 505
goto label_1;
#line 505
label_9:
#line 505
$memory_3 = c_rt_lib::ov_as($memory_0, 'tct_var');
#line 506
$memory_6 = c_rt_lib::init_iter($memory_3);
#line 506
label_16:
#line 506
$memory_4 = c_rt_lib::is_end_hash($memory_6);
#line 506
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 506
$memory_4 = c_rt_lib::get_key_iter($memory_6);
#line 506
$memory_5 = c_rt_lib::hash_get_value($memory_3, $memory_4);
#line 507
$memory_7 = c_rt_lib::ov_is($memory_5, 'no_param');
#line 507
if (c_rt_lib::check_true($memory_7)) {goto label_18;}
#line 508
$memory_7 = c_rt_lib::ov_is($memory_5, 'with_param');
#line 508
if (c_rt_lib::check_true($memory_7)) {goto label_19;}
#line 508
$memory_7 = "NOMATCHALERT";
#line 508
$memory_7 = [$memory_7,$memory_5];
#line 508
die(dfile::ssave($memory_7));
#line 507
label_18:
#line 508
goto label_17;
#line 508
label_19:
#line 508
$memory_8 = c_rt_lib::ov_as($memory_5, 'with_param');
#line 509
ptd_system_priv::get_ref_in_type($memory_8, $memory_1);
#line 509
undef($memory_8);
#line 510
goto label_17;
#line 510
label_17:
#line 510
undef($memory_7);
#line 511
$memory_6 = c_rt_lib::next_iter($memory_6);
#line 511
goto label_16;
#line 511
label_14:
#line 511
undef($memory_4);
#line 511
undef($memory_5);
#line 511
undef($memory_6);
#line 511
undef($memory_3);
#line 512
goto label_1;
#line 512
label_10:
#line 513
goto label_1;
#line 513
label_1:
#line 513
undef($memory_2);
#line 513
undef($memory_0);
#line 513
$_[1] = $memory_1;return;
$_[1] = $memory_1;}

sub ptd_system_priv::get_function_def($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;my $memory_10;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 520
$memory_6 = "::";
#line 520
$memory_5 = string::index2($memory_0, $memory_6);
#line 520
undef($memory_6);
#line 521
$memory_6 = 0;
#line 521
$memory_6 = c_rt_lib::to_nl($memory_5 >= $memory_6);
#line 521
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 521
if (c_rt_lib::check_true($memory_6)) {goto label_2;}
#line 522
$memory_8 = 0;
#line 522
$memory_7 = string::substr($memory_0, $memory_8, $memory_5);
#line 522
undef($memory_8);
#line 522
$memory_3 = $memory_7;
#line 522
undef($memory_7);
#line 523
$memory_8 = 2;
#line 523
$memory_8 = $memory_5 + $memory_8;
#line 523
$memory_9 = string::length($memory_0);
#line 523
$memory_9 = $memory_9 - $memory_5;
#line 523
$memory_10 = 2;
#line 523
$memory_9 = $memory_9 - $memory_10;
#line 523
undef($memory_10);
#line 523
$memory_7 = string::substr($memory_0, $memory_8, $memory_9);
#line 523
undef($memory_9);
#line 523
undef($memory_8);
#line 523
$memory_4 = $memory_7;
#line 523
undef($memory_7);
#line 524
goto label_1;
#line 524
label_2:
#line 525
$memory_7 = "wrong type name `";
#line 525
$memory_7 = $memory_7 . $memory_0;
#line 525
$memory_8 = "' ";
#line 525
$memory_7 = $memory_7 . $memory_8;
#line 525
undef($memory_8);
#line 525
ptd_system_priv::add_error($memory_2, $memory_7);
#line 525
undef($memory_7);
#line 526
$memory_7 = [];
#line 526
undef($memory_0);
#line 526
undef($memory_3);
#line 526
undef($memory_4);
#line 526
undef($memory_5);
#line 526
undef($memory_6);
#line 526
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 526
undef($memory_7);
#line 527
goto label_1;
#line 527
label_1:
#line 527
undef($memory_6);
#line 528
$memory_7 = $memory_1->{'funs'};
#line 528
$memory_6 = hash::has_key($memory_7, $memory_3);
#line 528
undef($memory_7);
#line 528
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 528
$memory_6 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_6));
#line 528
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 529
$memory_7 = [];
#line 529
undef($memory_0);
#line 529
undef($memory_3);
#line 529
undef($memory_4);
#line 529
undef($memory_5);
#line 529
undef($memory_6);
#line 529
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 529
undef($memory_7);
#line 530
goto label_4;
#line 530
label_4:
#line 530
undef($memory_6);
#line 531
$memory_7 = $memory_1->{'funs'};
#line 531
$memory_6 = hash::get_value($memory_7, $memory_3);
#line 531
undef($memory_7);
#line 532
$memory_7 = hash::has_key($memory_6, $memory_4);
#line 532
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 532
$memory_7 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_7));
#line 532
if (c_rt_lib::check_true($memory_7)) {goto label_6;}
#line 533
$memory_8 = "function `";
#line 533
$memory_8 = $memory_8 . $memory_0;
#line 533
$memory_9 = "' does not exist";
#line 533
$memory_8 = $memory_8 . $memory_9;
#line 533
undef($memory_9);
#line 533
ptd_system_priv::add_error($memory_2, $memory_8);
#line 533
undef($memory_8);
#line 534
$memory_8 = [];
#line 534
undef($memory_0);
#line 534
undef($memory_3);
#line 534
undef($memory_4);
#line 534
undef($memory_5);
#line 534
undef($memory_6);
#line 534
undef($memory_7);
#line 534
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_8;
#line 534
undef($memory_8);
#line 535
goto label_6;
#line 535
label_6:
#line 535
undef($memory_7);
#line 536
$memory_8 = hash::get_value($memory_6, $memory_4);
#line 536
$memory_7 = [$memory_8];
#line 536
undef($memory_8);
#line 536
undef($memory_0);
#line 536
undef($memory_3);
#line 536
undef($memory_4);
#line 536
undef($memory_5);
#line 536
undef($memory_6);
#line 536
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 536
undef($memory_7);
#line 536
undef($memory_3);
#line 536
undef($memory_4);
#line 536
undef($memory_5);
#line 536
undef($memory_6);
#line 536
undef($memory_0);
#line 536
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}

sub ptd_system::get_ref_type($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);$memory_2 = $_[2];Scalar::Util::weaken($_[2]) if ref($_[2]);
#line 541
$memory_3 = ptd_system_priv::get_function_def($memory_0, $memory_1, $memory_2);
#line 542
$memory_4 = array::len($memory_3);
#line 542
$memory_5 = 0;
#line 542
$memory_4 = c_rt_lib::to_nl($memory_4 == $memory_5);
#line 542
undef($memory_5);
#line 542
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 542
if (c_rt_lib::check_true($memory_4)) {goto label_2;}
#line 542
$memory_5 = tct::tct_im();
#line 542
undef($memory_0);
#line 542
undef($memory_3);
#line 542
undef($memory_4);
#line 542
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_5;
#line 542
undef($memory_5);
#line 542
goto label_2;
#line 542
label_2:
#line 542
undef($memory_4);
#line 543
$memory_5 = 0;
#line 543
$memory_4 = $memory_3->[$memory_5];
#line 543
undef($memory_5);
#line 543
$memory_3 = $memory_4;
#line 543
undef($memory_4);
#line 544
$memory_5 = $memory_1->{'funs'};
#line 544
$memory_6 = $memory_3->{'module'};
#line 544
$memory_4 = hash::get_value($memory_5, $memory_6);
#line 544
undef($memory_6);
#line 544
undef($memory_5);
#line 545
$memory_5 = $memory_3->{'is_type'};
#line 545
$memory_6 = c_rt_lib::ov_is($memory_5, 'yes');
#line 545
if (c_rt_lib::check_true($memory_6)) {goto label_4;}
#line 547
$memory_6 = c_rt_lib::ov_is($memory_5, 'no');
#line 547
if (c_rt_lib::check_true($memory_6)) {goto label_5;}
#line 547
$memory_6 = "NOMATCHALERT";
#line 547
$memory_6 = [$memory_6,$memory_5];
#line 547
die(dfile::ssave($memory_6));
#line 545
label_4:
#line 545
$memory_7 = c_rt_lib::ov_as($memory_5, 'yes');
#line 546
undef($memory_0);
#line 546
undef($memory_3);
#line 546
undef($memory_4);
#line 546
undef($memory_5);
#line 546
undef($memory_6);
#line 546
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_7;
#line 546
undef($memory_7);
#line 547
goto label_3;
#line 547
label_5:
#line 548
goto label_3;
#line 548
label_3:
#line 548
undef($memory_5);
#line 548
undef($memory_6);
#line 549
$memory_5 = tct::tct_im();
#line 550
$memory_7 = $memory_3->{'cmd'};
#line 550
$memory_6 = ptd_parser::fun_def_to_ptd($memory_7);
#line 550
undef($memory_7);
#line 550
$memory_7 = c_rt_lib::ov_is($memory_6, 'err');
#line 550
if (c_rt_lib::check_true($memory_7)) {goto label_7;}
#line 552
$memory_7 = c_rt_lib::ov_is($memory_6, 'ok');
#line 552
if (c_rt_lib::check_true($memory_7)) {goto label_8;}
#line 552
$memory_7 = "NOMATCHALERT";
#line 552
$memory_7 = [$memory_7,$memory_6];
#line 552
die(dfile::ssave($memory_7));
#line 550
label_7:
#line 550
$memory_8 = c_rt_lib::ov_as($memory_6, 'err');
#line 551
ptd_system_priv::add_error($memory_2, $memory_8);
#line 551
undef($memory_8);
#line 552
goto label_6;
#line 552
label_8:
#line 552
$memory_8 = c_rt_lib::ov_as($memory_6, 'ok');
#line 553
$memory_5 = $memory_8;
#line 553
undef($memory_8);
#line 554
goto label_6;
#line 554
label_6:
#line 554
undef($memory_6);
#line 554
undef($memory_7);
#line 555
$memory_6 = c_rt_lib::ov_mk_arg('yes', $memory_5);
#line 555
$memory_7 = $memory_6;
#line 555
 if (c_rt_lib::get_hashcount($memory_3) > 1) {$memory_3 = {%{$memory_3}};}$memory_3->{'is_type'} = $memory_7;
#line 555
undef($memory_6);
#line 555
undef($memory_7);
#line 556
$memory_6 = $memory_3->{'name'};
#line 556
hash::set_value($memory_4, $memory_6, $memory_3);
#line 556
undef($memory_6);
#line 557
$memory_6 = "funs";
#line 557
$memory_6 = c_rt_lib::get_ref_hash($memory_1, $memory_6);
#line 557
$memory_7 = $memory_3->{'module'};
#line 557
hash::set_value($memory_6, $memory_7, $memory_4);
#line 557
undef($memory_7);
#line 557
$memory_7 = "funs";
#line 557
c_rt_lib::set_ref_hash($memory_1, $memory_7, $memory_6);
#line 557
undef($memory_7);
#line 557
undef($memory_6);
#line 558
undef($memory_0);
#line 558
undef($memory_3);
#line 558
undef($memory_4);
#line 558
$_[1] = $memory_1;$_[2] = $memory_2;return $memory_5;
#line 558
undef($memory_3);
#line 558
undef($memory_4);
#line 558
undef($memory_5);
#line 558
undef($memory_0);
#line 558
$_[1] = $memory_1;$_[2] = $memory_2;return;
$_[1] = $memory_1;$_[2] = $memory_2;}
