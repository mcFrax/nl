
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "generator_pm.h"
#include "array.h"
#include "dfile.h"
#include "string.h"
#include "nl.h"
#include "nlasm.h"
#include "boolean_t.h"
#include "ptd.h"
#include "string_utils.h"
#line 1 "generator_pm.nl"

static ImmT *__const__f = NULL;
void generator_pm_priv0__const__init();
ImmT generator_pm_priv0__const__sim(int __nr);
ImmT generator_pm_priv0__const__sing(int __nr);

ImmT generator_pm_priv0print(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_pm_priv0print_imports(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_functions(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_function(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0is_singleton_use_function(ImmT ___nl__0);
ImmT generator_pm_priv0print_function_access(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0get_function_access(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_pm_priv0print_args_dollar(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0move_args_to_register(ImmT * ___ref___0);
ImmT generator_pm_priv0move_register_to_ref_args(ImmT * ___ref___0);
ImmT generator_pm_priv0print_commands(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_command(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_call(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_una_op(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_bin_op(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_set_at_idx(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_set_val(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_ov_mk(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_register(ImmT ___nl__0,ImmT * ___ref___1);
ImmT generator_pm_priv0print_register_to_assign(ImmT ___nl__0,ImmT * ___ref___1);


ImmT generator_pm0fun_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_pm0fun_args_t");
return generator_pm0fun_args_t();}
ImmT generator_pm0fun_args_t(){
generator_pm_priv0__const__init();
return generator_pm_priv0__const__sing(0);}
ImmT generator_pm0fun_args_t0cal() {
generator_pm_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 16
c_rt_lib0move(&___nl__3, ptd0none());
#line 16
c_rt_lib0move(&___nl__4, ptd0none());
#line 16
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(238), ___nl__3, ___get_global_const(5), ___nl__4));
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 16
c_rt_lib0clear(&___nl__2);
#line 16
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
return ___nl__0;
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return NULL;
}

ImmT generator_pm0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_pm0state_t");
return generator_pm0state_t();}
ImmT generator_pm0state_t(){
generator_pm_priv0__const__init();
return generator_pm_priv0__const__sing(1);}
ImmT generator_pm0state_t0cal() {
generator_pm_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 20
c_rt_lib0move(&___nl__2, ptd0sim());
#line 20
c_rt_lib0move(&___nl__3, ptd0sim());
#line 20
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(generator_pm0fun_args_t0ptr, ___get_global_const(569), ___get_global_const(289)));
#line 20
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 20
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(570), ___nl__2, ___get_global_const(434), ___nl__3, ___get_global_const(297), ___nl__4));
#line 20
c_rt_lib0clear(&___nl__2);
#line 20
c_rt_lib0clear(&___nl__3);
#line 20
c_rt_lib0clear(&___nl__4);
#line 20
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 20
c_rt_lib0clear(&___nl__1);
#line 20
return ___nl__0;
#line 20
c_rt_lib0clear(&___nl__0);
#line 20
return NULL;
}

ImmT generator_pm_priv0print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 24
c_rt_lib0move(&___nl__2,___get_global_const(570));
#line 24
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 24
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 24
c_rt_lib0move(&___nl__3,___get_global_const(570));
#line 24
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 24
c_rt_lib0clear(&___nl__3);
#line 24
c_rt_lib0clear(&___nl__2);
#line 24
c_rt_lib0clear(&___nl__1);
#line 24
return NULL;
}

ImmT generator_pm0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "generator_pm0generate");
return generator_pm0generate(_tab[0]);}
ImmT generator_pm0generate(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 28
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 28
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(434)));
#line 28
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 28
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(570), ___nl__2, ___get_global_const(434), ___nl__3, ___get_global_const(297), ___nl__4));
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0clear(&___nl__4);
#line 29
c_rt_lib0move(&___nl__2,___get_global_const(571));
#line 29
c_rt_lib0move(&___nl__3, string0lf());
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 29
c_rt_lib0clear(&___nl__3);
#line 29
c_rt_lib0delete(generator_pm_priv0print(&___nl__1, ___nl__2));
#line 29
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(340)));
#line 30
c_rt_lib0delete(generator_pm_priv0print_imports(___nl__2, &___nl__1));
#line 30
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(77)));
#line 31
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 31
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 31
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 31
label_3:
#line 31
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 31
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 31
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 32
c_rt_lib0move(&___nl__8,___get_global_const(572));
#line 32
c_rt_lib0delete(generator_pm_priv0print(&___nl__1, ___nl__8));
#line 32
c_rt_lib0clear(&___nl__8);
#line 33
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(332)));
#line 33
c_rt_lib0delete(generator_pm_priv0print_function_access(___nl__8, &___nl__1));
#line 33
c_rt_lib0clear(&___nl__8);
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 34
c_rt_lib0move(&___nl__9,___get_global_const(315));
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 34
c_rt_lib0clear(&___nl__9);
#line 34
c_rt_lib0move(&___nl__9, string0lf());
#line 34
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 34
c_rt_lib0clear(&___nl__9);
#line 34
c_rt_lib0delete(generator_pm_priv0print(&___nl__1, ___nl__8));
#line 34
c_rt_lib0clear(&___nl__8);
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 35
goto label_3;
#line 35
label_1:
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
#line 36
c_rt_lib0move(&___nl__2, string0lf());
#line 36
c_rt_lib0move(&___nl__3,___get_global_const(573));
#line 36
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0move(&___nl__3, string0lf());
#line 36
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0delete(generator_pm_priv0print(&___nl__1, ___nl__2));
#line 36
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(77)));
#line 37
c_rt_lib0delete(generator_pm_priv0print_functions(___nl__2, &___nl__1));
#line 37
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(570)));
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
return ___nl__2;
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
return NULL;
}

ImmT generator_pm_priv0print_imports(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 42
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 42
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 42
label_3:
#line 42
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 42
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 42
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 43
c_rt_lib0move(&___nl__7,___get_global_const(574));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 43
c_rt_lib0move(&___nl__8,___get_global_const(315));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 43
c_rt_lib0clear(&___nl__8);
#line 43
c_rt_lib0move(&___nl__8, string0lf());
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 43
c_rt_lib0clear(&___nl__8);
#line 43
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__7));
#line 43
c_rt_lib0clear(&___nl__7);
#line 44
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 44
goto label_3;
#line 44
label_1:
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0clear(&___nl__5);
#line 44
c_rt_lib0clear(&___nl__6);
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
return NULL;
}

