
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "compiler.h"
#include "c_fe_lib.h"
#include "string.h"
#include "hash.h"
#include "array.h"
#include "dfile.h"
#include "ptd.h"
#include "nast.h"
#include "nparser.h"
#include "boolean_t.h"
#include "pretty_printer.h"
#include "generator_c.h"
#include "generator_pm.h"
#include "generator_js.h"
#include "generator_java.h"
#include "translator.h"
#include "nlasm.h"
#include "post_processing.h"
#include "tc_types.h"
#include "type_checker.h"
#include "module_checker.h"
#include "interpreter.h"
#include "nl.h"
#include "compiler_lib.h"
#line 1 "compiler.nl"

static ImmT *__const__f = NULL;
void compiler_priv0__const__init();
ImmT compiler_priv0__const__sim(int __nr);
ImmT compiler_priv0__const__sing(int __nr);

ImmT compiler_priv0get_dir_cache_name();
ImmT compiler_priv0get_dir_pretty_name();
ImmT compiler_priv0get_default_deref_file();
ImmT compiler_priv0get_default_math_file();
ImmT compiler_priv0get_known_func();
ImmT compiler_priv0exec_interpreter(ImmT ___nl__0);
ImmT compiler_priv0get_module_name(ImmT ___nl__0);
ImmT compiler_priv0has_extension(ImmT ___nl__0,ImmT ___nl__1);
ImmT compiler_priv0get_generator_state(ImmT ___nl__0);
ImmT compiler_priv0get_out_ext(ImmT ___nl__0);
ImmT compiler_priv0mk_path(ImmT ___nl__0,ImmT ___nl__1);
ImmT compiler_priv0mk_path_module(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT compiler_priv0get_all_nianio_file(ImmT ___nl__0);
ImmT compiler_priv0get_files_to_parse(ImmT ___nl__0);
ImmT compiler_priv0parse_module(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT compiler_priv0get_mathematical_func(ImmT ___nl__0);
ImmT compiler_priv0compile_ide(ImmT ___nl__0);
ImmT compiler_priv0compile_strict_file(ImmT ___nl__0);
ImmT compiler_priv0construct_error_message(ImmT ___nl__0);
ImmT compiler_priv0show_and_count_errors(ImmT ___nl__0,ImmT ___nl__1);
ImmT compiler_priv0translate(ImmT ___nl__0,ImmT * ___ref___1);
ImmT compiler_priv0check_modules(ImmT ___nl__0,ImmT * ___ref___1,ImmT ___nl__2);
ImmT compiler_priv0try_save_file(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2);
ImmT compiler_priv0generate_modules_to_files(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT ___nl__4);
ImmT compiler_priv0save_module_to_file(ImmT ___nl__0,ImmT ___nl__1);
ImmT compiler_priv0get_dir(ImmT ___nl__0);
ImmT compiler_priv0parse_command_line_args(ImmT ___nl__0);


ImmT compiler_priv0get_dir_cache_name(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(0);}
ImmT compiler_priv0get_dir_cache_name0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 31
c_rt_lib0move(&___nl__0,___get_global_const(8));
#line 31
return ___nl__0;
#line 31
c_rt_lib0clear(&___nl__0);
#line 31
return NULL;
}

ImmT compiler_priv0get_dir_pretty_name(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(1);}
ImmT compiler_priv0get_dir_pretty_name0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 35
c_rt_lib0move(&___nl__0,___get_global_const(9));
#line 35
return ___nl__0;
#line 35
c_rt_lib0clear(&___nl__0);
#line 35
return NULL;
}

ImmT compiler_priv0get_default_deref_file(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(2);}
ImmT compiler_priv0get_default_deref_file0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 39
c_rt_lib0move(&___nl__0,___get_global_const(10));
#line 39
return ___nl__0;
#line 39
c_rt_lib0clear(&___nl__0);
#line 39
return NULL;
}

ImmT compiler_priv0get_default_math_file(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(3);}
ImmT compiler_priv0get_default_math_file0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 43
c_rt_lib0move(&___nl__0,___get_global_const(11));
#line 43
return ___nl__0;
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
return NULL;
}

ImmT compiler0parse_check_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0parse_check_t");
return compiler0parse_check_t();}
ImmT compiler0parse_check_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(4);}
ImmT compiler0parse_check_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 47
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nast0module_t0ptr, ___get_global_const(12), ___get_global_const(13)));
#line 47
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 47
c_rt_lib0move(&___nl__2, ptd0hash(___nl__3));
#line 47
c_rt_lib0clear(&___nl__3);
#line 47
c_rt_lib0move(&___nl__4, ptd0sim());
#line 47
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 47
c_rt_lib0clear(&___nl__4);
#line 47
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(tc_types0deref_types0ptr, ___get_global_const(14), ___get_global_const(15)));
#line 47
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 47
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(3, ___get_global_const(16), ___nl__2, ___get_global_const(17), ___nl__3, ___get_global_const(18), ___nl__4));
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__3);
#line 47
c_rt_lib0clear(&___nl__4);
#line 47
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 47
c_rt_lib0clear(&___nl__1);
#line 47
return ___nl__0;
#line 47
c_rt_lib0clear(&___nl__0);
#line 47
return NULL;
}

ImmT compiler0errors_hash_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0errors_hash_t");
return compiler0errors_hash_t();}
ImmT compiler0errors_hash_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(5);}
ImmT compiler0errors_hash_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_const(19), ___get_global_const(20)));
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 55
c_rt_lib0move(&___nl__1, ptd0arr(___nl__2));
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
return ___nl__0;
#line 55
c_rt_lib0clear(&___nl__0);
#line 55
return NULL;
}

ImmT compiler0errors_group_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0errors_group_t");
return compiler0errors_group_t();}
ImmT compiler0errors_group_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(6);}
ImmT compiler0errors_group_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(21), ___get_global_const(22)));
#line 59
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 59
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(21), ___get_global_const(22)));
#line 59
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 59
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(21), ___get_global_const(22)));
#line 59
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 59
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(compiler0errors_hash_t0ptr, ___get_global_const(21), ___get_global_const(22)));
#line 59
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 59
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(module_checker0ret_t0ptr, ___get_global_const(23), ___get_global_const(24)));
#line 59
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 59
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(25), ___nl__2, ___get_global_const(26), ___nl__3, ___get_global_const(27), ___nl__4, ___get_global_const(28), ___nl__5, ___get_global_const(29), ___nl__6));
#line 59
c_rt_lib0clear(&___nl__2);
#line 59
c_rt_lib0clear(&___nl__3);
#line 59
c_rt_lib0clear(&___nl__4);
#line 59
c_rt_lib0clear(&___nl__5);
#line 59
c_rt_lib0clear(&___nl__6);
#line 59
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 59
c_rt_lib0clear(&___nl__1);
#line 59
return ___nl__0;
#line 59
c_rt_lib0clear(&___nl__0);
#line 59
return NULL;
}

ImmT compiler0language_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0language_t");
return compiler0language_t();}
ImmT compiler0language_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(7);}
ImmT compiler0language_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 69
c_rt_lib0move(&___nl__2, ptd0none());
#line 69
c_rt_lib0move(&___nl__3, ptd0none());
#line 69
c_rt_lib0move(&___nl__4, ptd0none());
#line 69
c_rt_lib0move(&___nl__5, ptd0none());
#line 69
c_rt_lib0move(&___nl__6, ptd0none());
#line 69
c_rt_lib0move(&___nl__7, ptd0none());
#line 69
c_rt_lib0move(&___nl__8, ptd0none());
#line 69
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(7, ___get_global_const(30), ___nl__2, ___get_global_const(31), ___nl__3, ___get_global_const(32), ___nl__4, ___get_global_const(33), ___nl__5, ___get_global_const(34), ___nl__6, ___get_global_const(35), ___nl__7, ___get_global_const(36), ___nl__8));
#line 69
c_rt_lib0clear(&___nl__2);
#line 69
c_rt_lib0clear(&___nl__3);
#line 69
c_rt_lib0clear(&___nl__4);
#line 69
c_rt_lib0clear(&___nl__5);
#line 69
c_rt_lib0clear(&___nl__6);
#line 69
c_rt_lib0clear(&___nl__7);
#line 69
c_rt_lib0clear(&___nl__8);
#line 69
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 69
c_rt_lib0clear(&___nl__1);
#line 69
return ___nl__0;
#line 69
c_rt_lib0clear(&___nl__0);
#line 69
return NULL;
}

ImmT compiler0destination_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0destination_t");
return compiler0destination_t();}
ImmT compiler0destination_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(8);}
ImmT compiler0destination_t0cal() {
compiler_priv0__const__init();
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
#line 81
c_rt_lib0move(&___nl__2, ptd0sim());
#line 81
c_rt_lib0move(&___nl__3, ptd0sim());
#line 81
c_rt_lib0move(&___nl__6, ptd0sim());
#line 81
c_rt_lib0move(&___nl__7, ptd0sim());
#line 81
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(2, ___get_global_const(32), ___nl__6, ___get_global_const(37), ___nl__7));
#line 81
c_rt_lib0clear(&___nl__6);
#line 81
c_rt_lib0clear(&___nl__7);
#line 81
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 81
c_rt_lib0clear(&___nl__5);
#line 81
c_rt_lib0move(&___nl__5, ptd0sim());
#line 81
c_rt_lib0move(&___nl__6, ptd0sim());
#line 81
c_rt_lib0move(&___nl__7, ptd0sim());
#line 81
c_rt_lib0move(&___nl__8, ptd0sim());
#line 81
c_rt_lib0move(&___nl__9, ptd0none());
#line 81
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(8, ___get_global_const(30), ___nl__2, ___get_global_const(31), ___nl__3, ___get_global_const(32), ___nl__4, ___get_global_const(33), ___nl__5, ___get_global_const(34), ___nl__6, ___get_global_const(35), ___nl__7, ___get_global_const(36), ___nl__8, ___get_global_const(38), ___nl__9));
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
#line 81
c_rt_lib0clear(&___nl__8);
#line 81
c_rt_lib0clear(&___nl__9);
#line 81
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 81
c_rt_lib0clear(&___nl__1);
#line 81
return ___nl__0;
#line 81
c_rt_lib0clear(&___nl__0);
#line 81
return NULL;
}

ImmT compiler0module_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0module_t");
return compiler0module_t();}
ImmT compiler0module_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(9);}
ImmT compiler0module_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 94
c_rt_lib0move(&___nl__3, ptd0sim());
#line 94
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(compiler0destination_t0ptr, ___get_global_const(21), ___get_global_const(39)));
#line 94
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 94
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__3, ___get_global_const(41), ___nl__4));
#line 94
c_rt_lib0clear(&___nl__3);
#line 94
c_rt_lib0clear(&___nl__4);
#line 94
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 94
c_rt_lib0clear(&___nl__2);
#line 94
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 94
c_rt_lib0clear(&___nl__1);
#line 94
return ___nl__0;
#line 94
c_rt_lib0clear(&___nl__0);
#line 94
return NULL;
}

ImmT compiler0deref_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0deref_t");
return compiler0deref_t();}
ImmT compiler0deref_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(10);}
ImmT compiler0deref_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 98
c_rt_lib0move(&___nl__2, ptd0sim());
#line 98
c_rt_lib0move(&___nl__3, ptd0none());
#line 98
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(42), ___nl__2, ___get_global_const(43), ___nl__3));
#line 98
c_rt_lib0clear(&___nl__2);
#line 98
c_rt_lib0clear(&___nl__3);
#line 98
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 98
c_rt_lib0clear(&___nl__1);
#line 98
return ___nl__0;
#line 98
c_rt_lib0clear(&___nl__0);
#line 98
return NULL;
}

ImmT compiler0try_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0try_t");
return compiler0try_t();}
ImmT compiler0try_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(11);}
ImmT compiler0try_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 102
c_rt_lib0move(&___nl__2, ptd0sim());
#line 102
c_rt_lib0move(&___nl__3, ptd0sim());
#line 102
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(44), ___nl__2, ___get_global_const(45), ___nl__3));
#line 102
c_rt_lib0clear(&___nl__2);
#line 102
c_rt_lib0clear(&___nl__3);
#line 102
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 102
c_rt_lib0clear(&___nl__1);
#line 102
return ___nl__0;
#line 102
c_rt_lib0clear(&___nl__0);
#line 102
return NULL;
}

ImmT compiler0input_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0input_type");
return compiler0input_type();}
ImmT compiler0input_type(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(12);}
ImmT compiler0input_type0cal() {
compiler_priv0__const__init();
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
#line 106
c_rt_lib0move(&___nl__3, ptd0sim());
#line 106
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 106
c_rt_lib0clear(&___nl__3);
#line 106
c_rt_lib0move(&___nl__3, ptd0sim());
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0func_new(compiler0deref_t0ptr, ___get_global_const(21), ___get_global_const(46)));
#line 106
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__4));
#line 106
c_rt_lib0move(&___nl__7, ptd0none());
#line 106
c_rt_lib0move(&___nl__8, ptd0none());
#line 106
c_rt_lib0move(&___nl__9, ptd0none());
#line 106
c_rt_lib0move(&___nl__10, ptd0none());
#line 106
c_rt_lib0move(&___nl__11, ptd0none());
#line 106
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(5, ___get_global_const(47), ___nl__7, ___get_global_const(48), ___nl__8, ___get_global_const(49), ___nl__9, ___get_global_const(50), ___nl__10, ___get_global_const(51), ___nl__11));
#line 106
c_rt_lib0clear(&___nl__7);
#line 106
c_rt_lib0clear(&___nl__8);
#line 106
c_rt_lib0clear(&___nl__9);
#line 106
c_rt_lib0clear(&___nl__10);
#line 106
c_rt_lib0clear(&___nl__11);
#line 106
c_rt_lib0move(&___nl__5, ptd0var(___nl__6));
#line 106
c_rt_lib0clear(&___nl__6);
#line 106
c_rt_lib0move(&___nl__6, ptd0sim());
#line 106
c_rt_lib0move(&___nl__9, ptd0none());
#line 106
c_rt_lib0move(&___nl__10, ptd0none());
#line 106
c_rt_lib0move(&___nl__11, ptd0none());
#line 106
c_rt_lib0move(&___nl__12, ptd0sim());
#line 106
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(4, ___get_global_const(52), ___nl__9, ___get_global_const(53), ___nl__10, ___get_global_const(54), ___nl__11, ___get_global_const(55), ___nl__12));
#line 106
c_rt_lib0clear(&___nl__9);
#line 106
c_rt_lib0clear(&___nl__10);
#line 106
c_rt_lib0clear(&___nl__11);
#line 106
c_rt_lib0clear(&___nl__12);
#line 106
c_rt_lib0move(&___nl__7, ptd0var(___nl__8));
#line 106
c_rt_lib0clear(&___nl__8);
#line 106
c_rt_lib0move(&___nl__8, c_rt_lib0func_new(compiler0language_t0ptr, ___get_global_const(21), ___get_global_const(56)));
#line 106
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__8));
#line 106
c_rt_lib0move(&___nl__11, ptd0none());
#line 106
c_rt_lib0move(&___nl__12, ptd0none());
#line 106
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(57), ___nl__11, ___get_global_const(58), ___nl__12));
#line 106
c_rt_lib0clear(&___nl__11);
#line 106
c_rt_lib0clear(&___nl__12);
#line 106
c_rt_lib0move(&___nl__9, ptd0var(___nl__10));
#line 106
c_rt_lib0clear(&___nl__10);
#line 106
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(8, ___get_global_const(59), ___nl__2, ___get_global_const(60), ___nl__3, ___get_global_const(61), ___nl__4, ___get_global_const(62), ___nl__5, ___get_global_const(63), ___nl__6, ___get_global_const(64), ___nl__7, ___get_global_const(65), ___nl__8, ___get_global_const(66), ___nl__9));
#line 106
c_rt_lib0clear(&___nl__2);
#line 106
c_rt_lib0clear(&___nl__3);
#line 106
c_rt_lib0clear(&___nl__4);
#line 106
c_rt_lib0clear(&___nl__5);
#line 106
c_rt_lib0clear(&___nl__6);
#line 106
c_rt_lib0clear(&___nl__7);
#line 106
c_rt_lib0clear(&___nl__8);
#line 106
c_rt_lib0clear(&___nl__9);
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

ImmT compiler0file_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler0file_t");
return compiler0file_t();}
ImmT compiler0file_t(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(13);}
ImmT compiler0file_t0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 125
c_rt_lib0move(&___nl__2, ptd0sim());
#line 125
c_rt_lib0move(&___nl__3, ptd0sim());
#line 125
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__2, ___get_global_const(44), ___nl__3));
#line 125
c_rt_lib0clear(&___nl__2);
#line 125
c_rt_lib0clear(&___nl__3);
#line 125
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 125
c_rt_lib0clear(&___nl__1);
#line 125
return ___nl__0;
#line 125
c_rt_lib0clear(&___nl__0);
#line 125
return NULL;
}

ImmT compiler0compile0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "compiler0compile");
return compiler0compile(_tab[0]);}
ImmT compiler0compile(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 129
c_rt_lib0move(&___nl__1, compiler_priv0parse_command_line_args(___nl__0));
#line 130
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(60)));
#line 130
c_rt_lib0delete(c_fe_lib0mk_path(___nl__2));
#line 130
c_rt_lib0clear(&___nl__2);
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(64)));
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(52)));
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 131
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 132
c_rt_lib0move(&___nl__3,___get_global_const(67));
#line 132
c_rt_lib0delete(c_fe_lib0print(___nl__3));
#line 132
c_rt_lib0clear(&___nl__3);
#line 133
c_rt_lib0move(&___nl__3, compiler_priv0compile_strict_file(___nl__1));
#line 133
c_rt_lib0clear(&___nl__0);
#line 133
c_rt_lib0clear(&___nl__1);
#line 133
c_rt_lib0clear(&___nl__2);
#line 133
return ___nl__3;
#line 133
c_rt_lib0clear(&___nl__3);
#line 134
goto label_1;
#line 134
label_2:
#line 134
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(64)));
#line 134
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(54)));
#line 134
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 134
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(64)));
#line 134
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(55)));
#line 134
label_4:
#line 134
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 134
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 135
c_rt_lib0move(&___nl__3,___get_global_const(68));
#line 135
c_rt_lib0delete(c_fe_lib0print(___nl__3));
#line 135
c_rt_lib0clear(&___nl__3);
#line 136
c_rt_lib0delete(compiler_priv0compile_ide(___nl__1));
#line 137
goto label_1;
#line 137
label_3:
#line 137
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(64)));
#line 137
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(53)));
#line 137
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 137
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 138
c_rt_lib0delete(compiler_priv0exec_interpreter(___nl__1));
#line 139
goto label_1;
#line 139
label_5:
#line 140
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 140
nl_die_arg(___nl__3);
#line 140
c_rt_lib0clear(&___nl__3);
#line 141
goto label_1;
#line 141
label_1:
#line 141
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
return ___nl__2;
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
return NULL;
}

