
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
c_rt_lib0delete(compiler_priv0compile_strict_file(___nl__1));
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
#line 141
c_rt_lib0clear(&___nl__1);
#line 141
c_rt_lib0clear(&___nl__0);
#line 141
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
#line 145
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 146
c_rt_lib0move(&___nl__1,___get_global_const(69));
#line 146
c_rt_lib0move(&___nl__3, c_rt_lib0func_new(nl0print0ptr, ___get_global_const(33), ___get_global_const(70)));
#line 146
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__3));
#line 146
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(71)));
#line 146
c_rt_lib0move(&___nl__6, ptd0sim());
#line 146
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(1, ___nl__6));
#line 146
c_rt_lib0clear(&___nl__6);
#line 146
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(43)));
#line 146
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(4, ___get_global_const(72), ___nl__3, ___get_global_const(73), ___nl__4, ___get_global_const(74), ___nl__5, ___get_global_const(75), ___nl__6));
#line 146
c_rt_lib0clear(&___nl__3);
#line 146
c_rt_lib0clear(&___nl__4);
#line 146
c_rt_lib0clear(&___nl__5);
#line 146
c_rt_lib0clear(&___nl__6);
#line 146
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__1, ___nl__2));
#line 146
c_rt_lib0clear(&___nl__2);
#line 146
c_rt_lib0clear(&___nl__1);
#line 147
return ___nl__0;
#line 147
c_rt_lib0clear(&___nl__0);
#line 147
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
#line 151
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 152
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 152
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 152
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 152
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 152
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 152
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(5, ___get_global_const(25), ___nl__3, ___get_global_const(26), ___nl__4, ___get_global_const(27), ___nl__5, ___get_global_const(28), ___nl__6, ___get_global_const(29), ___nl__7));
#line 152
c_rt_lib0clear(&___nl__3);
#line 152
c_rt_lib0clear(&___nl__4);
#line 152
c_rt_lib0clear(&___nl__5);
#line 152
c_rt_lib0clear(&___nl__6);
#line 152
c_rt_lib0clear(&___nl__7);
#line 159
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 160
c_rt_lib0move(&___nl__4, compiler_priv0get_files_to_parse(___nl__0));
#line 161
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 161
label_3:
#line 161
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 161
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 161
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 161
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 162
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(40)));
#line 162
c_rt_lib0move(&___nl__8, compiler_priv0parse_module(___nl__5, ___nl__9, &___nl__2));
#line 162
c_rt_lib0clear(&___nl__9);
#line 162
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 162
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 164
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 164
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 164
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 164
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 164
nl_die_arg(___nl__9);
#line 162
label_5:
#line 162
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 163
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__5, ___nl__10));
#line 163
c_rt_lib0clear(&___nl__10);
#line 164
goto label_4;
#line 164
label_6:
#line 164
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 165
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 165
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__11));
#line 165
c_rt_lib0clear(&___nl__11);
#line 165
c_rt_lib0clear(&___nl__10);
#line 166
goto label_4;
#line 166
label_4:
#line 166
c_rt_lib0clear(&___nl__8);
#line 166
c_rt_lib0clear(&___nl__9);
#line 167
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 167
goto label_3;
#line 167
label_1:
#line 167
c_rt_lib0clear(&___nl__5);
#line 167
c_rt_lib0clear(&___nl__6);
#line 167
c_rt_lib0clear(&___nl__7);
#line 168
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 168
c_rt_lib0move(&___nl__5, c_rt_lib0num_ne(___nl__3, ___nl__5));
#line 168
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 168
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 169
c_rt_lib0delete(compiler_priv0show_and_count_errors(___nl__2, ___nl__0));
#line 170
c_rt_lib0clear(&___nl__0);
#line 170
c_rt_lib0clear(&___nl__1);
#line 170
c_rt_lib0clear(&___nl__2);
#line 170
c_rt_lib0clear(&___nl__3);
#line 170
c_rt_lib0clear(&___nl__4);
#line 170
c_rt_lib0clear(&___nl__5);
#line 170
return NULL;
#line 171
goto label_8;
#line 171
label_8:
#line 171
c_rt_lib0clear(&___nl__5);
#line 172
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(61)));
#line 172
c_rt_lib0delete(compiler_priv0check_modules(___nl__1, &___nl__2, ___nl__5));
#line 172
c_rt_lib0clear(&___nl__5);
#line 173
c_rt_lib0move(&___nl__5, compiler_priv0show_and_count_errors(___nl__2, ___nl__0));
#line 173
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 173
c_rt_lib0clear(&___nl__6);
#line 173
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 173
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 174
c_rt_lib0clear(&___nl__0);
#line 174
c_rt_lib0clear(&___nl__1);
#line 174
c_rt_lib0clear(&___nl__2);
#line 174
c_rt_lib0clear(&___nl__3);
#line 174
c_rt_lib0clear(&___nl__4);
#line 174
c_rt_lib0clear(&___nl__5);
#line 174
return NULL;
#line 175
goto label_10;
#line 175
label_10:
#line 175
c_rt_lib0clear(&___nl__5);
#line 176
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 176
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(62)));
#line 176
c_rt_lib0move(&___nl__5, post_processing0init(___nl__6, ___nl__7));
#line 176
c_rt_lib0clear(&___nl__7);
#line 176
c_rt_lib0clear(&___nl__6);
#line 177
c_rt_lib0move(&___nl__6, compiler_priv0translate(___nl__1, &___nl__5));
#line 178
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 179
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 180
c_rt_lib0move(&___nl__11, c_rt_lib0init_iter(___nl__6));
#line 180
label_13:
#line 180
c_rt_lib0move(&___nl__9, c_rt_lib0is_end_hash(___nl__11));
#line 180
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 180
c_rt_lib0move(&___nl__9, c_rt_lib0get_key_iter(___nl__11));
#line 180
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value(___nl__6, ___nl__9));
#line 181
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(77)));
#line 181
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 181
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 181
c_rt_lib0move(&___nl__16, c_rt_lib0array_len(___nl__12));
#line 181
label_16:
#line 181
c_rt_lib0move(&___nl__17, c_rt_lib0ge(___nl__14, ___nl__16));
#line 181
if(c_rt_lib0check_true_native(___nl__17)){ goto label_14;}
#line 181
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__12, ___nl__14));
#line 182
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(78)));
#line 182
c_rt_lib0move(&___nl__19,___get_global_const(79));
#line 182
c_rt_lib0move(&___nl__18, c_rt_lib0eq(___nl__18, ___nl__19));
#line 182
c_rt_lib0clear(&___nl__19);
#line 182
c_rt_lib0move(&___nl__18, c_rt_lib0not(___nl__18));
#line 182
if(c_rt_lib0check_true_native(___nl__18)){ goto label_18;}
#line 183
c_rt_lib0copy(&___nl__8, ___nl__9);
#line 184
goto label_18;
#line 184
label_18:
#line 184
c_rt_lib0clear(&___nl__18);
#line 185
c_rt_lib0move(&___nl__14, c_rt_lib0add_mod(___nl__14, ___nl__15));
#line 185
goto label_16;
#line 185
label_14:
#line 185
c_rt_lib0clear(&___nl__12);
#line 185
c_rt_lib0clear(&___nl__13);
#line 185
c_rt_lib0clear(&___nl__14);
#line 185
c_rt_lib0clear(&___nl__15);
#line 185
c_rt_lib0clear(&___nl__16);
#line 185
c_rt_lib0clear(&___nl__17);
#line 186
c_rt_lib0delete(array0push(&___nl__7, ___nl__10));
#line 187
c_rt_lib0move(&___nl__11, c_rt_lib0next_iter(___nl__11));
#line 187
goto label_13;
#line 187
label_11:
#line 187
c_rt_lib0clear(&___nl__9);
#line 187
c_rt_lib0clear(&___nl__10);
#line 187
c_rt_lib0clear(&___nl__11);
#line 188
c_rt_lib0move(&___nl__10, compiler_priv0get_known_func());
#line 188
c_rt_lib0move(&___nl__9, interpreter0init(___nl__7, ___nl__10));
#line 188
c_rt_lib0clear(&___nl__10);
#line 189
c_rt_lib0move(&___nl__12,___get_global_const(79));
#line 189
c_rt_lib0move(&___nl__11, interpreter0start(&___nl__9, ___nl__12, ___nl__8));
#line 189
c_rt_lib0clear(&___nl__12);
#line 189
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(45)));
#line 189
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 189
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__11));
#line 189
nl_die_arg(___nl__11);
#line 189
label_19:
#line 189
c_rt_lib0clear(&___nl__10);
#line 189
c_rt_lib0clear(&___nl__11);
#line 190
c_rt_lib0move(&___nl__11, interpreter0exec_all_code(___nl__9));
#line 190
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__11, ___get_global_const(45)));
#line 190
if(c_rt_lib0check_true_native(___nl__10)){ goto label_20;}
#line 190
c_rt_lib0move(&___nl__11, c_rt_lib0ov_mk_arg(___get_global_const(80), ___nl__11));
#line 190
nl_die_arg(___nl__11);
#line 190
label_20:
#line 190
c_rt_lib0clear(&___nl__10);
#line 190
c_rt_lib0clear(&___nl__11);
#line 190
c_rt_lib0clear(&___nl__1);
#line 190
c_rt_lib0clear(&___nl__2);
#line 190
c_rt_lib0clear(&___nl__3);
#line 190
c_rt_lib0clear(&___nl__4);
#line 190
c_rt_lib0clear(&___nl__5);
#line 190
c_rt_lib0clear(&___nl__6);
#line 190
c_rt_lib0clear(&___nl__7);
#line 190
c_rt_lib0clear(&___nl__8);
#line 190
c_rt_lib0clear(&___nl__9);
#line 190
c_rt_lib0clear(&___nl__0);
#line 190
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
#line 194
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 194
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 194
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 194
c_rt_lib0clear(&___nl__2);
#line 195
label_2:
#line 195
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 195
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 195
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__2));
#line 195
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 195
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 195
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 195
c_rt_lib0clear(&___nl__5);
#line 195
c_rt_lib0move(&___nl__5,___get_global_const(81));
#line 195
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__5));
#line 195
c_rt_lib0clear(&___nl__5);
#line 195
label_4:
#line 195
c_rt_lib0clear(&___nl__4);
#line 195
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 195
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 195
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 195
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__4));
#line 195
c_rt_lib0clear(&___nl__4);
#line 195
c_rt_lib0move(&___nl__4,___get_global_const(82));
#line 195
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__4));
#line 195
c_rt_lib0clear(&___nl__4);
#line 195
label_3:
#line 195
c_rt_lib0clear(&___nl__3);
#line 195
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 195
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 196
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 196
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__1, ___nl__4));
#line 196
c_rt_lib0clear(&___nl__4);
#line 196
c_rt_lib0move(&___nl__4,___get_global_const(83));
#line 196
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__4));
#line 196
c_rt_lib0clear(&___nl__4);
#line 196
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 196
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 197
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 197
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__4));
#line 197
c_rt_lib0clear(&___nl__4);
#line 198
c_rt_lib0clear(&___nl__3);
#line 198
goto label_1;
#line 199
goto label_6;
#line 199
label_6:
#line 199
c_rt_lib0clear(&___nl__3);
#line 200
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 200
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 200
c_rt_lib0clear(&___nl__3);
#line 201
goto label_2;
#line 201
label_1:
#line 201
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 203
label_8:
#line 203
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 203
c_rt_lib0move(&___nl__3, c_rt_lib0ge(___nl__1, ___nl__3));
#line 203
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__3));
#line 203
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
#line 203
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 203
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__1, ___nl__6));
#line 203
c_rt_lib0clear(&___nl__6);
#line 203
c_rt_lib0move(&___nl__6,___get_global_const(81));
#line 203
c_rt_lib0move(&___nl__3, c_rt_lib0ne(___nl__3, ___nl__6));
#line 203
c_rt_lib0clear(&___nl__6);
#line 203
label_10:
#line 203
c_rt_lib0clear(&___nl__5);
#line 203
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 203
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 203
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 203
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 203
c_rt_lib0clear(&___nl__5);
#line 203
c_rt_lib0move(&___nl__5,___get_global_const(82));
#line 203
c_rt_lib0move(&___nl__3, c_rt_lib0ne(___nl__3, ___nl__5));
#line 203
c_rt_lib0clear(&___nl__5);
#line 203
label_9:
#line 203
c_rt_lib0clear(&___nl__4);
#line 203
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 203
if(c_rt_lib0check_true_native(___nl__3)){ goto label_7;}
#line 204
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 204
c_rt_lib0move(&___nl__4, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 204
c_rt_lib0clear(&___nl__5);
#line 204
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__2));
#line 204
c_rt_lib0copy(&___nl__2, ___nl__4);
#line 204
c_rt_lib0clear(&___nl__4);
#line 205
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 205
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__4));
#line 205
c_rt_lib0clear(&___nl__4);
#line 206
goto label_8;
#line 206
label_7:
#line 206
c_rt_lib0clear(&___nl__3);
#line 207
c_rt_lib0clear(&___nl__0);
#line 207
c_rt_lib0clear(&___nl__1);
#line 207
return ___nl__2;
#line 207
c_rt_lib0clear(&___nl__1);
#line 207
c_rt_lib0clear(&___nl__2);
#line 207
c_rt_lib0clear(&___nl__0);
#line 207
return NULL;
}

ImmT compiler_priv0has_extension(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 211
c_rt_lib0move(&___nl__2, string0length(___nl__1));
#line 212
c_rt_lib0move(&___nl__3, string0length(___nl__0));
#line 212
c_rt_lib0move(&___nl__3, c_rt_lib0le(___nl__3, ___nl__2));
#line 212
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 212
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 212
c_rt_lib0move(&___nl__4, c_rt_lib0get_false());
#line 212
c_rt_lib0clear(&___nl__0);
#line 212
c_rt_lib0clear(&___nl__1);
#line 212
c_rt_lib0clear(&___nl__2);
#line 212
c_rt_lib0clear(&___nl__3);
#line 212
return ___nl__4;
#line 212
c_rt_lib0clear(&___nl__4);
#line 212
goto label_2;
#line 212
label_2:
#line 212
c_rt_lib0clear(&___nl__3);
#line 213
c_rt_lib0move(&___nl__4, string0length(___nl__0));
#line 213
c_rt_lib0move(&___nl__4, c_rt_lib0sub_mod(___nl__4, ___nl__2));
#line 213
c_rt_lib0move(&___nl__3, string0substr(___nl__0, ___nl__4, ___nl__2));
#line 213
c_rt_lib0clear(&___nl__4);
#line 213
c_rt_lib0copy(&___nl__2, ___nl__3);
#line 213
c_rt_lib0clear(&___nl__3);
#line 214
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__2, ___nl__1));
#line 214
c_rt_lib0clear(&___nl__0);
#line 214
c_rt_lib0clear(&___nl__1);
#line 214
c_rt_lib0clear(&___nl__2);
#line 214
return ___nl__3;
#line 214
c_rt_lib0clear(&___nl__3);
#line 214
c_rt_lib0clear(&___nl__2);
#line 214
c_rt_lib0clear(&___nl__0);
#line 214
c_rt_lib0clear(&___nl__1);
#line 214
return NULL;
}

ImmT compiler_priv0get_generator_state(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 218
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(30)));
#line 218
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 220
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(31)));
#line 220
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 222
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(32)));
#line 222
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 224
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(34)));
#line 224
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 226
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(33)));
#line 226
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 228
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(35)));
#line 228
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 230
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(36)));
#line 230
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 230
c_rt_lib0move(&___nl__1,___get_global_const(76));
#line 230
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 230
nl_die_arg(___nl__1);
#line 218
label_2:
#line 219
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 219
c_rt_lib0clear(&___nl__0);
#line 219
c_rt_lib0clear(&___nl__1);
#line 219
return ___nl__2;
#line 219
c_rt_lib0clear(&___nl__2);
#line 220
goto label_1;
#line 220
label_3:
#line 221
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 221
c_rt_lib0clear(&___nl__0);
#line 221
c_rt_lib0clear(&___nl__1);
#line 221
return ___nl__2;
#line 221
c_rt_lib0clear(&___nl__2);
#line 222
goto label_1;
#line 222
label_4:
#line 223
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 223
c_rt_lib0clear(&___nl__0);
#line 223
c_rt_lib0clear(&___nl__1);
#line 223
return ___nl__2;
#line 223
c_rt_lib0clear(&___nl__2);
#line 224
goto label_1;
#line 224
label_5:
#line 225
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 225
nl_die_arg(___nl__2);
#line 225
c_rt_lib0clear(&___nl__2);
#line 226
goto label_1;
#line 226
label_6:
#line 227
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 227
nl_die_arg(___nl__2);
#line 227
c_rt_lib0clear(&___nl__2);
#line 228
goto label_1;
#line 228
label_7:
#line 229
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 229
c_rt_lib0clear(&___nl__0);
#line 229
c_rt_lib0clear(&___nl__1);
#line 229
return ___nl__2;
#line 229
c_rt_lib0clear(&___nl__2);
#line 230
goto label_1;
#line 230
label_8:
#line 231
c_rt_lib0move(&___nl__2, generator_c0get_empty_state());
#line 231
c_rt_lib0clear(&___nl__0);
#line 231
c_rt_lib0clear(&___nl__1);
#line 231
return ___nl__2;
#line 231
c_rt_lib0clear(&___nl__2);
#line 232
goto label_1;
#line 232
label_1:
#line 232
c_rt_lib0clear(&___nl__1);
#line 232
c_rt_lib0clear(&___nl__0);
#line 232
return NULL;
}

