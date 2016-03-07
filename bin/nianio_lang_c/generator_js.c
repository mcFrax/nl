
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "generator_js.h"
#include "array.h"
#include "nl.h"
#include "string.h"
#include "string_utils.h"
#include "boolean_t.h"
#include "ov.h"
#include "nlasm.h"
#include "ptd.h"
#line 1 "generator_js.nl"

static ImmT *__const__f = NULL;
void generator_js_priv0__const__init();
ImmT generator_js_priv0__const__sim(int __nr);
ImmT generator_js_priv0__const__sing(int __nr);

ImmT generator_js_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_js_priv0escape_mod_fun_name(ImmT ___nl__0);
ImmT generator_js_priv0escape_string(ImmT ___nl__0);
ImmT generator_js_priv0is_singleton_use_function(ImmT ___nl__0);
ImmT generator_js_priv0print_function_or_singleton(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_js_priv0print_function(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_js_priv0print_command(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_js_priv0print_arr(ImmT ___nl__0);
ImmT generator_js_priv0print_bin_op(ImmT ___nl__0);
ImmT generator_js_priv0print_call(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);
ImmT generator_js_priv0print_const_arr(ImmT ___nl__0);
ImmT generator_js_priv0print_const_hash(ImmT ___nl__0);
ImmT generator_js_priv0print_const_ov(ImmT ___nl__0);
ImmT generator_js_priv0print_const_value(ImmT ___nl__0);
ImmT generator_js_priv0print_goto(ImmT ___nl__0);
ImmT generator_js_priv0print_hash(ImmT ___nl__0);
ImmT generator_js_priv0print_ov_mk(ImmT ___nl__0);
ImmT generator_js_priv0print_register(ImmT ___nl__0);
ImmT generator_js_priv0print_register_value(ImmT ___nl__0);
ImmT generator_js_priv0print_register_to_assign(ImmT ___nl__0);
ImmT generator_js_priv0print_return(ImmT ___nl__0);
ImmT generator_js_priv0print_una_op(ImmT ___nl__0);


ImmT generator_js0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "generator_js0generate");
return generator_js0generate(_tab[0]);}
ImmT generator_js0generate(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 16
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 17
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(77)));
#line 17
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 17
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 17
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 17
label_3:
#line 17
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 17
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 17
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(434)));
#line 17
c_rt_lib0move(&___nl__8, generator_js_priv0print_function_or_singleton(___nl__3, ___nl__9));
#line 17
c_rt_lib0clear(&___nl__9);
#line 17
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__8));
#line 17
c_rt_lib0clear(&___nl__8);
#line 17
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 17
goto label_3;
#line 17
label_1:
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0clear(&___nl__5);
#line 17
c_rt_lib0clear(&___nl__6);
#line 17
c_rt_lib0clear(&___nl__7);
#line 18
c_rt_lib0clear(&___nl__0);
#line 18
return ___nl__1;
#line 18
c_rt_lib0clear(&___nl__1);
#line 18
c_rt_lib0clear(&___nl__0);
#line 18
return NULL;
}

ImmT generator_js_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_js_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 22
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(332)));
#line 22
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(333)));
#line 22
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(334)));
#line 24
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 24
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 24
nl_die_arg(___nl__3);
#line 22
label_2:
#line 23
c_rt_lib0move(&___nl__4, generator_js_priv0escape_mod_fun_name(___nl__1));
#line 23
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 23
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 23
c_rt_lib0clear(&___nl__5);
#line 23
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 23
c_rt_lib0move(&___nl__5, generator_js_priv0escape_mod_fun_name(___nl__6));
#line 23
c_rt_lib0clear(&___nl__6);
#line 23
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 23
c_rt_lib0clear(&___nl__5);
#line 23
c_rt_lib0clear(&___nl__0);
#line 23
c_rt_lib0clear(&___nl__1);
#line 23
c_rt_lib0clear(&___nl__2);
#line 23
c_rt_lib0clear(&___nl__3);
#line 23
return ___nl__4;
#line 23
c_rt_lib0clear(&___nl__4);
#line 24
goto label_1;
#line 24
label_3:
#line 25
c_rt_lib0move(&___nl__4, generator_js_priv0escape_mod_fun_name(___nl__1));
#line 25
c_rt_lib0move(&___nl__5,___get_global_const(524));
#line 25
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 25
c_rt_lib0clear(&___nl__5);
#line 25
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 25
c_rt_lib0move(&___nl__5, generator_js_priv0escape_mod_fun_name(___nl__6));
#line 25
c_rt_lib0clear(&___nl__6);
#line 25
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 25
c_rt_lib0clear(&___nl__5);
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
c_rt_lib0clear(&___nl__1);
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
return ___nl__4;
#line 25
c_rt_lib0clear(&___nl__4);
#line 26
goto label_1;
#line 26
label_1:
#line 26
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0clear(&___nl__3);
#line 26
c_rt_lib0clear(&___nl__0);
#line 26
c_rt_lib0clear(&___nl__1);
#line 26
return NULL;
}

ImmT generator_js_priv0escape_mod_fun_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 30
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 30
c_rt_lib0move(&___nl__3,___get_global_const(392));
#line 30
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 30
c_rt_lib0clear(&___nl__3);
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0clear(&___nl__0);
#line 30
return ___nl__1;
#line 30
c_rt_lib0clear(&___nl__1);
#line 30
c_rt_lib0clear(&___nl__0);
#line 30
return NULL;
}

ImmT generator_js_priv0escape_string(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 34
c_rt_lib0move(&___nl__2,___get_global_const(82));
#line 34
c_rt_lib0move(&___nl__3,___get_global_const(186));
#line 34
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 34
c_rt_lib0clear(&___nl__3);
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 34
c_rt_lib0clear(&___nl__1);
#line 35
c_rt_lib0move(&___nl__2,___get_global_const(155));
#line 35
c_rt_lib0move(&___nl__3,___get_global_const(191));
#line 35
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0clear(&___nl__2);
#line 35
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 35
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0move(&___nl__3,___get_global_const(158));
#line 36
c_rt_lib0move(&___nl__2, string0chr(___nl__3));
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0move(&___nl__3, string0lf());
#line 36
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0move(&___nl__3,___get_global_const(445));
#line 36
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0copy(&___nl__0, ___nl__1);
#line 36
c_rt_lib0clear(&___nl__1);
#line 37
c_rt_lib0move(&___nl__2, string0lf());
#line 37
c_rt_lib0move(&___nl__3,___get_global_const(194));
#line 37
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 37
c_rt_lib0clear(&___nl__3);
#line 37
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
return ___nl__1;
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
return NULL;
}

