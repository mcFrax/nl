
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "ptd_system.h"
#include "ov.h"
#include "hash.h"
#include "ptd.h"
#include "tct.h"
#include "tc_types.h"
#include "boolean_t.h"
#include "string.h"
#include "array.h"
#include "ptd_parser.h"
#line 1 "ptd_system.nl"

static ImmT *__const__f = NULL;
void ptd_system_priv0__const__init();
ImmT ptd_system_priv0__const__sim(int __nr);
ImmT ptd_system_priv0__const__sing(int __nr);

ImmT ptd_system_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1);
ImmT ptd_system_priv0add_ref_name(ImmT * ___ref___0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT ptd_system_priv0is_cycle_ref(ImmT * ___ref___0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT ___nl__3,ImmT ___nl__4,ImmT * ___ref___5,ImmT * ___ref___6);
ImmT ptd_system_priv0cross_type(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT ptd_system_priv0mk_err(ImmT ___nl__0,ImmT ___nl__1);
ImmT ptd_system_priv0check_assignment_info(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT ptd_system_priv0add_delete(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT ptd_system_priv0add_create(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT ptd_system_priv0walk_on_type(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT ptd_system_priv0get_all_ref_in_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT ptd_system_priv0get_ref_in_type(ImmT ___nl__0,ImmT * ___ref___1);
ImmT ptd_system_priv0get_function_def(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);


ImmT ptd_system_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 17
c_rt_lib0move(&___nl__2,___get_global_const(17));
#line 17
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 17
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(734)));
#line 17
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(111)));
#line 17
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 17
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 17
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(97)));
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(5, ___get_global_const(116), ___nl__1, ___get_global_const(113), ___nl__4, ___get_global_const(111), ___nl__5, ___get_global_const(154), ___nl__6, ___get_global_const(73), ___nl__7));
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0clear(&___nl__5);
#line 17
c_rt_lib0clear(&___nl__6);
#line 17
c_rt_lib0clear(&___nl__7);
#line 17
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 17
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return NULL;
}

ImmT ptd_system0is_known0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd_system0is_known");
return ptd_system0is_known(_tab[0]);}
ImmT ptd_system0is_known(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 21
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(1021)));
#line 21
if(c_rt_lib0check_true_native(___nl__1)){ goto label_1;}
#line 21
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(1022)));
#line 21
label_1:
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return ___nl__1;
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return NULL;
}

ImmT ptd_system0is_equal0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd_system0is_equal");
return ptd_system0is_equal(_tab[0], _tab[1]);}
ImmT ptd_system0is_equal(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 25
c_rt_lib0move(&___nl__2, ov0get_element(___nl__0));
#line 25
c_rt_lib0move(&___nl__3, ov0get_element(___nl__1));
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 25
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
c_rt_lib0clear(&___nl__1);
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
return ___nl__3;
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
goto label_2;
#line 25
label_2:
#line 25
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(746)));
#line 26
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 27
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(747)));
#line 27
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(748)));
#line 29
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 31
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(749)));
#line 31
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(750)));
#line 37
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 39
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(752)));
#line 39
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 40
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(753)));
#line 40
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 49
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(754)));
#line 49
if(c_rt_lib0check_true_native(___nl__2)){ goto label_11;}
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(751)));
#line 50
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 50
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 50
nl_die_arg(___nl__2);
#line 26
label_4:
#line 27
goto label_3;
#line 27
label_5:
#line 27
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(747)));
#line 28
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 28
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(747)));
#line 28
c_rt_lib0move(&___nl__4, ptd_system0is_equal(___nl__3, ___nl__5));
#line 28
c_rt_lib0clear(&___nl__5);
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
return ___nl__4;
#line 28
c_rt_lib0clear(&___nl__4);
#line 28
c_rt_lib0clear(&___nl__3);
#line 29
goto label_3;
#line 29
label_6:
#line 29
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(748)));
#line 30
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 30
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(748)));
#line 30
c_rt_lib0move(&___nl__4, ptd_system0is_equal(___nl__3, ___nl__5));
#line 30
c_rt_lib0clear(&___nl__5);
#line 30
c_rt_lib0clear(&___nl__0);
#line 30
c_rt_lib0clear(&___nl__1);
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0clear(&___nl__3);
#line 30
return ___nl__4;
#line 30
c_rt_lib0clear(&___nl__4);
#line 30
c_rt_lib0clear(&___nl__3);
#line 31
goto label_3;
#line 31
label_7:
#line 31
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(749)));
#line 32
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 32
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(749)));
#line 32
c_rt_lib0move(&___nl__4, hash0size(___nl__5));
#line 32
c_rt_lib0clear(&___nl__5);
#line 32
c_rt_lib0move(&___nl__5, hash0size(___nl__3));
#line 32
c_rt_lib0move(&___nl__4, c_rt_lib0num_ne(___nl__4, ___nl__5));
#line 32
c_rt_lib0clear(&___nl__5);
#line 32
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 32
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 32
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0clear(&___nl__4);
#line 32
return ___nl__5;
#line 32
c_rt_lib0clear(&___nl__5);
#line 32
goto label_14;
#line 32
label_14:
#line 32
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 33
label_17:
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 33
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 33
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 34
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(749)));
#line 34
c_rt_lib0move(&___nl__7, hash0has_key(___nl__8, ___nl__4));
#line 34
c_rt_lib0clear(&___nl__8);
#line 34
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 34
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 34
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
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
c_rt_lib0clear(&___nl__5);
#line 34
c_rt_lib0clear(&___nl__6);
#line 34
c_rt_lib0clear(&___nl__7);
#line 34
return ___nl__8;
#line 34
c_rt_lib0clear(&___nl__8);
#line 34
goto label_19;
#line 34
label_19:
#line 34
c_rt_lib0clear(&___nl__7);
#line 35
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 35
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(749)));
#line 35
c_rt_lib0move(&___nl__8, hash0get_value(___nl__9, ___nl__4));
#line 35
c_rt_lib0clear(&___nl__9);
#line 35
c_rt_lib0move(&___nl__7, ptd_system0is_equal(___nl__5, ___nl__8));
#line 35
c_rt_lib0clear(&___nl__8);
#line 35
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 35
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 35
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 35
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
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
c_rt_lib0clear(&___nl__6);
#line 35
c_rt_lib0clear(&___nl__7);
#line 35
return ___nl__8;
#line 35
c_rt_lib0clear(&___nl__8);
#line 35
goto label_21;
#line 35
label_21:
#line 35
c_rt_lib0clear(&___nl__7);
#line 36
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 36
goto label_17;
#line 36
label_15:
#line 36
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0clear(&___nl__5);
#line 36
c_rt_lib0clear(&___nl__6);
#line 36
c_rt_lib0clear(&___nl__3);
#line 37
goto label_3;
#line 37
label_8:
#line 37
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(750)));
#line 38
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(750)));
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 38
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 38
if(c_rt_lib0check_true_native(___nl__4)){ goto label_23;}
#line 38
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
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
return ___nl__5;
#line 38
c_rt_lib0clear(&___nl__5);
#line 38
goto label_23;
#line 38
label_23:
#line 38
c_rt_lib0clear(&___nl__4);
#line 38
c_rt_lib0clear(&___nl__3);
#line 39
goto label_3;
#line 39
label_9:
#line 40
goto label_3;
#line 40
label_10:
#line 40
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(753)));
#line 41
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 41
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(753)));
#line 41
c_rt_lib0move(&___nl__4, hash0size(___nl__5));
#line 41
c_rt_lib0clear(&___nl__5);
#line 41
c_rt_lib0move(&___nl__5, hash0size(___nl__3));
#line 41
c_rt_lib0move(&___nl__4, c_rt_lib0num_ne(___nl__4, ___nl__5));
#line 41
c_rt_lib0clear(&___nl__5);
#line 41
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 41
if(c_rt_lib0check_true_native(___nl__4)){ goto label_25;}
#line 41
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
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
#line 41
goto label_25;
#line 41
label_25:
#line 41
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 42
label_28:
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 42
if(c_rt_lib0check_true_native(___nl__4)){ goto label_26;}
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 43
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 43
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(753)));
#line 43
c_rt_lib0move(&___nl__7, hash0has_key(___nl__8, ___nl__4));
#line 43
c_rt_lib0clear(&___nl__8);
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 43
if(c_rt_lib0check_true_native(___nl__7)){ goto label_30;}
#line 43
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
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
c_rt_lib0clear(&___nl__5);
#line 43
c_rt_lib0clear(&___nl__6);
#line 43
c_rt_lib0clear(&___nl__7);
#line 43
return ___nl__8;
#line 43
c_rt_lib0clear(&___nl__8);
#line 43
goto label_30;
#line 43
label_30:
#line 43
c_rt_lib0clear(&___nl__7);
#line 44
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 44
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(753)));
#line 44
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__4));
#line 44
c_rt_lib0clear(&___nl__8);
#line 45
c_rt_lib0copy(&___nl__8, ___nl__5);
#line 45
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(757)));
#line 45
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 45
if(c_rt_lib0check_true_native(___nl__9)){ goto label_33;}
#line 45
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 45
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(757)));
#line 45
label_33:
#line 45
c_rt_lib0clear(&___nl__9);
#line 45
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 45
if(c_rt_lib0check_true_native(___nl__8)){ goto label_32;}
#line 45
c_rt_lib0clear(&___nl__7);
#line 45
c_rt_lib0clear(&___nl__8);
#line 45
goto label_27;
#line 45
goto label_32;
#line 45
label_32:
#line 45
c_rt_lib0clear(&___nl__8);
#line 46
c_rt_lib0copy(&___nl__8, ___nl__5);
#line 46
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(758)));
#line 46
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 46
if(c_rt_lib0check_true_native(___nl__9)){ goto label_36;}
#line 46
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 46
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(758)));
#line 46
label_36:
#line 46
c_rt_lib0clear(&___nl__9);
#line 46
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 46
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 46
if(c_rt_lib0check_true_native(___nl__8)){ goto label_35;}
#line 46
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 46
c_rt_lib0clear(&___nl__0);
#line 46
c_rt_lib0clear(&___nl__1);
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0clear(&___nl__3);
#line 46
c_rt_lib0clear(&___nl__4);
#line 46
c_rt_lib0clear(&___nl__5);
#line 46
c_rt_lib0clear(&___nl__6);
#line 46
c_rt_lib0clear(&___nl__7);
#line 46
c_rt_lib0clear(&___nl__8);
#line 46
return ___nl__9;
#line 46
c_rt_lib0clear(&___nl__9);
#line 46
goto label_35;
#line 46
label_35:
#line 46
c_rt_lib0clear(&___nl__8);
#line 47
c_rt_lib0copy(&___nl__9, ___nl__7);
#line 47
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(758)));
#line 47
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 47
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(758)));
#line 47
c_rt_lib0move(&___nl__8, ptd_system0is_equal(___nl__9, ___nl__10));
#line 47
c_rt_lib0clear(&___nl__10);
#line 47
c_rt_lib0clear(&___nl__9);
#line 47
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 47
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 47
if(c_rt_lib0check_true_native(___nl__8)){ goto label_38;}
#line 47
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
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
c_rt_lib0clear(&___nl__7);
#line 47
c_rt_lib0clear(&___nl__8);
#line 47
return ___nl__9;
#line 47
c_rt_lib0clear(&___nl__9);
#line 47
goto label_38;
#line 47
label_38:
#line 47
c_rt_lib0clear(&___nl__8);
#line 47
c_rt_lib0clear(&___nl__7);
#line 47
label_27:
#line 48
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 48
goto label_28;
#line 48
label_26:
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0clear(&___nl__6);
#line 48
c_rt_lib0clear(&___nl__3);
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
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 52
c_rt_lib0clear(&___nl__0);
#line 52
c_rt_lib0clear(&___nl__1);
#line 52
return ___nl__2;
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__0);
#line 52
c_rt_lib0clear(&___nl__1);
#line 52
return NULL;
}

ImmT ptd_system0is_try_ensure_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0is_try_ensure_type");
return ptd_system0is_try_ensure_type(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0is_try_ensure_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 57
c_rt_lib0move(&___nl__6, tct0tct_im());
#line 57
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 57
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__6, ___get_global_const(44), ___nl__7));
#line 57
c_rt_lib0clear(&___nl__6);
#line 57
c_rt_lib0clear(&___nl__7);
#line 57
c_rt_lib0move(&___nl__4, tct0var(___nl__5));
#line 57
c_rt_lib0clear(&___nl__5);
#line 57
c_rt_lib0move(&___nl__3, ptd_system0is_accepted(___nl__0, ___nl__4, ___ref___1, ___ref___2));
#line 57
c_rt_lib0clear(&___nl__4);
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
return ___nl__3;
#line 57
c_rt_lib0clear(&___nl__3);
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
return NULL;
}

ImmT ptd_system0try_get_ensure_sub_types0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0try_get_ensure_sub_types");
return ptd_system0try_get_ensure_sub_types(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0try_get_ensure_sub_types(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 62
c_rt_lib0move(&___nl__4, tct0tct_im());
#line 62
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__4, ___get_global_const(44), ___nl__5));
#line 62
c_rt_lib0clear(&___nl__4);
#line 62
c_rt_lib0clear(&___nl__5);
#line 63
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__0, ___ref___1, ___ref___2));
#line 63
c_rt_lib0copy(&___nl__0, ___nl__4);
#line 63
c_rt_lib0clear(&___nl__4);
#line 64
c_rt_lib0move(&___nl__4, ptd_system0is_try_ensure_type(___nl__0, ___ref___1, ___ref___2));
#line 64
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 64
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 65
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 65
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(746)));
#line 65
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 65
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 65
c_rt_lib0clear(&___nl__0);
#line 65
c_rt_lib0clear(&___nl__4);
#line 65
c_rt_lib0clear(&___nl__5);
#line 65
return ___nl__3;
#line 65
goto label_4;
#line 65
label_4:
#line 65
c_rt_lib0clear(&___nl__5);
#line 66
c_rt_lib0move(&___nl__6, tct0empty());
#line 66
c_rt_lib0move(&___nl__7, tct0empty());
#line 66
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__6, ___get_global_const(44), ___nl__7));
#line 66
c_rt_lib0clear(&___nl__6);
#line 66
c_rt_lib0clear(&___nl__7);
#line 66
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 66
c_rt_lib0clear(&___nl__5);
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(753)));
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 67
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 67
c_rt_lib0clear(&___nl__0);
#line 67
c_rt_lib0clear(&___nl__4);
#line 67
c_rt_lib0clear(&___nl__5);
#line 67
return ___nl__3;
#line 67
goto label_6;
#line 67
label_6:
#line 67
c_rt_lib0clear(&___nl__5);
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(753)));
#line 69
c_rt_lib0move(&___nl__7,___get_global_const(45));
#line 69
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__7));
#line 69
c_rt_lib0clear(&___nl__7);
#line 69
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 69
if(c_rt_lib0check_true_native(___nl__6)){ goto label_8;}
#line 70
c_rt_lib0move(&___nl__8,___get_global_const(45));
#line 70
c_rt_lib0move(&___nl__7, hash0get_value(___nl__5, ___nl__8));
#line 70
c_rt_lib0clear(&___nl__8);
#line 71
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(757)));
#line 71
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 72
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(758)));
#line 72
if(c_rt_lib0check_true_native(___nl__8)){ goto label_11;}
#line 72
c_rt_lib0move(&___nl__8,___get_global_const(76));
#line 72
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 72
nl_die_arg(___nl__8);
#line 71
label_10:
#line 72
goto label_9;
#line 72
label_11:
#line 72
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(758)));
#line 73
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 73
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(45), ___nl__10);
#line 73
c_rt_lib0clear(&___nl__10);
#line 73
c_rt_lib0clear(&___nl__9);
#line 74
goto label_9;
#line 74
label_9:
#line 74
c_rt_lib0clear(&___nl__8);
#line 74
c_rt_lib0clear(&___nl__7);
#line 75
goto label_8;
#line 75
label_8:
#line 75
c_rt_lib0clear(&___nl__6);
#line 76
c_rt_lib0move(&___nl__7,___get_global_const(44));
#line 76
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__7));
#line 76
c_rt_lib0clear(&___nl__7);
#line 76
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 76
if(c_rt_lib0check_true_native(___nl__6)){ goto label_13;}
#line 77
c_rt_lib0move(&___nl__8,___get_global_const(44));
#line 77
c_rt_lib0move(&___nl__7, hash0get_value(___nl__5, ___nl__8));
#line 77
c_rt_lib0clear(&___nl__8);
#line 78
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(757)));
#line 78
if(c_rt_lib0check_true_native(___nl__8)){ goto label_15;}
#line 79
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(758)));
#line 79
if(c_rt_lib0check_true_native(___nl__8)){ goto label_16;}
#line 79
c_rt_lib0move(&___nl__8,___get_global_const(76));
#line 79
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 79
nl_die_arg(___nl__8);
#line 78
label_15:
#line 79
goto label_14;
#line 79
label_16:
#line 79
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(758)));
#line 80
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 80
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(44), ___nl__10);
#line 80
c_rt_lib0clear(&___nl__10);
#line 80
c_rt_lib0clear(&___nl__9);
#line 81
goto label_14;
#line 81
label_14:
#line 81
c_rt_lib0clear(&___nl__8);
#line 81
c_rt_lib0clear(&___nl__7);
#line 82
goto label_13;
#line 82
label_13:
#line 82
c_rt_lib0clear(&___nl__6);
#line 82
c_rt_lib0clear(&___nl__5);
#line 83
goto label_1;
#line 83
label_2:
#line 84
c_rt_lib0move(&___nl__5,___get_global_const(1023));
#line 84
c_rt_lib0delete(ptd_system_priv0add_error(___ref___2, ___nl__5));
#line 84
c_rt_lib0clear(&___nl__5);
#line 85
goto label_1;
#line 85
label_1:
#line 85
c_rt_lib0clear(&___nl__4);
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
return ___nl__3;
#line 86
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
return NULL;
}

