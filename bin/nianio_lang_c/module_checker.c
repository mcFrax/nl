
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "module_checker.h"
#include "array.h"
#include "ptd.h"
#include "hash.h"
#include "nast.h"
#include "tc_types.h"
#include "tct.h"
#include "string.h"
#include "boolean_t.h"
#include "ptd_parser.h"
#line 1 "module_checker.nl"

static ImmT *__const__f = NULL;
void module_checker_priv0__const__init();
ImmT module_checker_priv0__const__sim(int __nr);
ImmT module_checker_priv0__const__sing(int __nr);

ImmT module_checker_priv0check_module(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT module_checker_priv0get_loop_from_stack(ImmT ___nl__0,ImmT ___nl__1);
ImmT module_checker_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1);
ImmT module_checker_priv0add_warning(ImmT * ___ref___0,ImmT ___nl__1);
ImmT module_checker_priv0set_used_function(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT module_checker_priv0check_types_imported(ImmT ___nl__0,ImmT * ___ref___1);
ImmT module_checker_priv0get_fun_key(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT module_checker_priv0add_fun_used(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT module_checker_priv0check_return_type(ImmT ___nl__0,ImmT * ___ref___1);
ImmT module_checker_priv0check_type(ImmT ___nl__0,ImmT * ___ref___1);
ImmT module_checker_priv0add_var(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT module_checker_priv0use_var(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT module_checker_priv0add_var_dec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT module_checker_priv0check_cmd(ImmT ___nl__0,ImmT * ___ref___1);
ImmT module_checker_priv0check_lvalue(ImmT ___nl__0,ImmT * ___ref___1);
ImmT module_checker_priv0check_val(ImmT ___nl__0,ImmT * ___ref___1);
ImmT module_checker_priv0save_block(ImmT * ___ref___0);
ImmT module_checker_priv0load_block(ImmT * ___ref___0,ImmT ___nl__1);


ImmT module_checker0stack_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0stack_t");
return module_checker0stack_t();}
ImmT module_checker0stack_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(0);}
ImmT module_checker0stack_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 17
c_rt_lib0move(&___nl__1, ptd0sim());
#line 17
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return ___nl__0;
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT module_checker0stack_hash_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0stack_hash_t");
return module_checker0stack_hash_t();}
ImmT module_checker0stack_hash_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(1);}
ImmT module_checker0stack_hash_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 21
c_rt_lib0move(&___nl__1, ptd0sim());
#line 21
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
return ___nl__0;
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return NULL;
}

ImmT module_checker0ret_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0ret_t");
return module_checker0ret_t();}
ImmT module_checker0ret_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(2);}
ImmT module_checker0ret_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 25
c_rt_lib0move(&___nl__3, ptd0sim());
#line 25
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0move(&___nl__3, ptd0none());
#line 25
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(119), ___nl__2, ___get_global_const(45), ___nl__3));
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 25
c_rt_lib0clear(&___nl__1);
#line 25
return ___nl__0;
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
return NULL;
}

ImmT module_checker0modules_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0modules_t");
return module_checker0modules_t();}
ImmT module_checker0modules_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(3);}
ImmT module_checker0modules_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 29
c_rt_lib0move(&___nl__2, ptd0sim());
#line 29
c_rt_lib0move(&___nl__1, ptd0arr(___nl__2));
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 29
c_rt_lib0clear(&___nl__1);
#line 29
return ___nl__0;
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
return NULL;
}

ImmT module_checker0search_loops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "module_checker0search_loops");
return module_checker0search_loops(_tab[0]);}
ImmT module_checker0search_loops(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
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
#line 33
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 34
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 34
label_3:
#line 34
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 34
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 34
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 34
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 35
c_rt_lib0move(&___nl__5, hash0has_key(___nl__1, ___nl__2));
#line 35
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 35
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 35
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 36
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 37
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 38
c_rt_lib0move(&___nl__8, module_checker_priv0check_module(___nl__2, ___nl__0, &___nl__6, &___nl__7, &___nl__1));
#line 38
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(119)));
#line 38
if(c_rt_lib0check_true_native(___nl__9)){ goto label_7;}
#line 40
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 40
if(c_rt_lib0check_true_native(___nl__9)){ goto label_8;}
#line 40
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 40
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 40
nl_die_arg(___nl__9);
#line 38
label_7:
#line 38
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(119)));
#line 39
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(119), ___nl__10));
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
c_rt_lib0clear(&___nl__5);
#line 39
c_rt_lib0clear(&___nl__6);
#line 39
c_rt_lib0clear(&___nl__7);
#line 39
c_rt_lib0clear(&___nl__8);
#line 39
c_rt_lib0clear(&___nl__9);
#line 39
c_rt_lib0clear(&___nl__10);
#line 39
return ___nl__11;
#line 39
c_rt_lib0clear(&___nl__11);
#line 39
c_rt_lib0clear(&___nl__10);
#line 40
goto label_6;
#line 40
label_8:
#line 41
goto label_6;
#line 41
label_6:
#line 41
c_rt_lib0clear(&___nl__8);
#line 41
c_rt_lib0clear(&___nl__9);
#line 41
c_rt_lib0clear(&___nl__6);
#line 41
c_rt_lib0clear(&___nl__7);
#line 42
goto label_5;
#line 42
label_5:
#line 42
c_rt_lib0clear(&___nl__5);
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 43
goto label_3;
#line 43
label_1:
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
return ___nl__2;
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
return NULL;
}

ImmT module_checker_priv0check_module(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
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
#line 49
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 49
c_rt_lib0delete(hash0set_value(___ref___4, ___nl__0, ___nl__5));
#line 49
c_rt_lib0clear(&___nl__5);
#line 50
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 50
c_rt_lib0delete(hash0set_value(___ref___3, ___nl__0, ___nl__5));
#line 50
c_rt_lib0clear(&___nl__5);
#line 51
c_rt_lib0delete(array0push(___ref___2, ___nl__0));
#line 52
c_rt_lib0move(&___nl__5, hash0get_value(___nl__1, ___nl__0));
#line 52
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 52
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 52
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 52
label_3:
#line 52
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 52
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 52
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 53
c_rt_lib0move(&___nl__11, hash0has_key(*___ref___3, ___nl__6));
#line 53
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 53
if(c_rt_lib0check_true_native(___nl__11)){ goto label_5;}
#line 54
c_rt_lib0move(&___nl__12, module_checker_priv0get_loop_from_stack(___nl__6, *___ref___2));
#line 54
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(119), ___nl__12));
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__1);
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
#line 55
goto label_6;
#line 55
label_5:
#line 55
c_rt_lib0move(&___nl__11, hash0has_key(___nl__1, ___nl__6));
#line 55
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__11));
#line 55
if(c_rt_lib0check_true_native(___nl__12)){ goto label_7;}
#line 55
c_rt_lib0move(&___nl__11, hash0has_key(*___ref___4, ___nl__6));
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 55
label_7:
#line 55
c_rt_lib0clear(&___nl__12);
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 55
if(c_rt_lib0check_true_native(___nl__11)){ goto label_6;}
#line 56
c_rt_lib0move(&___nl__12, module_checker_priv0check_module(___nl__6, ___nl__1, ___ref___2, ___ref___3, ___ref___4));
#line 56
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__12, ___get_global_const(119)));
#line 56
if(c_rt_lib0check_true_native(___nl__13)){ goto label_9;}
#line 58
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__12, ___get_global_const(45)));
#line 58
if(c_rt_lib0check_true_native(___nl__13)){ goto label_10;}
#line 58
c_rt_lib0move(&___nl__13,___get_global_const(76));
#line 58
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(2, ___nl__13, ___nl__12));
#line 58
nl_die_arg(___nl__13);
#line 56
label_9:
#line 56
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__12, ___get_global_const(119)));
#line 57
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(119), ___nl__14));
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
c_rt_lib0clear(&___nl__1);
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
c_rt_lib0clear(&___nl__12);
#line 57
c_rt_lib0clear(&___nl__13);
#line 57
c_rt_lib0clear(&___nl__14);
#line 57
return ___nl__15;
#line 57
c_rt_lib0clear(&___nl__15);
#line 57
c_rt_lib0clear(&___nl__14);
#line 58
goto label_8;
#line 58
label_10:
#line 59
goto label_8;
#line 59
label_8:
#line 59
c_rt_lib0clear(&___nl__12);
#line 59
c_rt_lib0clear(&___nl__13);
#line 60
goto label_6;
#line 60
label_6:
#line 60
c_rt_lib0clear(&___nl__11);
#line 61
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 61
goto label_3;
#line 61
label_1:
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
#line 62
c_rt_lib0delete(hash0delete(___ref___3, ___nl__0));
#line 63
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 63
c_rt_lib0move(&___nl__7, array0len(*___ref___2));
#line 63
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 63
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 63
c_rt_lib0clear(&___nl__8);
#line 63
c_rt_lib0move(&___nl__5, array0subarray(*___ref___2, ___nl__6, ___nl__7));
#line 63
c_rt_lib0clear(&___nl__7);
#line 63
c_rt_lib0clear(&___nl__6);
#line 63
c_rt_lib0copy(___ref___2, ___nl__5);
#line 63
c_rt_lib0clear(&___nl__5);
#line 64
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
return ___nl__5;
#line 64
c_rt_lib0clear(&___nl__5);
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
return NULL;
}

ImmT module_checker_priv0get_loop_from_stack(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 68
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 69
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 69
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 69
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 69
label_3:
#line 69
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 69
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 69
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 70
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__3, ___nl__0));
#line 70
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 70
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 70
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 70
c_rt_lib0copy(&___nl__2, ___nl__9);
#line 70
c_rt_lib0clear(&___nl__9);
#line 70
goto label_5;
#line 70
label_5:
#line 70
c_rt_lib0clear(&___nl__8);
#line 71
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 72
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 72
goto label_3;
#line 72
label_1:
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
#line 73
c_rt_lib0delete(array0push(&___nl__2, ___nl__0));
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
c_rt_lib0clear(&___nl__1);
#line 74
return ___nl__2;
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0clear(&___nl__0);
#line 74
c_rt_lib0clear(&___nl__1);
#line 74
return NULL;
}

ImmT module_checker0var_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0var_t");
return module_checker0var_t();}
ImmT module_checker0var_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(4);}
ImmT module_checker0var_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 78
c_rt_lib0move(&___nl__4, ptd0none());
#line 78
c_rt_lib0move(&___nl__5, ptd0none());
#line 78
c_rt_lib0move(&___nl__6, ptd0none());
#line 78
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(298), ___nl__4, ___get_global_const(38), ___nl__5, ___get_global_const(650), ___nl__6));
#line 78
c_rt_lib0clear(&___nl__4);
#line 78
c_rt_lib0clear(&___nl__5);
#line 78
c_rt_lib0clear(&___nl__6);
#line 78
c_rt_lib0move(&___nl__2, ptd0var(___nl__3));
#line 78
c_rt_lib0clear(&___nl__3);
#line 78
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(185), ___get_global_const(73)));
#line 78
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 78
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(185), ___get_global_const(73)));
#line 78
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 78
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(199), ___nl__2, ___get_global_const(208), ___nl__3, ___get_global_const(723), ___nl__4));
#line 78
c_rt_lib0clear(&___nl__2);
#line 78
c_rt_lib0clear(&___nl__3);
#line 78
c_rt_lib0clear(&___nl__4);
#line 78
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 78
c_rt_lib0clear(&___nl__1);
#line 78
return ___nl__0;
#line 78
c_rt_lib0clear(&___nl__0);
#line 78
return NULL;
}

ImmT module_checker0return_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0return_t");
return module_checker0return_t();}
ImmT module_checker0return_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(5);}
ImmT module_checker0return_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 86
c_rt_lib0move(&___nl__2, ptd0none());
#line 86
c_rt_lib0move(&___nl__3, ptd0none());
#line 86
c_rt_lib0move(&___nl__4, ptd0none());
#line 86
c_rt_lib0move(&___nl__5, ptd0none());
#line 86
c_rt_lib0move(&___nl__6, ptd0none());
#line 86
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(724), ___nl__2, ___get_global_const(38), ___nl__3, ___get_global_const(650), ___nl__4, ___get_global_const(725), ___nl__5, ___get_global_const(726), ___nl__6));
#line 86
c_rt_lib0clear(&___nl__2);
#line 86
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0clear(&___nl__4);
#line 86
c_rt_lib0clear(&___nl__5);
#line 86
c_rt_lib0clear(&___nl__6);
#line 86
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 86
c_rt_lib0clear(&___nl__1);
#line 86
return ___nl__0;
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
return NULL;
}

ImmT module_checker0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0state_t");
return module_checker0state_t();}
ImmT module_checker0state_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(6);}
ImmT module_checker0state_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
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
#line 96
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(185), ___get_global_const(73)));
#line 96
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(185), ___get_global_const(73)));
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 96
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(module_checker0return_t0ptr, ___get_global_const(23), ___get_global_const(727)));
#line 96
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 96
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(728), ___nl__5, ___get_global_const(242), ___nl__6));
#line 96
c_rt_lib0clear(&___nl__5);
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 96
c_rt_lib0clear(&___nl__4);
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(module_checker0var_t0ptr, ___get_global_const(23), ___get_global_const(729)));
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 96
c_rt_lib0move(&___nl__4, ptd0hash(___nl__5));
#line 96
c_rt_lib0clear(&___nl__5);
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(tc_types0errors_t0ptr, ___get_global_const(14), ___get_global_const(730)));
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 96
c_rt_lib0move(&___nl__9, ptd0sim());
#line 96
c_rt_lib0move(&___nl__8, ptd0hash(___nl__9));
#line 96
c_rt_lib0clear(&___nl__9);
#line 96
c_rt_lib0move(&___nl__10, ptd0sim());
#line 96
c_rt_lib0move(&___nl__9, ptd0hash(___nl__10));
#line 96
c_rt_lib0clear(&___nl__10);
#line 96
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__8, ___get_global_const(111), ___nl__9));
#line 96
c_rt_lib0clear(&___nl__8);
#line 96
c_rt_lib0clear(&___nl__9);
#line 96
c_rt_lib0move(&___nl__6, ptd0rec(___nl__7));
#line 96
c_rt_lib0clear(&___nl__7);
#line 96
c_rt_lib0move(&___nl__7, ptd0sim());
#line 96
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(6, ___get_global_const(731), ___nl__2, ___get_global_const(75), ___nl__3, ___get_global_const(622), ___nl__4, ___get_global_const(17), ___nl__5, ___get_global_const(732), ___nl__6, ___get_global_const(733), ___nl__7));
#line 96
c_rt_lib0clear(&___nl__2);
#line 96
c_rt_lib0clear(&___nl__3);
#line 96
c_rt_lib0clear(&___nl__4);
#line 96
c_rt_lib0clear(&___nl__5);
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0clear(&___nl__7);
#line 96
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 96
c_rt_lib0clear(&___nl__1);
#line 96
return ___nl__0;
#line 96
c_rt_lib0clear(&___nl__0);
#line 96
return NULL;
}