ImmT generator_js_priv0is_singleton_use_function(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(335)));
#line 41
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 41
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__2));
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 41
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 41
c_rt_lib0clear(&___nl__0);
#line 41
c_rt_lib0clear(&___nl__1);
#line 41
return ___nl__2;
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
goto label_2;
#line 41
label_2:
#line 41
c_rt_lib0clear(&___nl__1);
#line 42
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(216)));
#line 42
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(143)));
#line 42
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 42
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 42
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 42
c_rt_lib0clear(&___nl__0);
#line 42
c_rt_lib0clear(&___nl__1);
#line 42
return ___nl__2;
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
goto label_4;
#line 42
label_4:
#line 42
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 45
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(384)));
#line 45
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 45
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 45
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 45
label_7:
#line 45
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 45
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 45
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 46
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(214)));
#line 47
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 47
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(221)));
#line 47
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 47
if(c_rt_lib0check_true_native(___nl__10)){ goto label_9;}
#line 48
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 48
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(221)));
#line 49
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(389)));
#line 49
c_rt_lib0move(&___nl__13,___get_global_const(390));
#line 49
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 49
c_rt_lib0clear(&___nl__13);
#line 49
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 49
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 49
if(c_rt_lib0check_true_native(___nl__12)){ goto label_11;}
#line 49
c_rt_lib0clear(&___nl__9);
#line 49
c_rt_lib0clear(&___nl__10);
#line 49
c_rt_lib0clear(&___nl__11);
#line 49
c_rt_lib0clear(&___nl__12);
#line 49
goto label_6;
#line 49
goto label_11;
#line 49
label_11:
#line 49
c_rt_lib0clear(&___nl__12);
#line 50
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(261)));
#line 50
c_rt_lib0move(&___nl__13,___get_global_const(292));
#line 50
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 50
c_rt_lib0clear(&___nl__13);
#line 50
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 50
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 50
if(c_rt_lib0check_true_native(___nl__12)){ goto label_13;}
#line 50
c_rt_lib0clear(&___nl__9);
#line 50
c_rt_lib0clear(&___nl__10);
#line 50
c_rt_lib0clear(&___nl__11);
#line 50
c_rt_lib0clear(&___nl__12);
#line 50
goto label_6;
#line 50
goto label_13;
#line 50
label_13:
#line 50
c_rt_lib0clear(&___nl__12);
#line 51
c_rt_lib0move(&___nl__12, c_rt_lib0get_true());
#line 51
c_rt_lib0copy(&___nl__1, ___nl__12);
#line 51
c_rt_lib0clear(&___nl__12);
#line 52
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(237)));
#line 52
c_rt_lib0copy(&___nl__2, ___nl__12);
#line 52
c_rt_lib0clear(&___nl__12);
#line 52
c_rt_lib0clear(&___nl__11);
#line 53
goto label_8;
#line 53
label_9:
#line 53
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 53
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(75)));
#line 53
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 53
if(c_rt_lib0check_true_native(___nl__10)){ goto label_14;}
#line 54
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 54
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 54
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 54
if(c_rt_lib0check_true_native(___nl__11)){ goto label_16;}
#line 54
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0clear(&___nl__5);
#line 54
c_rt_lib0clear(&___nl__6);
#line 54
c_rt_lib0clear(&___nl__7);
#line 54
c_rt_lib0clear(&___nl__8);
#line 54
c_rt_lib0clear(&___nl__9);
#line 54
c_rt_lib0clear(&___nl__10);
#line 54
c_rt_lib0clear(&___nl__11);
#line 54
return ___nl__12;
#line 54
c_rt_lib0clear(&___nl__12);
#line 54
goto label_16;
#line 54
label_16:
#line 54
c_rt_lib0clear(&___nl__11);
#line 55
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(75)));
#line 56
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 56
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(238)));
#line 56
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 56
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 56
if(c_rt_lib0check_true_native(___nl__12)){ goto label_18;}
#line 56
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 56
c_rt_lib0clear(&___nl__0);
#line 56
c_rt_lib0clear(&___nl__1);
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
c_rt_lib0clear(&___nl__3);
#line 56
c_rt_lib0clear(&___nl__4);
#line 56
c_rt_lib0clear(&___nl__5);
#line 56
c_rt_lib0clear(&___nl__6);
#line 56
c_rt_lib0clear(&___nl__7);
#line 56
c_rt_lib0clear(&___nl__8);
#line 56
c_rt_lib0clear(&___nl__9);
#line 56
c_rt_lib0clear(&___nl__10);
#line 56
c_rt_lib0clear(&___nl__11);
#line 56
c_rt_lib0clear(&___nl__12);
#line 56
return ___nl__13;
#line 56
c_rt_lib0clear(&___nl__13);
#line 56
goto label_18;
#line 56
label_18:
#line 56
c_rt_lib0clear(&___nl__12);
#line 57
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 57
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(238)));
#line 57
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__2));
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
c_rt_lib0clear(&___nl__1);
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
c_rt_lib0clear(&___nl__3);
#line 57
c_rt_lib0clear(&___nl__4);
#line 57
c_rt_lib0clear(&___nl__5);
#line 57
c_rt_lib0clear(&___nl__6);
#line 57
c_rt_lib0clear(&___nl__7);
#line 57
c_rt_lib0clear(&___nl__8);
#line 57
c_rt_lib0clear(&___nl__9);
#line 57
c_rt_lib0clear(&___nl__10);
#line 57
c_rt_lib0clear(&___nl__11);
#line 57
return ___nl__12;
#line 57
c_rt_lib0clear(&___nl__12);
#line 57
c_rt_lib0clear(&___nl__11);
#line 58
goto label_8;
#line 58
label_14:
#line 58
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 58
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(234)));
#line 58
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 58
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 59
goto label_8;
#line 59
label_19:
#line 59
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 59
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(200)));
#line 59
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 59
if(c_rt_lib0check_true_native(___nl__10)){ goto label_20;}
#line 60
goto label_8;
#line 60
label_20:
#line 61
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 61
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 61
if(c_rt_lib0check_true_native(___nl__11)){ goto label_22;}
#line 61
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 61
c_rt_lib0clear(&___nl__0);
#line 61
c_rt_lib0clear(&___nl__1);
#line 61
c_rt_lib0clear(&___nl__2);
#line 61
c_rt_lib0clear(&___nl__3);
#line 61
c_rt_lib0clear(&___nl__4);
#line 61
c_rt_lib0clear(&___nl__5);
#line 61
c_rt_lib0clear(&___nl__6);
#line 61
c_rt_lib0clear(&___nl__7);
#line 61
c_rt_lib0clear(&___nl__8);
#line 61
c_rt_lib0clear(&___nl__9);
#line 61
c_rt_lib0clear(&___nl__10);
#line 61
c_rt_lib0clear(&___nl__11);
#line 61
return ___nl__12;
#line 61
c_rt_lib0clear(&___nl__12);
#line 61
goto label_22;
#line 61
label_22:
#line 61
c_rt_lib0clear(&___nl__11);
#line 62
goto label_8;
#line 62
label_8:
#line 62
c_rt_lib0clear(&___nl__10);
#line 62
c_rt_lib0clear(&___nl__9);
#line 62
label_6:
#line 63
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 63
goto label_7;
#line 63
label_5:
#line 63
c_rt_lib0clear(&___nl__3);
#line 63
c_rt_lib0clear(&___nl__4);
#line 63
c_rt_lib0clear(&___nl__5);
#line 63
c_rt_lib0clear(&___nl__6);
#line 63
c_rt_lib0clear(&___nl__7);
#line 63
c_rt_lib0clear(&___nl__8);
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
return ___nl__3;
#line 64
c_rt_lib0clear(&___nl__3);
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
return NULL;
}

ImmT generator_js_priv0print_function_or_singleton(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_js_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 68
c_rt_lib0move(&___nl__2, generator_js_priv0is_singleton_use_function(___nl__0));
#line 68
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 68
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 69
c_rt_lib0move(&___nl__3, generator_js_priv0get_function_name(___nl__0, ___nl__1));
#line 70
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 71
c_rt_lib0move(&___nl__5,___get_global_const(525));
#line 71
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 71
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 71
c_rt_lib0clear(&___nl__6);
#line 71
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 71
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(78), ___nl__6);
#line 71
c_rt_lib0clear(&___nl__5);
#line 71
c_rt_lib0clear(&___nl__6);
#line 72
c_rt_lib0move(&___nl__5, generator_js_priv0get_function_name(___nl__4, ___nl__1));
#line 73
c_rt_lib0move(&___nl__6,___get_global_const(447));
#line 73
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 74
c_rt_lib0move(&___nl__7, generator_js_priv0print_function(___nl__4, ___nl__1));
#line 75
c_rt_lib0move(&___nl__8,___get_global_const(526));
#line 75
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__6));
#line 75
c_rt_lib0move(&___nl__9,___get_global_const(527));
#line 75
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 75
c_rt_lib0clear(&___nl__9);
#line 75
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__3));
#line 75
c_rt_lib0move(&___nl__9,___get_global_const(528));
#line 75
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 75
c_rt_lib0clear(&___nl__9);
#line 75
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__6));
#line 75
c_rt_lib0move(&___nl__9,___get_global_const(529));
#line 75
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 75
c_rt_lib0clear(&___nl__9);
#line 75
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__6));
#line 75
c_rt_lib0move(&___nl__9,___get_global_const(452));
#line 75
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 75
c_rt_lib0clear(&___nl__9);
#line 75
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 75
c_rt_lib0move(&___nl__9,___get_global_const(453));
#line 75
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 75
c_rt_lib0clear(&___nl__9);
#line 75
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__6));
#line 75
c_rt_lib0move(&___nl__9,___get_global_const(454));
#line 75
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 75
c_rt_lib0clear(&___nl__9);
#line 75
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 75
c_rt_lib0clear(&___nl__8);
#line 82
c_rt_lib0clear(&___nl__0);
#line 82
c_rt_lib0clear(&___nl__1);
#line 82
c_rt_lib0clear(&___nl__2);
#line 82
c_rt_lib0clear(&___nl__3);
#line 82
c_rt_lib0clear(&___nl__4);
#line 82
c_rt_lib0clear(&___nl__5);
#line 82
c_rt_lib0clear(&___nl__6);
#line 82
return ___nl__7;
#line 82
c_rt_lib0clear(&___nl__3);
#line 82
c_rt_lib0clear(&___nl__4);
#line 82
c_rt_lib0clear(&___nl__5);
#line 82
c_rt_lib0clear(&___nl__6);
#line 82
c_rt_lib0clear(&___nl__7);
#line 83
goto label_1;
#line 83
label_2:
#line 84
c_rt_lib0move(&___nl__3, generator_js_priv0print_function(___nl__0, ___nl__1));
#line 84
c_rt_lib0clear(&___nl__0);
#line 84
c_rt_lib0clear(&___nl__1);
#line 84
c_rt_lib0clear(&___nl__2);
#line 84
return ___nl__3;
#line 84
c_rt_lib0clear(&___nl__3);
#line 85
goto label_1;
#line 85
label_1:
#line 85
c_rt_lib0clear(&___nl__2);
#line 85
c_rt_lib0clear(&___nl__0);
#line 85
c_rt_lib0clear(&___nl__1);
#line 85
return NULL;
}

