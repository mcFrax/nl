
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "dfile.h"
#include "ov.h"
#include "c_fe_lib.h"
#include "c_std_lib.h"
#include "string.h"
#include "hash.h"
#include "array.h"
#include "nl.h"
#include "boolean_t.h"
#include "ptd.h"
#line 1 "dfile.nl"

static ImmT *__const__f = NULL;
void dfile_priv0__const__init();
ImmT dfile_priv0__const__sim(int __nr);
ImmT dfile_priv0__const__sing(int __nr);

ImmT dfile_priv0eat_ws(ImmT * ___ref___0);
ImmT dfile_priv0get_char(ImmT * ___ref___0);
ImmT dfile_priv0is_ov(ImmT * ___ref___0);
ImmT dfile_priv0eat_non_ws(ImmT * ___ref___0,ImmT * ___ref___1);
ImmT dfile_priv0parse_scalar(ImmT * ___ref___0,ImmT * ___ref___1);
ImmT dfile_priv0match_s(ImmT * ___ref___0,ImmT ___nl__1);
ImmT dfile_priv0parse(ImmT * ___ref___0,ImmT * ___ref___1);
ImmT dfile_priv0sp(ImmT * ___ref___0,ImmT ___nl__1);
ImmT dfile_priv0sprintstr(ImmT * ___ref___0,ImmT ___nl__1);
ImmT dfile_priv0is_simple_string(ImmT ___nl__0);
ImmT dfile_priv0sprint_hash_key(ImmT * ___ref___0,ImmT ___nl__1);
ImmT dfile_priv0get_ind(ImmT ___nl__0);
ImmT dfile_priv0sprint_hash(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);
ImmT dfile_priv0handle_debug(ImmT * ___ref___0,ImmT ___nl__1);
ImmT dfile_priv0sprint(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);
ImmT dfile_priv0print_net_formatstr(ImmT * ___ref___0,ImmT ___nl__1);
ImmT dfile_priv0print_net_format(ImmT * ___ref___0,ImmT ___nl__1);


ImmT dfile0fsave0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "dfile0fsave");
return dfile0fsave(_tab[0], _tab[1]);}
ImmT dfile0fsave(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 17
c_rt_lib0move(&___nl__4, dfile0ssave(___nl__1));
#line 17
c_rt_lib0move(&___nl__3, c_fe_lib0string_to_file(___nl__0, ___nl__4));
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(45)));
#line 17
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 17
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__3));
#line 17
nl_die_arg(___nl__3);
#line 17
label_1:
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return NULL;
}

ImmT dfile0fload0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0fload");
return dfile0fload(_tab[0]);}
ImmT dfile0fload(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 21
c_rt_lib0move(&___nl__3, c_fe_lib0file_to_string(___nl__0));
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(45)));
#line 21
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__3));
#line 21
nl_die_arg(___nl__3);
#line 21
label_1:
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(45)));
#line 21
c_rt_lib0clear(&___nl__2);
#line 21
c_rt_lib0clear(&___nl__3);
#line 22
c_rt_lib0move(&___nl__2, dfile0sload(___nl__1));
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
return ___nl__2;
#line 22
c_rt_lib0clear(&___nl__2);
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
return NULL;
}

ImmT dfile0ssave0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0ssave");
return dfile0ssave(_tab[0]);}
ImmT dfile0ssave(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 26
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 26
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 26
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(159), ___nl__2, ___get_global_const(160), ___nl__3));
#line 26
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0clear(&___nl__3);
#line 27
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 27
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 27
c_rt_lib0delete(dfile_priv0sprint(&___nl__1, ___nl__0, ___nl__2, ___nl__3));
#line 27
c_rt_lib0clear(&___nl__3);
#line 27
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(159)));
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
return ___nl__2;
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
return NULL;
}

ImmT dfile0debug0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0debug");
return dfile0debug(_tab[0]);}
ImmT dfile0debug(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 32
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 32
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(159), ___nl__2, ___get_global_const(160), ___nl__3));
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 33
c_rt_lib0delete(dfile_priv0sprint(&___nl__1, ___nl__0, ___nl__2, ___nl__3));
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(159)));
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
return ___nl__2;
#line 34
c_rt_lib0clear(&___nl__2);
#line 34
c_rt_lib0clear(&___nl__1);
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
return NULL;
}

ImmT dfile0ssave_net_format0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0ssave_net_format");
return dfile0ssave_net_format(_tab[0]);}
ImmT dfile0ssave_net_format(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 38
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 38
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 38
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(159), ___nl__2, ___get_global_const(160), ___nl__3));
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0delete(dfile_priv0print_net_format(&___nl__1, ___nl__0));
#line 40
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(159)));
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
c_rt_lib0clear(&___nl__1);
#line 40
return ___nl__2;
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__1);
#line 40
c_rt_lib0clear(&___nl__0);
#line 40
return NULL;
}

ImmT dfile_priv0eat_ws(ImmT * ___ref___0) {
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 44
label_2:
#line 45
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 45
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(162)));
#line 45
c_rt_lib0move(&___nl__1, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 45
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
return NULL;
#line 45
goto label_4;
#line 45
label_4:
#line 45
c_rt_lib0clear(&___nl__1);
#line 46
c_rt_lib0move(&___nl__2, dfile_priv0get_char(___ref___0));
#line 46
c_rt_lib0move(&___nl__1, string0ord(___nl__2));
#line 46
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(163));
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 47
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(157));
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 47
label_9:
#line 47
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(158));
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 47
label_8:
#line 47
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(156));
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 47
label_7:
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 47
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 48
c_rt_lib0move(&___nl__3,___get_global_const(161));
#line 48
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 48
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 48
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 48
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 48
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 48
c_rt_lib0clear(&___nl__5);
#line 48
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0clear(&___nl__4);
#line 49
goto label_5;
#line 49
label_6:
#line 50
c_rt_lib0clear(&___nl__1);
#line 50
c_rt_lib0clear(&___nl__2);
#line 50
return NULL;
#line 51
goto label_5;
#line 51
label_5:
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__1);
#line 44
goto label_2;
#line 44
return NULL;
}

ImmT dfile_priv0get_char(ImmT * ___ref___0) {
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 56
c_rt_lib0move(&___nl__2, ptd0sim());
#line 56
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 56
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 56
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 56
c_rt_lib0move(&___nl__3, c_std_lib0fast_substr(___nl__4, ___nl__5, ___nl__6));
#line 56
c_rt_lib0clear(&___nl__6);
#line 56
c_rt_lib0clear(&___nl__5);
#line 56
c_rt_lib0clear(&___nl__4);
#line 56
c_rt_lib0move(&___nl__1, ptd0ensure(___nl__2, ___nl__3));
#line 56
c_rt_lib0clear(&___nl__3);
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
return ___nl__1;
#line 56
c_rt_lib0clear(&___nl__1);
#line 56
return NULL;
}

ImmT dfile_priv0is_ov(ImmT * ___ref___0) {
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 60
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 60
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 60
c_rt_lib0move(&___nl__4,___get_global_const(164));
#line 60
c_rt_lib0move(&___nl__1, c_std_lib0fast_substr(___nl__2, ___nl__3, ___nl__4));
#line 60
c_rt_lib0clear(&___nl__4);
#line 60
c_rt_lib0clear(&___nl__3);
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
c_rt_lib0move(&___nl__2,___get_global_const(165));
#line 60
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__2));
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
return ___nl__1;
#line 60
c_rt_lib0clear(&___nl__1);
#line 60
return NULL;
}

