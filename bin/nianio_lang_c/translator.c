
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "translator.h"
#include "array.h"
#include "string.h"
#include "ptd.h"
#include "nast.h"
#include "hash.h"
#include "nlasm.h"
#include "boolean_t.h"
#include "string_utils.h"
#line 1 "translator.nl"

static ImmT *__const__f = NULL;
void translator_priv0__const__init();
ImmT translator_priv0__const__sim(int __nr);
ImmT translator_priv0__const__sing(int __nr);

ImmT translator_priv0print_fun_def(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_array_declaration(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_hash_declaration(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_variant(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_var_decl(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0load_const(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_fun_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_variable(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_post_operator(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0print_unary_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_var_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_bin_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_cmd_array(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_try_ensure(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0start_new_instruction(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_cmd(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_loop_break(ImmT * ___ref___0,ImmT ___nl__1);
ImmT translator_priv0print_if_mod(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_unless_mod(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_if(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_call_base(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0save_loop_break(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT translator_priv0print_fora(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_loop(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_rep(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_forh(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_while(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_for(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_match(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0move(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_bin_op_operator_command(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4);
ImmT translator_priv0print(ImmT * ___ref___0,ImmT ___nl__1);
ImmT translator_priv0print_if_goto(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_get_from_index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0print_set_at_index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0print_get_value(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0print_set_value(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0get_struct_of_lvalue(ImmT * ___ref___0);
ImmT translator_priv0get_value_of_lvalue(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0set_value_of_lvalue(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0make_string(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_ternary_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0print_die(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_return(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_safe_return(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0convert_str_to_number(ImmT ___nl__0);
ImmT translator_priv0dest_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT translator_priv0def_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3);
ImmT translator_priv0calc_val(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0get_var_register(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0new_declaration(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0new_register(ImmT * ___ref___0);
ImmT translator_priv0save_registers(ImmT * ___ref___0);
ImmT translator_priv0undef_reg(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0restore_registers(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0print_sim_label(ImmT ___nl__0,ImmT * ___ref___1);
ImmT translator_priv0get_sim_label(ImmT * ___ref___0);


ImmT translator0function_logic_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0function_logic_t");
return translator0function_logic_t();}
ImmT translator0function_logic_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(0);}
ImmT translator0function_logic_t0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 16
c_rt_lib0move(&___nl__2, ptd0sim());
#line 16
c_rt_lib0move(&___nl__4, ptd0sim());
#line 16
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 16
c_rt_lib0clear(&___nl__4);
#line 16
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(1062), ___nl__2, ___get_global_const(652), ___nl__3));
#line 16
c_rt_lib0clear(&___nl__2);
#line 16
c_rt_lib0clear(&___nl__3);
#line 16
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 16
c_rt_lib0clear(&___nl__1);
#line 16
return ___nl__0;
#line 16
c_rt_lib0clear(&___nl__0);
#line 16
return NULL;
}

ImmT translator0loop0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0loop");
return translator0loop();}
ImmT translator0loop(){
translator_priv0__const__init();
return translator_priv0__const__sing(1);}
ImmT translator0loop0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 20
c_rt_lib0move(&___nl__2, ptd0sim());
#line 20
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1063), ___get_global_const(1064)));
#line 20
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 20
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(1065), ___nl__2, ___get_global_const(1066), ___nl__3));
#line 20
c_rt_lib0clear(&___nl__2);
#line 20
c_rt_lib0clear(&___nl__3);
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

ImmT translator0loop_label0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0loop_label");
return translator0loop_label();}
ImmT translator0loop_label(){
translator_priv0__const__init();
return translator_priv0__const__sing(2);}
ImmT translator0loop_label0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 24
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1063), ___get_global_const(119)));
#line 24
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1063), ___get_global_const(119)));
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 24
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(772), ___nl__2, ___get_global_const(773), ___nl__3));
#line 24
c_rt_lib0clear(&___nl__2);
#line 24
c_rt_lib0clear(&___nl__3);
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

ImmT translator0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0state_t");
return translator0state_t();}
ImmT translator0state_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(3);}
ImmT translator0state_t0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 28
c_rt_lib0move(&___nl__2, ptd0sim());
#line 28
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nlasm0debug_t0ptr, ___get_global_const(195), ___get_global_const(651)));
#line 28
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 28
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1063), ___get_global_const(1064)));
#line 28
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 28
c_rt_lib0move(&___nl__5, ptd0sim());
#line 28
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_const(195), ___get_global_const(630)));
#line 28
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 28
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(translator0loop_label0ptr, ___get_global_const(1063), ___get_global_const(1067)));
#line 28
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 28
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(6, ___get_global_const(1068), ___nl__2, ___get_global_const(217), ___nl__3, ___get_global_const(1066), ___nl__4, ___get_global_const(434), ___nl__5, ___get_global_const(1069), ___nl__6, ___get_global_const(1067), ___nl__7));
#line 28
c_rt_lib0clear(&___nl__2);
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0clear(&___nl__4);
#line 28
c_rt_lib0clear(&___nl__5);
#line 28
c_rt_lib0clear(&___nl__6);
#line 28
c_rt_lib0clear(&___nl__7);
#line 28
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 28
c_rt_lib0clear(&___nl__1);
#line 28
return ___nl__0;
#line 28
c_rt_lib0clear(&___nl__0);
#line 28
return NULL;
}

ImmT translator0string_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0string_t");
return translator0string_t();}
ImmT translator0string_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(4);}
ImmT translator0string_t0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 39
c_rt_lib0move(&___nl__3, ptd0sim());
#line 39
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 39
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0move(&___nl__5, ptd0none());
#line 39
c_rt_lib0move(&___nl__6, ptd0none());
#line 39
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(850), ___nl__5, ___get_global_const(851), ___nl__6));
#line 39
c_rt_lib0clear(&___nl__5);
#line 39
c_rt_lib0clear(&___nl__6);
#line 39
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 39
c_rt_lib0clear(&___nl__4);
#line 39
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(281), ___nl__2, ___get_global_const(852), ___nl__3));
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 39
c_rt_lib0clear(&___nl__1);
#line 39
return ___nl__0;
#line 39
c_rt_lib0clear(&___nl__0);
#line 39
return NULL;
}

ImmT translator0lvalue_values_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0lvalue_values_t");
return translator0lvalue_values_t();}
ImmT translator0lvalue_values_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(5);}
ImmT translator0lvalue_values_t0cal() {
translator_priv0__const__init();
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
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(878)));
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(878)));
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(878)));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 43
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(650), ___nl__6, ___get_global_const(1070), ___nl__7));
#line 43
c_rt_lib0clear(&___nl__6);
#line 43
c_rt_lib0clear(&___nl__7);
#line 43
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 43
c_rt_lib0clear(&___nl__5);
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(878)));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 43
c_rt_lib0move(&___nl__8, ptd0sim());
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(650), ___nl__7, ___get_global_const(283), ___nl__8));
#line 43
c_rt_lib0clear(&___nl__7);
#line 43
c_rt_lib0clear(&___nl__8);
#line 43
c_rt_lib0move(&___nl__5, ptd0rec(___nl__6));
#line 43
c_rt_lib0clear(&___nl__6);
#line 43
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(878)));
#line 43
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 43
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(878)));
#line 43
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(650), ___nl__8, ___get_global_const(283), ___nl__9));
#line 43
c_rt_lib0clear(&___nl__8);
#line 43
c_rt_lib0clear(&___nl__9);
#line 43
c_rt_lib0move(&___nl__6, ptd0rec(___nl__7));
#line 43
c_rt_lib0clear(&___nl__7);
#line 43
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(650), ___nl__3, ___get_global_const(1070), ___nl__4, ___get_global_const(283), ___nl__5, ___get_global_const(1056), ___nl__6));
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0clear(&___nl__5);
#line 43
c_rt_lib0clear(&___nl__6);
#line 43
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
return ___nl__0;
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
return NULL;
}

ImmT translator0last_debug_char0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "translator0last_debug_char");
return translator0last_debug_char(_tab[0]);}
ImmT translator0last_debug_char(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 52
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(850)));
#line 52
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(113)));
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(850)));
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(864)));
#line 52
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 52
c_rt_lib0clear(&___nl__4);
#line 52
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__2, ___get_global_const(864), ___nl__3));
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(850)));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(113)));
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(850)));
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(864)));
#line 53
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__3, ___get_global_const(864), ___nl__4));
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(400), ___nl__1, ___get_global_const(850), ___nl__2));
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
return ___nl__3;
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0clear(&___nl__0);
#line 54
return NULL;
}

ImmT translator0translate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "translator0translate");
return translator0translate(_tab[0]);}
ImmT translator0translate(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 58
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 58
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 58
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 58
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(434), ___nl__2, ___get_global_const(77), ___nl__3, ___get_global_const(340), ___nl__4));
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__3);
#line 58
c_rt_lib0clear(&___nl__4);
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 59
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 59
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(340), ___nl__3);
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__3);
#line 60
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(128)));
#line 60
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 60
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 60
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 60
label_3:
#line 60
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 60
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 60
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 61
c_rt_lib0move(&___nl__8,___get_global_const(340));
#line 61
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__1, ___nl__8));
#line 61
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 61
c_rt_lib0delete(array0push(&___nl__8, ___nl__9));
#line 61
c_rt_lib0clear(&___nl__9);
#line 61
c_rt_lib0move(&___nl__9,___get_global_const(340));
#line 61
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__9, ___nl__8));
#line 61
c_rt_lib0clear(&___nl__9);
#line 61
c_rt_lib0clear(&___nl__8);
#line 62
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 62
goto label_3;
#line 62
label_1:
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__3);
#line 62
c_rt_lib0clear(&___nl__4);
#line 62
c_rt_lib0clear(&___nl__5);
#line 62
c_rt_lib0clear(&___nl__6);
#line 62
c_rt_lib0clear(&___nl__7);
#line 63
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(735)));
#line 63
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 63
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 63
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 63
label_6:
#line 63
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 63
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 63
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 64
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 64
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 64
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(652), ___nl__9, ___get_global_const(1062), ___nl__10));
#line 64
c_rt_lib0clear(&___nl__9);
#line 64
c_rt_lib0clear(&___nl__10);
#line 65
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 65
c_rt_lib0move(&___nl__11, nlasm0empty_debug());
#line 65
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 65
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 65
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(332)));
#line 65
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 65
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(0));
#line 65
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(0));
#line 65
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 65
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(6, ___get_global_const(216), ___nl__14, ___get_global_const(332), ___nl__15, ___get_global_const(382), ___nl__16, ___get_global_const(335), ___nl__17, ___get_global_const(384), ___nl__18, ___get_global_const(78), ___nl__19));
#line 65
c_rt_lib0clear(&___nl__14);
#line 65
c_rt_lib0clear(&___nl__15);
#line 65
c_rt_lib0clear(&___nl__16);
#line 65
c_rt_lib0clear(&___nl__17);
#line 65
c_rt_lib0clear(&___nl__18);
#line 65
c_rt_lib0clear(&___nl__19);
#line 65
c_rt_lib0move(&___nl__16,___get_global_const(0));
#line 65
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(2, ___get_global_const(1065), ___nl__16, ___get_global_const(1066), ___nl__8));
#line 65
c_rt_lib0clear(&___nl__16);
#line 65
c_rt_lib0move(&___nl__17,___get_global_const(0));
#line 65
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(2, ___get_global_const(1065), ___nl__17, ___get_global_const(1066), ___nl__8));
#line 65
c_rt_lib0clear(&___nl__17);
#line 65
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(772), ___nl__15, ___get_global_const(773), ___nl__16));
#line 65
c_rt_lib0clear(&___nl__15);
#line 65
c_rt_lib0clear(&___nl__16);
#line 65
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(6, ___get_global_const(1068), ___nl__10, ___get_global_const(217), ___nl__11, ___get_global_const(434), ___nl__12, ___get_global_const(1066), ___nl__8, ___get_global_const(1069), ___nl__13, ___get_global_const(1067), ___nl__14));
#line 65
c_rt_lib0clear(&___nl__10);
#line 65
c_rt_lib0clear(&___nl__11);
#line 65
c_rt_lib0clear(&___nl__12);
#line 65
c_rt_lib0clear(&___nl__13);
#line 65
c_rt_lib0clear(&___nl__14);
#line 80
c_rt_lib0delete(translator_priv0print_fun_def(___nl__3, &___nl__9));
#line 81
c_rt_lib0move(&___nl__10,___get_global_const(77));
#line 81
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__1, ___nl__10));
#line 81
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(1069)));
#line 81
c_rt_lib0delete(array0push(&___nl__10, ___nl__11));
#line 81
c_rt_lib0clear(&___nl__11);
#line 81
c_rt_lib0move(&___nl__11,___get_global_const(77));
#line 81
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__11, ___nl__10));
#line 81
c_rt_lib0clear(&___nl__11);
#line 81
c_rt_lib0clear(&___nl__10);
#line 81
c_rt_lib0clear(&___nl__8);
#line 81
c_rt_lib0clear(&___nl__9);
#line 82
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 82
goto label_6;
#line 82
label_4:
#line 82
c_rt_lib0clear(&___nl__2);
#line 82
c_rt_lib0clear(&___nl__3);
#line 82
c_rt_lib0clear(&___nl__4);
#line 82
c_rt_lib0clear(&___nl__5);
#line 82
c_rt_lib0clear(&___nl__6);
#line 82
c_rt_lib0clear(&___nl__7);
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
return ___nl__1;
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
return NULL;
}

ImmT translator_priv0print_fun_def(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 87
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 87
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 87
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 87
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 87
label_3:
#line 87
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 87
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 87
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 88
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(261)));
#line 88
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(38)));
#line 88
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 91
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(5)));
#line 91
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 91
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 91
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 91
nl_die_arg(___nl__9);
#line 88
label_5:
#line 89
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 89
c_rt_lib0delete(translator_priv0new_declaration(___nl__10, ___ref___1));
#line 89
c_rt_lib0clear(&___nl__10);
#line 90
c_rt_lib0move(&___nl__10,___get_global_const(1069));
#line 90
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 90
c_rt_lib0move(&___nl__11,___get_global_const(335));
#line 90
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 90
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(238)));
#line 90
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 90
c_rt_lib0clear(&___nl__12);
#line 90
c_rt_lib0move(&___nl__12,___get_global_const(335));
#line 90
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 90
c_rt_lib0move(&___nl__12,___get_global_const(1069));
#line 90
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__10));
#line 90
c_rt_lib0clear(&___nl__12);
#line 90
c_rt_lib0clear(&___nl__10);
#line 90
c_rt_lib0clear(&___nl__11);
#line 91
goto label_4;
#line 91
label_6:
#line 92
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 92
c_rt_lib0delete(translator_priv0new_declaration(___nl__10, ___ref___1));
#line 92
c_rt_lib0clear(&___nl__10);
#line 93
c_rt_lib0move(&___nl__10,___get_global_const(1069));
#line 93
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 93
c_rt_lib0move(&___nl__11,___get_global_const(335));
#line 93
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 93
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 93
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 93
c_rt_lib0clear(&___nl__12);
#line 93
c_rt_lib0move(&___nl__12,___get_global_const(335));
#line 93
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 93
c_rt_lib0move(&___nl__12,___get_global_const(1069));
#line 93
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__10));
#line 93
c_rt_lib0clear(&___nl__12);
#line 93
c_rt_lib0clear(&___nl__10);
#line 93
c_rt_lib0clear(&___nl__11);
#line 94
goto label_4;
#line 94
label_4:
#line 94
c_rt_lib0clear(&___nl__8);
#line 94
c_rt_lib0clear(&___nl__9);
#line 95
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 95
goto label_3;
#line 95
label_1:
#line 95
c_rt_lib0clear(&___nl__2);
#line 95
c_rt_lib0clear(&___nl__3);
#line 95
c_rt_lib0clear(&___nl__4);
#line 95
c_rt_lib0clear(&___nl__5);
#line 95
c_rt_lib0clear(&___nl__6);
#line 95
c_rt_lib0clear(&___nl__7);
#line 96
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 96
c_rt_lib0delete(translator_priv0print_cmd(___nl__2, ___ref___1));
#line 96
c_rt_lib0clear(&___nl__2);
#line 97
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 97
c_rt_lib0delete(translator_priv0print_return(___nl__2, ___ref___1));
#line 97
c_rt_lib0clear(&___nl__2);
#line 97
c_rt_lib0clear(&___nl__0);
#line 97
return NULL;
}

ImmT translator_priv0print_array_declaration(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 102
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 103
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 103
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 103
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__0));
#line 103
label_3:
#line 103
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 103
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 103
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__0, ___nl__5));
#line 104
c_rt_lib0move(&___nl__9, translator_priv0calc_val(___nl__4, ___ref___2));
#line 104
c_rt_lib0delete(array0push(&___nl__3, ___nl__9));
#line 104
c_rt_lib0clear(&___nl__9);
#line 105
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 105
goto label_3;
#line 105
label_1:
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
c_rt_lib0clear(&___nl__5);
#line 105
c_rt_lib0clear(&___nl__6);
#line 105
c_rt_lib0clear(&___nl__7);
#line 105
c_rt_lib0clear(&___nl__8);
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__3));
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__4));
#line 106
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 106
c_rt_lib0clear(&___nl__4);
#line 106
c_rt_lib0clear(&___nl__3);
#line 106
c_rt_lib0clear(&___nl__0);
#line 106
c_rt_lib0clear(&___nl__1);
#line 106
return NULL;
}

ImmT translator_priv0print_hash_declaration(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
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
#line 111
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 112
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 112
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 112
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__0));
#line 112
label_3:
#line 112
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 112
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 112
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__0, ___nl__5));
#line 113
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(283)));
#line 113
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(803)));
#line 113
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 113
c_rt_lib0move(&___nl__11, translator_priv0calc_val(___nl__12, ___ref___2));
#line 113
c_rt_lib0clear(&___nl__12);
#line 113
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(283), ___nl__10, ___get_global_const(238), ___nl__11));
#line 113
c_rt_lib0clear(&___nl__10);
#line 113
c_rt_lib0clear(&___nl__11);
#line 113
c_rt_lib0delete(array0push(&___nl__3, ___nl__9));
#line 113
c_rt_lib0clear(&___nl__9);
#line 114
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 114
goto label_3;
#line 114
label_1:
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
#line 115
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__3));
#line 115
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__4));
#line 115
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 115
c_rt_lib0clear(&___nl__4);
#line 115
c_rt_lib0clear(&___nl__3);
#line 115
c_rt_lib0clear(&___nl__0);
#line 115
c_rt_lib0clear(&___nl__1);
#line 115
return NULL;
}

ImmT translator_priv0print_variant(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 119
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(215)));
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(796)));
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(778)));
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 120
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 121
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(796)));
#line 121
c_rt_lib0move(&___nl__5, translator_priv0dest_val(___nl__6, ___nl__1, ___ref___2));
#line 121
c_rt_lib0clear(&___nl__6);
#line 121
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__5));
#line 121
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 121
c_rt_lib0clear(&___nl__5);
#line 122
goto label_2;
#line 122
label_2:
#line 122
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__3, ___get_global_const(78), ___nl__5));
#line 123
c_rt_lib0clear(&___nl__5);
#line 123
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__4));
#line 123
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 123
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0clear(&___nl__0);
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
return NULL;
}

ImmT translator_priv0print_var_decl(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 127
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 127
c_rt_lib0move(&___nl__2, translator_priv0new_declaration(___nl__3, ___ref___1));
#line 127
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(650)));
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(38)));
#line 128
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(650)));
#line 129
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 129
c_rt_lib0move(&___nl__4,___get_global_const(76));
#line 129
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 129
nl_die_arg(___nl__4);
#line 128
label_2:
#line 129
goto label_1;
#line 129
label_3:
#line 129
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(650)));
#line 130
c_rt_lib0delete(translator_priv0print_val(___nl__5, ___nl__2, ___ref___1));
#line 130
c_rt_lib0clear(&___nl__5);
#line 131
goto label_1;
#line 131
label_1:
#line 131
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0clear(&___nl__0);
#line 132
return ___nl__2;
#line 132
c_rt_lib0clear(&___nl__2);
#line 132
c_rt_lib0clear(&___nl__0);
#line 132
return NULL;
}

ImmT translator_priv0load_const(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 136
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__1, ___get_global_const(238), ___nl__0));
#line 136
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(227), ___nl__3));
#line 136
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 136
c_rt_lib0clear(&___nl__3);
#line 136
c_rt_lib0clear(&___nl__0);
#line 136
c_rt_lib0clear(&___nl__1);
#line 136
return NULL;
}

ImmT translator0ref_rec_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "translator0ref_rec_args_t");
return translator0ref_rec_args_t();}
ImmT translator0ref_rec_args_t(){
translator_priv0__const__init();
return translator_priv0__const__sing(6);}
ImmT translator0ref_rec_args_t0cal() {
translator_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 140
c_rt_lib0move(&___nl__3, ptd0sim());
#line 140
c_rt_lib0move(&___nl__4, ptd0sim());
#line 140
c_rt_lib0move(&___nl__5, ptd0sim());
#line 140
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(1071), ___nl__3, ___get_global_const(1072), ___nl__4, ___get_global_const(1073), ___nl__5));
#line 140
c_rt_lib0clear(&___nl__3);
#line 140
c_rt_lib0clear(&___nl__4);
#line 140
c_rt_lib0clear(&___nl__5);
#line 140
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
return ___nl__0;
#line 140
c_rt_lib0clear(&___nl__0);
#line 140
return NULL;
}

