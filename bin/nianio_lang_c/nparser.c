
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "nparser.h"
#include "string.h"
#include "array.h"
#include "hash.h"
#include "boolean_t.h"
#include "ptd.h"
#include "nast.h"
#include "ntokenizer.h"
#include "singleton.h"
#include "compiler_lib.h"
#line 1 "nparser.nl"

static ImmT *__const__f = NULL;
void nparser_priv0__const__init();
ImmT nparser_priv0__const__sim(int __nr);
ImmT nparser_priv0__const__sing(int __nr);

ImmT nparser_priv0get_end_list();
ImmT nparser_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0eat(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0try_eat(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0parse_module(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0parse_fun_arg_list(ImmT * ___ref___0);
ImmT nparser_priv0parse_fun_def(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0parse_fun_val_arg_list(ImmT * ___ref___0);
ImmT nparser_priv0parse_expr_list(ImmT * ___ref___0);
ImmT nparser_priv0parse_fun_val_arg(ImmT * ___ref___0);
ImmT nparser_priv0parse_fun_label(ImmT * ___ref___0);
ImmT nparser_priv0parse_label(ImmT * ___ref___0);
ImmT nparser_priv0parse_hash_key(ImmT * ___ref___0);
ImmT nparser_priv0parse_hash(ImmT * ___ref___0);
ImmT nparser_priv0parse_arr(ImmT * ___ref___0);
ImmT nparser_priv0parse_expr(ImmT * ___ref___0);
ImmT nparser_priv0parse_type(ImmT * ___ref___0);
ImmT nparser_priv0parse_expr_rec_left(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT nparser_priv0parse_expr_rec(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0eat_text(ImmT * ___ref___0);
ImmT nparser_priv0parse_variant_label(ImmT * ___ref___0);
ImmT nparser_priv0parse_variant(ImmT * ___ref___0);
ImmT nparser_priv0check_lvalue(ImmT * ___ref___0,ImmT ___nl__1);
ImmT nparser_priv0parse_variant_decl(ImmT * ___ref___0);
ImmT nparser_priv0parse_var_decl(ImmT * ___ref___0);
ImmT nparser_priv0parse_var_decl_sim(ImmT * ___ref___0);
ImmT nparser_priv0parse_cond(ImmT * ___ref___0);
ImmT nparser_priv0parse_block(ImmT * ___ref___0);
ImmT nparser_priv0parse_try_ensure(ImmT * ___ref___0);
ImmT nparser_priv0get_debug_from_begin(ImmT ___nl__0);
ImmT nparser_priv0parse_cmd(ImmT * ___ref___0);


ImmT nparser_priv0get_end_list(){
nparser_priv0__const__init();
return nparser_priv0__const__sing(0);}
ImmT nparser_priv0get_end_list0cal() {
nparser_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 17
c_rt_lib0move(&___nl__2,___get_global_const(315));
#line 17
c_rt_lib0move(&___nl__3,___get_global_const(764));
#line 17
c_rt_lib0move(&___nl__4,___get_global_const(880));
#line 17
c_rt_lib0move(&___nl__5,___get_global_const(766));
#line 17
c_rt_lib0move(&___nl__6,___get_global_const(767));
#line 17
c_rt_lib0move(&___nl__7,___get_global_const(768));
#line 17
c_rt_lib0move(&___nl__8,___get_global_const(769));
#line 17
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(7, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6, ___nl__7, ___nl__8));
#line 17
c_rt_lib0clear(&___nl__2);
#line 17
c_rt_lib0clear(&___nl__3);
#line 17
c_rt_lib0clear(&___nl__4);
#line 17
c_rt_lib0clear(&___nl__5);
#line 17
c_rt_lib0clear(&___nl__6);
#line 17
c_rt_lib0clear(&___nl__7);
#line 17
c_rt_lib0clear(&___nl__8);
#line 17
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 17
c_rt_lib0clear(&___nl__1);
#line 17
return ___nl__0;
#line 17
c_rt_lib0clear(&___nl__0);
#line 17
return NULL;
}

ImmT nparser0parse_ret_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0parse_ret_t");
return nparser0parse_ret_t();}
ImmT nparser0parse_ret_t(){
nparser_priv0__const__init();
return nparser_priv0__const__sing(1);}
ImmT nparser0parse_ret_t0cal() {
nparser_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0module_t0ptr, ___get_global_const(12), ___get_global_const(13)));
#line 21
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(19), ___get_global_const(730)));
#line 21
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__2, ___get_global_const(97), ___nl__3));
#line 21
c_rt_lib0clear(&___nl__2);
#line 21
c_rt_lib0clear(&___nl__3);
#line 21
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
return ___nl__0;
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return NULL;
}

ImmT nparser0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0state_t");
return nparser0state_t();}
ImmT nparser0state_t(){
nparser_priv0__const__init();
return nparser_priv0__const__sing(2);}
ImmT nparser0state_t0cal() {
nparser_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(ntokenizer0state_t0ptr, ___get_global_const(881), ___get_global_const(882)));
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(compiler_lib0errors_t0ptr, ___get_global_const(19), ___get_global_const(730)));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 25
c_rt_lib0move(&___nl__4, ptd0sim());
#line 25
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(874), ___nl__2, ___get_global_const(17), ___nl__3, ___get_global_const(434), ___nl__4));
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 25
c_rt_lib0clear(&___nl__4);
#line 25
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 25
c_rt_lib0clear(&___nl__1);
#line 25
return ___nl__0;
#line 25
c_rt_lib0clear(&___nl__0);
#line 25
return NULL;
}

ImmT nparser0try_value_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0try_value_t");
return nparser0try_value_t();}
ImmT nparser0try_value_t(){
nparser_priv0__const__init();
return nparser_priv0__const__sing(3);}
ImmT nparser0try_value_t0cal() {
nparser_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0value_t0ptr, ___get_global_const(12), ___get_global_const(841)));
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 29
c_rt_lib0move(&___nl__3, ptd0sim());
#line 29
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__2, ___get_global_const(44), ___nl__3));
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0clear(&___nl__3);
#line 29
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 29
c_rt_lib0clear(&___nl__1);
#line 29
return ___nl__0;
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
return NULL;
}

ImmT nparser0try_cmd_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nparser0try_cmd_t");
return nparser0try_cmd_t();}
ImmT nparser0try_cmd_t(){
nparser_priv0__const__init();
return nparser_priv0__const__sing(4);}
ImmT nparser0try_cmd_t0cal() {
nparser_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(nast0cmd_t0ptr, ___get_global_const(12), ___get_global_const(196)));
#line 33
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 33
c_rt_lib0move(&___nl__3, ptd0sim());
#line 33
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__2, ___get_global_const(44), ___nl__3));
#line 33
c_rt_lib0clear(&___nl__2);
#line 33
c_rt_lib0clear(&___nl__3);
#line 33
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 33
c_rt_lib0clear(&___nl__1);
#line 33
return ___nl__0;
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
return NULL;
}

ImmT nparser0sparse0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "nparser0sparse");
return nparser0sparse(_tab[0], _tab[1]);}
ImmT nparser0sparse(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 40
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 40
c_rt_lib0move(&___nl__4, ntokenizer0init(___nl__0));
#line 40
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(17), ___nl__3, ___get_global_const(874), ___nl__4, ___get_global_const(434), ___nl__1));
#line 40
c_rt_lib0clear(&___nl__3);
#line 40
c_rt_lib0clear(&___nl__4);
#line 41
c_rt_lib0move(&___nl__3, nparser_priv0parse_module(&___nl__2, ___nl__1));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(17)));
#line 42
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 42
c_rt_lib0clear(&___nl__5);
#line 42
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0gt(___nl__4, ___nl__5));
#line 42
c_rt_lib0clear(&___nl__5);
#line 42
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 42
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(17)));
#line 42
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(97), ___nl__5));
#line 42
c_rt_lib0clear(&___nl__0);
#line 42
c_rt_lib0clear(&___nl__1);
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__3);
#line 42
c_rt_lib0clear(&___nl__4);
#line 42
return ___nl__5;
#line 42
c_rt_lib0clear(&___nl__5);
#line 42
goto label_2;
#line 42
label_2:
#line 42
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__3));
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
return ___nl__4;
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
return NULL;
}

ImmT nparser_priv0add_error(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 47
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(874)));
#line 47
c_rt_lib0move(&___nl__2, ntokenizer0get_line(___nl__3));
#line 47
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(874)));
#line 48
c_rt_lib0move(&___nl__3, ntokenizer0get_column(___nl__4));
#line 48
c_rt_lib0clear(&___nl__4);
#line 49
c_rt_lib0move(&___nl__4,___get_global_const(17));
#line 49
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 49
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(434)));
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(97)));
#line 49
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(5, ___get_global_const(113), ___nl__2, ___get_global_const(111), ___nl__6, ___get_global_const(154), ___nl__3, ___get_global_const(116), ___nl__1, ___get_global_const(73), ___nl__7));
#line 49
c_rt_lib0clear(&___nl__6);
#line 49
c_rt_lib0clear(&___nl__7);
#line 49
c_rt_lib0delete(array0push(&___nl__4, ___nl__5));
#line 49
c_rt_lib0clear(&___nl__5);
#line 49
c_rt_lib0move(&___nl__5,___get_global_const(17));
#line 49
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 49
c_rt_lib0clear(&___nl__5);
#line 49
c_rt_lib0clear(&___nl__4);
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__3);
#line 49
c_rt_lib0clear(&___nl__1);
#line 49
return NULL;
}

ImmT nparser_priv0eat(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 53
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 53
c_rt_lib0move(&___nl__2, ntokenizer0eat_token(&___nl__3, ___nl__1));
#line 53
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 53
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 53
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 53
c_rt_lib0clear(&___nl__1);
#line 53
c_rt_lib0clear(&___nl__2);
#line 53
return ___nl__3;
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
goto label_2;
#line 53
label_2:
#line 53
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0move(&___nl__2,___get_global_const(883));
#line 54
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 54
c_rt_lib0move(&___nl__3, string0lf());
#line 54
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(874)));
#line 54
c_rt_lib0move(&___nl__3, ntokenizer0info(___nl__4));
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 54
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
return ___nl__2;
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
return NULL;
}

ImmT nparser_priv0try_eat(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 59
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 59
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 59
c_rt_lib0move(&___nl__2, ntokenizer0eat_token(&___nl__3, ___nl__1));
#line 59
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 59
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 59
c_rt_lib0clear(&___nl__4);
#line 59
c_rt_lib0clear(&___nl__3);
#line 59
c_rt_lib0clear(&___nl__1);
#line 59
return ___nl__2;
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__1);
#line 59
return NULL;
}

ImmT nparser_priv0parse_module(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 63
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 63
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 63
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__1, ___get_global_const(128), ___nl__3, ___get_global_const(735), ___nl__4));
#line 63
c_rt_lib0clear(&___nl__3);
#line 63
c_rt_lib0clear(&___nl__4);
#line 64
label_2:
#line 64
c_rt_lib0move(&___nl__4,___get_global_const(884));
#line 64
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 64
c_rt_lib0clear(&___nl__4);
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 64
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 65
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(874)));
#line 65
c_rt_lib0move(&___nl__4, ntokenizer0get_line(___nl__5));
#line 65
c_rt_lib0clear(&___nl__5);
#line 66
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 66
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 66
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 66
c_rt_lib0move(&___nl__5, ntokenizer0is_type(&___nl__6, ___nl__7));
#line 66
c_rt_lib0clear(&___nl__7);
#line 66
c_rt_lib0move(&___nl__7,___get_global_const(874));
#line 66
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 66
c_rt_lib0clear(&___nl__7);
#line 66
c_rt_lib0clear(&___nl__6);
#line 66
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 66
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 67
c_rt_lib0move(&___nl__6,___get_global_const(128));
#line 67
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(___nl__2, ___nl__6));
#line 67
c_rt_lib0move(&___nl__9,___get_global_const(874));
#line 67
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 67
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 67
c_rt_lib0move(&___nl__8, ntokenizer0eat_type(&___nl__9, ___nl__10));
#line 67
c_rt_lib0clear(&___nl__10);
#line 67
c_rt_lib0move(&___nl__10,___get_global_const(874));
#line 67
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__10, ___nl__9));
#line 67
c_rt_lib0clear(&___nl__10);
#line 67
c_rt_lib0clear(&___nl__9);
#line 67
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(78), ___nl__8, ___get_global_const(113), ___nl__4));
#line 67
c_rt_lib0clear(&___nl__8);
#line 67
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 67
c_rt_lib0clear(&___nl__7);
#line 67
c_rt_lib0move(&___nl__7,___get_global_const(128));
#line 67
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__2, ___nl__7, ___nl__6));
#line 67
c_rt_lib0clear(&___nl__7);
#line 67
c_rt_lib0clear(&___nl__6);
#line 68
goto label_3;
#line 68
label_4:
#line 69
c_rt_lib0move(&___nl__6,___get_global_const(886));
#line 69
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__6));
#line 69
c_rt_lib0clear(&___nl__6);
#line 70
goto label_3;
#line 70
label_3:
#line 70
c_rt_lib0clear(&___nl__5);
#line 71
c_rt_lib0move(&___nl__5,___get_global_const(315));
#line 71
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 71
c_rt_lib0clear(&___nl__5);
#line 71
c_rt_lib0clear(&___nl__4);
#line 72
goto label_2;
#line 72
label_1:
#line 72
c_rt_lib0clear(&___nl__3);
#line 73
label_6:
#line 73
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 73
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 73
c_rt_lib0move(&___nl__5,___get_global_const(887));
#line 73
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 73
c_rt_lib0clear(&___nl__5);
#line 73
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 73
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 73
c_rt_lib0clear(&___nl__5);
#line 73
c_rt_lib0clear(&___nl__4);
#line 73
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 73
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 74
c_rt_lib0move(&___nl__4, nparser_priv0parse_fun_def(___ref___0, ___nl__1));
#line 74
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 74
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 76
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(44)));
#line 76
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 76
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 76
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 76
nl_die_arg(___nl__5);
#line 74
label_8:
#line 74
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(45)));
#line 75
c_rt_lib0move(&___nl__7,___get_global_const(735));
#line 75
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(___nl__2, ___nl__7));
#line 75
c_rt_lib0delete(array0push(&___nl__7, ___nl__6));
#line 75
c_rt_lib0move(&___nl__8,___get_global_const(735));
#line 75
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__2, ___nl__8, ___nl__7));
#line 75
c_rt_lib0clear(&___nl__8);
#line 75
c_rt_lib0clear(&___nl__7);
#line 75
c_rt_lib0clear(&___nl__6);
#line 76
goto label_7;
#line 76
label_9:
#line 76
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(44)));
#line 77
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__6));
#line 78
c_rt_lib0clear(&___nl__1);
#line 78
c_rt_lib0clear(&___nl__3);
#line 78
c_rt_lib0clear(&___nl__4);
#line 78
c_rt_lib0clear(&___nl__5);
#line 78
c_rt_lib0clear(&___nl__6);
#line 78
return ___nl__2;
#line 78
c_rt_lib0clear(&___nl__6);
#line 79
goto label_7;
#line 79
label_7:
#line 79
c_rt_lib0clear(&___nl__4);
#line 79
c_rt_lib0clear(&___nl__5);
#line 80
goto label_6;
#line 80
label_5:
#line 80
c_rt_lib0clear(&___nl__3);
#line 81
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 81
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 81
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(850)));
#line 81
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 81
c_rt_lib0clear(&___nl__5);
#line 81
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 81
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 81
c_rt_lib0clear(&___nl__5);
#line 81
c_rt_lib0clear(&___nl__4);
#line 81
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 81
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 81
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 81
c_rt_lib0move(&___nl__4,___get_global_const(888));
#line 81
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__4));
#line 81
c_rt_lib0clear(&___nl__4);
#line 81
goto label_11;
#line 81
label_11:
#line 81
c_rt_lib0clear(&___nl__3);
#line 82
c_rt_lib0clear(&___nl__1);
#line 82
return ___nl__2;
#line 82
c_rt_lib0clear(&___nl__2);
#line 82
c_rt_lib0clear(&___nl__1);
#line 82
return NULL;
}

ImmT nparser_priv0parse_fun_arg_list(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 89
c_rt_lib0move(&___nl__1,___get_global_const(326));
#line 89
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 89
c_rt_lib0clear(&___nl__1);
#line 90
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 91
label_2:
#line 91
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 91
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 91
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 91
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 91
c_rt_lib0clear(&___nl__4);
#line 91
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 91
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 91
c_rt_lib0clear(&___nl__4);
#line 91
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 91
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 91
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 92
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 92
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 92
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 92
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(3, ___get_global_const(261), ___nl__4, ___get_global_const(73), ___nl__5, ___get_global_const(78), ___nl__6));
#line 92
c_rt_lib0clear(&___nl__4);
#line 92
c_rt_lib0clear(&___nl__5);
#line 92
c_rt_lib0clear(&___nl__6);
#line 93
c_rt_lib0move(&___nl__5,___get_global_const(5));
#line 93
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 93
c_rt_lib0clear(&___nl__5);
#line 93
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 93
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 93
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 93
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 93
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(261), ___nl__6);
#line 93
c_rt_lib0clear(&___nl__5);
#line 93
c_rt_lib0clear(&___nl__6);
#line 93
goto label_4;
#line 93
label_4:
#line 93
c_rt_lib0clear(&___nl__4);
#line 94
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 94
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 94
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 94
c_rt_lib0move(&___nl__4, ntokenizer0is_type(&___nl__5, ___nl__6));
#line 94
c_rt_lib0clear(&___nl__6);
#line 94
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 94
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 94
c_rt_lib0clear(&___nl__6);
#line 94
c_rt_lib0clear(&___nl__5);
#line 94
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 94
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 95
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 95
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 95
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 95
c_rt_lib0move(&___nl__5, ntokenizer0eat_type(&___nl__6, ___nl__7));
#line 95
c_rt_lib0clear(&___nl__7);
#line 95
c_rt_lib0move(&___nl__7,___get_global_const(874));
#line 95
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 95
c_rt_lib0clear(&___nl__7);
#line 95
c_rt_lib0clear(&___nl__6);
#line 95
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 95
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(78), ___nl__6);
#line 95
c_rt_lib0clear(&___nl__5);
#line 95
c_rt_lib0clear(&___nl__6);
#line 96
goto label_5;
#line 96
label_6:
#line 97
c_rt_lib0move(&___nl__5,___get_global_const(889));
#line 97
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__5));
#line 97
c_rt_lib0clear(&___nl__5);
#line 98
goto label_5;
#line 98
label_5:
#line 98
c_rt_lib0clear(&___nl__4);
#line 99
c_rt_lib0move(&___nl__5,___get_global_const(375));
#line 99
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 99
c_rt_lib0clear(&___nl__5);
#line 99
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 99
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 100
c_rt_lib0move(&___nl__7, nparser_priv0parse_type(___ref___0));
#line 100
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(45)));
#line 100
if(c_rt_lib0check_true_native(___nl__6)){ goto label_9;}
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
return ___nl__7;
#line 100
label_9:
#line 100
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__7, ___get_global_const(45)));
#line 100
c_rt_lib0clear(&___nl__6);
#line 100
c_rt_lib0clear(&___nl__7);
#line 101
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(73), ___nl__5));
#line 101
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 101
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(73), ___nl__7);
#line 101
c_rt_lib0clear(&___nl__6);
#line 101
c_rt_lib0clear(&___nl__7);
#line 101
c_rt_lib0clear(&___nl__5);
#line 102
goto label_8;
#line 102
label_8:
#line 102
c_rt_lib0clear(&___nl__4);
#line 103
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 104
c_rt_lib0move(&___nl__5,___get_global_const(177));
#line 104
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 104
c_rt_lib0clear(&___nl__5);
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 104
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 104
c_rt_lib0clear(&___nl__3);
#line 104
c_rt_lib0clear(&___nl__4);
#line 104
goto label_1;
#line 104
goto label_11;
#line 104
label_11:
#line 104
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0clear(&___nl__3);
#line 105
goto label_2;
#line 105
label_1:
#line 105
c_rt_lib0clear(&___nl__2);
#line 106
c_rt_lib0move(&___nl__2,___get_global_const(181));
#line 106
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 106
c_rt_lib0clear(&___nl__2);
#line 107
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 107
c_rt_lib0clear(&___nl__1);
#line 107
return ___nl__2;
#line 107
c_rt_lib0clear(&___nl__2);
#line 107
c_rt_lib0clear(&___nl__1);
#line 107
return NULL;
}