ImmT dfile_priv0eat_non_ws(ImmT * ___ref___0,ImmT * ___ref___1) {
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 64
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 65
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(162)));
#line 66
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 66
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__4, ___nl__3));
#line 66
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 66
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 67
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 67
c_rt_lib0copy(___ref___1, ___nl__5);
#line 67
c_rt_lib0clear(&___nl__5);
#line 68
c_rt_lib0move(&___nl__5,___get_global_const(166));
#line 68
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 68
c_rt_lib0clear(&___nl__6);
#line 68
c_rt_lib0move(&___nl__6,___get_global_const(167));
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 68
c_rt_lib0clear(&___nl__6);
#line 68
c_rt_lib0clear(&___nl__2);
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
c_rt_lib0clear(&___nl__4);
#line 68
return ___nl__5;
#line 68
c_rt_lib0clear(&___nl__5);
#line 69
goto label_2;
#line 69
label_2:
#line 69
c_rt_lib0clear(&___nl__4);
#line 70
label_4:
#line 71
c_rt_lib0move(&___nl__4, dfile_priv0get_char(___ref___0));
#line 72
c_rt_lib0move(&___nl__5, string0is_letter(___nl__4));
#line 72
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 72
c_rt_lib0move(&___nl__5, string0is_digit(___nl__4));
#line 72
label_8:
#line 72
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 72
c_rt_lib0move(&___nl__5,___get_global_const(168));
#line 72
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 72
label_7:
#line 72
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 72
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 72
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 72
c_rt_lib0clear(&___nl__4);
#line 72
c_rt_lib0clear(&___nl__5);
#line 72
goto label_3;
#line 72
goto label_6;
#line 72
label_6:
#line 72
c_rt_lib0clear(&___nl__5);
#line 73
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 73
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 73
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 73
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 73
c_rt_lib0move(&___nl__7,___get_global_const(161));
#line 73
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 73
c_rt_lib0clear(&___nl__7);
#line 73
c_rt_lib0clear(&___nl__5);
#line 73
c_rt_lib0clear(&___nl__6);
#line 74
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 75
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 75
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__5, ___nl__3));
#line 75
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 75
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 75
c_rt_lib0clear(&___nl__4);
#line 75
c_rt_lib0clear(&___nl__5);
#line 75
goto label_3;
#line 75
goto label_10;
#line 75
label_10:
#line 75
c_rt_lib0clear(&___nl__5);
#line 75
c_rt_lib0clear(&___nl__4);
#line 70
goto label_4;
#line 70
label_3:
#line 77
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 77
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__2, ___nl__4));
#line 77
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 77
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 78
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 78
c_rt_lib0copy(___ref___1, ___nl__5);
#line 78
c_rt_lib0clear(&___nl__5);
#line 79
c_rt_lib0move(&___nl__5,___get_global_const(166));
#line 79
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 79
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 79
c_rt_lib0clear(&___nl__6);
#line 79
c_rt_lib0move(&___nl__6,___get_global_const(167));
#line 79
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 79
c_rt_lib0clear(&___nl__6);
#line 79
c_rt_lib0clear(&___nl__2);
#line 79
c_rt_lib0clear(&___nl__3);
#line 79
c_rt_lib0clear(&___nl__4);
#line 79
return ___nl__5;
#line 79
c_rt_lib0clear(&___nl__5);
#line 80
goto label_12;
#line 80
label_12:
#line 80
c_rt_lib0clear(&___nl__4);
#line 81
c_rt_lib0clear(&___nl__3);
#line 81
return ___nl__2;
#line 81
c_rt_lib0clear(&___nl__2);
#line 81
c_rt_lib0clear(&___nl__3);
#line 81
return NULL;
}

ImmT dfile_priv0parse_scalar(ImmT * ___ref___0,ImmT * ___ref___1) {
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 85
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 86
c_rt_lib0move(&___nl__2, dfile_priv0get_char(___ref___0));
#line 86
c_rt_lib0move(&___nl__3,___get_global_const(155));
#line 86
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 86
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 86
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 87
c_rt_lib0move(&___nl__3,___get_global_const(161));
#line 87
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 87
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 87
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 87
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 87
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 87
c_rt_lib0clear(&___nl__5);
#line 87
c_rt_lib0clear(&___nl__3);
#line 87
c_rt_lib0clear(&___nl__4);
#line 88
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 89
label_4:
#line 90
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 90
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(162)));
#line 90
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__4, ___nl__5));
#line 90
c_rt_lib0clear(&___nl__5);
#line 90
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 90
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 91
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 91
c_rt_lib0copy(___ref___1, ___nl__5);
#line 91
c_rt_lib0clear(&___nl__5);
#line 92
c_rt_lib0move(&___nl__5,___get_global_const(166));
#line 92
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 92
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 92
c_rt_lib0clear(&___nl__6);
#line 92
c_rt_lib0move(&___nl__6,___get_global_const(169));
#line 92
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 92
c_rt_lib0clear(&___nl__6);
#line 92
c_rt_lib0clear(&___nl__2);
#line 92
c_rt_lib0clear(&___nl__3);
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
return ___nl__5;
#line 92
c_rt_lib0clear(&___nl__5);
#line 93
goto label_6;
#line 93
label_6:
#line 93
c_rt_lib0clear(&___nl__4);
#line 94
c_rt_lib0move(&___nl__4, dfile_priv0get_char(___ref___0));
#line 95
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 95
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 95
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 95
c_rt_lib0move(&___nl__7,___get_global_const(161));
#line 95
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 95
c_rt_lib0clear(&___nl__7);
#line 95
c_rt_lib0clear(&___nl__5);
#line 95
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0move(&___nl__5,___get_global_const(155));
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 96
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 96
c_rt_lib0clear(&___nl__4);
#line 96
c_rt_lib0clear(&___nl__5);
#line 96
goto label_3;
#line 96
goto label_8;
#line 96
label_8:
#line 96
c_rt_lib0clear(&___nl__5);
#line 97
c_rt_lib0move(&___nl__5,___get_global_const(82));
#line 97
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__4, ___nl__5));
#line 97
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 97
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 98
c_rt_lib0move(&___nl__6, dfile_priv0get_char(___ref___0));
#line 99
c_rt_lib0move(&___nl__7,___get_global_const(170));
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 99
if(c_rt_lib0check_true_native(___nl__7)){ goto label_12;}
#line 100
c_rt_lib0move(&___nl__8, string0lf());
#line 100
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 100
c_rt_lib0clear(&___nl__8);
#line 101
goto label_11;
#line 101
label_12:
#line 101
c_rt_lib0move(&___nl__7,___get_global_const(171));
#line 101
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 101
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 101
if(c_rt_lib0check_true_native(___nl__7)){ goto label_13;}
#line 102
c_rt_lib0move(&___nl__8, string0r());
#line 102
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 102
c_rt_lib0clear(&___nl__8);
#line 103
goto label_11;
#line 103
label_13:
#line 103
c_rt_lib0move(&___nl__7,___get_global_const(172));
#line 103
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__6, ___nl__7));
#line 103
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 103
if(c_rt_lib0check_true_native(___nl__7)){ goto label_14;}
#line 104
c_rt_lib0move(&___nl__8, string0tab());
#line 104
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__8));
#line 104
c_rt_lib0clear(&___nl__8);
#line 105
goto label_11;
#line 105
label_14:
#line 106
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 107
goto label_11;
#line 107
label_11:
#line 107
c_rt_lib0clear(&___nl__7);
#line 108
c_rt_lib0move(&___nl__7,___get_global_const(161));
#line 108
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 108
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 108
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 108
c_rt_lib0move(&___nl__9,___get_global_const(161));
#line 108
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__7));
#line 108
c_rt_lib0clear(&___nl__9);
#line 108
c_rt_lib0clear(&___nl__7);
#line 108
c_rt_lib0clear(&___nl__8);
#line 108
c_rt_lib0clear(&___nl__6);
#line 109
goto label_9;
#line 109
label_10:
#line 110
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 111
goto label_9;
#line 111
label_9:
#line 111
c_rt_lib0clear(&___nl__5);
#line 111
c_rt_lib0clear(&___nl__4);
#line 89
goto label_4;
#line 89
label_3:
#line 113
c_rt_lib0clear(&___nl__2);
#line 113
return ___nl__3;
#line 113
c_rt_lib0clear(&___nl__3);
#line 114
goto label_1;
#line 114
label_2:
#line 115
c_rt_lib0move(&___nl__3, dfile_priv0eat_non_ws(___ref___0, ___ref___1));
#line 115
c_rt_lib0clear(&___nl__2);
#line 115
return ___nl__3;
#line 115
c_rt_lib0clear(&___nl__3);
#line 116
goto label_1;
#line 116
label_1:
#line 116
c_rt_lib0clear(&___nl__2);
#line 116
return NULL;
}