ImmT ptd_system0is_condition_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0is_condition_type");
return ptd_system0is_condition_type(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0is_condition_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 91
c_rt_lib0move(&___nl__4, tct0bool());
#line 91
c_rt_lib0move(&___nl__3, ptd_system0is_accepted(___nl__0, ___nl__4, ___ref___1, ___ref___2));
#line 91
c_rt_lib0clear(&___nl__4);
#line 91
c_rt_lib0clear(&___nl__0);
#line 91
return ___nl__3;
#line 91
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0clear(&___nl__0);
#line 91
return NULL;
}

ImmT ptd_system0is_accepted0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0is_accepted");
return ptd_system0is_accepted(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0is_accepted(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 96
c_rt_lib0move(&___nl__4, ptd_system0is_accepted_info(___nl__0, ___nl__1, ___ref___2, ___ref___3));
#line 97
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 97
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 97
c_rt_lib0clear(&___nl__0);
#line 97
c_rt_lib0clear(&___nl__1);
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
return ___nl__5;
#line 97
c_rt_lib0clear(&___nl__5);
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
c_rt_lib0clear(&___nl__0);
#line 97
c_rt_lib0clear(&___nl__1);
#line 97
return NULL;
}

ImmT ptd_system0is_accepted_info0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0is_accepted_info");
return ptd_system0is_accepted_info(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0is_accepted_info(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 102
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__0, ___ref___2, ___ref___3));
#line 102
c_rt_lib0copy(&___nl__0, ___nl__4);
#line 102
c_rt_lib0clear(&___nl__4);
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(746)));
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 103
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 103
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 103
c_rt_lib0clear(&___nl__0);
#line 103
c_rt_lib0clear(&___nl__1);
#line 103
c_rt_lib0clear(&___nl__4);
#line 103
return ___nl__5;
#line 103
c_rt_lib0clear(&___nl__5);
#line 103
goto label_2;
#line 103
label_2:
#line 103
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(749)));
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 104
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 105
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 105
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(749)));
#line 105
c_rt_lib0move(&___nl__5, hash0size(___nl__7));
#line 105
c_rt_lib0clear(&___nl__7);
#line 105
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 105
c_rt_lib0clear(&___nl__7);
#line 105
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 105
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(749)));
#line 105
label_7:
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 105
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 105
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 105
c_rt_lib0clear(&___nl__0);
#line 105
c_rt_lib0clear(&___nl__1);
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
c_rt_lib0clear(&___nl__5);
#line 105
return ___nl__6;
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
goto label_6;
#line 105
label_6:
#line 105
c_rt_lib0clear(&___nl__5);
#line 106
goto label_8;
#line 106
label_4:
#line 106
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(753)));
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 106
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 107
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 107
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(753)));
#line 107
c_rt_lib0move(&___nl__5, hash0size(___nl__7));
#line 107
c_rt_lib0clear(&___nl__7);
#line 107
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 107
c_rt_lib0clear(&___nl__7);
#line 107
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 107
if(c_rt_lib0check_true_native(___nl__6)){ goto label_11;}
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(753)));
#line 107
label_11:
#line 107
c_rt_lib0clear(&___nl__6);
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 107
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 107
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 107
c_rt_lib0clear(&___nl__0);
#line 107
c_rt_lib0clear(&___nl__1);
#line 107
c_rt_lib0clear(&___nl__4);
#line 107
c_rt_lib0clear(&___nl__5);
#line 107
return ___nl__6;
#line 107
c_rt_lib0clear(&___nl__6);
#line 107
goto label_10;
#line 107
label_10:
#line 107
c_rt_lib0clear(&___nl__5);
#line 108
goto label_8;
#line 108
label_8:
#line 108
c_rt_lib0clear(&___nl__4);
#line 109
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 109
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 109
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 109
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 109
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 109
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(1024), ___nl__5, ___get_global_const(202), ___nl__6, ___get_global_const(203), ___nl__7, ___get_global_const(1025), ___nl__8, ___get_global_const(1026), ___nl__9));
#line 109
c_rt_lib0clear(&___nl__5);
#line 109
c_rt_lib0clear(&___nl__6);
#line 109
c_rt_lib0clear(&___nl__7);
#line 109
c_rt_lib0clear(&___nl__8);
#line 109
c_rt_lib0clear(&___nl__9);
#line 110
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 110
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 110
c_rt_lib0move(&___nl__5, ptd_system_priv0check_assignment_info(___nl__1, ___nl__6, ___nl__4, ___nl__7, ___ref___2, ___ref___3));
#line 110
c_rt_lib0clear(&___nl__7);
#line 110
c_rt_lib0clear(&___nl__6);
#line 110
c_rt_lib0clear(&___nl__0);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
c_rt_lib0clear(&___nl__4);
#line 110
return ___nl__5;
#line 110
c_rt_lib0clear(&___nl__5);
#line 110
c_rt_lib0clear(&___nl__4);
#line 110
c_rt_lib0clear(&___nl__0);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
return NULL;
}

ImmT ptd_system_priv0add_ref_name(ImmT * ___ref___0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__3);
ptd_system_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 115
c_rt_lib0copy(&___nl__6, *___ref___0);
#line 115
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(750)));
#line 116
c_rt_lib0move(&___nl__7, hash0has_key(*___ref___1, ___nl__6));
#line 116
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 116
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 116
c_rt_lib0move(&___nl__8, hash0get_value(*___ref___1, ___nl__6));
#line 116
c_rt_lib0copy(___ref___2, ___nl__8);
#line 116
c_rt_lib0clear(&___nl__8);
#line 116
goto label_2;
#line 116
label_2:
#line 116
c_rt_lib0clear(&___nl__7);
#line 117
c_rt_lib0delete(array0push(___ref___2, ___nl__3));
#line 118
c_rt_lib0delete(hash0set_value(___ref___1, ___nl__6, *___ref___2));
#line 119
c_rt_lib0move(&___nl__7, ptd_system0get_ref_type(___nl__6, ___ref___4, ___ref___5));
#line 119
c_rt_lib0copy(___ref___0, ___nl__7);
#line 119
c_rt_lib0clear(&___nl__7);
#line 120
c_rt_lib0clear(&___nl__3);
#line 120
return ___nl__6;
#line 120
c_rt_lib0clear(&___nl__6);
#line 120
c_rt_lib0clear(&___nl__3);
#line 120
return NULL;
}

ImmT ptd_system_priv0is_cycle_ref(ImmT * ___ref___0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT ___nl__3,ImmT ___nl__4,ImmT * ___ref___5,ImmT * ___ref___6) {
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
ptd_system_priv0__const__init();
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
#line 126
c_rt_lib0copy(&___nl__7, *___ref___0);
#line 126
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(750)));
#line 126
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 126
if(c_rt_lib0check_true_native(___nl__8)){ goto label_3;}
#line 126
c_rt_lib0copy(&___nl__7, *___ref___1);
#line 126
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(750)));
#line 126
label_3:
#line 126
c_rt_lib0clear(&___nl__8);
#line 126
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 126
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 127
c_rt_lib0copy(&___nl__8, *___ref___0);
#line 127
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(750)));
#line 127
c_rt_lib0copy(&___nl__9, *___ref___1);
#line 127
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(750)));
#line 127
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 127
c_rt_lib0clear(&___nl__9);
#line 127
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 127
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 127
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 127
c_rt_lib0clear(&___nl__3);
#line 127
c_rt_lib0clear(&___nl__4);
#line 127
c_rt_lib0clear(&___nl__7);
#line 127
c_rt_lib0clear(&___nl__8);
#line 127
return ___nl__9;
#line 127
c_rt_lib0clear(&___nl__9);
#line 127
goto label_5;
#line 127
label_5:
#line 127
c_rt_lib0clear(&___nl__8);
#line 128
c_rt_lib0copy(&___nl__8, ___nl__3);
#line 128
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 128
if(c_rt_lib0check_true_native(___nl__9)){ goto label_8;}
#line 128
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(1027)));
#line 128
c_rt_lib0move(&___nl__8, ptd_system_priv0check_assignment_info(*___ref___0, *___ref___1, *___ref___2, ___nl__10, ___ref___5, ___ref___6));
#line 128
c_rt_lib0clear(&___nl__10);
#line 128
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 128
label_8:
#line 128
c_rt_lib0clear(&___nl__9);
#line 128
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 128
if(c_rt_lib0check_true_native(___nl__8)){ goto label_7;}
#line 128
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0clear(&___nl__7);
#line 128
c_rt_lib0clear(&___nl__8);
#line 128
return ___nl__9;
#line 128
c_rt_lib0clear(&___nl__9);
#line 128
goto label_7;
#line 128
label_7:
#line 128
c_rt_lib0clear(&___nl__8);
#line 129
goto label_2;
#line 129
label_2:
#line 129
c_rt_lib0clear(&___nl__7);
#line 130
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 131
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 132
label_10:
#line 132
c_rt_lib0copy(&___nl__9, *___ref___1);
#line 132
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(750)));
#line 132
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 132
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 133
c_rt_lib0move(&___nl__11,___get_global_const(202));
#line 133
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___2, ___nl__11));
#line 133
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1024)));
#line 133
c_rt_lib0move(&___nl__10, ptd_system_priv0add_ref_name(___ref___1, &___nl__11, &___nl__8, ___nl__12, ___ref___5, ___ref___6));
#line 133
c_rt_lib0clear(&___nl__12);
#line 133
c_rt_lib0move(&___nl__12,___get_global_const(202));
#line 133
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__12, ___nl__11));
#line 133
c_rt_lib0clear(&___nl__12);
#line 133
c_rt_lib0clear(&___nl__11);
#line 134
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1025)));
#line 134
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__11));
#line 134
if(c_rt_lib0check_true_native(___nl__13)){ goto label_14;}
#line 134
c_rt_lib0move(&___nl__11, array0len(___nl__8));
#line 134
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 134
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__14));
#line 134
c_rt_lib0clear(&___nl__14);
#line 134
label_14:
#line 134
c_rt_lib0clear(&___nl__13);
#line 134
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__11));
#line 134
if(c_rt_lib0check_true_native(___nl__12)){ goto label_13;}
#line 134
c_rt_lib0copy(&___nl__11, ___nl__4);
#line 134
label_13:
#line 134
c_rt_lib0clear(&___nl__12);
#line 134
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 134
if(c_rt_lib0check_true_native(___nl__11)){ goto label_12;}
#line 134
c_rt_lib0delete(ptd_system_priv0add_delete(___nl__10, ___ref___5, ___ref___6));
#line 134
goto label_12;
#line 134
label_12:
#line 134
c_rt_lib0clear(&___nl__11);
#line 134
c_rt_lib0clear(&___nl__10);
#line 135
goto label_10;
#line 135
label_9:
#line 135
c_rt_lib0clear(&___nl__9);
#line 136
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1026)));
#line 136
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 136
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 137
c_rt_lib0copy(&___nl__10, *___ref___1);
#line 137
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(746)));
#line 137
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 137
if(c_rt_lib0check_true_native(___nl__10)){ goto label_18;}
#line 138
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1025)));
#line 138
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 138
if(c_rt_lib0check_true_native(___nl__11)){ goto label_20;}
#line 138
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(132)));
#line 138
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(203)));
#line 138
c_rt_lib0delete(ptd_system_priv0walk_on_type(*___ref___0, ___nl__12, ___nl__13, ___ref___5, ___ref___6));
#line 138
c_rt_lib0clear(&___nl__13);
#line 138
c_rt_lib0clear(&___nl__12);
#line 138
goto label_20;
#line 138
label_20:
#line 138
c_rt_lib0clear(&___nl__11);
#line 139
c_rt_lib0move(&___nl__11, c_rt_lib0get_true());
#line 139
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
c_rt_lib0clear(&___nl__7);
#line 139
c_rt_lib0clear(&___nl__8);
#line 139
c_rt_lib0clear(&___nl__9);
#line 139
c_rt_lib0clear(&___nl__10);
#line 139
return ___nl__11;
#line 139
c_rt_lib0clear(&___nl__11);
#line 140
goto label_18;
#line 140
label_18:
#line 140
c_rt_lib0clear(&___nl__10);
#line 141
goto label_16;
#line 141
label_16:
#line 141
c_rt_lib0clear(&___nl__9);
#line 142
label_22:
#line 142
c_rt_lib0copy(&___nl__9, *___ref___0);
#line 142
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(750)));
#line 142
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 142
if(c_rt_lib0check_true_native(___nl__9)){ goto label_21;}
#line 143
c_rt_lib0move(&___nl__11,___get_global_const(203));
#line 143
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___2, ___nl__11));
#line 143
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1024)));
#line 143
c_rt_lib0move(&___nl__10, ptd_system_priv0add_ref_name(___ref___0, &___nl__11, &___nl__7, ___nl__12, ___ref___5, ___ref___6));
#line 143
c_rt_lib0clear(&___nl__12);
#line 143
c_rt_lib0move(&___nl__12,___get_global_const(203));
#line 143
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__12, ___nl__11));
#line 143
c_rt_lib0clear(&___nl__12);
#line 143
c_rt_lib0clear(&___nl__11);
#line 144
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1025)));
#line 144
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__11));
#line 144
if(c_rt_lib0check_true_native(___nl__12)){ goto label_25;}
#line 144
c_rt_lib0move(&___nl__11, array0len(___nl__7));
#line 144
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 144
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__13));
#line 144
c_rt_lib0clear(&___nl__13);
#line 144
label_25:
#line 144
c_rt_lib0clear(&___nl__12);
#line 144
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 144
if(c_rt_lib0check_true_native(___nl__11)){ goto label_24;}
#line 144
c_rt_lib0delete(ptd_system_priv0add_create(___nl__10, ___ref___5, ___ref___6));
#line 144
goto label_24;
#line 144
label_24:
#line 144
c_rt_lib0clear(&___nl__11);
#line 144
c_rt_lib0clear(&___nl__10);
#line 145
goto label_22;
#line 145
label_21:
#line 145
c_rt_lib0clear(&___nl__9);
#line 146
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 147
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 147
label_27:
#line 147
c_rt_lib0move(&___nl__11, array0len(___nl__7));
#line 147
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 147
c_rt_lib0move(&___nl__11, c_rt_lib0sub_mod(___nl__11, ___nl__13));
#line 147
c_rt_lib0clear(&___nl__13);
#line 147
c_rt_lib0move(&___nl__11, c_rt_lib0lt(___nl__10, ___nl__11));
#line 147
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__11));
#line 147
if(c_rt_lib0check_true_native(___nl__12)){ goto label_29;}
#line 147
c_rt_lib0move(&___nl__11, array0len(___nl__8));
#line 147
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 147
c_rt_lib0move(&___nl__11, c_rt_lib0gt(___nl__11, ___nl__13));
#line 147
c_rt_lib0clear(&___nl__13);
#line 147
label_29:
#line 147
c_rt_lib0clear(&___nl__12);
#line 147
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 147
if(c_rt_lib0check_true_native(___nl__11)){ goto label_26;}
#line 148
label_31:
#line 148
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 148
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 148
c_rt_lib0move(&___nl__12, c_rt_lib0lt(___nl__12, ___nl__13));
#line 148
c_rt_lib0clear(&___nl__13);
#line 148
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 148
if(c_rt_lib0check_true_native(___nl__12)){ goto label_30;}
#line 149
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__13));
#line 149
c_rt_lib0clear(&___nl__13);
#line 150
goto label_31;
#line 150
label_30:
#line 150
c_rt_lib0clear(&___nl__12);
#line 151
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 151
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 151
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__12, ___nl__13));
#line 151
c_rt_lib0clear(&___nl__13);
#line 151
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 151
if(c_rt_lib0check_true_native(___nl__12)){ goto label_33;}
#line 151
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 151
c_rt_lib0clear(&___nl__3);
#line 151
c_rt_lib0clear(&___nl__4);
#line 151
c_rt_lib0clear(&___nl__7);
#line 151
c_rt_lib0clear(&___nl__8);
#line 151
c_rt_lib0clear(&___nl__9);
#line 151
c_rt_lib0clear(&___nl__10);
#line 151
c_rt_lib0clear(&___nl__11);
#line 151
c_rt_lib0clear(&___nl__12);
#line 151
return ___nl__13;
#line 151
c_rt_lib0clear(&___nl__13);
#line 151
goto label_33;
#line 151
label_33:
#line 151
c_rt_lib0clear(&___nl__12);
#line 151
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 151
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__12));
#line 151
c_rt_lib0clear(&___nl__12);
#line 152
goto label_27;
#line 152
label_26:
#line 152
c_rt_lib0clear(&___nl__10);
#line 152
c_rt_lib0clear(&___nl__11);
#line 153
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 153
c_rt_lib0move(&___nl__11,___get_global_const(1024));
#line 153
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___2, ___nl__11));
#line 153
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__10));
#line 153
c_rt_lib0move(&___nl__12,___get_global_const(1024));
#line 153
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__12, ___nl__11));
#line 153
c_rt_lib0clear(&___nl__12);
#line 153
c_rt_lib0clear(&___nl__10);
#line 153
c_rt_lib0clear(&___nl__11);
#line 154
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 154
c_rt_lib0clear(&___nl__3);
#line 154
c_rt_lib0clear(&___nl__4);
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0clear(&___nl__8);
#line 154
c_rt_lib0clear(&___nl__9);
#line 154
return ___nl__10;
#line 154
c_rt_lib0clear(&___nl__10);
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0clear(&___nl__8);
#line 154
c_rt_lib0clear(&___nl__9);
#line 154
c_rt_lib0clear(&___nl__3);
#line 154
c_rt_lib0clear(&___nl__4);
#line 154
return NULL;
}