ImmT translator_priv0print_fun_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
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
#line 144
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 145
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 146
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 147
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 148
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 148
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 148
c_rt_lib0clear(&___nl__8);
#line 148
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 148
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 148
c_rt_lib0clear(&___nl__8);
#line 148
label_2:
#line 148
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 148
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 148
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 148
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__7));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(261)));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(5)));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 149
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 149
c_rt_lib0clear(&___nl__9);
#line 149
goto label_3;
#line 149
goto label_5;
#line 149
label_5:
#line 149
c_rt_lib0clear(&___nl__9);
#line 150
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 150
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__7));
#line 150
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(238)));
#line 151
c_rt_lib0delete(translator_priv0get_struct_of_lvalue(&___nl__9));
#line 152
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 152
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(796)));
#line 152
c_rt_lib0move(&___nl__10, hash0has_key(___nl__6, ___nl__11));
#line 152
c_rt_lib0clear(&___nl__11);
#line 152
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 152
if(c_rt_lib0check_true_native(___nl__10)){ goto label_7;}
#line 152
c_rt_lib0clear(&___nl__9);
#line 152
c_rt_lib0clear(&___nl__10);
#line 152
goto label_3;
#line 152
goto label_7;
#line 152
label_7:
#line 152
c_rt_lib0clear(&___nl__10);
#line 153
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 153
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(796)));
#line 153
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 153
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__10, ___nl__11));
#line 153
c_rt_lib0clear(&___nl__11);
#line 153
c_rt_lib0clear(&___nl__10);
#line 154
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 154
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__10));
#line 154
c_rt_lib0clear(&___nl__10);
#line 154
c_rt_lib0clear(&___nl__9);
#line 154
label_3:
#line 154
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 154
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__9));
#line 154
c_rt_lib0clear(&___nl__9);
#line 155
goto label_2;
#line 155
label_1:
#line 155
c_rt_lib0clear(&___nl__7);
#line 155
c_rt_lib0clear(&___nl__8);
#line 156
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 157
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 157
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 157
c_rt_lib0clear(&___nl__9);
#line 157
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 157
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 157
label_10:
#line 157
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__9, ___nl__8));
#line 157
if(c_rt_lib0check_true_native(___nl__11)){ goto label_8;}
#line 158
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 158
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__12, ___nl__9));
#line 159
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(261)));
#line 159
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(38)));
#line 159
if(c_rt_lib0check_true_native(___nl__14)){ goto label_12;}
#line 161
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(5)));
#line 161
if(c_rt_lib0check_true_native(___nl__14)){ goto label_13;}
#line 161
c_rt_lib0move(&___nl__14,___get_global_const(76));
#line 161
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 161
nl_die_arg(___nl__14);
#line 159
label_12:
#line 160
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(238)));
#line 160
c_rt_lib0move(&___nl__15, translator_priv0calc_val(___nl__16, ___ref___2));
#line 160
c_rt_lib0clear(&___nl__16);
#line 160
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__15));
#line 160
c_rt_lib0delete(array0push(&___nl__3, ___nl__15));
#line 160
c_rt_lib0clear(&___nl__15);
#line 161
goto label_11;
#line 161
label_13:
#line 162
c_rt_lib0move(&___nl__15, hash0has_key(___nl__5, ___nl__9));
#line 162
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 162
if(c_rt_lib0check_true_native(___nl__15)){ goto label_15;}
#line 163
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(238)));
#line 163
c_rt_lib0move(&___nl__18, c_rt_lib0get_true());
#line 163
c_rt_lib0move(&___nl__16, translator_priv0get_value_of_lvalue(___nl__17, ___nl__18, ___ref___2));
#line 163
c_rt_lib0clear(&___nl__18);
#line 163
c_rt_lib0clear(&___nl__17);
#line 164
c_rt_lib0move(&___nl__18, array0len(___nl__16));
#line 164
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 164
c_rt_lib0move(&___nl__18, c_rt_lib0sub_mod(___nl__18, ___nl__19));
#line 164
c_rt_lib0clear(&___nl__19);
#line 164
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__16, ___nl__18));
#line 164
c_rt_lib0clear(&___nl__18);
#line 164
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__17, ___get_global_const(650)));
#line 165
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__17));
#line 165
c_rt_lib0delete(array0push(&___nl__3, ___nl__18));
#line 165
c_rt_lib0clear(&___nl__18);
#line 166
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__9, ___nl__16));
#line 166
c_rt_lib0clear(&___nl__16);
#line 166
c_rt_lib0clear(&___nl__17);
#line 167
goto label_14;
#line 167
label_15:
#line 168
c_rt_lib0move(&___nl__16, translator_priv0new_register(___ref___2));
#line 169
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(238)));
#line 169
c_rt_lib0delete(translator_priv0print_val(___nl__17, ___nl__16, ___ref___2));
#line 169
c_rt_lib0clear(&___nl__17);
#line 170
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 170
c_rt_lib0delete(array0push(&___nl__3, ___nl__17));
#line 170
c_rt_lib0clear(&___nl__17);
#line 170
c_rt_lib0clear(&___nl__16);
#line 171
goto label_14;
#line 171
label_14:
#line 171
c_rt_lib0clear(&___nl__15);
#line 172
goto label_11;
#line 172
label_11:
#line 172
c_rt_lib0clear(&___nl__13);
#line 172
c_rt_lib0clear(&___nl__14);
#line 173
c_rt_lib0move(&___nl__13, translator_priv0save_registers(___ref___2));
#line 173
c_rt_lib0delete(array0push(&___nl__7, ___nl__13));
#line 173
c_rt_lib0clear(&___nl__13);
#line 173
c_rt_lib0clear(&___nl__12);
#line 174
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 174
goto label_10;
#line 174
label_8:
#line 174
c_rt_lib0clear(&___nl__8);
#line 174
c_rt_lib0clear(&___nl__9);
#line 174
c_rt_lib0clear(&___nl__10);
#line 174
c_rt_lib0clear(&___nl__11);
#line 175
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(111)));
#line 175
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 175
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(4, ___get_global_const(237), ___nl__1, ___get_global_const(261), ___nl__9, ___get_global_const(389), ___nl__10, ___get_global_const(74), ___nl__3));
#line 175
c_rt_lib0clear(&___nl__9);
#line 175
c_rt_lib0clear(&___nl__10);
#line 175
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(221), ___nl__8));
#line 175
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 175
c_rt_lib0clear(&___nl__8);
#line 176
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 176
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 176
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 176
c_rt_lib0clear(&___nl__9);
#line 176
label_17:
#line 176
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 176
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__8, ___nl__9));
#line 176
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 176
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 177
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 177
c_rt_lib0delete(translator_priv0restore_registers(___nl__10, ___ref___2));
#line 177
c_rt_lib0clear(&___nl__10);
#line 178
c_rt_lib0move(&___nl__10, hash0has_key(___nl__4, ___nl__8));
#line 178
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 178
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 178
if(c_rt_lib0check_true_native(___nl__10)){ goto label_20;}
#line 178
c_rt_lib0clear(&___nl__10);
#line 178
goto label_18;
#line 178
goto label_20;
#line 178
label_20:
#line 178
c_rt_lib0clear(&___nl__10);
#line 179
c_rt_lib0move(&___nl__10, hash0get_value(___nl__4, ___nl__8));
#line 179
c_rt_lib0move(&___nl__11, c_rt_lib0get_true());
#line 179
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__10, ___nl__11, ___ref___2));
#line 179
c_rt_lib0clear(&___nl__11);
#line 179
c_rt_lib0clear(&___nl__10);
#line 179
label_18:
#line 179
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 179
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__10));
#line 179
c_rt_lib0clear(&___nl__10);
#line 180
goto label_17;
#line 180
label_16:
#line 180
c_rt_lib0clear(&___nl__8);
#line 180
c_rt_lib0clear(&___nl__9);
#line 180
c_rt_lib0clear(&___nl__3);
#line 180
c_rt_lib0clear(&___nl__4);
#line 180
c_rt_lib0clear(&___nl__5);
#line 180
c_rt_lib0clear(&___nl__6);
#line 180
c_rt_lib0clear(&___nl__7);
#line 180
c_rt_lib0clear(&___nl__0);
#line 180
c_rt_lib0clear(&___nl__1);
#line 180
return NULL;
}

ImmT translator_priv0print_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 184
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 185
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(298)));
#line 185
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 187
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(717)));
#line 187
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 189
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 189
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 191
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 191
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 193
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(788)));
#line 193
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 195
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(796)));
#line 195
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 197
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 197
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 199
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(223)));
#line 199
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 201
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 201
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 203
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 203
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 205
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(759)));
#line 205
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 207
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(219)));
#line 207
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 209
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(220)));
#line 209
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 211
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(778)));
#line 211
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 212
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(806)));
#line 212
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 214
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(807)));
#line 214
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 216
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(808)));
#line 216
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 216
c_rt_lib0move(&___nl__4,___get_global_const(76));
#line 216
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__0));
#line 216
nl_die_arg(___nl__4);
#line 185
label_2:
#line 185
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(298)));
#line 186
c_rt_lib0move(&___nl__6, translator_priv0convert_str_to_number(___nl__5));
#line 186
c_rt_lib0delete(translator_priv0load_const(___nl__6, ___nl__1, ___ref___2));
#line 186
c_rt_lib0clear(&___nl__6);
#line 186
c_rt_lib0clear(&___nl__5);
#line 187
goto label_1;
#line 187
label_3:
#line 187
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(717)));
#line 188
c_rt_lib0move(&___nl__6, translator_priv0make_string(___nl__5, ___ref___2));
#line 188
c_rt_lib0delete(translator_priv0load_const(___nl__6, ___nl__1, ___ref___2));
#line 188
c_rt_lib0clear(&___nl__6);
#line 188
c_rt_lib0clear(&___nl__5);
#line 189
goto label_1;
#line 189
label_4:
#line 189
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 190
c_rt_lib0delete(translator_priv0print_ternary_op(___nl__5, ___nl__1, ___ref___2));
#line 190
c_rt_lib0clear(&___nl__5);
#line 191
goto label_1;
#line 191
label_5:
#line 191
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(803)));
#line 192
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 192
nl_die_arg(___nl__6);
#line 192
c_rt_lib0clear(&___nl__6);
#line 192
c_rt_lib0clear(&___nl__5);
#line 193
goto label_1;
#line 193
label_6:
#line 193
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(788)));
#line 194
c_rt_lib0delete(translator_priv0print_variant(___nl__5, ___nl__1, ___ref___2));
#line 194
c_rt_lib0clear(&___nl__5);
#line 195
goto label_1;
#line 195
label_7:
#line 195
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(796)));
#line 196
c_rt_lib0delete(translator_priv0print_variable(___nl__5, ___nl__1, ___ref___2));
#line 196
c_rt_lib0clear(&___nl__5);
#line 197
goto label_1;
#line 197
label_8:
#line 197
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(802)));
#line 198
c_rt_lib0delete(translator_priv0print_val(___nl__5, ___nl__1, ___ref___2));
#line 198
c_rt_lib0clear(&___nl__5);
#line 199
goto label_1;
#line 199
label_9:
#line 199
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(223)));
#line 200
c_rt_lib0delete(translator_priv0print_bin_op(___nl__5, ___nl__1, ___ref___2));
#line 200
c_rt_lib0clear(&___nl__5);
#line 201
goto label_1;
#line 201
label_10:
#line 201
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(804)));
#line 202
c_rt_lib0delete(translator_priv0print_var_op(___nl__5, ___nl__1, ___ref___2));
#line 202
c_rt_lib0clear(&___nl__5);
#line 203
goto label_1;
#line 203
label_11:
#line 203
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(805)));
#line 204
c_rt_lib0delete(translator_priv0print_unary_op(___nl__5, ___nl__1, ___ref___2));
#line 204
c_rt_lib0clear(&___nl__5);
#line 205
goto label_1;
#line 205
label_12:
#line 205
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(759)));
#line 206
c_rt_lib0delete(translator_priv0print_fun_val(___nl__5, ___nl__1, ___ref___2));
#line 206
c_rt_lib0clear(&___nl__5);
#line 207
goto label_1;
#line 207
label_13:
#line 207
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(219)));
#line 208
c_rt_lib0delete(translator_priv0print_array_declaration(___nl__5, ___nl__1, ___ref___2));
#line 208
c_rt_lib0clear(&___nl__5);
#line 209
goto label_1;
#line 209
label_14:
#line 209
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(220)));
#line 210
c_rt_lib0delete(translator_priv0print_hash_declaration(___nl__5, ___nl__1, ___ref___2));
#line 210
c_rt_lib0clear(&___nl__5);
#line 211
goto label_1;
#line 211
label_15:
#line 212
goto label_1;
#line 212
label_16:
#line 212
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(806)));
#line 213
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 213
nl_die_arg(___nl__6);
#line 213
c_rt_lib0clear(&___nl__6);
#line 213
c_rt_lib0clear(&___nl__5);
#line 214
goto label_1;
#line 214
label_17:
#line 214
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(807)));
#line 215
c_rt_lib0move(&___nl__6,___get_global_const(826));
#line 215
c_rt_lib0delete(translator_priv0print_post_operator(___nl__5, ___nl__6, ___nl__1, ___ref___2));
#line 215
c_rt_lib0clear(&___nl__6);
#line 215
c_rt_lib0clear(&___nl__5);
#line 216
goto label_1;
#line 216
label_18:
#line 216
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(808)));
#line 217
c_rt_lib0move(&___nl__6,___get_global_const(140));
#line 217
c_rt_lib0delete(translator_priv0print_post_operator(___nl__5, ___nl__6, ___nl__1, ___ref___2));
#line 217
c_rt_lib0clear(&___nl__6);
#line 217
c_rt_lib0clear(&___nl__5);
#line 218
goto label_1;
#line 218
label_1:
#line 218
c_rt_lib0clear(&___nl__4);
#line 219
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 219
c_rt_lib0clear(&___nl__3);
#line 219
c_rt_lib0clear(&___nl__0);
#line 219
c_rt_lib0clear(&___nl__1);
#line 219
return NULL;
}

ImmT translator_priv0print_variable(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 223
c_rt_lib0move(&___nl__3, translator_priv0get_var_register(___nl__0, ___ref___2));
#line 223
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__3, ___ref___2));
#line 223
c_rt_lib0clear(&___nl__3);
#line 223
c_rt_lib0clear(&___nl__0);
#line 223
c_rt_lib0clear(&___nl__1);
#line 223
return NULL;
}

ImmT translator_priv0print_post_operator(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 228
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 228
c_rt_lib0move(&___nl__4, translator_priv0get_value_of_lvalue(___nl__0, ___nl__5, ___ref___3));
#line 228
c_rt_lib0clear(&___nl__5);
#line 229
c_rt_lib0move(&___nl__6, array0len(___nl__4));
#line 229
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 229
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 229
c_rt_lib0clear(&___nl__7);
#line 229
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 229
c_rt_lib0clear(&___nl__6);
#line 229
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(650)));
#line 230
c_rt_lib0delete(translator_priv0move(___nl__2, ___nl__5, ___ref___3));
#line 231
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 231
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(298), ___nl__7));
#line 231
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___3));
#line 231
c_rt_lib0clear(&___nl__7);
#line 232
c_rt_lib0move(&___nl__7,___get_global_const(826));
#line 232
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__1, ___nl__7));
#line 232
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 232
c_rt_lib0move(&___nl__7,___get_global_const(249));
#line 232
goto label_1;
#line 232
label_2:
#line 232
c_rt_lib0move(&___nl__7,___get_global_const(251));
#line 232
label_1:
#line 232
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__5, ___nl__5, ___nl__6, ___nl__7, ___ref___3));
#line 232
c_rt_lib0clear(&___nl__7);
#line 233
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 233
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__4, ___nl__7, ___ref___3));
#line 233
c_rt_lib0clear(&___nl__7);
#line 233
c_rt_lib0clear(&___nl__4);
#line 233
c_rt_lib0clear(&___nl__5);
#line 233
c_rt_lib0clear(&___nl__6);
#line 233
c_rt_lib0clear(&___nl__0);
#line 233
c_rt_lib0clear(&___nl__1);
#line 233
c_rt_lib0clear(&___nl__2);
#line 233
return NULL;
}

ImmT translator_priv0print_unary_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 237
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 237
c_rt_lib0move(&___nl__4,___get_global_const(247));
#line 237
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 237
c_rt_lib0clear(&___nl__4);
#line 237
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 237
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 237
c_rt_lib0move(&___nl__4,___get_global_const(249));
#line 237
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 237
c_rt_lib0clear(&___nl__4);
#line 237
label_4:
#line 237
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 237
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 237
c_rt_lib0move(&___nl__4,___get_global_const(251));
#line 237
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 237
c_rt_lib0clear(&___nl__4);
#line 237
label_3:
#line 237
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 237
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 238
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 238
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 238
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 238
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 238
c_rt_lib0clear(&___nl__0);
#line 238
c_rt_lib0clear(&___nl__1);
#line 238
c_rt_lib0clear(&___nl__3);
#line 238
c_rt_lib0clear(&___nl__4);
#line 238
return NULL;
#line 238
goto label_6;
#line 238
label_6:
#line 238
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 239
c_rt_lib0delete(translator_priv0print_val(___nl__4, ___nl__1, ___ref___2));
#line 239
c_rt_lib0clear(&___nl__4);
#line 240
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 240
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__1, ___get_global_const(405), ___nl__5));
#line 240
c_rt_lib0clear(&___nl__5);
#line 240
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__4));
#line 240
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 240
c_rt_lib0clear(&___nl__4);
#line 241
goto label_1;
#line 241
label_2:
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 241
c_rt_lib0move(&___nl__4,___get_global_const(826));
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 241
c_rt_lib0clear(&___nl__4);
#line 241
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 241
c_rt_lib0move(&___nl__4,___get_global_const(140));
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 241
c_rt_lib0clear(&___nl__4);
#line 241
label_8:
#line 241
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 241
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 242
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 242
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 242
c_rt_lib0move(&___nl__4, translator_priv0get_value_of_lvalue(___nl__5, ___nl__6, ___ref___2));
#line 242
c_rt_lib0clear(&___nl__6);
#line 242
c_rt_lib0clear(&___nl__5);
#line 243
c_rt_lib0move(&___nl__6, array0len(___nl__4));
#line 243
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 243
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 243
c_rt_lib0clear(&___nl__7);
#line 243
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 243
c_rt_lib0clear(&___nl__6);
#line 243
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(650)));
#line 244
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 244
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(298), ___nl__7));
#line 244
c_rt_lib0move(&___nl__6, translator_priv0dest_val(___nl__7, ___nl__1, ___ref___2));
#line 244
c_rt_lib0clear(&___nl__7);
#line 245
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 245
c_rt_lib0move(&___nl__8,___get_global_const(826));
#line 245
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__8));
#line 245
c_rt_lib0clear(&___nl__8);
#line 245
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 245
c_rt_lib0move(&___nl__7,___get_global_const(249));
#line 245
goto label_9;
#line 245
label_10:
#line 245
c_rt_lib0move(&___nl__7,___get_global_const(251));
#line 245
label_9:
#line 245
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__5, ___nl__5, ___nl__6, ___nl__7, ___ref___2));
#line 245
c_rt_lib0clear(&___nl__7);
#line 246
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__5, ___ref___2));
#line 247
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 247
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__4, ___nl__7, ___ref___2));
#line 247
c_rt_lib0clear(&___nl__7);
#line 247
c_rt_lib0clear(&___nl__4);
#line 247
c_rt_lib0clear(&___nl__5);
#line 247
c_rt_lib0clear(&___nl__6);
#line 248
goto label_1;
#line 248
label_7:
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 248
c_rt_lib0move(&___nl__4,___get_global_const(189));
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 248
c_rt_lib0clear(&___nl__4);
#line 248
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 248
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 249
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 249
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 249
c_rt_lib0clear(&___nl__0);
#line 249
c_rt_lib0clear(&___nl__1);
#line 249
c_rt_lib0clear(&___nl__3);
#line 249
c_rt_lib0clear(&___nl__4);
#line 249
return NULL;
#line 249
goto label_13;
#line 249
label_13:
#line 249
c_rt_lib0clear(&___nl__4);
#line 250
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 250
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(806)));
#line 251
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(111)));
#line 251
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__1, ___get_global_const(111), ___nl__6, ___get_global_const(78), ___nl__7));
#line 251
c_rt_lib0clear(&___nl__6);
#line 251
c_rt_lib0clear(&___nl__7);
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(72), ___nl__5));
#line 251
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__5));
#line 251
c_rt_lib0clear(&___nl__5);
#line 252
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__1));
#line 252
c_rt_lib0move(&___nl__7,___get_global_const(5));
#line 252
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__6, ___get_global_const(78), ___nl__7));
#line 252
c_rt_lib0clear(&___nl__6);
#line 252
c_rt_lib0clear(&___nl__7);
#line 252
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__5));
#line 252
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__5));
#line 252
c_rt_lib0clear(&___nl__5);
#line 252
c_rt_lib0clear(&___nl__4);
#line 253
goto label_1;
#line 253
label_11:
#line 254
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 254
nl_die_arg(___nl__4);
#line 254
c_rt_lib0clear(&___nl__4);
#line 255
goto label_1;
#line 255
label_1:
#line 255
c_rt_lib0clear(&___nl__3);
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
c_rt_lib0clear(&___nl__1);
#line 255
return NULL;
}