ImmT compiler_priv0get_known_func(){
compiler_priv0__const__init();
return compiler_priv0__const__sing(14);}
ImmT compiler_priv0get_known_func0cal() {
compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 146
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 147
c_rt_lib0move(&___nl__1,___get_global_const(69));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nl0print0ptr, ___get_global_const(33), ___get_global_const(70)));
#line 147
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 147
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(71)));
#line 147
c_rt_lib0move(&___nl__6, ptd0sim());
#line 147
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 147
c_rt_lib0clear(&___nl__6);
#line 147
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(43)));
#line 147
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(72), ___nl__3, ___get_global_const(73), ___nl__4, ___get_global_const(74), ___nl__5, ___get_global_const(75), ___nl__6));
#line 147
c_rt_lib0clear(&___nl__3);
#line 147
c_rt_lib0clear(&___nl__4);
#line 147
c_rt_lib0clear(&___nl__5);
#line 147
c_rt_lib0clear(&___nl__6);
#line 147
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 147
c_rt_lib0clear(&___nl__2);
#line 147
c_rt_lib0clear(&___nl__1);
#line 148
return ___nl__0;
#line 148
c_rt_lib0clear(&___nl__0);
#line 148
return NULL;
}

ImmT compiler_priv0exec_interpreter(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
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
#line 152
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 153
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 153
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 153
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 153
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 153
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 153
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(5, ___get_global_const(25), ___nl__3, ___get_global_const(26), ___nl__4, ___get_global_const(27), ___nl__5, ___get_global_const(28), ___nl__6, ___get_global_const(29), ___nl__7));
#line 153
c_rt_lib0clear(&___nl__3);
#line 153
c_rt_lib0clear(&___nl__4);
#line 153
c_rt_lib0clear(&___nl__5);
#line 153
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0clear(&___nl__7);
#line 160
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 161
c_rt_lib0move(&___nl__4, compiler_priv0get_files_to_parse(___nl__0));
#line 162
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 162
label_3:
#line 162
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 162
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 162
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 162
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 163
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(40)));
#line 163
c_rt_lib0move(&___nl__8, compiler_priv0parse_module(___nl__5, ___nl__9, &___nl__2));
#line 163
c_rt_lib0clear(&___nl__9);
#line 163
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 163
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 165
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 165
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 165
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 165
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 165
nl_die_arg(___nl__9);
#line 163
label_5:
#line 163
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 164
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__5, ___nl__10));
#line 164
c_rt_lib0clear(&___nl__10);
#line 165
goto label_4;
#line 165
label_6:
#line 165
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 166
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 166
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__11));
#line 166
c_rt_lib0clear(&___nl__11);
#line 166
c_rt_lib0clear(&___nl__10);
#line 167
goto label_4;
#line 167
label_4:
#line 167
c_rt_lib0clear(&___nl__8);
#line 167
c_rt_lib0clear(&___nl__9);
#line 168
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 168
goto label_3;
#line 168
label_1:
#line 168
c_rt_lib0clear(&___nl__5);
#line 168
c_rt_lib0clear(&___nl__6);
#line 168
c_rt_lib0clear(&___nl__7);
#line 169
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 169
c_rt_lib0move(&___nl__5, c_rt_lib0num_ne(___nl__3, ___nl__5));
#line 169
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 169
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 170
c_rt_lib0delete(compiler_priv0show_and_count_errors(___nl__2, ___nl__0));
#line 171
c_rt_lib0clear(&___nl__0);
#line 171
c_rt_lib0clear(&___nl__1);
#line 171
c_rt_lib0clear(&___nl__2);
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
c_rt_lib0clear(&___nl__4);
#line 171
c_rt_lib0clear(&___nl__5);
#line 171
return NULL;
#line 172
goto label_8;
#line 172
label_8:
#line 172
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(61)));
#line 173
c_rt_lib0delete(compiler_priv0check_modules(___nl__1, &___nl__2, ___nl__5));
#line 173
c_rt_lib0clear(&___nl__5);
#line 174
c_rt_lib0move(&___nl__5, compiler_priv0show_and_count_errors(___nl__2, ___nl__0));
#line 174
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 174
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 174
c_rt_lib0clear(&___nl__6);
#line 174
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 174
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 175
c_rt_lib0clear(&___nl__0);
#line 175
c_rt_lib0clear(&___nl__1);
#line 175
c_rt_lib0clear(&___nl__2);
#line 175
c_rt_lib0clear(&___nl__3);
#line 175
c_rt_lib0clear(&___nl__4);
#line 175
c_rt_lib0clear(&___nl__5);
#line 175
return NULL;
#line 176
goto label_10;
#line 176
label_10:
#line 176
c_rt_lib0clear(&___nl__5);
#line 177
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 177
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(62)));
#line 177
c_rt_lib0move(&___nl__5, post_processing0init(___nl__6, ___nl__7));
#line 177
c_rt_lib0clear(&___nl__7);
#line 177
c_rt_lib0clear(&___nl__6);
#line 178
c_rt_lib0move(&___nl__6, compiler_priv0translate(___nl__1, &___nl__5));
#line 179
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 180
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 181
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__6));
#line 181
label_13:
#line 181
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 181
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 181
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 181
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__6, ___nl__9));
#line 182
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(77)));
#line 182
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 182
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 182
c_rt_lib0move(&___nl__16, c_rt_lib0array_len(___nl__12));
#line 182
label_16:
#line 182
c_rt_lib0move(&___nl__17, c_rt_lib0ge(___nl__14, ___nl__16));
#line 182
if(c_rt_lib0check_true_native(___nl__17)){ goto label_14;}
#line 182
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__12, ___nl__14));
#line 183
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(78)));
#line 183
c_rt_lib0move(&___nl__19,___get_global_const(79));
#line 183
c_rt_lib0move(&___nl__18, c_rt_lib0eq(___nl__18, ___nl__19));
#line 183
c_rt_lib0clear(&___nl__19);
#line 183
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 183
if(c_rt_lib0check_true_native(___nl__18)){ goto label_18;}
#line 184
c_rt_lib0copy(&___nl__8, ___nl__9);
#line 185
goto label_18;
#line 185
label_18:
#line 185
c_rt_lib0clear(&___nl__18);
#line 186
c_rt_lib0move(&___nl__14, c_rt_lib0add_mod(___nl__14, ___nl__15));
#line 186
goto label_16;
#line 186
label_14:
#line 186
c_rt_lib0clear(&___nl__12);
#line 186
c_rt_lib0clear(&___nl__13);
#line 186
c_rt_lib0clear(&___nl__14);
#line 186
c_rt_lib0clear(&___nl__15);
#line 186
c_rt_lib0clear(&___nl__16);
#line 186
c_rt_lib0clear(&___nl__17);
#line 187
c_rt_lib0delete(array0push(&___nl__7, ___nl__10));
#line 188
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 188
goto label_13;
#line 188
label_11:
#line 188
c_rt_lib0clear(&___nl__9);
#line 188
c_rt_lib0clear(&___nl__10);
#line 188
c_rt_lib0clear(&___nl__11);
#line 189
c_rt_lib0move(&___nl__10, compiler_priv0get_known_func());
#line 189
c_rt_lib0move(&___nl__9, interpreter0init(___nl__7, ___nl__10));
#line 189
c_rt_lib0clear(&___nl__10);
#line 190
c_rt_lib0move(&___nl__12,___get_global_const(79));
#line 190
c_rt_lib0move(&___nl__11, interpreter0start(&___nl__9, ___nl__12, ___nl__8));
#line 190
c_rt_lib0clear(&___nl__12);
#line 190
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(45)));
#line 190
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 190
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__11));
#line 190
nl_die_arg(___nl__11);
#line 190
label_19:
#line 190
c_rt_lib0clear(&___nl__10);
#line 190
c_rt_lib0clear(&___nl__11);
#line 191
c_rt_lib0move(&___nl__11, interpreter0exec_all_code(___nl__9));
#line 191
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(45)));
#line 191
if(c_rt_lib0check_true_native(___nl__10)){ goto label_20;}
#line 191
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__11));
#line 191
nl_die_arg(___nl__11);
#line 191
label_20:
#line 191
c_rt_lib0clear(&___nl__10);
#line 191
c_rt_lib0clear(&___nl__11);
#line 191
c_rt_lib0clear(&___nl__1);
#line 191
c_rt_lib0clear(&___nl__2);
#line 191
c_rt_lib0clear(&___nl__3);
#line 191
c_rt_lib0clear(&___nl__4);
#line 191
c_rt_lib0clear(&___nl__5);
#line 191
c_rt_lib0clear(&___nl__6);
#line 191
c_rt_lib0clear(&___nl__7);
#line 191
c_rt_lib0clear(&___nl__8);
#line 191
c_rt_lib0clear(&___nl__9);
#line 191
c_rt_lib0clear(&___nl__0);
#line 191
return NULL;
}

ImmT compiler_priv0get_module_name(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 195
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 195
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 195
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 195
c_rt_lib0clear(&___nl__2);
#line 196
label_2:
#line 196
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 196
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 196
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__2));
#line 196
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 196
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 196
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 196
c_rt_lib0clear(&___nl__5);
#line 196
c_rt_lib0move(&___nl__5,___get_global_const(81));
#line 196
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__5));
#line 196
c_rt_lib0clear(&___nl__5);
#line 196
label_4:
#line 196
c_rt_lib0clear(&___nl__4);
#line 196
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 196
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 196
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 196
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__4));
#line 196
c_rt_lib0clear(&___nl__4);
#line 196
c_rt_lib0move(&___nl__4,___get_global_const(82));
#line 196
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__4));
#line 196
c_rt_lib0clear(&___nl__4);
#line 196
label_3:
#line 196
c_rt_lib0clear(&___nl__3);
#line 196
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 196
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 197
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 197
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__1, ___nl__4));
#line 197
c_rt_lib0clear(&___nl__4);
#line 197
c_rt_lib0move(&___nl__4,___get_global_const(83));
#line 197
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 197
c_rt_lib0clear(&___nl__4);
#line 197
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 197
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 198
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 198
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__4));
#line 198
c_rt_lib0clear(&___nl__4);
#line 199
c_rt_lib0clear(&___nl__3);
#line 199
goto label_1;
#line 200
goto label_6;
#line 200
label_6:
#line 200
c_rt_lib0clear(&___nl__3);
#line 201
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 201
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 201
c_rt_lib0clear(&___nl__3);
#line 202
goto label_2;
#line 202
label_1:
#line 202
c_rt_lib0clear(&___nl__2);
#line 203
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 204
label_8:
#line 204
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0ge(___nl__1, ___nl__3));
#line 204
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__3));
#line 204
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 204
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 204
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__1, ___nl__6));
#line 204
c_rt_lib0clear(&___nl__6);
#line 204
c_rt_lib0move(&___nl__6,___get_global_const(81));
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0ne(___nl__3, ___nl__6));
#line 204
c_rt_lib0clear(&___nl__6);
#line 204
label_10:
#line 204
c_rt_lib0clear(&___nl__5);
#line 204
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 204
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 204
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 204
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 204
c_rt_lib0clear(&___nl__5);
#line 204
c_rt_lib0move(&___nl__5,___get_global_const(82));
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0ne(___nl__3, ___nl__5));
#line 204
c_rt_lib0clear(&___nl__5);
#line 204
label_9:
#line 204
c_rt_lib0clear(&___nl__4);
#line 204
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 204
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 205
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 205
c_rt_lib0move(&___nl__4, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 205
c_rt_lib0clear(&___nl__5);
#line 205
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__2));
#line 205
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 205
c_rt_lib0clear(&___nl__4);
#line 206
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 206
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__4));
#line 206
c_rt_lib0clear(&___nl__4);
#line 207
goto label_8;
#line 207
label_7:
#line 207
c_rt_lib0clear(&___nl__3);
#line 208
c_rt_lib0clear(&___nl__0);
#line 208
c_rt_lib0clear(&___nl__1);
#line 208
return ___nl__2;
#line 208
c_rt_lib0clear(&___nl__1);
#line 208
c_rt_lib0clear(&___nl__2);
#line 208
c_rt_lib0clear(&___nl__0);
#line 208
return NULL;
}

ImmT compiler_priv0has_extension(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 212
c_rt_lib0move(&___nl__2, string0length(___nl__1));
#line 213
c_rt_lib0move(&___nl__3, string0length(___nl__0));
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0le(___nl__3, ___nl__2));
#line 213
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 213
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 213
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 213
c_rt_lib0clear(&___nl__0);
#line 213
c_rt_lib0clear(&___nl__1);
#line 213
c_rt_lib0clear(&___nl__2);
#line 213
c_rt_lib0clear(&___nl__3);
#line 213
return ___nl__4;
#line 213
c_rt_lib0clear(&___nl__4);
#line 213
goto label_2;
#line 213
label_2:
#line 213
c_rt_lib0clear(&___nl__3);
#line 214
c_rt_lib0move(&___nl__4, string0length(___nl__0));
#line 214
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__2));
#line 214
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__4, ___nl__2));
#line 214
c_rt_lib0clear(&___nl__4);
#line 214
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 214
c_rt_lib0clear(&___nl__3);
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__1));
#line 215
c_rt_lib0clear(&___nl__0);
#line 215
c_rt_lib0clear(&___nl__1);
#line 215
c_rt_lib0clear(&___nl__2);
#line 215
return ___nl__3;
#line 215
c_rt_lib0clear(&___nl__3);
#line 215
c_rt_lib0clear(&___nl__2);
#line 215
c_rt_lib0clear(&___nl__0);
#line 215
c_rt_lib0clear(&___nl__1);
#line 215
return NULL;
}

ImmT compiler_priv0get_generator_state(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 219
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(30)));
#line 219
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 221
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(31)));
#line 221
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 223
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(32)));
#line 223
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 225
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(34)));
#line 225
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 227
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(33)));
#line 227
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 229
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(35)));
#line 229
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 231
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(36)));
#line 231
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 231
c_rt_lib0move(&___nl__1,___get_global_const(76));
#line 231
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 231
nl_die_arg(___nl__1);
#line 219
label_2:
#line 220
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 220
c_rt_lib0clear(&___nl__0);
#line 220
c_rt_lib0clear(&___nl__1);
#line 220
return ___nl__2;
#line 220
c_rt_lib0clear(&___nl__2);
#line 221
goto label_1;
#line 221
label_3:
#line 222
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 222
c_rt_lib0clear(&___nl__0);
#line 222
c_rt_lib0clear(&___nl__1);
#line 222
return ___nl__2;
#line 222
c_rt_lib0clear(&___nl__2);
#line 223
goto label_1;
#line 223
label_4:
#line 224
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 224
c_rt_lib0clear(&___nl__0);
#line 224
c_rt_lib0clear(&___nl__1);
#line 224
return ___nl__2;
#line 224
c_rt_lib0clear(&___nl__2);
#line 225
goto label_1;
#line 225
label_5:
#line 226
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 226
nl_die_arg(___nl__2);
#line 226
c_rt_lib0clear(&___nl__2);
#line 227
goto label_1;
#line 227
label_6:
#line 228
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 228
nl_die_arg(___nl__2);
#line 228
c_rt_lib0clear(&___nl__2);
#line 229
goto label_1;
#line 229
label_7:
#line 230
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 230
c_rt_lib0clear(&___nl__0);
#line 230
c_rt_lib0clear(&___nl__1);
#line 230
return ___nl__2;
#line 230
c_rt_lib0clear(&___nl__2);
#line 231
goto label_1;
#line 231
label_8:
#line 232
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 232
c_rt_lib0clear(&___nl__0);
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
return ___nl__2;
#line 232
c_rt_lib0clear(&___nl__2);
#line 233
goto label_1;
#line 233
label_1:
#line 233
c_rt_lib0clear(&___nl__1);
#line 233
c_rt_lib0clear(&___nl__0);
#line 233
return NULL;
}

ImmT compiler_priv0get_out_ext(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 237
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(30)));
#line 237
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 239
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(31)));
#line 239
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 241
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(32)));
#line 241
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 243
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(34)));
#line 243
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 245
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(33)));
#line 245
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 247
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(35)));
#line 247
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 249
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(36)));
#line 249
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 249
c_rt_lib0move(&___nl__1,___get_global_const(76));
#line 249
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 249
nl_die_arg(___nl__1);
#line 237
label_2:
#line 238
c_rt_lib0move(&___nl__2,___get_global_const(84));
#line 238
c_rt_lib0clear(&___nl__0);
#line 238
c_rt_lib0clear(&___nl__1);
#line 238
return ___nl__2;
#line 238
c_rt_lib0clear(&___nl__2);
#line 239
goto label_1;
#line 239
label_3:
#line 240
c_rt_lib0move(&___nl__2,___get_global_const(85));
#line 240
c_rt_lib0clear(&___nl__0);
#line 240
c_rt_lib0clear(&___nl__1);
#line 240
return ___nl__2;
#line 240
c_rt_lib0clear(&___nl__2);
#line 241
goto label_1;
#line 241
label_4:
#line 242
c_rt_lib0move(&___nl__2,___get_global_const(86));
#line 242
c_rt_lib0clear(&___nl__0);
#line 242
c_rt_lib0clear(&___nl__1);
#line 242
return ___nl__2;
#line 242
c_rt_lib0clear(&___nl__2);
#line 243
goto label_1;
#line 243
label_5:
#line 244
c_rt_lib0move(&___nl__2,___get_global_const(87));
#line 244
c_rt_lib0clear(&___nl__0);
#line 244
c_rt_lib0clear(&___nl__1);
#line 244
return ___nl__2;
#line 244
c_rt_lib0clear(&___nl__2);
#line 245
goto label_1;
#line 245
label_6:
#line 246
c_rt_lib0move(&___nl__2,___get_global_const(88));
#line 246
c_rt_lib0clear(&___nl__0);
#line 246
c_rt_lib0clear(&___nl__1);
#line 246
return ___nl__2;
#line 246
c_rt_lib0clear(&___nl__2);
#line 247
goto label_1;
#line 247
label_7:
#line 248
c_rt_lib0move(&___nl__2,___get_global_const(89));
#line 248
c_rt_lib0clear(&___nl__0);
#line 248
c_rt_lib0clear(&___nl__1);
#line 248
return ___nl__2;
#line 248
c_rt_lib0clear(&___nl__2);
#line 249
goto label_1;
#line 249
label_8:
#line 250
c_rt_lib0move(&___nl__2,___get_global_const(90));
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
return ___nl__2;
#line 250
c_rt_lib0clear(&___nl__2);
#line 251
goto label_1;
#line 251
label_1:
#line 251
c_rt_lib0clear(&___nl__1);
#line 251
c_rt_lib0clear(&___nl__0);
#line 251
return NULL;
}

ImmT compiler_priv0mk_path(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 255
c_rt_lib0move(&___nl__2,___get_global_const(83));
#line 255
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 255
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 255
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 255
c_rt_lib0clear(&___nl__0);
#line 255
c_rt_lib0clear(&___nl__1);
#line 255
c_rt_lib0clear(&___nl__2);
#line 255
return NULL;
#line 255
goto label_2;
#line 255
label_2:
#line 255
c_rt_lib0clear(&___nl__2);
#line 256
c_rt_lib0move(&___nl__2, compiler_priv0get_dir(___nl__1));
#line 256
c_rt_lib0delete(compiler_priv0mk_path(___nl__0, ___nl__2));
#line 256
c_rt_lib0clear(&___nl__2);
#line 257
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 257
c_rt_lib0delete(c_fe_lib0mk_path(___nl__2));
#line 257
c_rt_lib0clear(&___nl__2);
#line 257
c_rt_lib0clear(&___nl__0);
#line 257
c_rt_lib0clear(&___nl__1);
#line 257
return NULL;
}