ImmT generator_pm_priv0print_functions(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
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
#line 48
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 48
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 48
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 48
label_3:
#line 48
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 48
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 48
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 49
c_rt_lib0move(&___nl__7, generator_pm_priv0is_singleton_use_function(___nl__2));
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 49
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 50
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(78)));
#line 51
c_rt_lib0copy(&___nl__9, ___nl__2);
#line 52
c_rt_lib0move(&___nl__10,___get_global_const(575));
#line 52
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__8));
#line 52
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 52
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(78), ___nl__11);
#line 52
c_rt_lib0clear(&___nl__10);
#line 52
c_rt_lib0clear(&___nl__11);
#line 53
c_rt_lib0delete(generator_pm_priv0print_function(___nl__9, ___ref___1));
#line 54
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(332)));
#line 54
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(434)));
#line 54
c_rt_lib0move(&___nl__10, generator_pm_priv0get_function_access(___nl__11, ___nl__12));
#line 54
c_rt_lib0clear(&___nl__12);
#line 54
c_rt_lib0clear(&___nl__11);
#line 54
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(78)));
#line 54
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 54
c_rt_lib0clear(&___nl__11);
#line 55
c_rt_lib0move(&___nl__11, string0lf());
#line 55
c_rt_lib0move(&___nl__12,___get_global_const(576));
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 55
c_rt_lib0clear(&___nl__12);
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 55
c_rt_lib0move(&___nl__12,___get_global_const(315));
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 55
c_rt_lib0clear(&___nl__12);
#line 55
c_rt_lib0move(&___nl__12, string0lf());
#line 55
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 55
c_rt_lib0clear(&___nl__12);
#line 55
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 55
c_rt_lib0clear(&___nl__11);
#line 56
c_rt_lib0move(&___nl__11,___get_global_const(572));
#line 56
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 56
c_rt_lib0clear(&___nl__11);
#line 57
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(332)));
#line 57
c_rt_lib0delete(generator_pm_priv0print_function_access(___nl__11, ___ref___1));
#line 57
c_rt_lib0clear(&___nl__11);
#line 58
c_rt_lib0move(&___nl__11,___get_global_const(577));
#line 58
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__8, ___nl__11));
#line 58
c_rt_lib0move(&___nl__12, string0lf());
#line 58
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 58
c_rt_lib0clear(&___nl__12);
#line 58
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 58
c_rt_lib0clear(&___nl__11);
#line 59
c_rt_lib0move(&___nl__11,___get_global_const(578));
#line 59
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 59
c_rt_lib0move(&___nl__12,___get_global_const(452));
#line 59
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 59
c_rt_lib0clear(&___nl__12);
#line 59
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__10));
#line 59
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 59
c_rt_lib0clear(&___nl__11);
#line 60
c_rt_lib0move(&___nl__11,___get_global_const(579));
#line 60
c_rt_lib0move(&___nl__12,___get_global_const(580));
#line 60
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 60
c_rt_lib0clear(&___nl__12);
#line 60
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 60
c_rt_lib0move(&___nl__12,___get_global_const(315));
#line 60
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 60
c_rt_lib0clear(&___nl__12);
#line 60
c_rt_lib0move(&___nl__12, string0lf());
#line 60
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 60
c_rt_lib0clear(&___nl__12);
#line 60
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 60
c_rt_lib0clear(&___nl__11);
#line 61
c_rt_lib0move(&___nl__11,___get_global_const(581));
#line 61
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 61
c_rt_lib0move(&___nl__12,___get_global_const(315));
#line 61
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 61
c_rt_lib0clear(&___nl__12);
#line 61
c_rt_lib0move(&___nl__12, string0lf());
#line 61
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 61
c_rt_lib0clear(&___nl__12);
#line 61
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 61
c_rt_lib0clear(&___nl__11);
#line 62
c_rt_lib0move(&___nl__11,___get_global_const(174));
#line 62
c_rt_lib0move(&___nl__12, string0lf());
#line 62
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 62
c_rt_lib0clear(&___nl__12);
#line 62
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 62
c_rt_lib0clear(&___nl__11);
#line 62
c_rt_lib0clear(&___nl__8);
#line 62
c_rt_lib0clear(&___nl__9);
#line 62
c_rt_lib0clear(&___nl__10);
#line 63
goto label_4;
#line 63
label_5:
#line 64
c_rt_lib0delete(generator_pm_priv0print_function(___nl__2, ___ref___1));
#line 65
goto label_4;
#line 65
label_4:
#line 65
c_rt_lib0clear(&___nl__7);
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 66
goto label_3;
#line 66
label_1:
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0clear(&___nl__4);
#line 66
c_rt_lib0clear(&___nl__5);
#line 66
c_rt_lib0clear(&___nl__6);
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
return NULL;
}

ImmT generator_pm_priv0print_function(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 70
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(335)));
#line 70
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 70
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(297), ___nl__3);
#line 70
c_rt_lib0clear(&___nl__2);
#line 70
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0move(&___nl__2, string0lf());
#line 71
c_rt_lib0move(&___nl__3,___get_global_const(572));
#line 71
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 71
c_rt_lib0clear(&___nl__2);
#line 72
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(332)));
#line 72
c_rt_lib0delete(generator_pm_priv0print_function_access(___nl__2, ___ref___1));
#line 72
c_rt_lib0clear(&___nl__2);
#line 73
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 73
c_rt_lib0move(&___nl__3,___get_global_const(326));
#line 73
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 73
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(335)));
#line 74
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0delete(generator_pm_priv0print_args_dollar(___nl__2, ___ref___1));
#line 74
c_rt_lib0clear(&___nl__2);
#line 75
c_rt_lib0move(&___nl__2,___get_global_const(532));
#line 75
c_rt_lib0move(&___nl__3, string0lf());
#line 75
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 75
c_rt_lib0clear(&___nl__3);
#line 75
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 75
c_rt_lib0clear(&___nl__2);
#line 76
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(382)));
#line 76
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 76
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 76
label_3:
#line 76
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 76
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 77
c_rt_lib0move(&___nl__6,___get_global_const(582));
#line 77
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__3));
#line 77
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 77
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 77
c_rt_lib0clear(&___nl__7);
#line 77
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 77
c_rt_lib0clear(&___nl__6);
#line 78
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 78
goto label_3;
#line 78
label_1:
#line 78
c_rt_lib0clear(&___nl__2);
#line 78
c_rt_lib0clear(&___nl__3);
#line 78
c_rt_lib0clear(&___nl__4);
#line 78
c_rt_lib0clear(&___nl__5);
#line 79
c_rt_lib0delete(generator_pm_priv0move_args_to_register(___ref___1));
#line 80
c_rt_lib0move(&___nl__2, string0lf());
#line 80
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 80
c_rt_lib0clear(&___nl__2);
#line 81
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(384)));
#line 81
c_rt_lib0delete(generator_pm_priv0print_commands(___nl__2, ___ref___1));
#line 81
c_rt_lib0clear(&___nl__2);
#line 82
c_rt_lib0delete(generator_pm_priv0move_register_to_ref_args(___ref___1));
#line 83
c_rt_lib0move(&___nl__2,___get_global_const(174));
#line 83
c_rt_lib0move(&___nl__3, string0lf());
#line 83
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 83
c_rt_lib0clear(&___nl__3);
#line 83
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
return NULL;
}

