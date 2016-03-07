
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
c_rt_lib0move(&___nl__5, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__6, ___get_global_const(943), ___nl__7, ___get_global_const(944), ___nl__8));
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
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(3, ___get_global_const(78), ___nl__12, ___get_global_const(943), ___nl__9, ___get_global_const(944), ___nl__13));
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
c_rt_lib0move(&___nl__2,___get_global_const(945));
#line 50
c_rt_lib0move(&___nl__3, string0lf());
#line 50
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 50
c_rt_lib0clear(&___nl__3);
#line 50
c_rt_lib0move(&___nl__3,___get_global_const(946));
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
c_rt_lib0move(&___nl__3,___get_global_const(945));
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
c_rt_lib0move(&___nl__6,___get_global_const(885));
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
c_rt_lib0move(&___nl__8,___get_global_const(811));
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
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__2, ___get_global_const(802)));
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
c_rt_lib0move(&___nl__3,___get_global_const(899));
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
c_rt_lib0move(&___nl__3,___get_global_const(900));
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
c_rt_lib0move(&___nl__3,___get_global_const(947));
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
c_rt_lib0move(&___nl__4,___get_global_const(948));
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
c_rt_lib0move(&___nl__5,___get_global_const(831));
#line 273
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__5));
#line 273
c_rt_lib0clear(&___nl__5);
#line 273
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 273
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(78)));
#line 273
c_rt_lib0move(&___nl__5,___get_global_const(829));
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
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(802)));
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
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(801)));
#line 302
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 304
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(800)));
#line 304
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 312
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(223)));
#line 312
if(c_rt_lib0check_true_native(___nl__1)){ goto label_9;}
#line 339
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(803)));
#line 339
if(c_rt_lib0check_true_native(___nl__1)){ goto label_10;}
#line 354
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(807)));
#line 354
if(c_rt_lib0check_true_native(___nl__1)){ goto label_11;}
#line 356
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(806)));
#line 356
if(c_rt_lib0check_true_native(___nl__1)){ goto label_12;}
#line 358
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(804)));
#line 358
if(c_rt_lib0check_true_native(___nl__1)){ goto label_13;}
#line 360
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(759)));
#line 360
if(c_rt_lib0check_true_native(___nl__1)){ goto label_14;}
#line 384
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(778)));
#line 384
if(c_rt_lib0check_true_native(___nl__1)){ goto label_15;}
#line 386
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(219)));
#line 386
if(c_rt_lib0check_true_native(___nl__1)){ goto label_16;}
#line 388
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(220)));
#line 388
if(c_rt_lib0check_true_native(___nl__1)){ goto label_17;}
#line 390
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__0, ___get_global_const(805)));
#line 390
if(c_rt_lib0check_true_native(___nl__1)){ goto label_18;}
#line 390
c_rt_lib0move(&___nl__1,___get_global_const(76));
#line 390
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(2, ___nl__1, ___nl__0));
#line 390
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
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(850)));
#line 291
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(849)));
#line 291
if(c_rt_lib0check_true_native(___nl__5)){ goto label_23;}
#line 292
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(848)));
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
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(850)));
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
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(802)));
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
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(801)));
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
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(800)));
#line 305
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(808)));
#line 305
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__6));
#line 305
c_rt_lib0clear(&___nl__6);
#line 305
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 305
c_rt_lib0move(&___nl__10,___get_global_const(949));
#line 305
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 305
c_rt_lib0clear(&___nl__10);
#line 305
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(809)));
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
c_rt_lib0move(&___nl__12,___get_global_const(950));
#line 305
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 305
c_rt_lib0clear(&___nl__12);
#line 305
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(810)));
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
c_rt_lib0move(&___nl__4,___get_global_const(797));
#line 320
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__3, ___nl__4));
#line 320
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 320
if(c_rt_lib0check_true_native(___nl__4)){ goto label_27;}
#line 322
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 322
c_rt_lib0move(&___nl__6, pretty_printer_priv0is_to_change_ov(___nl__7));
#line 322
c_rt_lib0clear(&___nl__7);
#line 322
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 322
if(c_rt_lib0check_true_native(___nl__6)){ goto label_29;}
#line 323
c_rt_lib0move(&___nl__10,___get_global_const(326));
#line 323
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 323
c_rt_lib0clear(&___nl__10);
#line 323
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 323
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__11));
#line 323
c_rt_lib0clear(&___nl__11);
#line 323
c_rt_lib0move(&___nl__12,___get_global_const(181));
#line 323
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 323
c_rt_lib0clear(&___nl__12);
#line 323
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__9, ___nl__10, ___nl__11));
#line 323
c_rt_lib0clear(&___nl__9);
#line 323
c_rt_lib0clear(&___nl__10);
#line 323
c_rt_lib0clear(&___nl__11);
#line 323
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 323
c_rt_lib0clear(&___nl__8);
#line 323
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 323
c_rt_lib0clear(&___nl__7);
#line 328
goto label_28;
#line 328
label_29:
#line 329
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 329
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 329
c_rt_lib0clear(&___nl__8);
#line 329
c_rt_lib0copy(&___nl__5, ___nl__7);
#line 329
c_rt_lib0clear(&___nl__7);
#line 330
goto label_28;
#line 330
label_28:
#line 330
c_rt_lib0clear(&___nl__6);
#line 331
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__3));
#line 331
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(240)));
#line 331
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 331
c_rt_lib0clear(&___nl__10);
#line 331
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__5, ___nl__8, ___nl__9));
#line 331
c_rt_lib0clear(&___nl__8);
#line 331
c_rt_lib0clear(&___nl__9);
#line 331
c_rt_lib0move(&___nl__6, wprinter0build_pretty_op_l(___nl__7));
#line 331
c_rt_lib0clear(&___nl__7);
#line 331
c_rt_lib0clear(&___nl__0);
#line 331
c_rt_lib0clear(&___nl__1);
#line 331
c_rt_lib0clear(&___nl__2);
#line 331
c_rt_lib0clear(&___nl__3);
#line 331
c_rt_lib0clear(&___nl__4);
#line 331
c_rt_lib0clear(&___nl__5);
#line 331
return ___nl__6;
#line 331
c_rt_lib0clear(&___nl__6);
#line 331
c_rt_lib0clear(&___nl__5);
#line 332
goto label_25;
#line 332
label_27:
#line 333
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 333
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 333
c_rt_lib0clear(&___nl__10);
#line 333
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 333
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__3));
#line 333
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__9, ___nl__10, ___nl__11));
#line 333
c_rt_lib0clear(&___nl__9);
#line 333
c_rt_lib0clear(&___nl__10);
#line 333
c_rt_lib0clear(&___nl__11);
#line 333
c_rt_lib0move(&___nl__7, wprinter0build_pretty_op_l(___nl__8));
#line 333
c_rt_lib0clear(&___nl__8);
#line 333
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 333
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(240)));
#line 333
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 333
c_rt_lib0clear(&___nl__10);
#line 333
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(3, ___nl__7, ___nl__8, ___nl__9));
#line 333
c_rt_lib0clear(&___nl__7);
#line 333
c_rt_lib0clear(&___nl__8);
#line 333
c_rt_lib0clear(&___nl__9);
#line 333
c_rt_lib0move(&___nl__5, wprinter0build_pretty_op_l(___nl__6));
#line 333
c_rt_lib0clear(&___nl__6);
#line 333
c_rt_lib0clear(&___nl__0);
#line 333
c_rt_lib0clear(&___nl__1);
#line 333
c_rt_lib0clear(&___nl__2);
#line 333
c_rt_lib0clear(&___nl__3);
#line 333
c_rt_lib0clear(&___nl__4);
#line 333
return ___nl__5;
#line 333
c_rt_lib0clear(&___nl__5);
#line 338
goto label_25;
#line 338
label_25:
#line 338
c_rt_lib0clear(&___nl__4);
#line 338
c_rt_lib0clear(&___nl__3);
#line 338
c_rt_lib0clear(&___nl__2);
#line 339
goto label_1;
#line 339
label_10:
#line 339
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(803)));
#line 341
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(405)));
#line 341
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(225)));
#line 341
if(c_rt_lib0check_true_native(___nl__5)){ goto label_31;}
#line 343
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__4, ___get_global_const(224)));
#line 343
if(c_rt_lib0check_true_native(___nl__5)){ goto label_32;}
#line 343
c_rt_lib0move(&___nl__5,___get_global_const(76));
#line 343
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__5, ___nl__4));
#line 343
nl_die_arg(___nl__5);
#line 341
label_31:
#line 342
c_rt_lib0move(&___nl__6,___get_global_const(831));
#line 342
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 342
c_rt_lib0clear(&___nl__6);
#line 343
goto label_30;
#line 343
label_32:
#line 344
c_rt_lib0move(&___nl__6,___get_global_const(829));
#line 344
c_rt_lib0copy(&___nl__3, ___nl__6);
#line 344
c_rt_lib0clear(&___nl__6);
#line 345
goto label_30;
#line 345
label_30:
#line 345
c_rt_lib0clear(&___nl__4);
#line 345
c_rt_lib0clear(&___nl__5);
#line 346
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(239)));
#line 346
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_val(___nl__7));
#line 346
c_rt_lib0clear(&___nl__7);
#line 346
c_rt_lib0move(&___nl__7, wprinter0get_sep());
#line 346
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__3));
#line 346
c_rt_lib0move(&___nl__9, wprinter0get_sep());
#line 346
c_rt_lib0move(&___nl__11,___get_global_const(375));
#line 346
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 346
c_rt_lib0clear(&___nl__11);
#line 346
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(845)));
#line 346
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 346
c_rt_lib0clear(&___nl__12);
#line 346
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(6, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11));
#line 346
c_rt_lib0clear(&___nl__6);
#line 346
c_rt_lib0clear(&___nl__7);
#line 346
c_rt_lib0clear(&___nl__8);
#line 346
c_rt_lib0clear(&___nl__9);
#line 346
c_rt_lib0clear(&___nl__10);
#line 346
c_rt_lib0clear(&___nl__11);
#line 346
c_rt_lib0move(&___nl__4, wprinter0build_pretty_op_l(___nl__5));
#line 346
c_rt_lib0clear(&___nl__5);
#line 346
c_rt_lib0clear(&___nl__0);
#line 346
c_rt_lib0clear(&___nl__1);
#line 346
c_rt_lib0clear(&___nl__2);
#line 346
c_rt_lib0clear(&___nl__3);
#line 346
return ___nl__4;
#line 346
c_rt_lib0clear(&___nl__4);
#line 346
c_rt_lib0clear(&___nl__3);
#line 346
c_rt_lib0clear(&___nl__2);
#line 354
goto label_1;
#line 354
label_11:
#line 354
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(807)));
#line 355
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__2));
#line 355
c_rt_lib0move(&___nl__7,___get_global_const(140));
#line 355
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 355
c_rt_lib0clear(&___nl__7);
#line 355
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 355
c_rt_lib0clear(&___nl__5);
#line 355
c_rt_lib0clear(&___nl__6);
#line 355
c_rt_lib0move(&___nl__3, wprinter0build_pretty_op_l(___nl__4));
#line 355
c_rt_lib0clear(&___nl__4);
#line 355
c_rt_lib0clear(&___nl__0);
#line 355
c_rt_lib0clear(&___nl__1);
#line 355
c_rt_lib0clear(&___nl__2);
#line 355
return ___nl__3;
#line 355
c_rt_lib0clear(&___nl__3);
#line 355
c_rt_lib0clear(&___nl__2);
#line 356
goto label_1;
#line 356
label_12:
#line 356
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(806)));
#line 357
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__2));
#line 357
c_rt_lib0move(&___nl__7,___get_global_const(825));
#line 357
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 357
c_rt_lib0clear(&___nl__7);
#line 357
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__5, ___nl__6));
#line 357
c_rt_lib0clear(&___nl__5);
#line 357
c_rt_lib0clear(&___nl__6);
#line 357
c_rt_lib0move(&___nl__3, wprinter0build_pretty_op_l(___nl__4));
#line 357
c_rt_lib0clear(&___nl__4);
#line 357
c_rt_lib0clear(&___nl__0);
#line 357
c_rt_lib0clear(&___nl__1);
#line 357
c_rt_lib0clear(&___nl__2);
#line 357
return ___nl__3;
#line 357
c_rt_lib0clear(&___nl__3);
#line 357
c_rt_lib0clear(&___nl__2);
#line 358
goto label_1;
#line 358
label_13:
#line 358
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(804)));
#line 359
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(405)));
#line 359
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 359
c_rt_lib0clear(&___nl__5);
#line 359
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(238)));
#line 359
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__6));
#line 359
c_rt_lib0clear(&___nl__6);
#line 359
c_rt_lib0move(&___nl__3, wprinter0build_pretty_bind(___nl__4, ___nl__5));
#line 359
c_rt_lib0clear(&___nl__5);
#line 359
c_rt_lib0clear(&___nl__4);
#line 359
c_rt_lib0clear(&___nl__0);
#line 359
c_rt_lib0clear(&___nl__1);
#line 359
c_rt_lib0clear(&___nl__2);
#line 359
return ___nl__3;
#line 359
c_rt_lib0clear(&___nl__3);
#line 359
c_rt_lib0clear(&___nl__2);
#line 360
goto label_1;
#line 360
label_14:
#line 360
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(759)));
#line 361
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(78)));
#line 361
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(111)));
#line 361
c_rt_lib0move(&___nl__3, pretty_printer_priv0get_fun_label(___nl__4, ___nl__5));
#line 361
c_rt_lib0clear(&___nl__5);
#line 361
c_rt_lib0clear(&___nl__4);
#line 361
c_rt_lib0move(&___nl__4,___get_global_const(326));
#line 361
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 361
c_rt_lib0clear(&___nl__4);
#line 362
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 362
c_rt_lib0move(&___nl__4, array0len(___nl__5));
#line 362
c_rt_lib0clear(&___nl__5);
#line 362
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 362
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 362
c_rt_lib0clear(&___nl__5);
#line 362
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 362
if(c_rt_lib0check_true_native(___nl__4)){ goto label_34;}
#line 363
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 363
c_rt_lib0move(&___nl__6,___get_global_const(1));
#line 363
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__6));
#line 363
c_rt_lib0clear(&___nl__6);
#line 363
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 364
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 364
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(220)));
#line 364
if(c_rt_lib0check_true_native(___nl__6)){ goto label_37;}
#line 364
c_rt_lib0copy(&___nl__6, ___nl__5);
#line 364
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(219)));
#line 364
label_37:
#line 364
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 364
if(c_rt_lib0check_true_native(___nl__6)){ goto label_36;}
#line 365
c_rt_lib0move(&___nl__8,___get_global_const(181));
#line 365
c_rt_lib0move(&___nl__7, pretty_printer_priv0get_compressed_fun_val(___nl__5, ___nl__3, ___nl__8));
#line 365
c_rt_lib0clear(&___nl__8);
#line 365
c_rt_lib0clear(&___nl__0);
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
c_rt_lib0clear(&___nl__6);
#line 365
return ___nl__7;
#line 365
c_rt_lib0clear(&___nl__7);
#line 366
goto label_36;
#line 366
label_36:
#line 366
c_rt_lib0clear(&___nl__6);
#line 366
c_rt_lib0clear(&___nl__5);
#line 367
goto label_38;
#line 367
label_34:
#line 367
c_rt_lib0move(&___nl__4, pretty_printer_priv0is_to_change_ov(___nl__0));
#line 367
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 367
if(c_rt_lib0check_true_native(___nl__4)){ goto label_38;}
#line 368
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 368
c_rt_lib0move(&___nl__9,___get_global_const(1));
#line 368
c_rt_lib0move(&___nl__8, c_rt_lib0array_get(___nl__8, ___nl__9));
#line 368
c_rt_lib0clear(&___nl__9);
#line 368
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__8, ___get_global_const(238)));
#line 368
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 368
c_rt_lib0clear(&___nl__8);
#line 368
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 368
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(78)));
#line 368
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 368
c_rt_lib0clear(&___nl__10);
#line 368
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 368
c_rt_lib0move(&___nl__12,___get_global_const(375));
#line 368
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 368
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 368
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__13, ___nl__14));
#line 368
c_rt_lib0clear(&___nl__14);
#line 368
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(238)));
#line 368
c_rt_lib0move(&___nl__13, c_rt_lib0priv_as(___nl__13, ___get_global_const(717)));
#line 368
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__13, ___get_global_const(281)));
#line 368
c_rt_lib0move(&___nl__14,___get_global_const(1));
#line 368
c_rt_lib0move(&___nl__13, c_rt_lib0array_get(___nl__13, ___nl__14));
#line 368
c_rt_lib0clear(&___nl__14);
#line 368
c_rt_lib0move(&___nl__12, c_rt_lib0concat_add(___nl__12, ___nl__13));
#line 368
c_rt_lib0clear(&___nl__13);
#line 368
c_rt_lib0move(&___nl__11, wprinter0build_sim(___nl__12));
#line 368
c_rt_lib0clear(&___nl__12);
#line 368
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(5, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11));
#line 368
c_rt_lib0clear(&___nl__7);
#line 368
c_rt_lib0clear(&___nl__8);
#line 368
c_rt_lib0clear(&___nl__9);
#line 368
c_rt_lib0clear(&___nl__10);
#line 368
c_rt_lib0clear(&___nl__11);
#line 368
c_rt_lib0move(&___nl__5, wprinter0build_pretty_op_l(___nl__6));
#line 368
c_rt_lib0clear(&___nl__6);
#line 368
c_rt_lib0clear(&___nl__0);
#line 368
c_rt_lib0clear(&___nl__1);
#line 368
c_rt_lib0clear(&___nl__2);
#line 368
c_rt_lib0clear(&___nl__3);
#line 368
c_rt_lib0clear(&___nl__4);
#line 368
return ___nl__5;
#line 368
c_rt_lib0clear(&___nl__5);
#line 375
goto label_38;
#line 375
label_38:
#line 375
c_rt_lib0clear(&___nl__4);
#line 376
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__3));
#line 376
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(1, ___nl__5));
#line 376
c_rt_lib0clear(&___nl__5);
#line 377
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 377
c_rt_lib0move(&___nl__5, pretty_printer_priv0join_print_fun_arg(___nl__6));
#line 377
c_rt_lib0clear(&___nl__6);
#line 377
c_rt_lib0delete(array0append(&___nl__4, ___nl__5));
#line 377
c_rt_lib0clear(&___nl__5);
#line 378
c_rt_lib0move(&___nl__6,___get_global_const(181));
#line 378
c_rt_lib0move(&___nl__5, wprinter0build_sim(___nl__6));
#line 378
c_rt_lib0clear(&___nl__6);
#line 378
c_rt_lib0delete(array0push(&___nl__4, ___nl__5));
#line 378
c_rt_lib0clear(&___nl__5);
#line 379
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 379
c_rt_lib0move(&___nl__5, pretty_printer_priv0count_structs(___nl__7));
#line 379
c_rt_lib0clear(&___nl__7);
#line 379
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 379
c_rt_lib0move(&___nl__7, array0len(___nl__8));
#line 379
c_rt_lib0clear(&___nl__8);
#line 379
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 379
c_rt_lib0clear(&___nl__7);
#line 379
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 379
if(c_rt_lib0check_true_native(___nl__6)){ goto label_42;}
#line 379
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 379
c_rt_lib0move(&___nl__5, array0len(___nl__7));
#line 379
c_rt_lib0clear(&___nl__7);
#line 379
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 379
c_rt_lib0move(&___nl__5, c_rt_lib0gt(___nl__5, ___nl__7));
#line 379
c_rt_lib0clear(&___nl__7);
#line 379
label_42:
#line 379
c_rt_lib0clear(&___nl__6);
#line 379
if(c_rt_lib0check_true_native(___nl__5)){ goto label_41;}
#line 379
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 379
c_rt_lib0move(&___nl__5, array0len(___nl__7));
#line 379
c_rt_lib0clear(&___nl__7);
#line 379
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 379
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__5, ___nl__7));
#line 379
c_rt_lib0clear(&___nl__7);
#line 379
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 379
if(c_rt_lib0check_true_native(___nl__6)){ goto label_43;}
#line 379
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(74)));
#line 379
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 379
c_rt_lib0move(&___nl__5, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 379
c_rt_lib0clear(&___nl__7);
#line 379
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 379
c_rt_lib0move(&___nl__5, c_rt_lib0priv_is(___nl__5, ___get_global_const(759)));
#line 379
label_43:
#line 379
c_rt_lib0clear(&___nl__6);
#line 379
label_41:
#line 379
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 379
if(c_rt_lib0check_true_native(___nl__5)){ goto label_40;}
#line 379
c_rt_lib0move(&___nl__6, wprinter0build_pretty_op_l(___nl__4));
#line 379
c_rt_lib0clear(&___nl__0);
#line 379
c_rt_lib0clear(&___nl__1);
#line 379
c_rt_lib0clear(&___nl__2);
#line 379
c_rt_lib0clear(&___nl__3);
#line 379
c_rt_lib0clear(&___nl__4);
#line 379
c_rt_lib0clear(&___nl__5);
#line 379
return ___nl__6;
#line 379
c_rt_lib0clear(&___nl__6);
#line 379
goto label_40;
#line 379
label_40:
#line 379
c_rt_lib0clear(&___nl__5);
#line 383
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__4));
#line 383
c_rt_lib0clear(&___nl__0);
#line 383
c_rt_lib0clear(&___nl__1);
#line 383
c_rt_lib0clear(&___nl__2);
#line 383
c_rt_lib0clear(&___nl__3);
#line 383
c_rt_lib0clear(&___nl__4);
#line 383
return ___nl__5;
#line 383
c_rt_lib0clear(&___nl__5);
#line 383
c_rt_lib0clear(&___nl__3);
#line 383
c_rt_lib0clear(&___nl__4);
#line 383
c_rt_lib0clear(&___nl__2);
#line 384
goto label_1;
#line 384
label_15:
#line 385
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 385
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 385
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(291), ___nl__4));
#line 385
c_rt_lib0move(&___nl__2, c_rt_lib0hash_mk(2, ___get_global_const(162), ___nl__3, ___get_global_const(951), ___nl__4));
#line 385
c_rt_lib0clear(&___nl__3);
#line 385
c_rt_lib0clear(&___nl__4);
#line 385
c_rt_lib0clear(&___nl__0);
#line 385
c_rt_lib0clear(&___nl__1);
#line 385
return ___nl__2;
#line 385
c_rt_lib0clear(&___nl__2);
#line 386
goto label_1;
#line 386
label_16:
#line 386
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(219)));
#line 387
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_arg(___get_global_const(219), ___nl__2));
#line 387
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 387
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 387
c_rt_lib0move(&___nl__3, pretty_printer_priv0get_compressed_fun_val(___nl__4, ___nl__5, ___nl__6));
#line 387
c_rt_lib0clear(&___nl__6);
#line 387
c_rt_lib0clear(&___nl__5);
#line 387
c_rt_lib0clear(&___nl__4);
#line 387
c_rt_lib0clear(&___nl__0);
#line 387
c_rt_lib0clear(&___nl__1);
#line 387
c_rt_lib0clear(&___nl__2);
#line 387
return ___nl__3;
#line 387
c_rt_lib0clear(&___nl__3);
#line 387
c_rt_lib0clear(&___nl__2);
#line 388
goto label_1;
#line 388
label_17:
#line 388
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(220)));
#line 389
c_rt_lib0move(&___nl__4, pretty_printer_priv0join_print_hash_elem(___nl__2));
#line 389
c_rt_lib0move(&___nl__5,___get_global_const(173));
#line 389
c_rt_lib0move(&___nl__6,___get_global_const(174));
#line 389
c_rt_lib0move(&___nl__3, wprinter0build_pretty_arr_decl(___nl__4, ___nl__5, ___nl__6));
#line 389
c_rt_lib0clear(&___nl__6);
#line 389
c_rt_lib0clear(&___nl__5);
#line 389
c_rt_lib0clear(&___nl__4);
#line 389
c_rt_lib0clear(&___nl__0);
#line 389
c_rt_lib0clear(&___nl__1);
#line 389
c_rt_lib0clear(&___nl__2);
#line 389
return ___nl__3;
#line 389
c_rt_lib0clear(&___nl__3);
#line 389
c_rt_lib0clear(&___nl__2);
#line 390
goto label_1;
#line 390
label_18:
#line 390
c_rt_lib0move(&___nl__2, c_rt_lib0priv_as(___nl__0, ___get_global_const(805)));
#line 391
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(78)));
#line 391
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__2, ___get_global_const(111)));
#line 391
c_rt_lib0move(&___nl__4, pretty_printer_priv0get_fun_label(___nl__5, ___nl__6));
#line 391
c_rt_lib0clear(&___nl__6);
#line 391
c_rt_lib0clear(&___nl__5);
#line 391
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__4));
#line 391
c_rt_lib0clear(&___nl__4);
#line 391
c_rt_lib0clear(&___nl__0);
#line 391
c_rt_lib0clear(&___nl__1);
#line 391
c_rt_lib0clear(&___nl__2);
#line 391
return ___nl__3;
#line 391
c_rt_lib0clear(&___nl__3);
#line 391
c_rt_lib0clear(&___nl__2);
#line 392
goto label_1;
#line 392
label_1:
#line 392
c_rt_lib0clear(&___nl__1);
#line 392
c_rt_lib0clear(&___nl__0);
#line 392
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
#line 397
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__1));
#line 397
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 397
c_rt_lib0move(&___nl__10, pretty_printer_priv0join_print_var_decl(___nl__3));
#line 397
c_rt_lib0move(&___nl__9, wprinter0build_pretty_l(___nl__10));
#line 397
c_rt_lib0clear(&___nl__10);
#line 397
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(3, ___nl__7, ___nl__8, ___nl__9));
#line 397
c_rt_lib0clear(&___nl__7);
#line 397
c_rt_lib0clear(&___nl__8);
#line 397
c_rt_lib0clear(&___nl__9);
#line 402
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 402
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 402
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 402
c_rt_lib0clear(&___nl__8);
#line 402
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 402
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 402
c_rt_lib0move(&___nl__9,___get_global_const(607));
#line 402
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 402
c_rt_lib0clear(&___nl__9);
#line 402
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 402
c_rt_lib0clear(&___nl__8);
#line 402
goto label_2;
#line 402
label_2:
#line 402
c_rt_lib0clear(&___nl__7);
#line 403
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 403
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 403
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 403
c_rt_lib0clear(&___nl__8);
#line 403
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 403
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 403
c_rt_lib0move(&___nl__9,___get_global_const(326));
#line 403
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 403
c_rt_lib0clear(&___nl__9);
#line 403
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 403
c_rt_lib0clear(&___nl__8);
#line 403
goto label_4;
#line 403
label_4:
#line 403
c_rt_lib0clear(&___nl__7);
#line 404
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 404
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 404
c_rt_lib0clear(&___nl__7);
#line 405
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 405
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 405
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 405
c_rt_lib0clear(&___nl__8);
#line 405
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 405
if(c_rt_lib0check_true_native(___nl__7)){ goto label_6;}
#line 405
c_rt_lib0move(&___nl__9,___get_global_const(181));
#line 405
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 405
c_rt_lib0clear(&___nl__9);
#line 405
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 405
c_rt_lib0clear(&___nl__8);
#line 405
goto label_6;
#line 405
label_6:
#line 405
c_rt_lib0clear(&___nl__7);
#line 406
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_simple_statement(___nl__2));
#line 406
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 406
c_rt_lib0move(&___nl__11, wprinter0build_pretty_op_l(___nl__6));
#line 406
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(3, ___nl__9, ___nl__10, ___nl__11));
#line 406
c_rt_lib0clear(&___nl__9);
#line 406
c_rt_lib0clear(&___nl__10);
#line 406
c_rt_lib0clear(&___nl__11);
#line 406
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 406
c_rt_lib0clear(&___nl__8);
#line 406
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__7, ___nl__5));
#line 406
c_rt_lib0clear(&___nl__7);
#line 411
c_rt_lib0move(&___nl__7,___get_global_const(315));
#line 411
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__7));
#line 411
c_rt_lib0clear(&___nl__7);
#line 411
c_rt_lib0clear(&___nl__6);
#line 411
c_rt_lib0clear(&___nl__1);
#line 411
c_rt_lib0clear(&___nl__2);
#line 411
c_rt_lib0clear(&___nl__3);
#line 411
c_rt_lib0clear(&___nl__4);
#line 411
c_rt_lib0clear(&___nl__5);
#line 411
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
#line 416
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__1));
#line 416
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 416
c_rt_lib0move(&___nl__6, c_rt_lib0array_mk(2, ___nl__7, ___nl__8));
#line 416
c_rt_lib0clear(&___nl__7);
#line 416
c_rt_lib0clear(&___nl__8);
#line 417
c_rt_lib0move(&___nl__7, pretty_printer_priv0join_print_var_decl(___nl__3));
#line 417
c_rt_lib0delete(array0append(&___nl__6, ___nl__7));
#line 417
c_rt_lib0clear(&___nl__7);
#line 418
c_rt_lib0move(&___nl__7, array0len(___nl__3));
#line 418
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 418
c_rt_lib0move(&___nl__7, c_rt_lib0gt(___nl__7, ___nl__8));
#line 418
c_rt_lib0clear(&___nl__8);
#line 418
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 418
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 418
c_rt_lib0move(&___nl__9,___get_global_const(607));
#line 418
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 418
c_rt_lib0clear(&___nl__9);
#line 418
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 418
c_rt_lib0clear(&___nl__8);
#line 418
goto label_2;
#line 418
label_2:
#line 418
c_rt_lib0clear(&___nl__7);
#line 419
c_rt_lib0move(&___nl__8,___get_global_const(326));
#line 419
c_rt_lib0move(&___nl__7, wprinter0build_sim(___nl__8));
#line 419
c_rt_lib0clear(&___nl__8);
#line 419
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 419
c_rt_lib0clear(&___nl__7);
#line 420
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 421
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(951)));
#line 421
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__8, ___get_global_const(281)));
#line 421
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 421
if(c_rt_lib0check_true_native(___nl__8)){ goto label_4;}
#line 422
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(951)));
#line 422
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__9, ___get_global_const(281)));
#line 422
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__9, ___get_global_const(281)));
#line 422
c_rt_lib0delete(array0append(&___nl__6, ___nl__9));
#line 422
c_rt_lib0clear(&___nl__9);
#line 423
goto label_3;
#line 423
label_4:
#line 424
c_rt_lib0delete(array0push(&___nl__6, ___nl__7));
#line 425
goto label_3;
#line 425
label_3:
#line 425
c_rt_lib0clear(&___nl__8);
#line 426
c_rt_lib0move(&___nl__9,___get_global_const(181));
#line 426
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 426
c_rt_lib0clear(&___nl__9);
#line 426
c_rt_lib0delete(array0push(&___nl__6, ___nl__8));
#line 426
c_rt_lib0clear(&___nl__8);
#line 427
c_rt_lib0move(&___nl__8, wprinter0build_pretty_l(___nl__6));
#line 427
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__8, ___nl__5));
#line 427
c_rt_lib0clear(&___nl__8);
#line 428
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__2, ___nl__5));
#line 428
c_rt_lib0clear(&___nl__6);
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
#line 433
c_rt_lib0copy(&___nl__7, ___nl__1);
#line 433
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__7));
#line 433
if(c_rt_lib0check_true_native(___nl__7)){ goto label_2;}
#line 434
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6));
#line 435
goto label_1;
#line 435
label_2:
#line 436
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__2, ___nl__3, ___nl__4, ___nl__5, ___nl__6));
#line 437
goto label_1;
#line 437
label_1:
#line 437
c_rt_lib0clear(&___nl__7);
#line 437
c_rt_lib0clear(&___nl__1);
#line 437
c_rt_lib0clear(&___nl__2);
#line 437
c_rt_lib0clear(&___nl__3);
#line 437
c_rt_lib0clear(&___nl__4);
#line 437
c_rt_lib0clear(&___nl__5);
#line 437
c_rt_lib0clear(&___nl__6);
#line 437
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
#line 441
c_rt_lib0move(&___nl__3, wprinter0build_sim(___nl__1));
#line 441
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__3));
#line 441
c_rt_lib0clear(&___nl__3);
#line 442
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(793)));
#line 442
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 444
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(795)));
#line 444
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 446
c_rt_lib0move(&___nl__3, c_rt_lib0priv_is(___nl__0, ___get_global_const(794)));
#line 446
if(c_rt_lib0check_true_native(___nl__3)){ goto label_4;}
#line 446
c_rt_lib0move(&___nl__3,___get_global_const(76));
#line 446
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__3, ___nl__0));
#line 446
nl_die_arg(___nl__3);
#line 442
label_2:
#line 442
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(793)));
#line 443
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 443
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_var_decl(___nl__4));
#line 443
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 443
c_rt_lib0clear(&___nl__6);
#line 443
c_rt_lib0clear(&___nl__7);
#line 443
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 443
c_rt_lib0clear(&___nl__5);
#line 443
c_rt_lib0clear(&___nl__4);
#line 444
goto label_1;
#line 444
label_3:
#line 444
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(795)));
#line 445
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 445
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__4));
#line 445
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(2, ___nl__6, ___nl__7));
#line 445
c_rt_lib0clear(&___nl__6);
#line 445
c_rt_lib0clear(&___nl__7);
#line 445
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 445
c_rt_lib0clear(&___nl__5);
#line 445
c_rt_lib0clear(&___nl__4);
#line 446
goto label_1;
#line 446
label_4:
#line 446
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__0, ___get_global_const(794)));
#line 447
c_rt_lib0move(&___nl__6, wprinter0get_sep());
#line 447
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(239)));
#line 447
c_rt_lib0move(&___nl__7, pretty_printer_priv0print_val(___nl__8));
#line 447
c_rt_lib0clear(&___nl__8);
#line 447
c_rt_lib0move(&___nl__8, wprinter0get_sep());
#line 447
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(405)));
#line 447
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 447
c_rt_lib0clear(&___nl__10);
#line 447
c_rt_lib0move(&___nl__10, wprinter0get_sep());
#line 447
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(240)));
#line 447
c_rt_lib0move(&___nl__11, pretty_printer_priv0print_val(___nl__12));
#line 447
c_rt_lib0clear(&___nl__12);
#line 447
c_rt_lib0move(&___nl__5, c_rt_lib0array_mk(6, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__11));
#line 447
c_rt_lib0clear(&___nl__6);
#line 447
c_rt_lib0clear(&___nl__7);
#line 447
c_rt_lib0clear(&___nl__8);
#line 447
c_rt_lib0clear(&___nl__9);
#line 447
c_rt_lib0clear(&___nl__10);
#line 447
c_rt_lib0clear(&___nl__11);
#line 447
c_rt_lib0delete(array0append(&___nl__2, ___nl__5));
#line 447
c_rt_lib0clear(&___nl__5);
#line 447
c_rt_lib0clear(&___nl__4);
#line 455
goto label_1;
#line 455
label_1:
#line 455
c_rt_lib0clear(&___nl__3);
#line 456
c_rt_lib0move(&___nl__3, wprinter0build_pretty_l(___nl__2));
#line 456
c_rt_lib0clear(&___nl__0);
#line 456
c_rt_lib0clear(&___nl__1);
#line 456
c_rt_lib0clear(&___nl__2);
#line 456
return ___nl__3;
#line 456
c_rt_lib0clear(&___nl__3);
#line 456
c_rt_lib0clear(&___nl__2);
#line 456
c_rt_lib0clear(&___nl__0);
#line 456
c_rt_lib0clear(&___nl__1);
#line 456
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
#line 460
c_rt_lib0move(&___nl__3,___get_global_const(75));
#line 460
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 460
c_rt_lib0clear(&___nl__3);
#line 460
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 460
c_rt_lib0clear(&___nl__2);
#line 461
c_rt_lib0copy(&___nl__2, ___nl__0);
#line 461
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(778)));
#line 461
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 461
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 461
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 462
c_rt_lib0move(&___nl__4, wprinter0get_sep());
#line 462
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_val(___nl__0));
#line 462
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(2, ___nl__4, ___nl__5));
#line 462
c_rt_lib0clear(&___nl__4);
#line 462
c_rt_lib0clear(&___nl__5);
#line 462
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 462
c_rt_lib0clear(&___nl__3);
#line 463
goto label_2;
#line 463
label_2:
#line 463
c_rt_lib0clear(&___nl__2);
#line 464
c_rt_lib0move(&___nl__2, wprinter0build_pretty_l(___nl__1));
#line 464
c_rt_lib0clear(&___nl__0);
#line 464
c_rt_lib0clear(&___nl__1);
#line 464
return ___nl__2;
#line 464
c_rt_lib0clear(&___nl__2);
#line 464
c_rt_lib0clear(&___nl__1);
#line 464
c_rt_lib0clear(&___nl__0);
#line 464
return NULL;
}

