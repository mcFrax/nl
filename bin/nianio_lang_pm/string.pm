use c_rt_lib;
use c_std_lib;
use boolean_t;
use ptd;
sub string::lf;
sub string::tab;
sub string::r;
sub string::f;
sub string::char_times;
sub string::length;
sub string::get_char_code;
sub string::substr;
sub string::substr2;
sub string::index2;
sub string::index;
sub string::replace;
sub string::ord;
sub string::is_digit;
sub string::is_letter;
sub string::chr;
sub string::lt;
sub string::gt;
sub string::compare;
sub string::le;
sub string::ge;

return 1;

sub string::__lf() {
my $memory_0;my $memory_1;
#line 11
$memory_1 = 10;
#line 11
$memory_0 = string::chr($memory_1);
#line 11
undef($memory_1);
#line 11
return $memory_0;
#line 11
undef($memory_0);
#line 11
return;
}

my $_lf;
sub string::lf() {
	$_lf = string::__lf() unless defined $_lf;
	return $_lf;
}

sub string::__tab() {
my $memory_0;my $memory_1;
#line 15
$memory_1 = 9;
#line 15
$memory_0 = string::chr($memory_1);
#line 15
undef($memory_1);
#line 15
return $memory_0;
#line 15
undef($memory_0);
#line 15
return;
}

my $_tab;
sub string::tab() {
	$_tab = string::__tab() unless defined $_tab;
	return $_tab;
}

sub string::__r() {
my $memory_0;my $memory_1;
#line 19
$memory_1 = 13;
#line 19
$memory_0 = string::chr($memory_1);
#line 19
undef($memory_1);
#line 19
return $memory_0;
#line 19
undef($memory_0);
#line 19
return;
}

my $_r;
sub string::r() {
	$_r = string::__r() unless defined $_r;
	return $_r;
}

sub string::__f() {
my $memory_0;my $memory_1;
#line 23
$memory_1 = 12;
#line 23
$memory_0 = string::chr($memory_1);
#line 23
undef($memory_1);
#line 23
return $memory_0;
#line 23
undef($memory_0);
#line 23
return;
}

my $_f;
sub string::f() {
	$_f = string::__f() unless defined $_f;
	return $_f;
}

sub string::char_times($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;$memory_0 = $_[0];$memory_1 = $_[1];
#line 27
$memory_2 = "";
#line 28
$memory_3 = 0;
#line 28
$memory_4 = 1;
#line 28
label_3:
#line 28
$memory_5 = c_rt_lib::to_nl($memory_3 >= $memory_1);
#line 28
if (c_rt_lib::check_true($memory_5)) {goto label_1;}
#line 28
$memory_2 = $memory_2 . $memory_0;
#line 28
$memory_3 = $memory_3 + $memory_4;
#line 28
goto label_3;
#line 28
label_1:
#line 28
undef($memory_3);
#line 28
undef($memory_4);
#line 28
undef($memory_5);
#line 29
undef($memory_0);
#line 29
undef($memory_1);
#line 29
return $memory_2;
#line 29
undef($memory_2);
#line 29
undef($memory_0);
#line 29
undef($memory_1);
#line 29
return;
}

sub string::length($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 33
$memory_1 = c_std_lib::string_length($memory_0);
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

sub string::get_char_code($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 37
$memory_2 = c_std_lib::string_get_char_code($memory_0, $memory_1);
#line 37
undef($memory_0);
#line 37
undef($memory_1);
#line 37
return $memory_2;
#line 37
undef($memory_2);
#line 37
undef($memory_0);
#line 37
undef($memory_1);
#line 37
return;
}

sub string::substr($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 41
$memory_3 = c_std_lib::string_sub($memory_0, $memory_1, $memory_2);
#line 41
$memory_4 = "";
#line 41
$memory_3 = $memory_3 . $memory_4;
#line 41
undef($memory_4);
#line 41
undef($memory_0);
#line 41
undef($memory_1);
#line 41
undef($memory_2);
#line 41
return $memory_3;
#line 41
undef($memory_3);
#line 41
undef($memory_0);
#line 41
undef($memory_1);
#line 41
undef($memory_2);
#line 41
return;
}

sub string::substr2($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 45
$memory_3 = string::length($memory_0);
#line 45
$memory_3 = $memory_3 - $memory_1;
#line 45
$memory_2 = c_std_lib::string_sub($memory_0, $memory_1, $memory_3);
#line 45
undef($memory_3);
#line 45
$memory_3 = "";
#line 45
$memory_2 = $memory_2 . $memory_3;
#line 45
undef($memory_3);
#line 45
undef($memory_0);
#line 45
undef($memory_1);
#line 45
return $memory_2;
#line 45
undef($memory_2);
#line 45
undef($memory_0);
#line 45
undef($memory_1);
#line 45
return;
}

sub string::index2($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 49
$memory_3 = 0;
#line 49
$memory_2 = c_std_lib::string_index($memory_0, $memory_1, $memory_3);
#line 49
undef($memory_3);
#line 49
undef($memory_0);
#line 49
undef($memory_1);
#line 49
return $memory_2;
#line 49
undef($memory_2);
#line 49
undef($memory_0);
#line 49
undef($memory_1);
#line 49
return;
}

sub string::index($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 53
$memory_3 = c_std_lib::string_index($memory_0, $memory_1, $memory_2);
#line 53
undef($memory_0);
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 53
return $memory_3;
#line 53
undef($memory_3);
#line 53
undef($memory_0);
#line 53
undef($memory_1);
#line 53
undef($memory_2);
#line 53
return;
}

sub string::replace($$$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];$memory_2 = $_[2];
#line 57
$memory_3 = c_std_lib::string_replace($memory_0, $memory_1, $memory_2);
#line 57
undef($memory_0);
#line 57
undef($memory_1);
#line 57
undef($memory_2);
#line 57
return $memory_3;
#line 57
undef($memory_3);
#line 57
undef($memory_0);
#line 57
undef($memory_1);
#line 57
undef($memory_2);
#line 57
return;
}

