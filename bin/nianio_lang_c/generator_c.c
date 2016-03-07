
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "generator_c.h"
#include "ptd.h"
#include "nlasm.h"
#include "string.h"
#include "array.h"
#include "hash.h"
#include "ov.h"
#include "singleton.h"
#include "nl.h"
#include "boolean_t.h"
#include "string_utils.h"
#line 1 "generator_c.nl"

static ImmT *__const__f = NULL;
void generator_c_priv0__const__init();
ImmT generator_c_priv0__const__sim(int __nr);
ImmT generator_c_priv0__const__sing(int __nr);

ImmT generator_c_priv0get_bin_ops();
ImmT generator_c_priv0get_bin_ops_mod();
ImmT generator_c_priv0get_unary_ops();
ImmT generator_c_priv0gen_unary_ops();
ImmT generator_c_priv0gen_bin_ops();
ImmT generator_c_priv0gen_bin_ops_mod();
ImmT generator_c_priv0print(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0print_to_header(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0println_to_header(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0arg_t();
ImmT generator_c_priv0println(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_reg(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_reg_ref(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_string(ImmT ___nl__0);
ImmT generator_c_priv0generate_global_const_files(ImmT * ___ref___0);
ImmT generator_c_priv0get_include(ImmT ___nl__0);
ImmT generator_c_priv0get_cr();
ImmT generator_c_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_c_priv0get_function_header(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_c_priv0get_const(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0insert_const_to_modules_hash(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0get_global_const(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0get_const_sim(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_const_singleton(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_func_ptr_header(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_c_priv0print_mod(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0print_init_const(ImmT * ___ref___0);
ImmT generator_c_priv0print_function_block(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0is_singleton_use_function(ImmT ___nl__0);
ImmT generator_c_priv0move_args_to_register(ImmT * ___ref___0);
ImmT generator_c_priv0move_register_to_ref_args(ImmT * ___ref___0);
ImmT generator_c_priv0get_fun_lib(ImmT ___nl__0,ImmT ___nl__1);
ImmT generator_c_priv0get_module_name(ImmT ___nl__0);
ImmT generator_c_priv0get_fun_name(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0get_lib_fun(ImmT ___nl__0);
ImmT generator_c_priv0generate_imm(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0get_assign(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT generator_c_priv0generate_call(ImmT * ___ref___0,ImmT ___nl__1);
ImmT generator_c_priv0create_sim(ImmT ___nl__0);
ImmT generator_c_priv0create_sim_to_memory(ImmT ___nl__0,ImmT ___nl__1);


ImmT generator_c_priv0get_bin_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(0);}
ImmT generator_c_priv0get_bin_ops0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 18
c_rt_lib0move(&___nl__1, generator_c_priv0gen_bin_ops());
#line 18
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 18
c_rt_lib0clear(&___nl__1);
#line 18
return ___nl__0;
#line 18
c_rt_lib0clear(&___nl__0);
#line 18
return NULL;
}

ImmT generator_c_priv0get_bin_ops_mod(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(1);}
ImmT generator_c_priv0get_bin_ops_mod0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 22
c_rt_lib0move(&___nl__1, generator_c_priv0gen_bin_ops_mod());
#line 22
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
return ___nl__0;
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
return NULL;
}

ImmT generator_c_priv0get_unary_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(2);}
ImmT generator_c_priv0get_unary_ops0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 26
c_rt_lib0move(&___nl__1, generator_c_priv0gen_unary_ops());
#line 26
c_rt_lib0move(&___nl__0, singleton0sigleton_do_not_use_without_approval(___nl__1));
#line 26
c_rt_lib0clear(&___nl__1);
#line 26
return ___nl__0;
#line 26
c_rt_lib0clear(&___nl__0);
#line 26
return NULL;
}

ImmT generator_c_priv0gen_unary_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(3);}
ImmT generator_c_priv0gen_unary_ops0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 30
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 31
c_rt_lib0move(&___nl__1,___get_global_const(247));
#line 31
c_rt_lib0move(&___nl__2,___get_global_const(248));
#line 31
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 31
c_rt_lib0clear(&___nl__2);
#line 31
c_rt_lib0clear(&___nl__1);
#line 32
c_rt_lib0move(&___nl__1,___get_global_const(249));
#line 32
c_rt_lib0move(&___nl__2,___get_global_const(250));
#line 32
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 32
c_rt_lib0clear(&___nl__2);
#line 32
c_rt_lib0clear(&___nl__1);
#line 33
c_rt_lib0move(&___nl__1,___get_global_const(251));
#line 33
c_rt_lib0move(&___nl__2,___get_global_const(252));
#line 33
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 33
c_rt_lib0clear(&___nl__2);
#line 33
c_rt_lib0clear(&___nl__1);
#line 34
return ___nl__0;
#line 34
c_rt_lib0clear(&___nl__0);
#line 34
return NULL;
}

ImmT generator_c_priv0gen_bin_ops(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(4);}
ImmT generator_c_priv0gen_bin_ops0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 38
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 39
c_rt_lib0move(&___nl__1,___get_global_const(253));
#line 39
c_rt_lib0move(&___nl__2,___get_global_const(253));
#line 39
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0clear(&___nl__1);
#line 40
c_rt_lib0move(&___nl__1,___get_global_const(254));
#line 40
c_rt_lib0move(&___nl__2,___get_global_const(254));
#line 40
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 40
c_rt_lib0clear(&___nl__2);
#line 40
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0move(&___nl__1,___get_global_const(251));
#line 41
c_rt_lib0move(&___nl__2,___get_global_const(255));
#line 41
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
c_rt_lib0clear(&___nl__1);
#line 42
c_rt_lib0move(&___nl__1,___get_global_const(249));
#line 42
c_rt_lib0move(&___nl__2,___get_global_const(256));
#line 42
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 42
c_rt_lib0clear(&___nl__2);
#line 42
c_rt_lib0clear(&___nl__1);
#line 43
c_rt_lib0move(&___nl__1,___get_global_const(257));
#line 43
c_rt_lib0move(&___nl__2,___get_global_const(258));
#line 43
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0clear(&___nl__1);
#line 44
c_rt_lib0move(&___nl__1,___get_global_const(81));
#line 44
c_rt_lib0move(&___nl__2,___get_global_const(259));
#line 44
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0move(&___nl__1,___get_global_const(260));
#line 45
c_rt_lib0move(&___nl__2,___get_global_const(261));
#line 45
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__1);
#line 46
c_rt_lib0move(&___nl__1,___get_global_const(262));
#line 46
c_rt_lib0move(&___nl__2,___get_global_const(263));
#line 46
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 46
c_rt_lib0clear(&___nl__2);
#line 46
c_rt_lib0clear(&___nl__1);
#line 47
c_rt_lib0move(&___nl__1,___get_global_const(264));
#line 47
c_rt_lib0move(&___nl__2,___get_global_const(265));
#line 47
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__1);
#line 48
c_rt_lib0move(&___nl__1,___get_global_const(266));
#line 48
c_rt_lib0move(&___nl__2,___get_global_const(267));
#line 48
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0clear(&___nl__1);
#line 49
c_rt_lib0move(&___nl__1,___get_global_const(268));
#line 49
c_rt_lib0move(&___nl__2,___get_global_const(269));
#line 49
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__1);
#line 50
c_rt_lib0move(&___nl__1,___get_global_const(270));
#line 50
c_rt_lib0move(&___nl__2,___get_global_const(271));
#line 50
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 50
c_rt_lib0clear(&___nl__2);
#line 50
c_rt_lib0clear(&___nl__1);
#line 51
c_rt_lib0move(&___nl__1,___get_global_const(272));
#line 51
c_rt_lib0move(&___nl__2,___get_global_const(273));
#line 51
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__1);
#line 52
c_rt_lib0move(&___nl__1,___get_global_const(83));
#line 52
c_rt_lib0move(&___nl__2,___get_global_const(274));
#line 52
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__1);
#line 53
return ___nl__0;
#line 53
c_rt_lib0clear(&___nl__0);
#line 53
return NULL;
}

ImmT generator_c_priv0gen_bin_ops_mod(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(5);}
ImmT generator_c_priv0gen_bin_ops_mod0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 57
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 58
c_rt_lib0move(&___nl__1,___get_global_const(251));
#line 58
c_rt_lib0move(&___nl__2,___get_global_const(275));
#line 58
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__1);
#line 59
c_rt_lib0move(&___nl__1,___get_global_const(249));
#line 59
c_rt_lib0move(&___nl__2,___get_global_const(276));
#line 59
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__1);
#line 60
c_rt_lib0move(&___nl__1,___get_global_const(257));
#line 60
c_rt_lib0move(&___nl__2,___get_global_const(277));
#line 60
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
c_rt_lib0clear(&___nl__1);
#line 61
c_rt_lib0move(&___nl__1,___get_global_const(81));
#line 61
c_rt_lib0move(&___nl__2,___get_global_const(278));
#line 61
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 61
c_rt_lib0clear(&___nl__2);
#line 61
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0move(&___nl__1,___get_global_const(260));
#line 62
c_rt_lib0move(&___nl__2,___get_global_const(279));
#line 62
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__1);
#line 63
c_rt_lib0move(&___nl__1,___get_global_const(83));
#line 63
c_rt_lib0move(&___nl__2,___get_global_const(280));
#line 63
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 63
c_rt_lib0clear(&___nl__2);
#line 63
c_rt_lib0clear(&___nl__1);
#line 64
return ___nl__0;
#line 64
c_rt_lib0clear(&___nl__0);
#line 64
return NULL;
}

ImmT generator_c0const_dict0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0const_dict");
return generator_c0const_dict();}
ImmT generator_c0const_dict(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(6);}
ImmT generator_c0const_dict0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 68
c_rt_lib0move(&___nl__3, ptd0sim());
#line 68
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
c_rt_lib0move(&___nl__4, ptd0sim());
#line 68
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 68
c_rt_lib0clear(&___nl__4);
#line 68
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(281), ___nl__2, ___get_global_const(282), ___nl__3));
#line 68
c_rt_lib0clear(&___nl__2);
#line 68
c_rt_lib0clear(&___nl__3);
#line 68
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 68
c_rt_lib0clear(&___nl__1);
#line 68
return ___nl__0;
#line 68
c_rt_lib0clear(&___nl__0);
#line 68
return NULL;
}

ImmT generator_c0fun_args_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0fun_args_t");
return generator_c0fun_args_t();}
ImmT generator_c0fun_args_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(7);}
ImmT generator_c0fun_args_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 72
c_rt_lib0move(&___nl__3, ptd0none());
#line 72
c_rt_lib0move(&___nl__4, ptd0none());
#line 72
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(238), ___nl__3, ___get_global_const(5), ___nl__4));
#line 72
c_rt_lib0clear(&___nl__3);
#line 72
c_rt_lib0clear(&___nl__4);
#line 72
c_rt_lib0move(&___nl__1, ptd0var(___nl__2));
#line 72
c_rt_lib0clear(&___nl__2);
#line 72
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 72
c_rt_lib0clear(&___nl__1);
#line 72
return ___nl__0;
#line 72
c_rt_lib0clear(&___nl__0);
#line 72
return NULL;
}

ImmT generator_c0const_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0const_t");
return generator_c0const_t();}
ImmT generator_c0const_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(8);}
ImmT generator_c0const_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 76
c_rt_lib0move(&___nl__3, ptd0sim());
#line 76
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 76
c_rt_lib0clear(&___nl__3);
#line 76
c_rt_lib0move(&___nl__4, ptd0sim());
#line 76
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 76
c_rt_lib0clear(&___nl__4);
#line 76
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(281), ___nl__2, ___get_global_const(282), ___nl__3));
#line 76
c_rt_lib0clear(&___nl__2);
#line 76
c_rt_lib0clear(&___nl__3);
#line 76
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 76
c_rt_lib0clear(&___nl__1);
#line 76
return ___nl__0;
#line 76
c_rt_lib0clear(&___nl__0);
#line 76
return NULL;
}

ImmT generator_c0global_const_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0global_const_t");
return generator_c0global_const_t();}
ImmT generator_c0global_const_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(9);}
ImmT generator_c0global_const_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 80
c_rt_lib0move(&___nl__5, ptd0sim());
#line 80
c_rt_lib0move(&___nl__6, ptd0sim());
#line 80
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(283), ___nl__5, ___get_global_const(284), ___nl__6));
#line 80
c_rt_lib0clear(&___nl__5);
#line 80
c_rt_lib0clear(&___nl__6);
#line 80
c_rt_lib0move(&___nl__3, ptd0rec(___nl__4));
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 80
c_rt_lib0clear(&___nl__3);
#line 80
c_rt_lib0move(&___nl__4, ptd0sim());
#line 80
c_rt_lib0move(&___nl__3, ptd0hash(___nl__4));
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
c_rt_lib0move(&___nl__5, ptd0sim());
#line 80
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 80
c_rt_lib0clear(&___nl__5);
#line 80
c_rt_lib0move(&___nl__7, ptd0sim());
#line 80
c_rt_lib0move(&___nl__6, ptd0hash(___nl__7));
#line 80
c_rt_lib0clear(&___nl__7);
#line 80
c_rt_lib0move(&___nl__5, ptd0hash(___nl__6));
#line 80
c_rt_lib0clear(&___nl__6);
#line 80
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(281), ___nl__2, ___get_global_const(282), ___nl__3, ___get_global_const(285), ___nl__4, ___get_global_const(286), ___nl__5));
#line 80
c_rt_lib0clear(&___nl__2);
#line 80
c_rt_lib0clear(&___nl__3);
#line 80
c_rt_lib0clear(&___nl__4);
#line 80
c_rt_lib0clear(&___nl__5);
#line 80
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 80
c_rt_lib0clear(&___nl__1);
#line 80
return ___nl__0;
#line 80
c_rt_lib0clear(&___nl__0);
#line 80
return NULL;
}

ImmT generator_c0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0state_t");
return generator_c0state_t();}
ImmT generator_c0state_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(10);}
ImmT generator_c0state_t0cal() {
generator_c_priv0__const__init();
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
#line 89
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(generator_c0global_const_t0ptr, ___get_global_const(287), ___get_global_const(288)));
#line 89
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 89
c_rt_lib0move(&___nl__3, ptd0sim());
#line 89
c_rt_lib0move(&___nl__4, ptd0sim());
#line 89
c_rt_lib0move(&___nl__5, ptd0sim());
#line 89
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(generator_c0fun_args_t0ptr, ___get_global_const(287), ___get_global_const(289)));
#line 89
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 89
c_rt_lib0move(&___nl__9, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_const(287), ___get_global_const(290)));
#line 89
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__9));
#line 89
c_rt_lib0move(&___nl__10, c_rt_lib0func_new(generator_c0const_t0ptr, ___get_global_const(287), ___get_global_const(290)));
#line 89
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__10));
#line 89
c_rt_lib0move(&___nl__11, ptd0sim());
#line 89
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(3, ___get_global_const(291), ___nl__9, ___get_global_const(292), ___nl__10, ___get_global_const(293), ___nl__11));
#line 89
c_rt_lib0clear(&___nl__9);
#line 89
c_rt_lib0clear(&___nl__10);
#line 89
c_rt_lib0clear(&___nl__11);
#line 89
c_rt_lib0move(&___nl__7, ptd0rec(___nl__8));
#line 89
c_rt_lib0clear(&___nl__8);
#line 89
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(6, ___get_global_const(135), ___nl__2, ___get_global_const(294), ___nl__3, ___get_global_const(295), ___nl__4, ___get_global_const(296), ___nl__5, ___get_global_const(297), ___nl__6, ___get_global_const(298), ___nl__7));
#line 89
c_rt_lib0clear(&___nl__2);
#line 89
c_rt_lib0clear(&___nl__3);
#line 89
c_rt_lib0clear(&___nl__4);
#line 89
c_rt_lib0clear(&___nl__5);
#line 89
c_rt_lib0clear(&___nl__6);
#line 89
c_rt_lib0clear(&___nl__7);
#line 89
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 89
c_rt_lib0clear(&___nl__1);
#line 89
return ___nl__0;
#line 89
c_rt_lib0clear(&___nl__0);
#line 89
return NULL;
}

ImmT generator_c0get_empty_state0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0get_empty_state");
return generator_c0get_empty_state();}
ImmT generator_c0get_empty_state(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(11);}
ImmT generator_c0get_empty_state0cal() {
generator_c_priv0__const__init();
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
#line 104
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 104
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 104
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 104
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(4, ___get_global_const(281), ___nl__2, ___get_global_const(282), ___nl__3, ___get_global_const(285), ___nl__4, ___get_global_const(286), ___nl__5));
#line 104
c_rt_lib0clear(&___nl__2);
#line 104
c_rt_lib0clear(&___nl__3);
#line 104
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0clear(&___nl__5);
#line 104
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 104
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 104
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 104
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 104
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 104
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 104
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(281), ___nl__8, ___get_global_const(282), ___nl__9));
#line 104
c_rt_lib0clear(&___nl__8);
#line 104
c_rt_lib0clear(&___nl__9);
#line 104
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 104
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 104
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(281), ___nl__9, ___get_global_const(282), ___nl__10));
#line 104
c_rt_lib0clear(&___nl__9);
#line 104
c_rt_lib0clear(&___nl__10);
#line 104
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(293), ___nl__6, ___get_global_const(291), ___nl__7, ___get_global_const(292), ___nl__8));
#line 104
c_rt_lib0clear(&___nl__6);
#line 104
c_rt_lib0clear(&___nl__7);
#line 104
c_rt_lib0clear(&___nl__8);
#line 104
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 104
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(6, ___get_global_const(135), ___nl__1, ___get_global_const(295), ___nl__2, ___get_global_const(294), ___nl__3, ___get_global_const(297), ___nl__4, ___get_global_const(298), ___nl__5, ___get_global_const(296), ___nl__6));
#line 104
c_rt_lib0clear(&___nl__1);
#line 104
c_rt_lib0clear(&___nl__2);
#line 104
c_rt_lib0clear(&___nl__3);
#line 104
c_rt_lib0clear(&___nl__4);
#line 104
c_rt_lib0clear(&___nl__5);
#line 104
c_rt_lib0clear(&___nl__6);
#line 104
return ___nl__0;
#line 104
c_rt_lib0clear(&___nl__0);
#line 104
return NULL;
}

ImmT generator_c_priv0print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 115
c_rt_lib0move(&___nl__2,___get_global_const(295));
#line 115
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 115
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 115
c_rt_lib0move(&___nl__3,___get_global_const(295));
#line 115
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 115
c_rt_lib0clear(&___nl__3);
#line 115
c_rt_lib0clear(&___nl__2);
#line 115
c_rt_lib0clear(&___nl__1);
#line 115
return NULL;
}

ImmT generator_c_priv0print_to_header(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 119
c_rt_lib0move(&___nl__2,___get_global_const(294));
#line 119
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 119
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 119
c_rt_lib0move(&___nl__3,___get_global_const(294));
#line 119
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 119
c_rt_lib0clear(&___nl__3);
#line 119
c_rt_lib0clear(&___nl__2);
#line 119
c_rt_lib0clear(&___nl__1);
#line 119
return NULL;
}

ImmT generator_c_priv0println_to_header(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 123
c_rt_lib0move(&___nl__2, string0lf());
#line 123
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 123
c_rt_lib0move(&___nl__3,___get_global_const(294));
#line 123
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 123
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 123
c_rt_lib0move(&___nl__4,___get_global_const(294));
#line 123
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 123
c_rt_lib0clear(&___nl__4);
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0clear(&___nl__3);
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
return NULL;
}

ImmT generator_c_priv0arg_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(12);}
ImmT generator_c_priv0arg_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 127
c_rt_lib0move(&___nl__0,___get_global_const(299));
#line 127
return ___nl__0;
#line 127
c_rt_lib0clear(&___nl__0);
#line 127
return NULL;
}

ImmT generator_c_priv0println(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 131
c_rt_lib0move(&___nl__2,___get_global_const(295));
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 131
c_rt_lib0move(&___nl__3,___get_global_const(295));
#line 131
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 131
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0clear(&___nl__2);
#line 132
c_rt_lib0move(&___nl__2, string0lf());
#line 132
c_rt_lib0move(&___nl__3,___get_global_const(295));
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 132
c_rt_lib0move(&___nl__4,___get_global_const(295));
#line 132
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 132
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0clear(&___nl__2);
#line 132
c_rt_lib0clear(&___nl__3);
#line 132
c_rt_lib0clear(&___nl__1);
#line 132
return NULL;
}

ImmT generator_c_priv0get_reg(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 136
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(297)));
#line 137
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__1));
#line 137
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 137
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__1));
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(5)));
#line 137
label_3:
#line 137
c_rt_lib0clear(&___nl__4);
#line 137
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 137
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 138
c_rt_lib0move(&___nl__4,___get_global_const(300));
#line 138
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 138
c_rt_lib0clear(&___nl__1);
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
c_rt_lib0clear(&___nl__3);
#line 138
return ___nl__4;
#line 138
c_rt_lib0clear(&___nl__4);
#line 139
goto label_2;
#line 139
label_2:
#line 139
c_rt_lib0clear(&___nl__3);
#line 140
c_rt_lib0move(&___nl__3,___get_global_const(301));
#line 140
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
return ___nl__3;
#line 140
c_rt_lib0clear(&___nl__3);
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
c_rt_lib0clear(&___nl__1);
#line 140
return NULL;
}

