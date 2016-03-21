
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "pretty_printer.h"
#include "string.h"
#include "array.h"
#include "ptd.h"
#include "nast.h"
#include "wprinter.h"
#include "boolean_t.h"
#line 1 "pretty_printer.nl"

static ImmT *__const__f = NULL;
void pretty_printer_priv0__const__init();
ImmT pretty_printer_priv0__const__sim(int __nr);
ImmT pretty_printer_priv0__const__sing(int __nr);

ImmT pretty_printer_priv0state_print(ImmT * ___ref___0,ImmT ___nl__1);
ImmT pretty_printer_priv0print_fun_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0print_fun_def_head(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0join_print_var_decl(ImmT ___nl__0);
ImmT pretty_printer_priv0print_var_decl(ImmT ___nl__0);
ImmT pretty_printer_priv0pind(ImmT ___nl__0);
ImmT pretty_printer_priv0join_print_hash_elem(ImmT ___nl__0);
ImmT pretty_printer_priv0print_hash_elem(ImmT ___nl__0);
ImmT pretty_printer_priv0print_variant(ImmT ___nl__0);
ImmT pretty_printer_priv0print_variant_case_decl(ImmT ___nl__0);
ImmT pretty_printer_priv0join_print_fun_arg(ImmT ___nl__0);
ImmT pretty_printer_priv0print_fun_arg(ImmT ___nl__0);
ImmT pretty_printer_priv0count_structs(ImmT ___nl__0);
ImmT pretty_printer_priv0get_compressed_fun_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0print_st(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0get_fun_label(ImmT ___nl__0,ImmT ___nl__1);
ImmT pretty_printer_priv0string_to_nl(ImmT ___nl__0);
ImmT pretty_printer_priv0join_print_val(ImmT ___nl__0);
ImmT pretty_printer_priv0is_to_change_ov(ImmT ___nl__0);
ImmT pretty_printer_priv0print_val(ImmT ___nl__0);
ImmT pretty_printer_priv0print_cond_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5);
ImmT pretty_printer_priv0print_loop(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5);
ImmT pretty_printer_priv0print_loop_or_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5,ImmT ___nl__6);
ImmT pretty_printer_priv0print_try_ensure(ImmT ___nl__0,ImmT ___nl__1);
ImmT pretty_printer_priv0print_return(ImmT ___nl__0);
ImmT pretty_printer_priv0print_sim_value(ImmT ___nl__0);
ImmT pretty_printer_priv0print_break();
ImmT pretty_printer_priv0print_continue();
ImmT pretty_printer_priv0print_die(ImmT ___nl__0);
ImmT pretty_printer_priv0print_simple_statement(ImmT ___nl__0);
ImmT pretty_printer_priv0flush_sim_statement(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);
ImmT pretty_printer_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2);


ImmT pretty_printer_priv0state_print(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
pretty_printer_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 14
c_rt_lib0move(&___nl__2,___get_global_const(142));
#line 14
c_rt_lib0move(&___nl__2, c_rt_lib0get_ref_hash(*___ref___0, ___nl__2));
#line 14
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__1));
#line 14
c_rt_lib0move(&___nl__3,___get_global_const(142));
#line 14
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__3, ___nl__2));
#line 14
c_rt_lib0clear(&___nl__3);
#line 14
c_rt_lib0clear(&___nl__2);
#line 14
c_rt_lib0clear(&___nl__1);
#line 14
return NULL;
}

ImmT pretty_printer0struct_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "pretty_printer0struct_t");
return pretty_printer0struct_t();}
ImmT pretty_printer0struct_t(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(0);}
ImmT pretty_printer0struct_t0cal() {
pretty_printer_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 18
c_rt_lib0move(&___nl__3, ptd0sim());
#line 18
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 18
c_rt_lib0clear(&___nl__3);
#line 18
c_rt_lib0move(&___nl__6, ptd0sim());
#line 18
c_rt_lib0move(&___nl__7, ptd0sim());
#line 18
c_rt_lib0move(&___nl__8, ptd0sim());
#line 18
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__6, ___get_global_const(945), ___nl__7, ___get_global_const(946), ___nl__8));
#line 18
c_rt_lib0clear(&___nl__6);
#line 18
c_rt_lib0clear(&___nl__7);
#line 18
c_rt_lib0clear(&___nl__8);
#line 18
c_rt_lib0move(&___nl__4, ptd0rec(___nl__5));
#line 18
c_rt_lib0clear(&___nl__5);
#line 18
c_rt_lib0move(&___nl__3, ptd0arr(___nl__4));
#line 18
c_rt_lib0clear(&___nl__4);
#line 18
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(340), ___nl__2, ___get_global_const(77), ___nl__3));
#line 18
c_rt_lib0clear(&___nl__2);
#line 18
c_rt_lib0clear(&___nl__3);
#line 18
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 18
c_rt_lib0clear(&___nl__1);
#line 18
return ___nl__0;
#line 18
c_rt_lib0clear(&___nl__0);
#line 18
return NULL;
}

ImmT pretty_printer0print_module_to_struct0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "pretty_printer0print_module_to_struct");
return pretty_printer0print_module_to_struct(_tab[0]);}
ImmT pretty_printer0print_module_to_struct(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
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
#line 25
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 25
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 25
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(340), ___nl__2, ___get_global_const(77), ___nl__3));
#line 25
c_rt_lib0clear(&___nl__2);
#line 25
c_rt_lib0clear(&___nl__3);
#line 26
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(128)));
#line 26
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 26
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 26
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 26
label_3:
#line 26
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 26
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 26
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 27
c_rt_lib0move(&___nl__8,___get_global_const(340));
#line 27
c_rt_lib0move(&___nl__8, c_rt_lib0get_ref_hash(___nl__1, ___nl__8));
#line 27
c_rt_lib0move(&___nl__9,___get_global_const(574));
#line 27
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 27
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 27
c_rt_lib0clear(&___nl__10);
#line 27
c_rt_lib0move(&___nl__10,___get_global_const(315));
#line 27
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 27
c_rt_lib0clear(&___nl__10);
#line 27
c_rt_lib0move(&___nl__10, string0lf());
#line 27
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 27
c_rt_lib0clear(&___nl__10);
#line 27
c_rt_lib0delete(array0push(&___nl__8, ___nl__9));
#line 27
c_rt_lib0clear(&___nl__9);
#line 27
c_rt_lib0move(&___nl__9,___get_global_const(340));
#line 27
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__9, ___nl__8));
#line 27
c_rt_lib0clear(&___nl__9);
#line 27
c_rt_lib0clear(&___nl__8);
#line 28
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 28
goto label_3;
#line 28
label_1:
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
#line 29
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(735)));
#line 29
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 29
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 29
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 29
label_6:
#line 29
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 29
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 29
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 30
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 30
c_rt_lib0move(&___nl__8, c_rt_lib0hash_mk(1, ___get_global_const(142), ___nl__9));
#line 30
c_rt_lib0clear(&___nl__9);
#line 31
c_rt_lib0move(&___nl__9, string0lf());
#line 31
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__8, ___nl__9));
#line 31
c_rt_lib0clear(&___nl__9);
#line 32
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 32
c_rt_lib0delete(pretty_printer_priv0print_fun_def_head(&___nl__8, ___nl__3, ___nl__9));
#line 32
c_rt_lib0clear(&___nl__9);
#line 33
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(142)));
#line 34
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 34
c_rt_lib0copy(&___nl__11, ___nl__10);
#line 34
c_rt_lib0hash_set_value_dec(&___nl__8, ___get_global_const(142), ___nl__11);
#line 34
c_rt_lib0clear(&___nl__10);
#line 34
c_rt_lib0clear(&___nl__11);
#line 35
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(214)));
#line 35
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__10, ___get_global_const(214)));
#line 35
c_rt_lib0move(&___nl__10, c_rt_lib0priv_as(___nl__10, ___get_global_const(775)));
#line 35
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 35
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 35
c_rt_lib0move(&___nl__14, c_rt_lib0array_len(___nl__10));
#line 35
label_9:
#line 35
c_rt_lib0move(&___nl__15, c_rt_lib0ge(___nl__12, ___nl__14));
#line 35
if(c_rt_lib0check_true_native(___nl__15)){ goto label_7;}
#line 35
c_rt_lib0move(&___nl__11, c_rt_lib0array_get(___nl__10, ___nl__12));
#line 36
c_rt_lib0move(&___nl__16, string0lf());
#line 36
c_rt_lib0move(&___nl__18,___get_global_const(2));
#line 36
c_rt_lib0move(&___nl__17, pretty_printer_priv0pind(___nl__18));
#line 36
c_rt_lib0clear(&___nl__18);
#line 36
c_rt_lib0move(&___nl__16, c_rt_lib0concat_add(___nl__16, ___nl__17));
#line 36
c_rt_lib0clear(&___nl__17);
#line 36
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__8, ___nl__16));
#line 36
c_rt_lib0clear(&___nl__16);
#line 37
c_rt_lib0move(&___nl__16,___get_global_const(2));
#line 37
c_rt_lib0delete(pretty_printer_priv0print_cmd(&___nl__8, ___nl__11, ___nl__16));
#line 37
c_rt_lib0clear(&___nl__16);
#line 38
c_rt_lib0move(&___nl__12, c_rt_lib0add_mod(___nl__12, ___nl__13));
#line 38
goto label_9;
#line 38
label_7:
#line 38
c_rt_lib0clear(&___nl__10);
#line 38
c_rt_lib0clear(&___nl__11);
#line 38
c_rt_lib0clear(&___nl__12);
#line 38
c_rt_lib0clear(&___nl__13);
#line 38
c_rt_lib0clear(&___nl__14);
#line 38
c_rt_lib0clear(&___nl__15);
#line 39
c_rt_lib0move(&___nl__10,___get_global_const(77));
#line 39
c_rt_lib0move(&___nl__10, c_rt_lib0get_ref_hash(___nl__1, ___nl__10));
#line 39
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(332)));
#line 39
c_rt_lib0move(&___nl__12, c_rt_lib0priv_is(___nl__12, ___get_global_const(334)));
#line 39
if(c_rt_lib0check_true_native(___nl__12)){ goto label_11;}
#line 39
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 39
goto label_10;
#line 39
label_11:
#line 39
c_rt_lib0move(&___nl__12,___get_global_const(583));
#line 39
label_10:
#line 39
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(78)));
#line 39
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 39
c_rt_lib0clear(&___nl__13);
#line 39
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(142)));
#line 39
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__12, ___get_global_const(945), ___nl__9, ___get_global_const(946), ___nl__13));
#line 39
c_rt_lib0clear(&___nl__12);
#line 39
c_rt_lib0clear(&___nl__13);
#line 39
c_rt_lib0delete(array0push(&___nl__10, ___nl__11));
#line 39
c_rt_lib0clear(&___nl__11);
#line 39
c_rt_lib0move(&___nl__11,___get_global_const(77));
#line 39
c_rt_lib0delete(c_rt_lib0set_ref_hash(&___nl__1, ___nl__11, ___nl__10));
#line 39
c_rt_lib0clear(&___nl__11);
#line 39
c_rt_lib0clear(&___nl__10);
#line 39
c_rt_lib0clear(&___nl__8);
#line 39
c_rt_lib0clear(&___nl__9);
#line 44
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 44
goto label_6;
#line 44
label_4:
#line 44
c_rt_lib0clear(&___nl__2);
#line 44
c_rt_lib0clear(&___nl__3);
#line 44
c_rt_lib0clear(&___nl__4);
#line 44
c_rt_lib0clear(&___nl__5);
#line 44
c_rt_lib0clear(&___nl__6);
#line 44
c_rt_lib0clear(&___nl__7);
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
return ___nl__1;
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
return NULL;
}

ImmT pretty_printer0print_module_to_str0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "pretty_printer0print_module_to_str");
return pretty_printer0print_module_to_str(_tab[0]);}
ImmT pretty_printer0print_module_to_str(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
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
#line 49
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 49
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(1, ___get_global_const(142), ___nl__2));
#line 49
c_rt_lib0clear(&___nl__2);
#line 50
c_rt_lib0move(&___nl__2,___get_global_const(947));
#line 50
c_rt_lib0move(&___nl__3, string0lf());
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0move(&___nl__3,___get_global_const(948));
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0move(&___nl__3, string0lf());
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0move(&___nl__3,___get_global_const(947));
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0move(&___nl__3, string0lf());
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0move(&___nl__3, string0lf());
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0move(&___nl__3, string0lf());
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__2));
#line 50
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(128)));
#line 53
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 53
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 53
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 53
label_3:
#line 53
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 53
if(c_rt_lib0check_true_native(___nl__8)){ goto label_1;}
#line 53
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 54
c_rt_lib0move(&___nl__9,___get_global_const(574));
#line 54
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(78)));
#line 54
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 54
c_rt_lib0clear(&___nl__10);
#line 54
c_rt_lib0move(&___nl__10,___get_global_const(315));
#line 54
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 54
c_rt_lib0clear(&___nl__10);
#line 54
c_rt_lib0delete(array0push(&___nl__2, ___nl__9));
#line 54
c_rt_lib0clear(&___nl__9);
#line 55
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 55
goto label_3;
#line 55
label_1:
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0clear(&___nl__4);
#line 55
c_rt_lib0clear(&___nl__5);
#line 55
c_rt_lib0clear(&___nl__6);
#line 55
c_rt_lib0clear(&___nl__7);
#line 55
c_rt_lib0clear(&___nl__8);
#line 56
c_rt_lib0move(&___nl__4, string0lf());
#line 56
c_rt_lib0move(&___nl__3, array0join(___nl__4, ___nl__2));
#line 56
c_rt_lib0clear(&___nl__4);
#line 56
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__3));
#line 56
c_rt_lib0clear(&___nl__3);
#line 57
c_rt_lib0move(&___nl__3, string0lf());
#line 57
c_rt_lib0move(&___nl__4, string0lf());
#line 57
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 57
c_rt_lib0clear(&___nl__4);
#line 57
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__3));
#line 57
c_rt_lib0clear(&___nl__3);
#line 58
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(735)));
#line 58
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 58
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 58
c_rt_lib0move(&___nl__7, c_rt_lib0array_len(___nl__3));
#line 58
label_6:
#line 58
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__5, ___nl__7));
#line 58
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 58
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 59
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 59
c_rt_lib0delete(pretty_printer_priv0print_fun_def(&___nl__1, ___nl__4, ___nl__9));
#line 59
c_rt_lib0clear(&___nl__9);
#line 60
c_rt_lib0move(&___nl__9, string0lf());
#line 60
c_rt_lib0move(&___nl__10, string0lf());
#line 60
c_rt_lib0move(&___nl__9, c_rt_lib0concat_add(___nl__9, ___nl__10));
#line 60
c_rt_lib0clear(&___nl__10);
#line 60
c_rt_lib0delete(pretty_printer_priv0state_print(&___nl__1, ___nl__9));
#line 60
c_rt_lib0clear(&___nl__9);
#line 61
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 61
goto label_6;
#line 61
label_4:
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
#line 61
c_rt_lib0clear(&___nl__8);
#line 62
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(142)));
#line 62
c_rt_lib0clear(&___nl__0);
#line 62
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
return ___nl__3;
#line 62
c_rt_lib0clear(&___nl__3);
#line 62
c_rt_lib0clear(&___nl__1);
#line 62
c_rt_lib0clear(&___nl__2);
#line 62
c_rt_lib0clear(&___nl__0);
#line 62
return NULL;
}

ImmT pretty_printer_priv0print_fun_def(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 66
c_rt_lib0delete(pretty_printer_priv0print_fun_def_head(___ref___0, ___nl__1, ___nl__2));
#line 67
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(214)));
#line 67
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 67
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__3, ___nl__4));
#line 67
c_rt_lib0clear(&___nl__4);
#line 67
c_rt_lib0clear(&___nl__3);
#line 67
c_rt_lib0clear(&___nl__1);
#line 67
c_rt_lib0clear(&___nl__2);
#line 67
return NULL;
}