ImmT generator_js_priv0print_function(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_js_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 89
c_rt_lib0move(&___nl__2, string0lf());
#line 89
c_rt_lib0move(&___nl__3,___get_global_const(530));
#line 89
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 89
c_rt_lib0clear(&___nl__3);
#line 90
c_rt_lib0move(&___nl__3, generator_js_priv0get_function_name(___nl__0, ___nl__1));
#line 90
c_rt_lib0move(&___nl__4,___get_global_const(326));
#line 90
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 90
c_rt_lib0clear(&___nl__4);
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 90
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(335)));
#line 91
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 91
c_rt_lib0clear(&___nl__4);
#line 91
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 91
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 91
label_3:
#line 91
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 91
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 92
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 92
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__4, ___nl__7));
#line 92
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 92
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 92
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 92
c_rt_lib0move(&___nl__8,___get_global_const(193));
#line 92
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__8));
#line 92
c_rt_lib0clear(&___nl__8);
#line 92
goto label_5;
#line 92
label_5:
#line 92
c_rt_lib0clear(&___nl__7);
#line 93
c_rt_lib0move(&___nl__7,___get_global_const(531));
#line 93
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 93
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__7));
#line 93
c_rt_lib0clear(&___nl__7);
#line 94
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 94
goto label_3;
#line 94
label_1:
#line 94
c_rt_lib0clear(&___nl__3);
#line 94
c_rt_lib0clear(&___nl__4);
#line 94
c_rt_lib0clear(&___nl__5);
#line 94
c_rt_lib0clear(&___nl__6);
#line 95
c_rt_lib0move(&___nl__3,___get_global_const(532));
#line 95
c_rt_lib0move(&___nl__4, string0lf());
#line 95
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 95
c_rt_lib0clear(&___nl__4);
#line 95
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 95
c_rt_lib0clear(&___nl__3);
#line 96
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(335)));
#line 96
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 96
c_rt_lib0clear(&___nl__4);
#line 96
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 96
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 96
label_8:
#line 96
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 96
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 97
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(335)));
#line 97
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__4));
#line 97
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(238)));
#line 97
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 99
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(5)));
#line 99
if(c_rt_lib0check_true_native(___nl__8)){ goto label_11;}
#line 99
c_rt_lib0move(&___nl__8,___get_global_const(76));
#line 99
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 99
nl_die_arg(___nl__8);
#line 97
label_10:
#line 98
c_rt_lib0move(&___nl__9,___get_global_const(533));
#line 98
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 98
c_rt_lib0move(&___nl__10,___get_global_const(534));
#line 98
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 98
c_rt_lib0clear(&___nl__10);
#line 98
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 98
c_rt_lib0move(&___nl__10,___get_global_const(535));
#line 98
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 98
c_rt_lib0clear(&___nl__10);
#line 98
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__9));
#line 98
c_rt_lib0clear(&___nl__9);
#line 99
goto label_9;
#line 99
label_11:
#line 100
c_rt_lib0move(&___nl__9,___get_global_const(533));
#line 100
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 100
c_rt_lib0move(&___nl__10,___get_global_const(460));
#line 100
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 100
c_rt_lib0clear(&___nl__10);
#line 100
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 100
c_rt_lib0move(&___nl__10,___get_global_const(315));
#line 100
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 100
c_rt_lib0clear(&___nl__10);
#line 100
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__9));
#line 100
c_rt_lib0clear(&___nl__9);
#line 101
goto label_9;
#line 101
label_9:
#line 101
c_rt_lib0clear(&___nl__7);
#line 101
c_rt_lib0clear(&___nl__8);
#line 102
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 102
goto label_8;
#line 102
label_6:
#line 102
c_rt_lib0clear(&___nl__3);
#line 102
c_rt_lib0clear(&___nl__4);
#line 102
c_rt_lib0clear(&___nl__5);
#line 102
c_rt_lib0clear(&___nl__6);
#line 103
c_rt_lib0move(&___nl__3, string0lf());
#line 103
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 103
c_rt_lib0clear(&___nl__3);
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(335)));
#line 104
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 104
c_rt_lib0clear(&___nl__4);
#line 104
label_13:
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(382)));
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__4));
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 104
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 105
c_rt_lib0move(&___nl__5,___get_global_const(533));
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 105
c_rt_lib0move(&___nl__6,___get_global_const(536));
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
c_rt_lib0move(&___nl__6, string0lf());
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 105
c_rt_lib0clear(&___nl__5);
#line 105
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 105
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 105
c_rt_lib0clear(&___nl__5);
#line 106
goto label_13;
#line 106
label_12:
#line 106
c_rt_lib0clear(&___nl__3);
#line 106
c_rt_lib0clear(&___nl__4);
#line 107
c_rt_lib0move(&___nl__3,___get_global_const(537));
#line 107
c_rt_lib0move(&___nl__4, string0lf());
#line 107
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 107
c_rt_lib0clear(&___nl__4);
#line 107
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 107
c_rt_lib0clear(&___nl__3);
#line 108
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(384)));
#line 108
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 108
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 108
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 108
label_17:
#line 108
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 108
if(c_rt_lib0check_true_native(___nl__8)){ goto label_15;}
#line 108
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 108
c_rt_lib0move(&___nl__9, generator_js_priv0print_command(___nl__1, ___nl__4));
#line 108
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__9));
#line 108
c_rt_lib0clear(&___nl__9);
#line 108
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 108
goto label_17;
#line 108
label_15:
#line 108
c_rt_lib0clear(&___nl__3);
#line 108
c_rt_lib0clear(&___nl__4);
#line 108
c_rt_lib0clear(&___nl__5);
#line 108
c_rt_lib0clear(&___nl__6);
#line 108
c_rt_lib0clear(&___nl__7);
#line 108
c_rt_lib0clear(&___nl__8);
#line 109
c_rt_lib0move(&___nl__3,___get_global_const(464));
#line 109
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__3));
#line 109
c_rt_lib0move(&___nl__4, string0lf());
#line 109
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 109
c_rt_lib0clear(&___nl__4);
#line 109
c_rt_lib0clear(&___nl__0);
#line 109
c_rt_lib0clear(&___nl__1);
#line 109
c_rt_lib0clear(&___nl__2);
#line 109
return ___nl__3;
#line 109
c_rt_lib0clear(&___nl__3);
#line 109
c_rt_lib0clear(&___nl__2);
#line 109
c_rt_lib0clear(&___nl__0);
#line 109
c_rt_lib0clear(&___nl__1);
#line 109
return NULL;
}