ImmT generator_pm_priv0is_singleton_use_function(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
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
#line 87
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(335)));
#line 87
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 87
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__2));
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 87
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 87
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 87
c_rt_lib0clear(&___nl__0);
#line 87
c_rt_lib0clear(&___nl__1);
#line 87
return ___nl__2;
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
goto label_2;
#line 87
label_2:
#line 87
c_rt_lib0clear(&___nl__1);
#line 88
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(216)));
#line 88
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(143)));
#line 88
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 88
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 88
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 88
c_rt_lib0clear(&___nl__0);
#line 88
c_rt_lib0clear(&___nl__1);
#line 88
return ___nl__2;
#line 88
c_rt_lib0clear(&___nl__2);
#line 88
goto label_4;
#line 88
label_4:
#line 88
c_rt_lib0clear(&___nl__1);
#line 89
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 91
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(384)));
#line 91
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 91
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 91
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 91
label_7:
#line 91
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 91
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 91
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 92
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(214)));
#line 93
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 93
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(221)));
#line 93
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 93
if(c_rt_lib0check_true_native(___nl__10)){ goto label_9;}
#line 94
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 94
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(221)));
#line 95
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(389)));
#line 95
c_rt_lib0move(&___nl__13,___get_global_const(390));
#line 95
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 95
c_rt_lib0clear(&___nl__13);
#line 95
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 95
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 95
if(c_rt_lib0check_true_native(___nl__12)){ goto label_11;}
#line 95
c_rt_lib0clear(&___nl__9);
#line 95
c_rt_lib0clear(&___nl__10);
#line 95
c_rt_lib0clear(&___nl__11);
#line 95
c_rt_lib0clear(&___nl__12);
#line 95
goto label_6;
#line 95
goto label_11;
#line 95
label_11:
#line 95
c_rt_lib0clear(&___nl__12);
#line 96
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(261)));
#line 96
c_rt_lib0move(&___nl__13,___get_global_const(292));
#line 96
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__13));
#line 96
c_rt_lib0clear(&___nl__13);
#line 96
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 96
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 96
if(c_rt_lib0check_true_native(___nl__12)){ goto label_13;}
#line 96
c_rt_lib0clear(&___nl__9);
#line 96
c_rt_lib0clear(&___nl__10);
#line 96
c_rt_lib0clear(&___nl__11);
#line 96
c_rt_lib0clear(&___nl__12);
#line 96
goto label_6;
#line 96
goto label_13;
#line 96
label_13:
#line 96
c_rt_lib0clear(&___nl__12);
#line 97
c_rt_lib0move(&___nl__12, c_rt_lib0get_true());
#line 97
c_rt_lib0copy(&___nl__1, ___nl__12);
#line 97
c_rt_lib0clear(&___nl__12);
#line 98
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(237)));
#line 98
c_rt_lib0copy(&___nl__2, ___nl__12);
#line 98
c_rt_lib0clear(&___nl__12);
#line 98
c_rt_lib0clear(&___nl__11);
#line 99
goto label_8;
#line 99
label_9:
#line 99
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 99
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(75)));
#line 99
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 99
if(c_rt_lib0check_true_native(___nl__10)){ goto label_14;}
#line 100
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 100
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 100
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 100
if(c_rt_lib0check_true_native(___nl__11)){ goto label_16;}
#line 100
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 100
c_rt_lib0clear(&___nl__0);
#line 100
c_rt_lib0clear(&___nl__1);
#line 100
c_rt_lib0clear(&___nl__2);
#line 100
c_rt_lib0clear(&___nl__3);
#line 100
c_rt_lib0clear(&___nl__4);
#line 100
c_rt_lib0clear(&___nl__5);
#line 100
c_rt_lib0clear(&___nl__6);
#line 100
c_rt_lib0clear(&___nl__7);
#line 100
c_rt_lib0clear(&___nl__8);
#line 100
c_rt_lib0clear(&___nl__9);
#line 100
c_rt_lib0clear(&___nl__10);
#line 100
c_rt_lib0clear(&___nl__11);
#line 100
return ___nl__12;
#line 100
c_rt_lib0clear(&___nl__12);
#line 100
goto label_16;
#line 100
label_16:
#line 100
c_rt_lib0clear(&___nl__11);
#line 101
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 101
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(75)));
#line 102
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 102
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(238)));
#line 102
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 102
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 102
if(c_rt_lib0check_true_native(___nl__12)){ goto label_18;}
#line 102
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 102
c_rt_lib0clear(&___nl__0);
#line 102
c_rt_lib0clear(&___nl__1);
#line 102
c_rt_lib0clear(&___nl__2);
#line 102
c_rt_lib0clear(&___nl__3);
#line 102
c_rt_lib0clear(&___nl__4);
#line 102
c_rt_lib0clear(&___nl__5);
#line 102
c_rt_lib0clear(&___nl__6);
#line 102
c_rt_lib0clear(&___nl__7);
#line 102
c_rt_lib0clear(&___nl__8);
#line 102
c_rt_lib0clear(&___nl__9);
#line 102
c_rt_lib0clear(&___nl__10);
#line 102
c_rt_lib0clear(&___nl__11);
#line 102
c_rt_lib0clear(&___nl__12);
#line 102
return ___nl__13;
#line 102
c_rt_lib0clear(&___nl__13);
#line 102
goto label_18;
#line 102
label_18:
#line 102
c_rt_lib0clear(&___nl__12);
#line 103
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 103
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(238)));
#line 103
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__12, ___nl__2));
#line 103
c_rt_lib0clear(&___nl__0);
#line 103
c_rt_lib0clear(&___nl__1);
#line 103
c_rt_lib0clear(&___nl__2);
#line 103
c_rt_lib0clear(&___nl__3);
#line 103
c_rt_lib0clear(&___nl__4);
#line 103
c_rt_lib0clear(&___nl__5);
#line 103
c_rt_lib0clear(&___nl__6);
#line 103
c_rt_lib0clear(&___nl__7);
#line 103
c_rt_lib0clear(&___nl__8);
#line 103
c_rt_lib0clear(&___nl__9);
#line 103
c_rt_lib0clear(&___nl__10);
#line 103
c_rt_lib0clear(&___nl__11);
#line 103
return ___nl__12;
#line 103
c_rt_lib0clear(&___nl__12);
#line 103
c_rt_lib0clear(&___nl__11);
#line 104
goto label_8;
#line 104
label_14:
#line 104
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 104
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(234)));
#line 104
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 104
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 105
goto label_8;
#line 105
label_19:
#line 105
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 105
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(200)));
#line 105
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 105
if(c_rt_lib0check_true_native(___nl__10)){ goto label_20;}
#line 106
goto label_8;
#line 106
label_20:
#line 107
c_rt_lib0copy(&___nl__11, ___nl__1);
#line 107
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 107
if(c_rt_lib0check_true_native(___nl__11)){ goto label_22;}
#line 107
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 107
c_rt_lib0clear(&___nl__0);
#line 107
c_rt_lib0clear(&___nl__1);
#line 107
c_rt_lib0clear(&___nl__2);
#line 107
c_rt_lib0clear(&___nl__3);
#line 107
c_rt_lib0clear(&___nl__4);
#line 107
c_rt_lib0clear(&___nl__5);
#line 107
c_rt_lib0clear(&___nl__6);
#line 107
c_rt_lib0clear(&___nl__7);
#line 107
c_rt_lib0clear(&___nl__8);
#line 107
c_rt_lib0clear(&___nl__9);
#line 107
c_rt_lib0clear(&___nl__10);
#line 107
c_rt_lib0clear(&___nl__11);
#line 107
return ___nl__12;
#line 107
c_rt_lib0clear(&___nl__12);
#line 107
goto label_22;
#line 107
label_22:
#line 107
c_rt_lib0clear(&___nl__11);
#line 108
goto label_8;
#line 108
label_8:
#line 108
c_rt_lib0clear(&___nl__10);
#line 108
c_rt_lib0clear(&___nl__9);
#line 108
label_6:
#line 109
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 109
goto label_7;
#line 109
label_5:
#line 109
c_rt_lib0clear(&___nl__3);
#line 109
c_rt_lib0clear(&___nl__4);
#line 109
c_rt_lib0clear(&___nl__5);
#line 109
c_rt_lib0clear(&___nl__6);
#line 109
c_rt_lib0clear(&___nl__7);
#line 109
c_rt_lib0clear(&___nl__8);
#line 110
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 110
c_rt_lib0clear(&___nl__0);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
c_rt_lib0clear(&___nl__2);
#line 110
return ___nl__3;
#line 110
c_rt_lib0clear(&___nl__3);
#line 110
c_rt_lib0clear(&___nl__1);
#line 110
c_rt_lib0clear(&___nl__2);
#line 110
c_rt_lib0clear(&___nl__0);
#line 110
return NULL;
}