ImmT translator_priv0print_var_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 259
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 259
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 259
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 259
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 259
c_rt_lib0clear(&___nl__0);
#line 259
c_rt_lib0clear(&___nl__1);
#line 259
c_rt_lib0clear(&___nl__3);
#line 259
return NULL;
#line 259
goto label_2;
#line 259
label_2:
#line 259
c_rt_lib0clear(&___nl__3);
#line 260
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 260
c_rt_lib0delete(translator_priv0print_val(___nl__3, ___nl__1, ___ref___2));
#line 260
c_rt_lib0clear(&___nl__3);
#line 262
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 262
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(224)));
#line 262
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 264
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(225)));
#line 264
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 264
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 264
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 264
nl_die_arg(___nl__5);
#line 262
label_4:
#line 263
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(847)));
#line 263
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__1, ___get_global_const(73), ___nl__7));
#line 263
c_rt_lib0clear(&___nl__7);
#line 263
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__6));
#line 263
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 263
c_rt_lib0clear(&___nl__6);
#line 264
goto label_3;
#line 264
label_5:
#line 265
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(847)));
#line 265
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__1, ___get_global_const(73), ___nl__7));
#line 265
c_rt_lib0clear(&___nl__7);
#line 265
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(225), ___nl__6));
#line 265
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 265
c_rt_lib0clear(&___nl__6);
#line 266
goto label_3;
#line 266
label_3:
#line 266
c_rt_lib0clear(&___nl__4);
#line 266
c_rt_lib0clear(&___nl__5);
#line 267
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 267
c_rt_lib0clear(&___nl__3);
#line 267
c_rt_lib0clear(&___nl__0);
#line 267
c_rt_lib0clear(&___nl__1);
#line 267
return NULL;
}

ImmT translator_priv0print_bin_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 271
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 271
c_rt_lib0move(&___nl__4,___get_global_const(812));
#line 271
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 271
c_rt_lib0clear(&___nl__4);
#line 271
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 271
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 272
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 272
c_rt_lib0move(&___nl__4, translator_priv0dest_val(___nl__5, ___nl__1, ___ref___2));
#line 272
c_rt_lib0clear(&___nl__5);
#line 273
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 273
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 273
c_rt_lib0move(&___nl__5, translator_priv0get_value_of_lvalue(___nl__6, ___nl__7, ___ref___2));
#line 273
c_rt_lib0clear(&___nl__7);
#line 273
c_rt_lib0clear(&___nl__6);
#line 274
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 274
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 274
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 274
c_rt_lib0clear(&___nl__8);
#line 274
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 274
c_rt_lib0clear(&___nl__7);
#line 274
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(650)));
#line 275
c_rt_lib0delete(translator_priv0move(___nl__6, ___nl__4, ___ref___2));
#line 276
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__6, ___ref___2));
#line 277
c_rt_lib0move(&___nl__7, c_rt_lib0get_false());
#line 277
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__5, ___nl__7, ___ref___2));
#line 277
c_rt_lib0clear(&___nl__7);
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0clear(&___nl__6);
#line 278
goto label_1;
#line 278
label_2:
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 278
c_rt_lib0move(&___nl__4,___get_global_const(840));
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 278
c_rt_lib0clear(&___nl__4);
#line 278
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 278
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 279
c_rt_lib0move(&___nl__5,___get_global_const(1074));
#line 279
c_rt_lib0move(&___nl__6,___get_global_const(306));
#line 279
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 279
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 279
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(238), ___nl__9, ___get_global_const(261), ___nl__10));
#line 279
c_rt_lib0clear(&___nl__9);
#line 279
c_rt_lib0clear(&___nl__10);
#line 279
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 279
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 279
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(238), ___nl__10, ___get_global_const(261), ___nl__11));
#line 279
c_rt_lib0clear(&___nl__10);
#line 279
c_rt_lib0clear(&___nl__11);
#line 279
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 279
c_rt_lib0clear(&___nl__8);
#line 279
c_rt_lib0clear(&___nl__9);
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__5, ___get_global_const(111), ___nl__6, ___get_global_const(74), ___nl__7));
#line 279
c_rt_lib0clear(&___nl__5);
#line 279
c_rt_lib0clear(&___nl__6);
#line 279
c_rt_lib0clear(&___nl__7);
#line 279
c_rt_lib0delete(translator_priv0print_fun_val(___nl__4, ___nl__1, ___ref___2));
#line 279
c_rt_lib0clear(&___nl__4);
#line 284
goto label_1;
#line 284
label_3:
#line 284
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 284
c_rt_lib0move(&___nl__4,___get_global_const(798));
#line 284
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 284
c_rt_lib0clear(&___nl__4);
#line 284
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 284
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 284
c_rt_lib0move(&___nl__4,___get_global_const(799));
#line 284
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 284
c_rt_lib0clear(&___nl__4);
#line 284
label_6:
#line 284
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 284
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 284
c_rt_lib0move(&___nl__4,___get_global_const(797));
#line 284
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 284
c_rt_lib0clear(&___nl__4);
#line 284
label_5:
#line 284
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 284
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 285
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 285
c_rt_lib0move(&___nl__4, translator_priv0dest_val(___nl__5, ___nl__1, ___ref___2));
#line 285
c_rt_lib0clear(&___nl__5);
#line 286
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 286
c_rt_lib0move(&___nl__6,___get_global_const(798));
#line 286
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 286
c_rt_lib0clear(&___nl__6);
#line 286
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 286
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 287
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 287
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___2));
#line 287
c_rt_lib0clear(&___nl__7);
#line 288
c_rt_lib0delete(translator_priv0print_get_from_index(___nl__1, ___nl__4, ___nl__6, ___ref___2));
#line 288
c_rt_lib0clear(&___nl__6);
#line 289
goto label_7;
#line 289
label_8:
#line 289
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 289
c_rt_lib0move(&___nl__6,___get_global_const(799));
#line 289
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 289
c_rt_lib0clear(&___nl__6);
#line 289
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 289
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 290
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 290
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___2));
#line 290
c_rt_lib0clear(&___nl__7);
#line 291
c_rt_lib0move(&___nl__7,___get_global_const(1075));
#line 291
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__4));
#line 291
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__6));
#line 291
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__9, ___nl__10));
#line 291
c_rt_lib0clear(&___nl__9);
#line 291
c_rt_lib0clear(&___nl__10);
#line 291
c_rt_lib0delete(translator_priv0print_call_base(___nl__1, ___nl__7, ___nl__8, ___ref___2));
#line 291
c_rt_lib0clear(&___nl__8);
#line 291
c_rt_lib0clear(&___nl__7);
#line 291
c_rt_lib0clear(&___nl__6);
#line 292
goto label_7;
#line 292
label_9:
#line 293
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 293
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(803)));
#line 293
c_rt_lib0delete(translator_priv0print_get_value(___nl__1, ___nl__4, ___nl__6, ___ref___2));
#line 293
c_rt_lib0clear(&___nl__6);
#line 294
goto label_7;
#line 294
label_7:
#line 294
c_rt_lib0clear(&___nl__5);
#line 294
c_rt_lib0clear(&___nl__4);
#line 295
goto label_1;
#line 295
label_4:
#line 295
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 295
c_rt_lib0move(&___nl__4,___get_global_const(813));
#line 295
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 295
c_rt_lib0clear(&___nl__4);
#line 295
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 295
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 295
c_rt_lib0move(&___nl__4,___get_global_const(814));
#line 295
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 295
c_rt_lib0clear(&___nl__4);
#line 295
label_14:
#line 295
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 295
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 295
c_rt_lib0move(&___nl__4,___get_global_const(816));
#line 295
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 295
c_rt_lib0clear(&___nl__4);
#line 295
label_13:
#line 295
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 295
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 295
c_rt_lib0move(&___nl__4,___get_global_const(815));
#line 295
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 295
c_rt_lib0clear(&___nl__4);
#line 295
label_12:
#line 295
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 295
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 295
c_rt_lib0move(&___nl__4,___get_global_const(817));
#line 295
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 295
c_rt_lib0clear(&___nl__4);
#line 295
label_11:
#line 295
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 295
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 296
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 296
c_rt_lib0move(&___nl__4, translator_priv0calc_val(___nl__5, ___ref___2));
#line 296
c_rt_lib0clear(&___nl__5);
#line 297
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 297
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 297
c_rt_lib0move(&___nl__5, translator_priv0get_value_of_lvalue(___nl__6, ___nl__7, ___ref___2));
#line 297
c_rt_lib0clear(&___nl__7);
#line 297
c_rt_lib0clear(&___nl__6);
#line 298
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 298
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 298
c_rt_lib0clear(&___nl__8);
#line 298
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 298
c_rt_lib0clear(&___nl__7);
#line 298
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(650)));
#line 299
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 299
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__6, ___nl__6, ___nl__4, ___nl__7, ___ref___2));
#line 299
c_rt_lib0clear(&___nl__7);
#line 300
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__6, ___ref___2));
#line 301
c_rt_lib0move(&___nl__7, c_rt_lib0get_true());
#line 301
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__5, ___nl__7, ___ref___2));
#line 301
c_rt_lib0clear(&___nl__7);
#line 301
c_rt_lib0clear(&___nl__4);
#line 301
c_rt_lib0clear(&___nl__5);
#line 301
c_rt_lib0clear(&___nl__6);
#line 302
goto label_1;
#line 302
label_10:
#line 302
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 302
c_rt_lib0move(&___nl__4,___get_global_const(720));
#line 302
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 302
c_rt_lib0clear(&___nl__4);
#line 302
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 302
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 303
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 304
c_rt_lib0move(&___nl__5, translator_priv0new_register(___ref___2));
#line 305
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 305
c_rt_lib0move(&___nl__6, translator_priv0def_val(___nl__7, ___nl__1, ___nl__5, ___ref___2));
#line 305
c_rt_lib0clear(&___nl__7);
#line 306
c_rt_lib0move(&___nl__8,___get_global_const(247));
#line 306
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__5, ___get_global_const(40), ___nl__6, ___get_global_const(405), ___nl__8));
#line 306
c_rt_lib0clear(&___nl__8);
#line 306
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__7));
#line 306
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__7));
#line 306
c_rt_lib0clear(&___nl__7);
#line 307
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__5, ___ref___2));
#line 308
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 308
c_rt_lib0delete(translator_priv0def_val(___nl__7, ___nl__1, ___nl__5, ___ref___2));
#line 308
c_rt_lib0clear(&___nl__7);
#line 309
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 309
c_rt_lib0clear(&___nl__4);
#line 309
c_rt_lib0clear(&___nl__5);
#line 309
c_rt_lib0clear(&___nl__6);
#line 310
goto label_1;
#line 310
label_15:
#line 310
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 310
c_rt_lib0move(&___nl__4,___get_global_const(721));
#line 310
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 310
c_rt_lib0clear(&___nl__4);
#line 310
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 310
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 311
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 312
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 312
c_rt_lib0move(&___nl__5, translator_priv0dest_val(___nl__6, ___nl__1, ___ref___2));
#line 312
c_rt_lib0clear(&___nl__6);
#line 313
c_rt_lib0move(&___nl__6, c_rt_lib0ne(___nl__1, ___nl__5));
#line 313
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 313
if(c_rt_lib0check_true_native(___nl__6)){ goto label_18;}
#line 313
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__5, ___ref___2));
#line 313
goto label_18;
#line 313
label_18:
#line 313
c_rt_lib0clear(&___nl__6);
#line 314
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__5, ___ref___2));
#line 315
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 315
c_rt_lib0move(&___nl__6, translator_priv0dest_val(___nl__7, ___nl__1, ___ref___2));
#line 315
c_rt_lib0clear(&___nl__7);
#line 315
c_rt_lib0copy(&___nl__5, ___nl__6);
#line 315
c_rt_lib0clear(&___nl__6);
#line 316
c_rt_lib0move(&___nl__6, c_rt_lib0ne(___nl__5, ___nl__1));
#line 316
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 316
if(c_rt_lib0check_true_native(___nl__6)){ goto label_20;}
#line 316
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__5, ___ref___2));
#line 316
goto label_20;
#line 316
label_20:
#line 316
c_rt_lib0clear(&___nl__6);
#line 317
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 317
c_rt_lib0clear(&___nl__4);
#line 317
c_rt_lib0clear(&___nl__5);
#line 318
goto label_1;
#line 318
label_16:
#line 319
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 319
c_rt_lib0move(&___nl__4, translator_priv0dest_val(___nl__5, ___nl__1, ___ref___2));
#line 319
c_rt_lib0clear(&___nl__5);
#line 321
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__1));
#line 321
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 321
if(c_rt_lib0check_true_native(___nl__6)){ goto label_22;}
#line 322
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 322
c_rt_lib0move(&___nl__7, translator_priv0calc_val(___nl__8, ___ref___2));
#line 322
c_rt_lib0clear(&___nl__8);
#line 322
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 322
c_rt_lib0clear(&___nl__7);
#line 323
goto label_21;
#line 323
label_22:
#line 324
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 324
c_rt_lib0move(&___nl__7, translator_priv0dest_val(___nl__8, ___nl__1, ___ref___2));
#line 324
c_rt_lib0clear(&___nl__8);
#line 324
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 324
c_rt_lib0clear(&___nl__7);
#line 325
goto label_21;
#line 325
label_21:
#line 325
c_rt_lib0clear(&___nl__6);
#line 326
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 326
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__1, ___nl__4, ___nl__5, ___nl__6, ___ref___2));
#line 326
c_rt_lib0clear(&___nl__6);
#line 326
c_rt_lib0clear(&___nl__4);
#line 326
c_rt_lib0clear(&___nl__5);
#line 327
goto label_1;
#line 327
label_1:
#line 327
c_rt_lib0clear(&___nl__3);
#line 327
c_rt_lib0clear(&___nl__0);
#line 327
c_rt_lib0clear(&___nl__1);
#line 327
return NULL;
}

ImmT translator_priv0print_cmd_array(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 331
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 332
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 332
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 332
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__0));
#line 332
label_3:
#line 332
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 332
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 332
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 333
c_rt_lib0delete(translator_priv0print_cmd(___nl__3, ___ref___1));
#line 334
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 334
goto label_3;
#line 334
label_1:
#line 334
c_rt_lib0clear(&___nl__3);
#line 334
c_rt_lib0clear(&___nl__4);
#line 334
c_rt_lib0clear(&___nl__5);
#line 334
c_rt_lib0clear(&___nl__6);
#line 334
c_rt_lib0clear(&___nl__7);
#line 335
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 335
c_rt_lib0clear(&___nl__2);
#line 335
c_rt_lib0clear(&___nl__0);
#line 335
return NULL;
}

ImmT translator_priv0print_try_ensure(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
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
#line 339
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(793)));
#line 339
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 341
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(794)));
#line 341
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 342
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(795)));
#line 342
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 342
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 342
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 342
nl_die_arg(___nl__3);
#line 339
label_2:
#line 339
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(793)));
#line 340
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 340
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 340
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 340
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(650), ___nl__8));
#line 340
c_rt_lib0clear(&___nl__6);
#line 340
c_rt_lib0clear(&___nl__7);
#line 340
c_rt_lib0clear(&___nl__8);
#line 340
c_rt_lib0delete(translator_priv0print_var_decl(___nl__5, ___ref___2));
#line 340
c_rt_lib0clear(&___nl__5);
#line 340
c_rt_lib0clear(&___nl__4);
#line 341
goto label_1;
#line 341
label_3:
#line 341
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(794)));
#line 341
c_rt_lib0clear(&___nl__4);
#line 342
goto label_1;
#line 342
label_4:
#line 342
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(795)));
#line 342
c_rt_lib0clear(&___nl__4);
#line 343
goto label_1;
#line 343
label_1:
#line 343
c_rt_lib0clear(&___nl__3);
#line 344
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 345
c_rt_lib0move(&___nl__4, translator_priv0new_register(___ref___2));
#line 347
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(793)));
#line 347
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 352
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(794)));
#line 352
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 354
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(795)));
#line 354
if(c_rt_lib0check_true_native(___nl__6)){ goto label_8;}
#line 354
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 354
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__0));
#line 354
nl_die_arg(___nl__6);
#line 347
label_6:
#line 347
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(793)));
#line 348
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(650)));
#line 348
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(650)));
#line 348
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 350
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(38)));
#line 350
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 350
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 350
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 350
nl_die_arg(___nl__9);
#line 348
label_10:
#line 348
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(650)));
#line 349
c_rt_lib0move(&___nl__11, translator_priv0calc_val(___nl__10, ___ref___2));
#line 349
c_rt_lib0copy(&___nl__5, ___nl__11);
#line 349
c_rt_lib0clear(&___nl__11);
#line 349
c_rt_lib0clear(&___nl__10);
#line 350
goto label_9;
#line 350
label_11:
#line 351
goto label_9;
#line 351
label_9:
#line 351
c_rt_lib0clear(&___nl__8);
#line 351
c_rt_lib0clear(&___nl__9);
#line 351
c_rt_lib0clear(&___nl__7);
#line 352
goto label_5;
#line 352
label_7:
#line 352
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(794)));
#line 353
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(240)));
#line 353
c_rt_lib0move(&___nl__8, translator_priv0calc_val(___nl__9, ___ref___2));
#line 353
c_rt_lib0clear(&___nl__9);
#line 353
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 353
c_rt_lib0clear(&___nl__8);
#line 353
c_rt_lib0clear(&___nl__7);
#line 354
goto label_5;
#line 354
label_8:
#line 354
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(795)));
#line 355
c_rt_lib0move(&___nl__8, translator_priv0calc_val(___nl__7, ___ref___2));
#line 355
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 355
c_rt_lib0clear(&___nl__8);
#line 355
c_rt_lib0clear(&___nl__7);
#line 356
goto label_5;
#line 356
label_5:
#line 356
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___2));
#line 358
c_rt_lib0move(&___nl__8,___get_global_const(45));
#line 358
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__4, ___get_global_const(40), ___nl__5, ___get_global_const(73), ___nl__8));
#line 358
c_rt_lib0clear(&___nl__8);
#line 358
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__7));
#line 358
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__7));
#line 358
c_rt_lib0clear(&___nl__7);
#line 359
c_rt_lib0delete(translator_priv0print_if_goto(___nl__6, ___nl__4, ___ref___2));
#line 360
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 360
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 360
if(c_rt_lib0check_true_native(___nl__7)){ goto label_13;}
#line 361
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__5));
#line 361
c_rt_lib0delete(translator_priv0print_safe_return(___nl__8, ___ref___2));
#line 361
c_rt_lib0clear(&___nl__8);
#line 362
goto label_12;
#line 362
label_13:
#line 363
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__5));
#line 363
c_rt_lib0move(&___nl__10,___get_global_const(80));
#line 363
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__5, ___get_global_const(40), ___nl__9, ___get_global_const(78), ___nl__10));
#line 363
c_rt_lib0clear(&___nl__9);
#line 363
c_rt_lib0clear(&___nl__10);
#line 363
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__8));
#line 363
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 363
c_rt_lib0clear(&___nl__8);
#line 364
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__5));
#line 364
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 364
c_rt_lib0clear(&___nl__8);
#line 365
goto label_12;
#line 365
label_12:
#line 365
c_rt_lib0clear(&___nl__7);
#line 366
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___2));
#line 367
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(793)));
#line 367
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 369
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(794)));
#line 369
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(795)));
#line 374
if(c_rt_lib0check_true_native(___nl__7)){ goto label_17;}
#line 374
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 374
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__0));
#line 374
nl_die_arg(___nl__7);
#line 367
label_15:
#line 367
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(793)));
#line 368
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(78)));
#line 368
c_rt_lib0move(&___nl__10, translator_priv0get_var_register(___nl__11, ___ref___2));
#line 368
c_rt_lib0clear(&___nl__11);
#line 368
c_rt_lib0move(&___nl__11,___get_global_const(45));
#line 368
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__10, ___get_global_const(40), ___nl__5, ___get_global_const(73), ___nl__11));
#line 368
c_rt_lib0clear(&___nl__10);
#line 368
c_rt_lib0clear(&___nl__11);
#line 368
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(225), ___nl__9));
#line 368
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__9));
#line 368
c_rt_lib0clear(&___nl__9);
#line 368
c_rt_lib0clear(&___nl__8);
#line 369
goto label_14;
#line 369
label_16:
#line 369
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(794)));
#line 370
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(239)));
#line 370
c_rt_lib0move(&___nl__11, c_rt_lib0get_false());
#line 370
c_rt_lib0move(&___nl__9, translator_priv0get_value_of_lvalue(___nl__10, ___nl__11, ___ref___2));
#line 370
c_rt_lib0clear(&___nl__11);
#line 370
c_rt_lib0clear(&___nl__10);
#line 371
c_rt_lib0move(&___nl__11, array0len(___nl__9));
#line 371
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 371
c_rt_lib0move(&___nl__11, c_rt_lib0sub_mod(___nl__11, ___nl__12));
#line 371
c_rt_lib0clear(&___nl__12);
#line 371
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__9, ___nl__11));
#line 371
c_rt_lib0clear(&___nl__11);
#line 371
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(650)));
#line 372
c_rt_lib0move(&___nl__12,___get_global_const(45));
#line 372
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__10, ___get_global_const(40), ___nl__5, ___get_global_const(73), ___nl__12));
#line 372
c_rt_lib0clear(&___nl__12);
#line 372
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(225), ___nl__11));
#line 372
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__11));
#line 372
c_rt_lib0clear(&___nl__11);
#line 373
c_rt_lib0move(&___nl__11, c_rt_lib0get_false());
#line 373
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__9, ___nl__11, ___ref___2));
#line 373
c_rt_lib0clear(&___nl__11);
#line 373
c_rt_lib0clear(&___nl__9);
#line 373
c_rt_lib0clear(&___nl__10);
#line 373
c_rt_lib0clear(&___nl__8);
#line 374
goto label_14;
#line 374
label_17:
#line 374
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(795)));
#line 374
c_rt_lib0clear(&___nl__8);
#line 375
goto label_14;
#line 375
label_14:
#line 375
c_rt_lib0clear(&___nl__7);
#line 376
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 376
c_rt_lib0clear(&___nl__3);
#line 376
c_rt_lib0clear(&___nl__4);
#line 376
c_rt_lib0clear(&___nl__5);
#line 376
c_rt_lib0clear(&___nl__6);
#line 376
c_rt_lib0clear(&___nl__0);
#line 376
c_rt_lib0clear(&___nl__1);
#line 376
return NULL;
}