ImmT compiler_priv0mk_path_module(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
compiler_priv0__const__init();
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
#line 262
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(60)));
#line 262
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 263
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(91)));
#line 264
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(65)));
#line 264
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(30)));
#line 264
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 266
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(31)));
#line 266
if(c_rt_lib0check_true_native(___nl__6)){ goto label_3;}
#line 268
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(32)));
#line 268
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 270
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(33)));
#line 270
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 278
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(34)));
#line 278
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 280
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(35)));
#line 280
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 282
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(36)));
#line 282
if(c_rt_lib0check_true_native(___nl__6)){ goto label_8;}
#line 282
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 282
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 282
nl_die_arg(___nl__6);
#line 264
label_2:
#line 265
c_rt_lib0move(&___nl__8,___get_global_const(84));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 265
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(30), ___nl__8));
#line 265
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__8));
#line 265
c_rt_lib0clear(&___nl__8);
#line 265
c_rt_lib0clear(&___nl__0);
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
return ___nl__7;
#line 265
c_rt_lib0clear(&___nl__7);
#line 266
goto label_1;
#line 266
label_3:
#line 267
c_rt_lib0move(&___nl__8,___get_global_const(85));
#line 267
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 267
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(31), ___nl__8));
#line 267
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__8));
#line 267
c_rt_lib0clear(&___nl__8);
#line 267
c_rt_lib0clear(&___nl__0);
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
return ___nl__7;
#line 267
c_rt_lib0clear(&___nl__7);
#line 268
goto label_1;
#line 268
label_4:
#line 269
c_rt_lib0move(&___nl__9,___get_global_const(86));
#line 269
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 269
c_rt_lib0move(&___nl__10,___get_global_const(92));
#line 269
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__3, ___nl__10));
#line 269
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(32), ___nl__9, ___get_global_const(37), ___nl__10));
#line 269
c_rt_lib0clear(&___nl__9);
#line 269
c_rt_lib0clear(&___nl__10);
#line 269
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(32), ___nl__8));
#line 269
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__8));
#line 269
c_rt_lib0clear(&___nl__8);
#line 269
c_rt_lib0clear(&___nl__0);
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
return ___nl__7;
#line 269
c_rt_lib0clear(&___nl__7);
#line 270
goto label_1;
#line 270
label_5:
#line 271
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 271
c_rt_lib0move(&___nl__7, string0length(___nl__8));
#line 271
c_rt_lib0clear(&___nl__8);
#line 272
c_rt_lib0move(&___nl__8, compiler_priv0get_dir(___nl__4));
#line 273
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(60)));
#line 273
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 273
c_rt_lib0move(&___nl__10,___get_global_const(81));
#line 273
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 273
c_rt_lib0clear(&___nl__10);
#line 273
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__1));
#line 273
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 273
c_rt_lib0clear(&___nl__9);
#line 274
c_rt_lib0move(&___nl__9, string0length(___nl__8));
#line 274
c_rt_lib0move(&___nl__9, c_rt_lib0lt(___nl__7, ___nl__9));
#line 274
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 274
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 275
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(60)));
#line 275
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 275
c_rt_lib0move(&___nl__12, c_rt_lib0add(___nl__7, ___nl__12));
#line 275
c_rt_lib0move(&___nl__11, string0substr2(___nl__8, ___nl__12));
#line 275
c_rt_lib0clear(&___nl__12);
#line 275
c_rt_lib0delete(compiler_priv0mk_path(___nl__10, ___nl__11));
#line 275
c_rt_lib0clear(&___nl__11);
#line 275
c_rt_lib0clear(&___nl__10);
#line 276
goto label_10;
#line 276
label_10:
#line 276
c_rt_lib0clear(&___nl__9);
#line 277
c_rt_lib0move(&___nl__10,___get_global_const(88));
#line 277
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__3, ___nl__10));
#line 277
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(33), ___nl__10));
#line 277
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__10));
#line 277
c_rt_lib0clear(&___nl__10);
#line 277
c_rt_lib0clear(&___nl__0);
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
c_rt_lib0clear(&___nl__8);
#line 277
return ___nl__9;
#line 277
c_rt_lib0clear(&___nl__9);
#line 277
c_rt_lib0clear(&___nl__7);
#line 277
c_rt_lib0clear(&___nl__8);
#line 278
goto label_1;
#line 278
label_6:
#line 279
c_rt_lib0move(&___nl__8,___get_global_const(87));
#line 279
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 279
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(34), ___nl__8));
#line 279
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__8));
#line 279
c_rt_lib0clear(&___nl__8);
#line 279
c_rt_lib0clear(&___nl__0);
#line 279
c_rt_lib0clear(&___nl__1);
#line 279
c_rt_lib0clear(&___nl__2);
#line 279
c_rt_lib0clear(&___nl__3);
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0clear(&___nl__5);
#line 279
c_rt_lib0clear(&___nl__6);
#line 279
return ___nl__7;
#line 279
c_rt_lib0clear(&___nl__7);
#line 280
goto label_1;
#line 280
label_7:
#line 281
c_rt_lib0move(&___nl__8,___get_global_const(89));
#line 281
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 281
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(35), ___nl__8));
#line 281
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__8));
#line 281
c_rt_lib0clear(&___nl__8);
#line 281
c_rt_lib0clear(&___nl__0);
#line 281
c_rt_lib0clear(&___nl__1);
#line 281
c_rt_lib0clear(&___nl__2);
#line 281
c_rt_lib0clear(&___nl__3);
#line 281
c_rt_lib0clear(&___nl__4);
#line 281
c_rt_lib0clear(&___nl__5);
#line 281
c_rt_lib0clear(&___nl__6);
#line 281
return ___nl__7;
#line 281
c_rt_lib0clear(&___nl__7);
#line 282
goto label_1;
#line 282
label_8:
#line 283
c_rt_lib0move(&___nl__8,___get_global_const(94));
#line 283
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 283
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(36), ___nl__8));
#line 283
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__8));
#line 283
c_rt_lib0clear(&___nl__8);
#line 283
c_rt_lib0clear(&___nl__0);
#line 283
c_rt_lib0clear(&___nl__1);
#line 283
c_rt_lib0clear(&___nl__2);
#line 283
c_rt_lib0clear(&___nl__3);
#line 283
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
c_rt_lib0clear(&___nl__6);
#line 283
return ___nl__7;
#line 283
c_rt_lib0clear(&___nl__7);
#line 284
goto label_1;
#line 284
label_1:
#line 284
c_rt_lib0clear(&___nl__5);
#line 284
c_rt_lib0clear(&___nl__6);
#line 284
c_rt_lib0clear(&___nl__3);
#line 284
c_rt_lib0clear(&___nl__4);
#line 284
c_rt_lib0clear(&___nl__0);
#line 284
c_rt_lib0clear(&___nl__1);
#line 284
c_rt_lib0clear(&___nl__2);
#line 284
return NULL;
}

ImmT compiler_priv0get_all_nianio_file(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 288
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 289
c_rt_lib0move(&___nl__4, ptd0sim());
#line 289
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 289
c_rt_lib0clear(&___nl__4);
#line 289
c_rt_lib0move(&___nl__4, c_fe_lib0get_module_files_rec(___nl__0));
#line 289
c_rt_lib0move(&___nl__2, ptd0ensure(___nl__3, ___nl__4));
#line 289
c_rt_lib0clear(&___nl__4);
#line 289
c_rt_lib0clear(&___nl__3);
#line 290
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 290
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 290
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 290
label_3:
#line 290
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 290
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 290
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 291
c_rt_lib0move(&___nl__9,___get_global_const(88));
#line 291
c_rt_lib0move(&___nl__8, compiler_priv0has_extension(___nl__3, ___nl__9));
#line 291
c_rt_lib0clear(&___nl__9);
#line 291
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 291
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 291
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 291
goto label_5;
#line 291
label_5:
#line 291
c_rt_lib0clear(&___nl__8);
#line 292
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 292
goto label_3;
#line 292
label_1:
#line 292
c_rt_lib0clear(&___nl__3);
#line 292
c_rt_lib0clear(&___nl__4);
#line 292
c_rt_lib0clear(&___nl__5);
#line 292
c_rt_lib0clear(&___nl__6);
#line 292
c_rt_lib0clear(&___nl__7);
#line 293
c_rt_lib0clear(&___nl__0);
#line 293
c_rt_lib0clear(&___nl__2);
#line 293
return ___nl__1;
#line 293
c_rt_lib0clear(&___nl__1);
#line 293
c_rt_lib0clear(&___nl__2);
#line 293
c_rt_lib0clear(&___nl__0);
#line 293
return NULL;
}

ImmT compiler_priv0get_files_to_parse(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
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
#line 297
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(60)));
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 299
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(59)));
#line 299
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 299
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 299
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 299
label_3:
#line 299
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 299
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 299
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 300
c_rt_lib0move(&___nl__10,___get_global_const(88));
#line 300
c_rt_lib0move(&___nl__9, compiler_priv0has_extension(___nl__4, ___nl__10));
#line 300
c_rt_lib0clear(&___nl__10);
#line 300
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 300
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 301
c_rt_lib0move(&___nl__11, compiler_priv0get_dir(___nl__4));
#line 301
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__11, ___get_global_const(91), ___nl__4));
#line 301
c_rt_lib0clear(&___nl__11);
#line 301
c_rt_lib0delete(array0push(&___nl__2, ___nl__10));
#line 301
c_rt_lib0clear(&___nl__10);
#line 302
goto label_4;
#line 302
label_5:
#line 303
c_rt_lib0move(&___nl__10, compiler_priv0get_all_nianio_file(___nl__4));
#line 303
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 303
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 303
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 303
label_8:
#line 303
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 303
if(c_rt_lib0check_true_native(___nl__15)){ goto label_6;}
#line 303
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 304
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__4, ___get_global_const(91), ___nl__11));
#line 304
c_rt_lib0delete(array0push(&___nl__2, ___nl__16));
#line 304
c_rt_lib0clear(&___nl__16);
#line 305
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 305
goto label_8;
#line 305
label_6:
#line 305
c_rt_lib0clear(&___nl__10);
#line 305
c_rt_lib0clear(&___nl__11);
#line 305
c_rt_lib0clear(&___nl__12);
#line 305
c_rt_lib0clear(&___nl__13);
#line 305
c_rt_lib0clear(&___nl__14);
#line 305
c_rt_lib0clear(&___nl__15);
#line 306
goto label_4;
#line 306
label_4:
#line 306
c_rt_lib0clear(&___nl__9);
#line 307
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 307
goto label_3;
#line 307
label_1:
#line 307
c_rt_lib0clear(&___nl__3);
#line 307
c_rt_lib0clear(&___nl__4);
#line 307
c_rt_lib0clear(&___nl__5);
#line 307
c_rt_lib0clear(&___nl__6);
#line 307
c_rt_lib0clear(&___nl__7);
#line 307
c_rt_lib0clear(&___nl__8);
#line 308
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 308
c_rt_lib0move(&___nl__3, compiler_priv0get_out_ext(___nl__4));
#line 308
c_rt_lib0clear(&___nl__4);
#line 309
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 310
c_rt_lib0move(&___nl__5, c_fe_lib0get_module_files(___nl__1));
#line 310
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 310
if(c_rt_lib0check_true_native(___nl__6)){ goto label_10;}
#line 315
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 315
if(c_rt_lib0check_true_native(___nl__6)){ goto label_11;}
#line 315
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 315
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 315
nl_die_arg(___nl__6);
#line 310
label_10:
#line 310
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 311
c_rt_lib0move(&___nl__10, ptd0sim());
#line 311
c_rt_lib0move(&___nl__9, ptd0arr(___nl__10));
#line 311
c_rt_lib0clear(&___nl__10);
#line 311
c_rt_lib0move(&___nl__8, ptd0ensure(___nl__9, ___nl__7));
#line 311
c_rt_lib0clear(&___nl__9);
#line 311
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 311
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 311
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 311
label_14:
#line 311
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 311
if(c_rt_lib0check_true_native(___nl__13)){ goto label_12;}
#line 311
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 312
c_rt_lib0move(&___nl__14, compiler_priv0has_extension(___nl__9, ___nl__3));
#line 312
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 312
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 312
if(c_rt_lib0check_true_native(___nl__14)){ goto label_16;}
#line 312
c_rt_lib0clear(&___nl__14);
#line 312
goto label_13;
#line 312
goto label_16;
#line 312
label_16:
#line 312
c_rt_lib0clear(&___nl__14);
#line 313
c_rt_lib0move(&___nl__14, compiler_priv0get_module_name(___nl__9));
#line 313
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__14, ___nl__9));
#line 313
c_rt_lib0clear(&___nl__14);
#line 313
label_13:
#line 314
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 314
goto label_14;
#line 314
label_12:
#line 314
c_rt_lib0clear(&___nl__8);
#line 314
c_rt_lib0clear(&___nl__9);
#line 314
c_rt_lib0clear(&___nl__10);
#line 314
c_rt_lib0clear(&___nl__11);
#line 314
c_rt_lib0clear(&___nl__12);
#line 314
c_rt_lib0clear(&___nl__13);
#line 314
c_rt_lib0clear(&___nl__7);
#line 315
goto label_9;
#line 315
label_11:
#line 315
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 316
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 316
c_rt_lib0clear(&___nl__0);
#line 316
c_rt_lib0clear(&___nl__1);
#line 316
c_rt_lib0clear(&___nl__2);
#line 316
c_rt_lib0clear(&___nl__3);
#line 316
c_rt_lib0clear(&___nl__4);
#line 316
c_rt_lib0clear(&___nl__5);
#line 316
c_rt_lib0clear(&___nl__6);
#line 316
c_rt_lib0clear(&___nl__7);
#line 316
return ___nl__8;
#line 316
c_rt_lib0clear(&___nl__8);
#line 316
c_rt_lib0clear(&___nl__7);
#line 317
goto label_9;
#line 317
label_9:
#line 317
c_rt_lib0clear(&___nl__5);
#line 317
c_rt_lib0clear(&___nl__6);
#line 318
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 319
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 319
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 319
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__2));
#line 319
label_19:
#line 319
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 319
if(c_rt_lib0check_true_native(___nl__10)){ goto label_17;}
#line 319
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__2, ___nl__7));
#line 320
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(91)));
#line 320
c_rt_lib0move(&___nl__11, compiler_priv0get_module_name(___nl__12));
#line 320
c_rt_lib0clear(&___nl__12);
#line 321
c_rt_lib0move(&___nl__12, compiler_priv0mk_path_module(___nl__6, ___nl__11, ___nl__0));
#line 322
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__11, ___nl__12));
#line 322
c_rt_lib0clear(&___nl__11);
#line 322
c_rt_lib0clear(&___nl__12);
#line 323
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 323
goto label_19;
#line 323
label_17:
#line 323
c_rt_lib0clear(&___nl__6);
#line 323
c_rt_lib0clear(&___nl__7);
#line 323
c_rt_lib0clear(&___nl__8);
#line 323
c_rt_lib0clear(&___nl__9);
#line 323
c_rt_lib0clear(&___nl__10);
#line 324
c_rt_lib0clear(&___nl__0);
#line 324
c_rt_lib0clear(&___nl__1);
#line 324
c_rt_lib0clear(&___nl__2);
#line 324
c_rt_lib0clear(&___nl__3);
#line 324
c_rt_lib0clear(&___nl__4);
#line 324
return ___nl__5;
#line 324
c_rt_lib0clear(&___nl__1);
#line 324
c_rt_lib0clear(&___nl__2);
#line 324
c_rt_lib0clear(&___nl__3);
#line 324
c_rt_lib0clear(&___nl__4);
#line 324
c_rt_lib0clear(&___nl__5);
#line 324
c_rt_lib0clear(&___nl__0);
#line 324
return NULL;
}

ImmT compiler_priv0parse_module(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 331
c_rt_lib0move(&___nl__3,___get_global_const(95));
#line 331
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 331
c_rt_lib0move(&___nl__4,___get_global_const(96));
#line 331
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 331
c_rt_lib0clear(&___nl__4);
#line 331
c_rt_lib0delete(c_fe_lib0print(___nl__3));
#line 331
c_rt_lib0clear(&___nl__3);
#line 332
c_rt_lib0move(&___nl__8, ptd0sim());
#line 332
c_rt_lib0move(&___nl__9, ptd0sim());
#line 332
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__8, ___get_global_const(44), ___nl__9));
#line 332
c_rt_lib0clear(&___nl__8);
#line 332
c_rt_lib0clear(&___nl__9);
#line 332
c_rt_lib0move(&___nl__6, ptd0var(___nl__7));
#line 332
c_rt_lib0clear(&___nl__7);
#line 332
c_rt_lib0move(&___nl__7, c_fe_lib0file_to_string(___nl__1));
#line 332
c_rt_lib0move(&___nl__5, ptd0ensure(___nl__6, ___nl__7));
#line 332
c_rt_lib0clear(&___nl__7);
#line 332
c_rt_lib0clear(&___nl__6);
#line 332
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 332
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 332
c_rt_lib0clear(&___nl__0);
#line 332
c_rt_lib0clear(&___nl__1);
#line 332
c_rt_lib0clear(&___nl__3);
#line 332
c_rt_lib0clear(&___nl__4);
#line 332
return ___nl__5;
#line 332
label_1:
#line 332
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 332
c_rt_lib0clear(&___nl__4);
#line 332
c_rt_lib0clear(&___nl__5);
#line 333
c_rt_lib0move(&___nl__4, nparser0sparse(___nl__3, ___nl__0));
#line 334
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 334
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 340
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(97)));
#line 340
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 340
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 340
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 340
nl_die_arg(___nl__5);
#line 334
label_3:
#line 334
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(45)));
#line 335
c_rt_lib0move(&___nl__7, module_checker0check_module(___nl__6));
#line 336
c_rt_lib0move(&___nl__8,___get_global_const(26));
#line 336
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___2, ___nl__8));
#line 336
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(98)));
#line 336
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__0, ___nl__9));
#line 336
c_rt_lib0clear(&___nl__9);
#line 336
c_rt_lib0move(&___nl__9,___get_global_const(26));
#line 336
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__9, ___nl__8));
#line 336
c_rt_lib0clear(&___nl__9);
#line 336
c_rt_lib0clear(&___nl__8);
#line 337
c_rt_lib0move(&___nl__8,___get_global_const(25));
#line 337
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___2, ___nl__8));
#line 337
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(17)));
#line 337
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__0, ___nl__9));
#line 337
c_rt_lib0clear(&___nl__9);
#line 337
c_rt_lib0move(&___nl__9,___get_global_const(25));
#line 337
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__9, ___nl__8));
#line 337
c_rt_lib0clear(&___nl__9);
#line 337
c_rt_lib0clear(&___nl__8);
#line 338
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(17)));
#line 338
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 338
c_rt_lib0clear(&___nl__9);
#line 338
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 338
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__9));
#line 338
c_rt_lib0clear(&___nl__9);
#line 338
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 338
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 338
if(c_rt_lib0check_true_native(___nl__8)){ goto label_6;}
#line 338
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 338
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__9));
#line 338
c_rt_lib0clear(&___nl__0);
#line 338
c_rt_lib0clear(&___nl__1);
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
#line 338
c_rt_lib0clear(&___nl__8);
#line 338
return ___nl__9;
#line 338
c_rt_lib0clear(&___nl__9);
#line 338
goto label_6;
#line 338
label_6:
#line 338
c_rt_lib0clear(&___nl__8);
#line 339
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__6));
#line 339
c_rt_lib0clear(&___nl__0);
#line 339
c_rt_lib0clear(&___nl__1);
#line 339
c_rt_lib0clear(&___nl__3);
#line 339
c_rt_lib0clear(&___nl__4);
#line 339
c_rt_lib0clear(&___nl__5);
#line 339
c_rt_lib0clear(&___nl__6);
#line 339
c_rt_lib0clear(&___nl__7);
#line 339
return ___nl__8;
#line 339
c_rt_lib0clear(&___nl__8);
#line 339
c_rt_lib0clear(&___nl__7);
#line 339
c_rt_lib0clear(&___nl__6);
#line 340
goto label_2;
#line 340
label_4:
#line 340
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(97)));
#line 341
c_rt_lib0move(&___nl__7,___get_global_const(26));
#line 341
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___2, ___nl__7));
#line 341
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 341
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__0, ___nl__8));
#line 341
c_rt_lib0clear(&___nl__8);
#line 341
c_rt_lib0move(&___nl__8,___get_global_const(26));
#line 341
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__8, ___nl__7));
#line 341
c_rt_lib0clear(&___nl__8);
#line 341
c_rt_lib0clear(&___nl__7);
#line 342
c_rt_lib0move(&___nl__7,___get_global_const(25));
#line 342
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___2, ___nl__7));
#line 342
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__0, ___nl__6));
#line 342
c_rt_lib0move(&___nl__8,___get_global_const(25));
#line 342
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__8, ___nl__7));
#line 342
c_rt_lib0clear(&___nl__8);
#line 342
c_rt_lib0clear(&___nl__7);
#line 343
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 343
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__7));
#line 343
c_rt_lib0clear(&___nl__0);
#line 343
c_rt_lib0clear(&___nl__1);
#line 343
c_rt_lib0clear(&___nl__3);
#line 343
c_rt_lib0clear(&___nl__4);
#line 343
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0clear(&___nl__6);
#line 343
return ___nl__7;
#line 343
c_rt_lib0clear(&___nl__7);
#line 343
c_rt_lib0clear(&___nl__6);
#line 344
goto label_2;
#line 344
label_2:
#line 344
c_rt_lib0clear(&___nl__5);
#line 344
c_rt_lib0clear(&___nl__3);
#line 344
c_rt_lib0clear(&___nl__4);
#line 344
c_rt_lib0clear(&___nl__0);
#line 344
c_rt_lib0clear(&___nl__1);
#line 344
return NULL;
}

