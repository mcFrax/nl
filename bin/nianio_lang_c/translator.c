
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
ImmT translator_priv0get_stuct_of_lvalue(ImmT * ___ref___0);
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
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(1065), ___nl__2, ___get_global_const(652), ___nl__3));
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
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1066), ___get_global_const(1067)));
#line 20
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 20
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(1068), ___nl__2, ___get_global_const(1069), ___nl__3));
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
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1066), ___get_global_const(119)));
#line 24
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 24
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(translator0loop0ptr, ___get_global_const(1066), ___get_global_const(119)));
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
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(translator0function_logic_t0ptr, ___get_global_const(1066), ___get_global_const(1067)));
#line 28
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 28
c_rt_lib0move(&___nl__5, ptd0sim());
#line 28
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nlasm0function_t0ptr, ___get_global_const(195), ___get_global_const(630)));
#line 28
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 28
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(translator0loop_label0ptr, ___get_global_const(1066), ___get_global_const(1070)));
#line 28
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 28
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(6, ___get_global_const(1071), ___nl__2, ___get_global_const(217), ___nl__3, ___get_global_const(1069), ___nl__4, ___get_global_const(434), ___nl__5, ___get_global_const(1072), ___nl__6, ___get_global_const(1070), ___nl__7));
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
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(848), ___nl__5, ___get_global_const(849), ___nl__6));
#line 39
c_rt_lib0clear(&___nl__5);
#line 39
c_rt_lib0clear(&___nl__6);
#line 39
c_rt_lib0move(&___nl__3, ptd0var(___nl__4));
#line 39
c_rt_lib0clear(&___nl__4);
#line 39
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(281), ___nl__2, ___get_global_const(850), ___nl__3));
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
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(876)));
#line 43
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(876)));
#line 43
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(876)));
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__7));
#line 43
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(650), ___nl__6, ___get_global_const(1073), ___nl__7));
#line 43
c_rt_lib0clear(&___nl__6);
#line 43
c_rt_lib0clear(&___nl__7);
#line 43
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 43
c_rt_lib0clear(&___nl__5);
#line 43
c_rt_lib0move(&___nl__7, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(876)));
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
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(650), ___nl__3, ___get_global_const(1073), ___nl__4, ___get_global_const(283), ___nl__5));
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0clear(&___nl__5);
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
#line 51
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 51
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(113)));
#line 51
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 51
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(862)));
#line 51
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 51
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 51
c_rt_lib0clear(&___nl__4);
#line 51
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__2, ___get_global_const(862), ___nl__3));
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__3);
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(113)));
#line 52
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(848)));
#line 52
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(862)));
#line 52
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__3, ___get_global_const(862), ___nl__4));
#line 52
c_rt_lib0clear(&___nl__3);
#line 52
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(400), ___nl__1, ___get_global_const(848), ___nl__2));
#line 53
c_rt_lib0clear(&___nl__0);
#line 53
c_rt_lib0clear(&___nl__1);
#line 53
c_rt_lib0clear(&___nl__2);
#line 53
return ___nl__3;
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0clear(&___nl__1);
#line 53
c_rt_lib0clear(&___nl__2);
#line 53
c_rt_lib0clear(&___nl__0);
#line 53
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
#line 57
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 57
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 57
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 57
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(434), ___nl__2, ___get_global_const(77), ___nl__3, ___get_global_const(340), ___nl__4));
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
c_rt_lib0clear(&___nl__3);
#line 57
c_rt_lib0clear(&___nl__4);
#line 58
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 58
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 58
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(340), ___nl__3);
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__3);
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(128)));
#line 59
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 59
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 59
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 59
label_3:
#line 59
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 59
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 59
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 60
c_rt_lib0move(&___nl__8,___get_global_const(340));
#line 60
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__1, ___nl__8));
#line 60
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 60
c_rt_lib0delete(array0push(&___nl__8, ___nl__9));
#line 60
c_rt_lib0clear(&___nl__9);
#line 60
c_rt_lib0move(&___nl__9,___get_global_const(340));
#line 60
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__9, ___nl__8));
#line 60
c_rt_lib0clear(&___nl__9);
#line 60
c_rt_lib0clear(&___nl__8);
#line 61
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 61
goto label_3;
#line 61
label_1:
#line 61
c_rt_lib0clear(&___nl__2);
#line 61
c_rt_lib0clear(&___nl__3);
#line 61
c_rt_lib0clear(&___nl__4);
#line 61
c_rt_lib0clear(&___nl__5);
#line 61
c_rt_lib0clear(&___nl__6);
#line 61
c_rt_lib0clear(&___nl__7);
#line 62
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(735)));
#line 62
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 62
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 62
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 62
label_6:
#line 62
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 62
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 63
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 63
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 63
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(652), ___nl__9, ___get_global_const(1065), ___nl__10));
#line 63
c_rt_lib0clear(&___nl__9);
#line 63
c_rt_lib0clear(&___nl__10);
#line 64
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 64
c_rt_lib0move(&___nl__11, nlasm0empty_debug());
#line 64
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 64
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 64
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(332)));
#line 64
c_rt_lib0move(&___nl__16,___get_global_const(1));
#line 64
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(0));
#line 64
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(0));
#line 64
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 64
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(6, ___get_global_const(216), ___nl__14, ___get_global_const(332), ___nl__15, ___get_global_const(382), ___nl__16, ___get_global_const(335), ___nl__17, ___get_global_const(384), ___nl__18, ___get_global_const(78), ___nl__19));
#line 64
c_rt_lib0clear(&___nl__14);
#line 64
c_rt_lib0clear(&___nl__15);
#line 64
c_rt_lib0clear(&___nl__16);
#line 64
c_rt_lib0clear(&___nl__17);
#line 64
c_rt_lib0clear(&___nl__18);
#line 64
c_rt_lib0clear(&___nl__19);
#line 64
c_rt_lib0move(&___nl__16,___get_global_const(0));
#line 64
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(2, ___get_global_const(1068), ___nl__16, ___get_global_const(1069), ___nl__8));
#line 64
c_rt_lib0clear(&___nl__16);
#line 64
c_rt_lib0move(&___nl__17,___get_global_const(0));
#line 64
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(2, ___get_global_const(1068), ___nl__17, ___get_global_const(1069), ___nl__8));
#line 64
c_rt_lib0clear(&___nl__17);
#line 64
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(772), ___nl__15, ___get_global_const(773), ___nl__16));
#line 64
c_rt_lib0clear(&___nl__15);
#line 64
c_rt_lib0clear(&___nl__16);
#line 64
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(6, ___get_global_const(1071), ___nl__10, ___get_global_const(217), ___nl__11, ___get_global_const(434), ___nl__12, ___get_global_const(1069), ___nl__8, ___get_global_const(1072), ___nl__13, ___get_global_const(1070), ___nl__14));
#line 64
c_rt_lib0clear(&___nl__10);
#line 64
c_rt_lib0clear(&___nl__11);
#line 64
c_rt_lib0clear(&___nl__12);
#line 64
c_rt_lib0clear(&___nl__13);
#line 64
c_rt_lib0clear(&___nl__14);
#line 79
c_rt_lib0delete(translator_priv0print_fun_def(___nl__3, &___nl__9));
#line 80
c_rt_lib0move(&___nl__10,___get_global_const(77));
#line 80
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__1, ___nl__10));
#line 80
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(1072)));
#line 80
c_rt_lib0delete(array0push(&___nl__10, ___nl__11));
#line 80
c_rt_lib0clear(&___nl__11);
#line 80
c_rt_lib0move(&___nl__11,___get_global_const(77));
#line 80
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__11, ___nl__10));
#line 80
c_rt_lib0clear(&___nl__11);
#line 80
c_rt_lib0clear(&___nl__10);
#line 80
c_rt_lib0clear(&___nl__8);
#line 80
c_rt_lib0clear(&___nl__9);
#line 81
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 81
goto label_6;
#line 81
label_4:
#line 81
c_rt_lib0clear(&___nl__2);
#line 81
c_rt_lib0clear(&___nl__3);
#line 81
c_rt_lib0clear(&___nl__4);
#line 81
c_rt_lib0clear(&___nl__5);
#line 81
c_rt_lib0clear(&___nl__6);
#line 81
c_rt_lib0clear(&___nl__7);
#line 82
c_rt_lib0clear(&___nl__0);
#line 82
return ___nl__1;
#line 82
c_rt_lib0clear(&___nl__1);
#line 82
c_rt_lib0clear(&___nl__0);
#line 82
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
#line 86
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 86
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 86
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 86
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 86
label_3:
#line 86
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 86
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 86
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 87
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(261)));
#line 87
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(38)));
#line 87
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 90
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(5)));
#line 90
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 90
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 90
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 90
nl_die_arg(___nl__9);
#line 87
label_5:
#line 88
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 88
c_rt_lib0delete(translator_priv0new_declaration(___nl__10, ___ref___1));
#line 88
c_rt_lib0clear(&___nl__10);
#line 89
c_rt_lib0move(&___nl__10,___get_global_const(1072));
#line 89
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 89
c_rt_lib0move(&___nl__11,___get_global_const(335));
#line 89
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 89
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(238)));
#line 89
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 89
c_rt_lib0clear(&___nl__12);
#line 89
c_rt_lib0move(&___nl__12,___get_global_const(335));
#line 89
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 89
c_rt_lib0move(&___nl__12,___get_global_const(1072));
#line 89
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__10));
#line 89
c_rt_lib0clear(&___nl__12);
#line 89
c_rt_lib0clear(&___nl__10);
#line 89
c_rt_lib0clear(&___nl__11);
#line 90
goto label_4;
#line 90
label_6:
#line 91
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 91
c_rt_lib0delete(translator_priv0new_declaration(___nl__10, ___ref___1));
#line 91
c_rt_lib0clear(&___nl__10);
#line 92
c_rt_lib0move(&___nl__10,___get_global_const(1072));
#line 92
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 92
c_rt_lib0move(&___nl__11,___get_global_const(335));
#line 92
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 92
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_none(___get_global_const(5)));
#line 92
c_rt_lib0delete(array0push(&___nl__11, ___nl__12));
#line 92
c_rt_lib0clear(&___nl__12);
#line 92
c_rt_lib0move(&___nl__12,___get_global_const(335));
#line 92
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 92
c_rt_lib0move(&___nl__12,___get_global_const(1072));
#line 92
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__10));
#line 92
c_rt_lib0clear(&___nl__12);
#line 92
c_rt_lib0clear(&___nl__10);
#line 92
c_rt_lib0clear(&___nl__11);
#line 93
goto label_4;
#line 93
label_4:
#line 93
c_rt_lib0clear(&___nl__8);
#line 93
c_rt_lib0clear(&___nl__9);
#line 94
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 94
goto label_3;
#line 94
label_1:
#line 94
c_rt_lib0clear(&___nl__2);
#line 94
c_rt_lib0clear(&___nl__3);
#line 94
c_rt_lib0clear(&___nl__4);
#line 94
c_rt_lib0clear(&___nl__5);
#line 94
c_rt_lib0clear(&___nl__6);
#line 94
c_rt_lib0clear(&___nl__7);
#line 95
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 95
c_rt_lib0delete(translator_priv0print_cmd(___nl__2, ___ref___1));
#line 95
c_rt_lib0clear(&___nl__2);
#line 96
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 96
c_rt_lib0delete(translator_priv0print_return(___nl__2, ___ref___1));
#line 96
c_rt_lib0clear(&___nl__2);
#line 96
c_rt_lib0clear(&___nl__0);
#line 96
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
#line 101
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 102
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 102
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 102
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__0));
#line 102
label_3:
#line 102
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 102
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 102
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__0, ___nl__5));
#line 103
c_rt_lib0move(&___nl__9, translator_priv0calc_val(___nl__4, ___ref___2));
#line 103
c_rt_lib0delete(array0push(&___nl__3, ___nl__9));
#line 103
c_rt_lib0clear(&___nl__9);
#line 104
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 104
goto label_3;
#line 104
label_1:
#line 104
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0clear(&___nl__5);
#line 104
c_rt_lib0clear(&___nl__6);
#line 104
c_rt_lib0clear(&___nl__7);
#line 104
c_rt_lib0clear(&___nl__8);
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__3));
#line 105
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__4));
#line 105
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 105
c_rt_lib0clear(&___nl__4);
#line 105
c_rt_lib0clear(&___nl__3);
#line 105
c_rt_lib0clear(&___nl__0);
#line 105
c_rt_lib0clear(&___nl__1);
#line 105
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
#line 110
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 111
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 111
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 111
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__0));
#line 111
label_3:
#line 111
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 111
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 111
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__0, ___nl__5));
#line 112
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(283)));
#line 112
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(802)));
#line 112
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 112
c_rt_lib0move(&___nl__11, translator_priv0calc_val(___nl__12, ___ref___2));
#line 112
c_rt_lib0clear(&___nl__12);
#line 112
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(283), ___nl__10, ___get_global_const(238), ___nl__11));
#line 112
c_rt_lib0clear(&___nl__10);
#line 112
c_rt_lib0clear(&___nl__11);
#line 112
c_rt_lib0delete(array0push(&___nl__3, ___nl__9));
#line 112
c_rt_lib0clear(&___nl__9);
#line 113
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 113
goto label_3;
#line 113
label_1:
#line 113
c_rt_lib0clear(&___nl__4);
#line 113
c_rt_lib0clear(&___nl__5);
#line 113
c_rt_lib0clear(&___nl__6);
#line 113
c_rt_lib0clear(&___nl__7);
#line 113
c_rt_lib0clear(&___nl__8);
#line 114
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__3));
#line 114
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(220), ___nl__4));
#line 114
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 114
c_rt_lib0clear(&___nl__4);
#line 114
c_rt_lib0clear(&___nl__3);
#line 114
c_rt_lib0clear(&___nl__0);
#line 114
c_rt_lib0clear(&___nl__1);
#line 114
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
#line 118
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(215)));
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(796)));
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(778)));
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 119
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 119
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 120
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(796)));
#line 120
c_rt_lib0move(&___nl__5, translator_priv0dest_val(___nl__6, ___nl__1, ___ref___2));
#line 120
c_rt_lib0clear(&___nl__6);
#line 120
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__5));
#line 120
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 120
c_rt_lib0clear(&___nl__5);
#line 121
goto label_2;
#line 121
label_2:
#line 121
c_rt_lib0clear(&___nl__4);
#line 122
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 122
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__3, ___get_global_const(78), ___nl__5));
#line 122
c_rt_lib0clear(&___nl__5);
#line 122
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__4));
#line 122
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 122
c_rt_lib0clear(&___nl__4);
#line 122
c_rt_lib0clear(&___nl__3);
#line 122
c_rt_lib0clear(&___nl__0);
#line 122
c_rt_lib0clear(&___nl__1);
#line 122
return NULL;
}

ImmT translator_priv0print_var_decl(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 126
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 126
c_rt_lib0move(&___nl__2, translator_priv0new_declaration(___nl__3, ___ref___1));
#line 126
c_rt_lib0clear(&___nl__3);
#line 127
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(650)));
#line 127
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(38)));
#line 127
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(650)));
#line 128
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 128
c_rt_lib0move(&___nl__4,___get_global_const(76));
#line 128
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 128
nl_die_arg(___nl__4);
#line 127
label_2:
#line 128
goto label_1;
#line 128
label_3:
#line 128
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(650)));
#line 129
c_rt_lib0delete(translator_priv0print_val(___nl__5, ___nl__2, ___ref___1));
#line 129
c_rt_lib0clear(&___nl__5);
#line 130
goto label_1;
#line 130
label_1:
#line 130
c_rt_lib0clear(&___nl__3);
#line 130
c_rt_lib0clear(&___nl__4);
#line 131
c_rt_lib0clear(&___nl__0);
#line 131
return ___nl__2;
#line 131
c_rt_lib0clear(&___nl__2);
#line 131
c_rt_lib0clear(&___nl__0);
#line 131
return NULL;
}