ImmT compiler_priv0get_out_ext(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 236
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(30)));
#line 236
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 238
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(31)));
#line 238
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 240
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(32)));
#line 240
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 242
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(34)));
#line 242
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 244
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(33)));
#line 244
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 246
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(35)));
#line 246
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 248
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(36)));
#line 248
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 248
c_rt_lib0move(&___nl__1,___get_global_const(76));
#line 248
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 248
nl_die_arg(___nl__1);
#line 236
label_2:
#line 237
c_rt_lib0move(&___nl__2,___get_global_const(84));
#line 237
c_rt_lib0clear(&___nl__0);
#line 237
c_rt_lib0clear(&___nl__1);
#line 237
return ___nl__2;
#line 237
c_rt_lib0clear(&___nl__2);
#line 238
goto label_1;
#line 238
label_3:
#line 239
c_rt_lib0move(&___nl__2,___get_global_const(85));
#line 239
c_rt_lib0clear(&___nl__0);
#line 239
c_rt_lib0clear(&___nl__1);
#line 239
return ___nl__2;
#line 239
c_rt_lib0clear(&___nl__2);
#line 240
goto label_1;
#line 240
label_4:
#line 241
c_rt_lib0move(&___nl__2,___get_global_const(86));
#line 241
c_rt_lib0clear(&___nl__0);
#line 241
c_rt_lib0clear(&___nl__1);
#line 241
return ___nl__2;
#line 241
c_rt_lib0clear(&___nl__2);
#line 242
goto label_1;
#line 242
label_5:
#line 243
c_rt_lib0move(&___nl__2,___get_global_const(87));
#line 243
c_rt_lib0clear(&___nl__0);
#line 243
c_rt_lib0clear(&___nl__1);
#line 243
return ___nl__2;
#line 243
c_rt_lib0clear(&___nl__2);
#line 244
goto label_1;
#line 244
label_6:
#line 245
c_rt_lib0move(&___nl__2,___get_global_const(88));
#line 245
c_rt_lib0clear(&___nl__0);
#line 245
c_rt_lib0clear(&___nl__1);
#line 245
return ___nl__2;
#line 245
c_rt_lib0clear(&___nl__2);
#line 246
goto label_1;
#line 246
label_7:
#line 247
c_rt_lib0move(&___nl__2,___get_global_const(89));
#line 247
c_rt_lib0clear(&___nl__0);
#line 247
c_rt_lib0clear(&___nl__1);
#line 247
return ___nl__2;
#line 247
c_rt_lib0clear(&___nl__2);
#line 248
goto label_1;
#line 248
label_8:
#line 249
c_rt_lib0move(&___nl__2,___get_global_const(90));
#line 249
c_rt_lib0clear(&___nl__0);
#line 249
c_rt_lib0clear(&___nl__1);
#line 249
return ___nl__2;
#line 249
c_rt_lib0clear(&___nl__2);
#line 250
goto label_1;
#line 250
label_1:
#line 250
c_rt_lib0clear(&___nl__1);
#line 250
c_rt_lib0clear(&___nl__0);
#line 250
return NULL;
}