ImmT translator_priv0start_new_instruction(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 380
c_rt_lib0move(&___nl__2,___get_global_const(217));
#line 380
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___1, ___nl__2));
#line 380
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 380
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(399), ___nl__3);
#line 380
c_rt_lib0move(&___nl__4,___get_global_const(217));
#line 380
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__4, ___nl__2));
#line 380
c_rt_lib0clear(&___nl__4);
#line 380
c_rt_lib0clear(&___nl__2);
#line 380
c_rt_lib0clear(&___nl__3);
#line 381
c_rt_lib0move(&___nl__2,___get_global_const(217));
#line 381
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___1, ___nl__2));
#line 381
c_rt_lib0move(&___nl__3,___get_global_const(640));
#line 381
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(___nl__2, ___nl__3));
#line 381
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 381
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 381
c_rt_lib0move(&___nl__5,___get_global_const(640));
#line 381
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__2, ___nl__5, ___nl__3));
#line 381
c_rt_lib0move(&___nl__5,___get_global_const(217));
#line 381
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__2));
#line 381
c_rt_lib0clear(&___nl__5);
#line 381
c_rt_lib0clear(&___nl__2);
#line 381
c_rt_lib0clear(&___nl__3);
#line 381
c_rt_lib0clear(&___nl__4);
#line 381
c_rt_lib0clear(&___nl__0);
#line 381
return NULL;
}

ImmT translator_priv0print_cmd(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 385
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(217)));
#line 385
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__2, ___ref___1));
#line 385
c_rt_lib0clear(&___nl__2);
#line 386
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 386
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(764)));
#line 386
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 388
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(766)));
#line 388
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 390
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(119)));
#line 390
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 392
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(768)));
#line 392
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 394
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(767)));
#line 394
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 396
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(769)));
#line 396
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 398
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(765)));
#line 398
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 400
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(778)));
#line 400
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 401
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(650)));
#line 401
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 403
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(775)));
#line 403
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 405
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(75)));
#line 405
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 407
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(774)));
#line 407
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 409
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(777)));
#line 409
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 411
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(80)));
#line 411
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 413
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(772)));
#line 413
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 415
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(773)));
#line 415
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 417
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(233)));
#line 417
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 419
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(776)));
#line 419
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 421
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(770)));
#line 421
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 423
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(771)));
#line 423
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 423
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 423
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 423
nl_die_arg(___nl__3);
#line 386
label_2:
#line 386
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(764)));
#line 387
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 387
c_rt_lib0delete(translator_priv0print_if(___nl__4, ___nl__5, ___ref___1));
#line 387
c_rt_lib0clear(&___nl__5);
#line 387
c_rt_lib0clear(&___nl__4);
#line 388
goto label_1;
#line 388
label_3:
#line 388
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(766)));
#line 389
c_rt_lib0delete(translator_priv0print_fora(___nl__4, ___ref___1));
#line 389
c_rt_lib0clear(&___nl__4);
#line 390
goto label_1;
#line 390
label_4:
#line 390
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(119)));
#line 391
c_rt_lib0delete(translator_priv0print_loop(___nl__4, ___ref___1));
#line 391
c_rt_lib0clear(&___nl__4);
#line 392
goto label_1;
#line 392
label_5:
#line 392
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(768)));
#line 393
c_rt_lib0delete(translator_priv0print_rep(___nl__4, ___ref___1));
#line 393
c_rt_lib0clear(&___nl__4);
#line 394
goto label_1;
#line 394
label_6:
#line 394
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(767)));
#line 395
c_rt_lib0delete(translator_priv0print_forh(___nl__4, ___ref___1));
#line 395
c_rt_lib0clear(&___nl__4);
#line 396
goto label_1;
#line 396
label_7:
#line 396
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(769)));
#line 397
c_rt_lib0delete(translator_priv0print_while(___nl__4, ___ref___1));
#line 397
c_rt_lib0clear(&___nl__4);
#line 398
goto label_1;
#line 398
label_8:
#line 398
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(765)));
#line 399
c_rt_lib0delete(translator_priv0print_for(___nl__4, ___ref___1));
#line 399
c_rt_lib0clear(&___nl__4);
#line 400
goto label_1;
#line 400
label_9:
#line 401
goto label_1;
#line 401
label_10:
#line 401
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(650)));
#line 402
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 402
c_rt_lib0delete(translator_priv0print_val(___nl__4, ___nl__5, ___ref___1));
#line 402
c_rt_lib0clear(&___nl__5);
#line 402
c_rt_lib0clear(&___nl__4);
#line 403
goto label_1;
#line 403
label_11:
#line 403
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(775)));
#line 404
c_rt_lib0delete(translator_priv0print_cmd_array(___nl__4, ___ref___1));
#line 404
c_rt_lib0clear(&___nl__4);
#line 405
goto label_1;
#line 405
label_12:
#line 405
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(75)));
#line 406
c_rt_lib0delete(translator_priv0print_return(___nl__4, ___ref___1));
#line 406
c_rt_lib0clear(&___nl__4);
#line 407
goto label_1;
#line 407
label_13:
#line 407
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(774)));
#line 408
c_rt_lib0delete(translator_priv0print_match(___nl__4, ___ref___1));
#line 408
c_rt_lib0clear(&___nl__4);
#line 409
goto label_1;
#line 409
label_14:
#line 409
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(777)));
#line 410
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 410
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__4, ___nl__5, ___ref___1));
#line 410
c_rt_lib0clear(&___nl__5);
#line 410
c_rt_lib0clear(&___nl__4);
#line 411
goto label_1;
#line 411
label_15:
#line 411
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(80)));
#line 412
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 412
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__4, ___nl__5, ___ref___1));
#line 412
c_rt_lib0clear(&___nl__5);
#line 412
c_rt_lib0clear(&___nl__4);
#line 413
goto label_1;
#line 413
label_16:
#line 414
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1067)));
#line 414
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(772)));
#line 414
c_rt_lib0delete(translator_priv0print_loop_break(___ref___1, ___nl__4));
#line 414
c_rt_lib0clear(&___nl__4);
#line 415
goto label_1;
#line 415
label_17:
#line 416
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1067)));
#line 416
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(773)));
#line 416
c_rt_lib0delete(translator_priv0print_loop_break(___ref___1, ___nl__4));
#line 416
c_rt_lib0clear(&___nl__4);
#line 417
goto label_1;
#line 417
label_18:
#line 417
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(233)));
#line 418
c_rt_lib0delete(translator_priv0print_die(___nl__4, ___ref___1));
#line 418
c_rt_lib0clear(&___nl__4);
#line 419
goto label_1;
#line 419
label_19:
#line 419
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(776)));
#line 420
c_rt_lib0delete(translator_priv0print_var_decl(___nl__4, ___ref___1));
#line 420
c_rt_lib0clear(&___nl__4);
#line 421
goto label_1;
#line 421
label_20:
#line 421
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(770)));
#line 422
c_rt_lib0delete(translator_priv0print_if_mod(___nl__4, ___ref___1));
#line 422
c_rt_lib0clear(&___nl__4);
#line 423
goto label_1;
#line 423
label_21:
#line 423
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(771)));
#line 424
c_rt_lib0delete(translator_priv0print_unless_mod(___nl__4, ___ref___1));
#line 424
c_rt_lib0clear(&___nl__4);
#line 425
goto label_1;
#line 425
label_1:
#line 425
c_rt_lib0clear(&___nl__2);
#line 425
c_rt_lib0clear(&___nl__3);
#line 425
c_rt_lib0clear(&___nl__0);
#line 425
return NULL;
}

ImmT translator_priv0print_loop_break(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 429
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1066)));
#line 429
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1062)));
#line 429
label_2:
#line 429
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1066)));
#line 429
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1062)));
#line 429
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 429
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 429
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 430
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(878)));
#line 430
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 430
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__2));
#line 430
c_rt_lib0clear(&___nl__5);
#line 430
c_rt_lib0delete(translator_priv0undef_reg(___nl__4, ___ref___0));
#line 430
c_rt_lib0clear(&___nl__4);
#line 430
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 430
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 430
c_rt_lib0clear(&___nl__4);
#line 431
goto label_2;
#line 431
label_1:
#line 431
c_rt_lib0clear(&___nl__2);
#line 431
c_rt_lib0clear(&___nl__3);
#line 432
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1065)));
#line 432
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__2));
#line 432
c_rt_lib0delete(translator_priv0print(___ref___0, ___nl__2));
#line 432
c_rt_lib0clear(&___nl__2);
#line 432
c_rt_lib0clear(&___nl__1);
#line 432
return NULL;
}

ImmT translator_priv0print_if_mod(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 436
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 436
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 436
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 436
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 436
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(217)));
#line 436
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 436
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(217), ___nl__7, ___get_global_const(214), ___nl__8));
#line 436
c_rt_lib0clear(&___nl__7);
#line 436
c_rt_lib0clear(&___nl__8);
#line 436
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(779), ___nl__3, ___get_global_const(764), ___nl__4, ___get_global_const(780), ___nl__5, ___get_global_const(781), ___nl__6));
#line 436
c_rt_lib0clear(&___nl__3);
#line 436
c_rt_lib0clear(&___nl__4);
#line 436
c_rt_lib0clear(&___nl__5);
#line 436
c_rt_lib0clear(&___nl__6);
#line 442
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 442
c_rt_lib0delete(translator_priv0print_if(___nl__2, ___nl__3, ___ref___1));
#line 442
c_rt_lib0clear(&___nl__3);
#line 442
c_rt_lib0clear(&___nl__2);
#line 442
c_rt_lib0clear(&___nl__0);
#line 442
return NULL;
}

ImmT translator_priv0print_unless_mod(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 447
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 447
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(802), ___nl__4));
#line 447
c_rt_lib0move(&___nl__5,___get_global_const(247));
#line 447
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(238), ___nl__4, ___get_global_const(405), ___nl__5));
#line 447
c_rt_lib0clear(&___nl__4);
#line 447
c_rt_lib0clear(&___nl__5);
#line 447
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(805), ___nl__3));
#line 447
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 447
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 447
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 447
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(217)));
#line 447
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 447
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(217), ___nl__7, ___get_global_const(214), ___nl__8));
#line 447
c_rt_lib0clear(&___nl__7);
#line 447
c_rt_lib0clear(&___nl__8);
#line 447
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(779), ___nl__3, ___get_global_const(764), ___nl__4, ___get_global_const(780), ___nl__5, ___get_global_const(781), ___nl__6));
#line 447
c_rt_lib0clear(&___nl__3);
#line 447
c_rt_lib0clear(&___nl__4);
#line 447
c_rt_lib0clear(&___nl__5);
#line 447
c_rt_lib0clear(&___nl__6);
#line 453
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 453
c_rt_lib0delete(translator_priv0print_if(___nl__2, ___nl__3, ___ref___1));
#line 453
c_rt_lib0clear(&___nl__3);
#line 453
c_rt_lib0clear(&___nl__2);
#line 453
c_rt_lib0clear(&___nl__0);
#line 453
return NULL;
}

ImmT translator_priv0print_if(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
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
#line 457
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 458
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 459
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___2));
#line 460
c_rt_lib0move(&___nl__6, translator_priv0new_register(___ref___2));
#line 461
c_rt_lib0move(&___nl__7, translator_priv0save_registers(___ref___2));
#line 462
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 462
c_rt_lib0delete(translator_priv0print_val(___nl__8, ___nl__6, ___ref___2));
#line 462
c_rt_lib0clear(&___nl__8);
#line 463
c_rt_lib0move(&___nl__9,___get_global_const(247));
#line 463
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__6, ___get_global_const(40), ___nl__6, ___get_global_const(405), ___nl__9));
#line 463
c_rt_lib0clear(&___nl__9);
#line 463
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__8));
#line 463
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 463
c_rt_lib0clear(&___nl__8);
#line 464
c_rt_lib0delete(translator_priv0restore_registers(___nl__7, ___ref___2));
#line 465
c_rt_lib0delete(translator_priv0print_if_goto(___nl__5, ___nl__6, ___ref___2));
#line 466
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(764)));
#line 466
c_rt_lib0delete(translator_priv0print_cmd(___nl__8, ___ref___2));
#line 466
c_rt_lib0clear(&___nl__8);
#line 467
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 467
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 467
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 467
if(c_rt_lib0check_true_native(___nl__8)){ goto label_2;}
#line 467
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(764)));
#line 467
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(217)));
#line 467
c_rt_lib0move(&___nl__9, translator0last_debug_char(___nl__10));
#line 467
c_rt_lib0clear(&___nl__10);
#line 467
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__9, ___ref___2));
#line 467
c_rt_lib0clear(&___nl__9);
#line 467
goto label_2;
#line 467
label_2:
#line 467
c_rt_lib0clear(&___nl__8);
#line 468
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__4));
#line 468
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 468
c_rt_lib0clear(&___nl__8);
#line 469
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___2));
#line 470
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(780)));
#line 470
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 470
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 470
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 470
label_5:
#line 470
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 470
if(c_rt_lib0check_true_native(___nl__13)){ goto label_3;}
#line 470
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 471
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(217)));
#line 471
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__14, ___ref___2));
#line 471
c_rt_lib0clear(&___nl__14);
#line 472
c_rt_lib0move(&___nl__14, translator_priv0get_sim_label(___ref___2));
#line 472
c_rt_lib0copy(&___nl__5, ___nl__14);
#line 472
c_rt_lib0clear(&___nl__14);
#line 473
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(779)));
#line 473
c_rt_lib0delete(translator_priv0print_val(___nl__14, ___nl__6, ___ref___2));
#line 473
c_rt_lib0clear(&___nl__14);
#line 474
c_rt_lib0move(&___nl__15,___get_global_const(247));
#line 474
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__6, ___get_global_const(40), ___nl__6, ___get_global_const(405), ___nl__15));
#line 474
c_rt_lib0clear(&___nl__15);
#line 474
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__14));
#line 474
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__14));
#line 474
c_rt_lib0clear(&___nl__14);
#line 475
c_rt_lib0delete(translator_priv0restore_registers(___nl__7, ___ref___2));
#line 476
c_rt_lib0delete(translator_priv0print_if_goto(___nl__5, ___nl__6, ___ref___2));
#line 477
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(214)));
#line 477
c_rt_lib0delete(translator_priv0print_cmd(___nl__14, ___ref___2));
#line 477
c_rt_lib0clear(&___nl__14);
#line 478
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(214)));
#line 478
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(217)));
#line 478
c_rt_lib0move(&___nl__14, translator0last_debug_char(___nl__15));
#line 478
c_rt_lib0clear(&___nl__15);
#line 478
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__14, ___ref___2));
#line 478
c_rt_lib0clear(&___nl__14);
#line 479
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__4));
#line 479
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__14));
#line 479
c_rt_lib0clear(&___nl__14);
#line 480
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___2));
#line 481
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 481
goto label_5;
#line 481
label_3:
#line 481
c_rt_lib0clear(&___nl__8);
#line 481
c_rt_lib0clear(&___nl__9);
#line 481
c_rt_lib0clear(&___nl__10);
#line 481
c_rt_lib0clear(&___nl__11);
#line 481
c_rt_lib0clear(&___nl__12);
#line 481
c_rt_lib0clear(&___nl__13);
#line 482
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(781)));
#line 482
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(214)));
#line 482
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(778)));
#line 482
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 482
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 482
if(c_rt_lib0check_true_native(___nl__8)){ goto label_7;}
#line 483
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(781)));
#line 483
c_rt_lib0delete(translator_priv0print_cmd(___nl__9, ___ref___2));
#line 483
c_rt_lib0clear(&___nl__9);
#line 484
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(781)));
#line 484
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(217)));
#line 484
c_rt_lib0move(&___nl__9, translator0last_debug_char(___nl__10));
#line 484
c_rt_lib0clear(&___nl__10);
#line 484
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__9, ___ref___2));
#line 484
c_rt_lib0clear(&___nl__9);
#line 485
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__4));
#line 485
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__9));
#line 485
c_rt_lib0clear(&___nl__9);
#line 486
goto label_7;
#line 486
label_7:
#line 486
c_rt_lib0clear(&___nl__8);
#line 487
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 488
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 488
c_rt_lib0clear(&___nl__3);
#line 488
c_rt_lib0clear(&___nl__4);
#line 488
c_rt_lib0clear(&___nl__5);
#line 488
c_rt_lib0clear(&___nl__6);
#line 488
c_rt_lib0clear(&___nl__7);
#line 488
c_rt_lib0clear(&___nl__0);
#line 488
c_rt_lib0clear(&___nl__1);
#line 488
return NULL;
}

ImmT translator_priv0print_call_base(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 495
c_rt_lib0move(&___nl__5,___get_global_const(306));
#line 495
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(4, ___get_global_const(237), ___nl__0, ___get_global_const(261), ___nl__5, ___get_global_const(389), ___nl__1, ___get_global_const(74), ___nl__2));
#line 495
c_rt_lib0clear(&___nl__5);
#line 495
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(221), ___nl__4));
#line 495
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 495
c_rt_lib0clear(&___nl__4);
#line 495
c_rt_lib0clear(&___nl__0);
#line 495
c_rt_lib0clear(&___nl__1);
#line 495
c_rt_lib0clear(&___nl__2);
#line 495
return NULL;
}

ImmT translator_priv0save_loop_break(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 499
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1067)));
#line 500
c_rt_lib0move(&___nl__4, translator_priv0save_registers(___ref___0));
#line 501
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1065), ___nl__1, ___get_global_const(1066), ___nl__4));
#line 501
c_rt_lib0move(&___nl__6,___get_global_const(1067));
#line 501
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 501
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 501
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(772), ___nl__7);
#line 501
c_rt_lib0move(&___nl__8,___get_global_const(1067));
#line 501
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__6));
#line 501
c_rt_lib0clear(&___nl__8);
#line 501
c_rt_lib0clear(&___nl__5);
#line 501
c_rt_lib0clear(&___nl__6);
#line 501
c_rt_lib0clear(&___nl__7);
#line 502
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1065), ___nl__2, ___get_global_const(1066), ___nl__4));
#line 502
c_rt_lib0move(&___nl__6,___get_global_const(1067));
#line 502
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 502
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 502
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(773), ___nl__7);
#line 502
c_rt_lib0move(&___nl__8,___get_global_const(1067));
#line 502
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__6));
#line 502
c_rt_lib0clear(&___nl__8);
#line 502
c_rt_lib0clear(&___nl__5);
#line 502
c_rt_lib0clear(&___nl__6);
#line 502
c_rt_lib0clear(&___nl__7);
#line 503
c_rt_lib0clear(&___nl__1);
#line 503
c_rt_lib0clear(&___nl__2);
#line 503
c_rt_lib0clear(&___nl__4);
#line 503
return ___nl__3;
#line 503
c_rt_lib0clear(&___nl__3);
#line 503
c_rt_lib0clear(&___nl__4);
#line 503
c_rt_lib0clear(&___nl__1);
#line 503
c_rt_lib0clear(&___nl__2);
#line 503
return NULL;
}