ImmT dfile_priv0match_s(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 120
c_rt_lib0move(&___nl__2, string0length(___nl__1));
#line 121
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(159)));
#line 121
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 121
c_rt_lib0move(&___nl__3, c_std_lib0fast_substr(___nl__4, ___nl__5, ___nl__2));
#line 121
c_rt_lib0clear(&___nl__5);
#line 121
c_rt_lib0clear(&___nl__4);
#line 121
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__1));
#line 121
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 121
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 122
c_rt_lib0move(&___nl__4,___get_global_const(161));
#line 122
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 122
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__2));
#line 122
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 122
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 122
c_rt_lib0clear(&___nl__5);
#line 122
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0get_true());
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
return ___nl__4;
#line 123
c_rt_lib0clear(&___nl__4);
#line 124
goto label_1;
#line 124
label_2:
#line 125
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 125
c_rt_lib0clear(&___nl__1);
#line 125
c_rt_lib0clear(&___nl__2);
#line 125
c_rt_lib0clear(&___nl__3);
#line 125
return ___nl__4;
#line 125
c_rt_lib0clear(&___nl__4);
#line 126
goto label_1;
#line 126
label_1:
#line 126
c_rt_lib0clear(&___nl__3);
#line 126
c_rt_lib0clear(&___nl__2);
#line 126
c_rt_lib0clear(&___nl__1);
#line 126
return NULL;
}

ImmT dfile0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "dfile0state_t");
return dfile0state_t();}
ImmT dfile0state_t(){
dfile_priv0__const__init();
return dfile_priv0__const__sing(0);}
ImmT dfile0state_t0cal() {
dfile_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 130
c_rt_lib0move(&___nl__3, ptd0sim());
#line 130
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 130
c_rt_lib0clear(&___nl__3);
#line 130
c_rt_lib0move(&___nl__3, ptd0sim());
#line 130
c_rt_lib0move(&___nl__4, ptd0sim());
#line 130
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(159), ___nl__2, ___get_global_const(162), ___nl__3, ___get_global_const(161), ___nl__4));
#line 130
c_rt_lib0clear(&___nl__2);
#line 130
c_rt_lib0clear(&___nl__3);
#line 130
c_rt_lib0clear(&___nl__4);
#line 130
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 130
c_rt_lib0clear(&___nl__1);
#line 130
return ___nl__0;
#line 130
c_rt_lib0clear(&___nl__0);
#line 130
return NULL;
}