ImmT nparser_priv0parse_fun_def(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 114
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 114
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(874)));
#line 114
c_rt_lib0move(&___nl__4, ntokenizer0get_line(___nl__5));
#line 114
c_rt_lib0clear(&___nl__5);
#line 114
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 114
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 114
c_rt_lib0move(&___nl__8, nparser_priv0get_debug_from_begin(*___ref___0));
#line 114
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 114
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(217), ___nl__8, ___get_global_const(214), ___nl__9));
#line 114
c_rt_lib0clear(&___nl__8);
#line 114
c_rt_lib0clear(&___nl__9);
#line 114
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(334)));
#line 114
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(6, ___get_global_const(736), ___nl__3, ___get_global_const(113), ___nl__4, ___get_global_const(74), ___nl__5, ___get_global_const(78), ___nl__6, ___get_global_const(214), ___nl__7, ___get_global_const(332), ___nl__8));
#line 114
c_rt_lib0clear(&___nl__3);
#line 114
c_rt_lib0clear(&___nl__4);
#line 114
c_rt_lib0clear(&___nl__5);
#line 114
c_rt_lib0clear(&___nl__6);
#line 114
c_rt_lib0clear(&___nl__7);
#line 114
c_rt_lib0clear(&___nl__8);
#line 122
c_rt_lib0move(&___nl__3,___get_global_const(887));
#line 122
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__3));
#line 122
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0move(&___nl__4, nparser_priv0eat_text(___ref___0));
#line 123
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 123
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
return ___nl__4;
#line 123
label_1:
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__4, ___get_global_const(45)));
#line 123
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(78), ___nl__5);
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0clear(&___nl__5);
#line 124
c_rt_lib0move(&___nl__4,___get_global_const(583));
#line 124
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 124
c_rt_lib0clear(&___nl__4);
#line 124
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 124
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 125
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(78)));
#line 125
c_rt_lib0move(&___nl__4, c_rt_lib0ne(___nl__4, ___nl__1));
#line 125
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 125
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 126
c_rt_lib0move(&___nl__5,___get_global_const(890));
#line 126
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(78)));
#line 126
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 126
c_rt_lib0clear(&___nl__6);
#line 126
c_rt_lib0move(&___nl__6,___get_global_const(891));
#line 126
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 126
c_rt_lib0clear(&___nl__6);
#line 126
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__1));
#line 126
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__5));
#line 126
c_rt_lib0clear(&___nl__5);
#line 127
goto label_5;
#line 127
label_5:
#line 127
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0move(&___nl__5, nparser_priv0eat_text(___ref___0));
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 128
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 128
c_rt_lib0clear(&___nl__1);
#line 128
c_rt_lib0clear(&___nl__2);
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
return ___nl__5;
#line 128
label_6:
#line 128
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 128
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(78), ___nl__6);
#line 128
c_rt_lib0clear(&___nl__4);
#line 128
c_rt_lib0clear(&___nl__5);
#line 128
c_rt_lib0clear(&___nl__6);
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(333)));
#line 129
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 129
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(332), ___nl__5);
#line 129
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0clear(&___nl__5);
#line 130
goto label_3;
#line 130
label_3:
#line 130
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0move(&___nl__4, nparser_priv0parse_fun_arg_list(___ref___0));
#line 131
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 131
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 131
c_rt_lib0clear(&___nl__1);
#line 131
c_rt_lib0clear(&___nl__2);
#line 131
c_rt_lib0clear(&___nl__3);
#line 131
return ___nl__4;
#line 131
label_7:
#line 131
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__4, ___get_global_const(45)));
#line 131
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(74), ___nl__5);
#line 131
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0clear(&___nl__4);
#line 131
c_rt_lib0clear(&___nl__5);
#line 132
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 132
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 132
c_rt_lib0move(&___nl__5,___get_global_const(375));
#line 132
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 132
c_rt_lib0clear(&___nl__5);
#line 132
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 132
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 132
c_rt_lib0clear(&___nl__5);
#line 132
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 132
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 133
c_rt_lib0move(&___nl__4,___get_global_const(375));
#line 133
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 133
c_rt_lib0clear(&___nl__4);
#line 134
c_rt_lib0move(&___nl__6, nparser_priv0parse_type(___ref___0));
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 134
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 134
c_rt_lib0clear(&___nl__1);
#line 134
c_rt_lib0clear(&___nl__2);
#line 134
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0clear(&___nl__4);
#line 134
c_rt_lib0clear(&___nl__5);
#line 134
return ___nl__6;
#line 134
label_10:
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 134
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0clear(&___nl__6);
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(73), ___nl__4));
#line 135
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 135
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(736), ___nl__6);
#line 135
c_rt_lib0clear(&___nl__5);
#line 135
c_rt_lib0clear(&___nl__6);
#line 135
c_rt_lib0clear(&___nl__4);
#line 136
goto label_9;
#line 136
label_9:
#line 136
c_rt_lib0clear(&___nl__3);
#line 137
c_rt_lib0move(&___nl__4, nparser_priv0parse_block(___ref___0));
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 137
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 137
c_rt_lib0clear(&___nl__1);
#line 137
c_rt_lib0clear(&___nl__2);
#line 137
c_rt_lib0clear(&___nl__3);
#line 137
return ___nl__4;
#line 137
label_11:
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__4, ___get_global_const(45)));
#line 137
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(214), ___nl__5);
#line 137
c_rt_lib0clear(&___nl__3);
#line 137
c_rt_lib0clear(&___nl__4);
#line 137
c_rt_lib0clear(&___nl__5);
#line 138
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__2));
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
return ___nl__3;
#line 138
c_rt_lib0clear(&___nl__3);
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
return NULL;
}

ImmT nparser_priv0parse_fun_val_arg_list(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 145
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 146
label_2:
#line 146
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 146
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 146
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 146
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 146
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 146
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 147
c_rt_lib0move(&___nl__5, nparser_priv0parse_fun_val_arg(___ref___0));
#line 147
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 147
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 147
c_rt_lib0clear(&___nl__1);
#line 147
c_rt_lib0clear(&___nl__2);
#line 147
c_rt_lib0clear(&___nl__3);
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
return ___nl__5;
#line 147
label_3:
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
c_rt_lib0clear(&___nl__5);
#line 148
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 149
c_rt_lib0move(&___nl__5,___get_global_const(177));
#line 149
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 149
c_rt_lib0clear(&___nl__5);
#line 149
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 149
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 149
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 149
c_rt_lib0clear(&___nl__3);
#line 149
c_rt_lib0clear(&___nl__4);
#line 149
goto label_1;
#line 149
goto label_5;
#line 149
label_5:
#line 149
c_rt_lib0clear(&___nl__4);
#line 149
c_rt_lib0clear(&___nl__3);
#line 150
goto label_2;
#line 150
label_1:
#line 150
c_rt_lib0clear(&___nl__2);
#line 151
c_rt_lib0move(&___nl__2,___get_global_const(181));
#line 151
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 151
c_rt_lib0clear(&___nl__2);
#line 152
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 152
c_rt_lib0clear(&___nl__1);
#line 152
return ___nl__2;
#line 152
c_rt_lib0clear(&___nl__2);
#line 152
c_rt_lib0clear(&___nl__1);
#line 152
return NULL;
}

ImmT nparser_priv0parse_expr_list(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 156
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 157
label_2:
#line 157
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 157
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 157
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 157
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 157
c_rt_lib0clear(&___nl__4);
#line 157
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 157
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 157
c_rt_lib0clear(&___nl__4);
#line 157
c_rt_lib0clear(&___nl__3);
#line 157
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 157
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 157
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 158
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 158
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 158
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 158
c_rt_lib0clear(&___nl__1);
#line 158
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
return ___nl__5;
#line 158
label_3:
#line 158
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0clear(&___nl__5);
#line 159
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 160
c_rt_lib0move(&___nl__5,___get_global_const(177));
#line 160
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 160
c_rt_lib0clear(&___nl__5);
#line 160
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 160
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 160
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 160
c_rt_lib0clear(&___nl__3);
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
goto label_1;
#line 160
goto label_5;
#line 160
label_5:
#line 160
c_rt_lib0clear(&___nl__4);
#line 160
c_rt_lib0clear(&___nl__3);
#line 161
goto label_2;
#line 161
label_1:
#line 161
c_rt_lib0clear(&___nl__2);
#line 162
c_rt_lib0move(&___nl__2,___get_global_const(181));
#line 162
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 162
c_rt_lib0clear(&___nl__2);
#line 163
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 163
c_rt_lib0clear(&___nl__1);
#line 163
return ___nl__2;
#line 163
c_rt_lib0clear(&___nl__2);
#line 163
c_rt_lib0clear(&___nl__1);
#line 163
return NULL;
}

ImmT nparser_priv0parse_fun_val_arg(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 167
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 168
c_rt_lib0move(&___nl__3,___get_global_const(5));
#line 168
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 168
c_rt_lib0clear(&___nl__3);
#line 168
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 168
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 168
goto label_1;
#line 168
label_2:
#line 168
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 168
label_1:
#line 168
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 168
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(261), ___nl__3);
#line 168
c_rt_lib0clear(&___nl__2);
#line 168
c_rt_lib0clear(&___nl__3);
#line 169
c_rt_lib0move(&___nl__3, nparser_priv0parse_expr(___ref___0));
#line 169
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(45)));
#line 169
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 169
c_rt_lib0clear(&___nl__1);
#line 169
c_rt_lib0clear(&___nl__2);
#line 169
return ___nl__3;
#line 169
label_3:
#line 169
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__3, ___get_global_const(45)));
#line 169
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(238), ___nl__4);
#line 169
c_rt_lib0clear(&___nl__2);
#line 169
c_rt_lib0clear(&___nl__3);
#line 169
c_rt_lib0clear(&___nl__4);
#line 170
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 170
c_rt_lib0clear(&___nl__1);
#line 170
return ___nl__2;
#line 170
c_rt_lib0clear(&___nl__2);
#line 170
c_rt_lib0clear(&___nl__1);
#line 170
return NULL;
}

ImmT nparser_priv0parse_fun_label(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 174
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 174
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 174
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(78), ___nl__2, ___get_global_const(111), ___nl__3));
#line 174
c_rt_lib0clear(&___nl__2);
#line 174
c_rt_lib0clear(&___nl__3);
#line 175
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 175
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 175
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 175
c_rt_lib0move(&___nl__2, ntokenizer0is_type(&___nl__3, ___nl__4));
#line 175
c_rt_lib0clear(&___nl__4);
#line 175
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 175
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 175
c_rt_lib0clear(&___nl__4);
#line 175
c_rt_lib0clear(&___nl__3);
#line 175
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 175
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 175
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 176
c_rt_lib0move(&___nl__3,___get_global_const(892));
#line 176
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__3));
#line 176
c_rt_lib0clear(&___nl__3);
#line 177
c_rt_lib0clear(&___nl__2);
#line 177
return ___nl__1;
#line 178
goto label_2;
#line 178
label_2:
#line 178
c_rt_lib0clear(&___nl__2);
#line 179
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 179
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 179
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 179
c_rt_lib0move(&___nl__2, ntokenizer0eat_type(&___nl__3, ___nl__4));
#line 179
c_rt_lib0clear(&___nl__4);
#line 179
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 179
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 179
c_rt_lib0clear(&___nl__4);
#line 179
c_rt_lib0clear(&___nl__3);
#line 179
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 179
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(111), ___nl__3);
#line 179
c_rt_lib0clear(&___nl__2);
#line 179
c_rt_lib0clear(&___nl__3);
#line 180
c_rt_lib0move(&___nl__4,___get_global_const(583));
#line 180
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 180
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 180
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 180
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 180
c_rt_lib0move(&___nl__2, ntokenizer0is_text(&___nl__4));
#line 180
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 180
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 180
c_rt_lib0clear(&___nl__5);
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
label_5:
#line 180
c_rt_lib0clear(&___nl__3);
#line 180
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 180
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 181
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 181
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 181
c_rt_lib0move(&___nl__3, ntokenizer0eat_text(&___nl__4));
#line 181
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 181
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 181
c_rt_lib0clear(&___nl__5);
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 181
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(78), ___nl__4);
#line 181
c_rt_lib0clear(&___nl__3);
#line 181
c_rt_lib0clear(&___nl__4);
#line 182
goto label_3;
#line 182
label_4:
#line 183
c_rt_lib0move(&___nl__3,___get_global_const(893));
#line 183
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__3));
#line 183
c_rt_lib0clear(&___nl__3);
#line 184
goto label_3;
#line 184
label_3:
#line 184
c_rt_lib0clear(&___nl__2);
#line 185
return ___nl__1;
#line 185
c_rt_lib0clear(&___nl__1);
#line 185
return NULL;
}

ImmT nparser_priv0parse_label(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 192
c_rt_lib0move(&___nl__2,___get_global_const(874));
#line 192
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 192
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 192
c_rt_lib0move(&___nl__1, ntokenizer0eat_type(&___nl__2, ___nl__3));
#line 192
c_rt_lib0clear(&___nl__3);
#line 192
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 192
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 192
c_rt_lib0clear(&___nl__3);
#line 192
c_rt_lib0clear(&___nl__2);
#line 193
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 193
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 193
c_rt_lib0move(&___nl__5,___get_global_const(326));
#line 193
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 193
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 193
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 193
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0clear(&___nl__4);
#line 193
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 193
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 193
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 193
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 193
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 193
c_rt_lib0move(&___nl__5,___get_global_const(583));
#line 193
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 193
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 193
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 193
c_rt_lib0clear(&___nl__5);
#line 193
c_rt_lib0clear(&___nl__4);
#line 193
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 193
label_3:
#line 193
c_rt_lib0clear(&___nl__3);
#line 193
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 193
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 193
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(796), ___nl__1));
#line 193
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__3));
#line 193
c_rt_lib0clear(&___nl__1);
#line 193
c_rt_lib0clear(&___nl__2);
#line 193
return ___nl__3;
#line 193
c_rt_lib0clear(&___nl__3);
#line 193
goto label_2;
#line 193
label_2:
#line 193
c_rt_lib0clear(&___nl__2);
#line 195
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 195
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 195
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 195
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(111), ___nl__3, ___get_global_const(78), ___nl__4, ___get_global_const(74), ___nl__5));
#line 195
c_rt_lib0clear(&___nl__3);
#line 195
c_rt_lib0clear(&___nl__4);
#line 195
c_rt_lib0clear(&___nl__5);
#line 196
c_rt_lib0move(&___nl__4,___get_global_const(583));
#line 196
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 196
c_rt_lib0clear(&___nl__4);
#line 196
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 196
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 197
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 197
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(111), ___nl__4);
#line 197
c_rt_lib0clear(&___nl__4);
#line 198
c_rt_lib0move(&___nl__5, nparser_priv0eat_text(___ref___0));
#line 198
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 198
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 198
c_rt_lib0clear(&___nl__1);
#line 198
c_rt_lib0clear(&___nl__2);
#line 198
c_rt_lib0clear(&___nl__3);
#line 198
c_rt_lib0clear(&___nl__4);
#line 198
return ___nl__5;
#line 198
label_6:
#line 198
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 198
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(78), ___nl__6);
#line 198
c_rt_lib0clear(&___nl__4);
#line 198
c_rt_lib0clear(&___nl__5);
#line 198
c_rt_lib0clear(&___nl__6);
#line 199
goto label_4;
#line 199
label_5:
#line 200
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 200
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(78), ___nl__4);
#line 200
c_rt_lib0clear(&___nl__4);
#line 201
goto label_4;
#line 201
label_4:
#line 201
c_rt_lib0clear(&___nl__3);
#line 202
c_rt_lib0move(&___nl__3,___get_global_const(326));
#line 202
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__3));
#line 202
c_rt_lib0clear(&___nl__3);
#line 203
c_rt_lib0move(&___nl__4, nparser_priv0parse_fun_val_arg_list(___ref___0));
#line 203
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 203
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 203
c_rt_lib0clear(&___nl__1);
#line 203
c_rt_lib0clear(&___nl__2);
#line 203
c_rt_lib0clear(&___nl__3);
#line 203
return ___nl__4;
#line 203
label_7:
#line 203
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__4, ___get_global_const(45)));
#line 203
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(74), ___nl__5);
#line 203
c_rt_lib0clear(&___nl__3);
#line 203
c_rt_lib0clear(&___nl__4);
#line 203
c_rt_lib0clear(&___nl__5);
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(759), ___nl__2));
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__3));
#line 204
c_rt_lib0clear(&___nl__1);
#line 204
c_rt_lib0clear(&___nl__2);
#line 204
return ___nl__3;
#line 204
c_rt_lib0clear(&___nl__3);
#line 204
c_rt_lib0clear(&___nl__1);
#line 204
c_rt_lib0clear(&___nl__2);
#line 204
return NULL;
}

ImmT nparser_priv0parse_hash_key(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 208
c_rt_lib0move(&___nl__2,___get_global_const(874));
#line 208
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 208
c_rt_lib0move(&___nl__1, ntokenizer0is_text(&___nl__2));
#line 208
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 208
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 208
c_rt_lib0clear(&___nl__3);
#line 208
c_rt_lib0clear(&___nl__2);
#line 208
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 208
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 208
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 208
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 208
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(803), ___nl__2));
#line 208
c_rt_lib0clear(&___nl__1);
#line 208
return ___nl__2;
#line 208
c_rt_lib0clear(&___nl__2);
#line 208
goto label_2;
#line 208
label_2:
#line 208
c_rt_lib0clear(&___nl__1);
#line 209
c_rt_lib0move(&___nl__2,___get_global_const(874));
#line 209
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 209
c_rt_lib0move(&___nl__1, ntokenizer0eat_text(&___nl__2));
#line 209
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 209
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 209
c_rt_lib0clear(&___nl__3);
#line 209
c_rt_lib0clear(&___nl__2);
#line 210
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(803), ___nl__1));
#line 210
c_rt_lib0clear(&___nl__1);
#line 210
return ___nl__2;
#line 210
c_rt_lib0clear(&___nl__2);
#line 210
c_rt_lib0clear(&___nl__1);
#line 210
return NULL;
}

ImmT nparser_priv0parse_hash(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 214
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 215
c_rt_lib0move(&___nl__2,___get_global_const(173));
#line 215
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 215
c_rt_lib0clear(&___nl__2);
#line 216
label_2:
#line 216
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 216
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 216
c_rt_lib0move(&___nl__4,___get_global_const(174));
#line 216
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 216
c_rt_lib0clear(&___nl__4);
#line 216
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 216
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 216
c_rt_lib0clear(&___nl__4);
#line 216
c_rt_lib0clear(&___nl__3);
#line 216
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 216
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 216
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 217
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 217
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(283), ___nl__4, ___get_global_const(238), ___nl__5));
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0clear(&___nl__5);
#line 218
c_rt_lib0move(&___nl__4, nparser_priv0parse_hash_key(___ref___0));
#line 218
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 218
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(283), ___nl__5);
#line 218
c_rt_lib0clear(&___nl__4);
#line 218
c_rt_lib0clear(&___nl__5);
#line 219
c_rt_lib0move(&___nl__4,___get_global_const(175));
#line 219
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 219
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 220
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 220
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 220
c_rt_lib0clear(&___nl__1);
#line 220
c_rt_lib0clear(&___nl__2);
#line 220
c_rt_lib0clear(&___nl__3);
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
return ___nl__5;
#line 220
label_3:
#line 220
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 220
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(238), ___nl__6);
#line 220
c_rt_lib0clear(&___nl__4);
#line 220
c_rt_lib0clear(&___nl__5);
#line 220
c_rt_lib0clear(&___nl__6);
#line 221
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 222
c_rt_lib0move(&___nl__5,___get_global_const(177));
#line 222
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 222
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 222
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 222
c_rt_lib0clear(&___nl__3);
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
goto label_1;
#line 222
goto label_5;
#line 222
label_5:
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
c_rt_lib0clear(&___nl__3);
#line 223
goto label_2;
#line 223
label_1:
#line 223
c_rt_lib0clear(&___nl__2);
#line 224
c_rt_lib0move(&___nl__2,___get_global_const(174));
#line 224
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 224
c_rt_lib0clear(&___nl__2);
#line 225
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 225
c_rt_lib0clear(&___nl__1);
#line 225
return ___nl__2;
#line 225
c_rt_lib0clear(&___nl__2);
#line 225
c_rt_lib0clear(&___nl__1);
#line 225
return NULL;
}

