
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "type_checker.h"
#include "array.h"
#include "ptd.h"
#include "tct.h"
#include "tc_types.h"
#include "hash.h"
#include "enum.h"
#include "string.h"
#include "boolean_t.h"
#include "nast.h"
#include "ptd_parser.h"
#include "ptd_system.h"
#include "singleton.h"
#line 1 "type_checker.nl"

static ImmT *__const__f = NULL;
void type_checker_priv0__const__init();
ImmT type_checker_priv0__const__sim(int __nr);
ImmT type_checker_priv0__const__sing(int __nr);

ImmT type_checker_priv0type_to_ptd(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0get_fun_def_key(ImmT ___nl__0);
ImmT type_checker_priv0get_fun_key(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0return_type_to_tct(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0check_types_imported(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2);
ImmT type_checker_priv0prepare_def_fun(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0check_module(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0join_vars(ImmT * ___ref___0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0set_end_function(ImmT * ___ref___0);
ImmT type_checker_priv0check_cmd(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0break_continue_block(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_try_ensure(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_forh(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_fora(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_while(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_rep(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_match(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_val(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0unary_op_dec_inc(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT type_checker_priv0get_special_functions();
ImmT type_checker_priv0get_special_function_def(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0check_special_function(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT type_checker_priv0rec_get_var_from_lval(ImmT ___nl__0,ImmT * ___ref___1);
ImmT type_checker_priv0mk_new_type_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT type_checker_priv0set_type_to_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5);
ImmT type_checker_priv0set_type_to_lval_spec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5,ImmT * ___ref___6);
ImmT type_checker_priv0get_type_left_site_equation(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_type_record_key(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_type_from_bin_op_and_check(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0get_print_tct_type_name(ImmT ___nl__0);
ImmT type_checker_priv0get_print_tct_label(ImmT ___nl__0);
ImmT type_checker_priv0get_print_check_info(ImmT ___nl__0);
ImmT type_checker_priv0check_var_decl(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0check_var_decl_try(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4);
ImmT type_checker_priv0add_var_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT type_checker_priv0add_var_decl_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT type_checker_priv0add_var_decl_with_type_and_check(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0is_known(ImmT ___nl__0);
ImmT type_checker_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0get_fun_module(ImmT ___nl__0,ImmT ___nl__1);
ImmT type_checker_priv0get_function_def(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT type_checker_priv0check_function_exists(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3);
ImmT type_checker_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1);
ImmT type_checker_priv0add_warning(ImmT * ___ref___0,ImmT ___nl__1);


ImmT type_checker_priv0type_to_ptd(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 20
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(73)));
#line 20
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 27
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(38)));
#line 27
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 27
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 27
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 27
nl_die_arg(___nl__2);
#line 20
label_2:
#line 20
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(73)));
#line 21
c_rt_lib0move(&___nl__4, ptd_parser0try_value_to_ptd(___nl__3));
#line 21
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 21
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 24
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 24
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 24
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 24
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 24
nl_die_arg(___nl__5);
#line 21
label_5:
#line 21
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 22
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__6));
#line 23
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 23
c_rt_lib0clear(&___nl__0);
#line 23
c_rt_lib0clear(&___nl__2);
#line 23
c_rt_lib0clear(&___nl__3);
#line 23
c_rt_lib0clear(&___nl__4);
#line 23
c_rt_lib0clear(&___nl__5);
#line 23
c_rt_lib0clear(&___nl__6);
#line 23
return ___nl__7;
#line 23
c_rt_lib0clear(&___nl__7);
#line 23
c_rt_lib0clear(&___nl__6);
#line 24
goto label_4;
#line 24
label_6:
#line 24
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(45)));
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0clear(&___nl__4);
#line 25
c_rt_lib0clear(&___nl__5);
#line 25
return ___nl__6;
#line 25
c_rt_lib0clear(&___nl__6);
#line 26
goto label_4;
#line 26
label_4:
#line 26
c_rt_lib0clear(&___nl__4);
#line 26
c_rt_lib0clear(&___nl__5);
#line 26
c_rt_lib0clear(&___nl__3);
#line 27
goto label_1;
#line 27
label_3:
#line 28
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
return ___nl__3;
#line 28
c_rt_lib0clear(&___nl__3);
#line 29
goto label_1;
#line 29
label_1:
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
return NULL;
}

ImmT type_checker_priv0get_fun_def_key(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 33
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(332)));
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(333)));
#line 33
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 35
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(334)));
#line 35
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 35
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 35
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 35
nl_die_arg(___nl__2);
#line 33
label_2:
#line 34
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
return ___nl__3;
#line 34
c_rt_lib0clear(&___nl__3);
#line 35
goto label_1;
#line 35
label_3:
#line 36
c_rt_lib0move(&___nl__3,___get_global_const(722));
#line 36
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 36
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 36
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
return ___nl__3;
#line 36
c_rt_lib0clear(&___nl__3);
#line 37
goto label_1;
#line 37
label_1:
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
return NULL;
}

ImmT type_checker_priv0get_fun_key(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 41
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 42
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 42
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 42
c_rt_lib0move(&___nl__4,___get_global_const(722));
#line 42
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 42
c_rt_lib0clear(&___nl__4);
#line 42
goto label_2;
#line 42
label_2:
#line 42
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__2, ___nl__0));
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
return ___nl__3;
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
return NULL;
}

ImmT type_checker_priv0return_type_to_tct(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(73)));
#line 47
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(38)));
#line 55
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 55
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 55
nl_die_arg(___nl__2);
#line 47
label_2:
#line 47
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(73)));
#line 48
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(759)));
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 48
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 49
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 49
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(759)));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(111)));
#line 50
c_rt_lib0move(&___nl__8,___get_global_const(625));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 50
c_rt_lib0clear(&___nl__8);
#line 50
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 50
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(78)));
#line 50
c_rt_lib0move(&___nl__8,___get_global_const(724));
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 50
c_rt_lib0clear(&___nl__8);
#line 50
label_8:
#line 50
c_rt_lib0clear(&___nl__7);
#line 50
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 50
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 51
c_rt_lib0move(&___nl__7, tct0void());
#line 51
c_rt_lib0clear(&___nl__0);
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
return ___nl__7;
#line 51
c_rt_lib0clear(&___nl__7);
#line 52
goto label_7;
#line 52
label_7:
#line 52
c_rt_lib0clear(&___nl__6);
#line 52
c_rt_lib0clear(&___nl__5);
#line 53
goto label_5;
#line 53
label_5:
#line 53
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__4, type_checker_priv0type_to_ptd(___nl__0, ___ref___1));
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
return ___nl__4;
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0clear(&___nl__3);
#line 55
goto label_1;
#line 55
label_3:
#line 56
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 56
c_rt_lib0clear(&___nl__0);
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
return ___nl__3;
#line 56
c_rt_lib0clear(&___nl__3);
#line 57
goto label_1;
#line 57
label_1:
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
return NULL;
}

ImmT type_checker_priv0check_types_imported(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(746)));
#line 62
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 63
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(747)));
#line 63
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 65
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(748)));
#line 65
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 67
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(749)));
#line 67
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(750)));
#line 71
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 80
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(751)));
#line 80
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 81
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(752)));
#line 81
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 82
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(753)));
#line 82
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 89
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(754)));
#line 89
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 89
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 89
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 89
nl_die_arg(___nl__3);
#line 62
label_2:
#line 63
goto label_1;
#line 63
label_3:
#line 63
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(747)));
#line 64
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__4, ___ref___1, ___ref___2));
#line 64
c_rt_lib0clear(&___nl__4);
#line 65
goto label_1;
#line 65
label_4:
#line 65
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(748)));
#line 66
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__4, ___ref___1, ___ref___2));
#line 66
c_rt_lib0clear(&___nl__4);
#line 67
goto label_1;
#line 67
label_5:
#line 67
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(749)));
#line 68
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 68
label_13:
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 68
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 68
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 69
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__6, ___ref___1, ___ref___2));
#line 70
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 70
goto label_13;
#line 70
label_11:
#line 70
c_rt_lib0clear(&___nl__5);
#line 70
c_rt_lib0clear(&___nl__6);
#line 70
c_rt_lib0clear(&___nl__7);
#line 70
c_rt_lib0clear(&___nl__4);
#line 71
goto label_1;
#line 71
label_6:
#line 71
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(750)));
#line 72
c_rt_lib0move(&___nl__6,___get_global_const(583));
#line 72
c_rt_lib0move(&___nl__5, string0index2(___nl__4, ___nl__6));
#line 72
c_rt_lib0clear(&___nl__6);
#line 73
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 73
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__5, ___nl__6));
#line 73
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 73
if(c_rt_lib0check_true_native(___nl__6)){ goto label_15;}
#line 74
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 74
c_rt_lib0move(&___nl__7, string0substr(___nl__4, ___nl__8, ___nl__5));
#line 74
c_rt_lib0clear(&___nl__8);
#line 75
c_rt_lib0move(&___nl__9,___get_global_const(139));
#line 75
c_rt_lib0move(&___nl__9, c_rt_lib0add(___nl__5, ___nl__9));
#line 75
c_rt_lib0move(&___nl__10, string0length(___nl__4));
#line 75
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__5));
#line 75
c_rt_lib0move(&___nl__11,___get_global_const(139));
#line 75
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__11));
#line 75
c_rt_lib0clear(&___nl__11);
#line 75
c_rt_lib0move(&___nl__8, string0substr(___nl__4, ___nl__9, ___nl__10));
#line 75
c_rt_lib0clear(&___nl__10);
#line 75
c_rt_lib0clear(&___nl__9);
#line 76
c_rt_lib0delete(type_checker_priv0check_function_exists(___nl__7, ___nl__8, ___ref___1, ___ref___2));
#line 76
c_rt_lib0clear(&___nl__7);
#line 76
c_rt_lib0clear(&___nl__8);
#line 77
goto label_14;
#line 77
label_15:
#line 78
c_rt_lib0move(&___nl__7,___get_global_const(1089));
#line 78
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 78
c_rt_lib0move(&___nl__8,___get_global_const(756));
#line 78
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 78
c_rt_lib0clear(&___nl__8);
#line 78
c_rt_lib0delete(type_checker_priv0add_error(___ref___2, ___nl__7));
#line 78
c_rt_lib0clear(&___nl__7);
#line 79
goto label_14;
#line 79
label_14:
#line 79
c_rt_lib0clear(&___nl__6);
#line 79
c_rt_lib0clear(&___nl__5);
#line 79
c_rt_lib0clear(&___nl__4);
#line 80
goto label_1;
#line 80
label_7:
#line 81
goto label_1;
#line 81
label_8:
#line 82
goto label_1;
#line 82
label_9:
#line 82
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(753)));
#line 83
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 83
label_18:
#line 83
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 83
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 83
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 83
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 84
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__6, ___get_global_const(757)));
#line 84
if(c_rt_lib0check_true_native(___nl__8)){ goto label_20;}
#line 85
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__6, ___get_global_const(758)));
#line 85
if(c_rt_lib0check_true_native(___nl__8)){ goto label_21;}
#line 85
c_rt_lib0move(&___nl__8,___get_global_const(76));
#line 85
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__6));
#line 85
nl_die_arg(___nl__8);
#line 84
label_20:
#line 85
goto label_19;
#line 85
label_21:
#line 85
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__6, ___get_global_const(758)));
#line 86
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__9, ___ref___1, ___ref___2));
#line 86
c_rt_lib0clear(&___nl__9);
#line 87
goto label_19;
#line 87
label_19:
#line 87
c_rt_lib0clear(&___nl__8);
#line 88
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 88
goto label_18;
#line 88
label_16:
#line 88
c_rt_lib0clear(&___nl__5);
#line 88
c_rt_lib0clear(&___nl__6);
#line 88
c_rt_lib0clear(&___nl__7);
#line 88
c_rt_lib0clear(&___nl__4);
#line 89
goto label_1;
#line 89
label_10:
#line 90
goto label_1;
#line 90
label_1:
#line 90
c_rt_lib0clear(&___nl__3);
#line 90
c_rt_lib0clear(&___nl__0);
#line 90
return NULL;
}

ImmT type_checker_priv0prepare_def_fun(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
ImmT ___nl__24 = NULL;
#line 94
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 95
label_3:
#line 95
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 95
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 95
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 95
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 96
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 96
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 96
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 96
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(734), ___nl__7);
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0clear(&___nl__7);
#line 97
c_rt_lib0copy(&___nl__6, ___nl__3);
#line 97
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(111), ___nl__6);
#line 97
c_rt_lib0clear(&___nl__6);
#line 98
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(735)));
#line 99
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 99
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 99
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__7));
#line 99
label_6:
#line 99
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 99
if(c_rt_lib0check_true_native(___nl__12)){ goto label_4;}
#line 99
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 100
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(0));
#line 101
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(74)));
#line 101
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 101
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 101
c_rt_lib0move(&___nl__18, c_rt_lib0array_len(___nl__14));
#line 101
label_9:
#line 101
c_rt_lib0move(&___nl__19, c_rt_lib0ge(___nl__16, ___nl__18));
#line 101
if(c_rt_lib0check_true_native(___nl__19)){ goto label_7;}
#line 101
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__14, ___nl__16));
#line 102
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(78)));
#line 102
c_rt_lib0move(&___nl__22, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(261)));
#line 102
c_rt_lib0move(&___nl__24, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(73)));
#line 102
c_rt_lib0move(&___nl__23, type_checker_priv0type_to_ptd(___nl__24, ___ref___1));
#line 102
c_rt_lib0clear(&___nl__24);
#line 102
c_rt_lib0move(&___nl__20, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__21, ___get_global_const(261), ___nl__22, ___get_global_const(73), ___nl__23));
#line 102
c_rt_lib0clear(&___nl__21);
#line 102
c_rt_lib0clear(&___nl__22);
#line 102
c_rt_lib0clear(&___nl__23);
#line 102
c_rt_lib0delete(array0push(&___nl__13, ___nl__20));
#line 102
c_rt_lib0clear(&___nl__20);
#line 107
c_rt_lib0move(&___nl__16, c_rt_lib0add_mod(___nl__16, ___nl__17));
#line 107
goto label_9;
#line 107
label_7:
#line 107
c_rt_lib0clear(&___nl__14);
#line 107
c_rt_lib0clear(&___nl__15);
#line 107
c_rt_lib0clear(&___nl__16);
#line 107
c_rt_lib0clear(&___nl__17);
#line 107
c_rt_lib0clear(&___nl__18);
#line 107
c_rt_lib0clear(&___nl__19);
#line 108
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(214)));
#line 108
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_none(___get_global_const(43)));
#line 108
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_none(___get_global_const(43)));
#line 108
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(78)));
#line 108
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(332)));
#line 108
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(736)));
#line 108
c_rt_lib0move(&___nl__20, type_checker_priv0return_type_to_tct(___nl__21, ___ref___1));
#line 108
c_rt_lib0clear(&___nl__21);
#line 108
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(8, ___get_global_const(214), ___nl__15, ___get_global_const(1036), ___nl__16, ___get_global_const(1031), ___nl__17, ___get_global_const(78), ___nl__18, ___get_global_const(111), ___nl__3, ___get_global_const(332), ___nl__19, ___get_global_const(74), ___nl__13, ___get_global_const(736), ___nl__20));
#line 108
c_rt_lib0clear(&___nl__15);
#line 108
c_rt_lib0clear(&___nl__16);
#line 108
c_rt_lib0clear(&___nl__17);
#line 108
c_rt_lib0clear(&___nl__18);
#line 108
c_rt_lib0clear(&___nl__19);
#line 108
c_rt_lib0clear(&___nl__20);
#line 118
c_rt_lib0move(&___nl__15, type_checker_priv0get_fun_def_key(___nl__14));
#line 119
c_rt_lib0move(&___nl__16, hash0has_key(___nl__6, ___nl__15));
#line 119
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 119
if(c_rt_lib0check_true_native(___nl__16)){ goto label_11;}
#line 119
c_rt_lib0move(&___nl__17,___get_global_const(1090));
#line 119
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__15));
#line 119
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__17));
#line 119
c_rt_lib0clear(&___nl__17);
#line 119
goto label_11;
#line 119
label_11:
#line 119
c_rt_lib0clear(&___nl__16);
#line 120
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__15, ___nl__14));
#line 120
c_rt_lib0clear(&___nl__13);
#line 120
c_rt_lib0clear(&___nl__14);
#line 120
c_rt_lib0clear(&___nl__15);
#line 121
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 121
goto label_6;
#line 121
label_4:
#line 121
c_rt_lib0clear(&___nl__7);
#line 121
c_rt_lib0clear(&___nl__8);
#line 121
c_rt_lib0clear(&___nl__9);
#line 121
c_rt_lib0clear(&___nl__10);
#line 121
c_rt_lib0clear(&___nl__11);
#line 121
c_rt_lib0clear(&___nl__12);
#line 122
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__6));
#line 122
c_rt_lib0clear(&___nl__6);
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 123
goto label_3;
#line 123
label_1:
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0clear(&___nl__5);
#line 124
c_rt_lib0clear(&___nl__0);
#line 124
return ___nl__2;
#line 124
c_rt_lib0clear(&___nl__2);
#line 124
c_rt_lib0clear(&___nl__0);
#line 124
return NULL;
}

ImmT type_checker0check0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "type_checker0check");
return type_checker0check(_tab[0], _tab[1]);}
ImmT type_checker0check(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 129
c_rt_lib0move(&___nl__2, type_checker0check_modules(___nl__0, ___nl__1));
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
return ___nl__2;
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
return NULL;
}

ImmT type_checker0check_modules0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "type_checker0check_modules");
return type_checker0check_modules(_tab[0], _tab[1]);}
ImmT type_checker0check_modules(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 134
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0unary_minus(___nl__5));
#line 134
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 134
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(17), ___nl__3, ___get_global_const(98), ___nl__4, ___get_global_const(734), ___nl__5, ___get_global_const(111), ___nl__6));
#line 134
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0clear(&___nl__4);
#line 134
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0clear(&___nl__6);
#line 135
c_rt_lib0move(&___nl__3, type_checker_priv0prepare_def_fun(___nl__1, &___nl__2));
#line 136
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 136
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 136
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(130), ___nl__5, ___get_global_const(132), ___nl__6));
#line 136
c_rt_lib0clear(&___nl__5);
#line 136
c_rt_lib0clear(&___nl__6);
#line 137
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__0));
#line 137
label_3:
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 137
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 137
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__0, ___nl__5));
#line 138
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 138
c_rt_lib0move(&___nl__8, c_rt_lib0unary_minus(___nl__8));
#line 138
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 138
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(734), ___nl__9);
#line 138
c_rt_lib0clear(&___nl__8);
#line 138
c_rt_lib0clear(&___nl__9);
#line 139
c_rt_lib0copy(&___nl__8, ___nl__5);
#line 139
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(111), ___nl__8);
#line 139
c_rt_lib0clear(&___nl__8);
#line 140
c_rt_lib0delete(type_checker_priv0check_module(___nl__6, &___nl__3, &___nl__2, &___nl__4));
#line 141
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 141
goto label_3;
#line 141
label_1:
#line 141
c_rt_lib0clear(&___nl__5);
#line 141
c_rt_lib0clear(&___nl__6);
#line 141
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(17)));
#line 142
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(98)));
#line 142
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(17), ___nl__6, ___get_global_const(61), ___nl__4, ___get_global_const(98), ___nl__7));
#line 142
c_rt_lib0clear(&___nl__6);
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
return ___nl__5;
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
return NULL;
}

ImmT type_checker_priv0check_module(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
#line 147
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 147
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 147
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 147
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(622), ___nl__8, ___get_global_const(829), ___nl__9));
#line 147
c_rt_lib0clear(&___nl__8);
#line 147
c_rt_lib0clear(&___nl__9);
#line 147
c_rt_lib0move(&___nl__8, tct0empty());
#line 147
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(4, ___get_global_const(61), *___ref___3, ___get_global_const(733), ___nl__6, ___get_global_const(1056), ___nl__7, ___get_global_const(736), ___nl__8));
#line 147
c_rt_lib0clear(&___nl__6);
#line 147
c_rt_lib0clear(&___nl__7);
#line 147
c_rt_lib0clear(&___nl__8);
#line 147
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 147
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(1029), ___nl__5, ___get_global_const(340), ___nl__6, ___get_global_const(1032), *___ref___1));
#line 147
c_rt_lib0clear(&___nl__5);
#line 147
c_rt_lib0clear(&___nl__6);
#line 157
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(128)));
#line 157
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 157
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 157
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 157
label_3:
#line 157
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 157
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 157
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 158
c_rt_lib0move(&___nl__11,___get_global_const(340));
#line 158
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__4, ___nl__11));
#line 158
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(78)));
#line 158
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 158
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__13));
#line 158
c_rt_lib0clear(&___nl__13);
#line 158
c_rt_lib0clear(&___nl__12);
#line 158
c_rt_lib0move(&___nl__12,___get_global_const(340));
#line 158
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__12, ___nl__11));
#line 158
c_rt_lib0clear(&___nl__12);
#line 158
c_rt_lib0clear(&___nl__11);
#line 159
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 159
goto label_3;
#line 159
label_1:
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
#line 159
c_rt_lib0clear(&___nl__10);
#line 160
c_rt_lib0move(&___nl__5,___get_global_const(340));
#line 160
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 160
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 160
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 160
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__6, ___nl__7));
#line 160
c_rt_lib0clear(&___nl__7);
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0move(&___nl__6,___get_global_const(340));
#line 160
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0clear(&___nl__5);
#line 161
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(735)));
#line 161
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 161
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 161
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 161
label_6:
#line 161
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 161
if(c_rt_lib0check_true_native(___nl__10)){ goto label_4;}
#line 161
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 162
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 163
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(74)));
#line 163
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 163
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 163
c_rt_lib0move(&___nl__16, c_rt_lib0array_len(___nl__12));
#line 163
label_9:
#line 163
c_rt_lib0move(&___nl__17, c_rt_lib0ge(___nl__14, ___nl__16));
#line 163
if(c_rt_lib0check_true_native(___nl__17)){ goto label_7;}
#line 163
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__12, ___nl__14));
#line 164
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(73)));
#line 164
c_rt_lib0move(&___nl__18, type_checker_priv0type_to_ptd(___nl__19, ___ref___2));
#line 164
c_rt_lib0clear(&___nl__19);
#line 165
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__18, &___nl__4, ___ref___2));
#line 166
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(78)));
#line 166
c_rt_lib0delete(type_checker_priv0add_var_decl_to_vars(___nl__18, ___nl__19, &___nl__11));
#line 166
c_rt_lib0clear(&___nl__19);
#line 166
c_rt_lib0clear(&___nl__18);
#line 167
c_rt_lib0move(&___nl__14, c_rt_lib0add_mod(___nl__14, ___nl__15));
#line 167
goto label_9;
#line 167
label_7:
#line 167
c_rt_lib0clear(&___nl__12);
#line 167
c_rt_lib0clear(&___nl__13);
#line 167
c_rt_lib0clear(&___nl__14);
#line 167
c_rt_lib0clear(&___nl__15);
#line 167
c_rt_lib0clear(&___nl__16);
#line 167
c_rt_lib0clear(&___nl__17);
#line 168
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(736)));
#line 168
c_rt_lib0move(&___nl__12, type_checker_priv0return_type_to_tct(___nl__13, ___ref___2));
#line 168
c_rt_lib0clear(&___nl__13);
#line 168
c_rt_lib0move(&___nl__13,___get_global_const(1029));
#line 168
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(___nl__4, ___nl__13));
#line 168
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 168
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(736), ___nl__14);
#line 168
c_rt_lib0move(&___nl__15,___get_global_const(1029));
#line 168
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__15, ___nl__13));
#line 168
c_rt_lib0clear(&___nl__15);
#line 168
c_rt_lib0clear(&___nl__12);
#line 168
c_rt_lib0clear(&___nl__13);
#line 168
c_rt_lib0clear(&___nl__14);
#line 169
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1029)));
#line 169
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(736)));
#line 169
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__12, &___nl__4, ___ref___2));
#line 169
c_rt_lib0clear(&___nl__12);
#line 170
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(214)));
#line 170
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__12, &___nl__4, &___nl__11, ___ref___2));
#line 170
c_rt_lib0clear(&___nl__12);
#line 170
c_rt_lib0clear(&___nl__11);
#line 171
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 171
goto label_6;
#line 171
label_4:
#line 171
c_rt_lib0clear(&___nl__5);
#line 171
c_rt_lib0clear(&___nl__6);
#line 171
c_rt_lib0clear(&___nl__7);
#line 171
c_rt_lib0clear(&___nl__8);
#line 171
c_rt_lib0clear(&___nl__9);
#line 171
c_rt_lib0clear(&___nl__10);
#line 172
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1032)));
#line 172
c_rt_lib0copy(___ref___1, ___nl__5);
#line 172
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1029)));
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(61)));
#line 173
c_rt_lib0copy(___ref___3, ___nl__5);
#line 173
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0clear(&___nl__4);
#line 173
c_rt_lib0clear(&___nl__0);
#line 173
return NULL;
}

ImmT type_checker_priv0join_vars(ImmT * ___ref___0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
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
#line 178
c_rt_lib0move(&___nl__5,___get_global_const(1091));
#line 178
c_rt_lib0move(&___nl__4, hash0has_key(___nl__1, ___nl__5));
#line 178
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 178
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 178
c_rt_lib0clear(&___nl__1);
#line 178
c_rt_lib0clear(&___nl__4);
#line 178
return NULL;
#line 178
goto label_2;
#line 178
label_2:
#line 178
c_rt_lib0clear(&___nl__4);
#line 179
c_rt_lib0move(&___nl__5,___get_global_const(1091));
#line 179
c_rt_lib0move(&___nl__4, hash0has_key(*___ref___0, ___nl__5));
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 179
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 180
c_rt_lib0copy(___ref___0, ___nl__1);
#line 181
c_rt_lib0clear(&___nl__1);
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
return NULL;
#line 182
goto label_4;
#line 182
label_4:
#line 182
c_rt_lib0clear(&___nl__4);
#line 183
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(*___ref___0));
#line 183
label_7:
#line 183
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 183
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 183
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 183
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(*___ref___0, ___nl__4));
#line 184
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(1057)));
#line 184
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(42)));
#line 184
if(c_rt_lib0check_true_native(___nl__8)){ goto label_9;}
#line 191
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(43)));
#line 191
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 191
c_rt_lib0move(&___nl__8,___get_global_const(76));
#line 191
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 191
nl_die_arg(___nl__8);
#line 184
label_9:
#line 185
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(73)));
#line 186
c_rt_lib0move(&___nl__10, hash0get_value(___nl__1, ___nl__4));
#line 186
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(73)));
#line 187
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 187
c_rt_lib0move(&___nl__13, ptd_system0cross_type(___nl__9, ___nl__10, ___ref___2, ___ref___3));
#line 187
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(1057), ___nl__12, ___get_global_const(73), ___nl__13));
#line 187
c_rt_lib0clear(&___nl__12);
#line 187
c_rt_lib0clear(&___nl__13);
#line 187
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__4, ___nl__11));
#line 187
c_rt_lib0clear(&___nl__11);
#line 187
c_rt_lib0clear(&___nl__9);
#line 187
c_rt_lib0clear(&___nl__10);
#line 191
goto label_8;
#line 191
label_10:
#line 192
goto label_8;
#line 192
label_8:
#line 192
c_rt_lib0clear(&___nl__7);
#line 192
c_rt_lib0clear(&___nl__8);
#line 193
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 193
goto label_7;
#line 193
label_5:
#line 193
c_rt_lib0clear(&___nl__4);
#line 193
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0clear(&___nl__6);
#line 193
c_rt_lib0clear(&___nl__1);
#line 193
return NULL;
}

ImmT type_checker_priv0set_end_function(ImmT * ___ref___0) {
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 197
c_rt_lib0move(&___nl__1,___get_global_const(1091));
#line 197
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 197
c_rt_lib0move(&___nl__4, tct0empty());
#line 197
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(1057), ___nl__3, ___get_global_const(73), ___nl__4));
#line 197
c_rt_lib0clear(&___nl__3);
#line 197
c_rt_lib0clear(&___nl__4);
#line 197
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__1, ___nl__2));
#line 197
c_rt_lib0clear(&___nl__2);
#line 197
c_rt_lib0clear(&___nl__1);
#line 197
return NULL;
}