ImmT pretty_printer_priv0print_fun_def_head(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
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
#line 71
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 72
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(332)));
#line 72
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(333)));
#line 72
if(c_rt_lib0check_true_native(___nl__5)){ goto label_2;}
#line 74
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(334)));
#line 74
if(c_rt_lib0check_true_native(___nl__5)){ goto label_3;}
#line 74
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 74
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 74
nl_die_arg(___nl__5);
#line 72
label_2:
#line 73
c_rt_lib0move(&___nl__6,___get_global_const(583));
#line 73
c_rt_lib0move(&___nl__6, c_rt_lib0concat_new(___nl__2, ___nl__6));
#line 73
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__6));
#line 73
c_rt_lib0clear(&___nl__6);
#line 74
goto label_1;
#line 74
label_3:
#line 75
goto label_1;
#line 75
label_1:
#line 75
c_rt_lib0clear(&___nl__4);
#line 75
c_rt_lib0clear(&___nl__5);
#line 76
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(78)));
#line 76
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 76
c_rt_lib0clear(&___nl__4);
#line 77
c_rt_lib0move(&___nl__6,___get_global_const(887));
#line 77
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 77
c_rt_lib0clear(&___nl__6);
#line 77
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 77
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__3));
#line 77
c_rt_lib0move(&___nl__9,___get_global_const(326));
#line 77
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 77
c_rt_lib0clear(&___nl__9);
#line 77
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(4, ___nl__5, ___nl__6, ___nl__7, ___nl__8));
#line 77
c_rt_lib0clear(&___nl__5);
#line 77
c_rt_lib0clear(&___nl__6);
#line 77
c_rt_lib0clear(&___nl__7);
#line 77
c_rt_lib0clear(&___nl__8);
#line 83
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 83
c_rt_lib0move(&___nl__5, array0len(___nl__6));
#line 83
c_rt_lib0clear(&___nl__6);
#line 83
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 83
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 83
label_6:
#line 83
c_rt_lib0move(&___nl__8, c_rt_lib0ge(___nl__6, ___nl__5));
#line 83
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 84
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 84
c_rt_lib0move(&___nl__9, c_rt_lib0array_get(___nl__9, ___nl__6));
#line 85
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(261)));
#line 85
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(5)));
#line 85
if(c_rt_lib0check_true_native(___nl__11)){ goto label_8;}
#line 87
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(38)));
#line 87
if(c_rt_lib0check_true_native(___nl__11)){ goto label_9;}
#line 87
c_rt_lib0move(&___nl__11,___get_global_const(76));
#line 87
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 87
nl_die_arg(___nl__11);
#line 85
label_8:
#line 86
c_rt_lib0move(&___nl__14,___get_global_const(5));
#line 86
c_rt_lib0move(&___nl__13, wprinter0build_sim(___nl__14));
#line 86
c_rt_lib0clear(&___nl__14);
#line 86
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 86
c_rt_lib0move(&___nl__12, c_rt_lib0array_mk(2, ___nl__13, ___nl__14));
#line 86
c_rt_lib0clear(&___nl__13);
#line 86
c_rt_lib0clear(&___nl__14);
#line 86
c_rt_lib0delete(array0append(&___nl__4, ___nl__12));
#line 86
c_rt_lib0clear(&___nl__12);
#line 87
goto label_7;
#line 87
label_9:
#line 88
goto label_7;
#line 88
label_7:
#line 88
c_rt_lib0clear(&___nl__10);
#line 88
c_rt_lib0clear(&___nl__11);
#line 89
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(78)));
#line 89
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 89
c_rt_lib0clear(&___nl__11);
#line 89
c_rt_lib0delete(array0push(&___nl__4, ___nl__10));
#line 89
c_rt_lib0clear(&___nl__10);
#line 90
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(73)));
#line 90
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(73)));
#line 90
if(c_rt_lib0check_true_native(___nl__11)){ goto label_11;}
#line 92
c_rt_lib0move(&___nl__11, c_rt_lib0priv_is(___nl__10, ___get_global_const(38)));
#line 92
if(c_rt_lib0check_true_native(___nl__11)){ goto label_12;}
#line 92
c_rt_lib0move(&___nl__11,___get_global_const(76));
#line 92
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__11, ___nl__10));
#line 92
nl_die_arg(___nl__11);
#line 90
label_11:
#line 90
c_rt_lib0move(&___nl__12, c_rt_lib0priv_as(___nl__10, ___get_global_const(73)));
#line 91
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 91
c_rt_lib0move(&___nl__16,___get_global_const(375));
#line 91
c_rt_lib0move(&___nl__15, wprinter0build_sim(___nl__16));
#line 91
c_rt_lib0clear(&___nl__16);
#line 91
c_rt_lib0move(&___nl__16, wprinter0get_sep());
#line 91
c_rt_lib0move(&___nl__17, pretty_printer_priv0print_val(___nl__12));
#line 91
c_rt_lib0move(&___nl__13, c_rt_lib0array_mk(4, ___nl__14, ___nl__15, ___nl__16, ___nl__17));
#line 91
c_rt_lib0clear(&___nl__14);
#line 91
c_rt_lib0clear(&___nl__15);
#line 91
c_rt_lib0clear(&___nl__16);
#line 91
c_rt_lib0clear(&___nl__17);
#line 91
c_rt_lib0delete(array0append(&___nl__4, ___nl__13));
#line 91
c_rt_lib0clear(&___nl__13);
#line 91
c_rt_lib0clear(&___nl__12);
#line 92
goto label_10;
#line 92
label_12:
#line 93
goto label_10;
#line 93
label_10:
#line 93
c_rt_lib0clear(&___nl__10);
#line 93
c_rt_lib0clear(&___nl__11);
#line 94
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 94
c_rt_lib0move(&___nl__10, array0len(___nl__11));
#line 94
c_rt_lib0clear(&___nl__11);
#line 94
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 94
c_rt_lib0move(&___nl__10, c_rt_lib0sub_mod(___nl__10, ___nl__11));
#line 94
c_rt_lib0clear(&___nl__11);
#line 94
c_rt_lib0move(&___nl__10, c_rt_lib0num_ne(___nl__6, ___nl__10));
#line 94
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 94
if(c_rt_lib0check_true_native(___nl__10)){ goto label_14;}
#line 94
c_rt_lib0move(&___nl__13,___get_global_const(177));
#line 94
c_rt_lib0move(&___nl__12, wprinter0build_sim(___nl__13));
#line 94
c_rt_lib0clear(&___nl__13);
#line 94
c_rt_lib0move(&___nl__13, wprinter0get_sep());
#line 94
c_rt_lib0move(&___nl__11, c_rt_lib0array_mk(2, ___nl__12, ___nl__13));
#line 94
c_rt_lib0clear(&___nl__12);
#line 94
c_rt_lib0clear(&___nl__13);
#line 94
c_rt_lib0delete(array0append(&___nl__4, ___nl__11));
#line 94
c_rt_lib0clear(&___nl__11);
#line 94
goto label_14;
#line 94
label_14:
#line 94
c_rt_lib0clear(&___nl__10);
#line 94
c_rt_lib0clear(&___nl__9);
#line 95
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 95
goto label_6;
#line 95
label_4:
#line 95
c_rt_lib0clear(&___nl__5);
#line 95
c_rt_lib0clear(&___nl__6);
#line 95
c_rt_lib0clear(&___nl__7);
#line 95
c_rt_lib0clear(&___nl__8);
#line 96
c_rt_lib0move(&___nl__6,___get_global_const(181));
#line 96
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 96
c_rt_lib0clear(&___nl__6);
#line 96
c_rt_lib0delete(array0push(&___nl__4, ___nl__5));
#line 96
c_rt_lib0clear(&___nl__5);
#line 97
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(736)));
#line 97
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(73)));
#line 97
if(c_rt_lib0check_true_native(___nl__6)){ goto label_16;}
#line 104
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__5, ___get_global_const(38)));
#line 104
if(c_rt_lib0check_true_native(___nl__6)){ goto label_17;}
#line 104
c_rt_lib0move(&___nl__6,___get_global_const(76));
#line 104
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__6, ___nl__5));
#line 104
nl_die_arg(___nl__6);
#line 97
label_16:
#line 97
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__5, ___get_global_const(73)));
#line 98
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 98
c_rt_lib0move(&___nl__11,___get_global_const(375));
#line 98
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 98
c_rt_lib0clear(&___nl__11);
#line 98
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 98
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_sim_value(___nl__7));
#line 98
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(4, ___nl__9, ___nl__10, ___nl__11, ___nl__12));
#line 98
c_rt_lib0clear(&___nl__9);
#line 98
c_rt_lib0clear(&___nl__10);
#line 98
c_rt_lib0clear(&___nl__11);
#line 98
c_rt_lib0clear(&___nl__12);
#line 98
c_rt_lib0delete(array0append(&___nl__4, ___nl__8));
#line 98
c_rt_lib0clear(&___nl__8);
#line 98
c_rt_lib0clear(&___nl__7);
#line 104
goto label_15;
#line 104
label_17:
#line 105
goto label_15;
#line 105
label_15:
#line 105
c_rt_lib0clear(&___nl__5);
#line 105
c_rt_lib0clear(&___nl__6);
#line 106
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__4));
#line 106
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 106
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__5, ___nl__6));
#line 106
c_rt_lib0clear(&___nl__6);
#line 106
c_rt_lib0clear(&___nl__5);
#line 106
c_rt_lib0clear(&___nl__3);
#line 106
c_rt_lib0clear(&___nl__4);
#line 106
c_rt_lib0clear(&___nl__1);
#line 106
c_rt_lib0clear(&___nl__2);
#line 106
return NULL;
}

ImmT pretty_printer_priv0join_print_var_decl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 110
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 111
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 111
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 111
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 111
label_3:
#line 111
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 111
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 112
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 112
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_var_decl(___nl__7));
#line 112
c_rt_lib0clear(&___nl__7);
#line 112
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 112
c_rt_lib0clear(&___nl__6);
#line 113
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 113
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 113
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 113
c_rt_lib0clear(&___nl__7);
#line 113
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 113
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 113
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 113
c_rt_lib0move(&___nl__9,___get_global_const(177));
#line 113
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 113
c_rt_lib0clear(&___nl__9);
#line 113
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 113
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 113
c_rt_lib0clear(&___nl__8);
#line 113
c_rt_lib0clear(&___nl__9);
#line 113
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 113
c_rt_lib0clear(&___nl__7);
#line 113
goto label_5;
#line 113
label_5:
#line 113
c_rt_lib0clear(&___nl__6);
#line 114
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 114
goto label_3;
#line 114
label_1:
#line 114
c_rt_lib0clear(&___nl__2);
#line 114
c_rt_lib0clear(&___nl__3);
#line 114
c_rt_lib0clear(&___nl__4);
#line 114
c_rt_lib0clear(&___nl__5);
#line 115
c_rt_lib0clear(&___nl__0);
#line 115
return ___nl__1;
#line 115
c_rt_lib0clear(&___nl__1);
#line 115
c_rt_lib0clear(&___nl__0);
#line 115
return NULL;
}

ImmT pretty_printer_priv0print_var_decl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
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
#line 119
c_rt_lib0move(&___nl__3,___get_global_const(796));
#line 119
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 119
c_rt_lib0clear(&___nl__3);
#line 119
c_rt_lib0move(&___nl__3, wprinter0get_sep());
#line 119
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__2, ___nl__3));
#line 119
c_rt_lib0clear(&___nl__2);
#line 119
c_rt_lib0clear(&___nl__3);
#line 120
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 120
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(73)));
#line 120
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 128
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(38)));
#line 128
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 128
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 128
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 128
nl_die_arg(___nl__3);
#line 120
label_2:
#line 120
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(73)));
#line 121
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 121
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 121
c_rt_lib0clear(&___nl__7);
#line 121
c_rt_lib0move(&___nl__7, wprinter0get_sep());
#line 121
c_rt_lib0move(&___nl__9,___get_global_const(375));
#line 121
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 121
c_rt_lib0clear(&___nl__9);
#line 121
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 121
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__4));
#line 121
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(5, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10));
#line 121
c_rt_lib0clear(&___nl__6);
#line 121
c_rt_lib0clear(&___nl__7);
#line 121
c_rt_lib0clear(&___nl__8);
#line 121
c_rt_lib0clear(&___nl__9);
#line 121
c_rt_lib0clear(&___nl__10);
#line 121
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 121
c_rt_lib0clear(&___nl__5);
#line 121
c_rt_lib0clear(&___nl__4);
#line 128
goto label_1;
#line 128
label_3:
#line 129
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 129
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 129
c_rt_lib0clear(&___nl__5);
#line 129
c_rt_lib0delete(array0push(&___nl__1, ___nl__4));
#line 129
c_rt_lib0clear(&___nl__4);
#line 130
goto label_1;
#line 130
label_1:
#line 130
c_rt_lib0clear(&___nl__2);
#line 130
c_rt_lib0clear(&___nl__3);
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(650)));
#line 131
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(650)));
#line 131
if(c_rt_lib0check_true_native(___nl__3)){ goto label_5;}
#line 133
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(38)));
#line 133
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 133
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 133
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 133
nl_die_arg(___nl__3);
#line 131
label_5:
#line 131
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(650)));
#line 132
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 132
c_rt_lib0move(&___nl__8,___get_global_const(812));
#line 132
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 132
c_rt_lib0clear(&___nl__8);
#line 132
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 132
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__4));
#line 132
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(4, ___nl__6, ___nl__7, ___nl__8, ___nl__9));
#line 132
c_rt_lib0clear(&___nl__6);
#line 132
c_rt_lib0clear(&___nl__7);
#line 132
c_rt_lib0clear(&___nl__8);
#line 132
c_rt_lib0clear(&___nl__9);
#line 132
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 132
c_rt_lib0clear(&___nl__5);
#line 132
c_rt_lib0clear(&___nl__4);
#line 133
goto label_4;
#line 133
label_6:
#line 134
goto label_4;
#line 134
label_4:
#line 134
c_rt_lib0clear(&___nl__2);
#line 134
c_rt_lib0clear(&___nl__3);
#line 135
c_rt_lib0move(&___nl__2, wprinter0build_pretty_l(___nl__1));
#line 135
c_rt_lib0clear(&___nl__0);
#line 135
c_rt_lib0clear(&___nl__1);
#line 135
return ___nl__2;
#line 135
c_rt_lib0clear(&___nl__2);
#line 135
c_rt_lib0clear(&___nl__1);
#line 135
c_rt_lib0clear(&___nl__0);
#line 135
return NULL;
}

ImmT pretty_printer_priv0pind(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 139
c_rt_lib0move(&___nl__1,___get_global_const(0));
#line 140
c_rt_lib0move(&___nl__2,___get_global_const(1));
#line 140
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 140
label_3:
#line 140
c_rt_lib0move(&___nl__4, c_rt_lib0ge(___nl__2, ___nl__0));
#line 140
if(c_rt_lib0check_true_native(___nl__4)){ goto label_1;}
#line 140
c_rt_lib0move(&___nl__6,___get_global_const(163));
#line 140
c_rt_lib0move(&___nl__5, string0chr(___nl__6));
#line 140
c_rt_lib0clear(&___nl__6);
#line 140
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__5));
#line 140
c_rt_lib0clear(&___nl__5);
#line 140
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 140
goto label_3;
#line 140
label_1:
#line 140
c_rt_lib0clear(&___nl__2);
#line 140
c_rt_lib0clear(&___nl__3);
#line 140
c_rt_lib0clear(&___nl__4);
#line 141
c_rt_lib0clear(&___nl__0);
#line 141
return ___nl__1;
#line 141
c_rt_lib0clear(&___nl__1);
#line 141
c_rt_lib0clear(&___nl__0);
#line 141
return NULL;
}

ImmT pretty_printer_priv0join_print_hash_elem(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 145
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 146
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 146
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 146
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 146
label_3:
#line 146
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 146
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 147
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 147
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_hash_elem(___nl__7));
#line 147
c_rt_lib0clear(&___nl__7);
#line 147
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 147
c_rt_lib0clear(&___nl__6);
#line 148
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 148
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 148
c_rt_lib0clear(&___nl__7);
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 148
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 148
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 148
c_rt_lib0move(&___nl__9,___get_global_const(177));
#line 148
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 148
c_rt_lib0clear(&___nl__9);
#line 148
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 148
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 148
c_rt_lib0clear(&___nl__8);
#line 148
c_rt_lib0clear(&___nl__9);
#line 148
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 148
c_rt_lib0clear(&___nl__7);
#line 148
goto label_5;
#line 148
label_5:
#line 148
c_rt_lib0clear(&___nl__6);
#line 149
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 149
goto label_3;
#line 149
label_1:
#line 149
c_rt_lib0clear(&___nl__2);
#line 149
c_rt_lib0clear(&___nl__3);
#line 149
c_rt_lib0clear(&___nl__4);
#line 149
c_rt_lib0clear(&___nl__5);
#line 150
c_rt_lib0clear(&___nl__0);
#line 150
return ___nl__1;
#line 150
c_rt_lib0clear(&___nl__1);
#line 150
c_rt_lib0clear(&___nl__0);
#line 150
return NULL;
}