ImmT dfile_priv0parse(ImmT * ___ref___0,ImmT * ___ref___1) {
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 134
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 135
c_rt_lib0move(&___nl__2, dfile_priv0get_char(___ref___0));
#line 136
c_rt_lib0move(&___nl__3,___get_global_const(173));
#line 136
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 136
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 136
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 137
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 137
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__4));
#line 137
c_rt_lib0move(&___nl__6,___get_global_const(161));
#line 137
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 137
c_rt_lib0clear(&___nl__6);
#line 137
c_rt_lib0clear(&___nl__4);
#line 137
c_rt_lib0clear(&___nl__5);
#line 138
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 139
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 140
label_4:
#line 140
c_rt_lib0move(&___nl__6,___get_global_const(174));
#line 140
c_rt_lib0move(&___nl__5, dfile_priv0match_s(___ref___0, ___nl__6));
#line 140
c_rt_lib0clear(&___nl__6);
#line 140
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 140
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 140
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 141
c_rt_lib0move(&___nl__6, dfile_priv0parse_scalar(___ref___0, ___ref___1));
#line 142
c_rt_lib0copy(&___nl__7, *___ref___1);
#line 142
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 142
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0clear(&___nl__7);
#line 142
return ___nl__6;
#line 142
goto label_6;
#line 142
label_6:
#line 142
c_rt_lib0clear(&___nl__7);
#line 143
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 144
c_rt_lib0move(&___nl__8,___get_global_const(175));
#line 144
c_rt_lib0move(&___nl__7, dfile_priv0match_s(___ref___0, ___nl__8));
#line 144
c_rt_lib0clear(&___nl__8);
#line 144
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 144
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 144
if(c_rt_lib0check_true_native(___nl__7)){ goto label_8;}
#line 145
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 145
c_rt_lib0copy(___ref___1, ___nl__8);
#line 145
c_rt_lib0clear(&___nl__8);
#line 146
c_rt_lib0move(&___nl__8,___get_global_const(166));
#line 146
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 146
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 146
c_rt_lib0clear(&___nl__9);
#line 146
c_rt_lib0move(&___nl__9,___get_global_const(176));
#line 146
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 146
c_rt_lib0clear(&___nl__9);
#line 146
c_rt_lib0clear(&___nl__2);
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0clear(&___nl__5);
#line 146
c_rt_lib0clear(&___nl__6);
#line 146
c_rt_lib0clear(&___nl__7);
#line 146
return ___nl__8;
#line 146
c_rt_lib0clear(&___nl__8);
#line 147
goto label_8;
#line 147
label_8:
#line 147
c_rt_lib0clear(&___nl__7);
#line 148
c_rt_lib0move(&___nl__7, dfile_priv0parse(___ref___0, ___ref___1));
#line 149
c_rt_lib0copy(&___nl__8, *___ref___1);
#line 149
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 149
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 149
c_rt_lib0clear(&___nl__2);
#line 149
c_rt_lib0clear(&___nl__3);
#line 149
c_rt_lib0clear(&___nl__4);
#line 149
c_rt_lib0clear(&___nl__5);
#line 149
c_rt_lib0clear(&___nl__6);
#line 149
c_rt_lib0clear(&___nl__8);
#line 149
return ___nl__7;
#line 149
goto label_10;
#line 149
label_10:
#line 149
c_rt_lib0clear(&___nl__8);
#line 150
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__6, ___nl__7));
#line 151
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 152
c_rt_lib0move(&___nl__9,___get_global_const(177));
#line 152
c_rt_lib0move(&___nl__8, dfile_priv0match_s(___ref___0, ___nl__9));
#line 152
c_rt_lib0clear(&___nl__9);
#line 152
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 152
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 152
if(c_rt_lib0check_true_native(___nl__8)){ goto label_12;}
#line 153
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 153
c_rt_lib0copy(___ref___1, ___nl__9);
#line 153
c_rt_lib0clear(&___nl__9);
#line 154
c_rt_lib0move(&___nl__9,___get_global_const(166));
#line 154
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 154
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 154
c_rt_lib0clear(&___nl__10);
#line 154
c_rt_lib0move(&___nl__10,___get_global_const(178));
#line 154
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 154
c_rt_lib0clear(&___nl__10);
#line 154
c_rt_lib0clear(&___nl__2);
#line 154
c_rt_lib0clear(&___nl__3);
#line 154
c_rt_lib0clear(&___nl__4);
#line 154
c_rt_lib0clear(&___nl__5);
#line 154
c_rt_lib0clear(&___nl__6);
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0clear(&___nl__8);
#line 154
return ___nl__9;
#line 154
c_rt_lib0clear(&___nl__9);
#line 155
goto label_12;
#line 155
label_12:
#line 155
c_rt_lib0clear(&___nl__8);
#line 156
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 156
c_rt_lib0clear(&___nl__6);
#line 156
c_rt_lib0clear(&___nl__7);
#line 157
goto label_4;
#line 157
label_3:
#line 157
c_rt_lib0clear(&___nl__5);
#line 158
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
return ___nl__4;
#line 158
c_rt_lib0clear(&___nl__4);
#line 159
goto label_1;
#line 159
label_2:
#line 159
c_rt_lib0move(&___nl__3,___get_global_const(179));
#line 159
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 159
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 159
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 160
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 160
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 160
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 160
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__4));
#line 160
c_rt_lib0move(&___nl__6,___get_global_const(161));
#line 160
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 160
c_rt_lib0clear(&___nl__6);
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
c_rt_lib0clear(&___nl__5);
#line 161
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 162
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 163
label_15:
#line 163
c_rt_lib0move(&___nl__6,___get_global_const(180));
#line 163
c_rt_lib0move(&___nl__5, dfile_priv0match_s(___ref___0, ___nl__6));
#line 163
c_rt_lib0clear(&___nl__6);
#line 163
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 163
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 163
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 164
c_rt_lib0move(&___nl__6, dfile_priv0parse(___ref___0, ___ref___1));
#line 165
c_rt_lib0copy(&___nl__7, *___ref___1);
#line 165
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 165
if(c_rt_lib0check_true_native(___nl__7)){ goto label_17;}
#line 165
c_rt_lib0clear(&___nl__2);
#line 165
c_rt_lib0clear(&___nl__3);
#line 165
c_rt_lib0clear(&___nl__4);
#line 165
c_rt_lib0clear(&___nl__5);
#line 165
c_rt_lib0clear(&___nl__7);
#line 165
return ___nl__6;
#line 165
goto label_17;
#line 165
label_17:
#line 165
c_rt_lib0clear(&___nl__7);
#line 166
c_rt_lib0delete(array0push(&___nl__4, ___nl__6));
#line 167
c_rt_lib0move(&___nl__8,___get_global_const(177));
#line 167
c_rt_lib0move(&___nl__7, dfile_priv0match_s(___ref___0, ___nl__8));
#line 167
c_rt_lib0clear(&___nl__8);
#line 167
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 167
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 167
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 168
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 168
c_rt_lib0copy(___ref___1, ___nl__8);
#line 168
c_rt_lib0clear(&___nl__8);
#line 169
c_rt_lib0move(&___nl__8,___get_global_const(166));
#line 169
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 169
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 169
c_rt_lib0clear(&___nl__9);
#line 169
c_rt_lib0move(&___nl__9,___get_global_const(178));
#line 169
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 169
c_rt_lib0clear(&___nl__9);
#line 169
c_rt_lib0clear(&___nl__2);
#line 169
c_rt_lib0clear(&___nl__3);
#line 169
c_rt_lib0clear(&___nl__4);
#line 169
c_rt_lib0clear(&___nl__5);
#line 169
c_rt_lib0clear(&___nl__6);
#line 169
c_rt_lib0clear(&___nl__7);
#line 169
return ___nl__8;
#line 169
c_rt_lib0clear(&___nl__8);
#line 170
goto label_19;
#line 170
label_19:
#line 170
c_rt_lib0clear(&___nl__7);
#line 171
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 171
c_rt_lib0clear(&___nl__6);
#line 172
goto label_15;
#line 172
label_14:
#line 172
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0clear(&___nl__2);
#line 173
c_rt_lib0clear(&___nl__3);
#line 173
return ___nl__4;
#line 173
c_rt_lib0clear(&___nl__4);
#line 174
goto label_1;
#line 174
label_13:
#line 174
c_rt_lib0move(&___nl__3,___get_global_const(141));
#line 174
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__3));
#line 174
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 174
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 174
c_rt_lib0move(&___nl__3, dfile_priv0is_ov(___ref___0));
#line 174
label_21:
#line 174
c_rt_lib0clear(&___nl__4);
#line 174
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 174
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 175
c_rt_lib0move(&___nl__4,___get_global_const(164));
#line 175
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 175
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 175
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__4));
#line 175
c_rt_lib0move(&___nl__6,___get_global_const(161));
#line 175
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 175
c_rt_lib0clear(&___nl__6);
#line 175
c_rt_lib0clear(&___nl__4);
#line 175
c_rt_lib0clear(&___nl__5);
#line 176
c_rt_lib0move(&___nl__4, dfile_priv0parse_scalar(___ref___0, ___ref___1));
#line 177
c_rt_lib0copy(&___nl__5, *___ref___1);
#line 177
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 177
if(c_rt_lib0check_true_native(___nl__5)){ goto label_23;}
#line 177
c_rt_lib0clear(&___nl__2);
#line 177
c_rt_lib0clear(&___nl__3);
#line 177
c_rt_lib0clear(&___nl__5);
#line 177
return ___nl__4;
#line 177
goto label_23;
#line 177
label_23:
#line 177
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 179
c_rt_lib0move(&___nl__6,___get_global_const(177));
#line 179
c_rt_lib0move(&___nl__5, dfile_priv0match_s(___ref___0, ___nl__6));
#line 179
c_rt_lib0clear(&___nl__6);
#line 179
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 179
if(c_rt_lib0check_true_native(___nl__5)){ goto label_25;}
#line 180
c_rt_lib0move(&___nl__6, dfile_priv0parse(___ref___0, ___ref___1));
#line 181
c_rt_lib0copy(&___nl__7, *___ref___1);
#line 181
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 181
if(c_rt_lib0check_true_native(___nl__7)){ goto label_27;}
#line 181
c_rt_lib0clear(&___nl__2);
#line 181
c_rt_lib0clear(&___nl__3);
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
c_rt_lib0clear(&___nl__5);
#line 181
c_rt_lib0clear(&___nl__7);
#line 181
return ___nl__6;
#line 181
goto label_27;
#line 181
label_27:
#line 181
c_rt_lib0clear(&___nl__7);
#line 182
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 183
c_rt_lib0move(&___nl__8,___get_global_const(181));
#line 183
c_rt_lib0move(&___nl__7, dfile_priv0match_s(___ref___0, ___nl__8));
#line 183
c_rt_lib0clear(&___nl__8);
#line 183
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 183
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 183
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
#line 184
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 184
c_rt_lib0copy(___ref___1, ___nl__8);
#line 184
c_rt_lib0clear(&___nl__8);
#line 185
c_rt_lib0move(&___nl__8,___get_global_const(166));
#line 185
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 185
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 185
c_rt_lib0clear(&___nl__9);
#line 185
c_rt_lib0move(&___nl__9,___get_global_const(182));
#line 185
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 185
c_rt_lib0clear(&___nl__9);
#line 185
c_rt_lib0clear(&___nl__2);
#line 185
c_rt_lib0clear(&___nl__3);
#line 185
c_rt_lib0clear(&___nl__4);
#line 185
c_rt_lib0clear(&___nl__5);
#line 185
c_rt_lib0clear(&___nl__6);
#line 185
c_rt_lib0clear(&___nl__7);
#line 185
return ___nl__8;
#line 185
c_rt_lib0clear(&___nl__8);
#line 186
goto label_29;
#line 186
label_29:
#line 186
c_rt_lib0clear(&___nl__7);
#line 187
c_rt_lib0move(&___nl__7, ov0mk_val(___nl__4, ___nl__6));
#line 187
c_rt_lib0clear(&___nl__2);
#line 187
c_rt_lib0clear(&___nl__3);
#line 187
c_rt_lib0clear(&___nl__4);
#line 187
c_rt_lib0clear(&___nl__5);
#line 187
c_rt_lib0clear(&___nl__6);
#line 187
return ___nl__7;
#line 187
c_rt_lib0clear(&___nl__7);
#line 187
c_rt_lib0clear(&___nl__6);
#line 188
goto label_25;
#line 188
label_25:
#line 188
c_rt_lib0clear(&___nl__5);
#line 189
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 190
c_rt_lib0move(&___nl__6,___get_global_const(181));
#line 190
c_rt_lib0move(&___nl__5, dfile_priv0match_s(___ref___0, ___nl__6));
#line 190
c_rt_lib0clear(&___nl__6);
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 190
if(c_rt_lib0check_true_native(___nl__5)){ goto label_31;}
#line 191
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 191
c_rt_lib0copy(___ref___1, ___nl__6);
#line 191
c_rt_lib0clear(&___nl__6);
#line 192
c_rt_lib0move(&___nl__6,___get_global_const(166));
#line 192
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 192
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 192
c_rt_lib0clear(&___nl__7);
#line 192
c_rt_lib0move(&___nl__7,___get_global_const(182));
#line 192
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 192
c_rt_lib0clear(&___nl__7);
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
c_rt_lib0clear(&___nl__3);
#line 192
c_rt_lib0clear(&___nl__4);
#line 192
c_rt_lib0clear(&___nl__5);
#line 192
return ___nl__6;
#line 192
c_rt_lib0clear(&___nl__6);
#line 193
goto label_31;
#line 193
label_31:
#line 193
c_rt_lib0clear(&___nl__5);
#line 194
c_rt_lib0delete(dfile_priv0eat_ws(___ref___0));
#line 195
c_rt_lib0move(&___nl__5, ov0mk(___nl__4));
#line 195
c_rt_lib0clear(&___nl__2);
#line 195
c_rt_lib0clear(&___nl__3);
#line 195
c_rt_lib0clear(&___nl__4);
#line 195
return ___nl__5;
#line 195
c_rt_lib0clear(&___nl__5);
#line 195
c_rt_lib0clear(&___nl__4);
#line 196
goto label_1;
#line 196
label_20:
#line 197
c_rt_lib0move(&___nl__4, dfile_priv0parse_scalar(___ref___0, ___ref___1));
#line 197
c_rt_lib0clear(&___nl__2);
#line 197
c_rt_lib0clear(&___nl__3);
#line 197
return ___nl__4;
#line 197
c_rt_lib0clear(&___nl__4);
#line 198
goto label_1;
#line 198
label_1:
#line 198
c_rt_lib0clear(&___nl__3);
#line 198
c_rt_lib0clear(&___nl__2);
#line 198
return NULL;
}