ImmT type_checker_priv0check_cmd(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
#line 202
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(217)));
#line 202
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(400)));
#line 202
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(113)));
#line 202
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 202
c_rt_lib0hash_set_value_dec(___ref___3, ___get_global_const(734), ___nl__5);
#line 202
c_rt_lib0clear(&___nl__4);
#line 202
c_rt_lib0clear(&___nl__5);
#line 203
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 204
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 205
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 205
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(764)));
#line 205
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 224
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(765)));
#line 224
if(c_rt_lib0check_true_native(___nl__7)){ goto label_3;}
#line 241
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(766)));
#line 241
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 243
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(767)));
#line 243
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 245
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(119)));
#line 245
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 247
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(768)));
#line 247
if(c_rt_lib0check_true_native(___nl__7)){ goto label_7;}
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(769)));
#line 249
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 251
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(770)));
#line 251
if(c_rt_lib0check_true_native(___nl__7)){ goto label_9;}
#line 259
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(771)));
#line 259
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 267
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(772)));
#line 267
if(c_rt_lib0check_true_native(___nl__7)){ goto label_11;}
#line 275
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(773)));
#line 275
if(c_rt_lib0check_true_native(___nl__7)){ goto label_12;}
#line 283
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(774)));
#line 283
if(c_rt_lib0check_true_native(___nl__7)){ goto label_13;}
#line 285
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(650)));
#line 285
if(c_rt_lib0check_true_native(___nl__7)){ goto label_14;}
#line 287
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(75)));
#line 287
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 301
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(775)));
#line 301
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 307
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(233)));
#line 307
if(c_rt_lib0check_true_native(___nl__7)){ goto label_17;}
#line 312
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(776)));
#line 312
if(c_rt_lib0check_true_native(___nl__7)){ goto label_18;}
#line 314
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(777)));
#line 314
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 325
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(80)));
#line 325
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 329
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(778)));
#line 329
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 329
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 329
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 329
nl_die_arg(___nl__7);
#line 205
label_2:
#line 205
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(764)));
#line 206
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(779)));
#line 206
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__5, ___ref___3));
#line 206
c_rt_lib0clear(&___nl__10);
#line 207
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__9, ___ref___1, ___ref___3));
#line 207
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 207
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 207
if(c_rt_lib0check_true_native(___nl__10)){ goto label_23;}
#line 207
c_rt_lib0move(&___nl__11,___get_global_const(1092));
#line 207
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 207
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 207
c_rt_lib0clear(&___nl__13);
#line 207
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 207
c_rt_lib0clear(&___nl__12);
#line 207
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 207
c_rt_lib0clear(&___nl__11);
#line 207
goto label_23;
#line 207
label_23:
#line 207
c_rt_lib0clear(&___nl__10);
#line 210
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 211
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(764)));
#line 211
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__10, ___ref___3));
#line 211
c_rt_lib0clear(&___nl__11);
#line 212
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(780)));
#line 212
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 212
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 212
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 212
label_26:
#line 212
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 212
if(c_rt_lib0check_true_native(___nl__16)){ goto label_24;}
#line 212
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 213
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(214)));
#line 213
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(217)));
#line 213
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(400)));
#line 213
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(113)));
#line 213
c_rt_lib0copy(&___nl__18, ___nl__17);
#line 213
c_rt_lib0hash_set_value_dec(___ref___3, ___get_global_const(734), ___nl__18);
#line 213
c_rt_lib0clear(&___nl__17);
#line 213
c_rt_lib0clear(&___nl__18);
#line 214
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(779)));
#line 214
c_rt_lib0move(&___nl__17, type_checker_priv0check_val(___nl__18, ___ref___1, &___nl__5, ___ref___3));
#line 214
c_rt_lib0clear(&___nl__18);
#line 215
c_rt_lib0move(&___nl__18, ptd_system0is_condition_type(___nl__17, ___ref___1, ___ref___3));
#line 215
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 215
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 215
if(c_rt_lib0check_true_native(___nl__18)){ goto label_28;}
#line 215
c_rt_lib0move(&___nl__19,___get_global_const(1093));
#line 215
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(73)));
#line 215
c_rt_lib0move(&___nl__20, type_checker_priv0get_print_tct_type_name(___nl__21));
#line 215
c_rt_lib0clear(&___nl__21);
#line 215
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 215
c_rt_lib0clear(&___nl__20);
#line 215
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__19));
#line 215
c_rt_lib0clear(&___nl__19);
#line 215
goto label_28;
#line 215
label_28:
#line 215
c_rt_lib0clear(&___nl__18);
#line 218
c_rt_lib0copy(&___nl__18, ___nl__5);
#line 219
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(214)));
#line 219
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__19, ___ref___1, &___nl__18, ___ref___3));
#line 219
c_rt_lib0clear(&___nl__19);
#line 220
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__10, ___nl__18, ___ref___1, ___ref___3));
#line 220
c_rt_lib0clear(&___nl__17);
#line 220
c_rt_lib0clear(&___nl__18);
#line 221
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 221
goto label_26;
#line 221
label_24:
#line 221
c_rt_lib0clear(&___nl__11);
#line 221
c_rt_lib0clear(&___nl__12);
#line 221
c_rt_lib0clear(&___nl__13);
#line 221
c_rt_lib0clear(&___nl__14);
#line 221
c_rt_lib0clear(&___nl__15);
#line 221
c_rt_lib0clear(&___nl__16);
#line 222
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(781)));
#line 222
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__5, ___ref___3));
#line 222
c_rt_lib0clear(&___nl__11);
#line 223
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 223
c_rt_lib0clear(&___nl__9);
#line 223
c_rt_lib0clear(&___nl__10);
#line 223
c_rt_lib0clear(&___nl__8);
#line 224
goto label_1;
#line 224
label_3:
#line 224
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(765)));
#line 225
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(782)));
#line 225
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(650)));
#line 225
if(c_rt_lib0check_true_native(___nl__10)){ goto label_30;}
#line 227
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(776)));
#line 227
if(c_rt_lib0check_true_native(___nl__10)){ goto label_31;}
#line 227
c_rt_lib0move(&___nl__10,___get_global_const(76));
#line 227
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 227
nl_die_arg(___nl__10);
#line 225
label_30:
#line 225
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(650)));
#line 226
c_rt_lib0delete(type_checker_priv0check_val(___nl__11, ___ref___1, &___nl__5, ___ref___3));
#line 226
c_rt_lib0clear(&___nl__11);
#line 227
goto label_29;
#line 227
label_31:
#line 227
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(776)));
#line 228
c_rt_lib0move(&___nl__12, type_checker_priv0check_var_decl(___nl__11, ___ref___1, &___nl__5, ___ref___3));
#line 228
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(78)));
#line 228
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__12, ___nl__13, &___nl__5));
#line 228
c_rt_lib0clear(&___nl__13);
#line 228
c_rt_lib0clear(&___nl__12);
#line 228
c_rt_lib0clear(&___nl__11);
#line 229
goto label_29;
#line 229
label_29:
#line 229
c_rt_lib0clear(&___nl__9);
#line 229
c_rt_lib0clear(&___nl__10);
#line 230
c_rt_lib0copy(&___nl__9, ___nl__5);
#line 231
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(779)));
#line 231
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(778)));
#line 231
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 231
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 231
if(c_rt_lib0check_true_native(___nl__10)){ goto label_33;}
#line 232
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(779)));
#line 232
c_rt_lib0move(&___nl__11, type_checker_priv0check_val(___nl__12, ___ref___1, &___nl__9, ___ref___3));
#line 232
c_rt_lib0clear(&___nl__12);
#line 233
c_rt_lib0move(&___nl__12, ptd_system0is_condition_type(___nl__11, ___ref___1, ___ref___3));
#line 233
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 233
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 233
if(c_rt_lib0check_true_native(___nl__12)){ goto label_35;}
#line 233
c_rt_lib0move(&___nl__13,___get_global_const(1094));
#line 233
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(73)));
#line 233
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_tct_type_name(___nl__15));
#line 233
c_rt_lib0clear(&___nl__15);
#line 233
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 233
c_rt_lib0clear(&___nl__14);
#line 233
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__13));
#line 233
c_rt_lib0clear(&___nl__13);
#line 233
goto label_35;
#line 233
label_35:
#line 233
c_rt_lib0clear(&___nl__12);
#line 236
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__5, ___ref___1, ___ref___3));
#line 236
c_rt_lib0clear(&___nl__11);
#line 237
goto label_33;
#line 237
label_33:
#line 237
c_rt_lib0clear(&___nl__10);
#line 238
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(214)));
#line 238
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__10, ___ref___1, &___nl__9, ___ref___3));
#line 238
c_rt_lib0clear(&___nl__10);
#line 239
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(783)));
#line 239
c_rt_lib0delete(type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__9, ___ref___3));
#line 239
c_rt_lib0clear(&___nl__10);
#line 240
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__9, ___ref___1, ___ref___3));
#line 240
c_rt_lib0clear(&___nl__9);
#line 240
c_rt_lib0clear(&___nl__8);
#line 241
goto label_1;
#line 241
label_4:
#line 241
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(766)));
#line 242
c_rt_lib0delete(type_checker_priv0check_fora(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 242
c_rt_lib0clear(&___nl__8);
#line 243
goto label_1;
#line 243
label_5:
#line 243
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(767)));
#line 244
c_rt_lib0delete(type_checker_priv0check_forh(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 244
c_rt_lib0clear(&___nl__8);
#line 245
goto label_1;
#line 245
label_6:
#line 245
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(119)));
#line 246
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 246
c_rt_lib0clear(&___nl__8);
#line 247
goto label_1;
#line 247
label_7:
#line 247
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(768)));
#line 248
c_rt_lib0delete(type_checker_priv0check_rep(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 248
c_rt_lib0clear(&___nl__8);
#line 249
goto label_1;
#line 249
label_8:
#line 249
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(769)));
#line 250
c_rt_lib0delete(type_checker_priv0check_while(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 250
c_rt_lib0clear(&___nl__8);
#line 251
goto label_1;
#line 251
label_9:
#line 251
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(770)));
#line 252
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(779)));
#line 252
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__5, ___ref___3));
#line 252
c_rt_lib0clear(&___nl__10);
#line 253
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__9, ___ref___1, ___ref___3));
#line 253
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 253
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 253
if(c_rt_lib0check_true_native(___nl__10)){ goto label_37;}
#line 253
c_rt_lib0move(&___nl__11,___get_global_const(1095));
#line 253
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 253
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 253
c_rt_lib0clear(&___nl__13);
#line 253
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 253
c_rt_lib0clear(&___nl__12);
#line 253
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 253
c_rt_lib0clear(&___nl__11);
#line 253
goto label_37;
#line 253
label_37:
#line 253
c_rt_lib0clear(&___nl__10);
#line 256
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 257
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(214)));
#line 257
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__10, ___ref___3));
#line 257
c_rt_lib0clear(&___nl__11);
#line 258
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 258
c_rt_lib0clear(&___nl__9);
#line 258
c_rt_lib0clear(&___nl__10);
#line 258
c_rt_lib0clear(&___nl__8);
#line 259
goto label_1;
#line 259
label_10:
#line 259
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(771)));
#line 260
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(779)));
#line 260
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, &___nl__5, ___ref___3));
#line 260
c_rt_lib0clear(&___nl__10);
#line 261
c_rt_lib0move(&___nl__10, ptd_system0is_condition_type(___nl__9, ___ref___1, ___ref___3));
#line 261
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 261
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 261
if(c_rt_lib0check_true_native(___nl__10)){ goto label_39;}
#line 261
c_rt_lib0move(&___nl__11,___get_global_const(1096));
#line 261
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 261
c_rt_lib0move(&___nl__12, type_checker_priv0get_print_tct_type_name(___nl__13));
#line 261
c_rt_lib0clear(&___nl__13);
#line 261
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 261
c_rt_lib0clear(&___nl__12);
#line 261
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 261
c_rt_lib0clear(&___nl__11);
#line 261
goto label_39;
#line 261
label_39:
#line 261
c_rt_lib0clear(&___nl__10);
#line 264
c_rt_lib0copy(&___nl__10, ___nl__5);
#line 265
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(214)));
#line 265
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__11, ___ref___1, &___nl__10, ___ref___3));
#line 265
c_rt_lib0clear(&___nl__11);
#line 266
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 266
c_rt_lib0clear(&___nl__9);
#line 266
c_rt_lib0clear(&___nl__10);
#line 266
c_rt_lib0clear(&___nl__8);
#line 267
goto label_1;
#line 267
label_11:
#line 268
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 268
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1056)));
#line 268
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(829)));
#line 268
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 268
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 268
if(c_rt_lib0check_true_native(___nl__8)){ goto label_41;}
#line 269
c_rt_lib0move(&___nl__9,___get_global_const(785));
#line 269
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 269
c_rt_lib0clear(&___nl__9);
#line 270
goto label_40;
#line 270
label_41:
#line 271
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 271
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(1056)));
#line 271
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(622)));
#line 272
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__5, ___ref___1, ___ref___3));
#line 273
c_rt_lib0move(&___nl__10,___get_global_const(1029));
#line 273
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 273
c_rt_lib0move(&___nl__11,___get_global_const(1056));
#line 273
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 273
c_rt_lib0copy(&___nl__12, ___nl__9);
#line 273
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(622), ___nl__12);
#line 273
c_rt_lib0move(&___nl__13,___get_global_const(1056));
#line 273
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__13, ___nl__11));
#line 273
c_rt_lib0move(&___nl__13,___get_global_const(1029));
#line 273
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__10));
#line 273
c_rt_lib0clear(&___nl__13);
#line 273
c_rt_lib0clear(&___nl__10);
#line 273
c_rt_lib0clear(&___nl__11);
#line 273
c_rt_lib0clear(&___nl__12);
#line 273
c_rt_lib0clear(&___nl__9);
#line 274
goto label_40;
#line 274
label_40:
#line 274
c_rt_lib0clear(&___nl__8);
#line 275
goto label_1;
#line 275
label_12:
#line 276
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 276
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1056)));
#line 276
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(829)));
#line 276
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 276
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 276
if(c_rt_lib0check_true_native(___nl__8)){ goto label_43;}
#line 277
c_rt_lib0move(&___nl__9,___get_global_const(786));
#line 277
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 277
c_rt_lib0clear(&___nl__9);
#line 278
goto label_42;
#line 278
label_43:
#line 279
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 279
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(1056)));
#line 279
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(622)));
#line 280
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__5, ___ref___1, ___ref___3));
#line 281
c_rt_lib0move(&___nl__10,___get_global_const(1029));
#line 281
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 281
c_rt_lib0move(&___nl__11,___get_global_const(1056));
#line 281
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 281
c_rt_lib0copy(&___nl__12, ___nl__9);
#line 281
c_rt_lib0hash_set_value_dec(&___nl__11, ___get_global_const(622), ___nl__12);
#line 281
c_rt_lib0move(&___nl__13,___get_global_const(1056));
#line 281
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__13, ___nl__11));
#line 281
c_rt_lib0move(&___nl__13,___get_global_const(1029));
#line 281
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__10));
#line 281
c_rt_lib0clear(&___nl__13);
#line 281
c_rt_lib0clear(&___nl__10);
#line 281
c_rt_lib0clear(&___nl__11);
#line 281
c_rt_lib0clear(&___nl__12);
#line 281
c_rt_lib0clear(&___nl__9);
#line 282
goto label_42;
#line 282
label_42:
#line 282
c_rt_lib0clear(&___nl__8);
#line 283
goto label_1;
#line 283
label_13:
#line 283
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(774)));
#line 284
c_rt_lib0delete(type_checker_priv0check_match(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 284
c_rt_lib0clear(&___nl__8);
#line 285
goto label_1;
#line 285
label_14:
#line 285
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(650)));
#line 286
c_rt_lib0delete(type_checker_priv0check_val(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 286
c_rt_lib0clear(&___nl__8);
#line 287
goto label_1;
#line 287
label_15:
#line 287
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(75)));
#line 288
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 289
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 289
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(736)));
#line 289
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(751)));
#line 289
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 289
if(c_rt_lib0check_true_native(___nl__11)){ goto label_46;}
#line 289
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 289
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(754)));
#line 289
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 289
label_46:
#line 289
c_rt_lib0clear(&___nl__11);
#line 289
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 289
if(c_rt_lib0check_true_native(___nl__10)){ goto label_45;}
#line 290
c_rt_lib0move(&___nl__11,___get_global_const(1097));
#line 290
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 290
c_rt_lib0clear(&___nl__11);
#line 291
goto label_50;
#line 291
label_45:
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(736)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(751)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 291
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__10));
#line 291
if(c_rt_lib0check_true_native(___nl__12)){ goto label_49;}
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(736)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(746)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 291
label_49:
#line 291
c_rt_lib0clear(&___nl__12);
#line 291
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 291
if(c_rt_lib0check_true_native(___nl__11)){ goto label_48;}
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(754)));
#line 291
label_48:
#line 291
c_rt_lib0clear(&___nl__11);
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 291
if(c_rt_lib0check_true_native(___nl__10)){ goto label_47;}
#line 293
c_rt_lib0move(&___nl__11,___get_global_const(1098));
#line 293
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 293
c_rt_lib0clear(&___nl__11);
#line 294
goto label_50;
#line 294
label_47:
#line 294
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 294
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(736)));
#line 294
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(751)));
#line 294
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 294
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__10));
#line 294
if(c_rt_lib0check_true_native(___nl__11)){ goto label_51;}
#line 294
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 294
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(754)));
#line 294
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 294
label_51:
#line 294
c_rt_lib0clear(&___nl__11);
#line 294
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 294
if(c_rt_lib0check_true_native(___nl__10)){ goto label_50;}
#line 295
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 295
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(736)));
#line 295
c_rt_lib0move(&___nl__11, ptd_system0check_assignment(___nl__12, ___nl__9, ___ref___1, ___ref___3));
#line 295
c_rt_lib0clear(&___nl__12);
#line 296
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 296
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(44)));
#line 296
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 296
if(c_rt_lib0check_true_native(___nl__12)){ goto label_53;}
#line 297
c_rt_lib0move(&___nl__13,___get_global_const(1099));
#line 297
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_check_info(___nl__11));
#line 297
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 297
c_rt_lib0clear(&___nl__14);
#line 297
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__13));
#line 297
c_rt_lib0clear(&___nl__13);
#line 298
goto label_53;
#line 298
label_53:
#line 298
c_rt_lib0clear(&___nl__12);
#line 298
c_rt_lib0clear(&___nl__11);
#line 299
goto label_50;
#line 299
label_50:
#line 299
c_rt_lib0clear(&___nl__10);
#line 300
c_rt_lib0delete(type_checker_priv0set_end_function(&___nl__5));
#line 300
c_rt_lib0clear(&___nl__9);
#line 300
c_rt_lib0clear(&___nl__8);
#line 301
goto label_1;
#line 301
label_16:
#line 301
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(775)));
#line 302
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 302
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 302
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 302
label_56:
#line 302
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 302
if(c_rt_lib0check_true_native(___nl__13)){ goto label_54;}
#line 302
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 303
c_rt_lib0move(&___nl__14, type_checker_priv0check_cmd(___nl__9, ___ref___1, &___nl__5, ___ref___3));
#line 303
c_rt_lib0move(&___nl__17, c_rt_lib0init_iter(___nl__14));
#line 303
label_59:
#line 303
c_rt_lib0move(&___nl__15, c_rt_lib0is_end_hash(___nl__17));
#line 303
if(c_rt_lib0check_true_native(___nl__15)){ goto label_57;}
#line 303
c_rt_lib0move(&___nl__15, c_rt_lib0get_key_iter(___nl__17));
#line 303
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value(___nl__14, ___nl__15));
#line 304
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__16, ___nl__15, &___nl__5));
#line 305
c_rt_lib0move(&___nl__17, c_rt_lib0next_iter(___nl__17));
#line 305
goto label_59;
#line 305
label_57:
#line 305
c_rt_lib0clear(&___nl__14);
#line 305
c_rt_lib0clear(&___nl__15);
#line 305
c_rt_lib0clear(&___nl__16);
#line 305
c_rt_lib0clear(&___nl__17);
#line 306
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 306
goto label_56;
#line 306
label_54:
#line 306
c_rt_lib0clear(&___nl__9);
#line 306
c_rt_lib0clear(&___nl__10);
#line 306
c_rt_lib0clear(&___nl__11);
#line 306
c_rt_lib0clear(&___nl__12);
#line 306
c_rt_lib0clear(&___nl__13);
#line 306
c_rt_lib0clear(&___nl__8);
#line 307
goto label_1;
#line 307
label_17:
#line 307
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(233)));
#line 308
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 308
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 308
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 308
label_62:
#line 308
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 308
if(c_rt_lib0check_true_native(___nl__13)){ goto label_60;}
#line 308
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 309
c_rt_lib0delete(type_checker_priv0check_val(___nl__9, ___ref___1, &___nl__5, ___ref___3));
#line 310
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 310
goto label_62;
#line 310
label_60:
#line 310
c_rt_lib0clear(&___nl__9);
#line 310
c_rt_lib0clear(&___nl__10);
#line 310
c_rt_lib0clear(&___nl__11);
#line 310
c_rt_lib0clear(&___nl__12);
#line 310
c_rt_lib0clear(&___nl__13);
#line 311
c_rt_lib0delete(type_checker_priv0set_end_function(&___nl__5));
#line 311
c_rt_lib0clear(&___nl__8);
#line 312
goto label_1;
#line 312
label_18:
#line 312
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(776)));
#line 313
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(78)));
#line 313
c_rt_lib0move(&___nl__10, type_checker_priv0check_var_decl(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 313
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__9, ___nl__10));
#line 313
c_rt_lib0clear(&___nl__10);
#line 313
c_rt_lib0clear(&___nl__9);
#line 313
c_rt_lib0clear(&___nl__8);
#line 314
goto label_1;
#line 314
label_19:
#line 314
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(777)));
#line 315
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 315
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(736)));
#line 315
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 315
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__10, ___get_global_const(40), ___nl__11));
#line 315
c_rt_lib0clear(&___nl__10);
#line 315
c_rt_lib0clear(&___nl__11);
#line 316
c_rt_lib0move(&___nl__10, ptd_system0is_try_ensure_type(___nl__9, ___ref___1, ___ref___3));
#line 316
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 316
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 316
if(c_rt_lib0check_true_native(___nl__10)){ goto label_64;}
#line 316
c_rt_lib0move(&___nl__11,___get_global_const(1100));
#line 316
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 316
c_rt_lib0clear(&___nl__11);
#line 316
goto label_64;
#line 316
label_64:
#line 316
c_rt_lib0clear(&___nl__10);
#line 318
c_rt_lib0move(&___nl__10, type_checker_priv0check_try_ensure(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 319
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 319
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(736)));
#line 319
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(1019)));
#line 319
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__13, ___get_global_const(40), ___nl__14));
#line 319
c_rt_lib0clear(&___nl__13);
#line 319
c_rt_lib0clear(&___nl__14);
#line 319
c_rt_lib0move(&___nl__11, ptd_system0try_get_ensure_sub_types(___nl__12, ___ref___1, ___ref___3));
#line 319
c_rt_lib0clear(&___nl__12);
#line 320
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(44)));
#line 320
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(1101)));
#line 320
c_rt_lib0move(&___nl__12, ptd_system0check_assignment(___nl__13, ___nl__14, ___ref___1, ___ref___3));
#line 320
c_rt_lib0clear(&___nl__14);
#line 320
c_rt_lib0clear(&___nl__13);
#line 321
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 321
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(44)));
#line 321
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 321
if(c_rt_lib0check_true_native(___nl__13)){ goto label_66;}
#line 322
c_rt_lib0move(&___nl__14,___get_global_const(1099));
#line 322
c_rt_lib0move(&___nl__15, type_checker_priv0get_print_check_info(___nl__12));
#line 322
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 322
c_rt_lib0clear(&___nl__15);
#line 322
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__14));
#line 322
c_rt_lib0clear(&___nl__14);
#line 323
goto label_66;
#line 323
label_66:
#line 323
c_rt_lib0clear(&___nl__13);
#line 324
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(622)));
#line 324
c_rt_lib0copy(&___nl__4, ___nl__13);
#line 324
c_rt_lib0clear(&___nl__13);
#line 324
c_rt_lib0clear(&___nl__9);
#line 324
c_rt_lib0clear(&___nl__10);
#line 324
c_rt_lib0clear(&___nl__11);
#line 324
c_rt_lib0clear(&___nl__12);
#line 324
c_rt_lib0clear(&___nl__8);
#line 325
goto label_1;
#line 325
label_20:
#line 325
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(80)));
#line 326
c_rt_lib0move(&___nl__9, type_checker_priv0check_try_ensure(___nl__8, ___ref___1, &___nl__5, ___ref___3));
#line 328
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(622)));
#line 328
c_rt_lib0copy(&___nl__4, ___nl__10);
#line 328
c_rt_lib0clear(&___nl__10);
#line 328
c_rt_lib0clear(&___nl__9);
#line 328
c_rt_lib0clear(&___nl__8);
#line 329
goto label_1;
#line 329
label_21:
#line 330
goto label_1;
#line 330
label_1:
#line 330
c_rt_lib0clear(&___nl__6);
#line 330
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(*___ref___2));
#line 331
label_69:
#line 331
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 331
if(c_rt_lib0check_true_native(___nl__6)){ goto label_67;}
#line 331
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 331
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(*___ref___2, ___nl__6));
#line 332
c_rt_lib0move(&___nl__9, hash0get_value(___nl__5, ___nl__6));
#line 332
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__6, ___nl__9));
#line 332
c_rt_lib0clear(&___nl__9);
#line 333
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 333
goto label_69;
#line 333
label_67:
#line 333
c_rt_lib0clear(&___nl__6);
#line 333
c_rt_lib0clear(&___nl__7);
#line 333
c_rt_lib0clear(&___nl__8);
#line 334
c_rt_lib0move(&___nl__7,___get_global_const(1091));
#line 334
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__7));
#line 334
c_rt_lib0clear(&___nl__7);
#line 334
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 334
if(c_rt_lib0check_true_native(___nl__6)){ goto label_71;}
#line 335
c_rt_lib0move(&___nl__7,___get_global_const(1091));
#line 335
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 335
c_rt_lib0move(&___nl__10, tct0empty());
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(1057), ___nl__9, ___get_global_const(73), ___nl__10));
#line 335
c_rt_lib0clear(&___nl__9);
#line 335
c_rt_lib0clear(&___nl__10);
#line 335
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__7, ___nl__8));
#line 335
c_rt_lib0clear(&___nl__8);
#line 335
c_rt_lib0clear(&___nl__7);
#line 336
goto label_71;
#line 336
label_71:
#line 336
c_rt_lib0clear(&___nl__6);
#line 337
c_rt_lib0clear(&___nl__0);
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
return ___nl__4;
#line 337
c_rt_lib0clear(&___nl__4);
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
c_rt_lib0clear(&___nl__0);
#line 337
return NULL;
}

ImmT type_checker_priv0break_continue_block(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 342
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 342
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1056)));
#line 343
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 343
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(829), ___nl__6, ___get_global_const(622), *___ref___2));
#line 343
c_rt_lib0clear(&___nl__6);
#line 343
c_rt_lib0move(&___nl__6,___get_global_const(1029));
#line 343
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___1, ___nl__6));
#line 343
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 343
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(1056), ___nl__7);
#line 343
c_rt_lib0move(&___nl__8,___get_global_const(1029));
#line 343
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__8, ___nl__6));
#line 343
c_rt_lib0clear(&___nl__8);
#line 343
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0clear(&___nl__6);
#line 343
c_rt_lib0clear(&___nl__7);
#line 344
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 345
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1029)));
#line 345
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(1056)));
#line 345
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(622)));
#line 345
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 345
c_rt_lib0clear(&___nl__5);
#line 346
c_rt_lib0move(&___nl__5,___get_global_const(1029));
#line 346
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___1, ___nl__5));
#line 346
c_rt_lib0copy(&___nl__6, ___nl__4);
#line 346
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(1056), ___nl__6);
#line 346
c_rt_lib0move(&___nl__7,___get_global_const(1029));
#line 346
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__7, ___nl__5));
#line 346
c_rt_lib0clear(&___nl__7);
#line 346
c_rt_lib0clear(&___nl__5);
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0clear(&___nl__4);
#line 346
c_rt_lib0clear(&___nl__0);
#line 346
return NULL;
}

ImmT type_checker_priv0check_try_ensure(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
#line 351
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 352
c_rt_lib0move(&___nl__6, tct0empty());
#line 352
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 352
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__6, ___get_global_const(40), ___nl__7));
#line 352
c_rt_lib0clear(&___nl__6);
#line 352
c_rt_lib0clear(&___nl__7);
#line 353
c_rt_lib0move(&___nl__6, tct0tct_im());
#line 354
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(793)));
#line 354
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 359
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(794)));
#line 359
if(c_rt_lib0check_true_native(___nl__7)){ goto label_3;}
#line 371
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(795)));
#line 371
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 371
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 371
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__0));
#line 371
nl_die_arg(___nl__7);
#line 354
label_2:
#line 354
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(793)));
#line 355
c_rt_lib0move(&___nl__10, c_rt_lib0get_true());
#line 355
c_rt_lib0move(&___nl__9, type_checker_priv0check_var_decl_try(___nl__8, ___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 355
c_rt_lib0clear(&___nl__10);
#line 356
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(78)));
#line 356
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(45)));
#line 356
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__10, ___nl__11));
#line 356
c_rt_lib0clear(&___nl__11);
#line 356
c_rt_lib0clear(&___nl__10);
#line 357
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(44)));
#line 357
c_rt_lib0copy(&___nl__5, ___nl__10);
#line 357
c_rt_lib0clear(&___nl__10);
#line 358
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(45)));
#line 358
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(73)));
#line 358
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 358
c_rt_lib0clear(&___nl__10);
#line 358
c_rt_lib0clear(&___nl__9);
#line 358
c_rt_lib0clear(&___nl__8);
#line 359
goto label_1;
#line 359
label_3:
#line 359
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(794)));
#line 360
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(240)));
#line 360
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 360
c_rt_lib0clear(&___nl__10);
#line 361
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(17)));
#line 361
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 361
c_rt_lib0clear(&___nl__11);
#line 362
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(239)));
#line 362
c_rt_lib0move(&___nl__11, type_checker_priv0get_type_left_site_equation(___nl__12, ___ref___1, ___ref___2, ___ref___3));
#line 362
c_rt_lib0clear(&___nl__12);
#line 363
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(17)));
#line 363
c_rt_lib0move(&___nl__12, array0len(___nl__13));
#line 363
c_rt_lib0clear(&___nl__13);
#line 363
c_rt_lib0move(&___nl__12, c_rt_lib0sub_mod(___nl__12, ___nl__10));
#line 363
c_rt_lib0copy(&___nl__10, ___nl__12);
#line 363
c_rt_lib0clear(&___nl__12);
#line 364
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 364
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__10, ___nl__12));
#line 364
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 364
if(c_rt_lib0check_true_native(___nl__12)){ goto label_6;}
#line 365
c_rt_lib0move(&___nl__13, ptd_system0try_get_ensure_sub_types(___nl__9, ___ref___1, ___ref___3));
#line 366
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(45)));
#line 366
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 366
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(73), ___nl__15);
#line 366
c_rt_lib0clear(&___nl__14);
#line 366
c_rt_lib0clear(&___nl__15);
#line 367
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(239)));
#line 367
c_rt_lib0delete(type_checker_priv0set_type_to_lval(___nl__14, ___nl__11, ___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 367
c_rt_lib0clear(&___nl__14);
#line 368
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(44)));
#line 368
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(40)));
#line 368
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__15, ___get_global_const(40), ___nl__16));
#line 368
c_rt_lib0clear(&___nl__15);
#line 368
c_rt_lib0clear(&___nl__16);
#line 368
c_rt_lib0copy(&___nl__5, ___nl__14);
#line 368
c_rt_lib0clear(&___nl__14);
#line 369
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(45)));
#line 369
c_rt_lib0copy(&___nl__6, ___nl__14);
#line 369
c_rt_lib0clear(&___nl__14);
#line 369
c_rt_lib0clear(&___nl__13);
#line 370
goto label_6;
#line 370
label_6:
#line 370
c_rt_lib0clear(&___nl__12);
#line 370
c_rt_lib0clear(&___nl__9);
#line 370
c_rt_lib0clear(&___nl__10);
#line 370
c_rt_lib0clear(&___nl__11);
#line 370
c_rt_lib0clear(&___nl__8);
#line 371
goto label_1;
#line 371
label_4:
#line 371
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(795)));
#line 372
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 373
c_rt_lib0move(&___nl__10, ptd_system0try_get_ensure_sub_types(___nl__9, ___ref___1, ___ref___3));
#line 374
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(44)));
#line 374
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(40)));
#line 374
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__12, ___get_global_const(40), ___nl__13));
#line 374
c_rt_lib0clear(&___nl__12);
#line 374
c_rt_lib0clear(&___nl__13);
#line 374
c_rt_lib0copy(&___nl__5, ___nl__11);
#line 374
c_rt_lib0clear(&___nl__11);
#line 375
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(45)));
#line 375
c_rt_lib0copy(&___nl__6, ___nl__11);
#line 375
c_rt_lib0clear(&___nl__11);
#line 375
c_rt_lib0clear(&___nl__9);
#line 375
c_rt_lib0clear(&___nl__10);
#line 375
c_rt_lib0clear(&___nl__8);
#line 376
goto label_1;
#line 376
label_1:
#line 376
c_rt_lib0clear(&___nl__7);
#line 377
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(73)));
#line 377
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(754)));
#line 377
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 377
if(c_rt_lib0check_true_native(___nl__8)){ goto label_9;}
#line 377
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 377
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(754)));
#line 377
label_9:
#line 377
c_rt_lib0clear(&___nl__8);
#line 377
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 377
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 377
c_rt_lib0move(&___nl__8,___get_global_const(1102));
#line 377
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__8));
#line 377
c_rt_lib0clear(&___nl__8);
#line 377
goto label_8;
#line 377
label_8:
#line 377
c_rt_lib0clear(&___nl__7);
#line 378
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(622), ___nl__4, ___get_global_const(1101), ___nl__5));
#line 378
c_rt_lib0clear(&___nl__0);
#line 378
c_rt_lib0clear(&___nl__4);
#line 378
c_rt_lib0clear(&___nl__5);
#line 378
c_rt_lib0clear(&___nl__6);
#line 378
return ___nl__7;
#line 378
c_rt_lib0clear(&___nl__7);
#line 378
c_rt_lib0clear(&___nl__4);
#line 378
c_rt_lib0clear(&___nl__5);
#line 378
c_rt_lib0clear(&___nl__6);
#line 378
c_rt_lib0clear(&___nl__0);
#line 378
return NULL;
}

ImmT type_checker_priv0check_forh(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 383
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(282)));
#line 383
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 383
c_rt_lib0clear(&___nl__6);
#line 383
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__5, ___ref___1, ___ref___3));
#line 383
c_rt_lib0clear(&___nl__5);
#line 385
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 385
c_rt_lib0move(&___nl__6, tct0hash(___nl__7));
#line 385
c_rt_lib0clear(&___nl__7);
#line 385
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 385
c_rt_lib0clear(&___nl__6);
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 385
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 386
goto label_1;
#line 386
label_2:
#line 386
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 386
c_rt_lib0move(&___nl__6, tct0rec(___nl__7));
#line 386
c_rt_lib0clear(&___nl__7);
#line 386
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 386
c_rt_lib0clear(&___nl__6);
#line 386
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 386
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 387
c_rt_lib0move(&___nl__6, type_checker_priv0is_known(___nl__4));
#line 387
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 387
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 387
c_rt_lib0move(&___nl__7,___get_global_const(1103));
#line 387
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__7));
#line 387
c_rt_lib0clear(&___nl__7);
#line 387
goto label_5;
#line 387
label_5:
#line 387
c_rt_lib0clear(&___nl__6);
#line 388
goto label_1;
#line 388
label_3:
#line 389
c_rt_lib0move(&___nl__6,___get_global_const(1104));
#line 389
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 389
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 389
c_rt_lib0clear(&___nl__8);
#line 389
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 389
c_rt_lib0clear(&___nl__7);
#line 389
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 389
c_rt_lib0clear(&___nl__6);
#line 391
goto label_1;
#line 391
label_1:
#line 391
c_rt_lib0clear(&___nl__5);
#line 392
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 392
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(748)));
#line 392
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 392
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 392
goto label_6;
#line 392
label_7:
#line 392
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 392
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(748)));
#line 392
label_6:
#line 392
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 392
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__6);
#line 392
c_rt_lib0clear(&___nl__5);
#line 392
c_rt_lib0clear(&___nl__6);
#line 393
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 394
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(283)));
#line 394
c_rt_lib0move(&___nl__8, tct0sim());
#line 394
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 394
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__8, ___get_global_const(40), ___nl__9));
#line 394
c_rt_lib0clear(&___nl__8);
#line 394
c_rt_lib0clear(&___nl__9);
#line 394
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__7, &___nl__5, ___ref___3));
#line 394
c_rt_lib0clear(&___nl__7);
#line 394
c_rt_lib0clear(&___nl__6);
#line 395
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 395
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__4, &___nl__5, ___ref___3));
#line 395
c_rt_lib0clear(&___nl__6);
#line 396
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 396
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 396
c_rt_lib0clear(&___nl__6);
#line 397
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 397
c_rt_lib0clear(&___nl__4);
#line 397
c_rt_lib0clear(&___nl__5);
#line 397
c_rt_lib0clear(&___nl__0);
#line 397
return NULL;
}

ImmT type_checker_priv0check_fora(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 402
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(3)));
#line 402
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 402
c_rt_lib0clear(&___nl__6);
#line 402
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__5, ___ref___1, ___ref___3));
#line 402
c_rt_lib0clear(&___nl__5);
#line 404
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 404
c_rt_lib0move(&___nl__6, tct0arr(___nl__7));
#line 404
c_rt_lib0clear(&___nl__7);
#line 404
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 404
c_rt_lib0clear(&___nl__6);
#line 404
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 404
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 404
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 404
c_rt_lib0move(&___nl__6,___get_global_const(1105));
#line 404
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 404
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 404
c_rt_lib0clear(&___nl__8);
#line 404
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 404
c_rt_lib0clear(&___nl__7);
#line 404
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 404
c_rt_lib0clear(&___nl__6);
#line 404
goto label_2;
#line 404
label_2:
#line 404
c_rt_lib0clear(&___nl__5);
#line 406
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 406
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(747)));
#line 406
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 406
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 406
goto label_3;
#line 406
label_4:
#line 406
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 406
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(747)));
#line 406
label_3:
#line 406
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 406
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__6);
#line 406
c_rt_lib0clear(&___nl__5);
#line 406
c_rt_lib0clear(&___nl__6);
#line 407
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 408
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(783)));
#line 408
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__4, &___nl__5, ___ref___3));
#line 408
c_rt_lib0clear(&___nl__6);
#line 409
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 409
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 409
c_rt_lib0clear(&___nl__6);
#line 410
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 410
c_rt_lib0clear(&___nl__4);
#line 410
c_rt_lib0clear(&___nl__5);
#line 410
c_rt_lib0clear(&___nl__0);
#line 410
return NULL;
}

ImmT type_checker_priv0check_while(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 415
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 415
c_rt_lib0move(&___nl__4, type_checker_priv0check_val(___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 415
c_rt_lib0clear(&___nl__5);
#line 416
c_rt_lib0move(&___nl__5, ptd_system0is_condition_type(___nl__4, ___ref___1, ___ref___3));
#line 416
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 416
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 416
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 416
c_rt_lib0move(&___nl__6,___get_global_const(1106));
#line 416
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 416
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 416
c_rt_lib0clear(&___nl__8);
#line 416
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 416
c_rt_lib0clear(&___nl__7);
#line 416
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 416
c_rt_lib0clear(&___nl__6);
#line 416
goto label_2;
#line 416
label_2:
#line 416
c_rt_lib0clear(&___nl__5);
#line 419
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 420
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 420
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 420
c_rt_lib0clear(&___nl__6);
#line 421
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 421
c_rt_lib0clear(&___nl__4);
#line 421
c_rt_lib0clear(&___nl__5);
#line 421
c_rt_lib0clear(&___nl__0);
#line 421
return NULL;
}

ImmT type_checker_priv0check_rep(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 426
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(784)));
#line 426
c_rt_lib0move(&___nl__4, type_checker_priv0check_val(___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 426
c_rt_lib0clear(&___nl__5);
#line 427
c_rt_lib0move(&___nl__6, tct0sim());
#line 427
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 427
c_rt_lib0clear(&___nl__6);
#line 427
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 427
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 427
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 427
c_rt_lib0move(&___nl__6,___get_global_const(1107));
#line 427
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 427
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 427
c_rt_lib0clear(&___nl__8);
#line 427
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 427
c_rt_lib0clear(&___nl__7);
#line 427
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 427
c_rt_lib0clear(&___nl__6);
#line 427
goto label_2;
#line 427
label_2:
#line 427
c_rt_lib0clear(&___nl__5);
#line 429
c_rt_lib0copy(&___nl__5, *___ref___2);
#line 430
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(783)));
#line 430
c_rt_lib0move(&___nl__8, tct0sim());
#line 430
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 430
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__8, ___get_global_const(40), ___nl__9));
#line 430
c_rt_lib0clear(&___nl__8);
#line 430
c_rt_lib0clear(&___nl__9);
#line 430
c_rt_lib0delete(type_checker_priv0add_var_decl_with_type_and_check(___nl__6, ___nl__7, &___nl__5, ___ref___3));
#line 430
c_rt_lib0clear(&___nl__7);
#line 430
c_rt_lib0clear(&___nl__6);
#line 431
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 431
c_rt_lib0delete(type_checker_priv0break_continue_block(___nl__6, ___ref___1, &___nl__5, ___ref___3));
#line 431
c_rt_lib0clear(&___nl__6);
#line 432
c_rt_lib0delete(type_checker_priv0join_vars(___ref___2, ___nl__5, ___ref___1, ___ref___3));
#line 432
c_rt_lib0clear(&___nl__4);
#line 432
c_rt_lib0clear(&___nl__5);
#line 432
c_rt_lib0clear(&___nl__0);
#line 432
return NULL;
}