ImmT module_checker0save_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "module_checker0save_t");
return module_checker0save_t();}
ImmT module_checker0save_t(){
module_checker_priv0__const__init();
return module_checker_priv0__const__sing(7);}
ImmT module_checker0save_t0cal() {
module_checker_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 107
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(185), ___get_global_const(73)));
#line 107
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 107
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(module_checker0var_t0ptr, ___get_global_const(23), ___get_global_const(729)));
#line 107
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 107
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 107
c_rt_lib0clear(&___nl__4);
#line 107
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(731), ___nl__2, ___get_global_const(622), ___nl__3));
#line 107
c_rt_lib0clear(&___nl__2);
#line 107
c_rt_lib0clear(&___nl__3);
#line 107
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 107
c_rt_lib0clear(&___nl__1);
#line 107
return ___nl__0;
#line 107
c_rt_lib0clear(&___nl__0);
#line 107
return NULL;
}

ImmT module_checker_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 111
c_rt_lib0move(&___nl__2,___get_global_const(17));
#line 111
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 111
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(734)));
#line 111
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(111)));
#line 111
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(97)));
#line 111
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 111
c_rt_lib0move(&___nl__7, c_rt_lib0unary_minus(___nl__7));
#line 111
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(5, ___get_global_const(116), ___nl__1, ___get_global_const(113), ___nl__4, ___get_global_const(111), ___nl__5, ___get_global_const(73), ___nl__6, ___get_global_const(154), ___nl__7));
#line 111
c_rt_lib0clear(&___nl__4);
#line 111
c_rt_lib0clear(&___nl__5);
#line 111
c_rt_lib0clear(&___nl__6);
#line 111
c_rt_lib0clear(&___nl__7);
#line 111
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 111
c_rt_lib0clear(&___nl__3);
#line 111
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 111
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 111
c_rt_lib0clear(&___nl__3);
#line 111
c_rt_lib0clear(&___nl__2);
#line 111
c_rt_lib0clear(&___nl__1);
#line 111
return NULL;
}

ImmT module_checker_priv0add_warning(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 116
c_rt_lib0move(&___nl__2,___get_global_const(98));
#line 116
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 116
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(734)));
#line 116
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(111)));
#line 116
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(152)));
#line 116
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 116
c_rt_lib0move(&___nl__7, c_rt_lib0unary_minus(___nl__7));
#line 116
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(5, ___get_global_const(116), ___nl__1, ___get_global_const(113), ___nl__4, ___get_global_const(111), ___nl__5, ___get_global_const(73), ___nl__6, ___get_global_const(154), ___nl__7));
#line 116
c_rt_lib0clear(&___nl__4);
#line 116
c_rt_lib0clear(&___nl__5);
#line 116
c_rt_lib0clear(&___nl__6);
#line 116
c_rt_lib0clear(&___nl__7);
#line 116
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 116
c_rt_lib0clear(&___nl__3);
#line 116
c_rt_lib0move(&___nl__3,___get_global_const(98));
#line 116
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 116
c_rt_lib0clear(&___nl__3);
#line 116
c_rt_lib0clear(&___nl__2);
#line 116
c_rt_lib0clear(&___nl__1);
#line 116
return NULL;
}

ImmT module_checker_priv0set_used_function(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 121
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 121
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__0, ___nl__3));
#line 121
c_rt_lib0clear(&___nl__3);
#line 122
c_rt_lib0move(&___nl__3, hash0get_value(___nl__1, ___nl__0));
#line 122
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 122
label_3:
#line 122
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 122
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 122
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 122
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 123
c_rt_lib0move(&___nl__7, hash0has_key(___nl__1, ___nl__4));
#line 123
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 123
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 123
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 123
c_rt_lib0clear(&___nl__7);
#line 123
goto label_2;
#line 123
goto label_5;
#line 123
label_5:
#line 123
c_rt_lib0clear(&___nl__7);
#line 124
c_rt_lib0move(&___nl__7, hash0has_key(*___ref___2, ___nl__4));
#line 124
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 124
if(c_rt_lib0check_true_native(___nl__7)){ goto label_7;}
#line 124
c_rt_lib0clear(&___nl__7);
#line 124
goto label_2;
#line 124
goto label_7;
#line 124
label_7:
#line 124
c_rt_lib0clear(&___nl__7);
#line 125
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__4, ___nl__1, ___ref___2));
#line 125
label_2:
#line 126
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 126
goto label_3;
#line 126
label_1:
#line 126
c_rt_lib0clear(&___nl__3);
#line 126
c_rt_lib0clear(&___nl__4);
#line 126
c_rt_lib0clear(&___nl__5);
#line 126
c_rt_lib0clear(&___nl__6);
#line 126
c_rt_lib0clear(&___nl__0);
#line 126
c_rt_lib0clear(&___nl__1);
#line 126
return NULL;
}