ImmT generator_pm_priv0print_function_access(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 114
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(434)));
#line 114
c_rt_lib0move(&___nl__2, generator_pm_priv0get_function_access(___nl__0, ___nl__3));
#line 114
c_rt_lib0clear(&___nl__3);
#line 114
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 114
c_rt_lib0clear(&___nl__2);
#line 114
c_rt_lib0clear(&___nl__0);
#line 114
return NULL;
}

ImmT generator_pm_priv0get_function_access(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 118
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(333)));
#line 118
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 120
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(334)));
#line 120
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 120
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 120
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 120
nl_die_arg(___nl__2);
#line 118
label_2:
#line 119
c_rt_lib0move(&___nl__3,___get_global_const(583));
#line 119
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 119
c_rt_lib0clear(&___nl__0);
#line 119
c_rt_lib0clear(&___nl__1);
#line 119
c_rt_lib0clear(&___nl__2);
#line 119
return ___nl__3;
#line 119
c_rt_lib0clear(&___nl__3);
#line 120
goto label_1;
#line 120
label_3:
#line 121
c_rt_lib0move(&___nl__3,___get_global_const(584));
#line 121
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 121
c_rt_lib0clear(&___nl__0);
#line 121
c_rt_lib0clear(&___nl__1);
#line 121
c_rt_lib0clear(&___nl__2);
#line 121
return ___nl__3;
#line 121
c_rt_lib0clear(&___nl__3);
#line 122
goto label_1;
#line 122
label_1:
#line 122
c_rt_lib0clear(&___nl__2);
#line 122
c_rt_lib0clear(&___nl__0);
#line 122
c_rt_lib0clear(&___nl__1);
#line 122
return NULL;
}

ImmT generator_pm_priv0print_args_dollar(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 126
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 126
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 126
label_3:
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__0));
#line 126
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 127
c_rt_lib0move(&___nl__5,___get_global_const(187));
#line 127
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 127
c_rt_lib0clear(&___nl__5);
#line 128
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 128
goto label_3;
#line 128
label_1:
#line 128
c_rt_lib0clear(&___nl__2);
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0clear(&___nl__0);
#line 128
return NULL;
}

ImmT generator_pm_priv0move_args_to_register(ImmT * ___ref___0) {
generator_pm_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 132
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(297)));
#line 132
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 132
c_rt_lib0clear(&___nl__2);
#line 132
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 132
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 132
label_3:
#line 132
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 132
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 133
c_rt_lib0move(&___nl__5,___get_global_const(585));
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__2));
#line 133
c_rt_lib0move(&___nl__6,___get_global_const(586));
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 133
c_rt_lib0clear(&___nl__6);
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__2));
#line 133
c_rt_lib0move(&___nl__6,___get_global_const(587));
#line 133
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 133
c_rt_lib0clear(&___nl__6);
#line 133
c_rt_lib0delete(generator_pm_priv0print(___ref___0, ___nl__5));
#line 133
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(297)));
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 134
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(238)));
#line 134
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 135
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 135
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 135
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 135
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 135
nl_die_arg(___nl__6);
#line 134
label_5:
#line 135
goto label_4;
#line 135
label_6:
#line 136
c_rt_lib0move(&___nl__7,___get_global_const(588));
#line 136
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 136
c_rt_lib0move(&___nl__8,___get_global_const(589));
#line 136
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 136
c_rt_lib0clear(&___nl__8);
#line 136
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 136
c_rt_lib0move(&___nl__8,___get_global_const(590));
#line 136
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 136
c_rt_lib0clear(&___nl__8);
#line 136
c_rt_lib0delete(generator_pm_priv0print(___ref___0, ___nl__7));
#line 136
c_rt_lib0clear(&___nl__7);
#line 137
goto label_4;
#line 137
label_4:
#line 137
c_rt_lib0clear(&___nl__5);
#line 137
c_rt_lib0clear(&___nl__6);
#line 138
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 138
goto label_3;
#line 138
label_1:
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
c_rt_lib0clear(&___nl__3);
#line 138
c_rt_lib0clear(&___nl__4);
#line 138
return NULL;
}

ImmT generator_pm_priv0move_register_to_ref_args(ImmT * ___ref___0) {
generator_pm_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 142
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(297)));
#line 142
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 142
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 142
label_3:
#line 142
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 142
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 143
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(297)));
#line 143
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 143
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(238)));
#line 143
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 144
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 144
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 144
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 144
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 144
nl_die_arg(___nl__6);
#line 143
label_5:
#line 144
goto label_4;
#line 144
label_6:
#line 145
c_rt_lib0move(&___nl__7,___get_global_const(591));
#line 145
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 145
c_rt_lib0move(&___nl__8,___get_global_const(592));
#line 145
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 145
c_rt_lib0clear(&___nl__8);
#line 145
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__2));
#line 145
c_rt_lib0move(&___nl__8,___get_global_const(315));
#line 145
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 145
c_rt_lib0clear(&___nl__8);
#line 145
c_rt_lib0delete(generator_pm_priv0print(___ref___0, ___nl__7));
#line 145
c_rt_lib0clear(&___nl__7);
#line 146
goto label_4;
#line 146
label_4:
#line 146
c_rt_lib0clear(&___nl__5);
#line 146
c_rt_lib0clear(&___nl__6);
#line 147
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 147
goto label_3;
#line 147
label_1:
#line 147
c_rt_lib0clear(&___nl__1);
#line 147
c_rt_lib0clear(&___nl__2);
#line 147
c_rt_lib0clear(&___nl__3);
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
return NULL;
}

ImmT generator_pm_priv0print_commands(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 151
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 151
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 151
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 151
label_3:
#line 151
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 151
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 151
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 152
c_rt_lib0delete(generator_pm_priv0print_command(___nl__2, ___ref___1));
#line 153
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 153
goto label_3;
#line 153
label_1:
#line 153
c_rt_lib0clear(&___nl__2);
#line 153
c_rt_lib0clear(&___nl__3);
#line 153
c_rt_lib0clear(&___nl__4);
#line 153
c_rt_lib0clear(&___nl__5);
#line 153
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0clear(&___nl__0);
#line 153
return NULL;
}