ImmT type_checker_priv0check_match(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
ImmT ___nl__24 = NULL;
ImmT ___nl__25 = NULL;
ImmT ___nl__26 = NULL;
#line 437
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 437
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 437
c_rt_lib0clear(&___nl__6);
#line 437
c_rt_lib0move(&___nl__4, ptd_system0can_delete(___nl__5, ___ref___1, ___ref___3));
#line 437
c_rt_lib0clear(&___nl__5);
#line 439
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(787)));
#line 440
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 441
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 442
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 443
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 443
c_rt_lib0move(&___nl__10, tct0var(___nl__11));
#line 443
c_rt_lib0clear(&___nl__11);
#line 443
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__4, ___nl__10, ___ref___1, ___ref___3));
#line 443
c_rt_lib0clear(&___nl__10);
#line 443
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 443
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 443
if(c_rt_lib0check_true_native(___nl__9)){ goto label_2;}
#line 444
c_rt_lib0move(&___nl__10,___get_global_const(1108));
#line 444
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 444
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 444
c_rt_lib0clear(&___nl__12);
#line 444
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 444
c_rt_lib0clear(&___nl__11);
#line 444
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 444
c_rt_lib0clear(&___nl__10);
#line 445
goto label_2;
#line 445
label_2:
#line 445
c_rt_lib0clear(&___nl__9);
#line 446
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 446
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(753)));
#line 446
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 446
if(c_rt_lib0check_true_native(___nl__9)){ goto label_4;}
#line 447
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 447
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(753)));
#line 447
c_rt_lib0copy(&___nl__8, ___nl__10);
#line 447
c_rt_lib0clear(&___nl__10);
#line 448
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 449
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 449
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 449
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__5));
#line 449
label_7:
#line 449
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 449
if(c_rt_lib0check_true_native(___nl__15)){ goto label_5;}
#line 449
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__5, ___nl__12));
#line 450
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(788)));
#line 450
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(78)));
#line 451
c_rt_lib0move(&___nl__17, hash0has_key(___nl__8, ___nl__16));
#line 451
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 451
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 451
if(c_rt_lib0check_true_native(___nl__17)){ goto label_9;}
#line 452
c_rt_lib0move(&___nl__18, type_checker_priv0is_known(___nl__4));
#line 452
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 452
if(c_rt_lib0check_true_native(___nl__18)){ goto label_11;}
#line 452
c_rt_lib0move(&___nl__19,___get_global_const(1109));
#line 452
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__16));
#line 452
c_rt_lib0move(&___nl__20,___get_global_const(1035));
#line 452
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 452
c_rt_lib0clear(&___nl__20);
#line 452
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__19));
#line 452
c_rt_lib0clear(&___nl__19);
#line 452
goto label_11;
#line 452
label_11:
#line 452
c_rt_lib0clear(&___nl__18);
#line 454
c_rt_lib0clear(&___nl__16);
#line 454
c_rt_lib0clear(&___nl__17);
#line 454
goto label_6;
#line 455
goto label_9;
#line 455
label_9:
#line 455
c_rt_lib0clear(&___nl__17);
#line 456
c_rt_lib0move(&___nl__17, c_rt_lib0get_true());
#line 456
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__16, ___nl__17));
#line 456
c_rt_lib0clear(&___nl__17);
#line 457
c_rt_lib0move(&___nl__17, hash0get_value(___nl__8, ___nl__16));
#line 457
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(758)));
#line 457
if(c_rt_lib0check_true_native(___nl__18)){ goto label_13;}
#line 459
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(757)));
#line 459
if(c_rt_lib0check_true_native(___nl__18)){ goto label_14;}
#line 459
c_rt_lib0move(&___nl__18,___get_global_const(76));
#line 459
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(2, ___nl__18, ___nl__17));
#line 459
nl_die_arg(___nl__18);
#line 457
label_13:
#line 457
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(758)));
#line 458
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__16, ___nl__19));
#line 458
c_rt_lib0clear(&___nl__19);
#line 459
goto label_12;
#line 459
label_14:
#line 460
goto label_12;
#line 460
label_12:
#line 460
c_rt_lib0clear(&___nl__17);
#line 460
c_rt_lib0clear(&___nl__18);
#line 460
c_rt_lib0clear(&___nl__16);
#line 460
label_6:
#line 461
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 461
goto label_7;
#line 461
label_5:
#line 461
c_rt_lib0clear(&___nl__11);
#line 461
c_rt_lib0clear(&___nl__12);
#line 461
c_rt_lib0clear(&___nl__13);
#line 461
c_rt_lib0clear(&___nl__14);
#line 461
c_rt_lib0clear(&___nl__15);
#line 462
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__8));
#line 462
label_17:
#line 462
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 462
if(c_rt_lib0check_true_native(___nl__11)){ goto label_15;}
#line 462
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 462
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__8, ___nl__11));
#line 463
c_rt_lib0move(&___nl__14, hash0has_key(___nl__10, ___nl__11));
#line 463
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 463
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 463
if(c_rt_lib0check_true_native(___nl__14)){ goto label_19;}
#line 464
c_rt_lib0move(&___nl__15,___get_global_const(1110));
#line 464
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__11));
#line 464
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__15));
#line 464
c_rt_lib0clear(&___nl__15);
#line 465
goto label_19;
#line 465
label_19:
#line 465
c_rt_lib0clear(&___nl__14);
#line 466
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 466
goto label_17;
#line 466
label_15:
#line 466
c_rt_lib0clear(&___nl__11);
#line 466
c_rt_lib0clear(&___nl__12);
#line 466
c_rt_lib0clear(&___nl__13);
#line 467
c_rt_lib0move(&___nl__11, c_rt_lib0get_true());
#line 467
c_rt_lib0copy(&___nl__6, ___nl__11);
#line 467
c_rt_lib0clear(&___nl__11);
#line 467
c_rt_lib0clear(&___nl__10);
#line 468
goto label_4;
#line 468
label_4:
#line 468
c_rt_lib0clear(&___nl__9);
#line 469
c_rt_lib0copy(&___nl__9, *___ref___2);
#line 470
c_rt_lib0move(&___nl__10, c_rt_lib0get_true());
#line 471
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 472
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 472
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 472
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__5));
#line 472
label_22:
#line 472
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 472
if(c_rt_lib0check_true_native(___nl__16)){ goto label_20;}
#line 472
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__5, ___nl__13));
#line 473
c_rt_lib0copy(&___nl__17, *___ref___2);
#line 474
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(788)));
#line 474
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__18, ___get_global_const(78)));
#line 475
c_rt_lib0move(&___nl__19, hash0has_key(___nl__11, ___nl__18));
#line 475
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 475
if(c_rt_lib0check_true_native(___nl__19)){ goto label_24;}
#line 475
c_rt_lib0move(&___nl__20,___get_global_const(1111));
#line 475
c_rt_lib0move(&___nl__20, c_rt_lib0concat_add(___nl__20, ___nl__18));
#line 475
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__20));
#line 475
c_rt_lib0clear(&___nl__20);
#line 475
goto label_24;
#line 475
label_24:
#line 475
c_rt_lib0clear(&___nl__19);
#line 477
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 477
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__18, ___nl__19));
#line 477
c_rt_lib0clear(&___nl__19);
#line 478
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(788)));
#line 478
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__19, ___get_global_const(650)));
#line 478
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(650)));
#line 478
if(c_rt_lib0check_true_native(___nl__20)){ goto label_26;}
#line 492
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(38)));
#line 492
if(c_rt_lib0check_true_native(___nl__20)){ goto label_27;}
#line 492
c_rt_lib0move(&___nl__20,___get_global_const(76));
#line 492
c_rt_lib0move(&___nl__20, c_rt_lib0array_mk(2, ___nl__20, ___nl__19));
#line 492
nl_die_arg(___nl__20);
#line 478
label_26:
#line 478
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__19, ___get_global_const(650)));
#line 479
c_rt_lib0delete(type_checker_priv0check_var_decl(___nl__21, ___ref___1, &___nl__17, ___ref___3));
#line 481
c_rt_lib0copy(&___nl__23, ___nl__6);
#line 481
c_rt_lib0move(&___nl__23, c_rt_lib0not(___nl__23));
#line 481
if(c_rt_lib0check_true_native(___nl__23)){ goto label_29;}
#line 482
c_rt_lib0move(&___nl__24, hash0has_key(___nl__8, ___nl__18));
#line 482
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 482
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 482
if(c_rt_lib0check_true_native(___nl__24)){ goto label_31;}
#line 482
c_rt_lib0clear(&___nl__17);
#line 482
c_rt_lib0clear(&___nl__18);
#line 482
c_rt_lib0clear(&___nl__19);
#line 482
c_rt_lib0clear(&___nl__20);
#line 482
c_rt_lib0clear(&___nl__21);
#line 482
c_rt_lib0clear(&___nl__22);
#line 482
c_rt_lib0clear(&___nl__23);
#line 482
c_rt_lib0clear(&___nl__24);
#line 482
goto label_21;
#line 482
goto label_31;
#line 482
label_31:
#line 482
c_rt_lib0clear(&___nl__24);
#line 483
c_rt_lib0move(&___nl__24, hash0has_key(___nl__7, ___nl__18));
#line 483
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 483
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 483
if(c_rt_lib0check_true_native(___nl__24)){ goto label_33;}
#line 484
c_rt_lib0move(&___nl__25,___get_global_const(1112));
#line 484
c_rt_lib0move(&___nl__25, c_rt_lib0concat_add(___nl__25, ___nl__18));
#line 484
c_rt_lib0move(&___nl__26,___get_global_const(1113));
#line 484
c_rt_lib0move(&___nl__25, c_rt_lib0concat_add(___nl__25, ___nl__26));
#line 484
c_rt_lib0clear(&___nl__26);
#line 484
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__25));
#line 484
c_rt_lib0clear(&___nl__25);
#line 485
c_rt_lib0clear(&___nl__17);
#line 485
c_rt_lib0clear(&___nl__18);
#line 485
c_rt_lib0clear(&___nl__19);
#line 485
c_rt_lib0clear(&___nl__20);
#line 485
c_rt_lib0clear(&___nl__21);
#line 485
c_rt_lib0clear(&___nl__22);
#line 485
c_rt_lib0clear(&___nl__23);
#line 485
c_rt_lib0clear(&___nl__24);
#line 485
goto label_21;
#line 486
goto label_33;
#line 486
label_33:
#line 486
c_rt_lib0clear(&___nl__24);
#line 487
c_rt_lib0move(&___nl__24, hash0get_value(___nl__7, ___nl__18));
#line 487
c_rt_lib0copy(&___nl__22, ___nl__24);
#line 487
c_rt_lib0clear(&___nl__24);
#line 488
goto label_28;
#line 488
label_29:
#line 489
c_rt_lib0move(&___nl__24, tct0tct_im());
#line 489
c_rt_lib0copy(&___nl__22, ___nl__24);
#line 489
c_rt_lib0clear(&___nl__24);
#line 490
goto label_28;
#line 490
label_28:
#line 490
c_rt_lib0clear(&___nl__23);
#line 491
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(78)));
#line 491
c_rt_lib0delete(type_checker_priv0add_var_decl_to_vars(___nl__22, ___nl__23, &___nl__17));
#line 491
c_rt_lib0clear(&___nl__23);
#line 491
c_rt_lib0clear(&___nl__22);
#line 491
c_rt_lib0clear(&___nl__21);
#line 492
goto label_25;
#line 492
label_27:
#line 493
c_rt_lib0move(&___nl__21, hash0has_key(___nl__7, ___nl__18));
#line 493
c_rt_lib0move(&___nl__21, c_rt_lib0not(___nl__21));
#line 493
if(c_rt_lib0check_true_native(___nl__21)){ goto label_35;}
#line 494
c_rt_lib0move(&___nl__22,___get_global_const(1112));
#line 494
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__18));
#line 494
c_rt_lib0move(&___nl__23,___get_global_const(1114));
#line 494
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__23));
#line 494
c_rt_lib0clear(&___nl__23);
#line 494
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__22));
#line 494
c_rt_lib0clear(&___nl__22);
#line 495
goto label_35;
#line 495
label_35:
#line 495
c_rt_lib0clear(&___nl__21);
#line 496
goto label_25;
#line 496
label_25:
#line 496
c_rt_lib0clear(&___nl__19);
#line 496
c_rt_lib0clear(&___nl__20);
#line 497
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(214)));
#line 497
c_rt_lib0delete(type_checker_priv0check_cmd(___nl__19, ___ref___1, &___nl__17, ___ref___3));
#line 497
c_rt_lib0clear(&___nl__19);
#line 498
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(788)));
#line 498
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__19, ___get_global_const(650)));
#line 498
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(650)));
#line 498
if(c_rt_lib0check_true_native(___nl__20)){ goto label_37;}
#line 500
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__19, ___get_global_const(38)));
#line 500
if(c_rt_lib0check_true_native(___nl__20)){ goto label_38;}
#line 500
c_rt_lib0move(&___nl__20,___get_global_const(76));
#line 500
c_rt_lib0move(&___nl__20, c_rt_lib0array_mk(2, ___nl__20, ___nl__19));
#line 500
nl_die_arg(___nl__20);
#line 498
label_37:
#line 498
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__19, ___get_global_const(650)));
#line 499
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(78)));
#line 499
c_rt_lib0move(&___nl__22, hash0has_key(___nl__9, ___nl__23));
#line 499
c_rt_lib0clear(&___nl__23);
#line 499
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 499
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 499
if(c_rt_lib0check_true_native(___nl__22)){ goto label_40;}
#line 499
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(___nl__21, ___get_global_const(78)));
#line 499
c_rt_lib0delete(hash0delete(&___nl__17, ___nl__23));
#line 499
c_rt_lib0clear(&___nl__23);
#line 499
goto label_40;
#line 499
label_40:
#line 499
c_rt_lib0clear(&___nl__22);
#line 499
c_rt_lib0clear(&___nl__21);
#line 500
goto label_36;
#line 500
label_38:
#line 501
goto label_36;
#line 501
label_36:
#line 501
c_rt_lib0clear(&___nl__19);
#line 501
c_rt_lib0clear(&___nl__20);
#line 502
c_rt_lib0copy(&___nl__19, ___nl__10);
#line 502
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 502
if(c_rt_lib0check_true_native(___nl__19)){ goto label_42;}
#line 503
c_rt_lib0copy(&___nl__9, ___nl__17);
#line 504
goto label_41;
#line 504
label_42:
#line 505
c_rt_lib0delete(type_checker_priv0join_vars(&___nl__9, ___nl__17, ___ref___1, ___ref___3));
#line 506
goto label_41;
#line 506
label_41:
#line 506
c_rt_lib0clear(&___nl__19);
#line 507
c_rt_lib0move(&___nl__19, c_rt_lib0get_false());
#line 507
c_rt_lib0copy(&___nl__10, ___nl__19);
#line 507
c_rt_lib0clear(&___nl__19);
#line 507
c_rt_lib0clear(&___nl__17);
#line 507
c_rt_lib0clear(&___nl__18);
#line 507
label_21:
#line 508
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 508
goto label_22;
#line 508
label_20:
#line 508
c_rt_lib0clear(&___nl__12);
#line 508
c_rt_lib0clear(&___nl__13);
#line 508
c_rt_lib0clear(&___nl__14);
#line 508
c_rt_lib0clear(&___nl__15);
#line 508
c_rt_lib0clear(&___nl__16);
#line 509
c_rt_lib0copy(___ref___2, ___nl__9);
#line 509
c_rt_lib0clear(&___nl__4);
#line 509
c_rt_lib0clear(&___nl__5);
#line 509
c_rt_lib0clear(&___nl__6);
#line 509
c_rt_lib0clear(&___nl__7);
#line 509
c_rt_lib0clear(&___nl__8);
#line 509
c_rt_lib0clear(&___nl__9);
#line 509
c_rt_lib0clear(&___nl__10);
#line 509
c_rt_lib0clear(&___nl__11);
#line 509
c_rt_lib0clear(&___nl__0);
#line 509
return NULL;
}