ImmT module_checker0check_module0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "module_checker0check_module");
return module_checker0check_module(_tab[0]);}
ImmT module_checker0check_module(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
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
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
ImmT ___nl__20 = NULL;
ImmT ___nl__21 = NULL;
#line 130
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 130
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 130
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 130
c_rt_lib0move(&___nl__4, c_rt_lib0unary_minus(___nl__4));
#line 130
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 130
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(17), ___nl__2, ___get_global_const(98), ___nl__3, ___get_global_const(734), ___nl__4, ___get_global_const(111), ___nl__5));
#line 130
c_rt_lib0clear(&___nl__2);
#line 130
c_rt_lib0clear(&___nl__3);
#line 130
c_rt_lib0clear(&___nl__4);
#line 130
c_rt_lib0clear(&___nl__5);
#line 131
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 131
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(72), ___nl__3, ___get_global_const(111), ___nl__4));
#line 131
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 132
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 132
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(728), ___nl__5, ___get_global_const(242), ___nl__6));
#line 132
c_rt_lib0clear(&___nl__5);
#line 132
c_rt_lib0clear(&___nl__6);
#line 132
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 132
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 132
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(6, ___get_global_const(75), ___nl__4, ___get_global_const(733), ___nl__5, ___get_global_const(731), ___nl__6, ___get_global_const(732), ___nl__2, ___get_global_const(622), ___nl__7, ___get_global_const(17), ___nl__1));
#line 132
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0clear(&___nl__5);
#line 132
c_rt_lib0clear(&___nl__6);
#line 132
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 141
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(735)));
#line 142
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 142
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 142
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 142
label_3:
#line 142
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 142
if(c_rt_lib0check_true_native(___nl__11)){ goto label_1;}
#line 142
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 143
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(113)));
#line 143
c_rt_lib0move(&___nl__13,___get_global_const(17));
#line 143
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(___nl__3, ___nl__13));
#line 143
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 143
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(734), ___nl__14);
#line 143
c_rt_lib0move(&___nl__15,___get_global_const(17));
#line 143
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__15, ___nl__13));
#line 143
c_rt_lib0clear(&___nl__15);
#line 143
c_rt_lib0clear(&___nl__12);
#line 143
c_rt_lib0clear(&___nl__13);
#line 143
c_rt_lib0clear(&___nl__14);
#line 144
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 144
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 144
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(622), ___nl__13);
#line 144
c_rt_lib0clear(&___nl__12);
#line 144
c_rt_lib0clear(&___nl__13);
#line 145
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 145
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(736)));
#line 145
c_rt_lib0move(&___nl__14, module_checker_priv0check_return_type(___nl__15, &___nl__3));
#line 145
c_rt_lib0clear(&___nl__15);
#line 145
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(728), ___nl__13, ___get_global_const(242), ___nl__14));
#line 145
c_rt_lib0clear(&___nl__13);
#line 145
c_rt_lib0clear(&___nl__14);
#line 145
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 145
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(75), ___nl__13);
#line 145
c_rt_lib0clear(&___nl__12);
#line 145
c_rt_lib0clear(&___nl__13);
#line 146
c_rt_lib0move(&___nl__12, module_checker_priv0save_block(&___nl__3));
#line 147
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(74)));
#line 147
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 147
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 147
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__13));
#line 147
label_6:
#line 147
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 147
if(c_rt_lib0check_true_native(___nl__18)){ goto label_4;}
#line 147
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__13, ___nl__15));
#line 148
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(78)));
#line 148
c_rt_lib0move(&___nl__20, c_rt_lib0get_false());
#line 148
c_rt_lib0move(&___nl__21, c_rt_lib0get_false());
#line 148
c_rt_lib0delete(module_checker_priv0add_var(___nl__19, ___nl__20, ___nl__21, &___nl__3));
#line 148
c_rt_lib0clear(&___nl__21);
#line 148
c_rt_lib0clear(&___nl__20);
#line 148
c_rt_lib0clear(&___nl__19);
#line 149
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(73)));
#line 149
c_rt_lib0delete(module_checker_priv0check_type(___nl__19, &___nl__3));
#line 149
c_rt_lib0clear(&___nl__19);
#line 150
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(78)));
#line 150
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_none(___get_global_const(737)));
#line 150
c_rt_lib0delete(module_checker_priv0use_var(___nl__19, ___nl__20, &___nl__3));
#line 150
c_rt_lib0clear(&___nl__20);
#line 150
c_rt_lib0clear(&___nl__19);
#line 151
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 151
goto label_6;
#line 151
label_4:
#line 151
c_rt_lib0clear(&___nl__13);
#line 151
c_rt_lib0clear(&___nl__14);
#line 151
c_rt_lib0clear(&___nl__15);
#line 151
c_rt_lib0clear(&___nl__16);
#line 151
c_rt_lib0clear(&___nl__17);
#line 151
c_rt_lib0clear(&___nl__18);
#line 152
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(214)));
#line 152
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__13, &___nl__3));
#line 152
c_rt_lib0clear(&___nl__13);
#line 153
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(74)));
#line 153
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 153
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 153
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__13));
#line 153
label_9:
#line 153
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 153
if(c_rt_lib0check_true_native(___nl__18)){ goto label_7;}
#line 153
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__13, ___nl__15));
#line 154
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(261)));
#line 154
c_rt_lib0move(&___nl__19, c_rt_lib0priv_is(___nl__19, ___get_global_const(5)));
#line 154
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 154
if(c_rt_lib0check_true_native(___nl__19)){ goto label_11;}
#line 155
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(78)));
#line 155
c_rt_lib0move(&___nl__21, c_rt_lib0ov_mk_none(___get_global_const(738)));
#line 155
c_rt_lib0delete(module_checker_priv0use_var(___nl__20, ___nl__21, &___nl__3));
#line 155
c_rt_lib0clear(&___nl__21);
#line 155
c_rt_lib0clear(&___nl__20);
#line 156
goto label_11;
#line 156
label_11:
#line 156
c_rt_lib0clear(&___nl__19);
#line 157
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 157
goto label_9;
#line 157
label_7:
#line 157
c_rt_lib0clear(&___nl__13);
#line 157
c_rt_lib0clear(&___nl__14);
#line 157
c_rt_lib0clear(&___nl__15);
#line 157
c_rt_lib0clear(&___nl__16);
#line 157
c_rt_lib0clear(&___nl__17);
#line 157
c_rt_lib0clear(&___nl__18);
#line 158
c_rt_lib0delete(module_checker_priv0load_block(&___nl__3, ___nl__12));
#line 159
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(75)));
#line 159
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(728)));
#line 159
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 159
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 159
if(c_rt_lib0check_true_native(___nl__13)){ goto label_13;}
#line 160
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(75)));
#line 160
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(242)));
#line 160
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(650)));
#line 160
if(c_rt_lib0check_true_native(___nl__14)){ goto label_16;}
#line 160
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(75)));
#line 160
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(242)));
#line 160
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(726)));
#line 160
label_16:
#line 160
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 160
if(c_rt_lib0check_true_native(___nl__14)){ goto label_15;}
#line 160
c_rt_lib0move(&___nl__15,___get_global_const(17));
#line 160
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__3, ___nl__15));
#line 160
c_rt_lib0move(&___nl__16,___get_global_const(739));
#line 160
c_rt_lib0delete(module_checker_priv0add_error(&___nl__15, ___nl__16));
#line 160
c_rt_lib0clear(&___nl__16);
#line 160
c_rt_lib0move(&___nl__16,___get_global_const(17));
#line 160
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__16, ___nl__15));
#line 160
c_rt_lib0clear(&___nl__16);
#line 160
c_rt_lib0clear(&___nl__15);
#line 160
goto label_15;
#line 160
label_15:
#line 160
c_rt_lib0clear(&___nl__14);
#line 162
goto label_13;
#line 162
label_13:
#line 162
c_rt_lib0clear(&___nl__13);
#line 163
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(332)));
#line 163
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(333)));
#line 163
if(c_rt_lib0check_true_native(___nl__14)){ goto label_18;}
#line 163
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 163
goto label_17;
#line 163
label_18:
#line 163
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 163
label_17:
#line 163
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(78)));
#line 163
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 163
c_rt_lib0move(&___nl__13, module_checker_priv0get_fun_key(___nl__14, ___nl__15, ___nl__16));
#line 163
c_rt_lib0clear(&___nl__16);
#line 163
c_rt_lib0clear(&___nl__15);
#line 163
c_rt_lib0clear(&___nl__14);
#line 164
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(732)));
#line 164
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(72)));
#line 164
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__13, ___nl__14));
#line 164
c_rt_lib0clear(&___nl__14);
#line 165
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(332)));
#line 165
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(334)));
#line 165
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 165
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 165
if(c_rt_lib0check_true_native(___nl__14)){ goto label_20;}
#line 165
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 165
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__13, ___nl__15));
#line 165
c_rt_lib0clear(&___nl__15);
#line 165
goto label_20;
#line 165
label_20:
#line 165
c_rt_lib0clear(&___nl__14);
#line 166
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(0));
#line 166
c_rt_lib0move(&___nl__15,___get_global_const(732));
#line 166
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__3, ___nl__15));
#line 166
c_rt_lib0copy(&___nl__16, ___nl__14);
#line 166
c_rt_lib0hash_set_value_dec(&___nl__15, ___get_global_const(72), ___nl__16);
#line 166
c_rt_lib0move(&___nl__17,___get_global_const(732));
#line 166
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__17, ___nl__15));
#line 166
c_rt_lib0clear(&___nl__17);
#line 166
c_rt_lib0clear(&___nl__14);
#line 166
c_rt_lib0clear(&___nl__15);
#line 166
c_rt_lib0clear(&___nl__16);
#line 166
c_rt_lib0clear(&___nl__12);
#line 166
c_rt_lib0clear(&___nl__13);
#line 167
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 167
goto label_3;
#line 167
label_1:
#line 167
c_rt_lib0clear(&___nl__6);
#line 167
c_rt_lib0clear(&___nl__7);
#line 167
c_rt_lib0clear(&___nl__8);
#line 167
c_rt_lib0clear(&___nl__9);
#line 167
c_rt_lib0clear(&___nl__10);
#line 167
c_rt_lib0clear(&___nl__11);
#line 168
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 169
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(128)));
#line 169
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 169
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 169
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__7));
#line 169
label_23:
#line 169
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 169
if(c_rt_lib0check_true_native(___nl__12)){ goto label_21;}
#line 169
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 170
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(113)));
#line 170
c_rt_lib0move(&___nl__14,___get_global_const(17));
#line 170
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(___nl__3, ___nl__14));
#line 170
c_rt_lib0copy(&___nl__15, ___nl__13);
#line 170
c_rt_lib0hash_set_value_dec(&___nl__14, ___get_global_const(734), ___nl__15);
#line 170
c_rt_lib0move(&___nl__16,___get_global_const(17));
#line 170
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__16, ___nl__14));
#line 170
c_rt_lib0clear(&___nl__16);
#line 170
c_rt_lib0clear(&___nl__13);
#line 170
c_rt_lib0clear(&___nl__14);
#line 170
c_rt_lib0clear(&___nl__15);
#line 171
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(78)));
#line 171
c_rt_lib0move(&___nl__13, hash0has_key(___nl__6, ___nl__14));
#line 171
c_rt_lib0clear(&___nl__14);
#line 171
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 171
if(c_rt_lib0check_true_native(___nl__13)){ goto label_25;}
#line 171
c_rt_lib0move(&___nl__14,___get_global_const(17));
#line 171
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(___nl__3, ___nl__14));
#line 171
c_rt_lib0move(&___nl__15,___get_global_const(740));
#line 171
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(78)));
#line 171
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 171
c_rt_lib0clear(&___nl__16);
#line 171
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__14, ___nl__15));
#line 171
c_rt_lib0clear(&___nl__15);
#line 171
c_rt_lib0move(&___nl__15,___get_global_const(17));
#line 171
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__15, ___nl__14));
#line 171
c_rt_lib0clear(&___nl__15);
#line 171
c_rt_lib0clear(&___nl__14);
#line 171
goto label_25;
#line 171
label_25:
#line 171
c_rt_lib0clear(&___nl__13);
#line 172
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(732)));
#line 172
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(111)));
#line 172
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(78)));
#line 172
c_rt_lib0move(&___nl__13, hash0has_key(___nl__14, ___nl__15));
#line 172
c_rt_lib0clear(&___nl__15);
#line 172
c_rt_lib0clear(&___nl__14);
#line 172
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 172
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 172
if(c_rt_lib0check_true_native(___nl__13)){ goto label_27;}
#line 172
c_rt_lib0move(&___nl__14,___get_global_const(17));
#line 172
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(___nl__3, ___nl__14));
#line 172
c_rt_lib0move(&___nl__15,___get_global_const(741));
#line 172
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(78)));
#line 172
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 172
c_rt_lib0clear(&___nl__16);
#line 172
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__14, ___nl__15));
#line 172
c_rt_lib0clear(&___nl__15);
#line 172
c_rt_lib0move(&___nl__15,___get_global_const(17));
#line 172
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__15, ___nl__14));
#line 172
c_rt_lib0clear(&___nl__15);
#line 172
c_rt_lib0clear(&___nl__14);
#line 172
goto label_27;
#line 172
label_27:
#line 172
c_rt_lib0clear(&___nl__13);
#line 174
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(78)));
#line 174
c_rt_lib0move(&___nl__14, c_rt_lib0get_true());
#line 174
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__13, ___nl__14));
#line 174
c_rt_lib0clear(&___nl__14);
#line 174
c_rt_lib0clear(&___nl__13);
#line 175
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 175
goto label_23;
#line 175
label_21:
#line 175
c_rt_lib0clear(&___nl__7);
#line 175
c_rt_lib0clear(&___nl__8);
#line 175
c_rt_lib0clear(&___nl__9);
#line 175
c_rt_lib0clear(&___nl__10);
#line 175
c_rt_lib0clear(&___nl__11);
#line 175
c_rt_lib0clear(&___nl__12);
#line 176
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(732)));
#line 176
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(111)));
#line 176
c_rt_lib0move(&___nl__10, c_rt_lib0init_iter(___nl__7));
#line 176
label_30:
#line 176
c_rt_lib0move(&___nl__8, c_rt_lib0is_end_hash(___nl__10));
#line 176
if(c_rt_lib0check_true_native(___nl__8)){ goto label_28;}
#line 176
c_rt_lib0move(&___nl__8, c_rt_lib0get_key_iter(___nl__10));
#line 176
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value(___nl__7, ___nl__8));
#line 177
c_rt_lib0move(&___nl__11,___get_global_const(17));
#line 177
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__3, ___nl__11));
#line 177
c_rt_lib0copy(&___nl__12, ___nl__9);
#line 177
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(734), ___nl__12);
#line 177
c_rt_lib0move(&___nl__13,___get_global_const(17));
#line 177
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__13, ___nl__11));
#line 177
c_rt_lib0clear(&___nl__13);
#line 177
c_rt_lib0clear(&___nl__11);
#line 177
c_rt_lib0clear(&___nl__12);
#line 178
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 178
c_rt_lib0move(&___nl__11, c_rt_lib0eq(___nl__11, ___nl__8));
#line 178
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 178
if(c_rt_lib0check_true_native(___nl__11)){ goto label_32;}
#line 178
c_rt_lib0clear(&___nl__11);
#line 178
goto label_29;
#line 178
goto label_32;
#line 178
label_32:
#line 178
c_rt_lib0clear(&___nl__11);
#line 179
c_rt_lib0move(&___nl__11, hash0has_key(___nl__6, ___nl__8));
#line 179
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 179
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 179
if(c_rt_lib0check_true_native(___nl__11)){ goto label_34;}
#line 179
c_rt_lib0move(&___nl__12,___get_global_const(17));
#line 179
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(___nl__3, ___nl__12));
#line 179
c_rt_lib0move(&___nl__13,___get_global_const(742));
#line 179
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__8));
#line 179
c_rt_lib0move(&___nl__14,___get_global_const(743));
#line 179
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 179
c_rt_lib0clear(&___nl__14);
#line 179
c_rt_lib0delete(module_checker_priv0add_error(&___nl__12, ___nl__13));
#line 179
c_rt_lib0clear(&___nl__13);
#line 179
c_rt_lib0move(&___nl__13,___get_global_const(17));
#line 179
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__13, ___nl__12));
#line 179
c_rt_lib0clear(&___nl__13);
#line 179
c_rt_lib0clear(&___nl__12);
#line 179
goto label_34;
#line 179
label_34:
#line 179
c_rt_lib0clear(&___nl__11);
#line 179
label_29:
#line 180
c_rt_lib0move(&___nl__10, c_rt_lib0next_iter(___nl__10));
#line 180
goto label_30;
#line 180
label_28:
#line 180
c_rt_lib0clear(&___nl__7);
#line 180
c_rt_lib0clear(&___nl__8);
#line 180
c_rt_lib0clear(&___nl__9);
#line 180
c_rt_lib0clear(&___nl__10);
#line 181
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 182
c_rt_lib0move(&___nl__10, c_rt_lib0init_iter(___nl__7));
#line 182
label_37:
#line 182
c_rt_lib0move(&___nl__8, c_rt_lib0is_end_hash(___nl__10));
#line 182
if(c_rt_lib0check_true_native(___nl__8)){ goto label_35;}
#line 182
c_rt_lib0move(&___nl__8, c_rt_lib0get_key_iter(___nl__10));
#line 182
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value(___nl__7, ___nl__8));
#line 183
c_rt_lib0delete(module_checker_priv0set_used_function(___nl__8, ___nl__4, &___nl__5));
#line 184
c_rt_lib0move(&___nl__10, c_rt_lib0next_iter(___nl__10));
#line 184
goto label_37;
#line 184
label_35:
#line 184
c_rt_lib0clear(&___nl__8);
#line 184
c_rt_lib0clear(&___nl__9);
#line 184
c_rt_lib0clear(&___nl__10);
#line 185
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(735)));
#line 185
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 185
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 185
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 185
label_40:
#line 185
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 185
if(c_rt_lib0check_true_native(___nl__13)){ goto label_38;}
#line 185
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 186
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(332)));
#line 186
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(333)));
#line 186
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 186
if(c_rt_lib0check_true_native(___nl__14)){ goto label_42;}
#line 186
c_rt_lib0clear(&___nl__14);
#line 186
goto label_39;
#line 186
goto label_42;
#line 186
label_42:
#line 186
c_rt_lib0clear(&___nl__14);
#line 187
c_rt_lib0move(&___nl__15,___get_global_const(744));
#line 187
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 187
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 187
c_rt_lib0clear(&___nl__16);
#line 187
c_rt_lib0move(&___nl__16,___get_global_const(583));
#line 187
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 187
c_rt_lib0clear(&___nl__16);
#line 187
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(78)));
#line 187
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 187
c_rt_lib0clear(&___nl__16);
#line 187
c_rt_lib0move(&___nl__14, hash0has_key(___nl__5, ___nl__15));
#line 187
c_rt_lib0clear(&___nl__15);
#line 187
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 187
if(c_rt_lib0check_true_native(___nl__14)){ goto label_44;}
#line 187
c_rt_lib0clear(&___nl__14);
#line 187
goto label_39;
#line 187
goto label_44;
#line 187
label_44:
#line 187
c_rt_lib0clear(&___nl__14);
#line 188
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(113)));
#line 188
c_rt_lib0move(&___nl__15,___get_global_const(17));
#line 188
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__3, ___nl__15));
#line 188
c_rt_lib0copy(&___nl__16, ___nl__14);
#line 188
c_rt_lib0hash_set_value_dec(&___nl__15, ___get_global_const(734), ___nl__16);
#line 188
c_rt_lib0move(&___nl__17,___get_global_const(17));
#line 188
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__17, ___nl__15));
#line 188
c_rt_lib0clear(&___nl__17);
#line 188
c_rt_lib0clear(&___nl__14);
#line 188
c_rt_lib0clear(&___nl__15);
#line 188
c_rt_lib0clear(&___nl__16);
#line 189
c_rt_lib0move(&___nl__14,___get_global_const(17));
#line 189
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(___nl__3, ___nl__14));
#line 189
c_rt_lib0move(&___nl__15,___get_global_const(745));
#line 189
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 189
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 189
c_rt_lib0clear(&___nl__16);
#line 189
c_rt_lib0move(&___nl__16,___get_global_const(584));
#line 189
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 189
c_rt_lib0clear(&___nl__16);
#line 189
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(78)));
#line 189
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 189
c_rt_lib0clear(&___nl__16);
#line 189
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__14, ___nl__15));
#line 189
c_rt_lib0clear(&___nl__15);
#line 189
c_rt_lib0move(&___nl__15,___get_global_const(17));
#line 189
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__15, ___nl__14));
#line 189
c_rt_lib0clear(&___nl__15);
#line 189
c_rt_lib0clear(&___nl__14);
#line 189
label_39:
#line 190
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 190
goto label_40;
#line 190
label_38:
#line 190
c_rt_lib0clear(&___nl__8);
#line 190
c_rt_lib0clear(&___nl__9);
#line 190
c_rt_lib0clear(&___nl__10);
#line 190
c_rt_lib0clear(&___nl__11);
#line 190
c_rt_lib0clear(&___nl__12);
#line 190
c_rt_lib0clear(&___nl__13);
#line 191
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(17)));
#line 191
c_rt_lib0clear(&___nl__0);
#line 191
c_rt_lib0clear(&___nl__1);
#line 191
c_rt_lib0clear(&___nl__2);
#line 191
c_rt_lib0clear(&___nl__3);
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0clear(&___nl__6);
#line 191
c_rt_lib0clear(&___nl__7);
#line 191
return ___nl__8;
#line 191
c_rt_lib0clear(&___nl__8);
#line 191
c_rt_lib0clear(&___nl__1);
#line 191
c_rt_lib0clear(&___nl__2);
#line 191
c_rt_lib0clear(&___nl__3);
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0clear(&___nl__6);
#line 191
c_rt_lib0clear(&___nl__7);
#line 191
c_rt_lib0clear(&___nl__0);
#line 191
return NULL;
}