ImmT compiler_priv0get_mathematical_func(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
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
#line 348
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 349
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 349
c_rt_lib0move(&___nl__2, c_fe_lib0file_to_string(___nl__3));
#line 349
c_rt_lib0clear(&___nl__3);
#line 349
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(45)));
#line 349
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 362
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(44)));
#line 362
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 362
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 362
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 362
nl_die_arg(___nl__3);
#line 349
label_2:
#line 349
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(45)));
#line 350
c_rt_lib0move(&___nl__5,___get_global_const(99));
#line 350
c_rt_lib0delete(c_fe_lib0print(___nl__5));
#line 350
c_rt_lib0clear(&___nl__5);
#line 351
c_rt_lib0move(&___nl__5, dfile0try_sload(___nl__4));
#line 352
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 353
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 353
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 355
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 355
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 355
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 355
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 355
nl_die_arg(___nl__7);
#line 353
label_5:
#line 353
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 354
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 354
c_rt_lib0clear(&___nl__8);
#line 355
goto label_4;
#line 355
label_6:
#line 355
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 356
c_rt_lib0move(&___nl__9,___get_global_const(100));
#line 356
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 356
c_rt_lib0clear(&___nl__9);
#line 357
c_rt_lib0delete(c_fe_lib0print(___nl__8));
#line 357
c_rt_lib0clear(&___nl__8);
#line 358
goto label_4;
#line 358
label_4:
#line 358
c_rt_lib0clear(&___nl__7);
#line 359
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 359
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 359
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 359
label_9:
#line 359
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 359
if(c_rt_lib0check_true_native(___nl__11)){ goto label_7;}
#line 359
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 360
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 360
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__7, ___nl__12));
#line 360
c_rt_lib0clear(&___nl__12);
#line 361
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 361
goto label_9;
#line 361
label_7:
#line 361
c_rt_lib0clear(&___nl__7);
#line 361
c_rt_lib0clear(&___nl__8);
#line 361
c_rt_lib0clear(&___nl__9);
#line 361
c_rt_lib0clear(&___nl__10);
#line 361
c_rt_lib0clear(&___nl__11);
#line 361
c_rt_lib0clear(&___nl__5);
#line 361
c_rt_lib0clear(&___nl__6);
#line 361
c_rt_lib0clear(&___nl__4);
#line 362
goto label_1;
#line 362
label_3:
#line 362
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(44)));
#line 363
c_rt_lib0move(&___nl__5,___get_global_const(101));
#line 363
c_rt_lib0delete(c_fe_lib0print(___nl__5));
#line 363
c_rt_lib0clear(&___nl__5);
#line 363
c_rt_lib0clear(&___nl__4);
#line 364
goto label_1;
#line 364
label_1:
#line 364
c_rt_lib0clear(&___nl__2);
#line 364
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0clear(&___nl__0);
#line 365
return ___nl__1;
#line 365
c_rt_lib0clear(&___nl__1);
#line 365
c_rt_lib0clear(&___nl__0);
#line 365
return NULL;
}

ImmT compiler_priv0compile_ide(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
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
#line 369
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 370
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 371
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 372
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 373
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 373
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 373
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 373
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 373
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 373
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(5, ___get_global_const(25), ___nl__6, ___get_global_const(26), ___nl__7, ___get_global_const(27), ___nl__8, ___get_global_const(28), ___nl__9, ___get_global_const(29), ___nl__10));
#line 373
c_rt_lib0clear(&___nl__6);
#line 373
c_rt_lib0clear(&___nl__7);
#line 373
c_rt_lib0clear(&___nl__8);
#line 373
c_rt_lib0clear(&___nl__9);
#line 373
c_rt_lib0clear(&___nl__10);
#line 380
c_rt_lib0move(&___nl__7, compiler_priv0get_mathematical_func(___nl__0));
#line 380
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(62)));
#line 380
c_rt_lib0move(&___nl__6, post_processing0init(___nl__7, ___nl__8));
#line 380
c_rt_lib0clear(&___nl__8);
#line 380
c_rt_lib0clear(&___nl__7);
#line 381
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 382
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 382
c_rt_lib0move(&___nl__8, compiler_priv0get_generator_state(___nl__9));
#line 382
c_rt_lib0clear(&___nl__9);
#line 383
label_2:
#line 384
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 384
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 384
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(27), ___nl__10);
#line 384
c_rt_lib0clear(&___nl__9);
#line 384
c_rt_lib0clear(&___nl__10);
#line 385
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 385
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 385
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(28), ___nl__10);
#line 385
c_rt_lib0clear(&___nl__9);
#line 385
c_rt_lib0clear(&___nl__10);
#line 386
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 386
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 386
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(29), ___nl__10);
#line 386
c_rt_lib0clear(&___nl__9);
#line 386
c_rt_lib0clear(&___nl__10);
#line 387
c_rt_lib0move(&___nl__9, compiler_priv0get_files_to_parse(___nl__0));
#line 388
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 389
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__9));
#line 389
label_5:
#line 389
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 389
if(c_rt_lib0check_true_native(___nl__11)){ goto label_3;}
#line 389
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 389
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__9, ___nl__11));
#line 390
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(40)));
#line 390
c_rt_lib0move(&___nl__14, c_fe_lib0get_modif_time(___nl__15));
#line 390
c_rt_lib0clear(&___nl__15);
#line 391
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 391
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__15, ___get_global_const(44)));
#line 391
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 391
if(c_rt_lib0check_true_native(___nl__15)){ goto label_7;}
#line 391
c_rt_lib0clear(&___nl__14);
#line 391
c_rt_lib0clear(&___nl__15);
#line 391
goto label_4;
#line 391
goto label_7;
#line 391
label_7:
#line 391
c_rt_lib0clear(&___nl__15);
#line 392
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 392
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__15, ___get_global_const(45)));
#line 392
c_rt_lib0copy(&___nl__14, ___nl__15);
#line 392
c_rt_lib0clear(&___nl__15);
#line 393
c_rt_lib0move(&___nl__15, hash0has_key(___nl__1, ___nl__11));
#line 393
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 393
if(c_rt_lib0check_true_native(___nl__15)){ goto label_9;}
#line 394
c_rt_lib0move(&___nl__16, hash0get_value(___nl__1, ___nl__11));
#line 395
c_rt_lib0move(&___nl__17, c_rt_lib0gt(___nl__14, ___nl__16));
#line 395
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 395
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 395
if(c_rt_lib0check_true_native(___nl__17)){ goto label_11;}
#line 395
c_rt_lib0clear(&___nl__14);
#line 395
c_rt_lib0clear(&___nl__15);
#line 395
c_rt_lib0clear(&___nl__16);
#line 395
c_rt_lib0clear(&___nl__17);
#line 395
goto label_4;
#line 395
goto label_11;
#line 395
label_11:
#line 395
c_rt_lib0clear(&___nl__17);
#line 395
c_rt_lib0clear(&___nl__16);
#line 396
goto label_9;
#line 396
label_9:
#line 396
c_rt_lib0clear(&___nl__15);
#line 397
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__11, ___nl__14));
#line 398
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__11, ___nl__12));
#line 399
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 399
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__15));
#line 399
c_rt_lib0clear(&___nl__15);
#line 399
c_rt_lib0clear(&___nl__14);
#line 399
label_4:
#line 400
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 400
goto label_5;
#line 400
label_3:
#line 400
c_rt_lib0clear(&___nl__11);
#line 400
c_rt_lib0clear(&___nl__12);
#line 400
c_rt_lib0clear(&___nl__13);
#line 401
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__7));
#line 401
label_14:
#line 401
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 401
if(c_rt_lib0check_true_native(___nl__11)){ goto label_12;}
#line 401
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 401
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__7, ___nl__11));
#line 402
c_rt_lib0move(&___nl__14, hash0has_key(___nl__9, ___nl__11));
#line 402
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 402
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 402
if(c_rt_lib0check_true_native(___nl__14)){ goto label_16;}
#line 403
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 403
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__15));
#line 403
c_rt_lib0clear(&___nl__15);
#line 404
c_rt_lib0move(&___nl__15,___get_global_const(25));
#line 404
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__5, ___nl__15));
#line 404
c_rt_lib0delete(hash0delete(&___nl__15, ___nl__11));
#line 404
c_rt_lib0move(&___nl__16,___get_global_const(25));
#line 404
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__16, ___nl__15));
#line 404
c_rt_lib0clear(&___nl__16);
#line 404
c_rt_lib0clear(&___nl__15);
#line 405
c_rt_lib0move(&___nl__15,___get_global_const(26));
#line 405
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__5, ___nl__15));
#line 405
c_rt_lib0delete(hash0delete(&___nl__15, ___nl__11));
#line 405
c_rt_lib0move(&___nl__16,___get_global_const(26));
#line 405
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__16, ___nl__15));
#line 405
c_rt_lib0clear(&___nl__16);
#line 405
c_rt_lib0clear(&___nl__15);
#line 406
c_rt_lib0delete(hash0delete(&___nl__2, ___nl__11));
#line 407
c_rt_lib0delete(hash0delete(&___nl__1, ___nl__11));
#line 408
c_rt_lib0delete(hash0delete(&___nl__4, ___nl__11));
#line 409
c_rt_lib0delete(hash0delete(&___nl__3, ___nl__11));
#line 410
c_rt_lib0delete(post_processing0clear_module_from_state(&___nl__6, ___nl__11));
#line 411
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 411
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__15, ___get_global_const(32)));
#line 411
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 411
if(c_rt_lib0check_true_native(___nl__15)){ goto label_18;}
#line 412
c_rt_lib0delete(generator_c0clear_module_from_state(&___nl__8, ___nl__11));
#line 413
goto label_18;
#line 413
label_18:
#line 413
c_rt_lib0clear(&___nl__15);
#line 414
goto label_16;
#line 414
label_16:
#line 414
c_rt_lib0clear(&___nl__14);
#line 415
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 415
goto label_14;
#line 415
label_12:
#line 415
c_rt_lib0clear(&___nl__11);
#line 415
c_rt_lib0clear(&___nl__12);
#line 415
c_rt_lib0clear(&___nl__13);
#line 416
c_rt_lib0copy(&___nl__7, ___nl__9);
#line 417
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 417
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__10, ___nl__11));
#line 417
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 417
if(c_rt_lib0check_true_native(___nl__11)){ goto label_20;}
#line 418
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 418
c_rt_lib0delete(c_fe_lib0sleep(___nl__12));
#line 418
c_rt_lib0clear(&___nl__12);
#line 419
c_rt_lib0clear(&___nl__9);
#line 419
c_rt_lib0clear(&___nl__10);
#line 419
c_rt_lib0clear(&___nl__11);
#line 419
goto label_2;
#line 420
goto label_20;
#line 420
label_20:
#line 420
c_rt_lib0clear(&___nl__11);
#line 421
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 422
c_rt_lib0move(&___nl__14, c_rt_lib0init_iter(___nl__4));
#line 422
label_23:
#line 422
c_rt_lib0move(&___nl__12, c_rt_lib0is_end_hash(___nl__14));
#line 422
if(c_rt_lib0check_true_native(___nl__12)){ goto label_21;}
#line 422
c_rt_lib0move(&___nl__12, c_rt_lib0get_key_iter(___nl__14));
#line 422
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value(___nl__4, ___nl__12));
#line 423
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 423
c_rt_lib0move(&___nl__15, compiler_priv0parse_module(___nl__12, ___nl__16, &___nl__5));
#line 423
c_rt_lib0clear(&___nl__16);
#line 423
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(45)));
#line 423
if(c_rt_lib0check_true_native(___nl__16)){ goto label_25;}
#line 426
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(44)));
#line 426
if(c_rt_lib0check_true_native(___nl__16)){ goto label_26;}
#line 426
c_rt_lib0move(&___nl__16,___get_global_const(76));
#line 426
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 426
nl_die_arg(___nl__16);
#line 423
label_25:
#line 423
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(45)));
#line 424
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__12, ___nl__17));
#line 425
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__12, ___nl__17));
#line 425
c_rt_lib0clear(&___nl__17);
#line 426
goto label_24;
#line 426
label_26:
#line 426
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(44)));
#line 427
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__13));
#line 427
c_rt_lib0clear(&___nl__17);
#line 428
goto label_24;
#line 428
label_24:
#line 428
c_rt_lib0clear(&___nl__15);
#line 428
c_rt_lib0clear(&___nl__16);
#line 429
c_rt_lib0move(&___nl__14, c_rt_lib0next_iter(___nl__14));
#line 429
goto label_23;
#line 429
label_21:
#line 429
c_rt_lib0clear(&___nl__12);
#line 429
c_rt_lib0clear(&___nl__13);
#line 429
c_rt_lib0clear(&___nl__14);
#line 430
c_rt_lib0copy(&___nl__4, ___nl__11);
#line 431
c_rt_lib0move(&___nl__12, hash0size(___nl__4));
#line 431
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 431
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 431
c_rt_lib0clear(&___nl__13);
#line 431
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 431
if(c_rt_lib0check_true_native(___nl__12)){ goto label_28;}
#line 432
c_rt_lib0delete(compiler_priv0show_and_count_errors(___nl__5, ___nl__0));
#line 433
c_rt_lib0move(&___nl__13, string0lf());
#line 433
c_rt_lib0move(&___nl__14,___get_global_const(102));
#line 433
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 433
c_rt_lib0clear(&___nl__14);
#line 433
c_rt_lib0move(&___nl__14, hash0size(___nl__4));
#line 433
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 433
c_rt_lib0clear(&___nl__14);
#line 433
c_rt_lib0move(&___nl__14,___get_global_const(103));
#line 433
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 433
c_rt_lib0clear(&___nl__14);
#line 433
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 433
c_rt_lib0clear(&___nl__13);
#line 434
c_rt_lib0move(&___nl__13,___get_global_const(104));
#line 434
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 434
c_rt_lib0clear(&___nl__13);
#line 435
c_rt_lib0clear(&___nl__9);
#line 435
c_rt_lib0clear(&___nl__10);
#line 435
c_rt_lib0clear(&___nl__11);
#line 435
c_rt_lib0clear(&___nl__12);
#line 435
goto label_2;
#line 436
goto label_28;
#line 436
label_28:
#line 436
c_rt_lib0clear(&___nl__12);
#line 437
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(61)));
#line 437
c_rt_lib0delete(compiler_priv0check_modules(___nl__2, &___nl__5, ___nl__12));
#line 437
c_rt_lib0clear(&___nl__12);
#line 438
c_rt_lib0move(&___nl__12, compiler_priv0show_and_count_errors(___nl__5, ___nl__0));
#line 438
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 438
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 438
c_rt_lib0clear(&___nl__13);
#line 438
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 438
if(c_rt_lib0check_true_native(___nl__12)){ goto label_30;}
#line 439
c_rt_lib0move(&___nl__13,___get_global_const(104));
#line 439
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 439
c_rt_lib0clear(&___nl__13);
#line 440
c_rt_lib0clear(&___nl__9);
#line 440
c_rt_lib0clear(&___nl__10);
#line 440
c_rt_lib0clear(&___nl__11);
#line 440
c_rt_lib0clear(&___nl__12);
#line 440
goto label_2;
#line 441
goto label_30;
#line 441
label_30:
#line 441
c_rt_lib0clear(&___nl__12);
#line 442
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 442
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(34)));
#line 442
if(c_rt_lib0check_true_native(___nl__12)){ goto label_33;}
#line 442
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 442
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(33)));
#line 442
label_33:
#line 442
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 442
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 442
if(c_rt_lib0check_true_native(___nl__12)){ goto label_32;}
#line 443
c_rt_lib0move(&___nl__13,___get_global_const(105));
#line 443
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 443
c_rt_lib0clear(&___nl__13);
#line 444
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 445
c_rt_lib0move(&___nl__14, compiler_priv0translate(___nl__3, &___nl__6));
#line 446
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(60)));
#line 446
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 446
c_rt_lib0move(&___nl__15, compiler_priv0generate_modules_to_files(___nl__14, ___nl__9, ___nl__16, &___nl__8, ___nl__17));
#line 446
c_rt_lib0clear(&___nl__17);
#line 446
c_rt_lib0clear(&___nl__16);
#line 447
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(44)));
#line 447
if(c_rt_lib0check_true_native(___nl__16)){ goto label_35;}
#line 451
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(45)));
#line 451
if(c_rt_lib0check_true_native(___nl__16)){ goto label_36;}
#line 451
c_rt_lib0move(&___nl__16,___get_global_const(76));
#line 451
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 451
nl_die_arg(___nl__16);
#line 447
label_35:
#line 447
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(44)));
#line 448
c_rt_lib0move(&___nl__20, c_rt_lib0init_iter(___nl__17));
#line 448
label_39:
#line 448
c_rt_lib0move(&___nl__18, c_rt_lib0is_end_hash(___nl__20));
#line 448
if(c_rt_lib0check_true_native(___nl__18)){ goto label_37;}
#line 448
c_rt_lib0move(&___nl__18, c_rt_lib0get_key_iter(___nl__20));
#line 448
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value(___nl__17, ___nl__18));
#line 449
c_rt_lib0move(&___nl__21, hash0get_value(___nl__2, ___nl__18));
#line 449
c_rt_lib0delete(hash0set_value(&___nl__13, ___nl__18, ___nl__21));
#line 449
c_rt_lib0clear(&___nl__21);
#line 450
c_rt_lib0move(&___nl__20, c_rt_lib0next_iter(___nl__20));
#line 450
goto label_39;
#line 450
label_37:
#line 450
c_rt_lib0clear(&___nl__18);
#line 450
c_rt_lib0clear(&___nl__19);
#line 450
c_rt_lib0clear(&___nl__20);
#line 450
c_rt_lib0clear(&___nl__17);
#line 451
goto label_34;
#line 451
label_36:
#line 451
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(45)));
#line 451
c_rt_lib0clear(&___nl__17);
#line 452
goto label_34;
#line 452
label_34:
#line 452
c_rt_lib0clear(&___nl__15);
#line 452
c_rt_lib0clear(&___nl__16);
#line 453
c_rt_lib0copy(&___nl__3, ___nl__13);
#line 453
c_rt_lib0clear(&___nl__13);
#line 453
c_rt_lib0clear(&___nl__14);
#line 454
goto label_31;
#line 454
label_32:
#line 455
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 456
c_rt_lib0move(&___nl__16, c_rt_lib0init_iter(___nl__3));
#line 456
label_42:
#line 456
c_rt_lib0move(&___nl__14, c_rt_lib0is_end_hash(___nl__16));
#line 456
if(c_rt_lib0check_true_native(___nl__14)){ goto label_40;}
#line 456
c_rt_lib0move(&___nl__14, c_rt_lib0get_key_iter(___nl__16));
#line 456
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value(___nl__3, ___nl__14));
#line 457
c_rt_lib0move(&___nl__17,___get_global_const(106));
#line 457
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__14));
#line 457
c_rt_lib0delete(c_fe_lib0print(___nl__17));
#line 457
c_rt_lib0clear(&___nl__17);
#line 458
c_rt_lib0move(&___nl__18, hash0get_value(___nl__9, ___nl__14));
#line 458
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__18, ___get_global_const(41)));
#line 458
c_rt_lib0move(&___nl__17, compiler_priv0save_module_to_file(___nl__15, ___nl__18));
#line 458
c_rt_lib0clear(&___nl__18);
#line 458
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(44)));
#line 458
if(c_rt_lib0check_true_native(___nl__18)){ goto label_44;}
#line 461
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(45)));
#line 461
if(c_rt_lib0check_true_native(___nl__18)){ goto label_45;}
#line 461
c_rt_lib0move(&___nl__18,___get_global_const(76));
#line 461
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(2, ___nl__18, ___nl__17));
#line 461
nl_die_arg(___nl__18);
#line 458
label_44:
#line 458
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(44)));
#line 459
c_rt_lib0move(&___nl__20,___get_global_const(107));
#line 459
c_rt_lib0move(&___nl__20, c_rt_lib0concat_add(___nl__20, ___nl__19));
#line 459
c_rt_lib0delete(c_fe_lib0print(___nl__20));
#line 459
c_rt_lib0clear(&___nl__20);
#line 460
c_rt_lib0delete(hash0set_value(&___nl__13, ___nl__14, ___nl__15));
#line 460
c_rt_lib0clear(&___nl__19);
#line 461
goto label_43;
#line 461
label_45:
#line 461
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(45)));
#line 461
c_rt_lib0clear(&___nl__19);
#line 462
goto label_43;
#line 462
label_43:
#line 462
c_rt_lib0clear(&___nl__17);
#line 462
c_rt_lib0clear(&___nl__18);
#line 463
c_rt_lib0move(&___nl__16, c_rt_lib0next_iter(___nl__16));
#line 463
goto label_42;
#line 463
label_40:
#line 463
c_rt_lib0clear(&___nl__14);
#line 463
c_rt_lib0clear(&___nl__15);
#line 463
c_rt_lib0clear(&___nl__16);
#line 464
c_rt_lib0copy(&___nl__3, ___nl__13);
#line 464
c_rt_lib0clear(&___nl__13);
#line 465
goto label_31;
#line 465
label_31:
#line 465
c_rt_lib0clear(&___nl__12);
#line 466
c_rt_lib0move(&___nl__12, hash0size(___nl__3));
#line 466
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 466
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 466
c_rt_lib0clear(&___nl__13);
#line 466
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 466
if(c_rt_lib0check_true_native(___nl__12)){ goto label_47;}
#line 467
c_rt_lib0move(&___nl__13,___get_global_const(108));
#line 467
c_rt_lib0move(&___nl__14, hash0size(___nl__3));
#line 467
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 467
c_rt_lib0clear(&___nl__14);
#line 467
c_rt_lib0move(&___nl__14,___get_global_const(109));
#line 467
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 467
c_rt_lib0clear(&___nl__14);
#line 468
c_rt_lib0move(&___nl__14, string0lf());
#line 468
c_rt_lib0move(&___nl__15,___get_global_const(107));
#line 468
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 468
c_rt_lib0clear(&___nl__15);
#line 468
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__13));
#line 468
c_rt_lib0delete(c_fe_lib0print(___nl__14));
#line 468
c_rt_lib0clear(&___nl__14);
#line 468
c_rt_lib0clear(&___nl__13);
#line 469
goto label_46;
#line 469
label_47:
#line 470
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 470
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(55)));
#line 470
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 470
if(c_rt_lib0check_true_native(___nl__13)){ goto label_49;}
#line 470
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 470
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(55)));
#line 470
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__14));
#line 470
c_rt_lib0clear(&___nl__14);
#line 470
goto label_49;
#line 470
label_49:
#line 470
c_rt_lib0clear(&___nl__13);
#line 471
c_rt_lib0move(&___nl__13, string0lf());
#line 471
c_rt_lib0move(&___nl__14,___get_global_const(110));
#line 471
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 471
c_rt_lib0clear(&___nl__14);
#line 471
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 471
c_rt_lib0clear(&___nl__13);
#line 472
goto label_46;
#line 472
label_46:
#line 472
c_rt_lib0clear(&___nl__12);
#line 473
c_rt_lib0move(&___nl__12,___get_global_const(104));
#line 473
c_rt_lib0delete(c_fe_lib0print(___nl__12));
#line 473
c_rt_lib0clear(&___nl__12);
#line 473
c_rt_lib0clear(&___nl__9);
#line 473
c_rt_lib0clear(&___nl__10);
#line 473
c_rt_lib0clear(&___nl__11);
#line 383
goto label_2;
#line 383
c_rt_lib0clear(&___nl__1);
#line 383
c_rt_lib0clear(&___nl__2);
#line 383
c_rt_lib0clear(&___nl__3);
#line 383
c_rt_lib0clear(&___nl__4);
#line 383
c_rt_lib0clear(&___nl__5);
#line 383
c_rt_lib0clear(&___nl__6);
#line 383
c_rt_lib0clear(&___nl__7);
#line 383
c_rt_lib0clear(&___nl__8);
#line 383
c_rt_lib0clear(&___nl__0);
#line 383
return NULL;
}