ImmT generator_c_priv0get_reg_ref(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 144
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(297)));
#line 145
c_rt_lib0move(&___nl__3, array0len(___nl__2));
#line 145
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__1));
#line 145
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 145
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 145
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__1));
#line 145
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(5)));
#line 145
label_3:
#line 145
c_rt_lib0clear(&___nl__4);
#line 145
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 145
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 146
c_rt_lib0move(&___nl__4,___get_global_const(302));
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 146
c_rt_lib0clear(&___nl__1);
#line 146
c_rt_lib0clear(&___nl__2);
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
return ___nl__4;
#line 146
c_rt_lib0clear(&___nl__4);
#line 147
goto label_2;
#line 147
label_2:
#line 147
c_rt_lib0clear(&___nl__3);
#line 148
c_rt_lib0move(&___nl__3,___get_global_const(303));
#line 148
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 148
c_rt_lib0clear(&___nl__1);
#line 148
c_rt_lib0clear(&___nl__2);
#line 148
return ___nl__3;
#line 148
c_rt_lib0clear(&___nl__3);
#line 148
c_rt_lib0clear(&___nl__2);
#line 148
c_rt_lib0clear(&___nl__1);
#line 148
return NULL;
}

ImmT generator_c_priv0get_string(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 152
c_rt_lib0move(&___nl__1,___get_global_const(155));
#line 152
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 152
c_rt_lib0move(&___nl__2,___get_global_const(155));
#line 152
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 152
c_rt_lib0clear(&___nl__2);
#line 152
c_rt_lib0clear(&___nl__0);
#line 152
return ___nl__1;
#line 152
c_rt_lib0clear(&___nl__1);
#line 152
c_rt_lib0clear(&___nl__0);
#line 152
return NULL;
}

ImmT generator_c0module_out_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0module_out_t");
return generator_c0module_out_t();}
ImmT generator_c0module_out_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(13);}
ImmT generator_c0module_out_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 156
c_rt_lib0move(&___nl__2, ptd0sim());
#line 156
c_rt_lib0move(&___nl__3, ptd0sim());
#line 156
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(32), ___nl__2, ___get_global_const(37), ___nl__3));
#line 156
c_rt_lib0clear(&___nl__2);
#line 156
c_rt_lib0clear(&___nl__3);
#line 156
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 156
c_rt_lib0clear(&___nl__1);
#line 156
return ___nl__0;
#line 156
c_rt_lib0clear(&___nl__0);
#line 156
return NULL;
}

ImmT generator_c0out_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "generator_c0out_t");
return generator_c0out_t();}
ImmT generator_c0out_t(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(14);}
ImmT generator_c0out_t0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 160
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_const(287), ___get_global_const(304)));
#line 160
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 160
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 160
c_rt_lib0clear(&___nl__3);
#line 160
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(generator_c0module_out_t0ptr, ___get_global_const(287), ___get_global_const(304)));
#line 160
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 160
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(133), ___nl__2, ___get_global_const(135), ___nl__3));
#line 160
c_rt_lib0clear(&___nl__2);
#line 160
c_rt_lib0clear(&___nl__3);
#line 160
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 160
c_rt_lib0clear(&___nl__1);
#line 160
return ___nl__0;
#line 160
c_rt_lib0clear(&___nl__0);
#line 160
return NULL;
}

ImmT generator_c0generate0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "generator_c0generate");
return generator_c0generate(_tab[0], &_tab[1]);}
ImmT generator_c0generate(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
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
#line 164
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 165
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 166
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__0));
#line 166
label_3:
#line 166
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 166
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 166
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 166
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__0, ___nl__4));
#line 167
c_rt_lib0delete(array0push(&___nl__3, ___nl__4));
#line 168
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 168
goto label_3;
#line 168
label_1:
#line 168
c_rt_lib0clear(&___nl__4);
#line 168
c_rt_lib0clear(&___nl__5);
#line 168
c_rt_lib0clear(&___nl__6);
#line 169
c_rt_lib0delete(array0sort(&___nl__3));
#line 170
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 170
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 170
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 170
label_6:
#line 170
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 170
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 170
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 171
c_rt_lib0move(&___nl__9, hash0get_value(___nl__0, ___nl__4));
#line 172
c_rt_lib0delete(generator_c0clear_module_from_state(___ref___1, ___nl__4));
#line 173
c_rt_lib0move(&___nl__10,___get_global_const(135));
#line 173
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(*___ref___1, ___nl__10));
#line 173
c_rt_lib0move(&___nl__11,___get_global_const(286));
#line 173
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 173
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(0));
#line 173
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__4, ___nl__12));
#line 173
c_rt_lib0clear(&___nl__12);
#line 173
c_rt_lib0move(&___nl__12,___get_global_const(286));
#line 173
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__12, ___nl__11));
#line 173
c_rt_lib0move(&___nl__12,___get_global_const(135));
#line 173
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__12, ___nl__10));
#line 173
c_rt_lib0clear(&___nl__12);
#line 173
c_rt_lib0clear(&___nl__10);
#line 173
c_rt_lib0clear(&___nl__11);
#line 174
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 174
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 174
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(295), ___nl__11);
#line 174
c_rt_lib0clear(&___nl__10);
#line 174
c_rt_lib0clear(&___nl__11);
#line 175
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 175
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 175
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(294), ___nl__11);
#line 175
c_rt_lib0clear(&___nl__10);
#line 175
c_rt_lib0clear(&___nl__11);
#line 176
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(0));
#line 176
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 176
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(297), ___nl__11);
#line 176
c_rt_lib0clear(&___nl__10);
#line 176
c_rt_lib0clear(&___nl__11);
#line 177
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 177
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(0));
#line 177
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(0));
#line 177
c_rt_lib0move(&___nl__12, c_rt_lib0hash_mk(2, ___get_global_const(281), ___nl__13, ___get_global_const(282), ___nl__14));
#line 177
c_rt_lib0clear(&___nl__13);
#line 177
c_rt_lib0clear(&___nl__14);
#line 177
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 177
c_rt_lib0move(&___nl__15, c_rt_lib0hash_mk(0));
#line 177
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(2, ___get_global_const(281), ___nl__14, ___get_global_const(282), ___nl__15));
#line 177
c_rt_lib0clear(&___nl__14);
#line 177
c_rt_lib0clear(&___nl__15);
#line 177
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(3, ___get_global_const(293), ___nl__11, ___get_global_const(291), ___nl__12, ___get_global_const(292), ___nl__13));
#line 177
c_rt_lib0clear(&___nl__11);
#line 177
c_rt_lib0clear(&___nl__12);
#line 177
c_rt_lib0clear(&___nl__13);
#line 177
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 177
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(298), ___nl__11);
#line 177
c_rt_lib0clear(&___nl__10);
#line 177
c_rt_lib0clear(&___nl__11);
#line 178
c_rt_lib0copy(&___nl__10, ___nl__4);
#line 178
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(296), ___nl__10);
#line 178
c_rt_lib0clear(&___nl__10);
#line 179
c_rt_lib0delete(generator_c_priv0print_mod(___ref___1, ___nl__9));
#line 180
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(295)));
#line 180
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(294)));
#line 180
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(32), ___nl__11, ___get_global_const(37), ___nl__12));
#line 180
c_rt_lib0clear(&___nl__11);
#line 180
c_rt_lib0clear(&___nl__12);
#line 180
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__4, ___nl__10));
#line 180
c_rt_lib0clear(&___nl__10);
#line 180
c_rt_lib0clear(&___nl__9);
#line 181
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 181
goto label_6;
#line 181
label_4:
#line 181
c_rt_lib0clear(&___nl__4);
#line 181
c_rt_lib0clear(&___nl__5);
#line 181
c_rt_lib0clear(&___nl__6);
#line 181
c_rt_lib0clear(&___nl__7);
#line 181
c_rt_lib0clear(&___nl__8);
#line 182
c_rt_lib0move(&___nl__5, generator_c_priv0generate_global_const_files(___ref___1));
#line 182
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(133), ___nl__2, ___get_global_const(135), ___nl__5));
#line 182
c_rt_lib0clear(&___nl__5);
#line 182
c_rt_lib0clear(&___nl__0);
#line 182
c_rt_lib0clear(&___nl__2);
#line 182
c_rt_lib0clear(&___nl__3);
#line 182
return ___nl__4;
#line 182
c_rt_lib0clear(&___nl__4);
#line 182
c_rt_lib0clear(&___nl__2);
#line 182
c_rt_lib0clear(&___nl__3);
#line 182
c_rt_lib0clear(&___nl__0);
#line 182
return NULL;
}

ImmT generator_c_priv0generate_global_const_files(ImmT * ___ref___0) {
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 186
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 186
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 186
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(295), ___nl__2);
#line 186
c_rt_lib0clear(&___nl__1);
#line 186
c_rt_lib0clear(&___nl__2);
#line 187
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 187
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 187
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(294), ___nl__2);
#line 187
c_rt_lib0clear(&___nl__1);
#line 187
c_rt_lib0clear(&___nl__2);
#line 188
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 188
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 188
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(297), ___nl__2);
#line 188
c_rt_lib0clear(&___nl__1);
#line 188
c_rt_lib0clear(&___nl__2);
#line 189
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 189
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 189
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 189
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(281), ___nl__4, ___get_global_const(282), ___nl__5));
#line 189
c_rt_lib0clear(&___nl__4);
#line 189
c_rt_lib0clear(&___nl__5);
#line 189
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 189
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 189
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(2, ___get_global_const(281), ___nl__5, ___get_global_const(282), ___nl__6));
#line 189
c_rt_lib0clear(&___nl__5);
#line 189
c_rt_lib0clear(&___nl__6);
#line 189
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(293), ___nl__2, ___get_global_const(291), ___nl__3, ___get_global_const(292), ___nl__4));
#line 189
c_rt_lib0clear(&___nl__2);
#line 189
c_rt_lib0clear(&___nl__3);
#line 189
c_rt_lib0clear(&___nl__4);
#line 189
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 189
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(298), ___nl__2);
#line 189
c_rt_lib0clear(&___nl__1);
#line 189
c_rt_lib0clear(&___nl__2);
#line 190
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 190
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 190
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(296), ___nl__2);
#line 190
c_rt_lib0clear(&___nl__1);
#line 190
c_rt_lib0clear(&___nl__2);
#line 191
c_rt_lib0move(&___nl__1, generator_c_priv0get_cr());
#line 191
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__1));
#line 191
c_rt_lib0clear(&___nl__1);
#line 192
c_rt_lib0move(&___nl__1,___get_global_const(305));
#line 192
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__1));
#line 192
c_rt_lib0clear(&___nl__1);
#line 193
c_rt_lib0move(&___nl__2,___get_global_const(306));
#line 193
c_rt_lib0move(&___nl__1, generator_c_priv0get_include(___nl__2));
#line 193
c_rt_lib0clear(&___nl__2);
#line 193
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__1));
#line 193
c_rt_lib0clear(&___nl__1);
#line 194
c_rt_lib0move(&___nl__1, generator_c_priv0get_cr());
#line 194
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__1));
#line 194
c_rt_lib0clear(&___nl__1);
#line 195
c_rt_lib0move(&___nl__2,___get_global_const(307));
#line 195
c_rt_lib0move(&___nl__1, generator_c_priv0get_include(___nl__2));
#line 195
c_rt_lib0clear(&___nl__2);
#line 195
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__1));
#line 195
c_rt_lib0clear(&___nl__1);
#line 196
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(135)));
#line 196
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(281)));
#line 197
c_rt_lib0move(&___nl__2, array0len(___nl__1));
#line 198
c_rt_lib0move(&___nl__3,___get_global_const(308));
#line 198
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__3));
#line 198
c_rt_lib0clear(&___nl__3);
#line 199
c_rt_lib0move(&___nl__3, generator_c_priv0arg_t());
#line 199
c_rt_lib0move(&___nl__4,___get_global_const(309));
#line 199
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 199
c_rt_lib0clear(&___nl__4);
#line 199
c_rt_lib0delete(generator_c_priv0println_to_header(___ref___0, ___nl__3));
#line 199
c_rt_lib0clear(&___nl__3);
#line 200
c_rt_lib0move(&___nl__3,___get_global_const(310));
#line 200
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 200
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 200
c_rt_lib0clear(&___nl__4);
#line 200
c_rt_lib0move(&___nl__4,___get_global_const(311));
#line 200
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 200
c_rt_lib0clear(&___nl__4);
#line 200
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 200
c_rt_lib0clear(&___nl__3);
#line 204
c_rt_lib0move(&___nl__3,___get_global_const(312));
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 204
c_rt_lib0move(&___nl__4,___get_global_const(313));
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 204
c_rt_lib0clear(&___nl__4);
#line 204
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 204
c_rt_lib0clear(&___nl__3);
#line 210
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 210
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 210
label_3:
#line 210
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 210
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 211
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 211
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(283)));
#line 211
c_rt_lib0move(&___nl__8,___get_global_const(314));
#line 211
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__3));
#line 211
c_rt_lib0move(&___nl__6, generator_c_priv0create_sim_to_memory(___nl__7, ___nl__8));
#line 211
c_rt_lib0clear(&___nl__8);
#line 211
c_rt_lib0clear(&___nl__7);
#line 211
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 211
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 211
c_rt_lib0clear(&___nl__7);
#line 211
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__6));
#line 211
c_rt_lib0clear(&___nl__6);
#line 212
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 212
goto label_3;
#line 212
label_1:
#line 212
c_rt_lib0clear(&___nl__3);
#line 212
c_rt_lib0clear(&___nl__4);
#line 212
c_rt_lib0clear(&___nl__5);
#line 213
c_rt_lib0move(&___nl__3,___get_global_const(316));
#line 213
c_rt_lib0move(&___nl__5,___get_global_const(317));
#line 213
c_rt_lib0move(&___nl__4, generator_c_priv0get_lib_fun(___nl__5));
#line 213
c_rt_lib0clear(&___nl__5);
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 213
c_rt_lib0clear(&___nl__4);
#line 213
c_rt_lib0move(&___nl__4,___get_global_const(318));
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 213
c_rt_lib0clear(&___nl__4);
#line 213
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 213
c_rt_lib0clear(&___nl__4);
#line 213
c_rt_lib0move(&___nl__4,___get_global_const(319));
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 213
c_rt_lib0clear(&___nl__4);
#line 213
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 213
c_rt_lib0clear(&___nl__4);
#line 213
c_rt_lib0move(&___nl__4,___get_global_const(320));
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 213
c_rt_lib0clear(&___nl__4);
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 213
c_rt_lib0move(&___nl__4,___get_global_const(321));
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 213
c_rt_lib0clear(&___nl__4);
#line 213
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 213
c_rt_lib0clear(&___nl__3);
#line 217
c_rt_lib0move(&___nl__3, generator_c_priv0arg_t());
#line 217
c_rt_lib0move(&___nl__4,___get_global_const(322));
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0move(&___nl__4,___get_global_const(323));
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0move(&___nl__5,___get_global_const(324));
#line 217
c_rt_lib0move(&___nl__7,___get_global_const(325));
#line 217
c_rt_lib0move(&___nl__8,___get_global_const(326));
#line 217
c_rt_lib0move(&___nl__9, generator_c_priv0arg_t());
#line 217
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 217
c_rt_lib0clear(&___nl__9);
#line 217
c_rt_lib0move(&___nl__9,___get_global_const(327));
#line 217
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 217
c_rt_lib0clear(&___nl__9);
#line 217
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__8));
#line 217
c_rt_lib0clear(&___nl__7);
#line 217
c_rt_lib0clear(&___nl__8);
#line 217
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_lib(___nl__5, ___nl__6));
#line 217
c_rt_lib0clear(&___nl__6);
#line 217
c_rt_lib0clear(&___nl__5);
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0move(&___nl__4,___get_global_const(328));
#line 217
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 217
c_rt_lib0clear(&___nl__4);
#line 217
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__3));
#line 217
c_rt_lib0clear(&___nl__3);
#line 222
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(295)));
#line 222
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(294)));
#line 222
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(32), ___nl__4, ___get_global_const(37), ___nl__5));
#line 222
c_rt_lib0clear(&___nl__4);
#line 222
c_rt_lib0clear(&___nl__5);
#line 222
c_rt_lib0clear(&___nl__1);
#line 222
c_rt_lib0clear(&___nl__2);
#line 222
return ___nl__3;
#line 222
c_rt_lib0clear(&___nl__3);
#line 222
c_rt_lib0clear(&___nl__1);
#line 222
c_rt_lib0clear(&___nl__2);
#line 222
return NULL;
}

ImmT generator_c_priv0get_include(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 226
c_rt_lib0move(&___nl__1,___get_global_const(329));
#line 226
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__0));
#line 226
c_rt_lib0move(&___nl__2,___get_global_const(330));
#line 226
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 226
c_rt_lib0clear(&___nl__2);
#line 226
c_rt_lib0clear(&___nl__0);
#line 226
return ___nl__1;
#line 226
c_rt_lib0clear(&___nl__1);
#line 226
c_rt_lib0clear(&___nl__0);
#line 226
return NULL;
}

ImmT generator_c_priv0get_cr(){
generator_c_priv0__const__init();
return generator_c_priv0__const__sing(15);}
ImmT generator_c_priv0get_cr0cal() {
generator_c_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 230
c_rt_lib0move(&___nl__0,___get_global_const(331));
#line 230
return ___nl__0;
#line 230
c_rt_lib0clear(&___nl__0);
#line 230
return NULL;
}

ImmT generator_c_priv0get_function_name(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 239
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(332)));
#line 239
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(333)));
#line 239
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 241
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(334)));
#line 241
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 241
c_rt_lib0move(&___nl__4,___get_global_const(76));
#line 241
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 241
nl_die_arg(___nl__4);
#line 239
label_2:
#line 240
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 241
goto label_1;
#line 241
label_3:
#line 242
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 242
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 242
c_rt_lib0clear(&___nl__5);
#line 243
goto label_1;
#line 243
label_1:
#line 243
c_rt_lib0clear(&___nl__3);
#line 243
c_rt_lib0clear(&___nl__4);
#line 244
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 244
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__2, ___nl__4, ___nl__1));
#line 244
c_rt_lib0clear(&___nl__4);
#line 244
c_rt_lib0clear(&___nl__0);
#line 244
c_rt_lib0clear(&___nl__1);
#line 244
c_rt_lib0clear(&___nl__2);
#line 244
return ___nl__3;
#line 244
c_rt_lib0clear(&___nl__3);
#line 244
c_rt_lib0clear(&___nl__2);
#line 244
c_rt_lib0clear(&___nl__0);
#line 244
c_rt_lib0clear(&___nl__1);
#line 244
return NULL;
}

ImmT generator_c_priv0get_function_header(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 248
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 249
c_rt_lib0move(&___nl__3, generator_c_priv0get_function_name(___nl__0, ___nl__1));
#line 250
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 250
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 250
c_rt_lib0move(&___nl__5,___get_global_const(326));
#line 250
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 250
c_rt_lib0clear(&___nl__5);
#line 250
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 250
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 252
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(335)));
#line 252
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 252
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 252
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 252
label_3:
#line 252
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 252
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 252
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 253
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 253
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__11, ___nl__4));
#line 253
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 253
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 253
if(c_rt_lib0check_true_native(___nl__11)){ goto label_5;}
#line 253
c_rt_lib0move(&___nl__12,___get_global_const(177));
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__12));
#line 253
c_rt_lib0clear(&___nl__12);
#line 253
goto label_5;
#line 253
label_5:
#line 253
c_rt_lib0clear(&___nl__11);
#line 254
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(238)));
#line 254
if(c_rt_lib0check_true_native(___nl__11)){ goto label_7;}
#line 256
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__6, ___get_global_const(5)));
#line 256
if(c_rt_lib0check_true_native(___nl__11)){ goto label_8;}
#line 256
c_rt_lib0move(&___nl__11,___get_global_const(76));
#line 256
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__6));
#line 256
nl_die_arg(___nl__11);
#line 254
label_7:
#line 255
c_rt_lib0move(&___nl__12, generator_c_priv0arg_t());
#line 255
c_rt_lib0move(&___nl__13,___get_global_const(301));
#line 255
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 255
c_rt_lib0clear(&___nl__13);
#line 255
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__4));
#line 255
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__12));
#line 255
c_rt_lib0clear(&___nl__12);
#line 256
goto label_6;
#line 256
label_8:
#line 257
c_rt_lib0move(&___nl__12, generator_c_priv0arg_t());
#line 257
c_rt_lib0move(&___nl__13,___get_global_const(336));
#line 257
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 257
c_rt_lib0clear(&___nl__13);
#line 257
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__4));
#line 257
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__12));
#line 257
c_rt_lib0clear(&___nl__12);
#line 258
goto label_6;
#line 258
label_6:
#line 258
c_rt_lib0clear(&___nl__11);
#line 259
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 259
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__11));
#line 259
c_rt_lib0clear(&___nl__11);
#line 260
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 260
goto label_3;
#line 260
label_1:
#line 260
c_rt_lib0clear(&___nl__5);
#line 260
c_rt_lib0clear(&___nl__6);
#line 260
c_rt_lib0clear(&___nl__7);
#line 260
c_rt_lib0clear(&___nl__8);
#line 260
c_rt_lib0clear(&___nl__9);
#line 260
c_rt_lib0clear(&___nl__10);
#line 261
c_rt_lib0move(&___nl__5,___get_global_const(181));
#line 261
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__5));
#line 261
c_rt_lib0clear(&___nl__5);
#line 262
c_rt_lib0clear(&___nl__0);
#line 262
c_rt_lib0clear(&___nl__1);
#line 262
c_rt_lib0clear(&___nl__3);
#line 262
c_rt_lib0clear(&___nl__4);
#line 262
return ___nl__2;
#line 262
c_rt_lib0clear(&___nl__2);
#line 262
c_rt_lib0clear(&___nl__3);
#line 262
c_rt_lib0clear(&___nl__4);
#line 262
c_rt_lib0clear(&___nl__0);
#line 262
c_rt_lib0clear(&___nl__1);
#line 262
return NULL;
}