ImmT pretty_printer_priv0print_hash_elem(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 154
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 154
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(220)));
#line 154
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 154
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 154
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(219)));
#line 154
label_3:
#line 154
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 154
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 155
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(283)));
#line 155
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__2, ___get_global_const(803)));
#line 156
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 156
c_rt_lib0move(&___nl__5,___get_global_const(192));
#line 156
c_rt_lib0move(&___nl__5, c_rt_lib0concat_new(___nl__2, ___nl__5));
#line 156
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 156
c_rt_lib0move(&___nl__3, pretty_printer_priv0get_compressed_fun_val(___nl__4, ___nl__5, ___nl__6));
#line 156
c_rt_lib0clear(&___nl__6);
#line 156
c_rt_lib0clear(&___nl__5);
#line 156
c_rt_lib0clear(&___nl__4);
#line 156
c_rt_lib0clear(&___nl__0);
#line 156
c_rt_lib0clear(&___nl__1);
#line 156
c_rt_lib0clear(&___nl__2);
#line 156
return ___nl__3;
#line 156
c_rt_lib0clear(&___nl__3);
#line 156
c_rt_lib0clear(&___nl__2);
#line 157
goto label_2;
#line 157
label_2:
#line 157
c_rt_lib0clear(&___nl__1);
#line 158
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(283)));
#line 158
c_rt_lib0move(&___nl__3, pretty_printer_priv0print_val(___nl__4));
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0move(&___nl__4, wprinter0get_sep());
#line 158
c_rt_lib0move(&___nl__6,___get_global_const(175));
#line 158
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 158
c_rt_lib0clear(&___nl__6);
#line 158
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 158
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 158
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 158
c_rt_lib0clear(&___nl__8);
#line 158
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(5, ___nl__3, ___nl__4, ___nl__5, ___nl__6, ___nl__7));
#line 158
c_rt_lib0clear(&___nl__3);
#line 158
c_rt_lib0clear(&___nl__4);
#line 158
c_rt_lib0clear(&___nl__5);
#line 158
c_rt_lib0clear(&___nl__6);
#line 158
c_rt_lib0clear(&___nl__7);
#line 158
c_rt_lib0move(&___nl__1, wprinter0build_pretty_l(___nl__2));
#line 158
c_rt_lib0clear(&___nl__2);
#line 158
c_rt_lib0clear(&___nl__0);
#line 158
return ___nl__1;
#line 158
c_rt_lib0clear(&___nl__1);
#line 158
c_rt_lib0clear(&___nl__0);
#line 158
return NULL;
}

ImmT pretty_printer_priv0print_variant(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 168
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 168
c_rt_lib0move(&___nl__3,___get_global_const(6));
#line 168
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__3));
#line 168
c_rt_lib0clear(&___nl__3);
#line 168
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 168
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 168
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(796)));
#line 168
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(778)));
#line 168
label_3:
#line 168
c_rt_lib0clear(&___nl__2);
#line 168
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 168
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 169
c_rt_lib0move(&___nl__3,___get_global_const(901));
#line 169
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 169
c_rt_lib0clear(&___nl__3);
#line 169
c_rt_lib0clear(&___nl__0);
#line 169
c_rt_lib0clear(&___nl__1);
#line 169
return ___nl__2;
#line 169
c_rt_lib0clear(&___nl__2);
#line 170
goto label_4;
#line 170
label_2:
#line 170
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 170
c_rt_lib0move(&___nl__3,___get_global_const(7));
#line 170
c_rt_lib0move(&___nl__1, c_rt_lib0eq(___nl__1, ___nl__3));
#line 170
c_rt_lib0clear(&___nl__3);
#line 170
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 170
if(c_rt_lib0check_true_native(___nl__2)){ goto label_5;}
#line 170
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(796)));
#line 170
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(778)));
#line 170
label_5:
#line 170
c_rt_lib0clear(&___nl__2);
#line 170
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 170
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 171
c_rt_lib0move(&___nl__3,___get_global_const(902));
#line 171
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 171
c_rt_lib0clear(&___nl__3);
#line 171
c_rt_lib0clear(&___nl__0);
#line 171
c_rt_lib0clear(&___nl__1);
#line 171
return ___nl__2;
#line 171
c_rt_lib0clear(&___nl__2);
#line 172
goto label_4;
#line 172
label_4:
#line 172
c_rt_lib0clear(&___nl__1);
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(796)));
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(219)));
#line 173
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(796)));
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(220)));
#line 173
label_8:
#line 173
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 173
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 174
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(796)));
#line 174
c_rt_lib0move(&___nl__4,___get_global_const(375));
#line 174
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 174
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 174
c_rt_lib0clear(&___nl__5);
#line 174
c_rt_lib0move(&___nl__5,___get_global_const(326));
#line 174
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__5));
#line 174
c_rt_lib0clear(&___nl__5);
#line 174
c_rt_lib0move(&___nl__5,___get_global_const(181));
#line 174
c_rt_lib0move(&___nl__2, pretty_printer_priv0get_compressed_fun_val(___nl__3, ___nl__4, ___nl__5));
#line 174
c_rt_lib0clear(&___nl__5);
#line 174
c_rt_lib0clear(&___nl__4);
#line 174
c_rt_lib0clear(&___nl__3);
#line 174
c_rt_lib0clear(&___nl__0);
#line 174
c_rt_lib0clear(&___nl__1);
#line 174
return ___nl__2;
#line 174
c_rt_lib0clear(&___nl__2);
#line 175
goto label_7;
#line 175
label_7:
#line 175
c_rt_lib0clear(&___nl__1);
#line 176
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 177
c_rt_lib0move(&___nl__3,___get_global_const(375));
#line 177
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 177
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 177
c_rt_lib0clear(&___nl__4);
#line 177
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 177
c_rt_lib0clear(&___nl__3);
#line 177
c_rt_lib0delete(array0push(&___nl__1, ___nl__2));
#line 177
c_rt_lib0clear(&___nl__2);
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(796)));
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(778)));
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 178
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 178
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 178
c_rt_lib0move(&___nl__5,___get_global_const(326));
#line 178
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 178
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(796)));
#line 178
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__6));
#line 178
c_rt_lib0clear(&___nl__6);
#line 178
c_rt_lib0move(&___nl__7,___get_global_const(181));
#line 178
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 178
c_rt_lib0clear(&___nl__7);
#line 178
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(3, ___nl__4, ___nl__5, ___nl__6));
#line 178
c_rt_lib0clear(&___nl__4);
#line 178
c_rt_lib0clear(&___nl__5);
#line 178
c_rt_lib0clear(&___nl__6);
#line 178
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 178
c_rt_lib0clear(&___nl__3);
#line 178
goto label_10;
#line 178
label_10:
#line 178
c_rt_lib0clear(&___nl__2);
#line 180
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 180
c_rt_lib0clear(&___nl__0);
#line 180
c_rt_lib0clear(&___nl__1);
#line 180
return ___nl__2;
#line 180
c_rt_lib0clear(&___nl__2);
#line 180
c_rt_lib0clear(&___nl__1);
#line 180
c_rt_lib0clear(&___nl__0);
#line 180
return NULL;
}

ImmT pretty_printer_priv0print_variant_case_decl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 184
c_rt_lib0move(&___nl__3,___get_global_const(375));
#line 184
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(78)));
#line 184
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 184
c_rt_lib0clear(&___nl__4);
#line 184
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 184
c_rt_lib0clear(&___nl__3);
#line 184
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 184
c_rt_lib0clear(&___nl__2);
#line 185
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(650)));
#line 185
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(650)));
#line 185
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 187
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(38)));
#line 187
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 187
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 187
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 187
nl_die_arg(___nl__3);
#line 185
label_2:
#line 185
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__2, ___get_global_const(650)));
#line 186
c_rt_lib0move(&___nl__7,___get_global_const(326));
#line 186
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 186
c_rt_lib0clear(&___nl__7);
#line 186
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_var_decl(___nl__4));
#line 186
c_rt_lib0move(&___nl__9,___get_global_const(181));
#line 186
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 186
c_rt_lib0clear(&___nl__9);
#line 186
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(3, ___nl__6, ___nl__7, ___nl__8));
#line 186
c_rt_lib0clear(&___nl__6);
#line 186
c_rt_lib0clear(&___nl__7);
#line 186
c_rt_lib0clear(&___nl__8);
#line 186
c_rt_lib0delete(array0append(&___nl__1, ___nl__5));
#line 186
c_rt_lib0clear(&___nl__5);
#line 186
c_rt_lib0clear(&___nl__4);
#line 187
goto label_1;
#line 187
label_3:
#line 188
goto label_1;
#line 188
label_1:
#line 188
c_rt_lib0clear(&___nl__2);
#line 188
c_rt_lib0clear(&___nl__3);
#line 189
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 189
c_rt_lib0clear(&___nl__0);
#line 189
c_rt_lib0clear(&___nl__1);
#line 189
return ___nl__2;
#line 189
c_rt_lib0clear(&___nl__2);
#line 189
c_rt_lib0clear(&___nl__1);
#line 189
c_rt_lib0clear(&___nl__0);
#line 189
return NULL;
}

ImmT pretty_printer_priv0join_print_fun_arg(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 193
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 194
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 194
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 194
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 194
label_3:
#line 194
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 194
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 195
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 195
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_fun_arg(___nl__7));
#line 195
c_rt_lib0clear(&___nl__7);
#line 195
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 195
c_rt_lib0clear(&___nl__6);
#line 196
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 196
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 196
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 196
c_rt_lib0clear(&___nl__7);
#line 196
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 196
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 196
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 196
c_rt_lib0move(&___nl__9,___get_global_const(177));
#line 196
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 196
c_rt_lib0clear(&___nl__9);
#line 196
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 196
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 196
c_rt_lib0clear(&___nl__8);
#line 196
c_rt_lib0clear(&___nl__9);
#line 196
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 196
c_rt_lib0clear(&___nl__7);
#line 196
goto label_5;
#line 196
label_5:
#line 196
c_rt_lib0clear(&___nl__6);
#line 197
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 197
goto label_3;
#line 197
label_1:
#line 197
c_rt_lib0clear(&___nl__2);
#line 197
c_rt_lib0clear(&___nl__3);
#line 197
c_rt_lib0clear(&___nl__4);
#line 197
c_rt_lib0clear(&___nl__5);
#line 198
c_rt_lib0clear(&___nl__0);
#line 198
return ___nl__1;
#line 198
c_rt_lib0clear(&___nl__1);
#line 198
c_rt_lib0clear(&___nl__0);
#line 198
return NULL;
}

ImmT pretty_printer_priv0print_fun_arg(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 203
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(261)));
#line 203
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(5)));
#line 203
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 205
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__2, ___get_global_const(38)));
#line 205
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 205
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 205
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__2));
#line 205
nl_die_arg(___nl__3);
#line 203
label_2:
#line 204
c_rt_lib0move(&___nl__6,___get_global_const(5));
#line 204
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 204
c_rt_lib0clear(&___nl__6);
#line 204
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 204
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 204
c_rt_lib0clear(&___nl__5);
#line 204
c_rt_lib0clear(&___nl__6);
#line 204
c_rt_lib0delete(array0append(&___nl__1, ___nl__4));
#line 204
c_rt_lib0clear(&___nl__4);
#line 205
goto label_1;
#line 205
label_3:
#line 206
goto label_1;
#line 206
label_1:
#line 206
c_rt_lib0clear(&___nl__2);
#line 206
c_rt_lib0clear(&___nl__3);
#line 207
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(238)));
#line 207
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_val(___nl__3));
#line 207
c_rt_lib0clear(&___nl__3);
#line 207
c_rt_lib0delete(array0push(&___nl__1, ___nl__2));
#line 207
c_rt_lib0clear(&___nl__2);
#line 208
c_rt_lib0move(&___nl__2, wprinter0build_pretty_op_l(___nl__1));
#line 208
c_rt_lib0clear(&___nl__0);
#line 208
c_rt_lib0clear(&___nl__1);
#line 208
return ___nl__2;
#line 208
c_rt_lib0clear(&___nl__2);
#line 208
c_rt_lib0clear(&___nl__1);
#line 208
c_rt_lib0clear(&___nl__0);
#line 208
return NULL;
}

ImmT pretty_printer_priv0count_structs(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 212
c_rt_lib0move(&___nl__1,___get_global_const(1));
#line 213
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 213
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 213
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__0));
#line 213
label_3:
#line 213
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 213
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 213
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 214
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(238)));
#line 214
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(219)));
#line 214
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 214
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(238)));
#line 214
c_rt_lib0move(&___nl__7, c_rt_lib0priv_is(___nl__7, ___get_global_const(220)));
#line 214
label_6:
#line 214
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 214
if(c_rt_lib0check_true_native(___nl__7)){ goto label_5;}
#line 214
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 214
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__8));
#line 214
c_rt_lib0clear(&___nl__8);
#line 214
goto label_5;
#line 214
label_5:
#line 214
c_rt_lib0clear(&___nl__7);
#line 215
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 215
goto label_3;
#line 215
label_1:
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
#line 216
c_rt_lib0clear(&___nl__0);
#line 216
return ___nl__1;
#line 216
c_rt_lib0clear(&___nl__1);
#line 216
c_rt_lib0clear(&___nl__0);
#line 216
return NULL;
}

