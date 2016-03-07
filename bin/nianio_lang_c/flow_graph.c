
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "flow_graph.h"
#include "array.h"
#include "ptd.h"
#include "hash.h"
#include "nlasm.h"
#line 1 "flow_graph.nl"

static ImmT *__const__f = NULL;
void flow_graph_priv0__const__init();
ImmT flow_graph_priv0__const__sim(int __nr);
ImmT flow_graph_priv0__const__sing(int __nr);

ImmT flow_graph_priv0block_name_to_nr(ImmT ___nl__0);
ImmT flow_graph_priv0remove_unused_block(ImmT * ___ref___0);
ImmT flow_graph_priv0set_prev_block(ImmT * ___ref___0,ImmT ___nl__1);
ImmT flow_graph_priv0mk_block(ImmT ___nl__0);
ImmT flow_graph_priv0add_block(ImmT * ___ref___0,ImmT * ___ref___1,ImmT ___nl__2,ImmT ___nl__3);
ImmT flow_graph_priv0read_reg(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT flow_graph_priv0write_reg(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT flow_graph_priv0clear_reg(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT flow_graph_priv0mk_blocks(ImmT ___nl__0,ImmT ___nl__1);


ImmT flow_graph0block_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "flow_graph0block_t");
return flow_graph0block_t();}
ImmT flow_graph0block_t(){
flow_graph_priv0__const__init();
return flow_graph_priv0__const__sing(0);}
ImmT flow_graph0block_t0cal() {
flow_graph_priv0__const__init();
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
#line 12
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nlasm0cmd_t0ptr, ___get_global_const(195), ___get_global_const(196)));
#line 12
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 12
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 12
c_rt_lib0clear(&___nl__3);
#line 12
c_rt_lib0move(&___nl__3, ptd0sim());
#line 12
c_rt_lib0move(&___nl__4, ptd0sim());
#line 12
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(flow_graph0reg_use_t0ptr, ___get_global_const(197), ___get_global_const(198)));
#line 12
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 12
c_rt_lib0move(&___nl__5, ptd0arr(___nl__6));
#line 12
c_rt_lib0clear(&___nl__6);
#line 12
c_rt_lib0move(&___nl__9, ptd0sim());
#line 12
c_rt_lib0move(&___nl__10, ptd0none());
#line 12
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(199), ___nl__9, ___get_global_const(200), ___nl__10));
#line 12
c_rt_lib0clear(&___nl__9);
#line 12
c_rt_lib0clear(&___nl__10);
#line 12
c_rt_lib0move(&___nl__7, ptd0var(___nl__8));
#line 12
c_rt_lib0clear(&___nl__8);
#line 12
c_rt_lib0move(&___nl__6, ptd0hash(___nl__7));
#line 12
c_rt_lib0clear(&___nl__7);
#line 12
c_rt_lib0move(&___nl__8, ptd0sim());
#line 12
c_rt_lib0move(&___nl__7, ptd0arr(___nl__8));
#line 12
c_rt_lib0clear(&___nl__8);
#line 12
c_rt_lib0move(&___nl__9, ptd0sim());
#line 12
c_rt_lib0move(&___nl__8, ptd0arr(___nl__9));
#line 12
c_rt_lib0clear(&___nl__9);
#line 12
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(7, ___get_global_const(201), ___nl__2, ___get_global_const(202), ___nl__3, ___get_global_const(203), ___nl__4, ___get_global_const(204), ___nl__5, ___get_global_const(205), ___nl__6, ___get_global_const(206), ___nl__7, ___get_global_const(207), ___nl__8));
#line 12
c_rt_lib0clear(&___nl__2);
#line 12
c_rt_lib0clear(&___nl__3);
#line 12
c_rt_lib0clear(&___nl__4);
#line 12
c_rt_lib0clear(&___nl__5);
#line 12
c_rt_lib0clear(&___nl__6);
#line 12
c_rt_lib0clear(&___nl__7);
#line 12
c_rt_lib0clear(&___nl__8);
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

ImmT flow_graph0reg_use_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "flow_graph0reg_use_t");
return flow_graph0reg_use_t();}
ImmT flow_graph0reg_use_t(){
flow_graph_priv0__const__init();
return flow_graph_priv0__const__sing(1);}
ImmT flow_graph0reg_use_t0cal() {
flow_graph_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 24
c_rt_lib0move(&___nl__2, ptd0sim());
#line 24
c_rt_lib0move(&___nl__3, ptd0sim());
#line 24
c_rt_lib0move(&___nl__6, ptd0none());
#line 24
c_rt_lib0move(&___nl__7, ptd0none());
#line 24
c_rt_lib0move(&___nl__8, ptd0none());
#line 24
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(199), ___nl__6, ___get_global_const(208), ___nl__7, ___get_global_const(200), ___nl__8));
#line 24
c_rt_lib0clear(&___nl__6);
#line 24
c_rt_lib0clear(&___nl__7);
#line 24
c_rt_lib0clear(&___nl__8);
#line 24
c_rt_lib0move(&___nl__4, ptd0var(___nl__5));
#line 24
c_rt_lib0clear(&___nl__5);
#line 24
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(209), ___nl__2, ___get_global_const(210), ___nl__3, ___get_global_const(73), ___nl__4));
#line 24
c_rt_lib0clear(&___nl__2);
#line 24
c_rt_lib0clear(&___nl__3);
#line 24
c_rt_lib0clear(&___nl__4);
#line 24
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 24
c_rt_lib0clear(&___nl__1);
#line 24
return ___nl__0;
#line 24
c_rt_lib0clear(&___nl__0);
#line 24
return NULL;
}

ImmT flow_graph0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "flow_graph0state_t");
return flow_graph0state_t();}
ImmT flow_graph0state_t(){
flow_graph_priv0__const__init();
return flow_graph_priv0__const__sing(2);}
ImmT flow_graph0state_t0cal() {
flow_graph_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(flow_graph0block_t0ptr, ___get_global_const(197), ___get_global_const(211)));
#line 32
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 32
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 32
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0move(&___nl__4, ptd0sim());
#line 32
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 32
c_rt_lib0clear(&___nl__4);
#line 32
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(212), ___nl__2, ___get_global_const(213), ___nl__3));
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__3);
#line 32
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 32
c_rt_lib0clear(&___nl__1);
#line 32
return ___nl__0;
#line 32
c_rt_lib0clear(&___nl__0);
#line 32
return NULL;
}