ImmT generator_c_priv0get_const(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 266
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 266
c_rt_lib0move(&___nl__2, c_rt_lib0unary_minus(___nl__2));
#line 267
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(282)));
#line 267
c_rt_lib0move(&___nl__3, hash0has_key(___nl__4, ___nl__1));
#line 267
c_rt_lib0clear(&___nl__4);
#line 267
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 267
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 267
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 268
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(281)));
#line 268
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 268
c_rt_lib0clear(&___nl__5);
#line 268
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 268
c_rt_lib0clear(&___nl__4);
#line 269
c_rt_lib0move(&___nl__4,___get_global_const(281));
#line 269
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 269
c_rt_lib0delete(array0push(&___nl__4, ___nl__1));
#line 269
c_rt_lib0move(&___nl__5,___get_global_const(281));
#line 269
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 269
c_rt_lib0clear(&___nl__5);
#line 269
c_rt_lib0clear(&___nl__4);
#line 270
c_rt_lib0move(&___nl__4,___get_global_const(282));
#line 270
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 270
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__1, ___nl__2));
#line 270
c_rt_lib0move(&___nl__5,___get_global_const(282));
#line 270
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 270
c_rt_lib0clear(&___nl__5);
#line 270
c_rt_lib0clear(&___nl__4);
#line 271
goto label_1;
#line 271
label_2:
#line 272
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(282)));
#line 272
c_rt_lib0move(&___nl__4, hash0get_value(___nl__5, ___nl__1));
#line 272
c_rt_lib0clear(&___nl__5);
#line 272
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 272
c_rt_lib0clear(&___nl__4);
#line 273
goto label_1;
#line 273
label_1:
#line 273
c_rt_lib0clear(&___nl__3);
#line 274
c_rt_lib0clear(&___nl__1);
#line 274
return ___nl__2;
#line 274
c_rt_lib0clear(&___nl__2);
#line 274
c_rt_lib0clear(&___nl__1);
#line 274
return NULL;
}

ImmT generator_c_priv0insert_const_to_modules_hash(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 278
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(286)));
#line 278
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__2));
#line 278
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 279
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__1, ___nl__4));
#line 279
c_rt_lib0clear(&___nl__4);
#line 280
c_rt_lib0move(&___nl__4,___get_global_const(286));
#line 280
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 280
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__2, ___nl__3));
#line 280
c_rt_lib0move(&___nl__5,___get_global_const(286));
#line 280
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 280
c_rt_lib0clear(&___nl__5);
#line 280
c_rt_lib0clear(&___nl__4);
#line 280
c_rt_lib0clear(&___nl__3);
#line 280
c_rt_lib0clear(&___nl__1);
#line 280
c_rt_lib0clear(&___nl__2);
#line 280
return NULL;
}

ImmT generator_c_priv0get_global_const(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 284
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 284
c_rt_lib0move(&___nl__3, c_rt_lib0unary_minus(___nl__3));
#line 285
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(282)));
#line 285
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__1));
#line 285
c_rt_lib0clear(&___nl__5);
#line 285
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 285
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 285
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 286
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(285)));
#line 286
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 286
c_rt_lib0clear(&___nl__6);
#line 286
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 286
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 286
c_rt_lib0clear(&___nl__6);
#line 286
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 286
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 287
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(285)));
#line 287
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(285)));
#line 287
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 287
c_rt_lib0clear(&___nl__8);
#line 287
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 287
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 287
c_rt_lib0clear(&___nl__8);
#line 287
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__6, ___nl__7));
#line 287
c_rt_lib0clear(&___nl__7);
#line 287
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 287
c_rt_lib0clear(&___nl__6);
#line 288
c_rt_lib0move(&___nl__6,___get_global_const(285));
#line 288
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 288
c_rt_lib0delete(array0pop(&___nl__6));
#line 288
c_rt_lib0move(&___nl__7,___get_global_const(285));
#line 288
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 288
c_rt_lib0clear(&___nl__7);
#line 288
c_rt_lib0clear(&___nl__6);
#line 289
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 289
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(2, ___get_global_const(283), ___nl__1, ___get_global_const(284), ___nl__7));
#line 289
c_rt_lib0clear(&___nl__7);
#line 289
c_rt_lib0move(&___nl__7,___get_global_const(281));
#line 289
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 289
c_rt_lib0copy(&___nl__8, ___nl__6);
#line 289
c_rt_lib0array_set(&___nl__7, ___nl__3, ___nl__8);
#line 289
c_rt_lib0move(&___nl__9,___get_global_const(281));
#line 289
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__9, ___nl__7));
#line 289
c_rt_lib0clear(&___nl__9);
#line 289
c_rt_lib0clear(&___nl__6);
#line 289
c_rt_lib0clear(&___nl__7);
#line 289
c_rt_lib0clear(&___nl__8);
#line 290
goto label_3;
#line 290
label_4:
#line 291
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(281)));
#line 291
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 291
c_rt_lib0clear(&___nl__7);
#line 291
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 291
c_rt_lib0clear(&___nl__6);
#line 292
c_rt_lib0move(&___nl__6,___get_global_const(281));
#line 292
c_rt_lib0move(&___nl__6, c_rt_lib0get_ref_hash(*___ref___0, ___nl__6));
#line 292
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 292
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(283), ___nl__1, ___get_global_const(284), ___nl__8));
#line 292
c_rt_lib0clear(&___nl__8);
#line 292
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 292
c_rt_lib0clear(&___nl__7);
#line 292
c_rt_lib0move(&___nl__7,___get_global_const(281));
#line 292
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__6));
#line 292
c_rt_lib0clear(&___nl__7);
#line 292
c_rt_lib0clear(&___nl__6);
#line 293
goto label_3;
#line 293
label_3:
#line 293
c_rt_lib0clear(&___nl__5);
#line 294
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___0, ___nl__1, ___nl__2));
#line 295
c_rt_lib0move(&___nl__5,___get_global_const(282));
#line 295
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 295
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__1, ___nl__3));
#line 295
c_rt_lib0move(&___nl__6,___get_global_const(282));
#line 295
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 295
c_rt_lib0clear(&___nl__6);
#line 295
c_rt_lib0clear(&___nl__5);
#line 296
goto label_1;
#line 296
label_2:
#line 297
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(282)));
#line 297
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__1));
#line 297
c_rt_lib0clear(&___nl__6);
#line 297
c_rt_lib0copy(&___nl__3, ___nl__5);
#line 297
c_rt_lib0clear(&___nl__5);
#line 298
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(286)));
#line 298
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__2));
#line 298
c_rt_lib0clear(&___nl__6);
#line 299
c_rt_lib0move(&___nl__6, hash0has_key(___nl__5, ___nl__1));
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 299
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 299
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 300
c_rt_lib0move(&___nl__7,___get_global_const(281));
#line 300
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___0, ___nl__7));
#line 300
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_arr(___nl__7, ___nl__3));
#line 300
c_rt_lib0move(&___nl__9,___get_global_const(284));
#line 300
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__8, ___nl__9));
#line 300
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 300
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 300
c_rt_lib0move(&___nl__11,___get_global_const(284));
#line 300
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__8, ___nl__11, ___nl__9));
#line 300
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__7, ___nl__3, ___nl__8));
#line 300
c_rt_lib0move(&___nl__11,___get_global_const(281));
#line 300
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__7));
#line 300
c_rt_lib0clear(&___nl__11);
#line 300
c_rt_lib0clear(&___nl__7);
#line 300
c_rt_lib0clear(&___nl__8);
#line 300
c_rt_lib0clear(&___nl__9);
#line 300
c_rt_lib0clear(&___nl__10);
#line 301
c_rt_lib0delete(generator_c_priv0insert_const_to_modules_hash(___ref___0, ___nl__1, ___nl__2));
#line 302
goto label_6;
#line 302
label_6:
#line 302
c_rt_lib0clear(&___nl__6);
#line 302
c_rt_lib0clear(&___nl__5);
#line 303
goto label_1;
#line 303
label_1:
#line 303
c_rt_lib0clear(&___nl__4);
#line 304
c_rt_lib0clear(&___nl__1);
#line 304
c_rt_lib0clear(&___nl__2);
#line 304
return ___nl__3;
#line 304
c_rt_lib0clear(&___nl__3);
#line 304
c_rt_lib0clear(&___nl__1);
#line 304
c_rt_lib0clear(&___nl__2);
#line 304
return NULL;
}

ImmT generator_c0clear_module_from_state0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "generator_c0clear_module_from_state");
return generator_c0clear_module_from_state(&_tab[0], _tab[1]);}
ImmT generator_c0clear_module_from_state(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 308
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(135)));
#line 308
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(286)));
#line 308
c_rt_lib0move(&___nl__2, hash0has_key(___nl__3, ___nl__1));
#line 308
c_rt_lib0clear(&___nl__3);
#line 308
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 308
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 309
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(135)));
#line 309
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(286)));
#line 309
c_rt_lib0move(&___nl__3, hash0get_value(___nl__4, ___nl__1));
#line 309
c_rt_lib0clear(&___nl__4);
#line 310
c_rt_lib0move(&___nl__6, c_rt_lib0init_iter(___nl__3));
#line 310
label_5:
#line 310
c_rt_lib0move(&___nl__4, c_rt_lib0is_end_hash(___nl__6));
#line 310
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 310
c_rt_lib0move(&___nl__4, c_rt_lib0get_key_iter(___nl__6));
#line 310
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value(___nl__3, ___nl__4));
#line 311
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(135)));
#line 311
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(282)));
#line 311
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__4));
#line 311
c_rt_lib0clear(&___nl__8);
#line 312
c_rt_lib0move(&___nl__8,___get_global_const(135));
#line 312
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___0, ___nl__8));
#line 312
c_rt_lib0move(&___nl__9,___get_global_const(281));
#line 312
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(___nl__8, ___nl__9));
#line 312
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_arr(___nl__9, ___nl__7));
#line 312
c_rt_lib0move(&___nl__11,___get_global_const(284));
#line 312
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_hash(___nl__10, ___nl__11));
#line 312
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 312
c_rt_lib0move(&___nl__11, c_rt_lib0sub_mod(___nl__11, ___nl__12));
#line 312
c_rt_lib0move(&___nl__13,___get_global_const(284));
#line 312
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__10, ___nl__13, ___nl__11));
#line 312
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__9, ___nl__7, ___nl__10));
#line 312
c_rt_lib0move(&___nl__13,___get_global_const(281));
#line 312
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__8, ___nl__13, ___nl__9));
#line 312
c_rt_lib0move(&___nl__13,___get_global_const(135));
#line 312
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__13, ___nl__8));
#line 312
c_rt_lib0clear(&___nl__13);
#line 312
c_rt_lib0clear(&___nl__8);
#line 312
c_rt_lib0clear(&___nl__9);
#line 312
c_rt_lib0clear(&___nl__10);
#line 312
c_rt_lib0clear(&___nl__11);
#line 312
c_rt_lib0clear(&___nl__12);
#line 313
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(135)));
#line 313
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(281)));
#line 313
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__7));
#line 313
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(284)));
#line 313
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 313
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__9));
#line 313
c_rt_lib0clear(&___nl__9);
#line 313
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 313
if(c_rt_lib0check_true_native(___nl__8)){ goto label_7;}
#line 314
c_rt_lib0move(&___nl__9,___get_global_const(135));
#line 314
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 314
c_rt_lib0move(&___nl__10,___get_global_const(282));
#line 314
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__9, ___nl__10));
#line 314
c_rt_lib0delete(hash0delete(&___nl__10, ___nl__4));
#line 314
c_rt_lib0move(&___nl__11,___get_global_const(282));
#line 314
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__9, ___nl__11, ___nl__10));
#line 314
c_rt_lib0move(&___nl__11,___get_global_const(135));
#line 314
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__9));
#line 314
c_rt_lib0clear(&___nl__11);
#line 314
c_rt_lib0clear(&___nl__9);
#line 314
c_rt_lib0clear(&___nl__10);
#line 315
c_rt_lib0move(&___nl__9,___get_global_const(135));
#line 315
c_rt_lib0move(&___nl__9, c_rt_lib0get_ref_hash(*___ref___0, ___nl__9));
#line 315
c_rt_lib0move(&___nl__10,___get_global_const(285));
#line 315
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__9, ___nl__10));
#line 315
c_rt_lib0delete(array0push(&___nl__10, ___nl__7));
#line 315
c_rt_lib0move(&___nl__11,___get_global_const(285));
#line 315
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__9, ___nl__11, ___nl__10));
#line 315
c_rt_lib0move(&___nl__11,___get_global_const(135));
#line 315
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__11, ___nl__9));
#line 315
c_rt_lib0clear(&___nl__11);
#line 315
c_rt_lib0clear(&___nl__9);
#line 315
c_rt_lib0clear(&___nl__10);
#line 316
goto label_7;
#line 316
label_7:
#line 316
c_rt_lib0clear(&___nl__8);
#line 316
c_rt_lib0clear(&___nl__7);
#line 317
c_rt_lib0move(&___nl__6, c_rt_lib0next_iter(___nl__6));
#line 317
goto label_5;
#line 317
label_3:
#line 317
c_rt_lib0clear(&___nl__4);
#line 317
c_rt_lib0clear(&___nl__5);
#line 317
c_rt_lib0clear(&___nl__6);
#line 318
c_rt_lib0move(&___nl__4,___get_global_const(135));
#line 318
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 318
c_rt_lib0move(&___nl__5,___get_global_const(286));
#line 318
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(___nl__4, ___nl__5));
#line 318
c_rt_lib0delete(hash0delete(&___nl__5, ___nl__1));
#line 318
c_rt_lib0move(&___nl__6,___get_global_const(286));
#line 318
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__4, ___nl__6, ___nl__5));
#line 318
c_rt_lib0move(&___nl__6,___get_global_const(135));
#line 318
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 318
c_rt_lib0clear(&___nl__6);
#line 318
c_rt_lib0clear(&___nl__4);
#line 318
c_rt_lib0clear(&___nl__5);
#line 318
c_rt_lib0clear(&___nl__3);
#line 319
goto label_2;
#line 319
label_2:
#line 319
c_rt_lib0clear(&___nl__2);
#line 319
c_rt_lib0clear(&___nl__1);
#line 319
return NULL;
}

ImmT generator_c_priv0get_const_sim(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 323
c_rt_lib0move(&___nl__3,___get_global_const(135));
#line 323
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 323
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 323
c_rt_lib0move(&___nl__2, generator_c_priv0get_global_const(&___nl__3, ___nl__1, ___nl__4));
#line 323
c_rt_lib0clear(&___nl__4);
#line 323
c_rt_lib0move(&___nl__4,___get_global_const(135));
#line 323
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 323
c_rt_lib0clear(&___nl__4);
#line 323
c_rt_lib0clear(&___nl__3);
#line 324
c_rt_lib0move(&___nl__3,___get_global_const(337));
#line 324
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 324
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 324
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 324
c_rt_lib0clear(&___nl__4);
#line 324
c_rt_lib0clear(&___nl__1);
#line 324
c_rt_lib0clear(&___nl__2);
#line 324
return ___nl__3;
#line 324
c_rt_lib0clear(&___nl__3);
#line 324
c_rt_lib0clear(&___nl__2);
#line 324
c_rt_lib0clear(&___nl__1);
#line 324
return NULL;
}

ImmT generator_c_priv0get_const_singleton(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 328
c_rt_lib0move(&___nl__3,___get_global_const(298));
#line 328
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 328
c_rt_lib0move(&___nl__4,___get_global_const(292));
#line 328
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(___nl__3, ___nl__4));
#line 328
c_rt_lib0move(&___nl__2, generator_c_priv0get_const(&___nl__4, ___nl__1));
#line 328
c_rt_lib0move(&___nl__5,___get_global_const(292));
#line 328
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__3, ___nl__5, ___nl__4));
#line 328
c_rt_lib0move(&___nl__5,___get_global_const(298));
#line 328
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 328
c_rt_lib0clear(&___nl__5);
#line 328
c_rt_lib0clear(&___nl__3);
#line 328
c_rt_lib0clear(&___nl__4);
#line 329
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 329
c_rt_lib0move(&___nl__5,___get_global_const(338));
#line 329
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 329
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__4, ___nl__5, ___nl__6));
#line 329
c_rt_lib0clear(&___nl__6);
#line 329
c_rt_lib0clear(&___nl__5);
#line 329
c_rt_lib0clear(&___nl__4);
#line 329
c_rt_lib0move(&___nl__4,___get_global_const(326));
#line 329
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 329
c_rt_lib0clear(&___nl__4);
#line 329
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 329
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 329
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 329
c_rt_lib0clear(&___nl__4);
#line 329
c_rt_lib0clear(&___nl__1);
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
return ___nl__3;
#line 329
c_rt_lib0clear(&___nl__3);
#line 329
c_rt_lib0clear(&___nl__2);
#line 329
c_rt_lib0clear(&___nl__1);
#line 329
return NULL;
}

ImmT generator_c_priv0get_func_ptr_header(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 333
c_rt_lib0move(&___nl__2, generator_c_priv0arg_t());
#line 333
c_rt_lib0move(&___nl__3, generator_c_priv0get_function_name(___nl__0, ___nl__1));
#line 333
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 333
c_rt_lib0clear(&___nl__3);
#line 333
c_rt_lib0move(&___nl__3,___get_global_const(339));
#line 333
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 333
c_rt_lib0clear(&___nl__3);
#line 333
c_rt_lib0clear(&___nl__0);
#line 333
c_rt_lib0clear(&___nl__1);
#line 333
return ___nl__2;
#line 333
c_rt_lib0clear(&___nl__2);
#line 333
c_rt_lib0clear(&___nl__0);
#line 333
c_rt_lib0clear(&___nl__1);
#line 333
return NULL;
}

