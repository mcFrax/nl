
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "string_compiler.h"
#include "nlasm.h"
#include "translator.h"
#include "nparser.h"
#include "module_checker.h"
#include "type_checker.h"
#include "array.h"
#include "hash.h"
#include "generator_js.h"
#include "post_processing.h"
#include "ptd.h"
#include "pretty_printer.h"
#include "nast.h"
#include "compiler_lib.h"
#line 1 "string_compiler.nl"

static ImmT *__const__f = NULL;
void string_compiler_priv0__const__init();
ImmT string_compiler_priv0__const__sim(int __nr);
ImmT string_compiler_priv0__const__sing(int __nr);



ImmT string_compiler0compile0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_compiler0compile");
return string_compiler0compile(_tab[0], _tab[1]);}
ImmT string_compiler0compile(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
string_compiler_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
#line 24
c_rt_lib0move(&___nl__2, nparser0sparse(___nl__0, ___nl__1));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(45)));
#line 25
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 37
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(97)));
#line 37
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 37
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 37
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 37
nl_die_arg(___nl__3);
#line 25
label_2:
#line 25
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(45)));
#line 26
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(0));
#line 27
c_rt_lib0move(&___nl__6, module_checker0check_module(___nl__4));
#line 28
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(17)));
#line 28
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 28
c_rt_lib0clear(&___nl__7);
#line 29
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 29
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 29
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__8));
#line 29
c_rt_lib0clear(&___nl__8);
#line 29
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 29
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 30
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 31
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 31
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__9, ___nl__4));
#line 31
c_rt_lib0clear(&___nl__9);
#line 32
c_rt_lib0move(&___nl__9, type_checker0check_modules(___nl__8, ___nl__8));
#line 33
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(17)));
#line 33
c_rt_lib0copy(&___nl__5, ___nl__10);
#line 33
c_rt_lib0clear(&___nl__10);
#line 33
c_rt_lib0clear(&___nl__8);
#line 33
c_rt_lib0clear(&___nl__9);
#line 34
goto label_5;
#line 34
label_5:
#line 34
c_rt_lib0clear(&___nl__7);
#line 35
c_rt_lib0move(&___nl__7, array0len(___nl__5));
#line 35
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 35
c_rt_lib0move(&___nl__7, c_rt_lib0num_eq(___nl__7, ___nl__8));
#line 35
c_rt_lib0clear(&___nl__8);
#line 35
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 35
if(c_rt_lib0check_true_native(___nl__7)){ goto label_7;}
#line 35
c_rt_lib0move(&___nl__8, translator0translate(___nl__4));
#line 35
c_rt_lib0move(&___nl__8, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__8));
#line 35
c_rt_lib0clear(&___nl__0);
#line 35
c_rt_lib0clear(&___nl__1);
#line 35
c_rt_lib0clear(&___nl__2);
#line 35
c_rt_lib0clear(&___nl__3);
#line 35
c_rt_lib0clear(&___nl__4);
#line 35
c_rt_lib0clear(&___nl__5);
#line 35
c_rt_lib0clear(&___nl__6);
#line 35
c_rt_lib0clear(&___nl__7);
#line 35
return ___nl__8;
#line 35
c_rt_lib0clear(&___nl__8);
#line 35
goto label_7;
#line 35
label_7:
#line 35
c_rt_lib0clear(&___nl__7);
#line 36
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
#line 36
c_rt_lib0clear(&___nl__0);
#line 36
c_rt_lib0clear(&___nl__1);
#line 36
c_rt_lib0clear(&___nl__2);
#line 36
c_rt_lib0clear(&___nl__3);
#line 36
c_rt_lib0clear(&___nl__4);
#line 36
c_rt_lib0clear(&___nl__5);
#line 36
c_rt_lib0clear(&___nl__6);
#line 36
return ___nl__7;
#line 36
c_rt_lib0clear(&___nl__7);
#line 36
c_rt_lib0clear(&___nl__5);
#line 36
c_rt_lib0clear(&___nl__6);
#line 36
c_rt_lib0clear(&___nl__4);
#line 37
goto label_1;
#line 37
label_3:
#line 37
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(97)));
#line 38
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__4));
#line 38
c_rt_lib0clear(&___nl__0);
#line 38
c_rt_lib0clear(&___nl__1);
#line 38
c_rt_lib0clear(&___nl__2);
#line 38
c_rt_lib0clear(&___nl__3);
#line 38
c_rt_lib0clear(&___nl__4);
#line 38
return ___nl__5;
#line 38
c_rt_lib0clear(&___nl__5);
#line 38
c_rt_lib0clear(&___nl__4);
#line 39
goto label_1;
#line 39
label_1:
#line 39
c_rt_lib0clear(&___nl__3);
#line 39
c_rt_lib0clear(&___nl__2);
#line 39
c_rt_lib0clear(&___nl__0);
#line 39
c_rt_lib0clear(&___nl__1);
#line 39
return NULL;
}