ImmT generator_js_priv0print_command(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_js_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 114
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(214)));
#line 114
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(219)));
#line 114
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 116
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(220)));
#line 116
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 118
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(221)));
#line 118
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(72)));
#line 120
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(222)));
#line 123
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 125
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(223)));
#line 125
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 127
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(224)));
#line 127
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 130
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(225)));
#line 130
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 133
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(75)));
#line 133
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 135
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(233)));
#line 135
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 137
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(226)));
#line 137
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 139
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(227)));
#line 139
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 141
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(228)));
#line 141
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 144
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(229)));
#line 144
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 148
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(230)));
#line 148
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 151
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(231)));
#line 151
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 155
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(232)));
#line 155
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 157
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(234)));
#line 157
if(c_rt_lib0check_true_native(___nl__4)){ goto label_19;}
#line 159
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(235)));
#line 159
if(c_rt_lib0check_true_native(___nl__4)){ goto label_20;}
#line 162
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(236)));
#line 162
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 164
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(200)));
#line 164
if(c_rt_lib0check_true_native(___nl__4)){ goto label_22;}
#line 164
c_rt_lib0move(&___nl__4,___get_global_const(76));
#line 164
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 164
nl_die_arg(___nl__4);
#line 114
label_2:
#line 114
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(219)));
#line 115
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 115
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 115
c_rt_lib0clear(&___nl__7);
#line 115
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 115
c_rt_lib0move(&___nl__7, generator_js_priv0print_arr(___nl__8));
#line 115
c_rt_lib0clear(&___nl__8);
#line 115
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 115
c_rt_lib0clear(&___nl__7);
#line 115
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 115
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 115
c_rt_lib0clear(&___nl__7);
#line 115
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 115
c_rt_lib0clear(&___nl__6);
#line 115
c_rt_lib0clear(&___nl__5);
#line 116
goto label_1;
#line 116
label_3:
#line 116
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(220)));
#line 117
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 117
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 117
c_rt_lib0clear(&___nl__7);
#line 117
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 117
c_rt_lib0move(&___nl__7, generator_js_priv0print_hash(___nl__8));
#line 117
c_rt_lib0clear(&___nl__8);
#line 117
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 117
c_rt_lib0clear(&___nl__7);
#line 117
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 117
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 117
c_rt_lib0clear(&___nl__7);
#line 117
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 117
c_rt_lib0clear(&___nl__6);
#line 117
c_rt_lib0clear(&___nl__5);
#line 118
goto label_1;
#line 118
label_4:
#line 118
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(221)));
#line 119
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 119
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 119
c_rt_lib0clear(&___nl__7);
#line 119
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(261)));
#line 119
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(389)));
#line 119
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(74)));
#line 119
c_rt_lib0move(&___nl__7, generator_js_priv0print_call(___nl__0, ___nl__8, ___nl__9, ___nl__10));
#line 119
c_rt_lib0clear(&___nl__10);
#line 119
c_rt_lib0clear(&___nl__9);
#line 119
c_rt_lib0clear(&___nl__8);
#line 119
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 119
c_rt_lib0clear(&___nl__7);
#line 119
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 119
c_rt_lib0clear(&___nl__6);
#line 119
c_rt_lib0clear(&___nl__5);
#line 120
goto label_1;
#line 120
label_5:
#line 120
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(72)));
#line 121
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 121
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 121
c_rt_lib0clear(&___nl__7);
#line 121
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(111)));
#line 121
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(78)));
#line 121
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(111), ___nl__9, ___get_global_const(78), ___nl__10));
#line 121
c_rt_lib0clear(&___nl__9);
#line 121
c_rt_lib0clear(&___nl__10);
#line 121
c_rt_lib0move(&___nl__7, generator_js_priv0print_const_hash(___nl__8));
#line 121
c_rt_lib0clear(&___nl__8);
#line 121
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 121
c_rt_lib0clear(&___nl__7);
#line 121
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 121
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 121
c_rt_lib0clear(&___nl__7);
#line 121
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 121
c_rt_lib0clear(&___nl__6);
#line 121
c_rt_lib0clear(&___nl__5);
#line 123
goto label_1;
#line 123
label_6:
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(222)));
#line 124
c_rt_lib0move(&___nl__6, generator_js_priv0print_una_op(___nl__5));
#line 124
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 124
c_rt_lib0clear(&___nl__6);
#line 124
c_rt_lib0clear(&___nl__5);
#line 125
goto label_1;
#line 125
label_7:
#line 125
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(223)));
#line 126
c_rt_lib0move(&___nl__6, generator_js_priv0print_bin_op(___nl__5));
#line 126
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 126
c_rt_lib0clear(&___nl__6);
#line 126
c_rt_lib0clear(&___nl__5);
#line 127
goto label_1;
#line 127
label_8:
#line 127
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(224)));
#line 128
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 128
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0move(&___nl__7,___get_global_const(538));
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 128
c_rt_lib0move(&___nl__7, generator_js_priv0print_register(___nl__8));
#line 128
c_rt_lib0clear(&___nl__8);
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0move(&___nl__7,___get_global_const(539));
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(73)));
#line 128
c_rt_lib0move(&___nl__7, generator_js_priv0escape_string(___nl__8));
#line 128
c_rt_lib0clear(&___nl__8);
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0move(&___nl__7,___get_global_const(540));
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 128
c_rt_lib0clear(&___nl__6);
#line 128
c_rt_lib0clear(&___nl__5);
#line 130
goto label_1;
#line 130
label_9:
#line 130
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(225)));
#line 131
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 131
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 131
c_rt_lib0clear(&___nl__7);
#line 131
c_rt_lib0move(&___nl__7,___get_global_const(541));
#line 131
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 131
c_rt_lib0clear(&___nl__7);
#line 131
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 131
c_rt_lib0move(&___nl__7, generator_js_priv0print_register(___nl__8));
#line 131
c_rt_lib0clear(&___nl__8);
#line 131
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 131
c_rt_lib0clear(&___nl__7);
#line 131
c_rt_lib0move(&___nl__7,___get_global_const(539));
#line 131
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 131
c_rt_lib0clear(&___nl__7);
#line 131
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(73)));
#line 131
c_rt_lib0move(&___nl__7, generator_js_priv0escape_string(___nl__8));
#line 131
c_rt_lib0clear(&___nl__8);
#line 131
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 131
c_rt_lib0clear(&___nl__7);
#line 131
c_rt_lib0move(&___nl__7,___get_global_const(540));
#line 131
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 131
c_rt_lib0clear(&___nl__7);
#line 131
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 131
c_rt_lib0clear(&___nl__6);
#line 131
c_rt_lib0clear(&___nl__5);
#line 133
goto label_1;
#line 133
label_10:
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(75)));
#line 134
c_rt_lib0move(&___nl__6, generator_js_priv0print_return(___nl__5));
#line 134
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 134
c_rt_lib0clear(&___nl__6);
#line 134
c_rt_lib0clear(&___nl__5);
#line 135
goto label_1;
#line 135
label_11:
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(233)));
#line 136
c_rt_lib0move(&___nl__6,___get_global_const(542));
#line 136
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 136
c_rt_lib0clear(&___nl__6);
#line 136
c_rt_lib0clear(&___nl__5);
#line 137
goto label_1;
#line 137
label_12:
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(226)));
#line 138
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 138
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 138
c_rt_lib0clear(&___nl__7);
#line 138
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 138
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 138
c_rt_lib0clear(&___nl__8);
#line 138
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 138
c_rt_lib0clear(&___nl__7);
#line 138
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 138
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 138
c_rt_lib0clear(&___nl__7);
#line 138
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 138
c_rt_lib0clear(&___nl__6);
#line 138
c_rt_lib0clear(&___nl__5);
#line 139
goto label_1;
#line 139
label_13:
#line 139
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(227)));
#line 140
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 140
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 140
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 140
c_rt_lib0move(&___nl__7, generator_js_priv0print_const_value(___nl__8));
#line 140
c_rt_lib0clear(&___nl__8);
#line 140
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 140
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 140
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 140
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 140
c_rt_lib0clear(&___nl__6);
#line 140
c_rt_lib0clear(&___nl__5);
#line 141
goto label_1;
#line 141
label_14:
#line 141
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(228)));
#line 142
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 142
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 142
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 142
c_rt_lib0clear(&___nl__8);
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0move(&___nl__7,___get_global_const(543));
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(241)));
#line 142
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 142
c_rt_lib0clear(&___nl__8);
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0move(&___nl__7,___get_global_const(544));
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 142
c_rt_lib0clear(&___nl__6);
#line 142
c_rt_lib0clear(&___nl__5);
#line 144
goto label_1;
#line 144
label_15:
#line 144
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(229)));
#line 145
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 145
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 145
c_rt_lib0clear(&___nl__7);
#line 145
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 145
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 145
c_rt_lib0clear(&___nl__8);
#line 145
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 145
c_rt_lib0clear(&___nl__7);
#line 145
c_rt_lib0move(&___nl__7,___get_global_const(545));
#line 145
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 145
c_rt_lib0clear(&___nl__7);
#line 145
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 145
c_rt_lib0clear(&___nl__6);
#line 146
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 146
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_value(___nl__7));
#line 146
c_rt_lib0clear(&___nl__7);
#line 146
c_rt_lib0move(&___nl__7,___get_global_const(543));
#line 146
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 146
c_rt_lib0clear(&___nl__7);
#line 146
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(241)));
#line 146
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 146
c_rt_lib0clear(&___nl__8);
#line 146
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 146
c_rt_lib0clear(&___nl__7);
#line 146
c_rt_lib0move(&___nl__7,___get_global_const(546));
#line 146
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 146
c_rt_lib0clear(&___nl__7);
#line 146
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 146
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 146
c_rt_lib0clear(&___nl__8);
#line 146
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 146
c_rt_lib0clear(&___nl__7);
#line 146
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 146
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 146
c_rt_lib0clear(&___nl__7);
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 146
c_rt_lib0clear(&___nl__6);
#line 146
c_rt_lib0clear(&___nl__5);
#line 148
goto label_1;
#line 148
label_16:
#line 148
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(230)));
#line 149
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 149
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 149
c_rt_lib0clear(&___nl__7);
#line 149
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 149
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 149
c_rt_lib0clear(&___nl__8);
#line 149
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 149
c_rt_lib0clear(&___nl__7);
#line 149
c_rt_lib0move(&___nl__7,___get_global_const(547));
#line 149
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 149
c_rt_lib0clear(&___nl__7);
#line 149
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(283)));
#line 149
c_rt_lib0move(&___nl__7, generator_js_priv0escape_string(___nl__8));
#line 149
c_rt_lib0clear(&___nl__8);
#line 149
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 149
c_rt_lib0clear(&___nl__7);
#line 149
c_rt_lib0move(&___nl__7,___get_global_const(548));
#line 149
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 149
c_rt_lib0clear(&___nl__7);
#line 149
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 149
c_rt_lib0clear(&___nl__6);
#line 149
c_rt_lib0clear(&___nl__5);
#line 151
goto label_1;
#line 151
label_17:
#line 151
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(231)));
#line 152
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 152
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__7));
#line 152
c_rt_lib0clear(&___nl__7);
#line 152
c_rt_lib0move(&___nl__7,___get_global_const(549));
#line 152
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 152
c_rt_lib0clear(&___nl__7);
#line 152
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 152
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 152
c_rt_lib0clear(&___nl__8);
#line 152
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 152
c_rt_lib0clear(&___nl__7);
#line 152
c_rt_lib0move(&___nl__7,___get_global_const(459));
#line 152
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 152
c_rt_lib0clear(&___nl__7);
#line 152
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 152
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 153
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_value(___nl__7));
#line 153
c_rt_lib0clear(&___nl__7);
#line 153
c_rt_lib0move(&___nl__7,___get_global_const(547));
#line 153
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 153
c_rt_lib0clear(&___nl__7);
#line 153
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(283)));
#line 153
c_rt_lib0move(&___nl__7, generator_js_priv0escape_string(___nl__8));
#line 153
c_rt_lib0clear(&___nl__8);
#line 153
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 153
c_rt_lib0clear(&___nl__7);
#line 153
c_rt_lib0move(&___nl__7,___get_global_const(550));
#line 153
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 153
c_rt_lib0clear(&___nl__7);
#line 153
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 153
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__8));
#line 153
c_rt_lib0clear(&___nl__8);
#line 153
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 153
c_rt_lib0clear(&___nl__7);
#line 153
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 153
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 153
c_rt_lib0clear(&___nl__7);
#line 153
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 153
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0clear(&___nl__5);
#line 155
goto label_1;
#line 155
label_18:
#line 155
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(232)));
#line 156
c_rt_lib0move(&___nl__6, generator_js_priv0print_ov_mk(___nl__5));
#line 156
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 156
c_rt_lib0clear(&___nl__6);
#line 156
c_rt_lib0clear(&___nl__5);
#line 157
goto label_1;
#line 157
label_19:
#line 157
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(234)));
#line 158
c_rt_lib0move(&___nl__6,___get_global_const(476));
#line 158
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 158
c_rt_lib0move(&___nl__7,___get_global_const(477));
#line 158
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 158
c_rt_lib0clear(&___nl__7);
#line 158
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 158
c_rt_lib0clear(&___nl__6);
#line 158
c_rt_lib0clear(&___nl__5);
#line 159
goto label_1;
#line 159
label_20:
#line 159
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(235)));
#line 160
c_rt_lib0move(&___nl__6,___get_global_const(551));
#line 160
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(40)));
#line 160
c_rt_lib0move(&___nl__7, generator_js_priv0print_register(___nl__8));
#line 160
c_rt_lib0clear(&___nl__8);
#line 160
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 160
c_rt_lib0clear(&___nl__7);
#line 160
c_rt_lib0move(&___nl__7,___get_global_const(479));
#line 160
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 160
c_rt_lib0clear(&___nl__7);
#line 160
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(237)));
#line 160
c_rt_lib0move(&___nl__7, generator_js_priv0print_goto(___nl__8));
#line 160
c_rt_lib0clear(&___nl__8);
#line 160
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 160
c_rt_lib0clear(&___nl__7);
#line 160
c_rt_lib0move(&___nl__7,___get_global_const(174));
#line 160
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 160
c_rt_lib0clear(&___nl__7);
#line 160
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0clear(&___nl__5);
#line 162
goto label_1;
#line 162
label_21:
#line 162
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(236)));
#line 163
c_rt_lib0move(&___nl__6, generator_js_priv0print_goto(___nl__5));
#line 163
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 163
c_rt_lib0clear(&___nl__6);
#line 163
c_rt_lib0clear(&___nl__5);
#line 164
goto label_1;
#line 164
label_22:
#line 164
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(200)));
#line 165
c_rt_lib0move(&___nl__6, generator_js_priv0print_register_to_assign(___nl__5));
#line 165
c_rt_lib0move(&___nl__7,___get_global_const(480));
#line 165
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 165
c_rt_lib0clear(&___nl__7);
#line 165
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 165
c_rt_lib0clear(&___nl__6);
#line 165
c_rt_lib0clear(&___nl__5);
#line 166
goto label_1;
#line 166
label_1:
#line 166
c_rt_lib0clear(&___nl__3);
#line 166
c_rt_lib0clear(&___nl__4);
#line 167
c_rt_lib0move(&___nl__3,___get_global_const(481));
#line 167
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(217)));
#line 167
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(399)));
#line 167
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(400)));
#line 167
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(113)));
#line 167
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 167
c_rt_lib0clear(&___nl__4);
#line 167
c_rt_lib0move(&___nl__4, string0lf());
#line 167
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 167
c_rt_lib0clear(&___nl__4);
#line 167
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 167
c_rt_lib0move(&___nl__4, string0lf());
#line 167
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 167
c_rt_lib0clear(&___nl__4);
#line 167
c_rt_lib0clear(&___nl__0);
#line 167
c_rt_lib0clear(&___nl__1);
#line 167
c_rt_lib0clear(&___nl__2);
#line 167
return ___nl__3;
#line 167
c_rt_lib0clear(&___nl__3);
#line 167
c_rt_lib0clear(&___nl__2);
#line 167
c_rt_lib0clear(&___nl__0);
#line 167
c_rt_lib0clear(&___nl__1);
#line 167
return NULL;
}