ImmT translator_priv0load_const(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 135
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__1, ___get_global_const(238), ___nl__0));
#line 135
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(227), ___nl__3));
#line 135
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 135
c_rt_lib0clear(&___nl__3);
#line 135
c_rt_lib0clear(&___nl__0);
#line 135
c_rt_lib0clear(&___nl__1);
#line 135
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
#line 139
c_rt_lib0move(&___nl__3, ptd0sim());
#line 139
c_rt_lib0move(&___nl__4, ptd0sim());
#line 139
c_rt_lib0move(&___nl__5, ptd0sim());
#line 139
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(1074), ___nl__3, ___get_global_const(1075), ___nl__4, ___get_global_const(1076), ___nl__5));
#line 139
c_rt_lib0clear(&___nl__3);
#line 139
c_rt_lib0clear(&___nl__4);
#line 139
c_rt_lib0clear(&___nl__5);
#line 139
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 139
c_rt_lib0clear(&___nl__2);
#line 139
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 139
c_rt_lib0clear(&___nl__1);
#line 139
return ___nl__0;
#line 139
c_rt_lib0clear(&___nl__0);
#line 139
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
#line 143
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 144
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 145
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 146
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 147
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 147
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 147
c_rt_lib0clear(&___nl__8);
#line 147
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 147
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 147
c_rt_lib0clear(&___nl__8);
#line 147
label_2:
#line 147
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 147
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 147
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 147
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 148
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 148
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__7));
#line 148
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(261)));
#line 148
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(5)));
#line 148
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 148
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 148
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 148
c_rt_lib0clear(&___nl__9);
#line 148
goto label_3;
#line 148
goto label_5;
#line 148
label_5:
#line 148
c_rt_lib0clear(&___nl__9);
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__7));
#line 149
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(238)));
#line 150
c_rt_lib0delete(translator_priv0get_stuct_of_lvalue(&___nl__9));
#line 151
c_rt_lib0copy(&___nl__11, ___nl__9);
#line 151
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(796)));
#line 151
c_rt_lib0move(&___nl__10, hash0has_key(___nl__6, ___nl__11));
#line 151
c_rt_lib0clear(&___nl__11);
#line 151
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 151
if(c_rt_lib0check_true_native(___nl__10)){ goto label_7;}
#line 151
c_rt_lib0clear(&___nl__9);
#line 151
c_rt_lib0clear(&___nl__10);
#line 151
goto label_3;
#line 151
goto label_7;
#line 151
label_7:
#line 151
c_rt_lib0clear(&___nl__10);
#line 152
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 152
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(796)));
#line 152
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 152
c_rt_lib0delete(hash0set_value(&___nl__6, ___nl__10, ___nl__11));
#line 152
c_rt_lib0clear(&___nl__11);
#line 152
c_rt_lib0clear(&___nl__10);
#line 153
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 153
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__10));
#line 153
c_rt_lib0clear(&___nl__10);
#line 153
c_rt_lib0clear(&___nl__9);
#line 153
label_3:
#line 153
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 153
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__9));
#line 153
c_rt_lib0clear(&___nl__9);
#line 154
goto label_2;
#line 154
label_1:
#line 154
c_rt_lib0clear(&___nl__7);
#line 154
c_rt_lib0clear(&___nl__8);
#line 155
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 156
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 156
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 156
c_rt_lib0clear(&___nl__9);
#line 156
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 156
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 156
label_10:
#line 156
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__9, ___nl__8));
#line 156
if(c_rt_lib0check_true_native(___nl__11)){ goto label_8;}
#line 157
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(74)));
#line 157
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__12, ___nl__9));
#line 158
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(261)));
#line 158
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(38)));
#line 158
if(c_rt_lib0check_true_native(___nl__14)){ goto label_12;}
#line 160
c_rt_lib0move(&___nl__14, c_rt_lib0priv_is(___nl__13, ___get_global_const(5)));
#line 160
if(c_rt_lib0check_true_native(___nl__14)){ goto label_13;}
#line 160
c_rt_lib0move(&___nl__14,___get_global_const(76));
#line 160
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(2, ___nl__14, ___nl__13));
#line 160
nl_die_arg(___nl__14);
#line 158
label_12:
#line 159
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(238)));
#line 159
c_rt_lib0move(&___nl__15, translator_priv0calc_val(___nl__16, ___ref___2));
#line 159
c_rt_lib0clear(&___nl__16);
#line 159
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__15));
#line 159
c_rt_lib0delete(array0push(&___nl__3, ___nl__15));
#line 159
c_rt_lib0clear(&___nl__15);
#line 160
goto label_11;
#line 160
label_13:
#line 161
c_rt_lib0move(&___nl__15, hash0has_key(___nl__5, ___nl__9));
#line 161
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 161
if(c_rt_lib0check_true_native(___nl__15)){ goto label_15;}
#line 162
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(238)));
#line 162
c_rt_lib0move(&___nl__18,___get_global_const(2));
#line 162
c_rt_lib0move(&___nl__16, translator_priv0get_value_of_lvalue(___nl__17, ___nl__18, ___ref___2));
#line 162
c_rt_lib0clear(&___nl__18);
#line 162
c_rt_lib0clear(&___nl__17);
#line 163
c_rt_lib0move(&___nl__18, array0len(___nl__16));
#line 163
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 163
c_rt_lib0move(&___nl__18, c_rt_lib0sub_mod(___nl__18, ___nl__19));
#line 163
c_rt_lib0clear(&___nl__19);
#line 163
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__16, ___nl__18));
#line 163
c_rt_lib0clear(&___nl__18);
#line 163
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__17, ___get_global_const(650)));
#line 164
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__17));
#line 164
c_rt_lib0delete(array0push(&___nl__3, ___nl__18));
#line 164
c_rt_lib0clear(&___nl__18);
#line 165
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__9, ___nl__16));
#line 165
c_rt_lib0clear(&___nl__16);
#line 165
c_rt_lib0clear(&___nl__17);
#line 166
goto label_14;
#line 166
label_15:
#line 167
c_rt_lib0move(&___nl__16, translator_priv0new_register(___ref___2));
#line 168
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(238)));
#line 168
c_rt_lib0delete(translator_priv0print_val(___nl__17, ___nl__16, ___ref___2));
#line 168
c_rt_lib0clear(&___nl__17);
#line 169
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 169
c_rt_lib0delete(array0push(&___nl__3, ___nl__17));
#line 169
c_rt_lib0clear(&___nl__17);
#line 169
c_rt_lib0clear(&___nl__16);
#line 170
goto label_14;
#line 170
label_14:
#line 170
c_rt_lib0clear(&___nl__15);
#line 171
goto label_11;
#line 171
label_11:
#line 171
c_rt_lib0clear(&___nl__13);
#line 171
c_rt_lib0clear(&___nl__14);
#line 172
c_rt_lib0move(&___nl__13, translator_priv0save_registers(___ref___2));
#line 172
c_rt_lib0delete(array0push(&___nl__7, ___nl__13));
#line 172
c_rt_lib0clear(&___nl__13);
#line 172
c_rt_lib0clear(&___nl__12);
#line 173
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 173
goto label_10;
#line 173
label_8:
#line 173
c_rt_lib0clear(&___nl__8);
#line 173
c_rt_lib0clear(&___nl__9);
#line 173
c_rt_lib0clear(&___nl__10);
#line 173
c_rt_lib0clear(&___nl__11);
#line 174
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(111)));
#line 174
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 174
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(4, ___get_global_const(237), ___nl__1, ___get_global_const(261), ___nl__9, ___get_global_const(389), ___nl__10, ___get_global_const(74), ___nl__3));
#line 174
c_rt_lib0clear(&___nl__9);
#line 174
c_rt_lib0clear(&___nl__10);
#line 174
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(221), ___nl__8));
#line 174
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 174
c_rt_lib0clear(&___nl__8);
#line 175
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 175
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 175
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 175
c_rt_lib0clear(&___nl__9);
#line 175
label_17:
#line 175
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 175
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__8, ___nl__9));
#line 175
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 175
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 176
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 176
c_rt_lib0delete(translator_priv0restore_registers(___nl__10, ___ref___2));
#line 176
c_rt_lib0clear(&___nl__10);
#line 177
c_rt_lib0move(&___nl__10, hash0has_key(___nl__4, ___nl__8));
#line 177
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 177
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 177
if(c_rt_lib0check_true_native(___nl__10)){ goto label_20;}
#line 177
c_rt_lib0clear(&___nl__10);
#line 177
goto label_18;
#line 177
goto label_20;
#line 177
label_20:
#line 177
c_rt_lib0clear(&___nl__10);
#line 178
c_rt_lib0move(&___nl__10, hash0get_value(___nl__4, ___nl__8));
#line 178
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 178
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__10, ___nl__11, ___ref___2));
#line 178
c_rt_lib0clear(&___nl__11);
#line 178
c_rt_lib0clear(&___nl__10);
#line 178
label_18:
#line 178
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 178
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__10));
#line 178
c_rt_lib0clear(&___nl__10);
#line 179
goto label_17;
#line 179
label_16:
#line 179
c_rt_lib0clear(&___nl__8);
#line 179
c_rt_lib0clear(&___nl__9);
#line 179
c_rt_lib0clear(&___nl__3);
#line 179
c_rt_lib0clear(&___nl__4);
#line 179
c_rt_lib0clear(&___nl__5);
#line 179
c_rt_lib0clear(&___nl__6);
#line 179
c_rt_lib0clear(&___nl__7);
#line 179
c_rt_lib0clear(&___nl__0);
#line 179
c_rt_lib0clear(&___nl__1);
#line 179
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
#line 183
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 184
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(298)));
#line 184
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 186
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(717)));
#line 186
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 188
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 188
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 190
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 190
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 192
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(788)));
#line 192
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 194
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(796)));
#line 194
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 196
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 196
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 198
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(223)));
#line 198
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 200
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 200
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 202
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 202
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 204
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(759)));
#line 204
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 206
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(219)));
#line 206
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 208
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(220)));
#line 208
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 210
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(778)));
#line 210
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 211
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 211
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 213
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(806)));
#line 213
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 215
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__0, ___get_global_const(807)));
#line 215
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 215
c_rt_lib0move(&___nl__4,___get_global_const(76));
#line 215
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__0));
#line 215
nl_die_arg(___nl__4);
#line 184
label_2:
#line 184
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(298)));
#line 185
c_rt_lib0move(&___nl__6, translator_priv0convert_str_to_number(___nl__5));
#line 185
c_rt_lib0delete(translator_priv0load_const(___nl__6, ___nl__1, ___ref___2));
#line 185
c_rt_lib0clear(&___nl__6);
#line 185
c_rt_lib0clear(&___nl__5);
#line 186
goto label_1;
#line 186
label_3:
#line 186
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(717)));
#line 187
c_rt_lib0move(&___nl__6, translator_priv0make_string(___nl__5, ___ref___2));
#line 187
c_rt_lib0delete(translator_priv0load_const(___nl__6, ___nl__1, ___ref___2));
#line 187
c_rt_lib0clear(&___nl__6);
#line 187
c_rt_lib0clear(&___nl__5);
#line 188
goto label_1;
#line 188
label_4:
#line 188
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 189
c_rt_lib0delete(translator_priv0print_ternary_op(___nl__5, ___nl__1, ___ref___2));
#line 189
c_rt_lib0clear(&___nl__5);
#line 190
goto label_1;
#line 190
label_5:
#line 190
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(802)));
#line 191
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 191
nl_die_arg(___nl__6);
#line 191
c_rt_lib0clear(&___nl__6);
#line 191
c_rt_lib0clear(&___nl__5);
#line 192
goto label_1;
#line 192
label_6:
#line 192
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(788)));
#line 193
c_rt_lib0delete(translator_priv0print_variant(___nl__5, ___nl__1, ___ref___2));
#line 193
c_rt_lib0clear(&___nl__5);
#line 194
goto label_1;
#line 194
label_7:
#line 194
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(796)));
#line 195
c_rt_lib0delete(translator_priv0print_variable(___nl__5, ___nl__1, ___ref___2));
#line 195
c_rt_lib0clear(&___nl__5);
#line 196
goto label_1;
#line 196
label_8:
#line 196
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 197
c_rt_lib0delete(translator_priv0print_val(___nl__5, ___nl__1, ___ref___2));
#line 197
c_rt_lib0clear(&___nl__5);
#line 198
goto label_1;
#line 198
label_9:
#line 198
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(223)));
#line 199
c_rt_lib0delete(translator_priv0print_bin_op(___nl__5, ___nl__1, ___ref___2));
#line 199
c_rt_lib0clear(&___nl__5);
#line 200
goto label_1;
#line 200
label_10:
#line 200
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(803)));
#line 201
c_rt_lib0delete(translator_priv0print_var_op(___nl__5, ___nl__1, ___ref___2));
#line 201
c_rt_lib0clear(&___nl__5);
#line 202
goto label_1;
#line 202
label_11:
#line 202
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(804)));
#line 203
c_rt_lib0delete(translator_priv0print_unary_op(___nl__5, ___nl__1, ___ref___2));
#line 203
c_rt_lib0clear(&___nl__5);
#line 204
goto label_1;
#line 204
label_12:
#line 204
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(759)));
#line 205
c_rt_lib0delete(translator_priv0print_fun_val(___nl__5, ___nl__1, ___ref___2));
#line 205
c_rt_lib0clear(&___nl__5);
#line 206
goto label_1;
#line 206
label_13:
#line 206
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(219)));
#line 207
c_rt_lib0delete(translator_priv0print_array_declaration(___nl__5, ___nl__1, ___ref___2));
#line 207
c_rt_lib0clear(&___nl__5);
#line 208
goto label_1;
#line 208
label_14:
#line 208
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(220)));
#line 209
c_rt_lib0delete(translator_priv0print_hash_declaration(___nl__5, ___nl__1, ___ref___2));
#line 209
c_rt_lib0clear(&___nl__5);
#line 210
goto label_1;
#line 210
label_15:
#line 211
goto label_1;
#line 211
label_16:
#line 211
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(805)));
#line 212
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 212
nl_die_arg(___nl__6);
#line 212
c_rt_lib0clear(&___nl__6);
#line 212
c_rt_lib0clear(&___nl__5);
#line 213
goto label_1;
#line 213
label_17:
#line 213
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(806)));
#line 214
c_rt_lib0move(&___nl__6,___get_global_const(825));
#line 214
c_rt_lib0delete(translator_priv0print_post_operator(___nl__5, ___nl__6, ___nl__1, ___ref___2));
#line 214
c_rt_lib0clear(&___nl__6);
#line 214
c_rt_lib0clear(&___nl__5);
#line 215
goto label_1;
#line 215
label_18:
#line 215
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__0, ___get_global_const(807)));
#line 216
c_rt_lib0move(&___nl__6,___get_global_const(140));
#line 216
c_rt_lib0delete(translator_priv0print_post_operator(___nl__5, ___nl__6, ___nl__1, ___ref___2));
#line 216
c_rt_lib0clear(&___nl__6);
#line 216
c_rt_lib0clear(&___nl__5);
#line 217
goto label_1;
#line 217
label_1:
#line 217
c_rt_lib0clear(&___nl__4);
#line 218
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 218
c_rt_lib0clear(&___nl__3);
#line 218
c_rt_lib0clear(&___nl__0);
#line 218
c_rt_lib0clear(&___nl__1);
#line 218
return NULL;
}

