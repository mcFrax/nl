
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "nast.h"
#include "hash.h"
#include "ptd.h"
#include "singleton.h"
#line 1 "nast.nl"

static ImmT *__const__f = NULL;
void nast_priv0__const__init();
ImmT nast_priv0__const__sim(int __nr);
ImmT nast_priv0__const__sing(int __nr);

ImmT nast_priv0op_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3);


ImmT nast0bool_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0bool_t");
return nast0bool_t();}
ImmT nast0bool_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(0);}
ImmT nast0bool_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 11
c_rt_lib0move(&___nl__2, ptd0none());
#line 11
c_rt_lib0move(&___nl__3, ptd0none());
#line 11
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(7), ___nl__2, ___get_global_const(6), ___nl__3));
#line 11
c_rt_lib0clear(&___nl__2);
#line 11
c_rt_lib0clear(&___nl__3);
#line 11
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 11
c_rt_lib0clear(&___nl__1);
#line 11
return ___nl__0;
#line 11
c_rt_lib0clear(&___nl__0);
#line 11
return NULL;
}

ImmT nast0op_assoc_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0op_assoc_t");
return nast0op_assoc_t();}
ImmT nast0op_assoc_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(1);}
ImmT nast0op_assoc_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 15
c_rt_lib0move(&___nl__2, ptd0none());
#line 15
c_rt_lib0move(&___nl__3, ptd0none());
#line 15
c_rt_lib0move(&___nl__4, ptd0none());
#line 15
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(239), ___nl__2, ___get_global_const(240), ___nl__3, ___get_global_const(38), ___nl__4));
#line 15
c_rt_lib0clear(&___nl__2);
#line 15
c_rt_lib0clear(&___nl__3);
#line 15
c_rt_lib0clear(&___nl__4);
#line 15
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 15
c_rt_lib0clear(&___nl__1);
#line 15
return ___nl__0;
#line 15
c_rt_lib0clear(&___nl__0);
#line 15
return NULL;
}

ImmT nast0op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0op_t");
return nast0op_t();}
ImmT nast0op_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(2);}
ImmT nast0op_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 19
c_rt_lib0move(&___nl__2, ptd0sim());
#line 19
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0op_assoc_t0ptr, ___get_global_const(12), ___get_global_const(819)));
#line 19
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 19
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(820), ___nl__2, ___get_global_const(821), ___nl__3));
#line 19
c_rt_lib0clear(&___nl__2);
#line 19
c_rt_lib0clear(&___nl__3);
#line 19
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 19
c_rt_lib0clear(&___nl__1);
#line 19
return ___nl__0;
#line 19
c_rt_lib0clear(&___nl__0);
#line 19
return NULL;
}

ImmT nast0op_struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0op_struct_t");
return nast0op_struct_t();}
ImmT nast0op_struct_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(3);}
ImmT nast0op_struct_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 23
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(nast0op_t0ptr, ___get_global_const(12), ___get_global_const(822)));
#line 23
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 23
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 23
c_rt_lib0clear(&___nl__1);
#line 23
return ___nl__0;
#line 23
c_rt_lib0clear(&___nl__0);
#line 23
return NULL;
}

ImmT nast_priv0op_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
nast_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 27
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(820), ___nl__2, ___get_global_const(821), ___nl__3));
#line 27
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__1, ___nl__4));
#line 27
c_rt_lib0clear(&___nl__4);
#line 27
c_rt_lib0clear(&___nl__1);
#line 27
c_rt_lib0clear(&___nl__2);
#line 27
c_rt_lib0clear(&___nl__3);
#line 27
return NULL;
}

ImmT nast0get_ternary_ops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_ternary_ops");
return nast0get_ternary_ops();}
ImmT nast0get_ternary_ops(){
nast_priv0__const__init();
return nast_priv0__const__sing(4);}
ImmT nast0get_ternary_ops0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 31
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 32
c_rt_lib0move(&___nl__1,___get_global_const(823));
#line 32
c_rt_lib0move(&___nl__2,___get_global_const(824));
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(240)));
#line 32
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 32
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__1);
#line 33
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
return ___nl__1;
#line 33
c_rt_lib0clear(&___nl__1);
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
return NULL;
}

ImmT nast0get_unary_ops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_unary_ops");
return nast0get_unary_ops();}
ImmT nast0get_unary_ops(){
nast_priv0__const__init();
return nast_priv0__const__sing(5);}
ImmT nast0get_unary_ops0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 37
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 38
c_rt_lib0move(&___nl__1,___get_global_const(189));
#line 38
c_rt_lib0move(&___nl__2,___get_global_const(825));
#line 38
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(240)));
#line 38
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 38
c_rt_lib0clear(&___nl__3);
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__1);
#line 39
c_rt_lib0move(&___nl__1,___get_global_const(826));
#line 39
c_rt_lib0move(&___nl__2,___get_global_const(827));
#line 39
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 39
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 39
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0clear(&___nl__1);
#line 40
c_rt_lib0move(&___nl__1,___get_global_const(140));
#line 40
c_rt_lib0move(&___nl__2,___get_global_const(827));
#line 40
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 40
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 40
c_rt_lib0clear(&___nl__3);
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0move(&___nl__1,___get_global_const(247));
#line 41
c_rt_lib0move(&___nl__2,___get_global_const(828));
#line 41
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(240)));
#line 41
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 41
c_rt_lib0clear(&___nl__3);
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
c_rt_lib0clear(&___nl__1);
#line 42
c_rt_lib0move(&___nl__1,___get_global_const(251));
#line 42
c_rt_lib0move(&___nl__2,___get_global_const(828));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(240)));
#line 42
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 42
c_rt_lib0clear(&___nl__3);
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0move(&___nl__1,___get_global_const(249));
#line 43
c_rt_lib0move(&___nl__2,___get_global_const(828));
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(240)));
#line 43
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
return ___nl__1;
#line 44
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0clear(&___nl__0);
#line 44
return NULL;
}

