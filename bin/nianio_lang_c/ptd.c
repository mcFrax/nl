
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "ptd.h"
#include "hash.h"
#include "array.h"
#include "ov.h"
#include "c_std_lib.h"
#line 1 "ptd.nl"

static ImmT *__const__f = NULL;
void ptd_priv0__const__init();
ImmT ptd_priv0__const__sim(int __nr);
ImmT ptd_priv0__const__sing(int __nr);

ImmT ptd_priv0exec(ImmT ___nl__0,ImmT ___nl__1);
ImmT ptd_priv0try_dynamic_cast(ImmT ___nl__0,ImmT ___nl__1);


ImmT ptd0arr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0arr");
return ptd0arr(_tab[0]);}
ImmT ptd0arr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 12
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(965), ___nl__0));
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
return ___nl__1;
#line 12
c_rt_lib0clear(&___nl__1);
#line 12
c_rt_lib0clear(&___nl__0);
#line 12
return NULL;
}

ImmT ptd0rec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0rec");
return ptd0rec(_tab[0]);}
ImmT ptd0rec(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 16
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(966), ___nl__0));
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return ___nl__1;
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return NULL;
}

ImmT ptd0sim0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0sim");
return ptd0sim();}
ImmT ptd0sim(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(0);}
ImmT ptd0sim0cal() {
ptd_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 20
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(967)));
#line 20
return ___nl__0;
#line 20
c_rt_lib0clear(&___nl__0);
#line 20
return NULL;
}

ImmT ptd0none0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0none");
return ptd0none();}
ImmT ptd0none(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(1);}
ImmT ptd0none0cal() {
ptd_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 24
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(968)));
#line 24
return ___nl__0;
#line 24
c_rt_lib0clear(&___nl__0);
#line 24
return NULL;
}

ImmT ptd0void0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0void");
return ptd0void();}
ImmT ptd0void(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(2);}
ImmT ptd0void0cal() {
ptd_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 28
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(969)));
#line 28
return ___nl__0;
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
return NULL;
}

ImmT ptd0hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0hash");
return ptd0hash(_tab[0]);}
ImmT ptd0hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 32
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(970), ___nl__0));
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
return ___nl__1;
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
return NULL;
}

ImmT ptd0ptd_im0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0ptd_im");
return ptd0ptd_im();}
ImmT ptd0ptd_im(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(3);}
ImmT ptd0ptd_im0cal() {
ptd_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 36
c_rt_lib0move(&___nl__0, c_rt_lib0ov_mk_none(___get_global_const(971)));
#line 36
return ___nl__0;
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return NULL;
}

ImmT ptd0var0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0var");
return ptd0var(_tab[0]);}
ImmT ptd0var(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 40
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 41
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 41
label_3:
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 41
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 41
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 41
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 43
c_rt_lib0copy(&___nl__6, ___nl__3);
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(968)));
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 43
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 44
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(757)));
#line 44
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 44
c_rt_lib0clear(&___nl__7);
#line 45
goto label_4;
#line 45
label_5:
#line 46
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(758), ___nl__3));
#line 46
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 46
c_rt_lib0clear(&___nl__7);
#line 47
goto label_4;
#line 47
label_4:
#line 47
c_rt_lib0clear(&___nl__6);
#line 48
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__2, ___nl__5));
#line 48
c_rt_lib0clear(&___nl__5);
#line 49
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 49
goto label_3;
#line 49
label_1:
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__3);
#line 49
c_rt_lib0clear(&___nl__4);
#line 50
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(625), ___get_global_const(626)));
#line 50
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 50
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(972), ___nl__1));
#line 50
c_rt_lib0move(&___nl__2, ptd0ensure_only_static_do_not_touch_without_permission(___nl__3, ___nl__4));
#line 50
c_rt_lib0clear(&___nl__4);
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0clear(&___nl__0);
#line 50
c_rt_lib0clear(&___nl__1);
#line 50
return ___nl__2;
#line 50
c_rt_lib0clear(&___nl__2);
#line 50
c_rt_lib0clear(&___nl__1);
#line 50
c_rt_lib0clear(&___nl__0);
#line 50
return NULL;
}

ImmT ptd0meta_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0meta_type");
return ptd0meta_type();}
ImmT ptd0meta_type(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(4);}
ImmT ptd0meta_type0cal() {
ptd_priv0__const__init();
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
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(625), ___get_global_const(626)));
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 54
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(625), ___get_global_const(626)));
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 54
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(625), ___get_global_const(626)));
#line 54
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 54
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(ptd0meta_type0ptr, ___get_global_const(625), ___get_global_const(626)));
#line 54
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 54
c_rt_lib0move(&___nl__9, ptd0none());
#line 54
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(758), ___nl__8, ___get_global_const(757), ___nl__9));
#line 54
c_rt_lib0clear(&___nl__8);
#line 54
c_rt_lib0clear(&___nl__9);
#line 54
c_rt_lib0move(&___nl__6, ptd0var(___nl__7));
#line 54
c_rt_lib0clear(&___nl__7);
#line 54
c_rt_lib0move(&___nl__5, ptd0hash(___nl__6));
#line 54
c_rt_lib0clear(&___nl__6);
#line 54
c_rt_lib0move(&___nl__8, ptd0sim());
#line 54
c_rt_lib0move(&___nl__9, ptd0sim());
#line 54
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(111), ___nl__8, ___get_global_const(78), ___nl__9));
#line 54
c_rt_lib0clear(&___nl__8);
#line 54
c_rt_lib0clear(&___nl__9);
#line 54
c_rt_lib0move(&___nl__6, ptd0rec(___nl__7));
#line 54
c_rt_lib0clear(&___nl__7);
#line 54
c_rt_lib0move(&___nl__7, ptd0none());
#line 54
c_rt_lib0move(&___nl__8, ptd0none());
#line 54
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(7, ___get_global_const(966), ___nl__2, ___get_global_const(970), ___nl__3, ___get_global_const(965), ___nl__4, ___get_global_const(972), ___nl__5, ___get_global_const(5), ___nl__6, ___get_global_const(967), ___nl__7, ___get_global_const(971), ___nl__8));
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
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
return ___nl__0;
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
return NULL;
}

ImmT ptd0ensure0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure");
return ptd0ensure(_tab[0], _tab[1]);}
ImmT ptd0ensure(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
#line 69
c_rt_lib0delete(ptd0ensure_dyn(___nl__0, ___nl__1));
#line 70
c_rt_lib0clear(&___nl__0);
#line 70
return ___nl__1;
#line 70
c_rt_lib0clear(&___nl__0);
#line 70
c_rt_lib0clear(&___nl__1);
#line 70
return NULL;
}

ImmT ptd0ensure_only_dynamic0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure_only_dynamic");
return ptd0ensure_only_dynamic(_tab[0], _tab[1]);}
ImmT ptd0ensure_only_dynamic(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
#line 74
c_rt_lib0delete(ptd0ensure_dyn(___nl__0, ___nl__1));
#line 75
c_rt_lib0clear(&___nl__0);
#line 75
return ___nl__1;
#line 75
c_rt_lib0clear(&___nl__0);
#line 75
c_rt_lib0clear(&___nl__1);
#line 75
return NULL;
}