ImmT translator_priv0print_variable(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 222
c_rt_lib0move(&___nl__3, translator_priv0get_var_register(___nl__0, ___ref___2));
#line 222
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__3, ___ref___2));
#line 222
c_rt_lib0clear(&___nl__3);
#line 222
c_rt_lib0clear(&___nl__0);
#line 222
c_rt_lib0clear(&___nl__1);
#line 222
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
#line 227
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 227
c_rt_lib0move(&___nl__4, translator_priv0get_value_of_lvalue(___nl__0, ___nl__5, ___ref___3));
#line 227
c_rt_lib0clear(&___nl__5);
#line 228
c_rt_lib0move(&___nl__6, array0len(___nl__4));
#line 228
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 228
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 228
c_rt_lib0clear(&___nl__7);
#line 228
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 228
c_rt_lib0clear(&___nl__6);
#line 228
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(650)));
#line 229
c_rt_lib0delete(translator_priv0move(___nl__2, ___nl__5, ___ref___3));
#line 230
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 230
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(298), ___nl__7));
#line 230
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___3));
#line 230
c_rt_lib0clear(&___nl__7);
#line 231
c_rt_lib0move(&___nl__7,___get_global_const(825));
#line 231
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__1, ___nl__7));
#line 231
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 231
c_rt_lib0move(&___nl__7,___get_global_const(249));
#line 231
goto label_1;
#line 231
label_2:
#line 231
c_rt_lib0move(&___nl__7,___get_global_const(251));
#line 231
label_1:
#line 231
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__5, ___nl__5, ___nl__6, ___nl__7, ___ref___3));
#line 231
c_rt_lib0clear(&___nl__7);
#line 232
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 232
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__4, ___nl__7, ___ref___3));
#line 232
c_rt_lib0clear(&___nl__7);
#line 232
c_rt_lib0clear(&___nl__4);
#line 232
c_rt_lib0clear(&___nl__5);
#line 232
c_rt_lib0clear(&___nl__6);
#line 232
c_rt_lib0clear(&___nl__0);
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
c_rt_lib0clear(&___nl__2);
#line 232
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
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(247));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(249));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
label_4:
#line 236
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(251));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
label_3:
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 236
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 237
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 237
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 237
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 237
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 237
c_rt_lib0clear(&___nl__0);
#line 237
c_rt_lib0clear(&___nl__1);
#line 237
c_rt_lib0clear(&___nl__3);
#line 237
c_rt_lib0clear(&___nl__4);
#line 237
return NULL;
#line 237
goto label_6;
#line 237
label_6:
#line 237
c_rt_lib0clear(&___nl__4);
#line 238
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 238
c_rt_lib0delete(translator_priv0print_val(___nl__4, ___nl__1, ___ref___2));
#line 238
c_rt_lib0clear(&___nl__4);
#line 239
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__1, ___get_global_const(405), ___nl__5));
#line 239
c_rt_lib0clear(&___nl__5);
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__4));
#line 239
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__4));
#line 239
c_rt_lib0clear(&___nl__4);
#line 240
goto label_1;
#line 240
label_2:
#line 240
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 240
c_rt_lib0move(&___nl__4,___get_global_const(825));
#line 240
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 240
c_rt_lib0clear(&___nl__4);
#line 240
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 240
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 240
c_rt_lib0move(&___nl__4,___get_global_const(140));
#line 240
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 240
c_rt_lib0clear(&___nl__4);
#line 240
label_8:
#line 240
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 240
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 241
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 241
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 241
c_rt_lib0move(&___nl__4, translator_priv0get_value_of_lvalue(___nl__5, ___nl__6, ___ref___2));
#line 241
c_rt_lib0clear(&___nl__6);
#line 241
c_rt_lib0clear(&___nl__5);
#line 242
c_rt_lib0move(&___nl__6, array0len(___nl__4));
#line 242
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 242
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 242
c_rt_lib0clear(&___nl__7);
#line 242
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 242
c_rt_lib0clear(&___nl__6);
#line 242
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(650)));
#line 243
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 243
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(298), ___nl__7));
#line 243
c_rt_lib0move(&___nl__6, translator_priv0dest_val(___nl__7, ___nl__1, ___ref___2));
#line 243
c_rt_lib0clear(&___nl__7);
#line 244
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 244
c_rt_lib0move(&___nl__8,___get_global_const(825));
#line 244
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__8));
#line 244
c_rt_lib0clear(&___nl__8);
#line 244
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 244
c_rt_lib0move(&___nl__7,___get_global_const(249));
#line 244
goto label_9;
#line 244
label_10:
#line 244
c_rt_lib0move(&___nl__7,___get_global_const(251));
#line 244
label_9:
#line 244
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__5, ___nl__5, ___nl__6, ___nl__7, ___ref___2));
#line 244
c_rt_lib0clear(&___nl__7);
#line 245
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__5, ___ref___2));
#line 246
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 246
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__4, ___nl__7, ___ref___2));
#line 246
c_rt_lib0clear(&___nl__7);
#line 246
c_rt_lib0clear(&___nl__4);
#line 246
c_rt_lib0clear(&___nl__5);
#line 246
c_rt_lib0clear(&___nl__6);
#line 247
goto label_1;
#line 247
label_7:
#line 247
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 247
c_rt_lib0move(&___nl__4,___get_global_const(189));
#line 247
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 247
c_rt_lib0clear(&___nl__4);
#line 247
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 247
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 248
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 248
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 248
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 248
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 248
c_rt_lib0clear(&___nl__0);
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
c_rt_lib0clear(&___nl__3);
#line 248
c_rt_lib0clear(&___nl__4);
#line 248
return NULL;
#line 248
goto label_13;
#line 248
label_13:
#line 248
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 249
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(805)));
#line 250
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(111)));
#line 250
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 250
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__1, ___get_global_const(111), ___nl__6, ___get_global_const(78), ___nl__7));
#line 250
c_rt_lib0clear(&___nl__6);
#line 250
c_rt_lib0clear(&___nl__7);
#line 250
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(72), ___nl__5));
#line 250
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__5));
#line 250
c_rt_lib0clear(&___nl__5);
#line 251
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__1));
#line 251
c_rt_lib0move(&___nl__7,___get_global_const(5));
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__6, ___get_global_const(78), ___nl__7));
#line 251
c_rt_lib0clear(&___nl__6);
#line 251
c_rt_lib0clear(&___nl__7);
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__5));
#line 251
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__5));
#line 251
c_rt_lib0clear(&___nl__5);
#line 251
c_rt_lib0clear(&___nl__4);
#line 252
goto label_1;
#line 252
label_11:
#line 253
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 253
nl_die_arg(___nl__4);
#line 253
c_rt_lib0clear(&___nl__4);
#line 254
goto label_1;
#line 254
label_1:
#line 254
c_rt_lib0clear(&___nl__3);
#line 254
c_rt_lib0clear(&___nl__0);
#line 254
c_rt_lib0clear(&___nl__1);
#line 254
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
#line 258
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 258
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 258
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 258
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 258
c_rt_lib0clear(&___nl__0);
#line 258
c_rt_lib0clear(&___nl__1);
#line 258
c_rt_lib0clear(&___nl__3);
#line 258
return NULL;
#line 258
goto label_2;
#line 258
label_2:
#line 258
c_rt_lib0clear(&___nl__3);
#line 259
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 259
c_rt_lib0delete(translator_priv0print_val(___nl__3, ___nl__1, ___ref___2));
#line 259
c_rt_lib0clear(&___nl__3);
#line 261
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 261
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(224)));
#line 261
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 263
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(225)));
#line 263
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 263
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 263
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 263
nl_die_arg(___nl__5);
#line 261
label_4:
#line 262
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(845)));
#line 262
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__1, ___get_global_const(73), ___nl__7));
#line 262
c_rt_lib0clear(&___nl__7);
#line 262
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__6));
#line 262
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 262
c_rt_lib0clear(&___nl__6);
#line 263
goto label_3;
#line 263
label_5:
#line 264
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(845)));
#line 264
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__1, ___get_global_const(40), ___nl__1, ___get_global_const(73), ___nl__7));
#line 264
c_rt_lib0clear(&___nl__7);
#line 264
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(225), ___nl__6));
#line 264
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 264
c_rt_lib0clear(&___nl__6);
#line 265
goto label_3;
#line 265
label_3:
#line 265
c_rt_lib0clear(&___nl__4);
#line 265
c_rt_lib0clear(&___nl__5);
#line 266
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 266
c_rt_lib0clear(&___nl__3);
#line 266
c_rt_lib0clear(&___nl__0);
#line 266
c_rt_lib0clear(&___nl__1);
#line 266
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
#line 270
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 270
c_rt_lib0move(&___nl__4,___get_global_const(811));
#line 270
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 270
c_rt_lib0clear(&___nl__4);
#line 270
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 270
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 271
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 271
c_rt_lib0move(&___nl__4, translator_priv0dest_val(___nl__5, ___nl__1, ___ref___2));
#line 271
c_rt_lib0clear(&___nl__5);
#line 272
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 272
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 272
c_rt_lib0move(&___nl__5, translator_priv0get_value_of_lvalue(___nl__6, ___nl__7, ___ref___2));
#line 272
c_rt_lib0clear(&___nl__7);
#line 272
c_rt_lib0clear(&___nl__6);
#line 273
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 273
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 273
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 273
c_rt_lib0clear(&___nl__8);
#line 273
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 273
c_rt_lib0clear(&___nl__7);
#line 273
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(650)));
#line 274
c_rt_lib0delete(translator_priv0move(___nl__6, ___nl__4, ___ref___2));
#line 275
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__6, ___ref___2));
#line 276
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 276
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__5, ___nl__7, ___ref___2));
#line 276
c_rt_lib0clear(&___nl__7);
#line 276
c_rt_lib0clear(&___nl__4);
#line 276
c_rt_lib0clear(&___nl__5);
#line 276
c_rt_lib0clear(&___nl__6);
#line 277
goto label_1;
#line 277
label_2:
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 277
c_rt_lib0move(&___nl__4,___get_global_const(798));
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 277
c_rt_lib0move(&___nl__4,___get_global_const(797));
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
label_4:
#line 277
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 277
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 278
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 278
c_rt_lib0move(&___nl__4, translator_priv0dest_val(___nl__5, ___nl__1, ___ref___2));
#line 278
c_rt_lib0clear(&___nl__5);
#line 279
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 279
c_rt_lib0move(&___nl__6,___get_global_const(798));
#line 279
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 279
c_rt_lib0clear(&___nl__6);
#line 279
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 279
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 280
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 280
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___2));
#line 280
c_rt_lib0clear(&___nl__7);
#line 281
c_rt_lib0delete(translator_priv0print_get_from_index(___nl__1, ___nl__4, ___nl__6, ___ref___2));
#line 281
c_rt_lib0clear(&___nl__6);
#line 282
goto label_5;
#line 282
label_6:
#line 283
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 283
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(802)));
#line 283
c_rt_lib0delete(translator_priv0print_get_value(___nl__1, ___nl__4, ___nl__6, ___ref___2));
#line 283
c_rt_lib0clear(&___nl__6);
#line 284
goto label_5;
#line 284
label_5:
#line 284
c_rt_lib0clear(&___nl__5);
#line 284
c_rt_lib0clear(&___nl__4);
#line 285
goto label_1;
#line 285
label_3:
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 285
c_rt_lib0move(&___nl__4,___get_global_const(812));
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 285
c_rt_lib0clear(&___nl__4);
#line 285
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 285
c_rt_lib0move(&___nl__4,___get_global_const(813));
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 285
c_rt_lib0clear(&___nl__4);
#line 285
label_11:
#line 285
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 285
c_rt_lib0move(&___nl__4,___get_global_const(815));
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 285
c_rt_lib0clear(&___nl__4);
#line 285
label_10:
#line 285
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 285
c_rt_lib0move(&___nl__4,___get_global_const(814));
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 285
c_rt_lib0clear(&___nl__4);
#line 285
label_9:
#line 285
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 285
c_rt_lib0move(&___nl__4,___get_global_const(816));
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 285
c_rt_lib0clear(&___nl__4);
#line 285
label_8:
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 285
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 286
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 286
c_rt_lib0move(&___nl__4, translator_priv0calc_val(___nl__5, ___ref___2));
#line 286
c_rt_lib0clear(&___nl__5);
#line 287
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 287
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 287
c_rt_lib0move(&___nl__5, translator_priv0get_value_of_lvalue(___nl__6, ___nl__7, ___ref___2));
#line 287
c_rt_lib0clear(&___nl__7);
#line 287
c_rt_lib0clear(&___nl__6);
#line 288
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 288
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 288
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 288
c_rt_lib0clear(&___nl__8);
#line 288
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 288
c_rt_lib0clear(&___nl__7);
#line 288
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__6, ___get_global_const(650)));
#line 289
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 289
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__6, ___nl__6, ___nl__4, ___nl__7, ___ref___2));
#line 289
c_rt_lib0clear(&___nl__7);
#line 290
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__6, ___ref___2));
#line 291
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 291
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__5, ___nl__7, ___ref___2));
#line 291
c_rt_lib0clear(&___nl__7);
#line 291
c_rt_lib0clear(&___nl__4);
#line 291
c_rt_lib0clear(&___nl__5);
#line 291
c_rt_lib0clear(&___nl__6);
#line 292
goto label_1;
#line 292
label_7:
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 292
c_rt_lib0move(&___nl__4,___get_global_const(720));
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 292
c_rt_lib0clear(&___nl__4);
#line 292
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 292
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 293
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 294
c_rt_lib0move(&___nl__5, translator_priv0new_register(___ref___2));
#line 295
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 295
c_rt_lib0move(&___nl__6, translator_priv0def_val(___nl__7, ___nl__1, ___nl__5, ___ref___2));
#line 295
c_rt_lib0clear(&___nl__7);
#line 296
c_rt_lib0move(&___nl__8,___get_global_const(247));
#line 296
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__5, ___get_global_const(40), ___nl__6, ___get_global_const(405), ___nl__8));
#line 296
c_rt_lib0clear(&___nl__8);
#line 296
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__7));
#line 296
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__7));
#line 296
c_rt_lib0clear(&___nl__7);
#line 297
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__5, ___ref___2));
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 298
c_rt_lib0delete(translator_priv0def_val(___nl__7, ___nl__1, ___nl__5, ___ref___2));
#line 298
c_rt_lib0clear(&___nl__7);
#line 299
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 299
c_rt_lib0clear(&___nl__4);
#line 299
c_rt_lib0clear(&___nl__5);
#line 299
c_rt_lib0clear(&___nl__6);
#line 300
goto label_1;
#line 300
label_12:
#line 300
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 300
c_rt_lib0move(&___nl__4,___get_global_const(721));
#line 300
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 300
c_rt_lib0clear(&___nl__4);
#line 300
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 300
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 301
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 302
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 302
c_rt_lib0move(&___nl__5, translator_priv0dest_val(___nl__6, ___nl__1, ___ref___2));
#line 302
c_rt_lib0clear(&___nl__6);
#line 303
c_rt_lib0move(&___nl__6, c_rt_lib0ne(___nl__1, ___nl__5));
#line 303
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 303
if(c_rt_lib0check_true_native(___nl__6)){ goto label_15;}
#line 303
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__5, ___ref___2));
#line 303
goto label_15;
#line 303
label_15:
#line 303
c_rt_lib0clear(&___nl__6);
#line 304
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__5, ___ref___2));
#line 305
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 305
c_rt_lib0move(&___nl__6, translator_priv0dest_val(___nl__7, ___nl__1, ___ref___2));
#line 305
c_rt_lib0clear(&___nl__7);
#line 305
c_rt_lib0copy(&___nl__5, ___nl__6);
#line 305
c_rt_lib0clear(&___nl__6);
#line 306
c_rt_lib0move(&___nl__6, c_rt_lib0ne(___nl__5, ___nl__1));
#line 306
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 306
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 306
c_rt_lib0delete(translator_priv0move(___nl__1, ___nl__5, ___ref___2));
#line 306
goto label_17;
#line 306
label_17:
#line 306
c_rt_lib0clear(&___nl__6);
#line 307
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 307
c_rt_lib0clear(&___nl__4);
#line 307
c_rt_lib0clear(&___nl__5);
#line 308
goto label_1;
#line 308
label_13:
#line 309
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(239)));
#line 309
c_rt_lib0move(&___nl__4, translator_priv0dest_val(___nl__5, ___nl__1, ___ref___2));
#line 309
c_rt_lib0clear(&___nl__5);
#line 311
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__4, ___nl__1));
#line 311
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 311
if(c_rt_lib0check_true_native(___nl__6)){ goto label_19;}
#line 312
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 312
c_rt_lib0move(&___nl__7, translator_priv0calc_val(___nl__8, ___ref___2));
#line 312
c_rt_lib0clear(&___nl__8);
#line 312
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 312
c_rt_lib0clear(&___nl__7);
#line 313
goto label_18;
#line 313
label_19:
#line 314
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(240)));
#line 314
c_rt_lib0move(&___nl__7, translator_priv0dest_val(___nl__8, ___nl__1, ___ref___2));
#line 314
c_rt_lib0clear(&___nl__8);
#line 314
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 314
c_rt_lib0clear(&___nl__7);
#line 315
goto label_18;
#line 315
label_18:
#line 315
c_rt_lib0clear(&___nl__6);
#line 316
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 316
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__1, ___nl__4, ___nl__5, ___nl__6, ___ref___2));
#line 316
c_rt_lib0clear(&___nl__6);
#line 316
c_rt_lib0clear(&___nl__4);
#line 316
c_rt_lib0clear(&___nl__5);
#line 317
goto label_1;
#line 317
label_1:
#line 317
c_rt_lib0clear(&___nl__3);
#line 317
c_rt_lib0clear(&___nl__0);
#line 317
c_rt_lib0clear(&___nl__1);
#line 317
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
#line 321
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 322
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 322
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 322
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__0));
#line 322
label_3:
#line 322
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 322
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 322
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 323
c_rt_lib0delete(translator_priv0print_cmd(___nl__3, ___ref___1));
#line 324
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 324
goto label_3;
#line 324
label_1:
#line 324
c_rt_lib0clear(&___nl__3);
#line 324
c_rt_lib0clear(&___nl__4);
#line 324
c_rt_lib0clear(&___nl__5);
#line 324
c_rt_lib0clear(&___nl__6);
#line 324
c_rt_lib0clear(&___nl__7);
#line 325
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 325
c_rt_lib0clear(&___nl__2);
#line 325
c_rt_lib0clear(&___nl__0);
#line 325
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
#line 329
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(793)));
#line 329
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 331
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(794)));
#line 331
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 332
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(795)));
#line 332
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 332
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 332
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 332
nl_die_arg(___nl__3);
#line 329
label_2:
#line 329
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(793)));
#line 330
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 330
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 330
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 330
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__6, ___get_global_const(73), ___nl__7, ___get_global_const(650), ___nl__8));
#line 330
c_rt_lib0clear(&___nl__6);
#line 330
c_rt_lib0clear(&___nl__7);
#line 330
c_rt_lib0clear(&___nl__8);
#line 330
c_rt_lib0delete(translator_priv0print_var_decl(___nl__5, ___ref___2));
#line 330
c_rt_lib0clear(&___nl__5);
#line 330
c_rt_lib0clear(&___nl__4);
#line 331
goto label_1;
#line 331
label_3:
#line 331
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(794)));
#line 331
c_rt_lib0clear(&___nl__4);
#line 332
goto label_1;
#line 332
label_4:
#line 332
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(795)));
#line 332
c_rt_lib0clear(&___nl__4);
#line 333
goto label_1;
#line 333
label_1:
#line 333
c_rt_lib0clear(&___nl__3);
#line 334
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 335
c_rt_lib0move(&___nl__4, translator_priv0new_register(___ref___2));
#line 337
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(793)));
#line 337
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 342
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(794)));
#line 342
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 344
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__0, ___get_global_const(795)));
#line 344
if(c_rt_lib0check_true_native(___nl__6)){ goto label_8;}
#line 344
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 344
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__0));
#line 344
nl_die_arg(___nl__6);
#line 337
label_6:
#line 337
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(793)));
#line 338
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(650)));
#line 338
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(650)));
#line 338
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 340
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(38)));
#line 340
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 340
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 340
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 340
nl_die_arg(___nl__9);
#line 338
label_10:
#line 338
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(650)));
#line 339
c_rt_lib0move(&___nl__11, translator_priv0calc_val(___nl__10, ___ref___2));
#line 339
c_rt_lib0copy(&___nl__5, ___nl__11);
#line 339
c_rt_lib0clear(&___nl__11);
#line 339
c_rt_lib0clear(&___nl__10);
#line 340
goto label_9;
#line 340
label_11:
#line 341
goto label_9;
#line 341
label_9:
#line 341
c_rt_lib0clear(&___nl__8);
#line 341
c_rt_lib0clear(&___nl__9);
#line 341
c_rt_lib0clear(&___nl__7);
#line 342
goto label_5;
#line 342
label_7:
#line 342
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(794)));
#line 343
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(240)));
#line 343
c_rt_lib0move(&___nl__8, translator_priv0calc_val(___nl__9, ___ref___2));
#line 343
c_rt_lib0clear(&___nl__9);
#line 343
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 343
c_rt_lib0clear(&___nl__8);
#line 343
c_rt_lib0clear(&___nl__7);
#line 344
goto label_5;
#line 344
label_8:
#line 344
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__0, ___get_global_const(795)));
#line 345
c_rt_lib0move(&___nl__8, translator_priv0calc_val(___nl__7, ___ref___2));
#line 345
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 345
c_rt_lib0clear(&___nl__8);
#line 345
c_rt_lib0clear(&___nl__7);
#line 346
goto label_5;
#line 346
label_5:
#line 346
c_rt_lib0clear(&___nl__6);
#line 347
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___2));
#line 348
c_rt_lib0move(&___nl__8,___get_global_const(45));
#line 348
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__4, ___get_global_const(40), ___nl__5, ___get_global_const(73), ___nl__8));
#line 348
c_rt_lib0clear(&___nl__8);
#line 348
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__7));
#line 348
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__7));
#line 348
c_rt_lib0clear(&___nl__7);
#line 349
c_rt_lib0delete(translator_priv0print_if_goto(___nl__6, ___nl__4, ___ref___2));
#line 350
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 350
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 350
if(c_rt_lib0check_true_native(___nl__7)){ goto label_13;}
#line 351
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__5));
#line 351
c_rt_lib0delete(translator_priv0print_safe_return(___nl__8, ___ref___2));
#line 351
c_rt_lib0clear(&___nl__8);
#line 352
goto label_12;
#line 352
label_13:
#line 353
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(242), ___nl__5));
#line 353
c_rt_lib0move(&___nl__10,___get_global_const(80));
#line 353
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__5, ___get_global_const(40), ___nl__9, ___get_global_const(78), ___nl__10));
#line 353
c_rt_lib0clear(&___nl__9);
#line 353
c_rt_lib0clear(&___nl__10);
#line 353
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(232), ___nl__8));
#line 353
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 353
c_rt_lib0clear(&___nl__8);
#line 354
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__5));
#line 354
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 354
c_rt_lib0clear(&___nl__8);
#line 355
goto label_12;
#line 355
label_12:
#line 355
c_rt_lib0clear(&___nl__7);
#line 356
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___2));
#line 357
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(793)));
#line 357
if(c_rt_lib0check_true_native(___nl__7)){ goto label_15;}
#line 359
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(794)));
#line 359
if(c_rt_lib0check_true_native(___nl__7)){ goto label_16;}
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__0, ___get_global_const(795)));
#line 364
if(c_rt_lib0check_true_native(___nl__7)){ goto label_17;}
#line 364
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 364
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__0));
#line 364
nl_die_arg(___nl__7);
#line 357
label_15:
#line 357
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(793)));
#line 358
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(78)));
#line 358
c_rt_lib0move(&___nl__10, translator_priv0get_var_register(___nl__11, ___ref___2));
#line 358
c_rt_lib0clear(&___nl__11);
#line 358
c_rt_lib0move(&___nl__11,___get_global_const(45));
#line 358
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__10, ___get_global_const(40), ___nl__5, ___get_global_const(73), ___nl__11));
#line 358
c_rt_lib0clear(&___nl__10);
#line 358
c_rt_lib0clear(&___nl__11);
#line 358
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(225), ___nl__9));
#line 358
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__9));
#line 358
c_rt_lib0clear(&___nl__9);
#line 358
c_rt_lib0clear(&___nl__8);
#line 359
goto label_14;
#line 359
label_16:
#line 359
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(794)));
#line 360
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(239)));
#line 360
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 360
c_rt_lib0move(&___nl__9, translator_priv0get_value_of_lvalue(___nl__10, ___nl__11, ___ref___2));
#line 360
c_rt_lib0clear(&___nl__11);
#line 360
c_rt_lib0clear(&___nl__10);
#line 361
c_rt_lib0move(&___nl__11, array0len(___nl__9));
#line 361
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 361
c_rt_lib0move(&___nl__11, c_rt_lib0sub_mod(___nl__11, ___nl__12));
#line 361
c_rt_lib0clear(&___nl__12);
#line 361
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__9, ___nl__11));
#line 361
c_rt_lib0clear(&___nl__11);
#line 361
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(650)));
#line 362
c_rt_lib0move(&___nl__12,___get_global_const(45));
#line 362
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__10, ___get_global_const(40), ___nl__5, ___get_global_const(73), ___nl__12));
#line 362
c_rt_lib0clear(&___nl__12);
#line 362
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(225), ___nl__11));
#line 362
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__11));
#line 362
c_rt_lib0clear(&___nl__11);
#line 363
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 363
c_rt_lib0delete(translator_priv0set_value_of_lvalue(___nl__9, ___nl__11, ___ref___2));
#line 363
c_rt_lib0clear(&___nl__11);
#line 363
c_rt_lib0clear(&___nl__9);
#line 363
c_rt_lib0clear(&___nl__10);
#line 363
c_rt_lib0clear(&___nl__8);
#line 364
goto label_14;
#line 364
label_17:
#line 364
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__0, ___get_global_const(795)));
#line 364
c_rt_lib0clear(&___nl__8);
#line 365
goto label_14;
#line 365
label_14:
#line 365
c_rt_lib0clear(&___nl__7);
#line 366
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 366
c_rt_lib0clear(&___nl__3);
#line 366
c_rt_lib0clear(&___nl__4);
#line 366
c_rt_lib0clear(&___nl__5);
#line 366
c_rt_lib0clear(&___nl__6);
#line 366
c_rt_lib0clear(&___nl__0);
#line 366
c_rt_lib0clear(&___nl__1);
#line 366
return NULL;
}

ImmT translator_priv0start_new_instruction(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 370
c_rt_lib0move(&___nl__2,___get_global_const(217));
#line 370
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___1, ___nl__2));
#line 370
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 370
c_rt_lib0hash_set_value_dec(&___nl__2, ___get_global_const(399), ___nl__3);
#line 370
c_rt_lib0move(&___nl__4,___get_global_const(217));
#line 370
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__4, ___nl__2));
#line 370
c_rt_lib0clear(&___nl__4);
#line 370
c_rt_lib0clear(&___nl__2);
#line 370
c_rt_lib0clear(&___nl__3);
#line 371
c_rt_lib0move(&___nl__2,___get_global_const(217));
#line 371
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___1, ___nl__2));
#line 371
c_rt_lib0move(&___nl__3,___get_global_const(640));
#line 371
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(___nl__2, ___nl__3));
#line 371
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 371
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 371
c_rt_lib0move(&___nl__5,___get_global_const(640));
#line 371
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__2, ___nl__5, ___nl__3));
#line 371
c_rt_lib0move(&___nl__5,___get_global_const(217));
#line 371
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__2));
#line 371
c_rt_lib0clear(&___nl__5);
#line 371
c_rt_lib0clear(&___nl__2);
#line 371
c_rt_lib0clear(&___nl__3);
#line 371
c_rt_lib0clear(&___nl__4);
#line 371
c_rt_lib0clear(&___nl__0);
#line 371
return NULL;
}