ImmT nast0get_bin_ops0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_bin_ops");
return nast0get_bin_ops();}
ImmT nast0get_bin_ops(){
nast_priv0__const__init();
return nast_priv0__const__sing(6);}
ImmT nast0get_bin_ops0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 48
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 49
c_rt_lib0move(&___nl__1,___get_global_const(797));
#line 49
c_rt_lib0move(&___nl__2,___get_global_const(829));
#line 49
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(239)));
#line 49
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 49
c_rt_lib0clear(&___nl__3);
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__1);
#line 50
c_rt_lib0move(&___nl__1,___get_global_const(830));
#line 50
c_rt_lib0move(&___nl__2,___get_global_const(831));
#line 50
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(239)));
#line 50
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0clear(&___nl__2);
#line 50
c_rt_lib0clear(&___nl__1);
#line 51
c_rt_lib0move(&___nl__1,___get_global_const(832));
#line 51
c_rt_lib0move(&___nl__2,___get_global_const(831));
#line 51
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(239)));
#line 51
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 51
c_rt_lib0clear(&___nl__3);
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__1);
#line 52
c_rt_lib0move(&___nl__1,___get_global_const(257));
#line 52
c_rt_lib0move(&___nl__2,___get_global_const(833));
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(239)));
#line 52
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 52
c_rt_lib0clear(&___nl__3);
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__1);
#line 53
c_rt_lib0move(&___nl__1,___get_global_const(81));
#line 53
c_rt_lib0move(&___nl__2,___get_global_const(833));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(239)));
#line 53
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0clear(&___nl__2);
#line 53
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0move(&___nl__1,___get_global_const(260));
#line 54
c_rt_lib0move(&___nl__2,___get_global_const(833));
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(239)));
#line 54
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__1);
#line 55
c_rt_lib0move(&___nl__1,___get_global_const(251));
#line 55
c_rt_lib0move(&___nl__2,___get_global_const(834));
#line 55
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(239)));
#line 55
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__1);
#line 56
c_rt_lib0move(&___nl__1,___get_global_const(249));
#line 56
c_rt_lib0move(&___nl__2,___get_global_const(834));
#line 56
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(239)));
#line 56
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 56
c_rt_lib0clear(&___nl__3);
#line 56
c_rt_lib0clear(&___nl__2);
#line 56
c_rt_lib0clear(&___nl__1);
#line 57
c_rt_lib0move(&___nl__1,___get_global_const(83));
#line 57
c_rt_lib0move(&___nl__2,___get_global_const(834));
#line 57
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(239)));
#line 57
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 57
c_rt_lib0clear(&___nl__3);
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
c_rt_lib0clear(&___nl__1);
#line 58
c_rt_lib0move(&___nl__1,___get_global_const(272));
#line 58
c_rt_lib0move(&___nl__2,___get_global_const(835));
#line 58
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 58
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 58
c_rt_lib0clear(&___nl__3);
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__1);
#line 59
c_rt_lib0move(&___nl__1,___get_global_const(262));
#line 59
c_rt_lib0move(&___nl__2,___get_global_const(835));
#line 59
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 59
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 59
c_rt_lib0clear(&___nl__3);
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__1);
#line 60
c_rt_lib0move(&___nl__1,___get_global_const(264));
#line 60
c_rt_lib0move(&___nl__2,___get_global_const(835));
#line 60
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 60
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 60
c_rt_lib0clear(&___nl__3);
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
c_rt_lib0clear(&___nl__1);
#line 61
c_rt_lib0move(&___nl__1,___get_global_const(270));
#line 61
c_rt_lib0move(&___nl__2,___get_global_const(835));
#line 61
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 61
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 61
c_rt_lib0clear(&___nl__3);
#line 61
c_rt_lib0clear(&___nl__2);
#line 61
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0move(&___nl__1,___get_global_const(266));
#line 62
c_rt_lib0move(&___nl__2,___get_global_const(836));
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 62
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 62
c_rt_lib0clear(&___nl__3);
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__1);
#line 63
c_rt_lib0move(&___nl__1,___get_global_const(268));
#line 63
c_rt_lib0move(&___nl__2,___get_global_const(836));
#line 63
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 63
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 63
c_rt_lib0clear(&___nl__3);
#line 63
c_rt_lib0clear(&___nl__2);
#line 63
c_rt_lib0clear(&___nl__1);
#line 64
c_rt_lib0move(&___nl__1,___get_global_const(253));
#line 64
c_rt_lib0move(&___nl__2,___get_global_const(836));
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 64
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 64
c_rt_lib0clear(&___nl__3);
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
c_rt_lib0clear(&___nl__1);
#line 65
c_rt_lib0move(&___nl__1,___get_global_const(254));
#line 65
c_rt_lib0move(&___nl__2,___get_global_const(836));
#line 65
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 65
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 65
c_rt_lib0clear(&___nl__3);
#line 65
c_rt_lib0clear(&___nl__2);
#line 65
c_rt_lib0clear(&___nl__1);
#line 66
c_rt_lib0move(&___nl__1,___get_global_const(720));
#line 66
c_rt_lib0move(&___nl__2,___get_global_const(837));
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(239)));
#line 66
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 66
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
c_rt_lib0clear(&___nl__1);
#line 67
c_rt_lib0move(&___nl__1,___get_global_const(721));
#line 67
c_rt_lib0move(&___nl__2,___get_global_const(838));
#line 67
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(239)));
#line 67
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 67
c_rt_lib0clear(&___nl__3);
#line 67
c_rt_lib0clear(&___nl__2);
#line 67
c_rt_lib0clear(&___nl__1);
#line 68
c_rt_lib0move(&___nl__1,___get_global_const(812));
#line 68
c_rt_lib0move(&___nl__2,___get_global_const(839));
#line 68
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(240)));
#line 68
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
c_rt_lib0clear(&___nl__2);
#line 68
c_rt_lib0clear(&___nl__1);
#line 69
c_rt_lib0move(&___nl__1,___get_global_const(813));
#line 69
c_rt_lib0move(&___nl__2,___get_global_const(839));
#line 69
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(240)));
#line 69
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 69
c_rt_lib0clear(&___nl__3);
#line 69
c_rt_lib0clear(&___nl__2);
#line 69
c_rt_lib0clear(&___nl__1);
#line 70
c_rt_lib0move(&___nl__1,___get_global_const(816));
#line 70
c_rt_lib0move(&___nl__2,___get_global_const(839));
#line 70
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(240)));
#line 70
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 70
c_rt_lib0clear(&___nl__3);
#line 70
c_rt_lib0clear(&___nl__2);
#line 70
c_rt_lib0clear(&___nl__1);
#line 71
c_rt_lib0move(&___nl__1,___get_global_const(815));
#line 71
c_rt_lib0move(&___nl__2,___get_global_const(839));
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(240)));
#line 71
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
c_rt_lib0clear(&___nl__2);
#line 71
c_rt_lib0clear(&___nl__1);
#line 72
c_rt_lib0move(&___nl__1,___get_global_const(817));
#line 72
c_rt_lib0move(&___nl__2,___get_global_const(839));
#line 72
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(240)));
#line 72
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 72
c_rt_lib0clear(&___nl__3);
#line 72
c_rt_lib0clear(&___nl__2);
#line 72
c_rt_lib0clear(&___nl__1);
#line 73
c_rt_lib0move(&___nl__1,___get_global_const(814));
#line 73
c_rt_lib0move(&___nl__2,___get_global_const(839));
#line 73
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(240)));
#line 73
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 73
c_rt_lib0clear(&___nl__3);
#line 73
c_rt_lib0clear(&___nl__2);
#line 73
c_rt_lib0clear(&___nl__1);
#line 74
c_rt_lib0move(&___nl__1,___get_global_const(840));
#line 74
c_rt_lib0move(&___nl__2,___get_global_const(839));
#line 74
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(240)));
#line 74
c_rt_lib0delete(nast_priv0op_def(&___nl__0, ___nl__1, ___nl__2, ___nl__3));
#line 74
c_rt_lib0clear(&___nl__3);
#line 74
c_rt_lib0clear(&___nl__2);
#line 74
c_rt_lib0clear(&___nl__1);
#line 75
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 75
c_rt_lib0clear(&___nl__0);
#line 75
return ___nl__1;
#line 75
c_rt_lib0clear(&___nl__1);
#line 75
c_rt_lib0clear(&___nl__0);
#line 75
return NULL;
}