ImmT module_checker_priv0check_types_imported(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 195
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(746)));
#line 195
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 196
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(747)));
#line 196
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 198
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(748)));
#line 198
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 200
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(749)));
#line 200
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 204
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(750)));
#line 204
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 213
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(751)));
#line 213
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 214
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(752)));
#line 214
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 215
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(753)));
#line 215
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 222
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(754)));
#line 222
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 222
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 222
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 222
nl_die_arg(___nl__2);
#line 195
label_2:
#line 196
goto label_1;
#line 196
label_3:
#line 196
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(747)));
#line 197
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__3, ___ref___1));
#line 197
c_rt_lib0clear(&___nl__3);
#line 198
goto label_1;
#line 198
label_4:
#line 198
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(748)));
#line 199
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__3, ___ref___1));
#line 199
c_rt_lib0clear(&___nl__3);
#line 200
goto label_1;
#line 200
label_5:
#line 200
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(749)));
#line 201
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 201
label_13:
#line 201
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 201
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 201
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 201
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 202
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__5, ___ref___1));
#line 203
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 203
goto label_13;
#line 203
label_11:
#line 203
c_rt_lib0clear(&___nl__4);
#line 203
c_rt_lib0clear(&___nl__5);
#line 203
c_rt_lib0clear(&___nl__6);
#line 203
c_rt_lib0clear(&___nl__3);
#line 204
goto label_1;
#line 204
label_6:
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(750)));
#line 205
c_rt_lib0move(&___nl__5,___get_global_const(583));
#line 205
c_rt_lib0move(&___nl__4, string0index2(___nl__3, ___nl__5));
#line 205
c_rt_lib0clear(&___nl__5);
#line 206
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 206
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__4, ___nl__5));
#line 206
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 206
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 207
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 207
c_rt_lib0move(&___nl__6, string0substr(___nl__3, ___nl__7, ___nl__4));
#line 207
c_rt_lib0clear(&___nl__7);
#line 208
c_rt_lib0move(&___nl__8,___get_global_const(139));
#line 208
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__4, ___nl__8));
#line 208
c_rt_lib0move(&___nl__9, string0length(___nl__3));
#line 208
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__4));
#line 208
c_rt_lib0move(&___nl__10,___get_global_const(139));
#line 208
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__10));
#line 208
c_rt_lib0clear(&___nl__10);
#line 208
c_rt_lib0move(&___nl__7, string0substr(___nl__3, ___nl__8, ___nl__9));
#line 208
c_rt_lib0clear(&___nl__9);
#line 208
c_rt_lib0clear(&___nl__8);
#line 209
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__6, ___nl__7, ___ref___1));
#line 209
c_rt_lib0clear(&___nl__6);
#line 209
c_rt_lib0clear(&___nl__7);
#line 210
goto label_14;
#line 210
label_15:
#line 211
c_rt_lib0move(&___nl__6,___get_global_const(17));
#line 211
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 211
c_rt_lib0move(&___nl__7,___get_global_const(755));
#line 211
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 211
c_rt_lib0move(&___nl__8,___get_global_const(756));
#line 211
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 211
c_rt_lib0clear(&___nl__8);
#line 211
c_rt_lib0delete(module_checker_priv0add_error(&___nl__6, ___nl__7));
#line 211
c_rt_lib0clear(&___nl__7);
#line 211
c_rt_lib0move(&___nl__7,___get_global_const(17));
#line 211
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__7, ___nl__6));
#line 211
c_rt_lib0clear(&___nl__7);
#line 211
c_rt_lib0clear(&___nl__6);
#line 212
goto label_14;
#line 212
label_14:
#line 212
c_rt_lib0clear(&___nl__5);
#line 212
c_rt_lib0clear(&___nl__4);
#line 212
c_rt_lib0clear(&___nl__3);
#line 213
goto label_1;
#line 213
label_7:
#line 214
goto label_1;
#line 214
label_8:
#line 215
goto label_1;
#line 215
label_9:
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(753)));
#line 216
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 216
label_18:
#line 216
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 216
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 216
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 216
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 217
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(757)));
#line 217
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(758)));
#line 218
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 218
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 218
nl_die_arg(___nl__7);
#line 217
label_20:
#line 218
goto label_19;
#line 218
label_21:
#line 218
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(758)));
#line 219
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__8, ___ref___1));
#line 219
c_rt_lib0clear(&___nl__8);
#line 220
goto label_19;
#line 220
label_19:
#line 220
c_rt_lib0clear(&___nl__7);
#line 221
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 221
goto label_18;
#line 221
label_16:
#line 221
c_rt_lib0clear(&___nl__4);
#line 221
c_rt_lib0clear(&___nl__5);
#line 221
c_rt_lib0clear(&___nl__6);
#line 221
c_rt_lib0clear(&___nl__3);
#line 222
goto label_1;
#line 222
label_10:
#line 223
goto label_1;
#line 223
label_1:
#line 223
c_rt_lib0clear(&___nl__2);
#line 223
c_rt_lib0clear(&___nl__0);
#line 223
return NULL;
}

ImmT module_checker_priv0get_fun_key(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
module_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 227
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 227
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__0, ___nl__3));
#line 227
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 227
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 227
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 227
c_rt_lib0move(&___nl__4,___get_global_const(583));
#line 227
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__0, ___nl__4));
#line 227
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 227
c_rt_lib0clear(&___nl__0);
#line 227
c_rt_lib0clear(&___nl__1);
#line 227
c_rt_lib0clear(&___nl__2);
#line 227
c_rt_lib0clear(&___nl__3);
#line 227
return ___nl__4;
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
goto label_2;
#line 227
label_2:
#line 227
c_rt_lib0clear(&___nl__3);
#line 228
c_rt_lib0move(&___nl__3,___get_global_const(744));
#line 228
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 228
c_rt_lib0move(&___nl__4,___get_global_const(583));
#line 228
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 228
c_rt_lib0clear(&___nl__4);
#line 228
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 228
c_rt_lib0clear(&___nl__0);
#line 228
c_rt_lib0clear(&___nl__1);
#line 228
c_rt_lib0clear(&___nl__2);
#line 228
return ___nl__3;
#line 228
c_rt_lib0clear(&___nl__3);
#line 228
c_rt_lib0clear(&___nl__0);
#line 228
c_rt_lib0clear(&___nl__1);
#line 228
c_rt_lib0clear(&___nl__2);
#line 228
return NULL;
}

ImmT module_checker_priv0add_fun_used(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 232
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(733)));
#line 232
c_rt_lib0move(&___nl__3, module_checker_priv0get_fun_key(___nl__0, ___nl__1, ___nl__4));
#line 232
c_rt_lib0clear(&___nl__4);
#line 233
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(732)));
#line 233
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(72)));
#line 233
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__3));
#line 233
c_rt_lib0clear(&___nl__5);
#line 233
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 233
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 233
c_rt_lib0clear(&___nl__0);
#line 233
c_rt_lib0clear(&___nl__1);
#line 233
c_rt_lib0clear(&___nl__3);
#line 233
c_rt_lib0clear(&___nl__4);
#line 233
return NULL;
#line 233
goto label_2;
#line 233
label_2:
#line 233
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0move(&___nl__4,___get_global_const(732));
#line 234
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 234
c_rt_lib0move(&___nl__5,___get_global_const(72));
#line 234
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 234
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(17)));
#line 234
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(734)));
#line 234
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__3, ___nl__6));
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
c_rt_lib0move(&___nl__6,___get_global_const(72));
#line 234
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 234
c_rt_lib0move(&___nl__6,___get_global_const(732));
#line 234
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__6, ___nl__4));
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0clear(&___nl__5);
#line 235
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 235
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__0, ___nl__4));
#line 235
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 235
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(732)));
#line 235
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(111)));
#line 235
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__0));
#line 235
c_rt_lib0clear(&___nl__5);
#line 235
label_5:
#line 235
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 235
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 235
c_rt_lib0clear(&___nl__0);
#line 235
c_rt_lib0clear(&___nl__1);
#line 235
c_rt_lib0clear(&___nl__3);
#line 235
c_rt_lib0clear(&___nl__4);
#line 235
return NULL;
#line 235
goto label_4;
#line 235
label_4:
#line 235
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(732));
#line 236
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 236
c_rt_lib0move(&___nl__5,___get_global_const(111));
#line 236
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 236
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(17)));
#line 236
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(734)));
#line 236
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__0, ___nl__6));
#line 236
c_rt_lib0clear(&___nl__6);
#line 236
c_rt_lib0move(&___nl__6,___get_global_const(111));
#line 236
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 236
c_rt_lib0move(&___nl__6,___get_global_const(732));
#line 236
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__6, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__6);
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0clear(&___nl__5);
#line 236
c_rt_lib0clear(&___nl__3);
#line 236
c_rt_lib0clear(&___nl__0);
#line 236
c_rt_lib0clear(&___nl__1);
#line 236
return NULL;
}

ImmT module_checker_priv0check_return_type(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 240
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(38)));
#line 240
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 242
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(73)));
#line 242
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 242
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 242
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 242
nl_die_arg(___nl__2);
#line 240
label_2:
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 241
c_rt_lib0clear(&___nl__0);
#line 241
c_rt_lib0clear(&___nl__2);
#line 241
return ___nl__3;
#line 241
c_rt_lib0clear(&___nl__3);
#line 242
goto label_1;
#line 242
label_3:
#line 242
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(73)));
#line 243
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 243
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(759)));
#line 243
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 243
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 244
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 244
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(759)));
#line 245
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(111)));
#line 245
c_rt_lib0move(&___nl__8,___get_global_const(625));
#line 245
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 245
c_rt_lib0clear(&___nl__8);
#line 245
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 245
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 245
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(78)));
#line 245
c_rt_lib0move(&___nl__8,___get_global_const(724));
#line 245
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 245
c_rt_lib0clear(&___nl__8);
#line 245
label_8:
#line 245
c_rt_lib0clear(&___nl__7);
#line 245
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 245
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 246
c_rt_lib0move(&___nl__7,___get_global_const(625));
#line 246
c_rt_lib0move(&___nl__8,___get_global_const(724));
#line 246
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__7, ___nl__8, ___ref___1));
#line 246
c_rt_lib0clear(&___nl__8);
#line 246
c_rt_lib0clear(&___nl__7);
#line 247
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(724)));
#line 247
c_rt_lib0clear(&___nl__0);
#line 247
c_rt_lib0clear(&___nl__2);
#line 247
c_rt_lib0clear(&___nl__3);
#line 247
c_rt_lib0clear(&___nl__4);
#line 247
c_rt_lib0clear(&___nl__5);
#line 247
c_rt_lib0clear(&___nl__6);
#line 247
return ___nl__7;
#line 247
c_rt_lib0clear(&___nl__7);
#line 248
goto label_7;
#line 248
label_7:
#line 248
c_rt_lib0clear(&___nl__6);
#line 248
c_rt_lib0clear(&___nl__5);
#line 249
goto label_5;
#line 249
label_5:
#line 249
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0clear(&___nl__3);
#line 250
goto label_1;
#line 250
label_1:
#line 250
c_rt_lib0clear(&___nl__2);
#line 251
c_rt_lib0delete(module_checker_priv0check_type(___nl__0, ___ref___1));
#line 252
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(650)));
#line 252
c_rt_lib0clear(&___nl__0);
#line 252
return ___nl__2;
#line 252
c_rt_lib0clear(&___nl__2);
#line 252
c_rt_lib0clear(&___nl__0);
#line 252
return NULL;
}

ImmT module_checker_priv0check_type(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 256
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(38)));
#line 256
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 257
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(73)));
#line 257
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 257
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 257
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 257
nl_die_arg(___nl__2);
#line 256
label_2:
#line 257
goto label_1;
#line 257
label_3:
#line 257
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(73)));
#line 258
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 258
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(759)));
#line 258
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 258
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 259
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 259
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(759)));
#line 260
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(111)));
#line 260
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(78)));
#line 260
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__6, ___nl__7, ___ref___1));
#line 260
c_rt_lib0clear(&___nl__7);
#line 260
c_rt_lib0clear(&___nl__6);
#line 260
c_rt_lib0clear(&___nl__5);
#line 261
goto label_5;
#line 261
label_5:
#line 261
c_rt_lib0clear(&___nl__4);
#line 262
c_rt_lib0move(&___nl__4, ptd_parser0try_value_to_ptd(___nl__3));
#line 262
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 262
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 264
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 264
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 264
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 264
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 264
nl_die_arg(___nl__5);
#line 262
label_7:
#line 262
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 263
c_rt_lib0move(&___nl__7,___get_global_const(17));
#line 263
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 263
c_rt_lib0delete(module_checker_priv0add_error(&___nl__7, ___nl__6));
#line 263
c_rt_lib0move(&___nl__8,___get_global_const(17));
#line 263
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__7));
#line 263
c_rt_lib0clear(&___nl__8);
#line 263
c_rt_lib0clear(&___nl__7);
#line 263
c_rt_lib0clear(&___nl__6);
#line 264
goto label_6;
#line 264
label_8:
#line 264
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(45)));
#line 265
c_rt_lib0delete(module_checker_priv0check_types_imported(___nl__6, ___ref___1));
#line 265
c_rt_lib0clear(&___nl__6);
#line 266
goto label_6;
#line 266
label_6:
#line 266
c_rt_lib0clear(&___nl__4);
#line 266
c_rt_lib0clear(&___nl__5);
#line 266
c_rt_lib0clear(&___nl__3);
#line 267
goto label_1;
#line 267
label_1:
#line 267
c_rt_lib0clear(&___nl__2);
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
return NULL;
}

ImmT module_checker_priv0add_var(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
module_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 272
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(622)));
#line 272
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__0));
#line 272
c_rt_lib0clear(&___nl__5);
#line 272
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 272
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 273
c_rt_lib0move(&___nl__5,___get_global_const(17));
#line 273
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___3, ___nl__5));
#line 273
c_rt_lib0move(&___nl__6,___get_global_const(760));
#line 273
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__0));
#line 273
c_rt_lib0delete(module_checker_priv0add_error(&___nl__5, ___nl__6));
#line 273
c_rt_lib0clear(&___nl__6);
#line 273
c_rt_lib0move(&___nl__6,___get_global_const(17));
#line 273
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___3, ___nl__6, ___nl__5));
#line 273
c_rt_lib0clear(&___nl__6);
#line 273
c_rt_lib0clear(&___nl__5);
#line 274
goto label_2;
#line 274
label_2:
#line 274
c_rt_lib0clear(&___nl__4);
#line 275
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 275
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 275
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(199), ___nl__5, ___get_global_const(208), ___nl__6, ___get_global_const(723), ___nl__2));
#line 275
c_rt_lib0clear(&___nl__5);
#line 275
c_rt_lib0clear(&___nl__6);
#line 276
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 276
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 276
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 276
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(298)));
#line 276
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 276
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(199), ___nl__7);
#line 276
c_rt_lib0clear(&___nl__6);
#line 276
c_rt_lib0clear(&___nl__7);
#line 276
goto label_4;
#line 276
label_4:
#line 276
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0move(&___nl__5,___get_global_const(622));
#line 277
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___3, ___nl__5));
#line 277
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__0, ___nl__4));
#line 277
c_rt_lib0move(&___nl__6,___get_global_const(622));
#line 277
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___3, ___nl__6, ___nl__5));
#line 277
c_rt_lib0clear(&___nl__6);
#line 277
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0clear(&___nl__0);
#line 277
c_rt_lib0clear(&___nl__1);
#line 277
c_rt_lib0clear(&___nl__2);
#line 277
return NULL;
}

