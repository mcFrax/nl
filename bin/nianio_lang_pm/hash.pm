use c_rt_lib;
use c_std_lib;
sub hash::get_value;
sub hash::has_key;
sub hash::set_value;
sub hash::delete;
sub hash::size;
sub hash::keys;
sub hash::add_all;

return 1;

sub hash::get_value($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 9
$memory_2 = c_std_lib::hash_get_value($memory_0, $memory_1);
#line 9
undef($memory_0);
#line 9
undef($memory_1);
#line 9
return $memory_2;
#line 9
undef($memory_2);
#line 9
undef($memory_0);
#line 9
undef($memory_1);
#line 9
return;
}

sub hash::has_key($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 13
$memory_2 = c_std_lib::hash_has_key($memory_0, $memory_1);
#line 13
undef($memory_0);
#line 13
undef($memory_1);
#line 13
return $memory_2;
#line 13
undef($memory_2);
#line 13
undef($memory_0);
#line 13
undef($memory_1);
#line 13
return;
}

sub hash::set_value($$$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];$memory_2 = $_[2];
#line 17
c_std_lib::hash_set_value($memory_0, $memory_1, $memory_2);
#line 17
undef($memory_1);
#line 17
undef($memory_2);
#line 17
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub hash::delete($$) {
my $memory_0;my $memory_1;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 21
c_std_lib::hash_delete($memory_0, $memory_1);
#line 21
undef($memory_1);
#line 21
$_[0] = $memory_0;return;
$_[0] = $memory_0;}

sub hash::size($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 25
$memory_1 = c_std_lib::hash_size($memory_0);
#line 25
undef($memory_0);
#line 25
return $memory_1;
#line 25
undef($memory_1);
#line 25
undef($memory_0);
#line 25
return;
}

sub hash::keys($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];
#line 29
$memory_1 = [];
#line 30
$memory_4 = c_rt_lib::init_iter($memory_0);
#line 30
label_3:
#line 30
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 30
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 30
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 30
$memory_3 = c_rt_lib::hash_get_value($memory_0, $memory_2);
#line 31
c_std_lib::array_push($memory_1, $memory_2);
#line 32
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 32
goto label_3;
#line 32
label_1:
#line 32
undef($memory_2);
#line 32
undef($memory_3);
#line 32
undef($memory_4);
#line 33
undef($memory_0);
#line 33
return $memory_1;
#line 33
undef($memory_1);
#line 33
undef($memory_0);
#line 33
return;
}

sub hash::add_all($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];Scalar::Util::weaken($_[0]) if ref($_[0]);$memory_1 = $_[1];
#line 38
$memory_4 = c_rt_lib::init_iter($memory_1);
#line 38
label_3:
#line 38
$memory_2 = c_rt_lib::is_end_hash($memory_4);
#line 38
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 38
$memory_2 = c_rt_lib::get_key_iter($memory_4);
#line 38
$memory_3 = c_rt_lib::hash_get_value($memory_1, $memory_2);
#line 38
hash::set_value($memory_0, $memory_2, $memory_3);
#line 38
$memory_4 = c_rt_lib::next_iter($memory_4);
#line 38
goto label_3;
#line 38
label_1:
#line 38
undef($memory_2);
#line 38
undef($memory_3);
#line 38
undef($memory_4);
#line 38
undef($memory_1);
#line 38
$_[0] = $memory_0;return;
$_[0] = $memory_0;}