ImmT generator_c_priv0print_mod(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 337
c_rt_lib0move(&___nl__2, generator_c_priv0get_cr());
#line 337
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 337
c_rt_lib0clear(&___nl__2);
#line 338
c_rt_lib0move(&___nl__2,___get_global_const(305));
#line 338
c_rt_lib0move(&___nl__3, string0lf());
#line 338
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 338
c_rt_lib0clear(&___nl__3);
#line 338
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 338
c_rt_lib0clear(&___nl__2);
#line 339
c_rt_lib0move(&___nl__3,___get_global_const(306));
#line 339
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 339
c_rt_lib0clear(&___nl__3);
#line 339
c_rt_lib0move(&___nl__3, string0lf());
#line 339
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 339
c_rt_lib0clear(&___nl__3);
#line 339
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__2));
#line 339
c_rt_lib0clear(&___nl__2);
#line 340
c_rt_lib0move(&___nl__2, generator_c_priv0get_cr());
#line 340
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 340
c_rt_lib0clear(&___nl__2);
#line 341
c_rt_lib0move(&___nl__3,___get_global_const(306));
#line 341
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 341
c_rt_lib0clear(&___nl__3);
#line 341
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 341
c_rt_lib0clear(&___nl__2);
#line 342
c_rt_lib0move(&___nl__3,___get_global_const(307));
#line 342
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 342
c_rt_lib0clear(&___nl__3);
#line 342
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 342
c_rt_lib0clear(&___nl__2);
#line 343
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 343
c_rt_lib0move(&___nl__2, generator_c_priv0get_include(___nl__3));
#line 343
c_rt_lib0clear(&___nl__3);
#line 343
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 343
c_rt_lib0clear(&___nl__2);
#line 344
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(340)));
#line 344
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 344
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 344
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 344
label_3:
#line 344
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 344
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 344
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 345
c_rt_lib0move(&___nl__8, generator_c_priv0get_include(___nl__3));
#line 345
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__8));
#line 345
c_rt_lib0clear(&___nl__8);
#line 346
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 346
goto label_3;
#line 346
label_1:
#line 346
c_rt_lib0clear(&___nl__2);
#line 346
c_rt_lib0clear(&___nl__3);
#line 346
c_rt_lib0clear(&___nl__4);
#line 346
c_rt_lib0clear(&___nl__5);
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0clear(&___nl__7);
#line 347
c_rt_lib0move(&___nl__2,___get_global_const(341));
#line 347
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 347
c_rt_lib0clear(&___nl__3);
#line 347
c_rt_lib0move(&___nl__3,___get_global_const(342));
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 347
c_rt_lib0clear(&___nl__3);
#line 347
c_rt_lib0move(&___nl__3, string0lf());
#line 347
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 347
c_rt_lib0clear(&___nl__3);
#line 347
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 347
c_rt_lib0clear(&___nl__2);
#line 348
c_rt_lib0move(&___nl__2,___get_global_const(343));
#line 348
c_rt_lib0move(&___nl__3, generator_c_priv0arg_t());
#line 348
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 348
c_rt_lib0clear(&___nl__3);
#line 348
c_rt_lib0move(&___nl__3,___get_global_const(344));
#line 348
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 348
c_rt_lib0clear(&___nl__3);
#line 348
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 348
c_rt_lib0clear(&___nl__2);
#line 349
c_rt_lib0move(&___nl__2,___get_global_const(345));
#line 349
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 349
c_rt_lib0move(&___nl__5,___get_global_const(346));
#line 349
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 349
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__4, ___nl__5, ___nl__6));
#line 349
c_rt_lib0clear(&___nl__6);
#line 349
c_rt_lib0clear(&___nl__5);
#line 349
c_rt_lib0clear(&___nl__4);
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 349
c_rt_lib0clear(&___nl__3);
#line 349
c_rt_lib0move(&___nl__3,___get_global_const(347));
#line 349
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 349
c_rt_lib0clear(&___nl__3);
#line 349
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 349
c_rt_lib0clear(&___nl__2);
#line 350
c_rt_lib0move(&___nl__2, generator_c_priv0arg_t());
#line 350
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 350
c_rt_lib0move(&___nl__5,___get_global_const(348));
#line 350
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 350
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__4, ___nl__5, ___nl__6));
#line 350
c_rt_lib0clear(&___nl__6);
#line 350
c_rt_lib0clear(&___nl__5);
#line 350
c_rt_lib0clear(&___nl__4);
#line 350
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 350
c_rt_lib0clear(&___nl__3);
#line 350
c_rt_lib0move(&___nl__3,___get_global_const(349));
#line 350
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 350
c_rt_lib0clear(&___nl__3);
#line 350
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 350
c_rt_lib0clear(&___nl__2);
#line 351
c_rt_lib0move(&___nl__2, generator_c_priv0arg_t());
#line 351
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 351
c_rt_lib0move(&___nl__5,___get_global_const(338));
#line 351
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 351
c_rt_lib0move(&___nl__3, generator_c_priv0get_fun_name(___nl__4, ___nl__5, ___nl__6));
#line 351
c_rt_lib0clear(&___nl__6);
#line 351
c_rt_lib0clear(&___nl__5);
#line 351
c_rt_lib0clear(&___nl__4);
#line 351
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 351
c_rt_lib0clear(&___nl__3);
#line 351
c_rt_lib0move(&___nl__3,___get_global_const(349));
#line 351
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 351
c_rt_lib0clear(&___nl__3);
#line 351
c_rt_lib0move(&___nl__3, string0lf());
#line 351
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 351
c_rt_lib0clear(&___nl__3);
#line 351
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 351
c_rt_lib0clear(&___nl__2);
#line 352
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(77)));
#line 352
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 352
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 352
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 352
label_6:
#line 352
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 352
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 352
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 353
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 353
c_rt_lib0move(&___nl__8, generator_c_priv0get_function_header(___nl__3, ___nl__9));
#line 353
c_rt_lib0clear(&___nl__9);
#line 354
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(332)));
#line 354
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(333)));
#line 354
if(c_rt_lib0check_true_native(___nl__10)){ goto label_8;}
#line 357
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(334)));
#line 357
if(c_rt_lib0check_true_native(___nl__10)){ goto label_9;}
#line 357
c_rt_lib0move(&___nl__10,___get_global_const(76));
#line 357
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 357
nl_die_arg(___nl__10);
#line 354
label_8:
#line 355
c_rt_lib0move(&___nl__11,___get_global_const(315));
#line 355
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__8, ___nl__11));
#line 355
c_rt_lib0move(&___nl__12, string0lf());
#line 355
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 355
c_rt_lib0clear(&___nl__12);
#line 355
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__11));
#line 355
c_rt_lib0clear(&___nl__11);
#line 356
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 356
c_rt_lib0move(&___nl__11, generator_c_priv0get_func_ptr_header(___nl__3, ___nl__12));
#line 356
c_rt_lib0clear(&___nl__12);
#line 356
c_rt_lib0move(&___nl__12,___get_global_const(315));
#line 356
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 356
c_rt_lib0clear(&___nl__12);
#line 356
c_rt_lib0move(&___nl__12, string0lf());
#line 356
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 356
c_rt_lib0clear(&___nl__12);
#line 356
c_rt_lib0delete(generator_c_priv0print_to_header(___ref___0, ___nl__11));
#line 356
c_rt_lib0clear(&___nl__11);
#line 357
goto label_7;
#line 357
label_9:
#line 358
c_rt_lib0move(&___nl__11,___get_global_const(315));
#line 358
c_rt_lib0move(&___nl__11, c_rt_lib0concat_new(___nl__8, ___nl__11));
#line 358
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 358
c_rt_lib0clear(&___nl__11);
#line 359
goto label_7;
#line 359
label_7:
#line 359
c_rt_lib0clear(&___nl__9);
#line 359
c_rt_lib0clear(&___nl__10);
#line 359
c_rt_lib0clear(&___nl__8);
#line 360
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 360
goto label_6;
#line 360
label_4:
#line 360
c_rt_lib0clear(&___nl__2);
#line 360
c_rt_lib0clear(&___nl__3);
#line 360
c_rt_lib0clear(&___nl__4);
#line 360
c_rt_lib0clear(&___nl__5);
#line 360
c_rt_lib0clear(&___nl__6);
#line 360
c_rt_lib0clear(&___nl__7);
#line 361
c_rt_lib0move(&___nl__2, string0lf());
#line 361
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 361
c_rt_lib0clear(&___nl__2);
#line 362
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(77)));
#line 362
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 362
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 362
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 362
label_12:
#line 362
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 362
if(c_rt_lib0check_true_native(___nl__7)){ goto label_10;}
#line 362
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 363
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(332)));
#line 363
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(333)));
#line 363
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 363
if(c_rt_lib0check_true_native(___nl__8)){ goto label_14;}
#line 364
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 364
c_rt_lib0move(&___nl__9, generator_c_priv0get_function_name(___nl__3, ___nl__10));
#line 364
c_rt_lib0clear(&___nl__10);
#line 365
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 365
c_rt_lib0move(&___nl__10, generator_c_priv0get_func_ptr_header(___nl__3, ___nl__11));
#line 365
c_rt_lib0clear(&___nl__11);
#line 365
c_rt_lib0move(&___nl__11,___get_global_const(173));
#line 365
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 365
c_rt_lib0clear(&___nl__11);
#line 365
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__10));
#line 365
c_rt_lib0clear(&___nl__10);
#line 366
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(335)));
#line 366
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 366
c_rt_lib0clear(&___nl__11);
#line 367
c_rt_lib0move(&___nl__12,___get_global_const(350));
#line 367
c_rt_lib0move(&___nl__14,___get_global_const(351));
#line 367
c_rt_lib0move(&___nl__15, generator_c_priv0get_string(___nl__9));
#line 367
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(3, ___nl__14, ___nl__10, ___nl__15));
#line 367
c_rt_lib0clear(&___nl__14);
#line 367
c_rt_lib0clear(&___nl__15);
#line 367
c_rt_lib0move(&___nl__11, generator_c_priv0get_fun_lib(___nl__12, ___nl__13));
#line 367
c_rt_lib0clear(&___nl__13);
#line 367
c_rt_lib0clear(&___nl__12);
#line 367
c_rt_lib0move(&___nl__12,___get_global_const(315));
#line 367
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 367
c_rt_lib0clear(&___nl__12);
#line 367
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 367
c_rt_lib0clear(&___nl__11);
#line 368
c_rt_lib0move(&___nl__11,___get_global_const(352));
#line 368
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__9));
#line 368
c_rt_lib0move(&___nl__12,___get_global_const(326));
#line 368
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 368
c_rt_lib0clear(&___nl__12);
#line 368
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__11));
#line 368
c_rt_lib0clear(&___nl__11);
#line 369
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 369
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 369
label_17:
#line 369
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__11, ___nl__10));
#line 369
if(c_rt_lib0check_true_native(___nl__13)){ goto label_15;}
#line 370
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 370
c_rt_lib0move(&___nl__14, c_rt_lib0gt(___nl__11, ___nl__14));
#line 370
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 370
if(c_rt_lib0check_true_native(___nl__14)){ goto label_19;}
#line 370
c_rt_lib0move(&___nl__15,___get_global_const(193));
#line 370
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__15));
#line 370
c_rt_lib0clear(&___nl__15);
#line 370
goto label_19;
#line 370
label_19:
#line 370
c_rt_lib0clear(&___nl__14);
#line 371
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(335)));
#line 371
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__14, ___nl__11));
#line 371
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(238)));
#line 371
if(c_rt_lib0check_true_native(___nl__15)){ goto label_21;}
#line 373
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__14, ___get_global_const(5)));
#line 373
if(c_rt_lib0check_true_native(___nl__15)){ goto label_22;}
#line 373
c_rt_lib0move(&___nl__15,___get_global_const(76));
#line 373
c_rt_lib0move(&___nl__15, c_rt_lib0array_mk(2, ___nl__15, ___nl__14));
#line 373
nl_die_arg(___nl__15);
#line 371
label_21:
#line 372
c_rt_lib0move(&___nl__16,___get_global_const(353));
#line 372
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__11));
#line 372
c_rt_lib0move(&___nl__17,___get_global_const(180));
#line 372
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 372
c_rt_lib0clear(&___nl__17);
#line 372
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__16));
#line 372
c_rt_lib0clear(&___nl__16);
#line 373
goto label_20;
#line 373
label_22:
#line 374
c_rt_lib0move(&___nl__16,___get_global_const(354));
#line 374
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__11));
#line 374
c_rt_lib0move(&___nl__17,___get_global_const(180));
#line 374
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 374
c_rt_lib0clear(&___nl__17);
#line 374
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__16));
#line 374
c_rt_lib0clear(&___nl__16);
#line 375
goto label_20;
#line 375
label_20:
#line 375
c_rt_lib0clear(&___nl__14);
#line 375
c_rt_lib0clear(&___nl__15);
#line 376
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__12));
#line 376
goto label_17;
#line 376
label_15:
#line 376
c_rt_lib0clear(&___nl__11);
#line 376
c_rt_lib0clear(&___nl__12);
#line 376
c_rt_lib0clear(&___nl__13);
#line 377
c_rt_lib0move(&___nl__11,___get_global_const(355));
#line 377
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 377
c_rt_lib0clear(&___nl__11);
#line 377
c_rt_lib0clear(&___nl__9);
#line 377
c_rt_lib0clear(&___nl__10);
#line 378
goto label_14;
#line 378
label_14:
#line 378
c_rt_lib0clear(&___nl__8);
#line 379
c_rt_lib0move(&___nl__8, generator_c_priv0is_singleton_use_function(___nl__3));
#line 379
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 379
if(c_rt_lib0check_true_native(___nl__8)){ goto label_24;}
#line 380
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 380
c_rt_lib0move(&___nl__9, generator_c_priv0get_function_name(___nl__3, ___nl__10));
#line 380
c_rt_lib0clear(&___nl__10);
#line 381
c_rt_lib0move(&___nl__10, generator_c_priv0arg_t());
#line 381
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__9));
#line 381
c_rt_lib0move(&___nl__11,___get_global_const(356));
#line 381
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 381
c_rt_lib0clear(&___nl__11);
#line 381
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__10));
#line 381
c_rt_lib0clear(&___nl__10);
#line 382
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 382
c_rt_lib0move(&___nl__12,___get_global_const(346));
#line 382
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 382
c_rt_lib0move(&___nl__10, generator_c_priv0get_fun_name(___nl__11, ___nl__12, ___nl__13));
#line 382
c_rt_lib0clear(&___nl__13);
#line 382
c_rt_lib0clear(&___nl__12);
#line 382
c_rt_lib0clear(&___nl__11);
#line 382
c_rt_lib0move(&___nl__11,___get_global_const(347));
#line 382
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 382
c_rt_lib0clear(&___nl__11);
#line 382
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__10));
#line 382
c_rt_lib0clear(&___nl__10);
#line 383
c_rt_lib0move(&___nl__10,___get_global_const(352));
#line 383
c_rt_lib0move(&___nl__11, generator_c_priv0get_const_singleton(___ref___0, ___nl__9));
#line 383
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 383
c_rt_lib0clear(&___nl__11);
#line 383
c_rt_lib0move(&___nl__11,___get_global_const(357));
#line 383
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 383
c_rt_lib0clear(&___nl__11);
#line 383
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__10));
#line 383
c_rt_lib0clear(&___nl__10);
#line 384
c_rt_lib0move(&___nl__10, generator_c_priv0arg_t());
#line 384
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__9));
#line 384
c_rt_lib0move(&___nl__11,___get_global_const(358));
#line 384
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 384
c_rt_lib0clear(&___nl__11);
#line 384
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__10));
#line 384
c_rt_lib0clear(&___nl__10);
#line 384
c_rt_lib0clear(&___nl__9);
#line 385
goto label_23;
#line 385
label_24:
#line 386
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 386
c_rt_lib0move(&___nl__9, generator_c_priv0get_function_header(___nl__3, ___nl__10));
#line 386
c_rt_lib0clear(&___nl__10);
#line 386
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__9));
#line 386
c_rt_lib0clear(&___nl__9);
#line 387
goto label_23;
#line 387
label_23:
#line 387
c_rt_lib0clear(&___nl__8);
#line 388
c_rt_lib0delete(generator_c_priv0print_function_block(___ref___0, ___nl__3));
#line 389
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 389
goto label_12;
#line 389
label_10:
#line 389
c_rt_lib0clear(&___nl__2);
#line 389
c_rt_lib0clear(&___nl__3);
#line 389
c_rt_lib0clear(&___nl__4);
#line 389
c_rt_lib0clear(&___nl__5);
#line 389
c_rt_lib0clear(&___nl__6);
#line 389
c_rt_lib0clear(&___nl__7);
#line 390
c_rt_lib0delete(generator_c_priv0print_init_const(___ref___0));
#line 390
c_rt_lib0clear(&___nl__1);
#line 390
return NULL;
}

ImmT generator_c_priv0print_init_const(ImmT * ___ref___0) {
generator_c_priv0__const__init();
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
#line 394
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(298)));
#line 394
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(291)));
#line 394
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(281)));
#line 395
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(298)));
#line 395
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(292)));
#line 395
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(281)));
#line 396
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 397
c_rt_lib0move(&___nl__4, array0len(___nl__2));
#line 398
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(298)));
#line 398
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(293)));
#line 399
c_rt_lib0move(&___nl__6, c_rt_lib0add(___nl__3, ___nl__4));
#line 399
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__5));
#line 400
c_rt_lib0move(&___nl__7,___get_global_const(310));
#line 400
c_rt_lib0move(&___nl__8, generator_c_priv0arg_t());
#line 400
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 400
c_rt_lib0clear(&___nl__8);
#line 400
c_rt_lib0move(&___nl__8,___get_global_const(359));
#line 400
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 400
c_rt_lib0clear(&___nl__8);
#line 400
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 400
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__6));
#line 400
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 400
c_rt_lib0clear(&___nl__8);
#line 400
c_rt_lib0move(&___nl__8,___get_global_const(360));
#line 400
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 400
c_rt_lib0clear(&___nl__8);
#line 400
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 400
c_rt_lib0clear(&___nl__7);
#line 403
c_rt_lib0move(&___nl__7,___get_global_const(345));
#line 403
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 403
c_rt_lib0move(&___nl__10,___get_global_const(346));
#line 403
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 403
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 403
c_rt_lib0clear(&___nl__11);
#line 403
c_rt_lib0clear(&___nl__10);
#line 403
c_rt_lib0clear(&___nl__9);
#line 403
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 403
c_rt_lib0clear(&___nl__8);
#line 403
c_rt_lib0move(&___nl__8,___get_global_const(361));
#line 403
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 403
c_rt_lib0clear(&___nl__8);
#line 403
c_rt_lib0move(&___nl__8, c_rt_lib0add(___nl__3, ___nl__4));
#line 403
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 403
c_rt_lib0clear(&___nl__8);
#line 403
c_rt_lib0move(&___nl__8,___get_global_const(362));
#line 403
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 403
c_rt_lib0clear(&___nl__8);
#line 403
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 403
c_rt_lib0clear(&___nl__7);
#line 408
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 408
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 408
label_3:
#line 408
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__7, ___nl__3));
#line 408
if(c_rt_lib0check_true_native(___nl__9)){ goto label_1;}
#line 409
c_rt_lib0move(&___nl__10,___get_global_const(359));
#line 409
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__7));
#line 409
c_rt_lib0move(&___nl__11,___get_global_const(363));
#line 409
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 409
c_rt_lib0clear(&___nl__11);
#line 409
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__1, ___nl__7));
#line 409
c_rt_lib0move(&___nl__11, generator_c_priv0create_sim(___nl__12));
#line 409
c_rt_lib0clear(&___nl__12);
#line 409
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 409
c_rt_lib0clear(&___nl__11);
#line 409
c_rt_lib0move(&___nl__11,___get_global_const(315));
#line 409
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 409
c_rt_lib0clear(&___nl__11);
#line 409
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__10));
#line 409
c_rt_lib0clear(&___nl__10);
#line 410
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 410
goto label_3;
#line 410
label_1:
#line 410
c_rt_lib0clear(&___nl__7);
#line 410
c_rt_lib0clear(&___nl__8);
#line 410
c_rt_lib0clear(&___nl__9);
#line 411
c_rt_lib0move(&___nl__7,___get_global_const(364));
#line 411
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 411
c_rt_lib0move(&___nl__8,___get_global_const(365));
#line 411
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 411
c_rt_lib0clear(&___nl__8);
#line 411
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__6));
#line 411
c_rt_lib0move(&___nl__8,___get_global_const(366));
#line 411
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 411
c_rt_lib0clear(&___nl__8);
#line 411
c_rt_lib0move(&___nl__9,___get_global_const(367));
#line 411
c_rt_lib0move(&___nl__8, generator_c_priv0get_lib_fun(___nl__9));
#line 411
c_rt_lib0clear(&___nl__9);
#line 411
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 411
c_rt_lib0clear(&___nl__8);
#line 411
c_rt_lib0move(&___nl__8,___get_global_const(368));
#line 411
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 411
c_rt_lib0clear(&___nl__8);
#line 411
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__6));
#line 411
c_rt_lib0move(&___nl__8,___get_global_const(369));
#line 411
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 411
c_rt_lib0clear(&___nl__8);
#line 411
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 411
c_rt_lib0clear(&___nl__7);
#line 415
c_rt_lib0move(&___nl__7, generator_c_priv0arg_t());
#line 415
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 415
c_rt_lib0move(&___nl__10,___get_global_const(348));
#line 415
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 415
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 415
c_rt_lib0clear(&___nl__11);
#line 415
c_rt_lib0clear(&___nl__10);
#line 415
c_rt_lib0clear(&___nl__9);
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
c_rt_lib0move(&___nl__8,___get_global_const(370));
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
c_rt_lib0move(&___nl__8, generator_c_priv0arg_t());
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
c_rt_lib0move(&___nl__8,___get_global_const(323));
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
c_rt_lib0move(&___nl__9,___get_global_const(324));
#line 415
c_rt_lib0move(&___nl__11,___get_global_const(325));
#line 415
c_rt_lib0move(&___nl__12,___get_global_const(371));
#line 415
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__11, ___nl__12));
#line 415
c_rt_lib0clear(&___nl__11);
#line 415
c_rt_lib0clear(&___nl__12);
#line 415
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_lib(___nl__9, ___nl__10));
#line 415
c_rt_lib0clear(&___nl__10);
#line 415
c_rt_lib0clear(&___nl__9);
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
c_rt_lib0move(&___nl__8,___get_global_const(328));
#line 415
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 415
c_rt_lib0clear(&___nl__8);
#line 415
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 415
c_rt_lib0clear(&___nl__7);
#line 420
c_rt_lib0move(&___nl__7, generator_c_priv0arg_t());
#line 420
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 420
c_rt_lib0move(&___nl__10,___get_global_const(338));
#line 420
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 420
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 420
c_rt_lib0clear(&___nl__11);
#line 420
c_rt_lib0clear(&___nl__10);
#line 420
c_rt_lib0clear(&___nl__9);
#line 420
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 420
c_rt_lib0clear(&___nl__8);
#line 420
c_rt_lib0move(&___nl__8,___get_global_const(372));
#line 420
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 420
c_rt_lib0clear(&___nl__8);
#line 420
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__3));
#line 420
c_rt_lib0move(&___nl__8,___get_global_const(373));
#line 420
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 420
c_rt_lib0clear(&___nl__8);
#line 420
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 420
c_rt_lib0clear(&___nl__7);
#line 423
c_rt_lib0move(&___nl__7, array0len(___nl__2));
#line 423
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 423
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 423
label_6:
#line 423
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__8, ___nl__7));
#line 423
if(c_rt_lib0check_true_native(___nl__10)){ goto label_4;}
#line 424
c_rt_lib0move(&___nl__11,___get_global_const(374));
#line 424
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__8));
#line 424
c_rt_lib0move(&___nl__12,___get_global_const(375));
#line 424
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 424
c_rt_lib0clear(&___nl__12);
#line 424
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 424
c_rt_lib0clear(&___nl__11);
#line 425
c_rt_lib0move(&___nl__11,___get_global_const(376));
#line 425
c_rt_lib0move(&___nl__12, c_rt_lib0add(___nl__8, ___nl__3));
#line 425
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 425
c_rt_lib0clear(&___nl__12);
#line 425
c_rt_lib0move(&___nl__12,___get_global_const(363));
#line 425
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 425
c_rt_lib0clear(&___nl__12);
#line 425
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__2, ___nl__8));
#line 425
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 425
c_rt_lib0clear(&___nl__12);
#line 425
c_rt_lib0move(&___nl__12,___get_global_const(377));
#line 425
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 425
c_rt_lib0clear(&___nl__12);
#line 425
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 425
c_rt_lib0clear(&___nl__11);
#line 426
c_rt_lib0move(&___nl__11,___get_global_const(378));
#line 426
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__11));
#line 426
c_rt_lib0clear(&___nl__11);
#line 427
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 427
goto label_6;
#line 427
label_4:
#line 427
c_rt_lib0clear(&___nl__7);
#line 427
c_rt_lib0clear(&___nl__8);
#line 427
c_rt_lib0clear(&___nl__9);
#line 427
c_rt_lib0clear(&___nl__10);
#line 428
c_rt_lib0move(&___nl__7,___get_global_const(379));
#line 428
c_rt_lib0move(&___nl__8, generator_c_priv0arg_t());
#line 428
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 428
c_rt_lib0clear(&___nl__8);
#line 428
c_rt_lib0move(&___nl__8,___get_global_const(323));
#line 428
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 428
c_rt_lib0clear(&___nl__8);
#line 428
c_rt_lib0move(&___nl__9,___get_global_const(324));
#line 428
c_rt_lib0move(&___nl__11,___get_global_const(325));
#line 428
c_rt_lib0move(&___nl__12,___get_global_const(380));
#line 428
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__3));
#line 428
c_rt_lib0move(&___nl__13,___get_global_const(180));
#line 428
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 428
c_rt_lib0clear(&___nl__13);
#line 428
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__11, ___nl__12));
#line 428
c_rt_lib0clear(&___nl__11);
#line 428
c_rt_lib0clear(&___nl__12);
#line 428
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_lib(___nl__9, ___nl__10));
#line 428
c_rt_lib0clear(&___nl__10);
#line 428
c_rt_lib0clear(&___nl__9);
#line 428
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 428
c_rt_lib0clear(&___nl__8);
#line 428
c_rt_lib0move(&___nl__8,___get_global_const(328));
#line 428
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 428
c_rt_lib0clear(&___nl__8);
#line 428
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 428
c_rt_lib0clear(&___nl__7);
#line 428
c_rt_lib0clear(&___nl__1);
#line 428
c_rt_lib0clear(&___nl__2);
#line 428
c_rt_lib0clear(&___nl__3);
#line 428
c_rt_lib0clear(&___nl__4);
#line 428
c_rt_lib0clear(&___nl__5);
#line 428
c_rt_lib0clear(&___nl__6);
#line 428
return NULL;
}