ImmT pretty_printer_priv0get_compressed_fun_val(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 221
c_rt_lib0copy(&___nl__4, ___nl__1);
#line 222
c_rt_lib0copy(&___nl__5, ___nl__2);
#line 223
label_2:
#line 224
c_rt_lib0copy(&___nl__6, ___nl__0);
#line 224
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(219)));
#line 224
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 224
if(c_rt_lib0check_true_native(___nl__6)){ goto label_4;}
#line 225
c_rt_lib0copy(&___nl__7, ___nl__0);
#line 225
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(219)));
#line 226
c_rt_lib0move(&___nl__8,___get_global_const(179));
#line 226
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__8));
#line 226
c_rt_lib0clear(&___nl__8);
#line 227
c_rt_lib0move(&___nl__8,___get_global_const(180));
#line 227
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 227
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 227
c_rt_lib0clear(&___nl__8);
#line 228
c_rt_lib0move(&___nl__8, array0len(___nl__7));
#line 228
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 228
c_rt_lib0move(&___nl__8, c_rt_lib0num_ne(___nl__8, ___nl__9));
#line 228
c_rt_lib0clear(&___nl__9);
#line 228
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 228
if(c_rt_lib0check_true_native(___nl__8)){ goto label_6;}
#line 229
c_rt_lib0move(&___nl__9, pretty_printer_priv0join_print_val(___nl__7));
#line 229
c_rt_lib0copy(&___nl__3, ___nl__9);
#line 229
c_rt_lib0clear(&___nl__9);
#line 230
c_rt_lib0clear(&___nl__6);
#line 230
c_rt_lib0clear(&___nl__7);
#line 230
c_rt_lib0clear(&___nl__8);
#line 230
goto label_1;
#line 231
goto label_6;
#line 231
label_6:
#line 231
c_rt_lib0clear(&___nl__8);
#line 232
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 232
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__7, ___nl__9));
#line 232
c_rt_lib0clear(&___nl__9);
#line 232
c_rt_lib0copy(&___nl__0, ___nl__8);
#line 232
c_rt_lib0clear(&___nl__8);
#line 232
c_rt_lib0clear(&___nl__7);
#line 233
goto label_3;
#line 233
label_4:
#line 233
c_rt_lib0copy(&___nl__6, ___nl__0);
#line 233
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(220)));
#line 233
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 233
if(c_rt_lib0check_true_native(___nl__6)){ goto label_7;}
#line 234
c_rt_lib0copy(&___nl__7, ___nl__0);
#line 234
c_rt_lib0move(&___nl__7, c_rt_lib0priv_as(___nl__7, ___get_global_const(220)));
#line 235
c_rt_lib0move(&___nl__8,___get_global_const(173));
#line 235
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__8));
#line 235
c_rt_lib0clear(&___nl__8);
#line 236
c_rt_lib0move(&___nl__8,___get_global_const(174));
#line 236
c_rt_lib0move(&___nl__8, c_rt_lib0concat_add(___nl__8, ___nl__5));
#line 236
c_rt_lib0copy(&___nl__5, ___nl__8);
#line 236
c_rt_lib0clear(&___nl__8);
#line 237
c_rt_lib0move(&___nl__8, pretty_printer_priv0join_print_hash_elem(___nl__7));
#line 237
c_rt_lib0copy(&___nl__3, ___nl__8);
#line 237
c_rt_lib0clear(&___nl__8);
#line 238
c_rt_lib0clear(&___nl__6);
#line 238
c_rt_lib0clear(&___nl__7);
#line 238
goto label_1;
#line 238
c_rt_lib0clear(&___nl__7);
#line 239
goto label_3;
#line 239
label_7:
#line 240
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__0));
#line 240
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(1, ___nl__8));
#line 240
c_rt_lib0clear(&___nl__8);
#line 240
c_rt_lib0copy(&___nl__3, ___nl__7);
#line 240
c_rt_lib0clear(&___nl__7);
#line 241
c_rt_lib0clear(&___nl__6);
#line 241
goto label_1;
#line 242
goto label_3;
#line 242
label_3:
#line 242
c_rt_lib0clear(&___nl__6);
#line 223
goto label_2;
#line 223
label_1:
#line 244
c_rt_lib0move(&___nl__6, wprinter0build_pretty_arr_decl(___nl__3, ___nl__4, ___nl__5));
#line 244
c_rt_lib0clear(&___nl__0);
#line 244
c_rt_lib0clear(&___nl__1);
#line 244
c_rt_lib0clear(&___nl__2);
#line 244
c_rt_lib0clear(&___nl__3);
#line 244
c_rt_lib0clear(&___nl__4);
#line 244
c_rt_lib0clear(&___nl__5);
#line 244
return ___nl__6;
#line 244
c_rt_lib0clear(&___nl__6);
#line 244
c_rt_lib0clear(&___nl__3);
#line 244
c_rt_lib0clear(&___nl__4);
#line 244
c_rt_lib0clear(&___nl__5);
#line 244
c_rt_lib0clear(&___nl__0);
#line 244
c_rt_lib0clear(&___nl__1);
#line 244
c_rt_lib0clear(&___nl__2);
#line 244
return NULL;
}

ImmT pretty_printer_priv0print_st(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 248
c_rt_lib0move(&___nl__3,___get_global_const(607));
#line 248
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__3));
#line 248
c_rt_lib0clear(&___nl__3);
#line 249
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__1, ___nl__2));
#line 249
c_rt_lib0clear(&___nl__1);
#line 249
c_rt_lib0clear(&___nl__2);
#line 249
return NULL;
}

ImmT pretty_printer_priv0get_fun_label(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
pretty_printer_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 253
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 253
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 253
c_rt_lib0move(&___nl__2,___get_global_const(583));
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 253
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 253
goto label_1;
#line 253
label_2:
#line 253
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 253
label_1:
#line 253
c_rt_lib0clear(&___nl__0);
#line 253
c_rt_lib0clear(&___nl__1);
#line 253
return ___nl__2;
#line 253
c_rt_lib0clear(&___nl__2);
#line 253
c_rt_lib0clear(&___nl__0);
#line 253
c_rt_lib0clear(&___nl__1);
#line 253
return NULL;
}

ImmT pretty_printer_priv0string_to_nl(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 257
c_rt_lib0move(&___nl__2,___get_global_const(425));
#line 257
c_rt_lib0move(&___nl__3,___get_global_const(949));
#line 257
c_rt_lib0move(&___nl__1, string0replace(___nl__0, ___nl__2, ___nl__3));
#line 257
c_rt_lib0clear(&___nl__3);
#line 257
c_rt_lib0clear(&___nl__2);
#line 257
c_rt_lib0clear(&___nl__0);
#line 257
return ___nl__1;
#line 257
c_rt_lib0clear(&___nl__1);
#line 257
c_rt_lib0clear(&___nl__0);
#line 257
return NULL;
}

ImmT pretty_printer_priv0join_print_val(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 261
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 262
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 262
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 262
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 262
label_3:
#line 262
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__2));
#line 262
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 263
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 263
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 263
c_rt_lib0clear(&___nl__7);
#line 263
c_rt_lib0delete(array0push(&___nl__1, ___nl__6));
#line 263
c_rt_lib0clear(&___nl__6);
#line 264
c_rt_lib0move(&___nl__6, array0len(___nl__0));
#line 264
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 264
c_rt_lib0move(&___nl__6, c_rt_lib0sub_mod(___nl__6, ___nl__7));
#line 264
c_rt_lib0clear(&___nl__7);
#line 264
c_rt_lib0move(&___nl__6, c_rt_lib0num_ne(___nl__3, ___nl__6));
#line 264
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 264
if(c_rt_lib0check_true_native(___nl__6)){ goto label_5;}
#line 264
c_rt_lib0move(&___nl__9,___get_global_const(177));
#line 264
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 264
c_rt_lib0clear(&___nl__9);
#line 264
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 264
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(2, ___nl__8, ___nl__9));
#line 264
c_rt_lib0clear(&___nl__8);
#line 264
c_rt_lib0clear(&___nl__9);
#line 264
c_rt_lib0delete(array0append(&___nl__1, ___nl__7));
#line 264
c_rt_lib0clear(&___nl__7);
#line 264
goto label_5;
#line 264
label_5:
#line 264
c_rt_lib0clear(&___nl__6);
#line 265
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 265
goto label_3;
#line 265
label_1:
#line 265
c_rt_lib0clear(&___nl__2);
#line 265
c_rt_lib0clear(&___nl__3);
#line 265
c_rt_lib0clear(&___nl__4);
#line 265
c_rt_lib0clear(&___nl__5);
#line 266
c_rt_lib0clear(&___nl__0);
#line 266
return ___nl__1;
#line 266
c_rt_lib0clear(&___nl__1);
#line 266
c_rt_lib0clear(&___nl__0);
#line 266
return NULL;
}

ImmT pretty_printer_priv0is_to_change_ov(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 270
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 270
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(759)));
#line 270
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 270
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 270
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 270
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 270
c_rt_lib0clear(&___nl__0);
#line 270
c_rt_lib0clear(&___nl__1);
#line 270
return ___nl__2;
#line 270
c_rt_lib0clear(&___nl__2);
#line 270
goto label_2;
#line 270
label_2:
#line 270
c_rt_lib0clear(&___nl__1);
#line 271
c_rt_lib0copy(&___nl__1, ___nl__0);
#line 271
c_rt_lib0move(&___nl__1, c_rt_lib0priv_as(___nl__1, ___get_global_const(759)));
#line 272
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 272
c_rt_lib0move(&___nl__2, array0len(___nl__4));
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0move(&___nl__4,___get_global_const(139));
#line 272
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__2, ___nl__4));
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 272
if(c_rt_lib0check_true_native(___nl__3)){ goto label_6;}
#line 272
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(111)));
#line 272
c_rt_lib0move(&___nl__4,___get_global_const(718));
#line 272
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 272
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(111)));
#line 272
c_rt_lib0move(&___nl__4,___get_global_const(950));
#line 272
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__4));
#line 272
c_rt_lib0clear(&___nl__4);
#line 272
label_6:
#line 272
c_rt_lib0clear(&___nl__3);
#line 272
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 272
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 273
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(78)));
#line 273
c_rt_lib0move(&___nl__5,___get_global_const(832));
#line 273
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 273
c_rt_lib0clear(&___nl__5);
#line 273
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 273
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(78)));
#line 273
c_rt_lib0move(&___nl__5,___get_global_const(830));
#line 273
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 273
c_rt_lib0clear(&___nl__5);
#line 273
label_10:
#line 273
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 273
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 273
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 273
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 273
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__3, ___nl__5));
#line 273
c_rt_lib0clear(&___nl__5);
#line 273
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__3, ___get_global_const(238)));
#line 273
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__3, ___get_global_const(717)));
#line 273
label_9:
#line 273
c_rt_lib0clear(&___nl__4);
#line 273
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 273
if(c_rt_lib0check_true_native(___nl__3)){ goto label_8;}
#line 274
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(74)));
#line 274
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 274
c_rt_lib0move(&___nl__4, c_rt_lib0array_get(___nl__4, ___nl__5));
#line 274
c_rt_lib0clear(&___nl__5);
#line 274
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(238)));
#line 274
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(717)));
#line 275
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(281)));
#line 275
c_rt_lib0move(&___nl__5, array0len(___nl__7));
#line 275
c_rt_lib0clear(&___nl__7);
#line 275
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 275
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 275
c_rt_lib0clear(&___nl__7);
#line 275
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 275
if(c_rt_lib0check_true_native(___nl__6)){ goto label_13;}
#line 275
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(281)));
#line 275
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 275
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__7, ___nl__8));
#line 275
c_rt_lib0clear(&___nl__8);
#line 275
c_rt_lib0move(&___nl__8,___get_global_const(607));
#line 275
c_rt_lib0move(&___nl__5, string0index2(___nl__7, ___nl__8));
#line 275
c_rt_lib0clear(&___nl__8);
#line 275
c_rt_lib0clear(&___nl__7);
#line 275
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 275
c_rt_lib0move(&___nl__5, c_rt_lib0lt(___nl__5, ___nl__7));
#line 275
c_rt_lib0clear(&___nl__7);
#line 275
label_13:
#line 275
c_rt_lib0clear(&___nl__6);
#line 275
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 275
if(c_rt_lib0check_true_native(___nl__5)){ goto label_12;}
#line 276
c_rt_lib0move(&___nl__6, c_rt_lib0get_true());
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
return ___nl__6;
#line 276
c_rt_lib0clear(&___nl__6);
#line 277
goto label_12;
#line 277
label_12:
#line 277
c_rt_lib0clear(&___nl__5);
#line 277
c_rt_lib0clear(&___nl__4);
#line 278
goto label_8;
#line 278
label_8:
#line 278
c_rt_lib0clear(&___nl__3);
#line 279
goto label_4;
#line 279
label_4:
#line 279
c_rt_lib0clear(&___nl__2);
#line 280
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 280
c_rt_lib0clear(&___nl__0);
#line 280
c_rt_lib0clear(&___nl__1);
#line 280
return ___nl__2;
#line 280
c_rt_lib0clear(&___nl__2);
#line 280
c_rt_lib0clear(&___nl__1);
#line 280
c_rt_lib0clear(&___nl__0);
#line 280
return NULL;
}