ImmT compiler_priv0mk_path(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 254
c_rt_lib0move(&___nl__2,___get_global_const(83));
#line 254
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 254
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 254
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 254
c_rt_lib0clear(&___nl__0);
#line 254
c_rt_lib0clear(&___nl__1);
#line 254
c_rt_lib0clear(&___nl__2);
#line 254
return NULL;
#line 254
goto label_2;
#line 254
label_2:
#line 254
c_rt_lib0clear(&___nl__2);
#line 255
c_rt_lib0move(&___nl__2, compiler_priv0get_dir(___nl__1));
#line 255
c_rt_lib0delete(compiler_priv0mk_path(___nl__0, ___nl__2));
#line 255
c_rt_lib0clear(&___nl__2);
#line 256
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__0, ___nl__1));
#line 256
c_rt_lib0delete(c_fe_lib0mk_path(___nl__2));
#line 256
c_rt_lib0clear(&___nl__2);
#line 256
c_rt_lib0clear(&___nl__0);
#line 256
c_rt_lib0clear(&___nl__1);
#line 256
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
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(60)));
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 262
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(91)));
#line 263
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(65)));
#line 263
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(30)));
#line 263
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 265
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(31)));
#line 265
if(c_rt_lib0check_true_native(___nl__6)){ goto label_3;}
#line 267
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(32)));
#line 267
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 269
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(33)));
#line 269
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 277
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(34)));
#line 277
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(35)));
#line 279
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 281
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(36)));
#line 281
if(c_rt_lib0check_true_native(___nl__6)){ goto label_8;}
#line 281
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 281
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 281
nl_die_arg(___nl__6);
#line 263
label_2:
#line 264
c_rt_lib0move(&___nl__8,___get_global_const(84));
#line 264
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 264
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(30), ___nl__8));
#line 264
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__8));
#line 264
c_rt_lib0clear(&___nl__8);
#line 264
c_rt_lib0clear(&___nl__0);
#line 264
c_rt_lib0clear(&___nl__1);
#line 264
c_rt_lib0clear(&___nl__2);
#line 264
c_rt_lib0clear(&___nl__3);
#line 264
c_rt_lib0clear(&___nl__4);
#line 264
c_rt_lib0clear(&___nl__5);
#line 264
c_rt_lib0clear(&___nl__6);
#line 264
return ___nl__7;
#line 264
c_rt_lib0clear(&___nl__7);
#line 265
goto label_1;
#line 265
label_3:
#line 266
c_rt_lib0move(&___nl__8,___get_global_const(85));
#line 266
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 266
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(31), ___nl__8));
#line 266
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__8));
#line 266
c_rt_lib0clear(&___nl__8);
#line 266
c_rt_lib0clear(&___nl__0);
#line 266
c_rt_lib0clear(&___nl__1);
#line 266
c_rt_lib0clear(&___nl__2);
#line 266
c_rt_lib0clear(&___nl__3);
#line 266
c_rt_lib0clear(&___nl__4);
#line 266
c_rt_lib0clear(&___nl__5);
#line 266
c_rt_lib0clear(&___nl__6);
#line 266
return ___nl__7;
#line 266
c_rt_lib0clear(&___nl__7);
#line 267
goto label_1;
#line 267
label_4:
#line 268
c_rt_lib0move(&___nl__9,___get_global_const(86));
#line 268
c_rt_lib0move(&___nl__9, c_rt_lib0concat_new(___nl__3, ___nl__9));
#line 268
c_rt_lib0move(&___nl__10,___get_global_const(92));
#line 268
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__3, ___nl__10));
#line 268
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(2, ___get_global_const(32), ___nl__9, ___get_global_const(37), ___nl__10));
#line 268
c_rt_lib0clear(&___nl__9);
#line 268
c_rt_lib0clear(&___nl__10);
#line 268
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(32), ___nl__8));
#line 268
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__8));
#line 268
c_rt_lib0clear(&___nl__8);
#line 268
c_rt_lib0clear(&___nl__0);
#line 268
c_rt_lib0clear(&___nl__1);
#line 268
c_rt_lib0clear(&___nl__2);
#line 268
c_rt_lib0clear(&___nl__3);
#line 268
c_rt_lib0clear(&___nl__4);
#line 268
c_rt_lib0clear(&___nl__5);
#line 268
c_rt_lib0clear(&___nl__6);
#line 268
return ___nl__7;
#line 268
c_rt_lib0clear(&___nl__7);
#line 269
goto label_1;
#line 269
label_5:
#line 270
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(93)));
#line 270
c_rt_lib0move(&___nl__7, string0length(___nl__8));
#line 270
c_rt_lib0clear(&___nl__8);
#line 271
c_rt_lib0move(&___nl__8, compiler_priv0get_dir(___nl__4));
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(60)));
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__8));
#line 272
c_rt_lib0move(&___nl__10,___get_global_const(81));
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 272
c_rt_lib0clear(&___nl__10);
#line 272
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__1));
#line 272
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 272
c_rt_lib0clear(&___nl__9);
#line 273
c_rt_lib0move(&___nl__9, string0length(___nl__8));
#line 273
c_rt_lib0move(&___nl__9, c_rt_lib0lt(___nl__7, ___nl__9));
#line 273
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 273
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 274
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(60)));
#line 274
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 274
c_rt_lib0move(&___nl__12, c_rt_lib0add(___nl__7, ___nl__12));
#line 274
c_rt_lib0move(&___nl__11, string0substr2(___nl__8, ___nl__12));
#line 274
c_rt_lib0clear(&___nl__12);
#line 274
c_rt_lib0delete(compiler_priv0mk_path(___nl__10, ___nl__11));
#line 274
c_rt_lib0clear(&___nl__11);
#line 274
c_rt_lib0clear(&___nl__10);
#line 275
goto label_10;
#line 275
label_10:
#line 275
c_rt_lib0clear(&___nl__9);
#line 276
c_rt_lib0move(&___nl__10,___get_global_const(88));
#line 276
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__3, ___nl__10));
#line 276
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(33), ___nl__10));
#line 276
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__10));
#line 276
c_rt_lib0clear(&___nl__10);
#line 276
c_rt_lib0clear(&___nl__0);
#line 276
c_rt_lib0clear(&___nl__1);
#line 276
c_rt_lib0clear(&___nl__2);
#line 276
c_rt_lib0clear(&___nl__3);
#line 276
c_rt_lib0clear(&___nl__4);
#line 276
c_rt_lib0clear(&___nl__5);
#line 276
c_rt_lib0clear(&___nl__6);
#line 276
c_rt_lib0clear(&___nl__7);
#line 276
c_rt_lib0clear(&___nl__8);
#line 276
return ___nl__9;
#line 276
c_rt_lib0clear(&___nl__9);
#line 276
c_rt_lib0clear(&___nl__7);
#line 276
c_rt_lib0clear(&___nl__8);
#line 277
goto label_1;
#line 277
label_6:
#line 278
c_rt_lib0move(&___nl__8,___get_global_const(87));
#line 278
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 278
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(34), ___nl__8));
#line 278
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__8));
#line 278
c_rt_lib0clear(&___nl__8);
#line 278
c_rt_lib0clear(&___nl__0);
#line 278
c_rt_lib0clear(&___nl__1);
#line 278
c_rt_lib0clear(&___nl__2);
#line 278
c_rt_lib0clear(&___nl__3);
#line 278
c_rt_lib0clear(&___nl__4);
#line 278
c_rt_lib0clear(&___nl__5);
#line 278
c_rt_lib0clear(&___nl__6);
#line 278
return ___nl__7;
#line 278
c_rt_lib0clear(&___nl__7);
#line 279
goto label_1;
#line 279
label_7:
#line 280
c_rt_lib0move(&___nl__8,___get_global_const(89));
#line 280
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 280
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(35), ___nl__8));
#line 280
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__8));
#line 280
c_rt_lib0clear(&___nl__8);
#line 280
c_rt_lib0clear(&___nl__0);
#line 280
c_rt_lib0clear(&___nl__1);
#line 280
c_rt_lib0clear(&___nl__2);
#line 280
c_rt_lib0clear(&___nl__3);
#line 280
c_rt_lib0clear(&___nl__4);
#line 280
c_rt_lib0clear(&___nl__5);
#line 280
c_rt_lib0clear(&___nl__6);
#line 280
return ___nl__7;
#line 280
c_rt_lib0clear(&___nl__7);
#line 281
goto label_1;
#line 281
label_8:
#line 282
c_rt_lib0move(&___nl__8,___get_global_const(94));
#line 282
c_rt_lib0move(&___nl__8, c_rt_lib0concat_new(___nl__3, ___nl__8));
#line 282
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(36), ___nl__8));
#line 282
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(40), ___nl__4, ___get_global_const(41), ___nl__8));
#line 282
c_rt_lib0clear(&___nl__8);
#line 282
c_rt_lib0clear(&___nl__0);
#line 282
c_rt_lib0clear(&___nl__1);
#line 282
c_rt_lib0clear(&___nl__2);
#line 282
c_rt_lib0clear(&___nl__3);
#line 282
c_rt_lib0clear(&___nl__4);
#line 282
c_rt_lib0clear(&___nl__5);
#line 282
c_rt_lib0clear(&___nl__6);
#line 282
return ___nl__7;
#line 282
c_rt_lib0clear(&___nl__7);
#line 283
goto label_1;
#line 283
label_1:
#line 283
c_rt_lib0clear(&___nl__5);
#line 283
c_rt_lib0clear(&___nl__6);
#line 283
c_rt_lib0clear(&___nl__3);
#line 283
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0clear(&___nl__0);
#line 283
c_rt_lib0clear(&___nl__1);
#line 283
c_rt_lib0clear(&___nl__2);
#line 283
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
#line 287
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 288
c_rt_lib0move(&___nl__4, ptd0sim());
#line 288
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 288
c_rt_lib0clear(&___nl__4);
#line 288
c_rt_lib0move(&___nl__4, c_fe_lib0get_module_files_rec(___nl__0));
#line 288
c_rt_lib0move(&___nl__2, ptd0ensure(___nl__3, ___nl__4));
#line 288
c_rt_lib0clear(&___nl__4);
#line 288
c_rt_lib0clear(&___nl__3);
#line 289
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 289
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 289
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 289
label_3:
#line 289
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 289
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 289
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 290
c_rt_lib0move(&___nl__9,___get_global_const(88));
#line 290
c_rt_lib0move(&___nl__8, compiler_priv0has_extension(___nl__3, ___nl__9));
#line 290
c_rt_lib0clear(&___nl__9);
#line 290
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 290
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 290
c_rt_lib0delete(array0push(&___nl__1, ___nl__3));
#line 290
goto label_5;
#line 290
label_5:
#line 290
c_rt_lib0clear(&___nl__8);
#line 291
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 291
goto label_3;
#line 291
label_1:
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
#line 292
c_rt_lib0clear(&___nl__0);
#line 292
c_rt_lib0clear(&___nl__2);
#line 292
return ___nl__1;
#line 292
c_rt_lib0clear(&___nl__1);
#line 292
c_rt_lib0clear(&___nl__2);
#line 292
c_rt_lib0clear(&___nl__0);
#line 292
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
#line 296
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(60)));
#line 297
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 298
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(59)));
#line 298
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 298
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 298
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 298
label_3:
#line 298
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 298
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 298
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 299
c_rt_lib0move(&___nl__10,___get_global_const(88));
#line 299
c_rt_lib0move(&___nl__9, compiler_priv0has_extension(___nl__4, ___nl__10));
#line 299
c_rt_lib0clear(&___nl__10);
#line 299
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 299
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 300
c_rt_lib0move(&___nl__11, compiler_priv0get_dir(___nl__4));
#line 300
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__11, ___get_global_const(91), ___nl__4));
#line 300
c_rt_lib0clear(&___nl__11);
#line 300
c_rt_lib0delete(array0push(&___nl__2, ___nl__10));
#line 300
c_rt_lib0clear(&___nl__10);
#line 301
goto label_4;
#line 301
label_5:
#line 302
c_rt_lib0move(&___nl__10, compiler_priv0get_all_nianio_file(___nl__4));
#line 302
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 302
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 302
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 302
label_8:
#line 302
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 302
if(c_rt_lib0check_true_native(___nl__15)){ goto label_6;}
#line 302
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 303
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(2, ___get_global_const(93), ___nl__4, ___get_global_const(91), ___nl__11));
#line 303
c_rt_lib0delete(array0push(&___nl__2, ___nl__16));
#line 303
c_rt_lib0clear(&___nl__16);
#line 304
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 304
goto label_8;
#line 304
label_6:
#line 304
c_rt_lib0clear(&___nl__10);
#line 304
c_rt_lib0clear(&___nl__11);
#line 304
c_rt_lib0clear(&___nl__12);
#line 304
c_rt_lib0clear(&___nl__13);
#line 304
c_rt_lib0clear(&___nl__14);
#line 304
c_rt_lib0clear(&___nl__15);
#line 305
goto label_4;
#line 305
label_4:
#line 305
c_rt_lib0clear(&___nl__9);
#line 306
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 306
goto label_3;
#line 306
label_1:
#line 306
c_rt_lib0clear(&___nl__3);
#line 306
c_rt_lib0clear(&___nl__4);
#line 306
c_rt_lib0clear(&___nl__5);
#line 306
c_rt_lib0clear(&___nl__6);
#line 306
c_rt_lib0clear(&___nl__7);
#line 306
c_rt_lib0clear(&___nl__8);
#line 307
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 307
c_rt_lib0move(&___nl__3, compiler_priv0get_out_ext(___nl__4));
#line 307
c_rt_lib0clear(&___nl__4);
#line 308
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 309
c_rt_lib0move(&___nl__5, c_fe_lib0get_module_files(___nl__1));
#line 309
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 309
if(c_rt_lib0check_true_native(___nl__6)){ goto label_10;}
#line 314
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 314
if(c_rt_lib0check_true_native(___nl__6)){ goto label_11;}
#line 314
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 314
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 314
nl_die_arg(___nl__6);
#line 309
label_10:
#line 309
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 310
c_rt_lib0move(&___nl__10, ptd0sim());
#line 310
c_rt_lib0move(&___nl__9, ptd0arr(___nl__10));
#line 310
c_rt_lib0clear(&___nl__10);
#line 310
c_rt_lib0move(&___nl__8, ptd0ensure(___nl__9, ___nl__7));
#line 310
c_rt_lib0clear(&___nl__9);
#line 310
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 310
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 310
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 310
label_14:
#line 310
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 310
if(c_rt_lib0check_true_native(___nl__13)){ goto label_12;}
#line 310
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 311
c_rt_lib0move(&___nl__14, compiler_priv0has_extension(___nl__9, ___nl__3));
#line 311
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 311
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 311
if(c_rt_lib0check_true_native(___nl__14)){ goto label_16;}
#line 311
c_rt_lib0clear(&___nl__14);
#line 311
goto label_13;
#line 311
goto label_16;
#line 311
label_16:
#line 311
c_rt_lib0clear(&___nl__14);
#line 312
c_rt_lib0move(&___nl__14, compiler_priv0get_module_name(___nl__9));
#line 312
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__14, ___nl__9));
#line 312
c_rt_lib0clear(&___nl__14);
#line 312
label_13:
#line 313
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 313
goto label_14;
#line 313
label_12:
#line 313
c_rt_lib0clear(&___nl__8);
#line 313
c_rt_lib0clear(&___nl__9);
#line 313
c_rt_lib0clear(&___nl__10);
#line 313
c_rt_lib0clear(&___nl__11);
#line 313
c_rt_lib0clear(&___nl__12);
#line 313
c_rt_lib0clear(&___nl__13);
#line 313
c_rt_lib0clear(&___nl__7);
#line 314
goto label_9;
#line 314
label_11:
#line 314
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 315
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 315
c_rt_lib0clear(&___nl__0);
#line 315
c_rt_lib0clear(&___nl__1);
#line 315
c_rt_lib0clear(&___nl__2);
#line 315
c_rt_lib0clear(&___nl__3);
#line 315
c_rt_lib0clear(&___nl__4);
#line 315
c_rt_lib0clear(&___nl__5);
#line 315
c_rt_lib0clear(&___nl__6);
#line 315
c_rt_lib0clear(&___nl__7);
#line 315
return ___nl__8;
#line 315
c_rt_lib0clear(&___nl__8);
#line 315
c_rt_lib0clear(&___nl__7);
#line 316
goto label_9;
#line 316
label_9:
#line 316
c_rt_lib0clear(&___nl__5);
#line 316
c_rt_lib0clear(&___nl__6);
#line 317
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 318
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 318
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 318
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__2));
#line 318
label_19:
#line 318
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 318
if(c_rt_lib0check_true_native(___nl__10)){ goto label_17;}
#line 318
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__2, ___nl__7));
#line 319
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(91)));
#line 319
c_rt_lib0move(&___nl__11, compiler_priv0get_module_name(___nl__12));
#line 319
c_rt_lib0clear(&___nl__12);
#line 320
c_rt_lib0move(&___nl__12, compiler_priv0mk_path_module(___nl__6, ___nl__11, ___nl__0));
#line 321
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__11, ___nl__12));
#line 321
c_rt_lib0clear(&___nl__11);
#line 321
c_rt_lib0clear(&___nl__12);
#line 322
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 322
goto label_19;
#line 322
label_17:
#line 322
c_rt_lib0clear(&___nl__6);
#line 322
c_rt_lib0clear(&___nl__7);
#line 322
c_rt_lib0clear(&___nl__8);
#line 322
c_rt_lib0clear(&___nl__9);
#line 322
c_rt_lib0clear(&___nl__10);
#line 323
c_rt_lib0clear(&___nl__0);
#line 323
c_rt_lib0clear(&___nl__1);
#line 323
c_rt_lib0clear(&___nl__2);
#line 323
c_rt_lib0clear(&___nl__3);
#line 323
c_rt_lib0clear(&___nl__4);
#line 323
return ___nl__5;
#line 323
c_rt_lib0clear(&___nl__1);
#line 323
c_rt_lib0clear(&___nl__2);
#line 323
c_rt_lib0clear(&___nl__3);
#line 323
c_rt_lib0clear(&___nl__4);
#line 323
c_rt_lib0clear(&___nl__5);
#line 323
c_rt_lib0clear(&___nl__0);
#line 323
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
#line 330
c_rt_lib0move(&___nl__3,___get_global_const(95));
#line 330
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__0));
#line 330
c_rt_lib0move(&___nl__4,___get_global_const(96));
#line 330
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 330
c_rt_lib0clear(&___nl__4);
#line 330
c_rt_lib0delete(c_fe_lib0print(___nl__3));
#line 330
c_rt_lib0clear(&___nl__3);
#line 331
c_rt_lib0move(&___nl__8, ptd0sim());
#line 331
c_rt_lib0move(&___nl__9, ptd0sim());
#line 331
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(2, ___get_global_const(45), ___nl__8, ___get_global_const(44), ___nl__9));
#line 331
c_rt_lib0clear(&___nl__8);
#line 331
c_rt_lib0clear(&___nl__9);
#line 331
c_rt_lib0move(&___nl__6, ptd0var(___nl__7));
#line 331
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0move(&___nl__7, c_fe_lib0file_to_string(___nl__1));
#line 331
c_rt_lib0move(&___nl__5, ptd0ensure(___nl__6, ___nl__7));
#line 331
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0clear(&___nl__6);
#line 331
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 331
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 331
c_rt_lib0clear(&___nl__0);
#line 331
c_rt_lib0clear(&___nl__1);
#line 331
c_rt_lib0clear(&___nl__3);
#line 331
c_rt_lib0clear(&___nl__4);
#line 331
return ___nl__5;
#line 331
label_1:
#line 331
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 331
c_rt_lib0clear(&___nl__4);
#line 331
c_rt_lib0clear(&___nl__5);
#line 332
c_rt_lib0move(&___nl__4, nparser0sparse(___nl__3, ___nl__0));
#line 333
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 333
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 339
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(97)));
#line 339
if(c_rt_lib0check_true_native(___nl__5)){ goto label_4;}
#line 339
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 339
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 339
nl_die_arg(___nl__5);
#line 333
label_3:
#line 333
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(45)));
#line 334
c_rt_lib0move(&___nl__7, module_checker0check_module(___nl__6));
#line 335
c_rt_lib0move(&___nl__8,___get_global_const(26));
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___2, ___nl__8));
#line 335
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(98)));
#line 335
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__0, ___nl__9));
#line 335
c_rt_lib0clear(&___nl__9);
#line 335
c_rt_lib0move(&___nl__9,___get_global_const(26));
#line 335
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__9, ___nl__8));
#line 335
c_rt_lib0clear(&___nl__9);
#line 335
c_rt_lib0clear(&___nl__8);
#line 336
c_rt_lib0move(&___nl__8,___get_global_const(25));
#line 336
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(*___ref___2, ___nl__8));
#line 336
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(17)));
#line 336
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__0, ___nl__9));
#line 336
c_rt_lib0clear(&___nl__9);
#line 336
c_rt_lib0move(&___nl__9,___get_global_const(25));
#line 336
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__9, ___nl__8));
#line 336
c_rt_lib0clear(&___nl__9);
#line 336
c_rt_lib0clear(&___nl__8);
#line 337
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(17)));
#line 337
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 337
c_rt_lib0clear(&___nl__9);
#line 337
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 337
c_rt_lib0move(&___nl__8, c_rt_lib0num_eq(___nl__8, ___nl__9));
#line 337
c_rt_lib0clear(&___nl__9);
#line 337
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 337
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 337
if(c_rt_lib0check_true_native(___nl__8)){ goto label_6;}
#line 337
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 337
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__9));
#line 337
c_rt_lib0clear(&___nl__0);
#line 337
c_rt_lib0clear(&___nl__1);
#line 337
c_rt_lib0clear(&___nl__3);
#line 337
c_rt_lib0clear(&___nl__4);
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
c_rt_lib0clear(&___nl__6);
#line 337
c_rt_lib0clear(&___nl__7);
#line 337
c_rt_lib0clear(&___nl__8);
#line 337
return ___nl__9;
#line 337
c_rt_lib0clear(&___nl__9);
#line 337
goto label_6;
#line 337
label_6:
#line 337
c_rt_lib0clear(&___nl__8);
#line 338
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__6));
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
return ___nl__8;
#line 338
c_rt_lib0clear(&___nl__8);
#line 338
c_rt_lib0clear(&___nl__7);
#line 338
c_rt_lib0clear(&___nl__6);
#line 339
goto label_2;
#line 339
label_4:
#line 339
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(97)));
#line 340
c_rt_lib0move(&___nl__7,___get_global_const(26));
#line 340
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___2, ___nl__7));
#line 340
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 340
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__0, ___nl__8));
#line 340
c_rt_lib0clear(&___nl__8);
#line 340
c_rt_lib0move(&___nl__8,___get_global_const(26));
#line 340
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__8, ___nl__7));
#line 340
c_rt_lib0clear(&___nl__8);
#line 340
c_rt_lib0clear(&___nl__7);
#line 341
c_rt_lib0move(&___nl__7,___get_global_const(25));
#line 341
c_rt_lib0move(&___nl__7, c_rt_lib0get_ref_hash(*___ref___2, ___nl__7));
#line 341
c_rt_lib0delete(hash0set_value(&___nl__7, ___nl__0, ___nl__6));
#line 341
c_rt_lib0move(&___nl__8,___get_global_const(25));
#line 341
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___2, ___nl__8, ___nl__7));
#line 341
c_rt_lib0clear(&___nl__8);
#line 341
c_rt_lib0clear(&___nl__7);
#line 342
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 342
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__7));
#line 342
c_rt_lib0clear(&___nl__0);
#line 342
c_rt_lib0clear(&___nl__1);
#line 342
c_rt_lib0clear(&___nl__3);
#line 342
c_rt_lib0clear(&___nl__4);
#line 342
c_rt_lib0clear(&___nl__5);
#line 342
c_rt_lib0clear(&___nl__6);
#line 342
return ___nl__7;
#line 342
c_rt_lib0clear(&___nl__7);
#line 342
c_rt_lib0clear(&___nl__6);
#line 343
goto label_2;
#line 343
label_2:
#line 343
c_rt_lib0clear(&___nl__5);
#line 343
c_rt_lib0clear(&___nl__3);
#line 343
c_rt_lib0clear(&___nl__4);
#line 343
c_rt_lib0clear(&___nl__0);
#line 343
c_rt_lib0clear(&___nl__1);
#line 343
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
#line 347
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 348
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(63)));
#line 348
c_rt_lib0move(&___nl__2, c_fe_lib0file_to_string(___nl__3));
#line 348
c_rt_lib0clear(&___nl__3);
#line 348
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(45)));
#line 348
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 361
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(44)));
#line 361
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 361
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 361
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 361
nl_die_arg(___nl__3);
#line 348
label_2:
#line 348
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(45)));
#line 349
c_rt_lib0move(&___nl__5,___get_global_const(99));
#line 349
c_rt_lib0delete(c_fe_lib0print(___nl__5));
#line 349
c_rt_lib0clear(&___nl__5);
#line 350
c_rt_lib0move(&___nl__5, dfile0try_sload(___nl__4));
#line 351
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(0));
#line 352
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(45)));
#line 352
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 354
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__5, ___get_global_const(44)));
#line 354
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 354
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 354
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__5));
#line 354
nl_die_arg(___nl__7);
#line 352
label_5:
#line 352
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(45)));
#line 353
c_rt_lib0copy(&___nl__6, ___nl__8);
#line 353
c_rt_lib0clear(&___nl__8);
#line 354
goto label_4;
#line 354
label_6:
#line 354
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__5, ___get_global_const(44)));
#line 355
c_rt_lib0move(&___nl__9,___get_global_const(100));
#line 355
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 355
c_rt_lib0clear(&___nl__9);
#line 356
c_rt_lib0delete(c_fe_lib0print(___nl__8));
#line 356
c_rt_lib0clear(&___nl__8);
#line 357
goto label_4;
#line 357
label_4:
#line 357
c_rt_lib0clear(&___nl__7);
#line 358
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 358
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 358
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 358
label_9:
#line 358
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 358
if(c_rt_lib0check_true_native(___nl__11)){ goto label_7;}
#line 358
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 359
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 359
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__7, ___nl__12));
#line 359
c_rt_lib0clear(&___nl__12);
#line 360
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 360
goto label_9;
#line 360
label_7:
#line 360
c_rt_lib0clear(&___nl__7);
#line 360
c_rt_lib0clear(&___nl__8);
#line 360
c_rt_lib0clear(&___nl__9);
#line 360
c_rt_lib0clear(&___nl__10);
#line 360
c_rt_lib0clear(&___nl__11);
#line 360
c_rt_lib0clear(&___nl__5);
#line 360
c_rt_lib0clear(&___nl__6);
#line 360
c_rt_lib0clear(&___nl__4);
#line 361
goto label_1;
#line 361
label_3:
#line 361
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(44)));
#line 362
c_rt_lib0move(&___nl__5,___get_global_const(101));
#line 362
c_rt_lib0delete(c_fe_lib0print(___nl__5));
#line 362
c_rt_lib0clear(&___nl__5);
#line 362
c_rt_lib0clear(&___nl__4);
#line 363
goto label_1;
#line 363
label_1:
#line 363
c_rt_lib0clear(&___nl__2);
#line 363
c_rt_lib0clear(&___nl__3);
#line 364
c_rt_lib0clear(&___nl__0);
#line 364
return ___nl__1;
#line 364
c_rt_lib0clear(&___nl__1);
#line 364
c_rt_lib0clear(&___nl__0);
#line 364
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
#line 368
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 369
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 370
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 371
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 372
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 372
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 372
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 372
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 372
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 372
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(5, ___get_global_const(25), ___nl__6, ___get_global_const(26), ___nl__7, ___get_global_const(27), ___nl__8, ___get_global_const(28), ___nl__9, ___get_global_const(29), ___nl__10));
#line 372
c_rt_lib0clear(&___nl__6);
#line 372
c_rt_lib0clear(&___nl__7);
#line 372
c_rt_lib0clear(&___nl__8);
#line 372
c_rt_lib0clear(&___nl__9);
#line 372
c_rt_lib0clear(&___nl__10);
#line 379
c_rt_lib0move(&___nl__7, compiler_priv0get_mathematical_func(___nl__0));
#line 379
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(62)));
#line 379
c_rt_lib0move(&___nl__6, post_processing0init(___nl__7, ___nl__8));
#line 379
c_rt_lib0clear(&___nl__8);
#line 379
c_rt_lib0clear(&___nl__7);
#line 380
c_rt_lib0move(&___nl__7, c_rt_lib0hash_mk(0));
#line 381
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 381
c_rt_lib0move(&___nl__8, compiler_priv0get_generator_state(___nl__9));
#line 381
c_rt_lib0clear(&___nl__9);
#line 382
label_2:
#line 383
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 383
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 383
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(27), ___nl__10);
#line 383
c_rt_lib0clear(&___nl__9);
#line 383
c_rt_lib0clear(&___nl__10);
#line 384
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 384
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 384
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(28), ___nl__10);
#line 384
c_rt_lib0clear(&___nl__9);
#line 384
c_rt_lib0clear(&___nl__10);
#line 385
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 385
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 385
c_rt_lib0hash_set_value_dec(&___nl__5, ___get_global_const(29), ___nl__10);
#line 385
c_rt_lib0clear(&___nl__9);
#line 385
c_rt_lib0clear(&___nl__10);
#line 386
c_rt_lib0move(&___nl__9, compiler_priv0get_files_to_parse(___nl__0));
#line 387
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 388
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__9));
#line 388
label_5:
#line 388
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 388
if(c_rt_lib0check_true_native(___nl__11)){ goto label_3;}
#line 388
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 388
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__9, ___nl__11));
#line 389
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(40)));
#line 389
c_rt_lib0move(&___nl__14, c_fe_lib0get_modif_time(___nl__15));
#line 389
c_rt_lib0clear(&___nl__15);
#line 390
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 390
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__15, ___get_global_const(44)));
#line 390
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 390
if(c_rt_lib0check_true_native(___nl__15)){ goto label_7;}
#line 390
c_rt_lib0clear(&___nl__14);
#line 390
c_rt_lib0clear(&___nl__15);
#line 390
goto label_4;
#line 390
goto label_7;
#line 390
label_7:
#line 390
c_rt_lib0clear(&___nl__15);
#line 391
c_rt_lib0copy(&___nl__15, ___nl__14);
#line 391
c_rt_lib0move(&___nl__15, c_rt_lib0priv_as(___nl__15, ___get_global_const(45)));
#line 391
c_rt_lib0copy(&___nl__14, ___nl__15);
#line 391
c_rt_lib0clear(&___nl__15);
#line 392
c_rt_lib0move(&___nl__15, hash0has_key(___nl__1, ___nl__11));
#line 392
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 392
if(c_rt_lib0check_true_native(___nl__15)){ goto label_9;}
#line 393
c_rt_lib0move(&___nl__16, hash0get_value(___nl__1, ___nl__11));
#line 394
c_rt_lib0move(&___nl__17, c_rt_lib0gt(___nl__14, ___nl__16));
#line 394
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 394
c_rt_lib0move(&___nl__17, c_rt_lib0not(___nl__17));
#line 394
if(c_rt_lib0check_true_native(___nl__17)){ goto label_11;}
#line 394
c_rt_lib0clear(&___nl__14);
#line 394
c_rt_lib0clear(&___nl__15);
#line 394
c_rt_lib0clear(&___nl__16);
#line 394
c_rt_lib0clear(&___nl__17);
#line 394
goto label_4;
#line 394
goto label_11;
#line 394
label_11:
#line 394
c_rt_lib0clear(&___nl__17);
#line 394
c_rt_lib0clear(&___nl__16);
#line 395
goto label_9;
#line 395
label_9:
#line 395
c_rt_lib0clear(&___nl__15);
#line 396
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__11, ___nl__14));
#line 397
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__11, ___nl__12));
#line 398
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 398
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__15));
#line 398
c_rt_lib0clear(&___nl__15);
#line 398
c_rt_lib0clear(&___nl__14);
#line 398
label_4:
#line 399
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 399
goto label_5;
#line 399
label_3:
#line 399
c_rt_lib0clear(&___nl__11);
#line 399
c_rt_lib0clear(&___nl__12);
#line 399
c_rt_lib0clear(&___nl__13);
#line 400
c_rt_lib0move(&___nl__13, c_rt_lib0init_iter(___nl__7));
#line 400
label_14:
#line 400
c_rt_lib0move(&___nl__11, c_rt_lib0is_end_hash(___nl__13));
#line 400
if(c_rt_lib0check_true_native(___nl__11)){ goto label_12;}
#line 400
c_rt_lib0move(&___nl__11, c_rt_lib0get_key_iter(___nl__13));
#line 400
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value(___nl__7, ___nl__11));
#line 401
c_rt_lib0move(&___nl__14, hash0has_key(___nl__9, ___nl__11));
#line 401
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 401
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 401
if(c_rt_lib0check_true_native(___nl__14)){ goto label_16;}
#line 402
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 402
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__15));
#line 402
c_rt_lib0clear(&___nl__15);
#line 403
c_rt_lib0move(&___nl__15,___get_global_const(25));
#line 403
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__5, ___nl__15));
#line 403
c_rt_lib0delete(hash0delete(&___nl__15, ___nl__11));
#line 403
c_rt_lib0move(&___nl__16,___get_global_const(25));
#line 403
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__16, ___nl__15));
#line 403
c_rt_lib0clear(&___nl__16);
#line 403
c_rt_lib0clear(&___nl__15);
#line 404
c_rt_lib0move(&___nl__15,___get_global_const(26));
#line 404
c_rt_lib0move(&___nl__15, c_rt_lib0get_ref_hash(___nl__5, ___nl__15));
#line 404
c_rt_lib0delete(hash0delete(&___nl__15, ___nl__11));
#line 404
c_rt_lib0move(&___nl__16,___get_global_const(26));
#line 404
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__5, ___nl__16, ___nl__15));
#line 404
c_rt_lib0clear(&___nl__16);
#line 404
c_rt_lib0clear(&___nl__15);
#line 405
c_rt_lib0delete(hash0delete(&___nl__2, ___nl__11));
#line 406
c_rt_lib0delete(hash0delete(&___nl__1, ___nl__11));
#line 407
c_rt_lib0delete(hash0delete(&___nl__4, ___nl__11));
#line 408
c_rt_lib0delete(hash0delete(&___nl__3, ___nl__11));
#line 409
c_rt_lib0delete(post_processing0clear_module_from_state(&___nl__6, ___nl__11));
#line 410
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 410
c_rt_lib0move(&___nl__15, c_rt_lib0priv_is(___nl__15, ___get_global_const(32)));
#line 410
c_rt_lib0move(&___nl__15, c_rt_lib0not(___nl__15));
#line 410
if(c_rt_lib0check_true_native(___nl__15)){ goto label_18;}
#line 411
c_rt_lib0delete(generator_c0clear_module_from_state(&___nl__8, ___nl__11));
#line 412
goto label_18;
#line 412
label_18:
#line 412
c_rt_lib0clear(&___nl__15);
#line 413
goto label_16;
#line 413
label_16:
#line 413
c_rt_lib0clear(&___nl__14);
#line 414
c_rt_lib0move(&___nl__13, c_rt_lib0next_iter(___nl__13));
#line 414
goto label_14;
#line 414
label_12:
#line 414
c_rt_lib0clear(&___nl__11);
#line 414
c_rt_lib0clear(&___nl__12);
#line 414
c_rt_lib0clear(&___nl__13);
#line 415
c_rt_lib0copy(&___nl__7, ___nl__9);
#line 416
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 416
c_rt_lib0move(&___nl__11, c_rt_lib0num_eq(___nl__10, ___nl__11));
#line 416
c_rt_lib0move(&___nl__11, c_rt_lib0not(___nl__11));
#line 416
if(c_rt_lib0check_true_native(___nl__11)){ goto label_20;}
#line 417
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 417
c_rt_lib0delete(c_fe_lib0sleep(___nl__12));
#line 417
c_rt_lib0clear(&___nl__12);
#line 418
c_rt_lib0clear(&___nl__9);
#line 418
c_rt_lib0clear(&___nl__10);
#line 418
c_rt_lib0clear(&___nl__11);
#line 418
goto label_2;
#line 419
goto label_20;
#line 419
label_20:
#line 419
c_rt_lib0clear(&___nl__11);
#line 420
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(0));
#line 421
c_rt_lib0move(&___nl__14, c_rt_lib0init_iter(___nl__4));
#line 421
label_23:
#line 421
c_rt_lib0move(&___nl__12, c_rt_lib0is_end_hash(___nl__14));
#line 421
if(c_rt_lib0check_true_native(___nl__12)){ goto label_21;}
#line 421
c_rt_lib0move(&___nl__12, c_rt_lib0get_key_iter(___nl__14));
#line 421
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value(___nl__4, ___nl__12));
#line 422
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(40)));
#line 422
c_rt_lib0move(&___nl__15, compiler_priv0parse_module(___nl__12, ___nl__16, &___nl__5));
#line 422
c_rt_lib0clear(&___nl__16);
#line 422
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(45)));
#line 422
if(c_rt_lib0check_true_native(___nl__16)){ goto label_25;}
#line 425
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(44)));
#line 425
if(c_rt_lib0check_true_native(___nl__16)){ goto label_26;}
#line 425
c_rt_lib0move(&___nl__16,___get_global_const(76));
#line 425
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 425
nl_die_arg(___nl__16);
#line 422
label_25:
#line 422
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(45)));
#line 423
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__12, ___nl__17));
#line 424
c_rt_lib0delete(hash0set_value(&___nl__3, ___nl__12, ___nl__17));
#line 424
c_rt_lib0clear(&___nl__17);
#line 425
goto label_24;
#line 425
label_26:
#line 425
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(44)));
#line 426
c_rt_lib0delete(hash0set_value(&___nl__11, ___nl__12, ___nl__13));
#line 426
c_rt_lib0clear(&___nl__17);
#line 427
goto label_24;
#line 427
label_24:
#line 427
c_rt_lib0clear(&___nl__15);
#line 427
c_rt_lib0clear(&___nl__16);
#line 428
c_rt_lib0move(&___nl__14, c_rt_lib0next_iter(___nl__14));
#line 428
goto label_23;
#line 428
label_21:
#line 428
c_rt_lib0clear(&___nl__12);
#line 428
c_rt_lib0clear(&___nl__13);
#line 428
c_rt_lib0clear(&___nl__14);
#line 429
c_rt_lib0copy(&___nl__4, ___nl__11);
#line 430
c_rt_lib0move(&___nl__12, hash0size(___nl__4));
#line 430
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 430
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 430
c_rt_lib0clear(&___nl__13);
#line 430
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 430
if(c_rt_lib0check_true_native(___nl__12)){ goto label_28;}
#line 431
c_rt_lib0delete(compiler_priv0show_and_count_errors(___nl__5, ___nl__0));
#line 432
c_rt_lib0move(&___nl__13, string0lf());
#line 432
c_rt_lib0move(&___nl__14,___get_global_const(102));
#line 432
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 432
c_rt_lib0clear(&___nl__14);
#line 432
c_rt_lib0move(&___nl__14, hash0size(___nl__4));
#line 432
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 432
c_rt_lib0clear(&___nl__14);
#line 432
c_rt_lib0move(&___nl__14,___get_global_const(103));
#line 432
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 432
c_rt_lib0clear(&___nl__14);
#line 432
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 432
c_rt_lib0clear(&___nl__13);
#line 433
c_rt_lib0move(&___nl__13,___get_global_const(104));
#line 433
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 433
c_rt_lib0clear(&___nl__13);
#line 434
c_rt_lib0clear(&___nl__9);
#line 434
c_rt_lib0clear(&___nl__10);
#line 434
c_rt_lib0clear(&___nl__11);
#line 434
c_rt_lib0clear(&___nl__12);
#line 434
goto label_2;
#line 435
goto label_28;
#line 435
label_28:
#line 435
c_rt_lib0clear(&___nl__12);
#line 436
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(61)));
#line 436
c_rt_lib0delete(compiler_priv0check_modules(___nl__2, &___nl__5, ___nl__12));
#line 436
c_rt_lib0clear(&___nl__12);
#line 437
c_rt_lib0move(&___nl__12, compiler_priv0show_and_count_errors(___nl__5, ___nl__0));
#line 437
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 437
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 437
c_rt_lib0clear(&___nl__13);
#line 437
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 437
if(c_rt_lib0check_true_native(___nl__12)){ goto label_30;}
#line 438
c_rt_lib0move(&___nl__13,___get_global_const(104));
#line 438
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 438
c_rt_lib0clear(&___nl__13);
#line 439
c_rt_lib0clear(&___nl__9);
#line 439
c_rt_lib0clear(&___nl__10);
#line 439
c_rt_lib0clear(&___nl__11);
#line 439
c_rt_lib0clear(&___nl__12);
#line 439
goto label_2;
#line 440
goto label_30;
#line 440
label_30:
#line 440
c_rt_lib0clear(&___nl__12);
#line 441
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 441
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(34)));
#line 441
if(c_rt_lib0check_true_native(___nl__12)){ goto label_33;}
#line 441
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 441
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(33)));
#line 441
label_33:
#line 441
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 441
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 441
if(c_rt_lib0check_true_native(___nl__12)){ goto label_32;}
#line 442
c_rt_lib0move(&___nl__13,___get_global_const(105));
#line 442
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 442
c_rt_lib0clear(&___nl__13);
#line 443
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 444
c_rt_lib0move(&___nl__14, compiler_priv0translate(___nl__3, &___nl__6));
#line 445
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(60)));
#line 445
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 445
c_rt_lib0move(&___nl__15, compiler_priv0generate_modules_to_files(___nl__14, ___nl__9, ___nl__16, &___nl__8, ___nl__17));
#line 445
c_rt_lib0clear(&___nl__17);
#line 445
c_rt_lib0clear(&___nl__16);
#line 446
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(44)));
#line 446
if(c_rt_lib0check_true_native(___nl__16)){ goto label_35;}
#line 450
c_rt_lib0move(&___nl__16, c_rt_lib0priv_is(___nl__15, ___get_global_const(45)));
#line 450
if(c_rt_lib0check_true_native(___nl__16)){ goto label_36;}
#line 450
c_rt_lib0move(&___nl__16,___get_global_const(76));
#line 450
c_rt_lib0move(&___nl__16, c_rt_lib0array_mk(2, ___nl__16, ___nl__15));
#line 450
nl_die_arg(___nl__16);
#line 446
label_35:
#line 446
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(44)));
#line 447
c_rt_lib0move(&___nl__20, c_rt_lib0init_iter(___nl__17));
#line 447
label_39:
#line 447
c_rt_lib0move(&___nl__18, c_rt_lib0is_end_hash(___nl__20));
#line 447
if(c_rt_lib0check_true_native(___nl__18)){ goto label_37;}
#line 447
c_rt_lib0move(&___nl__18, c_rt_lib0get_key_iter(___nl__20));
#line 447
c_rt_lib0move(&___nl__19, c_rt_lib0hash_get_value(___nl__17, ___nl__18));
#line 448
c_rt_lib0move(&___nl__21, hash0get_value(___nl__2, ___nl__18));
#line 448
c_rt_lib0delete(hash0set_value(&___nl__13, ___nl__18, ___nl__21));
#line 448
c_rt_lib0clear(&___nl__21);
#line 449
c_rt_lib0move(&___nl__20, c_rt_lib0next_iter(___nl__20));
#line 449
goto label_39;
#line 449
label_37:
#line 449
c_rt_lib0clear(&___nl__18);
#line 449
c_rt_lib0clear(&___nl__19);
#line 449
c_rt_lib0clear(&___nl__20);
#line 449
c_rt_lib0clear(&___nl__17);
#line 450
goto label_34;
#line 450
label_36:
#line 450
c_rt_lib0move(&___nl__17, c_rt_lib0priv_as(___nl__15, ___get_global_const(45)));
#line 450
c_rt_lib0clear(&___nl__17);
#line 451
goto label_34;
#line 451
label_34:
#line 451
c_rt_lib0clear(&___nl__15);
#line 451
c_rt_lib0clear(&___nl__16);
#line 452
c_rt_lib0copy(&___nl__3, ___nl__13);
#line 452
c_rt_lib0clear(&___nl__13);
#line 452
c_rt_lib0clear(&___nl__14);
#line 453
goto label_31;
#line 453
label_32:
#line 454
c_rt_lib0move(&___nl__13, c_rt_lib0hash_mk(0));
#line 455
c_rt_lib0move(&___nl__16, c_rt_lib0init_iter(___nl__3));
#line 455
label_42:
#line 455
c_rt_lib0move(&___nl__14, c_rt_lib0is_end_hash(___nl__16));
#line 455
if(c_rt_lib0check_true_native(___nl__14)){ goto label_40;}
#line 455
c_rt_lib0move(&___nl__14, c_rt_lib0get_key_iter(___nl__16));
#line 455
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value(___nl__3, ___nl__14));
#line 456
c_rt_lib0move(&___nl__17,___get_global_const(106));
#line 456
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__14));
#line 456
c_rt_lib0delete(c_fe_lib0print(___nl__17));
#line 456
c_rt_lib0clear(&___nl__17);
#line 457
c_rt_lib0move(&___nl__18, hash0get_value(___nl__9, ___nl__14));
#line 457
c_rt_lib0move(&___nl__18, c_rt_lib0hash_get_value_dec(___nl__18, ___get_global_const(41)));
#line 457
c_rt_lib0move(&___nl__17, compiler_priv0save_module_to_file(___nl__15, ___nl__18));
#line 457
c_rt_lib0clear(&___nl__18);
#line 457
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(44)));
#line 457
if(c_rt_lib0check_true_native(___nl__18)){ goto label_44;}
#line 460
c_rt_lib0move(&___nl__18, c_rt_lib0priv_is(___nl__17, ___get_global_const(45)));
#line 460
if(c_rt_lib0check_true_native(___nl__18)){ goto label_45;}
#line 460
c_rt_lib0move(&___nl__18,___get_global_const(76));
#line 460
c_rt_lib0move(&___nl__18, c_rt_lib0array_mk(2, ___nl__18, ___nl__17));
#line 460
nl_die_arg(___nl__18);
#line 457
label_44:
#line 457
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(44)));
#line 458
c_rt_lib0move(&___nl__20,___get_global_const(107));
#line 458
c_rt_lib0move(&___nl__20, c_rt_lib0concat_add(___nl__20, ___nl__19));
#line 458
c_rt_lib0delete(c_fe_lib0print(___nl__20));
#line 458
c_rt_lib0clear(&___nl__20);
#line 459
c_rt_lib0delete(hash0set_value(&___nl__13, ___nl__14, ___nl__15));
#line 459
c_rt_lib0clear(&___nl__19);
#line 460
goto label_43;
#line 460
label_45:
#line 460
c_rt_lib0move(&___nl__19, c_rt_lib0priv_as(___nl__17, ___get_global_const(45)));
#line 460
c_rt_lib0clear(&___nl__19);
#line 461
goto label_43;
#line 461
label_43:
#line 461
c_rt_lib0clear(&___nl__17);
#line 461
c_rt_lib0clear(&___nl__18);
#line 462
c_rt_lib0move(&___nl__16, c_rt_lib0next_iter(___nl__16));
#line 462
goto label_42;
#line 462
label_40:
#line 462
c_rt_lib0clear(&___nl__14);
#line 462
c_rt_lib0clear(&___nl__15);
#line 462
c_rt_lib0clear(&___nl__16);
#line 463
c_rt_lib0copy(&___nl__3, ___nl__13);
#line 463
c_rt_lib0clear(&___nl__13);
#line 464
goto label_31;
#line 464
label_31:
#line 464
c_rt_lib0clear(&___nl__12);
#line 465
c_rt_lib0move(&___nl__12, hash0size(___nl__3));
#line 465
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 465
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 465
c_rt_lib0clear(&___nl__13);
#line 465
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 465
if(c_rt_lib0check_true_native(___nl__12)){ goto label_47;}
#line 466
c_rt_lib0move(&___nl__13,___get_global_const(108));
#line 466
c_rt_lib0move(&___nl__14, hash0size(___nl__3));
#line 466
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 466
c_rt_lib0clear(&___nl__14);
#line 466
c_rt_lib0move(&___nl__14,___get_global_const(109));
#line 466
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 466
c_rt_lib0clear(&___nl__14);
#line 467
c_rt_lib0move(&___nl__14, string0lf());
#line 467
c_rt_lib0move(&___nl__15,___get_global_const(107));
#line 467
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__15));
#line 467
c_rt_lib0clear(&___nl__15);
#line 467
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__13));
#line 467
c_rt_lib0delete(c_fe_lib0print(___nl__14));
#line 467
c_rt_lib0clear(&___nl__14);
#line 467
c_rt_lib0clear(&___nl__13);
#line 468
goto label_46;
#line 468
label_47:
#line 469
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 469
c_rt_lib0move(&___nl__13, c_rt_lib0priv_is(___nl__13, ___get_global_const(55)));
#line 469
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 469
if(c_rt_lib0check_true_native(___nl__13)){ goto label_49;}
#line 469
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(64)));
#line 469
c_rt_lib0move(&___nl__14, c_rt_lib0priv_as(___nl__14, ___get_global_const(55)));
#line 469
c_rt_lib0delete(c_fe_lib0exec_cmd(___nl__14));
#line 469
c_rt_lib0clear(&___nl__14);
#line 469
goto label_49;
#line 469
label_49:
#line 469
c_rt_lib0clear(&___nl__13);
#line 470
c_rt_lib0move(&___nl__13, string0lf());
#line 470
c_rt_lib0move(&___nl__14,___get_global_const(110));
#line 470
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__14));
#line 470
c_rt_lib0clear(&___nl__14);
#line 470
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 470
c_rt_lib0clear(&___nl__13);
#line 471
goto label_46;
#line 471
label_46:
#line 471
c_rt_lib0clear(&___nl__12);
#line 472
c_rt_lib0move(&___nl__12,___get_global_const(104));
#line 472
c_rt_lib0delete(c_fe_lib0print(___nl__12));
#line 472
c_rt_lib0clear(&___nl__12);
#line 472
c_rt_lib0clear(&___nl__9);
#line 472
c_rt_lib0clear(&___nl__10);
#line 472
c_rt_lib0clear(&___nl__11);
#line 382
goto label_2;
#line 382
c_rt_lib0clear(&___nl__1);
#line 382
c_rt_lib0clear(&___nl__2);
#line 382
c_rt_lib0clear(&___nl__3);
#line 382
c_rt_lib0clear(&___nl__4);
#line 382
c_rt_lib0clear(&___nl__5);
#line 382
c_rt_lib0clear(&___nl__6);
#line 382
c_rt_lib0clear(&___nl__7);
#line 382
c_rt_lib0clear(&___nl__8);
#line 382
c_rt_lib0clear(&___nl__0);
#line 382
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
#line 477
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 478
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(0));
#line 478
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 478
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 478
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 478
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(45)));
#line 478
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(5, ___get_global_const(25), ___nl__3, ___get_global_const(26), ___nl__4, ___get_global_const(27), ___nl__5, ___get_global_const(28), ___nl__6, ___get_global_const(29), ___nl__7));
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
#line 485
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 486
c_rt_lib0move(&___nl__4, compiler_priv0get_files_to_parse(___nl__0));
#line 487
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 487
label_3:
#line 487
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 487
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 487
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 487
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 488
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(40)));
#line 488
c_rt_lib0move(&___nl__8, compiler_priv0parse_module(___nl__5, ___nl__9, &___nl__2));
#line 488
c_rt_lib0clear(&___nl__9);
#line 488
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(45)));
#line 488
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 490
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__8, ___get_global_const(44)));
#line 490
if(c_rt_lib0check_true_native(___nl__9)){ goto label_6;}
#line 490
c_rt_lib0move(&___nl__9,___get_global_const(76));
#line 490
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__9, ___nl__8));
#line 490
nl_die_arg(___nl__9);
#line 488
label_5:
#line 488
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(45)));
#line 489
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__5, ___nl__10));
#line 489
c_rt_lib0clear(&___nl__10);
#line 490
goto label_4;
#line 490
label_6:
#line 490
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__8, ___get_global_const(44)));
#line 491
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 491
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__11));
#line 491
c_rt_lib0clear(&___nl__11);
#line 491
c_rt_lib0clear(&___nl__10);
#line 492
goto label_4;
#line 492
label_4:
#line 492
c_rt_lib0clear(&___nl__8);
#line 492
c_rt_lib0clear(&___nl__9);
#line 493
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 493
goto label_3;
#line 493
label_1:
#line 493
c_rt_lib0clear(&___nl__5);
#line 493
c_rt_lib0clear(&___nl__6);
#line 493
c_rt_lib0clear(&___nl__7);
#line 494
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 494
c_rt_lib0move(&___nl__5, c_rt_lib0num_ne(___nl__3, ___nl__5));
#line 494
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 494
if(c_rt_lib0check_true_native(___nl__5)){ goto label_8;}
#line 495
c_rt_lib0delete(compiler_priv0show_and_count_errors(___nl__2, ___nl__0));
#line 496
c_rt_lib0clear(&___nl__0);
#line 496
c_rt_lib0clear(&___nl__1);
#line 496
c_rt_lib0clear(&___nl__2);
#line 496
c_rt_lib0clear(&___nl__3);
#line 496
c_rt_lib0clear(&___nl__4);
#line 496
c_rt_lib0clear(&___nl__5);
#line 496
return NULL;
#line 497
goto label_8;
#line 497
label_8:
#line 497
c_rt_lib0clear(&___nl__5);
#line 498
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(61)));
#line 498
c_rt_lib0delete(compiler_priv0check_modules(___nl__1, &___nl__2, ___nl__5));
#line 498
c_rt_lib0clear(&___nl__5);
#line 499
c_rt_lib0move(&___nl__5, compiler_priv0show_and_count_errors(___nl__2, ___nl__0));
#line 499
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 499
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__6));
#line 499
c_rt_lib0clear(&___nl__6);
#line 499
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 499
if(c_rt_lib0check_true_native(___nl__5)){ goto label_10;}
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
return NULL;
#line 501
goto label_10;
#line 501
label_10:
#line 501
c_rt_lib0clear(&___nl__5);
#line 502
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 502
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(34)));
#line 502
if(c_rt_lib0check_true_native(___nl__5)){ goto label_13;}
#line 502
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 502
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(33)));
#line 502
label_13:
#line 502
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 502
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 502
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 503
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 503
c_rt_lib0move(&___nl__6, compiler_priv0get_generator_state(___nl__7));
#line 503
c_rt_lib0clear(&___nl__7);
#line 504
c_rt_lib0move(&___nl__7,___get_global_const(105));
#line 504
c_rt_lib0delete(c_fe_lib0print(___nl__7));
#line 504
c_rt_lib0clear(&___nl__7);
#line 505
c_rt_lib0move(&___nl__8, compiler_priv0get_mathematical_func(___nl__0));
#line 505
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(62)));
#line 505
c_rt_lib0move(&___nl__7, post_processing0init(___nl__8, ___nl__9));
#line 505
c_rt_lib0clear(&___nl__9);
#line 505
c_rt_lib0clear(&___nl__8);
#line 506
c_rt_lib0move(&___nl__8, compiler_priv0translate(___nl__1, &___nl__7));
#line 507
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(60)));
#line 507
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(65)));
#line 507
c_rt_lib0delete(compiler_priv0generate_modules_to_files(___nl__8, ___nl__4, ___nl__9, &___nl__6, ___nl__10));
#line 507
c_rt_lib0clear(&___nl__10);
#line 507
c_rt_lib0clear(&___nl__9);
#line 507
c_rt_lib0clear(&___nl__6);
#line 507
c_rt_lib0clear(&___nl__7);
#line 507
c_rt_lib0clear(&___nl__8);
#line 508
goto label_11;
#line 508
label_12:
#line 509
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__1));
#line 509
label_16:
#line 509
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 509
if(c_rt_lib0check_true_native(___nl__6)){ goto label_14;}
#line 509
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 509
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__1, ___nl__6));
#line 510
c_rt_lib0move(&___nl__9,___get_global_const(106));
#line 510
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__6));
#line 510
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 510
c_rt_lib0clear(&___nl__9);
#line 511
c_rt_lib0move(&___nl__10, hash0get_value(___nl__4, ___nl__6));
#line 511
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(41)));
#line 511
c_rt_lib0move(&___nl__9, compiler_priv0save_module_to_file(___nl__7, ___nl__10));
#line 511
c_rt_lib0clear(&___nl__10);
#line 511
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(44)));
#line 511
if(c_rt_lib0check_true_native(___nl__10)){ goto label_18;}
#line 513
c_rt_lib0move(&___nl__10, c_rt_lib0priv_is(___nl__9, ___get_global_const(45)));
#line 513
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 513
c_rt_lib0move(&___nl__10,___get_global_const(76));
#line 513
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__10, ___nl__9));
#line 513
nl_die_arg(___nl__10);
#line 511
label_18:
#line 511
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(44)));
#line 512
c_rt_lib0move(&___nl__12,___get_global_const(107));
#line 512
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__11));
#line 512
c_rt_lib0delete(c_fe_lib0print(___nl__12));
#line 512
c_rt_lib0clear(&___nl__12);
#line 512
c_rt_lib0clear(&___nl__11);
#line 513
goto label_17;
#line 513
label_19:
#line 513
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__9, ___get_global_const(45)));
#line 513
c_rt_lib0clear(&___nl__11);
#line 514
goto label_17;
#line 514
label_17:
#line 514
c_rt_lib0clear(&___nl__9);
#line 514
c_rt_lib0clear(&___nl__10);
#line 515
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 515
goto label_16;
#line 515
label_14:
#line 515
c_rt_lib0clear(&___nl__6);
#line 515
c_rt_lib0clear(&___nl__7);
#line 515
c_rt_lib0clear(&___nl__8);
#line 516
goto label_11;
#line 516
label_11:
#line 516
c_rt_lib0clear(&___nl__5);
#line 516
c_rt_lib0clear(&___nl__1);
#line 516
c_rt_lib0clear(&___nl__2);
#line 516
c_rt_lib0clear(&___nl__3);
#line 516
c_rt_lib0clear(&___nl__4);
#line 516
c_rt_lib0clear(&___nl__0);
#line 516
return NULL;
}