ImmT generator_c_priv0print_function_block(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 438
c_rt_lib0move(&___nl__2,___get_global_const(381));
#line 438
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 438
c_rt_lib0clear(&___nl__2);
#line 439
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(335)));
#line 439
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 439
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(297), ___nl__3);
#line 439
c_rt_lib0clear(&___nl__2);
#line 439
c_rt_lib0clear(&___nl__3);
#line 440
c_rt_lib0delete(generator_c_priv0move_args_to_register(___ref___0));
#line 441
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 441
c_rt_lib0move(&___nl__4,___get_global_const(346));
#line 441
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 441
c_rt_lib0move(&___nl__2, generator_c_priv0get_fun_name(___nl__3, ___nl__4, ___nl__5));
#line 441
c_rt_lib0clear(&___nl__5);
#line 441
c_rt_lib0clear(&___nl__4);
#line 441
c_rt_lib0clear(&___nl__3);
#line 441
c_rt_lib0move(&___nl__3,___get_global_const(347));
#line 441
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 441
c_rt_lib0clear(&___nl__3);
#line 441
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 441
c_rt_lib0clear(&___nl__2);
#line 442
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(335)));
#line 442
c_rt_lib0move(&___nl__2, array0len(___nl__3));
#line 442
c_rt_lib0clear(&___nl__3);
#line 442
label_2:
#line 442
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(382)));
#line 442
c_rt_lib0move(&___nl__3, c_rt_lib0lt(___nl__2, ___nl__3));
#line 442
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 442
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 443
c_rt_lib0move(&___nl__4, generator_c_priv0arg_t());
#line 443
c_rt_lib0move(&___nl__5, generator_c_priv0get_reg(___ref___0, ___nl__2));
#line 443
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 443
c_rt_lib0clear(&___nl__5);
#line 443
c_rt_lib0move(&___nl__5,___get_global_const(383));
#line 443
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 443
c_rt_lib0clear(&___nl__5);
#line 443
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__4));
#line 443
c_rt_lib0clear(&___nl__4);
#line 443
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 443
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__4));
#line 443
c_rt_lib0clear(&___nl__4);
#line 444
goto label_2;
#line 444
label_1:
#line 444
c_rt_lib0clear(&___nl__2);
#line 444
c_rt_lib0clear(&___nl__3);
#line 445
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(384)));
#line 445
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 445
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 445
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 445
label_6:
#line 445
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 445
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 445
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 446
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(216)));
#line 446
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(38)));
#line 446
if(c_rt_lib0check_true_native(___nl__9)){ goto label_8;}
#line 448
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(298)));
#line 448
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 448
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 448
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 448
nl_die_arg(___nl__9);
#line 446
label_8:
#line 447
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 448
goto label_7;
#line 448
label_9:
#line 448
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(298)));
#line 449
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(214)));
#line 449
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(227)));
#line 449
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 449
if(c_rt_lib0check_true_native(___nl__11)){ goto label_11;}
#line 450
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(214)));
#line 450
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(227)));
#line 450
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(238)));
#line 451
c_rt_lib0move(&___nl__13, nl0is_sim(___nl__12));
#line 451
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 451
if(c_rt_lib0check_true_native(___nl__13)){ goto label_13;}
#line 452
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 453
c_rt_lib0clear(&___nl__8);
#line 453
c_rt_lib0clear(&___nl__9);
#line 453
c_rt_lib0clear(&___nl__10);
#line 453
c_rt_lib0clear(&___nl__11);
#line 453
c_rt_lib0clear(&___nl__12);
#line 453
c_rt_lib0clear(&___nl__13);
#line 453
goto label_5;
#line 454
goto label_13;
#line 454
label_13:
#line 454
c_rt_lib0clear(&___nl__13);
#line 454
c_rt_lib0clear(&___nl__12);
#line 455
goto label_11;
#line 455
label_11:
#line 455
c_rt_lib0clear(&___nl__11);
#line 456
c_rt_lib0move(&___nl__11, array0len(___nl__10));
#line 457
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 457
c_rt_lib0move(&___nl__12, c_rt_lib0num_eq(___nl__11, ___nl__12));
#line 457
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 457
if(c_rt_lib0check_true_native(___nl__12)){ goto label_15;}
#line 458
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 459
c_rt_lib0clear(&___nl__8);
#line 459
c_rt_lib0clear(&___nl__9);
#line 459
c_rt_lib0clear(&___nl__10);
#line 459
c_rt_lib0clear(&___nl__11);
#line 459
c_rt_lib0clear(&___nl__12);
#line 459
goto label_5;
#line 460
goto label_14;
#line 460
label_15:
#line 461
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(298)));
#line 461
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(293)));
#line 462
c_rt_lib0move(&___nl__14,___get_global_const(385));
#line 462
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__13));
#line 462
c_rt_lib0move(&___nl__15,___get_global_const(386));
#line 462
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 462
c_rt_lib0clear(&___nl__15);
#line 462
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__14));
#line 462
c_rt_lib0clear(&___nl__14);
#line 463
c_rt_lib0delete(generator_c_priv0print_cmd(___ref___0, ___nl__3));
#line 464
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 464
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 464
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__10));
#line 464
label_18:
#line 464
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 464
if(c_rt_lib0check_true_native(___nl__18)){ goto label_16;}
#line 464
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__10, ___nl__15));
#line 465
c_rt_lib0move(&___nl__20,___get_global_const(324));
#line 465
c_rt_lib0move(&___nl__22,___get_global_const(387));
#line 465
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__13));
#line 465
c_rt_lib0move(&___nl__23,___get_global_const(180));
#line 465
c_rt_lib0move(&___nl__22, c_rt_lib0concat_add(___nl__22, ___nl__23));
#line 465
c_rt_lib0clear(&___nl__23);
#line 465
c_rt_lib0move(&___nl__23, generator_c_priv0get_reg(___ref___0, ___nl__14));
#line 465
c_rt_lib0move(&___nl__21, c_rt_lib0array_mk(2, ___nl__22, ___nl__23));
#line 465
c_rt_lib0clear(&___nl__22);
#line 465
c_rt_lib0clear(&___nl__23);
#line 465
c_rt_lib0move(&___nl__19, generator_c_priv0get_fun_lib(___nl__20, ___nl__21));
#line 465
c_rt_lib0clear(&___nl__21);
#line 465
c_rt_lib0clear(&___nl__20);
#line 465
c_rt_lib0move(&___nl__20,___get_global_const(315));
#line 465
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 465
c_rt_lib0clear(&___nl__20);
#line 465
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__19));
#line 465
c_rt_lib0clear(&___nl__19);
#line 466
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 466
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__19));
#line 466
c_rt_lib0clear(&___nl__19);
#line 467
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 467
goto label_18;
#line 467
label_16:
#line 467
c_rt_lib0clear(&___nl__14);
#line 467
c_rt_lib0clear(&___nl__15);
#line 467
c_rt_lib0clear(&___nl__16);
#line 467
c_rt_lib0clear(&___nl__17);
#line 467
c_rt_lib0clear(&___nl__18);
#line 468
c_rt_lib0move(&___nl__14,___get_global_const(174));
#line 468
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__14));
#line 468
c_rt_lib0clear(&___nl__14);
#line 469
c_rt_lib0move(&___nl__13, c_rt_lib0sub_mod(___nl__13, ___nl__11));
#line 470
c_rt_lib0move(&___nl__15,___get_global_const(1));
#line 470
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 470
c_rt_lib0move(&___nl__17, c_rt_lib0array_len(___nl__10));
#line 470
label_21:
#line 470
c_rt_lib0move(&___nl__18, c_rt_lib0ge(___nl__15, ___nl__17));
#line 470
if(c_rt_lib0check_true_native(___nl__18)){ goto label_19;}
#line 470
c_rt_lib0move(&___nl__14, c_rt_lib0array_get(___nl__10, ___nl__15));
#line 471
c_rt_lib0move(&___nl__20,___get_global_const(324));
#line 471
c_rt_lib0move(&___nl__22, generator_c_priv0get_reg_ref(___ref___0, ___nl__14));
#line 471
c_rt_lib0move(&___nl__23,___get_global_const(388));
#line 471
c_rt_lib0move(&___nl__23, c_rt_lib0concat_add(___nl__23, ___nl__13));
#line 471
c_rt_lib0move(&___nl__24,___get_global_const(180));
#line 471
c_rt_lib0move(&___nl__23, c_rt_lib0concat_add(___nl__23, ___nl__24));
#line 471
c_rt_lib0clear(&___nl__24);
#line 471
c_rt_lib0move(&___nl__21, c_rt_lib0array_mk(2, ___nl__22, ___nl__23));
#line 471
c_rt_lib0clear(&___nl__22);
#line 471
c_rt_lib0clear(&___nl__23);
#line 471
c_rt_lib0move(&___nl__19, generator_c_priv0get_fun_lib(___nl__20, ___nl__21));
#line 471
c_rt_lib0clear(&___nl__21);
#line 471
c_rt_lib0clear(&___nl__20);
#line 471
c_rt_lib0move(&___nl__20,___get_global_const(315));
#line 471
c_rt_lib0move(&___nl__19, c_rt_lib0concat_add(___nl__19, ___nl__20));
#line 471
c_rt_lib0clear(&___nl__20);
#line 471
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__19));
#line 471
c_rt_lib0clear(&___nl__19);
#line 473
c_rt_lib0move(&___nl__19,___get_global_const(2));
#line 473
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__19));
#line 473
c_rt_lib0clear(&___nl__19);
#line 474
c_rt_lib0move(&___nl__15, c_rt_lib0add_mod(___nl__15, ___nl__16));
#line 474
goto label_21;
#line 474
label_19:
#line 474
c_rt_lib0clear(&___nl__14);
#line 474
c_rt_lib0clear(&___nl__15);
#line 474
c_rt_lib0clear(&___nl__16);
#line 474
c_rt_lib0clear(&___nl__17);
#line 474
c_rt_lib0clear(&___nl__18);
#line 475
c_rt_lib0move(&___nl__14,___get_global_const(298));
#line 475
c_rt_lib0move(&___nl__14, c_rt_lib0get_ref_hash(*___ref___0, ___nl__14));
#line 475
c_rt_lib0copy(&___nl__15, ___nl__13);
#line 475
c_rt_lib0hash_set_value_dec(&___nl__14, ___get_global_const(293), ___nl__15);
#line 475
c_rt_lib0move(&___nl__16,___get_global_const(298));
#line 475
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__16, ___nl__14));
#line 475
c_rt_lib0clear(&___nl__16);
#line 475
c_rt_lib0clear(&___nl__14);
#line 475
c_rt_lib0clear(&___nl__15);
#line 475
c_rt_lib0clear(&___nl__13);
#line 476
goto label_14;
#line 476
label_14:
#line 476
c_rt_lib0clear(&___nl__12);
#line 476
c_rt_lib0clear(&___nl__11);
#line 476
c_rt_lib0clear(&___nl__10);
#line 477
goto label_7;
#line 477
label_7:
#line 477
c_rt_lib0clear(&___nl__8);
#line 477
c_rt_lib0clear(&___nl__9);
#line 477
label_5:
#line 478
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 478
goto label_6;
#line 478
label_4:
#line 478
c_rt_lib0clear(&___nl__2);
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
#line 479
c_rt_lib0move(&___nl__2,___get_global_const(174));
#line 479
c_rt_lib0move(&___nl__3, string0lf());
#line 479
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 479
c_rt_lib0clear(&___nl__3);
#line 479
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__2));
#line 479
c_rt_lib0clear(&___nl__2);
#line 479
c_rt_lib0clear(&___nl__1);
#line 479
return NULL;
}

ImmT generator_c_priv0is_singleton_use_function(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
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
#line 483
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(335)));
#line 483
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 483
c_rt_lib0clear(&___nl__2);
#line 483
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 483
c_rt_lib0move(&___nl__1, c_rt_lib0gt(___nl__1, ___nl__2));
#line 483
c_rt_lib0clear(&___nl__2);
#line 483
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 483
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 483
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 483
c_rt_lib0clear(&___nl__0);
#line 483
c_rt_lib0clear(&___nl__1);
#line 483
return ___nl__2;
#line 483
c_rt_lib0clear(&___nl__2);
#line 483
goto label_2;
#line 483
label_2:
#line 483
c_rt_lib0clear(&___nl__1);
#line 484
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(216)));
#line 484
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(143)));
#line 485
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 487
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(384)));
#line 487
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 487
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 487
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 487
label_5:
#line 487
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 487
if(c_rt_lib0check_true_native(___nl__9)){ goto label_3;}
#line 487
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 488
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 489
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 489
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(221)));
#line 489
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 489
if(c_rt_lib0check_true_native(___nl__11)){ goto label_7;}
#line 490
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 490
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(221)));
#line 491
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(389)));
#line 491
c_rt_lib0move(&___nl__14,___get_global_const(390));
#line 491
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__14));
#line 491
c_rt_lib0clear(&___nl__14);
#line 491
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 491
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 491
if(c_rt_lib0check_true_native(___nl__13)){ goto label_9;}
#line 491
c_rt_lib0clear(&___nl__10);
#line 491
c_rt_lib0clear(&___nl__11);
#line 491
c_rt_lib0clear(&___nl__12);
#line 491
c_rt_lib0clear(&___nl__13);
#line 491
goto label_4;
#line 491
goto label_9;
#line 491
label_9:
#line 491
c_rt_lib0clear(&___nl__13);
#line 492
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(261)));
#line 492
c_rt_lib0move(&___nl__14,___get_global_const(292));
#line 492
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__14));
#line 492
c_rt_lib0clear(&___nl__14);
#line 492
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 492
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 492
if(c_rt_lib0check_true_native(___nl__13)){ goto label_11;}
#line 492
c_rt_lib0clear(&___nl__10);
#line 492
c_rt_lib0clear(&___nl__11);
#line 492
c_rt_lib0clear(&___nl__12);
#line 492
c_rt_lib0clear(&___nl__13);
#line 492
goto label_4;
#line 492
goto label_11;
#line 492
label_11:
#line 492
c_rt_lib0clear(&___nl__13);
#line 493
c_rt_lib0move(&___nl__13, c_rt_lib0get_true());
#line 493
c_rt_lib0copy(&___nl__2, ___nl__13);
#line 493
c_rt_lib0clear(&___nl__13);
#line 494
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(237)));
#line 494
c_rt_lib0copy(&___nl__3, ___nl__13);
#line 494
c_rt_lib0clear(&___nl__13);
#line 494
c_rt_lib0clear(&___nl__12);
#line 495
goto label_6;
#line 495
label_7:
#line 495
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 495
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(75)));
#line 495
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 495
if(c_rt_lib0check_true_native(___nl__11)){ goto label_12;}
#line 496
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 496
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(75)));
#line 497
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 497
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(238)));
#line 497
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 497
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 497
if(c_rt_lib0check_true_native(___nl__13)){ goto label_14;}
#line 497
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 497
c_rt_lib0clear(&___nl__0);
#line 497
c_rt_lib0clear(&___nl__1);
#line 497
c_rt_lib0clear(&___nl__2);
#line 497
c_rt_lib0clear(&___nl__3);
#line 497
c_rt_lib0clear(&___nl__4);
#line 497
c_rt_lib0clear(&___nl__5);
#line 497
c_rt_lib0clear(&___nl__6);
#line 497
c_rt_lib0clear(&___nl__7);
#line 497
c_rt_lib0clear(&___nl__8);
#line 497
c_rt_lib0clear(&___nl__9);
#line 497
c_rt_lib0clear(&___nl__10);
#line 497
c_rt_lib0clear(&___nl__11);
#line 497
c_rt_lib0clear(&___nl__12);
#line 497
c_rt_lib0clear(&___nl__13);
#line 497
return ___nl__14;
#line 497
c_rt_lib0clear(&___nl__14);
#line 497
goto label_14;
#line 497
label_14:
#line 497
c_rt_lib0clear(&___nl__13);
#line 498
c_rt_lib0copy(&___nl__13, ___nl__1);
#line 498
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 498
if(c_rt_lib0check_true_native(___nl__13)){ goto label_16;}
#line 498
c_rt_lib0move(&___nl__14, c_rt_lib0get_true());
#line 498
c_rt_lib0clear(&___nl__0);
#line 498
c_rt_lib0clear(&___nl__1);
#line 498
c_rt_lib0clear(&___nl__2);
#line 498
c_rt_lib0clear(&___nl__3);
#line 498
c_rt_lib0clear(&___nl__4);
#line 498
c_rt_lib0clear(&___nl__5);
#line 498
c_rt_lib0clear(&___nl__6);
#line 498
c_rt_lib0clear(&___nl__7);
#line 498
c_rt_lib0clear(&___nl__8);
#line 498
c_rt_lib0clear(&___nl__9);
#line 498
c_rt_lib0clear(&___nl__10);
#line 498
c_rt_lib0clear(&___nl__11);
#line 498
c_rt_lib0clear(&___nl__12);
#line 498
c_rt_lib0clear(&___nl__13);
#line 498
return ___nl__14;
#line 498
c_rt_lib0clear(&___nl__14);
#line 498
goto label_16;
#line 498
label_16:
#line 498
c_rt_lib0clear(&___nl__13);
#line 499
c_rt_lib0copy(&___nl__13, ___nl__2);
#line 499
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 499
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 499
if(c_rt_lib0check_true_native(___nl__13)){ goto label_18;}
#line 499
c_rt_lib0move(&___nl__14, c_rt_lib0get_false());
#line 499
c_rt_lib0clear(&___nl__0);
#line 499
c_rt_lib0clear(&___nl__1);
#line 499
c_rt_lib0clear(&___nl__2);
#line 499
c_rt_lib0clear(&___nl__3);
#line 499
c_rt_lib0clear(&___nl__4);
#line 499
c_rt_lib0clear(&___nl__5);
#line 499
c_rt_lib0clear(&___nl__6);
#line 499
c_rt_lib0clear(&___nl__7);
#line 499
c_rt_lib0clear(&___nl__8);
#line 499
c_rt_lib0clear(&___nl__9);
#line 499
c_rt_lib0clear(&___nl__10);
#line 499
c_rt_lib0clear(&___nl__11);
#line 499
c_rt_lib0clear(&___nl__12);
#line 499
c_rt_lib0clear(&___nl__13);
#line 499
return ___nl__14;
#line 499
c_rt_lib0clear(&___nl__14);
#line 499
goto label_18;
#line 499
label_18:
#line 499
c_rt_lib0clear(&___nl__13);
#line 500
c_rt_lib0copy(&___nl__13, ___nl__12);
#line 500
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(238)));
#line 500
c_rt_lib0move(&___nl__13, c_rt_lib0eq(___nl__13, ___nl__3));
#line 500
c_rt_lib0clear(&___nl__0);
#line 500
c_rt_lib0clear(&___nl__1);
#line 500
c_rt_lib0clear(&___nl__2);
#line 500
c_rt_lib0clear(&___nl__3);
#line 500
c_rt_lib0clear(&___nl__4);
#line 500
c_rt_lib0clear(&___nl__5);
#line 500
c_rt_lib0clear(&___nl__6);
#line 500
c_rt_lib0clear(&___nl__7);
#line 500
c_rt_lib0clear(&___nl__8);
#line 500
c_rt_lib0clear(&___nl__9);
#line 500
c_rt_lib0clear(&___nl__10);
#line 500
c_rt_lib0clear(&___nl__11);
#line 500
c_rt_lib0clear(&___nl__12);
#line 500
return ___nl__13;
#line 500
c_rt_lib0clear(&___nl__13);
#line 500
c_rt_lib0clear(&___nl__12);
#line 501
goto label_6;
#line 501
label_12:
#line 501
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 501
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(234)));
#line 501
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 501
if(c_rt_lib0check_true_native(___nl__11)){ goto label_19;}
#line 502
goto label_6;
#line 502
label_19:
#line 502
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 502
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__11, ___get_global_const(200)));
#line 502
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 502
if(c_rt_lib0check_true_native(___nl__11)){ goto label_20;}
#line 503
goto label_6;
#line 503
label_20:
#line 504
c_rt_lib0copy(&___nl__12, ___nl__2);
#line 504
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 504
if(c_rt_lib0check_true_native(___nl__12)){ goto label_22;}
#line 504
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 504
c_rt_lib0clear(&___nl__0);
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
c_rt_lib0clear(&___nl__6);
#line 504
c_rt_lib0clear(&___nl__7);
#line 504
c_rt_lib0clear(&___nl__8);
#line 504
c_rt_lib0clear(&___nl__9);
#line 504
c_rt_lib0clear(&___nl__10);
#line 504
c_rt_lib0clear(&___nl__11);
#line 504
c_rt_lib0clear(&___nl__12);
#line 504
return ___nl__13;
#line 504
c_rt_lib0clear(&___nl__13);
#line 504
goto label_22;
#line 504
label_22:
#line 504
c_rt_lib0clear(&___nl__12);
#line 505
goto label_6;
#line 505
label_6:
#line 505
c_rt_lib0clear(&___nl__11);
#line 505
c_rt_lib0clear(&___nl__10);
#line 505
label_4:
#line 506
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 506
goto label_5;
#line 506
label_3:
#line 506
c_rt_lib0clear(&___nl__4);
#line 506
c_rt_lib0clear(&___nl__5);
#line 506
c_rt_lib0clear(&___nl__6);
#line 506
c_rt_lib0clear(&___nl__7);
#line 506
c_rt_lib0clear(&___nl__8);
#line 506
c_rt_lib0clear(&___nl__9);
#line 507
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 507
c_rt_lib0clear(&___nl__0);
#line 507
c_rt_lib0clear(&___nl__1);
#line 507
c_rt_lib0clear(&___nl__2);
#line 507
c_rt_lib0clear(&___nl__3);
#line 507
return ___nl__4;
#line 507
c_rt_lib0clear(&___nl__4);
#line 507
c_rt_lib0clear(&___nl__1);
#line 507
c_rt_lib0clear(&___nl__2);
#line 507
c_rt_lib0clear(&___nl__3);
#line 507
c_rt_lib0clear(&___nl__0);
#line 507
return NULL;
}