ImmT generator_js_priv0print_arr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 171
c_rt_lib0move(&___nl__1,___get_global_const(179));
#line 172
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 172
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 172
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 172
label_3:
#line 172
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 172
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 172
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 172
c_rt_lib0move(&___nl__7, generator_js_priv0print_register_value(___nl__2));
#line 172
c_rt_lib0move(&___nl__8,___get_global_const(177));
#line 172
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 172
c_rt_lib0clear(&___nl__8);
#line 172
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__7));
#line 172
c_rt_lib0clear(&___nl__7);
#line 172
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 172
goto label_3;
#line 172
label_1:
#line 172
c_rt_lib0clear(&___nl__2);
#line 172
c_rt_lib0clear(&___nl__3);
#line 172
c_rt_lib0clear(&___nl__4);
#line 172
c_rt_lib0clear(&___nl__5);
#line 172
c_rt_lib0clear(&___nl__6);
#line 173
c_rt_lib0move(&___nl__2,___get_global_const(180));
#line 173
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 173
c_rt_lib0clear(&___nl__0);
#line 173
c_rt_lib0clear(&___nl__1);
#line 173
return ___nl__2;
#line 173
c_rt_lib0clear(&___nl__2);
#line 173
c_rt_lib0clear(&___nl__1);
#line 173
c_rt_lib0clear(&___nl__0);
#line 173
return NULL;
}