ImmT module_checker_priv0use_var(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 282
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(622)));
#line 282
c_rt_lib0move(&___nl__3, hash0has_key(___nl__4, ___nl__0));
#line 282
c_rt_lib0clear(&___nl__4);
#line 282
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 282
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 282
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 283
c_rt_lib0move(&___nl__4,___get_global_const(17));
#line 283
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 283
c_rt_lib0move(&___nl__5,___get_global_const(761));
#line 283
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__0));
#line 283
c_rt_lib0delete(module_checker_priv0add_error(&___nl__4, ___nl__5));
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
c_rt_lib0move(&___nl__5,___get_global_const(17));
#line 283
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__5, ___nl__4));
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
c_rt_lib0clear(&___nl__4);
#line 284
c_rt_lib0clear(&___nl__0);
#line 284
c_rt_lib0clear(&___nl__1);
#line 284
c_rt_lib0clear(&___nl__3);
#line 284
return NULL;
#line 285
goto label_2;
#line 285
label_2:
#line 285
c_rt_lib0clear(&___nl__3);
#line 286
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(622)));
#line 286
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__0));
#line 286
c_rt_lib0clear(&___nl__4);
#line 287
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(738)));
#line 287
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 289
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(737)));
#line 289
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 295
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__1, ___get_global_const(261)));
#line 295
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 295
c_rt_lib0move(&___nl__4,___get_global_const(76));
#line 295
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__1));
#line 295
nl_die_arg(___nl__4);
#line 287
label_4:
#line 288
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 288
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 288
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(208), ___nl__6);
#line 288
c_rt_lib0clear(&___nl__5);
#line 288
c_rt_lib0clear(&___nl__6);
#line 289
goto label_3;
#line 289
label_5:
#line 290
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(199)));
#line 290
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(298)));
#line 290
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 290
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 291
c_rt_lib0move(&___nl__6,___get_global_const(17));
#line 291
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___2, ___nl__6));
#line 291
c_rt_lib0move(&___nl__7,___get_global_const(762));
#line 291
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__0));
#line 291
c_rt_lib0delete(module_checker_priv0add_error(&___nl__6, ___nl__7));
#line 291
c_rt_lib0clear(&___nl__7);
#line 291
c_rt_lib0move(&___nl__7,___get_global_const(17));
#line 291
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__7, ___nl__6));
#line 291
c_rt_lib0clear(&___nl__7);
#line 291
c_rt_lib0clear(&___nl__6);
#line 292
c_rt_lib0clear(&___nl__0);
#line 292
c_rt_lib0clear(&___nl__1);
#line 292
c_rt_lib0clear(&___nl__3);
#line 292
c_rt_lib0clear(&___nl__4);
#line 292
c_rt_lib0clear(&___nl__5);
#line 292
return NULL;
#line 293
goto label_8;
#line 293
label_8:
#line 293
c_rt_lib0clear(&___nl__5);
#line 294
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(650)));
#line 294
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 294
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(199), ___nl__6);
#line 294
c_rt_lib0clear(&___nl__5);
#line 294
c_rt_lib0clear(&___nl__6);
#line 295
goto label_3;
#line 295
label_6:
#line 296
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 296
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 296
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(208), ___nl__6);
#line 296
c_rt_lib0clear(&___nl__5);
#line 296
c_rt_lib0clear(&___nl__6);
#line 297
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(199)));
#line 297
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(298)));
#line 297
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 297
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 298
c_rt_lib0move(&___nl__6,___get_global_const(17));
#line 298
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___2, ___nl__6));
#line 298
c_rt_lib0move(&___nl__7,___get_global_const(762));
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__0));
#line 298
c_rt_lib0delete(module_checker_priv0add_error(&___nl__6, ___nl__7));
#line 298
c_rt_lib0clear(&___nl__7);
#line 298
c_rt_lib0move(&___nl__7,___get_global_const(17));
#line 298
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__7, ___nl__6));
#line 298
c_rt_lib0clear(&___nl__7);
#line 298
c_rt_lib0clear(&___nl__6);
#line 299
c_rt_lib0clear(&___nl__0);
#line 299
c_rt_lib0clear(&___nl__1);
#line 299
c_rt_lib0clear(&___nl__3);
#line 299
c_rt_lib0clear(&___nl__4);
#line 299
c_rt_lib0clear(&___nl__5);
#line 299
return NULL;
#line 300
goto label_10;
#line 300
label_10:
#line 300
c_rt_lib0clear(&___nl__5);
#line 301
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(650)));
#line 301
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 301
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(199), ___nl__6);
#line 301
c_rt_lib0clear(&___nl__5);
#line 301
c_rt_lib0clear(&___nl__6);
#line 302
goto label_3;
#line 302
label_3:
#line 302
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0move(&___nl__4,___get_global_const(622));
#line 303
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___2, ___nl__4));
#line 303
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__0, ___nl__3));
#line 303
c_rt_lib0move(&___nl__5,___get_global_const(622));
#line 303
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__5, ___nl__4));
#line 303
c_rt_lib0clear(&___nl__5);
#line 303
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0clear(&___nl__3);
#line 303
c_rt_lib0clear(&___nl__0);
#line 303
c_rt_lib0clear(&___nl__1);
#line 303
return NULL;
}

ImmT module_checker_priv0add_var_dec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
module_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 308
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 308
c_rt_lib0delete(module_checker_priv0add_var(___nl__4, ___nl__1, ___nl__2, ___ref___3));
#line 308
c_rt_lib0clear(&___nl__4);
#line 309
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 309
c_rt_lib0delete(module_checker_priv0check_type(___nl__4, ___ref___3));
#line 309
c_rt_lib0clear(&___nl__4);
#line 310
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(650)));
#line 310
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(650)));
#line 310
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 314
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(38)));
#line 314
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 314
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 314
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 314
nl_die_arg(___nl__5);
#line 310
label_2:
#line 310
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(650)));
#line 311
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___3));
#line 312
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 312
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 312
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 312
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 312
nl_die_arg(___nl__8);
#line 312
goto label_5;
#line 312
label_5:
#line 312
c_rt_lib0clear(&___nl__7);
#line 312
c_rt_lib0clear(&___nl__8);
#line 313
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 313
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(737)));
#line 313
c_rt_lib0delete(module_checker_priv0use_var(___nl__7, ___nl__8, ___ref___3));
#line 313
c_rt_lib0clear(&___nl__8);
#line 313
c_rt_lib0clear(&___nl__7);
#line 313
c_rt_lib0clear(&___nl__6);
#line 314
goto label_1;
#line 314
label_3:
#line 315
goto label_1;
#line 315
label_1:
#line 315
c_rt_lib0clear(&___nl__4);
#line 315
c_rt_lib0clear(&___nl__5);
#line 315
c_rt_lib0clear(&___nl__0);
#line 315
c_rt_lib0clear(&___nl__1);
#line 315
c_rt_lib0clear(&___nl__2);
#line 315
return NULL;
}