ImmT pretty_printer_priv0print_sim_value(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 468
c_rt_lib0move(&___nl__1, pretty_printer_priv0print_val(___nl__0));
#line 469
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(951)));
#line 469
c_rt_lib0move(&___nl__2, c_rt_lib0priv_is(___nl__2, ___get_global_const(281)));
#line 469
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 469
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 470
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(951)));
#line 470
c_rt_lib0move(&___nl__4, c_rt_lib0priv_as(___nl__4, ___get_global_const(281)));
#line 470
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(___nl__4, ___get_global_const(281)));
#line 470
c_rt_lib0move(&___nl__3, wprinter0build_pretty_l(___nl__4));
#line 470
c_rt_lib0clear(&___nl__4);
#line 470
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 470
c_rt_lib0clear(&___nl__3);
#line 471
goto label_2;
#line 471
label_2:
#line 471
c_rt_lib0clear(&___nl__2);
#line 472
c_rt_lib0clear(&___nl__0);
#line 472
return ___nl__1;
#line 472
c_rt_lib0clear(&___nl__1);
#line 472
c_rt_lib0clear(&___nl__0);
#line 472
return NULL;
}

ImmT pretty_printer_priv0print_break(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(1);}
ImmT pretty_printer_priv0print_break0cal() {
pretty_printer_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 476
c_rt_lib0move(&___nl__1,___get_global_const(772));
#line 476
c_rt_lib0move(&___nl__0, wprinter0build_sim(___nl__1));
#line 476
c_rt_lib0clear(&___nl__1);
#line 476
return ___nl__0;
#line 476
c_rt_lib0clear(&___nl__0);
#line 476
return NULL;
}