ImmT generator_js_priv0print_bin_op(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 177
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(237)));
#line 177
c_rt_lib0move(&___nl__1, generator_js_priv0print_register_to_assign(___nl__2));
#line 177
c_rt_lib0clear(&___nl__2);
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 178
c_rt_lib0move(&___nl__3,___get_global_const(272));
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 178
c_rt_lib0clear(&___nl__3);
#line 178
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 178
c_rt_lib0move(&___nl__3,___get_global_const(262));
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 178
c_rt_lib0clear(&___nl__3);
#line 178
label_7:
#line 178
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 178
c_rt_lib0move(&___nl__3,___get_global_const(264));
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 178
c_rt_lib0clear(&___nl__3);
#line 178
label_6:
#line 178
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 178
c_rt_lib0move(&___nl__3,___get_global_const(270));
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 178
c_rt_lib0clear(&___nl__3);
#line 178
label_5:
#line 178
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 178
c_rt_lib0move(&___nl__3,___get_global_const(266));
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 178
c_rt_lib0clear(&___nl__3);
#line 178
label_4:
#line 178
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 178
c_rt_lib0move(&___nl__3,___get_global_const(268));
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 178
c_rt_lib0clear(&___nl__3);
#line 178
label_3:
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 178
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 180
c_rt_lib0move(&___nl__3,___get_global_const(552));
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 180
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 180
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 180
c_rt_lib0clear(&___nl__5);
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0move(&___nl__4,___get_global_const(494));
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0move(&___nl__4,___get_global_const(553));
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 180
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 180
c_rt_lib0clear(&___nl__5);
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0move(&___nl__4,___get_global_const(554));
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0clear(&___nl__0);
#line 180
c_rt_lib0clear(&___nl__1);
#line 180
c_rt_lib0clear(&___nl__2);
#line 180
return ___nl__3;
#line 180
c_rt_lib0clear(&___nl__3);
#line 182
goto label_1;
#line 182
label_2:
#line 182
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 182
c_rt_lib0move(&___nl__3,___get_global_const(253));
#line 182
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 182
c_rt_lib0clear(&___nl__3);
#line 182
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 182
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 182
c_rt_lib0move(&___nl__3,___get_global_const(254));
#line 182
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 182
c_rt_lib0clear(&___nl__3);
#line 182
label_9:
#line 182
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 182
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 183
c_rt_lib0move(&___nl__3,___get_global_const(555));
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 183
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 183
c_rt_lib0clear(&___nl__5);
#line 183
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 183
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0move(&___nl__4,___get_global_const(556));
#line 183
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 183
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 183
c_rt_lib0clear(&___nl__3);
#line 184
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 184
c_rt_lib0move(&___nl__4,___get_global_const(253));
#line 184
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 184
c_rt_lib0clear(&___nl__4);
#line 184
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 184
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 185
c_rt_lib0move(&___nl__4,___get_global_const(557));
#line 185
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__4));
#line 185
c_rt_lib0clear(&___nl__4);
#line 186
goto label_10;
#line 186
label_11:
#line 187
c_rt_lib0move(&___nl__4,___get_global_const(558));
#line 187
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__4));
#line 187
c_rt_lib0clear(&___nl__4);
#line 188
goto label_10;
#line 188
label_10:
#line 188
c_rt_lib0clear(&___nl__3);
#line 189
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 189
c_rt_lib0move(&___nl__3, generator_js_priv0print_register_value(___nl__4));
#line 189
c_rt_lib0clear(&___nl__4);
#line 189
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 189
c_rt_lib0move(&___nl__4,___get_global_const(559));
#line 189
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 189
c_rt_lib0clear(&___nl__4);
#line 189
c_rt_lib0clear(&___nl__0);
#line 189
c_rt_lib0clear(&___nl__1);
#line 189
c_rt_lib0clear(&___nl__2);
#line 189
return ___nl__3;
#line 189
c_rt_lib0clear(&___nl__3);
#line 190
goto label_1;
#line 190
label_8:
#line 190
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 190
c_rt_lib0move(&___nl__3,___get_global_const(83));
#line 190
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 190
c_rt_lib0clear(&___nl__3);
#line 190
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 190
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 191
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 191
c_rt_lib0move(&___nl__3, generator_js_priv0print_register_value(___nl__4));
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 191
c_rt_lib0move(&___nl__4,___get_global_const(490));
#line 191
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 191
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 191
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0move(&___nl__4,___get_global_const(560));
#line 191
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0clear(&___nl__0);
#line 191
c_rt_lib0clear(&___nl__1);
#line 191
c_rt_lib0clear(&___nl__2);
#line 191
return ___nl__3;
#line 191
c_rt_lib0clear(&___nl__3);
#line 193
goto label_1;
#line 193
label_12:
#line 194
c_rt_lib0move(&___nl__3,___get_global_const(561));
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 194
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 194
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 194
c_rt_lib0clear(&___nl__5);
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 194
c_rt_lib0clear(&___nl__4);
#line 194
c_rt_lib0move(&___nl__4,___get_global_const(494));
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 194
c_rt_lib0clear(&___nl__4);
#line 194
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 194
c_rt_lib0clear(&___nl__4);
#line 194
c_rt_lib0move(&___nl__4,___get_global_const(553));
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 194
c_rt_lib0clear(&___nl__4);
#line 194
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 194
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 194
c_rt_lib0clear(&___nl__5);
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 194
c_rt_lib0clear(&___nl__4);
#line 194
c_rt_lib0move(&___nl__4,___get_global_const(459));
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 194
c_rt_lib0clear(&___nl__4);
#line 194
c_rt_lib0clear(&___nl__0);
#line 194
c_rt_lib0clear(&___nl__1);
#line 194
c_rt_lib0clear(&___nl__2);
#line 194
return ___nl__3;
#line 194
c_rt_lib0clear(&___nl__3);
#line 196
goto label_1;
#line 196
label_1:
#line 196
c_rt_lib0clear(&___nl__2);
#line 196
c_rt_lib0clear(&___nl__1);
#line 196
c_rt_lib0clear(&___nl__0);
#line 196
return NULL;
}

ImmT generator_js_priv0print_call(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
generator_js_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
#line 200
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 200
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 200
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 200
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 200
c_rt_lib0move(&___nl__5,___get_global_const(393));
#line 200
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__0, ___nl__5));
#line 200
c_rt_lib0copy(&___nl__1, ___nl__5);
#line 200
c_rt_lib0clear(&___nl__5);
#line 200
goto label_2;
#line 200
label_2:
#line 200
c_rt_lib0clear(&___nl__4);
#line 201
c_rt_lib0move(&___nl__4, generator_js_priv0escape_mod_fun_name(___nl__1));
#line 201
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 201
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 201
c_rt_lib0clear(&___nl__5);
#line 201
c_rt_lib0move(&___nl__5, generator_js_priv0escape_mod_fun_name(___nl__2));
#line 201
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 201
c_rt_lib0clear(&___nl__5);
#line 201
c_rt_lib0move(&___nl__5,___get_global_const(326));
#line 201
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 201
c_rt_lib0clear(&___nl__5);
#line 202
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 203
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 203
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 203
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__3));
#line 203
label_5:
#line 203
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 203
if(c_rt_lib0check_true_native(___nl__10)){ goto label_3;}
#line 203
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 204
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 204
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__5, ___nl__11));
#line 204
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 204
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 204
if(c_rt_lib0check_true_native(___nl__11)){ goto label_7;}
#line 204
c_rt_lib0move(&___nl__12,___get_global_const(177));
#line 204
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__12));
#line 204
c_rt_lib0clear(&___nl__12);
#line 204
goto label_7;
#line 204
label_7:
#line 204
c_rt_lib0clear(&___nl__11);
#line 205
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 205
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__11));
#line 205
c_rt_lib0clear(&___nl__11);
#line 206
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(5)));
#line 206
if(c_rt_lib0check_true_native(___nl__11)){ goto label_9;}
#line 208
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(238)));
#line 208
if(c_rt_lib0check_true_native(___nl__11)){ goto label_10;}
#line 208
c_rt_lib0move(&___nl__11,___get_global_const(76));
#line 208
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__6));
#line 208
nl_die_arg(___nl__11);
#line 206
label_9:
#line 206
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__6, ___get_global_const(5)));
#line 207
c_rt_lib0move(&___nl__13, generator_js_priv0print_register(___nl__12));
#line 207
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__13));
#line 207
c_rt_lib0clear(&___nl__13);
#line 207
c_rt_lib0clear(&___nl__12);
#line 208
goto label_8;
#line 208
label_10:
#line 208
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__6, ___get_global_const(238)));
#line 209
c_rt_lib0move(&___nl__13, generator_js_priv0print_register(___nl__12));
#line 209
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__13));
#line 209
c_rt_lib0clear(&___nl__13);
#line 209
c_rt_lib0clear(&___nl__12);
#line 210
goto label_8;
#line 210
label_8:
#line 210
c_rt_lib0clear(&___nl__11);
#line 211
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 211
goto label_5;
#line 211
label_3:
#line 211
c_rt_lib0clear(&___nl__6);
#line 211
c_rt_lib0clear(&___nl__7);
#line 211
c_rt_lib0clear(&___nl__8);
#line 211
c_rt_lib0clear(&___nl__9);
#line 211
c_rt_lib0clear(&___nl__10);
#line 212
c_rt_lib0move(&___nl__6,___get_global_const(459));
#line 212
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__4, ___nl__6));
#line 212
c_rt_lib0clear(&___nl__0);
#line 212
c_rt_lib0clear(&___nl__1);
#line 212
c_rt_lib0clear(&___nl__2);
#line 212
c_rt_lib0clear(&___nl__3);
#line 212
c_rt_lib0clear(&___nl__4);
#line 212
c_rt_lib0clear(&___nl__5);
#line 212
return ___nl__6;
#line 212
c_rt_lib0clear(&___nl__6);
#line 212
c_rt_lib0clear(&___nl__4);
#line 212
c_rt_lib0clear(&___nl__5);
#line 212
c_rt_lib0clear(&___nl__0);
#line 212
c_rt_lib0clear(&___nl__1);
#line 212
c_rt_lib0clear(&___nl__2);
#line 212
c_rt_lib0clear(&___nl__3);
#line 212
return NULL;
}

ImmT generator_js_priv0print_const_arr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 216
c_rt_lib0move(&___nl__1,___get_global_const(179));
#line 217
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 217
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 217
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 217
label_3:
#line 217
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 217
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 217
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 217
c_rt_lib0move(&___nl__7, generator_js_priv0print_const_value(___nl__2));
#line 217
c_rt_lib0move(&___nl__8,___get_global_const(177));
#line 217
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 217
c_rt_lib0clear(&___nl__8);
#line 217
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__7));
#line 217
c_rt_lib0clear(&___nl__7);
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 217
goto label_3;
#line 217
label_1:
#line 217
c_rt_lib0clear(&___nl__2);
#line 217
c_rt_lib0clear(&___nl__3);
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0clear(&___nl__5);
#line 217
c_rt_lib0clear(&___nl__6);
#line 218
c_rt_lib0move(&___nl__2,___get_global_const(180));
#line 218
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 218
c_rt_lib0clear(&___nl__0);
#line 218
c_rt_lib0clear(&___nl__1);
#line 218
return ___nl__2;
#line 218
c_rt_lib0clear(&___nl__2);
#line 218
c_rt_lib0clear(&___nl__1);
#line 218
c_rt_lib0clear(&___nl__0);
#line 218
return NULL;
}