sub string::ord($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 61
$memory_1 = c_std_lib::string_ord($memory_0);
#line 61
undef($memory_0);
#line 61
return $memory_1;
#line 61
undef($memory_1);
#line 61
undef($memory_0);
#line 61
return;
}

sub string::is_digit($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 65
$memory_1 = string::ord($memory_0);
#line 66
$memory_2 = 48;
#line 66
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 66
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 66
if (c_rt_lib::check_true($memory_3)) {goto label_1;}
#line 66
$memory_2 = 57;
#line 66
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 66
label_1:
#line 66
undef($memory_3);
#line 66
undef($memory_0);
#line 66
undef($memory_1);
#line 66
return $memory_2;
#line 66
undef($memory_2);
#line 66
undef($memory_1);
#line 66
undef($memory_0);
#line 66
return;
}

sub string::is_letter($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];
#line 70
$memory_1 = string::ord($memory_0);
#line 71
$memory_2 = 97;
#line 71
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 71
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 71
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 71
$memory_2 = 122;
#line 71
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 71
label_2:
#line 71
undef($memory_3);
#line 71
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 71
$memory_2 = 65;
#line 71
$memory_2 = c_rt_lib::to_nl($memory_1 >= $memory_2);
#line 71
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_2));
#line 71
if (c_rt_lib::check_true($memory_3)) {goto label_3;}
#line 71
$memory_2 = 90;
#line 71
$memory_2 = c_rt_lib::to_nl($memory_1 <= $memory_2);
#line 71
label_3:
#line 71
undef($memory_3);
#line 71
label_1:
#line 71
undef($memory_0);
#line 71
undef($memory_1);
#line 71
return $memory_2;
#line 71
undef($memory_2);
#line 71
undef($memory_1);
#line 71
undef($memory_0);
#line 71
return;
}

sub string::chr($) {
my $memory_0;my $memory_1;$memory_0 = $_[0];
#line 75
$memory_1 = c_std_lib::string_chr($memory_0);
#line 75
undef($memory_0);
#line 75
return $memory_1;
#line 75
undef($memory_1);
#line 75
undef($memory_0);
#line 75
return;
}

sub string::lt($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 79
$memory_2 = string::compare($memory_0, $memory_1);
#line 79
$memory_3 = 0;
#line 79
$memory_2 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 79
undef($memory_3);
#line 79
undef($memory_0);
#line 79
undef($memory_1);
#line 79
return $memory_2;
#line 79
undef($memory_2);
#line 79
undef($memory_0);
#line 79
undef($memory_1);
#line 79
return;
}

sub string::gt($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 83
$memory_2 = string::compare($memory_0, $memory_1);
#line 83
$memory_3 = 0;
#line 83
$memory_2 = c_rt_lib::to_nl($memory_2 > $memory_3);
#line 83
undef($memory_3);
#line 83
undef($memory_0);
#line 83
undef($memory_1);
#line 83
return $memory_2;
#line 83
undef($memory_2);
#line 83
undef($memory_0);
#line 83
undef($memory_1);
#line 83
return;
}

sub string::compare($$) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];$memory_1 = $_[1];
#line 87
$memory_2 = c_std_lib::string_compare($memory_0, $memory_1);
#line 87
undef($memory_0);
#line 87
undef($memory_1);
#line 87
return $memory_2;
#line 87
undef($memory_2);
#line 87
undef($memory_0);
#line 87
undef($memory_1);
#line 87
return;
}

sub string::le($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 91
$memory_2 = string::compare($memory_0, $memory_1);
#line 91
$memory_3 = 0;
#line 91
$memory_2 = c_rt_lib::to_nl($memory_2 <= $memory_3);
#line 91
undef($memory_3);
#line 91
undef($memory_0);
#line 91
undef($memory_1);
#line 91
return $memory_2;
#line 91
undef($memory_2);
#line 91
undef($memory_0);
#line 91
undef($memory_1);
#line 91
return;
}

sub string::ge($$) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;$memory_0 = $_[0];$memory_1 = $_[1];
#line 95
$memory_2 = string::compare($memory_0, $memory_1);
#line 95
$memory_3 = 0;
#line 95
$memory_2 = c_rt_lib::to_nl($memory_2 >= $memory_3);
#line 95
undef($memory_3);
#line 95
undef($memory_0);
#line 95
undef($memory_1);
#line 95
return $memory_2;
#line 95
undef($memory_2);
#line 95
undef($memory_0);
#line 95
undef($memory_1);
#line 95
return;
}