ImmT translator_priv0print_cmd(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 375
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(217)));
#line 375
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__2, ___ref___1));
#line 375
c_rt_lib0clear(&___nl__2);
#line 376
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 376
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(764)));
#line 376
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 378
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(766)));
#line 378
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 380
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(119)));
#line 380
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 382
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(768)));
#line 382
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 384
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(767)));
#line 384
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 386
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(769)));
#line 386
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 388
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(765)));
#line 388
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 390
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(778)));
#line 390
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 391
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(650)));
#line 391
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 393
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(775)));
#line 393
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 395
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(75)));
#line 395
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 397
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(774)));
#line 397
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 399
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(777)));
#line 399
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 401
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(80)));
#line 401
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 403
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(772)));
#line 403
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 405
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(773)));
#line 405
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 407
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(233)));
#line 407
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 409
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(776)));
#line 409
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 411
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(770)));
#line 411
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 413
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(771)));
#line 413
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 413
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 413
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 413
nl_die_arg(___nl__3);
#line 376
label_2:
#line 376
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(764)));
#line 377
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 377
c_rt_lib0delete(translator_priv0print_if(___nl__4, ___nl__5, ___ref___1));
#line 377
c_rt_lib0clear(&___nl__5);
#line 377
c_rt_lib0clear(&___nl__4);
#line 378
goto label_1;
#line 378
label_3:
#line 378
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(766)));
#line 379
c_rt_lib0delete(translator_priv0print_fora(___nl__4, ___ref___1));
#line 379
c_rt_lib0clear(&___nl__4);
#line 380
goto label_1;
#line 380
label_4:
#line 380
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(119)));
#line 381
c_rt_lib0delete(translator_priv0print_loop(___nl__4, ___ref___1));
#line 381
c_rt_lib0clear(&___nl__4);
#line 382
goto label_1;
#line 382
label_5:
#line 382
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(768)));
#line 383
c_rt_lib0delete(translator_priv0print_rep(___nl__4, ___ref___1));
#line 383
c_rt_lib0clear(&___nl__4);
#line 384
goto label_1;
#line 384
label_6:
#line 384
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(767)));
#line 385
c_rt_lib0delete(translator_priv0print_forh(___nl__4, ___ref___1));
#line 385
c_rt_lib0clear(&___nl__4);
#line 386
goto label_1;
#line 386
label_7:
#line 386
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(769)));
#line 387
c_rt_lib0delete(translator_priv0print_while(___nl__4, ___ref___1));
#line 387
c_rt_lib0clear(&___nl__4);
#line 388
goto label_1;
#line 388
label_8:
#line 388
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(765)));
#line 389
c_rt_lib0delete(translator_priv0print_for(___nl__4, ___ref___1));
#line 389
c_rt_lib0clear(&___nl__4);
#line 390
goto label_1;
#line 390
label_9:
#line 391
goto label_1;
#line 391
label_10:
#line 391
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(650)));
#line 392
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 392
c_rt_lib0delete(translator_priv0print_val(___nl__4, ___nl__5, ___ref___1));
#line 392
c_rt_lib0clear(&___nl__5);
#line 392
c_rt_lib0clear(&___nl__4);
#line 393
goto label_1;
#line 393
label_11:
#line 393
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(775)));
#line 394
c_rt_lib0delete(translator_priv0print_cmd_array(___nl__4, ___ref___1));
#line 394
c_rt_lib0clear(&___nl__4);
#line 395
goto label_1;
#line 395
label_12:
#line 395
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(75)));
#line 396
c_rt_lib0delete(translator_priv0print_return(___nl__4, ___ref___1));
#line 396
c_rt_lib0clear(&___nl__4);
#line 397
goto label_1;
#line 397
label_13:
#line 397
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(774)));
#line 398
c_rt_lib0delete(translator_priv0print_match(___nl__4, ___ref___1));
#line 398
c_rt_lib0clear(&___nl__4);
#line 399
goto label_1;
#line 399
label_14:
#line 399
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(777)));
#line 400
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 400
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__4, ___nl__5, ___ref___1));
#line 400
c_rt_lib0clear(&___nl__5);
#line 400
c_rt_lib0clear(&___nl__4);
#line 401
goto label_1;
#line 401
label_15:
#line 401
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(80)));
#line 402
c_rt_lib0move(&___nl__5, c_rt_lib0get_false());
#line 402
c_rt_lib0delete(translator_priv0print_try_ensure(___nl__4, ___nl__5, ___ref___1));
#line 402
c_rt_lib0clear(&___nl__5);
#line 402
c_rt_lib0clear(&___nl__4);
#line 403
goto label_1;
#line 403
label_16:
#line 404
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1070)));
#line 404
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(772)));
#line 404
c_rt_lib0delete(translator_priv0print_loop_break(___ref___1, ___nl__4));
#line 404
c_rt_lib0clear(&___nl__4);
#line 405
goto label_1;
#line 405
label_17:
#line 406
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1070)));
#line 406
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(773)));
#line 406
c_rt_lib0delete(translator_priv0print_loop_break(___ref___1, ___nl__4));
#line 406
c_rt_lib0clear(&___nl__4);
#line 407
goto label_1;
#line 407
label_18:
#line 407
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(233)));
#line 408
c_rt_lib0delete(translator_priv0print_die(___nl__4, ___ref___1));
#line 408
c_rt_lib0clear(&___nl__4);
#line 409
goto label_1;
#line 409
label_19:
#line 409
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(776)));
#line 410
c_rt_lib0delete(translator_priv0print_var_decl(___nl__4, ___ref___1));
#line 410
c_rt_lib0clear(&___nl__4);
#line 411
goto label_1;
#line 411
label_20:
#line 411
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(770)));
#line 412
c_rt_lib0delete(translator_priv0print_if_mod(___nl__4, ___ref___1));
#line 412
c_rt_lib0clear(&___nl__4);
#line 413
goto label_1;
#line 413
label_21:
#line 413
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(771)));
#line 414
c_rt_lib0delete(translator_priv0print_unless_mod(___nl__4, ___ref___1));
#line 414
c_rt_lib0clear(&___nl__4);
#line 415
goto label_1;
#line 415
label_1:
#line 415
c_rt_lib0clear(&___nl__2);
#line 415
c_rt_lib0clear(&___nl__3);
#line 415
c_rt_lib0clear(&___nl__0);
#line 415
return NULL;
}

ImmT translator_priv0print_loop_break(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 419
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1069)));
#line 419
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1065)));
#line 419
label_2:
#line 419
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1069)));
#line 419
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1065)));
#line 419
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 419
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 419
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 420
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(876)));
#line 420
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 420
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__2));
#line 420
c_rt_lib0clear(&___nl__5);
#line 420
c_rt_lib0delete(translator_priv0undef_reg(___nl__4, ___ref___0));
#line 420
c_rt_lib0clear(&___nl__4);
#line 420
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 420
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 420
c_rt_lib0clear(&___nl__4);
#line 421
goto label_2;
#line 421
label_1:
#line 421
c_rt_lib0clear(&___nl__2);
#line 421
c_rt_lib0clear(&___nl__3);
#line 422
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1068)));
#line 422
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__2));
#line 422
c_rt_lib0delete(translator_priv0print(___ref___0, ___nl__2));
#line 422
c_rt_lib0clear(&___nl__2);
#line 422
c_rt_lib0clear(&___nl__1);
#line 422
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
#line 426
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 426
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 426
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 426
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 426
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(217)));
#line 426
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 426
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(217), ___nl__7, ___get_global_const(214), ___nl__8));
#line 426
c_rt_lib0clear(&___nl__7);
#line 426
c_rt_lib0clear(&___nl__8);
#line 426
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(779), ___nl__3, ___get_global_const(764), ___nl__4, ___get_global_const(780), ___nl__5, ___get_global_const(781), ___nl__6));
#line 426
c_rt_lib0clear(&___nl__3);
#line 426
c_rt_lib0clear(&___nl__4);
#line 426
c_rt_lib0clear(&___nl__5);
#line 426
c_rt_lib0clear(&___nl__6);
#line 432
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 432
c_rt_lib0delete(translator_priv0print_if(___nl__2, ___nl__3, ___ref___1));
#line 432
c_rt_lib0clear(&___nl__3);
#line 432
c_rt_lib0clear(&___nl__2);
#line 432
c_rt_lib0clear(&___nl__0);
#line 432
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
#line 437
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 437
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(801), ___nl__4));
#line 437
c_rt_lib0move(&___nl__5,___get_global_const(247));
#line 437
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(238), ___nl__4, ___get_global_const(405), ___nl__5));
#line 437
c_rt_lib0clear(&___nl__4);
#line 437
c_rt_lib0clear(&___nl__5);
#line 437
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(804), ___nl__3));
#line 437
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 437
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 437
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 437
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(217)));
#line 437
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_none(___get_global_const(778)));
#line 437
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(217), ___nl__7, ___get_global_const(214), ___nl__8));
#line 437
c_rt_lib0clear(&___nl__7);
#line 437
c_rt_lib0clear(&___nl__8);
#line 437
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(779), ___nl__3, ___get_global_const(764), ___nl__4, ___get_global_const(780), ___nl__5, ___get_global_const(781), ___nl__6));
#line 437
c_rt_lib0clear(&___nl__3);
#line 437
c_rt_lib0clear(&___nl__4);
#line 437
c_rt_lib0clear(&___nl__5);
#line 437
c_rt_lib0clear(&___nl__6);
#line 443
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 443
c_rt_lib0delete(translator_priv0print_if(___nl__2, ___nl__3, ___ref___1));
#line 443
c_rt_lib0clear(&___nl__3);
#line 443
c_rt_lib0clear(&___nl__2);
#line 443
c_rt_lib0clear(&___nl__0);
#line 443
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
#line 447
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 448
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 449
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___2));
#line 450
c_rt_lib0move(&___nl__6, translator_priv0new_register(___ref___2));
#line 451
c_rt_lib0move(&___nl__7, translator_priv0save_registers(___ref___2));
#line 452
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 452
c_rt_lib0delete(translator_priv0print_val(___nl__8, ___nl__6, ___ref___2));
#line 452
c_rt_lib0clear(&___nl__8);
#line 453
c_rt_lib0move(&___nl__9,___get_global_const(247));
#line 453
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__6, ___get_global_const(40), ___nl__6, ___get_global_const(405), ___nl__9));
#line 453
c_rt_lib0clear(&___nl__9);
#line 453
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__8));
#line 453
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 453
c_rt_lib0clear(&___nl__8);
#line 454
c_rt_lib0delete(translator_priv0restore_registers(___nl__7, ___ref___2));
#line 455
c_rt_lib0delete(translator_priv0print_if_goto(___nl__5, ___nl__6, ___ref___2));
#line 456
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(764)));
#line 456
c_rt_lib0delete(translator_priv0print_cmd(___nl__8, ___ref___2));
#line 456
c_rt_lib0clear(&___nl__8);
#line 457
c_rt_lib0copy(&___nl__8, ___nl__1);
#line 457
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 457
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 457
if(c_rt_lib0check_true_native(___nl__8)){ goto label_2;}
#line 457
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(764)));
#line 457
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(217)));
#line 457
c_rt_lib0move(&___nl__9, translator0last_debug_char(___nl__10));
#line 457
c_rt_lib0clear(&___nl__10);
#line 457
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__9, ___ref___2));
#line 457
c_rt_lib0clear(&___nl__9);
#line 457
goto label_2;
#line 457
label_2:
#line 457
c_rt_lib0clear(&___nl__8);
#line 458
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__4));
#line 458
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__8));
#line 458
c_rt_lib0clear(&___nl__8);
#line 459
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___2));
#line 460
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(780)));
#line 460
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 460
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 460
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 460
label_5:
#line 460
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 460
if(c_rt_lib0check_true_native(___nl__13)){ goto label_3;}
#line 460
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 461
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(217)));
#line 461
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__14, ___ref___2));
#line 461
c_rt_lib0clear(&___nl__14);
#line 462
c_rt_lib0move(&___nl__14, translator_priv0get_sim_label(___ref___2));
#line 462
c_rt_lib0copy(&___nl__5, ___nl__14);
#line 462
c_rt_lib0clear(&___nl__14);
#line 463
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(779)));
#line 463
c_rt_lib0delete(translator_priv0print_val(___nl__14, ___nl__6, ___ref___2));
#line 463
c_rt_lib0clear(&___nl__14);
#line 464
c_rt_lib0move(&___nl__15,___get_global_const(247));
#line 464
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__6, ___get_global_const(40), ___nl__6, ___get_global_const(405), ___nl__15));
#line 464
c_rt_lib0clear(&___nl__15);
#line 464
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__14));
#line 464
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__14));
#line 464
c_rt_lib0clear(&___nl__14);
#line 465
c_rt_lib0delete(translator_priv0restore_registers(___nl__7, ___ref___2));
#line 466
c_rt_lib0delete(translator_priv0print_if_goto(___nl__5, ___nl__6, ___ref___2));
#line 467
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(214)));
#line 467
c_rt_lib0delete(translator_priv0print_cmd(___nl__14, ___ref___2));
#line 467
c_rt_lib0clear(&___nl__14);
#line 468
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(214)));
#line 468
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(217)));
#line 468
c_rt_lib0move(&___nl__14, translator0last_debug_char(___nl__15));
#line 468
c_rt_lib0clear(&___nl__15);
#line 468
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__14, ___ref___2));
#line 468
c_rt_lib0clear(&___nl__14);
#line 469
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__4));
#line 469
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__14));
#line 469
c_rt_lib0clear(&___nl__14);
#line 470
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___2));
#line 471
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 471
goto label_5;
#line 471
label_3:
#line 471
c_rt_lib0clear(&___nl__8);
#line 471
c_rt_lib0clear(&___nl__9);
#line 471
c_rt_lib0clear(&___nl__10);
#line 471
c_rt_lib0clear(&___nl__11);
#line 471
c_rt_lib0clear(&___nl__12);
#line 471
c_rt_lib0clear(&___nl__13);
#line 472
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(781)));
#line 472
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(214)));
#line 472
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(778)));
#line 472
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 472
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 472
if(c_rt_lib0check_true_native(___nl__8)){ goto label_7;}
#line 473
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(781)));
#line 473
c_rt_lib0delete(translator_priv0print_cmd(___nl__9, ___ref___2));
#line 473
c_rt_lib0clear(&___nl__9);
#line 474
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(781)));
#line 474
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(217)));
#line 474
c_rt_lib0move(&___nl__9, translator0last_debug_char(___nl__10));
#line 474
c_rt_lib0clear(&___nl__10);
#line 474
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__9, ___ref___2));
#line 474
c_rt_lib0clear(&___nl__9);
#line 475
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__4));
#line 475
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__9));
#line 475
c_rt_lib0clear(&___nl__9);
#line 476
goto label_7;
#line 476
label_7:
#line 476
c_rt_lib0clear(&___nl__8);
#line 477
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 478
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 478
c_rt_lib0clear(&___nl__3);
#line 478
c_rt_lib0clear(&___nl__4);
#line 478
c_rt_lib0clear(&___nl__5);
#line 478
c_rt_lib0clear(&___nl__6);
#line 478
c_rt_lib0clear(&___nl__7);
#line 478
c_rt_lib0clear(&___nl__0);
#line 478
c_rt_lib0clear(&___nl__1);
#line 478
return NULL;
}