ImmT compiler_priv0compile_strict_file(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
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
#line 478
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 479
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 479
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 479
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 479
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 479
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 479
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(5, ___get_global_const(25), ___nl__3, ___get_global_const(26), ___nl__4, ___get_global_const(27), ___nl__5, ___get_global_const(28), ___nl__6, ___get_global_const(29), ___nl__7));
#line 479
c_rt_lib0clear(&___nl__3);
#line 479
c_rt_lib0clear(&___nl__4);
#line 479
c_rt_lib0clear(&___nl__5);
#line 479
c_rt_lib0clear(&___nl__6);
#line 479
c_rt_lib0clear(&___nl__7);
#line 486
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 487
c_rt_lib0move(&___nl__4, compiler_priv0get_files_to_parse(___nl__0));
#line 488
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 488
label_3:
#line 488
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 488
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 488
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 488
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 489
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(40)));
#line 489
c_rt_lib0move(&___nl__8, compiler_priv0parse_module(___nl__5, ___nl__9, &___nl__2));
#line 489
c_rt_lib0clear(&___nl__9);
#line 489
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 489
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 491
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 491
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 491
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 491
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 491
nl_die_arg(___nl__9);
#line 489
label_5:
#line 489
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 490
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__5, ___nl__10));
#line 490
c_rt_lib0clear(&___nl__10);
#line 491
goto label_4;
#line 491
label_6:
#line 491
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 492
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 492
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__11));
#line 492
c_rt_lib0clear(&___nl__11);
#line 492
c_rt_lib0clear(&___nl__10);
#line 493
goto label_4;
#line 493
label_4:
#line 493
c_rt_lib0clear(&___nl__8);
#line 493
c_rt_lib0clear(&___nl__9);
#line 494
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 494
goto label_3;
#line 494
label_1:
#line 494
c_rt_lib0clear(&___nl__5);
#line 494
c_rt_lib0clear(&___nl__6);
#line 494
c_rt_lib0clear(&___nl__7);
#line 495
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 495
c_rt_lib0move(&___nl__5, c_rt_lib0num_ne(___nl__3, ___nl__5));
#line 495
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 495
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 496
c_rt_lib0delete(compiler_priv0show_and_count_errors(___nl__2, ___nl__0));
#line 497
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
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
return ___nl__6;
#line 497
c_rt_lib0clear(&___nl__6);
#line 498
goto label_8;
#line 498
label_8:
#line 498
c_rt_lib0clear(&___nl__5);
#line 499
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(61)));
#line 499
c_rt_lib0delete(compiler_priv0check_modules(___nl__1, &___nl__2, ___nl__5));
#line 499
c_rt_lib0clear(&___nl__5);
#line 500
c_rt_lib0move(&___nl__5, compiler_priv0show_and_count_errors(___nl__2, ___nl__0));
#line 500
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 500
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 500
c_rt_lib0clear(&___nl__6);
#line 500
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 500
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 501
c_rt_lib0move(&___nl__6, c_rt_lib0get_false());
#line 501
c_rt_lib0clear(&___nl__0);
#line 501
c_rt_lib0clear(&___nl__1);
#line 501
c_rt_lib0clear(&___nl__2);
#line 501
c_rt_lib0clear(&___nl__3);
#line 501
c_rt_lib0clear(&___nl__4);
#line 501
c_rt_lib0clear(&___nl__5);
#line 501
return ___nl__6;
#line 501
c_rt_lib0clear(&___nl__6);
#line 502
goto label_10;
#line 502
label_10:
#line 502
c_rt_lib0clear(&___nl__5);
#line 503
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 503
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(34)));
#line 503
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 503
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 503
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(33)));
#line 503
label_13:
#line 503
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 503
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 503
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 504
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 504
c_rt_lib0move(&___nl__6, compiler_priv0get_generator_state(___nl__7));
#line 504
c_rt_lib0clear(&___nl__7);
#line 505
c_rt_lib0move(&___nl__7,___get_global_const(105));
#line 505
c_rt_lib0delete(c_fe_lib0print(___nl__7));
#line 505
c_rt_lib0clear(&___nl__7);
#line 506
c_rt_lib0move(&___nl__8, compiler_priv0get_mathematical_func(___nl__0));
#line 506
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(62)));
#line 506
c_rt_lib0move(&___nl__7, post_processing0init(___nl__8, ___nl__9));
#line 506
c_rt_lib0clear(&___nl__9);
#line 506
c_rt_lib0clear(&___nl__8);
#line 507
c_rt_lib0move(&___nl__8, compiler_priv0translate(___nl__1, &___nl__7));
#line 508
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(60)));
#line 508
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 508
c_rt_lib0delete(compiler_priv0generate_modules_to_files(___nl__8, ___nl__4, ___nl__9, &___nl__6, ___nl__10));
#line 508
c_rt_lib0clear(&___nl__10);
#line 508
c_rt_lib0clear(&___nl__9);
#line 508
c_rt_lib0clear(&___nl__6);
#line 508
c_rt_lib0clear(&___nl__7);
#line 508
c_rt_lib0clear(&___nl__8);
#line 509
goto label_11;
#line 509
label_12:
#line 510
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__1));
#line 510
label_16:
#line 510
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 510
if(c_rt_lib0check_true_native(___nl__6)){ goto label_14;}
#line 510
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 510
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__1, ___nl__6));
#line 511
c_rt_lib0move(&___nl__9,___get_global_const(106));
#line 511
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 511
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 511
c_rt_lib0clear(&___nl__9);
#line 512
c_rt_lib0move(&___nl__10, hash0get_value(___nl__4, ___nl__6));
#line 512
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(41)));
#line 512
c_rt_lib0move(&___nl__9, compiler_priv0save_module_to_file(___nl__7, ___nl__10));
#line 512
c_rt_lib0clear(&___nl__10);
#line 512
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(44)));
#line 512
if(c_rt_lib0check_true_native(___nl__10)){ goto label_18;}
#line 515
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(45)));
#line 515
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 515
c_rt_lib0move(&___nl__10,___get_global_const(76));
#line 515
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 515
nl_die_arg(___nl__10);
#line 512
label_18:
#line 512
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(44)));
#line 513
c_rt_lib0move(&___nl__12,___get_global_const(107));
#line 513
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__11));
#line 513
c_rt_lib0delete(c_fe_lib0print(___nl__12));
#line 513
c_rt_lib0clear(&___nl__12);
#line 514
c_rt_lib0move(&___nl__12, c_rt_lib0get_false());
#line 514
c_rt_lib0clear(&___nl__0);
#line 514
c_rt_lib0clear(&___nl__1);
#line 514
c_rt_lib0clear(&___nl__2);
#line 514
c_rt_lib0clear(&___nl__3);
#line 514
c_rt_lib0clear(&___nl__4);
#line 514
c_rt_lib0clear(&___nl__5);
#line 514
c_rt_lib0clear(&___nl__6);
#line 514
c_rt_lib0clear(&___nl__7);
#line 514
c_rt_lib0clear(&___nl__8);
#line 514
c_rt_lib0clear(&___nl__9);
#line 514
c_rt_lib0clear(&___nl__10);
#line 514
c_rt_lib0clear(&___nl__11);
#line 514
return ___nl__12;
#line 514
c_rt_lib0clear(&___nl__12);
#line 514
c_rt_lib0clear(&___nl__11);
#line 515
goto label_17;
#line 515
label_19:
#line 515
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(45)));
#line 515
c_rt_lib0clear(&___nl__11);
#line 516
goto label_17;
#line 516
label_17:
#line 516
c_rt_lib0clear(&___nl__9);
#line 516
c_rt_lib0clear(&___nl__10);
#line 517
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 517
goto label_16;
#line 517
label_14:
#line 517
c_rt_lib0clear(&___nl__6);
#line 517
c_rt_lib0clear(&___nl__7);
#line 517
c_rt_lib0clear(&___nl__8);
#line 518
goto label_11;
#line 518
label_11:
#line 518
c_rt_lib0clear(&___nl__5);
#line 519
c_rt_lib0move(&___nl__5, c_rt_lib0get_true());
#line 519
c_rt_lib0clear(&___nl__0);
#line 519
c_rt_lib0clear(&___nl__1);
#line 519
c_rt_lib0clear(&___nl__2);
#line 519
c_rt_lib0clear(&___nl__3);
#line 519
c_rt_lib0clear(&___nl__4);
#line 519
return ___nl__5;
#line 519
c_rt_lib0clear(&___nl__5);
#line 519
c_rt_lib0clear(&___nl__1);
#line 519
c_rt_lib0clear(&___nl__2);
#line 519
c_rt_lib0clear(&___nl__3);
#line 519
c_rt_lib0clear(&___nl__4);
#line 519
c_rt_lib0clear(&___nl__0);
#line 519
return NULL;
}

ImmT compiler_priv0construct_error_message(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 523
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 524
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(111)));
#line 524
c_rt_lib0move(&___nl__2, string0length(___nl__3));
#line 524
c_rt_lib0clear(&___nl__3);
#line 524
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 524
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__3));
#line 524
c_rt_lib0clear(&___nl__3);
#line 524
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 524
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 524
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 524
c_rt_lib0move(&___nl__3,___get_global_const(112));
#line 524
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(111)));
#line 524
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 524
c_rt_lib0clear(&___nl__4);
#line 524
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 524
c_rt_lib0clear(&___nl__3);
#line 524
goto label_2;
#line 524
label_2:
#line 524
c_rt_lib0clear(&___nl__2);
#line 525
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(113)));
#line 525
c_rt_lib0move(&___nl__2, string0length(___nl__3));
#line 525
c_rt_lib0clear(&___nl__3);
#line 525
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 525
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__3));
#line 525
c_rt_lib0clear(&___nl__3);
#line 525
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 525
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 525
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 525
c_rt_lib0move(&___nl__3,___get_global_const(114));
#line 525
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(113)));
#line 525
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 525
c_rt_lib0clear(&___nl__4);
#line 525
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 525
c_rt_lib0clear(&___nl__3);
#line 525
goto label_4;
#line 525
label_4:
#line 525
c_rt_lib0clear(&___nl__2);
#line 526
c_rt_lib0move(&___nl__2, string0lf());
#line 526
c_rt_lib0move(&___nl__3,___get_global_const(115));
#line 526
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 526
c_rt_lib0clear(&___nl__3);
#line 526
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(116)));
#line 526
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 526
c_rt_lib0clear(&___nl__3);
#line 526
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 526
c_rt_lib0clear(&___nl__2);
#line 527
c_rt_lib0clear(&___nl__0);
#line 527
return ___nl__1;
#line 527
c_rt_lib0clear(&___nl__1);
#line 527
c_rt_lib0clear(&___nl__0);
#line 527
return NULL;
}