ImmT nast0get_max_precedence0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0get_max_precedence");
return nast0get_max_precedence();}
ImmT nast0get_max_precedence(){
nast_priv0__const__init();
return nast_priv0__const__sing(7);}
ImmT nast0get_max_precedence0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 79
c_rt_lib0move(&___nl__0,___get_global_const(829));
#line 79
return ___nl__0;
#line 79
c_rt_lib0clear(&___nl__0);
#line 79
return NULL;
}

ImmT nast0variant_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variant_t");
return nast0variant_t();}
ImmT nast0variant_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(8);}
ImmT nast0variant_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 83
c_rt_lib0move(&___nl__2, ptd0sim());
#line 83
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 83
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 83
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(78), ___nl__2, ___get_global_const(796), ___nl__3));
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
c_rt_lib0clear(&___nl__3);
#line 83
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
return ___nl__0;
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
return NULL;
}

ImmT nast0fun_def_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_def_t");
return nast0fun_def_t();}
ImmT nast0fun_def_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(9);}
ImmT nast0fun_def_t0cal() {
nast_priv0__const__init();
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
#line 87
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variable_type_t0ptr, ___get_global_const(12), ___get_global_const(842)));
#line 87
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 87
c_rt_lib0move(&___nl__3, ptd0sim());
#line 87
c_rt_lib0move(&___nl__4, ptd0sim());
#line 87
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 87
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 87
c_rt_lib0move(&___nl__8, ptd0none());
#line 87
c_rt_lib0move(&___nl__9, ptd0none());
#line 87
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(334), ___nl__8, ___get_global_const(333), ___nl__9));
#line 87
c_rt_lib0clear(&___nl__8);
#line 87
c_rt_lib0clear(&___nl__9);
#line 87
c_rt_lib0move(&___nl__6, ptd0var(___nl__7));
#line 87
c_rt_lib0clear(&___nl__7);
#line 87
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(nast0fun_def_arg_t0ptr, ___get_global_const(12), ___get_global_const(843)));
#line 87
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 87
c_rt_lib0move(&___nl__7, ptd0arr(___nl__8));
#line 87
c_rt_lib0clear(&___nl__8);
#line 87
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(6, ___get_global_const(736), ___nl__2, ___get_global_const(113), ___nl__3, ___get_global_const(78), ___nl__4, ___get_global_const(214), ___nl__5, ___get_global_const(332), ___nl__6, ___get_global_const(74), ___nl__7));
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
c_rt_lib0clear(&___nl__3);
#line 87
c_rt_lib0clear(&___nl__4);
#line 87
c_rt_lib0clear(&___nl__5);
#line 87
c_rt_lib0clear(&___nl__6);
#line 87
c_rt_lib0clear(&___nl__7);
#line 87
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 87
c_rt_lib0clear(&___nl__1);
#line 87
return ___nl__0;
#line 87
c_rt_lib0clear(&___nl__0);
#line 87
return NULL;
}

ImmT nast0fun_def_arg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_def_arg_t");
return nast0fun_def_arg_t();}
ImmT nast0fun_def_arg_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(10);}
ImmT nast0fun_def_arg_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 98
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variable_type_t0ptr, ___get_global_const(12), ___get_global_const(842)));
#line 98
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 98
c_rt_lib0move(&___nl__3, ptd0sim());
#line 98
c_rt_lib0move(&___nl__6, ptd0none());
#line 98
c_rt_lib0move(&___nl__7, ptd0none());
#line 98
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(38), ___nl__6, ___get_global_const(5), ___nl__7));
#line 98
c_rt_lib0clear(&___nl__6);
#line 98
c_rt_lib0clear(&___nl__7);
#line 98
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 98
c_rt_lib0clear(&___nl__5);
#line 98
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(73), ___nl__2, ___get_global_const(78), ___nl__3, ___get_global_const(261), ___nl__4));
#line 98
c_rt_lib0clear(&___nl__2);
#line 98
c_rt_lib0clear(&___nl__3);
#line 98
c_rt_lib0clear(&___nl__4);
#line 98
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 98
c_rt_lib0clear(&___nl__1);
#line 98
return ___nl__0;
#line 98
c_rt_lib0clear(&___nl__0);
#line 98
return NULL;
}

ImmT nast0module_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0module_t");
return nast0module_t();}
ImmT nast0module_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(11);}
ImmT nast0module_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 106
c_rt_lib0move(&___nl__2, ptd0sim());
#line 106
c_rt_lib0move(&___nl__6, ptd0sim());
#line 106
c_rt_lib0move(&___nl__7, ptd0sim());
#line 106
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(78), ___nl__6, ___get_global_const(113), ___nl__7));
#line 106
c_rt_lib0clear(&___nl__6);
#line 106
c_rt_lib0clear(&___nl__7);
#line 106
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 106
c_rt_lib0clear(&___nl__5);
#line 106
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 106
c_rt_lib0clear(&___nl__4);
#line 106
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0fun_def_t0ptr, ___get_global_const(12), ___get_global_const(844)));
#line 106
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 106
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 106
c_rt_lib0clear(&___nl__5);
#line 106
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__2, ___get_global_const(128), ___nl__3, ___get_global_const(735), ___nl__4));
#line 106
c_rt_lib0clear(&___nl__2);
#line 106
c_rt_lib0clear(&___nl__3);
#line 106
c_rt_lib0clear(&___nl__4);
#line 106
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 106
c_rt_lib0clear(&___nl__1);
#line 106
return ___nl__0;
#line 106
c_rt_lib0clear(&___nl__0);
#line 106
return NULL;
}

ImmT nast0variable_type_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variable_type_t");
return nast0variable_type_t();}
ImmT nast0variable_type_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(12);}
ImmT nast0variable_type_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 114
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 114
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 114
c_rt_lib0move(&___nl__3, ptd0none());
#line 114
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(73), ___nl__2, ___get_global_const(38), ___nl__3));
#line 114
c_rt_lib0clear(&___nl__2);
#line 114
c_rt_lib0clear(&___nl__3);
#line 114
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 114
c_rt_lib0clear(&___nl__1);
#line 114
return ___nl__0;
#line 114
c_rt_lib0clear(&___nl__0);
#line 114
return NULL;
}