ImmT generator_pm_priv0print_command(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
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
#line 157
c_rt_lib0move(&___nl__2,___get_global_const(398));
#line 157
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(217)));
#line 157
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(399)));
#line 157
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(400)));
#line 157
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(113)));
#line 157
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 157
c_rt_lib0clear(&___nl__3);
#line 157
c_rt_lib0move(&___nl__3, string0lf());
#line 157
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 157
c_rt_lib0clear(&___nl__3);
#line 157
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 157
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 158
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(219)));
#line 158
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 170
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(220)));
#line 170
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(221)));
#line 180
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 182
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(72)));
#line 182
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(222)));
#line 185
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 187
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(223)));
#line 187
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 189
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(224)));
#line 189
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(225)));
#line 194
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 199
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(75)));
#line 199
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 208
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(233)));
#line 208
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 212
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(226)));
#line 212
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 216
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(227)));
#line 216
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 223
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(228)));
#line 223
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 229
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(229)));
#line 229
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 231
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(230)));
#line 231
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 235
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(231)));
#line 235
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 237
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(232)));
#line 237
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(234)));
#line 239
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(235)));
#line 241
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 247
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(236)));
#line 247
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(200)));
#line 249
if(c_rt_lib0check_true_native(___nl__3)){ goto label_22;}
#line 249
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 249
nl_die_arg(___nl__3);
#line 158
label_2:
#line 158
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(219)));
#line 159
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 159
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 159
c_rt_lib0clear(&___nl__5);
#line 160
c_rt_lib0move(&___nl__5,___get_global_const(179));
#line 160
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 160
c_rt_lib0clear(&___nl__5);
#line 161
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 162
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 162
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 162
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 162
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 162
label_25:
#line 162
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 162
if(c_rt_lib0check_true_native(___nl__11)){ goto label_23;}
#line 162
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 163
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 163
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__5, ___nl__12));
#line 163
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 163
if(c_rt_lib0check_true_native(___nl__12)){ goto label_27;}
#line 164
c_rt_lib0move(&___nl__13,___get_global_const(177));
#line 164
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__13));
#line 164
c_rt_lib0clear(&___nl__13);
#line 165
goto label_27;
#line 165
label_27:
#line 165
c_rt_lib0clear(&___nl__12);
#line 166
c_rt_lib0delete(generator_pm_priv0print_register(___nl__7, ___ref___1));
#line 167
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 167
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__12));
#line 167
c_rt_lib0clear(&___nl__12);
#line 168
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 168
goto label_25;
#line 168
label_23:
#line 168
c_rt_lib0clear(&___nl__6);
#line 168
c_rt_lib0clear(&___nl__7);
#line 168
c_rt_lib0clear(&___nl__8);
#line 168
c_rt_lib0clear(&___nl__9);
#line 168
c_rt_lib0clear(&___nl__10);
#line 168
c_rt_lib0clear(&___nl__11);
#line 169
c_rt_lib0move(&___nl__6,___get_global_const(587));
#line 169
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 169
c_rt_lib0clear(&___nl__6);
#line 169
c_rt_lib0clear(&___nl__5);
#line 169
c_rt_lib0clear(&___nl__4);
#line 170
goto label_1;
#line 170
label_3:
#line 170
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(220)));
#line 171
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 171
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 171
c_rt_lib0clear(&___nl__5);
#line 172
c_rt_lib0move(&___nl__5,___get_global_const(173));
#line 172
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 172
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 173
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 173
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 173
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 173
label_30:
#line 173
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 173
if(c_rt_lib0check_true_native(___nl__10)){ goto label_28;}
#line 173
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 174
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(283)));
#line 174
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 174
c_rt_lib0clear(&___nl__11);
#line 175
c_rt_lib0move(&___nl__11,___get_global_const(192));
#line 175
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 175
c_rt_lib0clear(&___nl__11);
#line 176
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(238)));
#line 176
c_rt_lib0delete(generator_pm_priv0print_register(___nl__11, ___ref___1));
#line 176
c_rt_lib0clear(&___nl__11);
#line 177
c_rt_lib0move(&___nl__11,___get_global_const(177));
#line 177
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__11));
#line 177
c_rt_lib0clear(&___nl__11);
#line 178
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 178
goto label_30;
#line 178
label_28:
#line 178
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0clear(&___nl__6);
#line 178
c_rt_lib0clear(&___nl__7);
#line 178
c_rt_lib0clear(&___nl__8);
#line 178
c_rt_lib0clear(&___nl__9);
#line 178
c_rt_lib0clear(&___nl__10);
#line 179
c_rt_lib0move(&___nl__5,___get_global_const(593));
#line 179
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0clear(&___nl__4);
#line 180
goto label_1;
#line 180
label_4:
#line 180
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(221)));
#line 181
c_rt_lib0delete(generator_pm_priv0print_call(___nl__4, ___ref___1));
#line 181
c_rt_lib0clear(&___nl__4);
#line 182
goto label_1;
#line 182
label_5:
#line 182
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(72)));
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 183
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 183
c_rt_lib0clear(&___nl__5);
#line 184
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(111)));
#line 184
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 184
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(111), ___nl__7, ___get_global_const(78), ___nl__8));
#line 184
c_rt_lib0clear(&___nl__7);
#line 184
c_rt_lib0clear(&___nl__8);
#line 184
c_rt_lib0move(&___nl__5, dfile0ssave(___nl__6));
#line 184
c_rt_lib0clear(&___nl__6);
#line 184
c_rt_lib0move(&___nl__6,___get_global_const(315));
#line 184
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 184
c_rt_lib0clear(&___nl__6);
#line 184
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 184
c_rt_lib0clear(&___nl__5);
#line 184
c_rt_lib0clear(&___nl__4);
#line 185
goto label_1;
#line 185
label_6:
#line 185
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(222)));
#line 186
c_rt_lib0delete(generator_pm_priv0print_una_op(___nl__4, ___ref___1));
#line 186
c_rt_lib0clear(&___nl__4);
#line 187
goto label_1;
#line 187
label_7:
#line 187
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(223)));
#line 188
c_rt_lib0delete(generator_pm_priv0print_bin_op(___nl__4, ___ref___1));
#line 188
c_rt_lib0clear(&___nl__4);
#line 189
goto label_1;
#line 189
label_8:
#line 189
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(224)));
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 190
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 190
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0move(&___nl__5,___get_global_const(594));
#line 191
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 191
c_rt_lib0clear(&___nl__5);
#line 192
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 192
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 192
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0move(&___nl__5,___get_global_const(595));
#line 193
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 193
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 193
c_rt_lib0clear(&___nl__6);
#line 193
c_rt_lib0move(&___nl__6,___get_global_const(596));
#line 193
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 193
c_rt_lib0clear(&___nl__6);
#line 193
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 193
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0clear(&___nl__4);
#line 194
goto label_1;
#line 194
label_9:
#line 194
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(225)));
#line 195
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 195
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 195
c_rt_lib0clear(&___nl__5);
#line 196
c_rt_lib0move(&___nl__5,___get_global_const(597));
#line 196
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 196
c_rt_lib0clear(&___nl__5);
#line 197
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 197
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 197
c_rt_lib0clear(&___nl__5);
#line 198
c_rt_lib0move(&___nl__5,___get_global_const(595));
#line 198
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 198
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 198
c_rt_lib0clear(&___nl__6);
#line 198
c_rt_lib0move(&___nl__6,___get_global_const(596));
#line 198
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 198
c_rt_lib0clear(&___nl__6);
#line 198
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 198
c_rt_lib0clear(&___nl__5);
#line 198
c_rt_lib0clear(&___nl__4);
#line 199
goto label_1;
#line 199
label_10:
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(75)));
#line 200
c_rt_lib0delete(generator_pm_priv0move_register_to_ref_args(___ref___1));
#line 201
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(238)));
#line 201
if(c_rt_lib0check_true_native(___nl__5)){ goto label_32;}
#line 205
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(215)));
#line 205
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 205
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 205
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 205
nl_die_arg(___nl__5);
#line 201
label_32:
#line 201
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(238)));
#line 202
c_rt_lib0move(&___nl__7,___get_global_const(352));
#line 202
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__7));
#line 202
c_rt_lib0clear(&___nl__7);
#line 203
c_rt_lib0delete(generator_pm_priv0print_register(___nl__6, ___ref___1));
#line 204
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 204
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__7));
#line 204
c_rt_lib0clear(&___nl__7);
#line 204
c_rt_lib0clear(&___nl__6);
#line 205
goto label_31;
#line 205
label_33:
#line 206
c_rt_lib0move(&___nl__6,___get_global_const(598));
#line 206
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 206
c_rt_lib0clear(&___nl__6);
#line 207
goto label_31;
#line 207
label_31:
#line 207
c_rt_lib0clear(&___nl__5);
#line 207
c_rt_lib0clear(&___nl__4);
#line 208
goto label_1;
#line 208
label_11:
#line 208
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(233)));
#line 209
c_rt_lib0move(&___nl__5,___get_global_const(599));
#line 209
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 209
c_rt_lib0clear(&___nl__5);
#line 210
c_rt_lib0delete(generator_pm_priv0print_register(___nl__4, ___ref___1));
#line 211
c_rt_lib0move(&___nl__5,___get_global_const(554));
#line 211
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 211
c_rt_lib0clear(&___nl__5);
#line 211
c_rt_lib0clear(&___nl__4);
#line 212
goto label_1;
#line 212
label_12:
#line 212
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(226)));
#line 213
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 213
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 213
c_rt_lib0clear(&___nl__5);
#line 214
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 214
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 214
c_rt_lib0clear(&___nl__5);
#line 215
c_rt_lib0move(&___nl__5,___get_global_const(315));
#line 215
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 215
c_rt_lib0clear(&___nl__5);
#line 215
c_rt_lib0clear(&___nl__4);
#line 216
goto label_1;
#line 216
label_13:
#line 216
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(227)));
#line 217
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 217
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 217
c_rt_lib0clear(&___nl__5);
#line 218
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 218
c_rt_lib0move(&___nl__5, nl0is_sim(___nl__8));
#line 218
c_rt_lib0clear(&___nl__8);
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__5));
#line 218
if(c_rt_lib0check_true_native(___nl__7)){ goto label_37;}
#line 218
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 218
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 218
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 218
c_rt_lib0clear(&___nl__9);
#line 218
c_rt_lib0move(&___nl__5, string_utils0is_integer(___nl__8));
#line 218
c_rt_lib0clear(&___nl__8);
#line 218
label_37:
#line 218
c_rt_lib0clear(&___nl__7);
#line 218
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 218
if(c_rt_lib0check_true_native(___nl__6)){ goto label_36;}
#line 218
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 218
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__7));
#line 218
c_rt_lib0clear(&___nl__7);
#line 218
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 218
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__7));
#line 218
c_rt_lib0clear(&___nl__7);
#line 218
label_36:
#line 218
c_rt_lib0clear(&___nl__6);
#line 218
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 218
if(c_rt_lib0check_true_native(___nl__5)){ goto label_35;}
#line 219
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 219
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 219
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 219
c_rt_lib0clear(&___nl__7);
#line 219
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 219
c_rt_lib0clear(&___nl__6);
#line 220
goto label_34;
#line 220
label_35:
#line 221
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 221
c_rt_lib0move(&___nl__6, dfile0ssave(___nl__7));
#line 221
c_rt_lib0clear(&___nl__7);
#line 221
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 221
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 221
c_rt_lib0clear(&___nl__7);
#line 221
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 221
c_rt_lib0clear(&___nl__6);
#line 222
goto label_34;
#line 222
label_34:
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0clear(&___nl__4);
#line 223
goto label_1;
#line 223
label_14:
#line 223
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(228)));
#line 224
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 224
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 224
c_rt_lib0clear(&___nl__5);
#line 225
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 225
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 225
c_rt_lib0clear(&___nl__5);
#line 226
c_rt_lib0move(&___nl__5,___get_global_const(600));
#line 226
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 226
c_rt_lib0clear(&___nl__5);
#line 227
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(241)));
#line 227
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 227
c_rt_lib0clear(&___nl__5);
#line 228
c_rt_lib0move(&___nl__5,___get_global_const(587));
#line 228
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 228
c_rt_lib0clear(&___nl__5);
#line 228
c_rt_lib0clear(&___nl__4);
#line 229
goto label_1;
#line 229
label_15:
#line 229
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(229)));
#line 230
c_rt_lib0delete(generator_pm_priv0print_set_at_idx(___nl__4, ___ref___1));
#line 230
c_rt_lib0clear(&___nl__4);
#line 231
goto label_1;
#line 231
label_16:
#line 231
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(230)));
#line 232
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 232
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__5, ___ref___1));
#line 232
c_rt_lib0clear(&___nl__5);
#line 233
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 233
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 233
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0move(&___nl__5,___get_global_const(601));
#line 234
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(283)));
#line 234
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
c_rt_lib0move(&___nl__6,___get_global_const(602));
#line 234
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 234
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0clear(&___nl__4);
#line 235
goto label_1;
#line 235
label_17:
#line 235
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(231)));
#line 236
c_rt_lib0delete(generator_pm_priv0print_set_val(___nl__4, ___ref___1));
#line 236
c_rt_lib0clear(&___nl__4);
#line 237
goto label_1;
#line 237
label_18:
#line 237
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(232)));
#line 238
c_rt_lib0delete(generator_pm_priv0print_ov_mk(___nl__4, ___ref___1));
#line 238
c_rt_lib0clear(&___nl__4);
#line 239
goto label_1;
#line 239
label_19:
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(234)));
#line 240
c_rt_lib0move(&___nl__5,___get_global_const(375));
#line 240
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__4, ___nl__5));
#line 240
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 240
c_rt_lib0clear(&___nl__5);
#line 240
c_rt_lib0clear(&___nl__4);
#line 241
goto label_1;
#line 241
label_20:
#line 241
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(235)));
#line 242
c_rt_lib0move(&___nl__5,___get_global_const(603));
#line 242
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 242
c_rt_lib0clear(&___nl__5);
#line 243
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 243
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 243
c_rt_lib0clear(&___nl__5);
#line 244
c_rt_lib0move(&___nl__5,___get_global_const(479));
#line 244
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 244
c_rt_lib0clear(&___nl__5);
#line 245
c_rt_lib0move(&___nl__5,___get_global_const(420));
#line 245
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 245
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 245
c_rt_lib0clear(&___nl__6);
#line 245
c_rt_lib0move(&___nl__6,___get_global_const(315));
#line 245
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 245
c_rt_lib0clear(&___nl__6);
#line 245
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 245
c_rt_lib0clear(&___nl__5);
#line 246
c_rt_lib0move(&___nl__5,___get_global_const(174));
#line 246
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 246
c_rt_lib0clear(&___nl__5);
#line 246
c_rt_lib0clear(&___nl__4);
#line 247
goto label_1;
#line 247
label_21:
#line 247
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(236)));
#line 248
c_rt_lib0move(&___nl__5,___get_global_const(420));
#line 248
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 248
c_rt_lib0move(&___nl__6,___get_global_const(315));
#line 248
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 248
c_rt_lib0clear(&___nl__6);
#line 248
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 248
c_rt_lib0clear(&___nl__5);
#line 248
c_rt_lib0clear(&___nl__4);
#line 249
goto label_1;
#line 249
label_22:
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(200)));
#line 250
c_rt_lib0move(&___nl__5,___get_global_const(604));
#line 250
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 250
c_rt_lib0clear(&___nl__5);
#line 251
c_rt_lib0delete(generator_pm_priv0print_register(___nl__4, ___ref___1));
#line 252
c_rt_lib0move(&___nl__5,___get_global_const(459));
#line 252
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 252
c_rt_lib0clear(&___nl__5);
#line 252
c_rt_lib0clear(&___nl__4);
#line 253
goto label_1;
#line 253
label_1:
#line 253
c_rt_lib0clear(&___nl__2);
#line 253
c_rt_lib0clear(&___nl__3);
#line 254
c_rt_lib0move(&___nl__2, string0lf());
#line 254
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 254
c_rt_lib0clear(&___nl__2);
#line 254
c_rt_lib0clear(&___nl__0);
#line 254
return NULL;
}