ImmT translator_priv0print_call_base(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 485
c_rt_lib0move(&___nl__5,___get_global_const(306));
#line 485
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(4, ___get_global_const(237), ___nl__0, ___get_global_const(261), ___nl__5, ___get_global_const(389), ___nl__1, ___get_global_const(74), ___nl__2));
#line 485
c_rt_lib0clear(&___nl__5);
#line 485
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(221), ___nl__4));
#line 485
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 485
c_rt_lib0clear(&___nl__4);
#line 485
c_rt_lib0clear(&___nl__0);
#line 485
c_rt_lib0clear(&___nl__1);
#line 485
c_rt_lib0clear(&___nl__2);
#line 485
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
#line 489
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1070)));
#line 490
c_rt_lib0move(&___nl__4, translator_priv0save_registers(___ref___0));
#line 491
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1068), ___nl__1, ___get_global_const(1069), ___nl__4));
#line 491
c_rt_lib0move(&___nl__6,___get_global_const(1070));
#line 491
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 491
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 491
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(772), ___nl__7);
#line 491
c_rt_lib0move(&___nl__8,___get_global_const(1070));
#line 491
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__6));
#line 491
c_rt_lib0clear(&___nl__8);
#line 491
c_rt_lib0clear(&___nl__5);
#line 491
c_rt_lib0clear(&___nl__6);
#line 491
c_rt_lib0clear(&___nl__7);
#line 492
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(1068), ___nl__2, ___get_global_const(1069), ___nl__4));
#line 492
c_rt_lib0move(&___nl__6,___get_global_const(1070));
#line 492
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 492
c_rt_lib0copy(&___nl__7, ___nl__5);
#line 492
c_rt_lib0hash_set_value_dec(&___nl__6, ___get_global_const(773), ___nl__7);
#line 492
c_rt_lib0move(&___nl__8,___get_global_const(1070));
#line 492
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__8, ___nl__6));
#line 492
c_rt_lib0clear(&___nl__8);
#line 492
c_rt_lib0clear(&___nl__5);
#line 492
c_rt_lib0clear(&___nl__6);
#line 492
c_rt_lib0clear(&___nl__7);
#line 493
c_rt_lib0clear(&___nl__1);
#line 493
c_rt_lib0clear(&___nl__2);
#line 493
c_rt_lib0clear(&___nl__4);
#line 493
return ___nl__3;
#line 493
c_rt_lib0clear(&___nl__3);
#line 493
c_rt_lib0clear(&___nl__4);
#line 493
c_rt_lib0clear(&___nl__1);
#line 493
c_rt_lib0clear(&___nl__2);
#line 493
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
#line 497
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(217)));
#line 497
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(399)));
#line 498
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___1));
#line 499
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(3)));
#line 499
c_rt_lib0move(&___nl__4, translator_priv0calc_val(___nl__5, ___ref___1));
#line 499
c_rt_lib0clear(&___nl__5);
#line 500
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(783)));
#line 500
c_rt_lib0move(&___nl__5, translator_priv0print_var_decl(___nl__6, ___ref___1));
#line 500
c_rt_lib0clear(&___nl__6);
#line 501
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___1));
#line 502
c_rt_lib0move(&___nl__7, translator_priv0get_sim_label(___ref___1));
#line 503
c_rt_lib0move(&___nl__8, translator_priv0get_sim_label(___ref___1));
#line 504
c_rt_lib0move(&___nl__9, translator_priv0new_register(___ref___1));
#line 505
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 505
c_rt_lib0delete(translator_priv0load_const(___nl__10, ___nl__9, ___ref___1));
#line 505
c_rt_lib0clear(&___nl__10);
#line 506
c_rt_lib0move(&___nl__10, translator_priv0new_register(___ref___1));
#line 507
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 507
c_rt_lib0delete(translator_priv0load_const(___nl__11, ___nl__10, ___ref___1));
#line 507
c_rt_lib0clear(&___nl__11);
#line 508
c_rt_lib0move(&___nl__11, translator_priv0new_register(___ref___1));
#line 509
c_rt_lib0move(&___nl__12,___get_global_const(1077));
#line 509
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__4));
#line 509
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(1, ___nl__14));
#line 509
c_rt_lib0clear(&___nl__14);
#line 509
c_rt_lib0delete(translator_priv0print_call_base(___nl__11, ___nl__12, ___nl__13, ___ref___1));
#line 509
c_rt_lib0clear(&___nl__13);
#line 509
c_rt_lib0clear(&___nl__12);
#line 510
c_rt_lib0move(&___nl__12, translator_priv0new_register(___ref___1));
#line 511
c_rt_lib0delete(translator_priv0print_sim_label(___nl__8, ___ref___1));
#line 512
c_rt_lib0move(&___nl__13,___get_global_const(272));
#line 512
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__12, ___nl__9, ___nl__11, ___nl__13, ___ref___1));
#line 512
c_rt_lib0clear(&___nl__13);
#line 513
c_rt_lib0delete(translator_priv0print_if_goto(___nl__6, ___nl__12, ___ref___1));
#line 514
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__5, ___get_global_const(40), ___nl__4, ___get_global_const(241), ___nl__9));
#line 514
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(228), ___nl__13));
#line 514
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__13));
#line 514
c_rt_lib0clear(&___nl__13);
#line 515
c_rt_lib0move(&___nl__13, translator_priv0save_loop_break(___ref___1, ___nl__6, ___nl__7));
#line 516
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 516
c_rt_lib0delete(translator_priv0print_cmd(___nl__14, ___ref___1));
#line 516
c_rt_lib0clear(&___nl__14);
#line 517
c_rt_lib0delete(translator_priv0print_sim_label(___nl__7, ___ref___1));
#line 518
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(861)));
#line 518
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 518
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 518
if(c_rt_lib0check_true_native(___nl__14)){ goto label_2;}
#line 518
c_rt_lib0move(&___nl__15, translator0last_debug_char(___nl__2));
#line 518
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__15, ___ref___1));
#line 518
c_rt_lib0clear(&___nl__15);
#line 518
goto label_2;
#line 518
label_2:
#line 518
c_rt_lib0clear(&___nl__14);
#line 519
c_rt_lib0move(&___nl__15,___get_global_const(251));
#line 519
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(4, ___get_global_const(237), ___nl__9, ___get_global_const(239), ___nl__9, ___get_global_const(240), ___nl__10, ___get_global_const(405), ___nl__15));
#line 519
c_rt_lib0clear(&___nl__15);
#line 519
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__14));
#line 519
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__14));
#line 519
c_rt_lib0clear(&___nl__14);
#line 520
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__8));
#line 520
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__14));
#line 520
c_rt_lib0clear(&___nl__14);
#line 521
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___1));
#line 522
c_rt_lib0copy(&___nl__14, ___nl__13);
#line 522
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1070), ___nl__14);
#line 522
c_rt_lib0clear(&___nl__14);
#line 523
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___1));
#line 523
c_rt_lib0clear(&___nl__2);
#line 523
c_rt_lib0clear(&___nl__3);
#line 523
c_rt_lib0clear(&___nl__4);
#line 523
c_rt_lib0clear(&___nl__5);
#line 523
c_rt_lib0clear(&___nl__6);
#line 523
c_rt_lib0clear(&___nl__7);
#line 523
c_rt_lib0clear(&___nl__8);
#line 523
c_rt_lib0clear(&___nl__9);
#line 523
c_rt_lib0clear(&___nl__10);
#line 523
c_rt_lib0clear(&___nl__11);
#line 523
c_rt_lib0clear(&___nl__12);
#line 523
c_rt_lib0clear(&___nl__13);
#line 523
c_rt_lib0clear(&___nl__0);
#line 523
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
#line 527
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 528
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 529
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 530
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 531
c_rt_lib0move(&___nl__5, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__4));
#line 532
c_rt_lib0delete(translator_priv0print_cmd(___nl__0, ___ref___1));
#line 533
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(217)));
#line 533
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__6, ___ref___1));
#line 533
c_rt_lib0clear(&___nl__6);
#line 534
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__4));
#line 534
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__6));
#line 534
c_rt_lib0clear(&___nl__6);
#line 535
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 536
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 536
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1070), ___nl__6);
#line 536
c_rt_lib0clear(&___nl__6);
#line 537
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 537
c_rt_lib0clear(&___nl__2);
#line 537
c_rt_lib0clear(&___nl__3);
#line 537
c_rt_lib0clear(&___nl__4);
#line 537
c_rt_lib0clear(&___nl__5);
#line 537
c_rt_lib0clear(&___nl__0);
#line 537
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
#line 541
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 542
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 543
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 544
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___1));
#line 545
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(784)));
#line 545
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___1));
#line 545
c_rt_lib0clear(&___nl__7);
#line 546
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(783)));
#line 546
c_rt_lib0move(&___nl__7, translator_priv0print_var_decl(___nl__8, ___ref___1));
#line 546
c_rt_lib0clear(&___nl__8);
#line 547
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 547
c_rt_lib0delete(translator_priv0load_const(___nl__8, ___nl__7, ___ref___1));
#line 547
c_rt_lib0clear(&___nl__8);
#line 548
c_rt_lib0move(&___nl__8, translator_priv0new_register(___ref___1));
#line 549
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 549
c_rt_lib0delete(translator_priv0load_const(___nl__9, ___nl__8, ___ref___1));
#line 549
c_rt_lib0clear(&___nl__9);
#line 550
c_rt_lib0move(&___nl__9, translator_priv0new_register(___ref___1));
#line 551
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___1));
#line 552
c_rt_lib0move(&___nl__10,___get_global_const(272));
#line 552
c_rt_lib0delete(translator_priv0print_bin_op_operator_command(___nl__9, ___nl__7, ___nl__6, ___nl__10, ___ref___1));
#line 552
c_rt_lib0clear(&___nl__10);
#line 553
c_rt_lib0delete(translator_priv0print_if_goto(___nl__3, ___nl__9, ___ref___1));
#line 554
c_rt_lib0move(&___nl__10, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__4));
#line 555
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 555
c_rt_lib0delete(translator_priv0print_cmd(___nl__11, ___ref___1));
#line 555
c_rt_lib0clear(&___nl__11);
#line 556
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 557
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(861)));
#line 557
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 557
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 557
if(c_rt_lib0check_true_native(___nl__11)){ goto label_2;}
#line 557
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 557
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(217)));
#line 557
c_rt_lib0move(&___nl__12, translator0last_debug_char(___nl__13));
#line 557
c_rt_lib0clear(&___nl__13);
#line 557
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__12, ___ref___1));
#line 557
c_rt_lib0clear(&___nl__12);
#line 557
goto label_2;
#line 557
label_2:
#line 557
c_rt_lib0clear(&___nl__11);
#line 558
c_rt_lib0move(&___nl__12,___get_global_const(251));
#line 558
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(4, ___get_global_const(237), ___nl__7, ___get_global_const(239), ___nl__7, ___get_global_const(240), ___nl__8, ___get_global_const(405), ___nl__12));
#line 558
c_rt_lib0clear(&___nl__12);
#line 558
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__11));
#line 558
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__11));
#line 558
c_rt_lib0clear(&___nl__11);
#line 559
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__5));
#line 559
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__11));
#line 559
c_rt_lib0clear(&___nl__11);
#line 560
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 561
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 561
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1070), ___nl__11);
#line 561
c_rt_lib0clear(&___nl__11);
#line 562
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 562
c_rt_lib0clear(&___nl__2);
#line 562
c_rt_lib0clear(&___nl__3);
#line 562
c_rt_lib0clear(&___nl__4);
#line 562
c_rt_lib0clear(&___nl__5);
#line 562
c_rt_lib0clear(&___nl__6);
#line 562
c_rt_lib0clear(&___nl__7);
#line 562
c_rt_lib0clear(&___nl__8);
#line 562
c_rt_lib0clear(&___nl__9);
#line 562
c_rt_lib0clear(&___nl__10);
#line 562
c_rt_lib0clear(&___nl__0);
#line 562
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
#line 566
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(217)));
#line 566
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(399)));
#line 567
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___1));
#line 568
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 569
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___1));
#line 570
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___1));
#line 571
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(282)));
#line 571
c_rt_lib0move(&___nl__7, translator_priv0calc_val(___nl__8, ___ref___1));
#line 571
c_rt_lib0clear(&___nl__8);
#line 572
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(283)));
#line 572
c_rt_lib0move(&___nl__8, translator_priv0print_var_decl(___nl__9, ___ref___1));
#line 572
c_rt_lib0clear(&___nl__9);
#line 573
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 573
c_rt_lib0move(&___nl__9, translator_priv0print_var_decl(___nl__10, ___ref___1));
#line 573
c_rt_lib0clear(&___nl__10);
#line 574
c_rt_lib0move(&___nl__10, translator_priv0new_register(___ref___1));
#line 575
c_rt_lib0move(&___nl__11,___get_global_const(939));
#line 575
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__7));
#line 575
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 575
c_rt_lib0clear(&___nl__13);
#line 575
c_rt_lib0delete(translator_priv0print_call_base(___nl__10, ___nl__11, ___nl__12, ___ref___1));
#line 575
c_rt_lib0clear(&___nl__12);
#line 575
c_rt_lib0clear(&___nl__11);
#line 576
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___1));
#line 577
c_rt_lib0move(&___nl__11,___get_global_const(940));
#line 577
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__10));
#line 577
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 577
c_rt_lib0clear(&___nl__13);
#line 577
c_rt_lib0delete(translator_priv0print_call_base(___nl__8, ___nl__11, ___nl__12, ___ref___1));
#line 577
c_rt_lib0clear(&___nl__12);
#line 577
c_rt_lib0clear(&___nl__11);
#line 578
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__8, ___ref___1));
#line 579
c_rt_lib0move(&___nl__11,___get_global_const(941));
#line 579
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__10));
#line 579
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(1, ___nl__13));
#line 579
c_rt_lib0clear(&___nl__13);
#line 579
c_rt_lib0delete(translator_priv0print_call_base(___nl__8, ___nl__11, ___nl__12, ___ref___1));
#line 579
c_rt_lib0clear(&___nl__12);
#line 579
c_rt_lib0clear(&___nl__11);
#line 580
c_rt_lib0move(&___nl__11,___get_global_const(1078));
#line 580
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__7));
#line 580
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__8));
#line 580
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 580
c_rt_lib0clear(&___nl__13);
#line 580
c_rt_lib0clear(&___nl__14);
#line 580
c_rt_lib0delete(translator_priv0print_call_base(___nl__9, ___nl__11, ___nl__12, ___ref___1));
#line 580
c_rt_lib0clear(&___nl__12);
#line 580
c_rt_lib0clear(&___nl__11);
#line 581
c_rt_lib0move(&___nl__11, translator_priv0save_loop_break(___ref___1, ___nl__4, ___nl__5));
#line 582
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 582
c_rt_lib0delete(translator_priv0print_cmd(___nl__12, ___ref___1));
#line 582
c_rt_lib0clear(&___nl__12);
#line 583
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___1));
#line 584
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(861)));
#line 584
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 584
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 584
if(c_rt_lib0check_true_native(___nl__12)){ goto label_2;}
#line 584
c_rt_lib0move(&___nl__13, translator0last_debug_char(___nl__2));
#line 584
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__13, ___ref___1));
#line 584
c_rt_lib0clear(&___nl__13);
#line 584
goto label_2;
#line 584
label_2:
#line 584
c_rt_lib0clear(&___nl__12);
#line 585
c_rt_lib0move(&___nl__12,___get_global_const(942));
#line 585
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__10));
#line 585
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(1, ___nl__14));
#line 585
c_rt_lib0clear(&___nl__14);
#line 585
c_rt_lib0delete(translator_priv0print_call_base(___nl__10, ___nl__12, ___nl__13, ___ref___1));
#line 585
c_rt_lib0clear(&___nl__13);
#line 585
c_rt_lib0clear(&___nl__12);
#line 586
c_rt_lib0move(&___nl__12, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__6));
#line 586
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__12));
#line 586
c_rt_lib0clear(&___nl__12);
#line 587
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 588
c_rt_lib0copy(&___nl__12, ___nl__11);
#line 588
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1070), ___nl__12);
#line 588
c_rt_lib0clear(&___nl__12);
#line 589
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___1));
#line 589
c_rt_lib0clear(&___nl__2);
#line 589
c_rt_lib0clear(&___nl__3);
#line 589
c_rt_lib0clear(&___nl__4);
#line 589
c_rt_lib0clear(&___nl__5);
#line 589
c_rt_lib0clear(&___nl__6);
#line 589
c_rt_lib0clear(&___nl__7);
#line 589
c_rt_lib0clear(&___nl__8);
#line 589
c_rt_lib0clear(&___nl__9);
#line 589
c_rt_lib0clear(&___nl__10);
#line 589
c_rt_lib0clear(&___nl__11);
#line 589
c_rt_lib0clear(&___nl__0);
#line 589
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
#line 593
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 594
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 595
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 596
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(217)));
#line 596
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(399)));
#line 597
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 598
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 598
c_rt_lib0move(&___nl__6, translator_priv0calc_val(___nl__7, ___ref___1));
#line 598
c_rt_lib0clear(&___nl__7);
#line 599
c_rt_lib0move(&___nl__8,___get_global_const(247));
#line 599
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__6, ___get_global_const(40), ___nl__6, ___get_global_const(405), ___nl__8));
#line 599
c_rt_lib0clear(&___nl__8);
#line 599
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__7));
#line 599
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 599
c_rt_lib0clear(&___nl__7);
#line 600
c_rt_lib0delete(translator_priv0print_if_goto(___nl__3, ___nl__6, ___ref___1));
#line 601
c_rt_lib0move(&___nl__7, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__4));
#line 602
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 602
c_rt_lib0delete(translator_priv0print_cmd(___nl__8, ___ref___1));
#line 602
c_rt_lib0clear(&___nl__8);
#line 603
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(861)));
#line 603
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 603
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 603
if(c_rt_lib0check_true_native(___nl__8)){ goto label_2;}
#line 603
c_rt_lib0move(&___nl__9, translator0last_debug_char(___nl__5));
#line 603
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__9, ___ref___1));
#line 603
c_rt_lib0clear(&___nl__9);
#line 603
goto label_2;
#line 603
label_2:
#line 603
c_rt_lib0clear(&___nl__8);
#line 604
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__4));
#line 604
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__8));
#line 604
c_rt_lib0clear(&___nl__8);
#line 605
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 606
c_rt_lib0copy(&___nl__8, ___nl__7);
#line 606
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1070), ___nl__8);
#line 606
c_rt_lib0clear(&___nl__8);
#line 607
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
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
c_rt_lib0clear(&___nl__0);
#line 607
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
#line 611
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 612
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___1));
#line 613
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___1));
#line 614
c_rt_lib0move(&___nl__5, translator_priv0get_sim_label(___ref___1));
#line 615
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(782)));
#line 615
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(650)));
#line 615
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 617
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(776)));
#line 617
if(c_rt_lib0check_true_native(___nl__7)){ goto label_3;}
#line 617
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 617
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 617
nl_die_arg(___nl__7);
#line 615
label_2:
#line 615
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(650)));
#line 616
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 616
c_rt_lib0delete(translator_priv0print_val(___nl__8, ___nl__9, ___ref___1));
#line 616
c_rt_lib0clear(&___nl__9);
#line 616
c_rt_lib0clear(&___nl__8);
#line 617
goto label_1;
#line 617
label_3:
#line 617
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(776)));
#line 618
c_rt_lib0delete(translator_priv0print_var_decl(___nl__8, ___ref___1));
#line 618
c_rt_lib0clear(&___nl__8);
#line 619
goto label_1;
#line 619
label_1:
#line 619
c_rt_lib0clear(&___nl__6);
#line 619
c_rt_lib0clear(&___nl__7);
#line 620
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___1));
#line 621
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 621
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(778)));
#line 621
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 621
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 621
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 622
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(779)));
#line 622
c_rt_lib0move(&___nl__7, translator_priv0calc_val(___nl__8, ___ref___1));
#line 622
c_rt_lib0clear(&___nl__8);
#line 623
c_rt_lib0move(&___nl__9,___get_global_const(247));
#line 623
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__7, ___get_global_const(40), ___nl__7, ___get_global_const(405), ___nl__9));
#line 623
c_rt_lib0clear(&___nl__9);
#line 623
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(222), ___nl__8));
#line 623
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__8));
#line 623
c_rt_lib0clear(&___nl__8);
#line 624
c_rt_lib0delete(translator_priv0print_if_goto(___nl__3, ___nl__7, ___ref___1));
#line 624
c_rt_lib0clear(&___nl__7);
#line 625
goto label_5;
#line 625
label_5:
#line 625
c_rt_lib0clear(&___nl__6);
#line 626
c_rt_lib0move(&___nl__6, translator_priv0save_loop_break(___ref___1, ___nl__3, ___nl__5));
#line 627
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 627
c_rt_lib0delete(translator_priv0print_cmd(___nl__7, ___ref___1));
#line 627
c_rt_lib0clear(&___nl__7);
#line 628
c_rt_lib0delete(translator_priv0print_sim_label(___nl__5, ___ref___1));
#line 629
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(783)));
#line 629
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 629
c_rt_lib0delete(translator_priv0print_val(___nl__7, ___nl__8, ___ref___1));
#line 629
c_rt_lib0clear(&___nl__8);
#line 629
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 630
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(217)));
#line 630
c_rt_lib0move(&___nl__7, translator0last_debug_char(___nl__8));
#line 630
c_rt_lib0clear(&___nl__8);
#line 630
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__7, ___ref___1));
#line 630
c_rt_lib0clear(&___nl__7);
#line 631
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__4));
#line 631
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 631
c_rt_lib0clear(&___nl__7);
#line 632
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___1));
#line 633
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 633
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1070), ___nl__7);
#line 633
c_rt_lib0clear(&___nl__7);
#line 634
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 634
c_rt_lib0clear(&___nl__2);
#line 634
c_rt_lib0clear(&___nl__3);
#line 634
c_rt_lib0clear(&___nl__4);
#line 634
c_rt_lib0clear(&___nl__5);
#line 634
c_rt_lib0clear(&___nl__6);
#line 634
c_rt_lib0clear(&___nl__0);
#line 634
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
#line 638
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 639
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 640
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 640
c_rt_lib0move(&___nl__4, translator_priv0calc_val(___nl__5, ___ref___1));
#line 640
c_rt_lib0clear(&___nl__5);
#line 641
c_rt_lib0move(&___nl__5, translator_priv0new_register(___ref___1));
#line 642
c_rt_lib0move(&___nl__6, translator_priv0get_sim_label(___ref___1));
#line 643
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(787)));
#line 643
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 643
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 643
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__7));
#line 643
label_3:
#line 643
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 643
if(c_rt_lib0check_true_native(___nl__12)){ goto label_1;}
#line 643
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 644
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(217)));
#line 644
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__13, ___ref___1));
#line 644
c_rt_lib0clear(&___nl__13);
#line 645
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(788)));
#line 645
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(78)));
#line 645
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__5, ___get_global_const(40), ___nl__4, ___get_global_const(73), ___nl__14));
#line 645
c_rt_lib0clear(&___nl__14);
#line 645
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(224), ___nl__13));
#line 645
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__13));
#line 645
c_rt_lib0clear(&___nl__13);
#line 646
c_rt_lib0move(&___nl__13, translator_priv0get_sim_label(___ref___1));
#line 647
c_rt_lib0delete(translator_priv0print_if_goto(___nl__13, ___nl__5, ___ref___1));
#line 648
c_rt_lib0delete(array0push(&___nl__3, ___nl__13));
#line 648
c_rt_lib0clear(&___nl__13);
#line 649
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 649
goto label_3;
#line 649
label_1:
#line 649
c_rt_lib0clear(&___nl__7);
#line 649
c_rt_lib0clear(&___nl__8);
#line 649
c_rt_lib0clear(&___nl__9);
#line 649
c_rt_lib0clear(&___nl__10);
#line 649
c_rt_lib0clear(&___nl__11);
#line 649
c_rt_lib0clear(&___nl__12);
#line 650
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 650
c_rt_lib0delete(translator_priv0load_const(___nl__7, ___nl__5, ___ref___1));
#line 650
c_rt_lib0clear(&___nl__7);
#line 651
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 651
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__5, ___get_global_const(40), ___nl__8));
#line 651
c_rt_lib0clear(&___nl__8);
#line 651
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__7));
#line 651
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 651
c_rt_lib0clear(&___nl__7);
#line 652
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__5));
#line 652
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__7));
#line 652
c_rt_lib0clear(&___nl__7);
#line 653
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 654
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(787)));
#line 654
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 654
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 654
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 654
label_6:
#line 654
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 654
if(c_rt_lib0check_true_native(___nl__13)){ goto label_4;}
#line 654
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 655
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(214)));
#line 655
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__14, ___get_global_const(217)));
#line 655
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__14, ___ref___1));
#line 655
c_rt_lib0clear(&___nl__14);
#line 656
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 656
c_rt_lib0delete(translator_priv0print_sim_label(___nl__14, ___ref___1));
#line 656
c_rt_lib0clear(&___nl__14);
#line 657
c_rt_lib0move(&___nl__14, translator_priv0save_registers(___ref___1));
#line 658
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(788)));
#line 658
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__15, ___get_global_const(650)));
#line 658
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(650)));
#line 658
if(c_rt_lib0check_true_native(___nl__16)){ goto label_8;}
#line 661
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(38)));
#line 661
if(c_rt_lib0check_true_native(___nl__16)){ goto label_9;}
#line 661
c_rt_lib0move(&___nl__16,___get_global_const(76));
#line 661
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 661
nl_die_arg(___nl__16);
#line 658
label_8:
#line 658
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(650)));
#line 659
c_rt_lib0move(&___nl__18, translator_priv0print_var_decl(___nl__17, ___ref___1));
#line 660
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(788)));
#line 660
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__20, ___get_global_const(78)));
#line 660
c_rt_lib0move(&___nl__19, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__18, ___get_global_const(40), ___nl__4, ___get_global_const(73), ___nl__20));
#line 660
c_rt_lib0clear(&___nl__20);
#line 660
c_rt_lib0move(&___nl__19, c_rt_lib0ov_mk_arg(___get_global_const(225), ___nl__19));
#line 660
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__19));
#line 660
c_rt_lib0clear(&___nl__19);
#line 660
c_rt_lib0clear(&___nl__18);
#line 660
c_rt_lib0clear(&___nl__17);
#line 661
goto label_7;
#line 661
label_9:
#line 662
goto label_7;
#line 662
label_7:
#line 662
c_rt_lib0clear(&___nl__15);
#line 662
c_rt_lib0clear(&___nl__16);
#line 663
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(214)));
#line 663
c_rt_lib0delete(translator_priv0print_cmd(___nl__15, ___ref___1));
#line 663
c_rt_lib0clear(&___nl__15);
#line 664
c_rt_lib0delete(translator_priv0restore_registers(___nl__14, ___ref___1));
#line 665
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(214)));
#line 665
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__16, ___get_global_const(217)));
#line 665
c_rt_lib0move(&___nl__15, translator0last_debug_char(___nl__16));
#line 665
c_rt_lib0clear(&___nl__16);
#line 665
c_rt_lib0delete(translator_priv0start_new_instruction(___nl__15, ___ref___1));
#line 665
c_rt_lib0clear(&___nl__15);
#line 666
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__6));
#line 666
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__15));
#line 666
c_rt_lib0clear(&___nl__15);
#line 667
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 667
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__15));
#line 667
c_rt_lib0clear(&___nl__15);
#line 667
c_rt_lib0clear(&___nl__14);
#line 668
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 668
goto label_6;
#line 668
label_4:
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
c_rt_lib0delete(translator_priv0print_sim_label(___nl__6, ___ref___1));
#line 670
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 670
c_rt_lib0clear(&___nl__2);
#line 670
c_rt_lib0clear(&___nl__3);
#line 670
c_rt_lib0clear(&___nl__4);
#line 670
c_rt_lib0clear(&___nl__5);
#line 670
c_rt_lib0clear(&___nl__6);
#line 670
c_rt_lib0clear(&___nl__7);
#line 670
c_rt_lib0clear(&___nl__0);
#line 670
return NULL;
}