ImmT pretty_printer_priv0print_val(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
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
#line 284
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(298)));
#line 284
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 286
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(717)));
#line 286
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 296
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 296
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 298
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(788)));
#line 298
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 300
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(796)));
#line 300
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 302
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
#line 302
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 304
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 304
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 312
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(223)));
#line 312
if(c_rt_lib0check_true_native(___nl__1)){ goto label_9;}
#line 345
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 345
if(c_rt_lib0check_true_native(___nl__1)){ goto label_10;}
#line 360
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(808)));
#line 360
if(c_rt_lib0check_true_native(___nl__1)){ goto label_11;}
#line 362
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(807)));
#line 362
if(c_rt_lib0check_true_native(___nl__1)){ goto label_12;}
#line 364
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 364
if(c_rt_lib0check_true_native(___nl__1)){ goto label_13;}
#line 366
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(759)));
#line 366
if(c_rt_lib0check_true_native(___nl__1)){ goto label_14;}
#line 390
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(778)));
#line 390
if(c_rt_lib0check_true_native(___nl__1)){ goto label_15;}
#line 392
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(219)));
#line 392
if(c_rt_lib0check_true_native(___nl__1)){ goto label_16;}
#line 394
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(220)));
#line 394
if(c_rt_lib0check_true_native(___nl__1)){ goto label_17;}
#line 396
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(806)));
#line 396
if(c_rt_lib0check_true_native(___nl__1)){ goto label_18;}
#line 396
c_rt_lib0move(&___nl__1,___get_global_const(76));
#line 396
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 396
nl_die_arg(___nl__1);
#line 284
label_2:
#line 284
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(298)));
#line 285
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__2));
#line 285
c_rt_lib0clear(&___nl__0);
#line 285
c_rt_lib0clear(&___nl__1);
#line 285
c_rt_lib0clear(&___nl__2);
#line 285
return ___nl__3;
#line 285
c_rt_lib0clear(&___nl__3);
#line 285
c_rt_lib0clear(&___nl__2);
#line 286
goto label_1;
#line 286
label_3:
#line 286
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(717)));
#line 287
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 288
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(281)));
#line 288
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 288
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 288
c_rt_lib0move(&___nl__8, c_rt_lib0array_len(___nl__4));
#line 288
label_21:
#line 288
c_rt_lib0move(&___nl__9, c_rt_lib0ge(___nl__6, ___nl__8));
#line 288
if(c_rt_lib0check_true_native(___nl__9)){ goto label_19;}
#line 288
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__4, ___nl__6));
#line 289
c_rt_lib0move(&___nl__10,___get_global_const(425));
#line 289
c_rt_lib0move(&___nl__11, pretty_printer_priv0string_to_nl(___nl__5));
#line 289
c_rt_lib0move(&___nl__10, c_rt_lib0concat_add(___nl__10, ___nl__11));
#line 289
c_rt_lib0clear(&___nl__11);
#line 289
c_rt_lib0delete(array0push(&___nl__3, ___nl__10));
#line 289
c_rt_lib0clear(&___nl__10);
#line 290
c_rt_lib0move(&___nl__6, c_rt_lib0add_mod(___nl__6, ___nl__7));
#line 290
goto label_21;
#line 290
label_19:
#line 290
c_rt_lib0clear(&___nl__4);
#line 290
c_rt_lib0clear(&___nl__5);
#line 290
c_rt_lib0clear(&___nl__6);
#line 290
c_rt_lib0clear(&___nl__7);
#line 290
c_rt_lib0clear(&___nl__8);
#line 290
c_rt_lib0clear(&___nl__9);
#line 291
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(852)));
#line 291
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(851)));
#line 291
if(c_rt_lib0check_true_native(___nl__5)){ goto label_23;}
#line 292
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(850)));
#line 292
if(c_rt_lib0check_true_native(___nl__5)){ goto label_24;}
#line 292
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 292
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 292
nl_die_arg(___nl__5);
#line 291
label_23:
#line 292
goto label_22;
#line 292
label_24:
#line 293
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 293
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 293
c_rt_lib0move(&___nl__7, c_rt_lib0sub_mod(___nl__7, ___nl__8));
#line 293
c_rt_lib0clear(&___nl__8);
#line 293
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__3, ___nl__7));
#line 293
c_rt_lib0clear(&___nl__7);
#line 293
c_rt_lib0move(&___nl__7,___get_global_const(425));
#line 293
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 293
c_rt_lib0clear(&___nl__7);
#line 293
c_rt_lib0move(&___nl__8, array0len(___nl__3));
#line 293
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 293
c_rt_lib0move(&___nl__8, c_rt_lib0sub_mod(___nl__8, ___nl__9));
#line 293
c_rt_lib0clear(&___nl__9);
#line 293
c_rt_lib0copy(&___nl__7, ___nl__6);
#line 293
c_rt_lib0array_set(&___nl__3, ___nl__8, ___nl__7);
#line 293
c_rt_lib0clear(&___nl__6);
#line 293
c_rt_lib0clear(&___nl__7);
#line 293
c_rt_lib0clear(&___nl__8);
#line 294
goto label_22;
#line 294
label_22:
#line 294
c_rt_lib0clear(&___nl__4);
#line 294
c_rt_lib0clear(&___nl__5);
#line 295
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(852)));
#line 295
c_rt_lib0move(&___nl__4, wprinter0build_str_arr(___nl__3, ___nl__5));
#line 295
c_rt_lib0clear(&___nl__5);
#line 295
c_rt_lib0clear(&___nl__0);
#line 295
c_rt_lib0clear(&___nl__1);
#line 295
c_rt_lib0clear(&___nl__2);
#line 295
c_rt_lib0clear(&___nl__3);
#line 295
return ___nl__4;
#line 295
c_rt_lib0clear(&___nl__4);
#line 295
c_rt_lib0clear(&___nl__3);
#line 295
c_rt_lib0clear(&___nl__2);
#line 296
goto label_1;
#line 296
label_4:
#line 296
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(803)));
#line 297
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__2));
#line 297
c_rt_lib0clear(&___nl__0);
#line 297
c_rt_lib0clear(&___nl__1);
#line 297
c_rt_lib0clear(&___nl__2);
#line 297
return ___nl__3;
#line 297
c_rt_lib0clear(&___nl__3);
#line 297
c_rt_lib0clear(&___nl__2);
#line 298
goto label_1;
#line 298
label_5:
#line 298
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(788)));
#line 299
c_rt_lib0move(&___nl__3, pretty_printer_priv0print_variant(___nl__2));
#line 299
c_rt_lib0clear(&___nl__0);
#line 299
c_rt_lib0clear(&___nl__1);
#line 299
c_rt_lib0clear(&___nl__2);
#line 299
return ___nl__3;
#line 299
c_rt_lib0clear(&___nl__3);
#line 299
c_rt_lib0clear(&___nl__2);
#line 300
goto label_1;
#line 300
label_6:
#line 300
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(796)));
#line 301
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__2));
#line 301
c_rt_lib0clear(&___nl__0);
#line 301
c_rt_lib0clear(&___nl__1);
#line 301
c_rt_lib0clear(&___nl__2);
#line 301
return ___nl__3;
#line 301
c_rt_lib0clear(&___nl__3);
#line 301
c_rt_lib0clear(&___nl__2);
#line 302
goto label_1;
#line 302
label_7:
#line 302
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(802)));
#line 303
c_rt_lib0move(&___nl__6,___get_global_const(326));
#line 303
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 303
c_rt_lib0clear(&___nl__6);
#line 303
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__2));
#line 303
c_rt_lib0move(&___nl__8,___get_global_const(181));
#line 303
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 303
c_rt_lib0clear(&___nl__8);
#line 303
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(3, ___nl__5, ___nl__6, ___nl__7));
#line 303
c_rt_lib0clear(&___nl__5);
#line 303
c_rt_lib0clear(&___nl__6);
#line 303
c_rt_lib0clear(&___nl__7);
#line 303
c_rt_lib0move(&___nl__3, wprinter0build_pretty_a(___nl__4));
#line 303
c_rt_lib0clear(&___nl__4);
#line 303
c_rt_lib0clear(&___nl__0);
#line 303
c_rt_lib0clear(&___nl__1);
#line 303
c_rt_lib0clear(&___nl__2);
#line 303
return ___nl__3;
#line 303
c_rt_lib0clear(&___nl__3);
#line 303
c_rt_lib0clear(&___nl__2);
#line 304
goto label_1;
#line 304
label_8:
#line 304
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
#line 305
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(809)));
#line 305
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__6));
#line 305
c_rt_lib0clear(&___nl__6);
#line 305
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 305
c_rt_lib0move(&___nl__10,___get_global_const(951));
#line 305
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 305
c_rt_lib0clear(&___nl__10);
#line 305
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(810)));
#line 305
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 305
c_rt_lib0clear(&___nl__11);
#line 305
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__9, ___nl__10));
#line 305
c_rt_lib0clear(&___nl__9);
#line 305
c_rt_lib0clear(&___nl__10);
#line 305
c_rt_lib0move(&___nl__7, wprinter0build_pretty_op_l(___nl__8));
#line 305
c_rt_lib0clear(&___nl__8);
#line 305
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 305
c_rt_lib0move(&___nl__12,___get_global_const(952));
#line 305
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 305
c_rt_lib0clear(&___nl__12);
#line 305
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(811)));
#line 305
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_val(___nl__13));
#line 305
c_rt_lib0clear(&___nl__13);
#line 305
c_rt_lib0move(&___nl__10, c_rt_lib0array_mk(2, ___nl__11, ___nl__12));
#line 305
c_rt_lib0clear(&___nl__11);
#line 305
c_rt_lib0clear(&___nl__12);
#line 305
c_rt_lib0move(&___nl__9, wprinter0build_pretty_op_l(___nl__10));
#line 305
c_rt_lib0clear(&___nl__10);
#line 305
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(5, ___nl__5, ___nl__6, ___nl__7, ___nl__8, ___nl__9));
#line 305
c_rt_lib0clear(&___nl__5);
#line 305
c_rt_lib0clear(&___nl__6);
#line 305
c_rt_lib0clear(&___nl__7);
#line 305
c_rt_lib0clear(&___nl__8);
#line 305
c_rt_lib0clear(&___nl__9);
#line 305
c_rt_lib0move(&___nl__3, wprinter0build_pretty_a(___nl__4));
#line 305
c_rt_lib0clear(&___nl__4);
#line 305
c_rt_lib0clear(&___nl__0);
#line 305
c_rt_lib0clear(&___nl__1);
#line 305
c_rt_lib0clear(&___nl__2);
#line 305
return ___nl__3;
#line 305
c_rt_lib0clear(&___nl__3);
#line 305
c_rt_lib0clear(&___nl__2);
#line 312
goto label_1;
#line 312
label_9:
#line 312
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(223)));
#line 313
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(405)));
#line 314
c_rt_lib0move(&___nl__4,___get_global_const(798));
#line 314
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 314
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 314
if(c_rt_lib0check_true_native(___nl__4)){ goto label_26;}
#line 315
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 315
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 315
c_rt_lib0clear(&___nl__10);
#line 315
c_rt_lib0move(&___nl__11,___get_global_const(179));
#line 315
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 315
c_rt_lib0clear(&___nl__11);
#line 315
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__9, ___nl__10));
#line 315
c_rt_lib0clear(&___nl__9);
#line 315
c_rt_lib0clear(&___nl__10);
#line 315
c_rt_lib0move(&___nl__7, wprinter0build_pretty_l(___nl__8));
#line 315
c_rt_lib0clear(&___nl__8);
#line 315
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(240)));
#line 315
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__9));
#line 315
c_rt_lib0clear(&___nl__9);
#line 315
c_rt_lib0move(&___nl__10,___get_global_const(180));
#line 315
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 315
c_rt_lib0clear(&___nl__10);
#line 315
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(3, ___nl__7, ___nl__8, ___nl__9));
#line 315
c_rt_lib0clear(&___nl__7);
#line 315
c_rt_lib0clear(&___nl__8);
#line 315
c_rt_lib0clear(&___nl__9);
#line 315
c_rt_lib0move(&___nl__5, wprinter0build_pretty_a(___nl__6));
#line 315
c_rt_lib0clear(&___nl__6);
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
return ___nl__5;
#line 315
c_rt_lib0clear(&___nl__5);
#line 320
goto label_25;
#line 320
label_26:
#line 320
c_rt_lib0move(&___nl__4,___get_global_const(799));
#line 320
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 320
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 320
if(c_rt_lib0check_true_native(___nl__4)){ goto label_27;}
#line 321
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 321
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 321
c_rt_lib0clear(&___nl__10);
#line 321
c_rt_lib0move(&___nl__11,___get_global_const(173));
#line 321
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 321
c_rt_lib0clear(&___nl__11);
#line 321
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__9, ___nl__10));
#line 321
c_rt_lib0clear(&___nl__9);
#line 321
c_rt_lib0clear(&___nl__10);
#line 321
c_rt_lib0move(&___nl__7, wprinter0build_pretty_l(___nl__8));
#line 321
c_rt_lib0clear(&___nl__8);
#line 321
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(240)));
#line 321
c_rt_lib0move(&___nl__8, pretty_printer_priv0print_val(___nl__9));
#line 321
c_rt_lib0clear(&___nl__9);
#line 321
c_rt_lib0move(&___nl__10,___get_global_const(174));
#line 321
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 321
c_rt_lib0clear(&___nl__10);
#line 321
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(3, ___nl__7, ___nl__8, ___nl__9));
#line 321
c_rt_lib0clear(&___nl__7);
#line 321
c_rt_lib0clear(&___nl__8);
#line 321
c_rt_lib0clear(&___nl__9);
#line 321
c_rt_lib0move(&___nl__5, wprinter0build_pretty_a(___nl__6));
#line 321
c_rt_lib0clear(&___nl__6);
#line 321
c_rt_lib0clear(&___nl__0);
#line 321
c_rt_lib0clear(&___nl__1);
#line 321
c_rt_lib0clear(&___nl__2);
#line 321
c_rt_lib0clear(&___nl__3);
#line 321
c_rt_lib0clear(&___nl__4);
#line 321
return ___nl__5;
#line 321
c_rt_lib0clear(&___nl__5);
#line 326
goto label_25;
#line 326
label_27:
#line 326
c_rt_lib0move(&___nl__4,___get_global_const(797));
#line 326
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 326
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 326
if(c_rt_lib0check_true_native(___nl__4)){ goto label_28;}
#line 328
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 328
c_rt_lib0move(&___nl__6, pretty_printer_priv0is_to_change_ov(___nl__7));
#line 328
c_rt_lib0clear(&___nl__7);
#line 328
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 328
if(c_rt_lib0check_true_native(___nl__6)){ goto label_30;}
#line 329
c_rt_lib0move(&___nl__10,___get_global_const(326));
#line 329
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 329
c_rt_lib0clear(&___nl__10);
#line 329
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 329
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 329
c_rt_lib0clear(&___nl__11);
#line 329
c_rt_lib0move(&___nl__12,___get_global_const(181));
#line 329
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 329
c_rt_lib0clear(&___nl__12);
#line 329
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__9, ___nl__10, ___nl__11));
#line 329
c_rt_lib0clear(&___nl__9);
#line 329
c_rt_lib0clear(&___nl__10);
#line 329
c_rt_lib0clear(&___nl__11);
#line 329
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 329
c_rt_lib0clear(&___nl__8);
#line 329
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 329
c_rt_lib0clear(&___nl__7);
#line 334
goto label_29;
#line 334
label_30:
#line 335
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 335
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 335
c_rt_lib0clear(&___nl__8);
#line 335
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 335
c_rt_lib0clear(&___nl__7);
#line 336
goto label_29;
#line 336
label_29:
#line 336
c_rt_lib0clear(&___nl__6);
#line 337
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__3));
#line 337
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(240)));
#line 337
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 337
c_rt_lib0clear(&___nl__10);
#line 337
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__5, ___nl__8, ___nl__9));
#line 337
c_rt_lib0clear(&___nl__8);
#line 337
c_rt_lib0clear(&___nl__9);
#line 337
c_rt_lib0move(&___nl__6, wprinter0build_pretty_op_l(___nl__7));
#line 337
c_rt_lib0clear(&___nl__7);
#line 337
c_rt_lib0clear(&___nl__0);
#line 337
c_rt_lib0clear(&___nl__1);
#line 337
c_rt_lib0clear(&___nl__2);
#line 337
c_rt_lib0clear(&___nl__3);
#line 337
c_rt_lib0clear(&___nl__4);
#line 337
c_rt_lib0clear(&___nl__5);
#line 337
return ___nl__6;
#line 337
c_rt_lib0clear(&___nl__6);
#line 337
c_rt_lib0clear(&___nl__5);
#line 338
goto label_25;
#line 338
label_28:
#line 339
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 339
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 339
c_rt_lib0clear(&___nl__10);
#line 339
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 339
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__3));
#line 339
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__9, ___nl__10, ___nl__11));
#line 339
c_rt_lib0clear(&___nl__9);
#line 339
c_rt_lib0clear(&___nl__10);
#line 339
c_rt_lib0clear(&___nl__11);
#line 339
c_rt_lib0move(&___nl__7, wprinter0build_pretty_op_l(___nl__8));
#line 339
c_rt_lib0clear(&___nl__8);
#line 339
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 339
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(240)));
#line 339
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 339
c_rt_lib0clear(&___nl__10);
#line 339
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(3, ___nl__7, ___nl__8, ___nl__9));
#line 339
c_rt_lib0clear(&___nl__7);
#line 339
c_rt_lib0clear(&___nl__8);
#line 339
c_rt_lib0clear(&___nl__9);
#line 339
c_rt_lib0move(&___nl__5, wprinter0build_pretty_op_l(___nl__6));
#line 339
c_rt_lib0clear(&___nl__6);
#line 339
c_rt_lib0clear(&___nl__0);
#line 339
c_rt_lib0clear(&___nl__1);
#line 339
c_rt_lib0clear(&___nl__2);
#line 339
c_rt_lib0clear(&___nl__3);
#line 339
c_rt_lib0clear(&___nl__4);
#line 339
return ___nl__5;
#line 339
c_rt_lib0clear(&___nl__5);
#line 344
goto label_25;
#line 344
label_25:
#line 344
c_rt_lib0clear(&___nl__4);
#line 344
c_rt_lib0clear(&___nl__3);
#line 344
c_rt_lib0clear(&___nl__2);
#line 345
goto label_1;
#line 345
label_10:
#line 345
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(804)));
#line 347
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(405)));
#line 347
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(225)));
#line 347
if(c_rt_lib0check_true_native(___nl__5)){ goto label_32;}
#line 349
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(224)));
#line 349
if(c_rt_lib0check_true_native(___nl__5)){ goto label_33;}
#line 349
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 349
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 349
nl_die_arg(___nl__5);
#line 347
label_32:
#line 348
c_rt_lib0move(&___nl__6,___get_global_const(832));
#line 348
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 348
c_rt_lib0clear(&___nl__6);
#line 349
goto label_31;
#line 349
label_33:
#line 350
c_rt_lib0move(&___nl__6,___get_global_const(830));
#line 350
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 350
c_rt_lib0clear(&___nl__6);
#line 351
goto label_31;
#line 351
label_31:
#line 351
c_rt_lib0clear(&___nl__4);
#line 351
c_rt_lib0clear(&___nl__5);
#line 352
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 352
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 352
c_rt_lib0clear(&___nl__7);
#line 352
c_rt_lib0move(&___nl__7, wprinter0get_sep());
#line 352
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__3));
#line 352
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 352
c_rt_lib0move(&___nl__11,___get_global_const(375));
#line 352
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 352
c_rt_lib0clear(&___nl__11);
#line 352
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(847)));
#line 352
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 352
c_rt_lib0clear(&___nl__12);
#line 352
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(6, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11));
#line 352
c_rt_lib0clear(&___nl__6);
#line 352
c_rt_lib0clear(&___nl__7);
#line 352
c_rt_lib0clear(&___nl__8);
#line 352
c_rt_lib0clear(&___nl__9);
#line 352
c_rt_lib0clear(&___nl__10);
#line 352
c_rt_lib0clear(&___nl__11);
#line 352
c_rt_lib0move(&___nl__4, wprinter0build_pretty_op_l(___nl__5));
#line 352
c_rt_lib0clear(&___nl__5);
#line 352
c_rt_lib0clear(&___nl__0);
#line 352
c_rt_lib0clear(&___nl__1);
#line 352
c_rt_lib0clear(&___nl__2);
#line 352
c_rt_lib0clear(&___nl__3);
#line 352
return ___nl__4;
#line 352
c_rt_lib0clear(&___nl__4);
#line 352
c_rt_lib0clear(&___nl__3);
#line 352
c_rt_lib0clear(&___nl__2);
#line 360
goto label_1;
#line 360
label_11:
#line 360
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(808)));
#line 361
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__2));
#line 361
c_rt_lib0move(&___nl__7,___get_global_const(140));
#line 361
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 361
c_rt_lib0clear(&___nl__7);
#line 361
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 361
c_rt_lib0clear(&___nl__5);
#line 361
c_rt_lib0clear(&___nl__6);
#line 361
c_rt_lib0move(&___nl__3, wprinter0build_pretty_op_l(___nl__4));
#line 361
c_rt_lib0clear(&___nl__4);
#line 361
c_rt_lib0clear(&___nl__0);
#line 361
c_rt_lib0clear(&___nl__1);
#line 361
c_rt_lib0clear(&___nl__2);
#line 361
return ___nl__3;
#line 361
c_rt_lib0clear(&___nl__3);
#line 361
c_rt_lib0clear(&___nl__2);
#line 362
goto label_1;
#line 362
label_12:
#line 362
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(807)));
#line 363
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__2));
#line 363
c_rt_lib0move(&___nl__7,___get_global_const(826));
#line 363
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 363
c_rt_lib0clear(&___nl__7);
#line 363
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 363
c_rt_lib0clear(&___nl__5);
#line 363
c_rt_lib0clear(&___nl__6);
#line 363
c_rt_lib0move(&___nl__3, wprinter0build_pretty_op_l(___nl__4));
#line 363
c_rt_lib0clear(&___nl__4);
#line 363
c_rt_lib0clear(&___nl__0);
#line 363
c_rt_lib0clear(&___nl__1);
#line 363
c_rt_lib0clear(&___nl__2);
#line 363
return ___nl__3;
#line 363
c_rt_lib0clear(&___nl__3);
#line 363
c_rt_lib0clear(&___nl__2);
#line 364
goto label_1;
#line 364
label_13:
#line 364
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(805)));
#line 365
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(405)));
#line 365
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 365
c_rt_lib0clear(&___nl__5);
#line 365
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(238)));
#line 365
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__6));
#line 365
c_rt_lib0clear(&___nl__6);
#line 365
c_rt_lib0move(&___nl__3, wprinter0build_pretty_bind(___nl__4, ___nl__5));
#line 365
c_rt_lib0clear(&___nl__5);
#line 365
c_rt_lib0clear(&___nl__4);
#line 365
c_rt_lib0clear(&___nl__0);
#line 365
c_rt_lib0clear(&___nl__1);
#line 365
c_rt_lib0clear(&___nl__2);
#line 365
return ___nl__3;
#line 365
c_rt_lib0clear(&___nl__3);
#line 365
c_rt_lib0clear(&___nl__2);
#line 366
goto label_1;
#line 366
label_14:
#line 366
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(759)));
#line 367
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(78)));
#line 367
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(111)));
#line 367
c_rt_lib0move(&___nl__3, pretty_printer_priv0get_fun_label(___nl__4, ___nl__5));
#line 367
c_rt_lib0clear(&___nl__5);
#line 367
c_rt_lib0clear(&___nl__4);
#line 367
c_rt_lib0move(&___nl__4,___get_global_const(326));
#line 367
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 367
c_rt_lib0clear(&___nl__4);
#line 368
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 368
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 368
c_rt_lib0clear(&___nl__5);
#line 368
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 368
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 368
c_rt_lib0clear(&___nl__5);
#line 368
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 368
if(c_rt_lib0check_true_native(___nl__4)){ goto label_35;}
#line 369
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 369
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 369
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 369
c_rt_lib0clear(&___nl__6);
#line 369
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 370
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 370
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(220)));
#line 370
if(c_rt_lib0check_true_native(___nl__6)){ goto label_38;}
#line 370
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 370
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(219)));
#line 370
label_38:
#line 370
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 370
if(c_rt_lib0check_true_native(___nl__6)){ goto label_37;}
#line 371
c_rt_lib0move(&___nl__8,___get_global_const(181));
#line 371
c_rt_lib0move(&___nl__7, pretty_printer_priv0get_compressed_fun_val(___nl__5, ___nl__3, ___nl__8));
#line 371
c_rt_lib0clear(&___nl__8);
#line 371
c_rt_lib0clear(&___nl__0);
#line 371
c_rt_lib0clear(&___nl__1);
#line 371
c_rt_lib0clear(&___nl__2);
#line 371
c_rt_lib0clear(&___nl__3);
#line 371
c_rt_lib0clear(&___nl__4);
#line 371
c_rt_lib0clear(&___nl__5);
#line 371
c_rt_lib0clear(&___nl__6);
#line 371
return ___nl__7;
#line 371
c_rt_lib0clear(&___nl__7);
#line 372
goto label_37;
#line 372
label_37:
#line 372
c_rt_lib0clear(&___nl__6);
#line 372
c_rt_lib0clear(&___nl__5);
#line 373
goto label_39;
#line 373
label_35:
#line 373
c_rt_lib0move(&___nl__4, pretty_printer_priv0is_to_change_ov(___nl__0));
#line 373
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 373
if(c_rt_lib0check_true_native(___nl__4)){ goto label_39;}
#line 374
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 374
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 374
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 374
c_rt_lib0clear(&___nl__9);
#line 374
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(238)));
#line 374
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 374
c_rt_lib0clear(&___nl__8);
#line 374
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 374
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(78)));
#line 374
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 374
c_rt_lib0clear(&___nl__10);
#line 374
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 374
c_rt_lib0move(&___nl__12,___get_global_const(375));
#line 374
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 374
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 374
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__13, ___nl__14));
#line 374
c_rt_lib0clear(&___nl__14);
#line 374
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(238)));
#line 374
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(717)));
#line 374
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(281)));
#line 374
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 374
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__13, ___nl__14));
#line 374
c_rt_lib0clear(&___nl__14);
#line 374
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 374
c_rt_lib0clear(&___nl__13);
#line 374
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 374
c_rt_lib0clear(&___nl__12);
#line 374
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(5, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11));
#line 374
c_rt_lib0clear(&___nl__7);
#line 374
c_rt_lib0clear(&___nl__8);
#line 374
c_rt_lib0clear(&___nl__9);
#line 374
c_rt_lib0clear(&___nl__10);
#line 374
c_rt_lib0clear(&___nl__11);
#line 374
c_rt_lib0move(&___nl__5, wprinter0build_pretty_op_l(___nl__6));
#line 374
c_rt_lib0clear(&___nl__6);
#line 374
c_rt_lib0clear(&___nl__0);
#line 374
c_rt_lib0clear(&___nl__1);
#line 374
c_rt_lib0clear(&___nl__2);
#line 374
c_rt_lib0clear(&___nl__3);
#line 374
c_rt_lib0clear(&___nl__4);
#line 374
return ___nl__5;
#line 374
c_rt_lib0clear(&___nl__5);
#line 381
goto label_39;
#line 381
label_39:
#line 381
c_rt_lib0clear(&___nl__4);
#line 382
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__3));
#line 382
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 382
c_rt_lib0clear(&___nl__5);
#line 383
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 383
c_rt_lib0move(&___nl__5, pretty_printer_priv0join_print_fun_arg(___nl__6));
#line 383
c_rt_lib0clear(&___nl__6);
#line 383
c_rt_lib0delete(array0append(&___nl__4, ___nl__5));
#line 383
c_rt_lib0clear(&___nl__5);
#line 384
c_rt_lib0move(&___nl__6,___get_global_const(181));
#line 384
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 384
c_rt_lib0clear(&___nl__6);
#line 384
c_rt_lib0delete(array0push(&___nl__4, ___nl__5));
#line 384
c_rt_lib0clear(&___nl__5);
#line 385
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 385
c_rt_lib0move(&___nl__5, pretty_printer_priv0count_structs(___nl__7));
#line 385
c_rt_lib0clear(&___nl__7);
#line 385
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 385
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 385
c_rt_lib0clear(&___nl__8);
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 385
c_rt_lib0clear(&___nl__7);
#line 385
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 385
if(c_rt_lib0check_true_native(___nl__6)){ goto label_43;}
#line 385
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 385
c_rt_lib0move(&___nl__5, array0len(___nl__7));
#line 385
c_rt_lib0clear(&___nl__7);
#line 385
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__7));
#line 385
c_rt_lib0clear(&___nl__7);
#line 385
label_43:
#line 385
c_rt_lib0clear(&___nl__6);
#line 385
if(c_rt_lib0check_true_native(___nl__5)){ goto label_42;}
#line 385
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 385
c_rt_lib0move(&___nl__5, array0len(___nl__7));
#line 385
c_rt_lib0clear(&___nl__7);
#line 385
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 385
c_rt_lib0clear(&___nl__7);
#line 385
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 385
if(c_rt_lib0check_true_native(___nl__6)){ goto label_44;}
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 385
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 385
c_rt_lib0clear(&___nl__7);
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(759)));
#line 385
label_44:
#line 385
c_rt_lib0clear(&___nl__6);
#line 385
label_42:
#line 385
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 385
if(c_rt_lib0check_true_native(___nl__5)){ goto label_41;}
#line 385
c_rt_lib0move(&___nl__6, wprinter0build_pretty_op_l(___nl__4));
#line 385
c_rt_lib0clear(&___nl__0);
#line 385
c_rt_lib0clear(&___nl__1);
#line 385
c_rt_lib0clear(&___nl__2);
#line 385
c_rt_lib0clear(&___nl__3);
#line 385
c_rt_lib0clear(&___nl__4);
#line 385
c_rt_lib0clear(&___nl__5);
#line 385
return ___nl__6;
#line 385
c_rt_lib0clear(&___nl__6);
#line 385
goto label_41;
#line 385
label_41:
#line 385
c_rt_lib0clear(&___nl__5);
#line 389
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__4));
#line 389
c_rt_lib0clear(&___nl__0);
#line 389
c_rt_lib0clear(&___nl__1);
#line 389
c_rt_lib0clear(&___nl__2);
#line 389
c_rt_lib0clear(&___nl__3);
#line 389
c_rt_lib0clear(&___nl__4);
#line 389
return ___nl__5;
#line 389
c_rt_lib0clear(&___nl__5);
#line 389
c_rt_lib0clear(&___nl__3);
#line 389
c_rt_lib0clear(&___nl__4);
#line 389
c_rt_lib0clear(&___nl__2);
#line 390
goto label_1;
#line 390
label_15:
#line 391
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 391
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 391
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(291), ___nl__4));
#line 391
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(162), ___nl__3, ___get_global_const(953), ___nl__4));
#line 391
c_rt_lib0clear(&___nl__3);
#line 391
c_rt_lib0clear(&___nl__4);
#line 391
c_rt_lib0clear(&___nl__0);
#line 391
c_rt_lib0clear(&___nl__1);
#line 391
return ___nl__2;
#line 391
c_rt_lib0clear(&___nl__2);
#line 392
goto label_1;
#line 392
label_16:
#line 392
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(219)));
#line 393
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__2));
#line 393
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 393
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 393
c_rt_lib0move(&___nl__3, pretty_printer_priv0get_compressed_fun_val(___nl__4, ___nl__5, ___nl__6));
#line 393
c_rt_lib0clear(&___nl__6);
#line 393
c_rt_lib0clear(&___nl__5);
#line 393
c_rt_lib0clear(&___nl__4);
#line 393
c_rt_lib0clear(&___nl__0);
#line 393
c_rt_lib0clear(&___nl__1);
#line 393
c_rt_lib0clear(&___nl__2);
#line 393
return ___nl__3;
#line 393
c_rt_lib0clear(&___nl__3);
#line 393
c_rt_lib0clear(&___nl__2);
#line 394
goto label_1;
#line 394
label_17:
#line 394
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(220)));
#line 395
c_rt_lib0move(&___nl__4, pretty_printer_priv0join_print_hash_elem(___nl__2));
#line 395
c_rt_lib0move(&___nl__5,___get_global_const(173));
#line 395
c_rt_lib0move(&___nl__6,___get_global_const(174));
#line 395
c_rt_lib0move(&___nl__3, wprinter0build_pretty_arr_decl(___nl__4, ___nl__5, ___nl__6));
#line 395
c_rt_lib0clear(&___nl__6);
#line 395
c_rt_lib0clear(&___nl__5);
#line 395
c_rt_lib0clear(&___nl__4);
#line 395
c_rt_lib0clear(&___nl__0);
#line 395
c_rt_lib0clear(&___nl__1);
#line 395
c_rt_lib0clear(&___nl__2);
#line 395
return ___nl__3;
#line 395
c_rt_lib0clear(&___nl__3);
#line 395
c_rt_lib0clear(&___nl__2);
#line 396
goto label_1;
#line 396
label_18:
#line 396
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(806)));
#line 397
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(78)));
#line 397
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(111)));
#line 397
c_rt_lib0move(&___nl__4, pretty_printer_priv0get_fun_label(___nl__5, ___nl__6));
#line 397
c_rt_lib0clear(&___nl__6);
#line 397
c_rt_lib0clear(&___nl__5);
#line 397
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__4));
#line 397
c_rt_lib0clear(&___nl__4);
#line 397
c_rt_lib0clear(&___nl__0);
#line 397
c_rt_lib0clear(&___nl__1);
#line 397
c_rt_lib0clear(&___nl__2);
#line 397
return ___nl__3;
#line 397
c_rt_lib0clear(&___nl__3);
#line 397
c_rt_lib0clear(&___nl__2);
#line 398
goto label_1;
#line 398
label_1:
#line 398
c_rt_lib0clear(&___nl__1);
#line 398
c_rt_lib0clear(&___nl__0);
#line 398
return NULL;
}