ImmT compiler_priv0construct_error_message(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 520
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 521
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(111)));
#line 521
c_rt_lib0move(&___nl__2, string0length(___nl__3));
#line 521
c_rt_lib0clear(&___nl__3);
#line 521
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 521
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__3));
#line 521
c_rt_lib0clear(&___nl__3);
#line 521
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 521
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 521
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 521
c_rt_lib0move(&___nl__3,___get_global_const(112));
#line 521
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(111)));
#line 521
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 521
c_rt_lib0clear(&___nl__4);
#line 521
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 521
c_rt_lib0clear(&___nl__3);
#line 521
goto label_2;
#line 521
label_2:
#line 521
c_rt_lib0clear(&___nl__2);
#line 522
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(113)));
#line 522
c_rt_lib0move(&___nl__2, string0length(___nl__3));
#line 522
c_rt_lib0clear(&___nl__3);
#line 522
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 522
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__3));
#line 522
c_rt_lib0clear(&___nl__3);
#line 522
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 522
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 522
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 522
c_rt_lib0move(&___nl__3,___get_global_const(114));
#line 522
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(113)));
#line 522
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 522
c_rt_lib0clear(&___nl__4);
#line 522
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__3));
#line 522
c_rt_lib0clear(&___nl__3);
#line 522
goto label_4;
#line 522
label_4:
#line 522
c_rt_lib0clear(&___nl__2);
#line 523
c_rt_lib0move(&___nl__2, string0lf());
#line 523
c_rt_lib0move(&___nl__3,___get_global_const(115));
#line 523
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 523
c_rt_lib0clear(&___nl__3);
#line 523
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(116)));
#line 523
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 523
c_rt_lib0clear(&___nl__3);
#line 523
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 523
c_rt_lib0clear(&___nl__2);
#line 524
c_rt_lib0clear(&___nl__0);
#line 524
return ___nl__1;
#line 524
c_rt_lib0clear(&___nl__1);
#line 524
c_rt_lib0clear(&___nl__0);
#line 524
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
#line 528
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 529
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 530
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(26)));
#line 530
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__4));
#line 530
label_3:
#line 530
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 530
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 530
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 530
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__4, ___nl__5));
#line 531
c_rt_lib0move(&___nl__8,___get_global_const(117));
#line 532
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(66)));
#line 532
c_rt_lib0move(&___nl__9, c_rt_lib0priv_is(___nl__9, ___get_global_const(58)));
#line 532
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 532
if(c_rt_lib0check_true_native(___nl__9)){ goto label_5;}
#line 532
c_rt_lib0move(&___nl__10,___get_global_const(118));
#line 532
c_rt_lib0copy(&___nl__8, ___nl__10);
#line 532
c_rt_lib0clear(&___nl__10);
#line 532
goto label_5;
#line 532
label_5:
#line 532
c_rt_lib0clear(&___nl__9);
#line 533
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 533
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 533
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__6));
#line 533
label_8:
#line 533
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 533
if(c_rt_lib0check_true_native(___nl__13)){ goto label_6;}
#line 533
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__6, ___nl__10));
#line 534
c_rt_lib0move(&___nl__14, compiler_priv0construct_error_message(___nl__9));
#line 534
c_rt_lib0move(&___nl__14, c_rt_lib0concat_new(___nl__8, ___nl__14));
#line 534
c_rt_lib0delete(c_fe_lib0print(___nl__14));
#line 534
c_rt_lib0clear(&___nl__14);
#line 535
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 535
goto label_8;
#line 535
label_6:
#line 535
c_rt_lib0clear(&___nl__9);
#line 535
c_rt_lib0clear(&___nl__10);
#line 535
c_rt_lib0clear(&___nl__11);
#line 535
c_rt_lib0clear(&___nl__12);
#line 535
c_rt_lib0clear(&___nl__13);
#line 536
c_rt_lib0move(&___nl__9, array0len(___nl__6));
#line 536
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__9));
#line 536
c_rt_lib0clear(&___nl__9);
#line 537
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(28)));
#line 537
c_rt_lib0move(&___nl__9, hash0has_key(___nl__10, ___nl__5));
#line 537
c_rt_lib0clear(&___nl__10);
#line 537
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 537
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 538
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(28)));
#line 538
c_rt_lib0move(&___nl__10, hash0get_value(___nl__11, ___nl__5));
#line 538
c_rt_lib0clear(&___nl__11);
#line 539
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 539
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 539
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 539
label_13:
#line 539
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 539
if(c_rt_lib0check_true_native(___nl__15)){ goto label_11;}
#line 539
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 540
c_rt_lib0move(&___nl__16, compiler_priv0construct_error_message(___nl__11));
#line 540
c_rt_lib0move(&___nl__16, c_rt_lib0concat_new(___nl__8, ___nl__16));
#line 540
c_rt_lib0delete(c_fe_lib0print(___nl__16));
#line 540
c_rt_lib0clear(&___nl__16);
#line 541
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 541
goto label_13;
#line 541
label_11:
#line 541
c_rt_lib0clear(&___nl__11);
#line 541
c_rt_lib0clear(&___nl__12);
#line 541
c_rt_lib0clear(&___nl__13);
#line 541
c_rt_lib0clear(&___nl__14);
#line 541
c_rt_lib0clear(&___nl__15);
#line 542
c_rt_lib0move(&___nl__11, array0len(___nl__10));
#line 542
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__11));
#line 542
c_rt_lib0clear(&___nl__11);
#line 542
c_rt_lib0clear(&___nl__10);
#line 543
goto label_10;
#line 543
label_10:
#line 543
c_rt_lib0clear(&___nl__9);
#line 544
c_rt_lib0move(&___nl__9,___get_global_const(118));
#line 544
c_rt_lib0copy(&___nl__8, ___nl__9);
#line 544
c_rt_lib0clear(&___nl__9);
#line 545
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(25)));
#line 545
c_rt_lib0move(&___nl__9, hash0get_value(___nl__10, ___nl__5));
#line 545
c_rt_lib0clear(&___nl__10);
#line 546
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 546
c_rt_lib0move(&___nl__12,___get_global_const(2));
#line 546
c_rt_lib0move(&___nl__13, c_rt_lib0array_len(___nl__9));
#line 546
label_16:
#line 546
c_rt_lib0move(&___nl__14, c_rt_lib0ge(___nl__11, ___nl__13));
#line 546
if(c_rt_lib0check_true_native(___nl__14)){ goto label_14;}
#line 546
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__9, ___nl__11));
#line 547
c_rt_lib0move(&___nl__15,___get_global_const(118));
#line 547
c_rt_lib0move(&___nl__16, compiler_priv0construct_error_message(___nl__10));
#line 547
c_rt_lib0move(&___nl__15, c_rt_lib0concat_add(___nl__15, ___nl__16));
#line 547
c_rt_lib0clear(&___nl__16);
#line 547
c_rt_lib0delete(c_fe_lib0print(___nl__15));
#line 547
c_rt_lib0clear(&___nl__15);
#line 548
c_rt_lib0move(&___nl__11, c_rt_lib0add_mod(___nl__11, ___nl__12));
#line 548
goto label_16;
#line 548
label_14:
#line 548
c_rt_lib0clear(&___nl__10);
#line 548
c_rt_lib0clear(&___nl__11);
#line 548
c_rt_lib0clear(&___nl__12);
#line 548
c_rt_lib0clear(&___nl__13);
#line 548
c_rt_lib0clear(&___nl__14);
#line 549
c_rt_lib0move(&___nl__10, array0len(___nl__9));
#line 549
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__10));
#line 549
c_rt_lib0clear(&___nl__10);
#line 550
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(27)));
#line 550
c_rt_lib0move(&___nl__10, hash0has_key(___nl__11, ___nl__5));
#line 550
c_rt_lib0clear(&___nl__11);
#line 550
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 550
if(c_rt_lib0check_true_native(___nl__10)){ goto label_18;}
#line 551
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(27)));
#line 551
c_rt_lib0move(&___nl__11, hash0get_value(___nl__12, ___nl__5));
#line 551
c_rt_lib0clear(&___nl__12);
#line 552
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 552
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 552
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 552
label_21:
#line 552
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 552
if(c_rt_lib0check_true_native(___nl__16)){ goto label_19;}
#line 552
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 553
c_rt_lib0move(&___nl__17,___get_global_const(118));
#line 553
c_rt_lib0move(&___nl__18, compiler_priv0construct_error_message(___nl__12));
#line 553
c_rt_lib0move(&___nl__17, c_rt_lib0concat_add(___nl__17, ___nl__18));
#line 553
c_rt_lib0clear(&___nl__18);
#line 553
c_rt_lib0delete(c_fe_lib0print(___nl__17));
#line 553
c_rt_lib0clear(&___nl__17);
#line 554
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 554
goto label_21;
#line 554
label_19:
#line 554
c_rt_lib0clear(&___nl__12);
#line 554
c_rt_lib0clear(&___nl__13);
#line 554
c_rt_lib0clear(&___nl__14);
#line 554
c_rt_lib0clear(&___nl__15);
#line 554
c_rt_lib0clear(&___nl__16);
#line 555
c_rt_lib0move(&___nl__12, array0len(___nl__11));
#line 555
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__12));
#line 555
c_rt_lib0clear(&___nl__12);
#line 555
c_rt_lib0clear(&___nl__11);
#line 556
goto label_18;
#line 556
label_18:
#line 556
c_rt_lib0clear(&___nl__10);
#line 556
c_rt_lib0clear(&___nl__8);
#line 556
c_rt_lib0clear(&___nl__9);
#line 557
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 557
goto label_3;
#line 557
label_1:
#line 557
c_rt_lib0clear(&___nl__4);
#line 557
c_rt_lib0clear(&___nl__5);
#line 557
c_rt_lib0clear(&___nl__6);
#line 557
c_rt_lib0clear(&___nl__7);
#line 558
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(29)));
#line 558
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(119)));
#line 558
if(c_rt_lib0check_true_native(___nl__5)){ goto label_23;}
#line 565
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(45)));
#line 565
if(c_rt_lib0check_true_native(___nl__5)){ goto label_24;}
#line 565
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 565
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 565
nl_die_arg(___nl__5);
#line 558
label_23:
#line 558
c_rt_lib0move(&___nl__6, c_rt_lib0priv_as(___nl__4, ___get_global_const(119)));
#line 559
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 560
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 560
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 560
c_rt_lib0move(&___nl__11, c_rt_lib0array_len(___nl__6));
#line 560
label_27:
#line 560
c_rt_lib0move(&___nl__12, c_rt_lib0ge(___nl__9, ___nl__11));
#line 560
if(c_rt_lib0check_true_native(___nl__12)){ goto label_25;}
#line 560
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__6, ___nl__9));
#line 561
c_rt_lib0move(&___nl__13,___get_global_const(120));
#line 561
c_rt_lib0move(&___nl__13, c_rt_lib0concat_new(___nl__8, ___nl__13));
#line 561
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__13));
#line 561
c_rt_lib0clear(&___nl__13);
#line 562
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 562
goto label_27;
#line 562
label_25:
#line 562
c_rt_lib0clear(&___nl__8);
#line 562
c_rt_lib0clear(&___nl__9);
#line 562
c_rt_lib0clear(&___nl__10);
#line 562
c_rt_lib0clear(&___nl__11);
#line 562
c_rt_lib0clear(&___nl__12);
#line 563
c_rt_lib0move(&___nl__8,___get_global_const(121));
#line 563
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__7));
#line 563
c_rt_lib0move(&___nl__9,___get_global_const(122));
#line 563
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__9));
#line 563
c_rt_lib0clear(&___nl__9);
#line 563
c_rt_lib0delete(c_fe_lib0print(___nl__8));
#line 563
c_rt_lib0clear(&___nl__8);
#line 564
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 564
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__8));
#line 564
c_rt_lib0clear(&___nl__8);
#line 564
c_rt_lib0clear(&___nl__7);
#line 564
c_rt_lib0clear(&___nl__6);
#line 565
goto label_22;
#line 565
label_24:
#line 566
goto label_22;
#line 566
label_22:
#line 566
c_rt_lib0clear(&___nl__4);
#line 566
c_rt_lib0clear(&___nl__5);
#line 567
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(66)));
#line 567
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(58)));
#line 567
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 567
if(c_rt_lib0check_true_native(___nl__4)){ goto label_29;}
#line 568
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__2));
#line 569
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 569
c_rt_lib0copy(&___nl__2, ___nl__5);
#line 569
c_rt_lib0clear(&___nl__5);
#line 570
goto label_29;
#line 570
label_29:
#line 570
c_rt_lib0clear(&___nl__4);
#line 571
c_rt_lib0move(&___nl__4,___get_global_const(123));
#line 571
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__3));
#line 571
c_rt_lib0move(&___nl__5,___get_global_const(124));
#line 571
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 571
c_rt_lib0clear(&___nl__5);
#line 571
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__2));
#line 571
c_rt_lib0delete(c_fe_lib0print(___nl__4));
#line 571
c_rt_lib0clear(&___nl__4);
#line 572
c_rt_lib0clear(&___nl__0);
#line 572
c_rt_lib0clear(&___nl__1);
#line 572
c_rt_lib0clear(&___nl__2);
#line 572
return ___nl__3;
#line 572
c_rt_lib0clear(&___nl__2);
#line 572
c_rt_lib0clear(&___nl__3);
#line 572
c_rt_lib0clear(&___nl__0);
#line 572
c_rt_lib0clear(&___nl__1);
#line 572
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
#line 576
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 577
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 577
label_3:
#line 577
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 577
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 577
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 577
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 578
c_rt_lib0move(&___nl__6, translator0translate(___nl__4));
#line 579
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__6));
#line 579
c_rt_lib0clear(&___nl__6);
#line 580
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 580
goto label_3;
#line 580
label_1:
#line 580
c_rt_lib0clear(&___nl__3);
#line 580
c_rt_lib0clear(&___nl__4);
#line 580
c_rt_lib0clear(&___nl__5);
#line 581
c_rt_lib0delete(post_processing0find(___ref___1, &___nl__2));
#line 582
c_rt_lib0clear(&___nl__0);
#line 582
return ___nl__2;
#line 582
c_rt_lib0clear(&___nl__2);
#line 582
c_rt_lib0clear(&___nl__0);
#line 582
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
#line 587
c_rt_lib0move(&___nl__3,___get_global_const(125));
#line 587
c_rt_lib0delete(c_fe_lib0print(___nl__3));
#line 587
c_rt_lib0clear(&___nl__3);
#line 588
c_rt_lib0move(&___nl__3, type_checker0check_modules(___nl__0, ___nl__0));
#line 589
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(17)));
#line 589
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 589
c_rt_lib0clear(&___nl__5);
#line 590
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(17)));
#line 590
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 590
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 590
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 590
label_3:
#line 590
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 590
if(c_rt_lib0check_true_native(___nl__10)){ goto label_1;}
#line 590
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 591
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 592
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(27)));
#line 592
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 592
c_rt_lib0move(&___nl__12, hash0has_key(___nl__13, ___nl__14));
#line 592
c_rt_lib0clear(&___nl__14);
#line 592
c_rt_lib0clear(&___nl__13);
#line 592
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 592
if(c_rt_lib0check_true_native(___nl__12)){ goto label_5;}
#line 593
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(27)));
#line 593
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 593
c_rt_lib0move(&___nl__13, hash0get_value(___nl__14, ___nl__15));
#line 593
c_rt_lib0clear(&___nl__15);
#line 593
c_rt_lib0clear(&___nl__14);
#line 593
c_rt_lib0copy(&___nl__11, ___nl__13);
#line 593
c_rt_lib0clear(&___nl__13);
#line 594
goto label_5;
#line 594
label_5:
#line 594
c_rt_lib0clear(&___nl__12);
#line 595
c_rt_lib0delete(array0push(&___nl__11, ___nl__6));
#line 596
c_rt_lib0move(&___nl__12,___get_global_const(27));
#line 596
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(*___ref___1, ___nl__12));
#line 596
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 596
c_rt_lib0delete(hash0set_value(&___nl__12, ___nl__13, ___nl__11));
#line 596
c_rt_lib0clear(&___nl__13);
#line 596
c_rt_lib0move(&___nl__13,___get_global_const(27));
#line 596
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__12));
#line 596
c_rt_lib0clear(&___nl__13);
#line 596
c_rt_lib0clear(&___nl__12);
#line 596
c_rt_lib0clear(&___nl__11);
#line 597
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 597
goto label_3;
#line 597
label_1:
#line 597
c_rt_lib0clear(&___nl__5);
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
#line 598
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(98)));
#line 598
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 598
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 598
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 598
label_8:
#line 598
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 598
if(c_rt_lib0check_true_native(___nl__10)){ goto label_6;}
#line 598
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 599
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 600
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(28)));
#line 600
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 600
c_rt_lib0move(&___nl__12, hash0has_key(___nl__13, ___nl__14));
#line 600
c_rt_lib0clear(&___nl__14);
#line 600
c_rt_lib0clear(&___nl__13);
#line 600
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 600
if(c_rt_lib0check_true_native(___nl__12)){ goto label_10;}
#line 601
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(*___ref___1, ___get_global_const(28)));
#line 601
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 601
c_rt_lib0move(&___nl__13, hash0get_value(___nl__14, ___nl__15));
#line 601
c_rt_lib0clear(&___nl__15);
#line 601
c_rt_lib0clear(&___nl__14);
#line 601
c_rt_lib0copy(&___nl__11, ___nl__13);
#line 601
c_rt_lib0clear(&___nl__13);
#line 602
goto label_10;
#line 602
label_10:
#line 602
c_rt_lib0clear(&___nl__12);
#line 603
c_rt_lib0delete(array0push(&___nl__11, ___nl__6));
#line 604
c_rt_lib0move(&___nl__12,___get_global_const(28));
#line 604
c_rt_lib0move(&___nl__12, c_rt_lib0get_ref_hash(*___ref___1, ___nl__12));
#line 604
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(111)));
#line 604
c_rt_lib0delete(hash0set_value(&___nl__12, ___nl__13, ___nl__11));
#line 604
c_rt_lib0clear(&___nl__13);
#line 604
c_rt_lib0move(&___nl__13,___get_global_const(28));
#line 604
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___1, ___nl__13, ___nl__12));
#line 604
c_rt_lib0clear(&___nl__13);
#line 604
c_rt_lib0clear(&___nl__12);
#line 604
c_rt_lib0clear(&___nl__11);
#line 605
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 605
goto label_8;
#line 605
label_6:
#line 605
c_rt_lib0clear(&___nl__5);
#line 605
c_rt_lib0clear(&___nl__6);
#line 605
c_rt_lib0clear(&___nl__7);
#line 605
c_rt_lib0clear(&___nl__8);
#line 605
c_rt_lib0clear(&___nl__9);
#line 605
c_rt_lib0clear(&___nl__10);
#line 606
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 606
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 606
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 606
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 606
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 606
c_rt_lib0move(&___nl__6,___get_global_const(126));
#line 606
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__4));
#line 606
c_rt_lib0move(&___nl__7,___get_global_const(127));
#line 606
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 606
c_rt_lib0clear(&___nl__7);
#line 606
c_rt_lib0delete(c_fe_lib0print(___nl__6));
#line 606
c_rt_lib0clear(&___nl__6);
#line 606
goto label_12;
#line 606
label_12:
#line 606
c_rt_lib0clear(&___nl__5);
#line 607
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 608
c_rt_lib0move(&___nl__8, c_rt_lib0init_iter(___nl__0));
#line 608
label_15:
#line 608
c_rt_lib0move(&___nl__6, c_rt_lib0is_end_hash(___nl__8));
#line 608
if(c_rt_lib0check_true_native(___nl__6)){ goto label_13;}
#line 608
c_rt_lib0move(&___nl__6, c_rt_lib0get_key_iter(___nl__8));
#line 608
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value(___nl__0, ___nl__6));
#line 609
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 610
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(128)));
#line 610
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 610
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 610
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 610
label_18:
#line 610
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 610
if(c_rt_lib0check_true_native(___nl__15)){ goto label_16;}
#line 610
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 611
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(78)));
#line 611
c_rt_lib0delete(array0push(&___nl__9, ___nl__16));
#line 611
c_rt_lib0clear(&___nl__16);
#line 612
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 612
goto label_18;
#line 612
label_16:
#line 612
c_rt_lib0clear(&___nl__10);
#line 612
c_rt_lib0clear(&___nl__11);
#line 612
c_rt_lib0clear(&___nl__12);
#line 612
c_rt_lib0clear(&___nl__13);
#line 612
c_rt_lib0clear(&___nl__14);
#line 612
c_rt_lib0clear(&___nl__15);
#line 613
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__6, ___nl__9));
#line 613
c_rt_lib0clear(&___nl__9);
#line 614
c_rt_lib0move(&___nl__8, c_rt_lib0next_iter(___nl__8));
#line 614
goto label_15;
#line 614
label_13:
#line 614
c_rt_lib0clear(&___nl__6);
#line 614
c_rt_lib0clear(&___nl__7);
#line 614
c_rt_lib0clear(&___nl__8);
#line 615
c_rt_lib0move(&___nl__6, module_checker0search_loops(___nl__5));
#line 615
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 615
c_rt_lib0hash_set_value_dec(___ref___1, ___get_global_const(29), ___nl__7);
#line 615
c_rt_lib0clear(&___nl__6);
#line 615
c_rt_lib0clear(&___nl__7);
#line 616
c_rt_lib0copy(&___nl__6, ___nl__2);
#line 616
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(42)));
#line 616
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 616
if(c_rt_lib0check_true_native(___nl__6)){ goto label_20;}
#line 617
c_rt_lib0move(&___nl__7,___get_global_const(129));
#line 617
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(61)));
#line 617
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(130)));
#line 617
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 617
c_rt_lib0clear(&___nl__9);
#line 617
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 617
c_rt_lib0clear(&___nl__8);
#line 617
c_rt_lib0delete(c_fe_lib0print(___nl__7));
#line 617
c_rt_lib0clear(&___nl__7);
#line 618
c_rt_lib0move(&___nl__7,___get_global_const(131));
#line 618
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(61)));
#line 618
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(132)));
#line 618
c_rt_lib0move(&___nl__8, array0len(___nl__9));
#line 618
c_rt_lib0clear(&___nl__9);
#line 618
c_rt_lib0move(&___nl__7, c_rt_lib0concat_add(___nl__7, ___nl__8));
#line 618
c_rt_lib0clear(&___nl__8);
#line 618
c_rt_lib0delete(c_fe_lib0print(___nl__7));
#line 618
c_rt_lib0clear(&___nl__7);
#line 619
c_rt_lib0copy(&___nl__7, ___nl__2);
#line 619
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(42)));
#line 619
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(61)));
#line 619
c_rt_lib0move(&___nl__8, dfile0ssave(___nl__9));
#line 619
c_rt_lib0clear(&___nl__9);
#line 619
c_rt_lib0delete(c_fe_lib0string_to_file(___nl__7, ___nl__8));
#line 619
c_rt_lib0clear(&___nl__8);
#line 619
c_rt_lib0clear(&___nl__7);
#line 620
goto label_20;
#line 620
label_20:
#line 620
c_rt_lib0clear(&___nl__6);
#line 620
c_rt_lib0clear(&___nl__3);
#line 620
c_rt_lib0clear(&___nl__4);
#line 620
c_rt_lib0clear(&___nl__5);
#line 620
c_rt_lib0clear(&___nl__0);
#line 620
c_rt_lib0clear(&___nl__2);
#line 620
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
#line 624
c_rt_lib0move(&___nl__3, c_fe_lib0string_to_file(___nl__1, ___nl__0));
#line 624
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(45)));
#line 624
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 625
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(44)));
#line 625
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 625
c_rt_lib0move(&___nl__4,___get_global_const(76));
#line 625
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 625
nl_die_arg(___nl__4);
#line 624
label_2:
#line 624
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(45)));
#line 624
c_rt_lib0clear(&___nl__5);
#line 625
goto label_1;
#line 625
label_3:
#line 625
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(44)));
#line 626
c_rt_lib0move(&___nl__6,___get_global_const(107));
#line 626
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__5));
#line 626
c_rt_lib0delete(c_fe_lib0print(___nl__6));
#line 626
c_rt_lib0clear(&___nl__6);
#line 627
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
#line 627
c_rt_lib0copy(___ref___2, ___nl__6);
#line 627
c_rt_lib0clear(&___nl__6);
#line 627
c_rt_lib0clear(&___nl__5);
#line 628
goto label_1;
#line 628
label_1:
#line 628
c_rt_lib0clear(&___nl__3);
#line 628
c_rt_lib0clear(&___nl__4);
#line 628
c_rt_lib0clear(&___nl__0);
#line 628
c_rt_lib0clear(&___nl__1);
#line 628
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
#line 636
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(0));
#line 637
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(31)));
#line 637
if(c_rt_lib0check_true_native(___nl__6)){ goto label_2;}
#line 645
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(32)));
#line 645
if(c_rt_lib0check_true_native(___nl__6)){ goto label_3;}
#line 659
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(30)));
#line 659
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 668
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(35)));
#line 668
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 677
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(36)));
#line 677
if(c_rt_lib0check_true_native(___nl__6)){ goto label_6;}
#line 686
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(33)));
#line 686
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 688
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__4, ___get_global_const(34)));
#line 688
if(c_rt_lib0check_true_native(___nl__6)){ goto label_8;}
#line 688
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 688
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__4));
#line 688
nl_die_arg(___nl__6);
#line 637
label_2:
#line 638
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 638
label_11:
#line 638
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 638
if(c_rt_lib0check_true_native(___nl__7)){ goto label_9;}
#line 638
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 638
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 639
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 640
c_rt_lib0move(&___nl__11, hash0get_value(___nl__1, ___nl__7));
#line 640
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(41)));
#line 640
c_rt_lib0move(&___nl__11, c_rt_lib0priv_as(___nl__11, ___get_global_const(31)));
#line 641
c_rt_lib0move(&___nl__12,___get_global_const(106));
#line 641
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__7));
#line 641
c_rt_lib0delete(c_fe_lib0print(___nl__12));
#line 641
c_rt_lib0clear(&___nl__12);
#line 642
c_rt_lib0move(&___nl__12, dfile0ssave(___nl__8));
#line 642
c_rt_lib0delete(compiler_priv0try_save_file(___nl__12, ___nl__11, &___nl__10));
#line 642
c_rt_lib0clear(&___nl__12);
#line 643
c_rt_lib0copy(&___nl__12, ___nl__10);
#line 643
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 643
if(c_rt_lib0check_true_native(___nl__12)){ goto label_13;}
#line 643
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 643
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__13));
#line 643
c_rt_lib0clear(&___nl__13);
#line 643
goto label_13;
#line 643
label_13:
#line 643
c_rt_lib0clear(&___nl__12);
#line 643
c_rt_lib0clear(&___nl__10);
#line 643
c_rt_lib0clear(&___nl__11);
#line 644
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 644
goto label_11;
#line 644
label_9:
#line 644
c_rt_lib0clear(&___nl__7);
#line 644
c_rt_lib0clear(&___nl__8);
#line 644
c_rt_lib0clear(&___nl__9);
#line 645
goto label_1;
#line 645
label_3:
#line 646
c_rt_lib0move(&___nl__7, generator_c0generate(___nl__0, ___ref___3));
#line 647
c_rt_lib0move(&___nl__8, c_rt_lib0get_false());
#line 648
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(133)));
#line 648
c_rt_lib0move(&___nl__12, c_rt_lib0init_iter(___nl__9));
#line 648
label_16:
#line 648
c_rt_lib0move(&___nl__10, c_rt_lib0is_end_hash(___nl__12));
#line 648
if(c_rt_lib0check_true_native(___nl__10)){ goto label_14;}
#line 648
c_rt_lib0move(&___nl__10, c_rt_lib0get_key_iter(___nl__12));
#line 648
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value(___nl__9, ___nl__10));
#line 649
c_rt_lib0move(&___nl__13, c_rt_lib0get_false());
#line 649
c_rt_lib0copy(&___nl__8, ___nl__13);
#line 649
c_rt_lib0clear(&___nl__13);
#line 650
c_rt_lib0move(&___nl__13, hash0get_value(___nl__1, ___nl__10));
#line 650
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(41)));
#line 650
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(32)));
#line 651
c_rt_lib0move(&___nl__14,___get_global_const(106));
#line 651
c_rt_lib0move(&___nl__14, c_rt_lib0concat_add(___nl__14, ___nl__10));
#line 651
c_rt_lib0delete(c_fe_lib0print(___nl__14));
#line 651
c_rt_lib0clear(&___nl__14);
#line 652
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(32)));
#line 652
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(32)));
#line 652
c_rt_lib0delete(compiler_priv0try_save_file(___nl__14, ___nl__15, &___nl__8));
#line 652
c_rt_lib0clear(&___nl__15);
#line 652
c_rt_lib0clear(&___nl__14);
#line 653
c_rt_lib0move(&___nl__14, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(37)));
#line 653
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(37)));
#line 653
c_rt_lib0delete(compiler_priv0try_save_file(___nl__14, ___nl__15, &___nl__8));
#line 653
c_rt_lib0clear(&___nl__15);
#line 653
c_rt_lib0clear(&___nl__14);
#line 654
c_rt_lib0copy(&___nl__14, ___nl__8);
#line 654
c_rt_lib0move(&___nl__14, c_rt_lib0not(___nl__14));
#line 654
if(c_rt_lib0check_true_native(___nl__14)){ goto label_18;}
#line 654
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 654
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__10, ___nl__15));
#line 654
c_rt_lib0clear(&___nl__15);
#line 654
goto label_18;
#line 654
label_18:
#line 654
c_rt_lib0clear(&___nl__14);
#line 654
c_rt_lib0clear(&___nl__13);
#line 655
c_rt_lib0move(&___nl__12, c_rt_lib0next_iter(___nl__12));
#line 655
goto label_16;
#line 655
label_14:
#line 655
c_rt_lib0clear(&___nl__9);
#line 655
c_rt_lib0clear(&___nl__10);
#line 655
c_rt_lib0clear(&___nl__11);
#line 655
c_rt_lib0clear(&___nl__12);
#line 656
c_rt_lib0move(&___nl__9,___get_global_const(134));
#line 656
c_rt_lib0delete(c_fe_lib0print(___nl__9));
#line 656
c_rt_lib0clear(&___nl__9);
#line 657
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(135)));
#line 657
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(32)));
#line 657
c_rt_lib0move(&___nl__10,___get_global_const(136));
#line 657
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__2, ___nl__10));
#line 657
c_rt_lib0delete(compiler_priv0try_save_file(___nl__9, ___nl__10, &___nl__8));
#line 657
c_rt_lib0clear(&___nl__10);
#line 657
c_rt_lib0clear(&___nl__9);
#line 658
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(135)));
#line 658
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(37)));
#line 658
c_rt_lib0move(&___nl__10,___get_global_const(137));
#line 658
c_rt_lib0move(&___nl__10, c_rt_lib0concat_new(___nl__2, ___nl__10));
#line 658
c_rt_lib0delete(compiler_priv0try_save_file(___nl__9, ___nl__10, &___nl__8));
#line 658
c_rt_lib0clear(&___nl__10);
#line 658
c_rt_lib0clear(&___nl__9);
#line 658
c_rt_lib0clear(&___nl__7);
#line 658
c_rt_lib0clear(&___nl__8);
#line 659
goto label_1;
#line 659
label_4:
#line 660
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 660
label_21:
#line 660
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 660
if(c_rt_lib0check_true_native(___nl__7)){ goto label_19;}
#line 660
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 660
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 661
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 662
c_rt_lib0move(&___nl__11, generator_pm0generate(___nl__8));
#line 663
c_rt_lib0move(&___nl__12, hash0get_value(___nl__1, ___nl__7));
#line 663
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(41)));
#line 663
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(30)));
#line 664
c_rt_lib0move(&___nl__13,___get_global_const(106));
#line 664
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__7));
#line 664
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 664
c_rt_lib0clear(&___nl__13);
#line 665
c_rt_lib0delete(compiler_priv0try_save_file(___nl__11, ___nl__12, &___nl__10));
#line 666
c_rt_lib0copy(&___nl__13, ___nl__10);
#line 666
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 666
if(c_rt_lib0check_true_native(___nl__13)){ goto label_23;}
#line 666
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 666
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__14));
#line 666
c_rt_lib0clear(&___nl__14);
#line 666
goto label_23;
#line 666
label_23:
#line 666
c_rt_lib0clear(&___nl__13);
#line 666
c_rt_lib0clear(&___nl__10);
#line 666
c_rt_lib0clear(&___nl__11);
#line 666
c_rt_lib0clear(&___nl__12);
#line 667
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 667
goto label_21;
#line 667
label_19:
#line 667
c_rt_lib0clear(&___nl__7);
#line 667
c_rt_lib0clear(&___nl__8);
#line 667
c_rt_lib0clear(&___nl__9);
#line 668
goto label_1;
#line 668
label_5:
#line 669
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 669
label_26:
#line 669
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 669
if(c_rt_lib0check_true_native(___nl__7)){ goto label_24;}
#line 669
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 669
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 670
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 671
c_rt_lib0move(&___nl__11, generator_js0generate(___nl__8));
#line 672
c_rt_lib0move(&___nl__12, hash0get_value(___nl__1, ___nl__7));
#line 672
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(41)));
#line 672
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(35)));
#line 673
c_rt_lib0move(&___nl__13,___get_global_const(106));
#line 673
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__7));
#line 673
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 673
c_rt_lib0clear(&___nl__13);
#line 674
c_rt_lib0delete(compiler_priv0try_save_file(___nl__11, ___nl__12, &___nl__10));
#line 675
c_rt_lib0copy(&___nl__13, ___nl__10);
#line 675
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 675
if(c_rt_lib0check_true_native(___nl__13)){ goto label_28;}
#line 675
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 675
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__14));
#line 675
c_rt_lib0clear(&___nl__14);
#line 675
goto label_28;
#line 675
label_28:
#line 675
c_rt_lib0clear(&___nl__13);
#line 675
c_rt_lib0clear(&___nl__10);
#line 675
c_rt_lib0clear(&___nl__11);
#line 675
c_rt_lib0clear(&___nl__12);
#line 676
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 676
goto label_26;
#line 676
label_24:
#line 676
c_rt_lib0clear(&___nl__7);
#line 676
c_rt_lib0clear(&___nl__8);
#line 676
c_rt_lib0clear(&___nl__9);
#line 677
goto label_1;
#line 677
label_6:
#line 678
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__0));
#line 678
label_31:
#line 678
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 678
if(c_rt_lib0check_true_native(___nl__7)){ goto label_29;}
#line 678
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 678
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__0, ___nl__7));
#line 679
c_rt_lib0move(&___nl__10, c_rt_lib0get_false());
#line 680
c_rt_lib0move(&___nl__11, generator_java0generate(___nl__8));
#line 681
c_rt_lib0move(&___nl__12, hash0get_value(___nl__1, ___nl__7));
#line 681
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__12, ___get_global_const(41)));
#line 681
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__12, ___get_global_const(36)));
#line 682
c_rt_lib0move(&___nl__13,___get_global_const(106));
#line 682
c_rt_lib0move(&___nl__13, c_rt_lib0concat_add(___nl__13, ___nl__7));
#line 682
c_rt_lib0delete(c_fe_lib0print(___nl__13));
#line 682
c_rt_lib0clear(&___nl__13);
#line 683
c_rt_lib0delete(compiler_priv0try_save_file(___nl__11, ___nl__12, &___nl__10));
#line 684
c_rt_lib0copy(&___nl__13, ___nl__10);
#line 684
c_rt_lib0move(&___nl__13, c_rt_lib0not(___nl__13));
#line 684
if(c_rt_lib0check_true_native(___nl__13)){ goto label_33;}
#line 684
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 684
c_rt_lib0delete(hash0set_value(&___nl__5, ___nl__7, ___nl__14));
#line 684
c_rt_lib0clear(&___nl__14);
#line 684
goto label_33;
#line 684
label_33:
#line 684
c_rt_lib0clear(&___nl__13);
#line 684
c_rt_lib0clear(&___nl__10);
#line 684
c_rt_lib0clear(&___nl__11);
#line 684
c_rt_lib0clear(&___nl__12);
#line 685
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 685
goto label_31;
#line 685
label_29:
#line 685
c_rt_lib0clear(&___nl__7);
#line 685
c_rt_lib0clear(&___nl__8);
#line 685
c_rt_lib0clear(&___nl__9);
#line 686
goto label_1;
#line 686
label_7:
#line 687
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 687
nl_die_arg(___nl__7);
#line 687
c_rt_lib0clear(&___nl__7);
#line 688
goto label_1;
#line 688
label_8:
#line 689
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(0));
#line 689
nl_die_arg(___nl__7);
#line 689
c_rt_lib0clear(&___nl__7);
#line 690
goto label_1;
#line 690
label_1:
#line 690
c_rt_lib0clear(&___nl__6);
#line 691
c_rt_lib0move(&___nl__6, hash0size(___nl__5));
#line 691
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 691
c_rt_lib0move(&___nl__6, c_rt_lib0gt(___nl__6, ___nl__7));
#line 691
c_rt_lib0clear(&___nl__7);
#line 691
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 691
if(c_rt_lib0check_true_native(___nl__6)){ goto label_35;}
#line 692
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
#line 692
c_rt_lib0clear(&___nl__0);
#line 692
c_rt_lib0clear(&___nl__1);
#line 692
c_rt_lib0clear(&___nl__2);
#line 692
c_rt_lib0clear(&___nl__4);
#line 692
c_rt_lib0clear(&___nl__5);
#line 692
c_rt_lib0clear(&___nl__6);
#line 692
return ___nl__7;
#line 692
c_rt_lib0clear(&___nl__7);
#line 693
goto label_34;
#line 693
label_35:
#line 694
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 694
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__7));
#line 694
c_rt_lib0clear(&___nl__0);
#line 694
c_rt_lib0clear(&___nl__1);
#line 694
c_rt_lib0clear(&___nl__2);
#line 694
c_rt_lib0clear(&___nl__4);
#line 694
c_rt_lib0clear(&___nl__5);
#line 694
c_rt_lib0clear(&___nl__6);
#line 694
return ___nl__7;
#line 694
c_rt_lib0clear(&___nl__7);
#line 695
goto label_34;
#line 695
label_34:
#line 695
c_rt_lib0clear(&___nl__6);
#line 695
c_rt_lib0clear(&___nl__5);
#line 695
c_rt_lib0clear(&___nl__0);
#line 695
c_rt_lib0clear(&___nl__1);
#line 695
c_rt_lib0clear(&___nl__2);
#line 695
c_rt_lib0clear(&___nl__4);
#line 695
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
#line 699
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(31)));
#line 699
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 701
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(32)));
#line 701
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 703
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(30)));
#line 703
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 705
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(35)));
#line 705
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 707
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(36)));
#line 707
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 709
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(33)));
#line 709
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 711
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(34)));
#line 711
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 713
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__1, ___get_global_const(38)));
#line 713
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 713
c_rt_lib0move(&___nl__2,___get_global_const(76));
#line 713
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(2, ___nl__2, ___nl__1));
#line 713
nl_die_arg(___nl__2);
#line 699
label_2:
#line 699
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(31)));
#line 700
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 700
nl_die_arg(___nl__4);
#line 700
c_rt_lib0clear(&___nl__4);
#line 700
c_rt_lib0clear(&___nl__3);
#line 701
goto label_1;
#line 701
label_3:
#line 701
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(32)));
#line 702
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 702
nl_die_arg(___nl__4);
#line 702
c_rt_lib0clear(&___nl__4);
#line 702
c_rt_lib0clear(&___nl__3);
#line 703
goto label_1;
#line 703
label_4:
#line 703
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(30)));
#line 704
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 704
nl_die_arg(___nl__4);
#line 704
c_rt_lib0clear(&___nl__4);
#line 704
c_rt_lib0clear(&___nl__3);
#line 705
goto label_1;
#line 705
label_5:
#line 705
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(35)));
#line 706
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 706
nl_die_arg(___nl__4);
#line 706
c_rt_lib0clear(&___nl__4);
#line 706
c_rt_lib0clear(&___nl__3);
#line 707
goto label_1;
#line 707
label_6:
#line 707
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(36)));
#line 708
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(0));
#line 708
nl_die_arg(___nl__4);
#line 708
c_rt_lib0clear(&___nl__4);
#line 708
c_rt_lib0clear(&___nl__3);
#line 709
goto label_1;
#line 709
label_7:
#line 709
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(33)));
#line 710
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_const(21), ___get_global_const(138)));
#line 710
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 710
c_rt_lib0move(&___nl__7, pretty_printer0print_module_to_str(___nl__0));
#line 710
c_rt_lib0move(&___nl__6, c_fe_lib0string_to_file(___nl__3, ___nl__7));
#line 710
c_rt_lib0clear(&___nl__7);
#line 710
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 710
c_rt_lib0clear(&___nl__6);
#line 710
c_rt_lib0clear(&___nl__5);
#line 710
c_rt_lib0clear(&___nl__0);
#line 710
c_rt_lib0clear(&___nl__1);
#line 710
c_rt_lib0clear(&___nl__2);
#line 710
c_rt_lib0clear(&___nl__3);
#line 710
return ___nl__4;
#line 710
c_rt_lib0clear(&___nl__4);
#line 710
c_rt_lib0clear(&___nl__3);
#line 711
goto label_1;
#line 711
label_8:
#line 711
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__1, ___get_global_const(34)));
#line 712
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(compiler0file_t0ptr, ___get_global_const(21), ___get_global_const(138)));
#line 712
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 712
c_rt_lib0move(&___nl__7, dfile0ssave(___nl__0));
#line 712
c_rt_lib0move(&___nl__6, c_fe_lib0string_to_file(___nl__3, ___nl__7));
#line 712
c_rt_lib0clear(&___nl__7);
#line 712
c_rt_lib0move(&___nl__4, ptd0ensure(___nl__5, ___nl__6));
#line 712
c_rt_lib0clear(&___nl__6);
#line 712
c_rt_lib0clear(&___nl__5);
#line 712
c_rt_lib0clear(&___nl__0);
#line 712
c_rt_lib0clear(&___nl__1);
#line 712
c_rt_lib0clear(&___nl__2);
#line 712
c_rt_lib0clear(&___nl__3);
#line 712
return ___nl__4;
#line 712
c_rt_lib0clear(&___nl__4);
#line 712
c_rt_lib0clear(&___nl__3);
#line 713
goto label_1;
#line 713
label_9:
#line 714
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 714
nl_die_arg(___nl__3);
#line 714
c_rt_lib0clear(&___nl__3);
#line 715
goto label_1;
#line 715
label_1:
#line 715
c_rt_lib0clear(&___nl__2);
#line 715
c_rt_lib0clear(&___nl__0);
#line 715
c_rt_lib0clear(&___nl__1);
#line 715
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
#line 719
c_rt_lib0move(&___nl__1, string0length(___nl__0));
#line 719
c_rt_lib0move(&___nl__2,___get_global_const(2));
#line 719
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 719
c_rt_lib0clear(&___nl__2);
#line 720
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 720
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__3));
#line 720
c_rt_lib0clear(&___nl__3);
#line 720
c_rt_lib0move(&___nl__3,___get_global_const(81));
#line 720
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 720
c_rt_lib0clear(&___nl__3);
#line 720
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 720
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 720
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__3));
#line 720
c_rt_lib0clear(&___nl__3);
#line 720
c_rt_lib0move(&___nl__3,___get_global_const(82));
#line 720
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 720
c_rt_lib0clear(&___nl__3);
#line 720
label_3:
#line 720
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 720
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 720
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 720
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 720
c_rt_lib0clear(&___nl__3);
#line 720
goto label_2;
#line 720
label_2:
#line 720
c_rt_lib0clear(&___nl__2);
#line 721
label_5:
#line 721
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 721
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 721
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__2));
#line 721
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 721
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 721
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__5));
#line 721
c_rt_lib0clear(&___nl__5);
#line 721
c_rt_lib0move(&___nl__5,___get_global_const(81));
#line 721
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__5));
#line 721
c_rt_lib0clear(&___nl__5);
#line 721
label_7:
#line 721
c_rt_lib0clear(&___nl__4);
#line 721
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 721
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 721
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 721
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__1, ___nl__4));
#line 721
c_rt_lib0clear(&___nl__4);
#line 721
c_rt_lib0move(&___nl__4,___get_global_const(82));
#line 721
c_rt_lib0move(&___nl__2, c_rt_lib0ne(___nl__2, ___nl__4));
#line 721
c_rt_lib0clear(&___nl__4);
#line 721
label_6:
#line 721
c_rt_lib0clear(&___nl__3);
#line 721
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 721
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 721
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 721
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__3));
#line 721
c_rt_lib0clear(&___nl__3);
#line 721
goto label_5;
#line 721
label_4:
#line 721
c_rt_lib0clear(&___nl__2);
#line 722
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 722
c_rt_lib0move(&___nl__2, c_rt_lib0le(___nl__1, ___nl__2));
#line 722
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 722
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 722
c_rt_lib0move(&___nl__3,___get_global_const(83));
#line 722
c_rt_lib0clear(&___nl__0);
#line 722
c_rt_lib0clear(&___nl__1);
#line 722
c_rt_lib0clear(&___nl__2);
#line 722
return ___nl__3;
#line 722
c_rt_lib0clear(&___nl__3);
#line 722
goto label_9;
#line 722
label_9:
#line 722
c_rt_lib0clear(&___nl__2);
#line 723
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 723
c_rt_lib0move(&___nl__2, string0substr(___nl__0, ___nl__3, ___nl__1));
#line 723
c_rt_lib0clear(&___nl__3);
#line 723
c_rt_lib0clear(&___nl__0);
#line 723
c_rt_lib0clear(&___nl__1);
#line 723
return ___nl__2;
#line 723
c_rt_lib0clear(&___nl__2);
#line 723
c_rt_lib0clear(&___nl__1);
#line 723
c_rt_lib0clear(&___nl__0);
#line 723
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
#line 727
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(32)));
#line 727
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(52)));
#line 727
c_rt_lib0move(&___nl__5,___get_global_const(83));
#line 727
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 727
c_rt_lib0clear(&___nl__5);
#line 727
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 727
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_none(___get_global_const(43)));
#line 727
c_rt_lib0move(&___nl__7, compiler_priv0get_default_math_file());
#line 727
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 727
c_rt_lib0move(&___nl__9, c_rt_lib0ov_mk_none(___get_global_const(57)));
#line 727
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(8, ___get_global_const(65), ___nl__2, ___get_global_const(64), ___nl__3, ___get_global_const(59), ___nl__4, ___get_global_const(62), ___nl__5, ___get_global_const(61), ___nl__6, ___get_global_const(63), ___nl__7, ___get_global_const(60), ___nl__8, ___get_global_const(66), ___nl__9));
#line 727
c_rt_lib0clear(&___nl__2);
#line 727
c_rt_lib0clear(&___nl__3);
#line 727
c_rt_lib0clear(&___nl__4);
#line 727
c_rt_lib0clear(&___nl__5);
#line 727
c_rt_lib0clear(&___nl__6);
#line 727
c_rt_lib0clear(&___nl__7);
#line 727
c_rt_lib0clear(&___nl__8);
#line 727
c_rt_lib0clear(&___nl__9);
#line 737
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 738
c_rt_lib0move(&___nl__3, compiler_priv0get_dir_cache_name());
#line 739
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 739
label_2:
#line 739
c_rt_lib0move(&___nl__5, array0len(___nl__0));
#line 739
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__4, ___nl__5));
#line 739
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 739
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 740
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 741
c_rt_lib0move(&___nl__7, string0length(___nl__6));
#line 741
c_rt_lib0move(&___nl__9,___get_global_const(139));
#line 741
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__7, ___nl__9));
#line 741
c_rt_lib0clear(&___nl__9);
#line 741
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__7));
#line 741
if(c_rt_lib0check_true_native(___nl__8)){ goto label_6;}
#line 741
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 741
c_rt_lib0move(&___nl__10,___get_global_const(139));
#line 741
c_rt_lib0move(&___nl__7, string0substr(___nl__6, ___nl__9, ___nl__10));
#line 741
c_rt_lib0clear(&___nl__10);
#line 741
c_rt_lib0clear(&___nl__9);
#line 741
c_rt_lib0move(&___nl__9,___get_global_const(140));
#line 741
c_rt_lib0move(&___nl__7, c_rt_lib0eq(___nl__7, ___nl__9));
#line 741
c_rt_lib0clear(&___nl__9);
#line 741
label_6:
#line 741
c_rt_lib0clear(&___nl__8);
#line 741
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 741
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 742
c_rt_lib0move(&___nl__9,___get_global_const(139));
#line 742
c_rt_lib0move(&___nl__10, string0length(___nl__6));
#line 742
c_rt_lib0move(&___nl__11,___get_global_const(139));
#line 742
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__11));
#line 742
c_rt_lib0clear(&___nl__11);
#line 742
c_rt_lib0move(&___nl__8, string0substr(___nl__6, ___nl__9, ___nl__10));
#line 742
c_rt_lib0clear(&___nl__10);
#line 742
c_rt_lib0clear(&___nl__9);
#line 743
c_rt_lib0move(&___nl__9,___get_global_const(61));
#line 743
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 743
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 743
if(c_rt_lib0check_true_native(___nl__9)){ goto label_8;}
#line 744
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 744
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(42), ___nl__10));
#line 744
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 744
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(61), ___nl__11);
#line 744
c_rt_lib0clear(&___nl__10);
#line 744
c_rt_lib0clear(&___nl__11);
#line 745
goto label_7;
#line 745
label_8:
#line 745
c_rt_lib0move(&___nl__9,___get_global_const(31));
#line 745
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 745
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 745
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 746
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(31)));
#line 746
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 746
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 746
c_rt_lib0clear(&___nl__10);
#line 746
c_rt_lib0clear(&___nl__11);
#line 747
goto label_7;
#line 747
label_9:
#line 747
c_rt_lib0move(&___nl__9,___get_global_const(34));
#line 747
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 747
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 747
if(c_rt_lib0check_true_native(___nl__9)){ goto label_10;}
#line 748
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(34)));
#line 748
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 748
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 748
c_rt_lib0clear(&___nl__10);
#line 748
c_rt_lib0clear(&___nl__11);
#line 749
goto label_7;
#line 749
label_10:
#line 749
c_rt_lib0move(&___nl__9,___get_global_const(30));
#line 749
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 749
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 749
if(c_rt_lib0check_true_native(___nl__9)){ goto label_11;}
#line 750
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(30)));
#line 750
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 750
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 750
c_rt_lib0clear(&___nl__10);
#line 750
c_rt_lib0clear(&___nl__11);
#line 751
goto label_7;
#line 751
label_11:
#line 751
c_rt_lib0move(&___nl__9,___get_global_const(32));
#line 751
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 751
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 751
if(c_rt_lib0check_true_native(___nl__9)){ goto label_12;}
#line 752
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(32)));
#line 752
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 752
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 752
c_rt_lib0clear(&___nl__10);
#line 752
c_rt_lib0clear(&___nl__11);
#line 753
goto label_7;
#line 753
label_12:
#line 753
c_rt_lib0move(&___nl__9,___get_global_const(35));
#line 753
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 753
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 753
if(c_rt_lib0check_true_native(___nl__9)){ goto label_13;}
#line 754
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(35)));
#line 754
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 754
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 754
c_rt_lib0clear(&___nl__10);
#line 754
c_rt_lib0clear(&___nl__11);
#line 755
goto label_7;
#line 755
label_13:
#line 755
c_rt_lib0move(&___nl__9,___get_global_const(36));
#line 755
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 755
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 755
if(c_rt_lib0check_true_native(___nl__9)){ goto label_14;}
#line 756
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(36)));
#line 756
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 756
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 756
c_rt_lib0clear(&___nl__10);
#line 756
c_rt_lib0clear(&___nl__11);
#line 757
goto label_7;
#line 757
label_14:
#line 757
c_rt_lib0move(&___nl__9,___get_global_const(33));
#line 757
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 757
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 757
if(c_rt_lib0check_true_native(___nl__9)){ goto label_15;}
#line 758
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(33)));
#line 758
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 758
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(65), ___nl__11);
#line 758
c_rt_lib0clear(&___nl__10);
#line 758
c_rt_lib0clear(&___nl__11);
#line 759
c_rt_lib0move(&___nl__10, compiler_priv0get_dir_pretty_name());
#line 759
c_rt_lib0copy(&___nl__3, ___nl__10);
#line 759
c_rt_lib0clear(&___nl__10);
#line 760
goto label_7;
#line 760
label_15:
#line 760
c_rt_lib0move(&___nl__9,___get_global_const(54));
#line 760
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 760
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 760
if(c_rt_lib0check_true_native(___nl__9)){ goto label_16;}
#line 761
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(54)));
#line 761
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 761
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 761
c_rt_lib0clear(&___nl__10);
#line 761
c_rt_lib0clear(&___nl__11);
#line 762
goto label_7;
#line 762
label_16:
#line 762
c_rt_lib0move(&___nl__9,___get_global_const(55));
#line 762
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 762
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 762
if(c_rt_lib0check_true_native(___nl__9)){ goto label_17;}
#line 763
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 763
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 763
c_rt_lib0clear(&___nl__10);
#line 764
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 764
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 764
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 764
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 764
if(c_rt_lib0check_true_native(___nl__10)){ goto label_19;}
#line 764
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 764
nl_die_arg(___nl__11);
#line 764
goto label_19;
#line 764
label_19:
#line 764
c_rt_lib0clear(&___nl__10);
#line 764
c_rt_lib0clear(&___nl__11);
#line 765
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 765
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_arg(___get_global_const(55), ___nl__10));
#line 765
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 765
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 765
c_rt_lib0clear(&___nl__10);
#line 765
c_rt_lib0clear(&___nl__11);
#line 766
goto label_7;
#line 766
label_17:
#line 766
c_rt_lib0move(&___nl__9,___get_global_const(52));
#line 766
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 766
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 766
if(c_rt_lib0check_true_native(___nl__9)){ goto label_20;}
#line 767
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(52)));
#line 767
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 767
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 767
c_rt_lib0clear(&___nl__10);
#line 767
c_rt_lib0clear(&___nl__11);
#line 768
goto label_7;
#line 768
label_20:
#line 768
c_rt_lib0move(&___nl__9,___get_global_const(53));
#line 768
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 768
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 768
if(c_rt_lib0check_true_native(___nl__9)){ goto label_21;}
#line 769
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(53)));
#line 769
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 769
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(64), ___nl__11);
#line 769
c_rt_lib0clear(&___nl__10);
#line 769
c_rt_lib0clear(&___nl__11);
#line 770
goto label_7;
#line 770
label_21:
#line 770
c_rt_lib0move(&___nl__9,___get_global_const(141));
#line 770
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 770
if(c_rt_lib0check_true_native(___nl__9)){ goto label_23;}
#line 770
c_rt_lib0move(&___nl__9,___get_global_const(142));
#line 770
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 770
label_23:
#line 770
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 770
if(c_rt_lib0check_true_native(___nl__9)){ goto label_22;}
#line 771
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 771
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 771
c_rt_lib0clear(&___nl__10);
#line 772
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 772
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 772
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 772
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 772
if(c_rt_lib0check_true_native(___nl__10)){ goto label_25;}
#line 772
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 772
nl_die_arg(___nl__11);
#line 772
goto label_25;
#line 772
label_25:
#line 772
c_rt_lib0clear(&___nl__10);
#line 772
c_rt_lib0clear(&___nl__11);
#line 773
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 773
c_rt_lib0move(&___nl__11,___get_global_const(81));
#line 773
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 773
c_rt_lib0clear(&___nl__11);
#line 773
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 773
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(60), ___nl__11);
#line 773
c_rt_lib0clear(&___nl__10);
#line 773
c_rt_lib0clear(&___nl__11);
#line 774
goto label_7;
#line 774
label_22:
#line 774
c_rt_lib0move(&___nl__9,___get_global_const(143));
#line 774
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 774
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 774
if(c_rt_lib0check_true_native(___nl__9)){ goto label_26;}
#line 775
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 775
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__10));
#line 775
c_rt_lib0clear(&___nl__10);
#line 776
c_rt_lib0move(&___nl__10, array0len(___nl__0));
#line 776
c_rt_lib0move(&___nl__10, c_rt_lib0lt(___nl__4, ___nl__10));
#line 776
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 776
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 776
if(c_rt_lib0check_true_native(___nl__10)){ goto label_28;}
#line 776
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(0));
#line 776
nl_die_arg(___nl__11);
#line 776
goto label_28;
#line 776
label_28:
#line 776
c_rt_lib0clear(&___nl__10);
#line 776
c_rt_lib0clear(&___nl__11);
#line 777
c_rt_lib0move(&___nl__10, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 777
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 777
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(63), ___nl__11);
#line 777
c_rt_lib0clear(&___nl__10);
#line 777
c_rt_lib0clear(&___nl__11);
#line 778
goto label_7;
#line 778
label_26:
#line 778
c_rt_lib0move(&___nl__9,___get_global_const(144));
#line 778
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 778
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 778
if(c_rt_lib0check_true_native(___nl__9)){ goto label_29;}
#line 779
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 779
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 779
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(62), ___nl__11);
#line 779
c_rt_lib0clear(&___nl__10);
#line 779
c_rt_lib0clear(&___nl__11);
#line 780
goto label_7;
#line 780
label_29:
#line 780
c_rt_lib0move(&___nl__9,___get_global_const(145));
#line 780
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 780
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 780
if(c_rt_lib0check_true_native(___nl__9)){ goto label_30;}
#line 781
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(48)));
#line 781
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 781
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(62), ___nl__11);
#line 781
c_rt_lib0clear(&___nl__10);
#line 781
c_rt_lib0clear(&___nl__11);
#line 782
goto label_7;
#line 782
label_30:
#line 782
c_rt_lib0move(&___nl__9,___get_global_const(146));
#line 782
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 782
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 782
if(c_rt_lib0check_true_native(___nl__9)){ goto label_31;}
#line 783
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(49)));
#line 783
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 783
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(62), ___nl__11);
#line 783
c_rt_lib0clear(&___nl__10);
#line 783
c_rt_lib0clear(&___nl__11);
#line 784
goto label_7;
#line 784
label_31:
#line 784
c_rt_lib0move(&___nl__9,___get_global_const(147));
#line 784
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 784
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 784
if(c_rt_lib0check_true_native(___nl__9)){ goto label_32;}
#line 785
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(50)));
#line 785
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 785
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(62), ___nl__11);
#line 785
c_rt_lib0clear(&___nl__10);
#line 785
c_rt_lib0clear(&___nl__11);
#line 786
goto label_7;
#line 786
label_32:
#line 786
c_rt_lib0move(&___nl__9,___get_global_const(148));
#line 786
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 786
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 786
if(c_rt_lib0check_true_native(___nl__9)){ goto label_33;}
#line 787
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(51)));
#line 787
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 787
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(62), ___nl__11);
#line 787
c_rt_lib0clear(&___nl__10);
#line 787
c_rt_lib0clear(&___nl__11);
#line 788
goto label_7;
#line 788
label_33:
#line 788
c_rt_lib0move(&___nl__9,___get_global_const(149));
#line 788
c_rt_lib0move(&___nl__9, c_rt_lib0eq(___nl__8, ___nl__9));
#line 788
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 788
if(c_rt_lib0check_true_native(___nl__9)){ goto label_34;}
#line 789
c_rt_lib0move(&___nl__10, c_rt_lib0ov_mk_none(___get_global_const(58)));
#line 789
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 789
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(66), ___nl__11);
#line 789
c_rt_lib0clear(&___nl__10);
#line 789
c_rt_lib0clear(&___nl__11);
#line 790
goto label_7;
#line 790
label_34:
#line 791
c_rt_lib0move(&___nl__10,___get_global_const(150));
#line 791
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__6));
#line 791
c_rt_lib0delete(c_fe_lib0print(___nl__10));
#line 791
c_rt_lib0clear(&___nl__10);
#line 792
goto label_7;
#line 792
label_7:
#line 792
c_rt_lib0clear(&___nl__9);
#line 792
c_rt_lib0clear(&___nl__8);
#line 793
goto label_4;
#line 793
label_5:
#line 794
c_rt_lib0copy(&___nl__8, ___nl__2);
#line 794
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 794
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 794
if(c_rt_lib0check_true_native(___nl__8)){ goto label_36;}
#line 794
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 794
c_rt_lib0copy(&___nl__10, ___nl__9);
#line 794
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(59), ___nl__10);
#line 794
c_rt_lib0clear(&___nl__9);
#line 794
c_rt_lib0clear(&___nl__10);
#line 794
goto label_36;
#line 794
label_36:
#line 794
c_rt_lib0clear(&___nl__8);
#line 795
c_rt_lib0move(&___nl__8,___get_global_const(59));
#line 795
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__1, ___nl__8));
#line 795
c_rt_lib0delete(array0push(&___nl__8, ___nl__6));
#line 795
c_rt_lib0move(&___nl__9,___get_global_const(59));
#line 795
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__9, ___nl__8));
#line 795
c_rt_lib0clear(&___nl__9);
#line 795
c_rt_lib0clear(&___nl__8);
#line 796
c_rt_lib0move(&___nl__8, c_rt_lib0get_true());
#line 796
c_rt_lib0copy(&___nl__2, ___nl__8);
#line 796
c_rt_lib0clear(&___nl__8);
#line 797
goto label_4;
#line 797
label_4:
#line 797
c_rt_lib0clear(&___nl__7);
#line 797
c_rt_lib0clear(&___nl__6);
#line 797
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 797
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 797
c_rt_lib0clear(&___nl__6);
#line 798
goto label_2;
#line 798
label_1:
#line 798
c_rt_lib0clear(&___nl__4);
#line 798
c_rt_lib0clear(&___nl__5);
#line 799
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(60)));
#line 799
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 799
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 799
c_rt_lib0clear(&___nl__5);
#line 799
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 799
if(c_rt_lib0check_true_native(___nl__4)){ goto label_38;}
#line 800
c_rt_lib0move(&___nl__5,___get_global_const(151));
#line 800
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__3));
#line 800
c_rt_lib0move(&___nl__6,___get_global_const(81));
#line 800
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 800
c_rt_lib0clear(&___nl__6);
#line 800
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 800
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(60), ___nl__6);
#line 800
c_rt_lib0clear(&___nl__5);
#line 800
c_rt_lib0clear(&___nl__6);
#line 801
goto label_38;
#line 801
label_38:
#line 801
c_rt_lib0clear(&___nl__4);
#line 802
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(61)));
#line 802
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__4, ___get_global_const(42)));
#line 802
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 802
if(c_rt_lib0check_true_native(___nl__4)){ goto label_40;}
#line 802
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(60)));
#line 802
c_rt_lib0move(&___nl__6, compiler_priv0get_default_deref_file());
#line 802
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__6));
#line 802
c_rt_lib0clear(&___nl__6);
#line 802
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(42), ___nl__5));
#line 802
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 802
c_rt_lib0hash_set_value_dec(&___nl__1, ___get_global_const(61), ___nl__6);
#line 802
c_rt_lib0clear(&___nl__5);
#line 802
c_rt_lib0clear(&___nl__6);
#line 802
goto label_40;
#line 802
label_40:
#line 802
c_rt_lib0clear(&___nl__4);
#line 803
c_rt_lib0clear(&___nl__0);
#line 803
c_rt_lib0clear(&___nl__2);
#line 803
c_rt_lib0clear(&___nl__3);
#line 803
return ___nl__1;
#line 803
c_rt_lib0clear(&___nl__1);
#line 803
c_rt_lib0clear(&___nl__2);
#line 803
c_rt_lib0clear(&___nl__3);
#line 803
c_rt_lib0clear(&___nl__0);
#line 803
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
