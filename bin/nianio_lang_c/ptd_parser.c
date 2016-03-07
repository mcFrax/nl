
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "ptd_parser.h"
#include "tct.h"
#include "array.h"
#include "hash.h"
#include "ov.h"
#include "nast.h"
#include "ptd.h"
#line 1 "ptd_parser.nl"

static ImmT *__const__f = NULL;
void ptd_parser_priv0__const__init();
ImmT ptd_parser_priv0__const__sim(int __nr);
ImmT ptd_parser_priv0__const__sing(int __nr);

ImmT ptd_parser_priv0parse_hash(ImmT ___nl__0);


ImmT ptd_parser0fun_def_to_ptd0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd_parser0fun_def_to_ptd");
return ptd_parser0fun_def_to_ptd(_tab[0]);}
ImmT ptd_parser0fun_def_to_ptd(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_parser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 14
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 15
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 15
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__2, ___get_global_const(775)));
#line 15
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 15
c_rt_lib0clear(&___nl__2);
#line 16
c_rt_lib0move(&___nl__2, array0len(___nl__1));
#line 16
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__4));
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 16
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 16
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(214)));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(75)));
#line 16
label_3:
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 16
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 16
c_rt_lib0move(&___nl__3,___get_global_const(1004));
#line 16
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__3));
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
c_rt_lib0clear(&___nl__2);
#line 16
return ___nl__3;
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
goto label_2;
#line 16
label_2:
#line 16
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(214)));
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(75)));
#line 17
c_rt_lib0move(&___nl__2, ptd_parser0try_value_to_ptd(___nl__3));
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return ___nl__2;
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT ptd_parser0try_value_to_ptd0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd_parser0try_value_to_ptd");
return ptd_parser0try_value_to_ptd(_tab[0]);}
ImmT ptd_parser0try_value_to_ptd(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_parser_priv0__const__init();
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
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
#line 21
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(804)));
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 21
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 22
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 22
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__2, ___get_global_const(804)));
#line 23
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(405)));
#line 23
c_rt_lib0move(&___nl__4,___get_global_const(189));
#line 23
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 23
c_rt_lib0clear(&___nl__4);
#line 23
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 23
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 23
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 23
c_rt_lib0move(&___nl__4,___get_global_const(1005));
#line 23
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(405)));
#line 23
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 23
c_rt_lib0clear(&___nl__5);
#line 23
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
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
#line 23
goto label_4;
#line 23
label_4:
#line 23
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(238)));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(805)));
#line 26
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(111)));
#line 26
c_rt_lib0move(&___nl__6,___get_global_const(583));
#line 26
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 26
c_rt_lib0clear(&___nl__6);
#line 26
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 26
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 26
c_rt_lib0clear(&___nl__6);
#line 26
c_rt_lib0move(&___nl__4, tct0ref(___nl__5));
#line 26
c_rt_lib0clear(&___nl__5);
#line 26
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__4));
#line 26
c_rt_lib0clear(&___nl__0);
#line 26
c_rt_lib0clear(&___nl__1);
#line 26
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0clear(&___nl__3);
#line 26
return ___nl__4;
#line 26
c_rt_lib0clear(&___nl__4);
#line 26
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0clear(&___nl__3);
#line 27
goto label_2;
#line 27
label_2:
#line 27
c_rt_lib0clear(&___nl__1);
#line 28
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 28
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(759)));
#line 28
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 28
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 28
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 28
c_rt_lib0move(&___nl__2,___get_global_const(1006));
#line 28
c_rt_lib0move(&___nl__3, ov0get_element(___nl__0));
#line 28
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__2));
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
return ___nl__2;
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
goto label_6;
#line 28
label_6:
#line 28
c_rt_lib0clear(&___nl__1);
#line 29
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 29
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__1, ___get_global_const(759)));
#line 30
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(111)));
#line 30
c_rt_lib0move(&___nl__3,___get_global_const(625));
#line 30
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 30
c_rt_lib0clear(&___nl__3);
#line 30
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 30
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 30
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 30
c_rt_lib0move(&___nl__3,___get_global_const(1007));
#line 30
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(111)));
#line 30
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 30
c_rt_lib0clear(&___nl__4);
#line 30
c_rt_lib0move(&___nl__4,___get_global_const(583));
#line 30
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 30
c_rt_lib0clear(&___nl__4);
#line 30
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(78)));
#line 30
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 30
c_rt_lib0clear(&___nl__4);
#line 30
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__3));
#line 30
c_rt_lib0clear(&___nl__0);
#line 30
c_rt_lib0clear(&___nl__1);
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
return ___nl__3;
#line 30
c_rt_lib0clear(&___nl__3);
#line 30
goto label_8;
#line 30
label_8:
#line 30
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 32
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 32
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(78)));
#line 34
c_rt_lib0move(&___nl__4,___get_global_const(291));
#line 34
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 34
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 34
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 35
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 35
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__2, ___nl__5));
#line 35
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 35
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 35
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 35
c_rt_lib0move(&___nl__6,___get_global_const(1008));
#line 35
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__2));
#line 35
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__6));
#line 35
c_rt_lib0clear(&___nl__0);
#line 35
c_rt_lib0clear(&___nl__1);
#line 35
c_rt_lib0clear(&___nl__2);
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0clear(&___nl__4);
#line 35
c_rt_lib0clear(&___nl__5);
#line 35
return ___nl__6;
#line 35
c_rt_lib0clear(&___nl__6);
#line 35
goto label_12;
#line 35
label_12:
#line 35
c_rt_lib0clear(&___nl__5);
#line 36
c_rt_lib0move(&___nl__5, tct0sim());
#line 36
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__5));
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
return ___nl__5;
#line 36
c_rt_lib0clear(&___nl__5);
#line 37
goto label_16;
#line 37
label_10:
#line 37
c_rt_lib0move(&___nl__4,___get_global_const(971));
#line 37
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 37
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 37
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 38
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 38
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__2, ___nl__5));
#line 38
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 38
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 38
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 38
c_rt_lib0move(&___nl__6,___get_global_const(1009));
#line 38
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__2));
#line 38
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__6));
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__3);
#line 38
c_rt_lib0clear(&___nl__4);
#line 38
c_rt_lib0clear(&___nl__5);
#line 38
return ___nl__6;
#line 38
c_rt_lib0clear(&___nl__6);
#line 38
goto label_15;
#line 38
label_15:
#line 38
c_rt_lib0clear(&___nl__5);
#line 39
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 39
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__5));
#line 39
c_rt_lib0clear(&___nl__0);
#line 39
c_rt_lib0clear(&___nl__1);
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0clear(&___nl__4);
#line 39
return ___nl__5;
#line 39
c_rt_lib0clear(&___nl__5);
#line 40
goto label_16;
#line 40
label_13:
#line 40
c_rt_lib0move(&___nl__4,___get_global_const(724));
#line 40
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 40
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 40
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 41
c_rt_lib0move(&___nl__5,___get_global_const(1010));
#line 41
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
#line 41
c_rt_lib0clear(&___nl__0);
#line 41
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
c_rt_lib0clear(&___nl__3);
#line 41
c_rt_lib0clear(&___nl__4);
#line 41
return ___nl__5;
#line 41
c_rt_lib0clear(&___nl__5);
#line 42
goto label_16;
#line 42
label_16:
#line 42
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0move(&___nl__4,___get_global_const(38));
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 43
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 43
c_rt_lib0move(&___nl__5,___get_global_const(1011));
#line 43
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
return ___nl__5;
#line 43
c_rt_lib0clear(&___nl__5);
#line 43
goto label_18;
#line 43
label_18:
#line 43
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 44
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 44
c_rt_lib0clear(&___nl__5);
#line 44
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 44
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 44
c_rt_lib0clear(&___nl__5);
#line 44
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 44
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 44
if(c_rt_lib0check_true_native(___nl__4)){ goto label_20;}
#line 44
c_rt_lib0move(&___nl__5,___get_global_const(1012));
#line 44
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 44
c_rt_lib0move(&___nl__6,___get_global_const(1013));
#line 44
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 44
c_rt_lib0clear(&___nl__6);
#line 44
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
return ___nl__5;
#line 44
c_rt_lib0clear(&___nl__5);
#line 44
goto label_20;
#line 44
label_20:
#line 44
c_rt_lib0clear(&___nl__4);
#line 45
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 45
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 45
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 45
c_rt_lib0clear(&___nl__5);
#line 45
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 46
c_rt_lib0move(&___nl__5,___get_global_const(1014));
#line 46
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 46
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 46
if(c_rt_lib0check_true_native(___nl__5)){ goto label_22;}
#line 47
c_rt_lib0copy(&___nl__6, ___nl__4);
#line 47
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(220)));
#line 47
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 47
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 47
if(c_rt_lib0check_true_native(___nl__6)){ goto label_24;}
#line 47
c_rt_lib0move(&___nl__7,___get_global_const(1015));
#line 47
c_rt_lib0move(&___nl__8, ov0get_element(___nl__4));
#line 47
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 47
c_rt_lib0clear(&___nl__8);
#line 47
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__7));
#line 47
c_rt_lib0clear(&___nl__0);
#line 47
c_rt_lib0clear(&___nl__1);
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__3);
#line 47
c_rt_lib0clear(&___nl__4);
#line 47
c_rt_lib0clear(&___nl__5);
#line 47
c_rt_lib0clear(&___nl__6);
#line 47
return ___nl__7;
#line 47
c_rt_lib0clear(&___nl__7);
#line 47
goto label_24;
#line 47
label_24:
#line 47
c_rt_lib0clear(&___nl__6);
#line 48
c_rt_lib0move(&___nl__8, ptd_parser_priv0parse_hash(___nl__4));
#line 48
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 48
if(c_rt_lib0check_true_native(___nl__7)){ goto label_25;}
#line 48
c_rt_lib0clear(&___nl__0);
#line 48
c_rt_lib0clear(&___nl__1);
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0clear(&___nl__6);
#line 48
c_rt_lib0clear(&___nl__7);
#line 48
return ___nl__8;
#line 48
label_25:
#line 48
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 48
c_rt_lib0clear(&___nl__7);
#line 48
c_rt_lib0clear(&___nl__8);
#line 49
c_rt_lib0move(&___nl__7, tct0rec(___nl__6));
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__7));
#line 49
c_rt_lib0clear(&___nl__0);
#line 49
c_rt_lib0clear(&___nl__1);
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__3);
#line 49
c_rt_lib0clear(&___nl__4);
#line 49
c_rt_lib0clear(&___nl__5);
#line 49
c_rt_lib0clear(&___nl__6);
#line 49
return ___nl__7;
#line 49
c_rt_lib0clear(&___nl__7);
#line 49
c_rt_lib0clear(&___nl__6);
#line 50
goto label_21;
#line 50
label_22:
#line 50
c_rt_lib0move(&___nl__5,___get_global_const(282));
#line 50
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 50
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 50
if(c_rt_lib0check_true_native(___nl__5)){ goto label_26;}
#line 51
c_rt_lib0move(&___nl__8, ptd_parser0try_value_to_ptd(___nl__4));
#line 51
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 51
if(c_rt_lib0check_true_native(___nl__7)){ goto label_27;}
#line 51
c_rt_lib0clear(&___nl__0);
#line 51
c_rt_lib0clear(&___nl__1);
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__3);
#line 51
c_rt_lib0clear(&___nl__4);
#line 51
c_rt_lib0clear(&___nl__5);
#line 51
c_rt_lib0clear(&___nl__6);
#line 51
c_rt_lib0clear(&___nl__7);
#line 51
return ___nl__8;
#line 51
label_27:
#line 51
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 51
c_rt_lib0clear(&___nl__7);
#line 51
c_rt_lib0clear(&___nl__8);
#line 52
c_rt_lib0move(&___nl__7, tct0hash(___nl__6));
#line 52
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__7));
#line 52
c_rt_lib0clear(&___nl__0);
#line 52
c_rt_lib0clear(&___nl__1);
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__3);
#line 52
c_rt_lib0clear(&___nl__4);
#line 52
c_rt_lib0clear(&___nl__5);
#line 52
c_rt_lib0clear(&___nl__6);
#line 52
return ___nl__7;
#line 52
c_rt_lib0clear(&___nl__7);
#line 52
c_rt_lib0clear(&___nl__6);
#line 53
goto label_21;
#line 53
label_26:
#line 53
c_rt_lib0move(&___nl__5,___get_global_const(281));
#line 53
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 53
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 53
if(c_rt_lib0check_true_native(___nl__5)){ goto label_28;}
#line 54
c_rt_lib0move(&___nl__8, ptd_parser0try_value_to_ptd(___nl__4));
#line 54
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 54
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
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
return ___nl__8;
#line 54
label_29:
#line 54
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 54
c_rt_lib0clear(&___nl__7);
#line 54
c_rt_lib0clear(&___nl__8);
#line 55
c_rt_lib0move(&___nl__7, tct0arr(___nl__6));
#line 55
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__7));
#line 55
c_rt_lib0clear(&___nl__0);
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0clear(&___nl__4);
#line 55
c_rt_lib0clear(&___nl__5);
#line 55
c_rt_lib0clear(&___nl__6);
#line 55
return ___nl__7;
#line 55
c_rt_lib0clear(&___nl__7);
#line 55
c_rt_lib0clear(&___nl__6);
#line 56
goto label_21;
#line 56
label_28:
#line 56
c_rt_lib0move(&___nl__5,___get_global_const(796));
#line 56
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 56
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 56
if(c_rt_lib0check_true_native(___nl__5)){ goto label_30;}
#line 57
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 57
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__2, ___nl__6));
#line 57
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 57
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 57
if(c_rt_lib0check_true_native(___nl__6)){ goto label_32;}
#line 57
c_rt_lib0move(&___nl__7,___get_global_const(1016));
#line 57
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 57
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__7));
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
return ___nl__7;
#line 57
c_rt_lib0clear(&___nl__7);
#line 57
goto label_32;
#line 57
label_32:
#line 57
c_rt_lib0clear(&___nl__6);
#line 58
c_rt_lib0copy(&___nl__6, ___nl__4);
#line 58
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(220)));
#line 58
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 58
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 58
if(c_rt_lib0check_true_native(___nl__6)){ goto label_34;}
#line 58
c_rt_lib0move(&___nl__7,___get_global_const(1017));
#line 58
c_rt_lib0move(&___nl__8, ov0get_element(___nl__4));
#line 58
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 58
c_rt_lib0clear(&___nl__8);
#line 58
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__7));
#line 58
c_rt_lib0clear(&___nl__0);
#line 58
c_rt_lib0clear(&___nl__1);
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__3);
#line 58
c_rt_lib0clear(&___nl__4);
#line 58
c_rt_lib0clear(&___nl__5);
#line 58
c_rt_lib0clear(&___nl__6);
#line 58
return ___nl__7;
#line 58
c_rt_lib0clear(&___nl__7);
#line 58
goto label_34;
#line 58
label_34:
#line 58
c_rt_lib0clear(&___nl__6);
#line 59
c_rt_lib0copy(&___nl__6, ___nl__4);
#line 59
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(220)));
#line 60
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 61
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 61
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 61
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__6));
#line 61
label_37:
#line 61
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 61
if(c_rt_lib0check_true_native(___nl__12)){ goto label_35;}
#line 61
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__6, ___nl__9));
#line 62
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(238)));
#line 62
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(759)));
#line 62
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 62
if(c_rt_lib0check_true_native(___nl__13)){ goto label_39;}
#line 63
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(238)));
#line 63
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(759)));
#line 63
c_rt_lib0copy(&___nl__1, ___nl__14);
#line 63
c_rt_lib0clear(&___nl__14);
#line 64
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(111)));
#line 64
c_rt_lib0move(&___nl__16,___get_global_const(625));
#line 64
c_rt_lib0move(&___nl__14, c_rt_lib0eq(___nl__14, ___nl__16));
#line 64
c_rt_lib0clear(&___nl__16);
#line 64
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__14));
#line 64
if(c_rt_lib0check_true_native(___nl__15)){ goto label_42;}
#line 64
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(78)));
#line 64
c_rt_lib0move(&___nl__16,___get_global_const(38));
#line 64
c_rt_lib0move(&___nl__14, c_rt_lib0eq(___nl__14, ___nl__16));
#line 64
c_rt_lib0clear(&___nl__16);
#line 64
label_42:
#line 64
c_rt_lib0clear(&___nl__15);
#line 64
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 64
if(c_rt_lib0check_true_native(___nl__14)){ goto label_41;}
#line 65
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(283)));
#line 65
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__15, ___get_global_const(802)));
#line 65
c_rt_lib0move(&___nl__16, tct0none());
#line 65
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__15, ___nl__16));
#line 65
c_rt_lib0clear(&___nl__16);
#line 65
c_rt_lib0clear(&___nl__15);
#line 66
c_rt_lib0clear(&___nl__13);
#line 66
c_rt_lib0clear(&___nl__14);
#line 66
goto label_36;
#line 67
goto label_41;
#line 67
label_41:
#line 67
c_rt_lib0clear(&___nl__14);
#line 68
goto label_39;
#line 68
label_39:
#line 68
c_rt_lib0clear(&___nl__13);
#line 69
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(238)));
#line 69
c_rt_lib0move(&___nl__15, ptd_parser0try_value_to_ptd(___nl__16));
#line 69
c_rt_lib0clear(&___nl__16);
#line 69
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__15, ___get_global_const(45)));
#line 69
if(c_rt_lib0check_true_native(___nl__14)){ goto label_43;}
#line 69
c_rt_lib0clear(&___nl__0);
#line 69
c_rt_lib0clear(&___nl__1);
#line 69
c_rt_lib0clear(&___nl__2);
#line 69
c_rt_lib0clear(&___nl__3);
#line 69
c_rt_lib0clear(&___nl__4);
#line 69
c_rt_lib0clear(&___nl__5);
#line 69
c_rt_lib0clear(&___nl__6);
#line 69
c_rt_lib0clear(&___nl__7);
#line 69
c_rt_lib0clear(&___nl__8);
#line 69
c_rt_lib0clear(&___nl__9);
#line 69
c_rt_lib0clear(&___nl__10);
#line 69
c_rt_lib0clear(&___nl__11);
#line 69
c_rt_lib0clear(&___nl__12);
#line 69
c_rt_lib0clear(&___nl__13);
#line 69
c_rt_lib0clear(&___nl__14);
#line 69
return ___nl__15;
#line 69
label_43:
#line 69
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__15, ___get_global_const(45)));
#line 69
c_rt_lib0clear(&___nl__14);
#line 69
c_rt_lib0clear(&___nl__15);
#line 70
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(283)));
#line 70
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(802)));
#line 70
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__14, ___nl__13));
#line 70
c_rt_lib0clear(&___nl__14);
#line 70
c_rt_lib0clear(&___nl__13);
#line 70
label_36:
#line 71
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 71
goto label_37;
#line 71
label_35:
#line 71
c_rt_lib0clear(&___nl__8);
#line 71
c_rt_lib0clear(&___nl__9);
#line 71
c_rt_lib0clear(&___nl__10);
#line 71
c_rt_lib0clear(&___nl__11);
#line 71
c_rt_lib0clear(&___nl__12);
#line 72
c_rt_lib0move(&___nl__8, tct0var(___nl__7));
#line 72
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__8));
#line 72
c_rt_lib0clear(&___nl__0);
#line 72
c_rt_lib0clear(&___nl__1);
#line 72
c_rt_lib0clear(&___nl__2);
#line 72
c_rt_lib0clear(&___nl__3);
#line 72
c_rt_lib0clear(&___nl__4);
#line 72
c_rt_lib0clear(&___nl__5);
#line 72
c_rt_lib0clear(&___nl__6);
#line 72
c_rt_lib0clear(&___nl__7);
#line 72
return ___nl__8;
#line 72
c_rt_lib0clear(&___nl__8);
#line 72
c_rt_lib0clear(&___nl__6);
#line 72
c_rt_lib0clear(&___nl__7);
#line 73
goto label_21;
#line 73
label_30:
#line 74
c_rt_lib0move(&___nl__6,___get_global_const(1018));
#line 74
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__3));
#line 74
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__6));
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
c_rt_lib0clear(&___nl__1);
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0clear(&___nl__4);
#line 74
c_rt_lib0clear(&___nl__5);
#line 74
return ___nl__6;
#line 74
c_rt_lib0clear(&___nl__6);
#line 75
goto label_21;
#line 75
label_21:
#line 75
c_rt_lib0clear(&___nl__5);
#line 75
c_rt_lib0clear(&___nl__1);
#line 75
c_rt_lib0clear(&___nl__2);
#line 75
c_rt_lib0clear(&___nl__3);
#line 75
c_rt_lib0clear(&___nl__4);
#line 75
c_rt_lib0clear(&___nl__0);
#line 75
return NULL;
}