ImmT string_compiler0modules_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0modules_t");
return string_compiler0modules_t();}
ImmT string_compiler0modules_t(){
string_compiler_priv0__const__init();
return string_compiler_priv0__const__sing(0);}
ImmT string_compiler0modules_t0cal() {
string_compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 43
c_rt_lib0move(&___nl__3, ptd0sim());
#line 43
c_rt_lib0move(&___nl__4, ptd0sim());
#line 43
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(1042), ___nl__3, ___get_global_const(434), ___nl__4));
#line 43
c_rt_lib0clear(&___nl__3);
#line 43
c_rt_lib0clear(&___nl__4);
#line 43
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 43
c_rt_lib0clear(&___nl__2);
#line 43
c_rt_lib0move(&___nl__0, ptd0hash(___nl__1));
#line 43
c_rt_lib0clear(&___nl__1);
#line 43
return ___nl__0;
#line 43
c_rt_lib0clear(&___nl__0);
#line 43
return NULL;
}

ImmT string_compiler0type_check_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0type_check_t");
return string_compiler0type_check_t();}
ImmT string_compiler0type_check_t(){
string_compiler_priv0__const__init();
return string_compiler_priv0__const__sing(1);}
ImmT string_compiler0type_check_t0cal() {
string_compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 47
c_rt_lib0move(&___nl__4, ptd0sim());
#line 47
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 47
c_rt_lib0clear(&___nl__4);
#line 47
c_rt_lib0move(&___nl__5, ptd0sim());
#line 47
c_rt_lib0move(&___nl__4, ptd0arr(___nl__5));
#line 47
c_rt_lib0clear(&___nl__5);
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(1023), ___nl__3, ___get_global_const(1043), ___nl__4));
#line 47
c_rt_lib0clear(&___nl__3);
#line 47
c_rt_lib0clear(&___nl__4);
#line 47
c_rt_lib0move(&___nl__1, ptd0rec(___nl__2));
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 47
c_rt_lib0clear(&___nl__1);
#line 47
return ___nl__0;
#line 47
c_rt_lib0clear(&___nl__0);
#line 47
return NULL;
}

ImmT string_compiler0printed_struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0printed_struct_t");
return string_compiler0printed_struct_t();}
ImmT string_compiler0printed_struct_t(){
string_compiler_priv0__const__init();
return string_compiler_priv0__const__sing(2);}
ImmT string_compiler0printed_struct_t0cal() {
string_compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 51
c_rt_lib0move(&___nl__3, ptd0sim());
#line 51
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 51
c_rt_lib0clear(&___nl__3);
#line 51
c_rt_lib0move(&___nl__6, ptd0sim());
#line 51
c_rt_lib0move(&___nl__7, ptd0sim());
#line 51
c_rt_lib0move(&___nl__8, ptd0sim());
#line 51
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__6, ___get_global_const(943), ___nl__7, ___get_global_const(944), ___nl__8));
#line 51
c_rt_lib0clear(&___nl__6);
#line 51
c_rt_lib0clear(&___nl__7);
#line 51
c_rt_lib0clear(&___nl__8);
#line 51
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 51
c_rt_lib0clear(&___nl__5);
#line 51
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 51
c_rt_lib0clear(&___nl__4);
#line 51
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(340), ___nl__2, ___get_global_const(77), ___nl__3));
#line 51
c_rt_lib0clear(&___nl__2);
#line 51
c_rt_lib0clear(&___nl__3);
#line 51
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 51
c_rt_lib0clear(&___nl__1);
#line 51
return ___nl__0;
#line 51
c_rt_lib0clear(&___nl__0);
#line 51
return NULL;
}