ImmT pretty_printer_priv0print_continue(){
pretty_printer_priv0__const__init();
return pretty_printer_priv0__const__sing(2);}
ImmT pretty_printer_priv0print_continue0cal() {
pretty_printer_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 480
c_rt_lib0move(&___nl__1,___get_global_const(773));
#line 480
c_rt_lib0move(&___nl__0, wprinter0build_sim(___nl__1));
#line 480
c_rt_lib0clear(&___nl__1);
#line 480
return ___nl__0;
#line 480
c_rt_lib0clear(&___nl__0);
#line 480
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
#line 484
c_rt_lib0move(&___nl__3,___get_global_const(233));
#line 484
c_rt_lib0move(&___nl__2, wprinter0build_sim(___nl__3));
#line 484
c_rt_lib0clear(&___nl__3);
#line 484
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(1, ___nl__2));
#line 484
c_rt_lib0clear(&___nl__2);
#line 485
c_rt_lib0move(&___nl__2, array0len(___nl__0));
#line 485
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 485
c_rt_lib0move(&___nl__2, c_rt_lib0gt(___nl__2, ___nl__3));
#line 485
c_rt_lib0clear(&___nl__3);
#line 485
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 485
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 485
c_rt_lib0move(&___nl__5,___get_global_const(326));
#line 485
c_rt_lib0move(&___nl__4, wprinter0build_sim(___nl__5));
#line 485
c_rt_lib0clear(&___nl__5);
#line 485
c_rt_lib0move(&___nl__6, pretty_printer_priv0join_print_val(___nl__0));
#line 485
c_rt_lib0move(&___nl__5, wprinter0build_pretty_l(___nl__6));
#line 485
c_rt_lib0clear(&___nl__6);
#line 485
c_rt_lib0move(&___nl__7,___get_global_const(181));
#line 485
c_rt_lib0move(&___nl__6, wprinter0build_sim(___nl__7));
#line 485
c_rt_lib0clear(&___nl__7);
#line 485
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(3, ___nl__4, ___nl__5, ___nl__6));
#line 485
c_rt_lib0clear(&___nl__4);
#line 485
c_rt_lib0clear(&___nl__5);
#line 485
c_rt_lib0clear(&___nl__6);
#line 485
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 485
c_rt_lib0clear(&___nl__3);
#line 485
goto label_2;
#line 485
label_2:
#line 485
c_rt_lib0clear(&___nl__2);
#line 491
c_rt_lib0move(&___nl__2, wprinter0build_pretty_a(___nl__1));
#line 491
c_rt_lib0clear(&___nl__0);
#line 491
c_rt_lib0clear(&___nl__1);
#line 491
return ___nl__2;
#line 491
c_rt_lib0clear(&___nl__2);
#line 491
c_rt_lib0clear(&___nl__1);
#line 491
c_rt_lib0clear(&___nl__0);
#line 491
return NULL;
}