ImmT nparser_priv0parse_arr(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 229
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 230
c_rt_lib0move(&___nl__2,___get_global_const(179));
#line 230
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 230
c_rt_lib0clear(&___nl__2);
#line 231
label_2:
#line 231
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 231
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 231
c_rt_lib0move(&___nl__4,___get_global_const(180));
#line 231
c_rt_lib0move(&___nl__2, ntokenizer0next_is(&___nl__3, ___nl__4));
#line 231
c_rt_lib0clear(&___nl__4);
#line 231
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 231
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 231
c_rt_lib0clear(&___nl__4);
#line 231
c_rt_lib0clear(&___nl__3);
#line 231
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 231
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 231
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 232
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 232
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 232
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
c_rt_lib0clear(&___nl__2);
#line 232
c_rt_lib0clear(&___nl__3);
#line 232
c_rt_lib0clear(&___nl__4);
#line 232
return ___nl__5;
#line 232
label_3:
#line 232
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 232
c_rt_lib0clear(&___nl__4);
#line 232
c_rt_lib0clear(&___nl__5);
#line 233
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 234
c_rt_lib0move(&___nl__5,___get_global_const(177));
#line 234
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 234
c_rt_lib0clear(&___nl__5);
#line 234
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 234
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 234
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 234
c_rt_lib0clear(&___nl__3);
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
goto label_1;
#line 234
goto label_5;
#line 234
label_5:
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0clear(&___nl__3);
#line 235
goto label_2;
#line 235
label_1:
#line 235
c_rt_lib0clear(&___nl__2);
#line 236
c_rt_lib0move(&___nl__2,___get_global_const(180));
#line 236
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 236
c_rt_lib0clear(&___nl__2);
#line 237
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 237
c_rt_lib0clear(&___nl__1);
#line 237
return ___nl__2;
#line 237
c_rt_lib0clear(&___nl__2);
#line 237
c_rt_lib0clear(&___nl__1);
#line 237
return NULL;
}

ImmT nparser_priv0parse_expr(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 241
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 241
c_rt_lib0move(&___nl__3, nparser_priv0parse_expr_rec(___ref___0, ___nl__4));
#line 241
c_rt_lib0clear(&___nl__4);
#line 241
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(45)));
#line 241
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 241
c_rt_lib0clear(&___nl__1);
#line 241
c_rt_lib0clear(&___nl__2);
#line 241
return ___nl__3;
#line 241
label_1:
#line 241
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(45)));
#line 241
c_rt_lib0clear(&___nl__2);
#line 241
c_rt_lib0clear(&___nl__3);
#line 242
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 242
c_rt_lib0move(&___nl__2, nparser_priv0parse_expr_rec_left(___ref___0, ___nl__1, ___nl__3));
#line 242
c_rt_lib0clear(&___nl__3);
#line 242
c_rt_lib0clear(&___nl__1);
#line 242
return ___nl__2;
#line 242
c_rt_lib0clear(&___nl__2);
#line 242
c_rt_lib0clear(&___nl__1);
#line 242
return NULL;
}

ImmT nparser_priv0parse_type(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 246
c_rt_lib0move(&___nl__2,___get_global_const(189));
#line 246
c_rt_lib0move(&___nl__1, nparser_priv0try_eat(___ref___0, ___nl__2));
#line 246
c_rt_lib0clear(&___nl__2);
#line 246
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 246
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 247
c_rt_lib0move(&___nl__3,___get_global_const(189));
#line 247
c_rt_lib0move(&___nl__4, nparser_priv0parse_fun_label(___ref___0));
#line 247
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(806), ___nl__4));
#line 247
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(405), ___nl__3, ___get_global_const(238), ___nl__4));
#line 247
c_rt_lib0clear(&___nl__3);
#line 247
c_rt_lib0clear(&___nl__4);
#line 247
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(805), ___nl__2));
#line 247
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__2));
#line 247
c_rt_lib0clear(&___nl__1);
#line 247
return ___nl__2;
#line 247
c_rt_lib0clear(&___nl__2);
#line 248
goto label_2;
#line 248
label_2:
#line 248
c_rt_lib0clear(&___nl__1);
#line 249
c_rt_lib0move(&___nl__2,___get_global_const(874));
#line 249
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 249
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 249
c_rt_lib0move(&___nl__1, ntokenizer0is_type(&___nl__2, ___nl__3));
#line 249
c_rt_lib0clear(&___nl__3);
#line 249
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 249
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 249
c_rt_lib0clear(&___nl__3);
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 249
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 250
c_rt_lib0move(&___nl__4, nparser_priv0parse_label(___ref___0));
#line 250
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 250
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
c_rt_lib0clear(&___nl__2);
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
return ___nl__4;
#line 250
label_5:
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__4, ___get_global_const(45)));
#line 250
c_rt_lib0clear(&___nl__3);
#line 250
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 251
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(759)));
#line 251
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 251
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 251
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__2));
#line 251
c_rt_lib0clear(&___nl__1);
#line 251
c_rt_lib0clear(&___nl__2);
#line 251
c_rt_lib0clear(&___nl__3);
#line 251
return ___nl__4;
#line 251
c_rt_lib0clear(&___nl__4);
#line 251
goto label_7;
#line 251
label_7:
#line 251
c_rt_lib0clear(&___nl__3);
#line 251
c_rt_lib0clear(&___nl__2);
#line 252
goto label_4;
#line 252
label_4:
#line 252
c_rt_lib0clear(&___nl__1);
#line 253
c_rt_lib0move(&___nl__1,___get_global_const(894));
#line 253
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__1));
#line 253
c_rt_lib0clear(&___nl__1);
#line 254
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 254
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 254
return ___nl__1;
#line 254
c_rt_lib0clear(&___nl__1);
#line 254
return NULL;
}

ImmT nparser_priv0parse_expr_rec_left(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
nparser_priv0__const__init();
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
#line 258
label_2:
#line 259
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 259
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 259
c_rt_lib0move(&___nl__3, ntokenizer0get_token(&___nl__4));
#line 259
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 259
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 259
c_rt_lib0clear(&___nl__5);
#line 259
c_rt_lib0clear(&___nl__4);
#line 261
c_rt_lib0move(&___nl__6, nast0get_ternary_ops());
#line 261
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__3));
#line 261
c_rt_lib0clear(&___nl__6);
#line 261
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 261
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 262
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 263
c_rt_lib0move(&___nl__6,___get_global_const(823));
#line 263
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 263
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 263
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 264
c_rt_lib0move(&___nl__8, nast0get_ternary_ops());
#line 264
c_rt_lib0move(&___nl__9,___get_global_const(823));
#line 264
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__9));
#line 264
c_rt_lib0clear(&___nl__9);
#line 264
c_rt_lib0clear(&___nl__8);
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(820)));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0lt(___nl__8, ___nl__2));
#line 265
if(c_rt_lib0check_true_native(___nl__8)){ goto label_9;}
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(820)));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__2));
#line 265
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 265
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(821)));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(239)));
#line 265
label_10:
#line 265
c_rt_lib0clear(&___nl__9);
#line 265
label_9:
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 265
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 265
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 265
c_rt_lib0clear(&___nl__1);
#line 265
c_rt_lib0clear(&___nl__2);
#line 265
c_rt_lib0clear(&___nl__3);
#line 265
c_rt_lib0clear(&___nl__4);
#line 265
c_rt_lib0clear(&___nl__5);
#line 265
c_rt_lib0clear(&___nl__6);
#line 265
c_rt_lib0clear(&___nl__7);
#line 265
c_rt_lib0clear(&___nl__8);
#line 265
return ___nl__9;
#line 265
c_rt_lib0clear(&___nl__9);
#line 265
goto label_8;
#line 265
label_8:
#line 265
c_rt_lib0clear(&___nl__8);
#line 266
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 267
c_rt_lib0move(&___nl__10, nparser_priv0parse_expr(___ref___0));
#line 267
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(45)));
#line 267
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 267
c_rt_lib0clear(&___nl__1);
#line 267
c_rt_lib0clear(&___nl__2);
#line 267
c_rt_lib0clear(&___nl__3);
#line 267
c_rt_lib0clear(&___nl__4);
#line 267
c_rt_lib0clear(&___nl__5);
#line 267
c_rt_lib0clear(&___nl__6);
#line 267
c_rt_lib0clear(&___nl__7);
#line 267
c_rt_lib0clear(&___nl__8);
#line 267
c_rt_lib0clear(&___nl__9);
#line 267
return ___nl__10;
#line 267
label_11:
#line 267
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__10, ___get_global_const(45)));
#line 267
c_rt_lib0clear(&___nl__9);
#line 267
c_rt_lib0clear(&___nl__10);
#line 268
c_rt_lib0move(&___nl__9,___get_global_const(375));
#line 268
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__9));
#line 268
c_rt_lib0clear(&___nl__9);
#line 269
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(820)));
#line 269
c_rt_lib0move(&___nl__11, nparser_priv0parse_expr_rec(___ref___0, ___nl__12));
#line 269
c_rt_lib0clear(&___nl__12);
#line 269
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(45)));
#line 269
if(c_rt_lib0check_true_native(___nl__10)){ goto label_12;}
#line 269
c_rt_lib0clear(&___nl__1);
#line 269
c_rt_lib0clear(&___nl__2);
#line 269
c_rt_lib0clear(&___nl__3);
#line 269
c_rt_lib0clear(&___nl__4);
#line 269
c_rt_lib0clear(&___nl__5);
#line 269
c_rt_lib0clear(&___nl__6);
#line 269
c_rt_lib0clear(&___nl__7);
#line 269
c_rt_lib0clear(&___nl__8);
#line 269
c_rt_lib0clear(&___nl__9);
#line 269
c_rt_lib0clear(&___nl__10);
#line 269
return ___nl__11;
#line 269
label_12:
#line 269
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__11, ___get_global_const(45)));
#line 269
c_rt_lib0clear(&___nl__10);
#line 269
c_rt_lib0clear(&___nl__11);
#line 270
c_rt_lib0move(&___nl__11,___get_global_const(823));
#line 270
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(4, ___get_global_const(809), ___nl__1, ___get_global_const(810), ___nl__8, ___get_global_const(811), ___nl__9, ___get_global_const(405), ___nl__11));
#line 270
c_rt_lib0clear(&___nl__11);
#line 270
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(801), ___nl__10));
#line 270
c_rt_lib0copy(&___nl__1, ___nl__10);
#line 270
c_rt_lib0clear(&___nl__10);
#line 270
c_rt_lib0clear(&___nl__7);
#line 270
c_rt_lib0clear(&___nl__8);
#line 270
c_rt_lib0clear(&___nl__9);
#line 271
goto label_5;
#line 271
label_6:
#line 272
c_rt_lib0move(&___nl__7,___get_global_const(895));
#line 272
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__4));
#line 272
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__7));
#line 272
c_rt_lib0clear(&___nl__1);
#line 272
c_rt_lib0clear(&___nl__2);
#line 272
c_rt_lib0clear(&___nl__3);
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0clear(&___nl__5);
#line 272
c_rt_lib0clear(&___nl__6);
#line 272
return ___nl__7;
#line 272
c_rt_lib0clear(&___nl__7);
#line 273
goto label_5;
#line 273
label_5:
#line 273
c_rt_lib0clear(&___nl__6);
#line 274
goto label_3;
#line 274
label_4:
#line 274
c_rt_lib0move(&___nl__6, nast0get_bin_ops());
#line 274
c_rt_lib0move(&___nl__5, hash0has_key(___nl__6, ___nl__3));
#line 274
c_rt_lib0clear(&___nl__6);
#line 274
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 274
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 275
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 276
c_rt_lib0move(&___nl__7, nast0get_bin_ops());
#line 276
c_rt_lib0move(&___nl__6, hash0get_value(___nl__7, ___nl__3));
#line 276
c_rt_lib0clear(&___nl__7);
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(820)));
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0lt(___nl__7, ___nl__2));
#line 277
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(820)));
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__2));
#line 277
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 277
if(c_rt_lib0check_true_native(___nl__8)){ goto label_17;}
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(821)));
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(239)));
#line 277
label_17:
#line 277
c_rt_lib0clear(&___nl__8);
#line 277
label_16:
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 277
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 277
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 277
c_rt_lib0clear(&___nl__1);
#line 277
c_rt_lib0clear(&___nl__2);
#line 277
c_rt_lib0clear(&___nl__3);
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0clear(&___nl__6);
#line 277
c_rt_lib0clear(&___nl__7);
#line 277
return ___nl__8;
#line 277
c_rt_lib0clear(&___nl__8);
#line 277
goto label_15;
#line 277
label_15:
#line 277
c_rt_lib0clear(&___nl__7);
#line 278
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__3));
#line 279
c_rt_lib0move(&___nl__7,___get_global_const(797));
#line 279
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__4, ___nl__7));
#line 279
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 279
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 280
c_rt_lib0move(&___nl__9, nparser_priv0parse_hash_key(___ref___0));
#line 280
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(405), ___nl__4, ___get_global_const(239), ___nl__1, ___get_global_const(240), ___nl__9));
#line 280
c_rt_lib0clear(&___nl__9);
#line 280
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__8));
#line 280
c_rt_lib0copy(&___nl__1, ___nl__8);
#line 280
c_rt_lib0clear(&___nl__8);
#line 281
goto label_18;
#line 281
label_19:
#line 281
c_rt_lib0move(&___nl__7,___get_global_const(832));
#line 281
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__4, ___nl__7));
#line 281
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 281
if(c_rt_lib0check_true_native(___nl__7)){ goto label_20;}
#line 282
c_rt_lib0move(&___nl__8,___get_global_const(375));
#line 282
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__8));
#line 282
c_rt_lib0clear(&___nl__8);
#line 283
c_rt_lib0move(&___nl__8, nparser_priv0parse_variant_label(___ref___0));
#line 284
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(225)));
#line 284
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(405), ___nl__10, ___get_global_const(239), ___nl__1, ___get_global_const(847), ___nl__8));
#line 284
c_rt_lib0clear(&___nl__10);
#line 284
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(804), ___nl__9));
#line 284
c_rt_lib0copy(&___nl__1, ___nl__9);
#line 284
c_rt_lib0clear(&___nl__9);
#line 284
c_rt_lib0clear(&___nl__8);
#line 285
goto label_18;
#line 285
label_20:
#line 285
c_rt_lib0move(&___nl__7,___get_global_const(830));
#line 285
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__4, ___nl__7));
#line 285
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 285
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 286
c_rt_lib0move(&___nl__8,___get_global_const(375));
#line 286
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__8));
#line 286
c_rt_lib0clear(&___nl__8);
#line 287
c_rt_lib0move(&___nl__8, nparser_priv0parse_variant_label(___ref___0));
#line 288
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(224)));
#line 288
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(405), ___nl__10, ___get_global_const(239), ___nl__1, ___get_global_const(847), ___nl__8));
#line 288
c_rt_lib0clear(&___nl__10);
#line 288
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(804), ___nl__9));
#line 288
c_rt_lib0copy(&___nl__1, ___nl__9);
#line 288
c_rt_lib0clear(&___nl__9);
#line 288
c_rt_lib0clear(&___nl__8);
#line 289
goto label_18;
#line 289
label_21:
#line 290
c_rt_lib0move(&___nl__8,___get_global_const(812));
#line 290
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__4, ___nl__8));
#line 290
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 290
if(c_rt_lib0check_true_native(___nl__8)){ goto label_23;}
#line 290
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___0, ___nl__1));
#line 290
goto label_23;
#line 290
label_23:
#line 290
c_rt_lib0clear(&___nl__8);
#line 291
c_rt_lib0move(&___nl__12, nast0get_bin_ops());
#line 291
c_rt_lib0move(&___nl__11, hash0get_value(___nl__12, ___nl__4));
#line 291
c_rt_lib0clear(&___nl__12);
#line 291
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(820)));
#line 291
c_rt_lib0move(&___nl__10, nparser_priv0parse_expr_rec(___ref___0, ___nl__11));
#line 291
c_rt_lib0clear(&___nl__11);
#line 291
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(45)));
#line 291
if(c_rt_lib0check_true_native(___nl__9)){ goto label_24;}
#line 291
c_rt_lib0clear(&___nl__1);
#line 291
c_rt_lib0clear(&___nl__2);
#line 291
c_rt_lib0clear(&___nl__3);
#line 291
c_rt_lib0clear(&___nl__4);
#line 291
c_rt_lib0clear(&___nl__5);
#line 291
c_rt_lib0clear(&___nl__6);
#line 291
c_rt_lib0clear(&___nl__7);
#line 291
c_rt_lib0clear(&___nl__8);
#line 291
c_rt_lib0clear(&___nl__9);
#line 291
return ___nl__10;
#line 291
label_24:
#line 291
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__10, ___get_global_const(45)));
#line 291
c_rt_lib0clear(&___nl__9);
#line 291
c_rt_lib0clear(&___nl__10);
#line 292
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(239), ___nl__1, ___get_global_const(405), ___nl__4, ___get_global_const(240), ___nl__8));
#line 292
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__9));
#line 292
c_rt_lib0copy(&___nl__1, ___nl__9);
#line 292
c_rt_lib0clear(&___nl__9);
#line 292
c_rt_lib0clear(&___nl__8);
#line 293
goto label_18;
#line 293
label_18:
#line 293
c_rt_lib0clear(&___nl__7);
#line 293
c_rt_lib0clear(&___nl__6);
#line 294
goto label_3;
#line 294
label_13:
#line 294
c_rt_lib0move(&___nl__6,___get_global_const(179));
#line 294
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 294
c_rt_lib0clear(&___nl__6);
#line 294
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 294
if(c_rt_lib0check_true_native(___nl__5)){ goto label_25;}
#line 295
c_rt_lib0move(&___nl__6,___get_global_const(798));
#line 295
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 295
c_rt_lib0clear(&___nl__6);
#line 296
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 296
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 296
if(c_rt_lib0check_true_native(___nl__7)){ goto label_26;}
#line 296
c_rt_lib0clear(&___nl__1);
#line 296
c_rt_lib0clear(&___nl__2);
#line 296
c_rt_lib0clear(&___nl__3);
#line 296
c_rt_lib0clear(&___nl__4);
#line 296
c_rt_lib0clear(&___nl__5);
#line 296
c_rt_lib0clear(&___nl__6);
#line 296
c_rt_lib0clear(&___nl__7);
#line 296
return ___nl__8;
#line 296
label_26:
#line 296
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 296
c_rt_lib0clear(&___nl__7);
#line 296
c_rt_lib0clear(&___nl__8);
#line 297
c_rt_lib0move(&___nl__7,___get_global_const(180));
#line 297
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 297
c_rt_lib0clear(&___nl__7);
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(405), ___nl__4, ___get_global_const(239), ___nl__1, ___get_global_const(240), ___nl__6));
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__7));
#line 298
c_rt_lib0copy(&___nl__1, ___nl__7);
#line 298
c_rt_lib0clear(&___nl__7);
#line 298
c_rt_lib0clear(&___nl__6);
#line 299
goto label_3;
#line 299
label_25:
#line 299
c_rt_lib0move(&___nl__6,___get_global_const(173));
#line 299
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 299
c_rt_lib0clear(&___nl__6);
#line 299
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 299
if(c_rt_lib0check_true_native(___nl__5)){ goto label_27;}
#line 300
c_rt_lib0move(&___nl__6,___get_global_const(799));
#line 300
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 300
c_rt_lib0clear(&___nl__6);
#line 301
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 301
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 301
if(c_rt_lib0check_true_native(___nl__7)){ goto label_28;}
#line 301
c_rt_lib0clear(&___nl__1);
#line 301
c_rt_lib0clear(&___nl__2);
#line 301
c_rt_lib0clear(&___nl__3);
#line 301
c_rt_lib0clear(&___nl__4);
#line 301
c_rt_lib0clear(&___nl__5);
#line 301
c_rt_lib0clear(&___nl__6);
#line 301
c_rt_lib0clear(&___nl__7);
#line 301
return ___nl__8;
#line 301
label_28:
#line 301
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 301
c_rt_lib0clear(&___nl__7);
#line 301
c_rt_lib0clear(&___nl__8);
#line 302
c_rt_lib0move(&___nl__7,___get_global_const(174));
#line 302
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 302
c_rt_lib0clear(&___nl__7);
#line 303
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(405), ___nl__4, ___get_global_const(239), ___nl__1, ___get_global_const(240), ___nl__6));
#line 303
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__7));
#line 303
c_rt_lib0copy(&___nl__1, ___nl__7);
#line 303
c_rt_lib0clear(&___nl__7);
#line 303
c_rt_lib0clear(&___nl__6);
#line 304
goto label_3;
#line 304
label_27:
#line 304
c_rt_lib0move(&___nl__6,___get_global_const(826));
#line 304
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 304
c_rt_lib0clear(&___nl__6);
#line 304
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 304
if(c_rt_lib0check_true_native(___nl__5)){ goto label_29;}
#line 305
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(807), ___nl__1));
#line 305
c_rt_lib0copy(&___nl__1, ___nl__6);
#line 305
c_rt_lib0clear(&___nl__6);
#line 306
goto label_3;
#line 306
label_29:
#line 306
c_rt_lib0move(&___nl__6,___get_global_const(140));
#line 306
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 306
c_rt_lib0clear(&___nl__6);
#line 306
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 306
if(c_rt_lib0check_true_native(___nl__5)){ goto label_30;}
#line 307
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(808), ___nl__1));
#line 307
c_rt_lib0copy(&___nl__1, ___nl__6);
#line 307
c_rt_lib0clear(&___nl__6);
#line 308
goto label_3;
#line 308
label_30:
#line 309
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 309
c_rt_lib0clear(&___nl__1);
#line 309
c_rt_lib0clear(&___nl__2);
#line 309
c_rt_lib0clear(&___nl__3);
#line 309
c_rt_lib0clear(&___nl__4);
#line 309
c_rt_lib0clear(&___nl__5);
#line 309
return ___nl__6;
#line 309
c_rt_lib0clear(&___nl__6);
#line 310
goto label_3;
#line 310
label_3:
#line 310
c_rt_lib0clear(&___nl__5);
#line 310
c_rt_lib0clear(&___nl__3);
#line 310
c_rt_lib0clear(&___nl__4);
#line 258
goto label_2;
#line 312
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 312
nl_die_arg(___nl__3);
#line 312
c_rt_lib0clear(&___nl__3);
#line 312
c_rt_lib0clear(&___nl__1);
#line 312
c_rt_lib0clear(&___nl__2);
#line 312
return NULL;
}