ImmT generator_c_priv0move_args_to_register(ImmT * ___ref___0) {
generator_c_priv0__const__init();
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
#line 511
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(297)));
#line 511
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 511
c_rt_lib0clear(&___nl__2);
#line 511
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 511
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 511
label_3:
#line 511
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 511
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 512
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(297)));
#line 512
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 512
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(238)));
#line 512
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 515
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 515
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 515
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 515
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 515
nl_die_arg(___nl__6);
#line 512
label_5:
#line 513
c_rt_lib0move(&___nl__8,___get_global_const(391));
#line 513
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__2));
#line 513
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 513
c_rt_lib0clear(&___nl__10);
#line 513
c_rt_lib0move(&___nl__7, generator_c_priv0get_fun_lib(___nl__8, ___nl__9));
#line 513
c_rt_lib0clear(&___nl__9);
#line 513
c_rt_lib0clear(&___nl__8);
#line 513
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 513
c_rt_lib0clear(&___nl__7);
#line 514
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 514
c_rt_lib0delete(generator_c_priv0println(___ref___0, ___nl__7));
#line 514
c_rt_lib0clear(&___nl__7);
#line 515
goto label_4;
#line 515
label_6:
#line 516
goto label_4;
#line 516
label_4:
#line 516
c_rt_lib0clear(&___nl__5);
#line 516
c_rt_lib0clear(&___nl__6);
#line 517
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 517
goto label_3;
#line 517
label_1:
#line 517
c_rt_lib0clear(&___nl__1);
#line 517
c_rt_lib0clear(&___nl__2);
#line 517
c_rt_lib0clear(&___nl__3);
#line 517
c_rt_lib0clear(&___nl__4);
#line 517
return NULL;
}

ImmT generator_c_priv0move_register_to_ref_args(ImmT * ___ref___0) {
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 521
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(297)));
#line 521
c_rt_lib0move(&___nl__1, array0len(___nl__2));
#line 521
c_rt_lib0clear(&___nl__2);
#line 521
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 521
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 521
label_3:
#line 521
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__1));
#line 521
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 522
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(297)));
#line 522
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__2));
#line 522
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(238)));
#line 522
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 523
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(5)));
#line 523
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 523
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 523
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 523
nl_die_arg(___nl__6);
#line 522
label_5:
#line 523
goto label_4;
#line 523
label_6:
#line 524
goto label_4;
#line 524
label_4:
#line 524
c_rt_lib0clear(&___nl__5);
#line 524
c_rt_lib0clear(&___nl__6);
#line 525
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 525
goto label_3;
#line 525
label_1:
#line 525
c_rt_lib0clear(&___nl__1);
#line 525
c_rt_lib0clear(&___nl__2);
#line 525
c_rt_lib0clear(&___nl__3);
#line 525
c_rt_lib0clear(&___nl__4);
#line 525
return NULL;
}

ImmT generator_c_priv0get_fun_lib(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 529
c_rt_lib0move(&___nl__2, generator_c_priv0get_lib_fun(___nl__0));
#line 529
c_rt_lib0move(&___nl__3,___get_global_const(326));
#line 529
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 529
c_rt_lib0clear(&___nl__3);
#line 530
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 531
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 531
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 531
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__1));
#line 531
label_3:
#line 531
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 531
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 531
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__1, ___nl__5));
#line 532
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 532
c_rt_lib0move(&___nl__9, c_rt_lib0num_eq(___nl__9, ___nl__3));
#line 532
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 532
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 532
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 532
c_rt_lib0move(&___nl__10,___get_global_const(193));
#line 532
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 532
c_rt_lib0clear(&___nl__10);
#line 532
goto label_5;
#line 532
label_5:
#line 532
c_rt_lib0clear(&___nl__9);
#line 533
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__4));
#line 534
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 534
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__9));
#line 534
c_rt_lib0clear(&___nl__9);
#line 535
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 535
goto label_3;
#line 535
label_1:
#line 535
c_rt_lib0clear(&___nl__4);
#line 535
c_rt_lib0clear(&___nl__5);
#line 535
c_rt_lib0clear(&___nl__6);
#line 535
c_rt_lib0clear(&___nl__7);
#line 535
c_rt_lib0clear(&___nl__8);
#line 536
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 536
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__2, ___nl__4));
#line 536
c_rt_lib0clear(&___nl__0);
#line 536
c_rt_lib0clear(&___nl__1);
#line 536
c_rt_lib0clear(&___nl__2);
#line 536
c_rt_lib0clear(&___nl__3);
#line 536
return ___nl__4;
#line 536
c_rt_lib0clear(&___nl__4);
#line 536
c_rt_lib0clear(&___nl__2);
#line 536
c_rt_lib0clear(&___nl__3);
#line 536
c_rt_lib0clear(&___nl__0);
#line 536
c_rt_lib0clear(&___nl__1);
#line 536
return NULL;
}

ImmT generator_c_priv0get_module_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 540
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 540
c_rt_lib0move(&___nl__3,___get_global_const(392));
#line 540
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 540
c_rt_lib0clear(&___nl__3);
#line 540
c_rt_lib0clear(&___nl__2);
#line 540
c_rt_lib0clear(&___nl__0);
#line 540
return ___nl__1;
#line 540
c_rt_lib0clear(&___nl__1);
#line 540
c_rt_lib0clear(&___nl__0);
#line 540
return NULL;
}

ImmT generator_c_priv0get_fun_name(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 544
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 544
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__0, ___nl__3));
#line 544
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 544
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 544
c_rt_lib0move(&___nl__4,___get_global_const(393));
#line 544
c_rt_lib0move(&___nl__4, c_rt_lib0concat_new(___nl__2, ___nl__4));
#line 544
c_rt_lib0copy(&___nl__0, ___nl__4);
#line 544
c_rt_lib0clear(&___nl__4);
#line 544
goto label_2;
#line 544
label_2:
#line 544
c_rt_lib0clear(&___nl__3);
#line 545
c_rt_lib0move(&___nl__3, generator_c_priv0get_module_name(___nl__0));
#line 545
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 545
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 545
c_rt_lib0clear(&___nl__4);
#line 545
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 545
c_rt_lib0move(&___nl__6,___get_global_const(392));
#line 545
c_rt_lib0move(&___nl__4, string0replace(___nl__1, ___nl__5, ___nl__6));
#line 545
c_rt_lib0clear(&___nl__6);
#line 545
c_rt_lib0clear(&___nl__5);
#line 545
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 545
c_rt_lib0clear(&___nl__4);
#line 545
c_rt_lib0clear(&___nl__0);
#line 545
c_rt_lib0clear(&___nl__1);
#line 545
c_rt_lib0clear(&___nl__2);
#line 545
return ___nl__3;
#line 545
c_rt_lib0clear(&___nl__3);
#line 545
c_rt_lib0clear(&___nl__0);
#line 545
c_rt_lib0clear(&___nl__1);
#line 545
c_rt_lib0clear(&___nl__2);
#line 545
return NULL;
}

ImmT generator_c_priv0get_lib_fun(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 549
c_rt_lib0move(&___nl__2,___get_global_const(306));
#line 549
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 549
c_rt_lib0move(&___nl__1, generator_c_priv0get_fun_name(___nl__2, ___nl__0, ___nl__3));
#line 549
c_rt_lib0clear(&___nl__3);
#line 549
c_rt_lib0clear(&___nl__2);
#line 549
c_rt_lib0clear(&___nl__0);
#line 549
return ___nl__1;
#line 549
c_rt_lib0clear(&___nl__1);
#line 549
c_rt_lib0clear(&___nl__0);
#line 549
return NULL;
}

ImmT generator_c_priv0generate_imm(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 553
c_rt_lib0move(&___nl__2, nl0is_hash(___nl__1));
#line 553
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 553
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 554
c_rt_lib0move(&___nl__4,___get_global_const(394));
#line 554
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 554
c_rt_lib0clear(&___nl__4);
#line 554
c_rt_lib0move(&___nl__4,___get_global_const(326));
#line 554
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 554
c_rt_lib0clear(&___nl__4);
#line 554
c_rt_lib0move(&___nl__4, hash0size(___nl__1));
#line 554
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 554
c_rt_lib0clear(&___nl__4);
#line 554
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 554
c_rt_lib0clear(&___nl__3);
#line 555
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__1));
#line 555
label_5:
#line 555
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 555
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 555
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 555
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__1, ___nl__3));
#line 556
c_rt_lib0move(&___nl__6,___get_global_const(193));
#line 556
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 556
c_rt_lib0clear(&___nl__6);
#line 557
c_rt_lib0move(&___nl__6, generator_c_priv0get_const_sim(___ref___0, ___nl__3));
#line 557
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 557
c_rt_lib0clear(&___nl__6);
#line 558
c_rt_lib0move(&___nl__6,___get_global_const(193));
#line 558
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 558
c_rt_lib0clear(&___nl__6);
#line 559
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__4));
#line 560
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 560
goto label_5;
#line 560
label_3:
#line 560
c_rt_lib0clear(&___nl__3);
#line 560
c_rt_lib0clear(&___nl__4);
#line 560
c_rt_lib0clear(&___nl__5);
#line 561
c_rt_lib0move(&___nl__3,___get_global_const(181));
#line 561
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 561
c_rt_lib0clear(&___nl__3);
#line 562
goto label_1;
#line 562
label_2:
#line 562
c_rt_lib0move(&___nl__2, nl0is_array(___nl__1));
#line 562
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 562
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 563
c_rt_lib0move(&___nl__4,___get_global_const(395));
#line 563
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 563
c_rt_lib0clear(&___nl__4);
#line 563
c_rt_lib0move(&___nl__4,___get_global_const(326));
#line 563
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 563
c_rt_lib0clear(&___nl__4);
#line 563
c_rt_lib0move(&___nl__4, array0len(___nl__1));
#line 563
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 563
c_rt_lib0clear(&___nl__4);
#line 563
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 563
c_rt_lib0clear(&___nl__3);
#line 564
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 564
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 564
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__1));
#line 564
label_9:
#line 564
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 564
if(c_rt_lib0check_true_native(___nl__7)){ goto label_7;}
#line 564
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__1, ___nl__4));
#line 565
c_rt_lib0move(&___nl__8,___get_global_const(193));
#line 565
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__8));
#line 565
c_rt_lib0clear(&___nl__8);
#line 566
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__3));
#line 567
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 567
goto label_9;
#line 567
label_7:
#line 567
c_rt_lib0clear(&___nl__3);
#line 567
c_rt_lib0clear(&___nl__4);
#line 567
c_rt_lib0clear(&___nl__5);
#line 567
c_rt_lib0clear(&___nl__6);
#line 567
c_rt_lib0clear(&___nl__7);
#line 568
c_rt_lib0move(&___nl__3,___get_global_const(181));
#line 568
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 568
c_rt_lib0clear(&___nl__3);
#line 569
goto label_1;
#line 569
label_6:
#line 569
c_rt_lib0move(&___nl__2, nl0is_variant(___nl__1));
#line 569
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 569
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 570
c_rt_lib0move(&___nl__5, ptd0sim());
#line 570
c_rt_lib0move(&___nl__6, ov0get_element(___nl__1));
#line 570
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 570
c_rt_lib0clear(&___nl__6);
#line 570
c_rt_lib0clear(&___nl__5);
#line 570
c_rt_lib0move(&___nl__3, generator_c_priv0get_const_sim(___ref___0, ___nl__4));
#line 570
c_rt_lib0clear(&___nl__4);
#line 571
c_rt_lib0move(&___nl__4, ov0has_value(___nl__1));
#line 571
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 571
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 572
c_rt_lib0move(&___nl__6,___get_global_const(396));
#line 572
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 572
c_rt_lib0clear(&___nl__6);
#line 572
c_rt_lib0move(&___nl__6,___get_global_const(326));
#line 572
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 572
c_rt_lib0clear(&___nl__6);
#line 572
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 572
c_rt_lib0move(&___nl__6,___get_global_const(193));
#line 572
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 572
c_rt_lib0clear(&___nl__6);
#line 572
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 572
c_rt_lib0clear(&___nl__5);
#line 573
c_rt_lib0move(&___nl__5, ov0get_value(___nl__1));
#line 573
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__5));
#line 573
c_rt_lib0clear(&___nl__5);
#line 574
c_rt_lib0move(&___nl__5,___get_global_const(181));
#line 574
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 574
c_rt_lib0clear(&___nl__5);
#line 575
goto label_11;
#line 575
label_12:
#line 576
c_rt_lib0move(&___nl__6,___get_global_const(397));
#line 576
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 576
c_rt_lib0clear(&___nl__6);
#line 576
c_rt_lib0move(&___nl__6,___get_global_const(326));
#line 576
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 576
c_rt_lib0clear(&___nl__6);
#line 576
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 576
c_rt_lib0move(&___nl__6,___get_global_const(181));
#line 576
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 576
c_rt_lib0clear(&___nl__6);
#line 576
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 576
c_rt_lib0clear(&___nl__5);
#line 577
goto label_11;
#line 577
label_11:
#line 577
c_rt_lib0clear(&___nl__4);
#line 577
c_rt_lib0clear(&___nl__3);
#line 578
goto label_1;
#line 578
label_10:
#line 578
c_rt_lib0move(&___nl__2, nl0is_sim(___nl__1));
#line 578
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 578
if(c_rt_lib0check_true_native(___nl__2)){ goto label_13;}
#line 579
c_rt_lib0move(&___nl__5, ptd0sim());
#line 579
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__1));
#line 579
c_rt_lib0clear(&___nl__5);
#line 579
c_rt_lib0move(&___nl__3, generator_c_priv0get_const_sim(___ref___0, ___nl__4));
#line 579
c_rt_lib0clear(&___nl__4);
#line 579
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 579
c_rt_lib0clear(&___nl__3);
#line 580
goto label_1;
#line 580
label_13:
#line 581
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 581
nl_die_arg(___nl__3);
#line 581
c_rt_lib0clear(&___nl__3);
#line 582
goto label_1;
#line 582
label_1:
#line 582
c_rt_lib0clear(&___nl__2);
#line 582
c_rt_lib0clear(&___nl__1);
#line 582
return NULL;
}

