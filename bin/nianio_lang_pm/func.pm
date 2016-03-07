use c_rt_lib;
use c_std_lib;
use ptd;
sub func::func_t;
sub func::exec;
sub func::exec_ref;

return 1;

sub func::__func_t() {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;
#line 10
$memory_4 = ptd::sim();
#line 10
$memory_5 = ptd::sim();
#line 10
$memory_3 = {module => $memory_4,name => $memory_5,};
#line 10
undef($memory_4);
#line 10
undef($memory_5);
#line 10
$memory_2 = ptd::rec($memory_3);
#line 10
undef($memory_3);
#line 10
$memory_1 = {ref => $memory_2,};
#line 10
undef($memory_2);
#line 10
$memory_0 = ptd::var($memory_1);
#line 10
undef($memory_1);
#line 10
return $memory_0;
#line 10
undef($memory_0);
#line 10
return;
}

my $_func_t;
sub func::func_t() {
	$_func_t = func::__func_t() unless defined $_func_t;
	return $_func_t;
}

sub func::exec($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 19
$memory_2 = c_std_lib::exec($memory_0, $memory_1);
#line 19
undef($memory_0);
#line 19
undef($memory_1);
#line 19
return $memory_2;
#line 19
undef($memory_2);
#line 19
undef($memory_0);
#line 19
undef($memory_1);
#line 19
return;
}

sub func::exec_ref($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];Scalar::Util::weaken($_[1]) if ref($_[1]);
#line 23
$memory_2 = c_std_lib::exec($memory_0, $memory_1);
#line 23
undef($memory_0);
#line 23
$_[1] = $memory_1;return $memory_2;
#line 23
undef($memory_2);
#line 23
undef($memory_0);
#line 23
$_[1] = $memory_1;return;
$_[1] = $memory_1;}