ImmT ptd_system0cross_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0cross_type");
return ptd_system0cross_type(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0cross_type(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 159
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 159
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 159
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 159
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 159
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 159
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(1024), ___nl__5, ___get_global_const(202), ___nl__6, ___get_global_const(203), ___nl__7, ___get_global_const(1025), ___nl__8, ___get_global_const(1026), ___nl__9));
#line 159
c_rt_lib0clear(&___nl__5);
#line 159
c_rt_lib0clear(&___nl__6);
#line 159
c_rt_lib0clear(&___nl__7);
#line 159
c_rt_lib0clear(&___nl__8);
#line 159
c_rt_lib0clear(&___nl__9);
#line 160
c_rt_lib0move(&___nl__5, ptd_system_priv0cross_type(___nl__0, ___nl__1, ___nl__4, ___ref___2, ___ref___3));
#line 160
c_rt_lib0clear(&___nl__0);
#line 160
c_rt_lib0clear(&___nl__1);
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
return ___nl__5;
#line 160
c_rt_lib0clear(&___nl__5);
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
c_rt_lib0clear(&___nl__0);
#line 160
c_rt_lib0clear(&___nl__1);
#line 160
return NULL;
}

ImmT ptd_system_priv0cross_type(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ptd_system_priv0__const__init();
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
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
#line 165
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 165
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(746)));
#line 165
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 165
c_rt_lib0copy(&___nl__5, ___nl__0);
#line 165
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(746)));
#line 165
label_3:
#line 165
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 165
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 165
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(746)));
#line 165
c_rt_lib0clear(&___nl__0);
#line 165
c_rt_lib0clear(&___nl__1);
#line 165
c_rt_lib0clear(&___nl__2);
#line 165
c_rt_lib0clear(&___nl__5);
#line 165
return ___nl__6;
#line 165
c_rt_lib0clear(&___nl__6);
#line 165
goto label_2;
#line 165
label_2:
#line 165
c_rt_lib0clear(&___nl__5);
#line 166
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 166
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 166
c_rt_lib0move(&___nl__5, ptd_system_priv0is_cycle_ref(&___nl__0, &___nl__1, &___nl__2, ___nl__6, ___nl__7, ___ref___3, ___ref___4));
#line 166
c_rt_lib0clear(&___nl__7);
#line 166
c_rt_lib0clear(&___nl__6);
#line 166
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 166
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 167
c_rt_lib0clear(&___nl__1);
#line 167
c_rt_lib0clear(&___nl__2);
#line 167
c_rt_lib0clear(&___nl__5);
#line 167
return ___nl__0;
#line 168
goto label_5;
#line 168
label_5:
#line 168
c_rt_lib0clear(&___nl__5);
#line 169
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1024)));
#line 169
c_rt_lib0move(&___nl__6,___get_global_const(1028));
#line 169
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__6));
#line 169
c_rt_lib0clear(&___nl__6);
#line 169
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 169
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 170
c_rt_lib0move(&___nl__6,___get_global_const(1029));
#line 170
c_rt_lib0delete(ptd_system_priv0add_error(___ref___4, ___nl__6));
#line 170
c_rt_lib0clear(&___nl__6);
#line 171
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(746)));
#line 171
c_rt_lib0clear(&___nl__0);
#line 171
c_rt_lib0clear(&___nl__1);
#line 171
c_rt_lib0clear(&___nl__2);
#line 171
c_rt_lib0clear(&___nl__5);
#line 171
return ___nl__6;
#line 171
c_rt_lib0clear(&___nl__6);
#line 172
goto label_7;
#line 172
label_7:
#line 172
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(754)));
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 173
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 173
c_rt_lib0clear(&___nl__1);
#line 173
c_rt_lib0clear(&___nl__2);
#line 173
c_rt_lib0clear(&___nl__5);
#line 173
return ___nl__0;
#line 173
goto label_9;
#line 173
label_9:
#line 173
c_rt_lib0clear(&___nl__5);
#line 174
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(754)));
#line 174
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 176
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(746)));
#line 176
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 178
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(752)));
#line 178
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 180
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(750)));
#line 180
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 182
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(751)));
#line 182
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 184
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(747)));
#line 184
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 188
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(753)));
#line 188
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 226
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(749)));
#line 226
if(c_rt_lib0check_true_native(___nl__5)){ goto label_18;}
#line 253
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(748)));
#line 253
if(c_rt_lib0check_true_native(___nl__5)){ goto label_19;}
#line 253
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 253
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__0));
#line 253
nl_die_arg(___nl__5);
#line 174
label_11:
#line 175
c_rt_lib0clear(&___nl__0);
#line 175
c_rt_lib0clear(&___nl__2);
#line 175
c_rt_lib0clear(&___nl__5);
#line 175
return ___nl__1;
#line 176
goto label_10;
#line 176
label_12:
#line 177
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(746)));
#line 177
c_rt_lib0clear(&___nl__0);
#line 177
c_rt_lib0clear(&___nl__1);
#line 177
c_rt_lib0clear(&___nl__2);
#line 177
c_rt_lib0clear(&___nl__5);
#line 177
return ___nl__6;
#line 177
c_rt_lib0clear(&___nl__6);
#line 178
goto label_10;
#line 178
label_13:
#line 179
c_rt_lib0copy(&___nl__6, ___nl__1);
#line 179
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(752)));
#line 179
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 179
if(c_rt_lib0check_true_native(___nl__6)){ goto label_21;}
#line 179
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(752)));
#line 179
c_rt_lib0clear(&___nl__0);
#line 179
c_rt_lib0clear(&___nl__1);
#line 179
c_rt_lib0clear(&___nl__2);
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0clear(&___nl__6);
#line 179
return ___nl__7;
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
goto label_21;
#line 179
label_21:
#line 179
c_rt_lib0clear(&___nl__6);
#line 180
goto label_10;
#line 180
label_14:
#line 180
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(750)));
#line 181
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 181
nl_die_arg(___nl__7);
#line 181
c_rt_lib0clear(&___nl__7);
#line 181
c_rt_lib0clear(&___nl__6);
#line 182
goto label_10;
#line 182
label_15:
#line 183
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 183
nl_die_arg(___nl__6);
#line 183
c_rt_lib0clear(&___nl__6);
#line 184
goto label_10;
#line 184
label_16:
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(747)));
#line 185
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 185
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(747)));
#line 185
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 185
if(c_rt_lib0check_true_native(___nl__7)){ goto label_23;}
#line 186
c_rt_lib0copy(&___nl__10, ___nl__1);
#line 186
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(747)));
#line 186
c_rt_lib0move(&___nl__9, ptd_system_priv0cross_type(___nl__6, ___nl__10, ___nl__2, ___ref___3, ___ref___4));
#line 186
c_rt_lib0clear(&___nl__10);
#line 186
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 186
c_rt_lib0clear(&___nl__9);
#line 186
c_rt_lib0clear(&___nl__0);
#line 186
c_rt_lib0clear(&___nl__1);
#line 186
c_rt_lib0clear(&___nl__2);
#line 186
c_rt_lib0clear(&___nl__5);
#line 186
c_rt_lib0clear(&___nl__6);
#line 186
c_rt_lib0clear(&___nl__7);
#line 186
return ___nl__8;
#line 186
c_rt_lib0clear(&___nl__8);
#line 187
goto label_23;
#line 187
label_23:
#line 187
c_rt_lib0clear(&___nl__7);
#line 187
c_rt_lib0clear(&___nl__6);
#line 188
goto label_10;
#line 188
label_17:
#line 188
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(753)));
#line 189
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 190
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 190
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(753)));
#line 190
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 190
if(c_rt_lib0check_true_native(___nl__8)){ goto label_25;}
#line 191
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 191
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(753)));
#line 192
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__6));
#line 192
label_28:
#line 192
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 192
if(c_rt_lib0check_true_native(___nl__10)){ goto label_26;}
#line 192
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 192
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__6, ___nl__10));
#line 193
c_rt_lib0move(&___nl__13, hash0has_key(___nl__9, ___nl__10));
#line 193
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 193
if(c_rt_lib0check_true_native(___nl__13)){ goto label_30;}
#line 194
c_rt_lib0move(&___nl__14, hash0get_value(___nl__9, ___nl__10));
#line 195
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(758)));
#line 195
if(c_rt_lib0check_true_native(___nl__15)){ goto label_32;}
#line 201
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(757)));
#line 201
if(c_rt_lib0check_true_native(___nl__15)){ goto label_33;}
#line 201
c_rt_lib0move(&___nl__15,___get_global_const(76));
#line 201
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(2, ___nl__15, ___nl__14));
#line 201
nl_die_arg(___nl__15);
#line 195
label_32:
#line 195
c_rt_lib0move(&___nl__16, c_rt_lib0priv_as(___nl__14, ___get_global_const(758)));
#line 196
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__11, ___get_global_const(758)));
#line 196
if(c_rt_lib0check_true_native(___nl__17)){ goto label_35;}
#line 198
c_rt_lib0move(&___nl__17, c_rt_lib0priv_is(___nl__11, ___get_global_const(757)));
#line 198
if(c_rt_lib0check_true_native(___nl__17)){ goto label_36;}
#line 198
c_rt_lib0move(&___nl__17,___get_global_const(76));
#line 198
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(2, ___nl__17, ___nl__11));
#line 198
nl_die_arg(___nl__17);
#line 196
label_35:
#line 196
c_rt_lib0move(&___nl__18, c_rt_lib0priv_as(___nl__11, ___get_global_const(758)));
#line 197
c_rt_lib0move(&___nl__19, ptd_system_priv0cross_type(___nl__16, ___nl__18, ___nl__2, ___ref___3, ___ref___4));
#line 197
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__19));
#line 197
c_rt_lib0clear(&___nl__19);
#line 197
c_rt_lib0clear(&___nl__18);
#line 198
goto label_34;
#line 198
label_36:
#line 199
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_none(___get_global_const(746)));
#line 199
c_rt_lib0clear(&___nl__0);
#line 199
c_rt_lib0clear(&___nl__1);
#line 199
c_rt_lib0clear(&___nl__2);
#line 199
c_rt_lib0clear(&___nl__5);
#line 199
c_rt_lib0clear(&___nl__6);
#line 199
c_rt_lib0clear(&___nl__7);
#line 199
c_rt_lib0clear(&___nl__8);
#line 199
c_rt_lib0clear(&___nl__9);
#line 199
c_rt_lib0clear(&___nl__10);
#line 199
c_rt_lib0clear(&___nl__11);
#line 199
c_rt_lib0clear(&___nl__12);
#line 199
c_rt_lib0clear(&___nl__13);
#line 199
c_rt_lib0clear(&___nl__14);
#line 199
c_rt_lib0clear(&___nl__15);
#line 199
c_rt_lib0clear(&___nl__16);
#line 199
c_rt_lib0clear(&___nl__17);
#line 199
return ___nl__18;
#line 199
c_rt_lib0clear(&___nl__18);
#line 200
goto label_34;
#line 200
label_34:
#line 200
c_rt_lib0clear(&___nl__17);
#line 200
c_rt_lib0clear(&___nl__16);
#line 201
goto label_31;
#line 201
label_33:
#line 202
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__11, ___get_global_const(758)));
#line 202
if(c_rt_lib0check_true_native(___nl__16)){ goto label_38;}
#line 204
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__11, ___get_global_const(757)));
#line 204
if(c_rt_lib0check_true_native(___nl__16)){ goto label_39;}
#line 204
c_rt_lib0move(&___nl__16,___get_global_const(76));
#line 204
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__11));
#line 204
nl_die_arg(___nl__16);
#line 202
label_38:
#line 202
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__11, ___get_global_const(758)));
#line 203
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_none(___get_global_const(746)));
#line 203
c_rt_lib0clear(&___nl__0);
#line 203
c_rt_lib0clear(&___nl__1);
#line 203
c_rt_lib0clear(&___nl__2);
#line 203
c_rt_lib0clear(&___nl__5);
#line 203
c_rt_lib0clear(&___nl__6);
#line 203
c_rt_lib0clear(&___nl__7);
#line 203
c_rt_lib0clear(&___nl__8);
#line 203
c_rt_lib0clear(&___nl__9);
#line 203
c_rt_lib0clear(&___nl__10);
#line 203
c_rt_lib0clear(&___nl__11);
#line 203
c_rt_lib0clear(&___nl__12);
#line 203
c_rt_lib0clear(&___nl__13);
#line 203
c_rt_lib0clear(&___nl__14);
#line 203
c_rt_lib0clear(&___nl__15);
#line 203
c_rt_lib0clear(&___nl__16);
#line 203
c_rt_lib0clear(&___nl__17);
#line 203
return ___nl__18;
#line 203
c_rt_lib0clear(&___nl__18);
#line 203
c_rt_lib0clear(&___nl__17);
#line 204
goto label_37;
#line 204
label_39:
#line 205
c_rt_lib0move(&___nl__17, tct0none());
#line 205
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__17));
#line 205
c_rt_lib0clear(&___nl__17);
#line 206
goto label_37;
#line 206
label_37:
#line 206
c_rt_lib0clear(&___nl__16);
#line 207
goto label_31;
#line 207
label_31:
#line 207
c_rt_lib0clear(&___nl__15);
#line 207
c_rt_lib0clear(&___nl__14);
#line 208
goto label_29;
#line 208
label_30:
#line 209
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__11, ___get_global_const(758)));
#line 209
if(c_rt_lib0check_true_native(___nl__14)){ goto label_41;}
#line 211
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__11, ___get_global_const(757)));
#line 211
if(c_rt_lib0check_true_native(___nl__14)){ goto label_42;}
#line 211
c_rt_lib0move(&___nl__14,___get_global_const(76));
#line 211
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__11));
#line 211
nl_die_arg(___nl__14);
#line 209
label_41:
#line 209
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__11, ___get_global_const(758)));
#line 210
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__15));
#line 210
c_rt_lib0clear(&___nl__15);
#line 211
goto label_40;
#line 211
label_42:
#line 212
c_rt_lib0move(&___nl__15, tct0none());
#line 212
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__15));
#line 212
c_rt_lib0clear(&___nl__15);
#line 213
goto label_40;
#line 213
label_40:
#line 213
c_rt_lib0clear(&___nl__14);
#line 214
goto label_29;
#line 214
label_29:
#line 214
c_rt_lib0clear(&___nl__13);
#line 215
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 215
goto label_28;
#line 215
label_26:
#line 215
c_rt_lib0clear(&___nl__10);
#line 215
c_rt_lib0clear(&___nl__11);
#line 215
c_rt_lib0clear(&___nl__12);
#line 216
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__9));
#line 216
label_45:
#line 216
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 216
if(c_rt_lib0check_true_native(___nl__10)){ goto label_43;}
#line 216
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 216
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__9, ___nl__10));
#line 217
c_rt_lib0move(&___nl__13, hash0has_key(___nl__7, ___nl__10));
#line 217
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 217
if(c_rt_lib0check_true_native(___nl__13)){ goto label_47;}
#line 217
c_rt_lib0clear(&___nl__13);
#line 217
goto label_44;
#line 217
goto label_47;
#line 217
label_47:
#line 217
c_rt_lib0clear(&___nl__13);
#line 218
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__11, ___get_global_const(758)));
#line 218
if(c_rt_lib0check_true_native(___nl__13)){ goto label_49;}
#line 220
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__11, ___get_global_const(757)));
#line 220
if(c_rt_lib0check_true_native(___nl__13)){ goto label_50;}
#line 220
c_rt_lib0move(&___nl__13,___get_global_const(76));
#line 220
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(2, ___nl__13, ___nl__11));
#line 220
nl_die_arg(___nl__13);
#line 218
label_49:
#line 218
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__11, ___get_global_const(758)));
#line 219
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__14));
#line 219
c_rt_lib0clear(&___nl__14);
#line 220
goto label_48;
#line 220
label_50:
#line 221
c_rt_lib0move(&___nl__14, tct0none());
#line 221
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__14));
#line 221
c_rt_lib0clear(&___nl__14);
#line 222
goto label_48;
#line 222
label_48:
#line 222
c_rt_lib0clear(&___nl__13);
#line 222
label_44:
#line 223
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 223
goto label_45;
#line 223
label_43:
#line 223
c_rt_lib0clear(&___nl__10);
#line 223
c_rt_lib0clear(&___nl__11);
#line 223
c_rt_lib0clear(&___nl__12);
#line 224
c_rt_lib0move(&___nl__10, tct0var(___nl__7));
#line 224
c_rt_lib0clear(&___nl__0);
#line 224
c_rt_lib0clear(&___nl__1);
#line 224
c_rt_lib0clear(&___nl__2);
#line 224
c_rt_lib0clear(&___nl__5);
#line 224
c_rt_lib0clear(&___nl__6);
#line 224
c_rt_lib0clear(&___nl__7);
#line 224
c_rt_lib0clear(&___nl__8);
#line 224
c_rt_lib0clear(&___nl__9);
#line 224
return ___nl__10;
#line 224
c_rt_lib0clear(&___nl__10);
#line 224
c_rt_lib0clear(&___nl__9);
#line 225
goto label_25;
#line 225
label_25:
#line 225
c_rt_lib0clear(&___nl__8);
#line 225
c_rt_lib0clear(&___nl__7);
#line 225
c_rt_lib0clear(&___nl__6);
#line 226
goto label_10;
#line 226
label_18:
#line 226
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(749)));
#line 227
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 227
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(749)));
#line 227
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 227
if(c_rt_lib0check_true_native(___nl__7)){ goto label_52;}
#line 228
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 228
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(749)));
#line 229
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 230
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__6));
#line 230
label_55:
#line 230
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 230
if(c_rt_lib0check_true_native(___nl__10)){ goto label_53;}
#line 230
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 230
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__6, ___nl__10));
#line 231
c_rt_lib0move(&___nl__13, hash0has_key(___nl__8, ___nl__10));
#line 231
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 231
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 231
if(c_rt_lib0check_true_native(___nl__13)){ goto label_57;}
#line 231
c_rt_lib0move(&___nl__14, c_rt_lib0get_true());
#line 231
c_rt_lib0copy(&___nl__9, ___nl__14);
#line 231
c_rt_lib0clear(&___nl__14);
#line 231
goto label_57;
#line 231
label_57:
#line 231
c_rt_lib0clear(&___nl__13);
#line 232
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 232
goto label_55;
#line 232
label_53:
#line 232
c_rt_lib0clear(&___nl__10);
#line 232
c_rt_lib0clear(&___nl__11);
#line 232
c_rt_lib0clear(&___nl__12);
#line 233
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__8));
#line 233
label_60:
#line 233
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 233
if(c_rt_lib0check_true_native(___nl__10)){ goto label_58;}
#line 233
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 233
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__8, ___nl__10));
#line 234
c_rt_lib0move(&___nl__13, hash0has_key(___nl__6, ___nl__10));
#line 234
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 234
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 234
if(c_rt_lib0check_true_native(___nl__13)){ goto label_62;}
#line 234
c_rt_lib0move(&___nl__14, c_rt_lib0get_true());
#line 234
c_rt_lib0copy(&___nl__9, ___nl__14);
#line 234
c_rt_lib0clear(&___nl__14);
#line 234
goto label_62;
#line 234
label_62:
#line 234
c_rt_lib0clear(&___nl__13);
#line 235
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 235
goto label_60;
#line 235
label_58:
#line 235
c_rt_lib0clear(&___nl__10);
#line 235
c_rt_lib0clear(&___nl__11);
#line 235
c_rt_lib0clear(&___nl__12);
#line 236
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 236
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 236
if(c_rt_lib0check_true_native(___nl__10)){ goto label_64;}
#line 237
c_rt_lib0move(&___nl__11, ptd_system0rec_to_hash(___nl__0, ___nl__2, ___ref___3, ___ref___4));
#line 238
c_rt_lib0move(&___nl__12, ptd_system0rec_to_hash(___nl__1, ___nl__2, ___ref___3, ___ref___4));
#line 239
c_rt_lib0move(&___nl__14, ptd_system_priv0cross_type(___nl__11, ___nl__12, ___nl__2, ___ref___3, ___ref___4));
#line 239
c_rt_lib0move(&___nl__13, tct0hash(___nl__14));
#line 239
c_rt_lib0clear(&___nl__14);
#line 239
c_rt_lib0clear(&___nl__0);
#line 239
c_rt_lib0clear(&___nl__1);
#line 239
c_rt_lib0clear(&___nl__2);
#line 239
c_rt_lib0clear(&___nl__5);
#line 239
c_rt_lib0clear(&___nl__6);
#line 239
c_rt_lib0clear(&___nl__7);
#line 239
c_rt_lib0clear(&___nl__8);
#line 239
c_rt_lib0clear(&___nl__9);
#line 239
c_rt_lib0clear(&___nl__10);
#line 239
c_rt_lib0clear(&___nl__11);
#line 239
c_rt_lib0clear(&___nl__12);
#line 239
return ___nl__13;
#line 239
c_rt_lib0clear(&___nl__13);
#line 239
c_rt_lib0clear(&___nl__11);
#line 239
c_rt_lib0clear(&___nl__12);
#line 240
goto label_63;
#line 240
label_64:
#line 241
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 242
c_rt_lib0move(&___nl__14, c_rt_lib0init_iter(___nl__6));
#line 242
label_67:
#line 242
c_rt_lib0move(&___nl__12, c_rt_lib0is_end_hash(___nl__14));
#line 242
if(c_rt_lib0check_true_native(___nl__12)){ goto label_65;}
#line 242
c_rt_lib0move(&___nl__12, c_rt_lib0get_key_iter(___nl__14));
#line 242
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value(___nl__6, ___nl__12));
#line 243
c_rt_lib0move(&___nl__16, hash0get_value(___nl__8, ___nl__12));
#line 243
c_rt_lib0move(&___nl__15, ptd_system_priv0cross_type(___nl__13, ___nl__16, ___nl__2, ___ref___3, ___ref___4));
#line 243
c_rt_lib0clear(&___nl__16);
#line 243
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__15));
#line 243
c_rt_lib0clear(&___nl__15);
#line 245
c_rt_lib0move(&___nl__14, c_rt_lib0next_iter(___nl__14));
#line 245
goto label_67;
#line 245
label_65:
#line 245
c_rt_lib0clear(&___nl__12);
#line 245
c_rt_lib0clear(&___nl__13);
#line 245
c_rt_lib0clear(&___nl__14);
#line 246
c_rt_lib0move(&___nl__12, tct0rec(___nl__11));
#line 246
c_rt_lib0clear(&___nl__0);
#line 246
c_rt_lib0clear(&___nl__1);
#line 246
c_rt_lib0clear(&___nl__2);
#line 246
c_rt_lib0clear(&___nl__5);
#line 246
c_rt_lib0clear(&___nl__6);
#line 246
c_rt_lib0clear(&___nl__7);
#line 246
c_rt_lib0clear(&___nl__8);
#line 246
c_rt_lib0clear(&___nl__9);
#line 246
c_rt_lib0clear(&___nl__10);
#line 246
c_rt_lib0clear(&___nl__11);
#line 246
return ___nl__12;
#line 246
c_rt_lib0clear(&___nl__12);
#line 246
c_rt_lib0clear(&___nl__11);
#line 247
goto label_63;
#line 247
label_63:
#line 247
c_rt_lib0clear(&___nl__10);
#line 247
c_rt_lib0clear(&___nl__8);
#line 247
c_rt_lib0clear(&___nl__9);
#line 248
goto label_52;
#line 248
label_52:
#line 248
c_rt_lib0clear(&___nl__7);
#line 249
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(748)));
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 249
if(c_rt_lib0check_true_native(___nl__7)){ goto label_69;}
#line 250
c_rt_lib0move(&___nl__8, ptd_system0rec_to_hash(___nl__0, ___nl__2, ___ref___3, ___ref___4));
#line 251
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 251
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(748)));
#line 251
c_rt_lib0move(&___nl__10, ptd_system0cross_type(___nl__11, ___nl__8, ___ref___3, ___ref___4));
#line 251
c_rt_lib0clear(&___nl__11);
#line 251
c_rt_lib0move(&___nl__9, tct0hash(___nl__10));
#line 251
c_rt_lib0clear(&___nl__10);
#line 251
c_rt_lib0clear(&___nl__0);
#line 251
c_rt_lib0clear(&___nl__1);
#line 251
c_rt_lib0clear(&___nl__2);
#line 251
c_rt_lib0clear(&___nl__5);
#line 251
c_rt_lib0clear(&___nl__6);
#line 251
c_rt_lib0clear(&___nl__7);
#line 251
c_rt_lib0clear(&___nl__8);
#line 251
return ___nl__9;
#line 251
c_rt_lib0clear(&___nl__9);
#line 251
c_rt_lib0clear(&___nl__8);
#line 252
goto label_69;
#line 252
label_69:
#line 252
c_rt_lib0clear(&___nl__7);
#line 252
c_rt_lib0clear(&___nl__6);
#line 253
goto label_10;
#line 253
label_19:
#line 253
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(748)));
#line 254
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 254
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(748)));
#line 254
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 254
if(c_rt_lib0check_true_native(___nl__7)){ goto label_71;}
#line 255
c_rt_lib0copy(&___nl__10, ___nl__1);
#line 255
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(748)));
#line 255
c_rt_lib0move(&___nl__9, ptd_system_priv0cross_type(___nl__6, ___nl__10, ___nl__2, ___ref___3, ___ref___4));
#line 255
c_rt_lib0clear(&___nl__10);
#line 255
c_rt_lib0move(&___nl__8, tct0hash(___nl__9));
#line 255
c_rt_lib0clear(&___nl__9);
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
c_rt_lib0clear(&___nl__1);
#line 255
c_rt_lib0clear(&___nl__2);
#line 255
c_rt_lib0clear(&___nl__5);
#line 255
c_rt_lib0clear(&___nl__6);
#line 255
c_rt_lib0clear(&___nl__7);
#line 255
return ___nl__8;
#line 255
c_rt_lib0clear(&___nl__8);
#line 256
goto label_71;
#line 256
label_71:
#line 256
c_rt_lib0clear(&___nl__7);
#line 257
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 257
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(749)));
#line 257
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 257
if(c_rt_lib0check_true_native(___nl__7)){ goto label_73;}
#line 258
c_rt_lib0move(&___nl__8, ptd_system0rec_to_hash(___nl__1, ___nl__2, ___ref___3, ___ref___4));
#line 259
c_rt_lib0move(&___nl__10, ptd_system0cross_type(___nl__6, ___nl__8, ___ref___3, ___ref___4));
#line 259
c_rt_lib0move(&___nl__9, tct0hash(___nl__10));
#line 259
c_rt_lib0clear(&___nl__10);
#line 259
c_rt_lib0clear(&___nl__0);
#line 259
c_rt_lib0clear(&___nl__1);
#line 259
c_rt_lib0clear(&___nl__2);
#line 259
c_rt_lib0clear(&___nl__5);
#line 259
c_rt_lib0clear(&___nl__6);
#line 259
c_rt_lib0clear(&___nl__7);
#line 259
c_rt_lib0clear(&___nl__8);
#line 259
return ___nl__9;
#line 259
c_rt_lib0clear(&___nl__9);
#line 259
c_rt_lib0clear(&___nl__8);
#line 260
goto label_73;
#line 260
label_73:
#line 260
c_rt_lib0clear(&___nl__7);
#line 260
c_rt_lib0clear(&___nl__6);
#line 261
goto label_10;
#line 261
label_10:
#line 261
c_rt_lib0clear(&___nl__5);
#line 262
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(746)));
#line 262
c_rt_lib0clear(&___nl__0);
#line 262
c_rt_lib0clear(&___nl__1);
#line 262
c_rt_lib0clear(&___nl__2);
#line 262
return ___nl__5;
#line 262
c_rt_lib0clear(&___nl__5);
#line 262
c_rt_lib0clear(&___nl__0);
#line 262
c_rt_lib0clear(&___nl__1);
#line 262
c_rt_lib0clear(&___nl__2);
#line 262
return NULL;
}