ImmT type_checker_priv0check_val(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
ImmT ___nl__24 = NULL;
ImmT ___nl__25 = NULL;
ImmT ___nl__26 = NULL;
#line 514
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 514
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 514
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__5, ___get_global_const(40), ___nl__6));
#line 514
c_rt_lib0clear(&___nl__5);
#line 514
c_rt_lib0clear(&___nl__6);
#line 515
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 515
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 531
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 531
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 533
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(778)));
#line 533
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 535
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 535
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 537
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(788)));
#line 537
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 551
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(298)));
#line 551
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 553
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(219)));
#line 553
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 573
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(220)));
#line 573
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 589
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(796)));
#line 589
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 600
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(223)));
#line 600
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 602
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 602
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 635
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 635
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 661
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 661
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 664
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(759)));
#line 664
if(c_rt_lib0check_true_native(___nl__5)){ goto label_15;}
#line 725
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(717)));
#line 725
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 727
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(806)));
#line 727
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 729
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__0, ___get_global_const(807)));
#line 729
if(c_rt_lib0check_true_native(___nl__5)){ goto label_18;}
#line 729
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 729
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__0));
#line 729
nl_die_arg(___nl__5);
#line 515
label_2:
#line 515
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 516
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(808)));
#line 516
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 516
c_rt_lib0clear(&___nl__8);
#line 517
c_rt_lib0move(&___nl__8, ptd_system0is_condition_type(___nl__7, ___ref___1, ___ref___3));
#line 517
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 517
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 517
if(c_rt_lib0check_true_native(___nl__8)){ goto label_20;}
#line 517
c_rt_lib0move(&___nl__9,___get_global_const(1115));
#line 517
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 517
c_rt_lib0move(&___nl__10, type_checker_priv0get_print_tct_type_name(___nl__11));
#line 517
c_rt_lib0clear(&___nl__11);
#line 517
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 517
c_rt_lib0clear(&___nl__10);
#line 517
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__9));
#line 517
c_rt_lib0clear(&___nl__9);
#line 517
goto label_20;
#line 517
label_20:
#line 517
c_rt_lib0clear(&___nl__8);
#line 520
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(809)));
#line 520
c_rt_lib0move(&___nl__8, type_checker_priv0check_val(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 520
c_rt_lib0clear(&___nl__9);
#line 520
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(73)));
#line 521
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 521
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(751)));
#line 521
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 521
if(c_rt_lib0check_true_native(___nl__9)){ goto label_22;}
#line 522
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 522
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__10);
#line 522
c_rt_lib0clear(&___nl__10);
#line 523
goto label_21;
#line 523
label_22:
#line 524
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(810)));
#line 524
c_rt_lib0move(&___nl__10, type_checker_priv0check_val(___nl__11, ___ref___1, ___ref___2, ___ref___3));
#line 524
c_rt_lib0clear(&___nl__11);
#line 524
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(73)));
#line 525
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 525
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(751)));
#line 525
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 525
if(c_rt_lib0check_true_native(___nl__11)){ goto label_24;}
#line 526
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 526
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__12);
#line 526
c_rt_lib0clear(&___nl__12);
#line 527
goto label_23;
#line 527
label_24:
#line 528
c_rt_lib0move(&___nl__12, ptd_system0cross_type(___nl__8, ___nl__10, ___ref___1, ___ref___3));
#line 528
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 528
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__13);
#line 528
c_rt_lib0clear(&___nl__12);
#line 528
c_rt_lib0clear(&___nl__13);
#line 529
goto label_23;
#line 529
label_23:
#line 529
c_rt_lib0clear(&___nl__11);
#line 529
c_rt_lib0clear(&___nl__10);
#line 530
goto label_21;
#line 530
label_21:
#line 530
c_rt_lib0clear(&___nl__9);
#line 530
c_rt_lib0clear(&___nl__7);
#line 530
c_rt_lib0clear(&___nl__8);
#line 530
c_rt_lib0clear(&___nl__6);
#line 531
goto label_1;
#line 531
label_3:
#line 531
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(802)));
#line 532
c_rt_lib0move(&___nl__7, tct0sim());
#line 532
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 532
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__8);
#line 532
c_rt_lib0clear(&___nl__7);
#line 532
c_rt_lib0clear(&___nl__8);
#line 532
c_rt_lib0clear(&___nl__6);
#line 533
goto label_1;
#line 533
label_4:
#line 534
c_rt_lib0move(&___nl__6, tct0empty());
#line 534
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 534
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__7);
#line 534
c_rt_lib0clear(&___nl__6);
#line 534
c_rt_lib0clear(&___nl__7);
#line 535
goto label_1;
#line 535
label_5:
#line 535
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 536
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 536
c_rt_lib0clear(&___nl__0);
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
c_rt_lib0clear(&___nl__6);
#line 537
goto label_1;
#line 537
label_6:
#line 537
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(788)));
#line 538
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(78)));
#line 538
c_rt_lib0move(&___nl__8,___get_global_const(6));
#line 538
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__8));
#line 538
c_rt_lib0clear(&___nl__8);
#line 538
if(c_rt_lib0check_true_native(___nl__7)){ goto label_27;}
#line 538
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(78)));
#line 538
c_rt_lib0move(&___nl__8,___get_global_const(7));
#line 538
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__8));
#line 538
c_rt_lib0clear(&___nl__8);
#line 538
label_27:
#line 538
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 538
if(c_rt_lib0check_true_native(___nl__7)){ goto label_26;}
#line 539
c_rt_lib0move(&___nl__8, tct0bool());
#line 539
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 539
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__9);
#line 539
c_rt_lib0clear(&___nl__8);
#line 539
c_rt_lib0clear(&___nl__9);
#line 540
c_rt_lib0clear(&___nl__0);
#line 540
c_rt_lib0clear(&___nl__5);
#line 540
c_rt_lib0clear(&___nl__6);
#line 540
c_rt_lib0clear(&___nl__7);
#line 540
return ___nl__4;
#line 541
goto label_26;
#line 541
label_26:
#line 541
c_rt_lib0clear(&___nl__7);
#line 542
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 543
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(796)));
#line 543
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(778)));
#line 543
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 543
if(c_rt_lib0check_true_native(___nl__8)){ goto label_29;}
#line 544
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(78)));
#line 544
c_rt_lib0move(&___nl__10, tct0none());
#line 544
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__9, ___nl__10));
#line 544
c_rt_lib0clear(&___nl__10);
#line 544
c_rt_lib0clear(&___nl__9);
#line 545
goto label_28;
#line 545
label_29:
#line 546
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(796)));
#line 546
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__10, ___ref___1, ___ref___2, ___ref___3));
#line 546
c_rt_lib0clear(&___nl__10);
#line 547
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(78)));
#line 547
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 547
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__10, ___nl__11));
#line 547
c_rt_lib0clear(&___nl__11);
#line 547
c_rt_lib0clear(&___nl__10);
#line 548
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(40)));
#line 548
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 548
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(40), ___nl__11);
#line 548
c_rt_lib0clear(&___nl__10);
#line 548
c_rt_lib0clear(&___nl__11);
#line 548
c_rt_lib0clear(&___nl__9);
#line 549
goto label_28;
#line 549
label_28:
#line 549
c_rt_lib0clear(&___nl__8);
#line 550
c_rt_lib0move(&___nl__8, tct0var(___nl__7));
#line 550
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 550
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__9);
#line 550
c_rt_lib0clear(&___nl__8);
#line 550
c_rt_lib0clear(&___nl__9);
#line 550
c_rt_lib0clear(&___nl__7);
#line 550
c_rt_lib0clear(&___nl__6);
#line 551
goto label_1;
#line 551
label_7:
#line 551
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(298)));
#line 552
c_rt_lib0move(&___nl__7, tct0sim());
#line 552
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 552
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__8);
#line 552
c_rt_lib0clear(&___nl__7);
#line 552
c_rt_lib0clear(&___nl__8);
#line 552
c_rt_lib0clear(&___nl__6);
#line 553
goto label_1;
#line 553
label_8:
#line 553
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(219)));
#line 554
c_rt_lib0move(&___nl__7, array0len(___nl__6));
#line 554
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 554
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__8));
#line 554
c_rt_lib0clear(&___nl__8);
#line 554
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 554
if(c_rt_lib0check_true_native(___nl__7)){ goto label_31;}
#line 555
c_rt_lib0move(&___nl__9, tct0empty());
#line 555
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 555
c_rt_lib0clear(&___nl__9);
#line 555
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 555
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__9);
#line 555
c_rt_lib0clear(&___nl__8);
#line 555
c_rt_lib0clear(&___nl__9);
#line 556
c_rt_lib0clear(&___nl__0);
#line 556
c_rt_lib0clear(&___nl__5);
#line 556
c_rt_lib0clear(&___nl__6);
#line 556
c_rt_lib0clear(&___nl__7);
#line 556
return ___nl__4;
#line 557
goto label_31;
#line 557
label_31:
#line 557
c_rt_lib0clear(&___nl__7);
#line 558
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 559
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 560
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 560
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 560
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__6));
#line 560
label_34:
#line 560
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 560
if(c_rt_lib0check_true_native(___nl__13)){ goto label_32;}
#line 560
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__6, ___nl__10));
#line 561
c_rt_lib0move(&___nl__14, type_checker_priv0check_val(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 562
c_rt_lib0delete(array0push(&___nl__7, ___nl__14));
#line 563
c_rt_lib0move(&___nl__15, type_checker_priv0is_known(___nl__14));
#line 563
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 563
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 563
if(c_rt_lib0check_true_native(___nl__15)){ goto label_36;}
#line 563
c_rt_lib0move(&___nl__16, c_rt_lib0get_true());
#line 563
c_rt_lib0copy(&___nl__8, ___nl__16);
#line 563
c_rt_lib0clear(&___nl__16);
#line 563
goto label_36;
#line 563
label_36:
#line 563
c_rt_lib0clear(&___nl__15);
#line 563
c_rt_lib0clear(&___nl__14);
#line 564
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 564
goto label_34;
#line 564
label_32:
#line 564
c_rt_lib0clear(&___nl__9);
#line 564
c_rt_lib0clear(&___nl__10);
#line 564
c_rt_lib0clear(&___nl__11);
#line 564
c_rt_lib0clear(&___nl__12);
#line 564
c_rt_lib0clear(&___nl__13);
#line 565
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 565
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 565
c_rt_lib0clear(&___nl__10);
#line 565
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 566
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 566
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 566
if(c_rt_lib0check_true_native(___nl__10)){ goto label_38;}
#line 566
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 566
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 566
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__7, ___nl__13));
#line 566
c_rt_lib0clear(&___nl__13);
#line 566
c_rt_lib0delete(ptd_system0check_assignment(___nl__11, ___nl__12, ___ref___1, ___ref___3));
#line 566
c_rt_lib0clear(&___nl__12);
#line 566
c_rt_lib0clear(&___nl__11);
#line 566
goto label_38;
#line 566
label_38:
#line 566
c_rt_lib0clear(&___nl__10);
#line 567
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 567
label_40:
#line 567
c_rt_lib0move(&___nl__11, array0len(___nl__7));
#line 567
c_rt_lib0move(&___nl__11, c_rt_lib0lt(___nl__10, ___nl__11));
#line 567
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 567
if(c_rt_lib0check_true_native(___nl__11)){ goto label_39;}
#line 568
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 568
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(73)));
#line 568
c_rt_lib0move(&___nl__12, ptd_system0cross_type(___nl__9, ___nl__13, ___ref___1, ___ref___3));
#line 568
c_rt_lib0clear(&___nl__13);
#line 568
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 568
c_rt_lib0clear(&___nl__12);
#line 569
c_rt_lib0copy(&___nl__12, ___nl__8);
#line 569
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 569
if(c_rt_lib0check_true_native(___nl__12)){ goto label_43;}
#line 569
c_rt_lib0move(&___nl__13, tct0tct_im());
#line 569
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__7, ___nl__10));
#line 569
c_rt_lib0delete(ptd_system0check_assignment(___nl__13, ___nl__14, ___ref___1, ___ref___3));
#line 569
c_rt_lib0clear(&___nl__14);
#line 569
c_rt_lib0clear(&___nl__13);
#line 569
goto label_43;
#line 569
label_43:
#line 569
c_rt_lib0clear(&___nl__12);
#line 569
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 569
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__12));
#line 569
c_rt_lib0clear(&___nl__12);
#line 570
goto label_40;
#line 570
label_39:
#line 570
c_rt_lib0clear(&___nl__10);
#line 570
c_rt_lib0clear(&___nl__11);
#line 571
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 571
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 571
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 571
if(c_rt_lib0check_true_native(___nl__10)){ goto label_45;}
#line 571
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(1019)));
#line 571
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 571
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(40), ___nl__12);
#line 571
c_rt_lib0clear(&___nl__11);
#line 571
c_rt_lib0clear(&___nl__12);
#line 571
goto label_45;
#line 571
label_45:
#line 571
c_rt_lib0clear(&___nl__10);
#line 572
c_rt_lib0move(&___nl__10, tct0arr(___nl__9));
#line 572
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 572
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__11);
#line 572
c_rt_lib0clear(&___nl__10);
#line 572
c_rt_lib0clear(&___nl__11);
#line 572
c_rt_lib0clear(&___nl__7);
#line 572
c_rt_lib0clear(&___nl__8);
#line 572
c_rt_lib0clear(&___nl__9);
#line 572
c_rt_lib0clear(&___nl__6);
#line 573
goto label_1;
#line 573
label_9:
#line 573
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(220)));
#line 574
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 575
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 576
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 576
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 576
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__6));
#line 576
label_48:
#line 576
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 576
if(c_rt_lib0check_true_native(___nl__13)){ goto label_46;}
#line 576
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__6, ___nl__10));
#line 577
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(283)));
#line 577
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(802)));
#line 578
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(238)));
#line 578
c_rt_lib0move(&___nl__15, type_checker_priv0check_val(___nl__16, ___ref___1, ___ref___2, ___ref___3));
#line 578
c_rt_lib0clear(&___nl__16);
#line 579
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__14, ___nl__15));
#line 580
c_rt_lib0move(&___nl__16, type_checker_priv0is_known(___nl__15));
#line 580
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 580
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__16));
#line 580
if(c_rt_lib0check_true_native(___nl__16)){ goto label_50;}
#line 580
c_rt_lib0move(&___nl__17, c_rt_lib0get_true());
#line 580
c_rt_lib0copy(&___nl__8, ___nl__17);
#line 580
c_rt_lib0clear(&___nl__17);
#line 580
goto label_50;
#line 580
label_50:
#line 580
c_rt_lib0clear(&___nl__16);
#line 580
c_rt_lib0clear(&___nl__14);
#line 580
c_rt_lib0clear(&___nl__15);
#line 581
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 581
goto label_48;
#line 581
label_46:
#line 581
c_rt_lib0clear(&___nl__9);
#line 581
c_rt_lib0clear(&___nl__10);
#line 581
c_rt_lib0clear(&___nl__11);
#line 581
c_rt_lib0clear(&___nl__12);
#line 581
c_rt_lib0clear(&___nl__13);
#line 582
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 583
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__7));
#line 583
label_53:
#line 583
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 583
if(c_rt_lib0check_true_native(___nl__10)){ goto label_51;}
#line 583
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 583
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__7, ___nl__10));
#line 584
c_rt_lib0copy(&___nl__13, ___nl__8);
#line 584
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 584
if(c_rt_lib0check_true_native(___nl__13)){ goto label_55;}
#line 584
c_rt_lib0move(&___nl__14, tct0tct_im());
#line 584
c_rt_lib0delete(ptd_system0check_assignment(___nl__14, ___nl__11, ___ref___1, ___ref___3));
#line 584
c_rt_lib0clear(&___nl__14);
#line 584
goto label_55;
#line 584
label_55:
#line 584
c_rt_lib0clear(&___nl__13);
#line 585
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(73)));
#line 585
c_rt_lib0delete(hash0set_value(&___nl__9, ___nl__10, ___nl__13));
#line 585
c_rt_lib0clear(&___nl__13);
#line 586
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 586
goto label_53;
#line 586
label_51:
#line 586
c_rt_lib0clear(&___nl__10);
#line 586
c_rt_lib0clear(&___nl__11);
#line 586
c_rt_lib0clear(&___nl__12);
#line 587
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 587
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 587
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 587
if(c_rt_lib0check_true_native(___nl__10)){ goto label_57;}
#line 587
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(1020)));
#line 587
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 587
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(40), ___nl__12);
#line 587
c_rt_lib0clear(&___nl__11);
#line 587
c_rt_lib0clear(&___nl__12);
#line 587
goto label_57;
#line 587
label_57:
#line 587
c_rt_lib0clear(&___nl__10);
#line 588
c_rt_lib0move(&___nl__10, tct0rec(___nl__9));
#line 588
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 588
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__11);
#line 588
c_rt_lib0clear(&___nl__10);
#line 588
c_rt_lib0clear(&___nl__11);
#line 588
c_rt_lib0clear(&___nl__7);
#line 588
c_rt_lib0clear(&___nl__8);
#line 588
c_rt_lib0clear(&___nl__9);
#line 588
c_rt_lib0clear(&___nl__6);
#line 589
goto label_1;
#line 589
label_10:
#line 589
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(796)));
#line 590
c_rt_lib0move(&___nl__7, hash0has_key(*___ref___2, ___nl__6));
#line 590
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 590
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 590
if(c_rt_lib0check_true_native(___nl__7)){ goto label_59;}
#line 591
c_rt_lib0move(&___nl__8,___get_global_const(1116));
#line 591
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__6));
#line 591
c_rt_lib0move(&___nl__9,___get_global_const(1035));
#line 591
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 591
c_rt_lib0clear(&___nl__9);
#line 591
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__8));
#line 591
c_rt_lib0clear(&___nl__8);
#line 592
c_rt_lib0clear(&___nl__0);
#line 592
c_rt_lib0clear(&___nl__5);
#line 592
c_rt_lib0clear(&___nl__6);
#line 592
c_rt_lib0clear(&___nl__7);
#line 592
return ___nl__4;
#line 593
goto label_59;
#line 593
label_59:
#line 593
c_rt_lib0clear(&___nl__7);
#line 594
c_rt_lib0move(&___nl__7, hash0get_value(*___ref___2, ___nl__6));
#line 595
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(1057)));
#line 595
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(42)));
#line 595
if(c_rt_lib0check_true_native(___nl__9)){ goto label_61;}
#line 597
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(43)));
#line 597
if(c_rt_lib0check_true_native(___nl__9)){ goto label_62;}
#line 597
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 597
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 597
nl_die_arg(___nl__9);
#line 595
label_61:
#line 596
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 596
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 596
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__11, ___get_global_const(40), ___nl__12));
#line 596
c_rt_lib0clear(&___nl__11);
#line 596
c_rt_lib0clear(&___nl__12);
#line 596
c_rt_lib0clear(&___nl__0);
#line 596
c_rt_lib0clear(&___nl__4);
#line 596
c_rt_lib0clear(&___nl__5);
#line 596
c_rt_lib0clear(&___nl__6);
#line 596
c_rt_lib0clear(&___nl__7);
#line 596
c_rt_lib0clear(&___nl__8);
#line 596
c_rt_lib0clear(&___nl__9);
#line 596
return ___nl__10;
#line 596
c_rt_lib0clear(&___nl__10);
#line 597
goto label_60;
#line 597
label_62:
#line 598
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 598
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(1019)));
#line 598
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__11, ___get_global_const(40), ___nl__12));
#line 598
c_rt_lib0clear(&___nl__11);
#line 598
c_rt_lib0clear(&___nl__12);
#line 598
c_rt_lib0clear(&___nl__0);
#line 598
c_rt_lib0clear(&___nl__4);
#line 598
c_rt_lib0clear(&___nl__5);
#line 598
c_rt_lib0clear(&___nl__6);
#line 598
c_rt_lib0clear(&___nl__7);
#line 598
c_rt_lib0clear(&___nl__8);
#line 598
c_rt_lib0clear(&___nl__9);
#line 598
return ___nl__10;
#line 598
c_rt_lib0clear(&___nl__10);
#line 599
goto label_60;
#line 599
label_60:
#line 599
c_rt_lib0clear(&___nl__8);
#line 599
c_rt_lib0clear(&___nl__9);
#line 599
c_rt_lib0clear(&___nl__7);
#line 599
c_rt_lib0clear(&___nl__6);
#line 600
goto label_1;
#line 600
label_11:
#line 600
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(223)));
#line 601
c_rt_lib0move(&___nl__7, type_checker_priv0get_type_from_bin_op_and_check(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 601
c_rt_lib0clear(&___nl__0);
#line 601
c_rt_lib0clear(&___nl__4);
#line 601
c_rt_lib0clear(&___nl__5);
#line 601
c_rt_lib0clear(&___nl__6);
#line 601
return ___nl__7;
#line 601
c_rt_lib0clear(&___nl__7);
#line 601
c_rt_lib0clear(&___nl__6);
#line 602
goto label_1;
#line 602
label_12:
#line 602
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(803)));
#line 603
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(239)));
#line 603
c_rt_lib0move(&___nl__8, type_checker_priv0check_val(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 603
c_rt_lib0clear(&___nl__9);
#line 603
c_rt_lib0move(&___nl__7, ptd_system0can_delete(___nl__8, ___ref___1, ___ref___3));
#line 603
c_rt_lib0clear(&___nl__8);
#line 606
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(405)));
#line 606
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(224)));
#line 606
if(c_rt_lib0check_true_native(___nl__10)){ goto label_64;}
#line 608
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(225)));
#line 608
if(c_rt_lib0check_true_native(___nl__10)){ goto label_65;}
#line 608
c_rt_lib0move(&___nl__10,___get_global_const(76));
#line 608
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 608
nl_die_arg(___nl__10);
#line 606
label_64:
#line 607
c_rt_lib0move(&___nl__12, tct0bool());
#line 607
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 607
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__12, ___get_global_const(40), ___nl__13));
#line 607
c_rt_lib0clear(&___nl__12);
#line 607
c_rt_lib0clear(&___nl__13);
#line 607
c_rt_lib0copy(&___nl__8, ___nl__11);
#line 607
c_rt_lib0clear(&___nl__11);
#line 608
goto label_63;
#line 608
label_65:
#line 609
c_rt_lib0move(&___nl__12, tct0tct_im());
#line 609
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(40)));
#line 609
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__12, ___get_global_const(40), ___nl__13));
#line 609
c_rt_lib0clear(&___nl__12);
#line 609
c_rt_lib0clear(&___nl__13);
#line 609
c_rt_lib0copy(&___nl__8, ___nl__11);
#line 609
c_rt_lib0clear(&___nl__11);
#line 610
goto label_63;
#line 610
label_63:
#line 610
c_rt_lib0clear(&___nl__9);
#line 610
c_rt_lib0clear(&___nl__10);
#line 611
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 611
c_rt_lib0move(&___nl__10, tct0var(___nl__11));
#line 611
c_rt_lib0clear(&___nl__11);
#line 611
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__7, ___nl__10, ___ref___1, ___ref___3));
#line 611
c_rt_lib0clear(&___nl__10);
#line 611
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 611
if(c_rt_lib0check_true_native(___nl__9)){ goto label_67;}
#line 612
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 612
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(753)));
#line 612
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 612
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 612
if(c_rt_lib0check_true_native(___nl__10)){ goto label_69;}
#line 612
c_rt_lib0clear(&___nl__0);
#line 612
c_rt_lib0clear(&___nl__4);
#line 612
c_rt_lib0clear(&___nl__5);
#line 612
c_rt_lib0clear(&___nl__6);
#line 612
c_rt_lib0clear(&___nl__7);
#line 612
c_rt_lib0clear(&___nl__9);
#line 612
c_rt_lib0clear(&___nl__10);
#line 612
return ___nl__8;
#line 612
goto label_69;
#line 612
label_69:
#line 612
c_rt_lib0clear(&___nl__10);
#line 613
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 613
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(753)));
#line 614
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(845)));
#line 614
c_rt_lib0move(&___nl__11, hash0has_key(___nl__10, ___nl__12));
#line 614
c_rt_lib0clear(&___nl__12);
#line 614
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 614
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 614
if(c_rt_lib0check_true_native(___nl__11)){ goto label_71;}
#line 615
c_rt_lib0move(&___nl__12,___get_global_const(374));
#line 615
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(845)));
#line 615
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 615
c_rt_lib0clear(&___nl__13);
#line 615
c_rt_lib0move(&___nl__13,___get_global_const(1117));
#line 615
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 615
c_rt_lib0clear(&___nl__13);
#line 615
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 615
c_rt_lib0move(&___nl__13, type_checker_priv0get_print_tct_type_name(___nl__14));
#line 615
c_rt_lib0clear(&___nl__14);
#line 615
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 615
c_rt_lib0clear(&___nl__13);
#line 615
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__12));
#line 615
c_rt_lib0clear(&___nl__12);
#line 617
c_rt_lib0clear(&___nl__0);
#line 617
c_rt_lib0clear(&___nl__4);
#line 617
c_rt_lib0clear(&___nl__5);
#line 617
c_rt_lib0clear(&___nl__6);
#line 617
c_rt_lib0clear(&___nl__7);
#line 617
c_rt_lib0clear(&___nl__9);
#line 617
c_rt_lib0clear(&___nl__10);
#line 617
c_rt_lib0clear(&___nl__11);
#line 617
return ___nl__8;
#line 618
goto label_71;
#line 618
label_71:
#line 618
c_rt_lib0clear(&___nl__11);
#line 619
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(405)));
#line 619
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(224)));
#line 619
if(c_rt_lib0check_true_native(___nl__12)){ goto label_73;}
#line 620
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(225)));
#line 620
if(c_rt_lib0check_true_native(___nl__12)){ goto label_74;}
#line 620
c_rt_lib0move(&___nl__12,___get_global_const(76));
#line 620
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 620
nl_die_arg(___nl__12);
#line 619
label_73:
#line 620
goto label_72;
#line 620
label_74:
#line 621
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(845)));
#line 621
c_rt_lib0move(&___nl__13, hash0get_value(___nl__10, ___nl__14));
#line 621
c_rt_lib0clear(&___nl__14);
#line 622
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(758)));
#line 622
if(c_rt_lib0check_true_native(___nl__14)){ goto label_76;}
#line 624
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(757)));
#line 624
if(c_rt_lib0check_true_native(___nl__14)){ goto label_77;}
#line 624
c_rt_lib0move(&___nl__14,___get_global_const(76));
#line 624
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 624
nl_die_arg(___nl__14);
#line 622
label_76:
#line 622
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__13, ___get_global_const(758)));
#line 623
c_rt_lib0copy(&___nl__16, ___nl__15);
#line 623
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(73), ___nl__16);
#line 623
c_rt_lib0clear(&___nl__16);
#line 623
c_rt_lib0clear(&___nl__15);
#line 624
goto label_75;
#line 624
label_77:
#line 625
c_rt_lib0move(&___nl__15,___get_global_const(374));
#line 625
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(845)));
#line 625
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 625
c_rt_lib0clear(&___nl__16);
#line 625
c_rt_lib0move(&___nl__16,___get_global_const(1118));
#line 625
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 625
c_rt_lib0clear(&___nl__16);
#line 625
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 625
c_rt_lib0move(&___nl__16, type_checker_priv0get_print_tct_type_name(___nl__17));
#line 625
c_rt_lib0clear(&___nl__17);
#line 625
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 625
c_rt_lib0clear(&___nl__16);
#line 625
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__15));
#line 625
c_rt_lib0clear(&___nl__15);
#line 627
goto label_75;
#line 627
label_75:
#line 627
c_rt_lib0clear(&___nl__14);
#line 627
c_rt_lib0clear(&___nl__13);
#line 628
goto label_72;
#line 628
label_72:
#line 628
c_rt_lib0clear(&___nl__11);
#line 628
c_rt_lib0clear(&___nl__12);
#line 629
c_rt_lib0clear(&___nl__0);
#line 629
c_rt_lib0clear(&___nl__4);
#line 629
c_rt_lib0clear(&___nl__5);
#line 629
c_rt_lib0clear(&___nl__6);
#line 629
c_rt_lib0clear(&___nl__7);
#line 629
c_rt_lib0clear(&___nl__9);
#line 629
c_rt_lib0clear(&___nl__10);
#line 629
return ___nl__8;
#line 629
c_rt_lib0clear(&___nl__10);
#line 630
goto label_66;
#line 630
label_67:
#line 631
c_rt_lib0move(&___nl__10,___get_global_const(1119));
#line 631
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 631
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 631
c_rt_lib0clear(&___nl__12);
#line 631
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 631
c_rt_lib0clear(&___nl__11);
#line 631
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 631
c_rt_lib0clear(&___nl__10);
#line 633
c_rt_lib0clear(&___nl__0);
#line 633
c_rt_lib0clear(&___nl__4);
#line 633
c_rt_lib0clear(&___nl__5);
#line 633
c_rt_lib0clear(&___nl__6);
#line 633
c_rt_lib0clear(&___nl__7);
#line 633
c_rt_lib0clear(&___nl__9);
#line 633
return ___nl__8;
#line 634
goto label_66;
#line 634
label_66:
#line 634
c_rt_lib0clear(&___nl__9);
#line 634
c_rt_lib0clear(&___nl__7);
#line 634
c_rt_lib0clear(&___nl__8);
#line 634
c_rt_lib0clear(&___nl__6);
#line 635
goto label_1;
#line 635
label_13:
#line 635
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(804)));
#line 636
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(238)));
#line 636
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 636
c_rt_lib0clear(&___nl__8);
#line 637
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(405)));
#line 637
c_rt_lib0move(&___nl__9,___get_global_const(247));
#line 637
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 637
c_rt_lib0clear(&___nl__9);
#line 637
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 637
if(c_rt_lib0check_true_native(___nl__8)){ goto label_79;}
#line 638
c_rt_lib0move(&___nl__9, ptd_system0is_condition_type(___nl__7, ___ref___1, ___ref___3));
#line 638
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 638
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 638
if(c_rt_lib0check_true_native(___nl__9)){ goto label_81;}
#line 639
c_rt_lib0move(&___nl__10,___get_global_const(1120));
#line 639
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 639
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 639
c_rt_lib0clear(&___nl__12);
#line 639
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 639
c_rt_lib0clear(&___nl__11);
#line 639
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 639
c_rt_lib0clear(&___nl__10);
#line 641
goto label_81;
#line 641
label_81:
#line 641
c_rt_lib0clear(&___nl__9);
#line 642
c_rt_lib0move(&___nl__9, tct0bool());
#line 642
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 642
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__10);
#line 642
c_rt_lib0clear(&___nl__9);
#line 642
c_rt_lib0clear(&___nl__10);
#line 643
c_rt_lib0clear(&___nl__0);
#line 643
c_rt_lib0clear(&___nl__5);
#line 643
c_rt_lib0clear(&___nl__6);
#line 643
c_rt_lib0clear(&___nl__7);
#line 643
c_rt_lib0clear(&___nl__8);
#line 643
return ___nl__4;
#line 644
goto label_78;
#line 644
label_79:
#line 644
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(405)));
#line 644
c_rt_lib0move(&___nl__9,___get_global_const(189));
#line 644
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 644
c_rt_lib0clear(&___nl__9);
#line 644
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 644
if(c_rt_lib0check_true_native(___nl__8)){ goto label_82;}
#line 645
c_rt_lib0move(&___nl__10, tct0func());
#line 645
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__7, ___nl__10, ___ref___1, ___ref___3));
#line 645
c_rt_lib0clear(&___nl__10);
#line 645
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 645
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 645
if(c_rt_lib0check_true_native(___nl__9)){ goto label_84;}
#line 646
c_rt_lib0move(&___nl__10,___get_global_const(1121));
#line 646
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(405)));
#line 646
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 646
c_rt_lib0clear(&___nl__11);
#line 646
c_rt_lib0move(&___nl__11,___get_global_const(1122));
#line 646
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 646
c_rt_lib0clear(&___nl__11);
#line 646
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 646
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 646
c_rt_lib0clear(&___nl__12);
#line 646
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 646
c_rt_lib0clear(&___nl__11);
#line 646
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 646
c_rt_lib0clear(&___nl__10);
#line 648
goto label_84;
#line 648
label_84:
#line 648
c_rt_lib0clear(&___nl__9);
#line 649
c_rt_lib0move(&___nl__11, tct0func());
#line 649
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(1, ___get_global_const(5), ___nl__11));
#line 649
c_rt_lib0clear(&___nl__11);
#line 649
c_rt_lib0move(&___nl__9, tct0var(___nl__10));
#line 649
c_rt_lib0clear(&___nl__10);
#line 649
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 649
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__10);
#line 649
c_rt_lib0clear(&___nl__9);
#line 649
c_rt_lib0clear(&___nl__10);
#line 650
c_rt_lib0clear(&___nl__0);
#line 650
c_rt_lib0clear(&___nl__5);
#line 650
c_rt_lib0clear(&___nl__6);
#line 650
c_rt_lib0clear(&___nl__7);
#line 650
c_rt_lib0clear(&___nl__8);
#line 650
return ___nl__4;
#line 651
goto label_78;
#line 651
label_82:
#line 651
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(405)));
#line 651
c_rt_lib0move(&___nl__9,___get_global_const(140));
#line 651
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 651
c_rt_lib0clear(&___nl__9);
#line 651
if(c_rt_lib0check_true_native(___nl__8)){ goto label_86;}
#line 651
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(405)));
#line 651
c_rt_lib0move(&___nl__9,___get_global_const(825));
#line 651
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__9));
#line 651
c_rt_lib0clear(&___nl__9);
#line 651
label_86:
#line 651
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 651
if(c_rt_lib0check_true_native(___nl__8)){ goto label_85;}
#line 652
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(238)));
#line 652
c_rt_lib0move(&___nl__11,___get_global_const(1121));
#line 652
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(405)));
#line 652
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 652
c_rt_lib0clear(&___nl__12);
#line 652
c_rt_lib0move(&___nl__12,___get_global_const(1122));
#line 652
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 652
c_rt_lib0clear(&___nl__12);
#line 652
c_rt_lib0move(&___nl__9, type_checker_priv0unary_op_dec_inc(___nl__10, ___nl__11, ___ref___1, ___ref___2, ___ref___3));
#line 652
c_rt_lib0clear(&___nl__11);
#line 652
c_rt_lib0clear(&___nl__10);
#line 652
c_rt_lib0clear(&___nl__0);
#line 652
c_rt_lib0clear(&___nl__4);
#line 652
c_rt_lib0clear(&___nl__5);
#line 652
c_rt_lib0clear(&___nl__6);
#line 652
c_rt_lib0clear(&___nl__7);
#line 652
c_rt_lib0clear(&___nl__8);
#line 652
return ___nl__9;
#line 652
c_rt_lib0clear(&___nl__9);
#line 654
goto label_78;
#line 654
label_85:
#line 655
c_rt_lib0move(&___nl__10, tct0sim());
#line 655
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__7, ___nl__10, ___ref___1, ___ref___3));
#line 655
c_rt_lib0clear(&___nl__10);
#line 655
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 655
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 655
if(c_rt_lib0check_true_native(___nl__9)){ goto label_88;}
#line 656
c_rt_lib0move(&___nl__10,___get_global_const(1121));
#line 656
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(405)));
#line 656
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 656
c_rt_lib0clear(&___nl__11);
#line 656
c_rt_lib0move(&___nl__11,___get_global_const(1122));
#line 656
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 656
c_rt_lib0clear(&___nl__11);
#line 656
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(73)));
#line 656
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_tct_type_name(___nl__12));
#line 656
c_rt_lib0clear(&___nl__12);
#line 656
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 656
c_rt_lib0clear(&___nl__11);
#line 656
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 656
c_rt_lib0clear(&___nl__10);
#line 658
goto label_88;
#line 658
label_88:
#line 658
c_rt_lib0clear(&___nl__9);
#line 659
goto label_78;
#line 659
label_78:
#line 659
c_rt_lib0clear(&___nl__8);
#line 660
c_rt_lib0move(&___nl__8, tct0sim());
#line 660
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 660
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__9);
#line 660
c_rt_lib0clear(&___nl__8);
#line 660
c_rt_lib0clear(&___nl__9);
#line 660
c_rt_lib0clear(&___nl__7);
#line 660
c_rt_lib0clear(&___nl__6);
#line 661
goto label_1;
#line 661
label_14:
#line 661
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(805)));
#line 662
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 662
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(78)));
#line 662
c_rt_lib0delete(type_checker_priv0check_function_exists(___nl__7, ___nl__8, ___ref___1, ___ref___3));
#line 662
c_rt_lib0clear(&___nl__8);
#line 662
c_rt_lib0clear(&___nl__7);
#line 663
c_rt_lib0move(&___nl__7, tct0func());
#line 663
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 663
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__8);
#line 663
c_rt_lib0clear(&___nl__7);
#line 663
c_rt_lib0clear(&___nl__8);
#line 663
c_rt_lib0clear(&___nl__6);
#line 664
goto label_1;
#line 664
label_15:
#line 664
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(759)));
#line 665
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 666
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(74)));
#line 666
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 666
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 666
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 666
label_91:
#line 666
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 666
if(c_rt_lib0check_true_native(___nl__13)){ goto label_89;}
#line 666
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 667
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(238)));
#line 667
c_rt_lib0move(&___nl__14, type_checker_priv0check_val(___nl__15, ___ref___1, ___ref___2, ___ref___3));
#line 667
c_rt_lib0clear(&___nl__15);
#line 667
c_rt_lib0delete(array0push(&___nl__7, ___nl__14));
#line 667
c_rt_lib0clear(&___nl__14);
#line 668
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 668
goto label_91;
#line 668
label_89:
#line 668
c_rt_lib0clear(&___nl__8);
#line 668
c_rt_lib0clear(&___nl__9);
#line 668
c_rt_lib0clear(&___nl__10);
#line 668
c_rt_lib0clear(&___nl__11);
#line 668
c_rt_lib0clear(&___nl__12);
#line 668
c_rt_lib0clear(&___nl__13);
#line 669
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 669
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(78)));
#line 669
c_rt_lib0move(&___nl__8, type_checker_priv0get_special_function_def(___nl__9, ___nl__10));
#line 669
c_rt_lib0clear(&___nl__10);
#line 669
c_rt_lib0clear(&___nl__9);
#line 670
c_rt_lib0move(&___nl__9, c_rt_lib0get_false());
#line 671
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(332)));
#line 671
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(333)));
#line 671
if(c_rt_lib0check_true_native(___nl__11)){ goto label_93;}
#line 677
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(334)));
#line 677
if(c_rt_lib0check_true_native(___nl__11)){ goto label_94;}
#line 677
c_rt_lib0move(&___nl__11,___get_global_const(76));
#line 677
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 677
nl_die_arg(___nl__11);
#line 671
label_93:
#line 672
c_rt_lib0move(&___nl__12, c_rt_lib0get_true());
#line 672
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 672
c_rt_lib0clear(&___nl__12);
#line 673
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(340)));
#line 673
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 673
c_rt_lib0move(&___nl__12, hash0has_key(___nl__13, ___nl__14));
#line 673
c_rt_lib0clear(&___nl__14);
#line 673
c_rt_lib0clear(&___nl__13);
#line 673
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 673
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 673
if(c_rt_lib0check_true_native(___nl__12)){ goto label_96;}
#line 674
c_rt_lib0move(&___nl__13,___get_global_const(742));
#line 674
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 674
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 674
c_rt_lib0clear(&___nl__14);
#line 674
c_rt_lib0move(&___nl__14,___get_global_const(743));
#line 674
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 674
c_rt_lib0clear(&___nl__14);
#line 674
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__13));
#line 674
c_rt_lib0clear(&___nl__13);
#line 675
c_rt_lib0move(&___nl__13,___get_global_const(340));
#line 675
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(*___ref___1, ___nl__13));
#line 675
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 675
c_rt_lib0move(&___nl__15, c_rt_lib0get_false());
#line 675
c_rt_lib0delete(hash0set_value(&___nl__13, ___nl__14, ___nl__15));
#line 675
c_rt_lib0clear(&___nl__15);
#line 675
c_rt_lib0clear(&___nl__14);
#line 675
c_rt_lib0move(&___nl__14,___get_global_const(340));
#line 675
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__14, ___nl__13));
#line 675
c_rt_lib0clear(&___nl__14);
#line 675
c_rt_lib0clear(&___nl__13);
#line 676
goto label_96;
#line 676
label_96:
#line 676
c_rt_lib0clear(&___nl__12);
#line 677
goto label_92;
#line 677
label_94:
#line 678
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 678
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(78)));
#line 678
c_rt_lib0move(&___nl__12, type_checker_priv0check_function_exists(___nl__13, ___nl__14, ___ref___1, ___ref___3));
#line 678
c_rt_lib0clear(&___nl__14);
#line 678
c_rt_lib0clear(&___nl__13);
#line 678
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 678
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 678
if(c_rt_lib0check_true_native(___nl__12)){ goto label_98;}
#line 678
c_rt_lib0clear(&___nl__0);
#line 678
c_rt_lib0clear(&___nl__5);
#line 678
c_rt_lib0clear(&___nl__6);
#line 678
c_rt_lib0clear(&___nl__7);
#line 678
c_rt_lib0clear(&___nl__8);
#line 678
c_rt_lib0clear(&___nl__9);
#line 678
c_rt_lib0clear(&___nl__10);
#line 678
c_rt_lib0clear(&___nl__11);
#line 678
c_rt_lib0clear(&___nl__12);
#line 678
return ___nl__4;
#line 678
goto label_98;
#line 678
label_98:
#line 678
c_rt_lib0clear(&___nl__12);
#line 679
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 679
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(78)));
#line 679
c_rt_lib0move(&___nl__12, type_checker_priv0get_function_def(___nl__13, ___nl__14, *___ref___1));
#line 679
c_rt_lib0clear(&___nl__14);
#line 679
c_rt_lib0clear(&___nl__13);
#line 679
c_rt_lib0copy(&___nl__8, ___nl__12);
#line 679
c_rt_lib0clear(&___nl__12);
#line 680
goto label_92;
#line 680
label_92:
#line 680
c_rt_lib0clear(&___nl__10);
#line 680
c_rt_lib0clear(&___nl__11);
#line 681
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(74)));
#line 681
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 681
c_rt_lib0clear(&___nl__11);
#line 681
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(74)));
#line 681
c_rt_lib0move(&___nl__11, array0len(___nl__12));
#line 681
c_rt_lib0clear(&___nl__12);
#line 681
c_rt_lib0move(&___nl__10, c_rt_lib0num_ne(___nl__10, ___nl__11));
#line 681
c_rt_lib0clear(&___nl__11);
#line 681
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 681
if(c_rt_lib0check_true_native(___nl__10)){ goto label_100;}
#line 682
c_rt_lib0move(&___nl__11,___get_global_const(1123));
#line 682
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(74)));
#line 682
c_rt_lib0move(&___nl__12, array0len(___nl__13));
#line 682
c_rt_lib0clear(&___nl__13);
#line 682
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 682
c_rt_lib0clear(&___nl__12);
#line 682
c_rt_lib0move(&___nl__12,___get_global_const(1124));
#line 682
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 682
c_rt_lib0clear(&___nl__12);
#line 682
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 682
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(78)));
#line 682
c_rt_lib0move(&___nl__12, type_checker_priv0get_function_name(___nl__13, ___nl__14));
#line 682
c_rt_lib0clear(&___nl__14);
#line 682
c_rt_lib0clear(&___nl__13);
#line 682
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 682
c_rt_lib0clear(&___nl__12);
#line 682
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__11));
#line 682
c_rt_lib0clear(&___nl__11);
#line 684
c_rt_lib0clear(&___nl__0);
#line 684
c_rt_lib0clear(&___nl__5);
#line 684
c_rt_lib0clear(&___nl__6);
#line 684
c_rt_lib0clear(&___nl__7);
#line 684
c_rt_lib0clear(&___nl__8);
#line 684
c_rt_lib0clear(&___nl__9);
#line 684
c_rt_lib0clear(&___nl__10);
#line 684
return ___nl__4;
#line 685
goto label_100;
#line 685
label_100:
#line 685
c_rt_lib0clear(&___nl__10);
#line 686
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 687
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(74)));
#line 687
c_rt_lib0move(&___nl__11, array0len(___nl__12));
#line 687
c_rt_lib0clear(&___nl__12);
#line 687
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 687
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 687
label_103:
#line 687
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__12, ___nl__11));
#line 687
if(c_rt_lib0check_true_native(___nl__14)){ goto label_101;}
#line 688
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(74)));
#line 688
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__15, ___nl__12));
#line 689
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(74)));
#line 689
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__16, ___nl__12));
#line 690
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(261)));
#line 690
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(261)));
#line 690
c_rt_lib0move(&___nl__17, enum0eq(___nl__18, ___nl__19));
#line 690
c_rt_lib0clear(&___nl__19);
#line 690
c_rt_lib0clear(&___nl__18);
#line 690
if(c_rt_lib0check_true_native(___nl__17)){ goto label_106;}
#line 690
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(261)));
#line 690
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_none(___get_global_const(1125)));
#line 690
c_rt_lib0move(&___nl__17, enum0eq(___nl__19, ___nl__20));
#line 690
c_rt_lib0clear(&___nl__20);
#line 690
c_rt_lib0clear(&___nl__19);
#line 690
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__17));
#line 690
if(c_rt_lib0check_true_native(___nl__18)){ goto label_107;}
#line 690
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(261)));
#line 690
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 690
c_rt_lib0move(&___nl__17, enum0eq(___nl__19, ___nl__20));
#line 690
c_rt_lib0clear(&___nl__20);
#line 690
c_rt_lib0clear(&___nl__19);
#line 690
label_107:
#line 690
c_rt_lib0clear(&___nl__18);
#line 690
label_106:
#line 690
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 690
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 690
if(c_rt_lib0check_true_native(___nl__17)){ goto label_105;}
#line 690
c_rt_lib0move(&___nl__18,___get_global_const(1126));
#line 690
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 690
c_rt_lib0move(&___nl__19, c_rt_lib0add(___nl__12, ___nl__19));
#line 690
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__19));
#line 690
c_rt_lib0clear(&___nl__19);
#line 690
c_rt_lib0move(&___nl__19,___get_global_const(1127));
#line 690
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__19));
#line 690
c_rt_lib0clear(&___nl__19);
#line 690
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(78)));
#line 690
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__19));
#line 690
c_rt_lib0clear(&___nl__19);
#line 690
c_rt_lib0move(&___nl__19,___get_global_const(1128));
#line 690
c_rt_lib0move(&___nl__18, c_rt_lib0concat_add(___nl__18, ___nl__19));
#line 690
c_rt_lib0clear(&___nl__19);
#line 690
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__18));
#line 690
c_rt_lib0clear(&___nl__18);
#line 690
goto label_105;
#line 690
label_105:
#line 690
c_rt_lib0clear(&___nl__17);
#line 696
c_rt_lib0copy(&___nl__18, ___nl__9);
#line 696
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 696
if(c_rt_lib0check_true_native(___nl__18)){ goto label_109;}
#line 697
c_rt_lib0move(&___nl__19, c_rt_lib0array_get(___nl__7, ___nl__12));
#line 698
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 698
c_rt_lib0copy(&___nl__21, ___nl__20);
#line 698
c_rt_lib0hash_set_value_dec(&___nl__19, ___get_global_const(40), ___nl__21);
#line 698
c_rt_lib0clear(&___nl__20);
#line 698
c_rt_lib0clear(&___nl__21);
#line 699
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(73)));
#line 699
c_rt_lib0move(&___nl__20, ptd_system0is_accepted_info(___nl__19, ___nl__21, ___ref___1, ___ref___3));
#line 699
c_rt_lib0clear(&___nl__21);
#line 699
c_rt_lib0copy(&___nl__17, ___nl__20);
#line 699
c_rt_lib0clear(&___nl__20);
#line 699
c_rt_lib0clear(&___nl__19);
#line 700
goto label_108;
#line 700
label_109:
#line 701
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(261)));
#line 701
c_rt_lib0move(&___nl__19, c_rt_lib0priv_is(___nl__19, ___get_global_const(5)));
#line 701
c_rt_lib0move(&___nl__19, c_rt_lib0not(___nl__19));
#line 701
if(c_rt_lib0check_true_native(___nl__19)){ goto label_111;}
#line 702
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(17)));
#line 702
c_rt_lib0move(&___nl__20, array0len(___nl__21));
#line 702
c_rt_lib0clear(&___nl__21);
#line 703
c_rt_lib0move(&___nl__22, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(238)));
#line 703
c_rt_lib0move(&___nl__21, type_checker_priv0rec_get_var_from_lval(___nl__22, ___ref___3));
#line 703
c_rt_lib0clear(&___nl__22);
#line 704
c_rt_lib0move(&___nl__23, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(17)));
#line 704
c_rt_lib0move(&___nl__22, array0len(___nl__23));
#line 704
c_rt_lib0clear(&___nl__23);
#line 704
c_rt_lib0move(&___nl__22, c_rt_lib0num_eq(___nl__20, ___nl__22));
#line 704
c_rt_lib0move(&___nl__22, c_rt_lib0not(___nl__22));
#line 704
if(c_rt_lib0check_true_native(___nl__22)){ goto label_113;}
#line 705
c_rt_lib0move(&___nl__24,___get_global_const(1));
#line 705
c_rt_lib0move(&___nl__23, c_rt_lib0array_get(___nl__21, ___nl__24));
#line 705
c_rt_lib0clear(&___nl__24);
#line 705
c_rt_lib0move(&___nl__23, c_rt_lib0priv_as(___nl__23, ___get_global_const(796)));
#line 706
c_rt_lib0move(&___nl__24, hash0has_key(___nl__10, ___nl__23));
#line 706
c_rt_lib0move(&___nl__24, c_rt_lib0not(___nl__24));
#line 706
if(c_rt_lib0check_true_native(___nl__24)){ goto label_115;}
#line 707
c_rt_lib0move(&___nl__25,___get_global_const(1129));
#line 707
c_rt_lib0move(&___nl__25, c_rt_lib0concat_add(___nl__25, ___nl__23));
#line 707
c_rt_lib0delete(type_checker_priv0add_warning(___ref___3, ___nl__25));
#line 707
c_rt_lib0clear(&___nl__25);
#line 708
goto label_115;
#line 708
label_115:
#line 708
c_rt_lib0clear(&___nl__24);
#line 709
c_rt_lib0move(&___nl__24,___get_global_const(1));
#line 709
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__23, ___nl__24));
#line 709
c_rt_lib0clear(&___nl__24);
#line 710
c_rt_lib0move(&___nl__25, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(73)));
#line 710
c_rt_lib0move(&___nl__26, c_rt_lib0ov_mk_none(___get_global_const(1019)));
#line 710
c_rt_lib0move(&___nl__24, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__25, ___get_global_const(40), ___nl__26));
#line 710
c_rt_lib0clear(&___nl__25);
#line 710
c_rt_lib0clear(&___nl__26);
#line 711
c_rt_lib0move(&___nl__25, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(238)));
#line 711
c_rt_lib0move(&___nl__26, c_rt_lib0array_get(___nl__7, ___nl__12));
#line 711
c_rt_lib0delete(type_checker_priv0set_type_to_lval(___nl__25, ___nl__26, ___nl__24, ___ref___1, ___ref___2, ___ref___3));
#line 711
c_rt_lib0clear(&___nl__26);
#line 711
c_rt_lib0clear(&___nl__25);
#line 711
c_rt_lib0clear(&___nl__23);
#line 711
c_rt_lib0clear(&___nl__24);
#line 712
goto label_113;
#line 712
label_113:
#line 712
c_rt_lib0clear(&___nl__22);
#line 712
c_rt_lib0clear(&___nl__20);
#line 712
c_rt_lib0clear(&___nl__21);
#line 713
goto label_111;
#line 713
label_111:
#line 713
c_rt_lib0clear(&___nl__19);
#line 714
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(73)));
#line 714
c_rt_lib0move(&___nl__21, c_rt_lib0array_get(___nl__7, ___nl__12));
#line 714
c_rt_lib0move(&___nl__19, ptd_system0check_assignment(___nl__20, ___nl__21, ___ref___1, ___ref___3));
#line 714
c_rt_lib0clear(&___nl__21);
#line 714
c_rt_lib0clear(&___nl__20);
#line 714
c_rt_lib0copy(&___nl__17, ___nl__19);
#line 714
c_rt_lib0clear(&___nl__19);
#line 716
goto label_108;
#line 716
label_108:
#line 716
c_rt_lib0clear(&___nl__18);
#line 717
c_rt_lib0copy(&___nl__18, ___nl__17);
#line 717
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__18, ___get_global_const(44)));
#line 717
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 717
if(c_rt_lib0check_true_native(___nl__18)){ goto label_117;}
#line 718
c_rt_lib0move(&___nl__19,___get_global_const(1130));
#line 718
c_rt_lib0move(&___nl__21, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 718
c_rt_lib0move(&___nl__22, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(78)));
#line 718
c_rt_lib0move(&___nl__20, type_checker_priv0get_function_name(___nl__21, ___nl__22));
#line 718
c_rt_lib0clear(&___nl__22);
#line 718
c_rt_lib0clear(&___nl__21);
#line 718
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 718
c_rt_lib0clear(&___nl__20);
#line 718
c_rt_lib0move(&___nl__20,___get_global_const(1131));
#line 718
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 718
c_rt_lib0clear(&___nl__20);
#line 718
c_rt_lib0move(&___nl__20,___get_global_const(2));
#line 718
c_rt_lib0move(&___nl__20, c_rt_lib0add(___nl__12, ___nl__20));
#line 718
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 718
c_rt_lib0clear(&___nl__20);
#line 718
c_rt_lib0move(&___nl__20,___get_global_const(1127));
#line 718
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 718
c_rt_lib0clear(&___nl__20);
#line 718
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(78)));
#line 718
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 718
c_rt_lib0clear(&___nl__20);
#line 718
c_rt_lib0move(&___nl__20,___get_global_const(1132));
#line 718
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 718
c_rt_lib0clear(&___nl__20);
#line 718
c_rt_lib0move(&___nl__20, type_checker_priv0get_print_check_info(___nl__17));
#line 718
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 718
c_rt_lib0clear(&___nl__20);
#line 718
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__19));
#line 718
c_rt_lib0clear(&___nl__19);
#line 721
goto label_117;
#line 721
label_117:
#line 721
c_rt_lib0clear(&___nl__18);
#line 721
c_rt_lib0clear(&___nl__15);
#line 721
c_rt_lib0clear(&___nl__16);
#line 721
c_rt_lib0clear(&___nl__17);
#line 722
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 722
goto label_103;
#line 722
label_101:
#line 722
c_rt_lib0clear(&___nl__11);
#line 722
c_rt_lib0clear(&___nl__12);
#line 722
c_rt_lib0clear(&___nl__13);
#line 722
c_rt_lib0clear(&___nl__14);
#line 723
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(736)));
#line 723
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(1019)));
#line 723
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__13, ___get_global_const(40), ___nl__14));
#line 723
c_rt_lib0clear(&___nl__13);
#line 723
c_rt_lib0clear(&___nl__14);
#line 723
c_rt_lib0move(&___nl__11, type_checker_priv0check_special_function(___nl__12, ___nl__6, ___nl__7, ___ref___1, ___ref___2, ___ref___3));
#line 723
c_rt_lib0clear(&___nl__12);
#line 723
c_rt_lib0copy(&___nl__4, ___nl__11);
#line 723
c_rt_lib0clear(&___nl__11);
#line 723
c_rt_lib0clear(&___nl__7);
#line 723
c_rt_lib0clear(&___nl__8);
#line 723
c_rt_lib0clear(&___nl__9);
#line 723
c_rt_lib0clear(&___nl__10);
#line 723
c_rt_lib0clear(&___nl__6);
#line 725
goto label_1;
#line 725
label_16:
#line 725
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(717)));
#line 726
c_rt_lib0move(&___nl__7, tct0sim());
#line 726
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 726
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__8);
#line 726
c_rt_lib0clear(&___nl__7);
#line 726
c_rt_lib0clear(&___nl__8);
#line 726
c_rt_lib0clear(&___nl__6);
#line 727
goto label_1;
#line 727
label_17:
#line 727
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(806)));
#line 728
c_rt_lib0move(&___nl__8,___get_global_const(1133));
#line 728
c_rt_lib0move(&___nl__7, type_checker_priv0unary_op_dec_inc(___nl__6, ___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 728
c_rt_lib0clear(&___nl__8);
#line 728
c_rt_lib0clear(&___nl__0);
#line 728
c_rt_lib0clear(&___nl__4);
#line 728
c_rt_lib0clear(&___nl__5);
#line 728
c_rt_lib0clear(&___nl__6);
#line 728
return ___nl__7;
#line 728
c_rt_lib0clear(&___nl__7);
#line 728
c_rt_lib0clear(&___nl__6);
#line 729
goto label_1;
#line 729
label_18:
#line 729
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__0, ___get_global_const(807)));
#line 730
c_rt_lib0move(&___nl__8,___get_global_const(1134));
#line 730
c_rt_lib0move(&___nl__7, type_checker_priv0unary_op_dec_inc(___nl__6, ___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 730
c_rt_lib0clear(&___nl__8);
#line 730
c_rt_lib0clear(&___nl__0);
#line 730
c_rt_lib0clear(&___nl__4);
#line 730
c_rt_lib0clear(&___nl__5);
#line 730
c_rt_lib0clear(&___nl__6);
#line 730
return ___nl__7;
#line 730
c_rt_lib0clear(&___nl__7);
#line 730
c_rt_lib0clear(&___nl__6);
#line 731
goto label_1;
#line 731
label_1:
#line 731
c_rt_lib0clear(&___nl__5);
#line 732
c_rt_lib0clear(&___nl__0);
#line 732
return ___nl__4;
#line 732
c_rt_lib0clear(&___nl__4);
#line 732
c_rt_lib0clear(&___nl__0);
#line 732
return NULL;
}

ImmT type_checker_priv0unary_op_dec_inc(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 736
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__0, ___ref___2, ___ref___3, ___ref___4));
#line 737
c_rt_lib0move(&___nl__7, tct0sim());
#line 737
c_rt_lib0move(&___nl__6, ptd_system0is_accepted(___nl__5, ___nl__7, ___ref___2, ___ref___4));
#line 737
c_rt_lib0clear(&___nl__7);
#line 737
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 737
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 737
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 738
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(73)));
#line 738
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 738
c_rt_lib0clear(&___nl__8);
#line 738
c_rt_lib0move(&___nl__7, c_rt_lib0concat_new(___nl__1, ___nl__7));
#line 738
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__7));
#line 738
c_rt_lib0clear(&___nl__7);
#line 739
goto label_2;
#line 739
label_2:
#line 739
c_rt_lib0clear(&___nl__6);
#line 740
c_rt_lib0move(&___nl__6, tct0sim());
#line 740
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 740
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(73), ___nl__7);
#line 740
c_rt_lib0clear(&___nl__6);
#line 740
c_rt_lib0clear(&___nl__7);
#line 741
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___4, ___get_global_const(17)));
#line 741
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 741
c_rt_lib0clear(&___nl__7);
#line 742
c_rt_lib0move(&___nl__7, type_checker_priv0get_type_left_site_equation(___nl__0, ___ref___2, ___ref___3, ___ref___4));
#line 743
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___4, ___get_global_const(17)));
#line 743
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 743
c_rt_lib0clear(&___nl__9);
#line 743
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__6));
#line 743
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 743
c_rt_lib0move(&___nl__8, c_rt_lib0gt(___nl__8, ___nl__9));
#line 743
c_rt_lib0clear(&___nl__9);
#line 743
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 743
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 744
c_rt_lib0clear(&___nl__0);
#line 744
c_rt_lib0clear(&___nl__1);
#line 744
c_rt_lib0clear(&___nl__5);
#line 744
c_rt_lib0clear(&___nl__6);
#line 744
c_rt_lib0clear(&___nl__8);
#line 744
return ___nl__7;
#line 745
goto label_4;
#line 745
label_4:
#line 745
c_rt_lib0clear(&___nl__8);
#line 746
c_rt_lib0move(&___nl__8, type_checker_priv0set_type_to_lval(___nl__0, ___nl__7, ___nl__5, ___ref___2, ___ref___3, ___ref___4));
#line 746
c_rt_lib0clear(&___nl__0);
#line 746
c_rt_lib0clear(&___nl__1);
#line 746
c_rt_lib0clear(&___nl__5);
#line 746
c_rt_lib0clear(&___nl__6);
#line 746
c_rt_lib0clear(&___nl__7);
#line 746
return ___nl__8;
#line 746
c_rt_lib0clear(&___nl__8);
#line 746
c_rt_lib0clear(&___nl__5);
#line 746
c_rt_lib0clear(&___nl__6);
#line 746
c_rt_lib0clear(&___nl__7);
#line 746
c_rt_lib0clear(&___nl__0);
#line 746
c_rt_lib0clear(&___nl__1);
#line 746
return NULL;
}