ImmT string_compiler0error_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string_compiler0error_t");
return string_compiler0error_t();}
ImmT string_compiler0error_t(){
string_compiler_priv0__const__init();
return string_compiler_priv0__const__sing(3);}
ImmT string_compiler0error_t0cal() {
string_compiler_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 58
c_rt_lib0move(&___nl__2, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_const(19), ___get_global_const(20)));
#line 58
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__2));
#line 58
c_rt_lib0move(&___nl__3, ptd0sim());
#line 58
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(97), ___nl__2, ___get_global_const(283), ___nl__3));
#line 58
c_rt_lib0clear(&___nl__2);
#line 58
c_rt_lib0clear(&___nl__3);
#line 58
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 58
c_rt_lib0clear(&___nl__1);
#line 58
return ___nl__0;
#line 58
c_rt_lib0clear(&___nl__0);
#line 58
return NULL;
}

ImmT string_compiler0print_modules0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0print_modules");
return string_compiler0print_modules(_tab[0]);}
ImmT string_compiler0print_modules(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 62
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(0));
#line 63
c_rt_lib0move(&___nl__4, c_rt_lib0init_iter(___nl__0));
#line 63
label_3:
#line 63
c_rt_lib0move(&___nl__2, c_rt_lib0is_end_hash(___nl__4));
#line 63
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 63
c_rt_lib0move(&___nl__2, c_rt_lib0get_key_iter(___nl__4));
#line 63
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value(___nl__0, ___nl__2));
#line 64
c_rt_lib0move(&___nl__5, pretty_printer0print_module_to_struct(___nl__3));
#line 64
c_rt_lib0delete(hash0set_value(&___nl__1, ___nl__2, ___nl__5));
#line 64
c_rt_lib0clear(&___nl__5);
#line 65
c_rt_lib0move(&___nl__4, c_rt_lib0next_iter(___nl__4));
#line 65
goto label_3;
#line 65
label_1:
#line 65
c_rt_lib0clear(&___nl__2);
#line 65
c_rt_lib0clear(&___nl__3);
#line 65
c_rt_lib0clear(&___nl__4);
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
return ___nl__1;
#line 66
c_rt_lib0clear(&___nl__1);
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
return NULL;
}