ImmT ptd_system0rec_to_hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0rec_to_hash");
return ptd_system0rec_to_hash(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0rec_to_hash(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 267
c_rt_lib0move(&___nl__4, tct0empty());
#line 268
c_rt_lib0copy(&___nl__5, ___nl__0);
#line 268
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(749)));
#line 268
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 268
label_3:
#line 268
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 268
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 268
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 268
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 269
c_rt_lib0move(&___nl__9, ptd_system_priv0cross_type(___nl__7, ___nl__4, ___nl__1, ___ref___2, ___ref___3));
#line 269
c_rt_lib0copy(&___nl__4, ___nl__9);
#line 269
c_rt_lib0clear(&___nl__9);
#line 270
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 270
goto label_3;
#line 270
label_1:
#line 270
c_rt_lib0clear(&___nl__5);
#line 270
c_rt_lib0clear(&___nl__6);
#line 270
c_rt_lib0clear(&___nl__7);
#line 270
c_rt_lib0clear(&___nl__8);
#line 271
c_rt_lib0clear(&___nl__0);
#line 271
c_rt_lib0clear(&___nl__1);
#line 271
return ___nl__4;
#line 271
c_rt_lib0clear(&___nl__4);
#line 271
c_rt_lib0clear(&___nl__0);
#line 271
c_rt_lib0clear(&___nl__1);
#line 271
return NULL;
}

ImmT ptd_system0cast_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0cast_type");
return ptd_system0cast_type(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0cast_type(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 276
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 276
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 276
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 276
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 276
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(1024), ___nl__5, ___get_global_const(202), ___nl__6, ___get_global_const(203), ___nl__7, ___get_global_const(1025), ___nl__8, ___get_global_const(1026), ___nl__9));
#line 276
c_rt_lib0clear(&___nl__5);
#line 276
c_rt_lib0clear(&___nl__6);
#line 276
c_rt_lib0clear(&___nl__7);
#line 276
c_rt_lib0clear(&___nl__8);
#line 276
c_rt_lib0clear(&___nl__9);
#line 277
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(40)));
#line 277
c_rt_lib0move(&___nl__5, ptd_system_priv0check_assignment_info(___nl__0, ___nl__6, ___nl__4, ___nl__7, ___ref___2, ___ref___3));
#line 277
c_rt_lib0clear(&___nl__7);
#line 277
c_rt_lib0clear(&___nl__6);
#line 277
c_rt_lib0clear(&___nl__0);
#line 277
c_rt_lib0clear(&___nl__1);
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
return ___nl__5;
#line 277
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0clear(&___nl__0);
#line 277
c_rt_lib0clear(&___nl__1);
#line 277
return NULL;
}

ImmT ptd_system0check_assignment0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 4, "ptd_system0check_assignment");
return ptd_system0check_assignment(_tab[0], _tab[1], &_tab[2], &_tab[3]);}
ImmT ptd_system0check_assignment(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 282
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 282
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 282
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 282
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 282
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 282
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(1024), ___nl__5, ___get_global_const(202), ___nl__6, ___get_global_const(203), ___nl__7, ___get_global_const(1025), ___nl__8, ___get_global_const(1026), ___nl__9));
#line 282
c_rt_lib0clear(&___nl__5);
#line 282
c_rt_lib0clear(&___nl__6);
#line 282
c_rt_lib0clear(&___nl__7);
#line 282
c_rt_lib0clear(&___nl__8);
#line 282
c_rt_lib0clear(&___nl__9);
#line 283
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 283
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(40)));
#line 283
c_rt_lib0move(&___nl__5, ptd_system_priv0check_assignment_info(___nl__0, ___nl__6, ___nl__4, ___nl__7, ___ref___2, ___ref___3));
#line 283
c_rt_lib0clear(&___nl__7);
#line 283
c_rt_lib0clear(&___nl__6);
#line 283
c_rt_lib0clear(&___nl__0);
#line 283
c_rt_lib0clear(&___nl__1);
#line 283
c_rt_lib0clear(&___nl__4);
#line 283
return ___nl__5;
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0clear(&___nl__0);
#line 283
c_rt_lib0clear(&___nl__1);
#line 283
return NULL;
}

ImmT ptd_system_priv0mk_err(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_system_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 287
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(203), ___nl__0, ___get_global_const(202), ___nl__1, ___get_global_const(638), ___nl__3));
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__2));
#line 287
c_rt_lib0clear(&___nl__0);
#line 287
c_rt_lib0clear(&___nl__1);
#line 287
return ___nl__2;
#line 287
c_rt_lib0clear(&___nl__2);
#line 287
c_rt_lib0clear(&___nl__0);
#line 287
c_rt_lib0clear(&___nl__1);
#line 287
return NULL;
}

