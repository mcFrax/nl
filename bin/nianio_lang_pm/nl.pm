use c_rt_lib;
use c_std_lib;
use boolean_t;
sub nl::is_array;
sub nl::is_hash;
sub nl::is_sim;
sub nl::is_variant;
sub nl::print;

return 1;

sub nl::is_array($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 10
$memory_1 = c_std_lib::is_array($memory_0);
#line 10
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 10
$memory_1 = c_rt_lib::to_nl(0);
#line 10
goto label_1;
#line 10
label_2:
#line 10
$memory_1 = c_rt_lib::to_nl(1);
#line 10
label_1:
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

sub nl::is_hash($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 14
$memory_1 = c_std_lib::is_hash($memory_0);
#line 14
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 14
$memory_1 = c_rt_lib::to_nl(0);
#line 14
goto label_1;
#line 14
label_2:
#line 14
$memory_1 = c_rt_lib::to_nl(1);
#line 14
label_1:
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

sub nl::is_sim($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 18
$memory_1 = c_std_lib::is_sim($memory_0);
#line 18
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 18
$memory_1 = c_rt_lib::to_nl(0);
#line 18
goto label_1;
#line 18
label_2:
#line 18
$memory_1 = c_rt_lib::to_nl(1);
#line 18
label_1:
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

sub nl::is_variant($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 22
$memory_1 = c_std_lib::is_variant($memory_0);
#line 22
if (c_rt_lib::check_true($memory_1)) {goto label_2;}
#line 22
$memory_1 = c_rt_lib::to_nl(0);
#line 22
goto label_1;
#line 22
label_2:
#line 22
$memory_1 = c_rt_lib::to_nl(1);
#line 22
label_1:
#line 22
undef($memory_0);
#line 22
return $memory_1;
#line 22
undef($memory_1);
#line 22
undef($memory_0);
#line 22
return;
}

sub nl::print($) {
my $memory_0;$memory_0 = $_[0];
#line 26
c_std_lib::print($memory_0);
#line 26
undef($memory_0);
#line 26
return;
}