ImmT translator_priv0move(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 674
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 674
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__0, ___nl__3));
#line 674
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 674
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 674
c_rt_lib0clear(&___nl__0);
#line 674
c_rt_lib0clear(&___nl__1);
#line 674
c_rt_lib0clear(&___nl__3);
#line 674
return NULL;
#line 674
goto label_2;
#line 674
label_2:
#line 674
c_rt_lib0clear(&___nl__3);
#line 675
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__0, ___get_global_const(40), ___nl__1));
#line 675
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(226), ___nl__3));
#line 675
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 675
c_rt_lib0clear(&___nl__3);
#line 675
c_rt_lib0clear(&___nl__0);
#line 675
c_rt_lib0clear(&___nl__1);
#line 675
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
#line 680
c_rt_lib0move(&___nl__5,___get_global_const(251));
#line 680
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 680
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 680
c_rt_lib0move(&___nl__5,___get_global_const(812));
#line 680
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 680
label_3:
#line 680
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 680
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 681
c_rt_lib0move(&___nl__6,___get_global_const(251));
#line 681
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 681
c_rt_lib0clear(&___nl__6);
#line 682
goto label_10;
#line 682
label_2:
#line 682
c_rt_lib0move(&___nl__5,___get_global_const(249));
#line 682
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 682
if(c_rt_lib0check_true_native(___nl__5)){ goto label_5;}
#line 682
c_rt_lib0move(&___nl__5,___get_global_const(813));
#line 682
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 682
label_5:
#line 682
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 682
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 683
c_rt_lib0move(&___nl__6,___get_global_const(249));
#line 683
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 683
c_rt_lib0clear(&___nl__6);
#line 684
goto label_10;
#line 684
label_4:
#line 684
c_rt_lib0move(&___nl__5,___get_global_const(257));
#line 684
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 684
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 684
c_rt_lib0move(&___nl__5,___get_global_const(814));
#line 684
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 684
label_7:
#line 684
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 684
if(c_rt_lib0check_true_native(___nl__5)){ goto label_6;}
#line 685
c_rt_lib0move(&___nl__6,___get_global_const(257));
#line 685
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 685
c_rt_lib0clear(&___nl__6);
#line 686
goto label_10;
#line 686
label_6:
#line 686
c_rt_lib0move(&___nl__5,___get_global_const(81));
#line 686
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 686
if(c_rt_lib0check_true_native(___nl__5)){ goto label_9;}
#line 686
c_rt_lib0move(&___nl__5,___get_global_const(815));
#line 686
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 686
label_9:
#line 686
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 686
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 687
c_rt_lib0move(&___nl__6,___get_global_const(81));
#line 687
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 687
c_rt_lib0clear(&___nl__6);
#line 688
goto label_10;
#line 688
label_8:
#line 688
c_rt_lib0move(&___nl__5,___get_global_const(83));
#line 688
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 688
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 688
c_rt_lib0move(&___nl__5,___get_global_const(816));
#line 688
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__3, ___nl__5));
#line 688
label_11:
#line 688
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 688
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 689
c_rt_lib0move(&___nl__6,___get_global_const(83));
#line 689
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 689
c_rt_lib0clear(&___nl__6);
#line 690
goto label_10;
#line 690
label_10:
#line 690
c_rt_lib0clear(&___nl__5);
#line 691
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(4, ___get_global_const(237), ___nl__0, ___get_global_const(239), ___nl__1, ___get_global_const(240), ___nl__2, ___get_global_const(405), ___nl__3));
#line 691
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(223), ___nl__5));
#line 691
c_rt_lib0delete(translator_priv0print(___ref___4, ___nl__5));
#line 691
c_rt_lib0clear(&___nl__5);
#line 691
c_rt_lib0clear(&___nl__0);
#line 691
c_rt_lib0clear(&___nl__1);
#line 691
c_rt_lib0clear(&___nl__2);
#line 691
c_rt_lib0clear(&___nl__3);
#line 691
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
#line 695
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(217)));
#line 695
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(38)));
#line 695
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(3, ___get_global_const(214), ___nl__1, ___get_global_const(217), ___nl__3, ___get_global_const(216), ___nl__4));
#line 695
c_rt_lib0clear(&___nl__3);
#line 695
c_rt_lib0clear(&___nl__4);
#line 696
c_rt_lib0move(&___nl__3,___get_global_const(1072));
#line 696
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 696
c_rt_lib0move(&___nl__4,___get_global_const(384));
#line 696
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 696
c_rt_lib0delete(array0push(&___nl__4, ___nl__2));
#line 696
c_rt_lib0move(&___nl__5,___get_global_const(384));
#line 696
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 696
c_rt_lib0move(&___nl__5,___get_global_const(1072));
#line 696
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 696
c_rt_lib0clear(&___nl__5);
#line 696
c_rt_lib0clear(&___nl__3);
#line 696
c_rt_lib0clear(&___nl__4);
#line 697
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 697
c_rt_lib0move(&___nl__4,___get_global_const(217));
#line 697
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 697
c_rt_lib0copy(&___nl__5, ___nl__3);
#line 697
c_rt_lib0hash_set_value_dec(&___nl__4, ___get_global_const(662), ___nl__5);
#line 697
c_rt_lib0move(&___nl__6,___get_global_const(217));
#line 697
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 697
c_rt_lib0clear(&___nl__6);
#line 697
c_rt_lib0clear(&___nl__3);
#line 697
c_rt_lib0clear(&___nl__4);
#line 697
c_rt_lib0clear(&___nl__5);
#line 697
c_rt_lib0clear(&___nl__2);
#line 697
c_rt_lib0clear(&___nl__1);
#line 697
return NULL;
}

ImmT translator_priv0print_if_goto(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 701
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(237), ___nl__0, ___get_global_const(40), ___nl__1));
#line 701
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(235), ___nl__3));
#line 701
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__3));
#line 701
c_rt_lib0clear(&___nl__3);
#line 701
c_rt_lib0clear(&___nl__0);
#line 701
c_rt_lib0clear(&___nl__1);
#line 701
return NULL;
}

ImmT translator_priv0print_get_from_index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 706
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__0, ___get_global_const(40), ___nl__1, ___get_global_const(241), ___nl__2));
#line 706
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(228), ___nl__4));
#line 706
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 706
c_rt_lib0clear(&___nl__4);
#line 706
c_rt_lib0clear(&___nl__0);
#line 706
c_rt_lib0clear(&___nl__1);
#line 706
c_rt_lib0clear(&___nl__2);
#line 706
return NULL;
}

ImmT translator_priv0print_set_at_index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 711
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(40), ___nl__0, ___get_global_const(241), ___nl__1, ___get_global_const(238), ___nl__2));
#line 711
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(229), ___nl__4));
#line 711
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 711
c_rt_lib0clear(&___nl__4);
#line 711
c_rt_lib0clear(&___nl__0);
#line 711
c_rt_lib0clear(&___nl__1);
#line 711
c_rt_lib0clear(&___nl__2);
#line 711
return NULL;
}

ImmT translator_priv0print_get_value(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 716
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(237), ___nl__0, ___get_global_const(40), ___nl__1, ___get_global_const(283), ___nl__2));
#line 716
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(230), ___nl__4));
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

ImmT translator_priv0print_set_value(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 720
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(3, ___get_global_const(40), ___nl__0, ___get_global_const(283), ___nl__1, ___get_global_const(238), ___nl__2));
#line 720
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(231), ___nl__4));
#line 720
c_rt_lib0delete(translator_priv0print(___ref___3, ___nl__4));
#line 720
c_rt_lib0clear(&___nl__4);
#line 720
c_rt_lib0clear(&___nl__0);
#line 720
c_rt_lib0clear(&___nl__1);
#line 720
c_rt_lib0clear(&___nl__2);
#line 720
return NULL;
}