ImmT string_compiler0parse_module0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0parse_module");
return string_compiler0parse_module(_tab[0]);}
ImmT string_compiler0parse_module(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_compiler_priv0__const__init();
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
#line 73
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 74
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 75
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 75
label_3:
#line 75
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 75
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 75
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 75
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 76
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(1042)));
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(434)));
#line 76
c_rt_lib0move(&___nl__6, nparser0sparse(___nl__7, ___nl__8));
#line 76
c_rt_lib0clear(&___nl__8);
#line 76
c_rt_lib0clear(&___nl__7);
#line 76
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 76
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 82
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(97)));
#line 82
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 82
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 82
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 82
nl_die_arg(___nl__7);
#line 76
label_5:
#line 76
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 77
c_rt_lib0move(&___nl__9, module_checker0check_module(___nl__8));
#line 78
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(17)));
#line 78
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 78
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 78
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 78
label_9:
#line 78
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 78
if(c_rt_lib0check_true_native(___nl__15)){ goto label_7;}
#line 78
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 79
c_rt_lib0move(&___nl__16, c_rt_lib0hash_mk(2, ___get_global_const(97), ___nl__11, ___get_global_const(283), ___nl__3));
#line 79
c_rt_lib0delete(array0push(&___nl__1, ___nl__16));
#line 79
c_rt_lib0clear(&___nl__16);
#line 80
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 80
goto label_9;
#line 80
label_7:
#line 80
c_rt_lib0clear(&___nl__10);
#line 80
c_rt_lib0clear(&___nl__11);
#line 80
c_rt_lib0clear(&___nl__12);
#line 80
c_rt_lib0clear(&___nl__13);
#line 80
c_rt_lib0clear(&___nl__14);
#line 80
c_rt_lib0clear(&___nl__15);
#line 81
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__8));
#line 81
c_rt_lib0clear(&___nl__9);
#line 81
c_rt_lib0clear(&___nl__8);
#line 82
goto label_4;
#line 82
label_6:
#line 82
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(97)));
#line 83
c_rt_lib0move(&___nl__10,___get_global_const(1));
#line 83
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 83
c_rt_lib0move(&___nl__12, c_rt_lib0array_len(___nl__8));
#line 83
label_12:
#line 83
c_rt_lib0move(&___nl__13, c_rt_lib0ge(___nl__10, ___nl__12));
#line 83
if(c_rt_lib0check_true_native(___nl__13)){ goto label_10;}
#line 83
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__8, ___nl__10));
#line 84
c_rt_lib0move(&___nl__14, c_rt_lib0hash_mk(2, ___get_global_const(97), ___nl__9, ___get_global_const(283), ___nl__3));
#line 84
c_rt_lib0delete(array0push(&___nl__1, ___nl__14));
#line 84
c_rt_lib0clear(&___nl__14);
#line 85
c_rt_lib0move(&___nl__10, c_rt_lib0add_mod(___nl__10, ___nl__11));
#line 85
goto label_12;
#line 85
label_10:
#line 85
c_rt_lib0clear(&___nl__9);
#line 85
c_rt_lib0clear(&___nl__10);
#line 85
c_rt_lib0clear(&___nl__11);
#line 85
c_rt_lib0clear(&___nl__12);
#line 85
c_rt_lib0clear(&___nl__13);
#line 85
c_rt_lib0clear(&___nl__8);
#line 86
goto label_4;
#line 86
label_4:
#line 86
c_rt_lib0clear(&___nl__6);
#line 86
c_rt_lib0clear(&___nl__7);
#line 87
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 87
goto label_3;
#line 87
label_1:
#line 87
c_rt_lib0clear(&___nl__3);
#line 87
c_rt_lib0clear(&___nl__4);
#line 87
c_rt_lib0clear(&___nl__5);
#line 88
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 88
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 88
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__4));
#line 88
c_rt_lib0clear(&___nl__4);
#line 88
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 88
if(c_rt_lib0check_true_native(___nl__3)){ goto label_14;}
#line 88
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 88
c_rt_lib0clear(&___nl__0);
#line 88
c_rt_lib0clear(&___nl__1);
#line 88
c_rt_lib0clear(&___nl__2);
#line 88
c_rt_lib0clear(&___nl__3);
#line 88
return ___nl__4;
#line 88
c_rt_lib0clear(&___nl__4);
#line 88
goto label_14;
#line 88
label_14:
#line 88
c_rt_lib0clear(&___nl__3);
#line 89
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__2));
#line 89
c_rt_lib0clear(&___nl__0);
#line 89
c_rt_lib0clear(&___nl__1);
#line 89
c_rt_lib0clear(&___nl__2);
#line 89
return ___nl__3;
#line 89
c_rt_lib0clear(&___nl__3);
#line 89
c_rt_lib0clear(&___nl__1);
#line 89
c_rt_lib0clear(&___nl__2);
#line 89
c_rt_lib0clear(&___nl__0);
#line 89
return NULL;
}