ImmT compiler_priv0show_and_count_errors(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
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
#line 531
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 532
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 533
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(26)));
#line 533
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 533
label_3:
#line 533
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 533
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 533
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 533
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 534
c_rt_lib0move(&___nl__8,___get_global_const(117));
#line 535
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(66)));
#line 535
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(58)));
#line 535
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 535
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 535
c_rt_lib0move(&___nl__10,___get_global_const(118));
#line 535
c_rt_lib0copy(&___nl__8, ___nl__10);
#line 535
c_rt_lib0clear(&___nl__10);
#line 535
goto label_5;
#line 535
label_5:
#line 535
c_rt_lib0clear(&___nl__9);
#line 536
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 536
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 536
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__6));
#line 536
label_8:
#line 536
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 536
if(c_rt_lib0check_true_native(___nl__13)){ goto label_6;}
#line 536
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__6, ___nl__10));
#line 537
c_rt_lib0move(&___nl__14, compiler_priv0construct_error_message(___nl__9));
#line 537
c_rt_lib0move(&___nl__14, c_rt_lib0concat_new(___nl__8, ___nl__14));
#line 537
c_rt_lib0delete(c_fe_lib0print(___nl__14));
#line 537
c_rt_lib0clear(&___nl__14);
#line 538
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 538
goto label_8;
#line 538
label_6:
#line 538
c_rt_lib0clear(&___nl__9);
#line 538
c_rt_lib0clear(&___nl__10);
#line 538
c_rt_lib0clear(&___nl__11);
#line 538
c_rt_lib0clear(&___nl__12);
#line 538
c_rt_lib0clear(&___nl__13);
#line 539
c_rt_lib0move(&___nl__9, array0len(___nl__6));
#line 539
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__9));
#line 539
c_rt_lib0clear(&___nl__9);
#line 540
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(28)));
#line 540
c_rt_lib0move(&___nl__9, hash0has_key(___nl__10, ___nl__5));
#line 540
c_rt_lib0clear(&___nl__10);
#line 540
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 540
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 541
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(28)));
#line 541
c_rt_lib0move(&___nl__10, hash0get_value(___nl__11, ___nl__5));
#line 541
c_rt_lib0clear(&___nl__11);
#line 542
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 542
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 542
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 542
label_13:
#line 542
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 542
if(c_rt_lib0check_true_native(___nl__15)){ goto label_11;}
#line 542
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 543
c_rt_lib0move(&___nl__16, compiler_priv0construct_error_message(___nl__11));
#line 543
c_rt_lib0move(&___nl__16, c_rt_lib0concat_new(___nl__8, ___nl__16));
#line 543
c_rt_lib0delete(c_fe_lib0print(___nl__16));
#line 543
c_rt_lib0clear(&___nl__16);
#line 544
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 544
goto label_13;
#line 544
label_11:
#line 544
c_rt_lib0clear(&___nl__11);
#line 544
c_rt_lib0clear(&___nl__12);
#line 544
c_rt_lib0clear(&___nl__13);
#line 544
c_rt_lib0clear(&___nl__14);
#line 544
c_rt_lib0clear(&___nl__15);
#line 545
c_rt_lib0move(&___nl__11, array0len(___nl__10));
#line 545
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__11));
#line 545
c_rt_lib0clear(&___nl__11);
#line 545
c_rt_lib0clear(&___nl__10);
#line 546
goto label_10;
#line 546
label_10:
#line 546
c_rt_lib0clear(&___nl__9);
#line 547
c_rt_lib0move(&___nl__9,___get_global_const(118));
#line 547
c_rt_lib0copy(&___nl__8, ___nl__9);
#line 547
c_rt_lib0clear(&___nl__9);
#line 548
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(25)));
#line 548
c_rt_lib0move(&___nl__9, hash0get_value(___nl__10, ___nl__5));
#line 548
c_rt_lib0clear(&___nl__10);
#line 549
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 549
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 549
c_rt_lib0move(&___nl__13, c_rt_lib0array_len(___nl__9));
#line 549
label_16:
#line 549
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__11, ___nl__13));
#line 549
if(c_rt_lib0check_true_native(___nl__14)){ goto label_14;}
#line 549
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__9, ___nl__11));
#line 550
c_rt_lib0move(&___nl__15,___get_global_const(118));
#line 550
c_rt_lib0move(&___nl__16, compiler_priv0construct_error_message(___nl__10));
#line 550
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 550
c_rt_lib0clear(&___nl__16);
#line 550
c_rt_lib0delete(c_fe_lib0print(___nl__15));
#line 550
c_rt_lib0clear(&___nl__15);
#line 551
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__12));
#line 551
goto label_16;
#line 551
label_14:
#line 551
c_rt_lib0clear(&___nl__10);
#line 551
c_rt_lib0clear(&___nl__11);
#line 551
c_rt_lib0clear(&___nl__12);
#line 551
c_rt_lib0clear(&___nl__13);
#line 551
c_rt_lib0clear(&___nl__14);
#line 552
c_rt_lib0move(&___nl__10, array0len(___nl__9));
#line 552
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__10));
#line 552
c_rt_lib0clear(&___nl__10);
#line 553
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(27)));
#line 553
c_rt_lib0move(&___nl__10, hash0has_key(___nl__11, ___nl__5));
#line 553
c_rt_lib0clear(&___nl__11);
#line 553
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 553
if(c_rt_lib0check_true_native(___nl__10)){ goto label_18;}
#line 554
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(27)));
#line 554
c_rt_lib0move(&___nl__11, hash0get_value(___nl__12, ___nl__5));
#line 554
c_rt_lib0clear(&___nl__12);
#line 555
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 555
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 555
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 555
label_21:
#line 555
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 555
if(c_rt_lib0check_true_native(___nl__16)){ goto label_19;}
#line 555
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 556
c_rt_lib0move(&___nl__17,___get_global_const(118));
#line 556
c_rt_lib0move(&___nl__18, compiler_priv0construct_error_message(___nl__12));
#line 556
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 556
c_rt_lib0clear(&___nl__18);
#line 556
c_rt_lib0delete(c_fe_lib0print(___nl__17));
#line 556
c_rt_lib0clear(&___nl__17);
#line 557
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 557
goto label_21;
#line 557
label_19:
#line 557
c_rt_lib0clear(&___nl__12);
#line 557
c_rt_lib0clear(&___nl__13);
#line 557
c_rt_lib0clear(&___nl__14);
#line 557
c_rt_lib0clear(&___nl__15);
#line 557
c_rt_lib0clear(&___nl__16);
#line 558
c_rt_lib0move(&___nl__12, array0len(___nl__11));
#line 558
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__12));
#line 558
c_rt_lib0clear(&___nl__12);
#line 558
c_rt_lib0clear(&___nl__11);
#line 559
goto label_18;
#line 559
label_18:
#line 559
c_rt_lib0clear(&___nl__10);
#line 559
c_rt_lib0clear(&___nl__8);
#line 559
c_rt_lib0clear(&___nl__9);
#line 560
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 560
goto label_3;
#line 560
label_1:
#line 560
c_rt_lib0clear(&___nl__4);
#line 560
c_rt_lib0clear(&___nl__5);
#line 560
c_rt_lib0clear(&___nl__6);
#line 560
c_rt_lib0clear(&___nl__7);
#line 561
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(29)));
#line 561
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(119)));
#line 561
if(c_rt_lib0check_true_native(___nl__5)){ goto label_23;}
#line 568
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 568
if(c_rt_lib0check_true_native(___nl__5)){ goto label_24;}
#line 568
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 568
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 568
nl_die_arg(___nl__5);
#line 561
label_23:
#line 561
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(119)));
#line 562
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 563
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 563
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 563
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__6));
#line 563
label_27:
#line 563
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 563
if(c_rt_lib0check_true_native(___nl__12)){ goto label_25;}
#line 563
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__6, ___nl__9));
#line 564
c_rt_lib0move(&___nl__13,___get_global_const(120));
#line 564
c_rt_lib0move(&___nl__13, c_rt_lib0concat_new(___nl__8, ___nl__13));
#line 564
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__13));
#line 564
c_rt_lib0clear(&___nl__13);
#line 565
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 565
goto label_27;
#line 565
label_25:
#line 565
c_rt_lib0clear(&___nl__8);
#line 565
c_rt_lib0clear(&___nl__9);
#line 565
c_rt_lib0clear(&___nl__10);
#line 565
c_rt_lib0clear(&___nl__11);
#line 565
c_rt_lib0clear(&___nl__12);
#line 566
c_rt_lib0move(&___nl__8,___get_global_const(121));
#line 566
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__7));
#line 566
c_rt_lib0move(&___nl__9,___get_global_const(122));
#line 566
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 566
c_rt_lib0clear(&___nl__9);
#line 566
c_rt_lib0delete(c_fe_lib0print(___nl__8));
#line 566
c_rt_lib0clear(&___nl__8);
#line 567
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 567
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__8));
#line 567
c_rt_lib0clear(&___nl__8);
#line 567
c_rt_lib0clear(&___nl__7);
#line 567
c_rt_lib0clear(&___nl__6);
#line 568
goto label_22;
#line 568
label_24:
#line 569
goto label_22;
#line 569
label_22:
#line 569
c_rt_lib0clear(&___nl__4);
#line 569
c_rt_lib0clear(&___nl__5);
#line 570
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(66)));
#line 570
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(58)));
#line 570
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 570
if(c_rt_lib0check_true_native(___nl__4)){ goto label_29;}
#line 571
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__2));
#line 572
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 572
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 572
c_rt_lib0clear(&___nl__5);
#line 573
goto label_29;
#line 573
label_29:
#line 573
c_rt_lib0clear(&___nl__4);
#line 574
c_rt_lib0move(&___nl__4,___get_global_const(123));
#line 574
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 574
c_rt_lib0move(&___nl__5,___get_global_const(124));
#line 574
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 574
c_rt_lib0clear(&___nl__5);
#line 574
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__2));
#line 574
c_rt_lib0delete(c_fe_lib0print(___nl__4));
#line 574
c_rt_lib0clear(&___nl__4);
#line 575
c_rt_lib0clear(&___nl__0);
#line 575
c_rt_lib0clear(&___nl__1);
#line 575
c_rt_lib0clear(&___nl__2);
#line 575
return ___nl__3;
#line 575
c_rt_lib0clear(&___nl__2);
#line 575
c_rt_lib0clear(&___nl__3);
#line 575
c_rt_lib0clear(&___nl__0);
#line 575
c_rt_lib0clear(&___nl__1);
#line 575
return NULL;
}

ImmT compiler_priv0translate(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 579
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 580
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 580
label_3:
#line 580
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 580
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 580
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 580
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 581
c_rt_lib0move(&___nl__6, translator0translate(___nl__4));
#line 582
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__6));
#line 582
c_rt_lib0clear(&___nl__6);
#line 583
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 583
goto label_3;
#line 583
label_1:
#line 583
c_rt_lib0clear(&___nl__3);
#line 583
c_rt_lib0clear(&___nl__4);
#line 583
c_rt_lib0clear(&___nl__5);
#line 584
c_rt_lib0delete(post_processing0find(___ref___1, &___nl__2));
#line 585
c_rt_lib0clear(&___nl__0);
#line 585
return ___nl__2;
#line 585
c_rt_lib0clear(&___nl__2);
#line 585
c_rt_lib0clear(&___nl__0);
#line 585
return NULL;
}

ImmT compiler_priv0check_modules(ImmT ___nl__0,ImmT * ___ref___1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__2);
compiler_priv0__const__init();
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
#line 590
c_rt_lib0move(&___nl__3,___get_global_const(125));
#line 590
c_rt_lib0delete(c_fe_lib0print(___nl__3));
#line 590
c_rt_lib0clear(&___nl__3);
#line 591
c_rt_lib0move(&___nl__3, type_checker0check_modules(___nl__0, ___nl__0));
#line 592
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(17)));
#line 592
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 592
c_rt_lib0clear(&___nl__5);
#line 593
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(17)));
#line 593
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 593
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 593
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 593
label_3:
#line 593
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 593
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 593
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 594
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 595
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(27)));
#line 595
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 595
c_rt_lib0move(&___nl__12, hash0has_key(___nl__13, ___nl__14));
#line 595
c_rt_lib0clear(&___nl__14);
#line 595
c_rt_lib0clear(&___nl__13);
#line 595
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 595
if(c_rt_lib0check_true_native(___nl__12)){ goto label_5;}
#line 596
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(27)));
#line 596
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 596
c_rt_lib0move(&___nl__13, hash0get_value(___nl__14, ___nl__15));
#line 596
c_rt_lib0clear(&___nl__15);
#line 596
c_rt_lib0clear(&___nl__14);
#line 596
c_rt_lib0copy(&___nl__11, ___nl__13);
#line 596
c_rt_lib0clear(&___nl__13);
#line 597
goto label_5;
#line 597
label_5:
#line 597
c_rt_lib0clear(&___nl__12);
#line 598
c_rt_lib0delete(array0push(&___nl__11, ___nl__6));
#line 599
c_rt_lib0move(&___nl__12,___get_global_const(27));
#line 599
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(*___ref___1, ___nl__12));
#line 599
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 599
c_rt_lib0delete(hash0set_value(&___nl__12, ___nl__13, ___nl__11));
#line 599
c_rt_lib0clear(&___nl__13);
#line 599
c_rt_lib0move(&___nl__13,___get_global_const(27));
#line 599
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__12));
#line 599
c_rt_lib0clear(&___nl__13);
#line 599
c_rt_lib0clear(&___nl__12);
#line 599
c_rt_lib0clear(&___nl__11);
#line 600
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 600
goto label_3;
#line 600
label_1:
#line 600
c_rt_lib0clear(&___nl__5);
#line 600
c_rt_lib0clear(&___nl__6);
#line 600
c_rt_lib0clear(&___nl__7);
#line 600
c_rt_lib0clear(&___nl__8);
#line 600
c_rt_lib0clear(&___nl__9);
#line 600
c_rt_lib0clear(&___nl__10);
#line 601
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(98)));
#line 601
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 601
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 601
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 601
label_8:
#line 601
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 601
if(c_rt_lib0check_true_native(___nl__10)){ goto label_6;}
#line 601
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 602
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 603
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(28)));
#line 603
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 603
c_rt_lib0move(&___nl__12, hash0has_key(___nl__13, ___nl__14));
#line 603
c_rt_lib0clear(&___nl__14);
#line 603
c_rt_lib0clear(&___nl__13);
#line 603
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 603
if(c_rt_lib0check_true_native(___nl__12)){ goto label_10;}
#line 604
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(28)));
#line 604
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 604
c_rt_lib0move(&___nl__13, hash0get_value(___nl__14, ___nl__15));
#line 604
c_rt_lib0clear(&___nl__15);
#line 604
c_rt_lib0clear(&___nl__14);
#line 604
c_rt_lib0copy(&___nl__11, ___nl__13);
#line 604
c_rt_lib0clear(&___nl__13);
#line 605
goto label_10;
#line 605
label_10:
#line 605
c_rt_lib0clear(&___nl__12);
#line 606
c_rt_lib0delete(array0push(&___nl__11, ___nl__6));
#line 607
c_rt_lib0move(&___nl__12,___get_global_const(28));
#line 607
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(*___ref___1, ___nl__12));
#line 607
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 607
c_rt_lib0delete(hash0set_value(&___nl__12, ___nl__13, ___nl__11));
#line 607
c_rt_lib0clear(&___nl__13);
#line 607
c_rt_lib0move(&___nl__13,___get_global_const(28));
#line 607
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__12));
#line 607
c_rt_lib0clear(&___nl__13);
#line 607
c_rt_lib0clear(&___nl__12);
#line 607
c_rt_lib0clear(&___nl__11);
#line 608
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 608
goto label_8;
#line 608
label_6:
#line 608
c_rt_lib0clear(&___nl__5);
#line 608
c_rt_lib0clear(&___nl__6);
#line 608
c_rt_lib0clear(&___nl__7);
#line 608
c_rt_lib0clear(&___nl__8);
#line 608
c_rt_lib0clear(&___nl__9);
#line 608
c_rt_lib0clear(&___nl__10);
#line 609
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 609
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 609
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 609
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 609
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 609
c_rt_lib0move(&___nl__6,___get_global_const(126));
#line 609
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__4));
#line 609
c_rt_lib0move(&___nl__7,___get_global_const(127));
#line 609
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 609
c_rt_lib0clear(&___nl__7);
#line 609
c_rt_lib0delete(c_fe_lib0print(___nl__6));
#line 609
c_rt_lib0clear(&___nl__6);
#line 609
goto label_12;
#line 609
label_12:
#line 609
c_rt_lib0clear(&___nl__5);
#line 610
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 611
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__0));
#line 611
label_15:
#line 611
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 611
if(c_rt_lib0check_true_native(___nl__6)){ goto label_13;}
#line 611
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 611
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__0, ___nl__6));
#line 612
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 613
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(128)));
#line 613
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 613
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 613
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 613
label_18:
#line 613
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 613
if(c_rt_lib0check_true_native(___nl__15)){ goto label_16;}
#line 613
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 614
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(78)));
#line 614
c_rt_lib0delete(array0push(&___nl__9, ___nl__16));
#line 614
c_rt_lib0clear(&___nl__16);
#line 615
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 615
goto label_18;
#line 615
label_16:
#line 615
c_rt_lib0clear(&___nl__10);
#line 615
c_rt_lib0clear(&___nl__11);
#line 615
c_rt_lib0clear(&___nl__12);
#line 615
c_rt_lib0clear(&___nl__13);
#line 615
c_rt_lib0clear(&___nl__14);
#line 615
c_rt_lib0clear(&___nl__15);
#line 616
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__6, ___nl__9));
#line 616
c_rt_lib0clear(&___nl__9);
#line 617
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 617
goto label_15;
#line 617
label_13:
#line 617
c_rt_lib0clear(&___nl__6);
#line 617
c_rt_lib0clear(&___nl__7);
#line 617
c_rt_lib0clear(&___nl__8);
#line 618
c_rt_lib0move(&___nl__6, module_checker0search_loops(___nl__5));
#line 618
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 618
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(29), ___nl__7);
#line 618
c_rt_lib0clear(&___nl__6);
#line 618
c_rt_lib0clear(&___nl__7);
#line 619
c_rt_lib0copy(&___nl__6, ___nl__2);
#line 619
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(42)));
#line 619
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 619
if(c_rt_lib0check_true_native(___nl__6)){ goto label_20;}
#line 620
c_rt_lib0move(&___nl__7,___get_global_const(129));
#line 620
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(61)));
#line 620
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(130)));
#line 620
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 620
c_rt_lib0clear(&___nl__9);
#line 620
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 620
c_rt_lib0clear(&___nl__8);
#line 620
c_rt_lib0delete(c_fe_lib0print(___nl__7));
#line 620
c_rt_lib0clear(&___nl__7);
#line 621
c_rt_lib0move(&___nl__7,___get_global_const(131));
#line 621
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(61)));
#line 621
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(132)));
#line 621
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 621
c_rt_lib0clear(&___nl__9);
#line 621
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 621
c_rt_lib0clear(&___nl__8);
#line 621
c_rt_lib0delete(c_fe_lib0print(___nl__7));
#line 621
c_rt_lib0clear(&___nl__7);
#line 622
c_rt_lib0copy(&___nl__7, ___nl__2);
#line 622
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(42)));
#line 622
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(61)));
#line 622
c_rt_lib0move(&___nl__8, dfile0ssave(___nl__9));
#line 622
c_rt_lib0clear(&___nl__9);
#line 622
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__7, ___nl__8));
#line 622
c_rt_lib0clear(&___nl__8);
#line 622
c_rt_lib0clear(&___nl__7);
#line 623
goto label_20;
#line 623
label_20:
#line 623
c_rt_lib0clear(&___nl__6);
#line 623
c_rt_lib0clear(&___nl__3);
#line 623
c_rt_lib0clear(&___nl__4);
#line 623
c_rt_lib0clear(&___nl__5);
#line 623
c_rt_lib0clear(&___nl__0);
#line 623
c_rt_lib0clear(&___nl__2);
#line 623
return NULL;
}