ImmT nparser_priv0parse_expr_rec(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 317
c_rt_lib0move(&___nl__4,___get_global_const(326));
#line 317
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 317
c_rt_lib0clear(&___nl__4);
#line 317
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 317
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 318
c_rt_lib0move(&___nl__6, nparser_priv0parse_expr(___ref___0));
#line 318
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 318
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 318
c_rt_lib0clear(&___nl__1);
#line 318
c_rt_lib0clear(&___nl__2);
#line 318
c_rt_lib0clear(&___nl__3);
#line 318
c_rt_lib0clear(&___nl__4);
#line 318
c_rt_lib0clear(&___nl__5);
#line 318
return ___nl__6;
#line 318
label_3:
#line 318
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 318
c_rt_lib0clear(&___nl__5);
#line 318
c_rt_lib0clear(&___nl__6);
#line 319
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(802), ___nl__4));
#line 319
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 319
c_rt_lib0clear(&___nl__5);
#line 320
c_rt_lib0move(&___nl__5,___get_global_const(181));
#line 320
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 320
c_rt_lib0clear(&___nl__5);
#line 320
c_rt_lib0clear(&___nl__4);
#line 321
goto label_1;
#line 321
label_2:
#line 321
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 321
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 321
c_rt_lib0move(&___nl__5,___get_global_const(173));
#line 321
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 321
c_rt_lib0clear(&___nl__5);
#line 321
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 321
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 321
c_rt_lib0clear(&___nl__5);
#line 321
c_rt_lib0clear(&___nl__4);
#line 321
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 321
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 322
c_rt_lib0move(&___nl__6, nparser_priv0parse_hash(___ref___0));
#line 322
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 322
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 322
c_rt_lib0clear(&___nl__1);
#line 322
c_rt_lib0clear(&___nl__2);
#line 322
c_rt_lib0clear(&___nl__3);
#line 322
c_rt_lib0clear(&___nl__4);
#line 322
c_rt_lib0clear(&___nl__5);
#line 322
return ___nl__6;
#line 322
label_5:
#line 322
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 322
c_rt_lib0clear(&___nl__5);
#line 322
c_rt_lib0clear(&___nl__6);
#line 323
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__4));
#line 323
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 323
c_rt_lib0clear(&___nl__5);
#line 323
c_rt_lib0clear(&___nl__4);
#line 324
goto label_1;
#line 324
label_4:
#line 324
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 324
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 324
c_rt_lib0move(&___nl__5,___get_global_const(179));
#line 324
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 324
c_rt_lib0clear(&___nl__5);
#line 324
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 324
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 324
c_rt_lib0clear(&___nl__5);
#line 324
c_rt_lib0clear(&___nl__4);
#line 324
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 324
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 325
c_rt_lib0move(&___nl__6, nparser_priv0parse_arr(___ref___0));
#line 325
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 325
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 325
c_rt_lib0clear(&___nl__1);
#line 325
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0clear(&___nl__3);
#line 325
c_rt_lib0clear(&___nl__4);
#line 325
c_rt_lib0clear(&___nl__5);
#line 325
return ___nl__6;
#line 325
label_7:
#line 325
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 325
c_rt_lib0clear(&___nl__5);
#line 325
c_rt_lib0clear(&___nl__6);
#line 326
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__4));
#line 326
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 326
c_rt_lib0clear(&___nl__5);
#line 326
c_rt_lib0clear(&___nl__4);
#line 327
goto label_1;
#line 327
label_6:
#line 327
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 327
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 327
c_rt_lib0move(&___nl__5,___get_global_const(375));
#line 327
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 327
c_rt_lib0clear(&___nl__5);
#line 327
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 327
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 327
c_rt_lib0clear(&___nl__5);
#line 327
c_rt_lib0clear(&___nl__4);
#line 327
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 327
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 328
c_rt_lib0move(&___nl__6, nparser_priv0parse_variant(___ref___0));
#line 328
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 328
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 328
c_rt_lib0clear(&___nl__1);
#line 328
c_rt_lib0clear(&___nl__2);
#line 328
c_rt_lib0clear(&___nl__3);
#line 328
c_rt_lib0clear(&___nl__4);
#line 328
c_rt_lib0clear(&___nl__5);
#line 328
return ___nl__6;
#line 328
label_9:
#line 328
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 328
c_rt_lib0clear(&___nl__5);
#line 328
c_rt_lib0clear(&___nl__6);
#line 329
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(788), ___nl__4));
#line 329
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 329
c_rt_lib0clear(&___nl__5);
#line 329
c_rt_lib0clear(&___nl__4);
#line 330
goto label_1;
#line 330
label_8:
#line 330
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 330
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 330
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(896)));
#line 330
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 330
c_rt_lib0clear(&___nl__5);
#line 330
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 330
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 330
c_rt_lib0clear(&___nl__5);
#line 330
c_rt_lib0clear(&___nl__4);
#line 330
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 330
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 331
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 331
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 331
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(896)));
#line 331
c_rt_lib0move(&___nl__4, ntokenizer0eat_type(&___nl__5, ___nl__6));
#line 331
c_rt_lib0clear(&___nl__6);
#line 331
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 331
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 331
c_rt_lib0clear(&___nl__6);
#line 331
c_rt_lib0clear(&___nl__5);
#line 331
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(298), ___nl__4));
#line 331
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 331
c_rt_lib0clear(&___nl__4);
#line 332
goto label_1;
#line 332
label_10:
#line 332
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 332
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 332
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(897)));
#line 332
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 332
c_rt_lib0clear(&___nl__5);
#line 332
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 332
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 332
c_rt_lib0clear(&___nl__5);
#line 332
c_rt_lib0clear(&___nl__4);
#line 332
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 332
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 332
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 332
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(717)));
#line 332
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 332
c_rt_lib0clear(&___nl__5);
#line 332
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 332
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 332
c_rt_lib0clear(&___nl__5);
#line 332
c_rt_lib0clear(&___nl__4);
#line 332
label_12:
#line 332
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 332
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 333
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 333
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(1, ___get_global_const(281), ___nl__5));
#line 333
c_rt_lib0clear(&___nl__5);
#line 334
label_14:
#line 334
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 334
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 334
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(897)));
#line 334
c_rt_lib0move(&___nl__5, ntokenizer0is_type(&___nl__6, ___nl__7));
#line 334
c_rt_lib0clear(&___nl__7);
#line 334
c_rt_lib0move(&___nl__7,___get_global_const(874));
#line 334
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 334
c_rt_lib0clear(&___nl__7);
#line 334
c_rt_lib0clear(&___nl__6);
#line 334
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 334
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 335
c_rt_lib0move(&___nl__6,___get_global_const(281));
#line 335
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(___nl__4, ___nl__6));
#line 335
c_rt_lib0move(&___nl__8,___get_global_const(874));
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 335
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(897)));
#line 335
c_rt_lib0move(&___nl__7, ntokenizer0eat_type(&___nl__8, ___nl__9));
#line 335
c_rt_lib0clear(&___nl__9);
#line 335
c_rt_lib0move(&___nl__9,___get_global_const(874));
#line 335
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__8));
#line 335
c_rt_lib0clear(&___nl__9);
#line 335
c_rt_lib0clear(&___nl__8);
#line 335
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 335
c_rt_lib0clear(&___nl__7);
#line 335
c_rt_lib0move(&___nl__7,___get_global_const(281));
#line 335
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__7, ___nl__6));
#line 335
c_rt_lib0clear(&___nl__7);
#line 335
c_rt_lib0clear(&___nl__6);
#line 336
goto label_14;
#line 336
label_13:
#line 336
c_rt_lib0clear(&___nl__5);
#line 337
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 337
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 337
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(717)));
#line 337
c_rt_lib0move(&___nl__5, ntokenizer0is_type(&___nl__6, ___nl__7));
#line 337
c_rt_lib0clear(&___nl__7);
#line 337
c_rt_lib0move(&___nl__7,___get_global_const(874));
#line 337
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 337
c_rt_lib0clear(&___nl__7);
#line 337
c_rt_lib0clear(&___nl__6);
#line 337
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 337
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 338
c_rt_lib0move(&___nl__6,___get_global_const(281));
#line 338
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(___nl__4, ___nl__6));
#line 338
c_rt_lib0move(&___nl__8,___get_global_const(874));
#line 338
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 338
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(717)));
#line 338
c_rt_lib0move(&___nl__7, ntokenizer0eat_type(&___nl__8, ___nl__9));
#line 338
c_rt_lib0clear(&___nl__9);
#line 338
c_rt_lib0move(&___nl__9,___get_global_const(874));
#line 338
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__8));
#line 338
c_rt_lib0clear(&___nl__9);
#line 338
c_rt_lib0clear(&___nl__8);
#line 338
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 338
c_rt_lib0clear(&___nl__7);
#line 338
c_rt_lib0move(&___nl__7,___get_global_const(281));
#line 338
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__7, ___nl__6));
#line 338
c_rt_lib0clear(&___nl__7);
#line 338
c_rt_lib0clear(&___nl__6);
#line 339
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(850)));
#line 339
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 339
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(852), ___nl__7);
#line 339
c_rt_lib0clear(&___nl__6);
#line 339
c_rt_lib0clear(&___nl__7);
#line 340
goto label_15;
#line 340
label_16:
#line 341
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(851)));
#line 341
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 341
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(852), ___nl__7);
#line 341
c_rt_lib0clear(&___nl__6);
#line 341
c_rt_lib0clear(&___nl__7);
#line 342
goto label_15;
#line 342
label_15:
#line 342
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(717), ___nl__4));
#line 343
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 343
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0clear(&___nl__4);
#line 344
goto label_1;
#line 344
label_11:
#line 344
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 344
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 344
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 344
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 344
c_rt_lib0clear(&___nl__5);
#line 344
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 344
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 344
c_rt_lib0clear(&___nl__5);
#line 344
c_rt_lib0clear(&___nl__4);
#line 344
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 344
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 345
c_rt_lib0move(&___nl__5, nparser_priv0parse_label(___ref___0));
#line 345
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 345
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 345
c_rt_lib0clear(&___nl__1);
#line 345
c_rt_lib0clear(&___nl__2);
#line 345
c_rt_lib0clear(&___nl__3);
#line 345
c_rt_lib0clear(&___nl__4);
#line 345
return ___nl__5;
#line 345
label_18:
#line 345
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 345
c_rt_lib0clear(&___nl__4);
#line 345
c_rt_lib0clear(&___nl__5);
#line 346
goto label_1;
#line 346
label_17:
#line 346
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 346
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 346
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(898)));
#line 346
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__5, ___nl__6));
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 346
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0clear(&___nl__5);
#line 346
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 346
if(c_rt_lib0check_true_native(___nl__4)){ goto label_20;}
#line 346
c_rt_lib0move(&___nl__5, nast0get_unary_ops());
#line 346
c_rt_lib0move(&___nl__7,___get_global_const(874));
#line 346
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 346
c_rt_lib0move(&___nl__6, ntokenizer0get_token(&___nl__7));
#line 346
c_rt_lib0move(&___nl__8,___get_global_const(874));
#line 346
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__7));
#line 346
c_rt_lib0clear(&___nl__8);
#line 346
c_rt_lib0clear(&___nl__7);
#line 346
c_rt_lib0move(&___nl__3, hash0has_key(___nl__5, ___nl__6));
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0clear(&___nl__5);
#line 346
label_20:
#line 346
c_rt_lib0clear(&___nl__4);
#line 346
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 346
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 348
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 348
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 348
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(898)));
#line 348
c_rt_lib0move(&___nl__4, ntokenizer0eat_type(&___nl__5, ___nl__6));
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 348
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 348
c_rt_lib0clear(&___nl__6);
#line 348
c_rt_lib0clear(&___nl__5);
#line 350
c_rt_lib0move(&___nl__6,___get_global_const(189));
#line 350
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__6));
#line 350
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 350
if(c_rt_lib0check_true_native(___nl__6)){ goto label_22;}
#line 351
c_rt_lib0move(&___nl__7, nparser_priv0parse_fun_label(___ref___0));
#line 351
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(806), ___nl__7));
#line 351
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 351
c_rt_lib0clear(&___nl__7);
#line 352
goto label_21;
#line 352
label_22:
#line 353
c_rt_lib0move(&___nl__10, nast0get_unary_ops());
#line 353
c_rt_lib0move(&___nl__9, hash0get_value(___nl__10, ___nl__4));
#line 353
c_rt_lib0clear(&___nl__10);
#line 353
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(820)));
#line 353
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr_rec(___ref___0, ___nl__9));
#line 353
c_rt_lib0clear(&___nl__9);
#line 353
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 353
if(c_rt_lib0check_true_native(___nl__7)){ goto label_23;}
#line 353
c_rt_lib0clear(&___nl__1);
#line 353
c_rt_lib0clear(&___nl__2);
#line 353
c_rt_lib0clear(&___nl__3);
#line 353
c_rt_lib0clear(&___nl__4);
#line 353
c_rt_lib0clear(&___nl__5);
#line 353
c_rt_lib0clear(&___nl__6);
#line 353
c_rt_lib0clear(&___nl__7);
#line 353
return ___nl__8;
#line 353
label_23:
#line 353
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 353
c_rt_lib0clear(&___nl__7);
#line 353
c_rt_lib0clear(&___nl__8);
#line 354
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 354
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(805)));
#line 354
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 354
if(c_rt_lib0check_true_native(___nl__7)){ goto label_25;}
#line 354
c_rt_lib0move(&___nl__8,___get_global_const(899));
#line 354
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__8));
#line 354
c_rt_lib0clear(&___nl__8);
#line 354
goto label_25;
#line 354
label_25:
#line 354
c_rt_lib0clear(&___nl__7);
#line 355
goto label_21;
#line 355
label_21:
#line 355
c_rt_lib0clear(&___nl__6);
#line 356
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(405), ___nl__4, ___get_global_const(238), ___nl__5));
#line 356
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(805), ___nl__6));
#line 356
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 356
c_rt_lib0clear(&___nl__6);
#line 356
c_rt_lib0clear(&___nl__4);
#line 356
c_rt_lib0clear(&___nl__5);
#line 357
goto label_1;
#line 357
label_19:
#line 357
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 357
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 357
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(900)));
#line 357
c_rt_lib0move(&___nl__3, ntokenizer0is_type(&___nl__4, ___nl__5));
#line 357
c_rt_lib0clear(&___nl__5);
#line 357
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 357
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 357
c_rt_lib0clear(&___nl__5);
#line 357
c_rt_lib0clear(&___nl__4);
#line 357
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 357
if(c_rt_lib0check_true_native(___nl__3)){ goto label_26;}
#line 358
c_rt_lib0move(&___nl__5,___get_global_const(901));
#line 358
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 358
c_rt_lib0clear(&___nl__5);
#line 358
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 358
if(c_rt_lib0check_true_native(___nl__4)){ goto label_28;}
#line 359
c_rt_lib0move(&___nl__6,___get_global_const(6));
#line 359
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 359
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(78), ___nl__6, ___get_global_const(796), ___nl__7));
#line 359
c_rt_lib0clear(&___nl__6);
#line 359
c_rt_lib0clear(&___nl__7);
#line 359
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(788), ___nl__5));
#line 359
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 359
c_rt_lib0clear(&___nl__5);
#line 360
goto label_27;
#line 360
label_28:
#line 360
c_rt_lib0move(&___nl__5,___get_global_const(902));
#line 360
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 360
c_rt_lib0clear(&___nl__5);
#line 360
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 360
if(c_rt_lib0check_true_native(___nl__4)){ goto label_29;}
#line 361
c_rt_lib0move(&___nl__6,___get_global_const(7));
#line 361
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 361
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(78), ___nl__6, ___get_global_const(796), ___nl__7));
#line 361
c_rt_lib0clear(&___nl__6);
#line 361
c_rt_lib0clear(&___nl__7);
#line 361
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(788), ___nl__5));
#line 361
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 361
c_rt_lib0clear(&___nl__5);
#line 362
goto label_27;
#line 362
label_29:
#line 363
c_rt_lib0move(&___nl__5,___get_global_const(903));
#line 363
c_rt_lib0move(&___nl__6, string0lf());
#line 363
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 363
c_rt_lib0clear(&___nl__6);
#line 363
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(874)));
#line 363
c_rt_lib0move(&___nl__6, ntokenizer0info(___nl__7));
#line 363
c_rt_lib0clear(&___nl__7);
#line 363
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 363
c_rt_lib0clear(&___nl__6);
#line 364
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__5));
#line 365
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
#line 365
c_rt_lib0clear(&___nl__1);
#line 365
c_rt_lib0clear(&___nl__2);
#line 365
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0clear(&___nl__4);
#line 365
c_rt_lib0clear(&___nl__5);
#line 365
return ___nl__6;
#line 365
c_rt_lib0clear(&___nl__6);
#line 365
c_rt_lib0clear(&___nl__5);
#line 366
goto label_27;
#line 366
label_27:
#line 366
c_rt_lib0clear(&___nl__4);
#line 367
goto label_1;
#line 367
label_26:
#line 368
c_rt_lib0move(&___nl__4,___get_global_const(904));
#line 368
c_rt_lib0move(&___nl__5, string0lf());
#line 368
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 368
c_rt_lib0clear(&___nl__5);
#line 368
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(874)));
#line 368
c_rt_lib0move(&___nl__5, ntokenizer0info(___nl__6));
#line 368
c_rt_lib0clear(&___nl__6);
#line 368
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 368
c_rt_lib0clear(&___nl__5);
#line 369
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__4));
#line 370
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
#line 370
c_rt_lib0clear(&___nl__1);
#line 370
c_rt_lib0clear(&___nl__2);
#line 370
c_rt_lib0clear(&___nl__3);
#line 370
c_rt_lib0clear(&___nl__4);
#line 370
return ___nl__5;
#line 370
c_rt_lib0clear(&___nl__5);
#line 370
c_rt_lib0clear(&___nl__4);
#line 371
goto label_1;
#line 371
label_1:
#line 371
c_rt_lib0clear(&___nl__3);
#line 372
c_rt_lib0move(&___nl__3, nparser_priv0parse_expr_rec_left(___ref___0, ___nl__2, ___nl__1));
#line 372
c_rt_lib0clear(&___nl__1);
#line 372
c_rt_lib0clear(&___nl__2);
#line 372
return ___nl__3;
#line 372
c_rt_lib0clear(&___nl__3);
#line 372
c_rt_lib0clear(&___nl__2);
#line 372
c_rt_lib0clear(&___nl__1);
#line 372
return NULL;
}