ImmT string_compiler0check_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string_compiler0check_type");
return string_compiler0check_type(_tab[0], _tab[1]);}
ImmT string_compiler0check_type(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
string_compiler_priv0__const__init();
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
#line 96
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 97
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 97
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 97
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__0));
#line 97
label_3:
#line 97
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 97
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 97
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 98
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(0));
#line 99
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(0));
#line 100
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(0));
#line 101
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1043)));
#line 101
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 101
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 101
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 101
label_6:
#line 101
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 101
if(c_rt_lib0check_true_native(___nl__16)){ goto label_4;}
#line 101
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 102
c_rt_lib0move(&___nl__17, hash0get_value(___nl__1, ___nl__12));
#line 102
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(78)));
#line 102
c_rt_lib0move(&___nl__18, hash0get_value(___nl__1, ___nl__12));
#line 102
c_rt_lib0delete(hash0set_value(&___nl__8, ___nl__17, ___nl__18));
#line 102
c_rt_lib0clear(&___nl__18);
#line 102
c_rt_lib0clear(&___nl__17);
#line 103
c_rt_lib0move(&___nl__17, hash0get_value(___nl__1, ___nl__12));
#line 103
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(78)));
#line 103
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__17, ___nl__12));
#line 103
c_rt_lib0clear(&___nl__17);
#line 104
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 104
goto label_6;
#line 104
label_4:
#line 104
c_rt_lib0clear(&___nl__11);
#line 104
c_rt_lib0clear(&___nl__12);
#line 104
c_rt_lib0clear(&___nl__13);
#line 104
c_rt_lib0clear(&___nl__14);
#line 104
c_rt_lib0clear(&___nl__15);
#line 104
c_rt_lib0clear(&___nl__16);
#line 105
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(1023)));
#line 105
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 105
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 105
c_rt_lib0move(&___nl__15, c_rt_lib0array_len(___nl__11));
#line 105
label_9:
#line 105
c_rt_lib0move(&___nl__16, c_rt_lib0ge(___nl__13, ___nl__15));
#line 105
if(c_rt_lib0check_true_native(___nl__16)){ goto label_7;}
#line 105
c_rt_lib0move(&___nl__12, c_rt_lib0array_get(___nl__11, ___nl__13));
#line 106
c_rt_lib0move(&___nl__17, hash0get_value(___nl__1, ___nl__12));
#line 106
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(78)));
#line 106
c_rt_lib0move(&___nl__18, hash0get_value(___nl__1, ___nl__12));
#line 106
c_rt_lib0delete(hash0set_value(&___nl__9, ___nl__17, ___nl__18));
#line 106
c_rt_lib0clear(&___nl__18);
#line 106
c_rt_lib0clear(&___nl__17);
#line 107
c_rt_lib0move(&___nl__17, hash0get_value(___nl__1, ___nl__12));
#line 107
c_rt_lib0move(&___nl__17, c_rt_lib0hash_get_value_dec(___nl__17, ___get_global_const(78)));
#line 107
c_rt_lib0delete(hash0set_value(&___nl__10, ___nl__17, ___nl__12));
#line 107
c_rt_lib0clear(&___nl__17);
#line 108
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 108
goto label_9;
#line 108
label_7:
#line 108
c_rt_lib0clear(&___nl__11);
#line 108
c_rt_lib0clear(&___nl__12);
#line 108
c_rt_lib0clear(&___nl__13);
#line 108
c_rt_lib0clear(&___nl__14);
#line 108
c_rt_lib0clear(&___nl__15);
#line 108
c_rt_lib0clear(&___nl__16);
#line 109
c_rt_lib0move(&___nl__11, type_checker0check_modules(___nl__9, ___nl__8));
#line 110
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(17)));
#line 110
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 110
c_rt_lib0move(&___nl__15,___get_global_const(2));
#line 110
c_rt_lib0move(&___nl__16, c_rt_lib0array_len(___nl__12));
#line 110
label_12:
#line 110
c_rt_lib0move(&___nl__17, c_rt_lib0ge(___nl__14, ___nl__16));
#line 110
if(c_rt_lib0check_true_native(___nl__17)){ goto label_10;}
#line 110
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__12, ___nl__14));
#line 111
c_rt_lib0move(&___nl__20, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(111)));
#line 111
c_rt_lib0move(&___nl__19, hash0get_value(___nl__10, ___nl__20));
#line 111
c_rt_lib0clear(&___nl__20);
#line 111
c_rt_lib0move(&___nl__18, c_rt_lib0hash_mk(2, ___get_global_const(97), ___nl__13, ___get_global_const(283), ___nl__19));
#line 111
c_rt_lib0clear(&___nl__19);
#line 111
c_rt_lib0delete(array0push(&___nl__2, ___nl__18));
#line 111
c_rt_lib0clear(&___nl__18);
#line 112
c_rt_lib0move(&___nl__14, c_rt_lib0add_mod(___nl__14, ___nl__15));
#line 112
goto label_12;
#line 112
label_10:
#line 112
c_rt_lib0clear(&___nl__12);
#line 112
c_rt_lib0clear(&___nl__13);
#line 112
c_rt_lib0clear(&___nl__14);
#line 112
c_rt_lib0clear(&___nl__15);
#line 112
c_rt_lib0clear(&___nl__16);
#line 112
c_rt_lib0clear(&___nl__17);
#line 113
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__11, ___get_global_const(17)));
#line 113
c_rt_lib0move(&___nl__12, array0len(___nl__13));
#line 113
c_rt_lib0clear(&___nl__13);
#line 113
c_rt_lib0move(&___nl__13,___get_global_const(1));
#line 113
c_rt_lib0move(&___nl__12, c_rt_lib0gt(___nl__12, ___nl__13));
#line 113
c_rt_lib0clear(&___nl__13);
#line 113
c_rt_lib0move(&___nl__12, c_rt_lib0not(___nl__12));
#line 113
if(c_rt_lib0check_true_native(___nl__12)){ goto label_14;}
#line 113
c_rt_lib0move(&___nl__13, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__2));
#line 113
c_rt_lib0clear(&___nl__0);
#line 113
c_rt_lib0clear(&___nl__1);
#line 113
c_rt_lib0clear(&___nl__2);
#line 113
c_rt_lib0clear(&___nl__3);
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
#line 113
c_rt_lib0clear(&___nl__9);
#line 113
c_rt_lib0clear(&___nl__10);
#line 113
c_rt_lib0clear(&___nl__11);
#line 113
c_rt_lib0clear(&___nl__12);
#line 113
return ___nl__13;
#line 113
c_rt_lib0clear(&___nl__13);
#line 113
goto label_14;
#line 113
label_14:
#line 113
c_rt_lib0clear(&___nl__12);
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0clear(&___nl__9);
#line 113
c_rt_lib0clear(&___nl__10);
#line 113
c_rt_lib0clear(&___nl__11);
#line 114
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 114
goto label_3;
#line 114
label_1:
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
#line 115
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 115
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__3));
#line 115
c_rt_lib0clear(&___nl__0);
#line 115
c_rt_lib0clear(&___nl__1);
#line 115
c_rt_lib0clear(&___nl__2);
#line 115
return ___nl__3;
#line 115
c_rt_lib0clear(&___nl__3);
#line 115
c_rt_lib0clear(&___nl__2);
#line 115
c_rt_lib0clear(&___nl__0);
#line 115
c_rt_lib0clear(&___nl__1);
#line 115
return NULL;
}