ImmT pretty_printer_priv0print_simple_statement(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
pretty_printer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 495
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 495
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(650)));
#line 495
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 495
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 496
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 496
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(650)));
#line 496
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_sim_value(___nl__3));
#line 496
c_rt_lib0clear(&___nl__3);
#line 496
c_rt_lib0clear(&___nl__0);
#line 496
c_rt_lib0clear(&___nl__1);
#line 496
return ___nl__2;
#line 496
c_rt_lib0clear(&___nl__2);
#line 497
goto label_1;
#line 497
label_2:
#line 497
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 497
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(75)));
#line 497
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 497
if(c_rt_lib0check_true_native(___nl__1)){ goto label_3;}
#line 498
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 498
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(75)));
#line 498
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_return(___nl__3));
#line 498
c_rt_lib0clear(&___nl__3);
#line 498
c_rt_lib0clear(&___nl__0);
#line 498
c_rt_lib0clear(&___nl__1);
#line 498
return ___nl__2;
#line 498
c_rt_lib0clear(&___nl__2);
#line 499
goto label_1;
#line 499
label_3:
#line 499
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 499
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(772)));
#line 499
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 499
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 500
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_break());
#line 500
c_rt_lib0clear(&___nl__0);
#line 500
c_rt_lib0clear(&___nl__1);
#line 500
return ___nl__2;
#line 500
c_rt_lib0clear(&___nl__2);
#line 501
goto label_1;
#line 501
label_4:
#line 501
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 501
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(773)));
#line 501
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 501
if(c_rt_lib0check_true_native(___nl__1)){ goto label_5;}
#line 502
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_continue());
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
label_5:
#line 503
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 503
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(233)));
#line 503
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 503
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 504
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 504
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(233)));
#line 504
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_die(___nl__3));
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
label_6:
#line 505
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 505
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(777)));
#line 505
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 505
if(c_rt_lib0check_true_native(___nl__1)){ goto label_7;}
#line 506
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 506
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(777)));
#line 506
c_rt_lib0move(&___nl__4,___get_global_const(777));
#line 506
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_try_ensure(___nl__3, ___nl__4));
#line 506
c_rt_lib0clear(&___nl__4);
#line 506
c_rt_lib0clear(&___nl__3);
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
label_7:
#line 507
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 507
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(80)));
#line 507
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 507
if(c_rt_lib0check_true_native(___nl__1)){ goto label_8;}
#line 508
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(214)));
#line 508
c_rt_lib0move(&___nl__3, c_rt_lib0priv_as(___nl__3, ___get_global_const(80)));
#line 508
c_rt_lib0move(&___nl__4,___get_global_const(80));
#line 508
c_rt_lib0move(&___nl__2, pretty_printer_priv0print_try_ensure(___nl__3, ___nl__4));
#line 508
c_rt_lib0clear(&___nl__4);
#line 508
c_rt_lib0clear(&___nl__3);
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
label_8:
#line 510
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__0));
#line 510
nl_die_arg(___nl__2);
#line 510
c_rt_lib0clear(&___nl__2);
#line 511
goto label_1;
#line 511
label_1:
#line 511
c_rt_lib0clear(&___nl__1);
#line 511
c_rt_lib0clear(&___nl__0);
#line 511
return NULL;
}