ImmT dfile0sload0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0sload");
return dfile0sload(_tab[0]);}
ImmT dfile0sload(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 202
c_rt_lib0move(&___nl__3, dfile0try_sload(___nl__0));
#line 202
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(45)));
#line 202
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 202
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__3));
#line 202
nl_die_arg(___nl__3);
#line 202
label_1:
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(45)));
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0clear(&___nl__3);
#line 203
c_rt_lib0clear(&___nl__0);
#line 203
return ___nl__1;
#line 203
c_rt_lib0clear(&___nl__1);
#line 203
c_rt_lib0clear(&___nl__0);
#line 203
return NULL;
}

ImmT dfile0try_sload0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "dfile0try_sload");
return dfile0try_sload(_tab[0]);}
ImmT dfile0try_sload(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 207
c_rt_lib0move(&___nl__2, ptd0sim());
#line 207
c_rt_lib0move(&___nl__1, ptd0ensure(___nl__2, ___nl__0));
#line 207
c_rt_lib0clear(&___nl__2);
#line 208
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(1, ___nl__1));
#line 208
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 208
c_rt_lib0move(&___nl__5, string0length(___nl__1));
#line 208
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(159), ___nl__3, ___get_global_const(161), ___nl__4, ___get_global_const(162), ___nl__5));
#line 208
c_rt_lib0clear(&___nl__3);
#line 208
c_rt_lib0clear(&___nl__4);
#line 208
c_rt_lib0clear(&___nl__5);
#line 209
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 210
c_rt_lib0move(&___nl__4,___get_global_const(183));
#line 210
c_rt_lib0delete(dfile_priv0match_s(&___nl__2, ___nl__4));
#line 210
c_rt_lib0clear(&___nl__4);
#line 211
c_rt_lib0delete(dfile_priv0eat_ws(&___nl__2));
#line 212
c_rt_lib0move(&___nl__4, dfile_priv0parse(&___nl__2, &___nl__3));
#line 213
c_rt_lib0delete(dfile_priv0eat_ws(&___nl__2));
#line 214
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 214
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 214
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 214
if(c_rt_lib0check_true_native(___nl__6)){ goto label_3;}
#line 214
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(161)));
#line 214
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(162)));
#line 214
c_rt_lib0move(&___nl__5, c_rt_lib0num_ne(___nl__5, ___nl__7));
#line 214
c_rt_lib0clear(&___nl__7);
#line 214
label_3:
#line 214
c_rt_lib0clear(&___nl__6);
#line 214
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 214
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 215
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 215
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 215
c_rt_lib0clear(&___nl__6);
#line 216
c_rt_lib0move(&___nl__6,___get_global_const(166));
#line 216
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(161)));
#line 216
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 216
c_rt_lib0clear(&___nl__7);
#line 216
c_rt_lib0move(&___nl__7,___get_global_const(184));
#line 216
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 216
c_rt_lib0clear(&___nl__7);
#line 216
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 216
c_rt_lib0clear(&___nl__6);
#line 217
goto label_2;
#line 217
label_2:
#line 217
c_rt_lib0clear(&___nl__5);
#line 218
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 218
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 218
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 219
c_rt_lib0move(&___nl__7, ptd0sim());
#line 219
c_rt_lib0move(&___nl__6, ptd0ensure(___nl__7, ___nl__4));
#line 219
c_rt_lib0clear(&___nl__7);
#line 219
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 219
c_rt_lib0clear(&___nl__6);
#line 220
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
#line 220
c_rt_lib0clear(&___nl__0);
#line 220
c_rt_lib0clear(&___nl__1);
#line 220
c_rt_lib0clear(&___nl__2);
#line 220
c_rt_lib0clear(&___nl__3);
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0clear(&___nl__5);
#line 220
return ___nl__6;
#line 220
c_rt_lib0clear(&___nl__6);
#line 221
goto label_4;
#line 221
label_5:
#line 222
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__4));
#line 222
c_rt_lib0clear(&___nl__0);
#line 222
c_rt_lib0clear(&___nl__1);
#line 222
c_rt_lib0clear(&___nl__2);
#line 222
c_rt_lib0clear(&___nl__3);
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
return ___nl__6;
#line 222
c_rt_lib0clear(&___nl__6);
#line 223
goto label_4;
#line 223
label_4:
#line 223
c_rt_lib0clear(&___nl__5);
#line 223
c_rt_lib0clear(&___nl__1);
#line 223
c_rt_lib0clear(&___nl__2);
#line 223
c_rt_lib0clear(&___nl__3);
#line 223
c_rt_lib0clear(&___nl__4);
#line 223
c_rt_lib0clear(&___nl__0);
#line 223
return NULL;
}

ImmT dfile0state_out0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "dfile0state_out");
return dfile0state_out();}
ImmT dfile0state_out(){
dfile_priv0__const__init();
return dfile_priv0__const__sing(1);}
ImmT dfile0state_out0cal() {
dfile_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 227
c_rt_lib0move(&___nl__2, ptd0sim());
#line 227
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(boolean_t0type0ptr, ___get_global_const(185), ___get_global_const(73)));
#line 227
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 227
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(159), ___nl__2, ___get_global_const(160), ___nl__3));
#line 227
c_rt_lib0clear(&___nl__2);
#line 227
c_rt_lib0clear(&___nl__3);
#line 227
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 227
c_rt_lib0clear(&___nl__1);
#line 227
return ___nl__0;
#line 227
c_rt_lib0clear(&___nl__0);
#line 227
return NULL;
}

ImmT dfile_priv0sp(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 231
c_rt_lib0move(&___nl__2,___get_global_const(159));
#line 231
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 231
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 231
c_rt_lib0move(&___nl__3,___get_global_const(159));
#line 231
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 231
c_rt_lib0clear(&___nl__3);
#line 231
c_rt_lib0clear(&___nl__2);
#line 231
c_rt_lib0clear(&___nl__1);
#line 231
return NULL;
}