ImmT nparser_priv0eat_text(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 376
c_rt_lib0move(&___nl__2,___get_global_const(874));
#line 376
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 376
c_rt_lib0move(&___nl__1, ntokenizer0is_text(&___nl__2));
#line 376
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 376
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 376
c_rt_lib0clear(&___nl__3);
#line 376
c_rt_lib0clear(&___nl__2);
#line 376
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 376
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 377
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 377
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 377
c_rt_lib0move(&___nl__2, ntokenizer0eat_text(&___nl__3));
#line 377
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 377
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 377
c_rt_lib0clear(&___nl__4);
#line 377
c_rt_lib0clear(&___nl__3);
#line 377
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__2));
#line 377
c_rt_lib0clear(&___nl__1);
#line 377
return ___nl__2;
#line 377
c_rt_lib0clear(&___nl__2);
#line 378
goto label_1;
#line 378
label_2:
#line 379
c_rt_lib0move(&___nl__2,___get_global_const(905));
#line 379
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 379
c_rt_lib0clear(&___nl__2);
#line 380
c_rt_lib0move(&___nl__2,___get_global_const(905));
#line 380
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__2));
#line 380
c_rt_lib0clear(&___nl__1);
#line 380
return ___nl__2;
#line 380
c_rt_lib0clear(&___nl__2);
#line 381
goto label_1;
#line 381
label_1:
#line 381
c_rt_lib0clear(&___nl__1);
#line 381
return NULL;
}

ImmT nparser_priv0parse_variant_label(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 385
c_rt_lib0move(&___nl__2,___get_global_const(874));
#line 385
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 385
c_rt_lib0move(&___nl__1, ntokenizer0is_text(&___nl__2));
#line 385
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 385
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 385
c_rt_lib0clear(&___nl__3);
#line 385
c_rt_lib0clear(&___nl__2);
#line 385
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 385
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 386
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 386
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 386
c_rt_lib0move(&___nl__2, ntokenizer0eat_text(&___nl__3));
#line 386
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 386
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 386
c_rt_lib0clear(&___nl__4);
#line 386
c_rt_lib0clear(&___nl__3);
#line 386
c_rt_lib0clear(&___nl__1);
#line 386
return ___nl__2;
#line 386
c_rt_lib0clear(&___nl__2);
#line 387
goto label_1;
#line 387
label_2:
#line 388
c_rt_lib0move(&___nl__2,___get_global_const(905));
#line 388
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 388
c_rt_lib0clear(&___nl__2);
#line 389
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 389
c_rt_lib0clear(&___nl__1);
#line 389
return ___nl__2;
#line 389
c_rt_lib0clear(&___nl__2);
#line 390
goto label_1;
#line 390
label_1:
#line 390
c_rt_lib0clear(&___nl__1);
#line 390
return NULL;
}

ImmT nparser_priv0parse_variant(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 394
c_rt_lib0move(&___nl__1,___get_global_const(375));
#line 394
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 394
c_rt_lib0clear(&___nl__1);
#line 395
c_rt_lib0move(&___nl__1, nparser_priv0parse_variant_label(___ref___0));
#line 396
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 397
c_rt_lib0move(&___nl__4,___get_global_const(326));
#line 397
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 397
c_rt_lib0clear(&___nl__4);
#line 397
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 397
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 398
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 398
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 398
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 398
c_rt_lib0clear(&___nl__1);
#line 398
c_rt_lib0clear(&___nl__2);
#line 398
c_rt_lib0clear(&___nl__3);
#line 398
c_rt_lib0clear(&___nl__4);
#line 398
return ___nl__5;
#line 398
label_3:
#line 398
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 398
c_rt_lib0clear(&___nl__4);
#line 398
c_rt_lib0clear(&___nl__5);
#line 399
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 399
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 399
c_rt_lib0clear(&___nl__4);
#line 400
goto label_1;
#line 400
label_2:
#line 401
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 401
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 401
c_rt_lib0clear(&___nl__4);
#line 402
goto label_1;
#line 402
label_1:
#line 402
c_rt_lib0clear(&___nl__3);
#line 403
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(78), ___nl__1, ___get_global_const(796), ___nl__2));
#line 403
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__3));
#line 403
c_rt_lib0clear(&___nl__1);
#line 403
c_rt_lib0clear(&___nl__2);
#line 403
return ___nl__3;
#line 403
c_rt_lib0clear(&___nl__3);
#line 403
c_rt_lib0clear(&___nl__1);
#line 403
c_rt_lib0clear(&___nl__2);
#line 403
return NULL;
}

ImmT nparser_priv0check_lvalue(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
nparser_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 407
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 407
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(796)));
#line 407
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 407
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 408
c_rt_lib0clear(&___nl__1);
#line 408
c_rt_lib0clear(&___nl__2);
#line 408
return NULL;
#line 409
goto label_3;
#line 409
label_2:
#line 409
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 409
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(223)));
#line 409
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 409
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 410
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 410
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(223)));
#line 411
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 411
c_rt_lib0move(&___nl__5,___get_global_const(797));
#line 411
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 411
c_rt_lib0clear(&___nl__5);
#line 411
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 411
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 411
c_rt_lib0move(&___nl__5,___get_global_const(798));
#line 411
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 411
c_rt_lib0clear(&___nl__5);
#line 411
label_7:
#line 411
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 411
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 411
c_rt_lib0move(&___nl__5,___get_global_const(799));
#line 411
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 411
c_rt_lib0clear(&___nl__5);
#line 411
label_6:
#line 411
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 411
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 412
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(239)));
#line 412
c_rt_lib0delete(nparser_priv0check_lvalue(___ref___0, ___nl__5));
#line 412
c_rt_lib0clear(&___nl__5);
#line 413
c_rt_lib0clear(&___nl__1);
#line 413
c_rt_lib0clear(&___nl__2);
#line 413
c_rt_lib0clear(&___nl__3);
#line 413
c_rt_lib0clear(&___nl__4);
#line 413
return NULL;
#line 414
goto label_5;
#line 414
label_5:
#line 414
c_rt_lib0clear(&___nl__4);
#line 414
c_rt_lib0clear(&___nl__3);
#line 415
goto label_3;
#line 415
label_3:
#line 415
c_rt_lib0clear(&___nl__2);
#line 416
c_rt_lib0move(&___nl__2,___get_global_const(906));
#line 416
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__2));
#line 416
c_rt_lib0clear(&___nl__2);
#line 416
c_rt_lib0clear(&___nl__1);
#line 416
return NULL;
}

ImmT nparser_priv0parse_variant_decl(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 420
c_rt_lib0move(&___nl__1,___get_global_const(375));
#line 420
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 420
c_rt_lib0clear(&___nl__1);
#line 421
c_rt_lib0move(&___nl__2, nparser_priv0parse_variant_label(___ref___0));
#line 421
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 421
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(78), ___nl__2, ___get_global_const(650), ___nl__3));
#line 421
c_rt_lib0clear(&___nl__2);
#line 421
c_rt_lib0clear(&___nl__3);
#line 422
c_rt_lib0move(&___nl__3,___get_global_const(326));
#line 422
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 422
c_rt_lib0clear(&___nl__3);
#line 422
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 422
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 423
c_rt_lib0move(&___nl__3, nparser_priv0parse_var_decl_sim(___ref___0));
#line 423
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(650), ___nl__3));
#line 423
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 423
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(650), ___nl__4);
#line 423
c_rt_lib0clear(&___nl__3);
#line 423
c_rt_lib0clear(&___nl__4);
#line 424
c_rt_lib0move(&___nl__3,___get_global_const(181));
#line 424
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__3));
#line 424
c_rt_lib0clear(&___nl__3);
#line 425
goto label_2;
#line 425
label_2:
#line 425
c_rt_lib0clear(&___nl__2);
#line 426
return ___nl__1;
#line 426
c_rt_lib0clear(&___nl__1);
#line 426
return NULL;
}

ImmT nparser_priv0parse_var_decl(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 430
c_rt_lib0move(&___nl__1,___get_global_const(796));
#line 430
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 430
c_rt_lib0clear(&___nl__1);
#line 431
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 431
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 431
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 431
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__2, ___get_global_const(73), ___nl__3, ___get_global_const(650), ___nl__4));
#line 431
c_rt_lib0clear(&___nl__2);
#line 431
c_rt_lib0clear(&___nl__3);
#line 431
c_rt_lib0clear(&___nl__4);
#line 432
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 432
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 432
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 432
c_rt_lib0move(&___nl__2, ntokenizer0is_type(&___nl__3, ___nl__4));
#line 432
c_rt_lib0clear(&___nl__4);
#line 432
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 432
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 432
c_rt_lib0clear(&___nl__4);
#line 432
c_rt_lib0clear(&___nl__3);
#line 432
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 432
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 433
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 433
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 433
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 433
c_rt_lib0move(&___nl__3, ntokenizer0eat_type(&___nl__4, ___nl__5));
#line 433
c_rt_lib0clear(&___nl__5);
#line 433
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 433
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 433
c_rt_lib0clear(&___nl__5);
#line 433
c_rt_lib0clear(&___nl__4);
#line 433
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 433
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(78), ___nl__4);
#line 433
c_rt_lib0clear(&___nl__3);
#line 433
c_rt_lib0clear(&___nl__4);
#line 434
goto label_1;
#line 434
label_2:
#line 435
c_rt_lib0move(&___nl__3,___get_global_const(907));
#line 435
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__3));
#line 435
c_rt_lib0clear(&___nl__3);
#line 436
goto label_1;
#line 436
label_1:
#line 436
c_rt_lib0clear(&___nl__2);
#line 437
c_rt_lib0move(&___nl__3,___get_global_const(375));
#line 437
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 437
c_rt_lib0clear(&___nl__3);
#line 437
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 437
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 438
c_rt_lib0move(&___nl__5, nparser_priv0parse_type(___ref___0));
#line 438
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 438
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 438
c_rt_lib0clear(&___nl__1);
#line 438
c_rt_lib0clear(&___nl__2);
#line 438
c_rt_lib0clear(&___nl__3);
#line 438
c_rt_lib0clear(&___nl__4);
#line 438
return ___nl__5;
#line 438
label_5:
#line 438
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 438
c_rt_lib0clear(&___nl__4);
#line 438
c_rt_lib0clear(&___nl__5);
#line 439
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(73), ___nl__3));
#line 439
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 439
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(73), ___nl__5);
#line 439
c_rt_lib0clear(&___nl__4);
#line 439
c_rt_lib0clear(&___nl__5);
#line 439
c_rt_lib0clear(&___nl__3);
#line 440
goto label_4;
#line 440
label_4:
#line 440
c_rt_lib0clear(&___nl__2);
#line 441
c_rt_lib0move(&___nl__3,___get_global_const(812));
#line 441
c_rt_lib0move(&___nl__2, nparser_priv0try_eat(___ref___0, ___nl__3));
#line 441
c_rt_lib0clear(&___nl__3);
#line 441
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 441
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 442
c_rt_lib0move(&___nl__5, nparser_priv0parse_expr(___ref___0));
#line 442
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 442
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 442
c_rt_lib0clear(&___nl__1);
#line 442
c_rt_lib0clear(&___nl__2);
#line 442
c_rt_lib0clear(&___nl__3);
#line 442
c_rt_lib0clear(&___nl__4);
#line 442
return ___nl__5;
#line 442
label_8:
#line 442
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 442
c_rt_lib0clear(&___nl__4);
#line 442
c_rt_lib0clear(&___nl__5);
#line 443
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(650), ___nl__3));
#line 443
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 443
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(650), ___nl__5);
#line 443
c_rt_lib0clear(&___nl__4);
#line 443
c_rt_lib0clear(&___nl__5);
#line 443
c_rt_lib0clear(&___nl__3);
#line 444
goto label_7;
#line 444
label_7:
#line 444
c_rt_lib0clear(&___nl__2);
#line 445
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 445
c_rt_lib0clear(&___nl__1);
#line 445
return ___nl__2;
#line 445
c_rt_lib0clear(&___nl__2);
#line 445
c_rt_lib0clear(&___nl__1);
#line 445
return NULL;
}

ImmT nparser_priv0parse_var_decl_sim(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 449
c_rt_lib0move(&___nl__1,___get_global_const(796));
#line 449
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 449
c_rt_lib0clear(&___nl__1);
#line 450
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 450
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 450
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 450
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__2, ___get_global_const(73), ___nl__3, ___get_global_const(650), ___nl__4));
#line 450
c_rt_lib0clear(&___nl__2);
#line 450
c_rt_lib0clear(&___nl__3);
#line 450
c_rt_lib0clear(&___nl__4);
#line 451
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 451
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 451
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 451
c_rt_lib0move(&___nl__2, ntokenizer0is_type(&___nl__3, ___nl__4));
#line 451
c_rt_lib0clear(&___nl__4);
#line 451
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 451
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 451
c_rt_lib0clear(&___nl__4);
#line 451
c_rt_lib0clear(&___nl__3);
#line 451
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 451
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 452
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 452
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 452
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(885)));
#line 452
c_rt_lib0move(&___nl__3, ntokenizer0eat_type(&___nl__4, ___nl__5));
#line 452
c_rt_lib0clear(&___nl__5);
#line 452
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 452
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 452
c_rt_lib0clear(&___nl__5);
#line 452
c_rt_lib0clear(&___nl__4);
#line 452
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 452
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(78), ___nl__4);
#line 452
c_rt_lib0clear(&___nl__3);
#line 452
c_rt_lib0clear(&___nl__4);
#line 453
goto label_1;
#line 453
label_2:
#line 454
c_rt_lib0move(&___nl__3,___get_global_const(907));
#line 454
c_rt_lib0delete(nparser_priv0add_error(___ref___0, ___nl__3));
#line 454
c_rt_lib0clear(&___nl__3);
#line 455
goto label_1;
#line 455
label_1:
#line 455
c_rt_lib0clear(&___nl__2);
#line 456
return ___nl__1;
#line 456
c_rt_lib0clear(&___nl__1);
#line 456
return NULL;
}

ImmT nparser_priv0parse_cond(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 460
c_rt_lib0move(&___nl__1,___get_global_const(326));
#line 460
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__1));
#line 460
c_rt_lib0clear(&___nl__1);
#line 461
c_rt_lib0move(&___nl__3, nparser_priv0parse_expr(___ref___0));
#line 461
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(45)));
#line 461
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 461
c_rt_lib0clear(&___nl__1);
#line 461
c_rt_lib0clear(&___nl__2);
#line 461
return ___nl__3;
#line 461
label_1:
#line 461
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(45)));
#line 461
c_rt_lib0clear(&___nl__2);
#line 461
c_rt_lib0clear(&___nl__3);
#line 462
c_rt_lib0move(&___nl__2,___get_global_const(181));
#line 462
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 462
c_rt_lib0clear(&___nl__2);
#line 463
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__1));
#line 463
c_rt_lib0clear(&___nl__1);
#line 463
return ___nl__2;
#line 463
c_rt_lib0clear(&___nl__2);
#line 463
c_rt_lib0clear(&___nl__1);
#line 463
return NULL;
}

ImmT nparser_priv0parse_block(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 467
c_rt_lib0move(&___nl__2,___get_global_const(874));
#line 467
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 467
c_rt_lib0move(&___nl__1, ntokenizer0get_place(&___nl__2));
#line 467
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 467
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 467
c_rt_lib0clear(&___nl__3);
#line 467
c_rt_lib0clear(&___nl__2);
#line 468
c_rt_lib0move(&___nl__2,___get_global_const(173));
#line 468
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__2));
#line 468
c_rt_lib0clear(&___nl__2);
#line 469
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 470
label_2:
#line 470
c_rt_lib0move(&___nl__4,___get_global_const(174));
#line 470
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 470
c_rt_lib0clear(&___nl__4);
#line 470
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 470
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 470
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 471
c_rt_lib0move(&___nl__5,___get_global_const(315));
#line 471
c_rt_lib0move(&___nl__4, nparser_priv0try_eat(___ref___0, ___nl__5));
#line 471
c_rt_lib0clear(&___nl__5);
#line 471
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 471
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 471
c_rt_lib0clear(&___nl__4);
#line 471
goto label_2;
#line 471
goto label_4;
#line 471
label_4:
#line 471
c_rt_lib0clear(&___nl__4);
#line 472
c_rt_lib0move(&___nl__6, nparser_priv0parse_cmd(___ref___0));
#line 472
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 472
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 472
c_rt_lib0clear(&___nl__1);
#line 472
c_rt_lib0clear(&___nl__2);
#line 472
c_rt_lib0clear(&___nl__3);
#line 472
c_rt_lib0clear(&___nl__4);
#line 472
c_rt_lib0clear(&___nl__5);
#line 472
return ___nl__6;
#line 472
label_5:
#line 472
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 472
c_rt_lib0clear(&___nl__5);
#line 472
c_rt_lib0clear(&___nl__6);
#line 473
c_rt_lib0delete(array0push(&___nl__2, ___nl__4));
#line 473
c_rt_lib0clear(&___nl__4);
#line 474
goto label_2;
#line 474
label_1:
#line 474
c_rt_lib0clear(&___nl__3);
#line 475
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 475
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 475
c_rt_lib0move(&___nl__3, ntokenizer0get_place_ws(&___nl__4));
#line 475
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 475
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 475
c_rt_lib0clear(&___nl__5);
#line 475
c_rt_lib0clear(&___nl__4);
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(400), ___nl__1, ___get_global_const(850), ___nl__3));
#line 477
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(775), ___nl__2));
#line 477
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(217), ___nl__4, ___get_global_const(214), ___nl__6));
#line 477
c_rt_lib0clear(&___nl__6);
#line 477
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__5));
#line 477
c_rt_lib0clear(&___nl__1);
#line 477
c_rt_lib0clear(&___nl__2);
#line 477
c_rt_lib0clear(&___nl__3);
#line 477
c_rt_lib0clear(&___nl__4);
#line 477
return ___nl__5;
#line 477
c_rt_lib0clear(&___nl__5);
#line 477
c_rt_lib0clear(&___nl__1);
#line 477
c_rt_lib0clear(&___nl__2);
#line 477
c_rt_lib0clear(&___nl__3);
#line 477
c_rt_lib0clear(&___nl__4);
#line 477
return NULL;
}

ImmT nparser_priv0parse_try_ensure(ImmT * ___ref___0) {
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 481
c_rt_lib0move(&___nl__2,___get_global_const(874));
#line 481
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 481
c_rt_lib0move(&___nl__3,___get_global_const(796));
#line 481
c_rt_lib0move(&___nl__1, ntokenizer0next_is(&___nl__2, ___nl__3));
#line 481
c_rt_lib0clear(&___nl__3);
#line 481
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 481
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 481
c_rt_lib0clear(&___nl__3);
#line 481
c_rt_lib0clear(&___nl__2);
#line 481
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 481
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 482
c_rt_lib0move(&___nl__4, nparser_priv0parse_var_decl(___ref___0));
#line 482
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 482
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 482
c_rt_lib0clear(&___nl__1);
#line 482
c_rt_lib0clear(&___nl__2);
#line 482
c_rt_lib0clear(&___nl__3);
#line 482
return ___nl__4;
#line 482
label_3:
#line 482
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__4, ___get_global_const(45)));
#line 482
c_rt_lib0clear(&___nl__3);
#line 482
c_rt_lib0clear(&___nl__4);
#line 483
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(793), ___nl__2));
#line 483
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__3));
#line 483
c_rt_lib0clear(&___nl__1);
#line 483
c_rt_lib0clear(&___nl__2);
#line 483
return ___nl__3;
#line 483
c_rt_lib0clear(&___nl__3);
#line 483
c_rt_lib0clear(&___nl__2);
#line 484
goto label_1;
#line 484
label_2:
#line 485
c_rt_lib0move(&___nl__4, nparser_priv0parse_expr(___ref___0));
#line 485
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 485
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 485
c_rt_lib0clear(&___nl__1);
#line 485
c_rt_lib0clear(&___nl__2);
#line 485
c_rt_lib0clear(&___nl__3);
#line 485
return ___nl__4;
#line 485
label_4:
#line 485
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__4, ___get_global_const(45)));
#line 485
c_rt_lib0clear(&___nl__3);
#line 485
c_rt_lib0clear(&___nl__4);
#line 486
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 486
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(223)));
#line 486
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 486
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 486
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 486
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(223)));
#line 486
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 486
c_rt_lib0move(&___nl__5,___get_global_const(812));
#line 486
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 486
c_rt_lib0clear(&___nl__5);
#line 486
label_7:
#line 486
c_rt_lib0clear(&___nl__4);
#line 486
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 486
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 487
c_rt_lib0copy(&___nl__4, ___nl__2);
#line 487
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(223)));
#line 487
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(794), ___nl__4));
#line 487
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__4));
#line 487
c_rt_lib0clear(&___nl__1);
#line 487
c_rt_lib0clear(&___nl__2);
#line 487
c_rt_lib0clear(&___nl__3);
#line 487
return ___nl__4;
#line 487
c_rt_lib0clear(&___nl__4);
#line 488
goto label_5;
#line 488
label_6:
#line 489
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(795), ___nl__2));
#line 489
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__4));
#line 489
c_rt_lib0clear(&___nl__1);
#line 489
c_rt_lib0clear(&___nl__2);
#line 489
c_rt_lib0clear(&___nl__3);
#line 489
return ___nl__4;
#line 489
c_rt_lib0clear(&___nl__4);
#line 490
goto label_5;
#line 490
label_5:
#line 490
c_rt_lib0clear(&___nl__3);
#line 490
c_rt_lib0clear(&___nl__2);
#line 491
goto label_1;
#line 491
label_1:
#line 491
c_rt_lib0clear(&___nl__1);
#line 491
return NULL;
}