ImmT type_checker_priv0get_special_functions(){
type_checker_priv0__const__init();
return type_checker_priv0__const__sing(0);}
ImmT type_checker_priv0get_special_functions0cal() {
type_checker_priv0__const__init();
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
#line 750
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 751
c_rt_lib0move(&___nl__1,___get_global_const(715));
#line 751
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 751
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 751
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 751
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 751
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 751
c_rt_lib0clear(&___nl__6);
#line 751
c_rt_lib0clear(&___nl__7);
#line 751
c_rt_lib0clear(&___nl__8);
#line 751
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 751
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 751
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 751
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 751
c_rt_lib0clear(&___nl__7);
#line 751
c_rt_lib0clear(&___nl__8);
#line 751
c_rt_lib0clear(&___nl__9);
#line 751
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 751
c_rt_lib0clear(&___nl__5);
#line 751
c_rt_lib0clear(&___nl__6);
#line 751
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 751
c_rt_lib0clear(&___nl__3);
#line 751
c_rt_lib0clear(&___nl__4);
#line 751
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 751
c_rt_lib0clear(&___nl__2);
#line 751
c_rt_lib0clear(&___nl__1);
#line 755
c_rt_lib0move(&___nl__1,___get_global_const(1135));
#line 755
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 755
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 755
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 755
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 755
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 755
c_rt_lib0clear(&___nl__6);
#line 755
c_rt_lib0clear(&___nl__7);
#line 755
c_rt_lib0clear(&___nl__8);
#line 755
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 755
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 755
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 755
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 755
c_rt_lib0clear(&___nl__7);
#line 755
c_rt_lib0clear(&___nl__8);
#line 755
c_rt_lib0clear(&___nl__9);
#line 755
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 755
c_rt_lib0clear(&___nl__5);
#line 755
c_rt_lib0clear(&___nl__6);
#line 755
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 755
c_rt_lib0clear(&___nl__3);
#line 755
c_rt_lib0clear(&___nl__4);
#line 755
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 755
c_rt_lib0clear(&___nl__2);
#line 755
c_rt_lib0clear(&___nl__1);
#line 759
c_rt_lib0move(&___nl__1,___get_global_const(1136));
#line 759
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 759
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 759
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 759
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 759
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 759
c_rt_lib0clear(&___nl__6);
#line 759
c_rt_lib0clear(&___nl__7);
#line 759
c_rt_lib0clear(&___nl__8);
#line 759
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 759
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 759
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 759
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 759
c_rt_lib0clear(&___nl__7);
#line 759
c_rt_lib0clear(&___nl__8);
#line 759
c_rt_lib0clear(&___nl__9);
#line 759
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 759
c_rt_lib0clear(&___nl__5);
#line 759
c_rt_lib0clear(&___nl__6);
#line 759
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 759
c_rt_lib0clear(&___nl__3);
#line 759
c_rt_lib0clear(&___nl__4);
#line 759
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 759
c_rt_lib0clear(&___nl__2);
#line 759
c_rt_lib0clear(&___nl__1);
#line 763
c_rt_lib0move(&___nl__1,___get_global_const(671));
#line 763
c_rt_lib0move(&___nl__3, tct0void());
#line 763
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 763
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 763
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 763
c_rt_lib0clear(&___nl__8);
#line 763
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 763
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 763
c_rt_lib0clear(&___nl__6);
#line 763
c_rt_lib0clear(&___nl__7);
#line 763
c_rt_lib0clear(&___nl__8);
#line 763
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 763
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 763
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 763
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 763
c_rt_lib0clear(&___nl__7);
#line 763
c_rt_lib0clear(&___nl__8);
#line 763
c_rt_lib0clear(&___nl__9);
#line 763
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 763
c_rt_lib0clear(&___nl__5);
#line 763
c_rt_lib0clear(&___nl__6);
#line 763
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 763
c_rt_lib0clear(&___nl__3);
#line 763
c_rt_lib0clear(&___nl__4);
#line 763
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 763
c_rt_lib0clear(&___nl__2);
#line 763
c_rt_lib0clear(&___nl__1);
#line 770
c_rt_lib0move(&___nl__1,___get_global_const(673));
#line 770
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 770
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 770
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 770
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 770
c_rt_lib0clear(&___nl__8);
#line 770
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 770
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 770
c_rt_lib0clear(&___nl__6);
#line 770
c_rt_lib0clear(&___nl__7);
#line 770
c_rt_lib0clear(&___nl__8);
#line 770
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 770
c_rt_lib0move(&___nl__8, tct0sim());
#line 770
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 770
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 770
c_rt_lib0clear(&___nl__7);
#line 770
c_rt_lib0clear(&___nl__8);
#line 770
c_rt_lib0clear(&___nl__9);
#line 770
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 770
c_rt_lib0move(&___nl__9, tct0sim());
#line 770
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 770
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__8, ___get_global_const(73), ___nl__9, ___get_global_const(78), ___nl__10));
#line 770
c_rt_lib0clear(&___nl__8);
#line 770
c_rt_lib0clear(&___nl__9);
#line 770
c_rt_lib0clear(&___nl__10);
#line 770
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 770
c_rt_lib0clear(&___nl__5);
#line 770
c_rt_lib0clear(&___nl__6);
#line 770
c_rt_lib0clear(&___nl__7);
#line 770
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 770
c_rt_lib0clear(&___nl__3);
#line 770
c_rt_lib0clear(&___nl__4);
#line 770
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 770
c_rt_lib0clear(&___nl__2);
#line 770
c_rt_lib0clear(&___nl__1);
#line 778
c_rt_lib0move(&___nl__1,___get_global_const(1137));
#line 778
c_rt_lib0move(&___nl__3, tct0sim());
#line 778
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 778
c_rt_lib0move(&___nl__7, tct0sim());
#line 778
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 778
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 778
c_rt_lib0clear(&___nl__6);
#line 778
c_rt_lib0clear(&___nl__7);
#line 778
c_rt_lib0clear(&___nl__8);
#line 778
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 778
c_rt_lib0move(&___nl__9, tct0sim());
#line 778
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 778
c_rt_lib0clear(&___nl__9);
#line 778
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 778
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 778
c_rt_lib0clear(&___nl__7);
#line 778
c_rt_lib0clear(&___nl__8);
#line 778
c_rt_lib0clear(&___nl__9);
#line 778
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 778
c_rt_lib0clear(&___nl__5);
#line 778
c_rt_lib0clear(&___nl__6);
#line 778
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 778
c_rt_lib0clear(&___nl__3);
#line 778
c_rt_lib0clear(&___nl__4);
#line 778
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 778
c_rt_lib0clear(&___nl__2);
#line 778
c_rt_lib0clear(&___nl__1);
#line 785
c_rt_lib0move(&___nl__1,___get_global_const(674));
#line 785
c_rt_lib0move(&___nl__3, tct0void());
#line 785
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 785
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 785
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 785
c_rt_lib0clear(&___nl__8);
#line 785
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 785
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 785
c_rt_lib0clear(&___nl__6);
#line 785
c_rt_lib0clear(&___nl__7);
#line 785
c_rt_lib0clear(&___nl__8);
#line 785
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 785
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 785
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 785
c_rt_lib0clear(&___nl__9);
#line 785
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 785
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 785
c_rt_lib0clear(&___nl__7);
#line 785
c_rt_lib0clear(&___nl__8);
#line 785
c_rt_lib0clear(&___nl__9);
#line 785
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 785
c_rt_lib0clear(&___nl__5);
#line 785
c_rt_lib0clear(&___nl__6);
#line 785
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 785
c_rt_lib0clear(&___nl__3);
#line 785
c_rt_lib0clear(&___nl__4);
#line 785
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 785
c_rt_lib0clear(&___nl__2);
#line 785
c_rt_lib0clear(&___nl__1);
#line 792
c_rt_lib0move(&___nl__1,___get_global_const(675));
#line 792
c_rt_lib0move(&___nl__3, tct0sim());
#line 792
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 792
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 792
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 792
c_rt_lib0clear(&___nl__8);
#line 792
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 792
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 792
c_rt_lib0clear(&___nl__6);
#line 792
c_rt_lib0clear(&___nl__7);
#line 792
c_rt_lib0clear(&___nl__8);
#line 792
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 792
c_rt_lib0clear(&___nl__5);
#line 792
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 792
c_rt_lib0clear(&___nl__3);
#line 792
c_rt_lib0clear(&___nl__4);
#line 792
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 792
c_rt_lib0clear(&___nl__2);
#line 792
c_rt_lib0clear(&___nl__1);
#line 796
c_rt_lib0move(&___nl__1,___get_global_const(672));
#line 796
c_rt_lib0move(&___nl__3, tct0void());
#line 796
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 796
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 796
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 796
c_rt_lib0clear(&___nl__8);
#line 796
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 796
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 796
c_rt_lib0clear(&___nl__6);
#line 796
c_rt_lib0clear(&___nl__7);
#line 796
c_rt_lib0clear(&___nl__8);
#line 796
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 796
c_rt_lib0clear(&___nl__5);
#line 796
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 796
c_rt_lib0clear(&___nl__3);
#line 796
c_rt_lib0clear(&___nl__4);
#line 796
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 796
c_rt_lib0clear(&___nl__2);
#line 796
c_rt_lib0clear(&___nl__1);
#line 800
c_rt_lib0move(&___nl__1,___get_global_const(677));
#line 800
c_rt_lib0move(&___nl__3, tct0void());
#line 800
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 800
c_rt_lib0move(&___nl__8, tct0sim());
#line 800
c_rt_lib0move(&___nl__7, tct0arr(___nl__8));
#line 800
c_rt_lib0clear(&___nl__8);
#line 800
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 800
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 800
c_rt_lib0clear(&___nl__6);
#line 800
c_rt_lib0clear(&___nl__7);
#line 800
c_rt_lib0clear(&___nl__8);
#line 800
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 800
c_rt_lib0clear(&___nl__5);
#line 800
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 800
c_rt_lib0clear(&___nl__3);
#line 800
c_rt_lib0clear(&___nl__4);
#line 800
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 800
c_rt_lib0clear(&___nl__2);
#line 800
c_rt_lib0clear(&___nl__1);
#line 804
c_rt_lib0move(&___nl__1,___get_global_const(680));
#line 804
c_rt_lib0move(&___nl__3, tct0void());
#line 804
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 804
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 804
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 804
c_rt_lib0clear(&___nl__8);
#line 804
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 804
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 804
c_rt_lib0clear(&___nl__6);
#line 804
c_rt_lib0clear(&___nl__7);
#line 804
c_rt_lib0clear(&___nl__8);
#line 804
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 804
c_rt_lib0move(&___nl__8, tct0sim());
#line 804
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 804
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 804
c_rt_lib0clear(&___nl__7);
#line 804
c_rt_lib0clear(&___nl__8);
#line 804
c_rt_lib0clear(&___nl__9);
#line 804
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 804
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 804
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 804
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__8, ___get_global_const(73), ___nl__9, ___get_global_const(78), ___nl__10));
#line 804
c_rt_lib0clear(&___nl__8);
#line 804
c_rt_lib0clear(&___nl__9);
#line 804
c_rt_lib0clear(&___nl__10);
#line 804
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 804
c_rt_lib0clear(&___nl__5);
#line 804
c_rt_lib0clear(&___nl__6);
#line 804
c_rt_lib0clear(&___nl__7);
#line 804
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 804
c_rt_lib0clear(&___nl__3);
#line 804
c_rt_lib0clear(&___nl__4);
#line 804
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 804
c_rt_lib0clear(&___nl__2);
#line 804
c_rt_lib0clear(&___nl__1);
#line 812
c_rt_lib0move(&___nl__1,___get_global_const(678));
#line 812
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 812
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 812
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 812
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 812
c_rt_lib0clear(&___nl__8);
#line 812
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 812
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 812
c_rt_lib0clear(&___nl__6);
#line 812
c_rt_lib0clear(&___nl__7);
#line 812
c_rt_lib0clear(&___nl__8);
#line 812
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 812
c_rt_lib0move(&___nl__8, tct0sim());
#line 812
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 812
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 812
c_rt_lib0clear(&___nl__7);
#line 812
c_rt_lib0clear(&___nl__8);
#line 812
c_rt_lib0clear(&___nl__9);
#line 812
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 812
c_rt_lib0clear(&___nl__5);
#line 812
c_rt_lib0clear(&___nl__6);
#line 812
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 812
c_rt_lib0clear(&___nl__3);
#line 812
c_rt_lib0clear(&___nl__4);
#line 812
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 812
c_rt_lib0clear(&___nl__2);
#line 812
c_rt_lib0clear(&___nl__1);
#line 819
c_rt_lib0move(&___nl__1,___get_global_const(679));
#line 819
c_rt_lib0move(&___nl__3, tct0bool());
#line 819
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 819
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 819
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 819
c_rt_lib0clear(&___nl__8);
#line 819
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 819
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 819
c_rt_lib0clear(&___nl__6);
#line 819
c_rt_lib0clear(&___nl__7);
#line 819
c_rt_lib0clear(&___nl__8);
#line 819
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 819
c_rt_lib0move(&___nl__8, tct0sim());
#line 819
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 819
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 819
c_rt_lib0clear(&___nl__7);
#line 819
c_rt_lib0clear(&___nl__8);
#line 819
c_rt_lib0clear(&___nl__9);
#line 819
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 819
c_rt_lib0clear(&___nl__5);
#line 819
c_rt_lib0clear(&___nl__6);
#line 819
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 819
c_rt_lib0clear(&___nl__3);
#line 819
c_rt_lib0clear(&___nl__4);
#line 819
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 819
c_rt_lib0clear(&___nl__2);
#line 819
c_rt_lib0clear(&___nl__1);
#line 826
c_rt_lib0move(&___nl__1,___get_global_const(681));
#line 826
c_rt_lib0move(&___nl__3, tct0void());
#line 826
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 826
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 826
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 826
c_rt_lib0clear(&___nl__8);
#line 826
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 826
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 826
c_rt_lib0clear(&___nl__6);
#line 826
c_rt_lib0clear(&___nl__7);
#line 826
c_rt_lib0clear(&___nl__8);
#line 826
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 826
c_rt_lib0move(&___nl__8, tct0sim());
#line 826
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 826
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 826
c_rt_lib0clear(&___nl__7);
#line 826
c_rt_lib0clear(&___nl__8);
#line 826
c_rt_lib0clear(&___nl__9);
#line 826
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 826
c_rt_lib0clear(&___nl__5);
#line 826
c_rt_lib0clear(&___nl__6);
#line 826
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 826
c_rt_lib0clear(&___nl__3);
#line 826
c_rt_lib0clear(&___nl__4);
#line 826
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 826
c_rt_lib0clear(&___nl__2);
#line 826
c_rt_lib0clear(&___nl__1);
#line 833
c_rt_lib0move(&___nl__1,___get_global_const(682));
#line 833
c_rt_lib0move(&___nl__3, tct0sim());
#line 833
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 833
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 833
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 833
c_rt_lib0clear(&___nl__8);
#line 833
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 833
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 833
c_rt_lib0clear(&___nl__6);
#line 833
c_rt_lib0clear(&___nl__7);
#line 833
c_rt_lib0clear(&___nl__8);
#line 833
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 833
c_rt_lib0clear(&___nl__5);
#line 833
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 833
c_rt_lib0clear(&___nl__3);
#line 833
c_rt_lib0clear(&___nl__4);
#line 833
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 833
c_rt_lib0clear(&___nl__2);
#line 833
c_rt_lib0clear(&___nl__1);
#line 837
c_rt_lib0move(&___nl__1,___get_global_const(1138));
#line 837
c_rt_lib0move(&___nl__4, tct0tct_im());
#line 837
c_rt_lib0move(&___nl__3, tct0arr(___nl__4));
#line 837
c_rt_lib0clear(&___nl__4);
#line 837
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 837
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 837
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 837
c_rt_lib0clear(&___nl__8);
#line 837
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 837
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 837
c_rt_lib0clear(&___nl__6);
#line 837
c_rt_lib0clear(&___nl__7);
#line 837
c_rt_lib0clear(&___nl__8);
#line 837
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 837
c_rt_lib0clear(&___nl__5);
#line 837
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 837
c_rt_lib0clear(&___nl__3);
#line 837
c_rt_lib0clear(&___nl__4);
#line 837
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 837
c_rt_lib0clear(&___nl__2);
#line 837
c_rt_lib0clear(&___nl__1);
#line 841
c_rt_lib0move(&___nl__1,___get_global_const(683));
#line 841
c_rt_lib0move(&___nl__4, tct0sim());
#line 841
c_rt_lib0move(&___nl__3, tct0arr(___nl__4));
#line 841
c_rt_lib0clear(&___nl__4);
#line 841
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 841
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 841
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 841
c_rt_lib0clear(&___nl__8);
#line 841
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 841
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 841
c_rt_lib0clear(&___nl__6);
#line 841
c_rt_lib0clear(&___nl__7);
#line 841
c_rt_lib0clear(&___nl__8);
#line 841
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 841
c_rt_lib0clear(&___nl__5);
#line 841
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 841
c_rt_lib0clear(&___nl__3);
#line 841
c_rt_lib0clear(&___nl__4);
#line 841
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 841
c_rt_lib0clear(&___nl__2);
#line 841
c_rt_lib0clear(&___nl__1);
#line 845
c_rt_lib0move(&___nl__1,___get_global_const(1139));
#line 845
c_rt_lib0move(&___nl__3, tct0void());
#line 845
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 845
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 845
c_rt_lib0move(&___nl__7, tct0hash(___nl__8));
#line 845
c_rt_lib0clear(&___nl__8);
#line 845
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 845
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 845
c_rt_lib0clear(&___nl__6);
#line 845
c_rt_lib0clear(&___nl__7);
#line 845
c_rt_lib0clear(&___nl__8);
#line 845
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 845
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 845
c_rt_lib0move(&___nl__8, tct0hash(___nl__9));
#line 845
c_rt_lib0clear(&___nl__9);
#line 845
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 845
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 845
c_rt_lib0clear(&___nl__7);
#line 845
c_rt_lib0clear(&___nl__8);
#line 845
c_rt_lib0clear(&___nl__9);
#line 845
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 845
c_rt_lib0clear(&___nl__5);
#line 845
c_rt_lib0clear(&___nl__6);
#line 845
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 845
c_rt_lib0clear(&___nl__3);
#line 845
c_rt_lib0clear(&___nl__4);
#line 845
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 845
c_rt_lib0clear(&___nl__2);
#line 845
c_rt_lib0clear(&___nl__1);
#line 852
c_rt_lib0move(&___nl__1,___get_global_const(697));
#line 852
c_rt_lib0move(&___nl__3, tct0bool());
#line 852
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 852
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 852
c_rt_lib0move(&___nl__7, tct0var(___nl__8));
#line 852
c_rt_lib0clear(&___nl__8);
#line 852
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 852
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 852
c_rt_lib0clear(&___nl__6);
#line 852
c_rt_lib0clear(&___nl__7);
#line 852
c_rt_lib0clear(&___nl__8);
#line 852
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 852
c_rt_lib0move(&___nl__8, tct0sim());
#line 852
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 852
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 852
c_rt_lib0clear(&___nl__7);
#line 852
c_rt_lib0clear(&___nl__8);
#line 852
c_rt_lib0clear(&___nl__9);
#line 852
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 852
c_rt_lib0clear(&___nl__5);
#line 852
c_rt_lib0clear(&___nl__6);
#line 852
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 852
c_rt_lib0clear(&___nl__3);
#line 852
c_rt_lib0clear(&___nl__4);
#line 852
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 852
c_rt_lib0clear(&___nl__2);
#line 852
c_rt_lib0clear(&___nl__1);
#line 856
c_rt_lib0move(&___nl__1,___get_global_const(698));
#line 856
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 856
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 856
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 856
c_rt_lib0move(&___nl__7, tct0var(___nl__8));
#line 856
c_rt_lib0clear(&___nl__8);
#line 856
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 856
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 856
c_rt_lib0clear(&___nl__6);
#line 856
c_rt_lib0clear(&___nl__7);
#line 856
c_rt_lib0clear(&___nl__8);
#line 856
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 856
c_rt_lib0move(&___nl__8, tct0sim());
#line 856
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 856
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 856
c_rt_lib0clear(&___nl__7);
#line 856
c_rt_lib0clear(&___nl__8);
#line 856
c_rt_lib0clear(&___nl__9);
#line 856
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 856
c_rt_lib0clear(&___nl__5);
#line 856
c_rt_lib0clear(&___nl__6);
#line 856
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 856
c_rt_lib0clear(&___nl__3);
#line 856
c_rt_lib0clear(&___nl__4);
#line 856
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 856
c_rt_lib0clear(&___nl__2);
#line 856
c_rt_lib0clear(&___nl__1);
#line 860
c_rt_lib0move(&___nl__1,___get_global_const(1140));
#line 860
c_rt_lib0move(&___nl__3, tct0sim());
#line 860
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 860
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 860
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 860
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 860
c_rt_lib0clear(&___nl__6);
#line 860
c_rt_lib0clear(&___nl__7);
#line 860
c_rt_lib0clear(&___nl__8);
#line 860
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 860
c_rt_lib0clear(&___nl__5);
#line 860
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 860
c_rt_lib0clear(&___nl__3);
#line 860
c_rt_lib0clear(&___nl__4);
#line 860
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 860
c_rt_lib0clear(&___nl__2);
#line 860
c_rt_lib0clear(&___nl__1);
#line 861
c_rt_lib0move(&___nl__1,___get_global_const(684));
#line 861
c_rt_lib0move(&___nl__3, tct0sim());
#line 861
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 861
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 861
c_rt_lib0clear(&___nl__3);
#line 861
c_rt_lib0clear(&___nl__4);
#line 861
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 861
c_rt_lib0clear(&___nl__2);
#line 861
c_rt_lib0clear(&___nl__1);
#line 862
c_rt_lib0move(&___nl__1,___get_global_const(686));
#line 862
c_rt_lib0move(&___nl__3, tct0sim());
#line 862
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 862
c_rt_lib0move(&___nl__7, tct0sim());
#line 862
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 862
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 862
c_rt_lib0clear(&___nl__6);
#line 862
c_rt_lib0clear(&___nl__7);
#line 862
c_rt_lib0clear(&___nl__8);
#line 862
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 862
c_rt_lib0clear(&___nl__5);
#line 862
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 862
c_rt_lib0clear(&___nl__3);
#line 862
c_rt_lib0clear(&___nl__4);
#line 862
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 862
c_rt_lib0clear(&___nl__2);
#line 862
c_rt_lib0clear(&___nl__1);
#line 863
c_rt_lib0move(&___nl__1,___get_global_const(687));
#line 863
c_rt_lib0move(&___nl__3, tct0sim());
#line 863
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 863
c_rt_lib0move(&___nl__7, tct0sim());
#line 863
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 863
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 863
c_rt_lib0clear(&___nl__6);
#line 863
c_rt_lib0clear(&___nl__7);
#line 863
c_rt_lib0clear(&___nl__8);
#line 863
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 863
c_rt_lib0move(&___nl__8, tct0sim());
#line 863
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 863
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 863
c_rt_lib0clear(&___nl__7);
#line 863
c_rt_lib0clear(&___nl__8);
#line 863
c_rt_lib0clear(&___nl__9);
#line 863
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 863
c_rt_lib0move(&___nl__9, tct0sim());
#line 863
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 863
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__8, ___get_global_const(73), ___nl__9, ___get_global_const(78), ___nl__10));
#line 863
c_rt_lib0clear(&___nl__8);
#line 863
c_rt_lib0clear(&___nl__9);
#line 863
c_rt_lib0clear(&___nl__10);
#line 863
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 863
c_rt_lib0clear(&___nl__5);
#line 863
c_rt_lib0clear(&___nl__6);
#line 863
c_rt_lib0clear(&___nl__7);
#line 863
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 863
c_rt_lib0clear(&___nl__3);
#line 863
c_rt_lib0clear(&___nl__4);
#line 863
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 863
c_rt_lib0clear(&___nl__2);
#line 863
c_rt_lib0clear(&___nl__1);
#line 871
c_rt_lib0move(&___nl__1,___get_global_const(1141));
#line 871
c_rt_lib0move(&___nl__3, tct0sim());
#line 871
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 871
c_rt_lib0move(&___nl__7, tct0sim());
#line 871
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 871
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 871
c_rt_lib0clear(&___nl__6);
#line 871
c_rt_lib0clear(&___nl__7);
#line 871
c_rt_lib0clear(&___nl__8);
#line 871
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 871
c_rt_lib0move(&___nl__8, tct0sim());
#line 871
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 871
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 871
c_rt_lib0clear(&___nl__7);
#line 871
c_rt_lib0clear(&___nl__8);
#line 871
c_rt_lib0clear(&___nl__9);
#line 871
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 871
c_rt_lib0move(&___nl__9, tct0sim());
#line 871
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 871
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__8, ___get_global_const(73), ___nl__9, ___get_global_const(78), ___nl__10));
#line 871
c_rt_lib0clear(&___nl__8);
#line 871
c_rt_lib0clear(&___nl__9);
#line 871
c_rt_lib0clear(&___nl__10);
#line 871
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 871
c_rt_lib0clear(&___nl__5);
#line 871
c_rt_lib0clear(&___nl__6);
#line 871
c_rt_lib0clear(&___nl__7);
#line 871
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 871
c_rt_lib0clear(&___nl__3);
#line 871
c_rt_lib0clear(&___nl__4);
#line 871
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 871
c_rt_lib0clear(&___nl__2);
#line 871
c_rt_lib0clear(&___nl__1);
#line 879
c_rt_lib0move(&___nl__1,___get_global_const(691));
#line 879
c_rt_lib0move(&___nl__3, tct0sim());
#line 879
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 879
c_rt_lib0move(&___nl__7, tct0sim());
#line 879
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 879
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 879
c_rt_lib0clear(&___nl__6);
#line 879
c_rt_lib0clear(&___nl__7);
#line 879
c_rt_lib0clear(&___nl__8);
#line 879
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 879
c_rt_lib0clear(&___nl__5);
#line 879
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 879
c_rt_lib0clear(&___nl__3);
#line 879
c_rt_lib0clear(&___nl__4);
#line 879
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 879
c_rt_lib0clear(&___nl__2);
#line 879
c_rt_lib0clear(&___nl__1);
#line 880
c_rt_lib0move(&___nl__1,___get_global_const(690));
#line 880
c_rt_lib0move(&___nl__3, tct0sim());
#line 880
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 880
c_rt_lib0move(&___nl__7, tct0sim());
#line 880
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 880
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 880
c_rt_lib0clear(&___nl__6);
#line 880
c_rt_lib0clear(&___nl__7);
#line 880
c_rt_lib0clear(&___nl__8);
#line 880
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 880
c_rt_lib0clear(&___nl__5);
#line 880
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 880
c_rt_lib0clear(&___nl__3);
#line 880
c_rt_lib0clear(&___nl__4);
#line 880
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 880
c_rt_lib0clear(&___nl__2);
#line 880
c_rt_lib0clear(&___nl__1);
#line 881
c_rt_lib0move(&___nl__1,___get_global_const(1142));
#line 881
c_rt_lib0move(&___nl__4, tct0sim());
#line 881
c_rt_lib0move(&___nl__3, tct0arr(___nl__4));
#line 881
c_rt_lib0clear(&___nl__4);
#line 881
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 881
c_rt_lib0move(&___nl__7, tct0sim());
#line 881
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 881
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 881
c_rt_lib0clear(&___nl__6);
#line 881
c_rt_lib0clear(&___nl__7);
#line 881
c_rt_lib0clear(&___nl__8);
#line 881
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 881
c_rt_lib0move(&___nl__8, tct0sim());
#line 881
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 881
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 881
c_rt_lib0clear(&___nl__7);
#line 881
c_rt_lib0clear(&___nl__8);
#line 881
c_rt_lib0clear(&___nl__9);
#line 881
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 881
c_rt_lib0clear(&___nl__5);
#line 881
c_rt_lib0clear(&___nl__6);
#line 881
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 881
c_rt_lib0clear(&___nl__3);
#line 881
c_rt_lib0clear(&___nl__4);
#line 881
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 881
c_rt_lib0clear(&___nl__2);
#line 881
c_rt_lib0clear(&___nl__1);
#line 885
c_rt_lib0move(&___nl__1,___get_global_const(1143));
#line 885
c_rt_lib0move(&___nl__3, tct0sim());
#line 885
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 885
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 885
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 885
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 885
c_rt_lib0clear(&___nl__6);
#line 885
c_rt_lib0clear(&___nl__7);
#line 885
c_rt_lib0clear(&___nl__8);
#line 885
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 885
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 885
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 885
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__7, ___get_global_const(73), ___nl__8, ___get_global_const(78), ___nl__9));
#line 885
c_rt_lib0clear(&___nl__7);
#line 885
c_rt_lib0clear(&___nl__8);
#line 885
c_rt_lib0clear(&___nl__9);
#line 885
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 885
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 885
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 885
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__8, ___get_global_const(73), ___nl__9, ___get_global_const(78), ___nl__10));
#line 885
c_rt_lib0clear(&___nl__8);
#line 885
c_rt_lib0clear(&___nl__9);
#line 885
c_rt_lib0clear(&___nl__10);
#line 885
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 885
c_rt_lib0clear(&___nl__5);
#line 885
c_rt_lib0clear(&___nl__6);
#line 885
c_rt_lib0clear(&___nl__7);
#line 885
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 885
c_rt_lib0clear(&___nl__3);
#line 885
c_rt_lib0clear(&___nl__4);
#line 885
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 885
c_rt_lib0clear(&___nl__2);
#line 885
c_rt_lib0clear(&___nl__1);
#line 893
c_rt_lib0move(&___nl__1,___get_global_const(1144));
#line 893
c_rt_lib0move(&___nl__3, tct0tct_im());
#line 893
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 893
c_rt_lib0move(&___nl__7, tct0tct_im());
#line 893
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 893
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(78), ___nl__8));
#line 893
c_rt_lib0clear(&___nl__6);
#line 893
c_rt_lib0clear(&___nl__7);
#line 893
c_rt_lib0clear(&___nl__8);
#line 893
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 893
c_rt_lib0clear(&___nl__5);
#line 893
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(171), ___nl__3, ___get_global_const(1063), ___nl__4));
#line 893
c_rt_lib0clear(&___nl__3);
#line 893
c_rt_lib0clear(&___nl__4);
#line 893
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 893
c_rt_lib0clear(&___nl__2);
#line 893
c_rt_lib0clear(&___nl__1);
#line 897
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 897
c_rt_lib0clear(&___nl__0);
#line 897
return ___nl__1;
#line 897
c_rt_lib0clear(&___nl__1);
#line 897
c_rt_lib0clear(&___nl__0);
#line 897
return NULL;
}

ImmT type_checker_priv0get_special_function_def(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 901
c_rt_lib0move(&___nl__2, type_checker_priv0get_special_functions());
#line 902
c_rt_lib0move(&___nl__5, nast0empty_debug());
#line 902
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 902
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(217), ___nl__5, ___get_global_const(214), ___nl__6));
#line 902
c_rt_lib0clear(&___nl__5);
#line 902
c_rt_lib0clear(&___nl__6);
#line 902
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(43)));
#line 902
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(43)));
#line 902
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(333)));
#line 902
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 902
c_rt_lib0move(&___nl__9, tct0empty());
#line 902
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(8, ___get_global_const(214), ___nl__4, ___get_global_const(1036), ___nl__5, ___get_global_const(1031), ___nl__6, ___get_global_const(78), ___nl__1, ___get_global_const(111), ___nl__0, ___get_global_const(332), ___nl__7, ___get_global_const(74), ___nl__8, ___get_global_const(736), ___nl__9));
#line 902
c_rt_lib0clear(&___nl__4);
#line 902
c_rt_lib0clear(&___nl__5);
#line 902
c_rt_lib0clear(&___nl__6);
#line 902
c_rt_lib0clear(&___nl__7);
#line 902
c_rt_lib0clear(&___nl__8);
#line 902
c_rt_lib0clear(&___nl__9);
#line 912
c_rt_lib0move(&___nl__4, type_checker_priv0get_function_name(___nl__0, ___nl__1));
#line 912
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 912
c_rt_lib0clear(&___nl__4);
#line 913
c_rt_lib0move(&___nl__4, hash0has_key(___nl__2, ___nl__1));
#line 913
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 913
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 914
c_rt_lib0move(&___nl__5, hash0get_value(___nl__2, ___nl__1));
#line 915
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(1063)));
#line 915
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 915
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(74), ___nl__7);
#line 915
c_rt_lib0clear(&___nl__6);
#line 915
c_rt_lib0clear(&___nl__7);
#line 916
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(171)));
#line 916
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 916
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(736), ___nl__7);
#line 916
c_rt_lib0clear(&___nl__6);
#line 916
c_rt_lib0clear(&___nl__7);
#line 916
c_rt_lib0clear(&___nl__5);
#line 917
goto label_1;
#line 917
label_2:
#line 918
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(334)));
#line 918
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 918
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(332), ___nl__6);
#line 918
c_rt_lib0clear(&___nl__5);
#line 918
c_rt_lib0clear(&___nl__6);
#line 919
goto label_1;
#line 919
label_1:
#line 919
c_rt_lib0clear(&___nl__4);
#line 920
c_rt_lib0clear(&___nl__0);
#line 920
c_rt_lib0clear(&___nl__1);
#line 920
c_rt_lib0clear(&___nl__2);
#line 920
return ___nl__3;
#line 920
c_rt_lib0clear(&___nl__2);
#line 920
c_rt_lib0clear(&___nl__3);
#line 920
c_rt_lib0clear(&___nl__0);
#line 920
c_rt_lib0clear(&___nl__1);
#line 920
return NULL;
}