ImmT compiler_priv0try_save_file(ImmT ___nl__0,ImmT ___nl__1,ImmT * ___ref___2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 627
c_rt_lib0move(&___nl__3, c_fe_lib0string_to_file(___nl__1, ___nl__0));
#line 627
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(45)));
#line 627
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 628
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(44)));
#line 628
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 628
c_rt_lib0move(&___nl__4,___get_global_const(76));
#line 628
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 628
nl_die_arg(___nl__4);
#line 627
label_2:
#line 627
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(45)));
#line 627
c_rt_lib0clear(&___nl__5);
#line 628
goto label_1;
#line 628
label_3:
#line 628
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(44)));
#line 629
c_rt_lib0move(&___nl__6,___get_global_const(107));
#line 629
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 629
c_rt_lib0delete(c_fe_lib0print(___nl__6));
#line 629
c_rt_lib0clear(&___nl__6);
#line 630
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 630
c_rt_lib0copy(___ref___2, ___nl__6);
#line 630
c_rt_lib0clear(&___nl__6);
#line 630
c_rt_lib0clear(&___nl__5);
#line 631
goto label_1;
#line 631
label_1:
#line 631
c_rt_lib0clear(&___nl__3);
#line 631
c_rt_lib0clear(&___nl__4);
#line 631
c_rt_lib0clear(&___nl__0);
#line 631
c_rt_lib0clear(&___nl__1);
#line 631
return NULL;
}

ImmT compiler_priv0generate_modules_to_files(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2,ImmT * ___ref___3,ImmT ___nl__4) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__4);
compiler_priv0__const__init();
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
#line 639
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 640
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(31)));
#line 640
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 648
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(32)));
#line 648
if(c_rt_lib0check_true_native(___nl__6)){ goto label_3;}
#line 662
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(30)));
#line 662
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 671
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(35)));
#line 671
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 680
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(36)));
#line 680
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 689
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(33)));
#line 689
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 691
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(34)));
#line 691
if(c_rt_lib0check_true_native(___nl__6)){ goto label_8;}
#line 691
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 691
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__4));
#line 691
nl_die_arg(___nl__6);
#line 640
label_2:
#line 641
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 641
label_11:
#line 641
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 641
if(c_rt_lib0check_true_native(___nl__7)){ goto label_9;}
#line 641
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 641
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 642
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 643
c_rt_lib0move(&___nl__11, hash0get_value(___nl__1, ___nl__7));
#line 643
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(41)));
#line 643
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(31)));
#line 644
c_rt_lib0move(&___nl__12,___get_global_const(106));
#line 644
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__7));
#line 644
c_rt_lib0delete(c_fe_lib0print(___nl__12));
#line 644
c_rt_lib0clear(&___nl__12);
#line 645
c_rt_lib0move(&___nl__12, dfile0ssave(___nl__8));
#line 645
c_rt_lib0delete(compiler_priv0try_save_file(___nl__12, ___nl__11, &___nl__10));
#line 645
c_rt_lib0clear(&___nl__12);
#line 646
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 646
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 646
if(c_rt_lib0check_true_native(___nl__12)){ goto label_13;}
#line 646
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 646
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__13));
#line 646
c_rt_lib0clear(&___nl__13);
#line 646
goto label_13;
#line 646
label_13:
#line 646
c_rt_lib0clear(&___nl__12);
#line 646
c_rt_lib0clear(&___nl__10);
#line 646
c_rt_lib0clear(&___nl__11);
#line 647
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 647
goto label_11;
#line 647
label_9:
#line 647
c_rt_lib0clear(&___nl__7);
#line 647
c_rt_lib0clear(&___nl__8);
#line 647
c_rt_lib0clear(&___nl__9);
#line 648
goto label_1;
#line 648
label_3:
#line 649
c_rt_lib0move(&___nl__7, generator_c0generate(___nl__0, ___ref___3));
#line 650
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 651
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(133)));
#line 651
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__9));
#line 651
label_16:
#line 651
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 651
if(c_rt_lib0check_true_native(___nl__10)){ goto label_14;}
#line 651
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 651
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__9, ___nl__10));
#line 652
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 652
c_rt_lib0copy(&___nl__8, ___nl__13);
#line 652
c_rt_lib0clear(&___nl__13);
#line 653
c_rt_lib0move(&___nl__13, hash0get_value(___nl__1, ___nl__10));
#line 653
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(41)));
#line 653
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(32)));
#line 654
c_rt_lib0move(&___nl__14,___get_global_const(106));
#line 654
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__10));
#line 654
c_rt_lib0delete(c_fe_lib0print(___nl__14));
#line 654
c_rt_lib0clear(&___nl__14);
#line 655
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(32)));
#line 655
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(32)));
#line 655
c_rt_lib0delete(compiler_priv0try_save_file(___nl__14, ___nl__15, &___nl__8));
#line 655
c_rt_lib0clear(&___nl__15);
#line 655
c_rt_lib0clear(&___nl__14);
#line 656
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(37)));
#line 656
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(37)));
#line 656
c_rt_lib0delete(compiler_priv0try_save_file(___nl__14, ___nl__15, &___nl__8));
#line 656
c_rt_lib0clear(&___nl__15);
#line 656
c_rt_lib0clear(&___nl__14);
#line 657
c_rt_lib0copy(&___nl__14, ___nl__8);
#line 657
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 657
if(c_rt_lib0check_true_native(___nl__14)){ goto label_18;}
#line 657
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 657
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__10, ___nl__15));
#line 657
c_rt_lib0clear(&___nl__15);
#line 657
goto label_18;
#line 657
label_18:
#line 657
c_rt_lib0clear(&___nl__14);
#line 657
c_rt_lib0clear(&___nl__13);
#line 658
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 658
goto label_16;
#line 658
label_14:
#line 658
c_rt_lib0clear(&___nl__9);
#line 658
c_rt_lib0clear(&___nl__10);
#line 658
c_rt_lib0clear(&___nl__11);
#line 658
c_rt_lib0clear(&___nl__12);
#line 659
c_rt_lib0move(&___nl__9,___get_global_const(134));
#line 659
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 659
c_rt_lib0clear(&___nl__9);
#line 660
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(135)));
#line 660
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(32)));
#line 660
c_rt_lib0move(&___nl__10,___get_global_const(136));
#line 660
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__2, ___nl__10));
#line 660
c_rt_lib0delete(compiler_priv0try_save_file(___nl__9, ___nl__10, &___nl__8));
#line 660
c_rt_lib0clear(&___nl__10);
#line 660
c_rt_lib0clear(&___nl__9);
#line 661
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(135)));
#line 661
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(37)));
#line 661
c_rt_lib0move(&___nl__10,___get_global_const(137));
#line 661
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__2, ___nl__10));
#line 661
c_rt_lib0delete(compiler_priv0try_save_file(___nl__9, ___nl__10, &___nl__8));
#line 661
c_rt_lib0clear(&___nl__10);
#line 661
c_rt_lib0clear(&___nl__9);
#line 661
c_rt_lib0clear(&___nl__7);
#line 661
c_rt_lib0clear(&___nl__8);
#line 662
goto label_1;
#line 662
label_4:
#line 663
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 663
label_21:
#line 663
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 663
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 663
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 663
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 664
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 665
c_rt_lib0move(&___nl__11, generator_pm0generate(___nl__8));
#line 666
c_rt_lib0move(&___nl__12, hash0get_value(___nl__1, ___nl__7));
#line 666
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(41)));
#line 666
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(30)));
#line 667
c_rt_lib0move(&___nl__13,___get_global_const(106));
#line 667
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__7));
#line 667
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 667
c_rt_lib0clear(&___nl__13);
#line 668
c_rt_lib0delete(compiler_priv0try_save_file(___nl__11, ___nl__12, &___nl__10));
#line 669
c_rt_lib0copy(&___nl__13, ___nl__10);
#line 669
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 669
if(c_rt_lib0check_true_native(___nl__13)){ goto label_23;}
#line 669
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 669
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__14));
#line 669
c_rt_lib0clear(&___nl__14);
#line 669
goto label_23;
#line 669
label_23:
#line 669
c_rt_lib0clear(&___nl__13);
#line 669
c_rt_lib0clear(&___nl__10);
#line 669
c_rt_lib0clear(&___nl__11);
#line 669
c_rt_lib0clear(&___nl__12);
#line 670
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 670
goto label_21;
#line 670
label_19:
#line 670
c_rt_lib0clear(&___nl__7);
#line 670
c_rt_lib0clear(&___nl__8);
#line 670
c_rt_lib0clear(&___nl__9);
#line 671
goto label_1;
#line 671
label_5:
#line 672
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 672
label_26:
#line 672
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 672
if(c_rt_lib0check_true_native(___nl__7)){ goto label_24;}
#line 672
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 672
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 673
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 674
c_rt_lib0move(&___nl__11, generator_js0generate(___nl__8));
#line 675
c_rt_lib0move(&___nl__12, hash0get_value(___nl__1, ___nl__7));
#line 675
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(41)));
#line 675
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(35)));
#line 676
c_rt_lib0move(&___nl__13,___get_global_const(106));
#line 676
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__7));
#line 676
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 676
c_rt_lib0clear(&___nl__13);
#line 677
c_rt_lib0delete(compiler_priv0try_save_file(___nl__11, ___nl__12, &___nl__10));
#line 678
c_rt_lib0copy(&___nl__13, ___nl__10);
#line 678
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 678
if(c_rt_lib0check_true_native(___nl__13)){ goto label_28;}
#line 678
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 678
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__14));
#line 678
c_rt_lib0clear(&___nl__14);
#line 678
goto label_28;
#line 678
label_28:
#line 678
c_rt_lib0clear(&___nl__13);
#line 678
c_rt_lib0clear(&___nl__10);
#line 678
c_rt_lib0clear(&___nl__11);
#line 678
c_rt_lib0clear(&___nl__12);
#line 679
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 679
goto label_26;
#line 679
label_24:
#line 679
c_rt_lib0clear(&___nl__7);
#line 679
c_rt_lib0clear(&___nl__8);
#line 679
c_rt_lib0clear(&___nl__9);
#line 680
goto label_1;
#line 680
label_6:
#line 681
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 681
label_31:
#line 681
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 681
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
#line 681
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 681
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 682
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 683
c_rt_lib0move(&___nl__11, generator_java0generate(___nl__8));
#line 684
c_rt_lib0move(&___nl__12, hash0get_value(___nl__1, ___nl__7));
#line 684
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(41)));
#line 684
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(36)));
#line 685
c_rt_lib0move(&___nl__13,___get_global_const(106));
#line 685
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__7));
#line 685
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 685
c_rt_lib0clear(&___nl__13);
#line 686
c_rt_lib0delete(compiler_priv0try_save_file(___nl__11, ___nl__12, &___nl__10));
#line 687
c_rt_lib0copy(&___nl__13, ___nl__10);
#line 687
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 687
if(c_rt_lib0check_true_native(___nl__13)){ goto label_33;}
#line 687
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 687
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__14));
#line 687
c_rt_lib0clear(&___nl__14);
#line 687
goto label_33;
#line 687
label_33:
#line 687
c_rt_lib0clear(&___nl__13);
#line 687
c_rt_lib0clear(&___nl__10);
#line 687
c_rt_lib0clear(&___nl__11);
#line 687
c_rt_lib0clear(&___nl__12);
#line 688
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 688
goto label_31;
#line 688
label_29:
#line 688
c_rt_lib0clear(&___nl__7);
#line 688
c_rt_lib0clear(&___nl__8);
#line 688
c_rt_lib0clear(&___nl__9);
#line 689
goto label_1;
#line 689
label_7:
#line 690
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 690
nl_die_arg(___nl__7);
#line 690
c_rt_lib0clear(&___nl__7);
#line 691
goto label_1;
#line 691
label_8:
#line 692
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 692
nl_die_arg(___nl__7);
#line 692
c_rt_lib0clear(&___nl__7);
#line 693
goto label_1;
#line 693
label_1:
#line 693
c_rt_lib0clear(&___nl__6);
#line 694
c_rt_lib0move(&___nl__6, hash0size(___nl__5));
#line 694
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 694
c_rt_lib0move(&___nl__6, c_rt_lib0gt(___nl__6, ___nl__7));
#line 694
c_rt_lib0clear(&___nl__7);
#line 694
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 694
if(c_rt_lib0check_true_native(___nl__6)){ goto label_35;}
#line 695
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
#line 695
c_rt_lib0clear(&___nl__0);
#line 695
c_rt_lib0clear(&___nl__1);
#line 695
c_rt_lib0clear(&___nl__2);
#line 695
c_rt_lib0clear(&___nl__4);
#line 695
c_rt_lib0clear(&___nl__5);
#line 695
c_rt_lib0clear(&___nl__6);
#line 695
return ___nl__7;
#line 695
c_rt_lib0clear(&___nl__7);
#line 696
goto label_34;
#line 696
label_35:
#line 697
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 697
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__7));
#line 697
c_rt_lib0clear(&___nl__0);
#line 697
c_rt_lib0clear(&___nl__1);
#line 697
c_rt_lib0clear(&___nl__2);
#line 697
c_rt_lib0clear(&___nl__4);
#line 697
c_rt_lib0clear(&___nl__5);
#line 697
c_rt_lib0clear(&___nl__6);
#line 697
return ___nl__7;
#line 697
c_rt_lib0clear(&___nl__7);
#line 698
goto label_34;
#line 698
label_34:
#line 698
c_rt_lib0clear(&___nl__6);
#line 698
c_rt_lib0clear(&___nl__5);
#line 698
c_rt_lib0clear(&___nl__0);
#line 698
c_rt_lib0clear(&___nl__1);
#line 698
c_rt_lib0clear(&___nl__2);
#line 698
c_rt_lib0clear(&___nl__4);
#line 698
return NULL;
}

ImmT compiler_priv0save_module_to_file(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 702
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(31)));
#line 702
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 704
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(32)));
#line 704
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 706
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(30)));
#line 706
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 708
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(35)));
#line 708
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 710
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(36)));
#line 710
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 712
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(33)));
#line 712
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 714
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(34)));
#line 714
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 716
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(38)));
#line 716
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 716
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 716
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 716
nl_die_arg(___nl__2);
#line 702
label_2:
#line 702
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(31)));
#line 703
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 703
nl_die_arg(___nl__4);
#line 703
c_rt_lib0clear(&___nl__4);
#line 703
c_rt_lib0clear(&___nl__3);
#line 704
goto label_1;
#line 704
label_3:
#line 704
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(32)));
#line 705
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 705
nl_die_arg(___nl__4);
#line 705
c_rt_lib0clear(&___nl__4);
#line 705
c_rt_lib0clear(&___nl__3);
#line 706
goto label_1;
#line 706
label_4:
#line 706
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(30)));
#line 707
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 707
nl_die_arg(___nl__4);
#line 707
c_rt_lib0clear(&___nl__4);
#line 707
c_rt_lib0clear(&___nl__3);
#line 708
goto label_1;
#line 708
label_5:
#line 708
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(35)));
#line 709
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 709
nl_die_arg(___nl__4);
#line 709
c_rt_lib0clear(&___nl__4);
#line 709
c_rt_lib0clear(&___nl__3);
#line 710
goto label_1;
#line 710
label_6:
#line 710
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(36)));
#line 711
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 711
nl_die_arg(___nl__4);
#line 711
c_rt_lib0clear(&___nl__4);
#line 711
c_rt_lib0clear(&___nl__3);
#line 712
goto label_1;
#line 712
label_7:
#line 712
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(33)));
#line 713
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_const(21), ___get_global_const(138)));
#line 713
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 713
c_rt_lib0move(&___nl__7, pretty_printer0print_module_to_str(___nl__0));
#line 713
c_rt_lib0move(&___nl__6, c_fe_lib0string_to_file(___nl__3, ___nl__7));
#line 713
c_rt_lib0clear(&___nl__7);
#line 713
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 713
c_rt_lib0clear(&___nl__6);
#line 713
c_rt_lib0clear(&___nl__5);
#line 713
c_rt_lib0clear(&___nl__0);
#line 713
c_rt_lib0clear(&___nl__1);
#line 713
c_rt_lib0clear(&___nl__2);
#line 713
c_rt_lib0clear(&___nl__3);
#line 713
return ___nl__4;
#line 713
c_rt_lib0clear(&___nl__4);
#line 713
c_rt_lib0clear(&___nl__3);
#line 714
goto label_1;
#line 714
label_8:
#line 714
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(34)));
#line 715
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_const(21), ___get_global_const(138)));
#line 715
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 715
c_rt_lib0move(&___nl__7, dfile0ssave(___nl__0));
#line 715
c_rt_lib0move(&___nl__6, c_fe_lib0string_to_file(___nl__3, ___nl__7));
#line 715
c_rt_lib0clear(&___nl__7);
#line 715
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 715
c_rt_lib0clear(&___nl__6);
#line 715
c_rt_lib0clear(&___nl__5);
#line 715
c_rt_lib0clear(&___nl__0);
#line 715
c_rt_lib0clear(&___nl__1);
#line 715
c_rt_lib0clear(&___nl__2);
#line 715
c_rt_lib0clear(&___nl__3);
#line 715
return ___nl__4;
#line 715
c_rt_lib0clear(&___nl__4);
#line 715
c_rt_lib0clear(&___nl__3);
#line 716
goto label_1;
#line 716
label_9:
#line 717
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 717
nl_die_arg(___nl__3);
#line 717
c_rt_lib0clear(&___nl__3);
#line 718
goto label_1;
#line 718
label_1:
#line 718
c_rt_lib0clear(&___nl__2);
#line 718
c_rt_lib0clear(&___nl__0);
#line 718
c_rt_lib0clear(&___nl__1);
#line 718
return NULL;
}

ImmT compiler_priv0get_dir(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 722
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 722
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 722
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 722
c_rt_lib0clear(&___nl__2);
#line 723
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 723
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__3));
#line 723
c_rt_lib0clear(&___nl__3);
#line 723
c_rt_lib0move(&___nl__3,___get_global_const(81));
#line 723
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 723
c_rt_lib0clear(&___nl__3);
#line 723
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 723
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 723
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__3));
#line 723
c_rt_lib0clear(&___nl__3);
#line 723
c_rt_lib0move(&___nl__3,___get_global_const(82));
#line 723
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 723
c_rt_lib0clear(&___nl__3);
#line 723
label_3:
#line 723
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 723
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 723
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 723
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 723
c_rt_lib0clear(&___nl__3);
#line 723
goto label_2;
#line 723
label_2:
#line 723
c_rt_lib0clear(&___nl__2);
#line 724
label_5:
#line 724
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 724
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 724
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__2));
#line 724
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 724
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 724
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 724
c_rt_lib0clear(&___nl__5);
#line 724
c_rt_lib0move(&___nl__5,___get_global_const(81));
#line 724
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__5));
#line 724
c_rt_lib0clear(&___nl__5);
#line 724
label_7:
#line 724
c_rt_lib0clear(&___nl__4);
#line 724
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 724
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 724
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 724
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__4));
#line 724
c_rt_lib0clear(&___nl__4);
#line 724
c_rt_lib0move(&___nl__4,___get_global_const(82));
#line 724
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__4));
#line 724
c_rt_lib0clear(&___nl__4);
#line 724
label_6:
#line 724
c_rt_lib0clear(&___nl__3);
#line 724
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 724
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 724
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 724
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 724
c_rt_lib0clear(&___nl__3);
#line 724
goto label_5;
#line 724
label_4:
#line 724
c_rt_lib0clear(&___nl__2);
#line 725
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 725
c_rt_lib0move(&___nl__2, c_rt_lib0le(___nl__1, ___nl__2));
#line 725
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 725
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 725
c_rt_lib0move(&___nl__3,___get_global_const(83));
#line 725
c_rt_lib0clear(&___nl__0);
#line 725
c_rt_lib0clear(&___nl__1);
#line 725
c_rt_lib0clear(&___nl__2);
#line 725
return ___nl__3;
#line 725
c_rt_lib0clear(&___nl__3);
#line 725
goto label_9;
#line 725
label_9:
#line 725
c_rt_lib0clear(&___nl__2);
#line 726
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 726
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__3, ___nl__1));
#line 726
c_rt_lib0clear(&___nl__3);
#line 726
c_rt_lib0clear(&___nl__0);
#line 726
c_rt_lib0clear(&___nl__1);
#line 726
return ___nl__2;
#line 726
c_rt_lib0clear(&___nl__2);
#line 726
c_rt_lib0clear(&___nl__1);
#line 726
c_rt_lib0clear(&___nl__0);
#line 726
return NULL;
}