ImmT nast0variable_declaration_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variable_declaration_t");
return nast0variable_declaration_t();}
ImmT nast0variable_declaration_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(13);}
ImmT nast0variable_declaration_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 118
c_rt_lib0move(&___nl__2, ptd0sim());
#line 118
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0variable_type_t0ptr, ___get_global_const(12), ___get_global_const(842)));
#line 118
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 118
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 118
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 118
c_rt_lib0move(&___nl__7, ptd0none());
#line 118
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(650), ___nl__6, ___get_global_const(38), ___nl__7));
#line 118
c_rt_lib0clear(&___nl__6);
#line 118
c_rt_lib0clear(&___nl__7);
#line 118
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 118
c_rt_lib0clear(&___nl__5);
#line 118
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__2, ___get_global_const(73), ___nl__3, ___get_global_const(650), ___nl__4));
#line 118
c_rt_lib0clear(&___nl__2);
#line 118
c_rt_lib0clear(&___nl__3);
#line 118
c_rt_lib0clear(&___nl__4);
#line 118
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 118
c_rt_lib0clear(&___nl__1);
#line 118
return ___nl__0;
#line 118
c_rt_lib0clear(&___nl__0);
#line 118
return NULL;
}

ImmT nast0fun_val_arg_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_val_arg_t");
return nast0fun_val_arg_t();}
ImmT nast0fun_val_arg_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(14);}
ImmT nast0fun_val_arg_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 126
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 126
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 126
c_rt_lib0move(&___nl__5, ptd0none());
#line 126
c_rt_lib0move(&___nl__6, ptd0none());
#line 126
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(38), ___nl__5, ___get_global_const(5), ___nl__6));
#line 126
c_rt_lib0clear(&___nl__5);
#line 126
c_rt_lib0clear(&___nl__6);
#line 126
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 126
c_rt_lib0clear(&___nl__4);
#line 126
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(238), ___nl__2, ___get_global_const(261), ___nl__3));
#line 126
c_rt_lib0clear(&___nl__2);
#line 126
c_rt_lib0clear(&___nl__3);
#line 126
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 126
c_rt_lib0clear(&___nl__1);
#line 126
return ___nl__0;
#line 126
c_rt_lib0clear(&___nl__0);
#line 126
return NULL;
}

ImmT nast0fun_val_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_val_t");
return nast0fun_val_t();}
ImmT nast0fun_val_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(15);}
ImmT nast0fun_val_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 130
c_rt_lib0move(&___nl__2, ptd0sim());
#line 130
c_rt_lib0move(&___nl__3, ptd0sim());
#line 130
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0fun_val_arg_t0ptr, ___get_global_const(12), ___get_global_const(845)));
#line 130
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 130
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 130
c_rt_lib0clear(&___nl__5);
#line 130
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__2, ___get_global_const(111), ___nl__3, ___get_global_const(74), ___nl__4));
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

ImmT nast0hash_elem_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0hash_elem_t");
return nast0hash_elem_t();}
ImmT nast0hash_elem_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(16);}
ImmT nast0hash_elem_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 134
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 134
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 134
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(283), ___nl__2, ___get_global_const(238), ___nl__3));
#line 134
c_rt_lib0clear(&___nl__2);
#line 134
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 134
c_rt_lib0clear(&___nl__1);
#line 134
return ___nl__0;
#line 134
c_rt_lib0clear(&___nl__0);
#line 134
return NULL;
}

ImmT nast0hash_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0hash_decl_t");
return nast0hash_decl_t();}
ImmT nast0hash_decl_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(17);}
ImmT nast0hash_decl_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 138
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(nast0hash_elem_t0ptr, ___get_global_const(12), ___get_global_const(846)));
#line 138
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 138
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
return ___nl__0;
#line 138
c_rt_lib0clear(&___nl__0);
#line 138
return NULL;
}

ImmT nast0bin_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0bin_op_t");
return nast0bin_op_t();}
ImmT nast0bin_op_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(18);}
ImmT nast0bin_op_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 142
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 142
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 142
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 142
c_rt_lib0move(&___nl__4, ptd0sim());
#line 142
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(239), ___nl__2, ___get_global_const(240), ___nl__3, ___get_global_const(405), ___nl__4));
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
return ___nl__0;
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
return NULL;
}

ImmT nast0var_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0var_op_t");
return nast0var_op_t();}
ImmT nast0var_op_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(19);}
ImmT nast0var_op_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 146
c_rt_lib0move(&___nl__5, ptd0none());
#line 146
c_rt_lib0move(&___nl__6, ptd0none());
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(224), ___nl__5, ___get_global_const(225), ___nl__6));
#line 146
c_rt_lib0clear(&___nl__5);
#line 146
c_rt_lib0clear(&___nl__6);
#line 146
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0move(&___nl__4, ptd0sim());
#line 146
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(239), ___nl__2, ___get_global_const(405), ___nl__3, ___get_global_const(847), ___nl__4));
#line 146
c_rt_lib0clear(&___nl__2);
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 146
c_rt_lib0clear(&___nl__1);
#line 146
return ___nl__0;
#line 146
c_rt_lib0clear(&___nl__0);
#line 146
return NULL;
}

ImmT nast0fun_label_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fun_label_t");
return nast0fun_label_t();}
ImmT nast0fun_label_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(20);}
ImmT nast0fun_label_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 154
c_rt_lib0move(&___nl__2, ptd0sim());
#line 154
c_rt_lib0move(&___nl__3, ptd0sim());
#line 154
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(111), ___nl__2, ___get_global_const(78), ___nl__3));
#line 154
c_rt_lib0clear(&___nl__2);
#line 154
c_rt_lib0clear(&___nl__3);
#line 154
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
return ___nl__0;
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
return NULL;
}

ImmT nast0unary_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0unary_op_t");
return nast0unary_op_t();}
ImmT nast0unary_op_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(21);}
ImmT nast0unary_op_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 158
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 158
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 158
c_rt_lib0move(&___nl__3, ptd0sim());
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(238), ___nl__2, ___get_global_const(405), ___nl__3));
#line 158
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 158
c_rt_lib0clear(&___nl__1);
#line 158
return ___nl__0;
#line 158
c_rt_lib0clear(&___nl__0);
#line 158
return NULL;
}

ImmT nast0ternary_op_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0ternary_op_t");
return nast0ternary_op_t();}
ImmT nast0ternary_op_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(22);}
ImmT nast0ternary_op_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 162
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 162
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 162
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 162
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 162
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 162
c_rt_lib0move(&___nl__5, ptd0sim());
#line 162
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(809), ___nl__2, ___get_global_const(810), ___nl__3, ___get_global_const(811), ___nl__4, ___get_global_const(405), ___nl__5));
#line 162
c_rt_lib0clear(&___nl__2);
#line 162
c_rt_lib0clear(&___nl__3);
#line 162
c_rt_lib0clear(&___nl__4);
#line 162
c_rt_lib0clear(&___nl__5);
#line 162
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 162
c_rt_lib0clear(&___nl__1);
#line 162
return ___nl__0;
#line 162
c_rt_lib0clear(&___nl__0);
#line 162
return NULL;
}