ImmT dfile_priv0sprintstr(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 235
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 235
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 235
c_rt_lib0clear(&___nl__2);
#line 236
c_rt_lib0move(&___nl__3,___get_global_const(82));
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(186));
#line 236
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0clear(&___nl__3);
#line 236
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 236
c_rt_lib0clear(&___nl__2);
#line 237
c_rt_lib0move(&___nl__3,___get_global_const(187));
#line 237
c_rt_lib0move(&___nl__4,___get_global_const(188));
#line 237
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 237
c_rt_lib0clear(&___nl__4);
#line 237
c_rt_lib0clear(&___nl__3);
#line 237
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 237
c_rt_lib0clear(&___nl__2);
#line 238
c_rt_lib0move(&___nl__3,___get_global_const(189));
#line 238
c_rt_lib0move(&___nl__4,___get_global_const(190));
#line 238
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 238
c_rt_lib0clear(&___nl__4);
#line 238
c_rt_lib0clear(&___nl__3);
#line 238
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 238
c_rt_lib0clear(&___nl__2);
#line 239
c_rt_lib0move(&___nl__3,___get_global_const(155));
#line 239
c_rt_lib0move(&___nl__4,___get_global_const(191));
#line 239
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 239
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0clear(&___nl__3);
#line 239
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 239
c_rt_lib0clear(&___nl__2);
#line 240
c_rt_lib0move(&___nl__2,___get_global_const(155));
#line 240
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 240
c_rt_lib0move(&___nl__3,___get_global_const(155));
#line 240
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 240
c_rt_lib0clear(&___nl__3);
#line 240
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__2));
#line 240
c_rt_lib0clear(&___nl__2);
#line 240
c_rt_lib0clear(&___nl__1);
#line 240
return NULL;
}

ImmT dfile_priv0is_simple_string(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 244
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 245
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 245
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 245
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 245
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 245
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 245
c_rt_lib0clear(&___nl__0);
#line 245
c_rt_lib0clear(&___nl__1);
#line 245
c_rt_lib0clear(&___nl__2);
#line 245
return ___nl__3;
#line 245
c_rt_lib0clear(&___nl__3);
#line 245
goto label_2;
#line 245
label_2:
#line 245
c_rt_lib0clear(&___nl__2);
#line 246
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 246
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 246
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__4, ___nl__5));
#line 246
c_rt_lib0clear(&___nl__5);
#line 246
c_rt_lib0clear(&___nl__4);
#line 246
c_rt_lib0move(&___nl__2, string0is_letter(___nl__3));
#line 246
c_rt_lib0clear(&___nl__3);
#line 246
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 246
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 246
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 246
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__3, ___nl__4));
#line 246
c_rt_lib0clear(&___nl__4);
#line 246
c_rt_lib0clear(&___nl__3);
#line 246
c_rt_lib0move(&___nl__3,___get_global_const(168));
#line 246
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 246
c_rt_lib0clear(&___nl__3);
#line 246
label_5:
#line 246
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 246
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 246
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 246
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 246
c_rt_lib0clear(&___nl__0);
#line 246
c_rt_lib0clear(&___nl__1);
#line 246
c_rt_lib0clear(&___nl__2);
#line 246
return ___nl__3;
#line 246
c_rt_lib0clear(&___nl__3);
#line 246
goto label_4;
#line 246
label_4:
#line 246
c_rt_lib0clear(&___nl__2);
#line 247
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 247
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 247
label_8:
#line 247
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 247
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 248
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 248
c_rt_lib0move(&___nl__5, string0substr(___nl__0, ___nl__2, ___nl__6));
#line 248
c_rt_lib0clear(&___nl__6);
#line 249
c_rt_lib0move(&___nl__6, string0is_letter(___nl__5));
#line 249
if(c_rt_lib0check_true_native(___nl__6)){ goto label_12;}
#line 249
c_rt_lib0move(&___nl__6, string0is_digit(___nl__5));
#line 249
label_12:
#line 249
if(c_rt_lib0check_true_native(___nl__6)){ goto label_11;}
#line 249
c_rt_lib0move(&___nl__6,___get_global_const(168));
#line 249
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__5, ___nl__6));
#line 249
label_11:
#line 249
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 249
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 249
if(c_rt_lib0check_true_native(___nl__6)){ goto label_10;}
#line 249
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 249
c_rt_lib0clear(&___nl__0);
#line 249
c_rt_lib0clear(&___nl__1);
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
c_rt_lib0clear(&___nl__3);
#line 249
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0clear(&___nl__5);
#line 249
c_rt_lib0clear(&___nl__6);
#line 249
return ___nl__7;
#line 249
c_rt_lib0clear(&___nl__7);
#line 249
goto label_10;
#line 249
label_10:
#line 249
c_rt_lib0clear(&___nl__6);
#line 249
c_rt_lib0clear(&___nl__5);
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 250
goto label_8;
#line 250
label_6:
#line 250
c_rt_lib0clear(&___nl__2);
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 251
c_rt_lib0clear(&___nl__0);
#line 251
c_rt_lib0clear(&___nl__1);
#line 251
return ___nl__2;
#line 251
c_rt_lib0clear(&___nl__2);
#line 251
c_rt_lib0clear(&___nl__1);
#line 251
c_rt_lib0clear(&___nl__0);
#line 251
return NULL;
}

ImmT dfile_priv0sprint_hash_key(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 255
c_rt_lib0move(&___nl__2, dfile_priv0is_simple_string(___nl__1));
#line 255
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 255
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 256
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__1));
#line 257
goto label_1;
#line 257
label_2:
#line 258
c_rt_lib0delete(dfile_priv0sprintstr(___ref___0, ___nl__1));
#line 259
goto label_1;
#line 259
label_1:
#line 259
c_rt_lib0clear(&___nl__2);
#line 259
c_rt_lib0clear(&___nl__1);
#line 259
return NULL;
}

ImmT dfile_priv0get_ind(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
dfile_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 263
c_rt_lib0move(&___nl__2, string0tab());
#line 263
c_rt_lib0move(&___nl__1, string0char_times(___nl__2, ___nl__0));
#line 263
c_rt_lib0clear(&___nl__2);
#line 263
c_rt_lib0clear(&___nl__0);
#line 263
return ___nl__1;
#line 263
c_rt_lib0clear(&___nl__1);
#line 263
c_rt_lib0clear(&___nl__0);
#line 263
return NULL;
}

ImmT dfile_priv0sprint_hash(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
dfile_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
#line 268
c_rt_lib0move(&___nl__4,___get_global_const(173));
#line 268
c_rt_lib0move(&___nl__5, string0lf());
#line 268
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 268
c_rt_lib0clear(&___nl__5);
#line 268
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__4));
#line 268
c_rt_lib0clear(&___nl__4);
#line 269
c_rt_lib0move(&___nl__6, ptd0sim());
#line 269
c_rt_lib0move(&___nl__5, ptd0arr(___nl__6));
#line 269
c_rt_lib0clear(&___nl__6);
#line 269
c_rt_lib0move(&___nl__6, hash0keys(___nl__1));
#line 269
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 269
c_rt_lib0clear(&___nl__6);
#line 269
c_rt_lib0clear(&___nl__5);
#line 270
c_rt_lib0delete(array0sort(&___nl__4));
#line 271
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 271
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 271
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 271
label_3:
#line 271
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 271
if(c_rt_lib0check_true_native(___nl__9)){ goto label_1;}
#line 271
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 272
c_rt_lib0move(&___nl__10, hash0get_value(___nl__1, ___nl__5));
#line 273
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 273
c_rt_lib0move(&___nl__12, c_rt_lib0add(___nl__2, ___nl__12));
#line 273
c_rt_lib0move(&___nl__11, dfile_priv0get_ind(___nl__12));
#line 273
c_rt_lib0clear(&___nl__12);
#line 273
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__11));
#line 273
c_rt_lib0clear(&___nl__11);
#line 274
c_rt_lib0delete(dfile_priv0sprint_hash_key(___ref___0, ___nl__5));
#line 275
c_rt_lib0move(&___nl__11,___get_global_const(192));
#line 275
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__11));
#line 275
c_rt_lib0clear(&___nl__11);
#line 276
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 276
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__2, ___nl__11));
#line 276
c_rt_lib0delete(dfile_priv0sprint(___ref___0, ___nl__10, ___nl__11, ___nl__3));
#line 276
c_rt_lib0clear(&___nl__11);
#line 277
c_rt_lib0move(&___nl__11,___get_global_const(177));
#line 277
c_rt_lib0move(&___nl__12, string0lf());
#line 277
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 277
c_rt_lib0clear(&___nl__12);
#line 277
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__11));
#line 277
c_rt_lib0clear(&___nl__11);
#line 277
c_rt_lib0clear(&___nl__10);
#line 278
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 278
goto label_3;
#line 278
label_1:
#line 278
c_rt_lib0clear(&___nl__5);
#line 278
c_rt_lib0clear(&___nl__6);
#line 278
c_rt_lib0clear(&___nl__7);
#line 278
c_rt_lib0clear(&___nl__8);
#line 278
c_rt_lib0clear(&___nl__9);
#line 279
c_rt_lib0move(&___nl__5, dfile_priv0get_ind(___nl__2));
#line 279
c_rt_lib0move(&___nl__6,___get_global_const(174));
#line 279
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 279
c_rt_lib0clear(&___nl__6);
#line 279
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 279
c_rt_lib0clear(&___nl__5);
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0clear(&___nl__1);
#line 279
c_rt_lib0clear(&___nl__2);
#line 279
c_rt_lib0clear(&___nl__3);
#line 279
return NULL;
}