ImmT ptd_system_priv0check_assignment_info(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
ptd_system_priv0__const__init();
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
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
ImmT ___nl__20 = NULL;
ImmT ___nl__21 = NULL;
#line 292
c_rt_lib0copy(&___nl__6, ___nl__1);
#line 292
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(754)));
#line 292
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 292
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 292
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 292
c_rt_lib0clear(&___nl__0);
#line 292
c_rt_lib0clear(&___nl__1);
#line 292
c_rt_lib0clear(&___nl__2);
#line 292
c_rt_lib0clear(&___nl__3);
#line 292
c_rt_lib0clear(&___nl__6);
#line 292
return ___nl__7;
#line 292
c_rt_lib0clear(&___nl__7);
#line 292
goto label_2;
#line 292
label_2:
#line 292
c_rt_lib0clear(&___nl__6);
#line 293
c_rt_lib0copy(&___nl__6, ___nl__1);
#line 293
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(751)));
#line 293
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 293
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 293
c_rt_lib0move(&___nl__7, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 293
c_rt_lib0clear(&___nl__0);
#line 293
c_rt_lib0clear(&___nl__1);
#line 293
c_rt_lib0clear(&___nl__2);
#line 293
c_rt_lib0clear(&___nl__3);
#line 293
c_rt_lib0clear(&___nl__6);
#line 293
return ___nl__7;
#line 293
c_rt_lib0clear(&___nl__7);
#line 293
goto label_4;
#line 293
label_4:
#line 293
c_rt_lib0clear(&___nl__6);
#line 294
c_rt_lib0copy(&___nl__6, ___nl__0);
#line 294
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(746)));
#line 294
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 294
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 295
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1025)));
#line 295
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 295
if(c_rt_lib0check_true_native(___nl__8)){ goto label_9;}
#line 295
c_rt_lib0move(&___nl__7, ptd_system0is_known(___nl__3));
#line 295
label_9:
#line 295
c_rt_lib0clear(&___nl__8);
#line 295
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 295
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 295
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(130)));
#line 295
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(202)));
#line 295
c_rt_lib0delete(ptd_system_priv0walk_on_type(___nl__1, ___nl__8, ___nl__9, ___ref___4, ___ref___5));
#line 295
c_rt_lib0clear(&___nl__9);
#line 295
c_rt_lib0clear(&___nl__8);
#line 295
goto label_8;
#line 295
label_8:
#line 295
c_rt_lib0clear(&___nl__7);
#line 297
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 297
c_rt_lib0clear(&___nl__0);
#line 297
c_rt_lib0clear(&___nl__1);
#line 297
c_rt_lib0clear(&___nl__2);
#line 297
c_rt_lib0clear(&___nl__3);
#line 297
c_rt_lib0clear(&___nl__6);
#line 297
return ___nl__7;
#line 297
c_rt_lib0clear(&___nl__7);
#line 298
goto label_6;
#line 298
label_6:
#line 298
c_rt_lib0clear(&___nl__6);
#line 299
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 299
c_rt_lib0move(&___nl__8, ptd_system0is_known(___nl__3));
#line 299
c_rt_lib0move(&___nl__6, ptd_system_priv0is_cycle_ref(&___nl__0, &___nl__1, &___nl__2, ___nl__7, ___nl__8, ___ref___4, ___ref___5));
#line 299
c_rt_lib0clear(&___nl__8);
#line 299
c_rt_lib0clear(&___nl__7);
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 299
if(c_rt_lib0check_true_native(___nl__6)){ goto label_11;}
#line 300
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 300
c_rt_lib0clear(&___nl__0);
#line 300
c_rt_lib0clear(&___nl__1);
#line 300
c_rt_lib0clear(&___nl__2);
#line 300
c_rt_lib0clear(&___nl__3);
#line 300
c_rt_lib0clear(&___nl__6);
#line 300
return ___nl__7;
#line 300
c_rt_lib0clear(&___nl__7);
#line 301
goto label_11;
#line 301
label_11:
#line 301
c_rt_lib0clear(&___nl__6);
#line 302
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1024)));
#line 302
c_rt_lib0move(&___nl__7,___get_global_const(1028));
#line 302
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__7));
#line 302
c_rt_lib0clear(&___nl__7);
#line 302
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 302
if(c_rt_lib0check_true_native(___nl__6)){ goto label_13;}
#line 303
c_rt_lib0move(&___nl__7,___get_global_const(1030));
#line 303
c_rt_lib0delete(ptd_system_priv0add_error(___ref___5, ___nl__7));
#line 303
c_rt_lib0clear(&___nl__7);
#line 304
c_rt_lib0move(&___nl__7, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 304
c_rt_lib0clear(&___nl__0);
#line 304
c_rt_lib0clear(&___nl__1);
#line 304
c_rt_lib0clear(&___nl__2);
#line 304
c_rt_lib0clear(&___nl__3);
#line 304
c_rt_lib0clear(&___nl__6);
#line 304
return ___nl__7;
#line 304
c_rt_lib0clear(&___nl__7);
#line 305
goto label_13;
#line 305
label_13:
#line 305
c_rt_lib0clear(&___nl__6);
#line 306
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(746)));
#line 306
if(c_rt_lib0check_true_native(___nl__6)){ goto label_15;}
#line 308
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(747)));
#line 308
if(c_rt_lib0check_true_native(___nl__6)){ goto label_16;}
#line 317
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(748)));
#line 317
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 337
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(749)));
#line 337
if(c_rt_lib0check_true_native(___nl__6)){ goto label_18;}
#line 364
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(750)));
#line 364
if(c_rt_lib0check_true_native(___nl__6)){ goto label_19;}
#line 366
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(751)));
#line 366
if(c_rt_lib0check_true_native(___nl__6)){ goto label_20;}
#line 368
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(752)));
#line 368
if(c_rt_lib0check_true_native(___nl__6)){ goto label_21;}
#line 371
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(753)));
#line 371
if(c_rt_lib0check_true_native(___nl__6)){ goto label_22;}
#line 397
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(754)));
#line 397
if(c_rt_lib0check_true_native(___nl__6)){ goto label_23;}
#line 397
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 397
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__0));
#line 397
nl_die_arg(___nl__6);
#line 306
label_15:
#line 307
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 307
c_rt_lib0clear(&___nl__0);
#line 307
c_rt_lib0clear(&___nl__1);
#line 307
c_rt_lib0clear(&___nl__2);
#line 307
c_rt_lib0clear(&___nl__3);
#line 307
c_rt_lib0clear(&___nl__6);
#line 307
return ___nl__7;
#line 307
c_rt_lib0clear(&___nl__7);
#line 308
goto label_14;
#line 308
label_16:
#line 308
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(747)));
#line 309
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 309
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(747)));
#line 309
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 309
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 309
if(c_rt_lib0check_true_native(___nl__8)){ goto label_25;}
#line 309
c_rt_lib0move(&___nl__9, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 309
c_rt_lib0clear(&___nl__0);
#line 309
c_rt_lib0clear(&___nl__1);
#line 309
c_rt_lib0clear(&___nl__2);
#line 309
c_rt_lib0clear(&___nl__3);
#line 309
c_rt_lib0clear(&___nl__6);
#line 309
c_rt_lib0clear(&___nl__7);
#line 309
c_rt_lib0clear(&___nl__8);
#line 309
return ___nl__9;
#line 309
c_rt_lib0clear(&___nl__9);
#line 309
goto label_25;
#line 309
label_25:
#line 309
c_rt_lib0clear(&___nl__8);
#line 310
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 310
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(747)));
#line 310
c_rt_lib0move(&___nl__8, ptd_system_priv0check_assignment_info(___nl__7, ___nl__9, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 310
c_rt_lib0clear(&___nl__9);
#line 311
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 311
if(c_rt_lib0check_true_native(___nl__9)){ goto label_27;}
#line 313
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 313
if(c_rt_lib0check_true_native(___nl__9)){ goto label_28;}
#line 313
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 313
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 313
nl_die_arg(___nl__9);
#line 311
label_27:
#line 312
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 312
c_rt_lib0clear(&___nl__0);
#line 312
c_rt_lib0clear(&___nl__1);
#line 312
c_rt_lib0clear(&___nl__2);
#line 312
c_rt_lib0clear(&___nl__3);
#line 312
c_rt_lib0clear(&___nl__6);
#line 312
c_rt_lib0clear(&___nl__7);
#line 312
c_rt_lib0clear(&___nl__8);
#line 312
c_rt_lib0clear(&___nl__9);
#line 312
return ___nl__10;
#line 312
c_rt_lib0clear(&___nl__10);
#line 313
goto label_26;
#line 313
label_28:
#line 313
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 314
c_rt_lib0move(&___nl__11,___get_global_const(638));
#line 314
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 314
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(967)));
#line 314
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 314
c_rt_lib0clear(&___nl__12);
#line 314
c_rt_lib0move(&___nl__12,___get_global_const(638));
#line 314
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 314
c_rt_lib0clear(&___nl__12);
#line 314
c_rt_lib0clear(&___nl__11);
#line 315
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__10));
#line 315
c_rt_lib0clear(&___nl__0);
#line 315
c_rt_lib0clear(&___nl__1);
#line 315
c_rt_lib0clear(&___nl__2);
#line 315
c_rt_lib0clear(&___nl__3);
#line 315
c_rt_lib0clear(&___nl__6);
#line 315
c_rt_lib0clear(&___nl__7);
#line 315
c_rt_lib0clear(&___nl__8);
#line 315
c_rt_lib0clear(&___nl__9);
#line 315
c_rt_lib0clear(&___nl__10);
#line 315
return ___nl__11;
#line 315
c_rt_lib0clear(&___nl__11);
#line 315
c_rt_lib0clear(&___nl__10);
#line 316
goto label_26;
#line 316
label_26:
#line 316
c_rt_lib0clear(&___nl__9);
#line 316
c_rt_lib0clear(&___nl__8);
#line 316
c_rt_lib0clear(&___nl__7);
#line 317
goto label_14;
#line 317
label_17:
#line 317
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(748)));
#line 318
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 318
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(749)));
#line 318
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 318
if(c_rt_lib0check_true_native(___nl__9)){ goto label_31;}
#line 318
c_rt_lib0copy(&___nl__8, ___nl__3);
#line 318
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(1021)));
#line 318
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 318
label_31:
#line 318
c_rt_lib0clear(&___nl__9);
#line 318
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 318
if(c_rt_lib0check_true_native(___nl__8)){ goto label_30;}
#line 319
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 319
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(749)));
#line 319
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__9));
#line 319
label_34:
#line 319
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 319
if(c_rt_lib0check_true_native(___nl__10)){ goto label_32;}
#line 319
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 319
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__9, ___nl__10));
#line 320
c_rt_lib0move(&___nl__13, ptd_system_priv0check_assignment_info(___nl__7, ___nl__11, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 321
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(45)));
#line 321
if(c_rt_lib0check_true_native(___nl__14)){ goto label_36;}
#line 322
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(44)));
#line 322
if(c_rt_lib0check_true_native(___nl__14)){ goto label_37;}
#line 322
c_rt_lib0move(&___nl__14,___get_global_const(76));
#line 322
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 322
nl_die_arg(___nl__14);
#line 321
label_36:
#line 322
goto label_35;
#line 322
label_37:
#line 322
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(44)));
#line 323
c_rt_lib0move(&___nl__16,___get_global_const(638));
#line 323
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__15, ___nl__16));
#line 323
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(968), ___nl__10));
#line 323
c_rt_lib0delete(array0push(&___nl__16, ___nl__17));
#line 323
c_rt_lib0clear(&___nl__17);
#line 323
c_rt_lib0move(&___nl__17,___get_global_const(638));
#line 323
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__15, ___nl__17, ___nl__16));
#line 323
c_rt_lib0clear(&___nl__17);
#line 323
c_rt_lib0clear(&___nl__16);
#line 324
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__15));
#line 324
c_rt_lib0clear(&___nl__0);
#line 324
c_rt_lib0clear(&___nl__1);
#line 324
c_rt_lib0clear(&___nl__2);
#line 324
c_rt_lib0clear(&___nl__3);
#line 324
c_rt_lib0clear(&___nl__6);
#line 324
c_rt_lib0clear(&___nl__7);
#line 324
c_rt_lib0clear(&___nl__8);
#line 324
c_rt_lib0clear(&___nl__9);
#line 324
c_rt_lib0clear(&___nl__10);
#line 324
c_rt_lib0clear(&___nl__11);
#line 324
c_rt_lib0clear(&___nl__12);
#line 324
c_rt_lib0clear(&___nl__13);
#line 324
c_rt_lib0clear(&___nl__14);
#line 324
c_rt_lib0clear(&___nl__15);
#line 324
return ___nl__16;
#line 324
c_rt_lib0clear(&___nl__16);
#line 324
c_rt_lib0clear(&___nl__15);
#line 325
goto label_35;
#line 325
label_35:
#line 325
c_rt_lib0clear(&___nl__14);
#line 325
c_rt_lib0clear(&___nl__13);
#line 326
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 326
goto label_34;
#line 326
label_32:
#line 326
c_rt_lib0clear(&___nl__9);
#line 326
c_rt_lib0clear(&___nl__10);
#line 326
c_rt_lib0clear(&___nl__11);
#line 326
c_rt_lib0clear(&___nl__12);
#line 327
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 327
c_rt_lib0clear(&___nl__0);
#line 327
c_rt_lib0clear(&___nl__1);
#line 327
c_rt_lib0clear(&___nl__2);
#line 327
c_rt_lib0clear(&___nl__3);
#line 327
c_rt_lib0clear(&___nl__6);
#line 327
c_rt_lib0clear(&___nl__7);
#line 327
c_rt_lib0clear(&___nl__8);
#line 327
return ___nl__9;
#line 327
c_rt_lib0clear(&___nl__9);
#line 328
goto label_30;
#line 328
label_30:
#line 328
c_rt_lib0clear(&___nl__8);
#line 329
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 329
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(748)));
#line 329
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 329
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 329
if(c_rt_lib0check_true_native(___nl__8)){ goto label_39;}
#line 329
c_rt_lib0move(&___nl__9, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 329
c_rt_lib0clear(&___nl__0);
#line 329
c_rt_lib0clear(&___nl__1);
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0clear(&___nl__3);
#line 329
c_rt_lib0clear(&___nl__6);
#line 329
c_rt_lib0clear(&___nl__7);
#line 329
c_rt_lib0clear(&___nl__8);
#line 329
return ___nl__9;
#line 329
c_rt_lib0clear(&___nl__9);
#line 329
goto label_39;
#line 329
label_39:
#line 329
c_rt_lib0clear(&___nl__8);
#line 330
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 330
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(748)));
#line 330
c_rt_lib0move(&___nl__8, ptd_system_priv0check_assignment_info(___nl__7, ___nl__9, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 330
c_rt_lib0clear(&___nl__9);
#line 331
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 331
if(c_rt_lib0check_true_native(___nl__9)){ goto label_41;}
#line 333
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 333
if(c_rt_lib0check_true_native(___nl__9)){ goto label_42;}
#line 333
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 333
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 333
nl_die_arg(___nl__9);
#line 331
label_41:
#line 332
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 332
c_rt_lib0clear(&___nl__0);
#line 332
c_rt_lib0clear(&___nl__1);
#line 332
c_rt_lib0clear(&___nl__2);
#line 332
c_rt_lib0clear(&___nl__3);
#line 332
c_rt_lib0clear(&___nl__6);
#line 332
c_rt_lib0clear(&___nl__7);
#line 332
c_rt_lib0clear(&___nl__8);
#line 332
c_rt_lib0clear(&___nl__9);
#line 332
return ___nl__10;
#line 332
c_rt_lib0clear(&___nl__10);
#line 333
goto label_40;
#line 333
label_42:
#line 333
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 334
c_rt_lib0move(&___nl__11,___get_global_const(638));
#line 334
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 334
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(972)));
#line 334
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 334
c_rt_lib0clear(&___nl__12);
#line 334
c_rt_lib0move(&___nl__12,___get_global_const(638));
#line 334
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 334
c_rt_lib0clear(&___nl__12);
#line 334
c_rt_lib0clear(&___nl__11);
#line 335
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__10));
#line 335
c_rt_lib0clear(&___nl__0);
#line 335
c_rt_lib0clear(&___nl__1);
#line 335
c_rt_lib0clear(&___nl__2);
#line 335
c_rt_lib0clear(&___nl__3);
#line 335
c_rt_lib0clear(&___nl__6);
#line 335
c_rt_lib0clear(&___nl__7);
#line 335
c_rt_lib0clear(&___nl__8);
#line 335
c_rt_lib0clear(&___nl__9);
#line 335
c_rt_lib0clear(&___nl__10);
#line 335
return ___nl__11;
#line 335
c_rt_lib0clear(&___nl__11);
#line 335
c_rt_lib0clear(&___nl__10);
#line 336
goto label_40;
#line 336
label_40:
#line 336
c_rt_lib0clear(&___nl__9);
#line 336
c_rt_lib0clear(&___nl__8);
#line 336
c_rt_lib0clear(&___nl__7);
#line 337
goto label_14;
#line 337
label_18:
#line 337
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(749)));
#line 338
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1026)));
#line 338
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 338
if(c_rt_lib0check_true_native(___nl__9)){ goto label_45;}
#line 338
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 338
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(748)));
#line 338
label_45:
#line 338
c_rt_lib0clear(&___nl__9);
#line 338
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 338
if(c_rt_lib0check_true_native(___nl__8)){ goto label_44;}
#line 339
c_rt_lib0copy(&___nl__9, ___nl__1);
#line 339
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(748)));
#line 340
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__7));
#line 340
label_48:
#line 340
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 340
if(c_rt_lib0check_true_native(___nl__10)){ goto label_46;}
#line 340
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 340
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__7, ___nl__10));
#line 341
c_rt_lib0move(&___nl__13, ptd_system_priv0check_assignment_info(___nl__11, ___nl__9, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 342
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(45)));
#line 342
if(c_rt_lib0check_true_native(___nl__14)){ goto label_50;}
#line 343
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(44)));
#line 343
if(c_rt_lib0check_true_native(___nl__14)){ goto label_51;}
#line 343
c_rt_lib0move(&___nl__14,___get_global_const(76));
#line 343
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 343
nl_die_arg(___nl__14);
#line 342
label_50:
#line 343
goto label_49;
#line 343
label_51:
#line 343
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(44)));
#line 344
c_rt_lib0move(&___nl__16,___get_global_const(638));
#line 344
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__15, ___nl__16));
#line 344
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(968), ___nl__10));
#line 344
c_rt_lib0delete(array0push(&___nl__16, ___nl__17));
#line 344
c_rt_lib0clear(&___nl__17);
#line 344
c_rt_lib0move(&___nl__17,___get_global_const(638));
#line 344
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__15, ___nl__17, ___nl__16));
#line 344
c_rt_lib0clear(&___nl__17);
#line 344
c_rt_lib0clear(&___nl__16);
#line 345
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__15));
#line 345
c_rt_lib0clear(&___nl__0);
#line 345
c_rt_lib0clear(&___nl__1);
#line 345
c_rt_lib0clear(&___nl__2);
#line 345
c_rt_lib0clear(&___nl__3);
#line 345
c_rt_lib0clear(&___nl__6);
#line 345
c_rt_lib0clear(&___nl__7);
#line 345
c_rt_lib0clear(&___nl__8);
#line 345
c_rt_lib0clear(&___nl__9);
#line 345
c_rt_lib0clear(&___nl__10);
#line 345
c_rt_lib0clear(&___nl__11);
#line 345
c_rt_lib0clear(&___nl__12);
#line 345
c_rt_lib0clear(&___nl__13);
#line 345
c_rt_lib0clear(&___nl__14);
#line 345
c_rt_lib0clear(&___nl__15);
#line 345
return ___nl__16;
#line 345
c_rt_lib0clear(&___nl__16);
#line 345
c_rt_lib0clear(&___nl__15);
#line 346
goto label_49;
#line 346
label_49:
#line 346
c_rt_lib0clear(&___nl__14);
#line 346
c_rt_lib0clear(&___nl__13);
#line 347
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 347
goto label_48;
#line 347
label_46:
#line 347
c_rt_lib0clear(&___nl__10);
#line 347
c_rt_lib0clear(&___nl__11);
#line 347
c_rt_lib0clear(&___nl__12);
#line 348
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 348
c_rt_lib0clear(&___nl__0);
#line 348
c_rt_lib0clear(&___nl__1);
#line 348
c_rt_lib0clear(&___nl__2);
#line 348
c_rt_lib0clear(&___nl__3);
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0clear(&___nl__7);
#line 348
c_rt_lib0clear(&___nl__8);
#line 348
c_rt_lib0clear(&___nl__9);
#line 348
return ___nl__10;
#line 348
c_rt_lib0clear(&___nl__10);
#line 348
c_rt_lib0clear(&___nl__9);
#line 349
goto label_44;
#line 349
label_44:
#line 349
c_rt_lib0clear(&___nl__8);
#line 350
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 350
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(749)));
#line 350
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 350
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 350
if(c_rt_lib0check_true_native(___nl__8)){ goto label_53;}
#line 350
c_rt_lib0move(&___nl__9, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 350
c_rt_lib0clear(&___nl__0);
#line 350
c_rt_lib0clear(&___nl__1);
#line 350
c_rt_lib0clear(&___nl__2);
#line 350
c_rt_lib0clear(&___nl__3);
#line 350
c_rt_lib0clear(&___nl__6);
#line 350
c_rt_lib0clear(&___nl__7);
#line 350
c_rt_lib0clear(&___nl__8);
#line 350
return ___nl__9;
#line 350
c_rt_lib0clear(&___nl__9);
#line 350
goto label_53;
#line 350
label_53:
#line 350
c_rt_lib0clear(&___nl__8);
#line 351
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 351
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(749)));
#line 352
c_rt_lib0move(&___nl__9, hash0size(___nl__8));
#line 352
c_rt_lib0move(&___nl__10, hash0size(___nl__7));
#line 352
c_rt_lib0move(&___nl__9, c_rt_lib0num_ne(___nl__9, ___nl__10));
#line 352
c_rt_lib0clear(&___nl__10);
#line 352
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 352
if(c_rt_lib0check_true_native(___nl__9)){ goto label_55;}
#line 352
c_rt_lib0move(&___nl__10, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 352
c_rt_lib0clear(&___nl__0);
#line 352
c_rt_lib0clear(&___nl__1);
#line 352
c_rt_lib0clear(&___nl__2);
#line 352
c_rt_lib0clear(&___nl__3);
#line 352
c_rt_lib0clear(&___nl__6);
#line 352
c_rt_lib0clear(&___nl__7);
#line 352
c_rt_lib0clear(&___nl__8);
#line 352
c_rt_lib0clear(&___nl__9);
#line 352
return ___nl__10;
#line 352
c_rt_lib0clear(&___nl__10);
#line 352
goto label_55;
#line 352
label_55:
#line 352
c_rt_lib0clear(&___nl__9);
#line 353
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__7));
#line 353
label_58:
#line 353
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 353
if(c_rt_lib0check_true_native(___nl__9)){ goto label_56;}
#line 353
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 353
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__7, ___nl__9));
#line 354
c_rt_lib0move(&___nl__12, hash0has_key(___nl__8, ___nl__9));
#line 354
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 354
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 354
if(c_rt_lib0check_true_native(___nl__12)){ goto label_60;}
#line 354
c_rt_lib0move(&___nl__13, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 354
c_rt_lib0clear(&___nl__0);
#line 354
c_rt_lib0clear(&___nl__1);
#line 354
c_rt_lib0clear(&___nl__2);
#line 354
c_rt_lib0clear(&___nl__3);
#line 354
c_rt_lib0clear(&___nl__6);
#line 354
c_rt_lib0clear(&___nl__7);
#line 354
c_rt_lib0clear(&___nl__8);
#line 354
c_rt_lib0clear(&___nl__9);
#line 354
c_rt_lib0clear(&___nl__10);
#line 354
c_rt_lib0clear(&___nl__11);
#line 354
c_rt_lib0clear(&___nl__12);
#line 354
return ___nl__13;
#line 354
c_rt_lib0clear(&___nl__13);
#line 354
goto label_60;
#line 354
label_60:
#line 354
c_rt_lib0clear(&___nl__12);
#line 355
c_rt_lib0move(&___nl__12, hash0get_value(___nl__8, ___nl__9));
#line 356
c_rt_lib0move(&___nl__13, ptd_system_priv0check_assignment_info(___nl__10, ___nl__12, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 357
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(45)));
#line 357
if(c_rt_lib0check_true_native(___nl__14)){ goto label_62;}
#line 358
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(44)));
#line 358
if(c_rt_lib0check_true_native(___nl__14)){ goto label_63;}
#line 358
c_rt_lib0move(&___nl__14,___get_global_const(76));
#line 358
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 358
nl_die_arg(___nl__14);
#line 357
label_62:
#line 358
goto label_61;
#line 358
label_63:
#line 358
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(44)));
#line 359
c_rt_lib0move(&___nl__16,___get_global_const(638));
#line 359
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(___nl__15, ___nl__16));
#line 359
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(968), ___nl__9));
#line 359
c_rt_lib0delete(array0push(&___nl__16, ___nl__17));
#line 359
c_rt_lib0clear(&___nl__17);
#line 359
c_rt_lib0move(&___nl__17,___get_global_const(638));
#line 359
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__15, ___nl__17, ___nl__16));
#line 359
c_rt_lib0clear(&___nl__17);
#line 359
c_rt_lib0clear(&___nl__16);
#line 360
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__15));
#line 360
c_rt_lib0clear(&___nl__0);
#line 360
c_rt_lib0clear(&___nl__1);
#line 360
c_rt_lib0clear(&___nl__2);
#line 360
c_rt_lib0clear(&___nl__3);
#line 360
c_rt_lib0clear(&___nl__6);
#line 360
c_rt_lib0clear(&___nl__7);
#line 360
c_rt_lib0clear(&___nl__8);
#line 360
c_rt_lib0clear(&___nl__9);
#line 360
c_rt_lib0clear(&___nl__10);
#line 360
c_rt_lib0clear(&___nl__11);
#line 360
c_rt_lib0clear(&___nl__12);
#line 360
c_rt_lib0clear(&___nl__13);
#line 360
c_rt_lib0clear(&___nl__14);
#line 360
c_rt_lib0clear(&___nl__15);
#line 360
return ___nl__16;
#line 360
c_rt_lib0clear(&___nl__16);
#line 360
c_rt_lib0clear(&___nl__15);
#line 361
goto label_61;
#line 361
label_61:
#line 361
c_rt_lib0clear(&___nl__14);
#line 361
c_rt_lib0clear(&___nl__12);
#line 361
c_rt_lib0clear(&___nl__13);
#line 362
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 362
goto label_58;
#line 362
label_56:
#line 362
c_rt_lib0clear(&___nl__9);
#line 362
c_rt_lib0clear(&___nl__10);
#line 362
c_rt_lib0clear(&___nl__11);
#line 363
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 363
c_rt_lib0clear(&___nl__0);
#line 363
c_rt_lib0clear(&___nl__1);
#line 363
c_rt_lib0clear(&___nl__2);
#line 363
c_rt_lib0clear(&___nl__3);
#line 363
c_rt_lib0clear(&___nl__6);
#line 363
c_rt_lib0clear(&___nl__7);
#line 363
c_rt_lib0clear(&___nl__8);
#line 363
return ___nl__9;
#line 363
c_rt_lib0clear(&___nl__9);
#line 363
c_rt_lib0clear(&___nl__8);
#line 363
c_rt_lib0clear(&___nl__7);
#line 364
goto label_14;
#line 364
label_19:
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(750)));
#line 365
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 365
nl_die_arg(___nl__8);
#line 365
c_rt_lib0clear(&___nl__8);
#line 365
c_rt_lib0clear(&___nl__7);
#line 366
goto label_14;
#line 366
label_20:
#line 367
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 367
nl_die_arg(___nl__7);
#line 367
c_rt_lib0clear(&___nl__7);
#line 368
goto label_14;
#line 368
label_21:
#line 369
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 369
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(752)));
#line 369
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 369
if(c_rt_lib0check_true_native(___nl__7)){ goto label_65;}
#line 369
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 369
c_rt_lib0clear(&___nl__0);
#line 369
c_rt_lib0clear(&___nl__1);
#line 369
c_rt_lib0clear(&___nl__2);
#line 369
c_rt_lib0clear(&___nl__3);
#line 369
c_rt_lib0clear(&___nl__6);
#line 369
c_rt_lib0clear(&___nl__7);
#line 369
return ___nl__8;
#line 369
c_rt_lib0clear(&___nl__8);
#line 369
goto label_65;
#line 369
label_65:
#line 369
c_rt_lib0clear(&___nl__7);
#line 370
c_rt_lib0move(&___nl__7, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 370
c_rt_lib0clear(&___nl__0);
#line 370
c_rt_lib0clear(&___nl__1);
#line 370
c_rt_lib0clear(&___nl__2);
#line 370
c_rt_lib0clear(&___nl__3);
#line 370
c_rt_lib0clear(&___nl__6);
#line 370
return ___nl__7;
#line 370
c_rt_lib0clear(&___nl__7);
#line 371
goto label_14;
#line 371
label_22:
#line 371
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(753)));
#line 372
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 372
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(753)));
#line 372
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 372
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 372
if(c_rt_lib0check_true_native(___nl__8)){ goto label_67;}
#line 372
c_rt_lib0move(&___nl__9, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 372
c_rt_lib0clear(&___nl__0);
#line 372
c_rt_lib0clear(&___nl__1);
#line 372
c_rt_lib0clear(&___nl__2);
#line 372
c_rt_lib0clear(&___nl__3);
#line 372
c_rt_lib0clear(&___nl__6);
#line 372
c_rt_lib0clear(&___nl__7);
#line 372
c_rt_lib0clear(&___nl__8);
#line 372
return ___nl__9;
#line 372
c_rt_lib0clear(&___nl__9);
#line 372
goto label_67;
#line 372
label_67:
#line 372
c_rt_lib0clear(&___nl__8);
#line 373
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 373
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(753)));
#line 374
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__8));
#line 374
label_70:
#line 374
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 374
if(c_rt_lib0check_true_native(___nl__9)){ goto label_68;}
#line 374
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 374
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__8, ___nl__9));
#line 375
c_rt_lib0move(&___nl__12, hash0has_key(___nl__7, ___nl__9));
#line 375
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 375
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 375
if(c_rt_lib0check_true_native(___nl__12)){ goto label_72;}
#line 375
c_rt_lib0move(&___nl__13, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 375
c_rt_lib0clear(&___nl__0);
#line 375
c_rt_lib0clear(&___nl__1);
#line 375
c_rt_lib0clear(&___nl__2);
#line 375
c_rt_lib0clear(&___nl__3);
#line 375
c_rt_lib0clear(&___nl__6);
#line 375
c_rt_lib0clear(&___nl__7);
#line 375
c_rt_lib0clear(&___nl__8);
#line 375
c_rt_lib0clear(&___nl__9);
#line 375
c_rt_lib0clear(&___nl__10);
#line 375
c_rt_lib0clear(&___nl__11);
#line 375
c_rt_lib0clear(&___nl__12);
#line 375
return ___nl__13;
#line 375
c_rt_lib0clear(&___nl__13);
#line 375
goto label_72;
#line 375
label_72:
#line 375
c_rt_lib0clear(&___nl__12);
#line 376
c_rt_lib0move(&___nl__12, hash0get_value(___nl__7, ___nl__9));
#line 377
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__10, ___get_global_const(757)));
#line 377
if(c_rt_lib0check_true_native(___nl__13)){ goto label_74;}
#line 383
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__10, ___get_global_const(758)));
#line 383
if(c_rt_lib0check_true_native(___nl__13)){ goto label_75;}
#line 383
c_rt_lib0move(&___nl__13,___get_global_const(76));
#line 383
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(2, ___nl__13, ___nl__10));
#line 383
nl_die_arg(___nl__13);
#line 377
label_74:
#line 378
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__12, ___get_global_const(757)));
#line 378
if(c_rt_lib0check_true_native(___nl__14)){ goto label_77;}
#line 380
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__12, ___get_global_const(758)));
#line 380
if(c_rt_lib0check_true_native(___nl__14)){ goto label_78;}
#line 380
c_rt_lib0move(&___nl__14,___get_global_const(76));
#line 380
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__12));
#line 380
nl_die_arg(___nl__14);
#line 378
label_77:
#line 379
c_rt_lib0clear(&___nl__12);
#line 379
c_rt_lib0clear(&___nl__13);
#line 379
c_rt_lib0clear(&___nl__14);
#line 379
goto label_69;
#line 380
goto label_76;
#line 380
label_78:
#line 380
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__12, ___get_global_const(758)));
#line 381
c_rt_lib0move(&___nl__16, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 381
c_rt_lib0clear(&___nl__0);
#line 381
c_rt_lib0clear(&___nl__1);
#line 381
c_rt_lib0clear(&___nl__2);
#line 381
c_rt_lib0clear(&___nl__3);
#line 381
c_rt_lib0clear(&___nl__6);
#line 381
c_rt_lib0clear(&___nl__7);
#line 381
c_rt_lib0clear(&___nl__8);
#line 381
c_rt_lib0clear(&___nl__9);
#line 381
c_rt_lib0clear(&___nl__10);
#line 381
c_rt_lib0clear(&___nl__11);
#line 381
c_rt_lib0clear(&___nl__12);
#line 381
c_rt_lib0clear(&___nl__13);
#line 381
c_rt_lib0clear(&___nl__14);
#line 381
c_rt_lib0clear(&___nl__15);
#line 381
return ___nl__16;
#line 381
c_rt_lib0clear(&___nl__16);
#line 381
c_rt_lib0clear(&___nl__15);
#line 382
goto label_76;
#line 382
label_76:
#line 382
c_rt_lib0clear(&___nl__14);
#line 383
goto label_73;
#line 383
label_75:
#line 383
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__10, ___get_global_const(758)));
#line 384
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__12, ___get_global_const(757)));
#line 384
if(c_rt_lib0check_true_native(___nl__15)){ goto label_80;}
#line 386
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__12, ___get_global_const(758)));
#line 386
if(c_rt_lib0check_true_native(___nl__15)){ goto label_81;}
#line 386
c_rt_lib0move(&___nl__15,___get_global_const(76));
#line 386
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(2, ___nl__15, ___nl__12));
#line 386
nl_die_arg(___nl__15);
#line 384
label_80:
#line 385
c_rt_lib0move(&___nl__16, ptd_system_priv0mk_err(___nl__0, ___nl__1));
#line 385
c_rt_lib0clear(&___nl__0);
#line 385
c_rt_lib0clear(&___nl__1);
#line 385
c_rt_lib0clear(&___nl__2);
#line 385
c_rt_lib0clear(&___nl__3);
#line 385
c_rt_lib0clear(&___nl__6);
#line 385
c_rt_lib0clear(&___nl__7);
#line 385
c_rt_lib0clear(&___nl__8);
#line 385
c_rt_lib0clear(&___nl__9);
#line 385
c_rt_lib0clear(&___nl__10);
#line 385
c_rt_lib0clear(&___nl__11);
#line 385
c_rt_lib0clear(&___nl__12);
#line 385
c_rt_lib0clear(&___nl__13);
#line 385
c_rt_lib0clear(&___nl__14);
#line 385
c_rt_lib0clear(&___nl__15);
#line 385
return ___nl__16;
#line 385
c_rt_lib0clear(&___nl__16);
#line 386
goto label_79;
#line 386
label_81:
#line 386
c_rt_lib0move(&___nl__16, c_rt_lib0priv_as(___nl__12, ___get_global_const(758)));
#line 387
c_rt_lib0move(&___nl__17, ptd_system_priv0check_assignment_info(___nl__16, ___nl__14, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 388
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(45)));
#line 388
if(c_rt_lib0check_true_native(___nl__18)){ goto label_83;}
#line 389
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(44)));
#line 389
if(c_rt_lib0check_true_native(___nl__18)){ goto label_84;}
#line 389
c_rt_lib0move(&___nl__18,___get_global_const(76));
#line 389
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(2, ___nl__18, ___nl__17));
#line 389
nl_die_arg(___nl__18);
#line 388
label_83:
#line 389
goto label_82;
#line 389
label_84:
#line 389
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(44)));
#line 390
c_rt_lib0move(&___nl__20,___get_global_const(638));
#line 390
c_rt_lib0move(&___nl__20, c_rt_lib0get_ref_hash(___nl__19, ___nl__20));
#line 390
c_rt_lib0move(&___nl__21, c_rt_lib0ov_mk_arg(___get_global_const(974), ___nl__9));
#line 390
c_rt_lib0delete(array0push(&___nl__20, ___nl__21));
#line 390
c_rt_lib0clear(&___nl__21);
#line 390
c_rt_lib0move(&___nl__21,___get_global_const(638));
#line 390
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__19, ___nl__21, ___nl__20));
#line 390
c_rt_lib0clear(&___nl__21);
#line 390
c_rt_lib0clear(&___nl__20);
#line 391
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__19));
#line 391
c_rt_lib0clear(&___nl__0);
#line 391
c_rt_lib0clear(&___nl__1);
#line 391
c_rt_lib0clear(&___nl__2);
#line 391
c_rt_lib0clear(&___nl__3);
#line 391
c_rt_lib0clear(&___nl__6);
#line 391
c_rt_lib0clear(&___nl__7);
#line 391
c_rt_lib0clear(&___nl__8);
#line 391
c_rt_lib0clear(&___nl__9);
#line 391
c_rt_lib0clear(&___nl__10);
#line 391
c_rt_lib0clear(&___nl__11);
#line 391
c_rt_lib0clear(&___nl__12);
#line 391
c_rt_lib0clear(&___nl__13);
#line 391
c_rt_lib0clear(&___nl__14);
#line 391
c_rt_lib0clear(&___nl__15);
#line 391
c_rt_lib0clear(&___nl__16);
#line 391
c_rt_lib0clear(&___nl__17);
#line 391
c_rt_lib0clear(&___nl__18);
#line 391
c_rt_lib0clear(&___nl__19);
#line 391
return ___nl__20;
#line 391
c_rt_lib0clear(&___nl__20);
#line 391
c_rt_lib0clear(&___nl__19);
#line 392
goto label_82;
#line 392
label_82:
#line 392
c_rt_lib0clear(&___nl__18);
#line 392
c_rt_lib0clear(&___nl__17);
#line 392
c_rt_lib0clear(&___nl__16);
#line 393
goto label_79;
#line 393
label_79:
#line 393
c_rt_lib0clear(&___nl__15);
#line 393
c_rt_lib0clear(&___nl__14);
#line 394
goto label_73;
#line 394
label_73:
#line 394
c_rt_lib0clear(&___nl__13);
#line 394
c_rt_lib0clear(&___nl__12);
#line 394
label_69:
#line 395
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 395
goto label_70;
#line 395
label_68:
#line 395
c_rt_lib0clear(&___nl__9);
#line 395
c_rt_lib0clear(&___nl__10);
#line 395
c_rt_lib0clear(&___nl__11);
#line 396
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 396
c_rt_lib0clear(&___nl__0);
#line 396
c_rt_lib0clear(&___nl__1);
#line 396
c_rt_lib0clear(&___nl__2);
#line 396
c_rt_lib0clear(&___nl__3);
#line 396
c_rt_lib0clear(&___nl__6);
#line 396
c_rt_lib0clear(&___nl__7);
#line 396
c_rt_lib0clear(&___nl__8);
#line 396
return ___nl__9;
#line 396
c_rt_lib0clear(&___nl__9);
#line 396
c_rt_lib0clear(&___nl__8);
#line 396
c_rt_lib0clear(&___nl__7);
#line 397
goto label_14;
#line 397
label_23:
#line 398
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 398
nl_die_arg(___nl__7);
#line 398
c_rt_lib0clear(&___nl__7);
#line 399
goto label_14;
#line 399
label_14:
#line 399
c_rt_lib0clear(&___nl__6);
#line 399
c_rt_lib0clear(&___nl__0);
#line 399
c_rt_lib0clear(&___nl__1);
#line 399
c_rt_lib0clear(&___nl__2);
#line 399
c_rt_lib0clear(&___nl__3);
#line 399
return NULL;
}