ImmT pretty_printer_priv0print_cond_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
pretty_printer_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
ImmT ___nl__10 = NULL;
ImmT ___nl__11 = NULL;
#line 403
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__1));
#line 403
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 403
c_rt_lib0move(&___nl__10, pretty_printer_priv0join_print_var_decl(___nl__3));
#line 403
c_rt_lib0move(&___nl__9, wprinter0build_pretty_l(___nl__10));
#line 403
c_rt_lib0clear(&___nl__10);
#line 403
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(3, ___nl__7, ___nl__8, ___nl__9));
#line 403
c_rt_lib0clear(&___nl__7);
#line 403
c_rt_lib0clear(&___nl__8);
#line 403
c_rt_lib0clear(&___nl__9);
#line 408
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 408
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 408
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 408
c_rt_lib0clear(&___nl__8);
#line 408
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 408
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 408
c_rt_lib0move(&___nl__9,___get_global_const(607));
#line 408
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 408
c_rt_lib0clear(&___nl__9);
#line 408
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 408
c_rt_lib0clear(&___nl__8);
#line 408
goto label_2;
#line 408
label_2:
#line 408
c_rt_lib0clear(&___nl__7);
#line 409
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 409
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 409
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 409
c_rt_lib0clear(&___nl__8);
#line 409
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 409
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 409
c_rt_lib0move(&___nl__9,___get_global_const(326));
#line 409
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 409
c_rt_lib0clear(&___nl__9);
#line 409
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 409
c_rt_lib0clear(&___nl__8);
#line 409
goto label_4;
#line 409
label_4:
#line 409
c_rt_lib0clear(&___nl__7);
#line 410
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 410
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 410
c_rt_lib0clear(&___nl__7);
#line 411
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 411
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 411
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 411
c_rt_lib0clear(&___nl__8);
#line 411
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 411
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 411
c_rt_lib0move(&___nl__9,___get_global_const(181));
#line 411
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 411
c_rt_lib0clear(&___nl__9);
#line 411
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 411
c_rt_lib0clear(&___nl__8);
#line 411
goto label_6;
#line 411
label_6:
#line 411
c_rt_lib0clear(&___nl__7);
#line 412
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_simple_statement(___nl__2));
#line 412
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 412
c_rt_lib0move(&___nl__11, wprinter0build_pretty_op_l(___nl__6));
#line 412
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__9, ___nl__10, ___nl__11));
#line 412
c_rt_lib0clear(&___nl__9);
#line 412
c_rt_lib0clear(&___nl__10);
#line 412
c_rt_lib0clear(&___nl__11);
#line 412
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 412
c_rt_lib0clear(&___nl__8);
#line 412
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__7, ___nl__5));
#line 412
c_rt_lib0clear(&___nl__7);
#line 417
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 417
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__7));
#line 417
c_rt_lib0clear(&___nl__7);
#line 417
c_rt_lib0clear(&___nl__6);
#line 417
c_rt_lib0clear(&___nl__1);
#line 417
c_rt_lib0clear(&___nl__2);
#line 417
c_rt_lib0clear(&___nl__3);
#line 417
c_rt_lib0clear(&___nl__4);
#line 417
c_rt_lib0clear(&___nl__5);
#line 417
return NULL;
}