ImmT dfile_priv0handle_debug(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 283
c_rt_lib0move(&___nl__2, nl0is_hash(___nl__1));
#line 283
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 283
c_rt_lib0move(&___nl__2, nl0is_array(___nl__1));
#line 283
label_4:
#line 283
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 283
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 283
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(160)));
#line 283
c_rt_lib0move(&___nl__2, hash0has_key(___nl__4, ___nl__1));
#line 283
c_rt_lib0clear(&___nl__4);
#line 283
label_3:
#line 283
c_rt_lib0clear(&___nl__3);
#line 283
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 283
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 284
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__1));
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 285
c_rt_lib0clear(&___nl__1);
#line 285
c_rt_lib0clear(&___nl__2);
#line 285
return ___nl__3;
#line 285
c_rt_lib0clear(&___nl__3);
#line 286
goto label_1;
#line 286
label_2:
#line 287
c_rt_lib0move(&___nl__3,___get_global_const(160));
#line 287
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 287
c_rt_lib0move(&___nl__4, c_rt_lib0get_true());
#line 287
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__1, ___nl__4));
#line 287
c_rt_lib0clear(&___nl__4);
#line 287
c_rt_lib0move(&___nl__4,___get_global_const(160));
#line 287
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 287
c_rt_lib0clear(&___nl__4);
#line 287
c_rt_lib0clear(&___nl__3);
#line 288
c_rt_lib0move(&___nl__3, c_rt_lib0get_false());
#line 288
c_rt_lib0clear(&___nl__1);
#line 288
c_rt_lib0clear(&___nl__2);
#line 288
return ___nl__3;
#line 288
c_rt_lib0clear(&___nl__3);
#line 289
goto label_1;
#line 289
label_1:
#line 289
c_rt_lib0clear(&___nl__2);
#line 289
c_rt_lib0clear(&___nl__1);
#line 289
return NULL;
}

ImmT dfile_priv0sprint(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
dfile_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 294
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 294
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__4));
#line 294
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 294
c_rt_lib0move(&___nl__4, dfile_priv0handle_debug(___ref___0, ___nl__1));
#line 294
label_3:
#line 294
c_rt_lib0clear(&___nl__5);
#line 294
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 294
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 294
c_rt_lib0clear(&___nl__1);
#line 294
c_rt_lib0clear(&___nl__2);
#line 294
c_rt_lib0clear(&___nl__3);
#line 294
c_rt_lib0clear(&___nl__4);
#line 294
return NULL;
#line 294
goto label_2;
#line 294
label_2:
#line 294
c_rt_lib0clear(&___nl__4);
#line 295
c_rt_lib0move(&___nl__4, nl0is_sim(___nl__1));
#line 295
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 295
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 296
c_rt_lib0delete(dfile_priv0sprintstr(___ref___0, ___nl__1));
#line 297
goto label_4;
#line 297
label_5:
#line 297
c_rt_lib0move(&___nl__4, nl0is_array(___nl__1));
#line 297
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 297
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 298
c_rt_lib0move(&___nl__5,___get_global_const(179));
#line 298
c_rt_lib0move(&___nl__6, string0lf());
#line 298
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 298
c_rt_lib0clear(&___nl__6);
#line 298
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 298
c_rt_lib0clear(&___nl__5);
#line 299
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 299
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 299
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__1));
#line 299
label_9:
#line 299
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 299
if(c_rt_lib0check_true_native(___nl__9)){ goto label_7;}
#line 299
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__1, ___nl__6));
#line 300
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 300
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__2, ___nl__11));
#line 300
c_rt_lib0move(&___nl__10, dfile_priv0get_ind(___nl__11));
#line 300
c_rt_lib0clear(&___nl__11);
#line 300
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__10));
#line 300
c_rt_lib0clear(&___nl__10);
#line 301
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 301
c_rt_lib0move(&___nl__10, c_rt_lib0add(___nl__2, ___nl__10));
#line 301
c_rt_lib0delete(dfile_priv0sprint(___ref___0, ___nl__5, ___nl__10, ___nl__3));
#line 301
c_rt_lib0clear(&___nl__10);
#line 302
c_rt_lib0move(&___nl__10,___get_global_const(177));
#line 302
c_rt_lib0move(&___nl__11, string0lf());
#line 302
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 302
c_rt_lib0clear(&___nl__11);
#line 302
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__10));
#line 302
c_rt_lib0clear(&___nl__10);
#line 303
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 303
goto label_9;
#line 303
label_7:
#line 303
c_rt_lib0clear(&___nl__5);
#line 303
c_rt_lib0clear(&___nl__6);
#line 303
c_rt_lib0clear(&___nl__7);
#line 303
c_rt_lib0clear(&___nl__8);
#line 303
c_rt_lib0clear(&___nl__9);
#line 304
c_rt_lib0move(&___nl__5, dfile_priv0get_ind(___nl__2));
#line 304
c_rt_lib0move(&___nl__6,___get_global_const(180));
#line 304
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 304
c_rt_lib0clear(&___nl__6);
#line 304
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 304
c_rt_lib0clear(&___nl__5);
#line 305
goto label_4;
#line 305
label_6:
#line 305
c_rt_lib0move(&___nl__4, nl0is_hash(___nl__1));
#line 305
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 305
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 306
c_rt_lib0delete(dfile_priv0sprint_hash(___ref___0, ___nl__1, ___nl__2, ___nl__3));
#line 307
goto label_4;
#line 307
label_10:
#line 307
c_rt_lib0move(&___nl__4, nl0is_variant(___nl__1));
#line 307
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 307
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 308
c_rt_lib0move(&___nl__5,___get_global_const(165));
#line 308
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 308
c_rt_lib0clear(&___nl__5);
#line 309
c_rt_lib0move(&___nl__5, ov0get_element(___nl__1));
#line 309
c_rt_lib0delete(dfile_priv0sprintstr(___ref___0, ___nl__5));
#line 309
c_rt_lib0clear(&___nl__5);
#line 310
c_rt_lib0move(&___nl__5, ov0has_value(___nl__1));
#line 310
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 310
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 311
c_rt_lib0move(&___nl__6,___get_global_const(193));
#line 311
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__6));
#line 311
c_rt_lib0clear(&___nl__6);
#line 312
c_rt_lib0move(&___nl__6, ov0get_value(___nl__1));
#line 312
c_rt_lib0delete(dfile_priv0sprint(___ref___0, ___nl__6, ___nl__2, ___nl__3));
#line 312
c_rt_lib0clear(&___nl__6);
#line 313
goto label_13;
#line 313
label_13:
#line 313
c_rt_lib0clear(&___nl__5);
#line 314
c_rt_lib0move(&___nl__5,___get_global_const(181));
#line 314
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__5));
#line 314
c_rt_lib0clear(&___nl__5);
#line 315
goto label_4;
#line 315
label_11:
#line 316
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 316
nl_die_arg(___nl__5);
#line 316
c_rt_lib0clear(&___nl__5);
#line 317
goto label_4;
#line 317
label_4:
#line 317
c_rt_lib0clear(&___nl__4);
#line 317
c_rt_lib0clear(&___nl__1);
#line 317
c_rt_lib0clear(&___nl__2);
#line 317
c_rt_lib0clear(&___nl__3);
#line 317
return NULL;
}