ImmT nast0value_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0value_t");
return nast0value_t();}
ImmT nast0value_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(23);}
ImmT nast0value_t0cal() {
nast_priv0__const__init();
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
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
#line 166
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0ternary_op_t0ptr, ___get_global_const(12), ___get_global_const(848)));
#line 166
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 166
c_rt_lib0move(&___nl__3, ptd0sim());
#line 166
c_rt_lib0move(&___nl__4, ptd0none());
#line 166
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 166
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 166
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nast0variant_t0ptr, ___get_global_const(12), ___get_global_const(849)));
#line 166
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 166
c_rt_lib0move(&___nl__7, ptd0sim());
#line 166
c_rt_lib0move(&___nl__11, ptd0sim());
#line 166
c_rt_lib0move(&___nl__10, ptd0arr(___nl__11));
#line 166
c_rt_lib0clear(&___nl__11);
#line 166
c_rt_lib0move(&___nl__13, ptd0none());
#line 166
c_rt_lib0move(&___nl__14, ptd0none());
#line 166
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(850), ___nl__13, ___get_global_const(851), ___nl__14));
#line 166
c_rt_lib0clear(&___nl__13);
#line 166
c_rt_lib0clear(&___nl__14);
#line 166
c_rt_lib0move(&___nl__11, ptd0var(___nl__12));
#line 166
c_rt_lib0clear(&___nl__12);
#line 166
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(281), ___nl__10, ___get_global_const(852), ___nl__11));
#line 166
c_rt_lib0clear(&___nl__10);
#line 166
c_rt_lib0clear(&___nl__11);
#line 166
c_rt_lib0move(&___nl__8, ptd0rec(___nl__9));
#line 166
c_rt_lib0clear(&___nl__9);
#line 166
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 166
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 166
c_rt_lib0move(&___nl__9, ptd0arr(___nl__10));
#line 166
c_rt_lib0clear(&___nl__10);
#line 166
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(nast0hash_decl_t0ptr, ___get_global_const(12), ___get_global_const(853)));
#line 166
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 166
c_rt_lib0move(&___nl__11, ptd0sim());
#line 166
c_rt_lib0move(&___nl__12, c_rt_lib0func_new(nast0bin_op_t0ptr, ___get_global_const(12), ___get_global_const(854)));
#line 166
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__12));
#line 166
c_rt_lib0move(&___nl__13, c_rt_lib0func_new(nast0var_op_t0ptr, ___get_global_const(12), ___get_global_const(855)));
#line 166
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__13));
#line 166
c_rt_lib0move(&___nl__14, c_rt_lib0func_new(nast0unary_op_t0ptr, ___get_global_const(12), ___get_global_const(856)));
#line 166
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__14));
#line 166
c_rt_lib0move(&___nl__15, c_rt_lib0func_new(nast0fun_label_t0ptr, ___get_global_const(12), ___get_global_const(857)));
#line 166
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__15));
#line 166
c_rt_lib0move(&___nl__16, c_rt_lib0func_new(nast0fun_val_t0ptr, ___get_global_const(12), ___get_global_const(858)));
#line 166
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 166
c_rt_lib0move(&___nl__17, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 166
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__17));
#line 166
c_rt_lib0move(&___nl__18, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 166
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__18));
#line 166
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(17, ___get_global_const(801), ___nl__2, ___get_global_const(803), ___nl__3, ___get_global_const(778), ___nl__4, ___get_global_const(802), ___nl__5, ___get_global_const(788), ___nl__6, ___get_global_const(298), ___nl__7, ___get_global_const(717), ___nl__8, ___get_global_const(219), ___nl__9, ___get_global_const(220), ___nl__10, ___get_global_const(796), ___nl__11, ___get_global_const(223), ___nl__12, ___get_global_const(804), ___nl__13, ___get_global_const(805), ___nl__14, ___get_global_const(806), ___nl__15, ___get_global_const(759), ___nl__16, ___get_global_const(807), ___nl__17, ___get_global_const(808), ___nl__18));
#line 166
c_rt_lib0clear(&___nl__2);
#line 166
c_rt_lib0clear(&___nl__3);
#line 166
c_rt_lib0clear(&___nl__4);
#line 166
c_rt_lib0clear(&___nl__5);
#line 166
c_rt_lib0clear(&___nl__6);
#line 166
c_rt_lib0clear(&___nl__7);
#line 166
c_rt_lib0clear(&___nl__8);
#line 166
c_rt_lib0clear(&___nl__9);
#line 166
c_rt_lib0clear(&___nl__10);
#line 166
c_rt_lib0clear(&___nl__11);
#line 166
c_rt_lib0clear(&___nl__12);
#line 166
c_rt_lib0clear(&___nl__13);
#line 166
c_rt_lib0clear(&___nl__14);
#line 166
c_rt_lib0clear(&___nl__15);
#line 166
c_rt_lib0clear(&___nl__16);
#line 166
c_rt_lib0clear(&___nl__17);
#line 166
c_rt_lib0clear(&___nl__18);
#line 166
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 166
c_rt_lib0clear(&___nl__1);
#line 166
return ___nl__0;
#line 166
c_rt_lib0clear(&___nl__0);
#line 166
return NULL;
}

ImmT nast0match_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0match_t");
return nast0match_t();}
ImmT nast0match_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(24);}
ImmT nast0match_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 191
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 191
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 191
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0match_branch_t0ptr, ___get_global_const(12), ___get_global_const(859)));
#line 191
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 191
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(238), ___nl__2, ___get_global_const(787), ___nl__3));
#line 191
c_rt_lib0clear(&___nl__2);
#line 191
c_rt_lib0clear(&___nl__3);
#line 191
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 191
c_rt_lib0clear(&___nl__1);
#line 191
return ___nl__0;
#line 191
c_rt_lib0clear(&___nl__0);
#line 191
return NULL;
}

ImmT nast0variant_decl_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0variant_decl_t");
return nast0variant_decl_t();}
ImmT nast0variant_decl_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(25);}
ImmT nast0variant_decl_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 195
c_rt_lib0move(&___nl__2, ptd0sim());
#line 195
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(12), ___get_global_const(860)));
#line 195
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 195
c_rt_lib0move(&___nl__6, ptd0none());
#line 195
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(650), ___nl__5, ___get_global_const(38), ___nl__6));
#line 195
c_rt_lib0clear(&___nl__5);
#line 195
c_rt_lib0clear(&___nl__6);
#line 195
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 195
c_rt_lib0clear(&___nl__4);
#line 195
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(78), ___nl__2, ___get_global_const(650), ___nl__3));
#line 195
c_rt_lib0clear(&___nl__2);
#line 195
c_rt_lib0clear(&___nl__3);
#line 195
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 195
c_rt_lib0clear(&___nl__1);
#line 195
return ___nl__0;
#line 195
c_rt_lib0clear(&___nl__0);
#line 195
return NULL;
}