ImmT translator_priv0print_fora(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 507
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(217)));
#line 507
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(399)));
#line 508
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___1));
#line 509
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(3)));
#line 509
c_rt_lib0move(&___nl__4, translator_priv0calc_val(___nl__5, ___ref___1));
#line 509
c_rt_lib0clear(&___nl__5);
#line 510
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(783)));
#line 510
c_rt_lib0move(&___nl__5, translator_priv0print_var_decl(___nl__6, ___ref___1));
#line 510
c_rt_lib0clear(&___nl__6);
#line 511
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___1));
#line 512
c_rt_lib0move(&___nl__7, translator_priv0get_sim_label(___ref___1));
#line 513
c_rt_lib0move(&___nl__8, translator_priv0get_sim_label(___ref___1));
#line 514
c_rt_lib0move(&___nl__9, translator_priv0new_register(___ref___1));
#line 515
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 515
c_rt_lib0delete(translator_priv0load_const(___nl__10, ___nl__9, ___ref___1));
#line 515
c_rt_lib0clear(&___nl__10);
#line 516
c_rt_lib0move(&___nl__10, translator_priv0new_register(___ref___1));
#line 517
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 517
c_rt_lib0delete(translator_priv0load_const(___nl__11, ___nl__10, ___ref___1));
#line 517
c_rt_lib0clear(&___nl__11);
#line 518
c_rt_lib0move(&___nl__11, translator_priv0new_register(___ref___1));
#line 519
c_rt_lib0move(&___nl__12,___get_global_const(1076));
#line 519
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__4));
#line 519
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(1, ___nl__14));
#line 519
c_rt_lib0clear(&___nl__14);
#line 519
c_rt_lib0delete(translator_priv0print_call_base(___nl__11, ___nl__12, ___nl__13, ___ref___1));
#line 519
c_rt_lib0clear(&___nl__13);
#line 519
c_rt_lib0clear(&___nl__12);
#line 520
c_rt_lib0move(&___nl__12, translator_priv0new_register(___ref___1));
#line 521
c_rt_lib0delete(translator_priv0print_sim_label(___nl__8, ___ref___1));
#line 522
c_rt_lib0move(&___nl__13,___get_global_const(272));
#line 522
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__12, ___nl__9, ___nl__11, ___nl__13, ___ref___1));
#line 522
c_rt_lib0clear(&___nl__13);
#line 523
c_rt_lib0delete(translator_priv0print_if_goto(___nl__6, ___nl__12, ___ref___1));
#line 524
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__5, ___get_global_const(40), ___nl__4, ___get_global_const(241), ___nl__9));
#line 524
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(228), ___nl__13));
#line 524
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__13));
#line 524
c_rt_lib0clear(&___nl__13);
#line 525
c_rt_lib0move(&___nl__13, translator_priv0save_loop_break(___ref___1, ___nl__6, ___nl__7));
#line 526
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 526
c_rt_lib0delete(translator_priv0print_cmd(___nl__14, ___ref___1));
#line 526
c_rt_lib0clear(&___nl__14);
#line 527
c_rt_lib0delete(translator_priv0print_sim_label(___nl__7, ___ref___1));
#line 528
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(863)));
#line 528
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 528
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 528
if(c_rt_lib0check_true_native(___nl__14)){ goto label_2;}
#line 528
c_rt_lib0move(&___nl__15, translator0last_debug_char(___nl__2));
#line 528
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__15, ___ref___1));
#line 528
c_rt_lib0clear(&___nl__15);
#line 528
goto label_2;
#line 528
label_2:
#line 528
c_rt_lib0clear(&___nl__14);
#line 529
c_rt_lib0move(&___nl__15,___get_global_const(251));
#line 529
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(4, ___get_global_const(237), ___nl__9, ___get_global_const(239), ___nl__9, ___get_global_const(240), ___nl__10, ___get_global_const(405), ___nl__15));
#line 529
c_rt_lib0clear(&___nl__15);
#line 529
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__14));
#line 529
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__14));
#line 529
c_rt_lib0clear(&___nl__14);
#line 530
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__8));
#line 530
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__14));
#line 530
c_rt_lib0clear(&___nl__14);
#line 531
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___1));
#line 532
c_rt_lib0copy(&___nl__14, ___nl__13);
#line 532
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1067), ___nl__14);
#line 532
c_rt_lib0clear(&___nl__14);
#line 533
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___1));
#line 533
c_rt_lib0clear(&___nl__2);
#line 533
c_rt_lib0clear(&___nl__3);
#line 533
c_rt_lib0clear(&___nl__4);
#line 533
c_rt_lib0clear(&___nl__5);
#line 533
c_rt_lib0clear(&___nl__6);
#line 533
c_rt_lib0clear(&___nl__7);
#line 533
c_rt_lib0clear(&___nl__8);
#line 533
c_rt_lib0clear(&___nl__9);
#line 533
c_rt_lib0clear(&___nl__10);
#line 533
c_rt_lib0clear(&___nl__11);
#line 533
c_rt_lib0clear(&___nl__12);
#line 533
c_rt_lib0clear(&___nl__13);
#line 533
c_rt_lib0clear(&___nl__0);
#line 533
return NULL;
}

ImmT translator_priv0print_loop(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 537
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 538
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 539
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 540
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 541
c_rt_lib0move(&___nl__5, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__4));
#line 542
c_rt_lib0delete(translator_priv0print_cmd(___nl__0, ___ref___1));
#line 543
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(217)));
#line 543
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__6, ___ref___1));
#line 543
c_rt_lib0clear(&___nl__6);
#line 544
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__4));
#line 544
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__6));
#line 544
c_rt_lib0clear(&___nl__6);
#line 545
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 546
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 546
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1067), ___nl__6);
#line 546
c_rt_lib0clear(&___nl__6);
#line 547
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 547
c_rt_lib0clear(&___nl__2);
#line 547
c_rt_lib0clear(&___nl__3);
#line 547
c_rt_lib0clear(&___nl__4);
#line 547
c_rt_lib0clear(&___nl__5);
#line 547
c_rt_lib0clear(&___nl__0);
#line 547
return NULL;
}

ImmT translator_priv0print_rep(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 551
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 552
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 553
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 554
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___1));
#line 555
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(784)));
#line 555
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___1));
#line 555
c_rt_lib0clear(&___nl__7);
#line 556
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(783)));
#line 556
c_rt_lib0move(&___nl__7, translator_priv0print_var_decl(___nl__8, ___ref___1));
#line 556
c_rt_lib0clear(&___nl__8);
#line 557
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 557
c_rt_lib0delete(translator_priv0load_const(___nl__8, ___nl__7, ___ref___1));
#line 557
c_rt_lib0clear(&___nl__8);
#line 558
c_rt_lib0move(&___nl__8, translator_priv0new_register(___ref___1));
#line 559
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 559
c_rt_lib0delete(translator_priv0load_const(___nl__9, ___nl__8, ___ref___1));
#line 559
c_rt_lib0clear(&___nl__9);
#line 560
c_rt_lib0move(&___nl__9, translator_priv0new_register(___ref___1));
#line 561
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___1));
#line 562
c_rt_lib0move(&___nl__10,___get_global_const(272));
#line 562
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__9, ___nl__7, ___nl__6, ___nl__10, ___ref___1));
#line 562
c_rt_lib0clear(&___nl__10);
#line 563
c_rt_lib0delete(translator_priv0print_if_goto(___nl__3, ___nl__9, ___ref___1));
#line 564
c_rt_lib0move(&___nl__10, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__4));
#line 565
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 565
c_rt_lib0delete(translator_priv0print_cmd(___nl__11, ___ref___1));
#line 565
c_rt_lib0clear(&___nl__11);
#line 566
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 567
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(863)));
#line 567
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 567
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 567
if(c_rt_lib0check_true_native(___nl__11)){ goto label_2;}
#line 567
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 567
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(217)));
#line 567
c_rt_lib0move(&___nl__12, translator0last_debug_char(___nl__13));
#line 567
c_rt_lib0clear(&___nl__13);
#line 567
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__12, ___ref___1));
#line 567
c_rt_lib0clear(&___nl__12);
#line 567
goto label_2;
#line 567
label_2:
#line 567
c_rt_lib0clear(&___nl__11);
#line 568
c_rt_lib0move(&___nl__12,___get_global_const(251));
#line 568
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(4, ___get_global_const(237), ___nl__7, ___get_global_const(239), ___nl__7, ___get_global_const(240), ___nl__8, ___get_global_const(405), ___nl__12));
#line 568
c_rt_lib0clear(&___nl__12);
#line 568
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__11));
#line 568
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__11));
#line 568
c_rt_lib0clear(&___nl__11);
#line 569
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__5));
#line 569
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__11));
#line 569
c_rt_lib0clear(&___nl__11);
#line 570
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 571
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 571
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1067), ___nl__11);
#line 571
c_rt_lib0clear(&___nl__11);
#line 572
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
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
c_rt_lib0clear(&___nl__7);
#line 572
c_rt_lib0clear(&___nl__8);
#line 572
c_rt_lib0clear(&___nl__9);
#line 572
c_rt_lib0clear(&___nl__10);
#line 572
c_rt_lib0clear(&___nl__0);
#line 572
return NULL;
}

ImmT translator_priv0print_forh(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 576
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(217)));
#line 576
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(399)));
#line 577
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___1));
#line 578
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 579
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___1));
#line 580
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___1));
#line 581
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(282)));
#line 581
c_rt_lib0move(&___nl__7, translator_priv0calc_val(___nl__8, ___ref___1));
#line 581
c_rt_lib0clear(&___nl__8);
#line 582
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(283)));
#line 582
c_rt_lib0move(&___nl__8, translator_priv0print_var_decl(___nl__9, ___ref___1));
#line 582
c_rt_lib0clear(&___nl__9);
#line 583
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 583
c_rt_lib0move(&___nl__9, translator_priv0print_var_decl(___nl__10, ___ref___1));
#line 583
c_rt_lib0clear(&___nl__10);
#line 584
c_rt_lib0move(&___nl__10, translator_priv0new_register(___ref___1));
#line 585
c_rt_lib0move(&___nl__11,___get_global_const(941));
#line 585
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__7));
#line 585
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 585
c_rt_lib0clear(&___nl__13);
#line 585
c_rt_lib0delete(translator_priv0print_call_base(___nl__10, ___nl__11, ___nl__12, ___ref___1));
#line 585
c_rt_lib0clear(&___nl__12);
#line 585
c_rt_lib0clear(&___nl__11);
#line 586
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___1));
#line 587
c_rt_lib0move(&___nl__11,___get_global_const(942));
#line 587
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__10));
#line 587
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 587
c_rt_lib0clear(&___nl__13);
#line 587
c_rt_lib0delete(translator_priv0print_call_base(___nl__8, ___nl__11, ___nl__12, ___ref___1));
#line 587
c_rt_lib0clear(&___nl__12);
#line 587
c_rt_lib0clear(&___nl__11);
#line 588
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__8, ___ref___1));
#line 589
c_rt_lib0move(&___nl__11,___get_global_const(943));
#line 589
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__10));
#line 589
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 589
c_rt_lib0clear(&___nl__13);
#line 589
c_rt_lib0delete(translator_priv0print_call_base(___nl__8, ___nl__11, ___nl__12, ___ref___1));
#line 589
c_rt_lib0clear(&___nl__12);
#line 589
c_rt_lib0clear(&___nl__11);
#line 590
c_rt_lib0move(&___nl__11,___get_global_const(1075));
#line 590
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__7));
#line 590
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__8));
#line 590
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 590
c_rt_lib0clear(&___nl__13);
#line 590
c_rt_lib0clear(&___nl__14);
#line 590
c_rt_lib0delete(translator_priv0print_call_base(___nl__9, ___nl__11, ___nl__12, ___ref___1));
#line 590
c_rt_lib0clear(&___nl__12);
#line 590
c_rt_lib0clear(&___nl__11);
#line 591
c_rt_lib0move(&___nl__11, translator_priv0save_loop_break(___ref___1, ___nl__4, ___nl__5));
#line 592
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 592
c_rt_lib0delete(translator_priv0print_cmd(___nl__12, ___ref___1));
#line 592
c_rt_lib0clear(&___nl__12);
#line 593
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___1));
#line 594
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(863)));
#line 594
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 594
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 594
if(c_rt_lib0check_true_native(___nl__12)){ goto label_2;}
#line 594
c_rt_lib0move(&___nl__13, translator0last_debug_char(___nl__2));
#line 594
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__13, ___ref___1));
#line 594
c_rt_lib0clear(&___nl__13);
#line 594
goto label_2;
#line 594
label_2:
#line 594
c_rt_lib0clear(&___nl__12);
#line 595
c_rt_lib0move(&___nl__12,___get_global_const(944));
#line 595
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__10));
#line 595
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(1, ___nl__14));
#line 595
c_rt_lib0clear(&___nl__14);
#line 595
c_rt_lib0delete(translator_priv0print_call_base(___nl__10, ___nl__12, ___nl__13, ___ref___1));
#line 595
c_rt_lib0clear(&___nl__13);
#line 595
c_rt_lib0clear(&___nl__12);
#line 596
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__6));
#line 596
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__12));
#line 596
c_rt_lib0clear(&___nl__12);
#line 597
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 598
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 598
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1067), ___nl__12);
#line 598
c_rt_lib0clear(&___nl__12);
#line 599
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___1));
#line 599
c_rt_lib0clear(&___nl__2);
#line 599
c_rt_lib0clear(&___nl__3);
#line 599
c_rt_lib0clear(&___nl__4);
#line 599
c_rt_lib0clear(&___nl__5);
#line 599
c_rt_lib0clear(&___nl__6);
#line 599
c_rt_lib0clear(&___nl__7);
#line 599
c_rt_lib0clear(&___nl__8);
#line 599
c_rt_lib0clear(&___nl__9);
#line 599
c_rt_lib0clear(&___nl__10);
#line 599
c_rt_lib0clear(&___nl__11);
#line 599
c_rt_lib0clear(&___nl__0);
#line 599
return NULL;
}

ImmT translator_priv0print_while(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 603
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 604
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 605
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 606
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(217)));
#line 606
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(399)));
#line 607
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 608
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 608
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___1));
#line 608
c_rt_lib0clear(&___nl__7);
#line 609
c_rt_lib0move(&___nl__8,___get_global_const(247));
#line 609
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__6, ___get_global_const(40), ___nl__6, ___get_global_const(405), ___nl__8));
#line 609
c_rt_lib0clear(&___nl__8);
#line 609
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__7));
#line 609
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 609
c_rt_lib0clear(&___nl__7);
#line 610
c_rt_lib0delete(translator_priv0print_if_goto(___nl__3, ___nl__6, ___ref___1));
#line 611
c_rt_lib0move(&___nl__7, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__4));
#line 612
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 612
c_rt_lib0delete(translator_priv0print_cmd(___nl__8, ___ref___1));
#line 612
c_rt_lib0clear(&___nl__8);
#line 613
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(863)));
#line 613
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 613
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 613
if(c_rt_lib0check_true_native(___nl__8)){ goto label_2;}
#line 613
c_rt_lib0move(&___nl__9, translator0last_debug_char(___nl__5));
#line 613
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__9, ___ref___1));
#line 613
c_rt_lib0clear(&___nl__9);
#line 613
goto label_2;
#line 613
label_2:
#line 613
c_rt_lib0clear(&___nl__8);
#line 614
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__4));
#line 614
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__8));
#line 614
c_rt_lib0clear(&___nl__8);
#line 615
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 616
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 616
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1067), ___nl__8);
#line 616
c_rt_lib0clear(&___nl__8);
#line 617
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 617
c_rt_lib0clear(&___nl__2);
#line 617
c_rt_lib0clear(&___nl__3);
#line 617
c_rt_lib0clear(&___nl__4);
#line 617
c_rt_lib0clear(&___nl__5);
#line 617
c_rt_lib0clear(&___nl__6);
#line 617
c_rt_lib0clear(&___nl__7);
#line 617
c_rt_lib0clear(&___nl__0);
#line 617
return NULL;
}

ImmT translator_priv0print_for(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 621
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 622
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 623
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 624
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___1));
#line 625
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(782)));
#line 625
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(650)));
#line 625
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 627
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(776)));
#line 627
if(c_rt_lib0check_true_native(___nl__7)){ goto label_3;}
#line 627
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 627
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 627
nl_die_arg(___nl__7);
#line 625
label_2:
#line 625
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(650)));
#line 626
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 626
c_rt_lib0delete(translator_priv0print_val(___nl__8, ___nl__9, ___ref___1));
#line 626
c_rt_lib0clear(&___nl__9);
#line 626
c_rt_lib0clear(&___nl__8);
#line 627
goto label_1;
#line 627
label_3:
#line 627
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(776)));
#line 628
c_rt_lib0delete(translator_priv0print_var_decl(___nl__8, ___ref___1));
#line 628
c_rt_lib0clear(&___nl__8);
#line 629
goto label_1;
#line 629
label_1:
#line 629
c_rt_lib0clear(&___nl__6);
#line 629
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 631
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 631
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(778)));
#line 631
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 631
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 631
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 632
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 632
c_rt_lib0move(&___nl__7, translator_priv0calc_val(___nl__8, ___ref___1));
#line 632
c_rt_lib0clear(&___nl__8);
#line 633
c_rt_lib0move(&___nl__9,___get_global_const(247));
#line 633
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__7, ___get_global_const(40), ___nl__7, ___get_global_const(405), ___nl__9));
#line 633
c_rt_lib0clear(&___nl__9);
#line 633
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__8));
#line 633
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__8));
#line 633
c_rt_lib0clear(&___nl__8);
#line 634
c_rt_lib0delete(translator_priv0print_if_goto(___nl__3, ___nl__7, ___ref___1));
#line 634
c_rt_lib0clear(&___nl__7);
#line 635
goto label_5;
#line 635
label_5:
#line 635
c_rt_lib0clear(&___nl__6);
#line 636
c_rt_lib0move(&___nl__6, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__5));
#line 637
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 637
c_rt_lib0delete(translator_priv0print_cmd(___nl__7, ___ref___1));
#line 637
c_rt_lib0clear(&___nl__7);
#line 638
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___1));
#line 639
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(783)));
#line 639
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 639
c_rt_lib0delete(translator_priv0print_val(___nl__7, ___nl__8, ___ref___1));
#line 639
c_rt_lib0clear(&___nl__8);
#line 639
c_rt_lib0clear(&___nl__7);
#line 640
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 640
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(217)));
#line 640
c_rt_lib0move(&___nl__7, translator0last_debug_char(___nl__8));
#line 640
c_rt_lib0clear(&___nl__8);
#line 640
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__7, ___ref___1));
#line 640
c_rt_lib0clear(&___nl__7);
#line 641
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__4));
#line 641
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 641
c_rt_lib0clear(&___nl__7);
#line 642
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 643
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 643
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1067), ___nl__7);
#line 643
c_rt_lib0clear(&___nl__7);
#line 644
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 644
c_rt_lib0clear(&___nl__2);
#line 644
c_rt_lib0clear(&___nl__3);
#line 644
c_rt_lib0clear(&___nl__4);
#line 644
c_rt_lib0clear(&___nl__5);
#line 644
c_rt_lib0clear(&___nl__6);
#line 644
c_rt_lib0clear(&___nl__0);
#line 644
return NULL;
}