ImmT ptd0ensure_only_static_do_not_touch_without_permission0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure_only_static_do_not_touch_without_permission");
return ptd0ensure_only_static_do_not_touch_without_permission(_tab[0], _tab[1]);}
ImmT ptd0ensure_only_static_do_not_touch_without_permission(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
#line 80
c_rt_lib0clear(&___nl__0);
#line 80
return ___nl__1;
#line 80
c_rt_lib0clear(&___nl__0);
#line 80
c_rt_lib0clear(&___nl__1);
#line 80
return NULL;
}

ImmT ptd0ensure_dyn0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0ensure_dyn");
return ptd0ensure_dyn(_tab[0], _tab[1]);}
ImmT ptd0ensure_dyn(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 84
c_rt_lib0move(&___nl__2, c_std_lib0is_variant(___nl__0));
#line 84
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 84
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 84
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 84
c_rt_lib0move(&___nl__4,___get_global_const(973));
#line 84
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(1, ___nl__4));
#line 84
c_rt_lib0clear(&___nl__4);
#line 84
nl_die_arg(___nl__3);
#line 84
goto label_2;
#line 84
label_2:
#line 84
c_rt_lib0clear(&___nl__2);
#line 84
c_rt_lib0clear(&___nl__3);
#line 85
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(970)));
#line 85
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 90
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(965)));
#line 90
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 95
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(966)));
#line 95
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 102
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(967)));
#line 102
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 104
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(972)));
#line 104
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 115
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(971)));
#line 115
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 116
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(5)));
#line 116
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 116
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 116
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 116
nl_die_arg(___nl__2);
#line 85
label_4:
#line 85
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(970)));
#line 86
c_rt_lib0move(&___nl__4, c_std_lib0is_hash(___nl__1));
#line 86
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 86
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 86
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 86
c_rt_lib0move(&___nl__6,___get_global_const(974));
#line 86
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 86
c_rt_lib0clear(&___nl__6);
#line 86
nl_die_arg(___nl__5);
#line 86
goto label_12;
#line 86
label_12:
#line 86
c_rt_lib0clear(&___nl__4);
#line 86
c_rt_lib0clear(&___nl__5);
#line 87
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__1));
#line 87
label_15:
#line 87
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 87
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 87
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 87
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__1, ___nl__4));
#line 88
c_rt_lib0delete(ptd0ensure_dyn(___nl__3, ___nl__5));
#line 89
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 89
goto label_15;
#line 89
label_13:
#line 89
c_rt_lib0clear(&___nl__4);
#line 89
c_rt_lib0clear(&___nl__5);
#line 89
c_rt_lib0clear(&___nl__6);
#line 89
c_rt_lib0clear(&___nl__3);
#line 90
goto label_3;
#line 90
label_5:
#line 90
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(965)));
#line 91
c_rt_lib0move(&___nl__4, c_std_lib0is_array(___nl__1));
#line 91
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 91
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 91
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 91
c_rt_lib0move(&___nl__6,___get_global_const(975));
#line 91
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 91
c_rt_lib0clear(&___nl__6);
#line 91
nl_die_arg(___nl__5);
#line 91
goto label_17;
#line 91
label_17:
#line 91
c_rt_lib0clear(&___nl__4);
#line 91
c_rt_lib0clear(&___nl__5);
#line 92
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 92
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 92
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__1));
#line 92
label_20:
#line 92
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 92
if(c_rt_lib0check_true_native(___nl__8)){ goto label_18;}
#line 92
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 93
c_rt_lib0delete(ptd0ensure_dyn(___nl__3, ___nl__4));
#line 94
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 94
goto label_20;
#line 94
label_18:
#line 94
c_rt_lib0clear(&___nl__4);
#line 94
c_rt_lib0clear(&___nl__5);
#line 94
c_rt_lib0clear(&___nl__6);
#line 94
c_rt_lib0clear(&___nl__7);
#line 94
c_rt_lib0clear(&___nl__8);
#line 94
c_rt_lib0clear(&___nl__3);
#line 95
goto label_3;
#line 95
label_6:
#line 95
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(966)));
#line 96
c_rt_lib0move(&___nl__4, c_std_lib0is_hash(___nl__1));
#line 96
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 96
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 96
if(c_rt_lib0check_true_native(___nl__4)){ goto label_22;}
#line 96
c_rt_lib0move(&___nl__6,___get_global_const(976));
#line 96
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
nl_die_arg(___nl__5);
#line 96
goto label_22;
#line 96
label_22:
#line 96
c_rt_lib0clear(&___nl__4);
#line 96
c_rt_lib0clear(&___nl__5);
#line 97
c_rt_lib0move(&___nl__4, hash0size(___nl__3));
#line 97
c_rt_lib0move(&___nl__5, hash0size(___nl__1));
#line 97
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 97
c_rt_lib0clear(&___nl__5);
#line 97
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 97
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 97
if(c_rt_lib0check_true_native(___nl__4)){ goto label_24;}
#line 97
c_rt_lib0move(&___nl__6,___get_global_const(977));
#line 97
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 97
c_rt_lib0clear(&___nl__6);
#line 97
nl_die_arg(___nl__5);
#line 97
goto label_24;
#line 97
label_24:
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
c_rt_lib0clear(&___nl__5);
#line 98
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 98
label_27:
#line 98
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 98
if(c_rt_lib0check_true_native(___nl__4)){ goto label_25;}
#line 98
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 98
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 99
c_rt_lib0move(&___nl__7, hash0has_key(___nl__1, ___nl__4));
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 99
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
#line 99
c_rt_lib0move(&___nl__9,___get_global_const(978));
#line 99
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__4));
#line 99
c_rt_lib0move(&___nl__10,___get_global_const(979));
#line 99
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 99
c_rt_lib0clear(&___nl__10);
#line 99
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(1, ___nl__9));
#line 99
c_rt_lib0clear(&___nl__9);
#line 99
nl_die_arg(___nl__8);
#line 99
goto label_29;
#line 99
label_29:
#line 99
c_rt_lib0clear(&___nl__7);
#line 99
c_rt_lib0clear(&___nl__8);
#line 100
c_rt_lib0move(&___nl__7, hash0get_value(___nl__1, ___nl__4));
#line 100
c_rt_lib0delete(ptd0ensure_dyn(___nl__5, ___nl__7));
#line 100
c_rt_lib0clear(&___nl__7);
#line 101
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 101
goto label_27;
#line 101
label_25:
#line 101
c_rt_lib0clear(&___nl__4);
#line 101
c_rt_lib0clear(&___nl__5);
#line 101
c_rt_lib0clear(&___nl__6);
#line 101
c_rt_lib0clear(&___nl__3);
#line 102
goto label_3;
#line 102
label_7:
#line 103
c_rt_lib0move(&___nl__3, c_std_lib0is_sim(___nl__1));
#line 103
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 103
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 103
if(c_rt_lib0check_true_native(___nl__3)){ goto label_31;}
#line 103
c_rt_lib0move(&___nl__5,___get_global_const(980));
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 103
c_rt_lib0clear(&___nl__5);
#line 103
nl_die_arg(___nl__4);
#line 103
goto label_31;
#line 103
label_31:
#line 103
c_rt_lib0clear(&___nl__3);
#line 103
c_rt_lib0clear(&___nl__4);
#line 104
goto label_3;
#line 104
label_8:
#line 104
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(972)));
#line 105
c_rt_lib0move(&___nl__4, c_std_lib0is_variant(___nl__1));
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 105
if(c_rt_lib0check_true_native(___nl__4)){ goto label_33;}
#line 105
c_rt_lib0move(&___nl__6,___get_global_const(981));
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
nl_die_arg(___nl__5);
#line 105
goto label_33;
#line 105
label_33:
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
c_rt_lib0clear(&___nl__5);
#line 106
c_rt_lib0move(&___nl__4, ov0get_element(___nl__1));
#line 107
c_rt_lib0move(&___nl__5, hash0has_key(___nl__3, ___nl__4));
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 107
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 107
if(c_rt_lib0check_true_native(___nl__5)){ goto label_35;}
#line 107
c_rt_lib0move(&___nl__7,___get_global_const(982));
#line 107
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 107
c_rt_lib0move(&___nl__8,___get_global_const(983));
#line 107
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 107
c_rt_lib0clear(&___nl__8);
#line 107
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 107
c_rt_lib0clear(&___nl__7);
#line 107
nl_die_arg(___nl__6);
#line 107
goto label_35;
#line 107
label_35:
#line 107
c_rt_lib0clear(&___nl__5);
#line 107
c_rt_lib0clear(&___nl__6);
#line 108
c_rt_lib0move(&___nl__5, hash0get_value(___nl__3, ___nl__4));
#line 109
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(758)));
#line 109
if(c_rt_lib0check_true_native(___nl__6)){ goto label_37;}
#line 112
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(757)));
#line 112
if(c_rt_lib0check_true_native(___nl__6)){ goto label_38;}
#line 112
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 112
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 112
nl_die_arg(___nl__6);
#line 109
label_37:
#line 109
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(758)));
#line 110
c_rt_lib0move(&___nl__8, ov0has_value(___nl__1));
#line 110
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 110
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 110
if(c_rt_lib0check_true_native(___nl__8)){ goto label_40;}
#line 110
c_rt_lib0move(&___nl__10,___get_global_const(984));
#line 110
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 110
c_rt_lib0clear(&___nl__10);
#line 110
nl_die_arg(___nl__9);
#line 110
goto label_40;
#line 110
label_40:
#line 110
c_rt_lib0clear(&___nl__8);
#line 110
c_rt_lib0clear(&___nl__9);
#line 111
c_rt_lib0move(&___nl__8, ov0get_value(___nl__1));
#line 111
c_rt_lib0delete(ptd0ensure_dyn(___nl__7, ___nl__8));
#line 111
c_rt_lib0clear(&___nl__8);
#line 111
c_rt_lib0clear(&___nl__7);
#line 112
goto label_36;
#line 112
label_38:
#line 113
c_rt_lib0move(&___nl__7, ov0has_value(___nl__1));
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 113
if(c_rt_lib0check_true_native(___nl__7)){ goto label_42;}
#line 113
c_rt_lib0move(&___nl__9,___get_global_const(985));
#line 113
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(1, ___nl__9));
#line 113
c_rt_lib0clear(&___nl__9);
#line 113
nl_die_arg(___nl__8);
#line 113
goto label_42;
#line 113
label_42:
#line 113
c_rt_lib0clear(&___nl__7);
#line 113
c_rt_lib0clear(&___nl__8);
#line 114
goto label_36;
#line 114
label_36:
#line 114
c_rt_lib0clear(&___nl__6);
#line 114
c_rt_lib0clear(&___nl__4);
#line 114
c_rt_lib0clear(&___nl__5);
#line 114
c_rt_lib0clear(&___nl__3);
#line 115
goto label_3;
#line 115
label_9:
#line 116
goto label_3;
#line 116
label_10:
#line 116
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(5)));
#line 117
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 117
c_rt_lib0move(&___nl__4, ptd_priv0exec(___nl__0, ___nl__5));
#line 117
c_rt_lib0clear(&___nl__5);
#line 117
c_rt_lib0delete(ptd0ensure_dyn(___nl__4, ___nl__1));
#line 117
c_rt_lib0clear(&___nl__4);
#line 117
c_rt_lib0clear(&___nl__3);
#line 118
goto label_3;
#line 118
label_3:
#line 118
c_rt_lib0clear(&___nl__2);
#line 118
c_rt_lib0clear(&___nl__0);
#line 118
c_rt_lib0clear(&___nl__1);
#line 118
return NULL;
}