ImmT pretty_printer_priv0flush_sim_statement(ImmT * ___ref___0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
pretty_printer_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 515
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__1, ___nl__2));
#line 516
c_rt_lib0move(&___nl__3,___get_global_const(315));
#line 516
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__3));
#line 516
c_rt_lib0clear(&___nl__3);
#line 516
c_rt_lib0clear(&___nl__1);
#line 516
c_rt_lib0clear(&___nl__2);
#line 516
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
#line 520
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__1, ___get_global_const(214)));
#line 520
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(764)));
#line 520
if(c_rt_lib0check_true_native(___nl__4)){ goto label_2;}
#line 530
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(769)));
#line 530
if(c_rt_lib0check_true_native(___nl__4)){ goto label_3;}
#line 532
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(765)));
#line 532
if(c_rt_lib0check_true_native(___nl__4)){ goto label_4;}
#line 551
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(775)));
#line 551
if(c_rt_lib0check_true_native(___nl__4)){ goto label_5;}
#line 558
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(778)));
#line 558
if(c_rt_lib0check_true_native(___nl__4)){ goto label_6;}
#line 560
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(774)));
#line 560
if(c_rt_lib0check_true_native(___nl__4)){ goto label_7;}
#line 571
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(766)));
#line 571
if(c_rt_lib0check_true_native(___nl__4)){ goto label_8;}
#line 573
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(767)));
#line 573
if(c_rt_lib0check_true_native(___nl__4)){ goto label_9;}
#line 576
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(768)));
#line 576
if(c_rt_lib0check_true_native(___nl__4)){ goto label_10;}
#line 578
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(119)));
#line 578
if(c_rt_lib0check_true_native(___nl__4)){ goto label_11;}
#line 581
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(770)));
#line 581
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 583
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(771)));
#line 583
if(c_rt_lib0check_true_native(___nl__4)){ goto label_13;}
#line 585
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(650)));
#line 585
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 587
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(777)));
#line 587
if(c_rt_lib0check_true_native(___nl__4)){ goto label_15;}
#line 589
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(80)));
#line 589
if(c_rt_lib0check_true_native(___nl__4)){ goto label_16;}
#line 591
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(75)));
#line 591
if(c_rt_lib0check_true_native(___nl__4)){ goto label_17;}
#line 593
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(772)));
#line 593
if(c_rt_lib0check_true_native(___nl__4)){ goto label_18;}
#line 595
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(773)));
#line 595
if(c_rt_lib0check_true_native(___nl__4)){ goto label_19;}
#line 597
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(233)));
#line 597
if(c_rt_lib0check_true_native(___nl__4)){ goto label_20;}
#line 599
c_rt_lib0move(&___nl__4, c_rt_lib0priv_is(___nl__3, ___get_global_const(776)));
#line 599
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 599
c_rt_lib0move(&___nl__4,___get_global_const(76));
#line 599
c_rt_lib0move(&___nl__4, c_rt_lib0array_mk(2, ___nl__4, ___nl__3));
#line 599
nl_die_arg(___nl__4);
#line 520
label_2:
#line 520
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(764)));
#line 521
c_rt_lib0move(&___nl__6,___get_global_const(764));
#line 521
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(764)));
#line 521
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 521
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(779)));
#line 521
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 521
c_rt_lib0clear(&___nl__9);
#line 521
c_rt_lib0clear(&___nl__8);
#line 521
c_rt_lib0clear(&___nl__7);
#line 521
c_rt_lib0clear(&___nl__6);
#line 522
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(780)));
#line 522
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 522
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 522
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 522
label_24:
#line 522
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 522
if(c_rt_lib0check_true_native(___nl__11)){ goto label_22;}
#line 522
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 523
c_rt_lib0move(&___nl__12,___get_global_const(607));
#line 523
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__12));
#line 523
c_rt_lib0clear(&___nl__12);
#line 524
c_rt_lib0move(&___nl__12,___get_global_const(780));
#line 524
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(214)));
#line 524
c_rt_lib0move(&___nl__14, c_rt_lib0array_mk(0));
#line 524
c_rt_lib0move(&___nl__15, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(779)));
#line 524
c_rt_lib0delete(pretty_printer_priv0print_loop(___ref___0, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__2));
#line 524
c_rt_lib0clear(&___nl__15);
#line 524
c_rt_lib0clear(&___nl__14);
#line 524
c_rt_lib0clear(&___nl__13);
#line 524
c_rt_lib0clear(&___nl__12);
#line 525
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 525
goto label_24;
#line 525
label_22:
#line 525
c_rt_lib0clear(&___nl__6);
#line 525
c_rt_lib0clear(&___nl__7);
#line 525
c_rt_lib0clear(&___nl__8);
#line 525
c_rt_lib0clear(&___nl__9);
#line 525
c_rt_lib0clear(&___nl__10);
#line 525
c_rt_lib0clear(&___nl__11);
#line 526
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(781)));
#line 526
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__6, ___get_global_const(214)));
#line 526
c_rt_lib0move(&___nl__6, c_rt_lib0priv_is(___nl__6, ___get_global_const(778)));
#line 526
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 526
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__6));
#line 526
if(c_rt_lib0check_true_native(___nl__6)){ goto label_26;}
#line 527
c_rt_lib0move(&___nl__7,___get_global_const(952));
#line 527
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__7));
#line 527
c_rt_lib0clear(&___nl__7);
#line 528
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(781)));
#line 528
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__7, ___nl__2));
#line 528
c_rt_lib0clear(&___nl__7);
#line 529
goto label_26;
#line 529
label_26:
#line 529
c_rt_lib0clear(&___nl__6);
#line 529
c_rt_lib0clear(&___nl__5);
#line 530
goto label_1;
#line 530
label_3:
#line 530
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(769)));
#line 531
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(861)));
#line 531
c_rt_lib0move(&___nl__7,___get_global_const(769));
#line 531
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 531
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(0));
#line 531
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(779)));
#line 531
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 531
c_rt_lib0clear(&___nl__10);
#line 531
c_rt_lib0clear(&___nl__9);
#line 531
c_rt_lib0clear(&___nl__8);
#line 531
c_rt_lib0clear(&___nl__7);
#line 531
c_rt_lib0clear(&___nl__6);
#line 531
c_rt_lib0clear(&___nl__5);
#line 532
goto label_1;
#line 532
label_4:
#line 532
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(765)));
#line 534
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(782)));
#line 534
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(650)));
#line 534
if(c_rt_lib0check_true_native(___nl__8)){ goto label_28;}
#line 536
c_rt_lib0move(&___nl__8, c_rt_lib0priv_is(___nl__7, ___get_global_const(776)));
#line 536
if(c_rt_lib0check_true_native(___nl__8)){ goto label_29;}
#line 536
c_rt_lib0move(&___nl__8,___get_global_const(76));
#line 536
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(2, ___nl__8, ___nl__7));
#line 536
nl_die_arg(___nl__8);
#line 534
label_28:
#line 534
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(650)));
#line 535
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_val(___nl__9));
#line 535
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 535
c_rt_lib0clear(&___nl__10);
#line 535
c_rt_lib0clear(&___nl__9);
#line 536
goto label_27;
#line 536
label_29:
#line 536
c_rt_lib0move(&___nl__9, c_rt_lib0priv_as(___nl__7, ___get_global_const(776)));
#line 537
c_rt_lib0move(&___nl__10, pretty_printer_priv0print_var_decl(___nl__9));
#line 537
c_rt_lib0copy(&___nl__6, ___nl__10);
#line 537
c_rt_lib0clear(&___nl__10);
#line 537
c_rt_lib0clear(&___nl__9);
#line 538
goto label_27;
#line 538
label_27:
#line 538
c_rt_lib0clear(&___nl__7);
#line 538
c_rt_lib0clear(&___nl__8);
#line 539
c_rt_lib0move(&___nl__10,___get_global_const(953));
#line 539
c_rt_lib0move(&___nl__9, wprinter0build_sim(___nl__10));
#line 539
c_rt_lib0clear(&___nl__10);
#line 539
c_rt_lib0move(&___nl__11,___get_global_const(315));
#line 539
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 539
c_rt_lib0clear(&___nl__11);
#line 539
c_rt_lib0move(&___nl__11, wprinter0get_sep());
#line 539
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(779)));
#line 539
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_val(___nl__13));
#line 539
c_rt_lib0clear(&___nl__13);
#line 539
c_rt_lib0move(&___nl__14,___get_global_const(315));
#line 539
c_rt_lib0move(&___nl__13, wprinter0build_sim(___nl__14));
#line 539
c_rt_lib0clear(&___nl__14);
#line 539
c_rt_lib0move(&___nl__14, wprinter0get_sep());
#line 539
c_rt_lib0move(&___nl__16, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(783)));
#line 539
c_rt_lib0move(&___nl__15, pretty_printer_priv0print_val(___nl__16));
#line 539
c_rt_lib0clear(&___nl__16);
#line 539
c_rt_lib0move(&___nl__17,___get_global_const(494));
#line 539
c_rt_lib0move(&___nl__16, wprinter0build_sim(___nl__17));
#line 539
c_rt_lib0clear(&___nl__17);
#line 539
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(9, ___nl__9, ___nl__6, ___nl__10, ___nl__11, ___nl__12, ___nl__13, ___nl__14, ___nl__15, ___nl__16));
#line 539
c_rt_lib0clear(&___nl__9);
#line 539
c_rt_lib0clear(&___nl__10);
#line 539
c_rt_lib0clear(&___nl__11);
#line 539
c_rt_lib0clear(&___nl__12);
#line 539
c_rt_lib0clear(&___nl__13);
#line 539
c_rt_lib0clear(&___nl__14);
#line 539
c_rt_lib0clear(&___nl__15);
#line 539
c_rt_lib0clear(&___nl__16);
#line 539
c_rt_lib0move(&___nl__7, wprinter0build_pretty_a(___nl__8));
#line 539
c_rt_lib0clear(&___nl__8);
#line 539
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__7, ___nl__2));
#line 539
c_rt_lib0clear(&___nl__7);
#line 550
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 550
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__7, ___nl__2));
#line 550
c_rt_lib0clear(&___nl__7);
#line 550
c_rt_lib0clear(&___nl__6);
#line 550
c_rt_lib0clear(&___nl__5);
#line 551
goto label_1;
#line 551
label_5:
#line 551
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(775)));
#line 552
c_rt_lib0move(&___nl__6,___get_global_const(173));
#line 552
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 552
c_rt_lib0clear(&___nl__6);
#line 553
c_rt_lib0move(&___nl__7,___get_global_const(1));
#line 553
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 553
c_rt_lib0move(&___nl__9, c_rt_lib0array_len(___nl__5));
#line 553
label_32:
#line 553
c_rt_lib0move(&___nl__10, c_rt_lib0ge(___nl__7, ___nl__9));
#line 553
if(c_rt_lib0check_true_native(___nl__10)){ goto label_30;}
#line 553
c_rt_lib0move(&___nl__6, c_rt_lib0array_get(___nl__5, ___nl__7));
#line 554
c_rt_lib0move(&___nl__11, string0lf());
#line 554
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 554
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__2, ___nl__13));
#line 554
c_rt_lib0move(&___nl__12, pretty_printer_priv0pind(___nl__13));
#line 554
c_rt_lib0clear(&___nl__13);
#line 554
c_rt_lib0move(&___nl__11, c_rt_lib0concat_add(___nl__11, ___nl__12));
#line 554
c_rt_lib0clear(&___nl__12);
#line 554
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__11));
#line 554
c_rt_lib0clear(&___nl__11);
#line 555
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 555
c_rt_lib0move(&___nl__11, c_rt_lib0add(___nl__2, ___nl__11));
#line 555
c_rt_lib0delete(pretty_printer_priv0print_cmd(___ref___0, ___nl__6, ___nl__11));
#line 555
c_rt_lib0clear(&___nl__11);
#line 556
c_rt_lib0move(&___nl__7, c_rt_lib0add_mod(___nl__7, ___nl__8));
#line 556
goto label_32;
#line 556
label_30:
#line 556
c_rt_lib0clear(&___nl__6);
#line 556
c_rt_lib0clear(&___nl__7);
#line 556
c_rt_lib0clear(&___nl__8);
#line 556
c_rt_lib0clear(&___nl__9);
#line 556
c_rt_lib0clear(&___nl__10);
#line 557
c_rt_lib0move(&___nl__6, string0lf());
#line 557
c_rt_lib0move(&___nl__7, pretty_printer_priv0pind(___nl__2));
#line 557
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 557
c_rt_lib0clear(&___nl__7);
#line 557
c_rt_lib0move(&___nl__7,___get_global_const(174));
#line 557
c_rt_lib0move(&___nl__6, c_rt_lib0concat_add(___nl__6, ___nl__7));
#line 557
c_rt_lib0clear(&___nl__7);
#line 557
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 557
c_rt_lib0clear(&___nl__6);
#line 557
c_rt_lib0clear(&___nl__5);
#line 558
goto label_1;
#line 558
label_6:
#line 559
c_rt_lib0move(&___nl__5,___get_global_const(315));
#line 559
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__5));
#line 559
c_rt_lib0clear(&___nl__5);
#line 560
goto label_1;
#line 560
label_7:
#line 560
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(774)));
#line 561
c_rt_lib0move(&___nl__9,___get_global_const(954));
#line 561
c_rt_lib0move(&___nl__8, wprinter0build_sim(___nl__9));
#line 561
c_rt_lib0clear(&___nl__9);
#line 561
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 561
c_rt_lib0move(&___nl__9, pretty_printer_priv0print_val(___nl__10));
#line 561
c_rt_lib0clear(&___nl__10);
#line 561
c_rt_lib0move(&___nl__11,___get_global_const(181));
#line 561
c_rt_lib0move(&___nl__10, wprinter0build_sim(___nl__11));
#line 561
c_rt_lib0clear(&___nl__11);
#line 561
c_rt_lib0move(&___nl__7, c_rt_lib0array_mk(3, ___nl__8, ___nl__9, ___nl__10));
#line 561
c_rt_lib0clear(&___nl__8);
#line 561
c_rt_lib0clear(&___nl__9);
#line 561
c_rt_lib0clear(&___nl__10);
#line 561
c_rt_lib0move(&___nl__6, wprinter0build_pretty_a(___nl__7));
#line 561
c_rt_lib0clear(&___nl__7);
#line 561
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__6, ___nl__2));
#line 561
c_rt_lib0clear(&___nl__6);
#line 566
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(787)));
#line 566
c_rt_lib0move(&___nl__8,___get_global_const(1));
#line 566
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 566
c_rt_lib0move(&___nl__10, c_rt_lib0array_len(___nl__6));
#line 566
label_35:
#line 566
c_rt_lib0move(&___nl__11, c_rt_lib0ge(___nl__8, ___nl__10));
#line 566
if(c_rt_lib0check_true_native(___nl__11)){ goto label_33;}
#line 566
c_rt_lib0move(&___nl__7, c_rt_lib0array_get(___nl__6, ___nl__8));
#line 567
c_rt_lib0move(&___nl__12,___get_global_const(955));
#line 567
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__12));
#line 567
c_rt_lib0clear(&___nl__12);
#line 568
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(788)));
#line 568
c_rt_lib0move(&___nl__12, pretty_printer_priv0print_variant_case_decl(___nl__13));
#line 568
c_rt_lib0clear(&___nl__13);
#line 568
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 568
c_rt_lib0move(&___nl__13, c_rt_lib0add(___nl__2, ___nl__13));
#line 568
c_rt_lib0delete(wprinter0print_t(___ref___0, ___nl__12, ___nl__13));
#line 568
c_rt_lib0clear(&___nl__13);
#line 568
c_rt_lib0clear(&___nl__12);
#line 569
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__7, ___get_global_const(214)));
#line 569
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__12, ___nl__2));
#line 569
c_rt_lib0clear(&___nl__12);
#line 570
c_rt_lib0move(&___nl__8, c_rt_lib0add_mod(___nl__8, ___nl__9));
#line 570
goto label_35;
#line 570
label_33:
#line 570
c_rt_lib0clear(&___nl__6);
#line 570
c_rt_lib0clear(&___nl__7);
#line 570
c_rt_lib0clear(&___nl__8);
#line 570
c_rt_lib0clear(&___nl__9);
#line 570
c_rt_lib0clear(&___nl__10);
#line 570
c_rt_lib0clear(&___nl__11);
#line 570
c_rt_lib0clear(&___nl__5);
#line 571
goto label_1;
#line 571
label_8:
#line 571
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(766)));
#line 572
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(861)));
#line 572
c_rt_lib0move(&___nl__7,___get_global_const(766));
#line 572
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 572
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(783)));
#line 572
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 572
c_rt_lib0clear(&___nl__10);
#line 572
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(3)));
#line 572
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 572
c_rt_lib0clear(&___nl__10);
#line 572
c_rt_lib0clear(&___nl__9);
#line 572
c_rt_lib0clear(&___nl__8);
#line 572
c_rt_lib0clear(&___nl__7);
#line 572
c_rt_lib0clear(&___nl__6);
#line 572
c_rt_lib0clear(&___nl__5);
#line 573
goto label_1;
#line 573
label_9:
#line 573
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(767)));
#line 574
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(861)));
#line 574
c_rt_lib0move(&___nl__7,___get_global_const(767));
#line 574
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 574
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(283)));
#line 574
c_rt_lib0move(&___nl__11, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(238)));
#line 574
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(2, ___nl__10, ___nl__11));
#line 574
c_rt_lib0clear(&___nl__10);
#line 574
c_rt_lib0clear(&___nl__11);
#line 574
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(282)));
#line 574
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 574
c_rt_lib0clear(&___nl__10);
#line 574
c_rt_lib0clear(&___nl__9);
#line 574
c_rt_lib0clear(&___nl__8);
#line 574
c_rt_lib0clear(&___nl__7);
#line 574
c_rt_lib0clear(&___nl__6);
#line 574
c_rt_lib0clear(&___nl__5);
#line 576
goto label_1;
#line 576
label_10:
#line 576
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(768)));
#line 577
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(861)));
#line 577
c_rt_lib0move(&___nl__7,___get_global_const(768));
#line 577
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 577
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(783)));
#line 577
c_rt_lib0move(&___nl__9, c_rt_lib0array_mk(1, ___nl__10));
#line 577
c_rt_lib0clear(&___nl__10);
#line 577
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(784)));
#line 577
c_rt_lib0delete(pretty_printer_priv0print_loop_or_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__10, ___nl__2));
#line 577
c_rt_lib0clear(&___nl__10);
#line 577
c_rt_lib0clear(&___nl__9);
#line 577
c_rt_lib0clear(&___nl__8);
#line 577
c_rt_lib0clear(&___nl__7);
#line 577
c_rt_lib0clear(&___nl__6);
#line 577
c_rt_lib0clear(&___nl__5);
#line 578
goto label_1;
#line 578
label_11:
#line 578
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(119)));
#line 579
c_rt_lib0move(&___nl__6,___get_global_const(119));
#line 579
c_rt_lib0delete(pretty_printer_priv0state_print(___ref___0, ___nl__6));
#line 579
c_rt_lib0clear(&___nl__6);
#line 580
c_rt_lib0delete(pretty_printer_priv0print_st(___ref___0, ___nl__5, ___nl__2));
#line 580
c_rt_lib0clear(&___nl__5);
#line 581
goto label_1;
#line 581
label_12:
#line 581
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(770)));
#line 582
c_rt_lib0move(&___nl__6,___get_global_const(764));
#line 582
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 582
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 582
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(779)));
#line 582
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 582
c_rt_lib0clear(&___nl__9);
#line 582
c_rt_lib0clear(&___nl__8);
#line 582
c_rt_lib0clear(&___nl__7);
#line 582
c_rt_lib0clear(&___nl__6);
#line 582
c_rt_lib0clear(&___nl__5);
#line 583
goto label_1;
#line 583
label_13:
#line 583
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(771)));
#line 584
c_rt_lib0move(&___nl__6,___get_global_const(878));
#line 584
c_rt_lib0move(&___nl__7, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(214)));
#line 584
c_rt_lib0move(&___nl__8, c_rt_lib0array_mk(0));
#line 584
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__5, ___get_global_const(779)));
#line 584
c_rt_lib0delete(pretty_printer_priv0print_cond_mod(___ref___0, ___nl__6, ___nl__7, ___nl__8, ___nl__9, ___nl__2));
#line 584
c_rt_lib0clear(&___nl__9);
#line 584
c_rt_lib0clear(&___nl__8);
#line 584
c_rt_lib0clear(&___nl__7);
#line 584
c_rt_lib0clear(&___nl__6);
#line 584
c_rt_lib0clear(&___nl__5);
#line 585
goto label_1;
#line 585
label_14:
#line 585
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(650)));
#line 586
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_sim_value(___nl__5));
#line 586
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 586
c_rt_lib0clear(&___nl__6);
#line 586
c_rt_lib0clear(&___nl__5);
#line 587
goto label_1;
#line 587
label_15:
#line 587
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(777)));
#line 588
c_rt_lib0move(&___nl__7,___get_global_const(777));
#line 588
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_try_ensure(___nl__5, ___nl__7));
#line 588
c_rt_lib0clear(&___nl__7);
#line 588
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 588
c_rt_lib0clear(&___nl__6);
#line 588
c_rt_lib0clear(&___nl__5);
#line 589
goto label_1;
#line 589
label_16:
#line 589
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(80)));
#line 590
c_rt_lib0move(&___nl__7,___get_global_const(80));
#line 590
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_try_ensure(___nl__5, ___nl__7));
#line 590
c_rt_lib0clear(&___nl__7);
#line 590
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 590
c_rt_lib0clear(&___nl__6);
#line 590
c_rt_lib0clear(&___nl__5);
#line 591
goto label_1;
#line 591
label_17:
#line 591
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(75)));
#line 592
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_return(___nl__5));
#line 592
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 592
c_rt_lib0clear(&___nl__6);
#line 592
c_rt_lib0clear(&___nl__5);
#line 593
goto label_1;
#line 593
label_18:
#line 594
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_break());
#line 594
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__5, ___nl__2));
#line 594
c_rt_lib0clear(&___nl__5);
#line 595
goto label_1;
#line 595
label_19:
#line 596
c_rt_lib0move(&___nl__5, pretty_printer_priv0print_continue());
#line 596
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__5, ___nl__2));
#line 596
c_rt_lib0clear(&___nl__5);
#line 597
goto label_1;
#line 597
label_20:
#line 597
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(233)));
#line 598
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_die(___nl__5));
#line 598
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 598
c_rt_lib0clear(&___nl__6);
#line 598
c_rt_lib0clear(&___nl__5);
#line 599
goto label_1;
#line 599
label_21:
#line 599
c_rt_lib0move(&___nl__5, c_rt_lib0priv_as(___nl__3, ___get_global_const(776)));
#line 600
c_rt_lib0move(&___nl__6, pretty_printer_priv0print_var_decl(___nl__5));
#line 600
c_rt_lib0delete(pretty_printer_priv0flush_sim_statement(___ref___0, ___nl__6, ___nl__2));
#line 600
c_rt_lib0clear(&___nl__6);
#line 600
c_rt_lib0clear(&___nl__5);
#line 601
goto label_1;
#line 601
label_1:
#line 601
c_rt_lib0clear(&___nl__3);
#line 601
c_rt_lib0clear(&___nl__4);
#line 601
c_rt_lib0clear(&___nl__1);
#line 601
c_rt_lib0clear(&___nl__2);
#line 601
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