ImmT translator_priv0print_match(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 648
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 649
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 650
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 650
c_rt_lib0move(&___nl__4, translator_priv0calc_val(___nl__5, ___ref___1));
#line 650
c_rt_lib0clear(&___nl__5);
#line 651
c_rt_lib0move(&___nl__5, translator_priv0new_register(___ref___1));
#line 652
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___1));
#line 653
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(787)));
#line 653
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 653
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 653
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__7));
#line 653
label_3:
#line 653
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 653
if(c_rt_lib0check_true_native(___nl__12)){ goto label_1;}
#line 653
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 654
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(217)));
#line 654
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__13, ___ref___1));
#line 654
c_rt_lib0clear(&___nl__13);
#line 655
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(788)));
#line 655
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(78)));
#line 655
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__5, ___get_global_const(40), ___nl__4, ___get_global_const(73), ___nl__14));
#line 655
c_rt_lib0clear(&___nl__14);
#line 655
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__13));
#line 655
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__13));
#line 655
c_rt_lib0clear(&___nl__13);
#line 656
c_rt_lib0move(&___nl__13, translator_priv0get_sim_label(___ref___1));
#line 657
c_rt_lib0delete(translator_priv0print_if_goto(___nl__13, ___nl__5, ___ref___1));
#line 658
c_rt_lib0delete(array0push(&___nl__3, ___nl__13));
#line 658
c_rt_lib0clear(&___nl__13);
#line 659
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 659
goto label_3;
#line 659
label_1:
#line 659
c_rt_lib0clear(&___nl__7);
#line 659
c_rt_lib0clear(&___nl__8);
#line 659
c_rt_lib0clear(&___nl__9);
#line 659
c_rt_lib0clear(&___nl__10);
#line 659
c_rt_lib0clear(&___nl__11);
#line 659
c_rt_lib0clear(&___nl__12);
#line 660
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 660
c_rt_lib0delete(translator_priv0load_const(___nl__7, ___nl__5, ___ref___1));
#line 660
c_rt_lib0clear(&___nl__7);
#line 661
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 661
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__5, ___get_global_const(40), ___nl__8));
#line 661
c_rt_lib0clear(&___nl__8);
#line 661
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__7));
#line 661
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 661
c_rt_lib0clear(&___nl__7);
#line 662
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__5));
#line 662
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 662
c_rt_lib0clear(&___nl__7);
#line 663
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 664
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(787)));
#line 664
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 664
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 664
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 664
label_6:
#line 664
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 664
if(c_rt_lib0check_true_native(___nl__13)){ goto label_4;}
#line 664
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 665
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(214)));
#line 665
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(217)));
#line 665
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__14, ___ref___1));
#line 665
c_rt_lib0clear(&___nl__14);
#line 666
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 666
c_rt_lib0delete(translator_priv0print_sim_label(___nl__14, ___ref___1));
#line 666
c_rt_lib0clear(&___nl__14);
#line 667
c_rt_lib0move(&___nl__14, translator_priv0save_registers(___ref___1));
#line 668
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(788)));
#line 668
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(650)));
#line 668
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(650)));
#line 668
if(c_rt_lib0check_true_native(___nl__16)){ goto label_8;}
#line 671
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(38)));
#line 671
if(c_rt_lib0check_true_native(___nl__16)){ goto label_9;}
#line 671
c_rt_lib0move(&___nl__16,___get_global_const(76));
#line 671
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 671
nl_die_arg(___nl__16);
#line 668
label_8:
#line 668
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(650)));
#line 669
c_rt_lib0move(&___nl__18, translator_priv0print_var_decl(___nl__17, ___ref___1));
#line 670
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(788)));
#line 670
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__20, ___get_global_const(78)));
#line 670
c_rt_lib0move(&___nl__19, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__18, ___get_global_const(40), ___nl__4, ___get_global_const(73), ___nl__20));
#line 670
c_rt_lib0clear(&___nl__20);
#line 670
c_rt_lib0move(&___nl__19, c_rt_lib0ov_mk_arg(___get_global_const(225), ___nl__19));
#line 670
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__19));
#line 670
c_rt_lib0clear(&___nl__19);
#line 670
c_rt_lib0clear(&___nl__18);
#line 670
c_rt_lib0clear(&___nl__17);
#line 671
goto label_7;
#line 671
label_9:
#line 672
goto label_7;
#line 672
label_7:
#line 672
c_rt_lib0clear(&___nl__15);
#line 672
c_rt_lib0clear(&___nl__16);
#line 673
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(214)));
#line 673
c_rt_lib0delete(translator_priv0print_cmd(___nl__15, ___ref___1));
#line 673
c_rt_lib0clear(&___nl__15);
#line 674
c_rt_lib0delete(translator_priv0restore_registers(___nl__14, ___ref___1));
#line 675
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(214)));
#line 675
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(217)));
#line 675
c_rt_lib0move(&___nl__15, translator0last_debug_char(___nl__16));
#line 675
c_rt_lib0clear(&___nl__16);
#line 675
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__15, ___ref___1));
#line 675
c_rt_lib0clear(&___nl__15);
#line 676
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__6));
#line 676
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__15));
#line 676
c_rt_lib0clear(&___nl__15);
#line 677
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 677
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__15));
#line 677
c_rt_lib0clear(&___nl__15);
#line 677
c_rt_lib0clear(&___nl__14);
#line 678
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 678
goto label_6;
#line 678
label_4:
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
c_rt_lib0clear(&___nl__13);
#line 679
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___1));
#line 680
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 680
c_rt_lib0clear(&___nl__2);
#line 680
c_rt_lib0clear(&___nl__3);
#line 680
c_rt_lib0clear(&___nl__4);
#line 680
c_rt_lib0clear(&___nl__5);
#line 680
c_rt_lib0clear(&___nl__6);
#line 680
c_rt_lib0clear(&___nl__7);
#line 680
c_rt_lib0clear(&___nl__0);
#line 680
return NULL;
}

ImmT translator_priv0move(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 684
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 684
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__0, ___nl__3));
#line 684
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 684
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 684
c_rt_lib0clear(&___nl__0);
#line 684
c_rt_lib0clear(&___nl__1);
#line 684
c_rt_lib0clear(&___nl__3);
#line 684
return NULL;
#line 684
goto label_2;
#line 684
label_2:
#line 684
c_rt_lib0clear(&___nl__3);
#line 685
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__0, ___get_global_const(40), ___nl__1));
#line 685
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(226), ___nl__3));
#line 685
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 685
c_rt_lib0clear(&___nl__3);
#line 685
c_rt_lib0clear(&___nl__0);
#line 685
c_rt_lib0clear(&___nl__1);
#line 685
return NULL;
}

ImmT translator_priv0print_bin_op_operator_command(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT * ___ref___4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
translator_priv0__const__init();
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 690
c_rt_lib0move(&___nl__5,___get_global_const(251));
#line 690
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 690
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 690
c_rt_lib0move(&___nl__5,___get_global_const(813));
#line 690
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 690
label_3:
#line 690
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 690
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 691
c_rt_lib0move(&___nl__6,___get_global_const(251));
#line 691
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 691
c_rt_lib0clear(&___nl__6);
#line 692
goto label_10;
#line 692
label_2:
#line 692
c_rt_lib0move(&___nl__5,___get_global_const(249));
#line 692
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 692
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 692
c_rt_lib0move(&___nl__5,___get_global_const(814));
#line 692
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 692
label_5:
#line 692
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 692
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 693
c_rt_lib0move(&___nl__6,___get_global_const(249));
#line 693
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 693
c_rt_lib0clear(&___nl__6);
#line 694
goto label_10;
#line 694
label_4:
#line 694
c_rt_lib0move(&___nl__5,___get_global_const(257));
#line 694
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 694
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 694
c_rt_lib0move(&___nl__5,___get_global_const(815));
#line 694
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 694
label_7:
#line 694
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 694
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 695
c_rt_lib0move(&___nl__6,___get_global_const(257));
#line 695
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 695
c_rt_lib0clear(&___nl__6);
#line 696
goto label_10;
#line 696
label_6:
#line 696
c_rt_lib0move(&___nl__5,___get_global_const(81));
#line 696
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 696
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 696
c_rt_lib0move(&___nl__5,___get_global_const(816));
#line 696
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 696
label_9:
#line 696
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 696
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 697
c_rt_lib0move(&___nl__6,___get_global_const(81));
#line 697
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 697
c_rt_lib0clear(&___nl__6);
#line 698
goto label_10;
#line 698
label_8:
#line 698
c_rt_lib0move(&___nl__5,___get_global_const(83));
#line 698
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 698
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 698
c_rt_lib0move(&___nl__5,___get_global_const(817));
#line 698
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 698
label_11:
#line 698
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 698
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 699
c_rt_lib0move(&___nl__6,___get_global_const(83));
#line 699
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 699
c_rt_lib0clear(&___nl__6);
#line 700
goto label_10;
#line 700
label_10:
#line 700
c_rt_lib0clear(&___nl__5);
#line 701
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(4, ___get_global_const(237), ___nl__0, ___get_global_const(239), ___nl__1, ___get_global_const(240), ___nl__2, ___get_global_const(405), ___nl__3));
#line 701
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__5));
#line 701
c_rt_lib0delete(translator_priv0print(___ref___4, ___nl__5));
#line 701
c_rt_lib0clear(&___nl__5);
#line 701
c_rt_lib0clear(&___nl__0);
#line 701
c_rt_lib0clear(&___nl__1);
#line 701
c_rt_lib0clear(&___nl__2);
#line 701
c_rt_lib0clear(&___nl__3);
#line 701
return NULL;
}

ImmT translator_priv0print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 705
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(217)));
#line 705
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 705
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(214), ___nl__1, ___get_global_const(217), ___nl__3, ___get_global_const(216), ___nl__4));
#line 705
c_rt_lib0clear(&___nl__3);
#line 705
c_rt_lib0clear(&___nl__4);
#line 706
c_rt_lib0move(&___nl__3,___get_global_const(1069));
#line 706
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 706
c_rt_lib0move(&___nl__4,___get_global_const(384));
#line 706
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 706
c_rt_lib0delete(array0push(&___nl__4, ___nl__2));
#line 706
c_rt_lib0move(&___nl__5,___get_global_const(384));
#line 706
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 706
c_rt_lib0move(&___nl__5,___get_global_const(1069));
#line 706
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 706
c_rt_lib0clear(&___nl__5);
#line 706
c_rt_lib0clear(&___nl__3);
#line 706
c_rt_lib0clear(&___nl__4);
#line 707
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 707
c_rt_lib0move(&___nl__4,___get_global_const(217));
#line 707
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 707
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 707
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(662), ___nl__5);
#line 707
c_rt_lib0move(&___nl__6,___get_global_const(217));
#line 707
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 707
c_rt_lib0clear(&___nl__6);
#line 707
c_rt_lib0clear(&___nl__3);
#line 707
c_rt_lib0clear(&___nl__4);
#line 707
c_rt_lib0clear(&___nl__5);
#line 707
c_rt_lib0clear(&___nl__2);
#line 707
c_rt_lib0clear(&___nl__1);
#line 707
return NULL;
}

ImmT translator_priv0print_if_goto(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 711
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__0, ___get_global_const(40), ___nl__1));
#line 711
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__3));
#line 711
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 711
c_rt_lib0clear(&___nl__3);
#line 711
c_rt_lib0clear(&___nl__0);
#line 711
c_rt_lib0clear(&___nl__1);
#line 711
return NULL;
}

ImmT translator_priv0print_get_from_index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 716
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__0, ___get_global_const(40), ___nl__1, ___get_global_const(241), ___nl__2));
#line 716
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(228), ___nl__4));
#line 716
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 716
c_rt_lib0clear(&___nl__4);
#line 716
c_rt_lib0clear(&___nl__0);
#line 716
c_rt_lib0clear(&___nl__1);
#line 716
c_rt_lib0clear(&___nl__2);
#line 716
return NULL;
}

ImmT translator_priv0print_set_at_index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 721
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(40), ___nl__0, ___get_global_const(241), ___nl__1, ___get_global_const(238), ___nl__2));
#line 721
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(229), ___nl__4));
#line 721
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 721
c_rt_lib0clear(&___nl__4);
#line 721
c_rt_lib0clear(&___nl__0);
#line 721
c_rt_lib0clear(&___nl__1);
#line 721
c_rt_lib0clear(&___nl__2);
#line 721
return NULL;
}

ImmT translator_priv0print_get_value(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 726
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__0, ___get_global_const(40), ___nl__1, ___get_global_const(283), ___nl__2));
#line 726
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__4));
#line 726
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 726
c_rt_lib0clear(&___nl__4);
#line 726
c_rt_lib0clear(&___nl__0);
#line 726
c_rt_lib0clear(&___nl__1);
#line 726
c_rt_lib0clear(&___nl__2);
#line 726
return NULL;
}

ImmT translator_priv0print_set_value(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 730
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(40), ___nl__0, ___get_global_const(283), ___nl__1, ___get_global_const(238), ___nl__2));
#line 730
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__4));
#line 730
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 730
c_rt_lib0clear(&___nl__4);
#line 730
c_rt_lib0clear(&___nl__0);
#line 730
c_rt_lib0clear(&___nl__1);
#line 730
c_rt_lib0clear(&___nl__2);
#line 730
return NULL;
}

ImmT translator_priv0get_struct_of_lvalue(ImmT * ___ref___0) {
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 734
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 735
label_2:
#line 735
c_rt_lib0copy(&___nl__2, *___ref___0);
#line 735
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(223)));
#line 735
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 735
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 736
c_rt_lib0copy(&___nl__3, *___ref___0);
#line 736
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(223)));
#line 737
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 737
c_rt_lib0move(&___nl__5,___get_global_const(798));
#line 737
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 737
c_rt_lib0clear(&___nl__5);
#line 737
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 737
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 737
c_rt_lib0move(&___nl__5,___get_global_const(799));
#line 737
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 737
c_rt_lib0clear(&___nl__5);
#line 737
label_6:
#line 737
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 737
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 737
c_rt_lib0move(&___nl__5,___get_global_const(797));
#line 737
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 737
c_rt_lib0clear(&___nl__5);
#line 737
label_5:
#line 737
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 737
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 737
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 737
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 737
nl_die_arg(___nl__5);
#line 737
goto label_4;
#line 737
label_4:
#line 737
c_rt_lib0clear(&___nl__4);
#line 737
c_rt_lib0clear(&___nl__5);
#line 738
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 739
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 739
c_rt_lib0move(&___nl__6,___get_global_const(798));
#line 739
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 739
c_rt_lib0clear(&___nl__6);
#line 739
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 739
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 740
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(240)));
#line 740
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1070), ___nl__7));
#line 740
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 740
c_rt_lib0clear(&___nl__7);
#line 740
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 740
c_rt_lib0clear(&___nl__6);
#line 741
goto label_7;
#line 741
label_8:
#line 741
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 741
c_rt_lib0move(&___nl__6,___get_global_const(799));
#line 741
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 741
c_rt_lib0clear(&___nl__6);
#line 741
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 741
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 742
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(240)));
#line 742
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1056), ___nl__7));
#line 742
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 742
c_rt_lib0clear(&___nl__7);
#line 742
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 742
c_rt_lib0clear(&___nl__6);
#line 743
goto label_7;
#line 743
label_9:
#line 744
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(240)));
#line 744
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(803)));
#line 744
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(283), ___nl__7));
#line 744
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 744
c_rt_lib0clear(&___nl__7);
#line 744
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 744
c_rt_lib0clear(&___nl__6);
#line 745
goto label_7;
#line 745
label_7:
#line 745
c_rt_lib0clear(&___nl__5);
#line 746
c_rt_lib0delete(array0append(&___nl__4, ___nl__1));
#line 747
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 748
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(239)));
#line 748
c_rt_lib0copy(___ref___0, ___nl__5);
#line 748
c_rt_lib0clear(&___nl__5);
#line 748
c_rt_lib0clear(&___nl__3);
#line 748
c_rt_lib0clear(&___nl__4);
#line 749
goto label_2;
#line 749
label_1:
#line 749
c_rt_lib0clear(&___nl__2);
#line 750
return ___nl__1;
#line 750
c_rt_lib0clear(&___nl__1);
#line 750
return NULL;
}

ImmT translator_priv0get_value_of_lvalue(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
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
#line 755
c_rt_lib0move(&___nl__3, translator_priv0get_struct_of_lvalue(&___nl__0));
#line 756
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 756
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(796)));
#line 757
c_rt_lib0move(&___nl__6, translator_priv0get_var_register(___nl__4, ___ref___2));
#line 757
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 757
c_rt_lib0clear(&___nl__6);
#line 758
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 759
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 759
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 759
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 759
label_3:
#line 759
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__8, ___nl__7));
#line 759
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 760
c_rt_lib0move(&___nl__11, translator_priv0new_register(___ref___2));
#line 760
c_rt_lib0delete(array0push(&___nl__5, ___nl__11));
#line 760
c_rt_lib0clear(&___nl__11);
#line 761
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__3, ___nl__8));
#line 761
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(1070)));
#line 761
if(c_rt_lib0check_true_native(___nl__12)){ goto label_5;}
#line 766
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(1056)));
#line 766
if(c_rt_lib0check_true_native(___nl__12)){ goto label_6;}
#line 771
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(283)));
#line 771
if(c_rt_lib0check_true_native(___nl__12)){ goto label_7;}
#line 771
c_rt_lib0move(&___nl__12,___get_global_const(76));
#line 771
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 771
nl_die_arg(___nl__12);
#line 761
label_5:
#line 761
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(1070)));
#line 762
c_rt_lib0move(&___nl__14, translator_priv0calc_val(___nl__13, ___ref___2));
#line 763
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 763
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(2, ___get_global_const(650), ___nl__16, ___get_global_const(1070), ___nl__14));
#line 763
c_rt_lib0clear(&___nl__16);
#line 763
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(1070), ___nl__15));
#line 763
c_rt_lib0delete(array0push(&___nl__6, ___nl__15));
#line 763
c_rt_lib0clear(&___nl__15);
#line 764
c_rt_lib0copy(&___nl__15, ___nl__1);
#line 764
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 764
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__15));
#line 764
if(c_rt_lib0check_true_native(___nl__16)){ goto label_10;}
#line 764
c_rt_lib0move(&___nl__15, array0len(___nl__3));
#line 764
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 764
c_rt_lib0move(&___nl__15, c_rt_lib0sub_mod(___nl__15, ___nl__17));
#line 764
c_rt_lib0clear(&___nl__17);
#line 764
c_rt_lib0move(&___nl__15, c_rt_lib0num_eq(___nl__8, ___nl__15));
#line 764
label_10:
#line 764
c_rt_lib0clear(&___nl__16);
#line 764
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 764
if(c_rt_lib0check_true_native(___nl__15)){ goto label_9;}
#line 764
c_rt_lib0clear(&___nl__11);
#line 764
c_rt_lib0clear(&___nl__12);
#line 764
c_rt_lib0clear(&___nl__13);
#line 764
c_rt_lib0clear(&___nl__14);
#line 764
c_rt_lib0clear(&___nl__15);
#line 764
goto label_1;
#line 764
goto label_9;
#line 764
label_9:
#line 764
c_rt_lib0clear(&___nl__15);
#line 765
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 765
c_rt_lib0move(&___nl__16, c_rt_lib0add(___nl__8, ___nl__16));
#line 765
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__5, ___nl__16));
#line 765
c_rt_lib0clear(&___nl__16);
#line 765
c_rt_lib0move(&___nl__16,___get_global_const(1077));
#line 765
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 765
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__18));
#line 765
c_rt_lib0move(&___nl__19, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__14));
#line 765
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(2, ___nl__18, ___nl__19));
#line 765
c_rt_lib0clear(&___nl__18);
#line 765
c_rt_lib0clear(&___nl__19);
#line 765
c_rt_lib0delete(translator_priv0print_call_base(___nl__15, ___nl__16, ___nl__17, ___ref___2));
#line 765
c_rt_lib0clear(&___nl__17);
#line 765
c_rt_lib0clear(&___nl__16);
#line 765
c_rt_lib0clear(&___nl__15);
#line 765
c_rt_lib0clear(&___nl__14);
#line 765
c_rt_lib0clear(&___nl__13);
#line 766
goto label_4;
#line 766
label_6:
#line 766
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(1056)));
#line 767
c_rt_lib0move(&___nl__14, translator_priv0calc_val(___nl__13, ___ref___2));
#line 768
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 768
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(2, ___get_global_const(650), ___nl__16, ___get_global_const(283), ___nl__14));
#line 768
c_rt_lib0clear(&___nl__16);
#line 768
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(1056), ___nl__15));
#line 768
c_rt_lib0delete(array0push(&___nl__6, ___nl__15));
#line 768
c_rt_lib0clear(&___nl__15);
#line 769
c_rt_lib0copy(&___nl__15, ___nl__1);
#line 769
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 769
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__15));
#line 769
if(c_rt_lib0check_true_native(___nl__16)){ goto label_13;}
#line 769
c_rt_lib0move(&___nl__15, array0len(___nl__3));
#line 769
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 769
c_rt_lib0move(&___nl__15, c_rt_lib0sub_mod(___nl__15, ___nl__17));
#line 769
c_rt_lib0clear(&___nl__17);
#line 769
c_rt_lib0move(&___nl__15, c_rt_lib0num_eq(___nl__8, ___nl__15));
#line 769
label_13:
#line 769
c_rt_lib0clear(&___nl__16);
#line 769
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 769
if(c_rt_lib0check_true_native(___nl__15)){ goto label_12;}
#line 769
c_rt_lib0clear(&___nl__11);
#line 769
c_rt_lib0clear(&___nl__12);
#line 769
c_rt_lib0clear(&___nl__13);
#line 769
c_rt_lib0clear(&___nl__14);
#line 769
c_rt_lib0clear(&___nl__15);
#line 769
goto label_1;
#line 769
goto label_12;
#line 769
label_12:
#line 769
c_rt_lib0clear(&___nl__15);
#line 770
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 770
c_rt_lib0move(&___nl__16, c_rt_lib0add(___nl__8, ___nl__16));
#line 770
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__5, ___nl__16));
#line 770
c_rt_lib0clear(&___nl__16);
#line 770
c_rt_lib0move(&___nl__16,___get_global_const(1078));
#line 770
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 770
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__18));
#line 770
c_rt_lib0move(&___nl__19, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__14));
#line 770
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(2, ___nl__18, ___nl__19));
#line 770
c_rt_lib0clear(&___nl__18);
#line 770
c_rt_lib0clear(&___nl__19);
#line 770
c_rt_lib0delete(translator_priv0print_call_base(___nl__15, ___nl__16, ___nl__17, ___ref___2));
#line 770
c_rt_lib0clear(&___nl__17);
#line 770
c_rt_lib0clear(&___nl__16);
#line 770
c_rt_lib0clear(&___nl__15);
#line 770
c_rt_lib0clear(&___nl__14);
#line 770
c_rt_lib0clear(&___nl__13);
#line 771
goto label_4;
#line 771
label_7:
#line 771
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(283)));
#line 772
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 772
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(650), ___nl__15, ___get_global_const(283), ___nl__13));
#line 772
c_rt_lib0clear(&___nl__15);
#line 772
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(283), ___nl__14));
#line 772
c_rt_lib0delete(array0push(&___nl__6, ___nl__14));
#line 772
c_rt_lib0clear(&___nl__14);
#line 773
c_rt_lib0copy(&___nl__14, ___nl__1);
#line 773
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 773
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__14));
#line 773
if(c_rt_lib0check_true_native(___nl__15)){ goto label_16;}
#line 773
c_rt_lib0move(&___nl__14, array0len(___nl__3));
#line 773
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 773
c_rt_lib0move(&___nl__14, c_rt_lib0sub_mod(___nl__14, ___nl__16));
#line 773
c_rt_lib0clear(&___nl__16);
#line 773
c_rt_lib0move(&___nl__14, c_rt_lib0num_eq(___nl__8, ___nl__14));
#line 773
label_16:
#line 773
c_rt_lib0clear(&___nl__15);
#line 773
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 773
if(c_rt_lib0check_true_native(___nl__14)){ goto label_15;}
#line 773
c_rt_lib0clear(&___nl__11);
#line 773
c_rt_lib0clear(&___nl__12);
#line 773
c_rt_lib0clear(&___nl__13);
#line 773
c_rt_lib0clear(&___nl__14);
#line 773
goto label_1;
#line 773
goto label_15;
#line 773
label_15:
#line 773
c_rt_lib0clear(&___nl__14);
#line 774
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 774
c_rt_lib0move(&___nl__15, c_rt_lib0add(___nl__8, ___nl__15));
#line 774
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__5, ___nl__15));
#line 774
c_rt_lib0clear(&___nl__15);
#line 774
c_rt_lib0delete(translator_priv0load_const(___nl__13, ___nl__14, ___ref___2));
#line 774
c_rt_lib0clear(&___nl__14);
#line 775
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 775
c_rt_lib0move(&___nl__15, c_rt_lib0add(___nl__8, ___nl__15));
#line 775
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__5, ___nl__15));
#line 775
c_rt_lib0clear(&___nl__15);
#line 775
c_rt_lib0move(&___nl__15,___get_global_const(1078));
#line 775
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 775
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__17));
#line 775
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 775
c_rt_lib0move(&___nl__19, c_rt_lib0add(___nl__8, ___nl__19));
#line 775
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__5, ___nl__19));
#line 775
c_rt_lib0clear(&___nl__19);
#line 775
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__18));
#line 775
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__17, ___nl__18));
#line 775
c_rt_lib0clear(&___nl__17);
#line 775
c_rt_lib0clear(&___nl__18);
#line 775
c_rt_lib0delete(translator_priv0print_call_base(___nl__14, ___nl__15, ___nl__16, ___ref___2));
#line 775
c_rt_lib0clear(&___nl__16);
#line 775
c_rt_lib0clear(&___nl__15);
#line 775
c_rt_lib0clear(&___nl__14);
#line 775
c_rt_lib0clear(&___nl__13);
#line 779
goto label_4;
#line 779
label_4:
#line 779
c_rt_lib0clear(&___nl__11);
#line 779
c_rt_lib0clear(&___nl__12);
#line 780
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 780
goto label_3;
#line 780
label_1:
#line 780
c_rt_lib0clear(&___nl__7);
#line 780
c_rt_lib0clear(&___nl__8);
#line 780
c_rt_lib0clear(&___nl__9);
#line 780
c_rt_lib0clear(&___nl__10);
#line 781
c_rt_lib0move(&___nl__8, array0len(___nl__5));
#line 781
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 781
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 781
c_rt_lib0clear(&___nl__9);
#line 781
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 781
c_rt_lib0clear(&___nl__8);
#line 781
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(650), ___nl__7));
#line 781
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 781
c_rt_lib0clear(&___nl__7);
#line 782
c_rt_lib0clear(&___nl__0);
#line 782
c_rt_lib0clear(&___nl__1);
#line 782
c_rt_lib0clear(&___nl__3);
#line 782
c_rt_lib0clear(&___nl__4);
#line 782
c_rt_lib0clear(&___nl__5);
#line 782
return ___nl__6;
#line 782
c_rt_lib0clear(&___nl__3);
#line 782
c_rt_lib0clear(&___nl__4);
#line 782
c_rt_lib0clear(&___nl__5);
#line 782
c_rt_lib0clear(&___nl__6);
#line 782
c_rt_lib0clear(&___nl__0);
#line 782
c_rt_lib0clear(&___nl__1);
#line 782
return NULL;
}