ImmT ptd0is_ref_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0is_ref_type");
return ptd0is_ref_type(_tab[0], _tab[1]);}
ImmT ptd0is_ref_type(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 122
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(5)));
#line 122
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 132
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(971)));
#line 132
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 133
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(967)));
#line 133
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 134
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(965)));
#line 134
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 135
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(972)));
#line 135
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 136
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(966)));
#line 136
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 137
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(970)));
#line 137
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 137
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 137
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 137
nl_die_arg(___nl__2);
#line 122
label_2:
#line 122
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(5)));
#line 123
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(5)));
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 123
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 123
c_rt_lib0clear(&___nl__0);
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0clear(&___nl__4);
#line 123
return ___nl__5;
#line 123
c_rt_lib0clear(&___nl__5);
#line 123
goto label_10;
#line 123
label_10:
#line 123
c_rt_lib0clear(&___nl__4);
#line 124
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 124
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(5)));
#line 125
c_rt_lib0move(&___nl__5, c_std_lib0is_hash(___nl__4));
#line 125
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 125
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 126
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(111)));
#line 126
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(111)));
#line 126
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 126
c_rt_lib0clear(&___nl__7);
#line 126
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 126
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 126
if(c_rt_lib0check_true_native(___nl__6)){ goto label_14;}
#line 126
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 126
c_rt_lib0clear(&___nl__0);
#line 126
c_rt_lib0clear(&___nl__1);
#line 126
c_rt_lib0clear(&___nl__2);
#line 126
c_rt_lib0clear(&___nl__3);
#line 126
c_rt_lib0clear(&___nl__4);
#line 126
c_rt_lib0clear(&___nl__5);
#line 126
c_rt_lib0clear(&___nl__6);
#line 126
return ___nl__7;
#line 126
c_rt_lib0clear(&___nl__7);
#line 126
goto label_14;
#line 126
label_14:
#line 126
c_rt_lib0clear(&___nl__6);
#line 127
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 127
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 127
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__7));
#line 127
c_rt_lib0clear(&___nl__7);
#line 127
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 127
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 127
if(c_rt_lib0check_true_native(___nl__6)){ goto label_16;}
#line 127
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 127
c_rt_lib0clear(&___nl__0);
#line 127
c_rt_lib0clear(&___nl__1);
#line 127
c_rt_lib0clear(&___nl__2);
#line 127
c_rt_lib0clear(&___nl__3);
#line 127
c_rt_lib0clear(&___nl__4);
#line 127
c_rt_lib0clear(&___nl__5);
#line 127
c_rt_lib0clear(&___nl__6);
#line 127
return ___nl__7;
#line 127
c_rt_lib0clear(&___nl__7);
#line 127
goto label_16;
#line 127
label_16:
#line 127
c_rt_lib0clear(&___nl__6);
#line 128
goto label_11;
#line 128
label_12:
#line 129
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__3));
#line 129
c_rt_lib0clear(&___nl__0);
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
c_rt_lib0clear(&___nl__3);
#line 129
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0clear(&___nl__5);
#line 129
return ___nl__6;
#line 129
c_rt_lib0clear(&___nl__6);
#line 130
goto label_11;
#line 130
label_11:
#line 130
c_rt_lib0clear(&___nl__5);
#line 131
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 131
c_rt_lib0clear(&___nl__0);
#line 131
c_rt_lib0clear(&___nl__1);
#line 131
c_rt_lib0clear(&___nl__2);
#line 131
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0clear(&___nl__4);
#line 131
return ___nl__5;
#line 131
c_rt_lib0clear(&___nl__5);
#line 131
c_rt_lib0clear(&___nl__4);
#line 131
c_rt_lib0clear(&___nl__3);
#line 132
goto label_1;
#line 132
label_3:
#line 133
goto label_1;
#line 133
label_4:
#line 134
goto label_1;
#line 134
label_5:
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(965)));
#line 134
c_rt_lib0clear(&___nl__3);
#line 135
goto label_1;
#line 135
label_6:
#line 135
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(972)));
#line 135
c_rt_lib0clear(&___nl__3);
#line 136
goto label_1;
#line 136
label_7:
#line 136
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(966)));
#line 136
c_rt_lib0clear(&___nl__3);
#line 137
goto label_1;
#line 137
label_8:
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(970)));
#line 137
c_rt_lib0clear(&___nl__3);
#line 138
goto label_1;
#line 138
label_1:
#line 138
c_rt_lib0clear(&___nl__2);
#line 139
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
return ___nl__2;
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
return NULL;
}