ImmT translator_priv0get_stuct_of_lvalue(ImmT * ___ref___0) {
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 724
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 725
label_2:
#line 725
c_rt_lib0copy(&___nl__2, *___ref___0);
#line 725
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(223)));
#line 725
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 725
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 726
c_rt_lib0copy(&___nl__3, *___ref___0);
#line 726
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(223)));
#line 727
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 727
c_rt_lib0move(&___nl__5,___get_global_const(798));
#line 727
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 727
c_rt_lib0clear(&___nl__5);
#line 727
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 727
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 727
c_rt_lib0move(&___nl__5,___get_global_const(797));
#line 727
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 727
c_rt_lib0clear(&___nl__5);
#line 727
label_5:
#line 727
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 727
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 727
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 727
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 727
nl_die_arg(___nl__5);
#line 727
goto label_4;
#line 727
label_4:
#line 727
c_rt_lib0clear(&___nl__4);
#line 727
c_rt_lib0clear(&___nl__5);
#line 728
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 729
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(405)));
#line 729
c_rt_lib0move(&___nl__6,___get_global_const(798));
#line 729
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 729
c_rt_lib0clear(&___nl__6);
#line 729
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 729
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 730
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(240)));
#line 730
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(1073), ___nl__7));
#line 730
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 730
c_rt_lib0clear(&___nl__7);
#line 730
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 730
c_rt_lib0clear(&___nl__6);
#line 731
goto label_6;
#line 731
label_7:
#line 732
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(240)));
#line 732
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(802)));
#line 732
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(283), ___nl__7));
#line 732
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__7));
#line 732
c_rt_lib0clear(&___nl__7);
#line 732
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 732
c_rt_lib0clear(&___nl__6);
#line 733
goto label_6;
#line 733
label_6:
#line 733
c_rt_lib0clear(&___nl__5);
#line 734
c_rt_lib0delete(array0append(&___nl__4, ___nl__1));
#line 735
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 736
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(239)));
#line 736
c_rt_lib0copy(___ref___0, ___nl__5);
#line 736
c_rt_lib0clear(&___nl__5);
#line 736
c_rt_lib0clear(&___nl__3);
#line 736
c_rt_lib0clear(&___nl__4);
#line 737
goto label_2;
#line 737
label_1:
#line 737
c_rt_lib0clear(&___nl__2);
#line 738
return ___nl__1;
#line 738
c_rt_lib0clear(&___nl__1);
#line 738
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
#line 743
c_rt_lib0move(&___nl__3, translator_priv0get_stuct_of_lvalue(&___nl__0));
#line 744
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 744
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(796)));
#line 745
c_rt_lib0move(&___nl__6, translator_priv0get_var_register(___nl__4, ___ref___2));
#line 745
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 745
c_rt_lib0clear(&___nl__6);
#line 746
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 747
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 747
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 747
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 747
label_3:
#line 747
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__8, ___nl__7));
#line 747
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 748
c_rt_lib0move(&___nl__11, translator_priv0new_register(___ref___2));
#line 748
c_rt_lib0delete(array0push(&___nl__5, ___nl__11));
#line 748
c_rt_lib0clear(&___nl__11);
#line 749
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__3, ___nl__8));
#line 749
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(1073)));
#line 749
if(c_rt_lib0check_true_native(___nl__12)){ goto label_5;}
#line 754
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__11, ___get_global_const(283)));
#line 754
if(c_rt_lib0check_true_native(___nl__12)){ goto label_6;}
#line 754
c_rt_lib0move(&___nl__12,___get_global_const(76));
#line 754
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__12, ___nl__11));
#line 754
nl_die_arg(___nl__12);
#line 749
label_5:
#line 749
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(1073)));
#line 750
c_rt_lib0move(&___nl__14, translator_priv0calc_val(___nl__13, ___ref___2));
#line 751
c_rt_lib0move(&___nl__16, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 751
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(2, ___get_global_const(650), ___nl__16, ___get_global_const(1073), ___nl__14));
#line 751
c_rt_lib0clear(&___nl__16);
#line 751
c_rt_lib0move(&___nl__15, c_rt_lib0ov_mk_arg(___get_global_const(1073), ___nl__15));
#line 751
c_rt_lib0delete(array0push(&___nl__6, ___nl__15));
#line 751
c_rt_lib0clear(&___nl__15);
#line 752
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 752
c_rt_lib0move(&___nl__15, c_rt_lib0num_eq(___nl__1, ___nl__15));
#line 752
c_rt_lib0move(&___nl__16, c_rt_lib0not(___nl__15));
#line 752
if(c_rt_lib0check_true_native(___nl__16)){ goto label_9;}
#line 752
c_rt_lib0move(&___nl__15, array0len(___nl__3));
#line 752
c_rt_lib0move(&___nl__17,___get_global_const(2));
#line 752
c_rt_lib0move(&___nl__15, c_rt_lib0sub_mod(___nl__15, ___nl__17));
#line 752
c_rt_lib0clear(&___nl__17);
#line 752
c_rt_lib0move(&___nl__15, c_rt_lib0num_eq(___nl__8, ___nl__15));
#line 752
label_9:
#line 752
c_rt_lib0clear(&___nl__16);
#line 752
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 752
if(c_rt_lib0check_true_native(___nl__15)){ goto label_8;}
#line 752
c_rt_lib0clear(&___nl__11);
#line 752
c_rt_lib0clear(&___nl__12);
#line 752
c_rt_lib0clear(&___nl__13);
#line 752
c_rt_lib0clear(&___nl__14);
#line 752
c_rt_lib0clear(&___nl__15);
#line 752
goto label_1;
#line 752
goto label_8;
#line 752
label_8:
#line 752
c_rt_lib0clear(&___nl__15);
#line 753
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 753
c_rt_lib0move(&___nl__16, c_rt_lib0add(___nl__8, ___nl__16));
#line 753
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__5, ___nl__16));
#line 753
c_rt_lib0clear(&___nl__16);
#line 753
c_rt_lib0move(&___nl__16,___get_global_const(1079));
#line 753
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 753
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__18));
#line 753
c_rt_lib0move(&___nl__19, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__14));
#line 753
c_rt_lib0move(&___nl__17, c_rt_lib0array_mk(2, ___nl__18, ___nl__19));
#line 753
c_rt_lib0clear(&___nl__18);
#line 753
c_rt_lib0clear(&___nl__19);
#line 753
c_rt_lib0delete(translator_priv0print_call_base(___nl__15, ___nl__16, ___nl__17, ___ref___2));
#line 753
c_rt_lib0clear(&___nl__17);
#line 753
c_rt_lib0clear(&___nl__16);
#line 753
c_rt_lib0clear(&___nl__15);
#line 753
c_rt_lib0clear(&___nl__14);
#line 753
c_rt_lib0clear(&___nl__13);
#line 754
goto label_4;
#line 754
label_6:
#line 754
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__11, ___get_global_const(283)));
#line 755
c_rt_lib0move(&___nl__15, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 755
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(650), ___nl__15, ___get_global_const(283), ___nl__13));
#line 755
c_rt_lib0clear(&___nl__15);
#line 755
c_rt_lib0move(&___nl__14, c_rt_lib0ov_mk_arg(___get_global_const(283), ___nl__14));
#line 755
c_rt_lib0delete(array0push(&___nl__6, ___nl__14));
#line 755
c_rt_lib0clear(&___nl__14);
#line 756
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 756
c_rt_lib0move(&___nl__14, c_rt_lib0num_eq(___nl__1, ___nl__14));
#line 756
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__14));
#line 756
if(c_rt_lib0check_true_native(___nl__15)){ goto label_12;}
#line 756
c_rt_lib0move(&___nl__14, array0len(___nl__3));
#line 756
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 756
c_rt_lib0move(&___nl__14, c_rt_lib0sub_mod(___nl__14, ___nl__16));
#line 756
c_rt_lib0clear(&___nl__16);
#line 756
c_rt_lib0move(&___nl__14, c_rt_lib0num_eq(___nl__8, ___nl__14));
#line 756
label_12:
#line 756
c_rt_lib0clear(&___nl__15);
#line 756
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 756
if(c_rt_lib0check_true_native(___nl__14)){ goto label_11;}
#line 756
c_rt_lib0clear(&___nl__11);
#line 756
c_rt_lib0clear(&___nl__12);
#line 756
c_rt_lib0clear(&___nl__13);
#line 756
c_rt_lib0clear(&___nl__14);
#line 756
goto label_1;
#line 756
goto label_11;
#line 756
label_11:
#line 756
c_rt_lib0clear(&___nl__14);
#line 757
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 757
c_rt_lib0move(&___nl__15, c_rt_lib0add(___nl__8, ___nl__15));
#line 757
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__5, ___nl__15));
#line 757
c_rt_lib0clear(&___nl__15);
#line 757
c_rt_lib0delete(translator_priv0load_const(___nl__13, ___nl__14, ___ref___2));
#line 757
c_rt_lib0clear(&___nl__14);
#line 758
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 758
c_rt_lib0move(&___nl__15, c_rt_lib0add(___nl__8, ___nl__15));
#line 758
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__5, ___nl__15));
#line 758
c_rt_lib0clear(&___nl__15);
#line 758
c_rt_lib0move(&___nl__15,___get_global_const(1080));
#line 758
c_rt_lib0move(&___nl__17, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 758
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__17));
#line 758
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 758
c_rt_lib0move(&___nl__19, c_rt_lib0add(___nl__8, ___nl__19));
#line 758
c_rt_lib0move(&___nl__18, c_rt_lib0array_get(___nl__5, ___nl__19));
#line 758
c_rt_lib0clear(&___nl__19);
#line 758
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__18));
#line 758
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__17, ___nl__18));
#line 758
c_rt_lib0clear(&___nl__17);
#line 758
c_rt_lib0clear(&___nl__18);
#line 758
c_rt_lib0delete(translator_priv0print_call_base(___nl__14, ___nl__15, ___nl__16, ___ref___2));
#line 758
c_rt_lib0clear(&___nl__16);
#line 758
c_rt_lib0clear(&___nl__15);
#line 758
c_rt_lib0clear(&___nl__14);
#line 758
c_rt_lib0clear(&___nl__13);
#line 762
goto label_4;
#line 762
label_4:
#line 762
c_rt_lib0clear(&___nl__11);
#line 762
c_rt_lib0clear(&___nl__12);
#line 763
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 763
goto label_3;
#line 763
label_1:
#line 763
c_rt_lib0clear(&___nl__7);
#line 763
c_rt_lib0clear(&___nl__8);
#line 763
c_rt_lib0clear(&___nl__9);
#line 763
c_rt_lib0clear(&___nl__10);
#line 764
c_rt_lib0move(&___nl__8, array0len(___nl__5));
#line 764
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 764
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 764
c_rt_lib0clear(&___nl__9);
#line 764
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__5, ___nl__8));
#line 764
c_rt_lib0clear(&___nl__8);
#line 764
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(650), ___nl__7));
#line 764
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 764
c_rt_lib0clear(&___nl__7);
#line 765
c_rt_lib0clear(&___nl__0);
#line 765
c_rt_lib0clear(&___nl__1);
#line 765
c_rt_lib0clear(&___nl__3);
#line 765
c_rt_lib0clear(&___nl__4);
#line 765
c_rt_lib0clear(&___nl__5);
#line 765
return ___nl__6;
#line 765
c_rt_lib0clear(&___nl__3);
#line 765
c_rt_lib0clear(&___nl__4);
#line 765
c_rt_lib0clear(&___nl__5);
#line 765
c_rt_lib0clear(&___nl__6);
#line 765
c_rt_lib0clear(&___nl__0);
#line 765
c_rt_lib0clear(&___nl__1);
#line 765
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
#line 770
c_rt_lib0move(&___nl__3, translator_priv0save_registers(___ref___2));
#line 771
c_rt_lib0move(&___nl__4, array0len(___nl__0));
#line 772
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 772
c_rt_lib0move(&___nl__6, c_rt_lib0sub(___nl__4, ___nl__6));
#line 772
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__0, ___nl__6));
#line 772
c_rt_lib0clear(&___nl__6);
#line 772
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(650)));
#line 773
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 774
c_rt_lib0move(&___nl__7,___get_global_const(139));
#line 774
c_rt_lib0move(&___nl__7, c_rt_lib0sub(___nl__4, ___nl__7));
#line 774
label_2:
#line 774
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 774
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 774
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 774
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 775
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__0, ___nl__7));
#line 775
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(650)));
#line 775
if(c_rt_lib0check_true_native(___nl__10)){ goto label_5;}
#line 777
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(1073)));
#line 777
if(c_rt_lib0check_true_native(___nl__10)){ goto label_6;}
#line 784
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(283)));
#line 784
if(c_rt_lib0check_true_native(___nl__10)){ goto label_7;}
#line 784
c_rt_lib0move(&___nl__10,___get_global_const(76));
#line 784
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 784
nl_die_arg(___nl__10);
#line 775
label_5:
#line 775
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(650)));
#line 776
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(0));
#line 776
nl_die_arg(___nl__12);
#line 776
c_rt_lib0clear(&___nl__12);
#line 776
c_rt_lib0clear(&___nl__11);
#line 777
goto label_4;
#line 777
label_6:
#line 777
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(1073)));
#line 778
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 778
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__1, ___nl__12));
#line 778
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__12));
#line 778
if(c_rt_lib0check_true_native(___nl__13)){ goto label_10;}
#line 778
c_rt_lib0move(&___nl__12,___get_global_const(139));
#line 778
c_rt_lib0move(&___nl__12, c_rt_lib0sub(___nl__4, ___nl__12));
#line 778
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__7, ___nl__12));
#line 778
label_10:
#line 778
c_rt_lib0clear(&___nl__13);
#line 778
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 778
if(c_rt_lib0check_true_native(___nl__12)){ goto label_9;}
#line 779
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 779
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(1073)));
#line 779
c_rt_lib0delete(translator_priv0print_set_at_index(___nl__13, ___nl__14, ___nl__5, ___ref___2));
#line 779
c_rt_lib0clear(&___nl__14);
#line 779
c_rt_lib0clear(&___nl__13);
#line 780
goto label_8;
#line 780
label_9:
#line 781
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 781
c_rt_lib0move(&___nl__14,___get_global_const(1081));
#line 781
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 781
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 781
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(1073)));
#line 781
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__17));
#line 781
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__5));
#line 781
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(3, ___nl__16, ___nl__17, ___nl__18));
#line 781
c_rt_lib0clear(&___nl__16);
#line 781
c_rt_lib0clear(&___nl__17);
#line 781
c_rt_lib0clear(&___nl__18);
#line 781
c_rt_lib0delete(translator_priv0print_call_base(___nl__13, ___nl__14, ___nl__15, ___ref___2));
#line 781
c_rt_lib0clear(&___nl__15);
#line 781
c_rt_lib0clear(&___nl__14);
#line 781
c_rt_lib0clear(&___nl__13);
#line 782
goto label_8;
#line 782
label_8:
#line 782
c_rt_lib0clear(&___nl__12);
#line 783
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 783
c_rt_lib0copy(&___nl__5, ___nl__12);
#line 783
c_rt_lib0clear(&___nl__12);
#line 783
c_rt_lib0clear(&___nl__11);
#line 784
goto label_4;
#line 784
label_7:
#line 784
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(283)));
#line 785
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 785
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__1, ___nl__12));
#line 785
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__12));
#line 785
if(c_rt_lib0check_true_native(___nl__13)){ goto label_13;}
#line 785
c_rt_lib0move(&___nl__12,___get_global_const(139));
#line 785
c_rt_lib0move(&___nl__12, c_rt_lib0sub(___nl__4, ___nl__12));
#line 785
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__7, ___nl__12));
#line 785
label_13:
#line 785
c_rt_lib0clear(&___nl__13);
#line 785
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 785
if(c_rt_lib0check_true_native(___nl__12)){ goto label_12;}
#line 786
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 786
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(283)));
#line 786
c_rt_lib0delete(translator_priv0print_set_value(___nl__13, ___nl__14, ___nl__5, ___ref___2));
#line 786
c_rt_lib0clear(&___nl__14);
#line 786
c_rt_lib0clear(&___nl__13);
#line 787
goto label_11;
#line 787
label_12:
#line 788
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 788
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__6, ___nl__13));
#line 788
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 788
if(c_rt_lib0check_true_native(___nl__13)){ goto label_15;}
#line 788
c_rt_lib0move(&___nl__14, translator_priv0new_register(___ref___2));
#line 788
c_rt_lib0copy(&___nl__6, ___nl__14);
#line 788
c_rt_lib0clear(&___nl__14);
#line 788
goto label_15;
#line 788
label_15:
#line 788
c_rt_lib0clear(&___nl__13);
#line 789
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(283)));
#line 789
c_rt_lib0delete(translator_priv0load_const(___nl__13, ___nl__6, ___ref___2));
#line 789
c_rt_lib0clear(&___nl__13);
#line 790
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 790
c_rt_lib0move(&___nl__14,___get_global_const(1082));
#line 790
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 790
c_rt_lib0move(&___nl__16, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__16));
#line 790
c_rt_lib0move(&___nl__17, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__6));
#line 790
c_rt_lib0move(&___nl__18, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__5));
#line 790
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(3, ___nl__16, ___nl__17, ___nl__18));
#line 790
c_rt_lib0clear(&___nl__16);
#line 790
c_rt_lib0clear(&___nl__17);
#line 790
c_rt_lib0clear(&___nl__18);
#line 790
c_rt_lib0delete(translator_priv0print_call_base(___nl__13, ___nl__14, ___nl__15, ___ref___2));
#line 790
c_rt_lib0clear(&___nl__15);
#line 790
c_rt_lib0clear(&___nl__14);
#line 790
c_rt_lib0clear(&___nl__13);
#line 791
goto label_11;
#line 791
label_11:
#line 791
c_rt_lib0clear(&___nl__12);
#line 792
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(650)));
#line 792
c_rt_lib0copy(&___nl__5, ___nl__12);
#line 792
c_rt_lib0clear(&___nl__12);
#line 792
c_rt_lib0clear(&___nl__11);
#line 793
goto label_4;
#line 793
label_4:
#line 793
c_rt_lib0clear(&___nl__9);
#line 793
c_rt_lib0clear(&___nl__10);
#line 793
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 793
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__9));
#line 793
c_rt_lib0clear(&___nl__9);
#line 794
goto label_2;
#line 794
label_1:
#line 794
c_rt_lib0clear(&___nl__7);
#line 794
c_rt_lib0clear(&___nl__8);
#line 795
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 795
c_rt_lib0move(&___nl__7, c_rt_lib0ne(___nl__6, ___nl__7));
#line 795
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 795
if(c_rt_lib0check_true_native(___nl__7)){ goto label_17;}
#line 795
c_rt_lib0delete(translator_priv0restore_registers(___nl__3, ___ref___2));
#line 795
goto label_17;
#line 795
label_17:
#line 795
c_rt_lib0clear(&___nl__7);
#line 795
c_rt_lib0clear(&___nl__3);
#line 795
c_rt_lib0clear(&___nl__4);
#line 795
c_rt_lib0clear(&___nl__5);
#line 795
c_rt_lib0clear(&___nl__6);
#line 795
c_rt_lib0clear(&___nl__0);
#line 795
c_rt_lib0clear(&___nl__1);
#line 795
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
#line 799
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 800
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 801
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(281)));
#line 801
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 801
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 801
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 801
label_3:
#line 801
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 801
if(c_rt_lib0check_true_native(___nl__9)){ goto label_1;}
#line 801
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 802
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 802
c_rt_lib0move(&___nl__10, c_rt_lib0gt(___nl__3, ___nl__10));
#line 802
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 802
if(c_rt_lib0check_true_native(___nl__10)){ goto label_5;}
#line 802
c_rt_lib0move(&___nl__11, string0lf());
#line 802
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__11));
#line 802
c_rt_lib0clear(&___nl__11);
#line 802
goto label_5;
#line 802
label_5:
#line 802
c_rt_lib0clear(&___nl__10);
#line 803
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 804
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 804
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__10));
#line 804
c_rt_lib0clear(&___nl__10);
#line 805
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 805
goto label_3;
#line 805
label_1:
#line 805
c_rt_lib0clear(&___nl__4);
#line 805
c_rt_lib0clear(&___nl__5);
#line 805
c_rt_lib0clear(&___nl__6);
#line 805
c_rt_lib0clear(&___nl__7);
#line 805
c_rt_lib0clear(&___nl__8);
#line 805
c_rt_lib0clear(&___nl__9);
#line 806
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(850)));
#line 806
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(849)));
#line 806
if(c_rt_lib0check_true_native(___nl__5)){ goto label_7;}
#line 808
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(848)));
#line 808
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 808
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 808
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 808
nl_die_arg(___nl__5);
#line 806
label_7:
#line 807
c_rt_lib0move(&___nl__6, string0lf());
#line 807
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__6));
#line 807
c_rt_lib0clear(&___nl__6);
#line 808
goto label_6;
#line 808
label_8:
#line 809
goto label_6;
#line 809
label_6:
#line 809
c_rt_lib0clear(&___nl__4);
#line 809
c_rt_lib0clear(&___nl__5);
#line 810
c_rt_lib0clear(&___nl__0);
#line 810
c_rt_lib0clear(&___nl__3);
#line 810
return ___nl__2;
#line 810
c_rt_lib0clear(&___nl__2);
#line 810
c_rt_lib0clear(&___nl__3);
#line 810
c_rt_lib0clear(&___nl__0);
#line 810
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
#line 814
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(405)));
#line 814
c_rt_lib0move(&___nl__4,___get_global_const(822));
#line 814
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 814
c_rt_lib0clear(&___nl__4);
#line 814
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 814
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 814
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 814
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 814
nl_die_arg(___nl__4);
#line 814
goto label_2;
#line 814
label_2:
#line 814
c_rt_lib0clear(&___nl__3);
#line 814
c_rt_lib0clear(&___nl__4);
#line 815
c_rt_lib0move(&___nl__3, translator_priv0get_sim_label(___ref___2));
#line 816
c_rt_lib0move(&___nl__4, translator_priv0get_sim_label(___ref___2));
#line 817
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(808)));
#line 817
c_rt_lib0move(&___nl__5, translator_priv0dest_val(___nl__6, ___nl__1, ___ref___2));
#line 817
c_rt_lib0clear(&___nl__6);
#line 818
c_rt_lib0delete(translator_priv0print_if_goto(___nl__4, ___nl__5, ___ref___2));
#line 819
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(810)));
#line 819
c_rt_lib0delete(translator_priv0print_val(___nl__6, ___nl__1, ___ref___2));
#line 819
c_rt_lib0clear(&___nl__6);
#line 820
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(236), ___nl__3));
#line 820
c_rt_lib0delete(translator_priv0print(___ref___2, ___nl__6));
#line 820
c_rt_lib0clear(&___nl__6);
#line 821
c_rt_lib0delete(translator_priv0print_sim_label(___nl__4, ___ref___2));
#line 822
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(809)));
#line 822
c_rt_lib0delete(translator_priv0print_val(___nl__6, ___nl__1, ___ref___2));
#line 822
c_rt_lib0clear(&___nl__6);
#line 823
c_rt_lib0delete(translator_priv0print_sim_label(___nl__3, ___ref___2));
#line 823
c_rt_lib0clear(&___nl__3);
#line 823
c_rt_lib0clear(&___nl__4);
#line 823
c_rt_lib0clear(&___nl__5);
#line 823
c_rt_lib0clear(&___nl__0);
#line 823
c_rt_lib0clear(&___nl__1);
#line 823
return NULL;
}

ImmT translator_priv0print_die(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 827
c_rt_lib0move(&___nl__2, translator_priv0new_register(___ref___1));
#line 828
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__0));
#line 828
c_rt_lib0delete(translator_priv0print_val(___nl__3, ___nl__2, ___ref___1));
#line 828
c_rt_lib0clear(&___nl__3);
#line 829
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(233), ___nl__2));
#line 829
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__3));
#line 829
c_rt_lib0clear(&___nl__3);
#line 829
c_rt_lib0clear(&___nl__2);
#line 829
c_rt_lib0clear(&___nl__0);
#line 829
return NULL;
}