ImmT translator_priv0set_value_of_lvalue(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
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
#line 787
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 788
c_rt_lib0move(&___nl__4, array0len(___nl__0));
#line 789
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 789
c_rt_lib0move(&___nl__6, c_rt_lib0sub(___nl__4, ___nl__6));
#line 789
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__0, ___nl__6));
#line 789
c_rt_lib0clear(&___nl__6);
#line 789
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(650)));
#line 790
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 791
c_rt_lib0move(&___nl__7,___get_global_const(139));
#line 791
c_rt_lib0move(&___nl__7, c_rt_lib0sub(___nl__4, ___nl__7));
#line 791
label_2:
#line 791
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 791
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 791
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 791
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 792
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__0, ___nl__7));
#line 792
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(650)));
#line 792
if(c_rt_lib0check_true_native(___nl__10)){ goto label_5;}
#line 794
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(1070)));
#line 794
if(c_rt_lib0check_true_native(___nl__10)){ goto label_6;}
#line 801
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(1056)));
#line 801
if(c_rt_lib0check_true_native(___nl__10)){ goto label_7;}
#line 808
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(283)));
#line 808
if(c_rt_lib0check_true_native(___nl__10)){ goto label_8;}
#line 808
c_rt_lib0move(&___nl__10,___get_global_const(76));
#line 808
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 808
nl_die_arg(___nl__10);
#line 792
label_5:
#line 792
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(650)));
#line 793
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(0));
#line 793
nl_die_arg(___nl__12);
#line 793
c_rt_lib0clear(&___nl__12);
#line 793
c_rt_lib0clear(&___nl__11);
#line 794
goto label_4;
#line 794
label_6:
#line 794
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(1070)));
#line 795
c_rt_lib0copy(&___nl__12, ___nl__1);
#line 795
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 795
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__12));
#line 795
if(c_rt_lib0check_true_native(___nl__13)){ goto label_11;}
#line 795
c_rt_lib0move(&___nl__12,___get_global_const(139));
#line 795
c_rt_lib0move(&___nl__12, c_rt_lib0sub(___nl__4, ___nl__12));
#line 795
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__7, ___nl__12));
#line 795
label_11:
#line 795
c_rt_lib0clear(&___nl__13);
#line 795
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 795
if(c_rt_lib0check_true_native(___nl__12)){ goto label_10;}
#line 796
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 796
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(1070)));
#line 796
c_rt_lib0delete(translator_priv0print_set_at_index(___nl__13, ___nl__14, ___nl__5, ___ref___2));
#line 796
c_rt_lib0clear(&___nl__14);
#line 796
c_rt_lib0clear(&___nl__13);
#line 797
goto label_9;
#line 797
label_10:
#line 798
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 798
c_rt_lib0move(&___nl__14,___get_global_const(1079));
#line 798
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 798
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 798
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(1070)));
#line 798
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__17));
#line 798
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__5));
#line 798
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(3, ___nl__16, ___nl__17, ___nl__18));
#line 798
c_rt_lib0clear(&___nl__16);
#line 798
c_rt_lib0clear(&___nl__17);
#line 798
c_rt_lib0clear(&___nl__18);
#line 798
c_rt_lib0delete(translator_priv0print_call_base(___nl__13, ___nl__14, ___nl__15, ___ref___2));
#line 798
c_rt_lib0clear(&___nl__15);
#line 798
c_rt_lib0clear(&___nl__14);
#line 798
c_rt_lib0clear(&___nl__13);
#line 799
goto label_9;
#line 799
label_9:
#line 799
c_rt_lib0clear(&___nl__12);
#line 800
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 800
c_rt_lib0copy(&___nl__5, ___nl__12);
#line 800
c_rt_lib0clear(&___nl__12);
#line 800
c_rt_lib0clear(&___nl__11);
#line 801
goto label_4;
#line 801
label_7:
#line 801
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(1056)));
#line 802
c_rt_lib0copy(&___nl__12, ___nl__1);
#line 802
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 802
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__12));
#line 802
if(c_rt_lib0check_true_native(___nl__13)){ goto label_14;}
#line 802
c_rt_lib0move(&___nl__12,___get_global_const(139));
#line 802
c_rt_lib0move(&___nl__12, c_rt_lib0sub(___nl__4, ___nl__12));
#line 802
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__7, ___nl__12));
#line 802
label_14:
#line 802
c_rt_lib0clear(&___nl__13);
#line 802
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 802
if(c_rt_lib0check_true_native(___nl__12)){ goto label_13;}
#line 803
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 803
c_rt_lib0move(&___nl__14,___get_global_const(1080));
#line 803
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 803
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 803
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(283)));
#line 803
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__17));
#line 803
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__5));
#line 803
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(3, ___nl__16, ___nl__17, ___nl__18));
#line 803
c_rt_lib0clear(&___nl__16);
#line 803
c_rt_lib0clear(&___nl__17);
#line 803
c_rt_lib0clear(&___nl__18);
#line 803
c_rt_lib0delete(translator_priv0print_call_base(___nl__13, ___nl__14, ___nl__15, ___ref___2));
#line 803
c_rt_lib0clear(&___nl__15);
#line 803
c_rt_lib0clear(&___nl__14);
#line 803
c_rt_lib0clear(&___nl__13);
#line 804
goto label_12;
#line 804
label_13:
#line 805
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 805
c_rt_lib0move(&___nl__14,___get_global_const(1081));
#line 805
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 805
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 805
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(283)));
#line 805
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__17));
#line 805
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__5));
#line 805
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(3, ___nl__16, ___nl__17, ___nl__18));
#line 805
c_rt_lib0clear(&___nl__16);
#line 805
c_rt_lib0clear(&___nl__17);
#line 805
c_rt_lib0clear(&___nl__18);
#line 805
c_rt_lib0delete(translator_priv0print_call_base(___nl__13, ___nl__14, ___nl__15, ___ref___2));
#line 805
c_rt_lib0clear(&___nl__15);
#line 805
c_rt_lib0clear(&___nl__14);
#line 805
c_rt_lib0clear(&___nl__13);
#line 806
goto label_12;
#line 806
label_12:
#line 806
c_rt_lib0clear(&___nl__12);
#line 807
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 807
c_rt_lib0copy(&___nl__5, ___nl__12);
#line 807
c_rt_lib0clear(&___nl__12);
#line 807
c_rt_lib0clear(&___nl__11);
#line 808
goto label_4;
#line 808
label_8:
#line 808
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(283)));
#line 809
c_rt_lib0copy(&___nl__12, ___nl__1);
#line 809
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 809
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__12));
#line 809
if(c_rt_lib0check_true_native(___nl__13)){ goto label_17;}
#line 809
c_rt_lib0move(&___nl__12,___get_global_const(139));
#line 809
c_rt_lib0move(&___nl__12, c_rt_lib0sub(___nl__4, ___nl__12));
#line 809
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__7, ___nl__12));
#line 809
label_17:
#line 809
c_rt_lib0clear(&___nl__13);
#line 809
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 809
if(c_rt_lib0check_true_native(___nl__12)){ goto label_16;}
#line 810
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 810
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(283)));
#line 810
c_rt_lib0delete(translator_priv0print_set_value(___nl__13, ___nl__14, ___nl__5, ___ref___2));
#line 810
c_rt_lib0clear(&___nl__14);
#line 810
c_rt_lib0clear(&___nl__13);
#line 811
goto label_15;
#line 811
label_16:
#line 812
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 812
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__6, ___nl__13));
#line 812
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 812
if(c_rt_lib0check_true_native(___nl__13)){ goto label_19;}
#line 812
c_rt_lib0move(&___nl__14, translator_priv0new_register(___ref___2));
#line 812
c_rt_lib0copy(&___nl__6, ___nl__14);
#line 812
c_rt_lib0clear(&___nl__14);
#line 812
goto label_19;
#line 812
label_19:
#line 812
c_rt_lib0clear(&___nl__13);
#line 813
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(283)));
#line 813
c_rt_lib0delete(translator_priv0load_const(___nl__13, ___nl__6, ___ref___2));
#line 813
c_rt_lib0clear(&___nl__13);
#line 814
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 814
c_rt_lib0move(&___nl__14,___get_global_const(1081));
#line 814
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 814
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 814
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__6));
#line 814
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__5));
#line 814
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(3, ___nl__16, ___nl__17, ___nl__18));
#line 814
c_rt_lib0clear(&___nl__16);
#line 814
c_rt_lib0clear(&___nl__17);
#line 814
c_rt_lib0clear(&___nl__18);
#line 814
c_rt_lib0delete(translator_priv0print_call_base(___nl__13, ___nl__14, ___nl__15, ___ref___2));
#line 814
c_rt_lib0clear(&___nl__15);
#line 814
c_rt_lib0clear(&___nl__14);
#line 814
c_rt_lib0clear(&___nl__13);
#line 815
goto label_15;
#line 815
label_15:
#line 815
c_rt_lib0clear(&___nl__12);
#line 816
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 816
c_rt_lib0copy(&___nl__5, ___nl__12);
#line 816
c_rt_lib0clear(&___nl__12);
#line 816
c_rt_lib0clear(&___nl__11);
#line 817
goto label_4;
#line 817
label_4:
#line 817
c_rt_lib0clear(&___nl__9);
#line 817
c_rt_lib0clear(&___nl__10);
#line 817
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 817
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__9));
#line 817
c_rt_lib0clear(&___nl__9);
#line 818
goto label_2;
#line 818
label_1:
#line 818
c_rt_lib0clear(&___nl__7);
#line 818
c_rt_lib0clear(&___nl__8);
#line 819
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 819
c_rt_lib0move(&___nl__7, c_rt_lib0ne(___nl__6, ___nl__7));
#line 819
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 819
if(c_rt_lib0check_true_native(___nl__7)){ goto label_21;}
#line 819
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 819
goto label_21;
#line 819
label_21:
#line 819
c_rt_lib0clear(&___nl__7);
#line 819
c_rt_lib0clear(&___nl__3);
#line 819
c_rt_lib0clear(&___nl__4);
#line 819
c_rt_lib0clear(&___nl__5);
#line 819
c_rt_lib0clear(&___nl__6);
#line 819
c_rt_lib0clear(&___nl__0);
#line 819
c_rt_lib0clear(&___nl__1);
#line 819
return NULL;
}

ImmT translator_priv0make_string(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 823
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 824
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 825
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(281)));
#line 825
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 825
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 825
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 825
label_3:
#line 825
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 825
if(c_rt_lib0check_true_native(___nl__9)){ goto label_1;}
#line 825
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 826
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 826
c_rt_lib0move(&___nl__10, c_rt_lib0gt(___nl__3, ___nl__10));
#line 826
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 826
if(c_rt_lib0check_true_native(___nl__10)){ goto label_5;}
#line 826
c_rt_lib0move(&___nl__11, string0lf());
#line 826
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__11));
#line 826
c_rt_lib0clear(&___nl__11);
#line 826
goto label_5;
#line 826
label_5:
#line 826
c_rt_lib0clear(&___nl__10);
#line 827
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 828
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 828
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__10));
#line 828
c_rt_lib0clear(&___nl__10);
#line 829
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 829
goto label_3;
#line 829
label_1:
#line 829
c_rt_lib0clear(&___nl__4);
#line 829
c_rt_lib0clear(&___nl__5);
#line 829
c_rt_lib0clear(&___nl__6);
#line 829
c_rt_lib0clear(&___nl__7);
#line 829
c_rt_lib0clear(&___nl__8);
#line 829
c_rt_lib0clear(&___nl__9);
#line 830
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(852)));
#line 830
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(851)));
#line 830
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 832
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(850)));
#line 832
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 832
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 832
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 832
nl_die_arg(___nl__5);
#line 830
label_7:
#line 831
c_rt_lib0move(&___nl__6, string0lf());
#line 831
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 831
c_rt_lib0clear(&___nl__6);
#line 832
goto label_6;
#line 832
label_8:
#line 833
goto label_6;
#line 833
label_6:
#line 833
c_rt_lib0clear(&___nl__4);
#line 833
c_rt_lib0clear(&___nl__5);
#line 834
c_rt_lib0clear(&___nl__0);
#line 834
c_rt_lib0clear(&___nl__3);
#line 834
return ___nl__2;
#line 834
c_rt_lib0clear(&___nl__2);
#line 834
c_rt_lib0clear(&___nl__3);
#line 834
c_rt_lib0clear(&___nl__0);
#line 834
return NULL;
}

ImmT translator_priv0print_ternary_op(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 838
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 838
c_rt_lib0move(&___nl__4,___get_global_const(823));
#line 838
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 838
c_rt_lib0clear(&___nl__4);
#line 838
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 838
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 838
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 838
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 838
nl_die_arg(___nl__4);
#line 838
goto label_2;
#line 838
label_2:
#line 838
c_rt_lib0clear(&___nl__3);
#line 838
c_rt_lib0clear(&___nl__4);
#line 839
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___2));
#line 840
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 841
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(809)));
#line 841
c_rt_lib0move(&___nl__5, translator_priv0dest_val(___nl__6, ___nl__1, ___ref___2));
#line 841
c_rt_lib0clear(&___nl__6);
#line 842
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__5, ___ref___2));
#line 843
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(811)));
#line 843
c_rt_lib0delete(translator_priv0print_val(___nl__6, ___nl__1, ___ref___2));
#line 843
c_rt_lib0clear(&___nl__6);
#line 844
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__3));
#line 844
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__6));
#line 844
c_rt_lib0clear(&___nl__6);
#line 845
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 846
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(810)));
#line 846
c_rt_lib0delete(translator_priv0print_val(___nl__6, ___nl__1, ___ref___2));
#line 846
c_rt_lib0clear(&___nl__6);
#line 847
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___2));
#line 847
c_rt_lib0clear(&___nl__3);
#line 847
c_rt_lib0clear(&___nl__4);
#line 847
c_rt_lib0clear(&___nl__5);
#line 847
c_rt_lib0clear(&___nl__0);
#line 847
c_rt_lib0clear(&___nl__1);
#line 847
return NULL;
}

ImmT translator_priv0print_die(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 851
c_rt_lib0move(&___nl__2, translator_priv0new_register(___ref___1));
#line 852
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__0));
#line 852
c_rt_lib0delete(translator_priv0print_val(___nl__3, ___nl__2, ___ref___1));
#line 852
c_rt_lib0clear(&___nl__3);
#line 853
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__2));
#line 853
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__3));
#line 853
c_rt_lib0clear(&___nl__3);
#line 853
c_rt_lib0clear(&___nl__2);
#line 853
c_rt_lib0clear(&___nl__0);
#line 853
return NULL;
}

ImmT translator_priv0print_return(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 857
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 858
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(215)));
#line 859
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 859
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(778)));
#line 859
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 859
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 859
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 860
c_rt_lib0move(&___nl__5, translator_priv0calc_val(___nl__0, ___ref___1));
#line 860
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__5));
#line 860
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 860
c_rt_lib0clear(&___nl__5);
#line 861
goto label_2;
#line 861
label_2:
#line 861
c_rt_lib0clear(&___nl__4);
#line 862
c_rt_lib0delete(translator_priv0print_safe_return(___nl__3, ___ref___1));
#line 863
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 863
c_rt_lib0clear(&___nl__2);
#line 863
c_rt_lib0clear(&___nl__3);
#line 863
c_rt_lib0clear(&___nl__0);
#line 863
return NULL;
}