ImmT pretty_printer_priv0print_loop(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
pretty_printer_priv0__const__init();
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
ImmT ___nl__9 = NULL;
#line 422
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__1));
#line 422
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 422
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__8));
#line 422
c_rt_lib0clear(&___nl__7);
#line 422
c_rt_lib0clear(&___nl__8);
#line 423
c_rt_lib0move(&___nl__7, pretty_printer_priv0join_print_var_decl(___nl__3));
#line 423
c_rt_lib0delete(array0append(&___nl__6, ___nl__7));
#line 423
c_rt_lib0clear(&___nl__7);
#line 424
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 424
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 424
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 424
c_rt_lib0clear(&___nl__8);
#line 424
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 424
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 424
c_rt_lib0move(&___nl__9,___get_global_const(607));
#line 424
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 424
c_rt_lib0clear(&___nl__9);
#line 424
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 424
c_rt_lib0clear(&___nl__8);
#line 424
goto label_2;
#line 424
label_2:
#line 424
c_rt_lib0clear(&___nl__7);
#line 425
c_rt_lib0move(&___nl__8,___get_global_const(326));
#line 425
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 425
c_rt_lib0clear(&___nl__8);
#line 425
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 425
c_rt_lib0clear(&___nl__7);
#line 426
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 427
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(953)));
#line 427
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(281)));
#line 427
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 427
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 428
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(953)));
#line 428
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(281)));
#line 428
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(281)));
#line 428
c_rt_lib0delete(array0append(&___nl__6, ___nl__9));
#line 428
c_rt_lib0clear(&___nl__9);
#line 429
goto label_3;
#line 429
label_4:
#line 430
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 431
goto label_3;
#line 431
label_3:
#line 431
c_rt_lib0clear(&___nl__8);
#line 432
c_rt_lib0move(&___nl__9,___get_global_const(181));
#line 432
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 432
c_rt_lib0clear(&___nl__9);
#line 432
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 432
c_rt_lib0clear(&___nl__8);
#line 433
c_rt_lib0move(&___nl__8, wprinter0build_pretty_l(___nl__6));
#line 433
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__8, ___nl__5));
#line 433
c_rt_lib0clear(&___nl__8);
#line 434
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__2, ___nl__5));
#line 434
c_rt_lib0clear(&___nl__6);
#line 434
c_rt_lib0clear(&___nl__7);
#line 434
c_rt_lib0clear(&___nl__1);
#line 434
c_rt_lib0clear(&___nl__2);
#line 434
c_rt_lib0clear(&___nl__3);
#line 434
c_rt_lib0clear(&___nl__4);
#line 434
c_rt_lib0clear(&___nl__5);
#line 434
return NULL;
}

ImmT pretty_printer_priv0print_loop_or_mod(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2,ImmT ___nl__3,ImmT ___nl__4,ImmT ___nl__5,ImmT ___nl__6) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
c_rt_lib0arg_val(___nl__3);
c_rt_lib0arg_val(___nl__4);
c_rt_lib0arg_val(___nl__5);
c_rt_lib0arg_val(___nl__6);
pretty_printer_priv0__const__init();
ImmT ___nl__7 = NULL;
#line 439
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 439
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 439
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 440
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6));
#line 441
goto label_1;
#line 441
label_2:
#line 442
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6));
#line 443
goto label_1;
#line 443
label_1:
#line 443
c_rt_lib0clear(&___nl__7);
#line 443
c_rt_lib0clear(&___nl__1);
#line 443
c_rt_lib0clear(&___nl__2);
#line 443
c_rt_lib0clear(&___nl__3);
#line 443
c_rt_lib0clear(&___nl__4);
#line 443
c_rt_lib0clear(&___nl__5);
#line 443
c_rt_lib0clear(&___nl__6);
#line 443
return NULL;
}

ImmT pretty_printer_priv0print_try_ensure(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
pretty_printer_priv0__const__init();
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
#line 447
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__1));
#line 447
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__3));
#line 447
c_rt_lib0clear(&___nl__3);
#line 448
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(793)));
#line 448
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 450
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(795)));
#line 450
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 452
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(794)));
#line 452
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 452
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 452
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 452
nl_die_arg(___nl__3);
#line 448
label_2:
#line 448
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(793)));
#line 449
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 449
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_var_decl(___nl__4));
#line 449
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 449
c_rt_lib0clear(&___nl__6);
#line 449
c_rt_lib0clear(&___nl__7);
#line 449
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 449
c_rt_lib0clear(&___nl__5);
#line 449
c_rt_lib0clear(&___nl__4);
#line 450
goto label_1;
#line 450
label_3:
#line 450
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(795)));
#line 451
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 451
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 451
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 451
c_rt_lib0clear(&___nl__6);
#line 451
c_rt_lib0clear(&___nl__7);
#line 451
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 451
c_rt_lib0clear(&___nl__5);
#line 451
c_rt_lib0clear(&___nl__4);
#line 452
goto label_1;
#line 452
label_4:
#line 452
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(794)));
#line 453
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 453
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(239)));
#line 453
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 453
c_rt_lib0clear(&___nl__8);
#line 453
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 453
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(405)));
#line 453
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 453
c_rt_lib0clear(&___nl__10);
#line 453
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 453
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(240)));
#line 453
c_rt_lib0move(&___nl__11, pretty_printer_priv0print_val(___nl__12));
#line 453
c_rt_lib0clear(&___nl__12);
#line 453
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(6, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11));
#line 453
c_rt_lib0clear(&___nl__6);
#line 453
c_rt_lib0clear(&___nl__7);
#line 453
c_rt_lib0clear(&___nl__8);
#line 453
c_rt_lib0clear(&___nl__9);
#line 453
c_rt_lib0clear(&___nl__10);
#line 453
c_rt_lib0clear(&___nl__11);
#line 453
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 453
c_rt_lib0clear(&___nl__5);
#line 453
c_rt_lib0clear(&___nl__4);
#line 461
goto label_1;
#line 461
label_1:
#line 461
c_rt_lib0clear(&___nl__3);
#line 462
c_rt_lib0move(&___nl__3, wprinter0build_pretty_l(___nl__2));
#line 462
c_rt_lib0clear(&___nl__0);
#line 462
c_rt_lib0clear(&___nl__1);
#line 462
c_rt_lib0clear(&___nl__2);
#line 462
return ___nl__3;
#line 462
c_rt_lib0clear(&___nl__3);
#line 462
c_rt_lib0clear(&___nl__2);
#line 462
c_rt_lib0clear(&___nl__0);
#line 462
c_rt_lib0clear(&___nl__1);
#line 462
return NULL;
}

ImmT pretty_printer_priv0print_return(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 466
c_rt_lib0move(&___nl__3,___get_global_const(75));
#line 466
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 466
c_rt_lib0clear(&___nl__3);
#line 466
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 466
c_rt_lib0clear(&___nl__2);
#line 467
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 467
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(778)));
#line 467
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 467
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 467
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 468
c_rt_lib0move(&___nl__4, wprinter0get_sep());
#line 468
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__0));
#line 468
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__4, ___nl__5));
#line 468
c_rt_lib0clear(&___nl__4);
#line 468
c_rt_lib0clear(&___nl__5);
#line 468
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 468
c_rt_lib0clear(&___nl__3);
#line 469
goto label_2;
#line 469
label_2:
#line 469
c_rt_lib0clear(&___nl__2);
#line 470
c_rt_lib0move(&___nl__2, wprinter0build_pretty_l(___nl__1));
#line 470
c_rt_lib0clear(&___nl__0);
#line 470
c_rt_lib0clear(&___nl__1);
#line 470
return ___nl__2;
#line 470
c_rt_lib0clear(&___nl__2);
#line 470
c_rt_lib0clear(&___nl__1);
#line 470
c_rt_lib0clear(&___nl__0);
#line 470
return NULL;
}

ImmT pretty_printer_priv0print_sim_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 474
c_rt_lib0move(&___nl__1, pretty_printer_priv0print_val(___nl__0));
#line 475
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(953)));
#line 475
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(281)));
#line 475
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 475
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(953)));
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(281)));
#line 476
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(281)));
#line 476
c_rt_lib0move(&___nl__3, wprinter0build_pretty_l(___nl__4));
#line 476
c_rt_lib0clear(&___nl__4);
#line 476
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 476
c_rt_lib0clear(&___nl__3);
#line 477
goto label_2;
#line 477
label_2:
#line 477
c_rt_lib0clear(&___nl__2);
#line 478
c_rt_lib0clear(&___nl__0);
#line 478
return ___nl__1;
#line 478
c_rt_lib0clear(&___nl__1);
#line 478
c_rt_lib0clear(&___nl__0);
#line 478
return NULL;
}

ImmT pretty_printer_priv0print_break(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(1);}
ImmT pretty_printer_priv0print_break0cal() {
pretty_printer_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 482
c_rt_lib0move(&___nl__1,___get_global_const(772));
#line 482
c_rt_lib0move(&___nl__0, wprinter0build_sim(___nl__1));
#line 482
c_rt_lib0clear(&___nl__1);
#line 482
return ___nl__0;
#line 482
c_rt_lib0clear(&___nl__0);
#line 482
return NULL;
}

ImmT pretty_printer_priv0print_continue(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(2);}
ImmT pretty_printer_priv0print_continue0cal() {
pretty_printer_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 486
c_rt_lib0move(&___nl__1,___get_global_const(773));
#line 486
c_rt_lib0move(&___nl__0, wprinter0build_sim(___nl__1));
#line 486
c_rt_lib0clear(&___nl__1);
#line 486
return ___nl__0;
#line 486
c_rt_lib0clear(&___nl__0);
#line 486
return NULL;
}

ImmT pretty_printer_priv0print_die(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
#line 490
c_rt_lib0move(&___nl__3,___get_global_const(233));
#line 490
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 490
c_rt_lib0clear(&___nl__3);
#line 490
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 490
c_rt_lib0clear(&___nl__2);
#line 491
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 491
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 491
c_rt_lib0move(&___nl__2, c_rt_lib0gt(___nl__2, ___nl__3));
#line 491
c_rt_lib0clear(&___nl__3);
#line 491
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 491
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 491
c_rt_lib0move(&___nl__5,___get_global_const(326));
#line 491
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 491
c_rt_lib0clear(&___nl__5);
#line 491
c_rt_lib0move(&___nl__6, pretty_printer_priv0join_print_val(___nl__0));
#line 491
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__6));
#line 491
c_rt_lib0clear(&___nl__6);
#line 491
c_rt_lib0move(&___nl__7,___get_global_const(181));
#line 491
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 491
c_rt_lib0clear(&___nl__7);
#line 491
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(3, ___nl__4, ___nl__5, ___nl__6));
#line 491
c_rt_lib0clear(&___nl__4);
#line 491
c_rt_lib0clear(&___nl__5);
#line 491
c_rt_lib0clear(&___nl__6);
#line 491
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 491
c_rt_lib0clear(&___nl__3);
#line 491
goto label_2;
#line 491
label_2:
#line 491
c_rt_lib0clear(&___nl__2);
#line 497
c_rt_lib0move(&___nl__2, wprinter0build_pretty_a(___nl__1));
#line 497
c_rt_lib0clear(&___nl__0);
#line 497
c_rt_lib0clear(&___nl__1);
#line 497
return ___nl__2;
#line 497
c_rt_lib0clear(&___nl__2);
#line 497
c_rt_lib0clear(&___nl__1);
#line 497
c_rt_lib0clear(&___nl__0);
#line 497
return NULL;
}

ImmT pretty_printer_priv0print_simple_statement(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 501
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 501
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(650)));
#line 501
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 501
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 502
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 502
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(650)));
#line 502
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_sim_value(___nl__3));
#line 502
c_rt_lib0clear(&___nl__3);
#line 502
c_rt_lib0clear(&___nl__0);
#line 502
c_rt_lib0clear(&___nl__1);
#line 502
return ___nl__2;
#line 502
c_rt_lib0clear(&___nl__2);
#line 503
goto label_1;
#line 503
label_2:
#line 503
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 503
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(75)));
#line 503
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 503
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 504
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 504
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(75)));
#line 504
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_return(___nl__3));
#line 504
c_rt_lib0clear(&___nl__3);
#line 504
c_rt_lib0clear(&___nl__0);
#line 504
c_rt_lib0clear(&___nl__1);
#line 504
return ___nl__2;
#line 504
c_rt_lib0clear(&___nl__2);
#line 505
goto label_1;
#line 505
label_3:
#line 505
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 505
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(772)));
#line 505
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 505
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 506
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_break());
#line 506
c_rt_lib0clear(&___nl__0);
#line 506
c_rt_lib0clear(&___nl__1);
#line 506
return ___nl__2;
#line 506
c_rt_lib0clear(&___nl__2);
#line 507
goto label_1;
#line 507
label_4:
#line 507
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 507
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(773)));
#line 507
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 507
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 508
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_continue());
#line 508
c_rt_lib0clear(&___nl__0);
#line 508
c_rt_lib0clear(&___nl__1);
#line 508
return ___nl__2;
#line 508
c_rt_lib0clear(&___nl__2);
#line 509
goto label_1;
#line 509
label_5:
#line 509
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 509
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(233)));
#line 509
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 509
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 510
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 510
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(233)));
#line 510
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_die(___nl__3));
#line 510
c_rt_lib0clear(&___nl__3);
#line 510
c_rt_lib0clear(&___nl__0);
#line 510
c_rt_lib0clear(&___nl__1);
#line 510
return ___nl__2;
#line 510
c_rt_lib0clear(&___nl__2);
#line 511
goto label_1;
#line 511
label_6:
#line 511
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 511
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(777)));
#line 511
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 511
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 512
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 512
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(777)));
#line 512
c_rt_lib0move(&___nl__4,___get_global_const(777));
#line 512
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_try_ensure(___nl__3, ___nl__4));
#line 512
c_rt_lib0clear(&___nl__4);
#line 512
c_rt_lib0clear(&___nl__3);
#line 512
c_rt_lib0clear(&___nl__0);
#line 512
c_rt_lib0clear(&___nl__1);
#line 512
return ___nl__2;
#line 512
c_rt_lib0clear(&___nl__2);
#line 513
goto label_1;
#line 513
label_7:
#line 513
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 513
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(80)));
#line 513
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 513
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 514
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 514
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(80)));
#line 514
c_rt_lib0move(&___nl__4,___get_global_const(80));
#line 514
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_try_ensure(___nl__3, ___nl__4));
#line 514
c_rt_lib0clear(&___nl__4);
#line 514
c_rt_lib0clear(&___nl__3);
#line 514
c_rt_lib0clear(&___nl__0);
#line 514
c_rt_lib0clear(&___nl__1);
#line 514
return ___nl__2;
#line 514
c_rt_lib0clear(&___nl__2);
#line 515
goto label_1;
#line 515
label_8:
#line 516
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__0));
#line 516
nl_die_arg(___nl__2);
#line 516
c_rt_lib0clear(&___nl__2);
#line 517
goto label_1;
#line 517
label_1:
#line 517
c_rt_lib0clear(&___nl__1);
#line 517
c_rt_lib0clear(&___nl__0);
#line 517
return NULL;
}

ImmT pretty_printer_priv0flush_sim_statement(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 521
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__1, ___nl__2));
#line 522
c_rt_lib0move(&___nl__3,___get_global_const(315));
#line 522
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__3));
#line 522
c_rt_lib0clear(&___nl__3);
#line 522
c_rt_lib0clear(&___nl__1);
#line 522
c_rt_lib0clear(&___nl__2);
#line 522
return NULL;
}