ImmT generator_pm_priv0print_call(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 258
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(237)));
#line 258
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 258
c_rt_lib0clear(&___nl__2);
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(261)));
#line 259
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__3));
#line 259
c_rt_lib0clear(&___nl__3);
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 259
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 260
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(261)));
#line 260
c_rt_lib0move(&___nl__4,___get_global_const(583));
#line 260
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 260
c_rt_lib0clear(&___nl__4);
#line 260
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 260
c_rt_lib0clear(&___nl__3);
#line 261
goto label_1;
#line 261
label_2:
#line 262
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(434)));
#line 262
c_rt_lib0move(&___nl__4,___get_global_const(584));
#line 262
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 262
c_rt_lib0clear(&___nl__4);
#line 262
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 262
c_rt_lib0clear(&___nl__3);
#line 263
goto label_1;
#line 263
label_1:
#line 263
c_rt_lib0clear(&___nl__2);
#line 264
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(389)));
#line 264
c_rt_lib0move(&___nl__3,___get_global_const(326));
#line 264
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 264
c_rt_lib0clear(&___nl__3);
#line 264
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 264
c_rt_lib0clear(&___nl__2);
#line 265
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 266
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 266
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 266
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 266
label_5:
#line 266
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 266
if(c_rt_lib0check_true_native(___nl__8)){ goto label_3;}
#line 266
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 267
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 267
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__2, ___nl__9));
#line 267
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 267
if(c_rt_lib0check_true_native(___nl__9)){ goto label_7;}
#line 268
c_rt_lib0move(&___nl__10,___get_global_const(193));
#line 268
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__10));
#line 268
c_rt_lib0clear(&___nl__10);
#line 269
goto label_7;
#line 269
label_7:
#line 269
c_rt_lib0clear(&___nl__9);
#line 270
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__4, ___get_global_const(238)));
#line 270
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__4, ___get_global_const(5)));
#line 272
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 272
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__4));
#line 272
nl_die_arg(___nl__9);
#line 270
label_9:
#line 270
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__4, ___get_global_const(238)));
#line 271
c_rt_lib0delete(generator_pm_priv0print_register(___nl__10, ___ref___1));
#line 271
c_rt_lib0clear(&___nl__10);
#line 272
goto label_8;
#line 272
label_10:
#line 272
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__4, ___get_global_const(5)));
#line 273
c_rt_lib0delete(generator_pm_priv0print_register(___nl__10, ___ref___1));
#line 273
c_rt_lib0clear(&___nl__10);
#line 274
goto label_8;
#line 274
label_8:
#line 274
c_rt_lib0clear(&___nl__9);
#line 275
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 275
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__9));
#line 275
c_rt_lib0clear(&___nl__9);
#line 276
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 276
goto label_5;
#line 276
label_3:
#line 276
c_rt_lib0clear(&___nl__3);
#line 276
c_rt_lib0clear(&___nl__4);
#line 276
c_rt_lib0clear(&___nl__5);
#line 276
c_rt_lib0clear(&___nl__6);
#line 276
c_rt_lib0clear(&___nl__7);
#line 276
c_rt_lib0clear(&___nl__8);
#line 277
c_rt_lib0move(&___nl__3,___get_global_const(459));
#line 277
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 277
c_rt_lib0clear(&___nl__3);
#line 277
c_rt_lib0clear(&___nl__2);
#line 277
c_rt_lib0clear(&___nl__0);
#line 277
return NULL;
}