ImmT translator_priv0print_safe_return(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 867
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 868
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1066)));
#line 868
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1062)));
#line 869
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 869
c_rt_lib0move(&___nl__4, c_rt_lib0unary_minus(___nl__4));
#line 870
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1069)));
#line 870
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(335)));
#line 871
c_rt_lib0copy(&___nl__6, ___nl__0);
#line 871
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(238)));
#line 871
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 871
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 872
c_rt_lib0copy(&___nl__7, ___nl__0);
#line 872
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(238)));
#line 872
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 872
c_rt_lib0clear(&___nl__7);
#line 873
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 873
c_rt_lib0move(&___nl__7, c_rt_lib0lt(___nl__4, ___nl__7));
#line 873
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 873
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 873
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__5, ___nl__4));
#line 873
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(5)));
#line 873
label_5:
#line 873
c_rt_lib0clear(&___nl__8);
#line 873
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 873
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 874
c_rt_lib0move(&___nl__8, translator_priv0new_register(___ref___1));
#line 874
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 874
c_rt_lib0clear(&___nl__8);
#line 875
c_rt_lib0copy(&___nl__8, ___nl__0);
#line 875
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(238)));
#line 875
c_rt_lib0delete(translator_priv0move(___nl__4, ___nl__8, ___ref___1));
#line 875
c_rt_lib0clear(&___nl__8);
#line 876
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__4));
#line 876
c_rt_lib0copy(&___nl__0, ___nl__8);
#line 876
c_rt_lib0clear(&___nl__8);
#line 877
goto label_4;
#line 877
label_4:
#line 877
c_rt_lib0clear(&___nl__7);
#line 878
goto label_2;
#line 878
label_2:
#line 878
c_rt_lib0clear(&___nl__6);
#line 879
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 879
label_7:
#line 879
c_rt_lib0move(&___nl__7, c_rt_lib0lt(___nl__6, ___nl__3));
#line 879
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 879
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 880
c_rt_lib0move(&___nl__8, array0len(___nl__5));
#line 880
c_rt_lib0move(&___nl__8, c_rt_lib0lt(___nl__6, ___nl__8));
#line 880
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 880
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 880
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 880
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(5)));
#line 880
label_11:
#line 880
c_rt_lib0clear(&___nl__9);
#line 880
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 880
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 880
c_rt_lib0clear(&___nl__8);
#line 880
goto label_8;
#line 880
goto label_10;
#line 880
label_10:
#line 880
c_rt_lib0clear(&___nl__8);
#line 881
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__6, ___nl__4));
#line 881
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 881
if(c_rt_lib0check_true_native(___nl__8)){ goto label_13;}
#line 881
c_rt_lib0clear(&___nl__8);
#line 881
goto label_8;
#line 881
goto label_13;
#line 881
label_13:
#line 881
c_rt_lib0clear(&___nl__8);
#line 882
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(878)));
#line 882
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 882
c_rt_lib0move(&___nl__8, ptd0ensure(___nl__9, ___nl__6));
#line 882
c_rt_lib0clear(&___nl__9);
#line 882
c_rt_lib0delete(translator_priv0undef_reg(___nl__8, ___ref___1));
#line 882
c_rt_lib0clear(&___nl__8);
#line 882
label_8:
#line 882
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 882
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__8));
#line 882
c_rt_lib0clear(&___nl__8);
#line 883
goto label_7;
#line 883
label_6:
#line 883
c_rt_lib0clear(&___nl__6);
#line 883
c_rt_lib0clear(&___nl__7);
#line 884
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(75), ___nl__0));
#line 884
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__6));
#line 884
c_rt_lib0clear(&___nl__6);
#line 885
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 885
c_rt_lib0clear(&___nl__2);
#line 885
c_rt_lib0clear(&___nl__3);
#line 885
c_rt_lib0clear(&___nl__4);
#line 885
c_rt_lib0clear(&___nl__5);
#line 885
c_rt_lib0clear(&___nl__0);
#line 885
return NULL;
}

ImmT translator_priv0convert_str_to_number(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
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
#line 889
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 890
c_rt_lib0move(&___nl__2,___get_global_const(964));
#line 890
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 890
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 890
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 890
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 890
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 890
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__4, ___nl__5));
#line 890
c_rt_lib0clear(&___nl__5);
#line 890
c_rt_lib0clear(&___nl__4);
#line 890
c_rt_lib0move(&___nl__4,___get_global_const(924));
#line 890
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 890
c_rt_lib0clear(&___nl__4);
#line 890
label_3:
#line 890
c_rt_lib0clear(&___nl__3);
#line 890
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 890
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 891
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 892
c_rt_lib0move(&___nl__4,___get_global_const(139));
#line 892
label_5:
#line 892
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__4, ___nl__1));
#line 892
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 892
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 893
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 893
c_rt_lib0move(&___nl__6, string0substr(___nl__0, ___nl__4, ___nl__7));
#line 893
c_rt_lib0clear(&___nl__7);
#line 894
c_rt_lib0move(&___nl__7, string0ord(___nl__6));
#line 895
c_rt_lib0move(&___nl__8,___get_global_const(1082));
#line 895
c_rt_lib0move(&___nl__8, c_rt_lib0mul(___nl__3, ___nl__8));
#line 895
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 895
c_rt_lib0clear(&___nl__8);
#line 896
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 896
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 896
c_rt_lib0clear(&___nl__10);
#line 896
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 896
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 896
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 896
c_rt_lib0move(&___nl__10,___get_global_const(163));
#line 896
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 896
c_rt_lib0clear(&___nl__10);
#line 896
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__8));
#line 896
label_9:
#line 896
c_rt_lib0clear(&___nl__9);
#line 896
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 896
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 897
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 897
c_rt_lib0move(&___nl__9, string0ord(___nl__10));
#line 897
c_rt_lib0clear(&___nl__10);
#line 897
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__7, ___nl__9));
#line 897
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 897
c_rt_lib0clear(&___nl__9);
#line 898
goto label_7;
#line 898
label_8:
#line 898
c_rt_lib0move(&___nl__10,___get_global_const(1083));
#line 898
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 898
c_rt_lib0clear(&___nl__10);
#line 898
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 898
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 898
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 898
c_rt_lib0move(&___nl__10,___get_global_const(1084));
#line 898
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 898
c_rt_lib0clear(&___nl__10);
#line 898
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__8));
#line 898
label_11:
#line 898
c_rt_lib0clear(&___nl__9);
#line 898
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 898
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 899
c_rt_lib0move(&___nl__10,___get_global_const(1083));
#line 899
c_rt_lib0move(&___nl__9, string0ord(___nl__10));
#line 899
c_rt_lib0clear(&___nl__10);
#line 899
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__7, ___nl__9));
#line 899
c_rt_lib0move(&___nl__10,___get_global_const(157));
#line 899
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 899
c_rt_lib0clear(&___nl__10);
#line 899
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 899
c_rt_lib0clear(&___nl__9);
#line 900
goto label_7;
#line 900
label_10:
#line 900
c_rt_lib0move(&___nl__10,___get_global_const(1060));
#line 900
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 900
c_rt_lib0clear(&___nl__10);
#line 900
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 900
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 900
if(c_rt_lib0check_true_native(___nl__9)){ goto label_13;}
#line 900
c_rt_lib0move(&___nl__10,___get_global_const(1085));
#line 900
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 900
c_rt_lib0clear(&___nl__10);
#line 900
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__8));
#line 900
label_13:
#line 900
c_rt_lib0clear(&___nl__9);
#line 900
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 900
if(c_rt_lib0check_true_native(___nl__8)){ goto label_12;}
#line 901
c_rt_lib0move(&___nl__10,___get_global_const(1060));
#line 901
c_rt_lib0move(&___nl__9, string0ord(___nl__10));
#line 901
c_rt_lib0clear(&___nl__10);
#line 901
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__7, ___nl__9));
#line 901
c_rt_lib0move(&___nl__10,___get_global_const(157));
#line 901
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 901
c_rt_lib0clear(&___nl__10);
#line 901
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 901
c_rt_lib0clear(&___nl__9);
#line 902
goto label_7;
#line 902
label_12:
#line 903
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 903
nl_die_arg(___nl__9);
#line 903
c_rt_lib0clear(&___nl__9);
#line 904
goto label_7;
#line 904
label_7:
#line 904
c_rt_lib0clear(&___nl__8);
#line 904
c_rt_lib0clear(&___nl__6);
#line 904
c_rt_lib0clear(&___nl__7);
#line 904
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 904
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 904
c_rt_lib0clear(&___nl__6);
#line 905
goto label_5;
#line 905
label_4:
#line 905
c_rt_lib0clear(&___nl__4);
#line 905
c_rt_lib0clear(&___nl__5);
#line 906
c_rt_lib0clear(&___nl__0);
#line 906
c_rt_lib0clear(&___nl__1);
#line 906
c_rt_lib0clear(&___nl__2);
#line 906
return ___nl__3;
#line 906
c_rt_lib0clear(&___nl__3);
#line 907
goto label_1;
#line 907
label_2:
#line 907
c_rt_lib0move(&___nl__2,___get_global_const(139));
#line 907
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 907
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__2));
#line 907
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 907
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 907
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 907
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__5, ___nl__6));
#line 907
c_rt_lib0clear(&___nl__6);
#line 907
c_rt_lib0clear(&___nl__5);
#line 907
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 907
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__5));
#line 907
c_rt_lib0clear(&___nl__5);
#line 907
label_16:
#line 907
c_rt_lib0clear(&___nl__4);
#line 907
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 907
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 907
c_rt_lib0move(&___nl__2, string_utils0is_integer(___nl__0));
#line 907
label_15:
#line 907
c_rt_lib0clear(&___nl__3);
#line 907
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 907
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 908
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 909
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 909
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 909
label_19:
#line 909
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__1));
#line 909
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 910
c_rt_lib0move(&___nl__7,___get_global_const(1086));
#line 910
c_rt_lib0move(&___nl__3, c_rt_lib0mul_mod(___nl__3, ___nl__7));
#line 910
c_rt_lib0clear(&___nl__7);
#line 911
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 911
c_rt_lib0move(&___nl__8, string0substr(___nl__0, ___nl__4, ___nl__9));
#line 911
c_rt_lib0clear(&___nl__9);
#line 911
c_rt_lib0move(&___nl__7, string0ord(___nl__8));
#line 911
c_rt_lib0clear(&___nl__8);
#line 911
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 911
c_rt_lib0move(&___nl__8, string0ord(___nl__9));
#line 911
c_rt_lib0clear(&___nl__9);
#line 911
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 911
c_rt_lib0clear(&___nl__8);
#line 911
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__7));
#line 911
c_rt_lib0clear(&___nl__7);
#line 912
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 912
goto label_19;
#line 912
label_17:
#line 912
c_rt_lib0clear(&___nl__4);
#line 912
c_rt_lib0clear(&___nl__5);
#line 912
c_rt_lib0clear(&___nl__6);
#line 913
c_rt_lib0clear(&___nl__0);
#line 913
c_rt_lib0clear(&___nl__1);
#line 913
c_rt_lib0clear(&___nl__2);
#line 913
return ___nl__3;
#line 913
c_rt_lib0clear(&___nl__3);
#line 914
goto label_1;
#line 914
label_14:
#line 915
c_rt_lib0clear(&___nl__1);
#line 915
c_rt_lib0clear(&___nl__2);
#line 915
return ___nl__0;
#line 916
goto label_1;
#line 916
label_1:
#line 916
c_rt_lib0clear(&___nl__2);
#line 916
c_rt_lib0clear(&___nl__1);
#line 916
c_rt_lib0clear(&___nl__0);
#line 916
return NULL;
}

ImmT translator_priv0dest_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 920
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 920
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(796)));
#line 920
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 920
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 921
c_rt_lib0copy(&___nl__5, ___nl__0);
#line 921
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(796)));
#line 921
c_rt_lib0move(&___nl__4, translator_priv0get_var_register(___nl__5, ___ref___2));
#line 921
c_rt_lib0clear(&___nl__5);
#line 921
c_rt_lib0clear(&___nl__0);
#line 921
c_rt_lib0clear(&___nl__1);
#line 921
c_rt_lib0clear(&___nl__3);
#line 921
return ___nl__4;
#line 921
c_rt_lib0clear(&___nl__4);
#line 922
goto label_2;
#line 922
label_2:
#line 922
c_rt_lib0clear(&___nl__3);
#line 923
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 923
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 923
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 923
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 923
c_rt_lib0move(&___nl__4, translator_priv0new_register(___ref___2));
#line 923
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 923
c_rt_lib0clear(&___nl__4);
#line 923
goto label_4;
#line 923
label_4:
#line 923
c_rt_lib0clear(&___nl__3);
#line 924
c_rt_lib0delete(translator_priv0print_val(___nl__0, ___nl__1, ___ref___2));
#line 925
c_rt_lib0clear(&___nl__0);
#line 925
return ___nl__1;
#line 925
c_rt_lib0clear(&___nl__0);
#line 925
c_rt_lib0clear(&___nl__1);
#line 925
return NULL;
}

ImmT translator_priv0def_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 930
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 930
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 930
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 930
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 930
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 930
goto label_2;
#line 930
label_2:
#line 930
c_rt_lib0clear(&___nl__4);
#line 931
c_rt_lib0delete(translator_priv0print_val(___nl__0, ___nl__1, ___ref___3));
#line 932
c_rt_lib0clear(&___nl__0);
#line 932
c_rt_lib0clear(&___nl__2);
#line 932
return ___nl__1;
#line 932
c_rt_lib0clear(&___nl__0);
#line 932
c_rt_lib0clear(&___nl__1);
#line 932
c_rt_lib0clear(&___nl__2);
#line 932
return NULL;
}

ImmT translator_priv0calc_val(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 936
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 936
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(796)));
#line 936
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 936
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 937
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 937
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(796)));
#line 937
c_rt_lib0move(&___nl__3, translator_priv0get_var_register(___nl__4, ___ref___1));
#line 937
c_rt_lib0clear(&___nl__4);
#line 937
c_rt_lib0clear(&___nl__0);
#line 937
c_rt_lib0clear(&___nl__2);
#line 937
return ___nl__3;
#line 937
c_rt_lib0clear(&___nl__3);
#line 938
goto label_2;
#line 938
label_2:
#line 938
c_rt_lib0clear(&___nl__2);
#line 939
c_rt_lib0move(&___nl__2, translator_priv0new_register(___ref___1));
#line 940
c_rt_lib0delete(translator_priv0print_val(___nl__0, ___nl__2, ___ref___1));
#line 941
c_rt_lib0clear(&___nl__0);
#line 941
return ___nl__2;
#line 941
c_rt_lib0clear(&___nl__2);
#line 941
c_rt_lib0clear(&___nl__0);
#line 941
return NULL;
}

ImmT translator_priv0get_var_register(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 945
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1066)));
#line 945
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(652)));
#line 945
c_rt_lib0move(&___nl__2, hash0get_value(___nl__3, ___nl__0));
#line 945
c_rt_lib0clear(&___nl__3);
#line 945
c_rt_lib0clear(&___nl__0);
#line 945
return ___nl__2;
#line 945
c_rt_lib0clear(&___nl__2);
#line 945
c_rt_lib0clear(&___nl__0);
#line 945
return NULL;
}

ImmT translator_priv0new_declaration(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 949
c_rt_lib0move(&___nl__2, translator_priv0new_register(___ref___1));
#line 950
c_rt_lib0move(&___nl__3,___get_global_const(1066));
#line 950
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 950
c_rt_lib0move(&___nl__4,___get_global_const(652));
#line 950
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 950
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__0, ___nl__2));
#line 950
c_rt_lib0move(&___nl__5,___get_global_const(652));
#line 950
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 950
c_rt_lib0move(&___nl__5,___get_global_const(1066));
#line 950
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__3));
#line 950
c_rt_lib0clear(&___nl__5);
#line 950
c_rt_lib0clear(&___nl__3);
#line 950
c_rt_lib0clear(&___nl__4);
#line 951
c_rt_lib0move(&___nl__3,___get_global_const(217));
#line 951
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 951
c_rt_lib0move(&___nl__4,___get_global_const(662));
#line 951
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 951
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__0, ___nl__2));
#line 951
c_rt_lib0move(&___nl__5,___get_global_const(662));
#line 951
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 951
c_rt_lib0move(&___nl__5,___get_global_const(217));
#line 951
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__3));
#line 951
c_rt_lib0clear(&___nl__5);
#line 951
c_rt_lib0clear(&___nl__3);
#line 951
c_rt_lib0clear(&___nl__4);
#line 952
c_rt_lib0clear(&___nl__0);
#line 952
return ___nl__2;
#line 952
c_rt_lib0clear(&___nl__2);
#line 952
c_rt_lib0clear(&___nl__0);
#line 952
return NULL;
}

ImmT translator_priv0new_register(ImmT * ___ref___0) {
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 956
c_rt_lib0move(&___nl__1,___get_global_const(1066));
#line 956
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_hash(*___ref___0, ___nl__1));
#line 956
c_rt_lib0move(&___nl__2,___get_global_const(1062));
#line 956
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(___nl__1, ___nl__2));
#line 956
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 956
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 956
c_rt_lib0move(&___nl__4,___get_global_const(1062));
#line 956
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__4, ___nl__2));
#line 956
c_rt_lib0move(&___nl__4,___get_global_const(1066));
#line 956
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__1));
#line 956
c_rt_lib0clear(&___nl__4);
#line 956
c_rt_lib0clear(&___nl__1);
#line 956
c_rt_lib0clear(&___nl__2);
#line 956
c_rt_lib0clear(&___nl__3);
#line 957
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1069)));
#line 957
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(382)));
#line 957
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1066)));
#line 957
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1062)));
#line 957
c_rt_lib0move(&___nl__1, c_rt_lib0lt(___nl__1, ___nl__2));
#line 957
c_rt_lib0clear(&___nl__2);
#line 957
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 957
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 957
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1066)));
#line 957
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1062)));
#line 957
c_rt_lib0move(&___nl__3,___get_global_const(1069));
#line 957
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 957
c_rt_lib0copy(&___nl__4, ___nl__2);
#line 957
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(382), ___nl__4);
#line 957
c_rt_lib0move(&___nl__5,___get_global_const(1069));
#line 957
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 957
c_rt_lib0clear(&___nl__5);
#line 957
c_rt_lib0clear(&___nl__2);
#line 957
c_rt_lib0clear(&___nl__3);
#line 957
c_rt_lib0clear(&___nl__4);
#line 957
goto label_2;
#line 957
label_2:
#line 957
c_rt_lib0clear(&___nl__1);
#line 958
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1066)));
#line 958
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1062)));
#line 958
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 958
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 958
c_rt_lib0clear(&___nl__2);
#line 958
return ___nl__1;
#line 958
c_rt_lib0clear(&___nl__1);
#line 958
return NULL;
}

ImmT translator_priv0save_registers(ImmT * ___ref___0) {
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 962
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1066)));
#line 962
return ___nl__1;
#line 962
c_rt_lib0clear(&___nl__1);
#line 962
return NULL;
}

ImmT translator_priv0undef_reg(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 966
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(200), ___nl__0));
#line 966
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__2));
#line 966
c_rt_lib0clear(&___nl__2);
#line 966
c_rt_lib0clear(&___nl__0);
#line 966
return NULL;
}

ImmT translator_priv0restore_registers(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 970
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(1062)));
#line 970
label_2:
#line 970
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1066)));
#line 970
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1062)));
#line 970
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 970
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 970
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 971
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(878)));
#line 971
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 971
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__2));
#line 971
c_rt_lib0clear(&___nl__5);
#line 971
c_rt_lib0delete(translator_priv0undef_reg(___nl__4, ___ref___1));
#line 971
c_rt_lib0clear(&___nl__4);
#line 971
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 971
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 971
c_rt_lib0clear(&___nl__4);
#line 972
goto label_2;
#line 972
label_1:
#line 972
c_rt_lib0clear(&___nl__2);
#line 972
c_rt_lib0clear(&___nl__3);
#line 973
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 973
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1066), ___nl__2);
#line 973
c_rt_lib0clear(&___nl__2);
#line 973
c_rt_lib0clear(&___nl__0);
#line 973
return NULL;
}

ImmT translator_priv0print_sim_label(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 977
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__0));
#line 977
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__2));
#line 977
c_rt_lib0clear(&___nl__2);
#line 977
c_rt_lib0clear(&___nl__0);
#line 977
return NULL;
}

ImmT translator_priv0get_sim_label(ImmT * ___ref___0) {
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 981
c_rt_lib0move(&___nl__1,___get_global_const(1068));
#line 981
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_hash(*___ref___0, ___nl__1));
#line 981
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 981
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__2));
#line 981
c_rt_lib0move(&___nl__3,___get_global_const(1068));
#line 981
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__1));
#line 981
c_rt_lib0clear(&___nl__3);
#line 981
c_rt_lib0clear(&___nl__1);
#line 981
c_rt_lib0clear(&___nl__2);
#line 982
c_rt_lib0move(&___nl__1,___get_global_const(1087));
#line 982
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1068)));
#line 982
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 982
c_rt_lib0clear(&___nl__2);
#line 982
return ___nl__1;
#line 982
c_rt_lib0clear(&___nl__1);
#line 982
return NULL;
}


static ImmT ___const__[8];
static int ___const_init__ = 1;
void translator_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[7];


for(int i=0;i<7;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 7);
}}
ImmT translator_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT translator_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = translator0function_logic_t0cal();
	break;
case 1:
	___const__[1] = translator0loop0cal();
	break;
case 2:
	___const__[2] = translator0loop_label0cal();
	break;
case 3:
	___const__[3] = translator0state_t0cal();
	break;
case 4:
	___const__[4] = translator0string_t0cal();
	break;
case 5:
	___const__[5] = translator0lvalue_values_t0cal();
	break;
case 6:
	___const__[6] = translator0ref_rec_args_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