ImmT flow_graph0blocks_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "flow_graph0blocks_t");
return flow_graph0blocks_t();}
ImmT flow_graph0blocks_t(){
flow_graph_priv0__const__init();
return flow_graph_priv0__const__sing(3);}
ImmT flow_graph0blocks_t0cal() {
flow_graph_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 36
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(flow_graph0block_t0ptr, ___get_global_const(197), ___get_global_const(211)));
#line 36
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 36
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
return ___nl__0;
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
return NULL;
}

ImmT flow_graph0make_blocks0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "flow_graph0make_blocks");
return flow_graph0make_blocks(_tab[0], _tab[1]);}
ImmT flow_graph0make_blocks(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
flow_graph_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 41
c_rt_lib0move(&___nl__2, flow_graph_priv0mk_blocks(___nl__0, ___nl__1));
#line 42
c_rt_lib0move(&___nl__3,___get_global_const(212));
#line 42
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(___nl__2, ___nl__3));
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(213)));
#line 42
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 42
c_rt_lib0clear(&___nl__5);
#line 42
c_rt_lib0delete(flow_graph_priv0set_prev_block(&___nl__3, ___nl__4));
#line 42
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0move(&___nl__4,___get_global_const(212));
#line 42
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__2, ___nl__4, ___nl__3));
#line 42
c_rt_lib0clear(&___nl__4);
#line 42
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0delete(flow_graph_priv0remove_unused_block(&___nl__2));
#line 44
c_rt_lib0move(&___nl__3, flow_graph_priv0block_name_to_nr(___nl__2));
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
return ___nl__3;
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
return NULL;
}

ImmT flow_graph_priv0block_name_to_nr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
flow_graph_priv0__const__init();
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
#line 49
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(213)));
#line 51
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 51
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 51
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 51
label_3:
#line 51
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 51
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 52
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 52
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__7, ___nl__4));
#line 52
c_rt_lib0clear(&___nl__7);
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 53
goto label_3;
#line 53
label_1:
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0clear(&___nl__5);
#line 53
c_rt_lib0clear(&___nl__6);
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 55
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 55
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 55
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__2));
#line 55
label_6:
#line 55
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 55
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 55
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__2, ___nl__5));
#line 56
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(212)));
#line 56
c_rt_lib0move(&___nl__9, hash0get_value(___nl__10, ___nl__4));
#line 56
c_rt_lib0clear(&___nl__10);
#line 57
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(207)));
#line 58
c_rt_lib0move(&___nl__11, array0len(___nl__10));
#line 58
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 58
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 58
label_9:
#line 58
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__12, ___nl__11));
#line 58
if(c_rt_lib0check_true_native(___nl__14)){ goto label_7;}
#line 59
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 59
c_rt_lib0move(&___nl__15, hash0get_value(___nl__1, ___nl__16));
#line 59
c_rt_lib0clear(&___nl__16);
#line 59
c_rt_lib0copy(&___nl__16, ___nl__15);
#line 59
c_rt_lib0array_set(&___nl__10, ___nl__12, ___nl__16);
#line 59
c_rt_lib0clear(&___nl__15);
#line 59
c_rt_lib0clear(&___nl__16);
#line 60
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 60
goto label_9;
#line 60
label_7:
#line 60
c_rt_lib0clear(&___nl__11);
#line 60
c_rt_lib0clear(&___nl__12);
#line 60
c_rt_lib0clear(&___nl__13);
#line 60
c_rt_lib0clear(&___nl__14);
#line 61
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 61
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(207), ___nl__11);
#line 61
c_rt_lib0clear(&___nl__11);
#line 62
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(206)));
#line 63
c_rt_lib0move(&___nl__12, array0len(___nl__11));
#line 63
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 63
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 63
label_12:
#line 63
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__13, ___nl__12));
#line 63
if(c_rt_lib0check_true_native(___nl__15)){ goto label_10;}
#line 64
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 64
c_rt_lib0move(&___nl__16, hash0get_value(___nl__1, ___nl__17));
#line 64
c_rt_lib0clear(&___nl__17);
#line 64
c_rt_lib0copy(&___nl__17, ___nl__16);
#line 64
c_rt_lib0array_set(&___nl__11, ___nl__13, ___nl__17);
#line 64
c_rt_lib0clear(&___nl__16);
#line 64
c_rt_lib0clear(&___nl__17);
#line 65
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 65
goto label_12;
#line 65
label_10:
#line 65
c_rt_lib0clear(&___nl__12);
#line 65
c_rt_lib0clear(&___nl__13);
#line 65
c_rt_lib0clear(&___nl__14);
#line 65
c_rt_lib0clear(&___nl__15);
#line 66
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 66
c_rt_lib0hash_set_value_dec(&___nl__9, ___get_global_const(206), ___nl__12);
#line 66
c_rt_lib0clear(&___nl__12);
#line 67
c_rt_lib0delete(array0push(&___nl__3, ___nl__9));
#line 67
c_rt_lib0clear(&___nl__9);
#line 67
c_rt_lib0clear(&___nl__10);
#line 67
c_rt_lib0clear(&___nl__11);
#line 68
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 68
goto label_6;
#line 68
label_4:
#line 68
c_rt_lib0clear(&___nl__4);
#line 68
c_rt_lib0clear(&___nl__5);
#line 68
c_rt_lib0clear(&___nl__6);
#line 68
c_rt_lib0clear(&___nl__7);
#line 68
c_rt_lib0clear(&___nl__8);
#line 69
c_rt_lib0clear(&___nl__0);
#line 69
c_rt_lib0clear(&___nl__1);
#line 69
c_rt_lib0clear(&___nl__2);
#line 69
return ___nl__3;
#line 69
c_rt_lib0clear(&___nl__1);
#line 69
c_rt_lib0clear(&___nl__2);
#line 69
c_rt_lib0clear(&___nl__3);
#line 69
c_rt_lib0clear(&___nl__0);
#line 69
return NULL;
}