ImmT translator_priv0print_return(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 833
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 834
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(215)));
#line 835
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 835
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(778)));
#line 835
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 835
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 835
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 836
c_rt_lib0move(&___nl__5, translator_priv0calc_val(___nl__0, ___ref___1));
#line 836
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__5));
#line 836
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 836
c_rt_lib0clear(&___nl__5);
#line 837
goto label_2;
#line 837
label_2:
#line 837
c_rt_lib0clear(&___nl__4);
#line 838
c_rt_lib0delete(translator_priv0print_safe_return(___nl__3, ___ref___1));
#line 839
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 839
c_rt_lib0clear(&___nl__2);
#line 839
c_rt_lib0clear(&___nl__3);
#line 839
c_rt_lib0clear(&___nl__0);
#line 839
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
#line 843
c_rt_lib0move(&___nl__2, translator_priv0save_registers(___ref___1));
#line 844
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1069)));
#line 844
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1065)));
#line 845
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 845
c_rt_lib0move(&___nl__4, c_rt_lib0unary_minus(___nl__4));
#line 846
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1072)));
#line 846
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(335)));
#line 847
c_rt_lib0copy(&___nl__6, ___nl__0);
#line 847
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(238)));
#line 847
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 847
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 848
c_rt_lib0copy(&___nl__7, ___nl__0);
#line 848
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(238)));
#line 848
c_rt_lib0copy(&___nl__4, ___nl__7);
#line 848
c_rt_lib0clear(&___nl__7);
#line 849
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 849
c_rt_lib0move(&___nl__7, c_rt_lib0lt(___nl__4, ___nl__7));
#line 849
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 849
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 849
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__5, ___nl__4));
#line 849
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(5)));
#line 849
label_5:
#line 849
c_rt_lib0clear(&___nl__8);
#line 849
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 849
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 850
c_rt_lib0move(&___nl__8, translator_priv0new_register(___ref___1));
#line 850
c_rt_lib0copy(&___nl__4, ___nl__8);
#line 850
c_rt_lib0clear(&___nl__8);
#line 851
c_rt_lib0copy(&___nl__8, ___nl__0);
#line 851
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__8, ___get_global_const(238)));
#line 851
c_rt_lib0delete(translator_priv0move(___nl__4, ___nl__8, ___ref___1));
#line 851
c_rt_lib0clear(&___nl__8);
#line 852
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(238), ___nl__4));
#line 852
c_rt_lib0copy(&___nl__0, ___nl__8);
#line 852
c_rt_lib0clear(&___nl__8);
#line 853
goto label_4;
#line 853
label_4:
#line 853
c_rt_lib0clear(&___nl__7);
#line 854
goto label_2;
#line 854
label_2:
#line 854
c_rt_lib0clear(&___nl__6);
#line 855
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 855
label_7:
#line 855
c_rt_lib0move(&___nl__7, c_rt_lib0lt(___nl__6, ___nl__3));
#line 855
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 855
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 856
c_rt_lib0move(&___nl__8, array0len(___nl__5));
#line 856
c_rt_lib0move(&___nl__8, c_rt_lib0lt(___nl__6, ___nl__8));
#line 856
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 856
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 856
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 856
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(5)));
#line 856
label_11:
#line 856
c_rt_lib0clear(&___nl__9);
#line 856
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 856
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 856
c_rt_lib0clear(&___nl__8);
#line 856
goto label_8;
#line 856
goto label_10;
#line 856
label_10:
#line 856
c_rt_lib0clear(&___nl__8);
#line 857
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__6, ___nl__4));
#line 857
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 857
if(c_rt_lib0check_true_native(___nl__8)){ goto label_13;}
#line 857
c_rt_lib0clear(&___nl__8);
#line 857
goto label_8;
#line 857
goto label_13;
#line 857
label_13:
#line 857
c_rt_lib0clear(&___nl__8);
#line 858
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(876)));
#line 858
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 858
c_rt_lib0move(&___nl__8, ptd0ensure(___nl__9, ___nl__6));
#line 858
c_rt_lib0clear(&___nl__9);
#line 858
c_rt_lib0delete(translator_priv0undef_reg(___nl__8, ___ref___1));
#line 858
c_rt_lib0clear(&___nl__8);
#line 858
label_8:
#line 858
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 858
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__8));
#line 858
c_rt_lib0clear(&___nl__8);
#line 859
goto label_7;
#line 859
label_6:
#line 859
c_rt_lib0clear(&___nl__6);
#line 859
c_rt_lib0clear(&___nl__7);
#line 860
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(75), ___nl__0));
#line 860
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__6));
#line 860
c_rt_lib0clear(&___nl__6);
#line 861
c_rt_lib0delete(translator_priv0restore_registers(___nl__2, ___ref___1));
#line 861
c_rt_lib0clear(&___nl__2);
#line 861
c_rt_lib0clear(&___nl__3);
#line 861
c_rt_lib0clear(&___nl__4);
#line 861
c_rt_lib0clear(&___nl__5);
#line 861
c_rt_lib0clear(&___nl__0);
#line 861
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
#line 865
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 866
c_rt_lib0move(&___nl__2,___get_global_const(962));
#line 866
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 866
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 866
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 866
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 866
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 866
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__4, ___nl__5));
#line 866
c_rt_lib0clear(&___nl__5);
#line 866
c_rt_lib0clear(&___nl__4);
#line 866
c_rt_lib0move(&___nl__4,___get_global_const(922));
#line 866
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 866
c_rt_lib0clear(&___nl__4);
#line 866
label_3:
#line 866
c_rt_lib0clear(&___nl__3);
#line 866
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 866
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 867
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 868
c_rt_lib0move(&___nl__4,___get_global_const(139));
#line 868
label_5:
#line 868
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__4, ___nl__1));
#line 868
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 868
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 869
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 869
c_rt_lib0move(&___nl__6, string0substr(___nl__0, ___nl__4, ___nl__7));
#line 869
c_rt_lib0clear(&___nl__7);
#line 870
c_rt_lib0move(&___nl__7, string0ord(___nl__6));
#line 871
c_rt_lib0move(&___nl__8,___get_global_const(1083));
#line 871
c_rt_lib0move(&___nl__8, c_rt_lib0mul(___nl__3, ___nl__8));
#line 871
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 871
c_rt_lib0clear(&___nl__8);
#line 872
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 872
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 872
c_rt_lib0clear(&___nl__10);
#line 872
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 872
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 872
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 872
c_rt_lib0move(&___nl__10,___get_global_const(163));
#line 872
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 872
c_rt_lib0clear(&___nl__10);
#line 872
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__8));
#line 872
label_9:
#line 872
c_rt_lib0clear(&___nl__9);
#line 872
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 872
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 873
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 873
c_rt_lib0move(&___nl__9, string0ord(___nl__10));
#line 873
c_rt_lib0clear(&___nl__10);
#line 873
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__7, ___nl__9));
#line 873
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 873
c_rt_lib0clear(&___nl__9);
#line 874
goto label_7;
#line 874
label_8:
#line 874
c_rt_lib0move(&___nl__10,___get_global_const(1084));
#line 874
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 874
c_rt_lib0clear(&___nl__10);
#line 874
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 874
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 874
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 874
c_rt_lib0move(&___nl__10,___get_global_const(1085));
#line 874
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 874
c_rt_lib0clear(&___nl__10);
#line 874
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__8));
#line 874
label_11:
#line 874
c_rt_lib0clear(&___nl__9);
#line 874
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 874
if(c_rt_lib0check_true_native(___nl__8)){ goto label_10;}
#line 875
c_rt_lib0move(&___nl__10,___get_global_const(1084));
#line 875
c_rt_lib0move(&___nl__9, string0ord(___nl__10));
#line 875
c_rt_lib0clear(&___nl__10);
#line 875
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__7, ___nl__9));
#line 875
c_rt_lib0move(&___nl__10,___get_global_const(157));
#line 875
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 875
c_rt_lib0clear(&___nl__10);
#line 875
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 875
c_rt_lib0clear(&___nl__9);
#line 876
goto label_7;
#line 876
label_10:
#line 876
c_rt_lib0move(&___nl__10,___get_global_const(1063));
#line 876
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 876
c_rt_lib0clear(&___nl__10);
#line 876
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__7, ___nl__8));
#line 876
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__8));
#line 876
if(c_rt_lib0check_true_native(___nl__9)){ goto label_13;}
#line 876
c_rt_lib0move(&___nl__10,___get_global_const(1086));
#line 876
c_rt_lib0move(&___nl__8, string0ord(___nl__10));
#line 876
c_rt_lib0clear(&___nl__10);
#line 876
c_rt_lib0move(&___nl__8, c_rt_lib0le(___nl__7, ___nl__8));
#line 876
label_13:
#line 876
c_rt_lib0clear(&___nl__9);
#line 876
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 876
if(c_rt_lib0check_true_native(___nl__8)){ goto label_12;}
#line 877
c_rt_lib0move(&___nl__10,___get_global_const(1063));
#line 877
c_rt_lib0move(&___nl__9, string0ord(___nl__10));
#line 877
c_rt_lib0clear(&___nl__10);
#line 877
c_rt_lib0move(&___nl__9, c_rt_lib0sub(___nl__7, ___nl__9));
#line 877
c_rt_lib0move(&___nl__10,___get_global_const(157));
#line 877
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 877
c_rt_lib0clear(&___nl__10);
#line 877
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 877
c_rt_lib0clear(&___nl__9);
#line 878
goto label_7;
#line 878
label_12:
#line 879
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 879
nl_die_arg(___nl__9);
#line 879
c_rt_lib0clear(&___nl__9);
#line 880
goto label_7;
#line 880
label_7:
#line 880
c_rt_lib0clear(&___nl__8);
#line 880
c_rt_lib0clear(&___nl__6);
#line 880
c_rt_lib0clear(&___nl__7);
#line 880
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 880
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 880
c_rt_lib0clear(&___nl__6);
#line 881
goto label_5;
#line 881
label_4:
#line 881
c_rt_lib0clear(&___nl__4);
#line 881
c_rt_lib0clear(&___nl__5);
#line 882
c_rt_lib0clear(&___nl__0);
#line 882
c_rt_lib0clear(&___nl__1);
#line 882
c_rt_lib0clear(&___nl__2);
#line 882
return ___nl__3;
#line 882
c_rt_lib0clear(&___nl__3);
#line 883
goto label_1;
#line 883
label_2:
#line 883
c_rt_lib0move(&___nl__2,___get_global_const(139));
#line 883
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 883
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__2));
#line 883
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 883
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 883
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 883
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__5, ___nl__6));
#line 883
c_rt_lib0clear(&___nl__6);
#line 883
c_rt_lib0clear(&___nl__5);
#line 883
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 883
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__5));
#line 883
c_rt_lib0clear(&___nl__5);
#line 883
label_16:
#line 883
c_rt_lib0clear(&___nl__4);
#line 883
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 883
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 883
c_rt_lib0move(&___nl__2, string_utils0is_integer(___nl__0));
#line 883
label_15:
#line 883
c_rt_lib0clear(&___nl__3);
#line 883
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 883
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 884
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 885
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 885
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 885
label_19:
#line 885
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__1));
#line 885
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 886
c_rt_lib0move(&___nl__7,___get_global_const(1087));
#line 886
c_rt_lib0move(&___nl__3, c_rt_lib0mul_mod(___nl__3, ___nl__7));
#line 886
c_rt_lib0clear(&___nl__7);
#line 887
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 887
c_rt_lib0move(&___nl__8, string0substr(___nl__0, ___nl__4, ___nl__9));
#line 887
c_rt_lib0clear(&___nl__9);
#line 887
c_rt_lib0move(&___nl__7, string0ord(___nl__8));
#line 887
c_rt_lib0clear(&___nl__8);
#line 887
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 887
c_rt_lib0move(&___nl__8, string0ord(___nl__9));
#line 887
c_rt_lib0clear(&___nl__9);
#line 887
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 887
c_rt_lib0clear(&___nl__8);
#line 887
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__7));
#line 887
c_rt_lib0clear(&___nl__7);
#line 888
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 888
goto label_19;
#line 888
label_17:
#line 888
c_rt_lib0clear(&___nl__4);
#line 888
c_rt_lib0clear(&___nl__5);
#line 888
c_rt_lib0clear(&___nl__6);
#line 889
c_rt_lib0clear(&___nl__0);
#line 889
c_rt_lib0clear(&___nl__1);
#line 889
c_rt_lib0clear(&___nl__2);
#line 889
return ___nl__3;
#line 889
c_rt_lib0clear(&___nl__3);
#line 890
goto label_1;
#line 890
label_14:
#line 891
c_rt_lib0clear(&___nl__1);
#line 891
c_rt_lib0clear(&___nl__2);
#line 891
return ___nl__0;
#line 892
goto label_1;
#line 892
label_1:
#line 892
c_rt_lib0clear(&___nl__2);
#line 892
c_rt_lib0clear(&___nl__1);
#line 892
c_rt_lib0clear(&___nl__0);
#line 892
return NULL;
}

ImmT translator_priv0dest_val(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
translator_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 896
c_rt_lib0copy(&___nl__3, ___nl__0);
#line 896
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(796)));
#line 896
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 896
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 897
c_rt_lib0copy(&___nl__5, ___nl__0);
#line 897
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__5, ___get_global_const(796)));
#line 897
c_rt_lib0move(&___nl__4, translator_priv0get_var_register(___nl__5, ___ref___2));
#line 897
c_rt_lib0clear(&___nl__5);
#line 897
c_rt_lib0clear(&___nl__0);
#line 897
c_rt_lib0clear(&___nl__1);
#line 897
c_rt_lib0clear(&___nl__3);
#line 897
return ___nl__4;
#line 897
c_rt_lib0clear(&___nl__4);
#line 898
goto label_2;
#line 898
label_2:
#line 898
c_rt_lib0clear(&___nl__3);
#line 899
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 899
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 899
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 899
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 899
c_rt_lib0move(&___nl__4, translator_priv0new_register(___ref___2));
#line 899
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 899
c_rt_lib0clear(&___nl__4);
#line 899
goto label_4;
#line 899
label_4:
#line 899
c_rt_lib0clear(&___nl__3);
#line 900
c_rt_lib0delete(translator_priv0print_val(___nl__0, ___nl__1, ___ref___2));
#line 901
c_rt_lib0clear(&___nl__0);
#line 901
return ___nl__1;
#line 901
c_rt_lib0clear(&___nl__0);
#line 901
c_rt_lib0clear(&___nl__1);
#line 901
return NULL;
}

ImmT translator_priv0def_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
translator_priv0__const__init();
ImmT ___nl__4 = NULL;
#line 906
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 906
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__1, ___nl__4));
#line 906
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 906
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 906
c_rt_lib0copy(&___nl__1, ___nl__2);
#line 906
goto label_2;
#line 906
label_2:
#line 906
c_rt_lib0clear(&___nl__4);
#line 907
c_rt_lib0delete(translator_priv0print_val(___nl__0, ___nl__1, ___ref___3));
#line 908
c_rt_lib0clear(&___nl__0);
#line 908
c_rt_lib0clear(&___nl__2);
#line 908
return ___nl__1;
#line 908
c_rt_lib0clear(&___nl__0);
#line 908
c_rt_lib0clear(&___nl__1);
#line 908
c_rt_lib0clear(&___nl__2);
#line 908
return NULL;
}

ImmT translator_priv0calc_val(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 912
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 912
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(796)));
#line 912
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 912
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 913
c_rt_lib0copy(&___nl__4, ___nl__0);
#line 913
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(796)));
#line 913
c_rt_lib0move(&___nl__3, translator_priv0get_var_register(___nl__4, ___ref___1));
#line 913
c_rt_lib0clear(&___nl__4);
#line 913
c_rt_lib0clear(&___nl__0);
#line 913
c_rt_lib0clear(&___nl__2);
#line 913
return ___nl__3;
#line 913
c_rt_lib0clear(&___nl__3);
#line 914
goto label_2;
#line 914
label_2:
#line 914
c_rt_lib0clear(&___nl__2);
#line 915
c_rt_lib0move(&___nl__2, translator_priv0new_register(___ref___1));
#line 916
c_rt_lib0delete(translator_priv0print_val(___nl__0, ___nl__2, ___ref___1));
#line 917
c_rt_lib0clear(&___nl__0);
#line 917
return ___nl__2;
#line 917
c_rt_lib0clear(&___nl__2);
#line 917
c_rt_lib0clear(&___nl__0);
#line 917
return NULL;
}

ImmT translator_priv0get_var_register(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 921
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1069)));
#line 921
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(652)));
#line 921
c_rt_lib0move(&___nl__2, hash0get_value(___nl__3, ___nl__0));
#line 921
c_rt_lib0clear(&___nl__3);
#line 921
c_rt_lib0clear(&___nl__0);
#line 921
return ___nl__2;
#line 921
c_rt_lib0clear(&___nl__2);
#line 921
c_rt_lib0clear(&___nl__0);
#line 921
return NULL;
}

ImmT translator_priv0new_declaration(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 925
c_rt_lib0move(&___nl__2, translator_priv0new_register(___ref___1));
#line 926
c_rt_lib0move(&___nl__3,___get_global_const(1069));
#line 926
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 926
c_rt_lib0move(&___nl__4,___get_global_const(652));
#line 926
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 926
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__0, ___nl__2));
#line 926
c_rt_lib0move(&___nl__5,___get_global_const(652));
#line 926
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 926
c_rt_lib0move(&___nl__5,___get_global_const(1069));
#line 926
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__3));
#line 926
c_rt_lib0clear(&___nl__5);
#line 926
c_rt_lib0clear(&___nl__3);
#line 926
c_rt_lib0clear(&___nl__4);
#line 927
c_rt_lib0move(&___nl__3,___get_global_const(217));
#line 927
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___1, ___nl__3));
#line 927
c_rt_lib0move(&___nl__4,___get_global_const(662));
#line 927
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 927
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__0, ___nl__2));
#line 927
c_rt_lib0move(&___nl__5,___get_global_const(662));
#line 927
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 927
c_rt_lib0move(&___nl__5,___get_global_const(217));
#line 927
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__5, ___nl__3));
#line 927
c_rt_lib0clear(&___nl__5);
#line 927
c_rt_lib0clear(&___nl__3);
#line 927
c_rt_lib0clear(&___nl__4);
#line 928
c_rt_lib0clear(&___nl__0);
#line 928
return ___nl__2;
#line 928
c_rt_lib0clear(&___nl__2);
#line 928
c_rt_lib0clear(&___nl__0);
#line 928
return NULL;
}

ImmT translator_priv0new_register(ImmT * ___ref___0) {
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 932
c_rt_lib0move(&___nl__1,___get_global_const(1069));
#line 932
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_hash(*___ref___0, ___nl__1));
#line 932
c_rt_lib0move(&___nl__2,___get_global_const(1065));
#line 932
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(___nl__1, ___nl__2));
#line 932
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 932
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 932
c_rt_lib0move(&___nl__4,___get_global_const(1065));
#line 932
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__4, ___nl__2));
#line 932
c_rt_lib0move(&___nl__4,___get_global_const(1069));
#line 932
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__1));
#line 932
c_rt_lib0clear(&___nl__4);
#line 932
c_rt_lib0clear(&___nl__1);
#line 932
c_rt_lib0clear(&___nl__2);
#line 932
c_rt_lib0clear(&___nl__3);
#line 933
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1072)));
#line 933
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(382)));
#line 933
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1069)));
#line 933
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1065)));
#line 933
c_rt_lib0move(&___nl__1, c_rt_lib0lt(___nl__1, ___nl__2));
#line 933
c_rt_lib0clear(&___nl__2);
#line 933
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 933
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 933
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1069)));
#line 933
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(1065)));
#line 933
c_rt_lib0move(&___nl__3,___get_global_const(1072));
#line 933
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 933
c_rt_lib0copy(&___nl__4, ___nl__2);
#line 933
c_rt_lib0hash_set_value_dec(&___nl__3, ___get_global_const(382), ___nl__4);
#line 933
c_rt_lib0move(&___nl__5,___get_global_const(1072));
#line 933
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 933
c_rt_lib0clear(&___nl__5);
#line 933
c_rt_lib0clear(&___nl__2);
#line 933
c_rt_lib0clear(&___nl__3);
#line 933
c_rt_lib0clear(&___nl__4);
#line 933
goto label_2;
#line 933
label_2:
#line 933
c_rt_lib0clear(&___nl__1);
#line 934
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1069)));
#line 934
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(1065)));
#line 934
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 934
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 934
c_rt_lib0clear(&___nl__2);
#line 934
return ___nl__1;
#line 934
c_rt_lib0clear(&___nl__1);
#line 934
return NULL;
}

ImmT translator_priv0save_registers(ImmT * ___ref___0) {
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 938
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1069)));
#line 938
return ___nl__1;
#line 938
c_rt_lib0clear(&___nl__1);
#line 938
return NULL;
}

ImmT translator_priv0undef_reg(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 942
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(200), ___nl__0));
#line 942
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__2));
#line 942
c_rt_lib0clear(&___nl__2);
#line 942
c_rt_lib0clear(&___nl__0);
#line 942
return NULL;
}

ImmT translator_priv0restore_registers(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 946
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(1065)));
#line 946
label_2:
#line 946
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(1069)));
#line 946
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1065)));
#line 946
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 946
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 946
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 947
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(nlasm0reg_t0ptr, ___get_global_const(195), ___get_global_const(876)));
#line 947
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 947
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__2));
#line 947
c_rt_lib0clear(&___nl__5);
#line 947
c_rt_lib0delete(translator_priv0undef_reg(___nl__4, ___ref___1));
#line 947
c_rt_lib0clear(&___nl__4);
#line 947
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 947
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 947
c_rt_lib0clear(&___nl__4);
#line 948
goto label_2;
#line 948
label_1:
#line 948
c_rt_lib0clear(&___nl__2);
#line 948
c_rt_lib0clear(&___nl__3);
#line 949
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 949
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(1069), ___nl__2);
#line 949
c_rt_lib0clear(&___nl__2);
#line 949
c_rt_lib0clear(&___nl__0);
#line 949
return NULL;
}

ImmT translator_priv0print_sim_label(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
translator_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 953
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(234), ___nl__0));
#line 953
c_rt_lib0delete(translator_priv0print(___ref___1, ___nl__2));
#line 953
c_rt_lib0clear(&___nl__2);
#line 953
c_rt_lib0clear(&___nl__0);
#line 953
return NULL;
}

ImmT translator_priv0get_sim_label(ImmT * ___ref___0) {
translator_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 957
c_rt_lib0move(&___nl__1,___get_global_const(1071));
#line 957
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_hash(*___ref___0, ___nl__1));
#line 957
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 957
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__2));
#line 957
c_rt_lib0move(&___nl__3,___get_global_const(1071));
#line 957
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__1));
#line 957
c_rt_lib0clear(&___nl__3);
#line 957
c_rt_lib0clear(&___nl__1);
#line 957
c_rt_lib0clear(&___nl__2);
#line 958
c_rt_lib0move(&___nl__1,___get_global_const(1088));
#line 958
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(1071)));
#line 958
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 958
c_rt_lib0clear(&___nl__2);
#line 958
return ___nl__1;
#line 958
c_rt_lib0clear(&___nl__1);
#line 958
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