ImmT generator_c_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
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
#line 586
c_rt_lib0move(&___nl__2,___get_global_const(398));
#line 586
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(217)));
#line 586
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(399)));
#line 586
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(400)));
#line 586
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(113)));
#line 586
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 586
c_rt_lib0clear(&___nl__3);
#line 586
c_rt_lib0move(&___nl__3, string0lf());
#line 586
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 586
c_rt_lib0clear(&___nl__3);
#line 586
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 586
c_rt_lib0clear(&___nl__2);
#line 587
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(214)));
#line 587
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(219)));
#line 587
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 592
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(220)));
#line 592
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 600
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(72)));
#line 600
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 607
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(221)));
#line 607
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 609
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(222)));
#line 609
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 613
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(223)));
#line 613
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 620
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(224)));
#line 620
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 623
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(225)));
#line 623
if(c_rt_lib0check_true_native(___nl__3)){ goto label_9;}
#line 626
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(75)));
#line 626
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 634
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(233)));
#line 634
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 636
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(226)));
#line 636
if(c_rt_lib0check_true_native(___nl__3)){ goto label_12;}
#line 640
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(227)));
#line 640
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 645
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(228)));
#line 645
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 648
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(229)));
#line 648
if(c_rt_lib0check_true_native(___nl__3)){ goto label_15;}
#line 654
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(230)));
#line 654
if(c_rt_lib0check_true_native(___nl__3)){ goto label_16;}
#line 657
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(231)));
#line 657
if(c_rt_lib0check_true_native(___nl__3)){ goto label_17;}
#line 663
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(232)));
#line 663
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 677
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(234)));
#line 677
if(c_rt_lib0check_true_native(___nl__3)){ goto label_19;}
#line 680
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(235)));
#line 680
if(c_rt_lib0check_true_native(___nl__3)){ goto label_20;}
#line 685
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(236)));
#line 685
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 687
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(200)));
#line 687
if(c_rt_lib0check_true_native(___nl__3)){ goto label_22;}
#line 687
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 687
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 687
nl_die_arg(___nl__3);
#line 587
label_2:
#line 587
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(219)));
#line 588
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 588
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 588
c_rt_lib0clear(&___nl__7);
#line 588
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 588
c_rt_lib0clear(&___nl__6);
#line 589
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 589
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 589
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 589
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 589
label_25:
#line 589
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 589
if(c_rt_lib0check_true_native(___nl__11)){ goto label_23;}
#line 589
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 589
c_rt_lib0move(&___nl__12, generator_c_priv0get_reg(___ref___0, ___nl__7));
#line 589
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 589
c_rt_lib0clear(&___nl__12);
#line 589
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 589
goto label_25;
#line 589
label_23:
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
#line 590
c_rt_lib0move(&___nl__7,___get_global_const(401));
#line 590
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__7, ___nl__5));
#line 590
c_rt_lib0clear(&___nl__7);
#line 591
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 591
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 591
c_rt_lib0clear(&___nl__8);
#line 591
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 591
c_rt_lib0clear(&___nl__7);
#line 591
c_rt_lib0clear(&___nl__5);
#line 591
c_rt_lib0clear(&___nl__6);
#line 591
c_rt_lib0clear(&___nl__4);
#line 592
goto label_1;
#line 592
label_3:
#line 592
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(220)));
#line 593
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 593
c_rt_lib0move(&___nl__6, array0len(___nl__7));
#line 593
c_rt_lib0clear(&___nl__7);
#line 593
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 593
c_rt_lib0clear(&___nl__6);
#line 594
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 594
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 594
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 594
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 594
label_28:
#line 594
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 594
if(c_rt_lib0check_true_native(___nl__11)){ goto label_26;}
#line 594
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 595
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(283)));
#line 595
c_rt_lib0move(&___nl__12, generator_c_priv0get_const_sim(___ref___0, ___nl__13));
#line 595
c_rt_lib0clear(&___nl__13);
#line 595
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 595
c_rt_lib0clear(&___nl__12);
#line 596
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(238)));
#line 596
c_rt_lib0move(&___nl__12, generator_c_priv0get_reg(___ref___0, ___nl__13));
#line 596
c_rt_lib0clear(&___nl__13);
#line 596
c_rt_lib0delete(array0push(&___nl__5, ___nl__12));
#line 596
c_rt_lib0clear(&___nl__12);
#line 597
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 597
goto label_28;
#line 597
label_26:
#line 597
c_rt_lib0clear(&___nl__6);
#line 597
c_rt_lib0clear(&___nl__7);
#line 597
c_rt_lib0clear(&___nl__8);
#line 597
c_rt_lib0clear(&___nl__9);
#line 597
c_rt_lib0clear(&___nl__10);
#line 597
c_rt_lib0clear(&___nl__11);
#line 598
c_rt_lib0move(&___nl__7,___get_global_const(402));
#line 598
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__7, ___nl__5));
#line 598
c_rt_lib0clear(&___nl__7);
#line 599
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 599
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 599
c_rt_lib0clear(&___nl__8);
#line 599
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 599
c_rt_lib0clear(&___nl__7);
#line 599
c_rt_lib0clear(&___nl__5);
#line 599
c_rt_lib0clear(&___nl__6);
#line 599
c_rt_lib0clear(&___nl__4);
#line 600
goto label_1;
#line 600
label_4:
#line 600
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(72)));
#line 601
c_rt_lib0move(&___nl__6,___get_global_const(403));
#line 601
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(111)));
#line 601
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 601
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 601
c_rt_lib0move(&___nl__8, generator_c_priv0get_fun_name(___nl__9, ___nl__10, ___nl__11));
#line 601
c_rt_lib0clear(&___nl__11);
#line 601
c_rt_lib0clear(&___nl__10);
#line 601
c_rt_lib0clear(&___nl__9);
#line 601
c_rt_lib0move(&___nl__9,___get_global_const(404));
#line 601
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 601
c_rt_lib0clear(&___nl__9);
#line 601
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(111)));
#line 601
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 601
c_rt_lib0clear(&___nl__10);
#line 601
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 601
c_rt_lib0move(&___nl__10, generator_c_priv0get_const_sim(___ref___0, ___nl__11));
#line 601
c_rt_lib0clear(&___nl__11);
#line 601
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 601
c_rt_lib0clear(&___nl__8);
#line 601
c_rt_lib0clear(&___nl__9);
#line 601
c_rt_lib0clear(&___nl__10);
#line 601
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 601
c_rt_lib0clear(&___nl__7);
#line 601
c_rt_lib0clear(&___nl__6);
#line 606
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 606
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 606
c_rt_lib0clear(&___nl__7);
#line 606
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 606
c_rt_lib0clear(&___nl__6);
#line 606
c_rt_lib0clear(&___nl__5);
#line 606
c_rt_lib0clear(&___nl__4);
#line 607
goto label_1;
#line 607
label_5:
#line 607
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(221)));
#line 608
c_rt_lib0delete(generator_c_priv0generate_call(___ref___0, ___nl__4));
#line 608
c_rt_lib0clear(&___nl__4);
#line 609
goto label_1;
#line 609
label_6:
#line 609
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(222)));
#line 610
c_rt_lib0move(&___nl__6, generator_c_priv0get_unary_ops());
#line 610
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(405)));
#line 610
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__7));
#line 610
c_rt_lib0clear(&___nl__7);
#line 610
c_rt_lib0clear(&___nl__6);
#line 611
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 611
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 611
c_rt_lib0clear(&___nl__9);
#line 611
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 611
c_rt_lib0clear(&___nl__8);
#line 611
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__5, ___nl__7));
#line 611
c_rt_lib0clear(&___nl__7);
#line 612
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 612
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 612
c_rt_lib0clear(&___nl__8);
#line 612
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 612
c_rt_lib0clear(&___nl__7);
#line 612
c_rt_lib0clear(&___nl__5);
#line 612
c_rt_lib0clear(&___nl__6);
#line 612
c_rt_lib0clear(&___nl__4);
#line 613
goto label_1;
#line 613
label_7:
#line 613
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(223)));
#line 614
c_rt_lib0move(&___nl__6, generator_c_priv0get_bin_ops());
#line 614
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(405)));
#line 614
c_rt_lib0move(&___nl__5, hash0get_value(___nl__6, ___nl__7));
#line 614
c_rt_lib0clear(&___nl__7);
#line 614
c_rt_lib0clear(&___nl__6);
#line 615
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 615
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(239)));
#line 615
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 615
c_rt_lib0clear(&___nl__8);
#line 615
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 615
if(c_rt_lib0check_true_native(___nl__7)){ goto label_31;}
#line 615
c_rt_lib0move(&___nl__8, generator_c_priv0get_bin_ops_mod());
#line 615
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(405)));
#line 615
c_rt_lib0move(&___nl__6, hash0has_key(___nl__8, ___nl__9));
#line 615
c_rt_lib0clear(&___nl__9);
#line 615
c_rt_lib0clear(&___nl__8);
#line 615
label_31:
#line 615
c_rt_lib0clear(&___nl__7);
#line 615
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 615
if(c_rt_lib0check_true_native(___nl__6)){ goto label_30;}
#line 616
c_rt_lib0move(&___nl__8, generator_c_priv0get_bin_ops_mod());
#line 616
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(405)));
#line 616
c_rt_lib0move(&___nl__7, hash0get_value(___nl__8, ___nl__9));
#line 616
c_rt_lib0clear(&___nl__9);
#line 616
c_rt_lib0clear(&___nl__8);
#line 616
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 616
c_rt_lib0clear(&___nl__7);
#line 617
goto label_30;
#line 617
label_30:
#line 617
c_rt_lib0clear(&___nl__6);
#line 618
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(239)));
#line 618
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 618
c_rt_lib0clear(&___nl__9);
#line 618
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(240)));
#line 618
c_rt_lib0move(&___nl__9, generator_c_priv0get_reg(___ref___0, ___nl__10));
#line 618
c_rt_lib0clear(&___nl__10);
#line 618
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 618
c_rt_lib0clear(&___nl__8);
#line 618
c_rt_lib0clear(&___nl__9);
#line 618
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__5, ___nl__7));
#line 618
c_rt_lib0clear(&___nl__7);
#line 619
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 619
c_rt_lib0move(&___nl__7, generator_c_priv0get_assign(___ref___0, ___nl__8, ___nl__6));
#line 619
c_rt_lib0clear(&___nl__8);
#line 619
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 619
c_rt_lib0clear(&___nl__7);
#line 619
c_rt_lib0clear(&___nl__5);
#line 619
c_rt_lib0clear(&___nl__6);
#line 619
c_rt_lib0clear(&___nl__4);
#line 620
goto label_1;
#line 620
label_8:
#line 620
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(224)));
#line 621
c_rt_lib0move(&___nl__6,___get_global_const(406));
#line 621
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 621
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 621
c_rt_lib0clear(&___nl__9);
#line 621
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 621
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 621
c_rt_lib0clear(&___nl__10);
#line 621
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 621
c_rt_lib0clear(&___nl__8);
#line 621
c_rt_lib0clear(&___nl__9);
#line 621
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 621
c_rt_lib0clear(&___nl__7);
#line 621
c_rt_lib0clear(&___nl__6);
#line 622
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 622
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 622
c_rt_lib0clear(&___nl__7);
#line 622
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 622
c_rt_lib0clear(&___nl__6);
#line 622
c_rt_lib0clear(&___nl__5);
#line 622
c_rt_lib0clear(&___nl__4);
#line 623
goto label_1;
#line 623
label_9:
#line 623
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(225)));
#line 624
c_rt_lib0move(&___nl__6,___get_global_const(407));
#line 624
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 624
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 624
c_rt_lib0clear(&___nl__9);
#line 624
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(73)));
#line 624
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 624
c_rt_lib0clear(&___nl__10);
#line 624
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 624
c_rt_lib0clear(&___nl__8);
#line 624
c_rt_lib0clear(&___nl__9);
#line 624
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 624
c_rt_lib0clear(&___nl__7);
#line 624
c_rt_lib0clear(&___nl__6);
#line 625
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 625
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 625
c_rt_lib0clear(&___nl__7);
#line 625
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 625
c_rt_lib0clear(&___nl__6);
#line 625
c_rt_lib0clear(&___nl__5);
#line 625
c_rt_lib0clear(&___nl__4);
#line 626
goto label_1;
#line 626
label_10:
#line 626
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(75)));
#line 627
c_rt_lib0delete(generator_c_priv0move_register_to_ref_args(___ref___0));
#line 628
c_rt_lib0move(&___nl__5,___get_global_const(352));
#line 628
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 628
c_rt_lib0clear(&___nl__5);
#line 629
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(238)));
#line 629
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 631
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(215)));
#line 631
if(c_rt_lib0check_true_native(___nl__5)){ goto label_34;}
#line 631
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 631
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 631
nl_die_arg(___nl__5);
#line 629
label_33:
#line 629
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(238)));
#line 630
c_rt_lib0move(&___nl__7, generator_c_priv0get_reg(___ref___0, ___nl__6));
#line 630
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__7));
#line 630
c_rt_lib0clear(&___nl__7);
#line 630
c_rt_lib0clear(&___nl__6);
#line 631
goto label_32;
#line 631
label_34:
#line 632
c_rt_lib0move(&___nl__6,___get_global_const(408));
#line 632
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 632
c_rt_lib0clear(&___nl__6);
#line 633
goto label_32;
#line 633
label_32:
#line 633
c_rt_lib0clear(&___nl__5);
#line 633
c_rt_lib0clear(&___nl__4);
#line 634
goto label_1;
#line 634
label_11:
#line 634
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(233)));
#line 635
c_rt_lib0move(&___nl__5,___get_global_const(409));
#line 635
c_rt_lib0move(&___nl__6, generator_c_priv0get_reg(___ref___0, ___nl__4));
#line 635
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 635
c_rt_lib0clear(&___nl__6);
#line 635
c_rt_lib0move(&___nl__6,___get_global_const(181));
#line 635
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 635
c_rt_lib0clear(&___nl__6);
#line 635
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 635
c_rt_lib0clear(&___nl__5);
#line 635
c_rt_lib0clear(&___nl__4);
#line 636
goto label_1;
#line 636
label_12:
#line 636
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(226)));
#line 637
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 637
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 637
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 637
c_rt_lib0clear(&___nl__6);
#line 637
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 637
if(c_rt_lib0check_true_native(___nl__5)){ goto label_36;}
#line 637
c_rt_lib0clear(&___nl__1);
#line 637
c_rt_lib0clear(&___nl__2);
#line 637
c_rt_lib0clear(&___nl__3);
#line 637
c_rt_lib0clear(&___nl__4);
#line 637
c_rt_lib0clear(&___nl__5);
#line 637
return NULL;
#line 637
goto label_36;
#line 637
label_36:
#line 637
c_rt_lib0clear(&___nl__5);
#line 638
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 638
c_rt_lib0move(&___nl__6, generator_c_priv0get_reg_ref(___ref___0, ___nl__7));
#line 638
c_rt_lib0clear(&___nl__7);
#line 638
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 638
c_rt_lib0move(&___nl__7, generator_c_priv0get_reg(___ref___0, ___nl__8));
#line 638
c_rt_lib0clear(&___nl__8);
#line 638
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 638
c_rt_lib0clear(&___nl__6);
#line 638
c_rt_lib0clear(&___nl__7);
#line 639
c_rt_lib0move(&___nl__7,___get_global_const(324));
#line 639
c_rt_lib0move(&___nl__6, generator_c_priv0get_fun_lib(___nl__7, ___nl__5));
#line 639
c_rt_lib0clear(&___nl__7);
#line 639
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 639
c_rt_lib0clear(&___nl__6);
#line 639
c_rt_lib0clear(&___nl__5);
#line 639
c_rt_lib0clear(&___nl__4);
#line 640
goto label_1;
#line 640
label_13:
#line 640
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(227)));
#line 641
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 641
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 641
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__5, ___nl__6));
#line 641
c_rt_lib0clear(&___nl__6);
#line 641
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 641
if(c_rt_lib0check_true_native(___nl__5)){ goto label_38;}
#line 641
c_rt_lib0clear(&___nl__1);
#line 641
c_rt_lib0clear(&___nl__2);
#line 641
c_rt_lib0clear(&___nl__3);
#line 641
c_rt_lib0clear(&___nl__4);
#line 641
c_rt_lib0clear(&___nl__5);
#line 641
return NULL;
#line 641
goto label_38;
#line 641
label_38:
#line 641
c_rt_lib0clear(&___nl__5);
#line 642
c_rt_lib0move(&___nl__6,___get_global_const(226));
#line 642
c_rt_lib0move(&___nl__5, generator_c_priv0get_lib_fun(___nl__6));
#line 642
c_rt_lib0clear(&___nl__6);
#line 642
c_rt_lib0move(&___nl__6,___get_global_const(326));
#line 642
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 642
c_rt_lib0clear(&___nl__6);
#line 642
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 642
c_rt_lib0move(&___nl__6, generator_c_priv0get_reg_ref(___ref___0, ___nl__7));
#line 642
c_rt_lib0clear(&___nl__7);
#line 642
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 642
c_rt_lib0clear(&___nl__6);
#line 642
c_rt_lib0move(&___nl__6,___get_global_const(177));
#line 642
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 642
c_rt_lib0clear(&___nl__6);
#line 642
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 642
c_rt_lib0clear(&___nl__5);
#line 643
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 643
c_rt_lib0delete(generator_c_priv0generate_imm(___ref___0, ___nl__5));
#line 643
c_rt_lib0clear(&___nl__5);
#line 644
c_rt_lib0move(&___nl__5,___get_global_const(181));
#line 644
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 644
c_rt_lib0clear(&___nl__5);
#line 644
c_rt_lib0clear(&___nl__4);
#line 645
goto label_1;
#line 645
label_14:
#line 645
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(228)));
#line 646
c_rt_lib0move(&___nl__6,___get_global_const(410));
#line 646
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 646
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 646
c_rt_lib0clear(&___nl__9);
#line 646
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(241)));
#line 646
c_rt_lib0move(&___nl__9, generator_c_priv0get_reg(___ref___0, ___nl__10));
#line 646
c_rt_lib0clear(&___nl__10);
#line 646
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 646
c_rt_lib0clear(&___nl__8);
#line 646
c_rt_lib0clear(&___nl__9);
#line 646
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 646
c_rt_lib0clear(&___nl__7);
#line 646
c_rt_lib0clear(&___nl__6);
#line 647
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 647
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 647
c_rt_lib0clear(&___nl__7);
#line 647
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 647
c_rt_lib0clear(&___nl__6);
#line 647
c_rt_lib0clear(&___nl__5);
#line 647
c_rt_lib0clear(&___nl__4);
#line 648
goto label_1;
#line 648
label_15:
#line 648
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(229)));
#line 649
c_rt_lib0move(&___nl__6,___get_global_const(411));
#line 649
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 649
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg_ref(___ref___0, ___nl__9));
#line 649
c_rt_lib0clear(&___nl__9);
#line 649
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(241)));
#line 649
c_rt_lib0move(&___nl__9, generator_c_priv0get_reg(___ref___0, ___nl__10));
#line 649
c_rt_lib0clear(&___nl__10);
#line 649
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 649
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__11));
#line 649
c_rt_lib0clear(&___nl__11);
#line 649
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 649
c_rt_lib0clear(&___nl__8);
#line 649
c_rt_lib0clear(&___nl__9);
#line 649
c_rt_lib0clear(&___nl__10);
#line 649
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 649
c_rt_lib0clear(&___nl__7);
#line 649
c_rt_lib0clear(&___nl__6);
#line 649
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 649
c_rt_lib0clear(&___nl__5);
#line 649
c_rt_lib0clear(&___nl__4);
#line 654
goto label_1;
#line 654
label_16:
#line 654
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(230)));
#line 655
c_rt_lib0move(&___nl__6,___get_global_const(412));
#line 655
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 655
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 655
c_rt_lib0clear(&___nl__9);
#line 655
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(283)));
#line 655
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 655
c_rt_lib0clear(&___nl__10);
#line 655
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 655
c_rt_lib0clear(&___nl__8);
#line 655
c_rt_lib0clear(&___nl__9);
#line 655
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 655
c_rt_lib0clear(&___nl__7);
#line 655
c_rt_lib0clear(&___nl__6);
#line 656
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 656
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 656
c_rt_lib0clear(&___nl__7);
#line 656
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 656
c_rt_lib0clear(&___nl__6);
#line 656
c_rt_lib0clear(&___nl__5);
#line 656
c_rt_lib0clear(&___nl__4);
#line 657
goto label_1;
#line 657
label_17:
#line 657
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(231)));
#line 658
c_rt_lib0move(&___nl__6,___get_global_const(413));
#line 658
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 658
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg_ref(___ref___0, ___nl__9));
#line 658
c_rt_lib0clear(&___nl__9);
#line 658
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(283)));
#line 658
c_rt_lib0move(&___nl__9, generator_c_priv0get_const_sim(___ref___0, ___nl__10));
#line 658
c_rt_lib0clear(&___nl__10);
#line 658
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 658
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__11));
#line 658
c_rt_lib0clear(&___nl__11);
#line 658
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 658
c_rt_lib0clear(&___nl__8);
#line 658
c_rt_lib0clear(&___nl__9);
#line 658
c_rt_lib0clear(&___nl__10);
#line 658
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 658
c_rt_lib0clear(&___nl__7);
#line 658
c_rt_lib0clear(&___nl__6);
#line 658
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 658
c_rt_lib0clear(&___nl__5);
#line 658
c_rt_lib0clear(&___nl__4);
#line 663
goto label_1;
#line 663
label_18:
#line 663
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(232)));
#line 665
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 665
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(215)));
#line 665
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 665
if(c_rt_lib0check_true_native(___nl__7)){ goto label_41;}
#line 665
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 665
c_rt_lib0move(&___nl__8,___get_global_const(6));
#line 665
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 665
c_rt_lib0clear(&___nl__8);
#line 665
label_41:
#line 665
c_rt_lib0clear(&___nl__7);
#line 665
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 665
if(c_rt_lib0check_true_native(___nl__6)){ goto label_40;}
#line 666
c_rt_lib0move(&___nl__8,___get_global_const(414));
#line 666
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 666
c_rt_lib0move(&___nl__7, generator_c_priv0get_fun_lib(___nl__8, ___nl__9));
#line 666
c_rt_lib0clear(&___nl__9);
#line 666
c_rt_lib0clear(&___nl__8);
#line 666
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 666
c_rt_lib0clear(&___nl__7);
#line 667
goto label_39;
#line 667
label_40:
#line 667
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 667
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(215)));
#line 667
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__6));
#line 667
if(c_rt_lib0check_true_native(___nl__7)){ goto label_43;}
#line 667
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 667
c_rt_lib0move(&___nl__8,___get_global_const(7));
#line 667
c_rt_lib0move(&___nl__6, c_rt_lib0eq(___nl__6, ___nl__8));
#line 667
c_rt_lib0clear(&___nl__8);
#line 667
label_43:
#line 667
c_rt_lib0clear(&___nl__7);
#line 667
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 667
if(c_rt_lib0check_true_native(___nl__6)){ goto label_42;}
#line 668
c_rt_lib0move(&___nl__8,___get_global_const(415));
#line 668
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 668
c_rt_lib0move(&___nl__7, generator_c_priv0get_fun_lib(___nl__8, ___nl__9));
#line 668
c_rt_lib0clear(&___nl__9);
#line 668
c_rt_lib0clear(&___nl__8);
#line 668
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 668
c_rt_lib0clear(&___nl__7);
#line 669
goto label_39;
#line 669
label_42:
#line 670
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 670
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(242)));
#line 670
if(c_rt_lib0check_true_native(___nl__8)){ goto label_45;}
#line 672
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(215)));
#line 672
if(c_rt_lib0check_true_native(___nl__8)){ goto label_46;}
#line 672
c_rt_lib0move(&___nl__8,___get_global_const(76));
#line 672
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 672
nl_die_arg(___nl__8);
#line 670
label_45:
#line 670
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(242)));
#line 671
c_rt_lib0move(&___nl__11,___get_global_const(416));
#line 671
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 671
c_rt_lib0move(&___nl__13, generator_c_priv0get_const_sim(___ref___0, ___nl__14));
#line 671
c_rt_lib0clear(&___nl__14);
#line 671
c_rt_lib0move(&___nl__14, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 671
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 671
c_rt_lib0clear(&___nl__13);
#line 671
c_rt_lib0clear(&___nl__14);
#line 671
c_rt_lib0move(&___nl__10, generator_c_priv0get_fun_lib(___nl__11, ___nl__12));
#line 671
c_rt_lib0clear(&___nl__12);
#line 671
c_rt_lib0clear(&___nl__11);
#line 671
c_rt_lib0copy(&___nl__5, ___nl__10);
#line 671
c_rt_lib0clear(&___nl__10);
#line 671
c_rt_lib0clear(&___nl__9);
#line 672
goto label_44;
#line 672
label_46:
#line 673
c_rt_lib0move(&___nl__10,___get_global_const(397));
#line 673
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 673
c_rt_lib0move(&___nl__12, generator_c_priv0get_const_sim(___ref___0, ___nl__13));
#line 673
c_rt_lib0clear(&___nl__13);
#line 673
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(1, ___nl__12));
#line 673
c_rt_lib0clear(&___nl__12);
#line 673
c_rt_lib0move(&___nl__9, generator_c_priv0get_fun_lib(___nl__10, ___nl__11));
#line 673
c_rt_lib0clear(&___nl__11);
#line 673
c_rt_lib0clear(&___nl__10);
#line 673
c_rt_lib0copy(&___nl__5, ___nl__9);
#line 673
c_rt_lib0clear(&___nl__9);
#line 674
goto label_44;
#line 674
label_44:
#line 674
c_rt_lib0clear(&___nl__7);
#line 674
c_rt_lib0clear(&___nl__8);
#line 675
goto label_39;
#line 675
label_39:
#line 675
c_rt_lib0clear(&___nl__6);
#line 676
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 676
c_rt_lib0move(&___nl__6, generator_c_priv0get_assign(___ref___0, ___nl__7, ___nl__5));
#line 676
c_rt_lib0clear(&___nl__7);
#line 676
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__6));
#line 676
c_rt_lib0clear(&___nl__6);
#line 676
c_rt_lib0clear(&___nl__5);
#line 676
c_rt_lib0clear(&___nl__4);
#line 677
goto label_1;
#line 677
label_19:
#line 677
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(234)));
#line 678
c_rt_lib0move(&___nl__5,___get_global_const(375));
#line 678
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__4, ___nl__5));
#line 678
c_rt_lib0move(&___nl__6, string0lf());
#line 678
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 678
c_rt_lib0clear(&___nl__6);
#line 678
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 678
c_rt_lib0clear(&___nl__5);
#line 679
c_rt_lib0clear(&___nl__1);
#line 679
c_rt_lib0clear(&___nl__2);
#line 679
c_rt_lib0clear(&___nl__3);
#line 679
c_rt_lib0clear(&___nl__4);
#line 679
return NULL;
#line 679
c_rt_lib0clear(&___nl__4);
#line 680
goto label_1;
#line 680
label_20:
#line 680
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(235)));
#line 681
c_rt_lib0move(&___nl__5,___get_global_const(417));
#line 681
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 681
c_rt_lib0clear(&___nl__5);
#line 682
c_rt_lib0move(&___nl__6,___get_global_const(418));
#line 682
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(40)));
#line 682
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 682
c_rt_lib0clear(&___nl__9);
#line 682
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 682
c_rt_lib0clear(&___nl__8);
#line 682
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 682
c_rt_lib0clear(&___nl__7);
#line 682
c_rt_lib0clear(&___nl__6);
#line 682
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 682
c_rt_lib0clear(&___nl__5);
#line 683
c_rt_lib0move(&___nl__5,___get_global_const(419));
#line 683
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(237)));
#line 683
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 683
c_rt_lib0clear(&___nl__6);
#line 683
c_rt_lib0move(&___nl__6,___get_global_const(357));
#line 683
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 683
c_rt_lib0clear(&___nl__6);
#line 683
c_rt_lib0move(&___nl__6, string0lf());
#line 683
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 683
c_rt_lib0clear(&___nl__6);
#line 683
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 683
c_rt_lib0clear(&___nl__5);
#line 684
c_rt_lib0clear(&___nl__1);
#line 684
c_rt_lib0clear(&___nl__2);
#line 684
c_rt_lib0clear(&___nl__3);
#line 684
c_rt_lib0clear(&___nl__4);
#line 684
return NULL;
#line 684
c_rt_lib0clear(&___nl__4);
#line 685
goto label_1;
#line 685
label_21:
#line 685
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(236)));
#line 686
c_rt_lib0move(&___nl__5,___get_global_const(420));
#line 686
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 686
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 686
c_rt_lib0clear(&___nl__5);
#line 686
c_rt_lib0clear(&___nl__4);
#line 687
goto label_1;
#line 687
label_22:
#line 687
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(200)));
#line 688
c_rt_lib0move(&___nl__6,___get_global_const(200));
#line 688
c_rt_lib0move(&___nl__8, generator_c_priv0get_reg_ref(___ref___0, ___nl__4));
#line 688
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 688
c_rt_lib0clear(&___nl__8);
#line 688
c_rt_lib0move(&___nl__5, generator_c_priv0get_fun_lib(___nl__6, ___nl__7));
#line 688
c_rt_lib0clear(&___nl__7);
#line 688
c_rt_lib0clear(&___nl__6);
#line 688
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__5));
#line 688
c_rt_lib0clear(&___nl__5);
#line 688
c_rt_lib0clear(&___nl__4);
#line 689
goto label_1;
#line 689
label_1:
#line 689
c_rt_lib0clear(&___nl__2);
#line 689
c_rt_lib0clear(&___nl__3);
#line 690
c_rt_lib0move(&___nl__2,___get_global_const(315));
#line 690
c_rt_lib0move(&___nl__3, string0lf());
#line 690
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 690
c_rt_lib0clear(&___nl__3);
#line 690
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__2));
#line 690
c_rt_lib0clear(&___nl__2);
#line 690
c_rt_lib0clear(&___nl__1);
#line 690
return NULL;
}