ImmT flow_graph0combine_blocks0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "flow_graph0combine_blocks");
return flow_graph0combine_blocks(_tab[0]);}
ImmT flow_graph0combine_blocks(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
flow_graph_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 73
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 74
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 74
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 74
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 74
label_3:
#line 74
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 74
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 74
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 75
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(201)));
#line 75
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 75
c_rt_lib0clear(&___nl__7);
#line 76
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 76
goto label_3;
#line 76
label_1:
#line 76
c_rt_lib0clear(&___nl__2);
#line 76
c_rt_lib0clear(&___nl__3);
#line 76
c_rt_lib0clear(&___nl__4);
#line 76
c_rt_lib0clear(&___nl__5);
#line 76
c_rt_lib0clear(&___nl__6);
#line 77
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 77
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 77
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 77
c_rt_lib0clear(&___nl__4);
#line 77
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 77
c_rt_lib0clear(&___nl__3);
#line 77
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(214)));
#line 77
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(75)));
#line 77
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 77
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 77
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 78
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(215)));
#line 78
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(75), ___nl__4));
#line 78
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 78
c_rt_lib0move(&___nl__6, nlasm0empty_debug());
#line 78
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(214), ___nl__4, ___get_global_const(216), ___nl__5, ___get_global_const(217), ___nl__6));
#line 78
c_rt_lib0clear(&___nl__4);
#line 78
c_rt_lib0clear(&___nl__5);
#line 78
c_rt_lib0clear(&___nl__6);
#line 78
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 78
c_rt_lib0clear(&___nl__3);
#line 79
goto label_5;
#line 79
label_5:
#line 79
c_rt_lib0clear(&___nl__2);
#line 80
c_rt_lib0clear(&___nl__0);
#line 80
return ___nl__1;
#line 80
c_rt_lib0clear(&___nl__1);
#line 80
c_rt_lib0clear(&___nl__0);
#line 80
return NULL;
}

ImmT flow_graph_priv0remove_unused_block(ImmT * ___ref___0) {
flow_graph_priv0__const__init();
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
#line 84
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 85
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 86
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 87
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(212)));
#line 88
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(213)));
#line 88
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 88
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 88
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 88
label_3:
#line 88
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 88
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 88
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 89
c_rt_lib0move(&___nl__11, hash0get_value(___nl__4, ___nl__6));
#line 90
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(206)));
#line 90
c_rt_lib0move(&___nl__12, array0len(___nl__13));
#line 90
c_rt_lib0clear(&___nl__13);
#line 90
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 90
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__12, ___nl__13));
#line 90
c_rt_lib0clear(&___nl__13);
#line 90
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 90
if(c_rt_lib0check_true_native(___nl__12)){ goto label_5;}
#line 91
c_rt_lib0copy(&___nl__13, ___nl__3);
#line 91
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 91
if(c_rt_lib0check_true_native(___nl__13)){ goto label_7;}
#line 92
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 92
c_rt_lib0copy(&___nl__3, ___nl__14);
#line 92
c_rt_lib0clear(&___nl__14);
#line 93
goto label_6;
#line 93
label_7:
#line 94
c_rt_lib0clear(&___nl__11);
#line 94
c_rt_lib0clear(&___nl__12);
#line 94
c_rt_lib0clear(&___nl__13);
#line 94
goto label_2;
#line 95
goto label_6;
#line 95
label_6:
#line 95
c_rt_lib0clear(&___nl__13);
#line 96
goto label_5;
#line 96
label_5:
#line 96
c_rt_lib0clear(&___nl__12);
#line 97
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__6, ___nl__11));
#line 98
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 98
c_rt_lib0clear(&___nl__11);
#line 98
label_2:
#line 99
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 99
goto label_3;
#line 99
label_1:
#line 99
c_rt_lib0clear(&___nl__5);
#line 99
c_rt_lib0clear(&___nl__6);
#line 99
c_rt_lib0clear(&___nl__7);
#line 99
c_rt_lib0clear(&___nl__8);
#line 99
c_rt_lib0clear(&___nl__9);
#line 99
c_rt_lib0clear(&___nl__10);
#line 100
c_rt_lib0copy(&___nl__5, ___nl__2);
#line 100
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(212), ___nl__5);
#line 100
c_rt_lib0clear(&___nl__5);
#line 101
c_rt_lib0copy(&___nl__5, ___nl__1);
#line 101
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(213), ___nl__5);
#line 101
c_rt_lib0clear(&___nl__5);
#line 101
c_rt_lib0clear(&___nl__1);
#line 101
c_rt_lib0clear(&___nl__2);
#line 101
c_rt_lib0clear(&___nl__3);
#line 101
c_rt_lib0clear(&___nl__4);
#line 101
return NULL;
}

ImmT flow_graph_priv0set_prev_block(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
flow_graph_priv0__const__init();
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
#line 105
c_rt_lib0move(&___nl__2, hash0get_value(*___ref___0, ___nl__1));
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(206)));
#line 106
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 106
c_rt_lib0clear(&___nl__4);
#line 106
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 106
c_rt_lib0move(&___nl__3, c_rt_lib0le(___nl__3, ___nl__4));
#line 106
c_rt_lib0clear(&___nl__4);
#line 106
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 106
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 106
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 106
c_rt_lib0clear(&___nl__1);
#line 106
c_rt_lib0clear(&___nl__2);
#line 106
c_rt_lib0clear(&___nl__3);
#line 106
return NULL;
#line 106
goto label_2;
#line 106
label_2:
#line 106
c_rt_lib0clear(&___nl__3);
#line 107
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(207)));
#line 107
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 107
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 107
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 107
label_5:
#line 107
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 107
if(c_rt_lib0check_true_native(___nl__8)){ goto label_3;}
#line 107
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 108
c_rt_lib0move(&___nl__9, hash0get_value(*___ref___0, ___nl__4));
#line 109
c_rt_lib0move(&___nl__10,___get_global_const(206));
#line 109
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__9, ___nl__10));
#line 109
c_rt_lib0delete(array0push(&___nl__10, ___nl__1));
#line 109
c_rt_lib0move(&___nl__11,___get_global_const(206));
#line 109
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__9, ___nl__11, ___nl__10));
#line 109
c_rt_lib0clear(&___nl__11);
#line 109
c_rt_lib0clear(&___nl__10);
#line 110
c_rt_lib0delete(hash0set_value(___ref___0, ___nl__4, ___nl__9));
#line 111
c_rt_lib0delete(flow_graph_priv0set_prev_block(___ref___0, ___nl__4));
#line 111
c_rt_lib0clear(&___nl__9);
#line 112
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 112
goto label_5;
#line 112
label_3:
#line 112
c_rt_lib0clear(&___nl__3);
#line 112
c_rt_lib0clear(&___nl__4);
#line 112
c_rt_lib0clear(&___nl__5);
#line 112
c_rt_lib0clear(&___nl__6);
#line 112
c_rt_lib0clear(&___nl__7);
#line 112
c_rt_lib0clear(&___nl__8);
#line 112
c_rt_lib0clear(&___nl__2);
#line 112
c_rt_lib0clear(&___nl__1);
#line 112
return NULL;
}

