
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "string_utils.h"
#include "string.h"
#include "boolean_t.h"
#include "ptd.h"
#line 1 "string_utils.nl"

static ImmT *__const__f = NULL;
void string_utils_priv0__const__init();
ImmT string_utils_priv0__const__sim(int __nr);
ImmT string_utils_priv0__const__sing(int __nr);



ImmT string_utils0is_integer0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_integer");
return string_utils0is_integer(_tab[0]);}
ImmT string_utils0is_integer(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_utils_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 11
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 11
c_rt_lib0move(&___nl__1, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 12
c_rt_lib0move(&___nl__2, string0length(___nl__1));
#line 13
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 13
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 13
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 13
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 13
c_rt_lib0move(&___nl__4, c_rt_lib0get_true());
#line 13
c_rt_lib0clear(&___nl__0);
#line 13
c_rt_lib0clear(&___nl__1);
#line 13
c_rt_lib0clear(&___nl__2);
#line 13
c_rt_lib0clear(&___nl__3);
#line 13
return ___nl__4;
#line 13
c_rt_lib0clear(&___nl__4);
#line 13
goto label_2;
#line 13
label_2:
#line 13
c_rt_lib0clear(&___nl__3);
#line 14
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 15
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 15
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__2, ___nl__4));
#line 15
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 15
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 15
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 15
c_rt_lib0clear(&___nl__0);
#line 15
c_rt_lib0clear(&___nl__1);
#line 15
c_rt_lib0clear(&___nl__2);
#line 15
c_rt_lib0clear(&___nl__3);
#line 15
c_rt_lib0clear(&___nl__4);
#line 15
return ___nl__5;
#line 15
c_rt_lib0clear(&___nl__5);
#line 15
goto label_4;
#line 15
label_4:
#line 15
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 16
c_rt_lib0move(&___nl__4, string0substr(___nl__1, ___nl__3, ___nl__5));
#line 16
c_rt_lib0clear(&___nl__5);
#line 16
c_rt_lib0move(&___nl__5,___get_global_const(249));
#line 16
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 16
c_rt_lib0clear(&___nl__5);
#line 16
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 16
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 16
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 16
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 16
c_rt_lib0clear(&___nl__5);
#line 16
goto label_6;
#line 16
label_6:
#line 16
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__3, ___nl__2));
#line 17
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 17
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 17
c_rt_lib0move(&___nl__4, string0substr(___nl__1, ___nl__3, ___nl__5));
#line 17
c_rt_lib0clear(&___nl__5);
#line 17
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 17
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 17
c_rt_lib0clear(&___nl__5);
#line 17
label_9:
#line 17
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 17
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 17
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
return ___nl__5;
#line 17
c_rt_lib0clear(&___nl__5);
#line 17
goto label_8;
#line 17
label_8:
#line 17
c_rt_lib0clear(&___nl__4);
#line 18
c_rt_lib0copy(&___nl__3, ___nl__3);
#line 18
label_11:
#line 18
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__2));
#line 18
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 18
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 19
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 19
c_rt_lib0move(&___nl__6, string0substr(___nl__1, ___nl__3, ___nl__7));
#line 19
c_rt_lib0clear(&___nl__7);
#line 19
c_rt_lib0move(&___nl__5, string0is_digit(___nl__6));
#line 19
c_rt_lib0clear(&___nl__6);
#line 19
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 19
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 19
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 19
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 19
c_rt_lib0clear(&___nl__0);
#line 19
c_rt_lib0clear(&___nl__1);
#line 19
c_rt_lib0clear(&___nl__2);
#line 19
c_rt_lib0clear(&___nl__3);
#line 19
c_rt_lib0clear(&___nl__4);
#line 19
c_rt_lib0clear(&___nl__5);
#line 19
return ___nl__6;
#line 19
c_rt_lib0clear(&___nl__6);
#line 19
goto label_14;
#line 19
label_14:
#line 19
c_rt_lib0clear(&___nl__5);
#line 19
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 19
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 19
c_rt_lib0clear(&___nl__5);
#line 20
goto label_11;
#line 20
label_10:
#line 20
c_rt_lib0clear(&___nl__4);
#line 21
c_rt_lib0move(&___nl__4, c_rt_lib0get_true());
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
c_rt_lib0clear(&___nl__2);
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
return ___nl__4;
#line 21
c_rt_lib0clear(&___nl__4);
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
c_rt_lib0clear(&___nl__2);
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return NULL;
}