ImmT module_checker_priv0check_cmd(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
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
ImmT ___nl__17 = NULL;
#line 319
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(217)));
#line 319
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(400)));
#line 319
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(113)));
#line 319
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 319
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 319
c_rt_lib0copy(&___nl__4, ___nl__2);
#line 319
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(734), ___nl__4);
#line 319
c_rt_lib0move(&___nl__5,___get_global_const(17));
#line 319
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__3));
#line 319
c_rt_lib0clear(&___nl__5);
#line 319
c_rt_lib0clear(&___nl__2);
#line 319
c_rt_lib0clear(&___nl__3);
#line 319
c_rt_lib0clear(&___nl__4);
#line 320
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(75)));
#line 320
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(728)));
#line 320
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 320
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 321
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 321
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 321
c_rt_lib0move(&___nl__4,___get_global_const(763));
#line 321
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__3, ___nl__4));
#line 321
c_rt_lib0clear(&___nl__4);
#line 321
c_rt_lib0move(&___nl__4,___get_global_const(17));
#line 321
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__4, ___nl__3));
#line 321
c_rt_lib0clear(&___nl__4);
#line 321
c_rt_lib0clear(&___nl__3);
#line 322
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 322
c_rt_lib0move(&___nl__4,___get_global_const(75));
#line 322
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___1, ___nl__4));
#line 322
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 322
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(728), ___nl__5);
#line 322
c_rt_lib0move(&___nl__6,___get_global_const(75));
#line 322
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__4));
#line 322
c_rt_lib0clear(&___nl__6);
#line 322
c_rt_lib0clear(&___nl__3);
#line 322
c_rt_lib0clear(&___nl__4);
#line 322
c_rt_lib0clear(&___nl__5);
#line 323
goto label_2;
#line 323
label_2:
#line 323
c_rt_lib0clear(&___nl__2);
#line 324
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 324
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(764)));
#line 324
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 338
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(765)));
#line 338
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 351
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(766)));
#line 351
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 359
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(767)));
#line 359
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 368
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(119)));
#line 368
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 373
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(768)));
#line 373
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 381
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(769)));
#line 381
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 388
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(770)));
#line 388
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 392
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(771)));
#line 392
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 396
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(772)));
#line 396
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 400
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(773)));
#line 400
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 404
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(774)));
#line 404
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 419
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(650)));
#line 419
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 421
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(75)));
#line 421
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 437
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(775)));
#line 437
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 443
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(233)));
#line 443
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 448
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(776)));
#line 448
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 450
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(777)));
#line 450
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 458
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(80)));
#line 458
if(c_rt_lib0check_true_native(___nl__3)){ goto label_22;}
#line 466
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(778)));
#line 466
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 466
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 466
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 466
nl_die_arg(___nl__3);
#line 324
label_4:
#line 324
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(764)));
#line 325
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(779)));
#line 325
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 325
c_rt_lib0clear(&___nl__5);
#line 326
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(764)));
#line 326
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__5, ___ref___1));
#line 326
c_rt_lib0clear(&___nl__5);
#line 327
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(75)));
#line 327
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(728)));
#line 328
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(780)));
#line 328
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 328
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 328
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 328
label_26:
#line 328
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 328
if(c_rt_lib0check_true_native(___nl__11)){ goto label_24;}
#line 328
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 329
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 329
c_rt_lib0move(&___nl__13,___get_global_const(75));
#line 329
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(*___ref___1, ___nl__13));
#line 329
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 329
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(728), ___nl__14);
#line 329
c_rt_lib0move(&___nl__15,___get_global_const(75));
#line 329
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__15, ___nl__13));
#line 329
c_rt_lib0clear(&___nl__15);
#line 329
c_rt_lib0clear(&___nl__12);
#line 329
c_rt_lib0clear(&___nl__13);
#line 329
c_rt_lib0clear(&___nl__14);
#line 330
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(779)));
#line 330
c_rt_lib0delete(module_checker_priv0check_val(___nl__12, ___ref___1));
#line 330
c_rt_lib0clear(&___nl__12);
#line 331
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(214)));
#line 331
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__12, ___ref___1));
#line 331
c_rt_lib0clear(&___nl__12);
#line 332
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(75)));
#line 332
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(728)));
#line 332
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 332
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 332
if(c_rt_lib0check_true_native(___nl__12)){ goto label_28;}
#line 332
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 332
c_rt_lib0copy(&___nl__5, ___nl__13);
#line 332
c_rt_lib0clear(&___nl__13);
#line 332
goto label_28;
#line 332
label_28:
#line 332
c_rt_lib0clear(&___nl__12);
#line 333
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 333
goto label_26;
#line 333
label_24:
#line 333
c_rt_lib0clear(&___nl__6);
#line 333
c_rt_lib0clear(&___nl__7);
#line 333
c_rt_lib0clear(&___nl__8);
#line 333
c_rt_lib0clear(&___nl__9);
#line 333
c_rt_lib0clear(&___nl__10);
#line 333
c_rt_lib0clear(&___nl__11);
#line 334
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 334
c_rt_lib0move(&___nl__7,___get_global_const(75));
#line 334
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 334
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 334
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(728), ___nl__8);
#line 334
c_rt_lib0move(&___nl__9,___get_global_const(75));
#line 334
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 334
c_rt_lib0clear(&___nl__9);
#line 334
c_rt_lib0clear(&___nl__6);
#line 334
c_rt_lib0clear(&___nl__7);
#line 334
c_rt_lib0clear(&___nl__8);
#line 335
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(781)));
#line 335
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 335
c_rt_lib0clear(&___nl__6);
#line 336
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(75)));
#line 336
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(728)));
#line 336
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 336
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 336
if(c_rt_lib0check_true_native(___nl__6)){ goto label_30;}
#line 336
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 336
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 336
c_rt_lib0clear(&___nl__7);
#line 336
goto label_30;
#line 336
label_30:
#line 336
c_rt_lib0clear(&___nl__6);
#line 337
c_rt_lib0move(&___nl__6,___get_global_const(75));
#line 337
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 337
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 337
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(728), ___nl__7);
#line 337
c_rt_lib0move(&___nl__8,___get_global_const(75));
#line 337
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 337
c_rt_lib0clear(&___nl__8);
#line 337
c_rt_lib0clear(&___nl__6);
#line 337
c_rt_lib0clear(&___nl__7);
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
c_rt_lib0clear(&___nl__4);
#line 338
goto label_3;
#line 338
label_5:
#line 338
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(765)));
#line 339
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 340
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(782)));
#line 340
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(650)));
#line 340
if(c_rt_lib0check_true_native(___nl__7)){ goto label_32;}
#line 342
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(776)));
#line 342
if(c_rt_lib0check_true_native(___nl__7)){ goto label_33;}
#line 342
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 342
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 342
nl_die_arg(___nl__7);
#line 340
label_32:
#line 340
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(650)));
#line 341
c_rt_lib0delete(module_checker_priv0check_val(___nl__8, ___ref___1));
#line 341
c_rt_lib0clear(&___nl__8);
#line 342
goto label_31;
#line 342
label_33:
#line 342
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(776)));
#line 343
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 343
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 343
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__8, ___nl__9, ___nl__10, ___ref___1));
#line 343
c_rt_lib0clear(&___nl__10);
#line 343
c_rt_lib0clear(&___nl__9);
#line 343
c_rt_lib0clear(&___nl__8);
#line 344
goto label_31;
#line 344
label_31:
#line 344
c_rt_lib0clear(&___nl__6);
#line 344
c_rt_lib0clear(&___nl__7);
#line 345
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(779)));
#line 345
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 345
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 346
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 346
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(731), ___nl__7);
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0clear(&___nl__7);
#line 347
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(214)));
#line 347
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 347
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(783)));
#line 348
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 348
c_rt_lib0clear(&___nl__6);
#line 349
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 350
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 350
c_rt_lib0move(&___nl__7,___get_global_const(75));
#line 350
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 350
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 350
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(728), ___nl__8);
#line 350
c_rt_lib0move(&___nl__9,___get_global_const(75));
#line 350
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 350
c_rt_lib0clear(&___nl__9);
#line 350
c_rt_lib0clear(&___nl__6);
#line 350
c_rt_lib0clear(&___nl__7);
#line 350
c_rt_lib0clear(&___nl__8);
#line 350
c_rt_lib0clear(&___nl__5);
#line 350
c_rt_lib0clear(&___nl__4);
#line 351
goto label_3;
#line 351
label_6:
#line 351
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(766)));
#line 352
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 353
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(3)));
#line 353
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 353
c_rt_lib0clear(&___nl__6);
#line 354
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(783)));
#line 354
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 354
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 354
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 354
c_rt_lib0clear(&___nl__8);
#line 354
c_rt_lib0clear(&___nl__7);
#line 354
c_rt_lib0clear(&___nl__6);
#line 355
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 355
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 355
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(731), ___nl__7);
#line 355
c_rt_lib0clear(&___nl__6);
#line 355
c_rt_lib0clear(&___nl__7);
#line 356
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(214)));
#line 356
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 356
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 358
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 358
c_rt_lib0move(&___nl__7,___get_global_const(75));
#line 358
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 358
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 358
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(728), ___nl__8);
#line 358
c_rt_lib0move(&___nl__9,___get_global_const(75));
#line 358
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 358
c_rt_lib0clear(&___nl__9);
#line 358
c_rt_lib0clear(&___nl__6);
#line 358
c_rt_lib0clear(&___nl__7);
#line 358
c_rt_lib0clear(&___nl__8);
#line 358
c_rt_lib0clear(&___nl__5);
#line 358
c_rt_lib0clear(&___nl__4);
#line 359
goto label_3;
#line 359
label_7:
#line 359
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(767)));
#line 360
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 361
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(282)));
#line 361
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 361
c_rt_lib0clear(&___nl__6);
#line 362
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 362
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 362
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 362
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 362
c_rt_lib0clear(&___nl__8);
#line 362
c_rt_lib0clear(&___nl__7);
#line 362
c_rt_lib0clear(&___nl__6);
#line 363
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(283)));
#line 363
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 363
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 363
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 363
c_rt_lib0clear(&___nl__8);
#line 363
c_rt_lib0clear(&___nl__7);
#line 363
c_rt_lib0clear(&___nl__6);
#line 364
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 364
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 364
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(731), ___nl__7);
#line 364
c_rt_lib0clear(&___nl__6);
#line 364
c_rt_lib0clear(&___nl__7);
#line 365
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(214)));
#line 365
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 365
c_rt_lib0clear(&___nl__6);
#line 366
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 367
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 367
c_rt_lib0move(&___nl__7,___get_global_const(75));
#line 367
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 367
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 367
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(728), ___nl__8);
#line 367
c_rt_lib0move(&___nl__9,___get_global_const(75));
#line 367
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 367
c_rt_lib0clear(&___nl__9);
#line 367
c_rt_lib0clear(&___nl__6);
#line 367
c_rt_lib0clear(&___nl__7);
#line 367
c_rt_lib0clear(&___nl__8);
#line 367
c_rt_lib0clear(&___nl__5);
#line 367
c_rt_lib0clear(&___nl__4);
#line 368
goto label_3;
#line 368
label_8:
#line 368
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(119)));
#line 369
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 370
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 370
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 370
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(731), ___nl__7);
#line 370
c_rt_lib0clear(&___nl__6);
#line 370
c_rt_lib0clear(&___nl__7);
#line 371
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__4, ___ref___1));
#line 372
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 372
c_rt_lib0clear(&___nl__5);
#line 372
c_rt_lib0clear(&___nl__4);
#line 373
goto label_3;
#line 373
label_9:
#line 373
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(768)));
#line 374
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 375
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(784)));
#line 375
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 375
c_rt_lib0clear(&___nl__6);
#line 376
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(783)));
#line 376
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 376
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 376
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 376
c_rt_lib0clear(&___nl__8);
#line 376
c_rt_lib0clear(&___nl__7);
#line 376
c_rt_lib0clear(&___nl__6);
#line 377
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 377
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 377
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(731), ___nl__7);
#line 377
c_rt_lib0clear(&___nl__6);
#line 377
c_rt_lib0clear(&___nl__7);
#line 378
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(214)));
#line 378
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 378
c_rt_lib0clear(&___nl__6);
#line 379
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 380
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 380
c_rt_lib0move(&___nl__7,___get_global_const(75));
#line 380
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 380
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 380
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(728), ___nl__8);
#line 380
c_rt_lib0move(&___nl__9,___get_global_const(75));
#line 380
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 380
c_rt_lib0clear(&___nl__9);
#line 380
c_rt_lib0clear(&___nl__6);
#line 380
c_rt_lib0clear(&___nl__7);
#line 380
c_rt_lib0clear(&___nl__8);
#line 380
c_rt_lib0clear(&___nl__5);
#line 380
c_rt_lib0clear(&___nl__4);
#line 381
goto label_3;
#line 381
label_10:
#line 381
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(769)));
#line 382
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 383
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(779)));
#line 383
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 383
c_rt_lib0clear(&___nl__6);
#line 384
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 384
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 384
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(731), ___nl__7);
#line 384
c_rt_lib0clear(&___nl__6);
#line 384
c_rt_lib0clear(&___nl__7);
#line 385
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(214)));
#line 385
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 385
c_rt_lib0clear(&___nl__6);
#line 386
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 387
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 387
c_rt_lib0move(&___nl__7,___get_global_const(75));
#line 387
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___1, ___nl__7));
#line 387
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 387
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(728), ___nl__8);
#line 387
c_rt_lib0move(&___nl__9,___get_global_const(75));
#line 387
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__7));
#line 387
c_rt_lib0clear(&___nl__9);
#line 387
c_rt_lib0clear(&___nl__6);
#line 387
c_rt_lib0clear(&___nl__7);
#line 387
c_rt_lib0clear(&___nl__8);
#line 387
c_rt_lib0clear(&___nl__5);
#line 387
c_rt_lib0clear(&___nl__4);
#line 388
goto label_3;
#line 388
label_11:
#line 388
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(770)));
#line 389
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(779)));
#line 389
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 389
c_rt_lib0clear(&___nl__5);
#line 390
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(214)));
#line 390
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__5, ___ref___1));
#line 390
c_rt_lib0clear(&___nl__5);
#line 391
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 391
c_rt_lib0move(&___nl__6,___get_global_const(75));
#line 391
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 391
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 391
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(728), ___nl__7);
#line 391
c_rt_lib0move(&___nl__8,___get_global_const(75));
#line 391
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 391
c_rt_lib0clear(&___nl__8);
#line 391
c_rt_lib0clear(&___nl__5);
#line 391
c_rt_lib0clear(&___nl__6);
#line 391
c_rt_lib0clear(&___nl__7);
#line 391
c_rt_lib0clear(&___nl__4);
#line 392
goto label_3;
#line 392
label_12:
#line 392
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(771)));
#line 393
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(779)));
#line 393
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 393
c_rt_lib0clear(&___nl__5);
#line 394
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(214)));
#line 394
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__5, ___ref___1));
#line 394
c_rt_lib0clear(&___nl__5);
#line 395
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 395
c_rt_lib0move(&___nl__6,___get_global_const(75));
#line 395
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 395
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 395
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(728), ___nl__7);
#line 395
c_rt_lib0move(&___nl__8,___get_global_const(75));
#line 395
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 395
c_rt_lib0clear(&___nl__8);
#line 395
c_rt_lib0clear(&___nl__5);
#line 395
c_rt_lib0clear(&___nl__6);
#line 395
c_rt_lib0clear(&___nl__7);
#line 395
c_rt_lib0clear(&___nl__4);
#line 396
goto label_3;
#line 396
label_13:
#line 397
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(731)));
#line 397
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 397
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 397
if(c_rt_lib0check_true_native(___nl__4)){ goto label_35;}
#line 398
c_rt_lib0move(&___nl__5,___get_global_const(17));
#line 398
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___1, ___nl__5));
#line 398
c_rt_lib0move(&___nl__6,___get_global_const(785));
#line 398
c_rt_lib0delete(module_checker_priv0add_error(&___nl__5, ___nl__6));
#line 398
c_rt_lib0clear(&___nl__6);
#line 398
c_rt_lib0move(&___nl__6,___get_global_const(17));
#line 398
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__5));
#line 398
c_rt_lib0clear(&___nl__6);
#line 398
c_rt_lib0clear(&___nl__5);
#line 399
goto label_35;
#line 399
label_35:
#line 399
c_rt_lib0clear(&___nl__4);
#line 400
goto label_3;
#line 400
label_14:
#line 401
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(731)));
#line 401
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 401
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 401
if(c_rt_lib0check_true_native(___nl__4)){ goto label_37;}
#line 402
c_rt_lib0move(&___nl__5,___get_global_const(17));
#line 402
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___1, ___nl__5));
#line 402
c_rt_lib0move(&___nl__6,___get_global_const(786));
#line 402
c_rt_lib0delete(module_checker_priv0add_error(&___nl__5, ___nl__6));
#line 402
c_rt_lib0clear(&___nl__6);
#line 402
c_rt_lib0move(&___nl__6,___get_global_const(17));
#line 402
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__6, ___nl__5));
#line 402
c_rt_lib0clear(&___nl__6);
#line 402
c_rt_lib0clear(&___nl__5);
#line 403
goto label_37;
#line 403
label_37:
#line 403
c_rt_lib0clear(&___nl__4);
#line 404
goto label_3;
#line 404
label_15:
#line 404
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(774)));
#line 405
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 405
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 405
c_rt_lib0clear(&___nl__5);
#line 406
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 407
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(787)));
#line 407
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 407
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 407
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 407
label_40:
#line 407
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 407
if(c_rt_lib0check_true_native(___nl__11)){ goto label_38;}
#line 407
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 408
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 408
c_rt_lib0move(&___nl__13,___get_global_const(75));
#line 408
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(*___ref___1, ___nl__13));
#line 408
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 408
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(728), ___nl__14);
#line 408
c_rt_lib0move(&___nl__15,___get_global_const(75));
#line 408
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__15, ___nl__13));
#line 408
c_rt_lib0clear(&___nl__15);
#line 408
c_rt_lib0clear(&___nl__12);
#line 408
c_rt_lib0clear(&___nl__13);
#line 408
c_rt_lib0clear(&___nl__14);
#line 409
c_rt_lib0move(&___nl__12, module_checker_priv0save_block(___ref___1));
#line 410
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(788)));
#line 410
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(650)));
#line 410
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(38)));
#line 410
if(c_rt_lib0check_true_native(___nl__14)){ goto label_42;}
#line 411
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(650)));
#line 411
if(c_rt_lib0check_true_native(___nl__14)){ goto label_43;}
#line 411
c_rt_lib0move(&___nl__14,___get_global_const(76));
#line 411
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 411
nl_die_arg(___nl__14);
#line 410
label_42:
#line 411
goto label_41;
#line 411
label_43:
#line 411
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(650)));
#line 412
c_rt_lib0move(&___nl__16, c_rt_lib0get_false());
#line 412
c_rt_lib0move(&___nl__17, c_rt_lib0get_true());
#line 412
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__15, ___nl__16, ___nl__17, ___ref___1));
#line 412
c_rt_lib0clear(&___nl__17);
#line 412
c_rt_lib0clear(&___nl__16);
#line 412
c_rt_lib0clear(&___nl__15);
#line 413
goto label_41;
#line 413
label_41:
#line 413
c_rt_lib0clear(&___nl__13);
#line 413
c_rt_lib0clear(&___nl__14);
#line 414
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(214)));
#line 414
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__13, ___ref___1));
#line 414
c_rt_lib0clear(&___nl__13);
#line 415
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(75)));
#line 415
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(728)));
#line 415
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 415
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 415
if(c_rt_lib0check_true_native(___nl__13)){ goto label_45;}
#line 415
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 415
c_rt_lib0copy(&___nl__5, ___nl__14);
#line 415
c_rt_lib0clear(&___nl__14);
#line 415
goto label_45;
#line 415
label_45:
#line 415
c_rt_lib0clear(&___nl__13);
#line 416
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__12));
#line 416
c_rt_lib0clear(&___nl__12);
#line 417
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 417
goto label_40;
#line 417
label_38:
#line 417
c_rt_lib0clear(&___nl__6);
#line 417
c_rt_lib0clear(&___nl__7);
#line 417
c_rt_lib0clear(&___nl__8);
#line 417
c_rt_lib0clear(&___nl__9);
#line 417
c_rt_lib0clear(&___nl__10);
#line 417
c_rt_lib0clear(&___nl__11);
#line 418
c_rt_lib0move(&___nl__6,___get_global_const(75));
#line 418
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 418
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 418
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(728), ___nl__7);
#line 418
c_rt_lib0move(&___nl__8,___get_global_const(75));
#line 418
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 418
c_rt_lib0clear(&___nl__8);
#line 418
c_rt_lib0clear(&___nl__6);
#line 418
c_rt_lib0clear(&___nl__7);
#line 418
c_rt_lib0clear(&___nl__5);
#line 418
c_rt_lib0clear(&___nl__4);
#line 419
goto label_3;
#line 419
label_16:
#line 419
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(650)));
#line 420
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 420
c_rt_lib0clear(&___nl__4);
#line 421
goto label_3;
#line 421
label_17:
#line 421
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(75)));
#line 422
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 423
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(75)));
#line 423
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(242)));
#line 423
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(650)));
#line 423
if(c_rt_lib0check_true_native(___nl__6)){ goto label_47;}
#line 425
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(38)));
#line 425
if(c_rt_lib0check_true_native(___nl__6)){ goto label_48;}
#line 427
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(726)));
#line 427
if(c_rt_lib0check_true_native(___nl__6)){ goto label_49;}
#line 430
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(725)));
#line 430
if(c_rt_lib0check_true_native(___nl__6)){ goto label_50;}
#line 433
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(724)));
#line 433
if(c_rt_lib0check_true_native(___nl__6)){ goto label_51;}
#line 433
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 433
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 433
nl_die_arg(___nl__6);
#line 423
label_47:
#line 424
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 424
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(778)));
#line 424
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 424
if(c_rt_lib0check_true_native(___nl__7)){ goto label_53;}
#line 424
c_rt_lib0move(&___nl__8,___get_global_const(17));
#line 424
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 424
c_rt_lib0move(&___nl__9,___get_global_const(789));
#line 424
c_rt_lib0delete(module_checker_priv0add_error(&___nl__8, ___nl__9));
#line 424
c_rt_lib0clear(&___nl__9);
#line 424
c_rt_lib0move(&___nl__9,___get_global_const(17));
#line 424
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 424
c_rt_lib0clear(&___nl__9);
#line 424
c_rt_lib0clear(&___nl__8);
#line 424
goto label_53;
#line 424
label_53:
#line 424
c_rt_lib0clear(&___nl__7);
#line 425
goto label_46;
#line 425
label_48:
#line 426
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 426
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(778)));
#line 426
if(c_rt_lib0check_true_native(___nl__7)){ goto label_55;}
#line 426
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(726)));
#line 426
goto label_54;
#line 426
label_55:
#line 426
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(725)));
#line 426
label_54:
#line 426
c_rt_lib0move(&___nl__8,___get_global_const(75));
#line 426
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 426
c_rt_lib0copy(&___nl__9, ___nl__7);
#line 426
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(242), ___nl__9);
#line 426
c_rt_lib0move(&___nl__10,___get_global_const(75));
#line 426
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__10, ___nl__8));
#line 426
c_rt_lib0clear(&___nl__10);
#line 426
c_rt_lib0clear(&___nl__7);
#line 426
c_rt_lib0clear(&___nl__8);
#line 426
c_rt_lib0clear(&___nl__9);
#line 427
goto label_46;
#line 427
label_49:
#line 428
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 428
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(778)));
#line 428
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 428
if(c_rt_lib0check_true_native(___nl__7)){ goto label_57;}
#line 428
c_rt_lib0move(&___nl__8,___get_global_const(17));
#line 428
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 428
c_rt_lib0move(&___nl__9,___get_global_const(790));
#line 428
c_rt_lib0delete(module_checker_priv0add_error(&___nl__8, ___nl__9));
#line 428
c_rt_lib0clear(&___nl__9);
#line 428
c_rt_lib0move(&___nl__9,___get_global_const(17));
#line 428
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 428
c_rt_lib0clear(&___nl__9);
#line 428
c_rt_lib0clear(&___nl__8);
#line 428
goto label_57;
#line 428
label_57:
#line 428
c_rt_lib0clear(&___nl__7);
#line 429
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 429
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(778)));
#line 429
if(c_rt_lib0check_true_native(___nl__7)){ goto label_59;}
#line 429
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(726)));
#line 429
goto label_58;
#line 429
label_59:
#line 429
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(725)));
#line 429
label_58:
#line 429
c_rt_lib0move(&___nl__8,___get_global_const(75));
#line 429
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 429
c_rt_lib0copy(&___nl__9, ___nl__7);
#line 429
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(242), ___nl__9);
#line 429
c_rt_lib0move(&___nl__10,___get_global_const(75));
#line 429
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__10, ___nl__8));
#line 429
c_rt_lib0clear(&___nl__10);
#line 429
c_rt_lib0clear(&___nl__7);
#line 429
c_rt_lib0clear(&___nl__8);
#line 429
c_rt_lib0clear(&___nl__9);
#line 430
goto label_46;
#line 430
label_50:
#line 431
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 431
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(778)));
#line 431
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 431
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 431
if(c_rt_lib0check_true_native(___nl__7)){ goto label_61;}
#line 431
c_rt_lib0move(&___nl__8,___get_global_const(17));
#line 431
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 431
c_rt_lib0move(&___nl__9,___get_global_const(791));
#line 431
c_rt_lib0delete(module_checker_priv0add_error(&___nl__8, ___nl__9));
#line 431
c_rt_lib0clear(&___nl__9);
#line 431
c_rt_lib0move(&___nl__9,___get_global_const(17));
#line 431
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 431
c_rt_lib0clear(&___nl__9);
#line 431
c_rt_lib0clear(&___nl__8);
#line 431
goto label_61;
#line 431
label_61:
#line 431
c_rt_lib0clear(&___nl__7);
#line 432
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 432
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(778)));
#line 432
if(c_rt_lib0check_true_native(___nl__7)){ goto label_63;}
#line 432
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(726)));
#line 432
goto label_62;
#line 432
label_63:
#line 432
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(725)));
#line 432
label_62:
#line 432
c_rt_lib0move(&___nl__8,___get_global_const(75));
#line 432
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 432
c_rt_lib0copy(&___nl__9, ___nl__7);
#line 432
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(242), ___nl__9);
#line 432
c_rt_lib0move(&___nl__10,___get_global_const(75));
#line 432
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__10, ___nl__8));
#line 432
c_rt_lib0clear(&___nl__10);
#line 432
c_rt_lib0clear(&___nl__7);
#line 432
c_rt_lib0clear(&___nl__8);
#line 432
c_rt_lib0clear(&___nl__9);
#line 433
goto label_46;
#line 433
label_51:
#line 434
c_rt_lib0copy(&___nl__7, ___nl__4);
#line 434
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(778)));
#line 434
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 434
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 434
if(c_rt_lib0check_true_native(___nl__7)){ goto label_65;}
#line 434
c_rt_lib0move(&___nl__8,___get_global_const(17));
#line 434
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___1, ___nl__8));
#line 434
c_rt_lib0move(&___nl__9,___get_global_const(792));
#line 434
c_rt_lib0delete(module_checker_priv0add_error(&___nl__8, ___nl__9));
#line 434
c_rt_lib0clear(&___nl__9);
#line 434
c_rt_lib0move(&___nl__9,___get_global_const(17));
#line 434
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__9, ___nl__8));
#line 434
c_rt_lib0clear(&___nl__9);
#line 434
c_rt_lib0clear(&___nl__8);
#line 434
goto label_65;
#line 434
label_65:
#line 434
c_rt_lib0clear(&___nl__7);
#line 435
goto label_46;
#line 435
label_46:
#line 435
c_rt_lib0clear(&___nl__5);
#line 435
c_rt_lib0clear(&___nl__6);
#line 436
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 436
c_rt_lib0move(&___nl__6,___get_global_const(75));
#line 436
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 436
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 436
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(728), ___nl__7);
#line 436
c_rt_lib0move(&___nl__8,___get_global_const(75));
#line 436
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 436
c_rt_lib0clear(&___nl__8);
#line 436
c_rt_lib0clear(&___nl__5);
#line 436
c_rt_lib0clear(&___nl__6);
#line 436
c_rt_lib0clear(&___nl__7);
#line 436
c_rt_lib0clear(&___nl__4);
#line 437
goto label_3;
#line 437
label_18:
#line 437
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(775)));
#line 438
c_rt_lib0move(&___nl__5, module_checker_priv0save_block(___ref___1));
#line 439
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 439
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 439
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__4));
#line 439
label_68:
#line 439
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 439
if(c_rt_lib0check_true_native(___nl__10)){ goto label_66;}
#line 439
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__4, ___nl__7));
#line 440
c_rt_lib0delete(module_checker_priv0check_cmd(___nl__6, ___ref___1));
#line 441
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 441
goto label_68;
#line 441
label_66:
#line 441
c_rt_lib0clear(&___nl__6);
#line 441
c_rt_lib0clear(&___nl__7);
#line 441
c_rt_lib0clear(&___nl__8);
#line 441
c_rt_lib0clear(&___nl__9);
#line 441
c_rt_lib0clear(&___nl__10);
#line 442
c_rt_lib0delete(module_checker_priv0load_block(___ref___1, ___nl__5));
#line 442
c_rt_lib0clear(&___nl__5);
#line 442
c_rt_lib0clear(&___nl__4);
#line 443
goto label_3;
#line 443
label_19:
#line 443
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(233)));
#line 444
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 444
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 444
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 444
label_71:
#line 444
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 444
if(c_rt_lib0check_true_native(___nl__9)){ goto label_69;}
#line 444
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 445
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 446
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 446
goto label_71;
#line 446
label_69:
#line 446
c_rt_lib0clear(&___nl__5);
#line 446
c_rt_lib0clear(&___nl__6);
#line 446
c_rt_lib0clear(&___nl__7);
#line 446
c_rt_lib0clear(&___nl__8);
#line 446
c_rt_lib0clear(&___nl__9);
#line 447
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 447
c_rt_lib0move(&___nl__6,___get_global_const(75));
#line 447
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 447
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 447
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(728), ___nl__7);
#line 447
c_rt_lib0move(&___nl__8,___get_global_const(75));
#line 447
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 447
c_rt_lib0clear(&___nl__8);
#line 447
c_rt_lib0clear(&___nl__5);
#line 447
c_rt_lib0clear(&___nl__6);
#line 447
c_rt_lib0clear(&___nl__7);
#line 447
c_rt_lib0clear(&___nl__4);
#line 448
goto label_3;
#line 448
label_20:
#line 448
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(776)));
#line 449
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 449
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 449
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__4, ___nl__5, ___nl__6, ___ref___1));
#line 449
c_rt_lib0clear(&___nl__6);
#line 449
c_rt_lib0clear(&___nl__5);
#line 449
c_rt_lib0clear(&___nl__4);
#line 450
goto label_3;
#line 450
label_21:
#line 450
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(777)));
#line 451
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(793)));
#line 451
if(c_rt_lib0check_true_native(___nl__5)){ goto label_73;}
#line 453
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(794)));
#line 453
if(c_rt_lib0check_true_native(___nl__5)){ goto label_74;}
#line 455
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(795)));
#line 455
if(c_rt_lib0check_true_native(___nl__5)){ goto label_75;}
#line 455
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 455
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 455
nl_die_arg(___nl__5);
#line 451
label_73:
#line 451
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(793)));
#line 452
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 452
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 452
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 452
c_rt_lib0clear(&___nl__8);
#line 452
c_rt_lib0clear(&___nl__7);
#line 452
c_rt_lib0clear(&___nl__6);
#line 453
goto label_72;
#line 453
label_74:
#line 453
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(794)));
#line 454
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__6));
#line 454
c_rt_lib0delete(module_checker_priv0check_val(___nl__7, ___ref___1));
#line 454
c_rt_lib0clear(&___nl__7);
#line 454
c_rt_lib0clear(&___nl__6);
#line 455
goto label_72;
#line 455
label_75:
#line 455
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(795)));
#line 456
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 456
c_rt_lib0clear(&___nl__6);
#line 457
goto label_72;
#line 457
label_72:
#line 457
c_rt_lib0clear(&___nl__5);
#line 457
c_rt_lib0clear(&___nl__4);
#line 458
goto label_3;
#line 458
label_22:
#line 458
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(80)));
#line 459
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(793)));
#line 459
if(c_rt_lib0check_true_native(___nl__5)){ goto label_77;}
#line 461
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(794)));
#line 461
if(c_rt_lib0check_true_native(___nl__5)){ goto label_78;}
#line 463
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(795)));
#line 463
if(c_rt_lib0check_true_native(___nl__5)){ goto label_79;}
#line 463
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 463
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 463
nl_die_arg(___nl__5);
#line 459
label_77:
#line 459
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(793)));
#line 460
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 460
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 460
c_rt_lib0delete(module_checker_priv0add_var_dec(___nl__6, ___nl__7, ___nl__8, ___ref___1));
#line 460
c_rt_lib0clear(&___nl__8);
#line 460
c_rt_lib0clear(&___nl__7);
#line 460
c_rt_lib0clear(&___nl__6);
#line 461
goto label_76;
#line 461
label_78:
#line 461
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(794)));
#line 462
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__6));
#line 462
c_rt_lib0delete(module_checker_priv0check_val(___nl__7, ___ref___1));
#line 462
c_rt_lib0clear(&___nl__7);
#line 462
c_rt_lib0clear(&___nl__6);
#line 463
goto label_76;
#line 463
label_79:
#line 463
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(795)));
#line 464
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 464
c_rt_lib0clear(&___nl__6);
#line 465
goto label_76;
#line 465
label_76:
#line 465
c_rt_lib0clear(&___nl__5);
#line 465
c_rt_lib0clear(&___nl__4);
#line 466
goto label_3;
#line 466
label_23:
#line 467
goto label_3;
#line 467
label_3:
#line 467
c_rt_lib0clear(&___nl__2);
#line 467
c_rt_lib0clear(&___nl__3);
#line 467
c_rt_lib0clear(&___nl__0);
#line 467
return NULL;
}

