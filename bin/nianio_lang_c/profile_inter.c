
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "profile_inter.h"
#include "nsystem.h"
#include "ptd.h"
#include "array.h"
#include "string.h"
#line 1 "profile_inter.nl"

static ImmT *__const__f = NULL;
void profile_inter_priv0__const__init();
ImmT profile_inter_priv0__const__sim(int __nr);
ImmT profile_inter_priv0__const__sing(int __nr);

ImmT profile_inter_priv0print_row(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT profile_inter_priv0diff_time(ImmT ___nl__0,ImmT ___nl__1);


ImmT profile_inter0row_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "profile_inter0row_t");
return profile_inter0row_t();}
ImmT profile_inter0row_t(){
profile_inter_priv0__const__init();
return profile_inter_priv0__const__sing(0);}
ImmT profile_inter0row_t0cal() {
profile_inter_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 12
c_rt_lib0move(&___nl__3, ptd0sim());
#line 12
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 12
c_rt_lib0clear(&___nl__3);
#line 12
c_rt_lib0move(&___nl__3, ptd0sim());
#line 12
c_rt_lib0move(&___nl__6, ptd0none());
#line 12
c_rt_lib0move(&___nl__7, ptd0none());
#line 12
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(400), ___nl__6, ___get_global_const(850), ___nl__7));
#line 12
c_rt_lib0clear(&___nl__6);
#line 12
c_rt_lib0clear(&___nl__7);
#line 12
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 12
c_rt_lib0clear(&___nl__5);
#line 12
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(665), ___nl__2, ___get_global_const(283), ___nl__3, ___get_global_const(73), ___nl__4));
#line 12
c_rt_lib0clear(&___nl__2);
#line 12
c_rt_lib0clear(&___nl__3);
#line 12
c_rt_lib0clear(&___nl__4);
#line 12
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 12
c_rt_lib0clear(&___nl__1);
#line 12
return ___nl__0;
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
return NULL;
}

ImmT profile_inter0begin0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "profile_inter0begin");
return profile_inter0begin(&_tab[0], _tab[1]);}
ImmT profile_inter0begin(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
profile_inter_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 20
c_rt_lib0move(&___nl__4, ptd0sim());
#line 20
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 20
c_rt_lib0clear(&___nl__4);
#line 20
c_rt_lib0move(&___nl__4, nsystem0time_milisec());
#line 20
c_rt_lib0move(&___nl__2, ptd0ensure(___nl__3, ___nl__4));
#line 20
c_rt_lib0clear(&___nl__4);
#line 20
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(400)));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(283), ___nl__1, ___get_global_const(665), ___nl__2, ___get_global_const(73), ___nl__4));
#line 21
c_rt_lib0clear(&___nl__4);
#line 21
c_rt_lib0delete(array0push(___ref___0, ___nl__3));
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0clear(&___nl__2);
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
return NULL;
}

ImmT profile_inter0end0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "profile_inter0end");
return profile_inter0end(&_tab[0], _tab[1]);}
ImmT profile_inter0end(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
profile_inter_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 25
c_rt_lib0move(&___nl__4, ptd0sim());
#line 25
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 25
c_rt_lib0clear(&___nl__4);
#line 25
c_rt_lib0move(&___nl__4, nsystem0time_milisec());
#line 25
c_rt_lib0move(&___nl__2, ptd0ensure(___nl__3, ___nl__4));
#line 25
c_rt_lib0clear(&___nl__4);
#line 25
c_rt_lib0clear(&___nl__3);
#line 26
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(850)));
#line 26
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(283), ___nl__1, ___get_global_const(665), ___nl__2, ___get_global_const(73), ___nl__4));
#line 26
c_rt_lib0clear(&___nl__4);
#line 26
c_rt_lib0delete(array0push(___ref___0, ___nl__3));
#line 26
c_rt_lib0clear(&___nl__3);
#line 26
c_rt_lib0clear(&___nl__2);
#line 26
c_rt_lib0clear(&___nl__1);
#line 26
return NULL;
}