ImmT type_checker_priv0check_special_function(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
type_checker_priv0__const__init();
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
#line 926
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(111)));
#line 926
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(78)));
#line 926
c_rt_lib0move(&___nl__6, type_checker_priv0get_function_name(___nl__7, ___nl__8));
#line 926
c_rt_lib0clear(&___nl__8);
#line 926
c_rt_lib0clear(&___nl__7);
#line 927
c_rt_lib0move(&___nl__7,___get_global_const(715));
#line 927
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 927
if(c_rt_lib0check_true_native(___nl__7)){ goto label_3;}
#line 927
c_rt_lib0move(&___nl__7,___get_global_const(1136));
#line 927
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 927
label_3:
#line 927
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 927
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 928
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 928
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 928
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__10));
#line 928
c_rt_lib0clear(&___nl__10);
#line 928
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(238)));
#line 928
c_rt_lib0move(&___nl__8, ptd_parser0try_value_to_ptd(___nl__9));
#line 928
c_rt_lib0clear(&___nl__9);
#line 928
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 928
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 931
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 931
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 931
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 931
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 931
nl_die_arg(___nl__9);
#line 928
label_5:
#line 928
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 929
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__10));
#line 930
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 930
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 930
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(73), ___nl__12);
#line 930
c_rt_lib0clear(&___nl__11);
#line 930
c_rt_lib0clear(&___nl__12);
#line 930
c_rt_lib0clear(&___nl__10);
#line 931
goto label_4;
#line 931
label_6:
#line 931
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 932
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 932
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__2, ___nl__13));
#line 932
c_rt_lib0clear(&___nl__13);
#line 932
c_rt_lib0move(&___nl__11, ptd_system0cast_type(___nl__10, ___nl__12, ___ref___3, ___ref___5));
#line 932
c_rt_lib0clear(&___nl__12);
#line 933
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 933
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(44)));
#line 933
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 933
if(c_rt_lib0check_true_native(___nl__12)){ goto label_8;}
#line 934
c_rt_lib0move(&___nl__13,___get_global_const(1145));
#line 934
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_check_info(___nl__11));
#line 934
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 934
c_rt_lib0clear(&___nl__14);
#line 934
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__13));
#line 934
c_rt_lib0clear(&___nl__13);
#line 935
goto label_8;
#line 935
label_8:
#line 935
c_rt_lib0clear(&___nl__12);
#line 936
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 936
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(73), ___nl__12);
#line 936
c_rt_lib0clear(&___nl__12);
#line 937
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__10, ___ref___3, ___ref___5));
#line 937
c_rt_lib0clear(&___nl__11);
#line 937
c_rt_lib0clear(&___nl__10);
#line 938
goto label_4;
#line 938
label_4:
#line 938
c_rt_lib0clear(&___nl__8);
#line 938
c_rt_lib0clear(&___nl__9);
#line 939
goto label_2;
#line 939
label_2:
#line 939
c_rt_lib0clear(&___nl__7);
#line 940
c_rt_lib0move(&___nl__7,___get_global_const(1135));
#line 940
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 940
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 940
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 941
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 941
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 941
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__10));
#line 941
c_rt_lib0clear(&___nl__10);
#line 941
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(238)));
#line 941
c_rt_lib0move(&___nl__8, ptd_parser0try_value_to_ptd(___nl__9));
#line 941
c_rt_lib0clear(&___nl__9);
#line 941
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 941
if(c_rt_lib0check_true_native(___nl__9)){ goto label_12;}
#line 944
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 944
if(c_rt_lib0check_true_native(___nl__9)){ goto label_13;}
#line 944
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 944
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 944
nl_die_arg(___nl__9);
#line 941
label_12:
#line 941
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 942
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__10));
#line 943
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 943
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 943
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(73), ___nl__12);
#line 943
c_rt_lib0clear(&___nl__11);
#line 943
c_rt_lib0clear(&___nl__12);
#line 943
c_rt_lib0clear(&___nl__10);
#line 944
goto label_11;
#line 944
label_13:
#line 944
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 945
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(111)));
#line 945
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(78)));
#line 945
c_rt_lib0move(&___nl__11, type_checker_priv0get_function_def(___nl__12, ___nl__13, *___ref___3));
#line 945
c_rt_lib0clear(&___nl__13);
#line 945
c_rt_lib0clear(&___nl__12);
#line 946
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(736)));
#line 946
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(1019)));
#line 946
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__13, ___get_global_const(40), ___nl__14));
#line 946
c_rt_lib0clear(&___nl__13);
#line 946
c_rt_lib0clear(&___nl__14);
#line 947
c_rt_lib0move(&___nl__13, ptd_system0can_delete(___nl__12, ___ref___3, ___ref___5));
#line 947
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(73)));
#line 947
c_rt_lib0copy(&___nl__14, ___nl__13);
#line 947
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(73), ___nl__14);
#line 947
c_rt_lib0clear(&___nl__13);
#line 947
c_rt_lib0clear(&___nl__14);
#line 948
c_rt_lib0move(&___nl__13, ptd_system0is_try_ensure_type(___nl__0, ___ref___3, ___ref___5));
#line 948
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 948
if(c_rt_lib0check_true_native(___nl__13)){ goto label_15;}
#line 949
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 949
c_rt_lib0move(&___nl__18,___get_global_const(44));
#line 949
c_rt_lib0move(&___nl__16, tct0try_var_as_case(___nl__17, ___nl__18));
#line 949
c_rt_lib0clear(&___nl__18);
#line 949
c_rt_lib0clear(&___nl__17);
#line 949
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__16, ___get_global_const(45)));
#line 949
if(c_rt_lib0check_true_native(___nl__15)){ goto label_16;}
#line 949
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__16));
#line 949
nl_die_arg(___nl__16);
#line 949
label_16:
#line 949
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__16, ___get_global_const(45)));
#line 949
c_rt_lib0clear(&___nl__15);
#line 949
c_rt_lib0clear(&___nl__16);
#line 950
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__10, ___get_global_const(44), ___nl__14));
#line 950
c_rt_lib0move(&___nl__15, tct0var(___nl__16));
#line 950
c_rt_lib0clear(&___nl__16);
#line 950
c_rt_lib0copy(&___nl__16, ___nl__15);
#line 950
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(73), ___nl__16);
#line 950
c_rt_lib0clear(&___nl__15);
#line 950
c_rt_lib0clear(&___nl__16);
#line 950
c_rt_lib0clear(&___nl__14);
#line 951
goto label_14;
#line 951
label_15:
#line 952
c_rt_lib0move(&___nl__14,___get_global_const(1146));
#line 952
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__14));
#line 952
c_rt_lib0clear(&___nl__14);
#line 953
goto label_14;
#line 953
label_14:
#line 953
c_rt_lib0clear(&___nl__13);
#line 954
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__10, ___ref___3, ___ref___5));
#line 954
c_rt_lib0clear(&___nl__11);
#line 954
c_rt_lib0clear(&___nl__12);
#line 954
c_rt_lib0clear(&___nl__10);
#line 955
goto label_11;
#line 955
label_11:
#line 955
c_rt_lib0clear(&___nl__8);
#line 955
c_rt_lib0clear(&___nl__9);
#line 956
goto label_10;
#line 956
label_10:
#line 956
c_rt_lib0clear(&___nl__7);
#line 957
c_rt_lib0move(&___nl__7,___get_global_const(671));
#line 957
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 957
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 957
if(c_rt_lib0check_true_native(___nl__7)){ goto label_18;}
#line 958
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 958
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 958
c_rt_lib0clear(&___nl__10);
#line 958
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 958
c_rt_lib0move(&___nl__8, tct0arr(___nl__9));
#line 958
c_rt_lib0clear(&___nl__9);
#line 958
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 958
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_arr(___nl__2, ___nl__10));
#line 958
c_rt_lib0copy(&___nl__11, ___nl__8);
#line 958
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(73), ___nl__11);
#line 958
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__2, ___nl__10, ___nl__9));
#line 958
c_rt_lib0clear(&___nl__8);
#line 958
c_rt_lib0clear(&___nl__9);
#line 958
c_rt_lib0clear(&___nl__10);
#line 958
c_rt_lib0clear(&___nl__11);
#line 959
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 959
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 959
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 959
c_rt_lib0clear(&___nl__9);
#line 959
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(238)));
#line 959
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 959
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 959
c_rt_lib0clear(&___nl__10);
#line 959
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 959
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 959
c_rt_lib0clear(&___nl__11);
#line 959
c_rt_lib0move(&___nl__12, tct0empty());
#line 959
c_rt_lib0move(&___nl__11, tct0arr(___nl__12));
#line 959
c_rt_lib0clear(&___nl__12);
#line 959
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 959
c_rt_lib0clear(&___nl__11);
#line 959
c_rt_lib0clear(&___nl__10);
#line 959
c_rt_lib0clear(&___nl__9);
#line 959
c_rt_lib0clear(&___nl__8);
#line 961
goto label_18;
#line 961
label_18:
#line 961
c_rt_lib0clear(&___nl__7);
#line 962
c_rt_lib0move(&___nl__7,___get_global_const(674));
#line 962
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 962
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 962
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 963
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 963
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 963
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 963
c_rt_lib0clear(&___nl__9);
#line 963
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(238)));
#line 963
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 963
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 963
c_rt_lib0clear(&___nl__10);
#line 963
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 963
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 963
c_rt_lib0clear(&___nl__11);
#line 963
c_rt_lib0move(&___nl__12, tct0empty());
#line 963
c_rt_lib0move(&___nl__11, tct0arr(___nl__12));
#line 963
c_rt_lib0clear(&___nl__12);
#line 963
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 963
c_rt_lib0clear(&___nl__11);
#line 963
c_rt_lib0clear(&___nl__10);
#line 963
c_rt_lib0clear(&___nl__9);
#line 963
c_rt_lib0clear(&___nl__8);
#line 965
goto label_20;
#line 965
label_20:
#line 965
c_rt_lib0clear(&___nl__7);
#line 966
c_rt_lib0move(&___nl__7,___get_global_const(673));
#line 966
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 966
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 966
if(c_rt_lib0check_true_native(___nl__7)){ goto label_22;}
#line 967
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 967
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__2, ___nl__9));
#line 967
c_rt_lib0clear(&___nl__9);
#line 967
c_rt_lib0clear(&___nl__0);
#line 967
c_rt_lib0clear(&___nl__1);
#line 967
c_rt_lib0clear(&___nl__2);
#line 967
c_rt_lib0clear(&___nl__6);
#line 967
c_rt_lib0clear(&___nl__7);
#line 967
return ___nl__8;
#line 967
c_rt_lib0clear(&___nl__8);
#line 968
goto label_22;
#line 968
label_22:
#line 968
c_rt_lib0clear(&___nl__7);
#line 969
c_rt_lib0move(&___nl__7,___get_global_const(680));
#line 969
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 969
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 969
if(c_rt_lib0check_true_native(___nl__7)){ goto label_24;}
#line 970
c_rt_lib0move(&___nl__10,___get_global_const(139));
#line 970
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 970
c_rt_lib0clear(&___nl__10);
#line 970
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 970
c_rt_lib0move(&___nl__8, tct0hash(___nl__9));
#line 970
c_rt_lib0clear(&___nl__9);
#line 970
c_rt_lib0move(&___nl__10,___get_global_const(139));
#line 970
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_arr(___nl__2, ___nl__10));
#line 970
c_rt_lib0copy(&___nl__11, ___nl__8);
#line 970
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(73), ___nl__11);
#line 970
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__2, ___nl__10, ___nl__9));
#line 970
c_rt_lib0clear(&___nl__8);
#line 970
c_rt_lib0clear(&___nl__9);
#line 970
c_rt_lib0clear(&___nl__10);
#line 970
c_rt_lib0clear(&___nl__11);
#line 971
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 971
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 971
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 971
c_rt_lib0clear(&___nl__9);
#line 971
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(238)));
#line 971
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 971
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 971
c_rt_lib0clear(&___nl__10);
#line 971
c_rt_lib0move(&___nl__11,___get_global_const(139));
#line 971
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 971
c_rt_lib0clear(&___nl__11);
#line 971
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 971
c_rt_lib0move(&___nl__11, tct0rec(___nl__12));
#line 971
c_rt_lib0clear(&___nl__12);
#line 971
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 971
c_rt_lib0clear(&___nl__11);
#line 971
c_rt_lib0clear(&___nl__10);
#line 971
c_rt_lib0clear(&___nl__9);
#line 971
c_rt_lib0clear(&___nl__8);
#line 973
goto label_24;
#line 973
label_24:
#line 973
c_rt_lib0clear(&___nl__7);
#line 974
c_rt_lib0move(&___nl__7,___get_global_const(681));
#line 974
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 974
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 974
if(c_rt_lib0check_true_native(___nl__7)){ goto label_26;}
#line 975
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 975
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 975
c_rt_lib0clear(&___nl__10);
#line 975
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___3, ___ref___5));
#line 975
c_rt_lib0clear(&___nl__9);
#line 976
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(73)));
#line 976
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(749)));
#line 976
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 976
if(c_rt_lib0check_true_native(___nl__9)){ goto label_28;}
#line 977
c_rt_lib0copy(&___nl__10, ___nl__8);
#line 978
c_rt_lib0move(&___nl__13, tct0empty());
#line 978
c_rt_lib0move(&___nl__12, tct0hash(___nl__13));
#line 978
c_rt_lib0clear(&___nl__13);
#line 978
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(73)));
#line 978
c_rt_lib0move(&___nl__11, ptd_system0cross_type(___nl__12, ___nl__13, ___ref___3, ___ref___5));
#line 978
c_rt_lib0clear(&___nl__13);
#line 978
c_rt_lib0clear(&___nl__12);
#line 978
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 978
c_rt_lib0hash_set_value_dec(&___nl__10, ___get_global_const(73), ___nl__12);
#line 978
c_rt_lib0clear(&___nl__11);
#line 978
c_rt_lib0clear(&___nl__12);
#line 979
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 979
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 979
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__11, ___nl__12));
#line 979
c_rt_lib0clear(&___nl__12);
#line 979
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(238)));
#line 979
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 979
c_rt_lib0move(&___nl__12, tct0rec(___nl__13));
#line 979
c_rt_lib0clear(&___nl__13);
#line 979
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__11, ___nl__8, ___nl__10, ___nl__12, ___ref___3, ___ref___4, ___ref___5));
#line 979
c_rt_lib0clear(&___nl__12);
#line 979
c_rt_lib0clear(&___nl__11);
#line 979
c_rt_lib0clear(&___nl__10);
#line 980
goto label_28;
#line 980
label_28:
#line 980
c_rt_lib0clear(&___nl__9);
#line 980
c_rt_lib0clear(&___nl__8);
#line 981
goto label_26;
#line 981
label_26:
#line 981
c_rt_lib0clear(&___nl__7);
#line 982
c_rt_lib0move(&___nl__7,___get_global_const(678));
#line 982
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 982
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 982
if(c_rt_lib0check_true_native(___nl__7)){ goto label_30;}
#line 983
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 983
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 983
c_rt_lib0clear(&___nl__10);
#line 983
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___3, ___ref___5));
#line 983
c_rt_lib0clear(&___nl__9);
#line 984
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(40)));
#line 984
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 984
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(40), ___nl__10);
#line 984
c_rt_lib0clear(&___nl__9);
#line 984
c_rt_lib0clear(&___nl__10);
#line 985
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(73)));
#line 985
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(748)));
#line 985
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 985
if(c_rt_lib0check_true_native(___nl__9)){ goto label_32;}
#line 985
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(73)));
#line 985
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(748)));
#line 985
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 985
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(73), ___nl__11);
#line 985
c_rt_lib0clear(&___nl__10);
#line 985
c_rt_lib0clear(&___nl__11);
#line 985
goto label_32;
#line 985
label_32:
#line 985
c_rt_lib0clear(&___nl__9);
#line 985
c_rt_lib0clear(&___nl__8);
#line 986
goto label_30;
#line 986
label_30:
#line 986
c_rt_lib0clear(&___nl__7);
#line 987
c_rt_lib0move(&___nl__7,___get_global_const(1138));
#line 987
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 987
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 987
if(c_rt_lib0check_true_native(___nl__7)){ goto label_34;}
#line 988
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 988
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 988
c_rt_lib0clear(&___nl__10);
#line 988
c_rt_lib0move(&___nl__8, ptd_system0can_delete(___nl__9, ___ref___3, ___ref___5));
#line 988
c_rt_lib0clear(&___nl__9);
#line 989
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(40)));
#line 989
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 989
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(40), ___nl__10);
#line 989
c_rt_lib0clear(&___nl__9);
#line 989
c_rt_lib0clear(&___nl__10);
#line 990
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(73)));
#line 990
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(748)));
#line 990
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 990
if(c_rt_lib0check_true_native(___nl__9)){ goto label_36;}
#line 990
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(73)));
#line 990
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(748)));
#line 990
c_rt_lib0move(&___nl__10, tct0arr(___nl__11));
#line 990
c_rt_lib0clear(&___nl__11);
#line 990
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 990
c_rt_lib0hash_set_value_dec(&___nl__0, ___get_global_const(73), ___nl__11);
#line 990
c_rt_lib0clear(&___nl__10);
#line 990
c_rt_lib0clear(&___nl__11);
#line 990
goto label_36;
#line 990
label_36:
#line 990
c_rt_lib0clear(&___nl__9);
#line 990
c_rt_lib0clear(&___nl__8);
#line 991
goto label_34;
#line 991
label_34:
#line 991
c_rt_lib0clear(&___nl__7);
#line 992
c_rt_lib0move(&___nl__7,___get_global_const(1139));
#line 992
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 992
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 992
if(c_rt_lib0check_true_native(___nl__7)){ goto label_38;}
#line 993
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 993
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 993
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 993
c_rt_lib0clear(&___nl__9);
#line 993
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(238)));
#line 993
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 993
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 993
c_rt_lib0clear(&___nl__10);
#line 993
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 993
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__2, ___nl__11));
#line 993
c_rt_lib0clear(&___nl__11);
#line 993
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 993
c_rt_lib0move(&___nl__11, tct0rec(___nl__12));
#line 993
c_rt_lib0clear(&___nl__12);
#line 993
c_rt_lib0delete(type_checker_priv0set_type_to_lval_spec(___nl__8, ___nl__9, ___nl__10, ___nl__11, ___ref___3, ___ref___4, ___ref___5));
#line 993
c_rt_lib0clear(&___nl__11);
#line 993
c_rt_lib0clear(&___nl__10);
#line 993
c_rt_lib0clear(&___nl__9);
#line 993
c_rt_lib0clear(&___nl__8);
#line 995
goto label_38;
#line 995
label_38:
#line 995
c_rt_lib0clear(&___nl__7);
#line 997
c_rt_lib0move(&___nl__7,___get_global_const(698));
#line 997
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 997
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 997
if(c_rt_lib0check_true_native(___nl__7)){ goto label_40;}
#line 998
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 998
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 998
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 998
c_rt_lib0clear(&___nl__10);
#line 998
c_rt_lib0delete(ptd_system0check_assignment(___nl__8, ___nl__9, ___ref___3, ___ref___5));
#line 998
c_rt_lib0clear(&___nl__9);
#line 998
c_rt_lib0clear(&___nl__8);
#line 999
goto label_40;
#line 999
label_40:
#line 999
c_rt_lib0clear(&___nl__7);
#line 1000
c_rt_lib0move(&___nl__7,___get_global_const(1140));
#line 1000
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1000
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1000
if(c_rt_lib0check_true_native(___nl__7)){ goto label_42;}
#line 1001
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 1001
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 1001
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__2, ___nl__10));
#line 1001
c_rt_lib0clear(&___nl__10);
#line 1001
c_rt_lib0delete(ptd_system0check_assignment(___nl__8, ___nl__9, ___ref___3, ___ref___5));
#line 1001
c_rt_lib0clear(&___nl__9);
#line 1001
c_rt_lib0clear(&___nl__8);
#line 1002
goto label_42;
#line 1002
label_42:
#line 1002
c_rt_lib0clear(&___nl__7);
#line 1003
c_rt_lib0move(&___nl__7,___get_global_const(1147));
#line 1003
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 1003
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1003
if(c_rt_lib0check_true_native(___nl__7)){ goto label_44;}
#line 1004
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 1004
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__2, ___nl__9));
#line 1004
c_rt_lib0clear(&___nl__9);
#line 1004
c_rt_lib0clear(&___nl__0);
#line 1004
c_rt_lib0clear(&___nl__1);
#line 1004
c_rt_lib0clear(&___nl__2);
#line 1004
c_rt_lib0clear(&___nl__6);
#line 1004
c_rt_lib0clear(&___nl__7);
#line 1004
return ___nl__8;
#line 1004
c_rt_lib0clear(&___nl__8);
#line 1005
goto label_44;
#line 1005
label_44:
#line 1005
c_rt_lib0clear(&___nl__7);
#line 1006
c_rt_lib0clear(&___nl__1);
#line 1006
c_rt_lib0clear(&___nl__2);
#line 1006
c_rt_lib0clear(&___nl__6);
#line 1006
return ___nl__0;
#line 1006
c_rt_lib0clear(&___nl__6);
#line 1006
c_rt_lib0clear(&___nl__0);
#line 1006
c_rt_lib0clear(&___nl__1);
#line 1006
c_rt_lib0clear(&___nl__2);
#line 1006
return NULL;
}

ImmT type_checker_priv0rec_get_var_from_lval(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1010
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 1011
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 1011
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(796)));
#line 1011
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1011
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 1012
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 1012
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(796)));
#line 1013
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(796), ___nl__4));
#line 1013
c_rt_lib0delete(array0push(&___nl__2, ___nl__5));
#line 1013
c_rt_lib0clear(&___nl__5);
#line 1013
c_rt_lib0clear(&___nl__4);
#line 1014
goto label_1;
#line 1014
label_2:
#line 1014
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 1014
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(223)));
#line 1014
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1014
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 1015
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 1015
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(223)));
#line 1016
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(405)));
#line 1016
c_rt_lib0move(&___nl__6,___get_global_const(797));
#line 1016
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 1016
c_rt_lib0clear(&___nl__6);
#line 1016
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1016
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 1017
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(239)));
#line 1017
c_rt_lib0move(&___nl__6, type_checker_priv0rec_get_var_from_lval(___nl__7, ___ref___1));
#line 1017
c_rt_lib0clear(&___nl__7);
#line 1017
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 1017
c_rt_lib0clear(&___nl__6);
#line 1018
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(240)));
#line 1018
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(802)));
#line 1018
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(1014), ___nl__6));
#line 1018
c_rt_lib0delete(array0push(&___nl__2, ___nl__6));
#line 1018
c_rt_lib0clear(&___nl__6);
#line 1019
goto label_4;
#line 1019
label_5:
#line 1019
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(405)));
#line 1019
c_rt_lib0move(&___nl__6,___get_global_const(798));
#line 1019
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 1019
c_rt_lib0clear(&___nl__6);
#line 1019
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1019
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 1020
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(239)));
#line 1020
c_rt_lib0move(&___nl__6, type_checker_priv0rec_get_var_from_lval(___nl__7, ___ref___1));
#line 1020
c_rt_lib0clear(&___nl__7);
#line 1020
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 1020
c_rt_lib0clear(&___nl__6);
#line 1021
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(281)));
#line 1021
c_rt_lib0delete(array0push(&___nl__2, ___nl__6));
#line 1021
c_rt_lib0clear(&___nl__6);
#line 1022
goto label_4;
#line 1022
label_6:
#line 1023
c_rt_lib0move(&___nl__6,___get_global_const(1148));
#line 1023
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(405)));
#line 1023
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1023
c_rt_lib0clear(&___nl__7);
#line 1023
c_rt_lib0move(&___nl__7,___get_global_const(1149));
#line 1023
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1023
c_rt_lib0clear(&___nl__7);
#line 1023
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__6));
#line 1023
c_rt_lib0clear(&___nl__6);
#line 1024
goto label_4;
#line 1024
label_4:
#line 1024
c_rt_lib0clear(&___nl__5);
#line 1024
c_rt_lib0clear(&___nl__4);
#line 1025
goto label_1;
#line 1025
label_3:
#line 1026
c_rt_lib0move(&___nl__4,___get_global_const(1150));
#line 1026
c_rt_lib0delete(type_checker_priv0add_error(___ref___1, ___nl__4));
#line 1026
c_rt_lib0clear(&___nl__4);
#line 1027
goto label_1;
#line 1027
label_1:
#line 1027
c_rt_lib0clear(&___nl__3);
#line 1028
c_rt_lib0clear(&___nl__0);
#line 1028
return ___nl__2;
#line 1028
c_rt_lib0clear(&___nl__2);
#line 1028
c_rt_lib0clear(&___nl__0);
#line 1028
return NULL;
}

ImmT type_checker_priv0mk_new_type_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
type_checker_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
#line 1033
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 1033
c_rt_lib0move(&___nl__8, array0len(___nl__0));
#line 1033
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 1033
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 1033
c_rt_lib0clear(&___nl__9);
#line 1033
c_rt_lib0move(&___nl__6, array0subarray(___nl__0, ___nl__7, ___nl__8));
#line 1033
c_rt_lib0clear(&___nl__8);
#line 1033
c_rt_lib0clear(&___nl__7);
#line 1033
c_rt_lib0copy(&___nl__0, ___nl__6);
#line 1033
c_rt_lib0clear(&___nl__6);
#line 1034
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 1034
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 1034
c_rt_lib0move(&___nl__6, c_rt_lib0num_eq(___nl__6, ___nl__7));
#line 1034
c_rt_lib0clear(&___nl__7);
#line 1034
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1034
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 1035
c_rt_lib0move(&___nl__7, type_checker_priv0is_known(___nl__2));
#line 1035
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1035
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 1036
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 1036
c_rt_lib0move(&___nl__8, ptd_system0check_assignment(___nl__9, ___nl__1, ___ref___4, ___ref___5));
#line 1036
c_rt_lib0clear(&___nl__9);
#line 1037
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 1037
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(44)));
#line 1037
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1037
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 1038
c_rt_lib0move(&___nl__10,___get_global_const(1151));
#line 1038
c_rt_lib0move(&___nl__11, type_checker_priv0get_print_check_info(___nl__8));
#line 1038
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1038
c_rt_lib0clear(&___nl__11);
#line 1038
c_rt_lib0delete(type_checker_priv0add_error(___ref___5, ___nl__10));
#line 1038
c_rt_lib0clear(&___nl__10);
#line 1039
goto label_6;
#line 1039
label_6:
#line 1039
c_rt_lib0clear(&___nl__9);
#line 1040
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 1040
c_rt_lib0clear(&___nl__0);
#line 1040
c_rt_lib0clear(&___nl__1);
#line 1040
c_rt_lib0clear(&___nl__2);
#line 1040
c_rt_lib0clear(&___nl__3);
#line 1040
c_rt_lib0clear(&___nl__6);
#line 1040
c_rt_lib0clear(&___nl__7);
#line 1040
c_rt_lib0clear(&___nl__8);
#line 1040
return ___nl__9;
#line 1040
c_rt_lib0clear(&___nl__9);
#line 1040
c_rt_lib0clear(&___nl__8);
#line 1041
goto label_3;
#line 1041
label_4:
#line 1042
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 1042
c_rt_lib0delete(ptd_system0check_assignment(___nl__8, ___nl__1, ___ref___4, ___ref___5));
#line 1042
c_rt_lib0clear(&___nl__8);
#line 1043
c_rt_lib0move(&___nl__8, ptd_system0can_create(___nl__2, ___ref___4, ___ref___5));
#line 1043
c_rt_lib0copy(&___nl__2, ___nl__8);
#line 1043
c_rt_lib0clear(&___nl__8);
#line 1044
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 1044
c_rt_lib0move(&___nl__8, ptd_system0is_equal(___nl__9, ___nl__3));
#line 1044
c_rt_lib0clear(&___nl__9);
#line 1044
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1044
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 1044
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 1044
c_rt_lib0clear(&___nl__0);
#line 1044
c_rt_lib0clear(&___nl__1);
#line 1044
c_rt_lib0clear(&___nl__2);
#line 1044
c_rt_lib0clear(&___nl__3);
#line 1044
c_rt_lib0clear(&___nl__6);
#line 1044
c_rt_lib0clear(&___nl__7);
#line 1044
c_rt_lib0clear(&___nl__8);
#line 1044
return ___nl__9;
#line 1044
c_rt_lib0clear(&___nl__9);
#line 1044
goto label_8;
#line 1044
label_8:
#line 1044
c_rt_lib0clear(&___nl__8);
#line 1045
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 1045
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 1045
c_rt_lib0move(&___nl__8, ptd_system0cross_type(___nl__9, ___nl__10, ___ref___4, ___ref___5));
#line 1045
c_rt_lib0clear(&___nl__10);
#line 1045
c_rt_lib0clear(&___nl__9);
#line 1045
c_rt_lib0clear(&___nl__0);
#line 1045
c_rt_lib0clear(&___nl__1);
#line 1045
c_rt_lib0clear(&___nl__2);
#line 1045
c_rt_lib0clear(&___nl__3);
#line 1045
c_rt_lib0clear(&___nl__6);
#line 1045
c_rt_lib0clear(&___nl__7);
#line 1045
return ___nl__8;
#line 1045
c_rt_lib0clear(&___nl__8);
#line 1046
goto label_3;
#line 1046
label_3:
#line 1046
c_rt_lib0clear(&___nl__7);
#line 1047
goto label_1;
#line 1047
label_2:
#line 1048
c_rt_lib0move(&___nl__7, ptd_system0can_create(___nl__2, ___ref___4, ___ref___5));
#line 1048
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 1048
c_rt_lib0clear(&___nl__7);
#line 1049
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 1049
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__8));
#line 1049
c_rt_lib0clear(&___nl__8);
#line 1049
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(796)));
#line 1049
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 1051
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(281)));
#line 1051
if(c_rt_lib0check_true_native(___nl__8)){ goto label_11;}
#line 1055
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(1014)));
#line 1055
if(c_rt_lib0check_true_native(___nl__8)){ goto label_12;}
#line 1055
c_rt_lib0move(&___nl__8,___get_global_const(76));
#line 1055
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 1055
nl_die_arg(___nl__8);
#line 1049
label_10:
#line 1049
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(796)));
#line 1050
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(1, ___nl__0));
#line 1050
nl_die_arg(___nl__10);
#line 1050
c_rt_lib0clear(&___nl__10);
#line 1050
c_rt_lib0clear(&___nl__9);
#line 1051
goto label_9;
#line 1051
label_11:
#line 1052
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 1052
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(747)));
#line 1052
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1052
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1052
if(c_rt_lib0check_true_native(___nl__9)){ goto label_14;}
#line 1052
c_rt_lib0move(&___nl__10, tct0tct_im());
#line 1052
c_rt_lib0clear(&___nl__0);
#line 1052
c_rt_lib0clear(&___nl__1);
#line 1052
c_rt_lib0clear(&___nl__2);
#line 1052
c_rt_lib0clear(&___nl__3);
#line 1052
c_rt_lib0clear(&___nl__6);
#line 1052
c_rt_lib0clear(&___nl__7);
#line 1052
c_rt_lib0clear(&___nl__8);
#line 1052
c_rt_lib0clear(&___nl__9);
#line 1052
return ___nl__10;
#line 1052
c_rt_lib0clear(&___nl__10);
#line 1052
goto label_14;
#line 1052
label_14:
#line 1052
c_rt_lib0clear(&___nl__9);
#line 1053
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 1053
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(747)));
#line 1053
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1053
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(73), ___nl__10);
#line 1053
c_rt_lib0clear(&___nl__9);
#line 1053
c_rt_lib0clear(&___nl__10);
#line 1054
c_rt_lib0move(&___nl__10, type_checker_priv0mk_new_type_lval(___nl__0, ___nl__1, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 1054
c_rt_lib0move(&___nl__9, tct0arr(___nl__10));
#line 1054
c_rt_lib0clear(&___nl__10);
#line 1054
c_rt_lib0clear(&___nl__0);
#line 1054
c_rt_lib0clear(&___nl__1);
#line 1054
c_rt_lib0clear(&___nl__2);
#line 1054
c_rt_lib0clear(&___nl__3);
#line 1054
c_rt_lib0clear(&___nl__6);
#line 1054
c_rt_lib0clear(&___nl__7);
#line 1054
c_rt_lib0clear(&___nl__8);
#line 1054
return ___nl__9;
#line 1054
c_rt_lib0clear(&___nl__9);
#line 1055
goto label_9;
#line 1055
label_12:
#line 1055
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(1014)));
#line 1056
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 1056
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(749)));
#line 1056
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1056
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1056
if(c_rt_lib0check_true_native(___nl__10)){ goto label_16;}
#line 1056
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1056
c_rt_lib0clear(&___nl__0);
#line 1056
c_rt_lib0clear(&___nl__1);
#line 1056
c_rt_lib0clear(&___nl__2);
#line 1056
c_rt_lib0clear(&___nl__3);
#line 1056
c_rt_lib0clear(&___nl__6);
#line 1056
c_rt_lib0clear(&___nl__7);
#line 1056
c_rt_lib0clear(&___nl__8);
#line 1056
c_rt_lib0clear(&___nl__9);
#line 1056
c_rt_lib0clear(&___nl__10);
#line 1056
return ___nl__11;
#line 1056
c_rt_lib0clear(&___nl__11);
#line 1056
goto label_16;
#line 1056
label_16:
#line 1056
c_rt_lib0clear(&___nl__10);
#line 1057
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(73)));
#line 1057
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(749)));
#line 1058
c_rt_lib0move(&___nl__11, hash0has_key(___nl__10, ___nl__9));
#line 1058
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 1058
if(c_rt_lib0check_true_native(___nl__11)){ goto label_18;}
#line 1059
c_rt_lib0move(&___nl__12, hash0get_value(___nl__10, ___nl__9));
#line 1059
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 1059
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(73), ___nl__13);
#line 1059
c_rt_lib0clear(&___nl__12);
#line 1059
c_rt_lib0clear(&___nl__13);
#line 1060
c_rt_lib0move(&___nl__12, type_checker_priv0mk_new_type_lval(___nl__0, ___nl__1, ___nl__2, ___nl__3, ___ref___4, ___ref___5));
#line 1060
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__9, ___nl__12));
#line 1060
c_rt_lib0clear(&___nl__12);
#line 1062
goto label_17;
#line 1062
label_18:
#line 1063
c_rt_lib0move(&___nl__12, array0len(___nl__0));
#line 1063
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 1063
c_rt_lib0move(&___nl__12, c_rt_lib0num_ne(___nl__12, ___nl__13));
#line 1063
c_rt_lib0clear(&___nl__13);
#line 1063
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1063
if(c_rt_lib0check_true_native(___nl__12)){ goto label_20;}
#line 1064
c_rt_lib0move(&___nl__13, tct0tct_im());
#line 1064
c_rt_lib0clear(&___nl__0);
#line 1064
c_rt_lib0clear(&___nl__1);
#line 1064
c_rt_lib0clear(&___nl__2);
#line 1064
c_rt_lib0clear(&___nl__3);
#line 1064
c_rt_lib0clear(&___nl__6);
#line 1064
c_rt_lib0clear(&___nl__7);
#line 1064
c_rt_lib0clear(&___nl__8);
#line 1064
c_rt_lib0clear(&___nl__9);
#line 1064
c_rt_lib0clear(&___nl__10);
#line 1064
c_rt_lib0clear(&___nl__11);
#line 1064
c_rt_lib0clear(&___nl__12);
#line 1064
return ___nl__13;
#line 1064
c_rt_lib0clear(&___nl__13);
#line 1065
goto label_20;
#line 1065
label_20:
#line 1065
c_rt_lib0clear(&___nl__12);
#line 1066
c_rt_lib0move(&___nl__12, tct0tct_im());
#line 1066
c_rt_lib0delete(ptd_system0check_assignment(___nl__12, ___nl__1, ___ref___4, ___ref___5));
#line 1066
c_rt_lib0clear(&___nl__12);
#line 1067
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 1067
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__9, ___nl__12));
#line 1067
c_rt_lib0clear(&___nl__12);
#line 1068
goto label_17;
#line 1068
label_17:
#line 1068
c_rt_lib0clear(&___nl__11);
#line 1069
c_rt_lib0move(&___nl__11, tct0rec(___nl__10));
#line 1069
c_rt_lib0clear(&___nl__0);
#line 1069
c_rt_lib0clear(&___nl__1);
#line 1069
c_rt_lib0clear(&___nl__2);
#line 1069
c_rt_lib0clear(&___nl__3);
#line 1069
c_rt_lib0clear(&___nl__6);
#line 1069
c_rt_lib0clear(&___nl__7);
#line 1069
c_rt_lib0clear(&___nl__8);
#line 1069
c_rt_lib0clear(&___nl__9);
#line 1069
c_rt_lib0clear(&___nl__10);
#line 1069
return ___nl__11;
#line 1069
c_rt_lib0clear(&___nl__11);
#line 1069
c_rt_lib0clear(&___nl__10);
#line 1069
c_rt_lib0clear(&___nl__9);
#line 1070
goto label_9;
#line 1070
label_9:
#line 1070
c_rt_lib0clear(&___nl__7);
#line 1070
c_rt_lib0clear(&___nl__8);
#line 1071
goto label_1;
#line 1071
label_1:
#line 1071
c_rt_lib0clear(&___nl__6);
#line 1071
c_rt_lib0clear(&___nl__0);
#line 1071
c_rt_lib0clear(&___nl__1);
#line 1071
c_rt_lib0clear(&___nl__2);
#line 1071
c_rt_lib0clear(&___nl__3);
#line 1071
return NULL;
}

ImmT type_checker_priv0set_type_to_lval(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT * ___ref___4,ImmT * ___ref___5) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
type_checker_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1076
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 1076
c_rt_lib0move(&___nl__6, type_checker_priv0set_type_to_lval_spec(___nl__0, ___nl__1, ___nl__2, ___nl__7, ___ref___3, ___ref___4, ___ref___5));
#line 1076
c_rt_lib0clear(&___nl__7);
#line 1076
c_rt_lib0clear(&___nl__0);
#line 1076
c_rt_lib0clear(&___nl__1);
#line 1076
c_rt_lib0clear(&___nl__2);
#line 1076
return ___nl__6;
#line 1076
c_rt_lib0clear(&___nl__6);
#line 1076
c_rt_lib0clear(&___nl__0);
#line 1076
c_rt_lib0clear(&___nl__1);
#line 1076
c_rt_lib0clear(&___nl__2);
#line 1076
return NULL;
}

ImmT type_checker_priv0set_type_to_lval_spec(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4,ImmT * ___ref___5,ImmT * ___ref___6) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
type_checker_priv0__const__init();
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
#line 1082
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___6, ___get_global_const(17)));
#line 1082
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 1082
c_rt_lib0clear(&___nl__8);
#line 1083
c_rt_lib0move(&___nl__8, type_checker_priv0rec_get_var_from_lval(___nl__0, ___ref___6));
#line 1084
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___6, ___get_global_const(17)));
#line 1084
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 1084
c_rt_lib0clear(&___nl__10);
#line 1084
c_rt_lib0move(&___nl__9, c_rt_lib0num_ne(___nl__7, ___nl__9));
#line 1084
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1084
if(c_rt_lib0check_true_native(___nl__9)){ goto label_2;}
#line 1084
c_rt_lib0clear(&___nl__0);
#line 1084
c_rt_lib0clear(&___nl__2);
#line 1084
c_rt_lib0clear(&___nl__3);
#line 1084
c_rt_lib0clear(&___nl__7);
#line 1084
c_rt_lib0clear(&___nl__8);
#line 1084
c_rt_lib0clear(&___nl__9);
#line 1084
return ___nl__1;
#line 1084
goto label_2;
#line 1084
label_2:
#line 1084
c_rt_lib0clear(&___nl__9);
#line 1085
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 1085
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 1085
c_rt_lib0clear(&___nl__10);
#line 1085
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(796)));
#line 1086
c_rt_lib0move(&___nl__10, hash0has_key(*___ref___5, ___nl__9));
#line 1086
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1086
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1086
if(c_rt_lib0check_true_native(___nl__10)){ goto label_4;}
#line 1087
c_rt_lib0move(&___nl__11,___get_global_const(1152));
#line 1087
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__9));
#line 1087
c_rt_lib0move(&___nl__12,___get_global_const(1153));
#line 1087
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 1087
c_rt_lib0clear(&___nl__12);
#line 1087
c_rt_lib0delete(type_checker_priv0add_error(___ref___6, ___nl__11));
#line 1087
c_rt_lib0clear(&___nl__11);
#line 1088
c_rt_lib0clear(&___nl__0);
#line 1088
c_rt_lib0clear(&___nl__2);
#line 1088
c_rt_lib0clear(&___nl__3);
#line 1088
c_rt_lib0clear(&___nl__7);
#line 1088
c_rt_lib0clear(&___nl__8);
#line 1088
c_rt_lib0clear(&___nl__9);
#line 1088
c_rt_lib0clear(&___nl__10);
#line 1088
return ___nl__1;
#line 1089
goto label_4;
#line 1089
label_4:
#line 1089
c_rt_lib0clear(&___nl__10);
#line 1090
c_rt_lib0move(&___nl__10, hash0get_value(*___ref___5, ___nl__9));
#line 1091
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(1057)));
#line 1091
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(42)));
#line 1091
if(c_rt_lib0check_true_native(___nl__12)){ goto label_6;}
#line 1096
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(43)));
#line 1096
if(c_rt_lib0check_true_native(___nl__12)){ goto label_7;}
#line 1096
c_rt_lib0move(&___nl__12,___get_global_const(76));
#line 1096
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 1096
nl_die_arg(___nl__12);
#line 1091
label_6:
#line 1092
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(73)));
#line 1092
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 1092
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__15, ___get_global_const(40), ___nl__16));
#line 1092
c_rt_lib0clear(&___nl__15);
#line 1092
c_rt_lib0clear(&___nl__16);
#line 1092
c_rt_lib0move(&___nl__13, type_checker_priv0mk_new_type_lval(___nl__8, ___nl__2, ___nl__14, ___nl__3, ___ref___4, ___ref___6));
#line 1092
c_rt_lib0clear(&___nl__14);
#line 1094
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 1094
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(1057), ___nl__15, ___get_global_const(73), ___nl__13));
#line 1094
c_rt_lib0clear(&___nl__15);
#line 1094
c_rt_lib0delete(hash0set_value(___ref___5, ___nl__9, ___nl__14));
#line 1094
c_rt_lib0clear(&___nl__14);
#line 1095
c_rt_lib0clear(&___nl__0);
#line 1095
c_rt_lib0clear(&___nl__1);
#line 1095
c_rt_lib0clear(&___nl__3);
#line 1095
c_rt_lib0clear(&___nl__7);
#line 1095
c_rt_lib0clear(&___nl__8);
#line 1095
c_rt_lib0clear(&___nl__9);
#line 1095
c_rt_lib0clear(&___nl__10);
#line 1095
c_rt_lib0clear(&___nl__11);
#line 1095
c_rt_lib0clear(&___nl__12);
#line 1095
c_rt_lib0clear(&___nl__13);
#line 1095
return ___nl__2;
#line 1095
c_rt_lib0clear(&___nl__13);
#line 1096
goto label_5;
#line 1096
label_7:
#line 1097
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(73)));
#line 1097
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_none(___get_global_const(1019)));
#line 1097
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__14, ___get_global_const(40), ___nl__15));
#line 1097
c_rt_lib0clear(&___nl__14);
#line 1097
c_rt_lib0clear(&___nl__15);
#line 1097
c_rt_lib0delete(type_checker_priv0mk_new_type_lval(___nl__8, ___nl__2, ___nl__13, ___nl__3, ___ref___4, ___ref___6));
#line 1097
c_rt_lib0clear(&___nl__13);
#line 1098
c_rt_lib0clear(&___nl__0);
#line 1098
c_rt_lib0clear(&___nl__2);
#line 1098
c_rt_lib0clear(&___nl__3);
#line 1098
c_rt_lib0clear(&___nl__7);
#line 1098
c_rt_lib0clear(&___nl__8);
#line 1098
c_rt_lib0clear(&___nl__9);
#line 1098
c_rt_lib0clear(&___nl__10);
#line 1098
c_rt_lib0clear(&___nl__11);
#line 1098
c_rt_lib0clear(&___nl__12);
#line 1098
return ___nl__1;
#line 1099
goto label_5;
#line 1099
label_5:
#line 1099
c_rt_lib0clear(&___nl__11);
#line 1099
c_rt_lib0clear(&___nl__12);
#line 1099
c_rt_lib0clear(&___nl__7);
#line 1099
c_rt_lib0clear(&___nl__8);
#line 1099
c_rt_lib0clear(&___nl__9);
#line 1099
c_rt_lib0clear(&___nl__10);
#line 1099
c_rt_lib0clear(&___nl__0);
#line 1099
c_rt_lib0clear(&___nl__1);
#line 1099
c_rt_lib0clear(&___nl__2);
#line 1099
c_rt_lib0clear(&___nl__3);
#line 1099
return NULL;
}