ImmT ptd_priv0exec(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 143
c_rt_lib0move(&___nl__2, c_std_lib0exec(___nl__0, &___nl__1));
#line 143
c_rt_lib0clear(&___nl__0);
#line 143
c_rt_lib0clear(&___nl__1);
#line 143
return ___nl__2;
#line 143
c_rt_lib0clear(&___nl__2);
#line 143
c_rt_lib0clear(&___nl__0);
#line 143
c_rt_lib0clear(&___nl__1);
#line 143
return NULL;
}

ImmT ptd0cast_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0cast_t");
return ptd0cast_t();}
ImmT ptd0cast_t(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(5);}
ImmT ptd0cast_t0cal() {
ptd_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 147
c_rt_lib0move(&___nl__2, ptd0ptd_im());
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(ptd0cast_error_t0ptr, ___get_global_const(625), ___get_global_const(986)));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 147
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__2, ___get_global_const(44), ___nl__3));
#line 147
c_rt_lib0clear(&___nl__2);
#line 147
c_rt_lib0clear(&___nl__3);
#line 147
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 147
c_rt_lib0clear(&___nl__1);
#line 147
return ___nl__0;
#line 147
c_rt_lib0clear(&___nl__0);
#line 147
return NULL;
}

ImmT ptd0try_cast0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0try_cast");
return ptd0try_cast(_tab[0], _tab[1]);}
ImmT ptd0try_cast(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 154
c_rt_lib0move(&___nl__2, ptd0try_dynamic_cast(___nl__0, ___nl__1));
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
return ___nl__2;
#line 154
c_rt_lib0clear(&___nl__2);
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
return NULL;
}

ImmT ptd0try_dynamic_cast0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ptd0try_dynamic_cast");
return ptd0try_dynamic_cast(_tab[0], _tab[1]);}
ImmT ptd0try_dynamic_cast(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 157
c_rt_lib0move(&___nl__2, ptd_priv0try_dynamic_cast(___nl__0, ___nl__1));
#line 158
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 158
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 158
c_rt_lib0move(&___nl__3, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 158
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 159
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 159
c_rt_lib0clear(&___nl__0);
#line 159
c_rt_lib0clear(&___nl__1);
#line 159
c_rt_lib0clear(&___nl__2);
#line 159
c_rt_lib0clear(&___nl__3);
#line 159
return ___nl__4;
#line 159
c_rt_lib0clear(&___nl__4);
#line 160
goto label_2;
#line 160
label_2:
#line 160
c_rt_lib0clear(&___nl__3);
#line 161
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__2));
#line 161
c_rt_lib0clear(&___nl__0);
#line 161
c_rt_lib0clear(&___nl__1);
#line 161
c_rt_lib0clear(&___nl__2);
#line 161
return ___nl__3;
#line 161
c_rt_lib0clear(&___nl__3);
#line 161
c_rt_lib0clear(&___nl__2);
#line 161
c_rt_lib0clear(&___nl__0);
#line 161
c_rt_lib0clear(&___nl__1);
#line 161
return NULL;
}

ImmT ptd0imm_kind_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0imm_kind_t");
return ptd0imm_kind_t();}
ImmT ptd0imm_kind_t(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(6);}
ImmT ptd0imm_kind_t0cal() {
ptd_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 165
c_rt_lib0move(&___nl__2, ptd0none());
#line 165
c_rt_lib0move(&___nl__3, ptd0none());
#line 165
c_rt_lib0move(&___nl__4, ptd0none());
#line 165
c_rt_lib0move(&___nl__5, ptd0none());
#line 165
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(291), ___nl__2, ___get_global_const(282), ___nl__3, ___get_global_const(788), ___nl__4, ___get_global_const(3), ___nl__5));
#line 165
c_rt_lib0clear(&___nl__2);
#line 165
c_rt_lib0clear(&___nl__3);
#line 165
c_rt_lib0clear(&___nl__4);
#line 165
c_rt_lib0clear(&___nl__5);
#line 165
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 165
c_rt_lib0clear(&___nl__1);
#line 165
return ___nl__0;
#line 165
c_rt_lib0clear(&___nl__0);
#line 165
return NULL;
}

