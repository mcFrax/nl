use c_rt_lib;
use string;
use boolean_t;
use ptd;
sub string_utils::is_integer;
sub string_utils::is_float;
sub string_utils::is_number;

return 1;

sub string_utils::is_integer($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 11
$memory_1 = "";
#line 11
$memory_1 = $memory_0 . $memory_1;
#line 12
$memory_2 = string::length($memory_1);
#line 13
$memory_3 = 0;
#line 13
$memory_3 = c_rt_lib::to_nl($memory_1 eq $memory_3);
#line 13
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 13
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 13
$memory_4 = c_rt_lib::to_nl(1);
#line 13
undef($memory_0);
#line 13
undef($memory_1);
#line 13
undef($memory_2);
#line 13
undef($memory_3);
#line 13
return $memory_4;
#line 13
undef($memory_4);
#line 13
goto label_2;
#line 13
label_2:
#line 13
undef($memory_3);
#line 14
$memory_3 = 0;
#line 15
$memory_4 = 0;
#line 15
$memory_4 = c_rt_lib::to_nl($memory_2 == $memory_4);
#line 15
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 15
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 15
$memory_5 = c_rt_lib::to_nl(0);
#line 15
undef($memory_0);
#line 15
undef($memory_1);
#line 15
undef($memory_2);
#line 15
undef($memory_3);
#line 15
undef($memory_4);
#line 15
return $memory_5;
#line 15
undef($memory_5);
#line 15
goto label_4;
#line 15
label_4:
#line 15
undef($memory_4);
#line 16
$memory_5 = 1;
#line 16
$memory_4 = string::substr($memory_1, $memory_3, $memory_5);
#line 16
undef($memory_5);
#line 16
$memory_5 = "-";
#line 16
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 16
undef($memory_5);
#line 16
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 16
if (c_rt_lib::check_true($memory_4)) {goto label_6;}
#line 16
$memory_5 = 1;
#line 16
$memory_3 = $memory_3 + $memory_5;
#line 16
undef($memory_5);
#line 16
goto label_6;
#line 16
label_6:
#line 16
undef($memory_4);
#line 17
$memory_4 = c_rt_lib::to_nl($memory_3 == $memory_2);
#line 17
if (c_rt_lib::check_true($memory_4)) {goto label_9;}
#line 17
$memory_5 = 1;
#line 17
$memory_4 = string::substr($memory_1, $memory_3, $memory_5);
#line 17
undef($memory_5);
#line 17
$memory_5 = 0;
#line 17
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 17
undef($memory_5);
#line 17
label_9:
#line 17
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 17
if (c_rt_lib::check_true($memory_4)) {goto label_8;}
#line 17
$memory_5 = c_rt_lib::to_nl(0);
#line 17
undef($memory_0);
#line 17
undef($memory_1);
#line 17
undef($memory_2);
#line 17
undef($memory_3);
#line 17
undef($memory_4);
#line 17
return $memory_5;
#line 17
undef($memory_5);
#line 17
goto label_8;
#line 17
label_8:
#line 17
undef($memory_4);
#line 18
$memory_3 = $memory_3;
#line 18
label_11:
#line 18
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_2);
#line 18
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 18
if (c_rt_lib::check_true($memory_4)) {goto label_10;}
#line 19
$memory_7 = 1;
#line 19
$memory_6 = string::substr($memory_1, $memory_3, $memory_7);
#line 19
undef($memory_7);
#line 19
$memory_5 = string::is_digit($memory_6);
#line 19
undef($memory_6);
#line 19
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 19
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 19
if (c_rt_lib::check_true($memory_5)) {goto label_14;}
#line 19
$memory_6 = c_rt_lib::to_nl(0);
#line 19
undef($memory_0);
#line 19
undef($memory_1);
#line 19
undef($memory_2);
#line 19
undef($memory_3);
#line 19
undef($memory_4);
#line 19
undef($memory_5);
#line 19
return $memory_6;
#line 19
undef($memory_6);
#line 19
goto label_14;
#line 19
label_14:
#line 19
undef($memory_5);
#line 19
$memory_5 = 1;
#line 19
$memory_3 = $memory_3 + $memory_5;
#line 19
undef($memory_5);
#line 20
goto label_11;
#line 20
label_10:
#line 20
undef($memory_4);
#line 21
$memory_4 = c_rt_lib::to_nl(1);
#line 21
undef($memory_0);
#line 21
undef($memory_1);
#line 21
undef($memory_2);
#line 21
undef($memory_3);
#line 21
return $memory_4;
#line 21
undef($memory_4);
#line 21
undef($memory_1);
#line 21
undef($memory_2);
#line 21
undef($memory_3);
#line 21
undef($memory_0);
#line 21
return;
}