ImmT generator_pm_priv0print_una_op(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 282
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(237)));
#line 282
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 282
c_rt_lib0clear(&___nl__2);
#line 283
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 283
c_rt_lib0move(&___nl__3,___get_global_const(247));
#line 283
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 283
c_rt_lib0clear(&___nl__3);
#line 283
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 283
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 283
c_rt_lib0move(&___nl__3,___get_global_const(605));
#line 283
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 283
c_rt_lib0clear(&___nl__3);
#line 283
goto label_2;
#line 283
label_2:
#line 283
c_rt_lib0clear(&___nl__2);
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 284
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 284
c_rt_lib0clear(&___nl__2);
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 285
c_rt_lib0move(&___nl__3,___get_global_const(247));
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 285
c_rt_lib0clear(&___nl__3);
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 285
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 285
c_rt_lib0move(&___nl__3,___get_global_const(606));
#line 285
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 285
c_rt_lib0clear(&___nl__3);
#line 285
goto label_4;
#line 285
label_4:
#line 285
c_rt_lib0clear(&___nl__2);
#line 286
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 286
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 286
c_rt_lib0clear(&___nl__2);
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 287
c_rt_lib0move(&___nl__3,___get_global_const(247));
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 287
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 287
c_rt_lib0move(&___nl__3,___get_global_const(473));
#line 287
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
goto label_6;
#line 287
label_6:
#line 287
c_rt_lib0clear(&___nl__2);
#line 288
c_rt_lib0move(&___nl__2,___get_global_const(315));
#line 288
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 288
c_rt_lib0clear(&___nl__2);
#line 288
c_rt_lib0clear(&___nl__0);
#line 288
return NULL;
}

ImmT generator_pm_priv0print_bin_op(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 297
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(237)));
#line 297
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 297
c_rt_lib0clear(&___nl__2);
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(272));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(262));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
label_9:
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(264));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
label_8:
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(270));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
label_7:
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(266));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
label_6:
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(253));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
label_5:
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(268));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
label_4:
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 298
c_rt_lib0move(&___nl__3,___get_global_const(254));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 298
c_rt_lib0clear(&___nl__3);
#line 298
label_3:
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 298
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 300
c_rt_lib0move(&___nl__3,___get_global_const(605));
#line 300
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 300
c_rt_lib0clear(&___nl__3);
#line 301
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 301
c_rt_lib0delete(generator_pm_priv0print_register(___nl__3, ___ref___1));
#line 301
c_rt_lib0clear(&___nl__3);
#line 302
c_rt_lib0move(&___nl__3,___get_global_const(607));
#line 302
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 302
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 302
c_rt_lib0clear(&___nl__4);
#line 302
c_rt_lib0move(&___nl__4,___get_global_const(607));
#line 302
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 302
c_rt_lib0clear(&___nl__4);
#line 302
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 302
c_rt_lib0clear(&___nl__3);
#line 303
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 303
c_rt_lib0delete(generator_pm_priv0print_register(___nl__3, ___ref___1));
#line 303
c_rt_lib0clear(&___nl__3);
#line 304
c_rt_lib0move(&___nl__3,___get_global_const(459));
#line 304
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 304
c_rt_lib0clear(&___nl__3);
#line 305
goto label_1;
#line 305
label_2:
#line 306
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 306
c_rt_lib0delete(generator_pm_priv0print_register(___nl__3, ___ref___1));
#line 306
c_rt_lib0clear(&___nl__3);
#line 307
c_rt_lib0move(&___nl__3,___get_global_const(607));
#line 307
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 307
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 307
c_rt_lib0clear(&___nl__4);
#line 307
c_rt_lib0move(&___nl__4,___get_global_const(607));
#line 307
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 307
c_rt_lib0clear(&___nl__4);
#line 307
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 307
c_rt_lib0clear(&___nl__3);
#line 308
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 308
c_rt_lib0delete(generator_pm_priv0print_register(___nl__3, ___ref___1));
#line 308
c_rt_lib0clear(&___nl__3);
#line 309
c_rt_lib0move(&___nl__3,___get_global_const(315));
#line 309
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 309
c_rt_lib0clear(&___nl__3);
#line 310
goto label_1;
#line 310
label_1:
#line 310
c_rt_lib0clear(&___nl__2);
#line 310
c_rt_lib0clear(&___nl__0);
#line 310
return NULL;
}