ImmT ptd_system_priv0add_delete(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 404
c_rt_lib0move(&___nl__3,___get_global_const(1031));
#line 404
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 404
c_rt_lib0move(&___nl__4,___get_global_const(61));
#line 404
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 404
c_rt_lib0move(&___nl__5,___get_global_const(130));
#line 404
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 404
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(734)));
#line 404
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1031)));
#line 404
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(733)));
#line 404
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(113), ___nl__7, ___get_global_const(111), ___nl__8, ___get_global_const(1032), ___nl__0));
#line 404
c_rt_lib0clear(&___nl__7);
#line 404
c_rt_lib0clear(&___nl__8);
#line 404
c_rt_lib0delete(array0push(&___nl__5, ___nl__6));
#line 404
c_rt_lib0clear(&___nl__6);
#line 404
c_rt_lib0move(&___nl__6,___get_global_const(130));
#line 404
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 404
c_rt_lib0move(&___nl__6,___get_global_const(61));
#line 404
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__6, ___nl__4));
#line 404
c_rt_lib0move(&___nl__6,___get_global_const(1031));
#line 404
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__3));
#line 404
c_rt_lib0clear(&___nl__6);
#line 404
c_rt_lib0clear(&___nl__3);
#line 404
c_rt_lib0clear(&___nl__4);
#line 404
c_rt_lib0clear(&___nl__5);
#line 404
c_rt_lib0clear(&___nl__0);
#line 404
return NULL;
}