ImmT profile_inter0minus0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "profile_inter0minus");
return profile_inter0minus(_tab[0], _tab[1]);}
ImmT profile_inter0minus(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
profile_inter_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 30
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 30
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 30
c_rt_lib0clear(&___nl__3);
#line 30
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 30
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_arr(___nl__0, ___nl__4));
#line 30
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__2));
#line 30
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__4, ___nl__3));
#line 30
c_rt_lib0clear(&___nl__2);
#line 30
c_rt_lib0clear(&___nl__3);
#line 30
c_rt_lib0clear(&___nl__4);
#line 31
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 31
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 31
c_rt_lib0clear(&___nl__3);
#line 31
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 31
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 31
c_rt_lib0clear(&___nl__4);
#line 31
c_rt_lib0move(&___nl__2, c_rt_lib0lt(___nl__2, ___nl__3));
#line 31
c_rt_lib0clear(&___nl__3);
#line 31
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 31
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 32
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_arr(___nl__0, ___nl__4));
#line 32
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__5));
#line 32
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__4, ___nl__3));
#line 32
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0clear(&___nl__4);
#line 32
c_rt_lib0clear(&___nl__5);
#line 33
c_rt_lib0move(&___nl__3,___get_global_const(966));
#line 33
c_rt_lib0move(&___nl__4,___get_global_const(966));
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0mul_mod(___nl__3, ___nl__4));
#line 33
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 33
c_rt_lib0clear(&___nl__5);
#line 33
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 33
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_arr(___nl__0, ___nl__5));
#line 33
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__3));
#line 33
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__5, ___nl__4));
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0clear(&___nl__4);
#line 33
c_rt_lib0clear(&___nl__5);
#line 34
goto label_1;
#line 34
label_2:
#line 35
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 35
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 35
c_rt_lib0clear(&___nl__4);
#line 35
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_arr(___nl__0, ___nl__5));
#line 35
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__3));
#line 35
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__5, ___nl__4));
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0clear(&___nl__4);
#line 35
c_rt_lib0clear(&___nl__5);
#line 36
goto label_1;
#line 36
label_1:
#line 36
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
return ___nl__0;
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
return NULL;
}

ImmT profile_inter0plus0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "profile_inter0plus");
return profile_inter0plus(_tab[0], _tab[1]);}
ImmT profile_inter0plus(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
profile_inter_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 41
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 41
c_rt_lib0clear(&___nl__3);
#line 41
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 41
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_arr(___nl__0, ___nl__4));
#line 41
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__2));
#line 41
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__4, ___nl__3));
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
c_rt_lib0clear(&___nl__3);
#line 41
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 42
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 42
c_rt_lib0clear(&___nl__3);
#line 42
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_arr(___nl__0, ___nl__4));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__2));
#line 42
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__4, ___nl__3));
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__3);
#line 42
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 43
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0move(&___nl__3,___get_global_const(966));
#line 43
c_rt_lib0move(&___nl__4,___get_global_const(966));
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0mul_mod(___nl__3, ___nl__4));
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0move(&___nl__2, c_rt_lib0gt(___nl__2, ___nl__3));
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 43
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 44
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 44
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_arr(___nl__0, ___nl__4));
#line 44
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 44
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 44
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__4, ___nl__3));
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0clear(&___nl__5);
#line 45
c_rt_lib0move(&___nl__3,___get_global_const(966));
#line 45
c_rt_lib0move(&___nl__4,___get_global_const(966));
#line 45
c_rt_lib0move(&___nl__3, c_rt_lib0mul_mod(___nl__3, ___nl__4));
#line 45
c_rt_lib0clear(&___nl__4);
#line 45
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 45
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_arr(___nl__0, ___nl__5));
#line 45
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__3));
#line 45
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__5, ___nl__4));
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
c_rt_lib0clear(&___nl__4);
#line 45
c_rt_lib0clear(&___nl__5);
#line 46
goto label_2;
#line 46
label_2:
#line 46
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__1);
#line 47
return ___nl__0;
#line 47
c_rt_lib0clear(&___nl__0);
#line 47
c_rt_lib0clear(&___nl__1);
#line 47
return NULL;
}