ImmT dfile_priv0print_net_formatstr(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 321
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 321
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 321
c_rt_lib0clear(&___nl__2);
#line 322
c_rt_lib0move(&___nl__3,___get_global_const(82));
#line 322
c_rt_lib0move(&___nl__4,___get_global_const(186));
#line 322
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 322
c_rt_lib0clear(&___nl__4);
#line 322
c_rt_lib0clear(&___nl__3);
#line 322
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 322
c_rt_lib0clear(&___nl__2);
#line 323
c_rt_lib0move(&___nl__3, string0lf());
#line 323
c_rt_lib0move(&___nl__4,___get_global_const(194));
#line 323
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 323
c_rt_lib0clear(&___nl__4);
#line 323
c_rt_lib0clear(&___nl__3);
#line 323
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 323
c_rt_lib0clear(&___nl__2);
#line 324
c_rt_lib0move(&___nl__3,___get_global_const(187));
#line 324
c_rt_lib0move(&___nl__4,___get_global_const(188));
#line 324
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 324
c_rt_lib0clear(&___nl__4);
#line 324
c_rt_lib0clear(&___nl__3);
#line 324
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 324
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0move(&___nl__3,___get_global_const(189));
#line 325
c_rt_lib0move(&___nl__4,___get_global_const(190));
#line 325
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 325
c_rt_lib0clear(&___nl__4);
#line 325
c_rt_lib0clear(&___nl__3);
#line 325
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 325
c_rt_lib0clear(&___nl__2);
#line 326
c_rt_lib0move(&___nl__3,___get_global_const(155));
#line 326
c_rt_lib0move(&___nl__4,___get_global_const(191));
#line 326
c_rt_lib0move(&___nl__2, string0replace(___nl__1, ___nl__3, ___nl__4));
#line 326
c_rt_lib0clear(&___nl__4);
#line 326
c_rt_lib0clear(&___nl__3);
#line 326
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 326
c_rt_lib0clear(&___nl__2);
#line 327
c_rt_lib0move(&___nl__2,___get_global_const(155));
#line 327
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 327
c_rt_lib0move(&___nl__3,___get_global_const(155));
#line 327
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 327
c_rt_lib0clear(&___nl__3);
#line 327
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__2));
#line 327
c_rt_lib0clear(&___nl__2);
#line 327
c_rt_lib0clear(&___nl__1);
#line 327
return NULL;
}

ImmT dfile_priv0print_net_format(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
dfile_priv0__const__init();
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
#line 331
c_rt_lib0move(&___nl__2, nl0is_sim(___nl__1));
#line 331
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 331
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 332
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___0, ___nl__1));
#line 333
goto label_1;
#line 333
label_2:
#line 333
c_rt_lib0move(&___nl__2, nl0is_array(___nl__1));
#line 333
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 333
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 334
c_rt_lib0move(&___nl__3,___get_global_const(179));
#line 334
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 334
c_rt_lib0clear(&___nl__3);
#line 335
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 335
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 335
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 335
label_6:
#line 335
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 335
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 335
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 336
c_rt_lib0delete(dfile_priv0print_net_format(___ref___0, ___nl__3));
#line 337
c_rt_lib0move(&___nl__8,___get_global_const(177));
#line 337
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__8));
#line 337
c_rt_lib0clear(&___nl__8);
#line 338
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 338
goto label_6;
#line 338
label_4:
#line 338
c_rt_lib0clear(&___nl__3);
#line 338
c_rt_lib0clear(&___nl__4);
#line 338
c_rt_lib0clear(&___nl__5);
#line 338
c_rt_lib0clear(&___nl__6);
#line 338
c_rt_lib0clear(&___nl__7);
#line 339
c_rt_lib0move(&___nl__3,___get_global_const(180));
#line 339
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 339
c_rt_lib0clear(&___nl__3);
#line 340
goto label_1;
#line 340
label_3:
#line 340
c_rt_lib0move(&___nl__2, nl0is_hash(___nl__1));
#line 340
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 340
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 341
c_rt_lib0move(&___nl__3,___get_global_const(173));
#line 341
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 341
c_rt_lib0clear(&___nl__3);
#line 342
c_rt_lib0move(&___nl__3, hash0keys(___nl__1));
#line 342
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 342
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 342
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 342
label_10:
#line 342
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 342
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 342
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 343
c_rt_lib0move(&___nl__9, hash0get_value(___nl__1, ___nl__4));
#line 344
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 344
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__4, ___nl__11));
#line 344
c_rt_lib0move(&___nl__10, dfile_priv0is_simple_string(___nl__11));
#line 344
c_rt_lib0clear(&___nl__11);
#line 344
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 344
if(c_rt_lib0check_true_native(___nl__10)){ goto label_12;}
#line 345
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__4));
#line 346
goto label_11;
#line 346
label_12:
#line 347
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___0, ___nl__4));
#line 348
goto label_11;
#line 348
label_11:
#line 348
c_rt_lib0clear(&___nl__10);
#line 349
c_rt_lib0move(&___nl__10,___get_global_const(175));
#line 349
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__10));
#line 349
c_rt_lib0clear(&___nl__10);
#line 350
c_rt_lib0delete(dfile_priv0print_net_format(___ref___0, ___nl__9));
#line 351
c_rt_lib0move(&___nl__10,___get_global_const(177));
#line 351
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__10));
#line 351
c_rt_lib0clear(&___nl__10);
#line 351
c_rt_lib0clear(&___nl__9);
#line 352
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 352
goto label_10;
#line 352
label_8:
#line 352
c_rt_lib0clear(&___nl__3);
#line 352
c_rt_lib0clear(&___nl__4);
#line 352
c_rt_lib0clear(&___nl__5);
#line 352
c_rt_lib0clear(&___nl__6);
#line 352
c_rt_lib0clear(&___nl__7);
#line 352
c_rt_lib0clear(&___nl__8);
#line 353
c_rt_lib0move(&___nl__3,___get_global_const(174));
#line 353
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 353
c_rt_lib0clear(&___nl__3);
#line 354
goto label_1;
#line 354
label_7:
#line 354
c_rt_lib0move(&___nl__2, nl0is_variant(___nl__1));
#line 354
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 354
if(c_rt_lib0check_true_native(___nl__2)){ goto label_13;}
#line 355
c_rt_lib0move(&___nl__3,___get_global_const(165));
#line 355
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 355
c_rt_lib0clear(&___nl__3);
#line 356
c_rt_lib0move(&___nl__3, ov0get_element(___nl__1));
#line 356
c_rt_lib0delete(dfile_priv0print_net_formatstr(___ref___0, ___nl__3));
#line 356
c_rt_lib0clear(&___nl__3);
#line 357
c_rt_lib0move(&___nl__3, ov0has_value(___nl__1));
#line 357
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 357
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 358
c_rt_lib0move(&___nl__4,___get_global_const(177));
#line 358
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__4));
#line 358
c_rt_lib0clear(&___nl__4);
#line 359
c_rt_lib0move(&___nl__4, ov0get_value(___nl__1));
#line 359
c_rt_lib0delete(dfile_priv0print_net_format(___ref___0, ___nl__4));
#line 359
c_rt_lib0clear(&___nl__4);
#line 360
goto label_15;
#line 360
label_15:
#line 360
c_rt_lib0clear(&___nl__3);
#line 361
c_rt_lib0move(&___nl__3,___get_global_const(181));
#line 361
c_rt_lib0delete(dfile_priv0sp(___ref___0, ___nl__3));
#line 361
c_rt_lib0clear(&___nl__3);
#line 362
goto label_1;
#line 362
label_13:
#line 363
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(1, ___nl__1));
#line 363
nl_die_arg(___nl__3);
#line 363
c_rt_lib0clear(&___nl__3);
#line 364
goto label_1;
#line 364
label_1:
#line 364
c_rt_lib0clear(&___nl__2);
#line 364
c_rt_lib0clear(&___nl__1);
#line 364
return NULL;
}


static ImmT ___const__[3];
static int ___const_init__ = 1;
void dfile_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[2];


for(int i=0;i<2;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 2);
}}
ImmT dfile_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT dfile_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = dfile0state_t0cal();
	break;
case 1:
	___const__[1] = dfile0state_out0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