ImmT generator_js_priv0print_const_hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 222
c_rt_lib0move(&___nl__1,___get_global_const(173));
#line 223
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 223
label_3:
#line 223
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 223
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 223
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 223
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 223
c_rt_lib0move(&___nl__5,___get_global_const(155));
#line 223
c_rt_lib0move(&___nl__6, generator_js_priv0escape_string(___nl__2));
#line 223
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 223
c_rt_lib0clear(&___nl__6);
#line 223
c_rt_lib0move(&___nl__6,___get_global_const(477));
#line 223
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 223
c_rt_lib0clear(&___nl__6);
#line 223
c_rt_lib0move(&___nl__6, generator_js_priv0print_const_value(___nl__3));
#line 223
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 223
c_rt_lib0clear(&___nl__6);
#line 223
c_rt_lib0move(&___nl__6,___get_global_const(177));
#line 223
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 223
c_rt_lib0clear(&___nl__6);
#line 223
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__5));
#line 223
c_rt_lib0clear(&___nl__5);
#line 223
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 223
goto label_3;
#line 223
label_1:
#line 223
c_rt_lib0clear(&___nl__2);
#line 223
c_rt_lib0clear(&___nl__3);
#line 223
c_rt_lib0clear(&___nl__4);
#line 224
c_rt_lib0move(&___nl__2,___get_global_const(174));
#line 224
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 224
c_rt_lib0clear(&___nl__0);
#line 224
c_rt_lib0clear(&___nl__1);
#line 224
return ___nl__2;
#line 224
c_rt_lib0clear(&___nl__2);
#line 224
c_rt_lib0clear(&___nl__1);
#line 224
c_rt_lib0clear(&___nl__0);
#line 224
return NULL;
}

ImmT generator_js_priv0print_const_ov(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 228
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 229
c_rt_lib0move(&___nl__2, ov0has_value(___nl__0));
#line 229
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 229
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 230
c_rt_lib0move(&___nl__3,___get_global_const(504));
#line 230
c_rt_lib0move(&___nl__5, ov0get_element(___nl__0));
#line 230
c_rt_lib0move(&___nl__4, generator_js_priv0escape_string(___nl__5));
#line 230
c_rt_lib0clear(&___nl__5);
#line 230
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 230
c_rt_lib0clear(&___nl__4);
#line 230
c_rt_lib0move(&___nl__4,___get_global_const(505));
#line 230
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 230
c_rt_lib0clear(&___nl__4);
#line 230
c_rt_lib0move(&___nl__5, ov0get_value(___nl__0));
#line 230
c_rt_lib0move(&___nl__4, generator_js_priv0print_const_value(___nl__5));
#line 230
c_rt_lib0clear(&___nl__5);
#line 230
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 230
c_rt_lib0clear(&___nl__4);
#line 230
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 230
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 230
c_rt_lib0clear(&___nl__4);
#line 230
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 230
c_rt_lib0clear(&___nl__3);
#line 232
goto label_1;
#line 232
label_2:
#line 233
c_rt_lib0move(&___nl__3,___get_global_const(504));
#line 233
c_rt_lib0move(&___nl__5, ov0get_element(___nl__0));
#line 233
c_rt_lib0move(&___nl__4, generator_js_priv0escape_string(___nl__5));
#line 233
c_rt_lib0clear(&___nl__5);
#line 233
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 233
c_rt_lib0clear(&___nl__4);
#line 233
c_rt_lib0move(&___nl__4,___get_global_const(506));
#line 233
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 233
c_rt_lib0clear(&___nl__4);
#line 233
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 233
c_rt_lib0clear(&___nl__3);
#line 234
goto label_1;
#line 234
label_1:
#line 234
c_rt_lib0clear(&___nl__2);
#line 235
c_rt_lib0clear(&___nl__0);
#line 235
return ___nl__1;
#line 235
c_rt_lib0clear(&___nl__1);
#line 235
c_rt_lib0clear(&___nl__0);
#line 235
return NULL;
}

ImmT generator_js_priv0print_const_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 239
c_rt_lib0move(&___nl__1, nl0is_sim(___nl__0));
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__1));
#line 239
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 239
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__0, ___nl__4));
#line 239
c_rt_lib0move(&___nl__1, string_utils0is_integer(___nl__4));
#line 239
c_rt_lib0clear(&___nl__4);
#line 239
label_4:
#line 239
c_rt_lib0clear(&___nl__3);
#line 239
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 239
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 239
c_rt_lib0move(&___nl__1,___get_global_const(1));
#line 239
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__0));
#line 239
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__0));
#line 239
label_3:
#line 239
c_rt_lib0clear(&___nl__2);
#line 239
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 239
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 240
c_rt_lib0clear(&___nl__1);
#line 240
return ___nl__0;
#line 241
goto label_1;
#line 241
label_2:
#line 241
c_rt_lib0move(&___nl__1, nl0is_sim(___nl__0));
#line 241
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 241
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 242
c_rt_lib0move(&___nl__2,___get_global_const(155));
#line 242
c_rt_lib0move(&___nl__3, generator_js_priv0escape_string(___nl__0));
#line 242
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 242
c_rt_lib0clear(&___nl__3);
#line 242
c_rt_lib0move(&___nl__3,___get_global_const(155));
#line 242
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 242
c_rt_lib0clear(&___nl__3);
#line 242
c_rt_lib0clear(&___nl__0);
#line 242
c_rt_lib0clear(&___nl__1);
#line 242
return ___nl__2;
#line 242
c_rt_lib0clear(&___nl__2);
#line 243
goto label_1;
#line 243
label_5:
#line 243
c_rt_lib0move(&___nl__1, nl0is_array(___nl__0));
#line 243
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 243
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 244
c_rt_lib0move(&___nl__2, generator_js_priv0print_const_arr(___nl__0));
#line 244
c_rt_lib0clear(&___nl__0);
#line 244
c_rt_lib0clear(&___nl__1);
#line 244
return ___nl__2;
#line 244
c_rt_lib0clear(&___nl__2);
#line 245
goto label_1;
#line 245
label_6:
#line 245
c_rt_lib0move(&___nl__1, nl0is_hash(___nl__0));
#line 245
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 245
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 246
c_rt_lib0move(&___nl__2, generator_js_priv0print_const_hash(___nl__0));
#line 246
c_rt_lib0clear(&___nl__0);
#line 246
c_rt_lib0clear(&___nl__1);
#line 246
return ___nl__2;
#line 246
c_rt_lib0clear(&___nl__2);
#line 247
goto label_1;
#line 247
label_7:
#line 247
c_rt_lib0move(&___nl__1, nl0is_variant(___nl__0));
#line 247
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 247
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 248
c_rt_lib0move(&___nl__2, generator_js_priv0print_const_ov(___nl__0));
#line 248
c_rt_lib0clear(&___nl__0);
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
return ___nl__2;
#line 248
c_rt_lib0clear(&___nl__2);
#line 249
goto label_1;
#line 249
label_8:
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 250
nl_die_arg(___nl__2);
#line 250
c_rt_lib0clear(&___nl__2);
#line 251
goto label_1;
#line 251
label_1:
#line 251
c_rt_lib0clear(&___nl__1);
#line 251
c_rt_lib0clear(&___nl__0);
#line 251
return NULL;
}

ImmT generator_js_priv0print_goto(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 255
c_rt_lib0move(&___nl__1,___get_global_const(562));
#line 255
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 255
c_rt_lib0move(&___nl__2,___get_global_const(563));
#line 255
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 255
c_rt_lib0clear(&___nl__2);
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
return ___nl__1;
#line 255
c_rt_lib0clear(&___nl__1);
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
return NULL;
}

ImmT generator_js_priv0print_hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 259
c_rt_lib0move(&___nl__1,___get_global_const(173));
#line 260
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 260
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 260
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 260
label_3:
#line 260
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 260
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 260
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 260
c_rt_lib0move(&___nl__7,___get_global_const(155));
#line 260
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(283)));
#line 260
c_rt_lib0move(&___nl__8, generator_js_priv0escape_string(___nl__9));
#line 260
c_rt_lib0clear(&___nl__9);
#line 260
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 260
c_rt_lib0clear(&___nl__8);
#line 260
c_rt_lib0move(&___nl__8,___get_global_const(477));
#line 260
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 260
c_rt_lib0clear(&___nl__8);
#line 260
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(238)));
#line 260
c_rt_lib0move(&___nl__8, generator_js_priv0print_register_value(___nl__9));
#line 260
c_rt_lib0clear(&___nl__9);
#line 260
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 260
c_rt_lib0clear(&___nl__8);
#line 260
c_rt_lib0move(&___nl__8,___get_global_const(177));
#line 260
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 260
c_rt_lib0clear(&___nl__8);
#line 260
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__7));
#line 260
c_rt_lib0clear(&___nl__7);
#line 260
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 260
goto label_3;
#line 260
label_1:
#line 260
c_rt_lib0clear(&___nl__2);
#line 260
c_rt_lib0clear(&___nl__3);
#line 260
c_rt_lib0clear(&___nl__4);
#line 260
c_rt_lib0clear(&___nl__5);
#line 260
c_rt_lib0clear(&___nl__6);
#line 261
c_rt_lib0move(&___nl__2,___get_global_const(174));
#line 261
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 261
c_rt_lib0clear(&___nl__0);
#line 261
c_rt_lib0clear(&___nl__1);
#line 261
return ___nl__2;
#line 261
c_rt_lib0clear(&___nl__2);
#line 261
c_rt_lib0clear(&___nl__1);
#line 261
c_rt_lib0clear(&___nl__0);
#line 261
return NULL;
}