ImmT pretty_printer_priv0print_cmd(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
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
#line 526
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(214)));
#line 526
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(764)));
#line 526
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 536
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(769)));
#line 536
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 538
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(765)));
#line 538
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 557
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(775)));
#line 557
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 564
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(778)));
#line 564
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 566
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(774)));
#line 566
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 577
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(766)));
#line 577
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 579
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(767)));
#line 579
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 582
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(768)));
#line 582
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 584
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(119)));
#line 584
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 587
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(770)));
#line 587
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 589
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(771)));
#line 589
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 591
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(650)));
#line 591
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 593
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(777)));
#line 593
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 595
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(80)));
#line 595
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 597
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(75)));
#line 597
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 599
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(772)));
#line 599
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 601
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(773)));
#line 601
if(c_rt_lib0check_true_native(___nl__4)){ goto label_19;}
#line 603
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(233)));
#line 603
if(c_rt_lib0check_true_native(___nl__4)){ goto label_20;}
#line 605
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(776)));
#line 605
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 605
c_rt_lib0move(&___nl__4,___get_global_const(76));
#line 605
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 605
nl_die_arg(___nl__4);
#line 526
label_2:
#line 526
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(764)));
#line 527
c_rt_lib0move(&___nl__6,___get_global_const(764));
#line 527
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(764)));
#line 527
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 527
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(779)));
#line 527
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 527
c_rt_lib0clear(&___nl__9);
#line 527
c_rt_lib0clear(&___nl__8);
#line 527
c_rt_lib0clear(&___nl__7);
#line 527
c_rt_lib0clear(&___nl__6);
#line 528
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(780)));
#line 528
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 528
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 528
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 528
label_24:
#line 528
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 528
if(c_rt_lib0check_true_native(___nl__11)){ goto label_22;}
#line 528
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 529
c_rt_lib0move(&___nl__12,___get_global_const(607));
#line 529
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__12));
#line 529
c_rt_lib0clear(&___nl__12);
#line 530
c_rt_lib0move(&___nl__12,___get_global_const(780));
#line 530
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(214)));
#line 530
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 530
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(779)));
#line 530
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__2));
#line 530
c_rt_lib0clear(&___nl__15);
#line 530
c_rt_lib0clear(&___nl__14);
#line 530
c_rt_lib0clear(&___nl__13);
#line 530
c_rt_lib0clear(&___nl__12);
#line 531
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 531
goto label_24;
#line 531
label_22:
#line 531
c_rt_lib0clear(&___nl__6);
#line 531
c_rt_lib0clear(&___nl__7);
#line 531
c_rt_lib0clear(&___nl__8);
#line 531
c_rt_lib0clear(&___nl__9);
#line 531
c_rt_lib0clear(&___nl__10);
#line 531
c_rt_lib0clear(&___nl__11);
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(781)));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(214)));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(778)));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 532
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 532
if(c_rt_lib0check_true_native(___nl__6)){ goto label_26;}
#line 533
c_rt_lib0move(&___nl__7,___get_global_const(954));
#line 533
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__7));
#line 533
c_rt_lib0clear(&___nl__7);
#line 534
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(781)));
#line 534
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__7, ___nl__2));
#line 534
c_rt_lib0clear(&___nl__7);
#line 535
goto label_26;
#line 535
label_26:
#line 535
c_rt_lib0clear(&___nl__6);
#line 535
c_rt_lib0clear(&___nl__5);
#line 536
goto label_1;
#line 536
label_3:
#line 536
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(769)));
#line 537
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(863)));
#line 537
c_rt_lib0move(&___nl__7,___get_global_const(769));
#line 537
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 537
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 537
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(779)));
#line 537
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 537
c_rt_lib0clear(&___nl__10);
#line 537
c_rt_lib0clear(&___nl__9);
#line 537
c_rt_lib0clear(&___nl__8);
#line 537
c_rt_lib0clear(&___nl__7);
#line 537
c_rt_lib0clear(&___nl__6);
#line 537
c_rt_lib0clear(&___nl__5);
#line 538
goto label_1;
#line 538
label_4:
#line 538
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(765)));
#line 540
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(782)));
#line 540
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(650)));
#line 540
if(c_rt_lib0check_true_native(___nl__8)){ goto label_28;}
#line 542
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(776)));
#line 542
if(c_rt_lib0check_true_native(___nl__8)){ goto label_29;}
#line 542
c_rt_lib0move(&___nl__8,___get_global_const(76));
#line 542
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 542
nl_die_arg(___nl__8);
#line 540
label_28:
#line 540
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(650)));
#line 541
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__9));
#line 541
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 541
c_rt_lib0clear(&___nl__10);
#line 541
c_rt_lib0clear(&___nl__9);
#line 542
goto label_27;
#line 542
label_29:
#line 542
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(776)));
#line 543
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_var_decl(___nl__9));
#line 543
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 543
c_rt_lib0clear(&___nl__10);
#line 543
c_rt_lib0clear(&___nl__9);
#line 544
goto label_27;
#line 544
label_27:
#line 544
c_rt_lib0clear(&___nl__7);
#line 544
c_rt_lib0clear(&___nl__8);
#line 545
c_rt_lib0move(&___nl__10,___get_global_const(955));
#line 545
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 545
c_rt_lib0clear(&___nl__10);
#line 545
c_rt_lib0move(&___nl__11,___get_global_const(315));
#line 545
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 545
c_rt_lib0clear(&___nl__11);
#line 545
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 545
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(779)));
#line 545
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_val(___nl__13));
#line 545
c_rt_lib0clear(&___nl__13);
#line 545
c_rt_lib0move(&___nl__14,___get_global_const(315));
#line 545
c_rt_lib0move(&___nl__13, wprinter0build_sim(___nl__14));
#line 545
c_rt_lib0clear(&___nl__14);
#line 545
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 545
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(783)));
#line 545
c_rt_lib0move(&___nl__15, pretty_printer_priv0print_val(___nl__16));
#line 545
c_rt_lib0clear(&___nl__16);
#line 545
c_rt_lib0move(&___nl__17,___get_global_const(494));
#line 545
c_rt_lib0move(&___nl__16, wprinter0build_sim(___nl__17));
#line 545
c_rt_lib0clear(&___nl__17);
#line 545
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(9, ___nl__9, ___nl__6, ___nl__10, ___nl__11, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__16));
#line 545
c_rt_lib0clear(&___nl__9);
#line 545
c_rt_lib0clear(&___nl__10);
#line 545
c_rt_lib0clear(&___nl__11);
#line 545
c_rt_lib0clear(&___nl__12);
#line 545
c_rt_lib0clear(&___nl__13);
#line 545
c_rt_lib0clear(&___nl__14);
#line 545
c_rt_lib0clear(&___nl__15);
#line 545
c_rt_lib0clear(&___nl__16);
#line 545
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 545
c_rt_lib0clear(&___nl__8);
#line 545
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__7, ___nl__2));
#line 545
c_rt_lib0clear(&___nl__7);
#line 556
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 556
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__7, ___nl__2));
#line 556
c_rt_lib0clear(&___nl__7);
#line 556
c_rt_lib0clear(&___nl__6);
#line 556
c_rt_lib0clear(&___nl__5);
#line 557
goto label_1;
#line 557
label_5:
#line 557
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(775)));
#line 558
c_rt_lib0move(&___nl__6,___get_global_const(173));
#line 558
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 558
c_rt_lib0clear(&___nl__6);
#line 559
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 559
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 559
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 559
label_32:
#line 559
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 559
if(c_rt_lib0check_true_native(___nl__10)){ goto label_30;}
#line 559
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 560
c_rt_lib0move(&___nl__11, string0lf());
#line 560
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 560
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__2, ___nl__13));
#line 560
c_rt_lib0move(&___nl__12, pretty_printer_priv0pind(___nl__13));
#line 560
c_rt_lib0clear(&___nl__13);
#line 560
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 560
c_rt_lib0clear(&___nl__12);
#line 560
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__11));
#line 560
c_rt_lib0clear(&___nl__11);
#line 561
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 561
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__2, ___nl__11));
#line 561
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__6, ___nl__11));
#line 561
c_rt_lib0clear(&___nl__11);
#line 562
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 562
goto label_32;
#line 562
label_30:
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
#line 563
c_rt_lib0move(&___nl__6, string0lf());
#line 563
c_rt_lib0move(&___nl__7, pretty_printer_priv0pind(___nl__2));
#line 563
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 563
c_rt_lib0clear(&___nl__7);
#line 563
c_rt_lib0move(&___nl__7,___get_global_const(174));
#line 563
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 563
c_rt_lib0clear(&___nl__7);
#line 563
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 563
c_rt_lib0clear(&___nl__6);
#line 563
c_rt_lib0clear(&___nl__5);
#line 564
goto label_1;
#line 564
label_6:
#line 565
c_rt_lib0move(&___nl__5,___get_global_const(315));
#line 565
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__5));
#line 565
c_rt_lib0clear(&___nl__5);
#line 566
goto label_1;
#line 566
label_7:
#line 566
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(774)));
#line 567
c_rt_lib0move(&___nl__9,___get_global_const(956));
#line 567
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 567
c_rt_lib0clear(&___nl__9);
#line 567
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 567
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 567
c_rt_lib0clear(&___nl__10);
#line 567
c_rt_lib0move(&___nl__11,___get_global_const(181));
#line 567
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 567
c_rt_lib0clear(&___nl__11);
#line 567
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 567
c_rt_lib0clear(&___nl__8);
#line 567
c_rt_lib0clear(&___nl__9);
#line 567
c_rt_lib0clear(&___nl__10);
#line 567
c_rt_lib0move(&___nl__6, wprinter0build_pretty_a(___nl__7));
#line 567
c_rt_lib0clear(&___nl__7);
#line 567
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__6, ___nl__2));
#line 567
c_rt_lib0clear(&___nl__6);
#line 572
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(787)));
#line 572
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 572
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 572
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 572
label_35:
#line 572
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 572
if(c_rt_lib0check_true_native(___nl__11)){ goto label_33;}
#line 572
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 573
c_rt_lib0move(&___nl__12,___get_global_const(957));
#line 573
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__12));
#line 573
c_rt_lib0clear(&___nl__12);
#line 574
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(788)));
#line 574
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_variant_case_decl(___nl__13));
#line 574
c_rt_lib0clear(&___nl__13);
#line 574
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 574
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__2, ___nl__13));
#line 574
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__12, ___nl__13));
#line 574
c_rt_lib0clear(&___nl__13);
#line 574
c_rt_lib0clear(&___nl__12);
#line 575
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(214)));
#line 575
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__12, ___nl__2));
#line 575
c_rt_lib0clear(&___nl__12);
#line 576
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 576
goto label_35;
#line 576
label_33:
#line 576
c_rt_lib0clear(&___nl__6);
#line 576
c_rt_lib0clear(&___nl__7);
#line 576
c_rt_lib0clear(&___nl__8);
#line 576
c_rt_lib0clear(&___nl__9);
#line 576
c_rt_lib0clear(&___nl__10);
#line 576
c_rt_lib0clear(&___nl__11);
#line 576
c_rt_lib0clear(&___nl__5);
#line 577
goto label_1;
#line 577
label_8:
#line 577
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(766)));
#line 578
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(863)));
#line 578
c_rt_lib0move(&___nl__7,___get_global_const(766));
#line 578
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 578
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(783)));
#line 578
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 578
c_rt_lib0clear(&___nl__10);
#line 578
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(3)));
#line 578
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 578
c_rt_lib0clear(&___nl__10);
#line 578
c_rt_lib0clear(&___nl__9);
#line 578
c_rt_lib0clear(&___nl__8);
#line 578
c_rt_lib0clear(&___nl__7);
#line 578
c_rt_lib0clear(&___nl__6);
#line 578
c_rt_lib0clear(&___nl__5);
#line 579
goto label_1;
#line 579
label_9:
#line 579
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(767)));
#line 580
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(863)));
#line 580
c_rt_lib0move(&___nl__7,___get_global_const(767));
#line 580
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 580
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(283)));
#line 580
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 580
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 580
c_rt_lib0clear(&___nl__10);
#line 580
c_rt_lib0clear(&___nl__11);
#line 580
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(282)));
#line 580
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 580
c_rt_lib0clear(&___nl__10);
#line 580
c_rt_lib0clear(&___nl__9);
#line 580
c_rt_lib0clear(&___nl__8);
#line 580
c_rt_lib0clear(&___nl__7);
#line 580
c_rt_lib0clear(&___nl__6);
#line 580
c_rt_lib0clear(&___nl__5);
#line 582
goto label_1;
#line 582
label_10:
#line 582
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(768)));
#line 583
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(863)));
#line 583
c_rt_lib0move(&___nl__7,___get_global_const(768));
#line 583
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 583
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(783)));
#line 583
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 583
c_rt_lib0clear(&___nl__10);
#line 583
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(784)));
#line 583
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 583
c_rt_lib0clear(&___nl__10);
#line 583
c_rt_lib0clear(&___nl__9);
#line 583
c_rt_lib0clear(&___nl__8);
#line 583
c_rt_lib0clear(&___nl__7);
#line 583
c_rt_lib0clear(&___nl__6);
#line 583
c_rt_lib0clear(&___nl__5);
#line 584
goto label_1;
#line 584
label_11:
#line 584
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(119)));
#line 585
c_rt_lib0move(&___nl__6,___get_global_const(119));
#line 585
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 585
c_rt_lib0clear(&___nl__6);
#line 586
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__5, ___nl__2));
#line 586
c_rt_lib0clear(&___nl__5);
#line 587
goto label_1;
#line 587
label_12:
#line 587
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(770)));
#line 588
c_rt_lib0move(&___nl__6,___get_global_const(764));
#line 588
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 588
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 588
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(779)));
#line 588
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 588
c_rt_lib0clear(&___nl__9);
#line 588
c_rt_lib0clear(&___nl__8);
#line 588
c_rt_lib0clear(&___nl__7);
#line 588
c_rt_lib0clear(&___nl__6);
#line 588
c_rt_lib0clear(&___nl__5);
#line 589
goto label_1;
#line 589
label_13:
#line 589
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(771)));
#line 590
c_rt_lib0move(&___nl__6,___get_global_const(880));
#line 590
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 590
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 590
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(779)));
#line 590
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 590
c_rt_lib0clear(&___nl__9);
#line 590
c_rt_lib0clear(&___nl__8);
#line 590
c_rt_lib0clear(&___nl__7);
#line 590
c_rt_lib0clear(&___nl__6);
#line 590
c_rt_lib0clear(&___nl__5);
#line 591
goto label_1;
#line 591
label_14:
#line 591
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(650)));
#line 592
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_sim_value(___nl__5));
#line 592
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 592
c_rt_lib0clear(&___nl__6);
#line 592
c_rt_lib0clear(&___nl__5);
#line 593
goto label_1;
#line 593
label_15:
#line 593
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(777)));
#line 594
c_rt_lib0move(&___nl__7,___get_global_const(777));
#line 594
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_try_ensure(___nl__5, ___nl__7));
#line 594
c_rt_lib0clear(&___nl__7);
#line 594
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 594
c_rt_lib0clear(&___nl__6);
#line 594
c_rt_lib0clear(&___nl__5);
#line 595
goto label_1;
#line 595
label_16:
#line 595
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(80)));
#line 596
c_rt_lib0move(&___nl__7,___get_global_const(80));
#line 596
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_try_ensure(___nl__5, ___nl__7));
#line 596
c_rt_lib0clear(&___nl__7);
#line 596
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 596
c_rt_lib0clear(&___nl__6);
#line 596
c_rt_lib0clear(&___nl__5);
#line 597
goto label_1;
#line 597
label_17:
#line 597
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(75)));
#line 598
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_return(___nl__5));
#line 598
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 598
c_rt_lib0clear(&___nl__6);
#line 598
c_rt_lib0clear(&___nl__5);
#line 599
goto label_1;
#line 599
label_18:
#line 600
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_break());
#line 600
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__5, ___nl__2));
#line 600
c_rt_lib0clear(&___nl__5);
#line 601
goto label_1;
#line 601
label_19:
#line 602
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_continue());
#line 602
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__5, ___nl__2));
#line 602
c_rt_lib0clear(&___nl__5);
#line 603
goto label_1;
#line 603
label_20:
#line 603
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(233)));
#line 604
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_die(___nl__5));
#line 604
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 604
c_rt_lib0clear(&___nl__6);
#line 604
c_rt_lib0clear(&___nl__5);
#line 605
goto label_1;
#line 605
label_21:
#line 605
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(776)));
#line 606
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_var_decl(___nl__5));
#line 606
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 606
c_rt_lib0clear(&___nl__6);
#line 606
c_rt_lib0clear(&___nl__5);
#line 607
goto label_1;
#line 607
label_1:
#line 607
c_rt_lib0clear(&___nl__3);
#line 607
c_rt_lib0clear(&___nl__4);
#line 607
c_rt_lib0clear(&___nl__1);
#line 607
c_rt_lib0clear(&___nl__2);
#line 607
return NULL;
}


static ImmT ___const__[4];
static int ___const_init__ = 1;
void pretty_printer_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[3];


for(int i=0;i<3;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 3);
}}
ImmT pretty_printer_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT pretty_printer_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = pretty_printer0struct_t0cal();
	break;
case 1:
	___const__[1] = pretty_printer_priv0print_break0cal();
	break;
case 2:
	___const__[2] = pretty_printer_priv0print_continue0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