ImmT nast0match_branch_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0match_branch_t");
return nast0match_branch_t();}
ImmT nast0match_branch_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(26);}
ImmT nast0match_branch_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 202
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variant_decl_t0ptr, ___get_global_const(12), ___get_global_const(861)));
#line 202
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 202
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 202
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 202
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(12), ___get_global_const(651)));
#line 202
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(788), ___nl__2, ___get_global_const(214), ___nl__3, ___get_global_const(217), ___nl__4));
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0clear(&___nl__3);
#line 202
c_rt_lib0clear(&___nl__4);
#line 202
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 202
c_rt_lib0clear(&___nl__1);
#line 202
return ___nl__0;
#line 202
c_rt_lib0clear(&___nl__0);
#line 202
return NULL;
}

ImmT nast0fora_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0fora_t");
return nast0fora_t();}
ImmT nast0fora_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(27);}
ImmT nast0fora_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 206
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(12), ___get_global_const(860)));
#line 206
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 206
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 206
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 206
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 206
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 206
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0bool_t0ptr, ___get_global_const(12), ___get_global_const(862)));
#line 206
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 206
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(783), ___nl__2, ___get_global_const(214), ___nl__3, ___get_global_const(3), ___nl__4, ___get_global_const(863), ___nl__5));
#line 206
c_rt_lib0clear(&___nl__2);
#line 206
c_rt_lib0clear(&___nl__3);
#line 206
c_rt_lib0clear(&___nl__4);
#line 206
c_rt_lib0clear(&___nl__5);
#line 206
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 206
c_rt_lib0clear(&___nl__1);
#line 206
return ___nl__0;
#line 206
c_rt_lib0clear(&___nl__0);
#line 206
return NULL;
}

ImmT nast0forh_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0forh_t");
return nast0forh_t();}
ImmT nast0forh_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(28);}
ImmT nast0forh_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 215
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(12), ___get_global_const(860)));
#line 215
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(12), ___get_global_const(860)));
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 215
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 215
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 215
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 215
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 215
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nast0bool_t0ptr, ___get_global_const(12), ___get_global_const(862)));
#line 215
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 215
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(283), ___nl__2, ___get_global_const(238), ___nl__3, ___get_global_const(282), ___nl__4, ___get_global_const(214), ___nl__5, ___get_global_const(863), ___nl__6));
#line 215
c_rt_lib0clear(&___nl__2);
#line 215
c_rt_lib0clear(&___nl__3);
#line 215
c_rt_lib0clear(&___nl__4);
#line 215
c_rt_lib0clear(&___nl__5);
#line 215
c_rt_lib0clear(&___nl__6);
#line 215
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 215
c_rt_lib0clear(&___nl__1);
#line 215
return ___nl__0;
#line 215
c_rt_lib0clear(&___nl__0);
#line 215
return NULL;
}

ImmT nast0rep_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0rep_t");
return nast0rep_t();}
ImmT nast0rep_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(29);}
ImmT nast0rep_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 225
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(12), ___get_global_const(860)));
#line 225
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 225
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 225
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 225
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 225
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 225
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0bool_t0ptr, ___get_global_const(12), ___get_global_const(862)));
#line 225
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 225
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(783), ___nl__2, ___get_global_const(214), ___nl__3, ___get_global_const(784), ___nl__4, ___get_global_const(863), ___nl__5));
#line 225
c_rt_lib0clear(&___nl__2);
#line 225
c_rt_lib0clear(&___nl__3);
#line 225
c_rt_lib0clear(&___nl__4);
#line 225
c_rt_lib0clear(&___nl__5);
#line 225
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 225
c_rt_lib0clear(&___nl__1);
#line 225
return ___nl__0;
#line 225
c_rt_lib0clear(&___nl__0);
#line 225
return NULL;
}

ImmT nast0while_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0while_t");
return nast0while_t();}
ImmT nast0while_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(30);}
ImmT nast0while_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 234
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 234
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 234
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0bool_t0ptr, ___get_global_const(12), ___get_global_const(862)));
#line 234
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 234
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(779), ___nl__2, ___get_global_const(214), ___nl__3, ___get_global_const(863), ___nl__4));
#line 234
c_rt_lib0clear(&___nl__2);
#line 234
c_rt_lib0clear(&___nl__3);
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 234
c_rt_lib0clear(&___nl__1);
#line 234
return ___nl__0;
#line 234
c_rt_lib0clear(&___nl__0);
#line 234
return NULL;
}

ImmT nast0try_ensure_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0try_ensure_t");
return nast0try_ensure_t();}
ImmT nast0try_ensure_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(31);}
ImmT nast0try_ensure_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 238
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(12), ___get_global_const(860)));
#line 238
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 238
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0bin_op_t0ptr, ___get_global_const(12), ___get_global_const(854)));
#line 238
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 238
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 238
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 238
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(793), ___nl__2, ___get_global_const(794), ___nl__3, ___get_global_const(795), ___nl__4));
#line 238
c_rt_lib0clear(&___nl__2);
#line 238
c_rt_lib0clear(&___nl__3);
#line 238
c_rt_lib0clear(&___nl__4);
#line 238
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 238
c_rt_lib0clear(&___nl__1);
#line 238
return ___nl__0;
#line 238
c_rt_lib0clear(&___nl__0);
#line 238
return NULL;
}

ImmT nast0if_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0if_t");
return nast0if_t();}
ImmT nast0if_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(32);}
ImmT nast0if_t0cal() {
nast_priv0__const__init();
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
#line 242
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 242
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 242
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 242
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 242
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 242
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 242
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 242
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 242
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(12), ___get_global_const(651)));
#line 242
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 242
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(779), ___nl__7, ___get_global_const(214), ___nl__8, ___get_global_const(217), ___nl__9));
#line 242
c_rt_lib0clear(&___nl__7);
#line 242
c_rt_lib0clear(&___nl__8);
#line 242
c_rt_lib0clear(&___nl__9);
#line 242
c_rt_lib0move(&___nl__5, ptd0rec(___nl__6));
#line 242
c_rt_lib0clear(&___nl__6);
#line 242
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 242
c_rt_lib0clear(&___nl__5);
#line 242
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 242
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 242
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(779), ___nl__2, ___get_global_const(764), ___nl__3, ___get_global_const(780), ___nl__4, ___get_global_const(781), ___nl__5));
#line 242
c_rt_lib0clear(&___nl__2);
#line 242
c_rt_lib0clear(&___nl__3);
#line 242
c_rt_lib0clear(&___nl__4);
#line 242
c_rt_lib0clear(&___nl__5);
#line 242
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 242
c_rt_lib0clear(&___nl__1);
#line 242
return ___nl__0;
#line 242
c_rt_lib0clear(&___nl__0);
#line 242
return NULL;
}