ImmT module_checker_priv0check_lvalue(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 471
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 471
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(796)));
#line 471
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 471
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 472
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 472
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(796)));
#line 472
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(261)));
#line 472
c_rt_lib0delete(module_checker_priv0use_var(___nl__3, ___nl__4, ___ref___1));
#line 472
c_rt_lib0clear(&___nl__4);
#line 472
c_rt_lib0clear(&___nl__3);
#line 473
c_rt_lib0clear(&___nl__0);
#line 473
c_rt_lib0clear(&___nl__2);
#line 473
return NULL;
#line 474
goto label_3;
#line 474
label_2:
#line 474
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 474
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(223)));
#line 474
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 474
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 475
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 475
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(223)));
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 476
c_rt_lib0move(&___nl__5,___get_global_const(797));
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 476
c_rt_lib0clear(&___nl__5);
#line 476
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 476
c_rt_lib0move(&___nl__5,___get_global_const(798));
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 476
c_rt_lib0clear(&___nl__5);
#line 476
label_7:
#line 476
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 476
c_rt_lib0move(&___nl__5,___get_global_const(799));
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 476
c_rt_lib0clear(&___nl__5);
#line 476
label_6:
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 476
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 477
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(239)));
#line 477
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__5, ___ref___1));
#line 477
c_rt_lib0clear(&___nl__5);
#line 478
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(240)));
#line 478
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 478
c_rt_lib0clear(&___nl__5);
#line 479
c_rt_lib0clear(&___nl__0);
#line 479
c_rt_lib0clear(&___nl__2);
#line 479
c_rt_lib0clear(&___nl__3);
#line 479
c_rt_lib0clear(&___nl__4);
#line 479
return NULL;
#line 480
goto label_5;
#line 480
label_5:
#line 480
c_rt_lib0clear(&___nl__4);
#line 480
c_rt_lib0clear(&___nl__3);
#line 481
goto label_3;
#line 481
label_3:
#line 481
c_rt_lib0clear(&___nl__2);
#line 482
c_rt_lib0move(&___nl__2,___get_global_const(17));
#line 482
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___1, ___nl__2));
#line 482
c_rt_lib0move(&___nl__3,___get_global_const(800));
#line 482
c_rt_lib0delete(module_checker_priv0add_error(&___nl__2, ___nl__3));
#line 482
c_rt_lib0clear(&___nl__3);
#line 482
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 482
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__3, ___nl__2));
#line 482
c_rt_lib0clear(&___nl__3);
#line 482
c_rt_lib0clear(&___nl__2);
#line 482
c_rt_lib0clear(&___nl__0);
#line 482
return NULL;
}