ImmT compiler_priv0parse_command_line_args(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
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
#line 730
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(32)));
#line 730
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(52)));
#line 730
c_rt_lib0move(&___nl__5,___get_global_const(83));
#line 730
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 730
c_rt_lib0clear(&___nl__5);
#line 730
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 730
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(43)));
#line 730
c_rt_lib0move(&___nl__7, compiler_priv0get_default_math_file());
#line 730
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 730
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(57)));
#line 730
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(8, ___get_global_const(65), ___nl__2, ___get_global_const(64), ___nl__3, ___get_global_const(59), ___nl__4, ___get_global_const(62), ___nl__5, ___get_global_const(61), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(60), ___nl__8, ___get_global_const(66), ___nl__9));
#line 730
c_rt_lib0clear(&___nl__2);
#line 730
c_rt_lib0clear(&___nl__3);
#line 730
c_rt_lib0clear(&___nl__4);
#line 730
c_rt_lib0clear(&___nl__5);
#line 730
c_rt_lib0clear(&___nl__6);
#line 730
c_rt_lib0clear(&___nl__7);
#line 730
c_rt_lib0clear(&___nl__8);
#line 730
c_rt_lib0clear(&___nl__9);
#line 740
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 741
c_rt_lib0move(&___nl__3, compiler_priv0get_dir_cache_name());
#line 742
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 742
label_2:
#line 742
c_rt_lib0move(&___nl__5, array0len(___nl__0));
#line 742
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__4, ___nl__5));
#line 742
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 742
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 743
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 744
c_rt_lib0move(&___nl__7, string0length(___nl__6));
#line 744
c_rt_lib0move(&___nl__9,___get_global_const(139));
#line 744
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__7, ___nl__9));
#line 744
c_rt_lib0clear(&___nl__9);
#line 744
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 744
if(c_rt_lib0check_true_native(___nl__8)){ goto label_6;}
#line 744
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 744
c_rt_lib0move(&___nl__10,___get_global_const(139));
#line 744
c_rt_lib0move(&___nl__7, string0substr(___nl__6, ___nl__9, ___nl__10));
#line 744
c_rt_lib0clear(&___nl__10);
#line 744
c_rt_lib0clear(&___nl__9);
#line 744
c_rt_lib0move(&___nl__9,___get_global_const(140));
#line 744
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__9));
#line 744
c_rt_lib0clear(&___nl__9);
#line 744
label_6:
#line 744
c_rt_lib0clear(&___nl__8);
#line 744
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 744
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 745
c_rt_lib0move(&___nl__9,___get_global_const(139));
#line 745
c_rt_lib0move(&___nl__10, string0length(___nl__6));
#line 745
c_rt_lib0move(&___nl__11,___get_global_const(139));
#line 745
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__11));
#line 745
c_rt_lib0clear(&___nl__11);
#line 745
c_rt_lib0move(&___nl__8, string0substr(___nl__6, ___nl__9, ___nl__10));
#line 745
c_rt_lib0clear(&___nl__10);
#line 745
c_rt_lib0clear(&___nl__9);
#line 746
c_rt_lib0move(&___nl__9,___get_global_const(61));
#line 746
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 746
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 746
if(c_rt_lib0check_true_native(___nl__9)){ goto label_8;}
#line 747
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 747
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(42), ___nl__10));
#line 747
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 747
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(61), ___nl__11);
#line 747
c_rt_lib0clear(&___nl__10);
#line 747
c_rt_lib0clear(&___nl__11);
#line 748
goto label_7;
#line 748
label_8:
#line 748
c_rt_lib0move(&___nl__9,___get_global_const(31));
#line 748
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 748
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 748
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 749
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(31)));
#line 749
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 749
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 749
c_rt_lib0clear(&___nl__10);
#line 749
c_rt_lib0clear(&___nl__11);
#line 750
goto label_7;
#line 750
label_9:
#line 750
c_rt_lib0move(&___nl__9,___get_global_const(34));
#line 750
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 750
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 750
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 751
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 751
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 751
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 751
c_rt_lib0clear(&___nl__10);
#line 751
c_rt_lib0clear(&___nl__11);
#line 752
goto label_7;
#line 752
label_10:
#line 752
c_rt_lib0move(&___nl__9,___get_global_const(30));
#line 752
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 752
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 752
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 753
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(30)));
#line 753
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 753
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 753
c_rt_lib0clear(&___nl__10);
#line 753
c_rt_lib0clear(&___nl__11);
#line 754
goto label_7;
#line 754
label_11:
#line 754
c_rt_lib0move(&___nl__9,___get_global_const(32));
#line 754
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 754
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 754
if(c_rt_lib0check_true_native(___nl__9)){ goto label_12;}
#line 755
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(32)));
#line 755
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 755
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 755
c_rt_lib0clear(&___nl__10);
#line 755
c_rt_lib0clear(&___nl__11);
#line 756
goto label_7;
#line 756
label_12:
#line 756
c_rt_lib0move(&___nl__9,___get_global_const(35));
#line 756
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 756
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 756
if(c_rt_lib0check_true_native(___nl__9)){ goto label_13;}
#line 757
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(35)));
#line 757
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 757
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 757
c_rt_lib0clear(&___nl__10);
#line 757
c_rt_lib0clear(&___nl__11);
#line 758
goto label_7;
#line 758
label_13:
#line 758
c_rt_lib0move(&___nl__9,___get_global_const(36));
#line 758
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 758
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 758
if(c_rt_lib0check_true_native(___nl__9)){ goto label_14;}
#line 759
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(36)));
#line 759
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 759
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 759
c_rt_lib0clear(&___nl__10);
#line 759
c_rt_lib0clear(&___nl__11);
#line 760
goto label_7;
#line 760
label_14:
#line 760
c_rt_lib0move(&___nl__9,___get_global_const(33));
#line 760
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 760
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 760
if(c_rt_lib0check_true_native(___nl__9)){ goto label_15;}
#line 761
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(33)));
#line 761
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 761
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 761
c_rt_lib0clear(&___nl__10);
#line 761
c_rt_lib0clear(&___nl__11);
#line 762
c_rt_lib0move(&___nl__10, compiler_priv0get_dir_pretty_name());
#line 762
c_rt_lib0copy(&___nl__3, ___nl__10);
#line 762
c_rt_lib0clear(&___nl__10);
#line 763
goto label_7;
#line 763
label_15:
#line 763
c_rt_lib0move(&___nl__9,___get_global_const(54));
#line 763
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 763
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 763
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 764
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(54)));
#line 764
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 764
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 764
c_rt_lib0clear(&___nl__10);
#line 764
c_rt_lib0clear(&___nl__11);
#line 765
goto label_7;
#line 765
label_16:
#line 765
c_rt_lib0move(&___nl__9,___get_global_const(55));
#line 765
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 765
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 765
if(c_rt_lib0check_true_native(___nl__9)){ goto label_17;}
#line 766
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 766
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 766
c_rt_lib0clear(&___nl__10);
#line 767
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 767
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 767
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 767
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 767
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 767
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 767
nl_die_arg(___nl__11);
#line 767
goto label_19;
#line 767
label_19:
#line 767
c_rt_lib0clear(&___nl__10);
#line 767
c_rt_lib0clear(&___nl__11);
#line 768
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 768
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(55), ___nl__10));
#line 768
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 768
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 768
c_rt_lib0clear(&___nl__10);
#line 768
c_rt_lib0clear(&___nl__11);
#line 769
goto label_7;
#line 769
label_17:
#line 769
c_rt_lib0move(&___nl__9,___get_global_const(52));
#line 769
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 769
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 769
if(c_rt_lib0check_true_native(___nl__9)){ goto label_20;}
#line 770
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(52)));
#line 770
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 770
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 770
c_rt_lib0clear(&___nl__10);
#line 770
c_rt_lib0clear(&___nl__11);
#line 771
goto label_7;
#line 771
label_20:
#line 771
c_rt_lib0move(&___nl__9,___get_global_const(53));
#line 771
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 771
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 771
if(c_rt_lib0check_true_native(___nl__9)){ goto label_21;}
#line 772
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(53)));
#line 772
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 772
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 772
c_rt_lib0clear(&___nl__10);
#line 772
c_rt_lib0clear(&___nl__11);
#line 773
goto label_7;
#line 773
label_21:
#line 773
c_rt_lib0move(&___nl__9,___get_global_const(141));
#line 773
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 773
if(c_rt_lib0check_true_native(___nl__9)){ goto label_23;}
#line 773
c_rt_lib0move(&___nl__9,___get_global_const(142));
#line 773
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 773
label_23:
#line 773
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 773
if(c_rt_lib0check_true_native(___nl__9)){ goto label_22;}
#line 774
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 774
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 774
c_rt_lib0clear(&___nl__10);
#line 775
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 775
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 775
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 775
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 775
if(c_rt_lib0check_true_native(___nl__10)){ goto label_25;}
#line 775
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 775
nl_die_arg(___nl__11);
#line 775
goto label_25;
#line 775
label_25:
#line 775
c_rt_lib0clear(&___nl__10);
#line 775
c_rt_lib0clear(&___nl__11);
#line 776
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 776
c_rt_lib0move(&___nl__11,___get_global_const(81));
#line 776
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 776
c_rt_lib0clear(&___nl__11);
#line 776
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 776
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(60), ___nl__11);
#line 776
c_rt_lib0clear(&___nl__10);
#line 776
c_rt_lib0clear(&___nl__11);
#line 777
goto label_7;
#line 777
label_22:
#line 777
c_rt_lib0move(&___nl__9,___get_global_const(143));
#line 777
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 777
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 777
if(c_rt_lib0check_true_native(___nl__9)){ goto label_26;}
#line 778
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 778
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 778
c_rt_lib0clear(&___nl__10);
#line 779
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 779
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 779
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 779
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 779
if(c_rt_lib0check_true_native(___nl__10)){ goto label_28;}
#line 779
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 779
nl_die_arg(___nl__11);
#line 779
goto label_28;
#line 779
label_28:
#line 779
c_rt_lib0clear(&___nl__10);
#line 779
c_rt_lib0clear(&___nl__11);
#line 780
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 780
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 780
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(63), ___nl__11);
#line 780
c_rt_lib0clear(&___nl__10);
#line 780
c_rt_lib0clear(&___nl__11);
#line 781
goto label_7;
#line 781
label_26:
#line 781
c_rt_lib0move(&___nl__9,___get_global_const(144));
#line 781
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 781
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 781
if(c_rt_lib0check_true_native(___nl__9)){ goto label_29;}
#line 782
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 782
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 782
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(62), ___nl__11);
#line 782
c_rt_lib0clear(&___nl__10);
#line 782
c_rt_lib0clear(&___nl__11);
#line 783
goto label_7;
#line 783
label_29:
#line 783
c_rt_lib0move(&___nl__9,___get_global_const(145));
#line 783
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 783
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 783
if(c_rt_lib0check_true_native(___nl__9)){ goto label_30;}
#line 784
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 784
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 784
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(62), ___nl__11);
#line 784
c_rt_lib0clear(&___nl__10);
#line 784
c_rt_lib0clear(&___nl__11);
#line 785
goto label_7;
#line 785
label_30:
#line 785
c_rt_lib0move(&___nl__9,___get_global_const(146));
#line 785
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 785
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 785
if(c_rt_lib0check_true_native(___nl__9)){ goto label_31;}
#line 786
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(49)));
#line 786
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 786
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(62), ___nl__11);
#line 786
c_rt_lib0clear(&___nl__10);
#line 786
c_rt_lib0clear(&___nl__11);
#line 787
goto label_7;
#line 787
label_31:
#line 787
c_rt_lib0move(&___nl__9,___get_global_const(147));
#line 787
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 787
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 787
if(c_rt_lib0check_true_native(___nl__9)){ goto label_32;}
#line 788
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(50)));
#line 788
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 788
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(62), ___nl__11);
#line 788
c_rt_lib0clear(&___nl__10);
#line 788
c_rt_lib0clear(&___nl__11);
#line 789
goto label_7;
#line 789
label_32:
#line 789
c_rt_lib0move(&___nl__9,___get_global_const(148));
#line 789
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 789
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 789
if(c_rt_lib0check_true_native(___nl__9)){ goto label_33;}
#line 790
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(51)));
#line 790
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 790
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(62), ___nl__11);
#line 790
c_rt_lib0clear(&___nl__10);
#line 790
c_rt_lib0clear(&___nl__11);
#line 791
goto label_7;
#line 791
label_33:
#line 791
c_rt_lib0move(&___nl__9,___get_global_const(149));
#line 791
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 791
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 791
if(c_rt_lib0check_true_native(___nl__9)){ goto label_34;}
#line 792
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(58)));
#line 792
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 792
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(66), ___nl__11);
#line 792
c_rt_lib0clear(&___nl__10);
#line 792
c_rt_lib0clear(&___nl__11);
#line 793
goto label_7;
#line 793
label_34:
#line 794
c_rt_lib0move(&___nl__10,___get_global_const(150));
#line 794
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__6));
#line 794
c_rt_lib0delete(c_fe_lib0print(___nl__10));
#line 794
c_rt_lib0clear(&___nl__10);
#line 795
goto label_7;
#line 795
label_7:
#line 795
c_rt_lib0clear(&___nl__9);
#line 795
c_rt_lib0clear(&___nl__8);
#line 796
goto label_4;
#line 796
label_5:
#line 797
c_rt_lib0copy(&___nl__8, ___nl__2);
#line 797
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 797
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 797
if(c_rt_lib0check_true_native(___nl__8)){ goto label_36;}
#line 797
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 797
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 797
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(59), ___nl__10);
#line 797
c_rt_lib0clear(&___nl__9);
#line 797
c_rt_lib0clear(&___nl__10);
#line 797
goto label_36;
#line 797
label_36:
#line 797
c_rt_lib0clear(&___nl__8);
#line 798
c_rt_lib0move(&___nl__8,___get_global_const(59));
#line 798
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__1, ___nl__8));
#line 798
c_rt_lib0delete(array0push(&___nl__8, ___nl__6));
#line 798
c_rt_lib0move(&___nl__9,___get_global_const(59));
#line 798
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__9, ___nl__8));
#line 798
c_rt_lib0clear(&___nl__9);
#line 798
c_rt_lib0clear(&___nl__8);
#line 799
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 799
c_rt_lib0copy(&___nl__2, ___nl__8);
#line 799
c_rt_lib0clear(&___nl__8);
#line 800
goto label_4;
#line 800
label_4:
#line 800
c_rt_lib0clear(&___nl__7);
#line 800
c_rt_lib0clear(&___nl__6);
#line 800
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 800
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 800
c_rt_lib0clear(&___nl__6);
#line 801
goto label_2;
#line 801
label_1:
#line 801
c_rt_lib0clear(&___nl__4);
#line 801
c_rt_lib0clear(&___nl__5);
#line 802
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(60)));
#line 802
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 802
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 802
c_rt_lib0clear(&___nl__5);
#line 802
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 802
if(c_rt_lib0check_true_native(___nl__4)){ goto label_38;}
#line 803
c_rt_lib0move(&___nl__5,___get_global_const(151));
#line 803
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 803
c_rt_lib0move(&___nl__6,___get_global_const(81));
#line 803
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 803
c_rt_lib0clear(&___nl__6);
#line 803
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 803
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(60), ___nl__6);
#line 803
c_rt_lib0clear(&___nl__5);
#line 803
c_rt_lib0clear(&___nl__6);
#line 804
goto label_38;
#line 804
label_38:
#line 804
c_rt_lib0clear(&___nl__4);
#line 805
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(61)));
#line 805
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(42)));
#line 805
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 805
if(c_rt_lib0check_true_native(___nl__4)){ goto label_40;}
#line 805
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(60)));
#line 805
c_rt_lib0move(&___nl__6, compiler_priv0get_default_deref_file());
#line 805
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 805
c_rt_lib0clear(&___nl__6);
#line 805
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(42), ___nl__5));
#line 805
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 805
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(61), ___nl__6);
#line 805
c_rt_lib0clear(&___nl__5);
#line 805
c_rt_lib0clear(&___nl__6);
#line 805
goto label_40;
#line 805
label_40:
#line 805
c_rt_lib0clear(&___nl__4);
#line 806
c_rt_lib0clear(&___nl__0);
#line 806
c_rt_lib0clear(&___nl__2);
#line 806
c_rt_lib0clear(&___nl__3);
#line 806
return ___nl__1;
#line 806
c_rt_lib0clear(&___nl__1);
#line 806
c_rt_lib0clear(&___nl__2);
#line 806
c_rt_lib0clear(&___nl__3);
#line 806
c_rt_lib0clear(&___nl__0);
#line 806
return NULL;
}


static ImmT ___const__[16];
static int ___const_init__ = 1;
void compiler_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[15];


for(int i=0;i<15;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 15);
}}
ImmT compiler_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT compiler_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = compiler_priv0get_dir_cache_name0cal();
	break;
case 1:
	___const__[1] = compiler_priv0get_dir_pretty_name0cal();
	break;
case 2:
	___const__[2] = compiler_priv0get_default_deref_file0cal();
	break;
case 3:
	___const__[3] = compiler_priv0get_default_math_file0cal();
	break;
case 4:
	___const__[4] = compiler0parse_check_t0cal();
	break;
case 5:
	___const__[5] = compiler0errors_hash_t0cal();
	break;
case 6:
	___const__[6] = compiler0errors_group_t0cal();
	break;
case 7:
	___const__[7] = compiler0language_t0cal();
	break;
case 8:
	___const__[8] = compiler0destination_t0cal();
	break;
case 9:
	___const__[9] = compiler0module_t0cal();
	break;
case 10:
	___const__[10] = compiler0deref_t0cal();
	break;
case 11:
	___const__[11] = compiler0try_t0cal();
	break;
case 12:
	___const__[12] = compiler0input_type0cal();
	break;
case 13:
	___const__[13] = compiler0file_t0cal();
	break;
case 14:
	___const__[14] = compiler_priv0get_known_func0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