ImmT nast0for_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0for_t");
return nast0for_t();}
ImmT nast0for_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(33);}
ImmT nast0for_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(12), ___get_global_const(860)));
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 251
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(776), ___nl__4, ___get_global_const(650), ___nl__5));
#line 251
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0clear(&___nl__5);
#line 251
c_rt_lib0move(&___nl__2, ptd0var(___nl__3));
#line 251
c_rt_lib0clear(&___nl__3);
#line 251
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 251
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 251
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(782), ___nl__2, ___get_global_const(783), ___nl__3, ___get_global_const(779), ___nl__4, ___get_global_const(214), ___nl__5));
#line 251
c_rt_lib0clear(&___nl__2);
#line 251
c_rt_lib0clear(&___nl__3);
#line 251
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0clear(&___nl__5);
#line 251
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 251
c_rt_lib0clear(&___nl__1);
#line 251
return ___nl__0;
#line 251
c_rt_lib0clear(&___nl__0);
#line 251
return NULL;
}

ImmT nast0place_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0place_t");
return nast0place_t();}
ImmT nast0place_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(34);}
ImmT nast0place_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 260
c_rt_lib0move(&___nl__2, ptd0sim());
#line 260
c_rt_lib0move(&___nl__3, ptd0sim());
#line 260
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__2, ___get_global_const(864), ___nl__3));
#line 260
c_rt_lib0clear(&___nl__2);
#line 260
c_rt_lib0clear(&___nl__3);
#line 260
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 260
c_rt_lib0clear(&___nl__1);
#line 260
return ___nl__0;
#line 260
c_rt_lib0clear(&___nl__0);
#line 260
return NULL;
}

ImmT nast0debug_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0debug_t");
return nast0debug_t();}
ImmT nast0debug_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(35);}
ImmT nast0debug_t0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 264
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0place_t0ptr, ___get_global_const(12), ___get_global_const(865)));
#line 264
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 264
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0place_t0ptr, ___get_global_const(12), ___get_global_const(865)));
#line 264
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 264
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(400), ___nl__2, ___get_global_const(850), ___nl__3));
#line 264
c_rt_lib0clear(&___nl__2);
#line 264
c_rt_lib0clear(&___nl__3);
#line 264
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 264
c_rt_lib0clear(&___nl__1);
#line 264
return ___nl__0;
#line 264
c_rt_lib0clear(&___nl__0);
#line 264
return NULL;
}

ImmT nast0empty_debug0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0empty_debug");
return nast0empty_debug();}
ImmT nast0empty_debug(){
nast_priv0__const__init();
return nast_priv0__const__sing(36);}
ImmT nast0empty_debug0cal() {
nast_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 268
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 268
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 268
c_rt_lib0move(&___nl__3, c_rt_lib0unary_minus(___nl__3));
#line 268
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__2, ___get_global_const(864), ___nl__3));
#line 268
c_rt_lib0clear(&___nl__2);
#line 268
c_rt_lib0clear(&___nl__3);
#line 268
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 268
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 268
c_rt_lib0move(&___nl__4, c_rt_lib0unary_minus(___nl__4));
#line 268
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__3, ___get_global_const(864), ___nl__4));
#line 268
c_rt_lib0clear(&___nl__3);
#line 268
c_rt_lib0clear(&___nl__4);
#line 268
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(2, ___get_global_const(400), ___nl__1, ___get_global_const(850), ___nl__2));
#line 268
c_rt_lib0clear(&___nl__1);
#line 268
c_rt_lib0clear(&___nl__2);
#line 268
return ___nl__0;
#line 268
c_rt_lib0clear(&___nl__0);
#line 268
return NULL;
}