ImmT profile_inter0save_profile_js0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "profile_inter0save_profile_js");
return profile_inter0save_profile_js(_tab[0]);}
ImmT profile_inter0save_profile_js(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
profile_inter_priv0__const__init();
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
#line 51
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 52
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 53
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 53
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 53
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__0));
#line 53
label_3:
#line 53
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 53
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 54
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(665)));
#line 55
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(283)));
#line 56
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(73)));
#line 56
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(400)));
#line 56
if(c_rt_lib0check_true_native(___nl__11)){ goto label_5;}
#line 59
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(850)));
#line 59
if(c_rt_lib0check_true_native(___nl__11)){ goto label_6;}
#line 59
c_rt_lib0move(&___nl__11,___get_global_const(76));
#line 59
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 59
nl_die_arg(___nl__11);
#line 56
label_5:
#line 57
c_rt_lib0delete(array0push(&___nl__2, ___nl__8));
#line 58
c_rt_lib0move(&___nl__12, profile_inter_priv0print_row(___nl__2, ___nl__8, ___nl__9));
#line 58
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__12));
#line 58
c_rt_lib0clear(&___nl__12);
#line 59
goto label_4;
#line 59
label_6:
#line 60
c_rt_lib0move(&___nl__13,___get_global_const(965));
#line 60
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__9));
#line 60
c_rt_lib0move(&___nl__12, profile_inter_priv0print_row(___nl__2, ___nl__8, ___nl__13));
#line 60
c_rt_lib0clear(&___nl__13);
#line 60
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__12));
#line 60
c_rt_lib0clear(&___nl__12);
#line 61
c_rt_lib0delete(array0pop(&___nl__2));
#line 62
goto label_4;
#line 62
label_4:
#line 62
c_rt_lib0clear(&___nl__10);
#line 62
c_rt_lib0clear(&___nl__11);
#line 62
c_rt_lib0clear(&___nl__8);
#line 62
c_rt_lib0clear(&___nl__9);
#line 63
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 63
goto label_3;
#line 63
label_1:
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
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
return ___nl__1;
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
return NULL;
}

ImmT profile_inter_priv0print_row(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
profile_inter_priv0__const__init();
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
#line 68
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 69
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 69
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 69
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__0));
#line 69
label_3:
#line 69
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 69
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 69
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__0, ___nl__5));
#line 70
c_rt_lib0move(&___nl__9,___get_global_const(960));
#line 70
c_rt_lib0move(&___nl__10, profile_inter_priv0diff_time(___nl__1, ___nl__4));
#line 70
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 70
c_rt_lib0clear(&___nl__10);
#line 71
c_rt_lib0move(&___nl__11,___get_global_const(83));
#line 71
c_rt_lib0move(&___nl__10, string0index2(___nl__9, ___nl__11));
#line 71
c_rt_lib0clear(&___nl__11);
#line 72
c_rt_lib0move(&___nl__11, string0length(___nl__9));
#line 73
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 73
c_rt_lib0move(&___nl__12, c_rt_lib0unary_minus(___nl__12));
#line 73
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__10, ___nl__12));
#line 73
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 73
if(c_rt_lib0check_true_native(___nl__12)){ goto label_5;}
#line 74
c_rt_lib0move(&___nl__13,___get_global_const(961));
#line 74
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__13));
#line 74
c_rt_lib0clear(&___nl__13);
#line 75
goto label_4;
#line 75
label_5:
#line 76
c_rt_lib0move(&___nl__13,___get_global_const(962));
#line 76
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__13));
#line 76
c_rt_lib0clear(&___nl__13);
#line 77
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 77
c_rt_lib0move(&___nl__15,___get_global_const(963));
#line 77
c_rt_lib0move(&___nl__15, c_rt_lib0add(___nl__10, ___nl__15));
#line 77
c_rt_lib0move(&___nl__13, string0substr(___nl__9, ___nl__14, ___nl__15));
#line 77
c_rt_lib0clear(&___nl__15);
#line 77
c_rt_lib0clear(&___nl__14);
#line 77
c_rt_lib0copy(&___nl__9, ___nl__13);
#line 77
c_rt_lib0clear(&___nl__13);
#line 78
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 79
goto label_4;
#line 79
label_4:
#line 79
c_rt_lib0clear(&___nl__12);
#line 80
c_rt_lib0move(&___nl__13,___get_global_const(164));
#line 80
c_rt_lib0move(&___nl__13, c_rt_lib0sub(___nl__11, ___nl__13));
#line 80
c_rt_lib0move(&___nl__14,___get_global_const(963));
#line 80
c_rt_lib0move(&___nl__12, string0substr(___nl__9, ___nl__13, ___nl__14));
#line 80
c_rt_lib0clear(&___nl__14);
#line 80
c_rt_lib0clear(&___nl__13);
#line 80
c_rt_lib0move(&___nl__13,___get_global_const(607));
#line 80
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 80
c_rt_lib0clear(&___nl__13);
#line 80
c_rt_lib0move(&___nl__14,___get_global_const(964));
#line 80
c_rt_lib0move(&___nl__14, c_rt_lib0sub(___nl__11, ___nl__14));
#line 80
c_rt_lib0move(&___nl__15,___get_global_const(164));
#line 80
c_rt_lib0move(&___nl__13, string0substr(___nl__9, ___nl__14, ___nl__15));
#line 80
c_rt_lib0clear(&___nl__15);
#line 80
c_rt_lib0clear(&___nl__14);
#line 80
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 80
c_rt_lib0clear(&___nl__13);
#line 80
c_rt_lib0move(&___nl__13, string0tab());
#line 80
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 80
c_rt_lib0clear(&___nl__13);
#line 80
c_rt_lib0copy(&___nl__9, ___nl__12);
#line 80
c_rt_lib0clear(&___nl__12);
#line 81
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__9));
#line 81
c_rt_lib0clear(&___nl__9);
#line 81
c_rt_lib0clear(&___nl__10);
#line 81
c_rt_lib0clear(&___nl__11);
#line 82
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 82
goto label_3;
#line 82
label_1:
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
#line 83
c_rt_lib0move(&___nl__4, string0tab());
#line 83
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 83
c_rt_lib0clear(&___nl__4);
#line 84
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 85
c_rt_lib0move(&___nl__4, string0lf());
#line 85
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 85
c_rt_lib0clear(&___nl__4);
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
c_rt_lib0clear(&___nl__1);
#line 86
c_rt_lib0clear(&___nl__2);
#line 86
return ___nl__3;
#line 86
c_rt_lib0clear(&___nl__3);
#line 86
c_rt_lib0clear(&___nl__0);
#line 86
c_rt_lib0clear(&___nl__1);
#line 86
c_rt_lib0clear(&___nl__2);
#line 86
return NULL;
}