ImmT module_checker_priv0check_val(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
module_checker_priv0__const__init();
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
#line 486
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 486
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 490
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 490
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 492
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(788)));
#line 492
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 494
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(298)));
#line 494
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 495
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(717)));
#line 495
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 496
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(778)));
#line 496
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 497
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 497
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 498
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(219)));
#line 498
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 502
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(220)));
#line 502
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 507
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(796)));
#line 507
if(c_rt_lib0check_true_native(___nl__2)){ goto label_11;}
#line 509
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(223)));
#line 509
if(c_rt_lib0check_true_native(___nl__2)){ goto label_12;}
#line 521
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 521
if(c_rt_lib0check_true_native(___nl__2)){ goto label_13;}
#line 523
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 523
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 525
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(806)));
#line 525
if(c_rt_lib0check_true_native(___nl__2)){ goto label_15;}
#line 527
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(759)));
#line 527
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 536
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(807)));
#line 536
if(c_rt_lib0check_true_native(___nl__2)){ goto label_17;}
#line 538
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(808)));
#line 538
if(c_rt_lib0check_true_native(___nl__2)){ goto label_18;}
#line 538
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 538
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 538
nl_die_arg(___nl__2);
#line 486
label_2:
#line 486
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 487
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(809)));
#line 487
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 487
c_rt_lib0clear(&___nl__4);
#line 488
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(810)));
#line 488
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 488
c_rt_lib0clear(&___nl__4);
#line 489
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(811)));
#line 489
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 489
c_rt_lib0clear(&___nl__4);
#line 489
c_rt_lib0clear(&___nl__3);
#line 490
goto label_1;
#line 490
label_3:
#line 490
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(802)));
#line 491
c_rt_lib0delete(module_checker_priv0check_val(___nl__3, ___ref___1));
#line 491
c_rt_lib0clear(&___nl__3);
#line 492
goto label_1;
#line 492
label_4:
#line 492
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(788)));
#line 493
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(796)));
#line 493
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 493
c_rt_lib0clear(&___nl__4);
#line 493
c_rt_lib0clear(&___nl__3);
#line 494
goto label_1;
#line 494
label_5:
#line 494
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(298)));
#line 494
c_rt_lib0clear(&___nl__3);
#line 495
goto label_1;
#line 495
label_6:
#line 495
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(717)));
#line 495
c_rt_lib0clear(&___nl__3);
#line 496
goto label_1;
#line 496
label_7:
#line 497
goto label_1;
#line 497
label_8:
#line 497
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(803)));
#line 497
c_rt_lib0clear(&___nl__3);
#line 498
goto label_1;
#line 498
label_9:
#line 498
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(219)));
#line 499
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 499
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 499
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 499
label_21:
#line 499
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 499
if(c_rt_lib0check_true_native(___nl__8)){ goto label_19;}
#line 499
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 500
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 501
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 501
goto label_21;
#line 501
label_19:
#line 501
c_rt_lib0clear(&___nl__4);
#line 501
c_rt_lib0clear(&___nl__5);
#line 501
c_rt_lib0clear(&___nl__6);
#line 501
c_rt_lib0clear(&___nl__7);
#line 501
c_rt_lib0clear(&___nl__8);
#line 501
c_rt_lib0clear(&___nl__3);
#line 502
goto label_1;
#line 502
label_10:
#line 502
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(220)));
#line 503
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 503
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 503
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 503
label_24:
#line 503
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 503
if(c_rt_lib0check_true_native(___nl__8)){ goto label_22;}
#line 503
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 505
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 505
c_rt_lib0delete(module_checker_priv0check_val(___nl__9, ___ref___1));
#line 505
c_rt_lib0clear(&___nl__9);
#line 506
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 506
goto label_24;
#line 506
label_22:
#line 506
c_rt_lib0clear(&___nl__4);
#line 506
c_rt_lib0clear(&___nl__5);
#line 506
c_rt_lib0clear(&___nl__6);
#line 506
c_rt_lib0clear(&___nl__7);
#line 506
c_rt_lib0clear(&___nl__8);
#line 506
c_rt_lib0clear(&___nl__3);
#line 507
goto label_1;
#line 507
label_11:
#line 507
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(796)));
#line 508
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(738)));
#line 508
c_rt_lib0delete(module_checker_priv0use_var(___nl__3, ___nl__4, ___ref___1));
#line 508
c_rt_lib0clear(&___nl__4);
#line 508
c_rt_lib0clear(&___nl__3);
#line 509
goto label_1;
#line 509
label_12:
#line 509
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(223)));
#line 510
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 511
c_rt_lib0move(&___nl__5,___get_global_const(812));
#line 511
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 511
if(c_rt_lib0check_true_native(___nl__5)){ goto label_31;}
#line 511
c_rt_lib0move(&___nl__5,___get_global_const(813));
#line 511
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 511
label_31:
#line 511
if(c_rt_lib0check_true_native(___nl__5)){ goto label_30;}
#line 511
c_rt_lib0move(&___nl__5,___get_global_const(814));
#line 511
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 511
label_30:
#line 511
if(c_rt_lib0check_true_native(___nl__5)){ goto label_29;}
#line 511
c_rt_lib0move(&___nl__5,___get_global_const(815));
#line 511
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 511
label_29:
#line 511
if(c_rt_lib0check_true_native(___nl__5)){ goto label_28;}
#line 511
c_rt_lib0move(&___nl__5,___get_global_const(816));
#line 511
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 511
label_28:
#line 511
if(c_rt_lib0check_true_native(___nl__5)){ goto label_27;}
#line 511
c_rt_lib0move(&___nl__5,___get_global_const(817));
#line 511
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 511
label_27:
#line 511
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 511
if(c_rt_lib0check_true_native(___nl__5)){ goto label_26;}
#line 512
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(239)));
#line 512
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(796)));
#line 512
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 512
if(c_rt_lib0check_true_native(___nl__7)){ goto label_34;}
#line 512
c_rt_lib0move(&___nl__6,___get_global_const(812));
#line 512
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 512
label_34:
#line 512
c_rt_lib0clear(&___nl__7);
#line 512
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 512
if(c_rt_lib0check_true_native(___nl__6)){ goto label_33;}
#line 513
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(239)));
#line 513
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(796)));
#line 513
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(737)));
#line 513
c_rt_lib0delete(module_checker_priv0use_var(___nl__7, ___nl__8, ___ref___1));
#line 513
c_rt_lib0clear(&___nl__8);
#line 513
c_rt_lib0clear(&___nl__7);
#line 514
goto label_32;
#line 514
label_33:
#line 515
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(239)));
#line 515
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__7, ___ref___1));
#line 515
c_rt_lib0clear(&___nl__7);
#line 516
goto label_32;
#line 516
label_32:
#line 516
c_rt_lib0clear(&___nl__6);
#line 517
goto label_25;
#line 517
label_26:
#line 518
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(239)));
#line 518
c_rt_lib0delete(module_checker_priv0check_val(___nl__6, ___ref___1));
#line 518
c_rt_lib0clear(&___nl__6);
#line 519
goto label_25;
#line 519
label_25:
#line 519
c_rt_lib0clear(&___nl__5);
#line 520
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(240)));
#line 520
c_rt_lib0delete(module_checker_priv0check_val(___nl__5, ___ref___1));
#line 520
c_rt_lib0clear(&___nl__5);
#line 520
c_rt_lib0clear(&___nl__4);
#line 520
c_rt_lib0clear(&___nl__3);
#line 521
goto label_1;
#line 521
label_13:
#line 521
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(804)));
#line 522
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(239)));
#line 522
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 522
c_rt_lib0clear(&___nl__4);
#line 522
c_rt_lib0clear(&___nl__3);
#line 523
goto label_1;
#line 523
label_14:
#line 523
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(805)));
#line 524
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(238)));
#line 524
c_rt_lib0delete(module_checker_priv0check_val(___nl__4, ___ref___1));
#line 524
c_rt_lib0clear(&___nl__4);
#line 524
c_rt_lib0clear(&___nl__3);
#line 525
goto label_1;
#line 525
label_15:
#line 525
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(806)));
#line 526
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(111)));
#line 526
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 526
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__4, ___nl__5, ___ref___1));
#line 526
c_rt_lib0clear(&___nl__5);
#line 526
c_rt_lib0clear(&___nl__4);
#line 526
c_rt_lib0clear(&___nl__3);
#line 527
goto label_1;
#line 527
label_16:
#line 527
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(759)));
#line 528
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(74)));
#line 528
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 528
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 528
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 528
label_37:
#line 528
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 528
if(c_rt_lib0check_true_native(___nl__9)){ goto label_35;}
#line 528
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 529
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(261)));
#line 529
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(38)));
#line 529
if(c_rt_lib0check_true_native(___nl__11)){ goto label_39;}
#line 531
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(5)));
#line 531
if(c_rt_lib0check_true_native(___nl__11)){ goto label_40;}
#line 531
c_rt_lib0move(&___nl__11,___get_global_const(76));
#line 531
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 531
nl_die_arg(___nl__11);
#line 529
label_39:
#line 530
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 530
c_rt_lib0delete(module_checker_priv0check_val(___nl__12, ___ref___1));
#line 530
c_rt_lib0clear(&___nl__12);
#line 531
goto label_38;
#line 531
label_40:
#line 532
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 532
c_rt_lib0delete(module_checker_priv0check_lvalue(___nl__12, ___ref___1));
#line 532
c_rt_lib0clear(&___nl__12);
#line 533
goto label_38;
#line 533
label_38:
#line 533
c_rt_lib0clear(&___nl__10);
#line 533
c_rt_lib0clear(&___nl__11);
#line 534
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 534
goto label_37;
#line 534
label_35:
#line 534
c_rt_lib0clear(&___nl__4);
#line 534
c_rt_lib0clear(&___nl__5);
#line 534
c_rt_lib0clear(&___nl__6);
#line 534
c_rt_lib0clear(&___nl__7);
#line 534
c_rt_lib0clear(&___nl__8);
#line 534
c_rt_lib0clear(&___nl__9);
#line 535
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(111)));
#line 535
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 535
c_rt_lib0delete(module_checker_priv0add_fun_used(___nl__4, ___nl__5, ___ref___1));
#line 535
c_rt_lib0clear(&___nl__5);
#line 535
c_rt_lib0clear(&___nl__4);
#line 535
c_rt_lib0clear(&___nl__3);
#line 536
goto label_1;
#line 536
label_17:
#line 536
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(807)));
#line 537
c_rt_lib0delete(module_checker_priv0check_val(___nl__3, ___ref___1));
#line 537
c_rt_lib0clear(&___nl__3);
#line 538
goto label_1;
#line 538
label_18:
#line 538
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(808)));
#line 539
c_rt_lib0delete(module_checker_priv0check_val(___nl__3, ___ref___1));
#line 539
c_rt_lib0clear(&___nl__3);
#line 540
goto label_1;
#line 540
label_1:
#line 540
c_rt_lib0clear(&___nl__2);
#line 540
c_rt_lib0clear(&___nl__0);
#line 540
return NULL;
}

ImmT module_checker_priv0save_block(ImmT * ___ref___0) {
module_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 544
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(731)));
#line 544
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(622)));
#line 544
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(731), ___nl__2, ___get_global_const(622), ___nl__3));
#line 544
c_rt_lib0clear(&___nl__2);
#line 544
c_rt_lib0clear(&___nl__3);
#line 544
return ___nl__1;
#line 544
c_rt_lib0clear(&___nl__1);
#line 544
return NULL;
}

ImmT module_checker_priv0load_block(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
module_checker_priv0__const__init();
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
#line 548
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(731)));
#line 548
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 548
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(731), ___nl__3);
#line 548
c_rt_lib0clear(&___nl__2);
#line 548
c_rt_lib0clear(&___nl__3);
#line 549
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(622)));
#line 549
c_rt_lib0move(&___nl__2, hash0keys(___nl__3));
#line 549
c_rt_lib0clear(&___nl__3);
#line 550
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 550
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 550
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 550
label_3:
#line 550
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 550
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 550
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 551
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(622)));
#line 551
c_rt_lib0move(&___nl__8, hash0has_key(___nl__9, ___nl__3));
#line 551
c_rt_lib0clear(&___nl__9);
#line 551
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 551
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 551
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 552
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(622)));
#line 552
c_rt_lib0move(&___nl__9, hash0get_value(___nl__10, ___nl__3));
#line 552
c_rt_lib0clear(&___nl__10);
#line 553
c_rt_lib0move(&___nl__10,___get_global_const(622));
#line 553
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___0, ___nl__10));
#line 553
c_rt_lib0delete(hash0delete(&___nl__10, ___nl__3));
#line 553
c_rt_lib0move(&___nl__11,___get_global_const(622));
#line 553
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__10));
#line 553
c_rt_lib0clear(&___nl__11);
#line 553
c_rt_lib0clear(&___nl__10);
#line 554
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(208)));
#line 554
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 554
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 554
if(c_rt_lib0check_true_native(___nl__11)){ goto label_8;}
#line 554
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(723)));
#line 554
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 554
label_8:
#line 554
c_rt_lib0clear(&___nl__11);
#line 554
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 554
if(c_rt_lib0check_true_native(___nl__10)){ goto label_7;}
#line 555
c_rt_lib0move(&___nl__11,___get_global_const(17));
#line 555
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___0, ___nl__11));
#line 555
c_rt_lib0move(&___nl__12,___get_global_const(818));
#line 555
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__3));
#line 555
c_rt_lib0delete(module_checker_priv0add_warning(&___nl__11, ___nl__12));
#line 555
c_rt_lib0clear(&___nl__12);
#line 555
c_rt_lib0move(&___nl__12,___get_global_const(17));
#line 555
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__12, ___nl__11));
#line 555
c_rt_lib0clear(&___nl__12);
#line 555
c_rt_lib0clear(&___nl__11);
#line 556
goto label_7;
#line 556
label_7:
#line 556
c_rt_lib0clear(&___nl__10);
#line 556
c_rt_lib0clear(&___nl__9);
#line 557
goto label_5;
#line 557
label_5:
#line 557
c_rt_lib0clear(&___nl__8);
#line 558
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 558
goto label_3;
#line 558
label_1:
#line 558
c_rt_lib0clear(&___nl__3);
#line 558
c_rt_lib0clear(&___nl__4);
#line 558
c_rt_lib0clear(&___nl__5);
#line 558
c_rt_lib0clear(&___nl__6);
#line 558
c_rt_lib0clear(&___nl__7);
#line 558
c_rt_lib0clear(&___nl__2);
#line 558
c_rt_lib0clear(&___nl__1);
#line 558
return NULL;
}


static ImmT ___const__[9];
static int ___const_init__ = 1;
void module_checker_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[8];


for(int i=0;i<8;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 8);
}}
ImmT module_checker_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT module_checker_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = module_checker0stack_t0cal();
	break;
case 1:
	___const__[1] = module_checker0stack_hash_t0cal();
	break;
case 2:
	___const__[2] = module_checker0ret_t0cal();
	break;
case 3:
	___const__[3] = module_checker0modules_t0cal();
	break;
case 4:
	___const__[4] = module_checker0var_t0cal();
	break;
case 5:
	___const__[5] = module_checker0return_t0cal();
	break;
case 6:
	___const__[6] = module_checker0state_t0cal();
	break;
case 7:
	___const__[7] = module_checker0save_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