ImmT ptd_parser_priv0parse_hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_parser_priv0__const__init();
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
#line 79
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 79
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__1, ___get_global_const(220)));
#line 80
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 81
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 81
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 81
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 81
label_3:
#line 81
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 81
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 81
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 82
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(238)));
#line 82
c_rt_lib0move(&___nl__10, ptd_parser0try_value_to_ptd(___nl__11));
#line 82
c_rt_lib0clear(&___nl__11);
#line 82
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(45)));
#line 82
if(c_rt_lib0check_true_native(___nl__9)){ goto label_4;}
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
c_rt_lib0clear(&___nl__7);
#line 82
c_rt_lib0clear(&___nl__8);
#line 82
c_rt_lib0clear(&___nl__9);
#line 82
return ___nl__10;
#line 82
label_4:
#line 82
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__10, ___get_global_const(45)));
#line 82
c_rt_lib0clear(&___nl__9);
#line 82
c_rt_lib0clear(&___nl__10);
#line 83
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(283)));
#line 83
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(802)));
#line 83
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__9, ___nl__8));
#line 83
c_rt_lib0clear(&___nl__9);
#line 83
c_rt_lib0clear(&___nl__8);
#line 84
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 84
goto label_3;
#line 84
label_1:
#line 84
c_rt_lib0clear(&___nl__3);
#line 84
c_rt_lib0clear(&___nl__4);
#line 84
c_rt_lib0clear(&___nl__5);
#line 84
c_rt_lib0clear(&___nl__6);
#line 84
c_rt_lib0clear(&___nl__7);
#line 85
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__2));
#line 85
c_rt_lib0clear(&___nl__0);
#line 85
c_rt_lib0clear(&___nl__1);
#line 85
c_rt_lib0clear(&___nl__2);
#line 85
return ___nl__3;
#line 85
c_rt_lib0clear(&___nl__3);
#line 85
c_rt_lib0clear(&___nl__1);
#line 85
c_rt_lib0clear(&___nl__2);
#line 85
c_rt_lib0clear(&___nl__0);
#line 85
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void ptd_parser_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT ptd_parser_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT ptd_parser_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