ImmT generator_js_priv0print_ov_mk(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 265
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(237)));
#line 265
c_rt_lib0move(&___nl__1, generator_js_priv0print_register_to_assign(___nl__2));
#line 265
c_rt_lib0clear(&___nl__2);
#line 266
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(242)));
#line 266
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 268
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(215)));
#line 268
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 268
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 268
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 268
nl_die_arg(___nl__3);
#line 266
label_2:
#line 266
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(242)));
#line 267
c_rt_lib0move(&___nl__5,___get_global_const(564));
#line 267
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__1, ___nl__5));
#line 267
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 267
c_rt_lib0move(&___nl__6, generator_js_priv0escape_string(___nl__7));
#line 267
c_rt_lib0clear(&___nl__7);
#line 267
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 267
c_rt_lib0clear(&___nl__6);
#line 267
c_rt_lib0move(&___nl__6,___get_global_const(505));
#line 267
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 267
c_rt_lib0clear(&___nl__6);
#line 267
c_rt_lib0move(&___nl__6, generator_js_priv0print_register(___nl__4));
#line 267
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 267
c_rt_lib0clear(&___nl__6);
#line 267
c_rt_lib0move(&___nl__6,___get_global_const(459));
#line 267
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 267
c_rt_lib0clear(&___nl__6);
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
c_rt_lib0clear(&___nl__1);
#line 267
c_rt_lib0clear(&___nl__2);
#line 267
c_rt_lib0clear(&___nl__3);
#line 267
c_rt_lib0clear(&___nl__4);
#line 267
return ___nl__5;
#line 267
c_rt_lib0clear(&___nl__5);
#line 267
c_rt_lib0clear(&___nl__4);
#line 268
goto label_1;
#line 268
label_3:
#line 269
c_rt_lib0move(&___nl__4,___get_global_const(565));
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__1, ___nl__4));
#line 269
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 269
c_rt_lib0move(&___nl__5, generator_js_priv0escape_string(___nl__6));
#line 269
c_rt_lib0clear(&___nl__6);
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 269
c_rt_lib0clear(&___nl__5);
#line 269
c_rt_lib0move(&___nl__5,___get_global_const(566));
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 269
c_rt_lib0clear(&___nl__5);
#line 269
c_rt_lib0clear(&___nl__0);
#line 269
c_rt_lib0clear(&___nl__1);
#line 269
c_rt_lib0clear(&___nl__2);
#line 269
c_rt_lib0clear(&___nl__3);
#line 269
return ___nl__4;
#line 269
c_rt_lib0clear(&___nl__4);
#line 270
goto label_1;
#line 270
label_1:
#line 270
c_rt_lib0clear(&___nl__2);
#line 270
c_rt_lib0clear(&___nl__3);
#line 270
c_rt_lib0clear(&___nl__1);
#line 270
c_rt_lib0clear(&___nl__0);
#line 270
return NULL;
}

ImmT generator_js_priv0print_register(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 274
c_rt_lib0move(&___nl__1,___get_global_const(301));
#line 274
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 274
c_rt_lib0clear(&___nl__0);
#line 274
return ___nl__1;
#line 274
c_rt_lib0clear(&___nl__1);
#line 274
c_rt_lib0clear(&___nl__0);
#line 274
return NULL;
}

ImmT generator_js_priv0print_register_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 278
c_rt_lib0move(&___nl__1, generator_js_priv0print_register(___nl__0));
#line 278
c_rt_lib0move(&___nl__2,___get_global_const(567));
#line 278
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 278
c_rt_lib0clear(&___nl__2);
#line 278
c_rt_lib0clear(&___nl__0);
#line 278
return ___nl__1;
#line 278
c_rt_lib0clear(&___nl__1);
#line 278
c_rt_lib0clear(&___nl__0);
#line 278
return NULL;
}

ImmT generator_js_priv0print_register_to_assign(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 282
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 282
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__0, ___nl__1));
#line 282
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 282
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 282
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 282
c_rt_lib0clear(&___nl__0);
#line 282
c_rt_lib0clear(&___nl__1);
#line 282
return ___nl__2;
#line 282
c_rt_lib0clear(&___nl__2);
#line 282
goto label_2;
#line 282
label_2:
#line 282
c_rt_lib0clear(&___nl__1);
#line 283
c_rt_lib0move(&___nl__1, generator_js_priv0print_register_value(___nl__0));
#line 283
c_rt_lib0move(&___nl__2,___get_global_const(452));
#line 283
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 283
c_rt_lib0clear(&___nl__2);
#line 283
c_rt_lib0clear(&___nl__0);
#line 283
return ___nl__1;
#line 283
c_rt_lib0clear(&___nl__1);
#line 283
c_rt_lib0clear(&___nl__0);
#line 283
return NULL;
}

ImmT generator_js_priv0print_return(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 287
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(238)));
#line 287
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 289
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(215)));
#line 289
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 289
c_rt_lib0move(&___nl__1,___get_global_const(76));
#line 289
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 289
nl_die_arg(___nl__1);
#line 287
label_2:
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(238)));
#line 288
c_rt_lib0move(&___nl__3,___get_global_const(352));
#line 288
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__2));
#line 288
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 288
c_rt_lib0clear(&___nl__4);
#line 288
c_rt_lib0move(&___nl__4,___get_global_const(315));
#line 288
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 288
c_rt_lib0clear(&___nl__4);
#line 288
c_rt_lib0clear(&___nl__0);
#line 288
c_rt_lib0clear(&___nl__1);
#line 288
c_rt_lib0clear(&___nl__2);
#line 288
return ___nl__3;
#line 288
c_rt_lib0clear(&___nl__3);
#line 288
c_rt_lib0clear(&___nl__2);
#line 289
goto label_1;
#line 289
label_3:
#line 290
c_rt_lib0move(&___nl__2,___get_global_const(521));
#line 290
c_rt_lib0clear(&___nl__0);
#line 290
c_rt_lib0clear(&___nl__1);
#line 290
return ___nl__2;
#line 290
c_rt_lib0clear(&___nl__2);
#line 291
goto label_1;
#line 291
label_1:
#line 291
c_rt_lib0clear(&___nl__1);
#line 291
c_rt_lib0clear(&___nl__0);
#line 291
return NULL;
}

ImmT generator_js_priv0print_una_op(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_js_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 295
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(237)));
#line 295
c_rt_lib0move(&___nl__1, generator_js_priv0print_register_to_assign(___nl__2));
#line 295
c_rt_lib0clear(&___nl__2);
#line 296
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 296
c_rt_lib0move(&___nl__3,___get_global_const(247));
#line 296
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 296
c_rt_lib0clear(&___nl__3);
#line 296
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 296
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 297
c_rt_lib0move(&___nl__3,___get_global_const(568));
#line 297
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 297
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 297
c_rt_lib0move(&___nl__4, generator_js_priv0print_register(___nl__5));
#line 297
c_rt_lib0clear(&___nl__5);
#line 297
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 297
c_rt_lib0clear(&___nl__4);
#line 297
c_rt_lib0move(&___nl__4,___get_global_const(554));
#line 297
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 297
c_rt_lib0clear(&___nl__4);
#line 297
c_rt_lib0clear(&___nl__0);
#line 297
c_rt_lib0clear(&___nl__1);
#line 297
c_rt_lib0clear(&___nl__2);
#line 297
return ___nl__3;
#line 297
c_rt_lib0clear(&___nl__3);
#line 298
goto label_1;
#line 298
label_2:
#line 299
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 299
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 299
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 299
c_rt_lib0move(&___nl__4, generator_js_priv0print_register_value(___nl__5));
#line 299
c_rt_lib0clear(&___nl__5);
#line 299
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 299
c_rt_lib0clear(&___nl__4);
#line 299
c_rt_lib0move(&___nl__4,___get_global_const(315));
#line 299
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 299
c_rt_lib0clear(&___nl__4);
#line 299
c_rt_lib0clear(&___nl__0);
#line 299
c_rt_lib0clear(&___nl__1);
#line 299
c_rt_lib0clear(&___nl__2);
#line 299
return ___nl__3;
#line 299
c_rt_lib0clear(&___nl__3);
#line 300
goto label_1;
#line 300
label_1:
#line 300
c_rt_lib0clear(&___nl__2);
#line 300
c_rt_lib0clear(&___nl__1);
#line 300
c_rt_lib0clear(&___nl__0);
#line 300
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void generator_js_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT generator_js_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_js_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