ImmT ptd0cast_error_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ptd0cast_error_t");
return ptd0cast_error_t();}
ImmT ptd0cast_error_t(){
ptd_priv0__const__init();
return ptd_priv0__const__sing(7);}
ImmT ptd0cast_error_t0cal() {
ptd_priv0__const__init();
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
ImmT ___nl__11 = NULL;
ImmT ___nl__12 = NULL;
ImmT ___nl__13 = NULL;
ImmT ___nl__14 = NULL;
ImmT ___nl__15 = NULL;
ImmT ___nl__16 = NULL;
#line 174
c_rt_lib0move(&___nl__5, ptd0sim());
#line 174
c_rt_lib0move(&___nl__6, ptd0sim());
#line 174
c_rt_lib0move(&___nl__7, ptd0sim());
#line 174
c_rt_lib0move(&___nl__8, ptd0sim());
#line 174
c_rt_lib0move(&___nl__9, ptd0ptd_im());
#line 174
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(5, ___get_global_const(802), ___nl__5, ___get_global_const(987), ___nl__6, ___get_global_const(988), ___nl__7, ___get_global_const(989), ___nl__8, ___get_global_const(990), ___nl__9));
#line 174
c_rt_lib0clear(&___nl__5);
#line 174
c_rt_lib0clear(&___nl__6);
#line 174
c_rt_lib0clear(&___nl__7);
#line 174
c_rt_lib0clear(&___nl__8);
#line 174
c_rt_lib0clear(&___nl__9);
#line 174
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 174
c_rt_lib0clear(&___nl__4);
#line 174
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_const(625), ___get_global_const(991)));
#line 174
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 174
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_const(625), ___get_global_const(991)));
#line 174
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 174
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_const(625), ___get_global_const(991)));
#line 174
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 174
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_const(625), ___get_global_const(991)));
#line 174
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 174
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_const(625), ___get_global_const(991)));
#line 174
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 174
c_rt_lib0move(&___nl__11, c_rt_lib0func_new(ptd0imm_kind_t0ptr, ___get_global_const(625), ___get_global_const(991)));
#line 174
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__11));
#line 174
c_rt_lib0move(&___nl__12, ptd0sim());
#line 174
c_rt_lib0move(&___nl__13, ptd0sim());
#line 174
c_rt_lib0move(&___nl__14, ptd0sim());
#line 174
c_rt_lib0move(&___nl__15, ptd0sim());
#line 174
c_rt_lib0move(&___nl__16, ptd0sim());
#line 174
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(11, ___get_global_const(992), ___nl__6, ___get_global_const(993), ___nl__7, ___get_global_const(994), ___nl__8, ___get_global_const(995), ___nl__9, ___get_global_const(996), ___nl__10, ___get_global_const(997), ___nl__11, ___get_global_const(998), ___nl__12, ___get_global_const(999), ___nl__13, ___get_global_const(1000), ___nl__14, ___get_global_const(1001), ___nl__15, ___get_global_const(1002), ___nl__16));
#line 174
c_rt_lib0clear(&___nl__6);
#line 174
c_rt_lib0clear(&___nl__7);
#line 174
c_rt_lib0clear(&___nl__8);
#line 174
c_rt_lib0clear(&___nl__9);
#line 174
c_rt_lib0clear(&___nl__10);
#line 174
c_rt_lib0clear(&___nl__11);
#line 174
c_rt_lib0clear(&___nl__12);
#line 174
c_rt_lib0clear(&___nl__13);
#line 174
c_rt_lib0clear(&___nl__14);
#line 174
c_rt_lib0clear(&___nl__15);
#line 174
c_rt_lib0clear(&___nl__16);
#line 174
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 174
c_rt_lib0clear(&___nl__5);
#line 174
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(1003), ___nl__3, ___get_global_const(97), ___nl__4));
#line 174
c_rt_lib0clear(&___nl__3);
#line 174
c_rt_lib0clear(&___nl__4);
#line 174
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 174
c_rt_lib0clear(&___nl__2);
#line 174
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 174
c_rt_lib0clear(&___nl__1);
#line 174
return ___nl__0;
#line 174
c_rt_lib0clear(&___nl__0);
#line 174
return NULL;
}

ImmT ptd0get_imm_kind0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ptd0get_imm_kind");
return ptd0get_imm_kind(_tab[0]);}
ImmT ptd0get_imm_kind(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ptd_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 198
c_rt_lib0move(&___nl__1, c_std_lib0is_sim(___nl__0));
#line 198
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 198
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 198
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(291)));
#line 198
c_rt_lib0clear(&___nl__0);
#line 198
c_rt_lib0clear(&___nl__1);
#line 198
return ___nl__2;
#line 198
c_rt_lib0clear(&___nl__2);
#line 198
goto label_2;
#line 198
label_2:
#line 198
c_rt_lib0clear(&___nl__1);
#line 199
c_rt_lib0move(&___nl__1, c_std_lib0is_variant(___nl__0));
#line 199
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 199
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 199
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(788)));
#line 199
c_rt_lib0clear(&___nl__0);
#line 199
c_rt_lib0clear(&___nl__1);
#line 199
return ___nl__2;
#line 199
c_rt_lib0clear(&___nl__2);
#line 199
goto label_4;
#line 199
label_4:
#line 199
c_rt_lib0clear(&___nl__1);
#line 200
c_rt_lib0move(&___nl__1, c_std_lib0is_hash(___nl__0));
#line 200
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 200
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 200
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(282)));
#line 200
c_rt_lib0clear(&___nl__0);
#line 200
c_rt_lib0clear(&___nl__1);
#line 200
return ___nl__2;
#line 200
c_rt_lib0clear(&___nl__2);
#line 200
goto label_6;
#line 200
label_6:
#line 200
c_rt_lib0clear(&___nl__1);
#line 201
c_rt_lib0move(&___nl__1, c_std_lib0is_array(___nl__0));
#line 201
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 201
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 201
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(3)));
#line 201
c_rt_lib0clear(&___nl__0);
#line 201
c_rt_lib0clear(&___nl__1);
#line 201
return ___nl__2;
#line 201
c_rt_lib0clear(&___nl__2);
#line 201
goto label_8;
#line 201
label_8:
#line 201
c_rt_lib0clear(&___nl__1);
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 202
nl_die_arg(___nl__1);
#line 202
c_rt_lib0clear(&___nl__1);
#line 202
c_rt_lib0clear(&___nl__0);
#line 202
return NULL;
}