ImmT ptd_system_priv0add_create(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 413
c_rt_lib0move(&___nl__3,___get_global_const(1031));
#line 413
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 413
c_rt_lib0move(&___nl__4,___get_global_const(61));
#line 413
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 413
c_rt_lib0move(&___nl__5,___get_global_const(132));
#line 413
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 413
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(734)));
#line 413
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1031)));
#line 413
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(733)));
#line 413
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(113), ___nl__7, ___get_global_const(111), ___nl__8, ___get_global_const(1032), ___nl__0));
#line 413
c_rt_lib0clear(&___nl__7);
#line 413
c_rt_lib0clear(&___nl__8);
#line 413
c_rt_lib0delete(array0push(&___nl__5, ___nl__6));
#line 413
c_rt_lib0clear(&___nl__6);
#line 413
c_rt_lib0move(&___nl__6,___get_global_const(132));
#line 413
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 413
c_rt_lib0move(&___nl__6,___get_global_const(61));
#line 413
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__6, ___nl__4));
#line 413
c_rt_lib0move(&___nl__6,___get_global_const(1031));
#line 413
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__3));
#line 413
c_rt_lib0clear(&___nl__6);
#line 413
c_rt_lib0clear(&___nl__3);
#line 413
c_rt_lib0clear(&___nl__4);
#line 413
c_rt_lib0clear(&___nl__5);
#line 413
c_rt_lib0clear(&___nl__0);
#line 413
return NULL;
}

ImmT ptd_system0can_delete0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0can_delete");
return ptd_system0can_delete(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0can_delete(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 422
label_2:
#line 422
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 422
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(750)));
#line 422
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 422
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 423
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 423
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(750)));
#line 424
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 424
c_rt_lib0move(&___nl__5, ptd_system0is_known(___nl__6));
#line 424
c_rt_lib0clear(&___nl__6);
#line 424
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 424
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 424
c_rt_lib0delete(ptd_system_priv0add_delete(___nl__4, ___ref___1, ___ref___2));
#line 424
goto label_4;
#line 424
label_4:
#line 424
c_rt_lib0clear(&___nl__5);
#line 425
c_rt_lib0move(&___nl__5, ptd_system0get_ref_type(___nl__4, ___ref___1, ___ref___2));
#line 425
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 425
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(73), ___nl__6);
#line 425
c_rt_lib0clear(&___nl__5);
#line 425
c_rt_lib0clear(&___nl__6);
#line 425
c_rt_lib0clear(&___nl__4);
#line 426
goto label_2;
#line 426
label_1:
#line 426
c_rt_lib0clear(&___nl__3);
#line 427
return ___nl__0;
#line 427
c_rt_lib0clear(&___nl__0);
#line 427
return NULL;
}

ImmT ptd_system0can_create0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0can_create");
return ptd_system0can_create(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0can_create(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 432
label_2:
#line 432
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 432
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(750)));
#line 432
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 432
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 433
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 433
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(750)));
#line 434
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 434
c_rt_lib0move(&___nl__5, ptd_system0is_known(___nl__6));
#line 434
c_rt_lib0clear(&___nl__6);
#line 434
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 434
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 434
c_rt_lib0delete(ptd_system_priv0add_create(___nl__4, ___ref___1, ___ref___2));
#line 434
goto label_4;
#line 434
label_4:
#line 434
c_rt_lib0clear(&___nl__5);
#line 435
c_rt_lib0move(&___nl__5, ptd_system0get_ref_type(___nl__4, ___ref___1, ___ref___2));
#line 435
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 435
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(73), ___nl__6);
#line 435
c_rt_lib0clear(&___nl__5);
#line 435
c_rt_lib0clear(&___nl__6);
#line 435
c_rt_lib0clear(&___nl__4);
#line 436
goto label_2;
#line 436
label_1:
#line 436
c_rt_lib0clear(&___nl__3);
#line 437
return ___nl__0;
#line 437
c_rt_lib0clear(&___nl__0);
#line 437
return NULL;
}

ImmT ptd_system_priv0walk_on_type(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
ptd_system_priv0__const__init();
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
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
#line 442
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 443
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__0, &___nl__5));
#line 444
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 445
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__6));
#line 445
label_3:
#line 445
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 445
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 445
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 445
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__6, ___nl__7));
#line 446
c_rt_lib0move(&___nl__10, ptd_system_priv0get_function_def(___nl__7, ___ref___3, ___ref___4));
#line 447
c_rt_lib0move(&___nl__11, array0len(___nl__10));
#line 447
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 447
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__12));
#line 447
c_rt_lib0clear(&___nl__12);
#line 447
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 447
if(c_rt_lib0check_true_native(___nl__11)){ goto label_5;}
#line 447
c_rt_lib0clear(&___nl__0);
#line 447
c_rt_lib0clear(&___nl__1);
#line 447
c_rt_lib0clear(&___nl__2);
#line 447
c_rt_lib0clear(&___nl__5);
#line 447
c_rt_lib0clear(&___nl__6);
#line 447
c_rt_lib0clear(&___nl__7);
#line 447
c_rt_lib0clear(&___nl__8);
#line 447
c_rt_lib0clear(&___nl__9);
#line 447
c_rt_lib0clear(&___nl__10);
#line 447
c_rt_lib0clear(&___nl__11);
#line 447
return NULL;
#line 447
goto label_5;
#line 447
label_5:
#line 447
c_rt_lib0clear(&___nl__11);
#line 448
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 448
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 448
c_rt_lib0clear(&___nl__12);
#line 448
c_rt_lib0copy(&___nl__10, ___nl__11);
#line 448
c_rt_lib0clear(&___nl__11);
#line 449
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(1033)));
#line 449
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(42)));
#line 449
if(c_rt_lib0check_true_native(___nl__12)){ goto label_7;}
#line 453
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(43)));
#line 453
if(c_rt_lib0check_true_native(___nl__12)){ goto label_8;}
#line 453
c_rt_lib0move(&___nl__12,___get_global_const(76));
#line 453
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 453
nl_die_arg(___nl__12);
#line 449
label_7:
#line 449
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(42)));
#line 450
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 450
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 450
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__13));
#line 450
label_11:
#line 450
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 450
if(c_rt_lib0check_true_native(___nl__18)){ goto label_9;}
#line 450
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__13, ___nl__15));
#line 451
c_rt_lib0move(&___nl__19,___get_global_const(0));
#line 451
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__14, ___nl__19));
#line 451
c_rt_lib0clear(&___nl__19);
#line 452
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 452
goto label_11;
#line 452
label_9:
#line 452
c_rt_lib0clear(&___nl__14);
#line 452
c_rt_lib0clear(&___nl__15);
#line 452
c_rt_lib0clear(&___nl__16);
#line 452
c_rt_lib0clear(&___nl__17);
#line 452
c_rt_lib0clear(&___nl__18);
#line 452
c_rt_lib0clear(&___nl__13);
#line 453
goto label_6;
#line 453
label_8:
#line 454
c_rt_lib0move(&___nl__13, ptd_system0get_ref_type(___nl__7, ___ref___3, ___ref___4));
#line 454
c_rt_lib0copy(&___nl__0, ___nl__13);
#line 454
c_rt_lib0clear(&___nl__13);
#line 455
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 456
c_rt_lib0delete(ptd_system_priv0get_all_ref_in_type(___nl__0, &___nl__13, ___ref___3, ___ref___4));
#line 457
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 458
c_rt_lib0move(&___nl__17, c_rt_lib0init_iter(___nl__13));
#line 458
label_14:
#line 458
c_rt_lib0move(&___nl__15, c_rt_lib0is_end_hash(___nl__17));
#line 458
if(c_rt_lib0check_true_native(___nl__15)){ goto label_12;}
#line 458
c_rt_lib0move(&___nl__15, c_rt_lib0get_key_iter(___nl__17));
#line 458
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value(___nl__13, ___nl__15));
#line 459
c_rt_lib0move(&___nl__18,___get_global_const(0));
#line 459
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__15, ___nl__18));
#line 459
c_rt_lib0clear(&___nl__18);
#line 460
c_rt_lib0delete(array0push(&___nl__14, ___nl__15));
#line 461
c_rt_lib0move(&___nl__17, c_rt_lib0next_iter(___nl__17));
#line 461
goto label_14;
#line 461
label_12:
#line 461
c_rt_lib0clear(&___nl__15);
#line 461
c_rt_lib0clear(&___nl__16);
#line 461
c_rt_lib0clear(&___nl__17);
#line 462
c_rt_lib0move(&___nl__15, ptd_system_priv0get_function_def(___nl__7, ___ref___3, ___ref___4));
#line 462
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 462
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__16));
#line 462
c_rt_lib0clear(&___nl__16);
#line 462
c_rt_lib0copy(&___nl__10, ___nl__15);
#line 462
c_rt_lib0clear(&___nl__15);
#line 463
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(42), ___nl__14));
#line 463
c_rt_lib0copy(&___nl__16, ___nl__15);
#line 463
c_rt_lib0hash_set_value_dec(&___nl__10, ___get_global_const(1033), ___nl__16);
#line 463
c_rt_lib0clear(&___nl__15);
#line 463
c_rt_lib0clear(&___nl__16);
#line 464
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(1034)));
#line 464
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(111)));
#line 464
c_rt_lib0move(&___nl__15, hash0get_value(___nl__16, ___nl__17));
#line 464
c_rt_lib0clear(&___nl__17);
#line 464
c_rt_lib0clear(&___nl__16);
#line 465
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(78)));
#line 465
c_rt_lib0delete(hash0set_value(&___nl__15, ___nl__16, ___nl__10));
#line 465
c_rt_lib0clear(&___nl__16);
#line 466
c_rt_lib0move(&___nl__16,___get_global_const(1034));
#line 466
c_rt_lib0move(&___nl__16, c_rt_lib0get_ref_hash(*___ref___3, ___nl__16));
#line 466
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(111)));
#line 466
c_rt_lib0delete(hash0set_value(&___nl__16, ___nl__17, ___nl__15));
#line 466
c_rt_lib0clear(&___nl__17);
#line 466
c_rt_lib0move(&___nl__17,___get_global_const(1034));
#line 466
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___3, ___nl__17, ___nl__16));
#line 466
c_rt_lib0clear(&___nl__17);
#line 466
c_rt_lib0clear(&___nl__16);
#line 466
c_rt_lib0clear(&___nl__13);
#line 466
c_rt_lib0clear(&___nl__14);
#line 466
c_rt_lib0clear(&___nl__15);
#line 467
goto label_6;
#line 467
label_6:
#line 467
c_rt_lib0clear(&___nl__11);
#line 467
c_rt_lib0clear(&___nl__12);
#line 467
c_rt_lib0clear(&___nl__10);
#line 468
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 468
goto label_3;
#line 468
label_1:
#line 468
c_rt_lib0clear(&___nl__7);
#line 468
c_rt_lib0clear(&___nl__8);
#line 468
c_rt_lib0clear(&___nl__9);
#line 469
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__5));
#line 469
label_17:
#line 469
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 469
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 469
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 469
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__5, ___nl__7));
#line 470
c_rt_lib0move(&___nl__10, hash0has_key(___nl__2, ___nl__7));
#line 470
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 470
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 470
c_rt_lib0clear(&___nl__10);
#line 470
goto label_16;
#line 470
goto label_19;
#line 470
label_19:
#line 470
c_rt_lib0clear(&___nl__10);
#line 471
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__1, ___get_global_const(132)));
#line 471
if(c_rt_lib0check_true_native(___nl__10)){ goto label_21;}
#line 473
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__1, ___get_global_const(130)));
#line 473
if(c_rt_lib0check_true_native(___nl__10)){ goto label_22;}
#line 473
c_rt_lib0move(&___nl__10,___get_global_const(76));
#line 473
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__1));
#line 473
nl_die_arg(___nl__10);
#line 471
label_21:
#line 472
c_rt_lib0delete(ptd_system_priv0add_create(___nl__7, ___ref___3, ___ref___4));
#line 473
goto label_20;
#line 473
label_22:
#line 474
c_rt_lib0delete(ptd_system_priv0add_delete(___nl__7, ___ref___3, ___ref___4));
#line 475
goto label_20;
#line 475
label_20:
#line 475
c_rt_lib0clear(&___nl__10);
#line 475
label_16:
#line 476
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 476
goto label_17;
#line 476
label_15:
#line 476
c_rt_lib0clear(&___nl__7);
#line 476
c_rt_lib0clear(&___nl__8);
#line 476
c_rt_lib0clear(&___nl__9);
#line 476
c_rt_lib0clear(&___nl__5);
#line 476
c_rt_lib0clear(&___nl__6);
#line 476
c_rt_lib0clear(&___nl__0);
#line 476
c_rt_lib0clear(&___nl__1);
#line 476
c_rt_lib0clear(&___nl__2);
#line 476
return NULL;
}