ImmT string_compiler0compile_to_nlasm0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0compile_to_nlasm");
return string_compiler0compile_to_nlasm(_tab[0]);}
ImmT string_compiler0compile_to_nlasm(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_compiler_priv0__const__init();
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
#line 122
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 123
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 124
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__0));
#line 124
label_3:
#line 124
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 124
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 124
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 124
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__0, ___nl__3));
#line 125
c_rt_lib0move(&___nl__6, nparser0sparse(___nl__4, ___nl__3));
#line 125
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(45)));
#line 125
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 129
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__6, ___get_global_const(97)));
#line 129
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 129
c_rt_lib0move(&___nl__7,___get_global_const(76));
#line 129
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__7, ___nl__6));
#line 129
nl_die_arg(___nl__7);
#line 125
label_5:
#line 125
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(45)));
#line 126
c_rt_lib0move(&___nl__9, module_checker0check_module(___nl__8));
#line 127
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(17)));
#line 127
c_rt_lib0delete(array0append(&___nl__1, ___nl__10));
#line 127
c_rt_lib0clear(&___nl__10);
#line 128
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__8));
#line 128
c_rt_lib0clear(&___nl__9);
#line 128
c_rt_lib0clear(&___nl__8);
#line 129
goto label_4;
#line 129
label_6:
#line 129
c_rt_lib0move(&___nl__8, c_rt_lib0priv_as(___nl__6, ___get_global_const(97)));
#line 130
c_rt_lib0delete(array0append(&___nl__1, ___nl__8));
#line 130
c_rt_lib0clear(&___nl__8);
#line 131
goto label_4;
#line 131
label_4:
#line 131
c_rt_lib0clear(&___nl__6);
#line 131
c_rt_lib0clear(&___nl__7);
#line 132
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 132
goto label_3;
#line 132
label_1:
#line 132
c_rt_lib0clear(&___nl__3);
#line 132
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0clear(&___nl__5);
#line 133
c_rt_lib0move(&___nl__3, array0len(___nl__1));
#line 133
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 133
c_rt_lib0move(&___nl__3, c_rt_lib0gt(___nl__3, ___nl__4));
#line 133
c_rt_lib0clear(&___nl__4);
#line 133
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 133
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 133
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__1));
#line 133
c_rt_lib0clear(&___nl__0);
#line 133
c_rt_lib0clear(&___nl__1);
#line 133
c_rt_lib0clear(&___nl__2);
#line 133
c_rt_lib0clear(&___nl__3);
#line 133
return ___nl__4;
#line 133
c_rt_lib0clear(&___nl__4);
#line 133
goto label_8;
#line 133
label_8:
#line 133
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0move(&___nl__3, type_checker0check_modules(___nl__2, ___nl__2));
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(17)));
#line 135
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 135
c_rt_lib0clear(&___nl__5);
#line 135
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 135
c_rt_lib0move(&___nl__4, c_rt_lib0gt(___nl__4, ___nl__5));
#line 135
c_rt_lib0clear(&___nl__5);
#line 135
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 135
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(17)));
#line 135
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(44), ___nl__5));
#line 135
c_rt_lib0clear(&___nl__0);
#line 135
c_rt_lib0clear(&___nl__1);
#line 135
c_rt_lib0clear(&___nl__2);
#line 135
c_rt_lib0clear(&___nl__3);
#line 135
c_rt_lib0clear(&___nl__4);
#line 135
return ___nl__5;
#line 135
c_rt_lib0clear(&___nl__5);
#line 135
goto label_10;
#line 135
label_10:
#line 135
c_rt_lib0clear(&___nl__4);
#line 136
c_rt_lib0move(&___nl__4, c_rt_lib0hash_mk(0));
#line 137
c_rt_lib0move(&___nl__7, c_rt_lib0init_iter(___nl__2));
#line 137
label_13:
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0is_end_hash(___nl__7));
#line 137
if(c_rt_lib0check_true_native(___nl__5)){ goto label_11;}
#line 137
c_rt_lib0move(&___nl__5, c_rt_lib0get_key_iter(___nl__7));
#line 137
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value(___nl__2, ___nl__5));
#line 138
c_rt_lib0move(&___nl__8, translator0translate(___nl__6));
#line 138
c_rt_lib0delete(hash0set_value(&___nl__4, ___nl__5, ___nl__8));
#line 138
c_rt_lib0clear(&___nl__8);
#line 139
c_rt_lib0move(&___nl__7, c_rt_lib0next_iter(___nl__7));
#line 139
goto label_13;
#line 139
label_11:
#line 139
c_rt_lib0clear(&___nl__5);
#line 139
c_rt_lib0clear(&___nl__6);
#line 139
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0move(&___nl__6, c_rt_lib0hash_mk(0));
#line 140
c_rt_lib0move(&___nl__7, c_rt_lib0ov_mk_none(___get_global_const(47)));
#line 140
c_rt_lib0move(&___nl__5, post_processing0init(___nl__6, ___nl__7));
#line 140
c_rt_lib0clear(&___nl__7);
#line 140
c_rt_lib0clear(&___nl__6);
#line 141
c_rt_lib0delete(post_processing0find(&___nl__5, &___nl__4));
#line 142
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__4));
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
return ___nl__6;
#line 142
c_rt_lib0clear(&___nl__6);
#line 142
c_rt_lib0clear(&___nl__1);
#line 142
c_rt_lib0clear(&___nl__2);
#line 142
c_rt_lib0clear(&___nl__3);
#line 142
c_rt_lib0clear(&___nl__4);
#line 142
c_rt_lib0clear(&___nl__5);
#line 142
c_rt_lib0clear(&___nl__0);
#line 142
return NULL;
}