ImmT ptd_priv0try_dynamic_cast(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
ptd_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 205
c_rt_lib0move(&___nl__2, c_std_lib0is_variant(___nl__0));
#line 205
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 205
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 205
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 205
c_rt_lib0move(&___nl__4, ptd0get_imm_kind(___nl__0));
#line 205
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(992), ___nl__4));
#line 205
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(97), ___nl__4));
#line 205
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(1, ___nl__4));
#line 205
c_rt_lib0clear(&___nl__4);
#line 205
c_rt_lib0clear(&___nl__0);
#line 205
c_rt_lib0clear(&___nl__1);
#line 205
c_rt_lib0clear(&___nl__2);
#line 205
return ___nl__3;
#line 205
c_rt_lib0clear(&___nl__3);
#line 205
goto label_2;
#line 205
label_2:
#line 205
c_rt_lib0clear(&___nl__2);
#line 206
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(970)));
#line 206
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 215
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(965)));
#line 215
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 224
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(966)));
#line 224
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 235
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(967)));
#line 235
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 237
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(972)));
#line 237
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 252
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(971)));
#line 252
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__0, ___get_global_const(5)));
#line 253
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 253
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__0));
#line 253
nl_die_arg(___nl__2);
#line 206
label_4:
#line 206
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(970)));
#line 207
c_rt_lib0move(&___nl__4, c_std_lib0is_hash(___nl__1));
#line 207
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 207
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 207
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 207
c_rt_lib0move(&___nl__6, ptd0get_imm_kind(___nl__0));
#line 207
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(993), ___nl__6));
#line 207
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(97), ___nl__6));
#line 207
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 207
c_rt_lib0clear(&___nl__6);
#line 207
c_rt_lib0clear(&___nl__0);
#line 207
c_rt_lib0clear(&___nl__1);
#line 207
c_rt_lib0clear(&___nl__2);
#line 207
c_rt_lib0clear(&___nl__3);
#line 207
c_rt_lib0clear(&___nl__4);
#line 207
return ___nl__5;
#line 207
c_rt_lib0clear(&___nl__5);
#line 207
goto label_12;
#line 207
label_12:
#line 207
c_rt_lib0clear(&___nl__4);
#line 208
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__1));
#line 208
label_15:
#line 208
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 208
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 208
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 208
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__1, ___nl__4));
#line 209
c_rt_lib0move(&___nl__7, ptd_priv0try_dynamic_cast(___nl__3, ___nl__5));
#line 210
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 210
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 210
c_rt_lib0move(&___nl__8, c_rt_lib0gt(___nl__8, ___nl__9));
#line 210
c_rt_lib0clear(&___nl__9);
#line 210
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 210
if(c_rt_lib0check_true_native(___nl__8)){ goto label_17;}
#line 211
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(802), ___nl__4));
#line 211
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(1003), ___nl__9));
#line 211
c_rt_lib0delete(array0push(&___nl__7, ___nl__9));
#line 211
c_rt_lib0clear(&___nl__9);
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
c_rt_lib0clear(&___nl__6);
#line 212
c_rt_lib0clear(&___nl__8);
#line 212
return ___nl__7;
#line 213
goto label_17;
#line 213
label_17:
#line 213
c_rt_lib0clear(&___nl__8);
#line 213
c_rt_lib0clear(&___nl__7);
#line 214
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 214
goto label_15;
#line 214
label_13:
#line 214
c_rt_lib0clear(&___nl__4);
#line 214
c_rt_lib0clear(&___nl__5);
#line 214
c_rt_lib0clear(&___nl__6);
#line 214
c_rt_lib0clear(&___nl__3);
#line 215
goto label_3;
#line 215
label_5:
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(965)));
#line 216
c_rt_lib0move(&___nl__4, c_std_lib0is_array(___nl__1));
#line 216
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 216
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 216
if(c_rt_lib0check_true_native(___nl__4)){ goto label_19;}
#line 216
c_rt_lib0move(&___nl__6, ptd0get_imm_kind(___nl__0));
#line 216
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(994), ___nl__6));
#line 216
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(97), ___nl__6));
#line 216
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 216
c_rt_lib0clear(&___nl__6);
#line 216
c_rt_lib0clear(&___nl__0);
#line 216
c_rt_lib0clear(&___nl__1);
#line 216
c_rt_lib0clear(&___nl__2);
#line 216
c_rt_lib0clear(&___nl__3);
#line 216
c_rt_lib0clear(&___nl__4);
#line 216
return ___nl__5;
#line 216
c_rt_lib0clear(&___nl__5);
#line 216
goto label_19;
#line 216
label_19:
#line 216
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0move(&___nl__4, array0len(___nl__1));
#line 217
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 217
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 217
label_22:
#line 217
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__5, ___nl__4));
#line 217
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 218
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 218
c_rt_lib0move(&___nl__8, ptd_priv0try_dynamic_cast(___nl__3, ___nl__9));
#line 218
c_rt_lib0clear(&___nl__9);
#line 219
c_rt_lib0move(&___nl__9, array0len(___nl__8));
#line 219
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 219
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__9, ___nl__10));
#line 219
c_rt_lib0clear(&___nl__10);
#line 219
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 219
if(c_rt_lib0check_true_native(___nl__9)){ goto label_24;}
#line 220
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(987), ___nl__5));
#line 220
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(1003), ___nl__10));
#line 220
c_rt_lib0delete(array0push(&___nl__8, ___nl__10));
#line 220
c_rt_lib0clear(&___nl__10);
#line 221
c_rt_lib0clear(&___nl__0);
#line 221
c_rt_lib0clear(&___nl__1);
#line 221
c_rt_lib0clear(&___nl__2);
#line 221
c_rt_lib0clear(&___nl__3);
#line 221
c_rt_lib0clear(&___nl__4);
#line 221
c_rt_lib0clear(&___nl__5);
#line 221
c_rt_lib0clear(&___nl__6);
#line 221
c_rt_lib0clear(&___nl__7);
#line 221
c_rt_lib0clear(&___nl__9);
#line 221
return ___nl__8;
#line 222
goto label_24;
#line 222
label_24:
#line 222
c_rt_lib0clear(&___nl__9);
#line 222
c_rt_lib0clear(&___nl__8);
#line 223
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 223
goto label_22;
#line 223
label_20:
#line 223
c_rt_lib0clear(&___nl__4);
#line 223
c_rt_lib0clear(&___nl__5);
#line 223
c_rt_lib0clear(&___nl__6);
#line 223
c_rt_lib0clear(&___nl__7);
#line 223
c_rt_lib0clear(&___nl__3);
#line 224
goto label_3;
#line 224
label_6:
#line 224
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(966)));
#line 225
c_rt_lib0move(&___nl__4, c_std_lib0is_hash(___nl__1));
#line 225
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 225
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 225
if(c_rt_lib0check_true_native(___nl__4)){ goto label_26;}
#line 225
c_rt_lib0move(&___nl__6, ptd0get_imm_kind(___nl__0));
#line 225
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(995), ___nl__6));
#line 225
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(97), ___nl__6));
#line 225
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 225
c_rt_lib0clear(&___nl__6);
#line 225
c_rt_lib0clear(&___nl__0);
#line 225
c_rt_lib0clear(&___nl__1);
#line 225
c_rt_lib0clear(&___nl__2);
#line 225
c_rt_lib0clear(&___nl__3);
#line 225
c_rt_lib0clear(&___nl__4);
#line 225
return ___nl__5;
#line 225
c_rt_lib0clear(&___nl__5);
#line 225
goto label_26;
#line 225
label_26:
#line 225
c_rt_lib0clear(&___nl__4);
#line 226
c_rt_lib0move(&___nl__4, hash0size(___nl__3));
#line 226
c_rt_lib0move(&___nl__5, hash0size(___nl__1));
#line 226
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 226
c_rt_lib0clear(&___nl__5);
#line 226
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 226
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 226
if(c_rt_lib0check_true_native(___nl__4)){ goto label_28;}
#line 226
c_rt_lib0move(&___nl__6, hash0size(___nl__1));
#line 226
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(998), ___nl__6));
#line 226
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(97), ___nl__6));
#line 226
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 226
c_rt_lib0clear(&___nl__6);
#line 226
c_rt_lib0clear(&___nl__0);
#line 226
c_rt_lib0clear(&___nl__1);
#line 226
c_rt_lib0clear(&___nl__2);
#line 226
c_rt_lib0clear(&___nl__3);
#line 226
c_rt_lib0clear(&___nl__4);
#line 226
return ___nl__5;
#line 226
c_rt_lib0clear(&___nl__5);
#line 226
goto label_28;
#line 226
label_28:
#line 226
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 227
label_31:
#line 227
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 227
if(c_rt_lib0check_true_native(___nl__4)){ goto label_29;}
#line 227
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 227
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 228
c_rt_lib0move(&___nl__7, hash0has_key(___nl__1, ___nl__4));
#line 228
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 228
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 228
if(c_rt_lib0check_true_native(___nl__7)){ goto label_33;}
#line 228
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(999), ___nl__4));
#line 228
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(97), ___nl__9));
#line 228
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(1, ___nl__9));
#line 228
c_rt_lib0clear(&___nl__9);
#line 228
c_rt_lib0clear(&___nl__0);
#line 228
c_rt_lib0clear(&___nl__1);
#line 228
c_rt_lib0clear(&___nl__2);
#line 228
c_rt_lib0clear(&___nl__3);
#line 228
c_rt_lib0clear(&___nl__4);
#line 228
c_rt_lib0clear(&___nl__5);
#line 228
c_rt_lib0clear(&___nl__6);
#line 228
c_rt_lib0clear(&___nl__7);
#line 228
return ___nl__8;
#line 228
c_rt_lib0clear(&___nl__8);
#line 228
goto label_33;
#line 228
label_33:
#line 228
c_rt_lib0clear(&___nl__7);
#line 229
c_rt_lib0move(&___nl__8, hash0get_value(___nl__1, ___nl__4));
#line 229
c_rt_lib0move(&___nl__7, ptd_priv0try_dynamic_cast(___nl__5, ___nl__8));
#line 229
c_rt_lib0clear(&___nl__8);
#line 230
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 230
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 230
c_rt_lib0move(&___nl__8, c_rt_lib0gt(___nl__8, ___nl__9));
#line 230
c_rt_lib0clear(&___nl__9);
#line 230
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 230
if(c_rt_lib0check_true_native(___nl__8)){ goto label_35;}
#line 231
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(988), ___nl__4));
#line 231
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(1003), ___nl__9));
#line 231
c_rt_lib0delete(array0push(&___nl__7, ___nl__9));
#line 231
c_rt_lib0clear(&___nl__9);
#line 232
c_rt_lib0clear(&___nl__0);
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0clear(&___nl__3);
#line 232
c_rt_lib0clear(&___nl__4);
#line 232
c_rt_lib0clear(&___nl__5);
#line 232
c_rt_lib0clear(&___nl__6);
#line 232
c_rt_lib0clear(&___nl__8);
#line 232
return ___nl__7;
#line 233
goto label_35;
#line 233
label_35:
#line 233
c_rt_lib0clear(&___nl__8);
#line 233
c_rt_lib0clear(&___nl__7);
#line 234
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 234
goto label_31;
#line 234
label_29:
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0clear(&___nl__6);
#line 234
c_rt_lib0clear(&___nl__3);
#line 235
goto label_3;
#line 235
label_7:
#line 236
c_rt_lib0move(&___nl__3, c_std_lib0is_sim(___nl__1));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 236
if(c_rt_lib0check_true_native(___nl__3)){ goto label_37;}
#line 236
c_rt_lib0move(&___nl__5, ptd0get_imm_kind(___nl__0));
#line 236
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(996), ___nl__5));
#line 236
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(97), ___nl__5));
#line 236
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 236
c_rt_lib0clear(&___nl__5);
#line 236
c_rt_lib0clear(&___nl__0);
#line 236
c_rt_lib0clear(&___nl__1);
#line 236
c_rt_lib0clear(&___nl__2);
#line 236
c_rt_lib0clear(&___nl__3);
#line 236
return ___nl__4;
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
goto label_37;
#line 236
label_37:
#line 236
c_rt_lib0clear(&___nl__3);
#line 237
goto label_3;
#line 237
label_8:
#line 237
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(972)));
#line 238
c_rt_lib0move(&___nl__4, c_std_lib0is_variant(___nl__1));
#line 238
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 238
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 238
if(c_rt_lib0check_true_native(___nl__4)){ goto label_39;}
#line 238
c_rt_lib0move(&___nl__6, ptd0get_imm_kind(___nl__0));
#line 238
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(997), ___nl__6));
#line 238
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(97), ___nl__6));
#line 238
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 238
c_rt_lib0clear(&___nl__6);
#line 238
c_rt_lib0clear(&___nl__0);
#line 238
c_rt_lib0clear(&___nl__1);
#line 238
c_rt_lib0clear(&___nl__2);
#line 238
c_rt_lib0clear(&___nl__3);
#line 238
c_rt_lib0clear(&___nl__4);
#line 238
return ___nl__5;
#line 238
c_rt_lib0clear(&___nl__5);
#line 238
goto label_39;
#line 238
label_39:
#line 238
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0move(&___nl__4, ov0get_element(___nl__1));
#line 240
c_rt_lib0move(&___nl__5, hash0has_key(___nl__3, ___nl__4));
#line 240
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 240
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 240
if(c_rt_lib0check_true_native(___nl__5)){ goto label_41;}
#line 240
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 240
c_rt_lib0move(&___nl__7, c_rt_lib0concat_new(___nl__4, ___nl__7));
#line 240
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1000), ___nl__7));
#line 240
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(97), ___nl__7));
#line 240
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 240
c_rt_lib0clear(&___nl__7);
#line 240
c_rt_lib0clear(&___nl__0);
#line 240
c_rt_lib0clear(&___nl__1);
#line 240
c_rt_lib0clear(&___nl__2);
#line 240
c_rt_lib0clear(&___nl__3);
#line 240
c_rt_lib0clear(&___nl__4);
#line 240
c_rt_lib0clear(&___nl__5);
#line 240
return ___nl__6;
#line 240
c_rt_lib0clear(&___nl__6);
#line 240
goto label_41;
#line 240
label_41:
#line 240
c_rt_lib0clear(&___nl__5);
#line 241
c_rt_lib0move(&___nl__5, hash0get_value(___nl__3, ___nl__4));
#line 242
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(758)));
#line 242
if(c_rt_lib0check_true_native(___nl__6)){ goto label_43;}
#line 249
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(757)));
#line 249
if(c_rt_lib0check_true_native(___nl__6)){ goto label_44;}
#line 249
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 249
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 249
nl_die_arg(___nl__6);
#line 242
label_43:
#line 242
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(758)));
#line 243
c_rt_lib0move(&___nl__8, ov0has_value(___nl__1));
#line 243
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 243
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 243
if(c_rt_lib0check_true_native(___nl__8)){ goto label_46;}
#line 243
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 243
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__4, ___nl__10));
#line 243
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(1002), ___nl__10));
#line 243
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(97), ___nl__10));
#line 243
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 243
c_rt_lib0clear(&___nl__10);
#line 243
c_rt_lib0clear(&___nl__0);
#line 243
c_rt_lib0clear(&___nl__1);
#line 243
c_rt_lib0clear(&___nl__2);
#line 243
c_rt_lib0clear(&___nl__3);
#line 243
c_rt_lib0clear(&___nl__4);
#line 243
c_rt_lib0clear(&___nl__5);
#line 243
c_rt_lib0clear(&___nl__6);
#line 243
c_rt_lib0clear(&___nl__7);
#line 243
c_rt_lib0clear(&___nl__8);
#line 243
return ___nl__9;
#line 243
c_rt_lib0clear(&___nl__9);
#line 243
goto label_46;
#line 243
label_46:
#line 243
c_rt_lib0clear(&___nl__8);
#line 244
c_rt_lib0move(&___nl__9, ov0get_value(___nl__1));
#line 244
c_rt_lib0move(&___nl__8, ptd_priv0try_dynamic_cast(___nl__7, ___nl__9));
#line 244
c_rt_lib0clear(&___nl__9);
#line 245
c_rt_lib0move(&___nl__9, array0len(___nl__8));
#line 245
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 245
c_rt_lib0move(&___nl__9, c_rt_lib0gt(___nl__9, ___nl__10));
#line 245
c_rt_lib0clear(&___nl__10);
#line 245
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 245
if(c_rt_lib0check_true_native(___nl__9)){ goto label_48;}
#line 246
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 246
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__4, ___nl__10));
#line 246
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(989), ___nl__10));
#line 246
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(1003), ___nl__10));
#line 246
c_rt_lib0delete(array0push(&___nl__8, ___nl__10));
#line 246
c_rt_lib0clear(&___nl__10);
#line 247
c_rt_lib0clear(&___nl__0);
#line 247
c_rt_lib0clear(&___nl__1);
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
c_rt_lib0clear(&___nl__7);
#line 247
c_rt_lib0clear(&___nl__9);
#line 247
return ___nl__8;
#line 248
goto label_48;
#line 248
label_48:
#line 248
c_rt_lib0clear(&___nl__9);
#line 248
c_rt_lib0clear(&___nl__8);
#line 248
c_rt_lib0clear(&___nl__7);
#line 249
goto label_42;
#line 249
label_44:
#line 250
c_rt_lib0move(&___nl__7, ov0has_value(___nl__1));
#line 250
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 250
if(c_rt_lib0check_true_native(___nl__7)){ goto label_50;}
#line 250
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 250
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__4, ___nl__9));
#line 250
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(1001), ___nl__9));
#line 250
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(97), ___nl__9));
#line 250
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(1, ___nl__9));
#line 250
c_rt_lib0clear(&___nl__9);
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
c_rt_lib0clear(&___nl__2);
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
c_rt_lib0clear(&___nl__4);
#line 250
c_rt_lib0clear(&___nl__5);
#line 250
c_rt_lib0clear(&___nl__6);
#line 250
c_rt_lib0clear(&___nl__7);
#line 250
return ___nl__8;
#line 250
c_rt_lib0clear(&___nl__8);
#line 250
goto label_50;
#line 250
label_50:
#line 250
c_rt_lib0clear(&___nl__7);
#line 251
goto label_42;
#line 251
label_42:
#line 251
c_rt_lib0clear(&___nl__6);
#line 251
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0clear(&___nl__5);
#line 251
c_rt_lib0clear(&___nl__3);
#line 252
goto label_3;
#line 252
label_9:
#line 253
goto label_3;
#line 253
label_10:
#line 253
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__0, ___get_global_const(5)));
#line 254
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 254
c_rt_lib0move(&___nl__5, ptd_priv0exec(___nl__0, ___nl__6));
#line 254
c_rt_lib0clear(&___nl__6);
#line 254
c_rt_lib0move(&___nl__4, ptd_priv0try_dynamic_cast(___nl__5, ___nl__1));
#line 254
c_rt_lib0clear(&___nl__5);
#line 255
c_rt_lib0move(&___nl__5, array0len(___nl__4));
#line 255
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 255
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 255
c_rt_lib0clear(&___nl__6);
#line 255
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 255
if(c_rt_lib0check_true_native(___nl__5)){ goto label_52;}
#line 256
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(990), ___nl__3));
#line 256
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(1003), ___nl__6));
#line 256
c_rt_lib0delete(array0push(&___nl__4, ___nl__6));
#line 256
c_rt_lib0clear(&___nl__6);
#line 257
c_rt_lib0clear(&___nl__0);
#line 257
c_rt_lib0clear(&___nl__1);
#line 257
c_rt_lib0clear(&___nl__2);
#line 257
c_rt_lib0clear(&___nl__3);
#line 257
c_rt_lib0clear(&___nl__5);
#line 257
return ___nl__4;
#line 258
goto label_52;
#line 258
label_52:
#line 258
c_rt_lib0clear(&___nl__5);
#line 258
c_rt_lib0clear(&___nl__4);
#line 258
c_rt_lib0clear(&___nl__3);
#line 259
goto label_3;
#line 259
label_3:
#line 259
c_rt_lib0clear(&___nl__2);
#line 260
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 260
c_rt_lib0clear(&___nl__0);
#line 260
c_rt_lib0clear(&___nl__1);
#line 260
return ___nl__2;
#line 260
c_rt_lib0clear(&___nl__2);
#line 260
c_rt_lib0clear(&___nl__0);
#line 260
c_rt_lib0clear(&___nl__1);
#line 260
return NULL;
}


static ImmT ___const__[9];
static int ___const_init__ = 1;
void ptd_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[8];


for(int i=0;i<8;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 8);
}}
ImmT ptd_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT ptd_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = ptd0sim0cal();
	break;
case 1:
	___const__[1] = ptd0none0cal();
	break;
case 2:
	___const__[2] = ptd0void0cal();
	break;
case 3:
	___const__[3] = ptd0ptd_im0cal();
	break;
case 4:
	___const__[4] = ptd0meta_type0cal();
	break;
case 5:
	___const__[5] = ptd0cast_t0cal();
	break;
case 6:
	___const__[6] = ptd0imm_kind_t0cal();
	break;
case 7:
	___const__[7] = ptd0cast_error_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