ImmT nparser_priv0get_debug_from_begin(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
nparser_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 495
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 495
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(___nl__0, ___nl__3));
#line 495
c_rt_lib0move(&___nl__2, ntokenizer0get_place(&___nl__3));
#line 495
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 495
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__0, ___nl__4, ___nl__3));
#line 495
c_rt_lib0clear(&___nl__4);
#line 495
c_rt_lib0clear(&___nl__3);
#line 495
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 495
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__0, ___nl__4));
#line 495
c_rt_lib0move(&___nl__3, ntokenizer0get_place(&___nl__4));
#line 495
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 495
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__0, ___nl__5, ___nl__4));
#line 495
c_rt_lib0clear(&___nl__5);
#line 495
c_rt_lib0clear(&___nl__4);
#line 495
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(400), ___nl__2, ___get_global_const(850), ___nl__3));
#line 495
c_rt_lib0clear(&___nl__2);
#line 495
c_rt_lib0clear(&___nl__3);
#line 495
c_rt_lib0clear(&___nl__0);
#line 495
return ___nl__1;
#line 495
c_rt_lib0clear(&___nl__1);
#line 495
c_rt_lib0clear(&___nl__0);
#line 495
return NULL;
}

ImmT nparser_priv0parse_cmd(ImmT * ___ref___0) {
nparser_priv0__const__init();
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
#line 499
c_rt_lib0move(&___nl__2,___get_global_const(874));
#line 499
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 499
c_rt_lib0move(&___nl__1, ntokenizer0get_place(&___nl__2));
#line 499
c_rt_lib0move(&___nl__3,___get_global_const(874));
#line 499
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 499
c_rt_lib0clear(&___nl__3);
#line 499
c_rt_lib0clear(&___nl__2);
#line 501
c_rt_lib0move(&___nl__4,___get_global_const(764));
#line 501
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 501
c_rt_lib0clear(&___nl__4);
#line 501
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 501
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 502
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 503
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 503
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 503
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 503
c_rt_lib0clear(&___nl__1);
#line 503
c_rt_lib0clear(&___nl__2);
#line 503
c_rt_lib0clear(&___nl__3);
#line 503
c_rt_lib0clear(&___nl__4);
#line 503
c_rt_lib0clear(&___nl__5);
#line 503
return ___nl__6;
#line 503
label_3:
#line 503
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 503
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(779), ___nl__7);
#line 503
c_rt_lib0clear(&___nl__5);
#line 503
c_rt_lib0clear(&___nl__6);
#line 503
c_rt_lib0clear(&___nl__7);
#line 504
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 504
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 504
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 504
c_rt_lib0clear(&___nl__1);
#line 504
c_rt_lib0clear(&___nl__2);
#line 504
c_rt_lib0clear(&___nl__3);
#line 504
c_rt_lib0clear(&___nl__4);
#line 504
c_rt_lib0clear(&___nl__5);
#line 504
return ___nl__6;
#line 504
label_4:
#line 504
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 504
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(764), ___nl__7);
#line 504
c_rt_lib0clear(&___nl__5);
#line 504
c_rt_lib0clear(&___nl__6);
#line 504
c_rt_lib0clear(&___nl__7);
#line 505
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 506
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 506
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 506
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(780), ___nl__7);
#line 506
c_rt_lib0clear(&___nl__6);
#line 506
c_rt_lib0clear(&___nl__7);
#line 507
label_6:
#line 507
c_rt_lib0move(&___nl__7,___get_global_const(780));
#line 507
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 507
c_rt_lib0clear(&___nl__7);
#line 507
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 507
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 508
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 509
c_rt_lib0move(&___nl__9,___get_global_const(874));
#line 509
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 509
c_rt_lib0move(&___nl__8, ntokenizer0get_place(&___nl__9));
#line 509
c_rt_lib0move(&___nl__10,___get_global_const(874));
#line 509
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__10, ___nl__9));
#line 509
c_rt_lib0clear(&___nl__10);
#line 509
c_rt_lib0clear(&___nl__9);
#line 510
c_rt_lib0move(&___nl__10, nparser_priv0parse_cond(___ref___0));
#line 510
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(45)));
#line 510
if(c_rt_lib0check_true_native(___nl__9)){ goto label_7;}
#line 510
c_rt_lib0clear(&___nl__1);
#line 510
c_rt_lib0clear(&___nl__2);
#line 510
c_rt_lib0clear(&___nl__3);
#line 510
c_rt_lib0clear(&___nl__4);
#line 510
c_rt_lib0clear(&___nl__5);
#line 510
c_rt_lib0clear(&___nl__6);
#line 510
c_rt_lib0clear(&___nl__7);
#line 510
c_rt_lib0clear(&___nl__8);
#line 510
c_rt_lib0clear(&___nl__9);
#line 510
return ___nl__10;
#line 510
label_7:
#line 510
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__10, ___get_global_const(45)));
#line 510
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(779), ___nl__11);
#line 510
c_rt_lib0clear(&___nl__9);
#line 510
c_rt_lib0clear(&___nl__10);
#line 510
c_rt_lib0clear(&___nl__11);
#line 511
c_rt_lib0move(&___nl__10,___get_global_const(874));
#line 511
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___0, ___nl__10));
#line 511
c_rt_lib0move(&___nl__9, ntokenizer0get_place_ws(&___nl__10));
#line 511
c_rt_lib0move(&___nl__11,___get_global_const(874));
#line 511
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__10));
#line 511
c_rt_lib0clear(&___nl__11);
#line 511
c_rt_lib0clear(&___nl__10);
#line 512
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(400), ___nl__8, ___get_global_const(850), ___nl__9));
#line 512
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 512
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(217), ___nl__11);
#line 512
c_rt_lib0clear(&___nl__10);
#line 512
c_rt_lib0clear(&___nl__11);
#line 513
c_rt_lib0move(&___nl__11, nparser_priv0parse_block(___ref___0));
#line 513
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(45)));
#line 513
if(c_rt_lib0check_true_native(___nl__10)){ goto label_8;}
#line 513
c_rt_lib0clear(&___nl__1);
#line 513
c_rt_lib0clear(&___nl__2);
#line 513
c_rt_lib0clear(&___nl__3);
#line 513
c_rt_lib0clear(&___nl__4);
#line 513
c_rt_lib0clear(&___nl__5);
#line 513
c_rt_lib0clear(&___nl__6);
#line 513
c_rt_lib0clear(&___nl__7);
#line 513
c_rt_lib0clear(&___nl__8);
#line 513
c_rt_lib0clear(&___nl__9);
#line 513
c_rt_lib0clear(&___nl__10);
#line 513
return ___nl__11;
#line 513
label_8:
#line 513
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__11, ___get_global_const(45)));
#line 513
c_rt_lib0hash_set_value_dec(&___nl__7, ___get_global_const(214), ___nl__12);
#line 513
c_rt_lib0clear(&___nl__10);
#line 513
c_rt_lib0clear(&___nl__11);
#line 513
c_rt_lib0clear(&___nl__12);
#line 514
c_rt_lib0delete(array0push(&___nl__5, ___nl__7));
#line 514
c_rt_lib0clear(&___nl__7);
#line 514
c_rt_lib0clear(&___nl__8);
#line 514
c_rt_lib0clear(&___nl__9);
#line 515
goto label_6;
#line 515
label_5:
#line 515
c_rt_lib0clear(&___nl__6);
#line 516
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 516
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(780), ___nl__6);
#line 516
c_rt_lib0clear(&___nl__6);
#line 517
c_rt_lib0move(&___nl__7,___get_global_const(781));
#line 517
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 517
c_rt_lib0clear(&___nl__7);
#line 517
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 517
if(c_rt_lib0check_true_native(___nl__6)){ goto label_10;}
#line 518
c_rt_lib0move(&___nl__8, nparser_priv0parse_block(___ref___0));
#line 518
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 518
if(c_rt_lib0check_true_native(___nl__7)){ goto label_11;}
#line 518
c_rt_lib0clear(&___nl__1);
#line 518
c_rt_lib0clear(&___nl__2);
#line 518
c_rt_lib0clear(&___nl__3);
#line 518
c_rt_lib0clear(&___nl__4);
#line 518
c_rt_lib0clear(&___nl__5);
#line 518
c_rt_lib0clear(&___nl__6);
#line 518
c_rt_lib0clear(&___nl__7);
#line 518
return ___nl__8;
#line 518
label_11:
#line 518
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 518
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(781), ___nl__9);
#line 518
c_rt_lib0clear(&___nl__7);
#line 518
c_rt_lib0clear(&___nl__8);
#line 518
c_rt_lib0clear(&___nl__9);
#line 519
goto label_9;
#line 519
label_10:
#line 520
c_rt_lib0move(&___nl__8, nparser_priv0get_debug_from_begin(*___ref___0));
#line 520
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 520
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(217), ___nl__8, ___get_global_const(214), ___nl__9));
#line 520
c_rt_lib0clear(&___nl__8);
#line 520
c_rt_lib0clear(&___nl__9);
#line 520
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 520
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(781), ___nl__8);
#line 520
c_rt_lib0clear(&___nl__7);
#line 520
c_rt_lib0clear(&___nl__8);
#line 521
goto label_9;
#line 521
label_9:
#line 521
c_rt_lib0clear(&___nl__6);
#line 522
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(764), ___nl__4));
#line 522
c_rt_lib0copy(&___nl__2, ___nl__6);
#line 522
c_rt_lib0clear(&___nl__6);
#line 522
c_rt_lib0clear(&___nl__4);
#line 522
c_rt_lib0clear(&___nl__5);
#line 523
goto label_1;
#line 523
label_2:
#line 523
c_rt_lib0move(&___nl__4,___get_global_const(766));
#line 523
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 523
c_rt_lib0clear(&___nl__4);
#line 523
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 523
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 524
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 525
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 525
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 525
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(863), ___nl__6);
#line 525
c_rt_lib0clear(&___nl__5);
#line 525
c_rt_lib0clear(&___nl__6);
#line 526
c_rt_lib0move(&___nl__5, nparser_priv0parse_var_decl_sim(___ref___0));
#line 526
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 526
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(783), ___nl__6);
#line 526
c_rt_lib0clear(&___nl__5);
#line 526
c_rt_lib0clear(&___nl__6);
#line 527
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 527
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 527
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 527
c_rt_lib0clear(&___nl__1);
#line 527
c_rt_lib0clear(&___nl__2);
#line 527
c_rt_lib0clear(&___nl__3);
#line 527
c_rt_lib0clear(&___nl__4);
#line 527
c_rt_lib0clear(&___nl__5);
#line 527
return ___nl__6;
#line 527
label_13:
#line 527
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 527
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(3), ___nl__7);
#line 527
c_rt_lib0clear(&___nl__5);
#line 527
c_rt_lib0clear(&___nl__6);
#line 527
c_rt_lib0clear(&___nl__7);
#line 528
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 528
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 528
if(c_rt_lib0check_true_native(___nl__5)){ goto label_14;}
#line 528
c_rt_lib0clear(&___nl__1);
#line 528
c_rt_lib0clear(&___nl__2);
#line 528
c_rt_lib0clear(&___nl__3);
#line 528
c_rt_lib0clear(&___nl__4);
#line 528
c_rt_lib0clear(&___nl__5);
#line 528
return ___nl__6;
#line 528
label_14:
#line 528
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 528
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(214), ___nl__7);
#line 528
c_rt_lib0clear(&___nl__5);
#line 528
c_rt_lib0clear(&___nl__6);
#line 528
c_rt_lib0clear(&___nl__7);
#line 529
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(766), ___nl__4));
#line 529
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 529
c_rt_lib0clear(&___nl__5);
#line 529
c_rt_lib0clear(&___nl__4);
#line 530
goto label_1;
#line 530
label_12:
#line 530
c_rt_lib0move(&___nl__4,___get_global_const(768));
#line 530
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 530
c_rt_lib0clear(&___nl__4);
#line 530
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 530
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 531
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 532
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 532
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 532
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(863), ___nl__6);
#line 532
c_rt_lib0clear(&___nl__5);
#line 532
c_rt_lib0clear(&___nl__6);
#line 533
c_rt_lib0move(&___nl__5, nparser_priv0parse_var_decl_sim(___ref___0));
#line 533
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 533
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(783), ___nl__6);
#line 533
c_rt_lib0clear(&___nl__5);
#line 533
c_rt_lib0clear(&___nl__6);
#line 534
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 534
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 534
if(c_rt_lib0check_true_native(___nl__5)){ goto label_16;}
#line 534
c_rt_lib0clear(&___nl__1);
#line 534
c_rt_lib0clear(&___nl__2);
#line 534
c_rt_lib0clear(&___nl__3);
#line 534
c_rt_lib0clear(&___nl__4);
#line 534
c_rt_lib0clear(&___nl__5);
#line 534
return ___nl__6;
#line 534
label_16:
#line 534
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 534
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(784), ___nl__7);
#line 534
c_rt_lib0clear(&___nl__5);
#line 534
c_rt_lib0clear(&___nl__6);
#line 534
c_rt_lib0clear(&___nl__7);
#line 535
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 535
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 535
if(c_rt_lib0check_true_native(___nl__5)){ goto label_17;}
#line 535
c_rt_lib0clear(&___nl__1);
#line 535
c_rt_lib0clear(&___nl__2);
#line 535
c_rt_lib0clear(&___nl__3);
#line 535
c_rt_lib0clear(&___nl__4);
#line 535
c_rt_lib0clear(&___nl__5);
#line 535
return ___nl__6;
#line 535
label_17:
#line 535
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 535
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(214), ___nl__7);
#line 535
c_rt_lib0clear(&___nl__5);
#line 535
c_rt_lib0clear(&___nl__6);
#line 535
c_rt_lib0clear(&___nl__7);
#line 536
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(768), ___nl__4));
#line 536
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 536
c_rt_lib0clear(&___nl__5);
#line 536
c_rt_lib0clear(&___nl__4);
#line 537
goto label_1;
#line 537
label_15:
#line 537
c_rt_lib0move(&___nl__4,___get_global_const(119));
#line 537
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 537
c_rt_lib0clear(&___nl__4);
#line 537
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 537
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 538
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 538
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 538
if(c_rt_lib0check_true_native(___nl__5)){ goto label_19;}
#line 538
c_rt_lib0clear(&___nl__1);
#line 538
c_rt_lib0clear(&___nl__2);
#line 538
c_rt_lib0clear(&___nl__3);
#line 538
c_rt_lib0clear(&___nl__4);
#line 538
c_rt_lib0clear(&___nl__5);
#line 538
return ___nl__6;
#line 538
label_19:
#line 538
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 538
c_rt_lib0clear(&___nl__5);
#line 538
c_rt_lib0clear(&___nl__6);
#line 539
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(119), ___nl__4));
#line 539
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 539
c_rt_lib0clear(&___nl__5);
#line 539
c_rt_lib0clear(&___nl__4);
#line 540
goto label_1;
#line 540
label_18:
#line 540
c_rt_lib0move(&___nl__4,___get_global_const(767));
#line 540
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 540
c_rt_lib0clear(&___nl__4);
#line 540
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 540
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 541
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 542
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 542
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 542
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(863), ___nl__6);
#line 542
c_rt_lib0clear(&___nl__5);
#line 542
c_rt_lib0clear(&___nl__6);
#line 543
c_rt_lib0move(&___nl__5, nparser_priv0parse_var_decl_sim(___ref___0));
#line 543
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 543
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(283), ___nl__6);
#line 543
c_rt_lib0clear(&___nl__5);
#line 543
c_rt_lib0clear(&___nl__6);
#line 544
c_rt_lib0move(&___nl__5,___get_global_const(177));
#line 544
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 544
c_rt_lib0clear(&___nl__5);
#line 545
c_rt_lib0move(&___nl__5, nparser_priv0parse_var_decl_sim(___ref___0));
#line 545
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 545
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(238), ___nl__6);
#line 545
c_rt_lib0clear(&___nl__5);
#line 545
c_rt_lib0clear(&___nl__6);
#line 546
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 546
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 546
if(c_rt_lib0check_true_native(___nl__5)){ goto label_21;}
#line 546
c_rt_lib0clear(&___nl__1);
#line 546
c_rt_lib0clear(&___nl__2);
#line 546
c_rt_lib0clear(&___nl__3);
#line 546
c_rt_lib0clear(&___nl__4);
#line 546
c_rt_lib0clear(&___nl__5);
#line 546
return ___nl__6;
#line 546
label_21:
#line 546
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 546
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(282), ___nl__7);
#line 546
c_rt_lib0clear(&___nl__5);
#line 546
c_rt_lib0clear(&___nl__6);
#line 546
c_rt_lib0clear(&___nl__7);
#line 547
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 547
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 547
if(c_rt_lib0check_true_native(___nl__5)){ goto label_22;}
#line 547
c_rt_lib0clear(&___nl__1);
#line 547
c_rt_lib0clear(&___nl__2);
#line 547
c_rt_lib0clear(&___nl__3);
#line 547
c_rt_lib0clear(&___nl__4);
#line 547
c_rt_lib0clear(&___nl__5);
#line 547
return ___nl__6;
#line 547
label_22:
#line 547
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 547
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(214), ___nl__7);
#line 547
c_rt_lib0clear(&___nl__5);
#line 547
c_rt_lib0clear(&___nl__6);
#line 547
c_rt_lib0clear(&___nl__7);
#line 548
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(767), ___nl__4));
#line 548
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 548
c_rt_lib0clear(&___nl__5);
#line 548
c_rt_lib0clear(&___nl__4);
#line 549
goto label_1;
#line 549
label_20:
#line 549
c_rt_lib0move(&___nl__4,___get_global_const(769));
#line 549
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 549
c_rt_lib0clear(&___nl__4);
#line 549
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 549
if(c_rt_lib0check_true_native(___nl__3)){ goto label_23;}
#line 550
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 551
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 551
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 551
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(863), ___nl__6);
#line 551
c_rt_lib0clear(&___nl__5);
#line 551
c_rt_lib0clear(&___nl__6);
#line 552
c_rt_lib0move(&___nl__6, nparser_priv0parse_cond(___ref___0));
#line 552
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 552
if(c_rt_lib0check_true_native(___nl__5)){ goto label_24;}
#line 552
c_rt_lib0clear(&___nl__1);
#line 552
c_rt_lib0clear(&___nl__2);
#line 552
c_rt_lib0clear(&___nl__3);
#line 552
c_rt_lib0clear(&___nl__4);
#line 552
c_rt_lib0clear(&___nl__5);
#line 552
return ___nl__6;
#line 552
label_24:
#line 552
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 552
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(779), ___nl__7);
#line 552
c_rt_lib0clear(&___nl__5);
#line 552
c_rt_lib0clear(&___nl__6);
#line 552
c_rt_lib0clear(&___nl__7);
#line 553
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 553
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 553
if(c_rt_lib0check_true_native(___nl__5)){ goto label_25;}
#line 553
c_rt_lib0clear(&___nl__1);
#line 553
c_rt_lib0clear(&___nl__2);
#line 553
c_rt_lib0clear(&___nl__3);
#line 553
c_rt_lib0clear(&___nl__4);
#line 553
c_rt_lib0clear(&___nl__5);
#line 553
return ___nl__6;
#line 553
label_25:
#line 553
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 553
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(214), ___nl__7);
#line 553
c_rt_lib0clear(&___nl__5);
#line 553
c_rt_lib0clear(&___nl__6);
#line 553
c_rt_lib0clear(&___nl__7);
#line 554
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(769), ___nl__4));
#line 554
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 554
c_rt_lib0clear(&___nl__5);
#line 554
c_rt_lib0clear(&___nl__4);
#line 555
goto label_1;
#line 555
label_23:
#line 555
c_rt_lib0move(&___nl__4,___get_global_const(765));
#line 555
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 555
c_rt_lib0clear(&___nl__4);
#line 555
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 555
if(c_rt_lib0check_true_native(___nl__3)){ goto label_26;}
#line 556
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 557
c_rt_lib0move(&___nl__5,___get_global_const(326));
#line 557
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 557
c_rt_lib0clear(&___nl__5);
#line 558
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 558
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 558
c_rt_lib0move(&___nl__7,___get_global_const(796));
#line 558
c_rt_lib0move(&___nl__5, ntokenizer0next_is(&___nl__6, ___nl__7));
#line 558
c_rt_lib0clear(&___nl__7);
#line 558
c_rt_lib0move(&___nl__7,___get_global_const(874));
#line 558
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 558
c_rt_lib0clear(&___nl__7);
#line 558
c_rt_lib0clear(&___nl__6);
#line 558
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 558
if(c_rt_lib0check_true_native(___nl__5)){ goto label_28;}
#line 559
c_rt_lib0move(&___nl__8, nparser_priv0parse_var_decl(___ref___0));
#line 559
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 559
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
#line 559
c_rt_lib0clear(&___nl__1);
#line 559
c_rt_lib0clear(&___nl__2);
#line 559
c_rt_lib0clear(&___nl__3);
#line 559
c_rt_lib0clear(&___nl__4);
#line 559
c_rt_lib0clear(&___nl__5);
#line 559
c_rt_lib0clear(&___nl__6);
#line 559
c_rt_lib0clear(&___nl__7);
#line 559
return ___nl__8;
#line 559
label_29:
#line 559
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 559
c_rt_lib0clear(&___nl__7);
#line 559
c_rt_lib0clear(&___nl__8);
#line 560
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(776), ___nl__6));
#line 560
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 560
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(782), ___nl__8);
#line 560
c_rt_lib0clear(&___nl__7);
#line 560
c_rt_lib0clear(&___nl__8);
#line 560
c_rt_lib0clear(&___nl__6);
#line 561
goto label_27;
#line 561
label_28:
#line 561
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 561
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 561
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 561
c_rt_lib0move(&___nl__5, ntokenizer0next_is(&___nl__6, ___nl__7));
#line 561
c_rt_lib0clear(&___nl__7);
#line 561
c_rt_lib0move(&___nl__7,___get_global_const(874));
#line 561
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 561
c_rt_lib0clear(&___nl__7);
#line 561
c_rt_lib0clear(&___nl__6);
#line 561
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 561
if(c_rt_lib0check_true_native(___nl__5)){ goto label_30;}
#line 562
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 562
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(650), ___nl__6));
#line 562
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 562
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(782), ___nl__7);
#line 562
c_rt_lib0clear(&___nl__6);
#line 562
c_rt_lib0clear(&___nl__7);
#line 563
goto label_27;
#line 563
label_30:
#line 564
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 564
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 564
if(c_rt_lib0check_true_native(___nl__7)){ goto label_31;}
#line 564
c_rt_lib0clear(&___nl__1);
#line 564
c_rt_lib0clear(&___nl__2);
#line 564
c_rt_lib0clear(&___nl__3);
#line 564
c_rt_lib0clear(&___nl__4);
#line 564
c_rt_lib0clear(&___nl__5);
#line 564
c_rt_lib0clear(&___nl__6);
#line 564
c_rt_lib0clear(&___nl__7);
#line 564
return ___nl__8;
#line 564
label_31:
#line 564
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 564
c_rt_lib0clear(&___nl__7);
#line 564
c_rt_lib0clear(&___nl__8);
#line 565
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(650), ___nl__6));
#line 565
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 565
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(782), ___nl__8);
#line 565
c_rt_lib0clear(&___nl__7);
#line 565
c_rt_lib0clear(&___nl__8);
#line 565
c_rt_lib0clear(&___nl__6);
#line 566
goto label_27;
#line 566
label_27:
#line 566
c_rt_lib0clear(&___nl__5);
#line 567
c_rt_lib0move(&___nl__5,___get_global_const(315));
#line 567
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 567
c_rt_lib0clear(&___nl__5);
#line 568
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 568
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 568
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(779), ___nl__6);
#line 568
c_rt_lib0clear(&___nl__5);
#line 568
c_rt_lib0clear(&___nl__6);
#line 569
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 569
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 569
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 569
c_rt_lib0move(&___nl__5, ntokenizer0next_is(&___nl__6, ___nl__7));
#line 569
c_rt_lib0clear(&___nl__7);
#line 569
c_rt_lib0move(&___nl__7,___get_global_const(874));
#line 569
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 569
c_rt_lib0clear(&___nl__7);
#line 569
c_rt_lib0clear(&___nl__6);
#line 569
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 569
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 569
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 569
c_rt_lib0move(&___nl__7, nparser_priv0parse_expr(___ref___0));
#line 569
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(45)));
#line 569
if(c_rt_lib0check_true_native(___nl__6)){ goto label_34;}
#line 569
c_rt_lib0clear(&___nl__1);
#line 569
c_rt_lib0clear(&___nl__2);
#line 569
c_rt_lib0clear(&___nl__3);
#line 569
c_rt_lib0clear(&___nl__4);
#line 569
c_rt_lib0clear(&___nl__5);
#line 569
c_rt_lib0clear(&___nl__6);
#line 569
return ___nl__7;
#line 569
label_34:
#line 569
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__7, ___get_global_const(45)));
#line 569
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(779), ___nl__8);
#line 569
c_rt_lib0clear(&___nl__6);
#line 569
c_rt_lib0clear(&___nl__7);
#line 569
c_rt_lib0clear(&___nl__8);
#line 569
goto label_33;
#line 569
label_33:
#line 569
c_rt_lib0clear(&___nl__5);
#line 570
c_rt_lib0move(&___nl__5,___get_global_const(315));
#line 570
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 570
c_rt_lib0clear(&___nl__5);
#line 571
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 571
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 571
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(783), ___nl__6);
#line 571
c_rt_lib0clear(&___nl__5);
#line 571
c_rt_lib0clear(&___nl__6);
#line 572
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 572
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 572
c_rt_lib0move(&___nl__7,___get_global_const(181));
#line 572
c_rt_lib0move(&___nl__5, ntokenizer0next_is(&___nl__6, ___nl__7));
#line 572
c_rt_lib0clear(&___nl__7);
#line 572
c_rt_lib0move(&___nl__7,___get_global_const(874));
#line 572
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 572
c_rt_lib0clear(&___nl__7);
#line 572
c_rt_lib0clear(&___nl__6);
#line 572
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 572
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 572
if(c_rt_lib0check_true_native(___nl__5)){ goto label_36;}
#line 572
c_rt_lib0move(&___nl__7, nparser_priv0parse_expr(___ref___0));
#line 572
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(45)));
#line 572
if(c_rt_lib0check_true_native(___nl__6)){ goto label_37;}
#line 572
c_rt_lib0clear(&___nl__1);
#line 572
c_rt_lib0clear(&___nl__2);
#line 572
c_rt_lib0clear(&___nl__3);
#line 572
c_rt_lib0clear(&___nl__4);
#line 572
c_rt_lib0clear(&___nl__5);
#line 572
c_rt_lib0clear(&___nl__6);
#line 572
return ___nl__7;
#line 572
label_37:
#line 572
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__7, ___get_global_const(45)));
#line 572
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(783), ___nl__8);
#line 572
c_rt_lib0clear(&___nl__6);
#line 572
c_rt_lib0clear(&___nl__7);
#line 572
c_rt_lib0clear(&___nl__8);
#line 572
goto label_36;
#line 572
label_36:
#line 572
c_rt_lib0clear(&___nl__5);
#line 573
c_rt_lib0move(&___nl__5,___get_global_const(181));
#line 573
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 573
c_rt_lib0clear(&___nl__5);
#line 574
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 574
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 574
if(c_rt_lib0check_true_native(___nl__5)){ goto label_38;}
#line 574
c_rt_lib0clear(&___nl__1);
#line 574
c_rt_lib0clear(&___nl__2);
#line 574
c_rt_lib0clear(&___nl__3);
#line 574
c_rt_lib0clear(&___nl__4);
#line 574
c_rt_lib0clear(&___nl__5);
#line 574
return ___nl__6;
#line 574
label_38:
#line 574
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 574
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(214), ___nl__7);
#line 574
c_rt_lib0clear(&___nl__5);
#line 574
c_rt_lib0clear(&___nl__6);
#line 574
c_rt_lib0clear(&___nl__7);
#line 575
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(765), ___nl__4));
#line 575
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 575
c_rt_lib0clear(&___nl__5);
#line 575
c_rt_lib0clear(&___nl__4);
#line 576
goto label_1;
#line 576
label_26:
#line 576
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 576
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 576
c_rt_lib0move(&___nl__5,___get_global_const(173));
#line 576
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 576
c_rt_lib0clear(&___nl__5);
#line 576
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 576
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 576
c_rt_lib0clear(&___nl__5);
#line 576
c_rt_lib0clear(&___nl__4);
#line 576
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 576
if(c_rt_lib0check_true_native(___nl__3)){ goto label_39;}
#line 577
c_rt_lib0move(&___nl__6, nparser_priv0parse_block(___ref___0));
#line 577
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 577
if(c_rt_lib0check_true_native(___nl__5)){ goto label_40;}
#line 577
c_rt_lib0clear(&___nl__1);
#line 577
c_rt_lib0clear(&___nl__2);
#line 577
c_rt_lib0clear(&___nl__3);
#line 577
c_rt_lib0clear(&___nl__4);
#line 577
c_rt_lib0clear(&___nl__5);
#line 577
return ___nl__6;
#line 577
label_40:
#line 577
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 577
c_rt_lib0clear(&___nl__5);
#line 577
c_rt_lib0clear(&___nl__6);
#line 578
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(214)));
#line 578
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 578
c_rt_lib0clear(&___nl__5);
#line 578
c_rt_lib0clear(&___nl__4);
#line 579
goto label_1;
#line 579
label_39:
#line 579
c_rt_lib0move(&___nl__4,___get_global_const(772));
#line 579
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 579
c_rt_lib0clear(&___nl__4);
#line 579
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 579
if(c_rt_lib0check_true_native(___nl__3)){ goto label_41;}
#line 580
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(772)));
#line 580
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 580
c_rt_lib0clear(&___nl__4);
#line 581
goto label_1;
#line 581
label_41:
#line 581
c_rt_lib0move(&___nl__4,___get_global_const(773));
#line 581
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 581
c_rt_lib0clear(&___nl__4);
#line 581
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 581
if(c_rt_lib0check_true_native(___nl__3)){ goto label_42;}
#line 582
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(773)));
#line 582
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 582
c_rt_lib0clear(&___nl__4);
#line 583
goto label_1;
#line 583
label_42:
#line 583
c_rt_lib0move(&___nl__4,___get_global_const(75));
#line 583
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 583
c_rt_lib0clear(&___nl__4);
#line 583
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 583
if(c_rt_lib0check_true_native(___nl__3)){ goto label_43;}
#line 584
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 584
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 584
c_rt_lib0move(&___nl__4, ntokenizer0get_token(&___nl__5));
#line 584
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 584
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 584
c_rt_lib0clear(&___nl__6);
#line 584
c_rt_lib0clear(&___nl__5);
#line 585
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 586
c_rt_lib0move(&___nl__6, nparser_priv0get_end_list());
#line 586
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 586
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 586
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 586
label_46:
#line 586
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 586
if(c_rt_lib0check_true_native(___nl__11)){ goto label_44;}
#line 586
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 587
c_rt_lib0move(&___nl__12, c_rt_lib0eq(___nl__4, ___nl__7));
#line 587
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 587
if(c_rt_lib0check_true_native(___nl__12)){ goto label_48;}
#line 588
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 588
c_rt_lib0copy(&___nl__5, ___nl__13);
#line 588
c_rt_lib0clear(&___nl__13);
#line 589
c_rt_lib0clear(&___nl__12);
#line 589
goto label_44;
#line 590
goto label_48;
#line 590
label_48:
#line 590
c_rt_lib0clear(&___nl__12);
#line 591
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 591
goto label_46;
#line 591
label_44:
#line 591
c_rt_lib0clear(&___nl__6);
#line 591
c_rt_lib0clear(&___nl__7);
#line 591
c_rt_lib0clear(&___nl__8);
#line 591
c_rt_lib0clear(&___nl__9);
#line 591
c_rt_lib0clear(&___nl__10);
#line 591
c_rt_lib0clear(&___nl__11);
#line 592
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 592
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 592
if(c_rt_lib0check_true_native(___nl__6)){ goto label_50;}
#line 593
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 593
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(75), ___nl__7));
#line 593
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 593
c_rt_lib0clear(&___nl__7);
#line 594
goto label_49;
#line 594
label_50:
#line 595
c_rt_lib0move(&___nl__9, nparser_priv0parse_expr(___ref___0));
#line 595
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__9, ___get_global_const(45)));
#line 595
if(c_rt_lib0check_true_native(___nl__8)){ goto label_51;}
#line 595
c_rt_lib0clear(&___nl__1);
#line 595
c_rt_lib0clear(&___nl__2);
#line 595
c_rt_lib0clear(&___nl__3);
#line 595
c_rt_lib0clear(&___nl__4);
#line 595
c_rt_lib0clear(&___nl__5);
#line 595
c_rt_lib0clear(&___nl__6);
#line 595
c_rt_lib0clear(&___nl__7);
#line 595
c_rt_lib0clear(&___nl__8);
#line 595
return ___nl__9;
#line 595
label_51:
#line 595
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__9, ___get_global_const(45)));
#line 595
c_rt_lib0clear(&___nl__8);
#line 595
c_rt_lib0clear(&___nl__9);
#line 596
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(75), ___nl__7));
#line 596
c_rt_lib0copy(&___nl__2, ___nl__8);
#line 596
c_rt_lib0clear(&___nl__8);
#line 596
c_rt_lib0clear(&___nl__7);
#line 597
goto label_49;
#line 597
label_49:
#line 597
c_rt_lib0clear(&___nl__6);
#line 597
c_rt_lib0clear(&___nl__4);
#line 597
c_rt_lib0clear(&___nl__5);
#line 598
goto label_1;
#line 598
label_43:
#line 598
c_rt_lib0move(&___nl__4,___get_global_const(774));
#line 598
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 598
c_rt_lib0clear(&___nl__4);
#line 598
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 598
if(c_rt_lib0check_true_native(___nl__3)){ goto label_52;}
#line 599
c_rt_lib0move(&___nl__4,___get_global_const(326));
#line 599
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 599
c_rt_lib0clear(&___nl__4);
#line 600
c_rt_lib0move(&___nl__6, nparser_priv0parse_expr(___ref___0));
#line 600
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 600
if(c_rt_lib0check_true_native(___nl__5)){ goto label_53;}
#line 600
c_rt_lib0clear(&___nl__1);
#line 600
c_rt_lib0clear(&___nl__2);
#line 600
c_rt_lib0clear(&___nl__3);
#line 600
c_rt_lib0clear(&___nl__4);
#line 600
c_rt_lib0clear(&___nl__5);
#line 600
return ___nl__6;
#line 600
label_53:
#line 600
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 600
c_rt_lib0clear(&___nl__5);
#line 600
c_rt_lib0clear(&___nl__6);
#line 601
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 601
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(238), ___nl__4, ___get_global_const(787), ___nl__6));
#line 601
c_rt_lib0clear(&___nl__6);
#line 602
c_rt_lib0move(&___nl__6,___get_global_const(181));
#line 602
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__6));
#line 602
c_rt_lib0clear(&___nl__6);
#line 603
c_rt_lib0move(&___nl__7,___get_global_const(874));
#line 603
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 603
c_rt_lib0move(&___nl__6, ntokenizer0get_place(&___nl__7));
#line 603
c_rt_lib0move(&___nl__8,___get_global_const(874));
#line 603
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__7));
#line 603
c_rt_lib0clear(&___nl__8);
#line 603
c_rt_lib0clear(&___nl__7);
#line 604
label_55:
#line 604
c_rt_lib0move(&___nl__8,___get_global_const(847));
#line 604
c_rt_lib0move(&___nl__7, nparser_priv0try_eat(___ref___0, ___nl__8));
#line 604
c_rt_lib0clear(&___nl__8);
#line 604
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 604
if(c_rt_lib0check_true_native(___nl__7)){ goto label_54;}
#line 605
c_rt_lib0move(&___nl__9, nparser_priv0parse_variant_decl(___ref___0));
#line 605
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(1, ___get_global_const(788), ___nl__9));
#line 605
c_rt_lib0clear(&___nl__9);
#line 606
c_rt_lib0move(&___nl__11,___get_global_const(874));
#line 606
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(*___ref___0, ___nl__11));
#line 606
c_rt_lib0move(&___nl__10, ntokenizer0get_place_ws(&___nl__11));
#line 606
c_rt_lib0move(&___nl__12,___get_global_const(874));
#line 606
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__12, ___nl__11));
#line 606
c_rt_lib0clear(&___nl__12);
#line 606
c_rt_lib0clear(&___nl__11);
#line 606
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(400), ___nl__6, ___get_global_const(850), ___nl__10));
#line 606
c_rt_lib0clear(&___nl__10);
#line 606
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 606
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(217), ___nl__10);
#line 606
c_rt_lib0clear(&___nl__9);
#line 606
c_rt_lib0clear(&___nl__10);
#line 607
c_rt_lib0move(&___nl__10, nparser_priv0parse_block(___ref___0));
#line 607
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__10, ___get_global_const(45)));
#line 607
if(c_rt_lib0check_true_native(___nl__9)){ goto label_56;}
#line 607
c_rt_lib0clear(&___nl__1);
#line 607
c_rt_lib0clear(&___nl__2);
#line 607
c_rt_lib0clear(&___nl__3);
#line 607
c_rt_lib0clear(&___nl__4);
#line 607
c_rt_lib0clear(&___nl__5);
#line 607
c_rt_lib0clear(&___nl__6);
#line 607
c_rt_lib0clear(&___nl__7);
#line 607
c_rt_lib0clear(&___nl__8);
#line 607
c_rt_lib0clear(&___nl__9);
#line 607
return ___nl__10;
#line 607
label_56:
#line 607
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__10, ___get_global_const(45)));
#line 607
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(214), ___nl__11);
#line 607
c_rt_lib0clear(&___nl__9);
#line 607
c_rt_lib0clear(&___nl__10);
#line 607
c_rt_lib0clear(&___nl__11);
#line 608
c_rt_lib0move(&___nl__9,___get_global_const(787));
#line 608
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__5, ___nl__9));
#line 608
c_rt_lib0delete(array0push(&___nl__9, ___nl__8));
#line 608
c_rt_lib0move(&___nl__10,___get_global_const(787));
#line 608
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__10, ___nl__9));
#line 608
c_rt_lib0clear(&___nl__10);
#line 608
c_rt_lib0clear(&___nl__9);
#line 609
c_rt_lib0move(&___nl__10,___get_global_const(874));
#line 609
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___0, ___nl__10));
#line 609
c_rt_lib0move(&___nl__9, ntokenizer0get_place(&___nl__10));
#line 609
c_rt_lib0move(&___nl__11,___get_global_const(874));
#line 609
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__10));
#line 609
c_rt_lib0clear(&___nl__11);
#line 609
c_rt_lib0clear(&___nl__10);
#line 609
c_rt_lib0copy(&___nl__6, ___nl__9);
#line 609
c_rt_lib0clear(&___nl__9);
#line 609
c_rt_lib0clear(&___nl__8);
#line 610
goto label_55;
#line 610
label_54:
#line 610
c_rt_lib0clear(&___nl__7);
#line 611
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(774), ___nl__5));
#line 611
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 611
c_rt_lib0clear(&___nl__7);
#line 611
c_rt_lib0clear(&___nl__4);
#line 611
c_rt_lib0clear(&___nl__5);
#line 611
c_rt_lib0clear(&___nl__6);
#line 612
goto label_1;
#line 612
label_52:
#line 612
c_rt_lib0move(&___nl__4,___get_global_const(233));
#line 612
c_rt_lib0move(&___nl__3, nparser_priv0try_eat(___ref___0, ___nl__4));
#line 612
c_rt_lib0clear(&___nl__4);
#line 612
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 612
if(c_rt_lib0check_true_native(___nl__3)){ goto label_57;}
#line 613
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 614
c_rt_lib0move(&___nl__6,___get_global_const(326));
#line 614
c_rt_lib0move(&___nl__5, nparser_priv0try_eat(___ref___0, ___nl__6));
#line 614
c_rt_lib0clear(&___nl__6);
#line 614
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 614
if(c_rt_lib0check_true_native(___nl__5)){ goto label_59;}
#line 615
c_rt_lib0move(&___nl__7, nparser_priv0parse_expr_list(___ref___0));
#line 615
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__7, ___get_global_const(45)));
#line 615
if(c_rt_lib0check_true_native(___nl__6)){ goto label_60;}
#line 615
c_rt_lib0clear(&___nl__1);
#line 615
c_rt_lib0clear(&___nl__2);
#line 615
c_rt_lib0clear(&___nl__3);
#line 615
c_rt_lib0clear(&___nl__4);
#line 615
c_rt_lib0clear(&___nl__5);
#line 615
c_rt_lib0clear(&___nl__6);
#line 615
return ___nl__7;
#line 615
label_60:
#line 615
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__7, ___get_global_const(45)));
#line 615
c_rt_lib0clear(&___nl__6);
#line 615
c_rt_lib0clear(&___nl__7);
#line 616
goto label_59;
#line 616
label_59:
#line 616
c_rt_lib0clear(&___nl__5);
#line 617
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__4));
#line 617
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 617
c_rt_lib0clear(&___nl__5);
#line 617
c_rt_lib0clear(&___nl__4);
#line 618
goto label_1;
#line 618
label_57:
#line 618
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 618
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 618
c_rt_lib0move(&___nl__5,___get_global_const(796));
#line 618
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 618
c_rt_lib0clear(&___nl__5);
#line 618
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 618
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 618
c_rt_lib0clear(&___nl__5);
#line 618
c_rt_lib0clear(&___nl__4);
#line 618
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 618
if(c_rt_lib0check_true_native(___nl__3)){ goto label_61;}
#line 619
c_rt_lib0move(&___nl__6, nparser_priv0parse_var_decl(___ref___0));
#line 619
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 619
if(c_rt_lib0check_true_native(___nl__5)){ goto label_62;}
#line 619
c_rt_lib0clear(&___nl__1);
#line 619
c_rt_lib0clear(&___nl__2);
#line 619
c_rt_lib0clear(&___nl__3);
#line 619
c_rt_lib0clear(&___nl__4);
#line 619
c_rt_lib0clear(&___nl__5);
#line 619
return ___nl__6;
#line 619
label_62:
#line 619
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 619
c_rt_lib0clear(&___nl__5);
#line 619
c_rt_lib0clear(&___nl__6);
#line 620
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(776), ___nl__4));
#line 620
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 620
c_rt_lib0clear(&___nl__5);
#line 621
c_rt_lib0move(&___nl__5,___get_global_const(315));
#line 621
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__5));
#line 621
c_rt_lib0clear(&___nl__5);
#line 621
c_rt_lib0clear(&___nl__4);
#line 622
goto label_1;
#line 622
label_61:
#line 622
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 622
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 622
c_rt_lib0move(&___nl__5,___get_global_const(777));
#line 622
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 622
c_rt_lib0clear(&___nl__5);
#line 622
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 622
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 622
c_rt_lib0clear(&___nl__5);
#line 622
c_rt_lib0clear(&___nl__4);
#line 622
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 622
if(c_rt_lib0check_true_native(___nl__3)){ goto label_63;}
#line 623
c_rt_lib0move(&___nl__4,___get_global_const(777));
#line 623
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 623
c_rt_lib0clear(&___nl__4);
#line 624
c_rt_lib0move(&___nl__6, nparser_priv0parse_try_ensure(___ref___0));
#line 624
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 624
if(c_rt_lib0check_true_native(___nl__5)){ goto label_64;}
#line 624
c_rt_lib0clear(&___nl__1);
#line 624
c_rt_lib0clear(&___nl__2);
#line 624
c_rt_lib0clear(&___nl__3);
#line 624
c_rt_lib0clear(&___nl__4);
#line 624
c_rt_lib0clear(&___nl__5);
#line 624
return ___nl__6;
#line 624
label_64:
#line 624
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 624
c_rt_lib0clear(&___nl__5);
#line 624
c_rt_lib0clear(&___nl__6);
#line 625
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(777), ___nl__4));
#line 625
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 625
c_rt_lib0clear(&___nl__5);
#line 625
c_rt_lib0clear(&___nl__4);
#line 626
goto label_1;
#line 626
label_63:
#line 626
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 626
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 626
c_rt_lib0move(&___nl__5,___get_global_const(80));
#line 626
c_rt_lib0move(&___nl__3, ntokenizer0next_is(&___nl__4, ___nl__5));
#line 626
c_rt_lib0clear(&___nl__5);
#line 626
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 626
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 626
c_rt_lib0clear(&___nl__5);
#line 626
c_rt_lib0clear(&___nl__4);
#line 626
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 626
if(c_rt_lib0check_true_native(___nl__3)){ goto label_65;}
#line 627
c_rt_lib0move(&___nl__4,___get_global_const(80));
#line 627
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__4));
#line 627
c_rt_lib0clear(&___nl__4);
#line 628
c_rt_lib0move(&___nl__6, nparser_priv0parse_try_ensure(___ref___0));
#line 628
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 628
if(c_rt_lib0check_true_native(___nl__5)){ goto label_66;}
#line 628
c_rt_lib0clear(&___nl__1);
#line 628
c_rt_lib0clear(&___nl__2);
#line 628
c_rt_lib0clear(&___nl__3);
#line 628
c_rt_lib0clear(&___nl__4);
#line 628
c_rt_lib0clear(&___nl__5);
#line 628
return ___nl__6;
#line 628
label_66:
#line 628
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 628
c_rt_lib0clear(&___nl__5);
#line 628
c_rt_lib0clear(&___nl__6);
#line 629
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__4));
#line 629
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 629
c_rt_lib0clear(&___nl__5);
#line 629
c_rt_lib0clear(&___nl__4);
#line 630
goto label_1;
#line 630
label_65:
#line 631
c_rt_lib0move(&___nl__6, nparser_priv0parse_expr(___ref___0));
#line 631
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 631
if(c_rt_lib0check_true_native(___nl__5)){ goto label_67;}
#line 631
c_rt_lib0clear(&___nl__1);
#line 631
c_rt_lib0clear(&___nl__2);
#line 631
c_rt_lib0clear(&___nl__3);
#line 631
c_rt_lib0clear(&___nl__4);
#line 631
c_rt_lib0clear(&___nl__5);
#line 631
return ___nl__6;
#line 631
label_67:
#line 631
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 631
c_rt_lib0clear(&___nl__5);
#line 631
c_rt_lib0clear(&___nl__6);
#line 632
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(650), ___nl__4));
#line 632
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 632
c_rt_lib0clear(&___nl__5);
#line 632
c_rt_lib0clear(&___nl__4);
#line 633
goto label_1;
#line 633
label_1:
#line 633
c_rt_lib0clear(&___nl__3);
#line 634
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 634
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(772)));
#line 634
if(c_rt_lib0check_true_native(___nl__3)){ goto label_75;}
#line 634
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 634
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(773)));
#line 634
label_75:
#line 634
if(c_rt_lib0check_true_native(___nl__3)){ goto label_74;}
#line 634
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 634
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(650)));
#line 634
label_74:
#line 634
if(c_rt_lib0check_true_native(___nl__3)){ goto label_73;}
#line 634
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 634
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(75)));
#line 634
label_73:
#line 634
if(c_rt_lib0check_true_native(___nl__3)){ goto label_72;}
#line 634
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 634
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(233)));
#line 634
label_72:
#line 634
if(c_rt_lib0check_true_native(___nl__3)){ goto label_71;}
#line 634
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 634
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(80)));
#line 634
label_71:
#line 634
if(c_rt_lib0check_true_native(___nl__3)){ goto label_70;}
#line 634
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 634
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(777)));
#line 634
label_70:
#line 634
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 634
if(c_rt_lib0check_true_native(___nl__3)){ goto label_69;}
#line 636
c_rt_lib0move(&___nl__6,___get_global_const(874));
#line 636
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 636
c_rt_lib0move(&___nl__5, ntokenizer0get_place_ws(&___nl__6));
#line 636
c_rt_lib0move(&___nl__7,___get_global_const(874));
#line 636
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 636
c_rt_lib0clear(&___nl__7);
#line 636
c_rt_lib0clear(&___nl__6);
#line 636
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(400), ___nl__1, ___get_global_const(850), ___nl__5));
#line 636
c_rt_lib0clear(&___nl__5);
#line 637
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(217), ___nl__4, ___get_global_const(214), ___nl__2));
#line 637
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(1, ___get_global_const(214), ___nl__6));
#line 637
c_rt_lib0clear(&___nl__6);
#line 638
c_rt_lib0move(&___nl__7,___get_global_const(766));
#line 638
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 638
c_rt_lib0clear(&___nl__7);
#line 638
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 638
if(c_rt_lib0check_true_native(___nl__6)){ goto label_77;}
#line 639
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 639
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 639
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(863), ___nl__8);
#line 639
c_rt_lib0clear(&___nl__7);
#line 639
c_rt_lib0clear(&___nl__8);
#line 640
c_rt_lib0move(&___nl__7, nparser_priv0parse_var_decl_sim(___ref___0));
#line 640
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 640
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(783), ___nl__8);
#line 640
c_rt_lib0clear(&___nl__7);
#line 640
c_rt_lib0clear(&___nl__8);
#line 641
c_rt_lib0move(&___nl__7,___get_global_const(326));
#line 641
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 641
c_rt_lib0clear(&___nl__7);
#line 642
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 642
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 642
if(c_rt_lib0check_true_native(___nl__7)){ goto label_78;}
#line 642
c_rt_lib0clear(&___nl__1);
#line 642
c_rt_lib0clear(&___nl__2);
#line 642
c_rt_lib0clear(&___nl__3);
#line 642
c_rt_lib0clear(&___nl__4);
#line 642
c_rt_lib0clear(&___nl__5);
#line 642
c_rt_lib0clear(&___nl__6);
#line 642
c_rt_lib0clear(&___nl__7);
#line 642
return ___nl__8;
#line 642
label_78:
#line 642
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 642
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(3), ___nl__9);
#line 642
c_rt_lib0clear(&___nl__7);
#line 642
c_rt_lib0clear(&___nl__8);
#line 642
c_rt_lib0clear(&___nl__9);
#line 643
c_rt_lib0move(&___nl__7,___get_global_const(181));
#line 643
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 643
c_rt_lib0clear(&___nl__7);
#line 644
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(766), ___nl__5));
#line 644
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 644
c_rt_lib0clear(&___nl__7);
#line 645
goto label_87;
#line 645
label_77:
#line 645
c_rt_lib0move(&___nl__7,___get_global_const(768));
#line 645
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 645
c_rt_lib0clear(&___nl__7);
#line 645
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 645
if(c_rt_lib0check_true_native(___nl__6)){ goto label_79;}
#line 646
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 646
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 646
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(863), ___nl__8);
#line 646
c_rt_lib0clear(&___nl__7);
#line 646
c_rt_lib0clear(&___nl__8);
#line 647
c_rt_lib0move(&___nl__7, nparser_priv0parse_var_decl_sim(___ref___0));
#line 647
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 647
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(783), ___nl__8);
#line 647
c_rt_lib0clear(&___nl__7);
#line 647
c_rt_lib0clear(&___nl__8);
#line 648
c_rt_lib0move(&___nl__7,___get_global_const(326));
#line 648
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 648
c_rt_lib0clear(&___nl__7);
#line 649
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 649
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 649
if(c_rt_lib0check_true_native(___nl__7)){ goto label_80;}
#line 649
c_rt_lib0clear(&___nl__1);
#line 649
c_rt_lib0clear(&___nl__2);
#line 649
c_rt_lib0clear(&___nl__3);
#line 649
c_rt_lib0clear(&___nl__4);
#line 649
c_rt_lib0clear(&___nl__5);
#line 649
c_rt_lib0clear(&___nl__6);
#line 649
c_rt_lib0clear(&___nl__7);
#line 649
return ___nl__8;
#line 649
label_80:
#line 649
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 649
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(784), ___nl__9);
#line 649
c_rt_lib0clear(&___nl__7);
#line 649
c_rt_lib0clear(&___nl__8);
#line 649
c_rt_lib0clear(&___nl__9);
#line 650
c_rt_lib0move(&___nl__7,___get_global_const(181));
#line 650
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 650
c_rt_lib0clear(&___nl__7);
#line 651
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(768), ___nl__5));
#line 651
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 651
c_rt_lib0clear(&___nl__7);
#line 652
goto label_87;
#line 652
label_79:
#line 652
c_rt_lib0move(&___nl__7,___get_global_const(767));
#line 652
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 652
c_rt_lib0clear(&___nl__7);
#line 652
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 652
if(c_rt_lib0check_true_native(___nl__6)){ goto label_81;}
#line 653
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 653
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 653
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(863), ___nl__8);
#line 653
c_rt_lib0clear(&___nl__7);
#line 653
c_rt_lib0clear(&___nl__8);
#line 654
c_rt_lib0move(&___nl__7, nparser_priv0parse_var_decl_sim(___ref___0));
#line 654
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 654
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(283), ___nl__8);
#line 654
c_rt_lib0clear(&___nl__7);
#line 654
c_rt_lib0clear(&___nl__8);
#line 655
c_rt_lib0move(&___nl__7,___get_global_const(177));
#line 655
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 655
c_rt_lib0clear(&___nl__7);
#line 656
c_rt_lib0move(&___nl__7, nparser_priv0parse_var_decl_sim(___ref___0));
#line 656
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 656
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(238), ___nl__8);
#line 656
c_rt_lib0clear(&___nl__7);
#line 656
c_rt_lib0clear(&___nl__8);
#line 657
c_rt_lib0move(&___nl__7,___get_global_const(326));
#line 657
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 657
c_rt_lib0clear(&___nl__7);
#line 658
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 658
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 658
if(c_rt_lib0check_true_native(___nl__7)){ goto label_82;}
#line 658
c_rt_lib0clear(&___nl__1);
#line 658
c_rt_lib0clear(&___nl__2);
#line 658
c_rt_lib0clear(&___nl__3);
#line 658
c_rt_lib0clear(&___nl__4);
#line 658
c_rt_lib0clear(&___nl__5);
#line 658
c_rt_lib0clear(&___nl__6);
#line 658
c_rt_lib0clear(&___nl__7);
#line 658
return ___nl__8;
#line 658
label_82:
#line 658
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 658
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(282), ___nl__9);
#line 658
c_rt_lib0clear(&___nl__7);
#line 658
c_rt_lib0clear(&___nl__8);
#line 658
c_rt_lib0clear(&___nl__9);
#line 659
c_rt_lib0move(&___nl__7,___get_global_const(181));
#line 659
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__7));
#line 659
c_rt_lib0clear(&___nl__7);
#line 660
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(767), ___nl__5));
#line 660
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 660
c_rt_lib0clear(&___nl__7);
#line 661
goto label_87;
#line 661
label_81:
#line 661
c_rt_lib0move(&___nl__7,___get_global_const(764));
#line 661
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 661
c_rt_lib0clear(&___nl__7);
#line 661
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 661
if(c_rt_lib0check_true_native(___nl__6)){ goto label_83;}
#line 662
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 662
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 662
if(c_rt_lib0check_true_native(___nl__7)){ goto label_84;}
#line 662
c_rt_lib0clear(&___nl__1);
#line 662
c_rt_lib0clear(&___nl__2);
#line 662
c_rt_lib0clear(&___nl__3);
#line 662
c_rt_lib0clear(&___nl__4);
#line 662
c_rt_lib0clear(&___nl__5);
#line 662
c_rt_lib0clear(&___nl__6);
#line 662
c_rt_lib0clear(&___nl__7);
#line 662
return ___nl__8;
#line 662
label_84:
#line 662
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 662
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(779), ___nl__9);
#line 662
c_rt_lib0clear(&___nl__7);
#line 662
c_rt_lib0clear(&___nl__8);
#line 662
c_rt_lib0clear(&___nl__9);
#line 663
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(770), ___nl__5));
#line 663
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 663
c_rt_lib0clear(&___nl__7);
#line 664
goto label_87;
#line 664
label_83:
#line 664
c_rt_lib0move(&___nl__7,___get_global_const(880));
#line 664
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 664
c_rt_lib0clear(&___nl__7);
#line 664
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 664
if(c_rt_lib0check_true_native(___nl__6)){ goto label_85;}
#line 665
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 665
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 665
if(c_rt_lib0check_true_native(___nl__7)){ goto label_86;}
#line 665
c_rt_lib0clear(&___nl__1);
#line 665
c_rt_lib0clear(&___nl__2);
#line 665
c_rt_lib0clear(&___nl__3);
#line 665
c_rt_lib0clear(&___nl__4);
#line 665
c_rt_lib0clear(&___nl__5);
#line 665
c_rt_lib0clear(&___nl__6);
#line 665
c_rt_lib0clear(&___nl__7);
#line 665
return ___nl__8;
#line 665
label_86:
#line 665
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 665
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(779), ___nl__9);
#line 665
c_rt_lib0clear(&___nl__7);
#line 665
c_rt_lib0clear(&___nl__8);
#line 665
c_rt_lib0clear(&___nl__9);
#line 666
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(771), ___nl__5));
#line 666
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 666
c_rt_lib0clear(&___nl__7);
#line 667
goto label_87;
#line 667
label_85:
#line 667
c_rt_lib0move(&___nl__7,___get_global_const(769));
#line 667
c_rt_lib0move(&___nl__6, nparser_priv0try_eat(___ref___0, ___nl__7));
#line 667
c_rt_lib0clear(&___nl__7);
#line 667
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 667
if(c_rt_lib0check_true_native(___nl__6)){ goto label_87;}
#line 668
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 668
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 668
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(863), ___nl__8);
#line 668
c_rt_lib0clear(&___nl__7);
#line 668
c_rt_lib0clear(&___nl__8);
#line 669
c_rt_lib0move(&___nl__8, nparser_priv0parse_expr(___ref___0));
#line 669
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 669
if(c_rt_lib0check_true_native(___nl__7)){ goto label_88;}
#line 669
c_rt_lib0clear(&___nl__1);
#line 669
c_rt_lib0clear(&___nl__2);
#line 669
c_rt_lib0clear(&___nl__3);
#line 669
c_rt_lib0clear(&___nl__4);
#line 669
c_rt_lib0clear(&___nl__5);
#line 669
c_rt_lib0clear(&___nl__6);
#line 669
c_rt_lib0clear(&___nl__7);
#line 669
return ___nl__8;
#line 669
label_88:
#line 669
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 669
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(779), ___nl__9);
#line 669
c_rt_lib0clear(&___nl__7);
#line 669
c_rt_lib0clear(&___nl__8);
#line 669
c_rt_lib0clear(&___nl__9);
#line 670
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(769), ___nl__5));
#line 670
c_rt_lib0copy(&___nl__2, ___nl__7);
#line 670
c_rt_lib0clear(&___nl__7);
#line 671
goto label_87;
#line 671
label_87:
#line 671
c_rt_lib0clear(&___nl__6);
#line 672
c_rt_lib0move(&___nl__6,___get_global_const(315));
#line 672
c_rt_lib0delete(nparser_priv0eat(___ref___0, ___nl__6));
#line 672
c_rt_lib0clear(&___nl__6);
#line 672
c_rt_lib0clear(&___nl__4);
#line 672
c_rt_lib0clear(&___nl__5);
#line 673
goto label_69;
#line 673
label_69:
#line 673
c_rt_lib0clear(&___nl__3);
#line 674
c_rt_lib0move(&___nl__4,___get_global_const(874));
#line 674
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 674
c_rt_lib0move(&___nl__3, ntokenizer0get_place_ws(&___nl__4));
#line 674
c_rt_lib0move(&___nl__5,___get_global_const(874));
#line 674
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 674
c_rt_lib0clear(&___nl__5);
#line 674
c_rt_lib0clear(&___nl__4);
#line 675
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(400), ___nl__1, ___get_global_const(850), ___nl__3));
#line 676
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(214), ___nl__2, ___get_global_const(217), ___nl__4));
#line 676
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__5));
#line 676
c_rt_lib0clear(&___nl__1);
#line 676
c_rt_lib0clear(&___nl__2);
#line 676
c_rt_lib0clear(&___nl__3);
#line 676
c_rt_lib0clear(&___nl__4);
#line 676
return ___nl__5;
#line 676
c_rt_lib0clear(&___nl__5);
#line 676
c_rt_lib0clear(&___nl__1);
#line 676
c_rt_lib0clear(&___nl__2);
#line 676
c_rt_lib0clear(&___nl__3);
#line 676
c_rt_lib0clear(&___nl__4);
#line 676
return NULL;
}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void nparser_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
}}
ImmT nparser_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nparser_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = nparser_priv0get_end_list0cal();
	break;
case 1:
	___const__[1] = nparser0parse_ret_t0cal();
	break;
case 2:
	___const__[2] = nparser0state_t0cal();
	break;
case 3:
	___const__[3] = nparser0try_value_t0cal();
	break;
case 4:
	___const__[4] = nparser0try_cmd_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