ImmT string_compiler0compile_to_js0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string_compiler0compile_to_js");
return string_compiler0compile_to_js(_tab[0]);}
ImmT string_compiler0compile_to_js(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_compiler_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 149
c_rt_lib0move(&___nl__3, string_compiler0compile_to_nlasm(___nl__0));
#line 149
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__3, ___get_global_const(45)));
#line 149
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 149
c_rt_lib0clear(&___nl__0);
#line 149
c_rt_lib0clear(&___nl__1);
#line 149
c_rt_lib0clear(&___nl__2);
#line 149
return ___nl__3;
#line 149
label_1:
#line 149
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__3, ___get_global_const(45)));
#line 149
c_rt_lib0clear(&___nl__2);
#line 149
c_rt_lib0clear(&___nl__3);
#line 150
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(0));
#line 151
c_rt_lib0move(&___nl__5, c_rt_lib0init_iter(___nl__1));
#line 151
label_4:
#line 151
c_rt_lib0move(&___nl__3, c_rt_lib0is_end_hash(___nl__5));
#line 151
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 151
c_rt_lib0move(&___nl__3, c_rt_lib0get_key_iter(___nl__5));
#line 151
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value(___nl__1, ___nl__3));
#line 152
c_rt_lib0move(&___nl__6, generator_js0generate(___nl__4));
#line 152
c_rt_lib0delete(hash0set_value(&___nl__2, ___nl__3, ___nl__6));
#line 152
c_rt_lib0clear(&___nl__6);
#line 153
c_rt_lib0move(&___nl__5, c_rt_lib0next_iter(___nl__5));
#line 153
goto label_4;
#line 153
label_2:
#line 153
c_rt_lib0clear(&___nl__3);
#line 153
c_rt_lib0clear(&___nl__4);
#line 153
c_rt_lib0clear(&___nl__5);
#line 154
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_arg(___get_global_const(45), ___nl__2));
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
c_rt_lib0clear(&___nl__2);
#line 154
return ___nl__3;
#line 154
c_rt_lib0clear(&___nl__3);
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
c_rt_lib0clear(&___nl__2);
#line 154
c_rt_lib0clear(&___nl__0);
#line 154
return NULL;
}


static ImmT ___const__[5];
static int ___const_init__ = 1;
void string_compiler_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[4];


for(int i=0;i<4;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 4);
}}
ImmT string_compiler_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT string_compiler_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = string_compiler0modules_t0cal();
	break;
case 1:
	___const__[1] = string_compiler0type_check_t0cal();
	break;
case 2:
	___const__[2] = string_compiler0printed_struct_t0cal();
	break;
case 3:
	___const__[3] = string_compiler0error_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