ImmT ptd_system_priv0get_all_ref_in_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 481
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 482
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__0, &___nl__4));
#line 483
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 483
label_3:
#line 483
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 483
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 483
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 483
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 484
c_rt_lib0move(&___nl__8, hash0has_key(*___ref___1, ___nl__5));
#line 484
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 484
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 484
c_rt_lib0clear(&___nl__8);
#line 484
goto label_2;
#line 484
goto label_5;
#line 484
label_5:
#line 484
c_rt_lib0clear(&___nl__8);
#line 485
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 485
c_rt_lib0delete(hash0set_value(___ref___1, ___nl__5, ___nl__8));
#line 485
c_rt_lib0clear(&___nl__8);
#line 486
c_rt_lib0move(&___nl__8, ptd_system0get_ref_type(___nl__5, ___ref___2, ___ref___3));
#line 486
c_rt_lib0copy(&___nl__0, ___nl__8);
#line 486
c_rt_lib0clear(&___nl__8);
#line 487
c_rt_lib0delete(ptd_system_priv0get_all_ref_in_type(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 487
label_2:
#line 488
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 488
goto label_3;
#line 488
label_1:
#line 488
c_rt_lib0clear(&___nl__5);
#line 488
c_rt_lib0clear(&___nl__6);
#line 488
c_rt_lib0clear(&___nl__7);
#line 488
c_rt_lib0clear(&___nl__4);
#line 488
c_rt_lib0clear(&___nl__0);
#line 488
return NULL;
}

ImmT ptd_system_priv0get_ref_in_type(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 492
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(746)));
#line 492
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 493
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(747)));
#line 493
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 495
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(748)));
#line 495
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 497
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(749)));
#line 497
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 501
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(750)));
#line 501
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 503
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(751)));
#line 503
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 504
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(752)));
#line 504
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 505
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(753)));
#line 505
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 512
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(754)));
#line 512
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 512
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 512
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 512
nl_die_arg(___nl__2);
#line 492
label_2:
#line 493
goto label_1;
#line 493
label_3:
#line 493
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(747)));
#line 494
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__3, ___ref___1));
#line 494
c_rt_lib0clear(&___nl__3);
#line 495
goto label_1;
#line 495
label_4:
#line 495
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(748)));
#line 496
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__3, ___ref___1));
#line 496
c_rt_lib0clear(&___nl__3);
#line 497
goto label_1;
#line 497
label_5:
#line 497
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(749)));
#line 498
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 498
label_13:
#line 498
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 498
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 498
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 498
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 499
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__5, ___ref___1));
#line 500
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 500
goto label_13;
#line 500
label_11:
#line 500
c_rt_lib0clear(&___nl__4);
#line 500
c_rt_lib0clear(&___nl__5);
#line 500
c_rt_lib0clear(&___nl__6);
#line 500
c_rt_lib0clear(&___nl__3);
#line 501
goto label_1;
#line 501
label_6:
#line 501
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(750)));
#line 502
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 502
c_rt_lib0delete(hash0set_value(___ref___1, ___nl__3, ___nl__4));
#line 502
c_rt_lib0clear(&___nl__4);
#line 502
c_rt_lib0clear(&___nl__3);
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
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(753)));
#line 506
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 506
label_16:
#line 506
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 506
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 506
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 506
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 507
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(757)));
#line 507
if(c_rt_lib0check_true_native(___nl__7)){ goto label_18;}
#line 508
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(758)));
#line 508
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 508
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 508
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 508
nl_die_arg(___nl__7);
#line 507
label_18:
#line 508
goto label_17;
#line 508
label_19:
#line 508
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(758)));
#line 509
c_rt_lib0delete(ptd_system_priv0get_ref_in_type(___nl__8, ___ref___1));
#line 509
c_rt_lib0clear(&___nl__8);
#line 510
goto label_17;
#line 510
label_17:
#line 510
c_rt_lib0clear(&___nl__7);
#line 511
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 511
goto label_16;
#line 511
label_14:
#line 511
c_rt_lib0clear(&___nl__4);
#line 511
c_rt_lib0clear(&___nl__5);
#line 511
c_rt_lib0clear(&___nl__6);
#line 511
c_rt_lib0clear(&___nl__3);
#line 512
goto label_1;
#line 512
label_10:
#line 513
goto label_1;
#line 513
label_1:
#line 513
c_rt_lib0clear(&___nl__2);
#line 513
c_rt_lib0clear(&___nl__0);
#line 513
return NULL;
}

ImmT ptd_system_priv0get_function_def(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 520
c_rt_lib0move(&___nl__6,___get_global_const(583));
#line 520
c_rt_lib0move(&___nl__5, string0index2(___nl__0, ___nl__6));
#line 520
c_rt_lib0clear(&___nl__6);
#line 521
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 521
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__5, ___nl__6));
#line 521
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 521
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 522
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 522
c_rt_lib0move(&___nl__7, string0substr(___nl__0, ___nl__8, ___nl__5));
#line 522
c_rt_lib0clear(&___nl__8);
#line 522
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 522
c_rt_lib0clear(&___nl__7);
#line 523
c_rt_lib0move(&___nl__8,___get_global_const(139));
#line 523
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__5, ___nl__8));
#line 523
c_rt_lib0move(&___nl__9, string0length(___nl__0));
#line 523
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__5));
#line 523
c_rt_lib0move(&___nl__10,___get_global_const(139));
#line 523
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__10));
#line 523
c_rt_lib0clear(&___nl__10);
#line 523
c_rt_lib0move(&___nl__7, string0substr(___nl__0, ___nl__8, ___nl__9));
#line 523
c_rt_lib0clear(&___nl__9);
#line 523
c_rt_lib0clear(&___nl__8);
#line 523
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 523
c_rt_lib0clear(&___nl__7);
#line 524
goto label_1;
#line 524
label_2:
#line 525
c_rt_lib0move(&___nl__7,___get_global_const(1035));
#line 525
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__0));
#line 525
c_rt_lib0move(&___nl__8,___get_global_const(756));
#line 525
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 525
c_rt_lib0clear(&___nl__8);
#line 525
c_rt_lib0delete(ptd_system_priv0add_error(___ref___2, ___nl__7));
#line 525
c_rt_lib0clear(&___nl__7);
#line 526
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 526
c_rt_lib0clear(&___nl__0);
#line 526
c_rt_lib0clear(&___nl__3);
#line 526
c_rt_lib0clear(&___nl__4);
#line 526
c_rt_lib0clear(&___nl__5);
#line 526
c_rt_lib0clear(&___nl__6);
#line 526
return ___nl__7;
#line 526
c_rt_lib0clear(&___nl__7);
#line 527
goto label_1;
#line 527
label_1:
#line 527
c_rt_lib0clear(&___nl__6);
#line 528
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1034)));
#line 528
c_rt_lib0move(&___nl__6, hash0has_key(___nl__7, ___nl__3));
#line 528
c_rt_lib0clear(&___nl__7);
#line 528
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 528
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 528
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 529
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 529
c_rt_lib0clear(&___nl__0);
#line 529
c_rt_lib0clear(&___nl__3);
#line 529
c_rt_lib0clear(&___nl__4);
#line 529
c_rt_lib0clear(&___nl__5);
#line 529
c_rt_lib0clear(&___nl__6);
#line 529
return ___nl__7;
#line 529
c_rt_lib0clear(&___nl__7);
#line 530
goto label_4;
#line 530
label_4:
#line 530
c_rt_lib0clear(&___nl__6);
#line 531
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1034)));
#line 531
c_rt_lib0move(&___nl__6, hash0get_value(___nl__7, ___nl__3));
#line 531
c_rt_lib0clear(&___nl__7);
#line 532
c_rt_lib0move(&___nl__7, hash0has_key(___nl__6, ___nl__4));
#line 532
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 532
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 532
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 533
c_rt_lib0move(&___nl__8,___get_global_const(1036));
#line 533
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__0));
#line 533
c_rt_lib0move(&___nl__9,___get_global_const(1037));
#line 533
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 533
c_rt_lib0clear(&___nl__9);
#line 533
c_rt_lib0delete(ptd_system_priv0add_error(___ref___2, ___nl__8));
#line 533
c_rt_lib0clear(&___nl__8);
#line 534
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 534
c_rt_lib0clear(&___nl__0);
#line 534
c_rt_lib0clear(&___nl__3);
#line 534
c_rt_lib0clear(&___nl__4);
#line 534
c_rt_lib0clear(&___nl__5);
#line 534
c_rt_lib0clear(&___nl__6);
#line 534
c_rt_lib0clear(&___nl__7);
#line 534
return ___nl__8;
#line 534
c_rt_lib0clear(&___nl__8);
#line 535
goto label_6;
#line 535
label_6:
#line 535
c_rt_lib0clear(&___nl__7);
#line 536
c_rt_lib0move(&___nl__8, hash0get_value(___nl__6, ___nl__4));
#line 536
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 536
c_rt_lib0clear(&___nl__8);
#line 536
c_rt_lib0clear(&___nl__0);
#line 536
c_rt_lib0clear(&___nl__3);
#line 536
c_rt_lib0clear(&___nl__4);
#line 536
c_rt_lib0clear(&___nl__5);
#line 536
c_rt_lib0clear(&___nl__6);
#line 536
return ___nl__7;
#line 536
c_rt_lib0clear(&___nl__7);
#line 536
c_rt_lib0clear(&___nl__3);
#line 536
c_rt_lib0clear(&___nl__4);
#line 536
c_rt_lib0clear(&___nl__5);
#line 536
c_rt_lib0clear(&___nl__6);
#line 536
c_rt_lib0clear(&___nl__0);
#line 536
return NULL;
}

ImmT ptd_system0get_ref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "ptd_system0get_ref_type");
return ptd_system0get_ref_type(_tab[0], &_tab[1], &_tab[2]);}
ImmT ptd_system0get_ref_type(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
ptd_system_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 541
c_rt_lib0move(&___nl__3, ptd_system_priv0get_function_def(___nl__0, ___ref___1, ___ref___2));
#line 542
c_rt_lib0move(&___nl__4, array0len(___nl__3));
#line 542
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 542
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 542
c_rt_lib0clear(&___nl__5);
#line 542
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 542
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 542
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 542
c_rt_lib0clear(&___nl__0);
#line 542
c_rt_lib0clear(&___nl__3);
#line 542
c_rt_lib0clear(&___nl__4);
#line 542
return ___nl__5;
#line 542
c_rt_lib0clear(&___nl__5);
#line 542
goto label_2;
#line 542
label_2:
#line 542
c_rt_lib0clear(&___nl__4);
#line 543
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 543
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 543
c_rt_lib0clear(&___nl__5);
#line 543
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 543
c_rt_lib0clear(&___nl__4);
#line 544
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1034)));
#line 544
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(111)));
#line 544
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__6));
#line 544
c_rt_lib0clear(&___nl__6);
#line 544
c_rt_lib0clear(&___nl__5);
#line 545
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1038)));
#line 545
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(42)));
#line 545
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 547
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(43)));
#line 547
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 547
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 547
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 547
nl_die_arg(___nl__6);
#line 545
label_4:
#line 545
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(42)));
#line 546
c_rt_lib0clear(&___nl__0);
#line 546
c_rt_lib0clear(&___nl__3);
#line 546
c_rt_lib0clear(&___nl__4);
#line 546
c_rt_lib0clear(&___nl__5);
#line 546
c_rt_lib0clear(&___nl__6);
#line 546
return ___nl__7;
#line 546
c_rt_lib0clear(&___nl__7);
#line 547
goto label_3;
#line 547
label_5:
#line 548
goto label_3;
#line 548
label_3:
#line 548
c_rt_lib0clear(&___nl__5);
#line 548
c_rt_lib0clear(&___nl__6);
#line 549
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 550
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(214)));
#line 550
c_rt_lib0move(&___nl__6, ptd_parser0fun_def_to_ptd(___nl__7));
#line 550
c_rt_lib0clear(&___nl__7);
#line 550
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(44)));
#line 550
if(c_rt_lib0check_true_native(___nl__7)){ goto label_7;}
#line 552
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 552
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 552
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 552
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 552
nl_die_arg(___nl__7);
#line 550
label_7:
#line 550
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(44)));
#line 551
c_rt_lib0delete(ptd_system_priv0add_error(___ref___2, ___nl__8));
#line 551
c_rt_lib0clear(&___nl__8);
#line 552
goto label_6;
#line 552
label_8:
#line 552
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 553
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 553
c_rt_lib0clear(&___nl__8);
#line 554
goto label_6;
#line 554
label_6:
#line 554
c_rt_lib0clear(&___nl__6);
#line 554
c_rt_lib0clear(&___nl__7);
#line 555
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(42), ___nl__5));
#line 555
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 555
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(1038), ___nl__7);
#line 555
c_rt_lib0clear(&___nl__6);
#line 555
c_rt_lib0clear(&___nl__7);
#line 556
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 556
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__6, ___nl__3));
#line 556
c_rt_lib0clear(&___nl__6);
#line 557
c_rt_lib0move(&___nl__6,___get_global_const(1034));
#line 557
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 557
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(111)));
#line 557
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__7, ___nl__4));
#line 557
c_rt_lib0clear(&___nl__7);
#line 557
c_rt_lib0move(&___nl__7,___get_global_const(1034));
#line 557
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__7, ___nl__6));
#line 557
c_rt_lib0clear(&___nl__7);
#line 557
c_rt_lib0clear(&___nl__6);
#line 558
c_rt_lib0clear(&___nl__0);
#line 558
c_rt_lib0clear(&___nl__3);
#line 558
c_rt_lib0clear(&___nl__4);
#line 558
return ___nl__5;
#line 558
c_rt_lib0clear(&___nl__3);
#line 558
c_rt_lib0clear(&___nl__4);
#line 558
c_rt_lib0clear(&___nl__5);
#line 558
c_rt_lib0clear(&___nl__0);
#line 558
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void ptd_system_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT ptd_system_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT ptd_system_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