ImmT nast0cmd_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nast0cmd_t");
return nast0cmd_t();}
ImmT nast0cmd_t(){
nast_priv0__const__init();
return nast_priv0__const__sing(37);}
ImmT nast0cmd_t0cal() {
nast_priv0__const__init();
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
ImmT ___nl__17 = NULL;
ImmT ___nl__18 = NULL;
ImmT ___nl__19 = NULL;
ImmT ___nl__20 = NULL;
ImmT ___nl__21 = NULL;
ImmT ___nl__22 = NULL;
ImmT ___nl__23 = NULL;
ImmT ___nl__24 = NULL;
#line 272
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0debug_t0ptr, ___get_global_const(12), ___get_global_const(651)));
#line 272
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 272
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nast0if_t0ptr, ___get_global_const(12), ___get_global_const(866)));
#line 272
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 272
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nast0for_t0ptr, ___get_global_const(12), ___get_global_const(867)));
#line 272
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 272
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(nast0fora_t0ptr, ___get_global_const(12), ___get_global_const(868)));
#line 272
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 272
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(nast0forh_t0ptr, ___get_global_const(12), ___get_global_const(869)));
#line 272
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 272
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(nast0rep_t0ptr, ___get_global_const(12), ___get_global_const(870)));
#line 272
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 272
c_rt_lib0move(&___nl__11, c_rt_lib0func_new(nast0while_t0ptr, ___get_global_const(12), ___get_global_const(871)));
#line 272
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__11));
#line 272
c_rt_lib0move(&___nl__14, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 272
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__14));
#line 272
c_rt_lib0move(&___nl__15, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 272
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__15));
#line 272
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(2, ___get_global_const(779), ___nl__14, ___get_global_const(214), ___nl__15));
#line 272
c_rt_lib0clear(&___nl__14);
#line 272
c_rt_lib0clear(&___nl__15);
#line 272
c_rt_lib0move(&___nl__12, ptd0rec(___nl__13));
#line 272
c_rt_lib0clear(&___nl__13);
#line 272
c_rt_lib0move(&___nl__15, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 272
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__15));
#line 272
c_rt_lib0move(&___nl__16, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 272
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 272
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(779), ___nl__15, ___get_global_const(214), ___nl__16));
#line 272
c_rt_lib0clear(&___nl__15);
#line 272
c_rt_lib0clear(&___nl__16);
#line 272
c_rt_lib0move(&___nl__13, ptd0rec(___nl__14));
#line 272
c_rt_lib0clear(&___nl__14);
#line 272
c_rt_lib0move(&___nl__14, ptd0none());
#line 272
c_rt_lib0move(&___nl__15, ptd0none());
#line 272
c_rt_lib0move(&___nl__16, c_rt_lib0func_new(nast0match_t0ptr, ___get_global_const(12), ___get_global_const(872)));
#line 272
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 272
c_rt_lib0move(&___nl__17, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 272
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__17));
#line 272
c_rt_lib0move(&___nl__18, c_rt_lib0func_new(nast0try_ensure_t0ptr, ___get_global_const(12), ___get_global_const(873)));
#line 272
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__18));
#line 272
c_rt_lib0move(&___nl__19, c_rt_lib0func_new(nast0try_ensure_t0ptr, ___get_global_const(12), ___get_global_const(873)));
#line 272
c_rt_lib0move(&___nl__19, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__19));
#line 272
c_rt_lib0move(&___nl__20, c_rt_lib0func_new(nast0variable_declaration_t0ptr, ___get_global_const(12), ___get_global_const(860)));
#line 272
c_rt_lib0move(&___nl__20, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__20));
#line 272
c_rt_lib0move(&___nl__21, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 272
c_rt_lib0move(&___nl__21, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__21));
#line 272
c_rt_lib0move(&___nl__23, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 272
c_rt_lib0move(&___nl__23, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__23));
#line 272
c_rt_lib0move(&___nl__22, ptd0arr(___nl__23));
#line 272
c_rt_lib0clear(&___nl__23);
#line 272
c_rt_lib0move(&___nl__24, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 272
c_rt_lib0move(&___nl__24, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__24));
#line 272
c_rt_lib0move(&___nl__23, ptd0arr(___nl__24));
#line 272
c_rt_lib0clear(&___nl__24);
#line 272
c_rt_lib0move(&___nl__24, ptd0none());
#line 272
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(20, ___get_global_const(764), ___nl__5, ___get_global_const(765), ___nl__6, ___get_global_const(766), ___nl__7, ___get_global_const(767), ___nl__8, ___get_global_const(119), ___nl__9, ___get_global_const(768), ___nl__10, ___get_global_const(769), ___nl__11, ___get_global_const(770), ___nl__12, ___get_global_const(771), ___nl__13, ___get_global_const(772), ___nl__14, ___get_global_const(773), ___nl__15, ___get_global_const(774), ___nl__16, ___get_global_const(650), ___nl__17, ___get_global_const(777), ___nl__18, ___get_global_const(80), ___nl__19, ___get_global_const(776), ___nl__20, ___get_global_const(75), ___nl__21, ___get_global_const(775), ___nl__22, ___get_global_const(233), ___nl__23, ___get_global_const(778), ___nl__24));
#line 272
c_rt_lib0clear(&___nl__5);
#line 272
c_rt_lib0clear(&___nl__6);
#line 272
c_rt_lib0clear(&___nl__7);
#line 272
c_rt_lib0clear(&___nl__8);
#line 272
c_rt_lib0clear(&___nl__9);
#line 272
c_rt_lib0clear(&___nl__10);
#line 272
c_rt_lib0clear(&___nl__11);
#line 272
c_rt_lib0clear(&___nl__12);
#line 272
c_rt_lib0clear(&___nl__13);
#line 272
c_rt_lib0clear(&___nl__14);
#line 272
c_rt_lib0clear(&___nl__15);
#line 272
c_rt_lib0clear(&___nl__16);
#line 272
c_rt_lib0clear(&___nl__17);
#line 272
c_rt_lib0clear(&___nl__18);
#line 272
c_rt_lib0clear(&___nl__19);
#line 272
c_rt_lib0clear(&___nl__20);
#line 272
c_rt_lib0clear(&___nl__21);
#line 272
c_rt_lib0clear(&___nl__22);
#line 272
c_rt_lib0clear(&___nl__23);
#line 272
c_rt_lib0clear(&___nl__24);
#line 272
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(217), ___nl__2, ___get_global_const(214), ___nl__3));
#line 272
c_rt_lib0clear(&___nl__2);
#line 272
c_rt_lib0clear(&___nl__3);
#line 272
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 272
c_rt_lib0clear(&___nl__1);
#line 272
return ___nl__0;
#line 272
c_rt_lib0clear(&___nl__0);
#line 272
return NULL;
}


static ImmT ___const__[39];
static int ___const_init__ = 1;
void nast_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[38];


for(int i=0;i<38;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 38);
}}
ImmT nast_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nast_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = nast0bool_t0cal();
	break;
case 1:
	___const__[1] = nast0op_assoc_t0cal();
	break;
case 2:
	___const__[2] = nast0op_t0cal();
	break;
case 3:
	___const__[3] = nast0op_struct_t0cal();
	break;
case 4:
	___const__[4] = nast0get_ternary_ops0cal();
	break;
case 5:
	___const__[5] = nast0get_unary_ops0cal();
	break;
case 6:
	___const__[6] = nast0get_bin_ops0cal();
	break;
case 7:
	___const__[7] = nast0get_max_precedence0cal();
	break;
case 8:
	___const__[8] = nast0variant_t0cal();
	break;
case 9:
	___const__[9] = nast0fun_def_t0cal();
	break;
case 10:
	___const__[10] = nast0fun_def_arg_t0cal();
	break;
case 11:
	___const__[11] = nast0module_t0cal();
	break;
case 12:
	___const__[12] = nast0variable_type_t0cal();
	break;
case 13:
	___const__[13] = nast0variable_declaration_t0cal();
	break;
case 14:
	___const__[14] = nast0fun_val_arg_t0cal();
	break;
case 15:
	___const__[15] = nast0fun_val_t0cal();
	break;
case 16:
	___const__[16] = nast0hash_elem_t0cal();
	break;
case 17:
	___const__[17] = nast0hash_decl_t0cal();
	break;
case 18:
	___const__[18] = nast0bin_op_t0cal();
	break;
case 19:
	___const__[19] = nast0var_op_t0cal();
	break;
case 20:
	___const__[20] = nast0fun_label_t0cal();
	break;
case 21:
	___const__[21] = nast0unary_op_t0cal();
	break;
case 22:
	___const__[22] = nast0ternary_op_t0cal();
	break;
case 23:
	___const__[23] = nast0value_t0cal();
	break;
case 24:
	___const__[24] = nast0match_t0cal();
	break;
case 25:
	___const__[25] = nast0variant_decl_t0cal();
	break;
case 26:
	___const__[26] = nast0match_branch_t0cal();
	break;
case 27:
	___const__[27] = nast0fora_t0cal();
	break;
case 28:
	___const__[28] = nast0forh_t0cal();
	break;
case 29:
	___const__[29] = nast0rep_t0cal();
	break;
case 30:
	___const__[30] = nast0while_t0cal();
	break;
case 31:
	___const__[31] = nast0try_ensure_t0cal();
	break;
case 32:
	___const__[32] = nast0if_t0cal();
	break;
case 33:
	___const__[33] = nast0for_t0cal();
	break;
case 34:
	___const__[34] = nast0place_t0cal();
	break;
case 35:
	___const__[35] = nast0debug_t0cal();
	break;
case 36:
	___const__[36] = nast0empty_debug0cal();
	break;
case 37:
	___const__[37] = nast0cmd_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