ImmT generator_c_priv0get_assign(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
generator_c_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 694
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 694
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 694
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 694
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 695
c_rt_lib0move(&___nl__5,___get_global_const(130));
#line 695
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(1, ___nl__2));
#line 695
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_lib(___nl__5, ___nl__6));
#line 695
c_rt_lib0clear(&___nl__6);
#line 695
c_rt_lib0clear(&___nl__5);
#line 695
c_rt_lib0clear(&___nl__1);
#line 695
c_rt_lib0clear(&___nl__2);
#line 695
c_rt_lib0clear(&___nl__3);
#line 695
return ___nl__4;
#line 695
c_rt_lib0clear(&___nl__4);
#line 696
goto label_1;
#line 696
label_2:
#line 697
c_rt_lib0move(&___nl__5,___get_global_const(226));
#line 697
c_rt_lib0move(&___nl__7, generator_c_priv0get_reg_ref(___ref___0, ___nl__1));
#line 697
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__2));
#line 697
c_rt_lib0clear(&___nl__7);
#line 697
c_rt_lib0move(&___nl__4, generator_c_priv0get_fun_lib(___nl__5, ___nl__6));
#line 697
c_rt_lib0clear(&___nl__6);
#line 697
c_rt_lib0clear(&___nl__5);
#line 697
c_rt_lib0clear(&___nl__1);
#line 697
c_rt_lib0clear(&___nl__2);
#line 697
c_rt_lib0clear(&___nl__3);
#line 697
return ___nl__4;
#line 697
c_rt_lib0clear(&___nl__4);
#line 698
goto label_1;
#line 698
label_1:
#line 698
c_rt_lib0clear(&___nl__3);
#line 698
c_rt_lib0clear(&___nl__1);
#line 698
c_rt_lib0clear(&___nl__2);
#line 698
return NULL;
}

ImmT generator_c_priv0generate_call(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 702
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(261)));
#line 702
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(389)));
#line 702
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(296)));
#line 702
c_rt_lib0move(&___nl__2, generator_c_priv0get_fun_name(___nl__3, ___nl__4, ___nl__5));
#line 702
c_rt_lib0clear(&___nl__5);
#line 702
c_rt_lib0clear(&___nl__4);
#line 702
c_rt_lib0clear(&___nl__3);
#line 702
c_rt_lib0move(&___nl__3,___get_global_const(326));
#line 702
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 702
c_rt_lib0clear(&___nl__3);
#line 703
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 703
c_rt_lib0move(&___nl__3, array0len(___nl__4));
#line 703
c_rt_lib0clear(&___nl__4);
#line 703
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 703
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 703
label_3:
#line 703
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__4, ___nl__3));
#line 703
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 704
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 704
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__4));
#line 704
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 704
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 704
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 704
c_rt_lib0move(&___nl__8,___get_global_const(193));
#line 704
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__8));
#line 704
c_rt_lib0clear(&___nl__8);
#line 704
goto label_5;
#line 704
label_5:
#line 704
c_rt_lib0clear(&___nl__7);
#line 705
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 705
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__4));
#line 705
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(238)));
#line 705
if(c_rt_lib0check_true_native(___nl__8)){ goto label_7;}
#line 707
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(5)));
#line 707
if(c_rt_lib0check_true_native(___nl__8)){ goto label_8;}
#line 707
c_rt_lib0move(&___nl__8,___get_global_const(76));
#line 707
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 707
nl_die_arg(___nl__8);
#line 705
label_7:
#line 705
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(238)));
#line 706
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg(___ref___0, ___nl__9));
#line 706
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 706
c_rt_lib0clear(&___nl__10);
#line 706
c_rt_lib0clear(&___nl__9);
#line 707
goto label_6;
#line 707
label_8:
#line 707
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(5)));
#line 708
c_rt_lib0move(&___nl__10, generator_c_priv0get_reg_ref(___ref___0, ___nl__9));
#line 708
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__10));
#line 708
c_rt_lib0clear(&___nl__10);
#line 708
c_rt_lib0clear(&___nl__9);
#line 709
goto label_6;
#line 709
label_6:
#line 709
c_rt_lib0clear(&___nl__7);
#line 709
c_rt_lib0clear(&___nl__8);
#line 710
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 710
goto label_3;
#line 710
label_1:
#line 710
c_rt_lib0clear(&___nl__3);
#line 710
c_rt_lib0clear(&___nl__4);
#line 710
c_rt_lib0clear(&___nl__5);
#line 710
c_rt_lib0clear(&___nl__6);
#line 711
c_rt_lib0move(&___nl__3,___get_global_const(181));
#line 711
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 711
c_rt_lib0clear(&___nl__3);
#line 712
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(237)));
#line 712
c_rt_lib0move(&___nl__3, generator_c_priv0get_assign(___ref___0, ___nl__4, ___nl__2));
#line 712
c_rt_lib0clear(&___nl__4);
#line 712
c_rt_lib0delete(generator_c_priv0print(___ref___0, ___nl__3));
#line 712
c_rt_lib0clear(&___nl__3);
#line 712
c_rt_lib0clear(&___nl__2);
#line 712
c_rt_lib0clear(&___nl__1);
#line 712
return NULL;
}

ImmT generator_c_priv0create_sim(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
generator_c_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 716
c_rt_lib0move(&___nl__1, string_utils0is_integer(___nl__0));
#line 716
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 716
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 717
c_rt_lib0move(&___nl__3,___get_global_const(421));
#line 717
c_rt_lib0move(&___nl__2, generator_c_priv0get_lib_fun(___nl__3));
#line 717
c_rt_lib0clear(&___nl__3);
#line 717
c_rt_lib0move(&___nl__3,___get_global_const(326));
#line 717
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 717
c_rt_lib0clear(&___nl__3);
#line 717
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 717
c_rt_lib0move(&___nl__3,___get_global_const(181));
#line 717
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 717
c_rt_lib0clear(&___nl__3);
#line 717
c_rt_lib0clear(&___nl__0);
#line 717
c_rt_lib0clear(&___nl__1);
#line 717
return ___nl__2;
#line 717
c_rt_lib0clear(&___nl__2);
#line 718
goto label_1;
#line 718
label_2:
#line 718
c_rt_lib0move(&___nl__1, string_utils0is_float(___nl__0));
#line 718
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 718
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 719
c_rt_lib0move(&___nl__3,___get_global_const(422));
#line 719
c_rt_lib0move(&___nl__2, generator_c_priv0get_lib_fun(___nl__3));
#line 719
c_rt_lib0clear(&___nl__3);
#line 719
c_rt_lib0move(&___nl__3,___get_global_const(326));
#line 719
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 719
c_rt_lib0clear(&___nl__3);
#line 719
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 719
c_rt_lib0move(&___nl__3,___get_global_const(181));
#line 719
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 719
c_rt_lib0clear(&___nl__3);
#line 719
c_rt_lib0clear(&___nl__0);
#line 719
c_rt_lib0clear(&___nl__1);
#line 719
return ___nl__2;
#line 719
c_rt_lib0clear(&___nl__2);
#line 720
goto label_1;
#line 720
label_3:
#line 721
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 721
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__0, ___nl__2));
#line 722
c_rt_lib0move(&___nl__4,___get_global_const(82));
#line 722
c_rt_lib0move(&___nl__5,___get_global_const(186));
#line 722
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 722
c_rt_lib0clear(&___nl__5);
#line 722
c_rt_lib0clear(&___nl__4);
#line 722
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 722
c_rt_lib0clear(&___nl__3);
#line 723
c_rt_lib0move(&___nl__4, string0lf());
#line 723
c_rt_lib0move(&___nl__5,___get_global_const(194));
#line 723
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 723
c_rt_lib0clear(&___nl__5);
#line 723
c_rt_lib0clear(&___nl__4);
#line 723
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 723
c_rt_lib0clear(&___nl__3);
#line 724
c_rt_lib0move(&___nl__4, string0r());
#line 724
c_rt_lib0move(&___nl__5,___get_global_const(423));
#line 724
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 724
c_rt_lib0clear(&___nl__5);
#line 724
c_rt_lib0clear(&___nl__4);
#line 724
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 724
c_rt_lib0clear(&___nl__3);
#line 725
c_rt_lib0move(&___nl__4, string0tab());
#line 725
c_rt_lib0move(&___nl__5,___get_global_const(424));
#line 725
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 725
c_rt_lib0clear(&___nl__5);
#line 725
c_rt_lib0clear(&___nl__4);
#line 725
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 725
c_rt_lib0clear(&___nl__3);
#line 726
c_rt_lib0move(&___nl__4,___get_global_const(155));
#line 726
c_rt_lib0move(&___nl__5,___get_global_const(191));
#line 726
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 726
c_rt_lib0clear(&___nl__5);
#line 726
c_rt_lib0clear(&___nl__4);
#line 726
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 726
c_rt_lib0clear(&___nl__3);
#line 727
c_rt_lib0move(&___nl__4,___get_global_const(425));
#line 727
c_rt_lib0move(&___nl__5,___get_global_const(426));
#line 727
c_rt_lib0move(&___nl__3, string0replace(___nl__2, ___nl__4, ___nl__5));
#line 727
c_rt_lib0clear(&___nl__5);
#line 727
c_rt_lib0clear(&___nl__4);
#line 727
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 727
c_rt_lib0clear(&___nl__3);
#line 728
c_rt_lib0move(&___nl__4,___get_global_const(427));
#line 728
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 728
c_rt_lib0clear(&___nl__4);
#line 728
c_rt_lib0move(&___nl__4,___get_global_const(428));
#line 728
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 728
c_rt_lib0clear(&___nl__4);
#line 728
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__2));
#line 728
c_rt_lib0move(&___nl__4,___get_global_const(429));
#line 728
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 728
c_rt_lib0clear(&___nl__4);
#line 728
c_rt_lib0clear(&___nl__0);
#line 728
c_rt_lib0clear(&___nl__1);
#line 728
c_rt_lib0clear(&___nl__2);
#line 728
return ___nl__3;
#line 728
c_rt_lib0clear(&___nl__3);
#line 728
c_rt_lib0clear(&___nl__2);
#line 729
goto label_1;
#line 729
label_1:
#line 729
c_rt_lib0clear(&___nl__1);
#line 729
c_rt_lib0clear(&___nl__0);
#line 729
return NULL;
}

ImmT generator_c_priv0create_sim_to_memory(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
generator_c_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 733
c_rt_lib0move(&___nl__2, string_utils0is_integer(___nl__0));
#line 733
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 733
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 734
c_rt_lib0move(&___nl__4,___get_global_const(430));
#line 734
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 734
c_rt_lib0clear(&___nl__4);
#line 734
c_rt_lib0move(&___nl__4,___get_global_const(326));
#line 734
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 734
c_rt_lib0clear(&___nl__4);
#line 734
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 734
c_rt_lib0move(&___nl__4,___get_global_const(177));
#line 734
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 734
c_rt_lib0clear(&___nl__4);
#line 734
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 734
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 734
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 734
c_rt_lib0clear(&___nl__4);
#line 734
c_rt_lib0clear(&___nl__0);
#line 734
c_rt_lib0clear(&___nl__1);
#line 734
c_rt_lib0clear(&___nl__2);
#line 734
return ___nl__3;
#line 734
c_rt_lib0clear(&___nl__3);
#line 735
goto label_1;
#line 735
label_2:
#line 735
c_rt_lib0move(&___nl__2, string_utils0is_float(___nl__0));
#line 735
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 735
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 736
c_rt_lib0move(&___nl__4,___get_global_const(431));
#line 736
c_rt_lib0move(&___nl__3, generator_c_priv0get_lib_fun(___nl__4));
#line 736
c_rt_lib0clear(&___nl__4);
#line 736
c_rt_lib0move(&___nl__4,___get_global_const(326));
#line 736
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 736
c_rt_lib0clear(&___nl__4);
#line 736
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 736
c_rt_lib0move(&___nl__4,___get_global_const(177));
#line 736
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 736
c_rt_lib0clear(&___nl__4);
#line 736
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 736
c_rt_lib0move(&___nl__4,___get_global_const(181));
#line 736
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 736
c_rt_lib0clear(&___nl__4);
#line 736
c_rt_lib0clear(&___nl__0);
#line 736
c_rt_lib0clear(&___nl__1);
#line 736
c_rt_lib0clear(&___nl__2);
#line 736
return ___nl__3;
#line 736
c_rt_lib0clear(&___nl__3);
#line 737
goto label_1;
#line 737
label_3:
#line 738
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 738
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__0, ___nl__3));
#line 739
c_rt_lib0move(&___nl__5,___get_global_const(82));
#line 739
c_rt_lib0move(&___nl__6,___get_global_const(186));
#line 739
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 739
c_rt_lib0clear(&___nl__6);
#line 739
c_rt_lib0clear(&___nl__5);
#line 739
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 739
c_rt_lib0clear(&___nl__4);
#line 740
c_rt_lib0move(&___nl__5, string0lf());
#line 740
c_rt_lib0move(&___nl__6,___get_global_const(194));
#line 740
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 740
c_rt_lib0clear(&___nl__6);
#line 740
c_rt_lib0clear(&___nl__5);
#line 740
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 740
c_rt_lib0clear(&___nl__4);
#line 741
c_rt_lib0move(&___nl__5, string0r());
#line 741
c_rt_lib0move(&___nl__6,___get_global_const(423));
#line 741
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 741
c_rt_lib0clear(&___nl__6);
#line 741
c_rt_lib0clear(&___nl__5);
#line 741
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 741
c_rt_lib0clear(&___nl__4);
#line 742
c_rt_lib0move(&___nl__5, string0tab());
#line 742
c_rt_lib0move(&___nl__6,___get_global_const(424));
#line 742
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 742
c_rt_lib0clear(&___nl__6);
#line 742
c_rt_lib0clear(&___nl__5);
#line 742
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 742
c_rt_lib0clear(&___nl__4);
#line 743
c_rt_lib0move(&___nl__5,___get_global_const(155));
#line 743
c_rt_lib0move(&___nl__6,___get_global_const(191));
#line 743
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 743
c_rt_lib0clear(&___nl__6);
#line 743
c_rt_lib0clear(&___nl__5);
#line 743
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 743
c_rt_lib0clear(&___nl__4);
#line 744
c_rt_lib0move(&___nl__5,___get_global_const(425));
#line 744
c_rt_lib0move(&___nl__6,___get_global_const(426));
#line 744
c_rt_lib0move(&___nl__4, string0replace(___nl__3, ___nl__5, ___nl__6));
#line 744
c_rt_lib0clear(&___nl__6);
#line 744
c_rt_lib0clear(&___nl__5);
#line 744
c_rt_lib0copy(&___nl__3, ___nl__4);
#line 744
c_rt_lib0clear(&___nl__4);
#line 745
c_rt_lib0move(&___nl__5,___get_global_const(432));
#line 745
c_rt_lib0move(&___nl__4, generator_c_priv0get_lib_fun(___nl__5));
#line 745
c_rt_lib0clear(&___nl__5);
#line 745
c_rt_lib0move(&___nl__5,___get_global_const(428));
#line 745
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 745
c_rt_lib0clear(&___nl__5);
#line 745
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 745
c_rt_lib0move(&___nl__5,___get_global_const(433));
#line 745
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 745
c_rt_lib0clear(&___nl__5);
#line 745
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 745
c_rt_lib0move(&___nl__5,___get_global_const(181));
#line 745
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 745
c_rt_lib0clear(&___nl__5);
#line 745
c_rt_lib0clear(&___nl__0);
#line 745
c_rt_lib0clear(&___nl__1);
#line 745
c_rt_lib0clear(&___nl__2);
#line 745
c_rt_lib0clear(&___nl__3);
#line 745
return ___nl__4;
#line 745
c_rt_lib0clear(&___nl__4);
#line 745
c_rt_lib0clear(&___nl__3);
#line 746
goto label_1;
#line 746
label_1:
#line 746
c_rt_lib0clear(&___nl__2);
#line 746
c_rt_lib0clear(&___nl__0);
#line 746
c_rt_lib0clear(&___nl__1);
#line 746
return NULL;
}


static ImmT ___const__[17];
static int ___const_init__ = 1;
void generator_c_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[16];


for(int i=0;i<16;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 16);
}}
ImmT generator_c_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT generator_c_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = generator_c_priv0get_bin_ops0cal();
	break;
case 1:
	___const__[1] = generator_c_priv0get_bin_ops_mod0cal();
	break;
case 2:
	___const__[2] = generator_c_priv0get_unary_ops0cal();
	break;
case 3:
	___const__[3] = generator_c_priv0gen_unary_ops0cal();
	break;
case 4:
	___const__[4] = generator_c_priv0gen_bin_ops0cal();
	break;
case 5:
	___const__[5] = generator_c_priv0gen_bin_ops_mod0cal();
	break;
case 6:
	___const__[6] = generator_c0const_dict0cal();
	break;
case 7:
	___const__[7] = generator_c0fun_args_t0cal();
	break;
case 8:
	___const__[8] = generator_c0const_t0cal();
	break;
case 9:
	___const__[9] = generator_c0global_const_t0cal();
	break;
case 10:
	___const__[10] = generator_c0state_t0cal();
	break;
case 11:
	___const__[11] = generator_c0get_empty_state0cal();
	break;
case 12:
	___const__[12] = generator_c_priv0arg_t0cal();
	break;
case 13:
	___const__[13] = generator_c0module_out_t0cal();
	break;
case 14:
	___const__[14] = generator_c0out_t0cal();
	break;
case 15:
	___const__[15] = generator_c_priv0get_cr0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