ImmT string_utils0is_float0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_float");
return string_utils0is_float(_tab[0]);}
ImmT string_utils0is_float(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_utils_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 25
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 25
c_rt_lib0move(&___nl__1, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 26
c_rt_lib0move(&___nl__2, string0length(___nl__1));
#line 27
c_rt_lib0move(&___nl__3,___get_global_const(962));
#line 27
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 27
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 27
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 27
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 27
c_rt_lib0clear(&___nl__0);
#line 27
c_rt_lib0clear(&___nl__1);
#line 27
c_rt_lib0clear(&___nl__2);
#line 27
c_rt_lib0clear(&___nl__3);
#line 27
return ___nl__4;
#line 27
c_rt_lib0clear(&___nl__4);
#line 27
goto label_2;
#line 27
label_2:
#line 27
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 29
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 29
c_rt_lib0move(&___nl__4, string0substr(___nl__1, ___nl__3, ___nl__5));
#line 29
c_rt_lib0clear(&___nl__5);
#line 29
c_rt_lib0move(&___nl__5,___get_global_const(249));
#line 29
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 29
c_rt_lib0clear(&___nl__5);
#line 29
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 29
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 29
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 29
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 29
c_rt_lib0clear(&___nl__5);
#line 29
goto label_4;
#line 29
label_4:
#line 29
c_rt_lib0clear(&___nl__4);
#line 30
c_rt_lib0copy(&___nl__3, ___nl__3);
#line 30
label_6:
#line 30
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__2));
#line 30
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 30
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 31
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 31
c_rt_lib0move(&___nl__6, string0substr(___nl__1, ___nl__3, ___nl__7));
#line 31
c_rt_lib0clear(&___nl__7);
#line 31
c_rt_lib0move(&___nl__5, string0is_digit(___nl__6));
#line 31
c_rt_lib0clear(&___nl__6);
#line 31
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 31
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 31
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 31
c_rt_lib0clear(&___nl__5);
#line 31
goto label_5;
#line 31
goto label_9;
#line 31
label_9:
#line 31
c_rt_lib0clear(&___nl__5);
#line 31
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 31
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 31
c_rt_lib0clear(&___nl__5);
#line 32
goto label_6;
#line 32
label_5:
#line 32
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__4));
#line 33
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 33
c_rt_lib0move(&___nl__4,___get_global_const(139));
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0add(___nl__3, ___nl__4));
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0gt(___nl__4, ___nl__2));
#line 33
label_12:
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 33
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 33
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
c_rt_lib0clear(&___nl__1);
#line 33
c_rt_lib0clear(&___nl__2);
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0clear(&___nl__4);
#line 33
return ___nl__5;
#line 33
c_rt_lib0clear(&___nl__5);
#line 33
goto label_11;
#line 33
label_11:
#line 33
c_rt_lib0clear(&___nl__4);
#line 34
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 34
c_rt_lib0move(&___nl__4, string0substr(___nl__1, ___nl__3, ___nl__5));
#line 34
c_rt_lib0clear(&___nl__5);
#line 34
c_rt_lib0move(&___nl__5,___get_global_const(83));
#line 34
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 34
c_rt_lib0clear(&___nl__5);
#line 34
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 34
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 34
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 34
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0clear(&___nl__3);
#line 34
c_rt_lib0clear(&___nl__4);
#line 34
return ___nl__5;
#line 34
c_rt_lib0clear(&___nl__5);
#line 34
goto label_14;
#line 34
label_14:
#line 34
c_rt_lib0clear(&___nl__4);
#line 35
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 35
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 35
c_rt_lib0clear(&___nl__4);
#line 35
label_16:
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__2));
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 35
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 36
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 36
c_rt_lib0move(&___nl__6, string0substr(___nl__1, ___nl__3, ___nl__7));
#line 36
c_rt_lib0clear(&___nl__7);
#line 36
c_rt_lib0move(&___nl__5, string0is_digit(___nl__6));
#line 36
c_rt_lib0clear(&___nl__6);
#line 36
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 36
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 36
if(c_rt_lib0check_true_native(___nl__5)){ goto label_19;}
#line 36
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0clear(&___nl__5);
#line 36
return ___nl__6;
#line 36
c_rt_lib0clear(&___nl__6);
#line 36
goto label_19;
#line 36
label_19:
#line 36
c_rt_lib0clear(&___nl__5);
#line 36
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 36
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 36
c_rt_lib0clear(&___nl__5);
#line 37
goto label_16;
#line 37
label_15:
#line 37
c_rt_lib0clear(&___nl__4);
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0get_true());
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__3);
#line 38
return ___nl__4;
#line 38
c_rt_lib0clear(&___nl__4);
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__3);
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
return NULL;
}

ImmT string_utils0is_number0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_utils0is_number");
return string_utils0is_number(_tab[0]);}
ImmT string_utils0is_number(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_utils_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 42
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 42
c_rt_lib0move(&___nl__1, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 43
c_rt_lib0move(&___nl__2, string_utils0is_integer(___nl__1));
#line 43
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 43
c_rt_lib0move(&___nl__2, string_utils0is_float(___nl__1));
#line 43
label_1:
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
return ___nl__2;
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void string_utils_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT string_utils_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT string_utils_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