sub string_utils::is_float($) {
my $memory_0;my $memory_1;my $memory_2;my $memory_3;my $memory_4;my $memory_5;my $memory_6;my $memory_7;$memory_0 = $_[0];
#line 25
$memory_1 = "";
#line 25
$memory_1 = $memory_0 . $memory_1;
#line 26
$memory_2 = string::length($memory_1);
#line 27
$memory_3 = 3;
#line 27
$memory_3 = c_rt_lib::to_nl($memory_2 < $memory_3);
#line 27
$memory_3 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_3));
#line 27
if (c_rt_lib::check_true($memory_3)) {goto label_2;}
#line 27
$memory_4 = c_rt_lib::to_nl(0);
#line 27
undef($memory_0);
#line 27
undef($memory_1);
#line 27
undef($memory_2);
#line 27
undef($memory_3);
#line 27
return $memory_4;
#line 27
undef($memory_4);
#line 27
goto label_2;
#line 27
label_2:
#line 27
undef($memory_3);
#line 28
$memory_3 = 0;
#line 29
$memory_5 = 1;
#line 29
$memory_4 = string::substr($memory_1, $memory_3, $memory_5);
#line 29
undef($memory_5);
#line 29
$memory_5 = "-";
#line 29
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 29
undef($memory_5);
#line 29
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 29
if (c_rt_lib::check_true($memory_4)) {goto label_4;}
#line 29
$memory_5 = 1;
#line 29
$memory_3 = $memory_3 + $memory_5;
#line 29
undef($memory_5);
#line 29
goto label_4;
#line 29
label_4:
#line 29
undef($memory_4);
#line 30
$memory_3 = $memory_3;
#line 30
label_6:
#line 30
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_2);
#line 30
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 30
if (c_rt_lib::check_true($memory_4)) {goto label_5;}
#line 31
$memory_7 = 1;
#line 31
$memory_6 = string::substr($memory_1, $memory_3, $memory_7);
#line 31
undef($memory_7);
#line 31
$memory_5 = string::is_digit($memory_6);
#line 31
undef($memory_6);
#line 31
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 31
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 31
if (c_rt_lib::check_true($memory_5)) {goto label_9;}
#line 31
undef($memory_5);
#line 31
goto label_5;
#line 31
goto label_9;
#line 31
label_9:
#line 31
undef($memory_5);
#line 31
$memory_5 = 1;
#line 31
$memory_3 = $memory_3 + $memory_5;
#line 31
undef($memory_5);
#line 32
goto label_6;
#line 32
label_5:
#line 32
undef($memory_4);
#line 33
$memory_4 = 1;
#line 33
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_4);
#line 33
if (c_rt_lib::check_true($memory_4)) {goto label_12;}
#line 33
$memory_4 = 2;
#line 33
$memory_4 = $memory_3 + $memory_4;
#line 33
$memory_4 = c_rt_lib::to_nl($memory_4 > $memory_2);
#line 33
label_12:
#line 33
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 33
if (c_rt_lib::check_true($memory_4)) {goto label_11;}
#line 33
$memory_5 = c_rt_lib::to_nl(0);
#line 33
undef($memory_0);
#line 33
undef($memory_1);
#line 33
undef($memory_2);
#line 33
undef($memory_3);
#line 33
undef($memory_4);
#line 33
return $memory_5;
#line 33
undef($memory_5);
#line 33
goto label_11;
#line 33
label_11:
#line 33
undef($memory_4);
#line 34
$memory_5 = 1;
#line 34
$memory_4 = string::substr($memory_1, $memory_3, $memory_5);
#line 34
undef($memory_5);
#line 34
$memory_5 = ".";
#line 34
$memory_4 = c_rt_lib::to_nl($memory_4 eq $memory_5);
#line 34
undef($memory_5);
#line 34
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 34
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 34
if (c_rt_lib::check_true($memory_4)) {goto label_14;}
#line 34
$memory_5 = c_rt_lib::to_nl(0);
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
return $memory_5;
#line 34
undef($memory_5);
#line 34
goto label_14;
#line 34
label_14:
#line 34
undef($memory_4);
#line 35
$memory_4 = 1;
#line 35
$memory_3 = $memory_3 + $memory_4;
#line 35
undef($memory_4);
#line 35
label_16:
#line 35
$memory_4 = c_rt_lib::to_nl($memory_3 < $memory_2);
#line 35
$memory_4 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_4));
#line 35
if (c_rt_lib::check_true($memory_4)) {goto label_15;}
#line 36
$memory_7 = 1;
#line 36
$memory_6 = string::substr($memory_1, $memory_3, $memory_7);
#line 36
undef($memory_7);
#line 36
$memory_5 = string::is_digit($memory_6);
#line 36
undef($memory_6);
#line 36
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 36
$memory_5 = c_rt_lib::to_nl(!c_rt_lib::check_true($memory_5));
#line 36
if (c_rt_lib::check_true($memory_5)) {goto label_19;}
#line 36
$memory_6 = c_rt_lib::to_nl(0);
#line 36
undef($memory_0);
#line 36
undef($memory_1);
#line 36
undef($memory_2);
#line 36
undef($memory_3);
#line 36
undef($memory_4);
#line 36
undef($memory_5);
#line 36
return $memory_6;
#line 36
undef($memory_6);
#line 36
goto label_19;
#line 36
label_19:
#line 36
undef($memory_5);
#line 36
$memory_5 = 1;
#line 36
$memory_3 = $memory_3 + $memory_5;
#line 36
undef($memory_5);
#line 37
goto label_16;
#line 37
label_15:
#line 37
undef($memory_4);
#line 38
$memory_4 = c_rt_lib::to_nl(1);
#line 38
undef($memory_0);
#line 38
undef($memory_1);
#line 38
undef($memory_2);
#line 38
undef($memory_3);
#line 38
return $memory_4;
#line 38
undef($memory_4);
#line 38
undef($memory_1);
#line 38
undef($memory_2);
#line 38
undef($memory_3);
#line 38
undef($memory_0);
#line 38
return;
}

sub string_utils::is_number($) {
my $memory_0;my $memory_1;my $memory_2;$memory_0 = $_[0];
#line 42
$memory_1 = "";
#line 42
$memory_1 = $memory_0 . $memory_1;
#line 43
$memory_2 = string_utils::is_integer($memory_1);
#line 43
if (c_rt_lib::check_true($memory_2)) {goto label_1;}
#line 43
$memory_2 = string_utils::is_float($memory_1);
#line 43
label_1:
#line 43
undef($memory_0);
#line 43
undef($memory_1);
#line 43
return $memory_2;
#line 43
undef($memory_2);
#line 43
undef($memory_1);
#line 43
undef($memory_0);
#line 43
return;
}