ImmT profile_inter_priv0diff_time(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
profile_inter_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 90
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 90
c_rt_lib0clear(&___nl__3);
#line 90
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 90
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 90
c_rt_lib0clear(&___nl__4);
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__3));
#line 90
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 91
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 91
c_rt_lib0clear(&___nl__4);
#line 91
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 91
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 91
c_rt_lib0clear(&___nl__5);
#line 91
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 91
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 92
c_rt_lib0move(&___nl__4, c_rt_lib0lt(___nl__3, ___nl__4));
#line 92
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 92
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 93
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 93
c_rt_lib0move(&___nl__2, c_rt_lib0sub_mod(___nl__2, ___nl__5));
#line 93
c_rt_lib0clear(&___nl__5);
#line 94
c_rt_lib0move(&___nl__5,___get_global_const(958));
#line 94
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__5));
#line 94
c_rt_lib0clear(&___nl__5);
#line 95
goto label_2;
#line 95
label_2:
#line 95
c_rt_lib0clear(&___nl__4);
#line 96
c_rt_lib0move(&___nl__4,___get_global_const(959));
#line 96
c_rt_lib0move(&___nl__4, c_rt_lib0mul(___nl__2, ___nl__4));
#line 96
c_rt_lib0move(&___nl__5,___get_global_const(959));
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0div(___nl__3, ___nl__5));
#line 96
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 96
c_rt_lib0clear(&___nl__5);
#line 96
c_rt_lib0clear(&___nl__0);
#line 96
c_rt_lib0clear(&___nl__1);
#line 96
c_rt_lib0clear(&___nl__2);
#line 96
c_rt_lib0clear(&___nl__3);
#line 96
return ___nl__4;
#line 96
c_rt_lib0clear(&___nl__4);
#line 96
c_rt_lib0clear(&___nl__2);
#line 96
c_rt_lib0clear(&___nl__3);
#line 96
c_rt_lib0clear(&___nl__0);
#line 96
c_rt_lib0clear(&___nl__1);
#line 96
return NULL;
}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void profile_inter_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
}}
ImmT profile_inter_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT profile_inter_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = profile_inter0row_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