ImmT type_checker_priv0get_type_left_site_equation(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 1104
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 1104
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(223)));
#line 1104
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 1104
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 1104
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 1104
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(223)));
#line 1104
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(405)));
#line 1104
c_rt_lib0move(&___nl__6,___get_global_const(797));
#line 1104
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__6));
#line 1104
c_rt_lib0clear(&___nl__6);
#line 1104
label_3:
#line 1104
c_rt_lib0clear(&___nl__5);
#line 1104
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1104
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 1105
c_rt_lib0copy(&___nl__6, ___nl__0);
#line 1105
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(223)));
#line 1105
c_rt_lib0move(&___nl__5, type_checker_priv0get_type_record_key(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 1105
c_rt_lib0clear(&___nl__6);
#line 1105
c_rt_lib0clear(&___nl__0);
#line 1105
c_rt_lib0clear(&___nl__4);
#line 1105
return ___nl__5;
#line 1105
c_rt_lib0clear(&___nl__5);
#line 1106
goto label_1;
#line 1106
label_2:
#line 1107
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 1107
c_rt_lib0clear(&___nl__0);
#line 1107
c_rt_lib0clear(&___nl__4);
#line 1107
return ___nl__5;
#line 1107
c_rt_lib0clear(&___nl__5);
#line 1108
goto label_1;
#line 1108
label_1:
#line 1108
c_rt_lib0clear(&___nl__4);
#line 1108
c_rt_lib0clear(&___nl__0);
#line 1108
return NULL;
}

ImmT type_checker_priv0get_type_record_key(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 1113
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 1113
c_rt_lib0move(&___nl__4, type_checker_priv0check_val(___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 1113
c_rt_lib0clear(&___nl__5);
#line 1114
c_rt_lib0move(&___nl__5, ptd_system0can_delete(___nl__4, ___ref___1, ___ref___3));
#line 1114
c_rt_lib0copy(&___nl__4, ___nl__5);
#line 1114
c_rt_lib0clear(&___nl__5);
#line 1115
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 1115
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(749)));
#line 1115
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1115
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 1116
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 1116
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(749)));
#line 1117
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 1117
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(802)));
#line 1118
c_rt_lib0move(&___nl__8, hash0has_key(___nl__6, ___nl__7));
#line 1118
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1118
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1118
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 1119
c_rt_lib0move(&___nl__9, type_checker_priv0is_known(___nl__4));
#line 1119
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1119
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 1119
c_rt_lib0move(&___nl__10,___get_global_const(1154));
#line 1119
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__7));
#line 1119
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1119
c_rt_lib0clear(&___nl__10);
#line 1119
goto label_6;
#line 1119
label_6:
#line 1119
c_rt_lib0clear(&___nl__9);
#line 1120
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 1120
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 1120
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__10);
#line 1120
c_rt_lib0clear(&___nl__9);
#line 1120
c_rt_lib0clear(&___nl__10);
#line 1121
c_rt_lib0clear(&___nl__0);
#line 1121
c_rt_lib0clear(&___nl__5);
#line 1121
c_rt_lib0clear(&___nl__6);
#line 1121
c_rt_lib0clear(&___nl__7);
#line 1121
c_rt_lib0clear(&___nl__8);
#line 1121
return ___nl__4;
#line 1122
goto label_4;
#line 1122
label_4:
#line 1122
c_rt_lib0clear(&___nl__8);
#line 1123
c_rt_lib0move(&___nl__8, hash0get_value(___nl__6, ___nl__7));
#line 1123
c_rt_lib0copy(&___nl__9, ___nl__8);
#line 1123
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__9);
#line 1123
c_rt_lib0clear(&___nl__8);
#line 1123
c_rt_lib0clear(&___nl__9);
#line 1124
c_rt_lib0clear(&___nl__0);
#line 1124
c_rt_lib0clear(&___nl__5);
#line 1124
c_rt_lib0clear(&___nl__6);
#line 1124
c_rt_lib0clear(&___nl__7);
#line 1124
return ___nl__4;
#line 1124
c_rt_lib0clear(&___nl__6);
#line 1124
c_rt_lib0clear(&___nl__7);
#line 1125
goto label_2;
#line 1125
label_2:
#line 1125
c_rt_lib0clear(&___nl__5);
#line 1126
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 1126
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(748)));
#line 1126
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1126
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 1127
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 1127
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(748)));
#line 1127
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 1127
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__7);
#line 1127
c_rt_lib0clear(&___nl__6);
#line 1127
c_rt_lib0clear(&___nl__7);
#line 1128
c_rt_lib0clear(&___nl__0);
#line 1128
c_rt_lib0clear(&___nl__5);
#line 1128
return ___nl__4;
#line 1129
goto label_8;
#line 1129
label_8:
#line 1129
c_rt_lib0clear(&___nl__5);
#line 1130
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 1130
c_rt_lib0move(&___nl__6, tct0rec(___nl__7));
#line 1130
c_rt_lib0clear(&___nl__7);
#line 1130
c_rt_lib0move(&___nl__5, ptd_system0is_accepted(___nl__4, ___nl__6, ___ref___1, ___ref___3));
#line 1130
c_rt_lib0clear(&___nl__6);
#line 1130
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1130
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1130
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 1131
c_rt_lib0move(&___nl__6,___get_global_const(1155));
#line 1131
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 1131
c_rt_lib0move(&___nl__7, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 1131
c_rt_lib0clear(&___nl__8);
#line 1131
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1131
c_rt_lib0clear(&___nl__7);
#line 1131
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 1131
c_rt_lib0clear(&___nl__6);
#line 1133
goto label_10;
#line 1133
label_10:
#line 1133
c_rt_lib0clear(&___nl__5);
#line 1134
c_rt_lib0move(&___nl__5, tct0tct_im());
#line 1134
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 1134
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(73), ___nl__6);
#line 1134
c_rt_lib0clear(&___nl__5);
#line 1134
c_rt_lib0clear(&___nl__6);
#line 1135
c_rt_lib0clear(&___nl__0);
#line 1135
return ___nl__4;
#line 1135
c_rt_lib0clear(&___nl__4);
#line 1135
c_rt_lib0clear(&___nl__0);
#line 1135
return NULL;
}

ImmT type_checker_priv0get_type_from_bin_op_and_check(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 1140
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 1141
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 1141
c_rt_lib0move(&___nl__5, type_checker_priv0check_val(___nl__6, ___ref___1, ___ref___2, ___ref___3));
#line 1141
c_rt_lib0clear(&___nl__6);
#line 1142
c_rt_lib0move(&___nl__6,___get_global_const(811));
#line 1142
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 1142
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1142
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 1143
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(73)));
#line 1143
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(751)));
#line 1143
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 1143
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 1144
c_rt_lib0move(&___nl__8,___get_global_const(1156));
#line 1144
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__8));
#line 1144
c_rt_lib0clear(&___nl__8);
#line 1145
c_rt_lib0move(&___nl__9, tct0tct_im());
#line 1145
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 1145
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__9, ___get_global_const(40), ___nl__10));
#line 1145
c_rt_lib0clear(&___nl__9);
#line 1145
c_rt_lib0clear(&___nl__10);
#line 1145
c_rt_lib0clear(&___nl__0);
#line 1145
c_rt_lib0clear(&___nl__4);
#line 1145
c_rt_lib0clear(&___nl__5);
#line 1145
c_rt_lib0clear(&___nl__6);
#line 1145
c_rt_lib0clear(&___nl__7);
#line 1145
return ___nl__8;
#line 1145
c_rt_lib0clear(&___nl__8);
#line 1146
goto label_4;
#line 1146
label_4:
#line 1146
c_rt_lib0clear(&___nl__7);
#line 1147
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(17)));
#line 1147
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 1147
c_rt_lib0clear(&___nl__8);
#line 1148
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 1148
c_rt_lib0move(&___nl__8, type_checker_priv0get_type_left_site_equation(___nl__9, ___ref___1, ___ref___2, ___ref___3));
#line 1148
c_rt_lib0clear(&___nl__9);
#line 1149
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___3, ___get_global_const(17)));
#line 1149
c_rt_lib0move(&___nl__9, array0len(___nl__10));
#line 1149
c_rt_lib0clear(&___nl__10);
#line 1149
c_rt_lib0move(&___nl__9, c_rt_lib0sub_mod(___nl__9, ___nl__7));
#line 1149
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 1149
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__9, ___nl__10));
#line 1149
c_rt_lib0clear(&___nl__10);
#line 1149
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1149
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 1149
c_rt_lib0clear(&___nl__0);
#line 1149
c_rt_lib0clear(&___nl__4);
#line 1149
c_rt_lib0clear(&___nl__5);
#line 1149
c_rt_lib0clear(&___nl__6);
#line 1149
c_rt_lib0clear(&___nl__7);
#line 1149
c_rt_lib0clear(&___nl__9);
#line 1149
return ___nl__8;
#line 1149
goto label_6;
#line 1149
label_6:
#line 1149
c_rt_lib0clear(&___nl__9);
#line 1150
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 1150
c_rt_lib0move(&___nl__9, type_checker_priv0set_type_to_lval(___nl__10, ___nl__8, ___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 1150
c_rt_lib0clear(&___nl__10);
#line 1150
c_rt_lib0clear(&___nl__0);
#line 1150
c_rt_lib0clear(&___nl__4);
#line 1150
c_rt_lib0clear(&___nl__5);
#line 1150
c_rt_lib0clear(&___nl__6);
#line 1150
c_rt_lib0clear(&___nl__7);
#line 1150
c_rt_lib0clear(&___nl__8);
#line 1150
return ___nl__9;
#line 1150
c_rt_lib0clear(&___nl__9);
#line 1150
c_rt_lib0clear(&___nl__7);
#line 1150
c_rt_lib0clear(&___nl__8);
#line 1151
goto label_2;
#line 1151
label_2:
#line 1151
c_rt_lib0clear(&___nl__6);
#line 1152
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 1152
c_rt_lib0move(&___nl__7, type_checker_priv0check_val(___nl__8, ___ref___1, ___ref___2, ___ref___3));
#line 1152
c_rt_lib0clear(&___nl__8);
#line 1152
c_rt_lib0move(&___nl__6, ptd_system0can_delete(___nl__7, ___ref___1, ___ref___3));
#line 1152
c_rt_lib0clear(&___nl__7);
#line 1154
c_rt_lib0move(&___nl__8, tct0tct_im());
#line 1154
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(40)));
#line 1154
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__8, ___get_global_const(40), ___nl__9));
#line 1154
c_rt_lib0clear(&___nl__8);
#line 1154
c_rt_lib0clear(&___nl__9);
#line 1155
c_rt_lib0move(&___nl__8,___get_global_const(797));
#line 1155
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 1155
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1155
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 1156
c_rt_lib0move(&___nl__9, type_checker_priv0get_type_record_key(___nl__0, ___ref___1, ___ref___2, ___ref___3));
#line 1156
c_rt_lib0clear(&___nl__0);
#line 1156
c_rt_lib0clear(&___nl__4);
#line 1156
c_rt_lib0clear(&___nl__5);
#line 1156
c_rt_lib0clear(&___nl__6);
#line 1156
c_rt_lib0clear(&___nl__7);
#line 1156
c_rt_lib0clear(&___nl__8);
#line 1156
return ___nl__9;
#line 1156
c_rt_lib0clear(&___nl__9);
#line 1157
goto label_8;
#line 1157
label_8:
#line 1157
c_rt_lib0clear(&___nl__8);
#line 1158
c_rt_lib0move(&___nl__8,___get_global_const(798));
#line 1158
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 1158
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 1158
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 1159
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1159
c_rt_lib0move(&___nl__10, tct0arr(___nl__11));
#line 1159
c_rt_lib0clear(&___nl__11);
#line 1159
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__6, ___nl__10, ___ref___1, ___ref___3));
#line 1159
c_rt_lib0clear(&___nl__10);
#line 1159
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1159
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1159
if(c_rt_lib0check_true_native(___nl__9)){ goto label_12;}
#line 1160
c_rt_lib0move(&___nl__10,___get_global_const(1157));
#line 1160
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1160
c_rt_lib0clear(&___nl__10);
#line 1161
c_rt_lib0clear(&___nl__0);
#line 1161
c_rt_lib0clear(&___nl__4);
#line 1161
c_rt_lib0clear(&___nl__5);
#line 1161
c_rt_lib0clear(&___nl__6);
#line 1161
c_rt_lib0clear(&___nl__8);
#line 1161
c_rt_lib0clear(&___nl__9);
#line 1161
return ___nl__7;
#line 1162
goto label_12;
#line 1162
label_12:
#line 1162
c_rt_lib0clear(&___nl__9);
#line 1163
c_rt_lib0move(&___nl__10, tct0sim());
#line 1163
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 1163
c_rt_lib0clear(&___nl__10);
#line 1163
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1163
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1163
if(c_rt_lib0check_true_native(___nl__9)){ goto label_14;}
#line 1164
c_rt_lib0move(&___nl__10,___get_global_const(1158));
#line 1164
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1164
c_rt_lib0clear(&___nl__10);
#line 1165
goto label_14;
#line 1165
label_14:
#line 1165
c_rt_lib0clear(&___nl__9);
#line 1166
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(73)));
#line 1166
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(747)));
#line 1166
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1166
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 1166
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(73)));
#line 1166
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(747)));
#line 1166
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 1166
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(73), ___nl__11);
#line 1166
c_rt_lib0clear(&___nl__10);
#line 1166
c_rt_lib0clear(&___nl__11);
#line 1166
goto label_16;
#line 1166
label_16:
#line 1166
c_rt_lib0clear(&___nl__9);
#line 1167
c_rt_lib0clear(&___nl__0);
#line 1167
c_rt_lib0clear(&___nl__4);
#line 1167
c_rt_lib0clear(&___nl__5);
#line 1167
c_rt_lib0clear(&___nl__7);
#line 1167
c_rt_lib0clear(&___nl__8);
#line 1167
return ___nl__6;
#line 1168
goto label_10;
#line 1168
label_10:
#line 1168
c_rt_lib0clear(&___nl__8);
#line 1169
c_rt_lib0move(&___nl__8, tc_types0get_bin_op_def(___nl__4));
#line 1170
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1044)));
#line 1170
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__6, ___nl__10, ___ref___1, ___ref___3));
#line 1170
c_rt_lib0clear(&___nl__10);
#line 1170
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1170
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1170
if(c_rt_lib0check_true_native(___nl__9)){ goto label_18;}
#line 1171
c_rt_lib0move(&___nl__10,___get_global_const(1159));
#line 1171
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__4));
#line 1171
c_rt_lib0move(&___nl__11,___get_global_const(425));
#line 1171
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1171
c_rt_lib0clear(&___nl__11);
#line 1171
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1171
c_rt_lib0clear(&___nl__10);
#line 1172
goto label_18;
#line 1172
label_18:
#line 1172
c_rt_lib0clear(&___nl__9);
#line 1173
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(1045)));
#line 1173
c_rt_lib0move(&___nl__9, ptd_system0is_accepted(___nl__5, ___nl__10, ___ref___1, ___ref___3));
#line 1173
c_rt_lib0clear(&___nl__10);
#line 1173
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1173
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1173
if(c_rt_lib0check_true_native(___nl__9)){ goto label_20;}
#line 1174
c_rt_lib0move(&___nl__10,___get_global_const(1160));
#line 1174
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__4));
#line 1174
c_rt_lib0move(&___nl__11,___get_global_const(425));
#line 1174
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 1174
c_rt_lib0clear(&___nl__11);
#line 1174
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__10));
#line 1174
c_rt_lib0clear(&___nl__10);
#line 1175
goto label_20;
#line 1175
label_20:
#line 1175
c_rt_lib0clear(&___nl__9);
#line 1176
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(295)));
#line 1176
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 1176
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__10, ___get_global_const(40), ___nl__11));
#line 1176
c_rt_lib0clear(&___nl__10);
#line 1176
c_rt_lib0clear(&___nl__11);
#line 1176
c_rt_lib0clear(&___nl__0);
#line 1176
c_rt_lib0clear(&___nl__4);
#line 1176
c_rt_lib0clear(&___nl__5);
#line 1176
c_rt_lib0clear(&___nl__6);
#line 1176
c_rt_lib0clear(&___nl__7);
#line 1176
c_rt_lib0clear(&___nl__8);
#line 1176
return ___nl__9;
#line 1176
c_rt_lib0clear(&___nl__9);
#line 1176
c_rt_lib0clear(&___nl__4);
#line 1176
c_rt_lib0clear(&___nl__5);
#line 1176
c_rt_lib0clear(&___nl__6);
#line 1176
c_rt_lib0clear(&___nl__7);
#line 1176
c_rt_lib0clear(&___nl__8);
#line 1176
c_rt_lib0clear(&___nl__0);
#line 1176
return NULL;
}

ImmT type_checker_priv0get_print_tct_type_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
#line 1180
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(754)));
#line 1180
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 1182
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(746)));
#line 1182
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 1184
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(751)));
#line 1184
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 1186
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(752)));
#line 1186
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 1188
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(750)));
#line 1188
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 1190
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(747)));
#line 1190
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 1192
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(753)));
#line 1192
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 1202
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(749)));
#line 1202
if(c_rt_lib0check_true_native(___nl__1)){ goto label_9;}
#line 1208
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(748)));
#line 1208
if(c_rt_lib0check_true_native(___nl__1)){ goto label_10;}
#line 1208
c_rt_lib0move(&___nl__1,___get_global_const(76));
#line 1208
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 1208
nl_die_arg(___nl__1);
#line 1180
label_2:
#line 1181
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 1181
c_rt_lib0clear(&___nl__0);
#line 1181
c_rt_lib0clear(&___nl__1);
#line 1181
return ___nl__2;
#line 1181
c_rt_lib0clear(&___nl__2);
#line 1182
goto label_1;
#line 1182
label_3:
#line 1183
c_rt_lib0move(&___nl__2,___get_global_const(1161));
#line 1183
c_rt_lib0clear(&___nl__0);
#line 1183
c_rt_lib0clear(&___nl__1);
#line 1183
return ___nl__2;
#line 1183
c_rt_lib0clear(&___nl__2);
#line 1184
goto label_1;
#line 1184
label_4:
#line 1185
c_rt_lib0move(&___nl__2,___get_global_const(1162));
#line 1185
c_rt_lib0clear(&___nl__0);
#line 1185
c_rt_lib0clear(&___nl__1);
#line 1185
return ___nl__2;
#line 1185
c_rt_lib0clear(&___nl__2);
#line 1186
goto label_1;
#line 1186
label_5:
#line 1187
c_rt_lib0move(&___nl__2,___get_global_const(1163));
#line 1187
c_rt_lib0clear(&___nl__0);
#line 1187
c_rt_lib0clear(&___nl__1);
#line 1187
return ___nl__2;
#line 1187
c_rt_lib0clear(&___nl__2);
#line 1188
goto label_1;
#line 1188
label_6:
#line 1188
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(750)));
#line 1189
c_rt_lib0move(&___nl__3,___get_global_const(189));
#line 1189
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 1189
c_rt_lib0clear(&___nl__0);
#line 1189
c_rt_lib0clear(&___nl__1);
#line 1189
c_rt_lib0clear(&___nl__2);
#line 1189
return ___nl__3;
#line 1189
c_rt_lib0clear(&___nl__3);
#line 1189
c_rt_lib0clear(&___nl__2);
#line 1190
goto label_1;
#line 1190
label_7:
#line 1190
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(747)));
#line 1191
c_rt_lib0move(&___nl__3,___get_global_const(1164));
#line 1191
c_rt_lib0move(&___nl__4, type_checker_priv0get_print_tct_type_name(___nl__2));
#line 1191
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1191
c_rt_lib0clear(&___nl__4);
#line 1191
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 1191
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1191
c_rt_lib0clear(&___nl__4);
#line 1191
c_rt_lib0clear(&___nl__0);
#line 1191
c_rt_lib0clear(&___nl__1);
#line 1191
c_rt_lib0clear(&___nl__2);
#line 1191
return ___nl__3;
#line 1191
c_rt_lib0clear(&___nl__3);
#line 1191
c_rt_lib0clear(&___nl__2);
#line 1192
goto label_1;
#line 1192
label_8:
#line 1192
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(753)));
#line 1193
c_rt_lib0move(&___nl__3,___get_global_const(1165));
#line 1194
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__2));
#line 1194
label_13:
#line 1194
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 1194
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 1194
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 1194
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__2, ___nl__4));
#line 1195
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(758)));
#line 1195
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 1197
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(757)));
#line 1197
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 1197
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 1197
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 1197
nl_die_arg(___nl__7);
#line 1195
label_15:
#line 1195
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(758)));
#line 1196
c_rt_lib0move(&___nl__9,___get_global_const(192));
#line 1196
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__4, ___nl__9));
#line 1196
c_rt_lib0move(&___nl__10, type_checker_priv0get_print_tct_type_name(___nl__8));
#line 1196
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1196
c_rt_lib0clear(&___nl__10);
#line 1196
c_rt_lib0move(&___nl__10,___get_global_const(193));
#line 1196
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1196
c_rt_lib0clear(&___nl__10);
#line 1196
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 1196
c_rt_lib0clear(&___nl__9);
#line 1196
c_rt_lib0clear(&___nl__8);
#line 1197
goto label_14;
#line 1197
label_16:
#line 1198
c_rt_lib0move(&___nl__8,___get_global_const(193));
#line 1198
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__4, ___nl__8));
#line 1198
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 1198
c_rt_lib0clear(&___nl__8);
#line 1199
goto label_14;
#line 1199
label_14:
#line 1199
c_rt_lib0clear(&___nl__7);
#line 1200
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 1200
goto label_13;
#line 1200
label_11:
#line 1200
c_rt_lib0clear(&___nl__4);
#line 1200
c_rt_lib0clear(&___nl__5);
#line 1200
c_rt_lib0clear(&___nl__6);
#line 1201
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 1201
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__3, ___nl__4));
#line 1201
c_rt_lib0clear(&___nl__0);
#line 1201
c_rt_lib0clear(&___nl__1);
#line 1201
c_rt_lib0clear(&___nl__2);
#line 1201
c_rt_lib0clear(&___nl__3);
#line 1201
return ___nl__4;
#line 1201
c_rt_lib0clear(&___nl__4);
#line 1201
c_rt_lib0clear(&___nl__3);
#line 1201
c_rt_lib0clear(&___nl__2);
#line 1202
goto label_1;
#line 1202
label_9:
#line 1202
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(749)));
#line 1203
c_rt_lib0move(&___nl__3,___get_global_const(1166));
#line 1204
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__2));
#line 1204
label_19:
#line 1204
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 1204
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 1204
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 1204
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__2, ___nl__4));
#line 1205
c_rt_lib0move(&___nl__7,___get_global_const(192));
#line 1205
c_rt_lib0move(&___nl__7, c_rt_lib0concat_new(___nl__4, ___nl__7));
#line 1205
c_rt_lib0move(&___nl__8, type_checker_priv0get_print_tct_type_name(___nl__5));
#line 1205
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 1205
c_rt_lib0clear(&___nl__8);
#line 1205
c_rt_lib0move(&___nl__8,___get_global_const(193));
#line 1205
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 1205
c_rt_lib0clear(&___nl__8);
#line 1205
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__7));
#line 1205
c_rt_lib0clear(&___nl__7);
#line 1206
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 1206
goto label_19;
#line 1206
label_17:
#line 1206
c_rt_lib0clear(&___nl__4);
#line 1206
c_rt_lib0clear(&___nl__5);
#line 1206
c_rt_lib0clear(&___nl__6);
#line 1207
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 1207
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__3, ___nl__4));
#line 1207
c_rt_lib0clear(&___nl__0);
#line 1207
c_rt_lib0clear(&___nl__1);
#line 1207
c_rt_lib0clear(&___nl__2);
#line 1207
c_rt_lib0clear(&___nl__3);
#line 1207
return ___nl__4;
#line 1207
c_rt_lib0clear(&___nl__4);
#line 1207
c_rt_lib0clear(&___nl__3);
#line 1207
c_rt_lib0clear(&___nl__2);
#line 1208
goto label_1;
#line 1208
label_10:
#line 1208
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(748)));
#line 1209
c_rt_lib0move(&___nl__3,___get_global_const(1167));
#line 1209
c_rt_lib0move(&___nl__4, type_checker_priv0get_print_tct_type_name(___nl__2));
#line 1209
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1209
c_rt_lib0clear(&___nl__4);
#line 1209
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 1209
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 1209
c_rt_lib0clear(&___nl__4);
#line 1209
c_rt_lib0clear(&___nl__0);
#line 1209
c_rt_lib0clear(&___nl__1);
#line 1209
c_rt_lib0clear(&___nl__2);
#line 1209
return ___nl__3;
#line 1209
c_rt_lib0clear(&___nl__3);
#line 1209
c_rt_lib0clear(&___nl__2);
#line 1210
goto label_1;
#line 1210
label_1:
#line 1210
c_rt_lib0clear(&___nl__1);
#line 1210
c_rt_lib0clear(&___nl__0);
#line 1210
return NULL;
}

ImmT type_checker_priv0get_print_tct_label(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 1214
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(754)));
#line 1214
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 1216
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(746)));
#line 1216
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 1218
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(751)));
#line 1218
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 1220
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(752)));
#line 1220
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 1222
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(750)));
#line 1222
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 1224
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(747)));
#line 1224
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 1226
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(753)));
#line 1226
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 1228
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(749)));
#line 1228
if(c_rt_lib0check_true_native(___nl__1)){ goto label_9;}
#line 1230
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(748)));
#line 1230
if(c_rt_lib0check_true_native(___nl__1)){ goto label_10;}
#line 1230
c_rt_lib0move(&___nl__1,___get_global_const(76));
#line 1230
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 1230
nl_die_arg(___nl__1);
#line 1214
label_2:
#line 1215
c_rt_lib0move(&___nl__2,___get_global_const(1168));
#line 1215
c_rt_lib0clear(&___nl__0);
#line 1215
c_rt_lib0clear(&___nl__1);
#line 1215
return ___nl__2;
#line 1215
c_rt_lib0clear(&___nl__2);
#line 1216
goto label_1;
#line 1216
label_3:
#line 1217
c_rt_lib0move(&___nl__2,___get_global_const(714));
#line 1217
c_rt_lib0clear(&___nl__0);
#line 1217
c_rt_lib0clear(&___nl__1);
#line 1217
return ___nl__2;
#line 1217
c_rt_lib0clear(&___nl__2);
#line 1218
goto label_1;
#line 1218
label_4:
#line 1219
c_rt_lib0move(&___nl__2,___get_global_const(1169));
#line 1219
c_rt_lib0clear(&___nl__0);
#line 1219
c_rt_lib0clear(&___nl__1);
#line 1219
return ___nl__2;
#line 1219
c_rt_lib0clear(&___nl__2);
#line 1220
goto label_1;
#line 1220
label_5:
#line 1221
c_rt_lib0move(&___nl__2,___get_global_const(709));
#line 1221
c_rt_lib0clear(&___nl__0);
#line 1221
c_rt_lib0clear(&___nl__1);
#line 1221
return ___nl__2;
#line 1221
c_rt_lib0clear(&___nl__2);
#line 1222
goto label_1;
#line 1222
label_6:
#line 1222
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(750)));
#line 1223
c_rt_lib0move(&___nl__3,___get_global_const(1170));
#line 1223
c_rt_lib0clear(&___nl__0);
#line 1223
c_rt_lib0clear(&___nl__1);
#line 1223
c_rt_lib0clear(&___nl__2);
#line 1223
return ___nl__3;
#line 1223
c_rt_lib0clear(&___nl__3);
#line 1223
c_rt_lib0clear(&___nl__2);
#line 1224
goto label_1;
#line 1224
label_7:
#line 1224
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(747)));
#line 1225
c_rt_lib0move(&___nl__3,___get_global_const(711));
#line 1225
c_rt_lib0clear(&___nl__0);
#line 1225
c_rt_lib0clear(&___nl__1);
#line 1225
c_rt_lib0clear(&___nl__2);
#line 1225
return ___nl__3;
#line 1225
c_rt_lib0clear(&___nl__3);
#line 1225
c_rt_lib0clear(&___nl__2);
#line 1226
goto label_1;
#line 1226
label_8:
#line 1226
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(753)));
#line 1227
c_rt_lib0move(&___nl__3,___get_global_const(713));
#line 1227
c_rt_lib0clear(&___nl__0);
#line 1227
c_rt_lib0clear(&___nl__1);
#line 1227
c_rt_lib0clear(&___nl__2);
#line 1227
return ___nl__3;
#line 1227
c_rt_lib0clear(&___nl__3);
#line 1227
c_rt_lib0clear(&___nl__2);
#line 1228
goto label_1;
#line 1228
label_9:
#line 1228
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(749)));
#line 1229
c_rt_lib0move(&___nl__3,___get_global_const(1171));
#line 1229
c_rt_lib0clear(&___nl__0);
#line 1229
c_rt_lib0clear(&___nl__1);
#line 1229
c_rt_lib0clear(&___nl__2);
#line 1229
return ___nl__3;
#line 1229
c_rt_lib0clear(&___nl__3);
#line 1229
c_rt_lib0clear(&___nl__2);
#line 1230
goto label_1;
#line 1230
label_10:
#line 1230
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(748)));
#line 1231
c_rt_lib0move(&___nl__3,___get_global_const(710));
#line 1231
c_rt_lib0clear(&___nl__0);
#line 1231
c_rt_lib0clear(&___nl__1);
#line 1231
c_rt_lib0clear(&___nl__2);
#line 1231
return ___nl__3;
#line 1231
c_rt_lib0clear(&___nl__3);
#line 1231
c_rt_lib0clear(&___nl__2);
#line 1232
goto label_1;
#line 1232
label_1:
#line 1232
c_rt_lib0clear(&___nl__1);
#line 1232
c_rt_lib0clear(&___nl__0);
#line 1232
return NULL;
}