ImmT generator_pm_priv0print_set_at_idx(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 315
c_rt_lib0move(&___nl__2,___get_global_const(608));
#line 315
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 315
c_rt_lib0clear(&___nl__2);
#line 316
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 316
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 316
c_rt_lib0clear(&___nl__2);
#line 317
c_rt_lib0move(&___nl__2,___get_global_const(609));
#line 317
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 317
c_rt_lib0clear(&___nl__2);
#line 318
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 318
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 318
c_rt_lib0clear(&___nl__2);
#line 319
c_rt_lib0move(&___nl__2,___get_global_const(610));
#line 319
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 319
c_rt_lib0clear(&___nl__2);
#line 320
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 320
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 320
c_rt_lib0clear(&___nl__2);
#line 321
c_rt_lib0move(&___nl__2,___get_global_const(611));
#line 321
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 321
c_rt_lib0clear(&___nl__2);
#line 322
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 322
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 322
c_rt_lib0clear(&___nl__2);
#line 323
c_rt_lib0move(&___nl__2,___get_global_const(600));
#line 323
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 323
c_rt_lib0clear(&___nl__2);
#line 324
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(241)));
#line 324
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 324
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0move(&___nl__2,___get_global_const(363));
#line 325
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 325
c_rt_lib0clear(&___nl__2);
#line 326
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 326
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 326
c_rt_lib0clear(&___nl__2);
#line 327
c_rt_lib0move(&___nl__2,___get_global_const(315));
#line 327
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 327
c_rt_lib0clear(&___nl__2);
#line 327
c_rt_lib0clear(&___nl__0);
#line 327
return NULL;
}

ImmT generator_pm_priv0print_set_val(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 332
c_rt_lib0move(&___nl__2,___get_global_const(612));
#line 332
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 332
c_rt_lib0clear(&___nl__2);
#line 333
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 333
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 333
c_rt_lib0clear(&___nl__2);
#line 334
c_rt_lib0move(&___nl__2,___get_global_const(609));
#line 334
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 334
c_rt_lib0clear(&___nl__2);
#line 335
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 335
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 335
c_rt_lib0clear(&___nl__2);
#line 336
c_rt_lib0move(&___nl__2,___get_global_const(613));
#line 336
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 336
c_rt_lib0clear(&___nl__2);
#line 337
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 337
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 337
c_rt_lib0clear(&___nl__2);
#line 338
c_rt_lib0move(&___nl__2,___get_global_const(614));
#line 338
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 338
c_rt_lib0clear(&___nl__2);
#line 339
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 339
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 339
c_rt_lib0clear(&___nl__2);
#line 340
c_rt_lib0move(&___nl__2,___get_global_const(601));
#line 340
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(283)));
#line 340
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 340
c_rt_lib0clear(&___nl__3);
#line 340
c_rt_lib0move(&___nl__3,___get_global_const(615));
#line 340
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 340
c_rt_lib0clear(&___nl__3);
#line 340
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 340
c_rt_lib0clear(&___nl__2);
#line 341
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 341
c_rt_lib0delete(generator_pm_priv0print_register(___nl__2, ___ref___1));
#line 341
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0move(&___nl__2,___get_global_const(315));
#line 342
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 342
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0clear(&___nl__0);
#line 342
return NULL;
}

ImmT generator_pm_priv0print_ov_mk(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 346
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(237)));
#line 346
c_rt_lib0delete(generator_pm_priv0print_register_to_assign(___nl__2, ___ref___1));
#line 346
c_rt_lib0clear(&___nl__2);
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(215)));
#line 347
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 347
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 347
c_rt_lib0move(&___nl__4,___get_global_const(6));
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 347
c_rt_lib0clear(&___nl__4);
#line 347
label_3:
#line 347
c_rt_lib0clear(&___nl__3);
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 347
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 348
c_rt_lib0move(&___nl__3,___get_global_const(616));
#line 348
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 348
c_rt_lib0clear(&___nl__3);
#line 349
goto label_1;
#line 349
label_2:
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(215)));
#line 349
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 349
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 349
c_rt_lib0move(&___nl__4,___get_global_const(7));
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 349
c_rt_lib0clear(&___nl__4);
#line 349
label_5:
#line 349
c_rt_lib0clear(&___nl__3);
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 349
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 350
c_rt_lib0move(&___nl__3,___get_global_const(617));
#line 350
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 350
c_rt_lib0clear(&___nl__3);
#line 351
goto label_1;
#line 351
label_4:
#line 352
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 352
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(242)));
#line 352
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 356
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(215)));
#line 356
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 356
c_rt_lib0move(&___nl__4,___get_global_const(76));
#line 356
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 356
nl_die_arg(___nl__4);
#line 352
label_7:
#line 352
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(242)));
#line 353
c_rt_lib0move(&___nl__6,___get_global_const(618));
#line 353
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 353
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 353
c_rt_lib0clear(&___nl__7);
#line 353
c_rt_lib0move(&___nl__7,___get_global_const(619));
#line 353
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 353
c_rt_lib0clear(&___nl__7);
#line 353
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 353
c_rt_lib0clear(&___nl__6);
#line 354
c_rt_lib0delete(generator_pm_priv0print_register(___nl__5, ___ref___1));
#line 355
c_rt_lib0move(&___nl__6,___get_global_const(459));
#line 355
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__6));
#line 355
c_rt_lib0clear(&___nl__6);
#line 355
c_rt_lib0clear(&___nl__5);
#line 356
goto label_6;
#line 356
label_8:
#line 357
c_rt_lib0move(&___nl__5,___get_global_const(620));
#line 357
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 357
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 357
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0move(&___nl__6,___get_global_const(596));
#line 357
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 357
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__5));
#line 357
c_rt_lib0clear(&___nl__5);
#line 358
goto label_6;
#line 358
label_6:
#line 358
c_rt_lib0clear(&___nl__3);
#line 358
c_rt_lib0clear(&___nl__4);
#line 359
goto label_1;
#line 359
label_1:
#line 359
c_rt_lib0clear(&___nl__2);
#line 359
c_rt_lib0clear(&___nl__0);
#line 359
return NULL;
}

ImmT generator_pm_priv0print_register(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 363
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 363
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__0, ___nl__2));
#line 363
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 363
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 363
c_rt_lib0clear(&___nl__0);
#line 363
c_rt_lib0clear(&___nl__2);
#line 363
return NULL;
#line 363
goto label_2;
#line 363
label_2:
#line 363
c_rt_lib0clear(&___nl__2);
#line 364
c_rt_lib0move(&___nl__2,___get_global_const(585));
#line 364
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 364
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 364
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 364
c_rt_lib0clear(&___nl__3);
#line 364
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__2));
#line 364
c_rt_lib0clear(&___nl__2);
#line 364
c_rt_lib0clear(&___nl__0);
#line 364
return NULL;
}

ImmT generator_pm_priv0print_register_to_assign(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_pm_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 368
c_rt_lib0delete(generator_pm_priv0print_register(___nl__0, ___ref___1));
#line 369
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 369
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__0, ___nl__2));
#line 369
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 369
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 369
c_rt_lib0move(&___nl__3,___get_global_const(452));
#line 369
c_rt_lib0delete(generator_pm_priv0print(___ref___1, ___nl__3));
#line 369
c_rt_lib0clear(&___nl__3);
#line 369
goto label_2;
#line 369
label_2:
#line 369
c_rt_lib0clear(&___nl__2);
#line 369
c_rt_lib0clear(&___nl__0);
#line 369
return NULL;
}


static ImmT ___const__[3];
static int ___const_init__ = 1;
void generator_pm_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[2];


for(int i=0;i<2;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 2);
}}
ImmT generator_pm_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_pm_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = generator_pm0fun_args_t0cal();
	break;
case 1:
	___const__[1] = generator_pm0state_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
