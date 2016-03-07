use c_rt_lib;
use c_std_lib;
sub array::subarray;
sub array::join;
sub array::push;
sub array::pop;
sub array::append;
sub array::len;
sub array::cmp;
sub array::sort;

return 1;

sub array::subarray($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 9
$memory_3 = c_std_lib::array_sub($memory_0, $memory_1, $memory_2);
#line 9
undef($memory_0);
#line 9
undef($memory_1);
#line 9
undef($memory_2);
#line 9
return $memory_3;
#line 9
undef($memory_3);
#line 9
undef($memory_0);
#line 9
undef($memory_1);
#line 9
undef($memory_2);
#line 9
return;
}

sub array::join($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;my $memory_8;my $memory_9;$memory_0 = $_[0];$memory_1 = $_[1];
#line 13
$memory_2 = "";
#line 14
$memory_3 = c_rt_lib::to_nl(1);
#line 15
$memory_5 = 0;
#line 15
$memory_6 = 1;
#line 15
$memory_7 = c_rt_lib::array_len($memory_1);
#line 15
label_3:
#line 15
$memory_8 = c_rt_lib::to_nl($memory_5 >= $memory_7);
#line 15
if (c_rt_lib::check_true($memory_8)) {goto label_1;}
#line 15
$memory_4 = $memory_1->[$memory_5];
#line 16
$memory_9 = $memory_3;
#line 16
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 16
$memory_9 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_9));
#line 16
if (c_rt_lib::check_true($memory_9)) {goto label_5;}
#line 16
$memory_2 = $memory_2 . $memory_0;
#line 16
goto label_5;
#line 16
label_5:
#line 16
undef($memory_9);
#line 17
$memory_2 = $memory_2 . $memory_4;
#line 18
$memory_9 = c_rt_lib::to_nl(0);
#line 18
$memory_3 = $memory_9;
#line 18
undef($memory_9);
#line 19
$memory_5 = $memory_5 + $memory_6;
#line 19
goto label_3;
#line 19
label_1:
#line 19
undef($memory_4);
#line 19
undef($memory_5);
#line 19
undef($memory_6);
#line 19
undef($memory_7);
#line 19
undef($memory_8);
#line 20
undef($memory_0);
#line 20
undef($memory_1);
#line 20
undef($memory_3);
#line 20
return $memory_2;
#line 20
undef($memory_2);
#line 20
undef($memory_3);
#line 20
undef($memory_0);
#line 20
undef($memory_1);
#line 20
return;
}

sub array::push($$) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 24
c_std_lib::array_push($memory_0, $memory_1);
#line 24
undef($memory_1);
#line 24
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub array::pop($) {
my $memory_0;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 28
c_std_lib::array_pop($memory_0);
#line 28
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub array::append($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 32
$memory_3 = 0;
#line 32
$memory_4 = 1;
#line 32
$memory_5 = c_rt_lib::array_len($memory_1);
#line 32
label_3:
#line 32
$memory_6 = c_rt_lib::to_nl($memory_3 >= $memory_5);
#line 32
if (c_rt_lib::check_true($memory_6)) {goto label_1;}
#line 32
$memory_2 = $memory_1->[$memory_3];
#line 33
array::push($memory_0, $memory_2);
#line 34
$memory_3 = $memory_3 + $memory_4;
#line 34
goto label_3;
#line 34
label_1:
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
undef($memory_1);
#line 34
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub array::len($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 38
$memory_1 = c_std_lib::array_len($memory_0);
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

sub array::cmp($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 42
$memory_2 = c_std_lib::string_compare($memory_0, $memory_1);
#line 42
$memory_3 = 0;
#line 42
$memory_2 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 42
undef($memory_3);
#line 42
undef($memory_0);
#line 42
undef($memory_1);
#line 42
return $memory_2;
#line 42
undef($memory_2);
#line 42
undef($memory_0);
#line 42
undef($memory_1);
#line 42
return;
}

sub array::sort($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);
#line 46
$memory_2 = {
	module => "array",
	name => "cmp",
};
#line 46
$memory_2 = c_rt_lib::ov_mk_arg('ref', $memory_2);
#line 46
$memory_1 = c_std_lib::array_sort($memory_0, $memory_2);
#line 46
undef($memory_2);
#line 46
$memory_0 = $memory_1;
#line 46
undef($memory_1);
#line 46
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