ImmT type_checker_priv0get_print_check_info(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
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
#line 1236
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(45)));
#line 1236
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 1238
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(44)));
#line 1238
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 1238
c_rt_lib0move(&___nl__1,___get_global_const(76));
#line 1238
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 1238
nl_die_arg(___nl__1);
#line 1236
label_2:
#line 1237
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 1237
nl_die_arg(___nl__2);
#line 1237
c_rt_lib0clear(&___nl__2);
#line 1238
goto label_1;
#line 1238
label_3:
#line 1238
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(44)));
#line 1239
c_rt_lib0move(&___nl__3,___get_global_const(607));
#line 1240
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(638)));
#line 1240
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 1240
c_rt_lib0clear(&___nl__5);
#line 1240
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 1240
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__5));
#line 1240
c_rt_lib0clear(&___nl__5);
#line 1240
label_5:
#line 1240
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 1240
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__4, ___nl__5));
#line 1240
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1240
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 1241
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(638)));
#line 1241
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__4));
#line 1241
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(965)));
#line 1241
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 1243
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(972)));
#line 1243
if(c_rt_lib0check_true_native(___nl__7)){ goto label_9;}
#line 1245
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(966)));
#line 1245
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 1247
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(970)));
#line 1247
if(c_rt_lib0check_true_native(___nl__7)){ goto label_11;}
#line 1247
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 1247
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 1247
nl_die_arg(___nl__7);
#line 1241
label_8:
#line 1242
c_rt_lib0move(&___nl__8,___get_global_const(711));
#line 1242
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 1242
c_rt_lib0clear(&___nl__8);
#line 1243
goto label_7;
#line 1243
label_9:
#line 1243
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(972)));
#line 1244
c_rt_lib0move(&___nl__9,___get_global_const(1165));
#line 1244
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 1244
c_rt_lib0move(&___nl__10,___get_global_const(181));
#line 1244
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1244
c_rt_lib0clear(&___nl__10);
#line 1244
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 1244
c_rt_lib0clear(&___nl__9);
#line 1244
c_rt_lib0clear(&___nl__8);
#line 1245
goto label_7;
#line 1245
label_10:
#line 1245
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(966)));
#line 1246
c_rt_lib0move(&___nl__9,___get_global_const(1166));
#line 1246
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 1246
c_rt_lib0move(&___nl__10,___get_global_const(181));
#line 1246
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1246
c_rt_lib0clear(&___nl__10);
#line 1246
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 1246
c_rt_lib0clear(&___nl__9);
#line 1246
c_rt_lib0clear(&___nl__8);
#line 1247
goto label_7;
#line 1247
label_11:
#line 1248
c_rt_lib0move(&___nl__8,___get_global_const(710));
#line 1248
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 1248
c_rt_lib0clear(&___nl__8);
#line 1249
goto label_7;
#line 1249
label_7:
#line 1249
c_rt_lib0clear(&___nl__6);
#line 1249
c_rt_lib0clear(&___nl__7);
#line 1250
c_rt_lib0move(&___nl__6,___get_global_const(797));
#line 1250
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 1250
c_rt_lib0clear(&___nl__6);
#line 1250
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 1250
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__6));
#line 1250
c_rt_lib0clear(&___nl__6);
#line 1251
goto label_5;
#line 1251
label_4:
#line 1251
c_rt_lib0clear(&___nl__4);
#line 1251
c_rt_lib0clear(&___nl__5);
#line 1252
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(202)));
#line 1252
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(749)));
#line 1252
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 1252
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 1252
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1252
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(749)));
#line 1252
label_14:
#line 1252
c_rt_lib0clear(&___nl__5);
#line 1252
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1252
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 1253
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(202)));
#line 1253
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(749)));
#line 1253
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 1253
label_17:
#line 1253
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 1253
if(c_rt_lib0check_true_native(___nl__6)){ goto label_15;}
#line 1253
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 1253
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 1254
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1254
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(749)));
#line 1254
c_rt_lib0move(&___nl__9, hash0has_key(___nl__10, ___nl__6));
#line 1254
c_rt_lib0clear(&___nl__10);
#line 1254
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1254
if(c_rt_lib0check_true_native(___nl__9)){ goto label_19;}
#line 1254
c_rt_lib0clear(&___nl__9);
#line 1254
goto label_16;
#line 1254
goto label_19;
#line 1254
label_19:
#line 1254
c_rt_lib0clear(&___nl__9);
#line 1255
c_rt_lib0move(&___nl__9,___get_global_const(1172));
#line 1255
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 1255
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1255
c_rt_lib0move(&___nl__10,___get_global_const(1173));
#line 1255
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1255
c_rt_lib0clear(&___nl__10);
#line 1255
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1255
c_rt_lib0move(&___nl__10,___get_global_const(1174));
#line 1255
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1255
c_rt_lib0clear(&___nl__10);
#line 1255
c_rt_lib0clear(&___nl__0);
#line 1255
c_rt_lib0clear(&___nl__1);
#line 1255
c_rt_lib0clear(&___nl__2);
#line 1255
c_rt_lib0clear(&___nl__3);
#line 1255
c_rt_lib0clear(&___nl__4);
#line 1255
c_rt_lib0clear(&___nl__5);
#line 1255
c_rt_lib0clear(&___nl__6);
#line 1255
c_rt_lib0clear(&___nl__7);
#line 1255
c_rt_lib0clear(&___nl__8);
#line 1255
return ___nl__9;
#line 1255
c_rt_lib0clear(&___nl__9);
#line 1255
label_16:
#line 1257
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 1257
goto label_17;
#line 1257
label_15:
#line 1257
c_rt_lib0clear(&___nl__5);
#line 1257
c_rt_lib0clear(&___nl__6);
#line 1257
c_rt_lib0clear(&___nl__7);
#line 1257
c_rt_lib0clear(&___nl__8);
#line 1258
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1258
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(749)));
#line 1258
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 1258
label_22:
#line 1258
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 1258
if(c_rt_lib0check_true_native(___nl__6)){ goto label_20;}
#line 1258
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 1258
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 1259
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(202)));
#line 1259
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(749)));
#line 1259
c_rt_lib0move(&___nl__9, hash0has_key(___nl__10, ___nl__6));
#line 1259
c_rt_lib0clear(&___nl__10);
#line 1259
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 1259
if(c_rt_lib0check_true_native(___nl__9)){ goto label_24;}
#line 1259
c_rt_lib0clear(&___nl__9);
#line 1259
goto label_21;
#line 1259
goto label_24;
#line 1259
label_24:
#line 1259
c_rt_lib0clear(&___nl__9);
#line 1260
c_rt_lib0move(&___nl__9,___get_global_const(1175));
#line 1260
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 1260
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1260
c_rt_lib0move(&___nl__10,___get_global_const(1176));
#line 1260
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1260
c_rt_lib0clear(&___nl__10);
#line 1260
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 1260
c_rt_lib0move(&___nl__10,___get_global_const(1174));
#line 1260
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 1260
c_rt_lib0clear(&___nl__10);
#line 1260
c_rt_lib0clear(&___nl__0);
#line 1260
c_rt_lib0clear(&___nl__1);
#line 1260
c_rt_lib0clear(&___nl__2);
#line 1260
c_rt_lib0clear(&___nl__3);
#line 1260
c_rt_lib0clear(&___nl__4);
#line 1260
c_rt_lib0clear(&___nl__5);
#line 1260
c_rt_lib0clear(&___nl__6);
#line 1260
c_rt_lib0clear(&___nl__7);
#line 1260
c_rt_lib0clear(&___nl__8);
#line 1260
return ___nl__9;
#line 1260
c_rt_lib0clear(&___nl__9);
#line 1260
label_21:
#line 1262
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 1262
goto label_22;
#line 1262
label_20:
#line 1262
c_rt_lib0clear(&___nl__5);
#line 1262
c_rt_lib0clear(&___nl__6);
#line 1262
c_rt_lib0clear(&___nl__7);
#line 1262
c_rt_lib0clear(&___nl__8);
#line 1263
goto label_12;
#line 1263
label_13:
#line 1263
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(202)));
#line 1263
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(753)));
#line 1263
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 1263
if(c_rt_lib0check_true_native(___nl__5)){ goto label_26;}
#line 1263
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1263
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(753)));
#line 1263
label_26:
#line 1263
c_rt_lib0clear(&___nl__5);
#line 1263
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1263
if(c_rt_lib0check_true_native(___nl__4)){ goto label_25;}
#line 1264
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(202)));
#line 1264
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(753)));
#line 1264
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__5));
#line 1264
label_29:
#line 1264
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 1264
if(c_rt_lib0check_true_native(___nl__6)){ goto label_27;}
#line 1264
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 1264
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__5, ___nl__6));
#line 1265
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1265
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(753)));
#line 1266
c_rt_lib0move(&___nl__10, hash0has_key(___nl__9, ___nl__6));
#line 1266
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1266
if(c_rt_lib0check_true_native(___nl__10)){ goto label_31;}
#line 1267
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__7, ___get_global_const(757)));
#line 1267
if(c_rt_lib0check_true_native(___nl__11)){ goto label_33;}
#line 1272
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__7, ___get_global_const(758)));
#line 1272
if(c_rt_lib0check_true_native(___nl__11)){ goto label_34;}
#line 1272
c_rt_lib0move(&___nl__11,___get_global_const(76));
#line 1272
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__7));
#line 1272
nl_die_arg(___nl__11);
#line 1267
label_33:
#line 1268
c_rt_lib0move(&___nl__12, hash0get_value(___nl__9, ___nl__6));
#line 1268
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(758)));
#line 1268
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1268
if(c_rt_lib0check_true_native(___nl__12)){ goto label_36;}
#line 1269
c_rt_lib0move(&___nl__13,___get_global_const(1177));
#line 1269
c_rt_lib0move(&___nl__13, c_rt_lib0concat_new(___nl__3, ___nl__13));
#line 1269
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__6));
#line 1269
c_rt_lib0move(&___nl__14,___get_global_const(1178));
#line 1269
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 1269
c_rt_lib0clear(&___nl__14);
#line 1269
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__6));
#line 1269
c_rt_lib0move(&___nl__14,___get_global_const(1179));
#line 1269
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 1269
c_rt_lib0clear(&___nl__14);
#line 1269
c_rt_lib0clear(&___nl__0);
#line 1269
c_rt_lib0clear(&___nl__1);
#line 1269
c_rt_lib0clear(&___nl__2);
#line 1269
c_rt_lib0clear(&___nl__3);
#line 1269
c_rt_lib0clear(&___nl__4);
#line 1269
c_rt_lib0clear(&___nl__5);
#line 1269
c_rt_lib0clear(&___nl__6);
#line 1269
c_rt_lib0clear(&___nl__7);
#line 1269
c_rt_lib0clear(&___nl__8);
#line 1269
c_rt_lib0clear(&___nl__9);
#line 1269
c_rt_lib0clear(&___nl__10);
#line 1269
c_rt_lib0clear(&___nl__11);
#line 1269
c_rt_lib0clear(&___nl__12);
#line 1269
return ___nl__13;
#line 1269
c_rt_lib0clear(&___nl__13);
#line 1271
goto label_36;
#line 1271
label_36:
#line 1271
c_rt_lib0clear(&___nl__12);
#line 1272
goto label_32;
#line 1272
label_34:
#line 1272
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__7, ___get_global_const(758)));
#line 1273
c_rt_lib0move(&___nl__13, hash0get_value(___nl__9, ___nl__6));
#line 1273
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(757)));
#line 1273
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 1273
if(c_rt_lib0check_true_native(___nl__13)){ goto label_38;}
#line 1274
c_rt_lib0move(&___nl__14,___get_global_const(1177));
#line 1274
c_rt_lib0move(&___nl__14, c_rt_lib0concat_new(___nl__3, ___nl__14));
#line 1274
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__6));
#line 1274
c_rt_lib0move(&___nl__15,___get_global_const(1180));
#line 1274
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 1274
c_rt_lib0clear(&___nl__15);
#line 1274
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__6));
#line 1274
c_rt_lib0move(&___nl__15,___get_global_const(1181));
#line 1274
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 1274
c_rt_lib0clear(&___nl__15);
#line 1274
c_rt_lib0clear(&___nl__0);
#line 1274
c_rt_lib0clear(&___nl__1);
#line 1274
c_rt_lib0clear(&___nl__2);
#line 1274
c_rt_lib0clear(&___nl__3);
#line 1274
c_rt_lib0clear(&___nl__4);
#line 1274
c_rt_lib0clear(&___nl__5);
#line 1274
c_rt_lib0clear(&___nl__6);
#line 1274
c_rt_lib0clear(&___nl__7);
#line 1274
c_rt_lib0clear(&___nl__8);
#line 1274
c_rt_lib0clear(&___nl__9);
#line 1274
c_rt_lib0clear(&___nl__10);
#line 1274
c_rt_lib0clear(&___nl__11);
#line 1274
c_rt_lib0clear(&___nl__12);
#line 1274
c_rt_lib0clear(&___nl__13);
#line 1274
return ___nl__14;
#line 1274
c_rt_lib0clear(&___nl__14);
#line 1276
goto label_38;
#line 1276
label_38:
#line 1276
c_rt_lib0clear(&___nl__13);
#line 1276
c_rt_lib0clear(&___nl__12);
#line 1277
goto label_32;
#line 1277
label_32:
#line 1277
c_rt_lib0clear(&___nl__11);
#line 1278
goto label_30;
#line 1278
label_31:
#line 1279
c_rt_lib0move(&___nl__11,___get_global_const(1182));
#line 1279
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__3, ___nl__11));
#line 1279
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__6));
#line 1279
c_rt_lib0move(&___nl__12,___get_global_const(1183));
#line 1279
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 1279
c_rt_lib0clear(&___nl__12);
#line 1279
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__6));
#line 1279
c_rt_lib0move(&___nl__12,___get_global_const(1174));
#line 1279
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 1279
c_rt_lib0clear(&___nl__12);
#line 1279
c_rt_lib0clear(&___nl__0);
#line 1279
c_rt_lib0clear(&___nl__1);
#line 1279
c_rt_lib0clear(&___nl__2);
#line 1279
c_rt_lib0clear(&___nl__3);
#line 1279
c_rt_lib0clear(&___nl__4);
#line 1279
c_rt_lib0clear(&___nl__5);
#line 1279
c_rt_lib0clear(&___nl__6);
#line 1279
c_rt_lib0clear(&___nl__7);
#line 1279
c_rt_lib0clear(&___nl__8);
#line 1279
c_rt_lib0clear(&___nl__9);
#line 1279
c_rt_lib0clear(&___nl__10);
#line 1279
return ___nl__11;
#line 1279
c_rt_lib0clear(&___nl__11);
#line 1281
goto label_30;
#line 1281
label_30:
#line 1281
c_rt_lib0clear(&___nl__10);
#line 1281
c_rt_lib0clear(&___nl__9);
#line 1282
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 1282
goto label_29;
#line 1282
label_27:
#line 1282
c_rt_lib0clear(&___nl__5);
#line 1282
c_rt_lib0clear(&___nl__6);
#line 1282
c_rt_lib0clear(&___nl__7);
#line 1282
c_rt_lib0clear(&___nl__8);
#line 1283
goto label_12;
#line 1283
label_25:
#line 1284
c_rt_lib0move(&___nl__5,___get_global_const(326));
#line 1284
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(202)));
#line 1284
c_rt_lib0move(&___nl__6, type_checker_priv0get_print_tct_label(___nl__7));
#line 1284
c_rt_lib0clear(&___nl__7);
#line 1284
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1284
c_rt_lib0clear(&___nl__6);
#line 1284
c_rt_lib0move(&___nl__6,___get_global_const(1184));
#line 1284
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1284
c_rt_lib0clear(&___nl__6);
#line 1284
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(203)));
#line 1284
c_rt_lib0move(&___nl__6, type_checker_priv0get_print_tct_label(___nl__7));
#line 1284
c_rt_lib0clear(&___nl__7);
#line 1284
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1284
c_rt_lib0clear(&___nl__6);
#line 1284
c_rt_lib0move(&___nl__6,___get_global_const(181));
#line 1284
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1284
c_rt_lib0clear(&___nl__6);
#line 1284
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__5));
#line 1284
c_rt_lib0clear(&___nl__5);
#line 1285
goto label_12;
#line 1285
label_12:
#line 1285
c_rt_lib0clear(&___nl__4);
#line 1286
c_rt_lib0clear(&___nl__0);
#line 1286
c_rt_lib0clear(&___nl__1);
#line 1286
c_rt_lib0clear(&___nl__2);
#line 1286
return ___nl__3;
#line 1286
c_rt_lib0clear(&___nl__3);
#line 1286
c_rt_lib0clear(&___nl__2);
#line 1287
goto label_1;
#line 1287
label_1:
#line 1287
c_rt_lib0clear(&___nl__1);
#line 1287
c_rt_lib0clear(&___nl__0);
#line 1287
return NULL;
}

ImmT type_checker_priv0check_var_decl(ImmT ___nl__0,ImmT * ___ref___1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1292
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 1292
c_rt_lib0move(&___nl__4, type_checker_priv0check_var_decl_try(___nl__0, ___nl__5, ___ref___1, ___ref___2, ___ref___3));
#line 1292
c_rt_lib0clear(&___nl__5);
#line 1292
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(45)));
#line 1292
c_rt_lib0clear(&___nl__0);
#line 1292
return ___nl__4;
#line 1292
c_rt_lib0clear(&___nl__4);
#line 1292
c_rt_lib0clear(&___nl__0);
#line 1292
return NULL;
}

ImmT type_checker_priv0check_var_decl_try(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
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
#line 1297
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 1297
c_rt_lib0move(&___nl__5, hash0has_key(*___ref___3, ___nl__6));
#line 1297
c_rt_lib0clear(&___nl__6);
#line 1297
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1297
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 1297
c_rt_lib0move(&___nl__6,___get_global_const(1185));
#line 1297
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 1297
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1297
c_rt_lib0clear(&___nl__7);
#line 1297
c_rt_lib0move(&___nl__7,___get_global_const(1186));
#line 1297
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1297
c_rt_lib0clear(&___nl__7);
#line 1297
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__6));
#line 1297
c_rt_lib0clear(&___nl__6);
#line 1297
goto label_2;
#line 1297
label_2:
#line 1297
c_rt_lib0clear(&___nl__5);
#line 1298
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 1298
c_rt_lib0move(&___nl__8, tct0empty());
#line 1298
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(1057), ___nl__7, ___get_global_const(73), ___nl__8));
#line 1298
c_rt_lib0clear(&___nl__7);
#line 1298
c_rt_lib0clear(&___nl__8);
#line 1298
c_rt_lib0move(&___nl__8, tct0empty());
#line 1298
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(1025)));
#line 1298
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__8, ___get_global_const(40), ___nl__9));
#line 1298
c_rt_lib0clear(&___nl__8);
#line 1298
c_rt_lib0clear(&___nl__9);
#line 1298
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__6, ___get_global_const(44), ___nl__7));
#line 1298
c_rt_lib0clear(&___nl__6);
#line 1298
c_rt_lib0clear(&___nl__7);
#line 1302
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 1302
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(73)));
#line 1302
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 1311
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(38)));
#line 1311
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 1311
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 1311
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 1311
nl_die_arg(___nl__7);
#line 1302
label_4:
#line 1302
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(73)));
#line 1303
c_rt_lib0move(&___nl__9, ptd_parser0try_value_to_ptd(___nl__8));
#line 1303
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(44)));
#line 1303
if(c_rt_lib0check_true_native(___nl__10)){ goto label_7;}
#line 1306
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(45)));
#line 1306
if(c_rt_lib0check_true_native(___nl__10)){ goto label_8;}
#line 1306
c_rt_lib0move(&___nl__10,___get_global_const(76));
#line 1306
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 1306
nl_die_arg(___nl__10);
#line 1303
label_7:
#line 1303
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(44)));
#line 1304
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__11));
#line 1305
c_rt_lib0move(&___nl__12, tct0tct_im());
#line 1305
c_rt_lib0move(&___nl__13,___get_global_const(45));
#line 1305
c_rt_lib0move(&___nl__13, c_rt_lib0get_ref_hash(___nl__5, ___nl__13));
#line 1305
c_rt_lib0copy(&___nl__14, ___nl__12);
#line 1305
c_rt_lib0hash_set_value_dec(&___nl__13, ___get_global_const(73), ___nl__14);
#line 1305
c_rt_lib0move(&___nl__15,___get_global_const(45));
#line 1305
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__15, ___nl__13));
#line 1305
c_rt_lib0clear(&___nl__15);
#line 1305
c_rt_lib0clear(&___nl__12);
#line 1305
c_rt_lib0clear(&___nl__13);
#line 1305
c_rt_lib0clear(&___nl__14);
#line 1305
c_rt_lib0clear(&___nl__11);
#line 1306
goto label_6;
#line 1306
label_8:
#line 1306
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(45)));
#line 1307
c_rt_lib0move(&___nl__12,___get_global_const(45));
#line 1307
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(___nl__5, ___nl__12));
#line 1307
c_rt_lib0copy(&___nl__13, ___nl__11);
#line 1307
c_rt_lib0hash_set_value_dec(&___nl__12, ___get_global_const(73), ___nl__13);
#line 1307
c_rt_lib0move(&___nl__14,___get_global_const(45));
#line 1307
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__14, ___nl__12));
#line 1307
c_rt_lib0clear(&___nl__14);
#line 1307
c_rt_lib0clear(&___nl__12);
#line 1307
c_rt_lib0clear(&___nl__13);
#line 1308
c_rt_lib0delete(type_checker_priv0check_types_imported(___nl__11, ___ref___2, ___ref___4));
#line 1308
c_rt_lib0clear(&___nl__11);
#line 1309
goto label_6;
#line 1309
label_6:
#line 1309
c_rt_lib0clear(&___nl__9);
#line 1309
c_rt_lib0clear(&___nl__10);
#line 1310
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(43)));
#line 1310
c_rt_lib0move(&___nl__10,___get_global_const(45));
#line 1310
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__5, ___nl__10));
#line 1310
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 1310
c_rt_lib0hash_set_value_dec(&___nl__10, ___get_global_const(1057), ___nl__11);
#line 1310
c_rt_lib0move(&___nl__12,___get_global_const(45));
#line 1310
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__12, ___nl__10));
#line 1310
c_rt_lib0clear(&___nl__12);
#line 1310
c_rt_lib0clear(&___nl__9);
#line 1310
c_rt_lib0clear(&___nl__10);
#line 1310
c_rt_lib0clear(&___nl__11);
#line 1310
c_rt_lib0clear(&___nl__8);
#line 1311
goto label_3;
#line 1311
label_5:
#line 1312
goto label_3;
#line 1312
label_3:
#line 1312
c_rt_lib0clear(&___nl__6);
#line 1312
c_rt_lib0clear(&___nl__7);
#line 1313
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(650)));
#line 1313
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(650)));
#line 1313
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 1333
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(38)));
#line 1333
if(c_rt_lib0check_true_native(___nl__7)){ goto label_11;}
#line 1333
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 1333
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 1333
nl_die_arg(___nl__7);
#line 1313
label_10:
#line 1313
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(650)));
#line 1314
c_rt_lib0move(&___nl__9, type_checker_priv0check_val(___nl__8, ___ref___2, ___ref___3, ___ref___4));
#line 1315
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 1315
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(751)));
#line 1315
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1315
if(c_rt_lib0check_true_native(___nl__10)){ goto label_13;}
#line 1316
c_rt_lib0move(&___nl__11,___get_global_const(1156));
#line 1316
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__11));
#line 1316
c_rt_lib0clear(&___nl__11);
#line 1317
c_rt_lib0clear(&___nl__0);
#line 1317
c_rt_lib0clear(&___nl__1);
#line 1317
c_rt_lib0clear(&___nl__6);
#line 1317
c_rt_lib0clear(&___nl__7);
#line 1317
c_rt_lib0clear(&___nl__8);
#line 1317
c_rt_lib0clear(&___nl__9);
#line 1317
c_rt_lib0clear(&___nl__10);
#line 1317
return ___nl__5;
#line 1318
goto label_13;
#line 1318
label_13:
#line 1318
c_rt_lib0clear(&___nl__10);
#line 1319
c_rt_lib0copy(&___nl__10, ___nl__1);
#line 1319
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1319
if(c_rt_lib0check_true_native(___nl__10)){ goto label_15;}
#line 1320
c_rt_lib0move(&___nl__11, ptd_system0try_get_ensure_sub_types(___nl__9, ___ref___2, ___ref___4));
#line 1321
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(44)));
#line 1321
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(40)));
#line 1321
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__13, ___get_global_const(40), ___nl__14));
#line 1321
c_rt_lib0clear(&___nl__13);
#line 1321
c_rt_lib0clear(&___nl__14);
#line 1321
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 1321
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(44), ___nl__13);
#line 1321
c_rt_lib0clear(&___nl__12);
#line 1321
c_rt_lib0clear(&___nl__13);
#line 1322
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(45)));
#line 1322
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 1322
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(73), ___nl__13);
#line 1322
c_rt_lib0clear(&___nl__12);
#line 1322
c_rt_lib0clear(&___nl__13);
#line 1322
c_rt_lib0clear(&___nl__11);
#line 1323
goto label_15;
#line 1323
label_15:
#line 1323
c_rt_lib0clear(&___nl__10);
#line 1324
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(45)));
#line 1324
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(73)));
#line 1324
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__10, ___get_global_const(754)));
#line 1324
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 1324
if(c_rt_lib0check_true_native(___nl__10)){ goto label_17;}
#line 1325
c_rt_lib0move(&___nl__11, tct0tct_im());
#line 1325
c_rt_lib0delete(ptd_system0check_assignment(___nl__11, ___nl__9, ___ref___2, ___ref___4));
#line 1325
c_rt_lib0clear(&___nl__11);
#line 1326
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 1326
c_rt_lib0move(&___nl__12,___get_global_const(45));
#line 1326
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(___nl__5, ___nl__12));
#line 1326
c_rt_lib0copy(&___nl__13, ___nl__11);
#line 1326
c_rt_lib0hash_set_value_dec(&___nl__12, ___get_global_const(73), ___nl__13);
#line 1326
c_rt_lib0move(&___nl__14,___get_global_const(45));
#line 1326
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__14, ___nl__12));
#line 1326
c_rt_lib0clear(&___nl__14);
#line 1326
c_rt_lib0clear(&___nl__11);
#line 1326
c_rt_lib0clear(&___nl__12);
#line 1326
c_rt_lib0clear(&___nl__13);
#line 1327
goto label_16;
#line 1327
label_17:
#line 1328
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(45)));
#line 1328
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(73)));
#line 1328
c_rt_lib0move(&___nl__11, ptd_system0check_assignment(___nl__12, ___nl__9, ___ref___2, ___ref___4));
#line 1328
c_rt_lib0clear(&___nl__12);
#line 1329
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 1329
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(44)));
#line 1329
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 1329
if(c_rt_lib0check_true_native(___nl__12)){ goto label_19;}
#line 1330
c_rt_lib0move(&___nl__13,___get_global_const(1187));
#line 1330
c_rt_lib0move(&___nl__14, type_checker_priv0get_print_check_info(___nl__11));
#line 1330
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 1330
c_rt_lib0clear(&___nl__14);
#line 1330
c_rt_lib0delete(type_checker_priv0add_error(___ref___4, ___nl__13));
#line 1330
c_rt_lib0clear(&___nl__13);
#line 1331
goto label_19;
#line 1331
label_19:
#line 1331
c_rt_lib0clear(&___nl__12);
#line 1331
c_rt_lib0clear(&___nl__11);
#line 1332
goto label_16;
#line 1332
label_16:
#line 1332
c_rt_lib0clear(&___nl__10);
#line 1332
c_rt_lib0clear(&___nl__9);
#line 1332
c_rt_lib0clear(&___nl__8);
#line 1333
goto label_9;
#line 1333
label_11:
#line 1334
goto label_9;
#line 1334
label_9:
#line 1334
c_rt_lib0clear(&___nl__6);
#line 1334
c_rt_lib0clear(&___nl__7);
#line 1335
c_rt_lib0clear(&___nl__0);
#line 1335
c_rt_lib0clear(&___nl__1);
#line 1335
return ___nl__5;
#line 1335
c_rt_lib0clear(&___nl__5);
#line 1335
c_rt_lib0clear(&___nl__0);
#line 1335
c_rt_lib0clear(&___nl__1);
#line 1335
return NULL;
}

ImmT type_checker_priv0add_var_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
#line 1339
c_rt_lib0delete(hash0set_value(___ref___2, ___nl__1, ___nl__0));
#line 1339
c_rt_lib0clear(&___nl__0);
#line 1339
c_rt_lib0clear(&___nl__1);
#line 1339
return NULL;
}

ImmT type_checker_priv0add_var_decl_to_vars(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 1343
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 1343
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(746)));
#line 1343
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 1343
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 1343
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(754)));
#line 1343
label_3:
#line 1343
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 1343
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 1344
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 1344
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(1057), ___nl__5, ___get_global_const(73), ___nl__0));
#line 1344
c_rt_lib0clear(&___nl__5);
#line 1344
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__4, ___nl__1, ___ref___2));
#line 1344
c_rt_lib0clear(&___nl__4);
#line 1345
goto label_1;
#line 1345
label_2:
#line 1346
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(43)));
#line 1346
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(1057), ___nl__5, ___get_global_const(73), ___nl__0));
#line 1346
c_rt_lib0clear(&___nl__5);
#line 1346
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__4, ___nl__1, ___ref___2));
#line 1346
c_rt_lib0clear(&___nl__4);
#line 1347
goto label_1;
#line 1347
label_1:
#line 1347
c_rt_lib0clear(&___nl__3);
#line 1347
c_rt_lib0clear(&___nl__0);
#line 1347
c_rt_lib0clear(&___nl__1);
#line 1347
return NULL;
}

ImmT type_checker_priv0add_var_decl_with_type_and_check(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1352
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 1352
c_rt_lib0move(&___nl__4, hash0has_key(*___ref___2, ___nl__5));
#line 1352
c_rt_lib0clear(&___nl__5);
#line 1352
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1352
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 1352
c_rt_lib0move(&___nl__5,___get_global_const(1116));
#line 1352
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 1352
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1352
c_rt_lib0clear(&___nl__6);
#line 1352
c_rt_lib0move(&___nl__6,___get_global_const(1186));
#line 1352
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 1352
c_rt_lib0clear(&___nl__6);
#line 1352
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__5));
#line 1352
c_rt_lib0clear(&___nl__5);
#line 1352
goto label_2;
#line 1352
label_2:
#line 1352
c_rt_lib0clear(&___nl__4);
#line 1353
c_rt_lib0move(&___nl__4, type_checker_priv0is_known(___nl__1));
#line 1353
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 1353
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 1354
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(43)));
#line 1354
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 1354
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1057), ___nl__6, ___get_global_const(73), ___nl__7));
#line 1354
c_rt_lib0clear(&___nl__6);
#line 1354
c_rt_lib0clear(&___nl__7);
#line 1354
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 1354
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__5, ___nl__6, ___ref___2));
#line 1354
c_rt_lib0clear(&___nl__6);
#line 1354
c_rt_lib0clear(&___nl__5);
#line 1355
goto label_3;
#line 1355
label_4:
#line 1356
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(42)));
#line 1356
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(73)));
#line 1356
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1057), ___nl__6, ___get_global_const(73), ___nl__7));
#line 1356
c_rt_lib0clear(&___nl__6);
#line 1356
c_rt_lib0clear(&___nl__7);
#line 1356
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 1356
c_rt_lib0delete(type_checker_priv0add_var_to_vars(___nl__5, ___nl__6, ___ref___2));
#line 1356
c_rt_lib0clear(&___nl__6);
#line 1356
c_rt_lib0clear(&___nl__5);
#line 1357
goto label_3;
#line 1357
label_3:
#line 1357
c_rt_lib0clear(&___nl__4);
#line 1357
c_rt_lib0clear(&___nl__0);
#line 1357
c_rt_lib0clear(&___nl__1);
#line 1357
return NULL;
}

ImmT type_checker_priv0is_known(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
type_checker_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 1361
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(40)));
#line 1361
c_rt_lib0move(&___nl__1, ptd_system0is_known(___nl__2));
#line 1361
c_rt_lib0clear(&___nl__2);
#line 1361
c_rt_lib0clear(&___nl__0);
#line 1361
return ___nl__1;
#line 1361
c_rt_lib0clear(&___nl__1);
#line 1361
c_rt_lib0clear(&___nl__0);
#line 1361
return NULL;
}

ImmT type_checker_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 1365
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 1365
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__0, ___nl__2));
#line 1365
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 1365
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 1365
goto label_1;
#line 1365
label_2:
#line 1365
c_rt_lib0move(&___nl__2,___get_global_const(583));
#line 1365
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__0, ___nl__2));
#line 1365
label_1:
#line 1365
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 1365
c_rt_lib0clear(&___nl__0);
#line 1365
c_rt_lib0clear(&___nl__1);
#line 1365
return ___nl__2;
#line 1365
c_rt_lib0clear(&___nl__2);
#line 1365
c_rt_lib0clear(&___nl__0);
#line 1365
c_rt_lib0clear(&___nl__1);
#line 1365
return NULL;
}

ImmT type_checker_priv0get_fun_module(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 1369
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 1369
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__0, ___nl__2));
#line 1369
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 1369
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 1369
goto label_1;
#line 1369
label_2:
#line 1369
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 1369
label_1:
#line 1369
c_rt_lib0clear(&___nl__0);
#line 1369
c_rt_lib0clear(&___nl__1);
#line 1369
return ___nl__2;
#line 1369
c_rt_lib0clear(&___nl__2);
#line 1369
c_rt_lib0clear(&___nl__0);
#line 1369
c_rt_lib0clear(&___nl__1);
#line 1369
return NULL;
}

ImmT type_checker_priv0get_function_def(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
type_checker_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1374
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1032)));
#line 1374
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1029)));
#line 1374
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(733)));
#line 1374
c_rt_lib0move(&___nl__6, type_checker_priv0get_fun_module(___nl__0, ___nl__7));
#line 1374
c_rt_lib0clear(&___nl__7);
#line 1374
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__6));
#line 1374
c_rt_lib0clear(&___nl__6);
#line 1374
c_rt_lib0clear(&___nl__5);
#line 1374
c_rt_lib0move(&___nl__5, type_checker_priv0get_fun_key(___nl__1, ___nl__0));
#line 1374
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__5));
#line 1374
c_rt_lib0clear(&___nl__5);
#line 1374
c_rt_lib0clear(&___nl__4);
#line 1374
c_rt_lib0clear(&___nl__0);
#line 1374
c_rt_lib0clear(&___nl__1);
#line 1374
c_rt_lib0clear(&___nl__2);
#line 1374
return ___nl__3;
#line 1374
c_rt_lib0clear(&___nl__3);
#line 1374
c_rt_lib0clear(&___nl__0);
#line 1374
c_rt_lib0clear(&___nl__1);
#line 1374
c_rt_lib0clear(&___nl__2);
#line 1374
return NULL;
}

ImmT type_checker_priv0check_function_exists(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 1380
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1029)));
#line 1380
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(733)));
#line 1380
c_rt_lib0move(&___nl__4, type_checker_priv0get_fun_module(___nl__0, ___nl__5));
#line 1380
c_rt_lib0clear(&___nl__5);
#line 1381
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(340)));
#line 1381
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__4));
#line 1381
c_rt_lib0clear(&___nl__6);
#line 1381
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1381
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 1381
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(340)));
#line 1381
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__4));
#line 1381
c_rt_lib0clear(&___nl__6);
#line 1381
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1381
label_3:
#line 1381
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1381
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 1382
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(340)));
#line 1382
c_rt_lib0move(&___nl__6, hash0has_key(___nl__7, ___nl__4));
#line 1382
c_rt_lib0clear(&___nl__7);
#line 1382
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1382
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 1382
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 1382
c_rt_lib0move(&___nl__7,___get_global_const(742));
#line 1382
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 1382
c_rt_lib0move(&___nl__8,___get_global_const(743));
#line 1382
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 1382
c_rt_lib0clear(&___nl__8);
#line 1382
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__7));
#line 1382
c_rt_lib0clear(&___nl__7);
#line 1382
goto label_5;
#line 1382
label_5:
#line 1382
c_rt_lib0clear(&___nl__6);
#line 1383
c_rt_lib0move(&___nl__6,___get_global_const(340));
#line 1383
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___2, ___nl__6));
#line 1383
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 1383
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__4, ___nl__7));
#line 1383
c_rt_lib0clear(&___nl__7);
#line 1383
c_rt_lib0move(&___nl__7,___get_global_const(340));
#line 1383
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__7, ___nl__6));
#line 1383
c_rt_lib0clear(&___nl__7);
#line 1383
c_rt_lib0clear(&___nl__6);
#line 1384
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 1384
c_rt_lib0clear(&___nl__0);
#line 1384
c_rt_lib0clear(&___nl__1);
#line 1384
c_rt_lib0clear(&___nl__4);
#line 1384
c_rt_lib0clear(&___nl__5);
#line 1384
return ___nl__6;
#line 1384
c_rt_lib0clear(&___nl__6);
#line 1385
goto label_6;
#line 1385
label_2:
#line 1385
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1032)));
#line 1385
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__4));
#line 1385
c_rt_lib0clear(&___nl__6);
#line 1385
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1385
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1385
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 1386
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 1386
c_rt_lib0clear(&___nl__0);
#line 1386
c_rt_lib0clear(&___nl__1);
#line 1386
c_rt_lib0clear(&___nl__4);
#line 1386
c_rt_lib0clear(&___nl__5);
#line 1386
return ___nl__6;
#line 1386
c_rt_lib0clear(&___nl__6);
#line 1387
goto label_6;
#line 1387
label_6:
#line 1387
c_rt_lib0clear(&___nl__5);
#line 1388
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___2, ___get_global_const(1032)));
#line 1388
c_rt_lib0move(&___nl__6, hash0get_value(___nl__7, ___nl__4));
#line 1388
c_rt_lib0clear(&___nl__7);
#line 1388
c_rt_lib0move(&___nl__7, type_checker_priv0get_fun_key(___nl__1, ___nl__0));
#line 1388
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__7));
#line 1388
c_rt_lib0clear(&___nl__7);
#line 1388
c_rt_lib0clear(&___nl__6);
#line 1388
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1388
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 1388
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 1389
c_rt_lib0move(&___nl__6,___get_global_const(1034));
#line 1389
c_rt_lib0move(&___nl__7, type_checker_priv0get_function_name(___nl__0, ___nl__1));
#line 1389
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1389
c_rt_lib0clear(&___nl__7);
#line 1389
c_rt_lib0move(&___nl__7,___get_global_const(1035));
#line 1389
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 1389
c_rt_lib0clear(&___nl__7);
#line 1389
c_rt_lib0delete(type_checker_priv0add_error(___ref___3, ___nl__6));
#line 1389
c_rt_lib0clear(&___nl__6);
#line 1390
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 1390
c_rt_lib0clear(&___nl__0);
#line 1390
c_rt_lib0clear(&___nl__1);
#line 1390
c_rt_lib0clear(&___nl__4);
#line 1390
c_rt_lib0clear(&___nl__5);
#line 1390
return ___nl__6;
#line 1390
c_rt_lib0clear(&___nl__6);
#line 1391
goto label_8;
#line 1391
label_8:
#line 1391
c_rt_lib0clear(&___nl__5);
#line 1392
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 1392
c_rt_lib0clear(&___nl__0);
#line 1392
c_rt_lib0clear(&___nl__1);
#line 1392
c_rt_lib0clear(&___nl__4);
#line 1392
return ___nl__5;
#line 1392
c_rt_lib0clear(&___nl__5);
#line 1392
c_rt_lib0clear(&___nl__4);
#line 1392
c_rt_lib0clear(&___nl__0);
#line 1392
c_rt_lib0clear(&___nl__1);
#line 1392
return NULL;
}

ImmT type_checker_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1396
c_rt_lib0move(&___nl__2,___get_global_const(17));
#line 1396
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 1396
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(734)));
#line 1396
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(111)));
#line 1396
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 1396
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 1396
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(97)));
#line 1396
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(5, ___get_global_const(116), ___nl__1, ___get_global_const(113), ___nl__4, ___get_global_const(111), ___nl__5, ___get_global_const(154), ___nl__6, ___get_global_const(73), ___nl__7));
#line 1396
c_rt_lib0clear(&___nl__4);
#line 1396
c_rt_lib0clear(&___nl__5);
#line 1396
c_rt_lib0clear(&___nl__6);
#line 1396
c_rt_lib0clear(&___nl__7);
#line 1396
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 1396
c_rt_lib0clear(&___nl__3);
#line 1396
c_rt_lib0move(&___nl__3,___get_global_const(17));
#line 1396
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 1396
c_rt_lib0clear(&___nl__3);
#line 1396
c_rt_lib0clear(&___nl__2);
#line 1396
c_rt_lib0clear(&___nl__1);
#line 1396
return NULL;
}

ImmT type_checker_priv0add_warning(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
type_checker_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 1400
c_rt_lib0move(&___nl__2,___get_global_const(98));
#line 1400
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 1400
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(734)));
#line 1400
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(111)));
#line 1400
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 1400
c_rt_lib0move(&___nl__6, c_rt_lib0unary_minus(___nl__6));
#line 1400
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(152)));
#line 1400
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(5, ___get_global_const(116), ___nl__1, ___get_global_const(113), ___nl__4, ___get_global_const(111), ___nl__5, ___get_global_const(154), ___nl__6, ___get_global_const(73), ___nl__7));
#line 1400
c_rt_lib0clear(&___nl__4);
#line 1400
c_rt_lib0clear(&___nl__5);
#line 1400
c_rt_lib0clear(&___nl__6);
#line 1400
c_rt_lib0clear(&___nl__7);
#line 1400
c_rt_lib0delete(array0push(&___nl__2, ___nl__3));
#line 1400
c_rt_lib0clear(&___nl__3);
#line 1400
c_rt_lib0move(&___nl__3,___get_global_const(98));
#line 1400
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 1400
c_rt_lib0clear(&___nl__3);
#line 1400
c_rt_lib0clear(&___nl__2);
#line 1400
c_rt_lib0clear(&___nl__1);
#line 1400
return NULL;
}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void type_checker_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
}}
ImmT type_checker_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT type_checker_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = type_checker_priv0get_special_functions0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