ImmT flow_graph_priv0mk_block(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
flow_graph_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 116
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 116
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 116
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 116
c_rt_lib0move(&___nl__4, c_rt_lib0unary_minus(___nl__4));
#line 116
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 116
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 116
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 116
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(7, ___get_global_const(201), ___nl__2, ___get_global_const(206), ___nl__3, ___get_global_const(202), ___nl__0, ___get_global_const(203), ___nl__4, ___get_global_const(204), ___nl__5, ___get_global_const(205), ___nl__6, ___get_global_const(207), ___nl__7));
#line 116
c_rt_lib0clear(&___nl__2);
#line 116
c_rt_lib0clear(&___nl__3);
#line 116
c_rt_lib0clear(&___nl__4);
#line 116
c_rt_lib0clear(&___nl__5);
#line 116
c_rt_lib0clear(&___nl__6);
#line 116
c_rt_lib0clear(&___nl__7);
#line 116
c_rt_lib0clear(&___nl__0);
#line 116
return ___nl__1;
#line 116
c_rt_lib0clear(&___nl__1);
#line 116
c_rt_lib0clear(&___nl__0);
#line 116
return NULL;
}

ImmT flow_graph_priv0add_block(ImmT * ___ref___0,ImmT * ___ref___1,ImmT ___nl__2,ImmT ___nl__3) {
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
flow_graph_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 121
c_rt_lib0copy(&___nl__4, ___nl__2);
#line 121
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(203), ___nl__4);
#line 121
c_rt_lib0clear(&___nl__4);
#line 122
c_rt_lib0move(&___nl__4,___get_global_const(212));
#line 122
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 122
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__3, *___ref___1));
#line 122
c_rt_lib0move(&___nl__5,___get_global_const(212));
#line 122
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 122
c_rt_lib0clear(&___nl__5);
#line 122
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0move(&___nl__4,___get_global_const(213));
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 123
c_rt_lib0delete(array0push(&___nl__4, ___nl__3));
#line 123
c_rt_lib0move(&___nl__5,___get_global_const(213));
#line 123
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 123
c_rt_lib0clear(&___nl__5);
#line 123
c_rt_lib0clear(&___nl__4);
#line 124
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 124
c_rt_lib0move(&___nl__5, c_rt_lib0add(___nl__2, ___nl__5));
#line 124
c_rt_lib0move(&___nl__4, flow_graph_priv0mk_block(___nl__5));
#line 124
c_rt_lib0clear(&___nl__5);
#line 124
c_rt_lib0copy(___ref___1, ___nl__4);
#line 124
c_rt_lib0clear(&___nl__4);
#line 124
c_rt_lib0clear(&___nl__2);
#line 124
c_rt_lib0clear(&___nl__3);
#line 124
return NULL;
}

ImmT flow_graph_priv0read_reg(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
flow_graph_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 128
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 128
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 128
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 128
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 128
c_rt_lib0clear(&___nl__1);
#line 128
c_rt_lib0clear(&___nl__2);
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
return NULL;
#line 128
goto label_2;
#line 128
label_2:
#line 128
c_rt_lib0clear(&___nl__3);
#line 129
c_rt_lib0move(&___nl__3,___get_global_const(204));
#line 129
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 129
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(208)));
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(209), ___nl__1, ___get_global_const(210), ___nl__2, ___get_global_const(73), ___nl__5));
#line 129
c_rt_lib0clear(&___nl__5);
#line 129
c_rt_lib0delete(array0push(&___nl__3, ___nl__4));
#line 129
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0move(&___nl__4,___get_global_const(204));
#line 129
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 129
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0clear(&___nl__3);
#line 129
c_rt_lib0clear(&___nl__1);
#line 129
c_rt_lib0clear(&___nl__2);
#line 129
return NULL;
}

ImmT flow_graph_priv0write_reg(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
flow_graph_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 133
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 133
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 133
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 133
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 133
c_rt_lib0clear(&___nl__1);
#line 133
c_rt_lib0clear(&___nl__2);
#line 133
c_rt_lib0clear(&___nl__3);
#line 133
return NULL;
#line 133
goto label_2;
#line 133
label_2:
#line 133
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0move(&___nl__3,___get_global_const(204));
#line 134
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(199)));
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(209), ___nl__1, ___get_global_const(210), ___nl__2, ___get_global_const(73), ___nl__5));
#line 134
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0delete(array0push(&___nl__3, ___nl__4));
#line 134
c_rt_lib0clear(&___nl__4);
#line 134
c_rt_lib0move(&___nl__4,___get_global_const(204));
#line 134
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 134
c_rt_lib0clear(&___nl__4);
#line 134
c_rt_lib0clear(&___nl__3);
#line 135
c_rt_lib0move(&___nl__3,___get_global_const(205));
#line 135
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 135
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(199), ___nl__2));
#line 135
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__1, ___nl__4));
#line 135
c_rt_lib0clear(&___nl__4);
#line 135
c_rt_lib0move(&___nl__4,___get_global_const(205));
#line 135
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 135
c_rt_lib0clear(&___nl__4);
#line 135
c_rt_lib0clear(&___nl__3);
#line 135
c_rt_lib0clear(&___nl__1);
#line 135
c_rt_lib0clear(&___nl__2);
#line 135
return NULL;
}

ImmT flow_graph_priv0clear_reg(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
flow_graph_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 139
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 139
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 139
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
c_rt_lib0clear(&___nl__3);
#line 139
return NULL;
#line 139
goto label_2;
#line 139
label_2:
#line 139
c_rt_lib0clear(&___nl__3);
#line 140
c_rt_lib0move(&___nl__3,___get_global_const(204));
#line 140
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 140
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(200)));
#line 140
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(209), ___nl__1, ___get_global_const(210), ___nl__2, ___get_global_const(73), ___nl__5));
#line 140
c_rt_lib0clear(&___nl__5);
#line 140
c_rt_lib0delete(array0push(&___nl__3, ___nl__4));
#line 140
c_rt_lib0clear(&___nl__4);
#line 140
c_rt_lib0move(&___nl__4,___get_global_const(204));
#line 140
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 140
c_rt_lib0clear(&___nl__4);
#line 140
c_rt_lib0clear(&___nl__3);
#line 141
c_rt_lib0move(&___nl__3,___get_global_const(205));
#line 141
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 141
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(200)));
#line 141
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__1, ___nl__4));
#line 141
c_rt_lib0clear(&___nl__4);
#line 141
c_rt_lib0move(&___nl__4,___get_global_const(205));
#line 141
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 141
c_rt_lib0clear(&___nl__4);
#line 141
c_rt_lib0clear(&___nl__3);
#line 141
c_rt_lib0clear(&___nl__1);
#line 141
c_rt_lib0clear(&___nl__2);
#line 141
return NULL;
}

ImmT flow_graph_priv0mk_blocks(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
flow_graph_priv0__const__init();
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
#line 145
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 145
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 145
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(212), ___nl__3, ___get_global_const(213), ___nl__4));
#line 145
c_rt_lib0clear(&___nl__3);
#line 145
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 146
c_rt_lib0move(&___nl__3, flow_graph_priv0mk_block(___nl__4));
#line 146
c_rt_lib0clear(&___nl__4);
#line 147
c_rt_lib0move(&___nl__4,___get_global_const(218));
#line 148
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 149
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 149
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__0));
#line 149
label_3:
#line 149
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 149
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 149
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__0, ___nl__7));
#line 150
c_rt_lib0move(&___nl__11,___get_global_const(201));
#line 150
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__3, ___nl__11));
#line 150
c_rt_lib0delete(array0push(&___nl__11, ___nl__6));
#line 150
c_rt_lib0move(&___nl__12,___get_global_const(201));
#line 150
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__12, ___nl__11));
#line 150
c_rt_lib0clear(&___nl__12);
#line 150
c_rt_lib0clear(&___nl__11);
#line 151
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(214)));
#line 151
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(219)));
#line 151
if(c_rt_lib0check_true_native(___nl__12)){ goto label_5;}
#line 156
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(220)));
#line 156
if(c_rt_lib0check_true_native(___nl__12)){ goto label_6;}
#line 161
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(221)));
#line 161
if(c_rt_lib0check_true_native(___nl__12)){ goto label_7;}
#line 176
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(222)));
#line 176
if(c_rt_lib0check_true_native(___nl__12)){ goto label_8;}
#line 179
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(223)));
#line 179
if(c_rt_lib0check_true_native(___nl__12)){ goto label_9;}
#line 183
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(224)));
#line 183
if(c_rt_lib0check_true_native(___nl__12)){ goto label_10;}
#line 186
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(225)));
#line 186
if(c_rt_lib0check_true_native(___nl__12)){ goto label_11;}
#line 189
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(72)));
#line 189
if(c_rt_lib0check_true_native(___nl__12)){ goto label_12;}
#line 191
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(226)));
#line 191
if(c_rt_lib0check_true_native(___nl__12)){ goto label_13;}
#line 194
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(227)));
#line 194
if(c_rt_lib0check_true_native(___nl__12)){ goto label_14;}
#line 196
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(228)));
#line 196
if(c_rt_lib0check_true_native(___nl__12)){ goto label_15;}
#line 200
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(229)));
#line 200
if(c_rt_lib0check_true_native(___nl__12)){ goto label_16;}
#line 205
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(230)));
#line 205
if(c_rt_lib0check_true_native(___nl__12)){ goto label_17;}
#line 208
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(231)));
#line 208
if(c_rt_lib0check_true_native(___nl__12)){ goto label_18;}
#line 212
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(232)));
#line 212
if(c_rt_lib0check_true_native(___nl__12)){ goto label_19;}
#line 215
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(75)));
#line 215
if(c_rt_lib0check_true_native(___nl__12)){ goto label_20;}
#line 224
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(233)));
#line 224
if(c_rt_lib0check_true_native(___nl__12)){ goto label_21;}
#line 228
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(234)));
#line 228
if(c_rt_lib0check_true_native(___nl__12)){ goto label_22;}
#line 236
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(235)));
#line 236
if(c_rt_lib0check_true_native(___nl__12)){ goto label_23;}
#line 246
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(236)));
#line 246
if(c_rt_lib0check_true_native(___nl__12)){ goto label_24;}
#line 250
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(200)));
#line 250
if(c_rt_lib0check_true_native(___nl__12)){ goto label_25;}
#line 250
c_rt_lib0move(&___nl__12,___get_global_const(76));
#line 250
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 250
nl_die_arg(___nl__12);
#line 151
label_5:
#line 151
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(219)));
#line 152
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 152
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 152
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 152
c_rt_lib0move(&___nl__18, c_rt_lib0array_len(___nl__14));
#line 152
label_28:
#line 152
c_rt_lib0move(&___nl__19, c_rt_lib0ge(___nl__16, ___nl__18));
#line 152
if(c_rt_lib0check_true_native(___nl__19)){ goto label_26;}
#line 152
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__14, ___nl__16));
#line 153
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__15, ___nl__5));
#line 154
c_rt_lib0move(&___nl__16, c_rt_lib0add_mod(___nl__16, ___nl__17));
#line 154
goto label_28;
#line 154
label_26:
#line 154
c_rt_lib0clear(&___nl__14);
#line 154
c_rt_lib0clear(&___nl__15);
#line 154
c_rt_lib0clear(&___nl__16);
#line 154
c_rt_lib0clear(&___nl__17);
#line 154
c_rt_lib0clear(&___nl__18);
#line 154
c_rt_lib0clear(&___nl__19);
#line 155
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 155
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 155
c_rt_lib0clear(&___nl__14);
#line 155
c_rt_lib0clear(&___nl__13);
#line 156
goto label_4;
#line 156
label_6:
#line 156
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(220)));
#line 157
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 157
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 157
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 157
c_rt_lib0move(&___nl__18, c_rt_lib0array_len(___nl__14));
#line 157
label_31:
#line 157
c_rt_lib0move(&___nl__19, c_rt_lib0ge(___nl__16, ___nl__18));
#line 157
if(c_rt_lib0check_true_native(___nl__19)){ goto label_29;}
#line 157
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__14, ___nl__16));
#line 158
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(238)));
#line 158
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__20, ___nl__5));
#line 158
c_rt_lib0clear(&___nl__20);
#line 159
c_rt_lib0move(&___nl__16, c_rt_lib0add_mod(___nl__16, ___nl__17));
#line 159
goto label_31;
#line 159
label_29:
#line 159
c_rt_lib0clear(&___nl__14);
#line 159
c_rt_lib0clear(&___nl__15);
#line 159
c_rt_lib0clear(&___nl__16);
#line 159
c_rt_lib0clear(&___nl__17);
#line 159
c_rt_lib0clear(&___nl__18);
#line 159
c_rt_lib0clear(&___nl__19);
#line 160
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 160
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 160
c_rt_lib0clear(&___nl__14);
#line 160
c_rt_lib0clear(&___nl__13);
#line 161
goto label_4;
#line 161
label_7:
#line 161
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(221)));
#line 162
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(74)));
#line 162
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 162
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 162
c_rt_lib0move(&___nl__18, c_rt_lib0array_len(___nl__14));
#line 162
label_34:
#line 162
c_rt_lib0move(&___nl__19, c_rt_lib0ge(___nl__16, ___nl__18));
#line 162
if(c_rt_lib0check_true_native(___nl__19)){ goto label_32;}
#line 162
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__14, ___nl__16));
#line 163
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__15, ___get_global_const(238)));
#line 163
if(c_rt_lib0check_true_native(___nl__20)){ goto label_36;}
#line 165
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__15, ___get_global_const(5)));
#line 165
if(c_rt_lib0check_true_native(___nl__20)){ goto label_37;}
#line 165
c_rt_lib0move(&___nl__20,___get_global_const(76));
#line 165
c_rt_lib0move(&___nl__20, c_rt_lib0array_mk(2, ___nl__20, ___nl__15));
#line 165
nl_die_arg(___nl__20);
#line 163
label_36:
#line 163
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__15, ___get_global_const(238)));
#line 164
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__21, ___nl__5));
#line 164
c_rt_lib0clear(&___nl__21);
#line 165
goto label_35;
#line 165
label_37:
#line 165
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__15, ___get_global_const(5)));
#line 166
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__21, ___nl__5));
#line 166
c_rt_lib0clear(&___nl__21);
#line 167
goto label_35;
#line 167
label_35:
#line 167
c_rt_lib0clear(&___nl__20);
#line 168
c_rt_lib0move(&___nl__16, c_rt_lib0add_mod(___nl__16, ___nl__17));
#line 168
goto label_34;
#line 168
label_32:
#line 168
c_rt_lib0clear(&___nl__14);
#line 168
c_rt_lib0clear(&___nl__15);
#line 168
c_rt_lib0clear(&___nl__16);
#line 168
c_rt_lib0clear(&___nl__17);
#line 168
c_rt_lib0clear(&___nl__18);
#line 168
c_rt_lib0clear(&___nl__19);
#line 169
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(74)));
#line 169
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 169
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 169
c_rt_lib0move(&___nl__18, c_rt_lib0array_len(___nl__14));
#line 169
label_40:
#line 169
c_rt_lib0move(&___nl__19, c_rt_lib0ge(___nl__16, ___nl__18));
#line 169
if(c_rt_lib0check_true_native(___nl__19)){ goto label_38;}
#line 169
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__14, ___nl__16));
#line 170
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__15, ___get_global_const(238)));
#line 170
if(c_rt_lib0check_true_native(___nl__20)){ goto label_42;}
#line 171
c_rt_lib0move(&___nl__20, c_rt_lib0priv_is(___nl__15, ___get_global_const(5)));
#line 171
if(c_rt_lib0check_true_native(___nl__20)){ goto label_43;}
#line 171
c_rt_lib0move(&___nl__20,___get_global_const(76));
#line 171
c_rt_lib0move(&___nl__20, c_rt_lib0array_mk(2, ___nl__20, ___nl__15));
#line 171
nl_die_arg(___nl__20);
#line 170
label_42:
#line 170
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__15, ___get_global_const(238)));
#line 170
c_rt_lib0clear(&___nl__21);
#line 171
goto label_41;
#line 171
label_43:
#line 171
c_rt_lib0move(&___nl__21, c_rt_lib0priv_as(___nl__15, ___get_global_const(5)));
#line 172
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__21, ___nl__5));
#line 172
c_rt_lib0clear(&___nl__21);
#line 173
goto label_41;
#line 173
label_41:
#line 173
c_rt_lib0clear(&___nl__20);
#line 174
c_rt_lib0move(&___nl__16, c_rt_lib0add_mod(___nl__16, ___nl__17));
#line 174
goto label_40;
#line 174
label_38:
#line 174
c_rt_lib0clear(&___nl__14);
#line 174
c_rt_lib0clear(&___nl__15);
#line 174
c_rt_lib0clear(&___nl__16);
#line 174
c_rt_lib0clear(&___nl__17);
#line 174
c_rt_lib0clear(&___nl__18);
#line 174
c_rt_lib0clear(&___nl__19);
#line 175
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 175
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 175
c_rt_lib0clear(&___nl__14);
#line 175
c_rt_lib0clear(&___nl__13);
#line 176
goto label_4;
#line 176
label_8:
#line 176
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(222)));
#line 177
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 177
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 177
c_rt_lib0clear(&___nl__14);
#line 178
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 178
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 178
c_rt_lib0clear(&___nl__14);
#line 178
c_rt_lib0clear(&___nl__13);
#line 179
goto label_4;
#line 179
label_9:
#line 179
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(223)));
#line 180
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(239)));
#line 180
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 180
c_rt_lib0clear(&___nl__14);
#line 181
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(240)));
#line 181
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 181
c_rt_lib0clear(&___nl__14);
#line 182
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 182
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 182
c_rt_lib0clear(&___nl__14);
#line 182
c_rt_lib0clear(&___nl__13);
#line 183
goto label_4;
#line 183
label_10:
#line 183
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(224)));
#line 184
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 184
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 184
c_rt_lib0clear(&___nl__14);
#line 185
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 185
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 185
c_rt_lib0clear(&___nl__14);
#line 185
c_rt_lib0clear(&___nl__13);
#line 186
goto label_4;
#line 186
label_11:
#line 186
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(225)));
#line 187
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 187
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 187
c_rt_lib0clear(&___nl__14);
#line 188
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 188
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 188
c_rt_lib0clear(&___nl__14);
#line 188
c_rt_lib0clear(&___nl__13);
#line 189
goto label_4;
#line 189
label_12:
#line 189
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(72)));
#line 190
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 190
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 190
c_rt_lib0clear(&___nl__14);
#line 190
c_rt_lib0clear(&___nl__13);
#line 191
goto label_4;
#line 191
label_13:
#line 191
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(226)));
#line 192
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 192
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 192
c_rt_lib0clear(&___nl__14);
#line 193
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 193
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 193
c_rt_lib0clear(&___nl__14);
#line 193
c_rt_lib0clear(&___nl__13);
#line 194
goto label_4;
#line 194
label_14:
#line 194
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(227)));
#line 195
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 195
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 195
c_rt_lib0clear(&___nl__14);
#line 195
c_rt_lib0clear(&___nl__13);
#line 196
goto label_4;
#line 196
label_15:
#line 196
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(228)));
#line 197
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 197
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 197
c_rt_lib0clear(&___nl__14);
#line 198
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(241)));
#line 198
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 198
c_rt_lib0clear(&___nl__14);
#line 199
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 199
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 199
c_rt_lib0clear(&___nl__14);
#line 199
c_rt_lib0clear(&___nl__13);
#line 200
goto label_4;
#line 200
label_16:
#line 200
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(229)));
#line 201
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 201
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 201
c_rt_lib0clear(&___nl__14);
#line 202
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(241)));
#line 202
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 202
c_rt_lib0clear(&___nl__14);
#line 203
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(238)));
#line 203
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 203
c_rt_lib0clear(&___nl__14);
#line 204
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 204
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 204
c_rt_lib0clear(&___nl__14);
#line 204
c_rt_lib0clear(&___nl__13);
#line 205
goto label_4;
#line 205
label_17:
#line 205
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(230)));
#line 206
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 206
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 206
c_rt_lib0clear(&___nl__14);
#line 207
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 207
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 207
c_rt_lib0clear(&___nl__14);
#line 207
c_rt_lib0clear(&___nl__13);
#line 208
goto label_4;
#line 208
label_18:
#line 208
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(231)));
#line 209
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 209
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 209
c_rt_lib0clear(&___nl__14);
#line 210
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(238)));
#line 210
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 210
c_rt_lib0clear(&___nl__14);
#line 211
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 211
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 211
c_rt_lib0clear(&___nl__14);
#line 211
c_rt_lib0clear(&___nl__13);
#line 212
goto label_4;
#line 212
label_19:
#line 212
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(232)));
#line 213
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 213
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(242)));
#line 213
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 213
if(c_rt_lib0check_true_native(___nl__14)){ goto label_45;}
#line 213
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 213
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__15, ___get_global_const(242)));
#line 213
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__15, ___nl__5));
#line 213
c_rt_lib0clear(&___nl__15);
#line 213
goto label_45;
#line 213
label_45:
#line 213
c_rt_lib0clear(&___nl__14);
#line 214
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 214
c_rt_lib0delete(flow_graph_priv0write_reg(&___nl__3, ___nl__14, ___nl__5));
#line 214
c_rt_lib0clear(&___nl__14);
#line 214
c_rt_lib0clear(&___nl__13);
#line 215
goto label_4;
#line 215
label_20:
#line 215
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(75)));
#line 216
c_rt_lib0copy(&___nl__14, ___nl__13);
#line 216
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__14, ___get_global_const(238)));
#line 216
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 216
if(c_rt_lib0check_true_native(___nl__14)){ goto label_47;}
#line 216
c_rt_lib0copy(&___nl__15, ___nl__13);
#line 216
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__15, ___get_global_const(238)));
#line 216
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__15, ___nl__5));
#line 216
c_rt_lib0clear(&___nl__15);
#line 216
goto label_47;
#line 216
label_47:
#line 216
c_rt_lib0clear(&___nl__14);
#line 217
c_rt_lib0move(&___nl__14, array0len(___nl__1));
#line 217
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 217
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 217
label_50:
#line 217
c_rt_lib0move(&___nl__17, c_rt_lib0ge(___nl__15, ___nl__14));
#line 217
if(c_rt_lib0check_true_native(___nl__17)){ goto label_48;}
#line 218
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__1, ___nl__15));
#line 218
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__18, ___get_global_const(5)));
#line 218
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 218
if(c_rt_lib0check_true_native(___nl__18)){ goto label_52;}
#line 219
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__15, ___nl__5));
#line 220
goto label_52;
#line 220
label_52:
#line 220
c_rt_lib0clear(&___nl__18);
#line 221
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 221
goto label_50;
#line 221
label_48:
#line 221
c_rt_lib0clear(&___nl__14);
#line 221
c_rt_lib0clear(&___nl__15);
#line 221
c_rt_lib0clear(&___nl__16);
#line 221
c_rt_lib0clear(&___nl__17);
#line 222
c_rt_lib0delete(flow_graph_priv0add_block(&___nl__2, &___nl__3, ___nl__5, ___nl__4));
#line 223
c_rt_lib0move(&___nl__14,___get_global_const(243));
#line 223
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__14));
#line 223
c_rt_lib0clear(&___nl__14);
#line 223
c_rt_lib0clear(&___nl__13);
#line 224
goto label_4;
#line 224
label_21:
#line 224
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(233)));
#line 225
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__13, ___nl__5));
#line 226
c_rt_lib0delete(flow_graph_priv0add_block(&___nl__2, &___nl__3, ___nl__5, ___nl__4));
#line 227
c_rt_lib0move(&___nl__14,___get_global_const(244));
#line 227
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__14));
#line 227
c_rt_lib0clear(&___nl__14);
#line 227
c_rt_lib0clear(&___nl__13);
#line 228
goto label_4;
#line 228
label_22:
#line 228
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(234)));
#line 229
c_rt_lib0move(&___nl__14, c_rt_lib0ne(___nl__13, ___nl__4));
#line 229
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 229
if(c_rt_lib0check_true_native(___nl__14)){ goto label_54;}
#line 230
c_rt_lib0move(&___nl__15,___get_global_const(207));
#line 230
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__3, ___nl__15));
#line 230
c_rt_lib0delete(array0push(&___nl__15, ___nl__13));
#line 230
c_rt_lib0move(&___nl__16,___get_global_const(207));
#line 230
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__16, ___nl__15));
#line 230
c_rt_lib0clear(&___nl__16);
#line 230
c_rt_lib0clear(&___nl__15);
#line 231
c_rt_lib0move(&___nl__15,___get_global_const(201));
#line 231
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__3, ___nl__15));
#line 231
c_rt_lib0delete(array0pop(&___nl__15));
#line 231
c_rt_lib0move(&___nl__16,___get_global_const(201));
#line 231
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__16, ___nl__15));
#line 231
c_rt_lib0clear(&___nl__16);
#line 231
c_rt_lib0clear(&___nl__15);
#line 232
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 232
c_rt_lib0move(&___nl__15, c_rt_lib0sub(___nl__5, ___nl__15));
#line 232
c_rt_lib0delete(flow_graph_priv0add_block(&___nl__2, &___nl__3, ___nl__15, ___nl__4));
#line 232
c_rt_lib0clear(&___nl__15);
#line 233
c_rt_lib0move(&___nl__15,___get_global_const(201));
#line 233
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__3, ___nl__15));
#line 233
c_rt_lib0delete(array0push(&___nl__15, ___nl__6));
#line 233
c_rt_lib0move(&___nl__16,___get_global_const(201));
#line 233
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__16, ___nl__15));
#line 233
c_rt_lib0clear(&___nl__16);
#line 233
c_rt_lib0clear(&___nl__15);
#line 234
c_rt_lib0copy(&___nl__4, ___nl__13);
#line 235
goto label_54;
#line 235
label_54:
#line 235
c_rt_lib0clear(&___nl__14);
#line 235
c_rt_lib0clear(&___nl__13);
#line 236
goto label_4;
#line 236
label_23:
#line 236
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(235)));
#line 237
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 237
c_rt_lib0delete(flow_graph_priv0read_reg(&___nl__3, ___nl__14, ___nl__5));
#line 237
c_rt_lib0clear(&___nl__14);
#line 238
c_rt_lib0move(&___nl__14,___get_global_const(207));
#line 238
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(___nl__3, ___nl__14));
#line 238
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(237)));
#line 238
c_rt_lib0delete(array0push(&___nl__14, ___nl__15));
#line 238
c_rt_lib0clear(&___nl__15);
#line 238
c_rt_lib0move(&___nl__15,___get_global_const(207));
#line 238
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__15, ___nl__14));
#line 238
c_rt_lib0clear(&___nl__15);
#line 238
c_rt_lib0clear(&___nl__14);
#line 239
c_rt_lib0move(&___nl__14,___get_global_const(245));
#line 239
c_rt_lib0move(&___nl__14, c_rt_lib0concat_new(___nl__4, ___nl__14));
#line 240
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 240
c_rt_lib0move(&___nl__16, c_rt_lib0add(___nl__5, ___nl__16));
#line 240
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__0, ___nl__16));
#line 240
c_rt_lib0clear(&___nl__16);
#line 240
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(214)));
#line 240
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__15, ___get_global_const(234)));
#line 240
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 240
if(c_rt_lib0check_true_native(___nl__15)){ goto label_56;}
#line 241
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 241
c_rt_lib0move(&___nl__17, c_rt_lib0add(___nl__5, ___nl__17));
#line 241
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__0, ___nl__17));
#line 241
c_rt_lib0clear(&___nl__17);
#line 241
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(214)));
#line 241
c_rt_lib0move(&___nl__16, c_rt_lib0priv_as(___nl__16, ___get_global_const(234)));
#line 241
c_rt_lib0copy(&___nl__14, ___nl__16);
#line 241
c_rt_lib0clear(&___nl__16);
#line 242
goto label_56;
#line 242
label_56:
#line 242
c_rt_lib0clear(&___nl__15);
#line 243
c_rt_lib0move(&___nl__15,___get_global_const(207));
#line 243
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__3, ___nl__15));
#line 243
c_rt_lib0delete(array0push(&___nl__15, ___nl__14));
#line 243
c_rt_lib0move(&___nl__16,___get_global_const(207));
#line 243
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__16, ___nl__15));
#line 243
c_rt_lib0clear(&___nl__16);
#line 243
c_rt_lib0clear(&___nl__15);
#line 244
c_rt_lib0delete(flow_graph_priv0add_block(&___nl__2, &___nl__3, ___nl__5, ___nl__4));
#line 245
c_rt_lib0copy(&___nl__4, ___nl__14);
#line 245
c_rt_lib0clear(&___nl__14);
#line 245
c_rt_lib0clear(&___nl__13);
#line 246
goto label_4;
#line 246
label_24:
#line 246
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(236)));
#line 247
c_rt_lib0move(&___nl__14,___get_global_const(207));
#line 247
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(___nl__3, ___nl__14));
#line 247
c_rt_lib0delete(array0push(&___nl__14, ___nl__13));
#line 247
c_rt_lib0move(&___nl__15,___get_global_const(207));
#line 247
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__15, ___nl__14));
#line 247
c_rt_lib0clear(&___nl__15);
#line 247
c_rt_lib0clear(&___nl__14);
#line 248
c_rt_lib0delete(flow_graph_priv0add_block(&___nl__2, &___nl__3, ___nl__5, ___nl__4));
#line 249
c_rt_lib0move(&___nl__14,___get_global_const(246));
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__14));
#line 249
c_rt_lib0clear(&___nl__14);
#line 249
c_rt_lib0clear(&___nl__13);
#line 250
goto label_4;
#line 250
label_25:
#line 250
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(200)));
#line 251
c_rt_lib0delete(flow_graph_priv0clear_reg(&___nl__3, ___nl__13, ___nl__5));
#line 251
c_rt_lib0clear(&___nl__13);
#line 252
goto label_4;
#line 252
label_4:
#line 252
c_rt_lib0clear(&___nl__11);
#line 252
c_rt_lib0clear(&___nl__12);
#line 253
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 253
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__11));
#line 253
c_rt_lib0clear(&___nl__11);
#line 254
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 254
goto label_3;
#line 254
label_1:
#line 254
c_rt_lib0clear(&___nl__6);
#line 254
c_rt_lib0clear(&___nl__7);
#line 254
c_rt_lib0clear(&___nl__8);
#line 254
c_rt_lib0clear(&___nl__9);
#line 254
c_rt_lib0clear(&___nl__10);
#line 255
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 255
c_rt_lib0move(&___nl__6, c_rt_lib0sub(___nl__5, ___nl__6));
#line 255
c_rt_lib0delete(flow_graph_priv0add_block(&___nl__2, &___nl__3, ___nl__6, ___nl__4));
#line 255
c_rt_lib0clear(&___nl__6);
#line 256
c_rt_lib0clear(&___nl__0);
#line 256
c_rt_lib0clear(&___nl__1);
#line 256
c_rt_lib0clear(&___nl__3);
#line 256
c_rt_lib0clear(&___nl__4);
#line 256
c_rt_lib0clear(&___nl__5);
#line 256
return ___nl__2;
#line 256
c_rt_lib0clear(&___nl__2);
#line 256
c_rt_lib0clear(&___nl__3);
#line 256
c_rt_lib0clear(&___nl__4);
#line 256
c_rt_lib0clear(&___nl__5);
#line 256
c_rt_lib0clear(&___nl__0);
#line 256
c_rt_lib0clear(&___nl__1);
#line 256
return NULL;
}


static ImmT ___const__[5];
static int ___const_init__ = 1;
void flow_graph_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[4];


for(int i=0;i<4;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 4);
}}
ImmT flow_graph_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT flow_graph_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = flow_graph0block_t0cal();
	break;
case 1:
	___const__[1] = flow_graph0reg_use_t0cal();
	break;
case 2:
	___const__[2] = flow_graph0state_t0cal();
	break;
case 3:
	___const__[3] = flow_graph0blocks_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
