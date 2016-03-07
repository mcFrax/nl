
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "ntokenizer.h"
#include "ov.h"
#include "nast.h"
#include "ptd.h"
#include "array.h"
#include "hash.h"
#include "string.h"
#include "enum.h"
#include "c_std_lib.h"
#include "boolean_t.h"
#include "singleton.h"
#line 1 "ntokenizer.nl"

static ImmT *__const__f = NULL;
void ntokenizer_priv0__const__init();
ImmT ntokenizer_priv0__const__sim(int __nr);
ImmT ntokenizer_priv0__const__sing(int __nr);

ImmT ntokenizer_priv0get_keywords();
ImmT ntokenizer_priv0get_char_oper();
ImmT ntokenizer_priv0get_lett_oper();
ImmT ntokenizer_priv0get_char(ImmT * ___ref___0);
ImmT ntokenizer_priv0get_next_char(ImmT * ___ref___0);
ImmT ntokenizer_priv0eat_ws(ImmT * ___ref___0);
ImmT ntokenizer_priv0is_token(ImmT * ___ref___0);
ImmT ntokenizer_priv0is_hex_number(ImmT ___nl__0);
ImmT ntokenizer_priv0try_get_operator(ImmT ___nl__0,ImmT * ___ref___1);
ImmT ntokenizer_priv0get_next_token(ImmT * ___ref___0);


ImmT ntokenizer_priv0get_keywords(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(0);}
ImmT ntokenizer_priv0get_keywords0cal() {
ntokenizer_priv0__const__init();
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
ImmT ___nl__25 = NULL;
#line 18
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__7,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__8,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__9,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__10,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__12,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__13,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__14,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__15,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__16,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__17,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__18,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__19,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__20,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__21,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__22,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__23,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__24,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__25,___get_global_const(0));
#line 18
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(24, ___get_global_const(882), ___nl__2, ___get_global_const(766), ___nl__3, ___get_global_const(767), ___nl__4, ___get_global_const(765), ___nl__5, ___get_global_const(768), ___nl__6, ___get_global_const(119), ___nl__7, ___get_global_const(769), ___nl__8, ___get_global_const(764), ___nl__9, ___get_global_const(780), ___nl__10, ___get_global_const(781), ___nl__11, ___get_global_const(796), ___nl__12, ___get_global_const(885), ___nl__13, ___get_global_const(5), ___nl__14, ___get_global_const(774), ___nl__15, ___get_global_const(845), ___nl__16, ___get_global_const(878), ___nl__17, ___get_global_const(899), ___nl__18, ___get_global_const(900), ___nl__19, ___get_global_const(773), ___nl__20, ___get_global_const(772), ___nl__21, ___get_global_const(75), ___nl__22, ___get_global_const(777), ___nl__23, ___get_global_const(80), ___nl__24, ___get_global_const(233), ___nl__25));
#line 18
c_rt_lib0clear(&___nl__2);
#line 18
c_rt_lib0clear(&___nl__3);
#line 18
c_rt_lib0clear(&___nl__4);
#line 18
c_rt_lib0clear(&___nl__5);
#line 18
c_rt_lib0clear(&___nl__6);
#line 18
c_rt_lib0clear(&___nl__7);
#line 18
c_rt_lib0clear(&___nl__8);
#line 18
c_rt_lib0clear(&___nl__9);
#line 18
c_rt_lib0clear(&___nl__10);
#line 18
c_rt_lib0clear(&___nl__11);
#line 18
c_rt_lib0clear(&___nl__12);
#line 18
c_rt_lib0clear(&___nl__13);
#line 18
c_rt_lib0clear(&___nl__14);
#line 18
c_rt_lib0clear(&___nl__15);
#line 18
c_rt_lib0clear(&___nl__16);
#line 18
c_rt_lib0clear(&___nl__17);
#line 18
c_rt_lib0clear(&___nl__18);
#line 18
c_rt_lib0clear(&___nl__19);
#line 18
c_rt_lib0clear(&___nl__20);
#line 18
c_rt_lib0clear(&___nl__21);
#line 18
c_rt_lib0clear(&___nl__22);
#line 18
c_rt_lib0clear(&___nl__23);
#line 18
c_rt_lib0clear(&___nl__24);
#line 18
c_rt_lib0clear(&___nl__25);
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

ImmT ntokenizer_priv0get_char_oper(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(1);}
ImmT ntokenizer_priv0get_char_oper0cal() {
ntokenizer_priv0__const__init();
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
ImmT ___nl__13 = NULL;
#line 47
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 47
c_rt_lib0move(&___nl__0, c_rt_lib0array_mk(3, ___nl__1, ___nl__2, ___nl__3));
#line 47
c_rt_lib0clear(&___nl__1);
#line 47
c_rt_lib0clear(&___nl__2);
#line 47
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0move(&___nl__2, nast0get_unary_ops());
#line 48
c_rt_lib0move(&___nl__3, nast0get_bin_ops());
#line 48
c_rt_lib0move(&___nl__4, nast0get_ternary_ops());
#line 48
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(3, ___nl__2, ___nl__3, ___nl__4));
#line 48
c_rt_lib0clear(&___nl__2);
#line 48
c_rt_lib0clear(&___nl__3);
#line 48
c_rt_lib0clear(&___nl__4);
#line 48
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 48
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 48
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__1));
#line 48
label_3:
#line 48
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 48
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 48
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 49
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__2));
#line 49
label_6:
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 49
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 49
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 49
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__2, ___nl__7));
#line 50
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 50
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 50
c_rt_lib0move(&___nl__11, string0substr(___nl__7, ___nl__12, ___nl__13));
#line 50
c_rt_lib0clear(&___nl__13);
#line 50
c_rt_lib0clear(&___nl__12);
#line 50
c_rt_lib0move(&___nl__10, string0is_letter(___nl__11));
#line 50
c_rt_lib0clear(&___nl__11);
#line 50
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 50
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 50
if(c_rt_lib0check_true_native(___nl__10)){ goto label_8;}
#line 50
c_rt_lib0move(&___nl__12, string0length(___nl__7));
#line 50
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 50
c_rt_lib0move(&___nl__12, c_rt_lib0sub_mod(___nl__12, ___nl__13));
#line 50
c_rt_lib0clear(&___nl__13);
#line 50
c_rt_lib0move(&___nl__11, c_rt_lib0get_ref_arr(___nl__0, ___nl__12));
#line 50
c_rt_lib0delete(array0push(&___nl__11, ___nl__7));
#line 50
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__12, ___nl__11));
#line 50
c_rt_lib0clear(&___nl__11);
#line 50
c_rt_lib0clear(&___nl__12);
#line 50
goto label_8;
#line 50
label_8:
#line 50
c_rt_lib0clear(&___nl__10);
#line 51
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 51
goto label_6;
#line 51
label_4:
#line 51
c_rt_lib0clear(&___nl__7);
#line 51
c_rt_lib0clear(&___nl__8);
#line 51
c_rt_lib0clear(&___nl__9);
#line 52
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 52
goto label_3;
#line 52
label_1:
#line 52
c_rt_lib0clear(&___nl__1);
#line 52
c_rt_lib0clear(&___nl__2);
#line 52
c_rt_lib0clear(&___nl__3);
#line 52
c_rt_lib0clear(&___nl__4);
#line 52
c_rt_lib0clear(&___nl__5);
#line 52
c_rt_lib0clear(&___nl__6);
#line 53
c_rt_lib0move(&___nl__2,___get_global_const(139));
#line 53
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_arr(___nl__0, ___nl__2));
#line 53
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 53
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 53
c_rt_lib0clear(&___nl__4);
#line 53
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 53
c_rt_lib0clear(&___nl__3);
#line 53
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__2, ___nl__1));
#line 53
c_rt_lib0clear(&___nl__1);
#line 53
c_rt_lib0clear(&___nl__2);
#line 54
c_rt_lib0move(&___nl__2,___get_global_const(139));
#line 54
c_rt_lib0move(&___nl__1, c_rt_lib0get_ref_arr(___nl__0, ___nl__2));
#line 54
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 54
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__0, ___nl__4));
#line 54
c_rt_lib0clear(&___nl__4);
#line 54
c_rt_lib0delete(array0append(&___nl__1, ___nl__3));
#line 54
c_rt_lib0clear(&___nl__3);
#line 54
c_rt_lib0delete(c_rt_lib0set_ref_arr(&___nl__0, ___nl__2, ___nl__1));
#line 54
c_rt_lib0clear(&___nl__1);
#line 54
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0move(&___nl__3,___get_global_const(139));
#line 55
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__0, ___nl__3));
#line 55
c_rt_lib0clear(&___nl__3);
#line 55
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__2));
#line 55
c_rt_lib0clear(&___nl__2);
#line 55
c_rt_lib0clear(&___nl__0);
#line 55
return ___nl__1;
#line 55
c_rt_lib0clear(&___nl__1);
#line 55
c_rt_lib0clear(&___nl__0);
#line 55
return NULL;
}

ImmT ntokenizer_priv0get_lett_oper(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(2);}
ImmT ntokenizer_priv0get_lett_oper0cal() {
ntokenizer_priv0__const__init();
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
ImmT ___nl__13 = NULL;
#line 59
c_rt_lib0move(&___nl__0, c_rt_lib0hash_mk(0));
#line 60
c_rt_lib0move(&___nl__2, nast0get_unary_ops());
#line 60
c_rt_lib0move(&___nl__3, nast0get_bin_ops());
#line 60
c_rt_lib0move(&___nl__4, nast0get_ternary_ops());
#line 60
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(3, ___nl__2, ___nl__3, ___nl__4));
#line 60
c_rt_lib0clear(&___nl__2);
#line 60
c_rt_lib0clear(&___nl__3);
#line 60
c_rt_lib0clear(&___nl__4);
#line 60
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 60
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 60
c_rt_lib0move(&___nl__5, c_rt_lib0array_len(___nl__1));
#line 60
label_3:
#line 60
c_rt_lib0move(&___nl__6, c_rt_lib0ge(___nl__3, ___nl__5));
#line 60
if(c_rt_lib0check_true_native(___nl__6)){ goto label_1;}
#line 60
c_rt_lib0move(&___nl__2, c_rt_lib0array_get(___nl__1, ___nl__3));
#line 61
c_rt_lib0move(&___nl__9, c_rt_lib0init_iter(___nl__2));
#line 61
label_6:
#line 61
c_rt_lib0move(&___nl__7, c_rt_lib0is_end_hash(___nl__9));
#line 61
if(c_rt_lib0check_true_native(___nl__7)){ goto label_4;}
#line 61
c_rt_lib0move(&___nl__7, c_rt_lib0get_key_iter(___nl__9));
#line 61
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value(___nl__2, ___nl__7));
#line 62
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 62
c_rt_lib0move(&___nl__13,___get_global_const(2));
#line 62
c_rt_lib0move(&___nl__11, string0substr(___nl__7, ___nl__12, ___nl__13));
#line 62
c_rt_lib0clear(&___nl__13);
#line 62
c_rt_lib0clear(&___nl__12);
#line 62
c_rt_lib0move(&___nl__10, string0is_letter(___nl__11));
#line 62
c_rt_lib0clear(&___nl__11);
#line 62
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__10));
#line 62
if(c_rt_lib0check_true_native(___nl__10)){ goto label_8;}
#line 62
c_rt_lib0move(&___nl__11,___get_global_const(0));
#line 62
c_rt_lib0delete(hash0set_value(&___nl__0, ___nl__7, ___nl__11));
#line 62
c_rt_lib0clear(&___nl__11);
#line 62
goto label_8;
#line 62
label_8:
#line 62
c_rt_lib0clear(&___nl__10);
#line 63
c_rt_lib0move(&___nl__9, c_rt_lib0next_iter(___nl__9));
#line 63
goto label_6;
#line 63
label_4:
#line 63
c_rt_lib0clear(&___nl__7);
#line 63
c_rt_lib0clear(&___nl__8);
#line 63
c_rt_lib0clear(&___nl__9);
#line 64
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 64
goto label_3;
#line 64
label_1:
#line 64
c_rt_lib0clear(&___nl__1);
#line 64
c_rt_lib0clear(&___nl__2);
#line 64
c_rt_lib0clear(&___nl__3);
#line 64
c_rt_lib0clear(&___nl__4);
#line 64
c_rt_lib0clear(&___nl__5);
#line 64
c_rt_lib0clear(&___nl__6);
#line 65
c_rt_lib0move(&___nl__1, singleton0sigleton_do_not_use_without_approval(___nl__0));
#line 65
c_rt_lib0clear(&___nl__0);
#line 65
return ___nl__1;
#line 65
c_rt_lib0clear(&___nl__1);
#line 65
c_rt_lib0clear(&___nl__0);
#line 65
return NULL;
}

ImmT ntokenizer0state_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ntokenizer0state_t");
return ntokenizer0state_t();}
ImmT ntokenizer0state_t(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(3);}
ImmT ntokenizer0state_t0cal() {
ntokenizer_priv0__const__init();
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
ImmT ___nl__13 = NULL;
#line 69
c_rt_lib0move(&___nl__3, ptd0sim());
#line 69
c_rt_lib0move(&___nl__2, ptd0arr(___nl__3));
#line 69
c_rt_lib0clear(&___nl__3);
#line 69
c_rt_lib0move(&___nl__3, ptd0sim());
#line 69
c_rt_lib0move(&___nl__4, ptd0sim());
#line 69
c_rt_lib0move(&___nl__5, c_rt_lib0func_new(ntokenizer0token_t0ptr, ___get_global_const(879), ___get_global_const(906)));
#line 69
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__5));
#line 69
c_rt_lib0move(&___nl__6, ptd0sim());
#line 69
c_rt_lib0move(&___nl__7, ptd0sim());
#line 69
c_rt_lib0move(&___nl__8, ptd0sim());
#line 69
c_rt_lib0move(&___nl__11, ptd0sim());
#line 69
c_rt_lib0move(&___nl__12, ptd0sim());
#line 69
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__11, ___get_global_const(862), ___nl__12));
#line 69
c_rt_lib0clear(&___nl__11);
#line 69
c_rt_lib0clear(&___nl__12);
#line 69
c_rt_lib0move(&___nl__9, ptd0rec(___nl__10));
#line 69
c_rt_lib0clear(&___nl__10);
#line 69
c_rt_lib0move(&___nl__12, ptd0sim());
#line 69
c_rt_lib0move(&___nl__13, ptd0sim());
#line 69
c_rt_lib0move(&___nl__11, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__12, ___get_global_const(862), ___nl__13));
#line 69
c_rt_lib0clear(&___nl__12);
#line 69
c_rt_lib0clear(&___nl__13);
#line 69
c_rt_lib0move(&___nl__10, ptd0rec(___nl__11));
#line 69
c_rt_lib0clear(&___nl__11);
#line 69
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(9, ___get_global_const(907), ___nl__2, ___get_global_const(161), ___nl__3, ___get_global_const(162), ___nl__4, ___get_global_const(73), ___nl__5, ___get_global_const(908), ___nl__6, ___get_global_const(909), ___nl__7, ___get_global_const(910), ___nl__8, ___get_global_const(911), ___nl__9, ___get_global_const(912), ___nl__10));
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
c_rt_lib0clear(&___nl__9);
#line 69
c_rt_lib0clear(&___nl__10);
#line 69
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 69
c_rt_lib0clear(&___nl__1);
#line 69
return ___nl__0;
#line 69
c_rt_lib0clear(&___nl__0);
#line 69
return NULL;
}

ImmT ntokenizer0token_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "ntokenizer0token_t");
return ntokenizer0token_t();}
ImmT ntokenizer0token_t(){
ntokenizer_priv0__const__init();
return ntokenizer_priv0__const__sing(4);}
ImmT ntokenizer0token_t0cal() {
ntokenizer_priv0__const__init();
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
#line 83
c_rt_lib0move(&___nl__2, ptd0none());
#line 83
c_rt_lib0move(&___nl__3, ptd0none());
#line 83
c_rt_lib0move(&___nl__4, ptd0none());
#line 83
c_rt_lib0move(&___nl__5, ptd0none());
#line 83
c_rt_lib0move(&___nl__6, ptd0none());
#line 83
c_rt_lib0move(&___nl__7, ptd0none());
#line 83
c_rt_lib0move(&___nl__8, ptd0none());
#line 83
c_rt_lib0move(&___nl__9, ptd0none());
#line 83
c_rt_lib0move(&___nl__10, ptd0none());
#line 83
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(9, ___get_global_const(848), ___nl__2, ___get_global_const(913), ___nl__3, ___get_global_const(896), ___nl__4, ___get_global_const(894), ___nl__5, ___get_global_const(898), ___nl__6, ___get_global_const(883), ___nl__7, ___get_global_const(895), ___nl__8, ___get_global_const(717), ___nl__9, ___get_global_const(97), ___nl__10));
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
c_rt_lib0clear(&___nl__3);
#line 83
c_rt_lib0clear(&___nl__4);
#line 83
c_rt_lib0clear(&___nl__5);
#line 83
c_rt_lib0clear(&___nl__6);
#line 83
c_rt_lib0clear(&___nl__7);
#line 83
c_rt_lib0clear(&___nl__8);
#line 83
c_rt_lib0clear(&___nl__9);
#line 83
c_rt_lib0clear(&___nl__10);
#line 83
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
return ___nl__0;
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
return NULL;
}

ImmT ntokenizer0init0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0init");
return ntokenizer0init(_tab[0]);}
ImmT ntokenizer0init(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ntokenizer_priv0__const__init();
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
#line 97
c_rt_lib0move(&___nl__2, c_rt_lib0array_mk(1, ___nl__0));
#line 97
c_rt_lib0move(&___nl__3, string0length(___nl__0));
#line 97
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 97
c_rt_lib0move(&___nl__5, c_rt_lib0ov_mk_none(___get_global_const(848)));
#line 97
c_rt_lib0move(&___nl__6,___get_global_const(0));
#line 97
c_rt_lib0move(&___nl__7,___get_global_const(2));
#line 97
c_rt_lib0move(&___nl__8,___get_global_const(2));
#line 97
c_rt_lib0move(&___nl__10,___get_global_const(2));
#line 97
c_rt_lib0move(&___nl__11,___get_global_const(1));
#line 97
c_rt_lib0move(&___nl__9, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__10, ___get_global_const(862), ___nl__11));
#line 97
c_rt_lib0clear(&___nl__10);
#line 97
c_rt_lib0clear(&___nl__11);
#line 97
c_rt_lib0move(&___nl__11,___get_global_const(2));
#line 97
c_rt_lib0move(&___nl__12,___get_global_const(1));
#line 97
c_rt_lib0move(&___nl__10, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__11, ___get_global_const(862), ___nl__12));
#line 97
c_rt_lib0clear(&___nl__11);
#line 97
c_rt_lib0clear(&___nl__12);
#line 97
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(9, ___get_global_const(907), ___nl__2, ___get_global_const(162), ___nl__3, ___get_global_const(161), ___nl__4, ___get_global_const(73), ___nl__5, ___get_global_const(908), ___nl__6, ___get_global_const(909), ___nl__7, ___get_global_const(910), ___nl__8, ___get_global_const(911), ___nl__9, ___get_global_const(912), ___nl__10));
#line 97
c_rt_lib0clear(&___nl__2);
#line 97
c_rt_lib0clear(&___nl__3);
#line 97
c_rt_lib0clear(&___nl__4);
#line 97
c_rt_lib0clear(&___nl__5);
#line 97
c_rt_lib0clear(&___nl__6);
#line 97
c_rt_lib0clear(&___nl__7);
#line 97
c_rt_lib0clear(&___nl__8);
#line 97
c_rt_lib0clear(&___nl__9);
#line 97
c_rt_lib0clear(&___nl__10);
#line 108
c_rt_lib0delete(ntokenizer_priv0get_next_token(&___nl__1));
#line 109
c_rt_lib0clear(&___nl__0);
#line 109
return ___nl__1;
#line 109
c_rt_lib0clear(&___nl__1);
#line 109
c_rt_lib0clear(&___nl__0);
#line 109
return NULL;
}

ImmT ntokenizer_priv0get_char(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 113
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(907)));
#line 113
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 113
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 113
c_rt_lib0move(&___nl__1, c_std_lib0fast_substr(___nl__2, ___nl__3, ___nl__4));
#line 113
c_rt_lib0clear(&___nl__4);
#line 113
c_rt_lib0clear(&___nl__3);
#line 113
c_rt_lib0clear(&___nl__2);
#line 113
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 113
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 113
c_rt_lib0clear(&___nl__2);
#line 113
return ___nl__1;
#line 113
c_rt_lib0clear(&___nl__1);
#line 113
return NULL;
}

ImmT ntokenizer_priv0get_next_char(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 117
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(162)));
#line 117
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 117
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 117
c_rt_lib0move(&___nl__2, c_rt_lib0add_mod(___nl__2, ___nl__3));
#line 117
c_rt_lib0clear(&___nl__3);
#line 117
c_rt_lib0move(&___nl__1, c_rt_lib0le(___nl__1, ___nl__2));
#line 117
c_rt_lib0clear(&___nl__2);
#line 117
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 117
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 117
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 117
c_rt_lib0clear(&___nl__1);
#line 117
return ___nl__2;
#line 117
c_rt_lib0clear(&___nl__2);
#line 117
goto label_2;
#line 117
label_2:
#line 117
c_rt_lib0clear(&___nl__1);
#line 118
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(907)));
#line 118
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 118
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 118
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 118
c_rt_lib0clear(&___nl__4);
#line 118
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 118
c_rt_lib0move(&___nl__1, c_std_lib0fast_substr(___nl__2, ___nl__3, ___nl__4));
#line 118
c_rt_lib0clear(&___nl__4);
#line 118
c_rt_lib0clear(&___nl__3);
#line 118
c_rt_lib0clear(&___nl__2);
#line 118
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 118
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 118
c_rt_lib0clear(&___nl__2);
#line 118
return ___nl__1;
#line 118
c_rt_lib0clear(&___nl__1);
#line 118
return NULL;
}

ImmT ntokenizer_priv0eat_ws(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 122
label_2:
#line 123
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 123
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(162)));
#line 123
c_rt_lib0move(&___nl__1, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 123
c_rt_lib0clear(&___nl__2);
#line 123
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 123
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 123
c_rt_lib0clear(&___nl__1);
#line 123
return NULL;
#line 123
goto label_4;
#line 123
label_4:
#line 123
c_rt_lib0clear(&___nl__1);
#line 124
c_rt_lib0move(&___nl__2, ntokenizer_priv0get_char(___ref___0));
#line 124
c_rt_lib0move(&___nl__1, string0ord(___nl__2));
#line 124
c_rt_lib0clear(&___nl__2);
#line 125
c_rt_lib0move(&___nl__2,___get_global_const(163));
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 125
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 125
c_rt_lib0move(&___nl__2,___get_global_const(158));
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 125
label_8:
#line 125
if(c_rt_lib0check_true_native(___nl__2)){ goto label_7;}
#line 125
c_rt_lib0move(&___nl__2,___get_global_const(156));
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 125
label_7:
#line 125
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 125
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 126
c_rt_lib0move(&___nl__3,___get_global_const(161));
#line 126
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 126
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 126
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 126
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 126
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 126
c_rt_lib0clear(&___nl__5);
#line 126
c_rt_lib0clear(&___nl__3);
#line 126
c_rt_lib0clear(&___nl__4);
#line 127
goto label_5;
#line 127
label_6:
#line 127
c_rt_lib0move(&___nl__2,___get_global_const(157));
#line 127
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 127
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 127
if(c_rt_lib0check_true_native(___nl__2)){ goto label_9;}
#line 128
c_rt_lib0move(&___nl__3,___get_global_const(161));
#line 128
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 128
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 128
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 128
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 128
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 128
c_rt_lib0clear(&___nl__5);
#line 128
c_rt_lib0clear(&___nl__3);
#line 128
c_rt_lib0clear(&___nl__4);
#line 129
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 129
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 129
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(910), ___nl__4);
#line 129
c_rt_lib0clear(&___nl__3);
#line 129
c_rt_lib0clear(&___nl__4);
#line 130
c_rt_lib0move(&___nl__3,___get_global_const(909));
#line 130
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 130
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 130
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 130
c_rt_lib0move(&___nl__5,___get_global_const(909));
#line 130
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 130
c_rt_lib0clear(&___nl__5);
#line 130
c_rt_lib0clear(&___nl__3);
#line 130
c_rt_lib0clear(&___nl__4);
#line 131
goto label_5;
#line 131
label_9:
#line 131
c_rt_lib0move(&___nl__2,___get_global_const(914));
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 131
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 131
if(c_rt_lib0check_true_native(___nl__2)){ goto label_10;}
#line 132
label_12:
#line 132
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 132
c_rt_lib0move(&___nl__3, string0ord(___nl__4));
#line 132
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0move(&___nl__4,___get_global_const(157));
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0num_ne(___nl__3, ___nl__4));
#line 132
c_rt_lib0clear(&___nl__4);
#line 132
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 132
if(c_rt_lib0check_true_native(___nl__3)){ goto label_11;}
#line 133
c_rt_lib0move(&___nl__4,___get_global_const(161));
#line 133
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 133
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 133
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 133
c_rt_lib0move(&___nl__6,___get_global_const(161));
#line 133
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 133
c_rt_lib0clear(&___nl__6);
#line 133
c_rt_lib0clear(&___nl__4);
#line 133
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 134
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(162)));
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 134
c_rt_lib0clear(&___nl__5);
#line 134
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 134
if(c_rt_lib0check_true_native(___nl__4)){ goto label_14;}
#line 134
c_rt_lib0clear(&___nl__1);
#line 134
c_rt_lib0clear(&___nl__2);
#line 134
c_rt_lib0clear(&___nl__3);
#line 134
c_rt_lib0clear(&___nl__4);
#line 134
return NULL;
#line 134
goto label_14;
#line 134
label_14:
#line 134
c_rt_lib0clear(&___nl__4);
#line 135
goto label_12;
#line 135
label_11:
#line 135
c_rt_lib0clear(&___nl__3);
#line 136
goto label_5;
#line 136
label_10:
#line 137
c_rt_lib0clear(&___nl__1);
#line 137
c_rt_lib0clear(&___nl__2);
#line 137
return NULL;
#line 138
goto label_5;
#line 138
label_5:
#line 138
c_rt_lib0clear(&___nl__2);
#line 138
c_rt_lib0clear(&___nl__1);
#line 122
goto label_2;
#line 122
return NULL;
}

ImmT ntokenizer_priv0is_token(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
#line 143
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(73)));
#line 143
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(913)));
#line 143
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 143
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 143
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 143
c_rt_lib0clear(&___nl__1);
#line 143
return ___nl__2;
#line 143
c_rt_lib0clear(&___nl__2);
#line 143
goto label_2;
#line 143
label_2:
#line 143
c_rt_lib0clear(&___nl__1);
#line 144
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(73)));
#line 144
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(896)));
#line 144
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 144
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 144
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 144
c_rt_lib0clear(&___nl__1);
#line 144
return ___nl__2;
#line 144
c_rt_lib0clear(&___nl__2);
#line 144
goto label_4;
#line 144
label_4:
#line 144
c_rt_lib0clear(&___nl__1);
#line 145
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(73)));
#line 145
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(898)));
#line 145
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 145
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 145
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 145
c_rt_lib0clear(&___nl__1);
#line 145
return ___nl__2;
#line 145
c_rt_lib0clear(&___nl__2);
#line 145
goto label_6;
#line 145
label_6:
#line 145
c_rt_lib0clear(&___nl__1);
#line 146
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 146
return ___nl__1;
#line 146
c_rt_lib0clear(&___nl__1);
#line 146
return NULL;
}

ImmT ntokenizer0eat_token0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0eat_token");
return ntokenizer0eat_token(&_tab[0], _tab[1]);}
ImmT ntokenizer0eat_token(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ntokenizer_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 150
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(908)));
#line 150
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 150
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 150
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 150
c_rt_lib0move(&___nl__2, ntokenizer_priv0is_token(___ref___0));
#line 150
label_3:
#line 150
c_rt_lib0clear(&___nl__3);
#line 150
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 150
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 151
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___0));
#line 152
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 152
c_rt_lib0clear(&___nl__1);
#line 152
c_rt_lib0clear(&___nl__2);
#line 152
return ___nl__3;
#line 152
c_rt_lib0clear(&___nl__3);
#line 153
goto label_2;
#line 153
label_2:
#line 153
c_rt_lib0clear(&___nl__2);
#line 154
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
return ___nl__2;
#line 154
c_rt_lib0clear(&___nl__2);
#line 154
c_rt_lib0clear(&___nl__1);
#line 154
return NULL;
}

ImmT ntokenizer0get_line0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_line");
return ntokenizer0get_line(_tab[0]);}
ImmT ntokenizer0get_line(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 158
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(909)));
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

ImmT ntokenizer0get_column0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_column");
return ntokenizer0get_column(_tab[0]);}
ImmT ntokenizer0get_column(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 161
c_rt_lib0move(&___nl__1,___get_global_const(2));
#line 161
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(161)));
#line 161
c_rt_lib0move(&___nl__1, c_rt_lib0add_mod(___nl__1, ___nl__2));
#line 161
c_rt_lib0clear(&___nl__2);
#line 161
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(910)));
#line 161
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 161
c_rt_lib0clear(&___nl__2);
#line 161
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(908)));
#line 161
c_rt_lib0move(&___nl__2, string0length(___nl__3));
#line 161
c_rt_lib0clear(&___nl__3);
#line 161
c_rt_lib0move(&___nl__1, c_rt_lib0sub_mod(___nl__1, ___nl__2));
#line 161
c_rt_lib0clear(&___nl__2);
#line 161
c_rt_lib0clear(&___nl__0);
#line 161
return ___nl__1;
#line 161
c_rt_lib0clear(&___nl__1);
#line 161
c_rt_lib0clear(&___nl__0);
#line 161
return NULL;
}

ImmT ntokenizer0get_place0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_place");
return ntokenizer0get_place(&_tab[0]);}
ImmT ntokenizer0get_place(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 164
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(911)));
#line 164
return ___nl__1;
#line 164
c_rt_lib0clear(&___nl__1);
#line 164
return NULL;
}

ImmT ntokenizer0get_place_ws0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_place_ws");
return ntokenizer0get_place_ws(&_tab[0]);}
ImmT ntokenizer0get_place_ws(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 168
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(912)));
#line 168
return ___nl__1;
#line 168
c_rt_lib0clear(&___nl__1);
#line 168
return NULL;
}

ImmT ntokenizer0get_token0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0get_token");
return ntokenizer0get_token(&_tab[0]);}
ImmT ntokenizer0get_token(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 172
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(908)));
#line 172
return ___nl__1;
#line 172
c_rt_lib0clear(&___nl__1);
#line 172
return NULL;
}

ImmT ntokenizer0is_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0is_type");
return ntokenizer0is_type(&_tab[0], _tab[1]);}
ImmT ntokenizer0is_type(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ntokenizer_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 176
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(73)));
#line 176
c_rt_lib0move(&___nl__2, enum0eq(___nl__3, ___nl__1));
#line 176
c_rt_lib0clear(&___nl__3);
#line 176
c_rt_lib0clear(&___nl__1);
#line 176
return ___nl__2;
#line 176
c_rt_lib0clear(&___nl__2);
#line 176
c_rt_lib0clear(&___nl__1);
#line 176
return NULL;
}

ImmT ntokenizer0next_is0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0next_is");
return ntokenizer0next_is(&_tab[0], _tab[1]);}
ImmT ntokenizer0next_is(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ntokenizer_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 180
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(908)));
#line 180
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 180
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 180
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 180
c_rt_lib0move(&___nl__2, ntokenizer_priv0is_token(___ref___0));
#line 180
label_1:
#line 180
c_rt_lib0clear(&___nl__3);
#line 180
c_rt_lib0clear(&___nl__1);
#line 180
return ___nl__2;
#line 180
c_rt_lib0clear(&___nl__2);
#line 180
c_rt_lib0clear(&___nl__1);
#line 180
return NULL;
}

ImmT ntokenizer0eat_type0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "ntokenizer0eat_type");
return ntokenizer0eat_type(&_tab[0], _tab[1]);}
ImmT ntokenizer0eat_type(ImmT * ___ref___0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__1);
ntokenizer_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 184
c_rt_lib0move(&___nl__2, ntokenizer0is_type(___ref___0, ___nl__1));
#line 184
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 184
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 184
if(c_rt_lib0check_true_native(___nl__2)){ goto label_2;}
#line 184
c_rt_lib0move(&___nl__3, c_rt_lib0array_mk(0));
#line 184
nl_die_arg(___nl__3);
#line 184
goto label_2;
#line 184
label_2:
#line 184
c_rt_lib0clear(&___nl__2);
#line 184
c_rt_lib0clear(&___nl__3);
#line 185
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(908)));
#line 186
c_rt_lib0delete(ntokenizer_priv0get_next_token(___ref___0));
#line 187
c_rt_lib0clear(&___nl__1);
#line 187
return ___nl__2;
#line 187
c_rt_lib0clear(&___nl__2);
#line 187
c_rt_lib0clear(&___nl__1);
#line 187
return NULL;
}

ImmT ntokenizer0is_text0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0is_text");
return ntokenizer0is_text(&_tab[0]);}
ImmT ntokenizer0is_text(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 191
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(883)));
#line 191
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 191
c_rt_lib0clear(&___nl__2);
#line 191
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 191
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 191
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 191
c_rt_lib0clear(&___nl__1);
#line 191
return ___nl__2;
#line 191
c_rt_lib0clear(&___nl__2);
#line 191
goto label_2;
#line 191
label_2:
#line 191
c_rt_lib0clear(&___nl__1);
#line 192
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(898)));
#line 192
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 192
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 192
c_rt_lib0move(&___nl__2, c_rt_lib0get_true());
#line 192
c_rt_lib0clear(&___nl__1);
#line 192
return ___nl__2;
#line 192
c_rt_lib0clear(&___nl__2);
#line 192
goto label_4;
#line 192
label_4:
#line 192
c_rt_lib0clear(&___nl__1);
#line 193
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(896)));
#line 193
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 193
c_rt_lib0clear(&___nl__2);
#line 193
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 193
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 194
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(908)));
#line 194
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 194
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 194
c_rt_lib0move(&___nl__3, string0substr(___nl__4, ___nl__5, ___nl__6));
#line 194
c_rt_lib0clear(&___nl__6);
#line 194
c_rt_lib0clear(&___nl__5);
#line 194
c_rt_lib0clear(&___nl__4);
#line 194
c_rt_lib0move(&___nl__2, string0is_letter(___nl__3));
#line 194
c_rt_lib0clear(&___nl__3);
#line 194
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 194
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 194
c_rt_lib0move(&___nl__3, c_rt_lib0get_true());
#line 194
c_rt_lib0clear(&___nl__1);
#line 194
c_rt_lib0clear(&___nl__2);
#line 194
return ___nl__3;
#line 194
c_rt_lib0clear(&___nl__3);
#line 194
goto label_8;
#line 194
label_8:
#line 194
c_rt_lib0clear(&___nl__2);
#line 195
goto label_6;
#line 195
label_6:
#line 195
c_rt_lib0clear(&___nl__1);
#line 196
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 196
return ___nl__1;
#line 196
c_rt_lib0clear(&___nl__1);
#line 196
return NULL;
}

ImmT ntokenizer0eat_text0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0eat_text");
return ntokenizer0eat_text(&_tab[0]);}
ImmT ntokenizer0eat_text(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 200
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(883)));
#line 200
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 200
c_rt_lib0clear(&___nl__2);
#line 200
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 200
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 200
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(883)));
#line 200
c_rt_lib0move(&___nl__2, ntokenizer0eat_type(___ref___0, ___nl__3));
#line 200
c_rt_lib0clear(&___nl__3);
#line 200
c_rt_lib0clear(&___nl__1);
#line 200
return ___nl__2;
#line 200
c_rt_lib0clear(&___nl__2);
#line 200
goto label_2;
#line 200
label_2:
#line 200
c_rt_lib0clear(&___nl__1);
#line 201
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(898)));
#line 201
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 201
c_rt_lib0clear(&___nl__2);
#line 201
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 201
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 201
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(898)));
#line 201
c_rt_lib0move(&___nl__2, ntokenizer0eat_type(___ref___0, ___nl__3));
#line 201
c_rt_lib0clear(&___nl__3);
#line 201
c_rt_lib0clear(&___nl__1);
#line 201
return ___nl__2;
#line 201
c_rt_lib0clear(&___nl__2);
#line 201
goto label_4;
#line 201
label_4:
#line 201
c_rt_lib0clear(&___nl__1);
#line 202
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(896)));
#line 202
c_rt_lib0move(&___nl__1, ntokenizer0is_type(___ref___0, ___nl__2));
#line 202
c_rt_lib0clear(&___nl__2);
#line 202
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 202
if(c_rt_lib0check_true_native(___nl__1)){ goto label_6;}
#line 203
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(908)));
#line 203
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 203
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 203
c_rt_lib0move(&___nl__3, string0substr(___nl__4, ___nl__5, ___nl__6));
#line 203
c_rt_lib0clear(&___nl__6);
#line 203
c_rt_lib0clear(&___nl__5);
#line 203
c_rt_lib0clear(&___nl__4);
#line 203
c_rt_lib0move(&___nl__2, string0is_letter(___nl__3));
#line 203
c_rt_lib0clear(&___nl__3);
#line 203
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 203
if(c_rt_lib0check_true_native(___nl__2)){ goto label_8;}
#line 203
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(896)));
#line 203
c_rt_lib0move(&___nl__3, ntokenizer0eat_type(___ref___0, ___nl__4));
#line 203
c_rt_lib0clear(&___nl__4);
#line 203
c_rt_lib0clear(&___nl__1);
#line 203
c_rt_lib0clear(&___nl__2);
#line 203
return ___nl__3;
#line 203
c_rt_lib0clear(&___nl__3);
#line 203
goto label_8;
#line 203
label_8:
#line 203
c_rt_lib0clear(&___nl__2);
#line 205
goto label_6;
#line 205
label_6:
#line 205
c_rt_lib0clear(&___nl__1);
#line 206
c_rt_lib0move(&___nl__1, c_rt_lib0array_mk(0));
#line 206
nl_die_arg(___nl__1);
#line 206
c_rt_lib0clear(&___nl__1);
#line 206
return NULL;
}

ImmT ntokenizer0info0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "ntokenizer0info");
return ntokenizer0info(_tab[0]);}
ImmT ntokenizer0info(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 210
c_rt_lib0move(&___nl__1,___get_global_const(915));
#line 210
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(908)));
#line 210
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 210
c_rt_lib0clear(&___nl__2);
#line 210
c_rt_lib0move(&___nl__2,___get_global_const(916));
#line 210
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 210
c_rt_lib0clear(&___nl__2);
#line 210
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(73)));
#line 210
c_rt_lib0move(&___nl__2, ov0get_element(___nl__3));
#line 210
c_rt_lib0clear(&___nl__3);
#line 210
c_rt_lib0move(&___nl__1, c_rt_lib0concat_add(___nl__1, ___nl__2));
#line 210
c_rt_lib0clear(&___nl__2);
#line 210
c_rt_lib0clear(&___nl__0);
#line 210
return ___nl__1;
#line 210
c_rt_lib0clear(&___nl__1);
#line 210
c_rt_lib0clear(&___nl__0);
#line 210
return NULL;
}

ImmT ntokenizer_priv0is_hex_number(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 214
c_rt_lib0move(&___nl__1, string0is_digit(___nl__0));
#line 214
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 214
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 214
c_rt_lib0move(&___nl__3,___get_global_const(917));
#line 214
c_rt_lib0move(&___nl__1, c_rt_lib0ge(___nl__1, ___nl__3));
#line 214
c_rt_lib0clear(&___nl__3);
#line 214
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 214
if(c_rt_lib0check_true_native(___nl__2)){ goto label_3;}
#line 214
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 214
c_rt_lib0move(&___nl__3,___get_global_const(918));
#line 214
c_rt_lib0move(&___nl__1, c_rt_lib0le(___nl__1, ___nl__3));
#line 214
c_rt_lib0clear(&___nl__3);
#line 214
label_3:
#line 214
c_rt_lib0clear(&___nl__2);
#line 214
label_2:
#line 214
if(c_rt_lib0check_true_native(___nl__1)){ goto label_1;}
#line 214
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 214
c_rt_lib0move(&___nl__3,___get_global_const(919));
#line 214
c_rt_lib0move(&___nl__1, c_rt_lib0ge(___nl__1, ___nl__3));
#line 214
c_rt_lib0clear(&___nl__3);
#line 214
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__1));
#line 214
if(c_rt_lib0check_true_native(___nl__2)){ goto label_4;}
#line 214
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 214
c_rt_lib0move(&___nl__3,___get_global_const(920));
#line 214
c_rt_lib0move(&___nl__1, c_rt_lib0le(___nl__1, ___nl__3));
#line 214
c_rt_lib0clear(&___nl__3);
#line 214
label_4:
#line 214
c_rt_lib0clear(&___nl__2);
#line 214
label_1:
#line 214
c_rt_lib0clear(&___nl__0);
#line 214
return ___nl__1;
#line 214
c_rt_lib0clear(&___nl__1);
#line 214
c_rt_lib0clear(&___nl__0);
#line 214
return NULL;
}

ImmT ntokenizer_priv0try_get_operator(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
ntokenizer_priv0__const__init();
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
#line 219
c_rt_lib0move(&___nl__2, ntokenizer_priv0get_char_oper());
#line 219
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 219
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 219
c_rt_lib0move(&___nl__6, c_rt_lib0array_len(___nl__2));
#line 219
label_3:
#line 219
c_rt_lib0move(&___nl__7, c_rt_lib0ge(___nl__4, ___nl__6));
#line 219
if(c_rt_lib0check_true_native(___nl__7)){ goto label_1;}
#line 219
c_rt_lib0move(&___nl__3, c_rt_lib0array_get(___nl__2, ___nl__4));
#line 220
c_rt_lib0move(&___nl__8, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(162)));
#line 220
c_rt_lib0move(&___nl__9,___get_global_const(2));
#line 220
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(161)));
#line 220
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 220
c_rt_lib0clear(&___nl__10);
#line 220
c_rt_lib0move(&___nl__10, string0length(___nl__3));
#line 220
c_rt_lib0move(&___nl__9, c_rt_lib0add_mod(___nl__9, ___nl__10));
#line 220
c_rt_lib0clear(&___nl__10);
#line 220
c_rt_lib0move(&___nl__8, c_rt_lib0lt(___nl__8, ___nl__9));
#line 220
c_rt_lib0clear(&___nl__9);
#line 220
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 220
if(c_rt_lib0check_true_native(___nl__8)){ goto label_5;}
#line 220
c_rt_lib0clear(&___nl__8);
#line 220
goto label_2;
#line 220
goto label_5;
#line 220
label_5:
#line 220
c_rt_lib0clear(&___nl__8);
#line 221
c_rt_lib0move(&___nl__9, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(907)));
#line 221
c_rt_lib0move(&___nl__10, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(161)));
#line 221
c_rt_lib0move(&___nl__11, string0length(___nl__3));
#line 221
c_rt_lib0move(&___nl__8, c_std_lib0fast_substr(___nl__9, ___nl__10, ___nl__11));
#line 221
c_rt_lib0clear(&___nl__11);
#line 221
c_rt_lib0clear(&___nl__10);
#line 221
c_rt_lib0clear(&___nl__9);
#line 221
c_rt_lib0move(&___nl__8, c_rt_lib0eq(___nl__8, ___nl__3));
#line 221
c_rt_lib0move(&___nl__8, c_rt_lib0not(___nl__8));
#line 221
if(c_rt_lib0check_true_native(___nl__8)){ goto label_7;}
#line 222
c_rt_lib0move(&___nl__11, ntokenizer_priv0get_char(&___nl__0));
#line 222
c_rt_lib0move(&___nl__9, string0is_letter(___nl__11));
#line 222
c_rt_lib0clear(&___nl__11);
#line 222
c_rt_lib0move(&___nl__10, c_rt_lib0not(___nl__9));
#line 222
if(c_rt_lib0check_true_native(___nl__10)){ goto label_10;}
#line 222
c_rt_lib0move(&___nl__12, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(907)));
#line 222
c_rt_lib0move(&___nl__13, c_rt_lib0hash_get_value_dec(___nl__0, ___get_global_const(161)));
#line 222
c_rt_lib0move(&___nl__14, string0length(___nl__3));
#line 222
c_rt_lib0move(&___nl__13, c_rt_lib0add_mod(___nl__13, ___nl__14));
#line 222
c_rt_lib0clear(&___nl__14);
#line 222
c_rt_lib0move(&___nl__14,___get_global_const(2));
#line 222
c_rt_lib0move(&___nl__11, c_std_lib0fast_substr(___nl__12, ___nl__13, ___nl__14));
#line 222
c_rt_lib0clear(&___nl__14);
#line 222
c_rt_lib0clear(&___nl__13);
#line 222
c_rt_lib0clear(&___nl__12);
#line 222
c_rt_lib0move(&___nl__9, string0is_letter(___nl__11));
#line 222
c_rt_lib0clear(&___nl__11);
#line 222
label_10:
#line 222
c_rt_lib0clear(&___nl__10);
#line 222
c_rt_lib0move(&___nl__9, c_rt_lib0not(___nl__9));
#line 222
if(c_rt_lib0check_true_native(___nl__9)){ goto label_9;}
#line 222
c_rt_lib0clear(&___nl__8);
#line 222
c_rt_lib0clear(&___nl__9);
#line 222
goto label_2;
#line 222
goto label_9;
#line 222
label_9:
#line 222
c_rt_lib0clear(&___nl__9);
#line 226
c_rt_lib0copy(___ref___1, ___nl__3);
#line 227
c_rt_lib0move(&___nl__9, c_rt_lib0get_true());
#line 227
c_rt_lib0clear(&___nl__0);
#line 227
c_rt_lib0clear(&___nl__2);
#line 227
c_rt_lib0clear(&___nl__3);
#line 227
c_rt_lib0clear(&___nl__4);
#line 227
c_rt_lib0clear(&___nl__5);
#line 227
c_rt_lib0clear(&___nl__6);
#line 227
c_rt_lib0clear(&___nl__7);
#line 227
c_rt_lib0clear(&___nl__8);
#line 227
return ___nl__9;
#line 227
c_rt_lib0clear(&___nl__9);
#line 228
goto label_7;
#line 228
label_7:
#line 228
c_rt_lib0clear(&___nl__8);
#line 228
label_2:
#line 229
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 229
goto label_3;
#line 229
label_1:
#line 229
c_rt_lib0clear(&___nl__2);
#line 229
c_rt_lib0clear(&___nl__3);
#line 229
c_rt_lib0clear(&___nl__4);
#line 229
c_rt_lib0clear(&___nl__5);
#line 229
c_rt_lib0clear(&___nl__6);
#line 229
c_rt_lib0clear(&___nl__7);
#line 230
c_rt_lib0move(&___nl__2, c_rt_lib0get_false());
#line 230
c_rt_lib0clear(&___nl__0);
#line 230
return ___nl__2;
#line 230
c_rt_lib0clear(&___nl__2);
#line 230
c_rt_lib0clear(&___nl__0);
#line 230
return NULL;
}

ImmT ntokenizer_priv0get_next_token(ImmT * ___ref___0) {
ntokenizer_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
ImmT ___nl__7 = NULL;
ImmT ___nl__8 = NULL;
#line 234
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(909)));
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 234
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(910)));
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 234
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 234
c_rt_lib0clear(&___nl__4);
#line 234
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__2, ___get_global_const(862), ___nl__3));
#line 234
c_rt_lib0clear(&___nl__2);
#line 234
c_rt_lib0clear(&___nl__3);
#line 234
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 234
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(912), ___nl__2);
#line 234
c_rt_lib0clear(&___nl__1);
#line 234
c_rt_lib0clear(&___nl__2);
#line 235
c_rt_lib0delete(ntokenizer_priv0eat_ws(___ref___0));
#line 236
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(909)));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 236
c_rt_lib0move(&___nl__4, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(910)));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 236
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 236
c_rt_lib0clear(&___nl__4);
#line 236
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(113), ___nl__2, ___get_global_const(862), ___nl__3));
#line 236
c_rt_lib0clear(&___nl__2);
#line 236
c_rt_lib0clear(&___nl__3);
#line 236
c_rt_lib0copy(&___nl__2, ___nl__1);
#line 236
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(911), ___nl__2);
#line 236
c_rt_lib0clear(&___nl__1);
#line 236
c_rt_lib0clear(&___nl__2);
#line 237
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(73)));
#line 237
c_rt_lib0move(&___nl__1, c_rt_lib0priv_is(___nl__1, ___get_global_const(97)));
#line 237
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 237
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 237
c_rt_lib0clear(&___nl__1);
#line 237
return NULL;
#line 237
goto label_2;
#line 237
label_2:
#line 237
c_rt_lib0clear(&___nl__1);
#line 238
c_rt_lib0move(&___nl__1, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(161)));
#line 238
c_rt_lib0move(&___nl__2, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(162)));
#line 238
c_rt_lib0move(&___nl__1, c_rt_lib0num_eq(___nl__1, ___nl__2));
#line 238
c_rt_lib0clear(&___nl__2);
#line 238
c_rt_lib0move(&___nl__1, c_rt_lib0not(___nl__1));
#line 238
if(c_rt_lib0check_true_native(___nl__1)){ goto label_4;}
#line 239
c_rt_lib0move(&___nl__2, c_rt_lib0ov_mk_none(___get_global_const(848)));
#line 239
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 239
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(73), ___nl__3);
#line 239
c_rt_lib0clear(&___nl__2);
#line 239
c_rt_lib0clear(&___nl__3);
#line 240
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 240
c_rt_lib0copy(&___nl__3, ___nl__2);
#line 240
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(908), ___nl__3);
#line 240
c_rt_lib0clear(&___nl__2);
#line 240
c_rt_lib0clear(&___nl__3);
#line 241
c_rt_lib0clear(&___nl__1);
#line 241
return NULL;
#line 242
goto label_4;
#line 242
label_4:
#line 242
c_rt_lib0clear(&___nl__1);
#line 243
c_rt_lib0move(&___nl__1, ntokenizer_priv0get_char(___ref___0));
#line 244
c_rt_lib0move(&___nl__2,___get_global_const(425));
#line 244
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 244
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 244
if(c_rt_lib0check_true_native(___nl__2)){ goto label_6;}
#line 245
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 245
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 245
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(908), ___nl__4);
#line 245
c_rt_lib0clear(&___nl__3);
#line 245
c_rt_lib0clear(&___nl__4);
#line 246
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(717)));
#line 246
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 246
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(73), ___nl__4);
#line 246
c_rt_lib0clear(&___nl__3);
#line 246
c_rt_lib0clear(&___nl__4);
#line 247
label_8:
#line 248
c_rt_lib0move(&___nl__3,___get_global_const(2));
#line 248
c_rt_lib0move(&___nl__4,___get_global_const(161));
#line 248
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 248
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__3));
#line 248
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 248
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 248
c_rt_lib0clear(&___nl__5);
#line 248
c_rt_lib0clear(&___nl__3);
#line 248
c_rt_lib0clear(&___nl__4);
#line 249
c_rt_lib0move(&___nl__3, ntokenizer_priv0get_char(___ref___0));
#line 249
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 249
c_rt_lib0clear(&___nl__3);
#line 250
c_rt_lib0move(&___nl__3,___get_global_const(425));
#line 250
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 250
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 250
if(c_rt_lib0check_true_native(___nl__3)){ goto label_10;}
#line 251
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 251
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 251
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__4));
#line 251
c_rt_lib0move(&___nl__6,___get_global_const(161));
#line 251
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 251
c_rt_lib0clear(&___nl__6);
#line 251
c_rt_lib0clear(&___nl__4);
#line 251
c_rt_lib0clear(&___nl__5);
#line 252
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 252
c_rt_lib0move(&___nl__5,___get_global_const(425));
#line 252
c_rt_lib0move(&___nl__4, c_rt_lib0eq(___nl__4, ___nl__5));
#line 252
c_rt_lib0clear(&___nl__5);
#line 252
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 252
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 252
if(c_rt_lib0check_true_native(___nl__4)){ goto label_12;}
#line 252
c_rt_lib0clear(&___nl__1);
#line 252
c_rt_lib0clear(&___nl__2);
#line 252
c_rt_lib0clear(&___nl__3);
#line 252
c_rt_lib0clear(&___nl__4);
#line 252
return NULL;
#line 252
goto label_12;
#line 252
label_12:
#line 252
c_rt_lib0clear(&___nl__4);
#line 253
goto label_13;
#line 253
label_10:
#line 253
c_rt_lib0move(&___nl__3, string0ord(___nl__1));
#line 253
c_rt_lib0move(&___nl__4,___get_global_const(157));
#line 253
c_rt_lib0move(&___nl__3, c_rt_lib0num_eq(___nl__3, ___nl__4));
#line 253
c_rt_lib0clear(&___nl__4);
#line 253
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 253
if(c_rt_lib0check_true_native(___nl__3)){ goto label_13;}
#line 254
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(895)));
#line 254
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 254
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(73), ___nl__5);
#line 254
c_rt_lib0clear(&___nl__4);
#line 254
c_rt_lib0clear(&___nl__5);
#line 255
c_rt_lib0clear(&___nl__1);
#line 255
c_rt_lib0clear(&___nl__2);
#line 255
c_rt_lib0clear(&___nl__3);
#line 255
return NULL;
#line 256
goto label_13;
#line 256
label_13:
#line 256
c_rt_lib0clear(&___nl__3);
#line 257
c_rt_lib0move(&___nl__3,___get_global_const(908));
#line 257
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 257
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__1));
#line 257
c_rt_lib0move(&___nl__4,___get_global_const(908));
#line 257
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__4, ___nl__3));
#line 257
c_rt_lib0clear(&___nl__4);
#line 257
c_rt_lib0clear(&___nl__3);
#line 247
goto label_8;
#line 259
goto label_5;
#line 259
label_6:
#line 259
c_rt_lib0move(&___nl__2, ntokenizer_priv0get_next_char(___ref___0));
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 259
c_rt_lib0move(&___nl__3,___get_global_const(175));
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 259
c_rt_lib0clear(&___nl__3);
#line 259
if(c_rt_lib0check_true_native(___nl__2)){ goto label_15;}
#line 259
c_rt_lib0move(&___nl__2, ntokenizer_priv0get_next_char(___ref___0));
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0concat_new(___nl__1, ___nl__2));
#line 259
c_rt_lib0move(&___nl__3,___get_global_const(583));
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__2, ___nl__3));
#line 259
c_rt_lib0clear(&___nl__3);
#line 259
label_15:
#line 259
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 259
if(c_rt_lib0check_true_native(___nl__2)){ goto label_14;}
#line 260
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(913)));
#line 260
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 260
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(73), ___nl__4);
#line 260
c_rt_lib0clear(&___nl__3);
#line 260
c_rt_lib0clear(&___nl__4);
#line 261
c_rt_lib0move(&___nl__3, ntokenizer_priv0get_next_char(___ref___0));
#line 261
c_rt_lib0move(&___nl__3, c_rt_lib0concat_new(___nl__1, ___nl__3));
#line 261
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 261
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(908), ___nl__4);
#line 261
c_rt_lib0clear(&___nl__3);
#line 261
c_rt_lib0clear(&___nl__4);
#line 262
c_rt_lib0move(&___nl__3,___get_global_const(139));
#line 262
c_rt_lib0move(&___nl__4,___get_global_const(161));
#line 262
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 262
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__3));
#line 262
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 262
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 262
c_rt_lib0clear(&___nl__5);
#line 262
c_rt_lib0clear(&___nl__3);
#line 262
c_rt_lib0clear(&___nl__4);
#line 263
goto label_5;
#line 263
label_14:
#line 263
c_rt_lib0move(&___nl__3,___get_global_const(921));
#line 263
c_rt_lib0move(&___nl__2, string0index2(___nl__3, ___nl__1));
#line 263
c_rt_lib0clear(&___nl__3);
#line 263
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 263
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__2, ___nl__3));
#line 263
c_rt_lib0clear(&___nl__3);
#line 263
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 263
if(c_rt_lib0check_true_native(___nl__2)){ goto label_16;}
#line 264
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(913)));
#line 264
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 264
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(73), ___nl__4);
#line 264
c_rt_lib0clear(&___nl__3);
#line 264
c_rt_lib0clear(&___nl__4);
#line 265
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 265
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(908), ___nl__3);
#line 265
c_rt_lib0clear(&___nl__3);
#line 266
c_rt_lib0move(&___nl__3,___get_global_const(161));
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 266
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 266
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 266
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 266
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 266
c_rt_lib0clear(&___nl__5);
#line 266
c_rt_lib0clear(&___nl__3);
#line 266
c_rt_lib0clear(&___nl__4);
#line 267
goto label_5;
#line 267
label_16:
#line 267
c_rt_lib0move(&___nl__2, string0is_letter(___nl__1));
#line 267
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 267
if(c_rt_lib0check_true_native(___nl__2)){ goto label_17;}
#line 268
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 268
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(908), ___nl__3);
#line 268
c_rt_lib0clear(&___nl__3);
#line 269
c_rt_lib0move(&___nl__3,___get_global_const(161));
#line 269
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 269
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 269
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 269
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 269
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 269
c_rt_lib0clear(&___nl__5);
#line 269
c_rt_lib0clear(&___nl__3);
#line 269
c_rt_lib0clear(&___nl__4);
#line 270
c_rt_lib0move(&___nl__3, ntokenizer_priv0get_char(___ref___0));
#line 270
c_rt_lib0copy(&___nl__1, ___nl__3);
#line 270
c_rt_lib0clear(&___nl__3);
#line 271
label_19:
#line 271
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 271
c_rt_lib0move(&___nl__3, c_rt_lib0ne(___nl__1, ___nl__3));
#line 271
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 271
if(c_rt_lib0check_true_native(___nl__4)){ goto label_21;}
#line 271
c_rt_lib0move(&___nl__3, string0is_letter(___nl__1));
#line 271
if(c_rt_lib0check_true_native(___nl__3)){ goto label_22;}
#line 271
c_rt_lib0move(&___nl__3, string0is_digit(___nl__1));
#line 271
label_22:
#line 271
if(c_rt_lib0check_true_native(___nl__3)){ goto label_21;}
#line 271
c_rt_lib0move(&___nl__3,___get_global_const(168));
#line 271
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 271
label_21:
#line 271
c_rt_lib0clear(&___nl__4);
#line 271
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 271
if(c_rt_lib0check_true_native(___nl__3)){ goto label_18;}
#line 272
c_rt_lib0move(&___nl__4,___get_global_const(908));
#line 272
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 272
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 272
c_rt_lib0move(&___nl__5,___get_global_const(908));
#line 272
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 272
c_rt_lib0clear(&___nl__5);
#line 272
c_rt_lib0clear(&___nl__4);
#line 273
c_rt_lib0move(&___nl__4,___get_global_const(161));
#line 273
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 273
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 273
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 273
c_rt_lib0move(&___nl__6,___get_global_const(161));
#line 273
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 273
c_rt_lib0clear(&___nl__6);
#line 273
c_rt_lib0clear(&___nl__4);
#line 273
c_rt_lib0clear(&___nl__5);
#line 274
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 274
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 274
c_rt_lib0clear(&___nl__4);
#line 275
goto label_19;
#line 275
label_18:
#line 275
c_rt_lib0clear(&___nl__3);
#line 276
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_lett_oper());
#line 276
c_rt_lib0move(&___nl__5, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(908)));
#line 276
c_rt_lib0move(&___nl__3, hash0has_key(___nl__4, ___nl__5));
#line 276
c_rt_lib0clear(&___nl__5);
#line 276
c_rt_lib0clear(&___nl__4);
#line 276
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 276
if(c_rt_lib0check_true_native(___nl__3)){ goto label_24;}
#line 277
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(896)));
#line 277
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 277
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(73), ___nl__5);
#line 277
c_rt_lib0clear(&___nl__4);
#line 277
c_rt_lib0clear(&___nl__5);
#line 278
goto label_23;
#line 278
label_24:
#line 279
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_keywords());
#line 279
c_rt_lib0move(&___nl__6, c_rt_lib0hash_get_value_dec(*___ref___0, ___get_global_const(908)));
#line 279
c_rt_lib0move(&___nl__4, hash0has_key(___nl__5, ___nl__6));
#line 279
c_rt_lib0clear(&___nl__6);
#line 279
c_rt_lib0clear(&___nl__5);
#line 279
if(c_rt_lib0check_true_native(___nl__4)){ goto label_26;}
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(883)));
#line 279
goto label_25;
#line 279
label_26:
#line 279
c_rt_lib0move(&___nl__4, c_rt_lib0ov_mk_none(___get_global_const(898)));
#line 279
label_25:
#line 279
c_rt_lib0copy(&___nl__5, ___nl__4);
#line 279
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(73), ___nl__5);
#line 279
c_rt_lib0clear(&___nl__4);
#line 279
c_rt_lib0clear(&___nl__5);
#line 280
goto label_23;
#line 280
label_23:
#line 280
c_rt_lib0clear(&___nl__3);
#line 281
goto label_5;
#line 281
label_17:
#line 281
c_rt_lib0move(&___nl__2, ntokenizer_priv0try_get_operator(*___ref___0, &___nl__1));
#line 281
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 281
if(c_rt_lib0check_true_native(___nl__2)){ goto label_27;}
#line 282
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(896)));
#line 282
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 282
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(73), ___nl__4);
#line 282
c_rt_lib0clear(&___nl__3);
#line 282
c_rt_lib0clear(&___nl__4);
#line 283
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 283
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(908), ___nl__3);
#line 283
c_rt_lib0clear(&___nl__3);
#line 284
c_rt_lib0move(&___nl__3, string0length(___nl__1));
#line 284
c_rt_lib0move(&___nl__4,___get_global_const(161));
#line 284
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 284
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__3));
#line 284
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 284
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 284
c_rt_lib0clear(&___nl__5);
#line 284
c_rt_lib0clear(&___nl__3);
#line 284
c_rt_lib0clear(&___nl__4);
#line 285
goto label_5;
#line 285
label_27:
#line 285
c_rt_lib0move(&___nl__2, string0is_digit(___nl__1));
#line 285
if(c_rt_lib0check_true_native(___nl__2)){ goto label_29;}
#line 285
c_rt_lib0move(&___nl__2,___get_global_const(249));
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 285
if(c_rt_lib0check_true_native(___nl__2)){ goto label_31;}
#line 285
c_rt_lib0move(&___nl__2,___get_global_const(251));
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0eq(___nl__1, ___nl__2));
#line 285
label_31:
#line 285
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 285
if(c_rt_lib0check_true_native(___nl__3)){ goto label_30;}
#line 285
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_next_char(___ref___0));
#line 285
c_rt_lib0move(&___nl__2, string0is_digit(___nl__4));
#line 285
c_rt_lib0clear(&___nl__4);
#line 285
label_30:
#line 285
c_rt_lib0clear(&___nl__3);
#line 285
label_29:
#line 285
c_rt_lib0move(&___nl__2, c_rt_lib0not(___nl__2));
#line 285
if(c_rt_lib0check_true_native(___nl__2)){ goto label_28;}
#line 286
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 286
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(908), ___nl__3);
#line 286
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(894)));
#line 287
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 287
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(73), ___nl__4);
#line 287
c_rt_lib0clear(&___nl__3);
#line 287
c_rt_lib0clear(&___nl__4);
#line 288
c_rt_lib0move(&___nl__3,___get_global_const(161));
#line 288
c_rt_lib0move(&___nl__3, c_rt_lib0get_ref_hash(*___ref___0, ___nl__3));
#line 288
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 288
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 288
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 288
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__3));
#line 288
c_rt_lib0clear(&___nl__5);
#line 288
c_rt_lib0clear(&___nl__3);
#line 288
c_rt_lib0clear(&___nl__4);
#line 289
c_rt_lib0move(&___nl__3,___get_global_const(249));
#line 289
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 289
if(c_rt_lib0check_true_native(___nl__3)){ goto label_34;}
#line 289
c_rt_lib0move(&___nl__3,___get_global_const(251));
#line 289
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 289
label_34:
#line 289
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 289
if(c_rt_lib0check_true_native(___nl__3)){ goto label_33;}
#line 290
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 290
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 290
c_rt_lib0clear(&___nl__4);
#line 291
c_rt_lib0move(&___nl__4,___get_global_const(908));
#line 291
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 291
c_rt_lib0move(&___nl__4, c_rt_lib0concat_add(___nl__4, ___nl__1));
#line 291
c_rt_lib0move(&___nl__5,___get_global_const(908));
#line 291
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__5, ___nl__4));
#line 291
c_rt_lib0clear(&___nl__5);
#line 291
c_rt_lib0clear(&___nl__4);
#line 292
c_rt_lib0move(&___nl__4,___get_global_const(161));
#line 292
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 292
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 292
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 292
c_rt_lib0move(&___nl__6,___get_global_const(161));
#line 292
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 292
c_rt_lib0clear(&___nl__6);
#line 292
c_rt_lib0clear(&___nl__4);
#line 292
c_rt_lib0clear(&___nl__5);
#line 293
goto label_33;
#line 293
label_33:
#line 293
c_rt_lib0clear(&___nl__3);
#line 294
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 294
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__1, ___nl__3));
#line 294
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__3));
#line 294
if(c_rt_lib0check_true_native(___nl__5)){ goto label_38;}
#line 294
c_rt_lib0move(&___nl__3, ntokenizer_priv0get_char(___ref___0));
#line 294
c_rt_lib0move(&___nl__6,___get_global_const(922));
#line 294
c_rt_lib0move(&___nl__3, c_rt_lib0eq(___nl__3, ___nl__6));
#line 294
c_rt_lib0clear(&___nl__6);
#line 294
label_38:
#line 294
c_rt_lib0clear(&___nl__5);
#line 294
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__3));
#line 294
if(c_rt_lib0check_true_native(___nl__4)){ goto label_37;}
#line 294
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_next_char(___ref___0));
#line 294
c_rt_lib0move(&___nl__3, ntokenizer_priv0is_hex_number(___nl__5));
#line 294
c_rt_lib0clear(&___nl__5);
#line 294
label_37:
#line 294
c_rt_lib0clear(&___nl__4);
#line 294
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__3));
#line 294
if(c_rt_lib0check_true_native(___nl__3)){ goto label_36;}
#line 295
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 295
c_rt_lib0move(&___nl__5,___get_global_const(908));
#line 295
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 295
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__4));
#line 295
c_rt_lib0move(&___nl__6,___get_global_const(908));
#line 295
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 295
c_rt_lib0clear(&___nl__6);
#line 295
c_rt_lib0clear(&___nl__4);
#line 295
c_rt_lib0clear(&___nl__5);
#line 296
c_rt_lib0move(&___nl__4,___get_global_const(161));
#line 296
c_rt_lib0move(&___nl__4, c_rt_lib0get_ref_hash(*___ref___0, ___nl__4));
#line 296
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 296
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__5));
#line 296
c_rt_lib0move(&___nl__6,___get_global_const(161));
#line 296
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__4));
#line 296
c_rt_lib0clear(&___nl__6);
#line 296
c_rt_lib0clear(&___nl__4);
#line 296
c_rt_lib0clear(&___nl__5);
#line 297
c_rt_lib0move(&___nl__4, ntokenizer_priv0get_char(___ref___0));
#line 297
c_rt_lib0copy(&___nl__1, ___nl__4);
#line 297
c_rt_lib0clear(&___nl__4);
#line 298
label_40:
#line 298
c_rt_lib0move(&___nl__4, ntokenizer_priv0is_hex_number(___nl__1));
#line 298
c_rt_lib0move(&___nl__4, c_rt_lib0not(___nl__4));
#line 298
if(c_rt_lib0check_true_native(___nl__4)){ goto label_39;}
#line 299
c_rt_lib0move(&___nl__5,___get_global_const(908));
#line 299
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 299
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__1));
#line 299
c_rt_lib0move(&___nl__6,___get_global_const(908));
#line 299
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 299
c_rt_lib0clear(&___nl__6);
#line 299
c_rt_lib0clear(&___nl__5);
#line 300
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 300
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 300
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 300
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 300
c_rt_lib0move(&___nl__7,___get_global_const(161));
#line 300
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 300
c_rt_lib0clear(&___nl__7);
#line 300
c_rt_lib0clear(&___nl__5);
#line 300
c_rt_lib0clear(&___nl__6);
#line 301
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_char(___ref___0));
#line 301
c_rt_lib0copy(&___nl__1, ___nl__5);
#line 301
c_rt_lib0clear(&___nl__5);
#line 302
goto label_40;
#line 302
label_39:
#line 302
c_rt_lib0clear(&___nl__4);
#line 303
goto label_35;
#line 303
label_36:
#line 304
c_rt_lib0move(&___nl__4,___get_global_const(1));
#line 305
label_42:
#line 306
c_rt_lib0move(&___nl__5, ntokenizer_priv0get_char(___ref___0));
#line 306
c_rt_lib0copy(&___nl__1, ___nl__5);
#line 306
c_rt_lib0clear(&___nl__5);
#line 307
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 307
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 307
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 307
if(c_rt_lib0check_true_native(___nl__5)){ goto label_44;}
#line 307
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 307
c_rt_lib0move(&___nl__4, c_rt_lib0add_mod(___nl__4, ___nl__6));
#line 307
c_rt_lib0clear(&___nl__6);
#line 307
goto label_44;
#line 307
label_44:
#line 307
c_rt_lib0clear(&___nl__5);
#line 308
c_rt_lib0move(&___nl__5,___get_global_const(83));
#line 308
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__1, ___nl__5));
#line 308
c_rt_lib0move(&___nl__7, c_rt_lib0not(___nl__5));
#line 308
if(c_rt_lib0check_true_native(___nl__7)){ goto label_48;}
#line 308
c_rt_lib0move(&___nl__8, ntokenizer_priv0get_next_char(___ref___0));
#line 308
c_rt_lib0move(&___nl__5, string0is_digit(___nl__8));
#line 308
c_rt_lib0clear(&___nl__8);
#line 308
label_48:
#line 308
c_rt_lib0clear(&___nl__7);
#line 308
c_rt_lib0move(&___nl__6, c_rt_lib0not(___nl__5));
#line 308
if(c_rt_lib0check_true_native(___nl__6)){ goto label_47;}
#line 308
c_rt_lib0move(&___nl__5,___get_global_const(1));
#line 308
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 308
label_47:
#line 308
c_rt_lib0clear(&___nl__6);
#line 308
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 308
if(c_rt_lib0check_true_native(___nl__5)){ goto label_46;}
#line 308
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 308
c_rt_lib0copy(&___nl__4, ___nl__6);
#line 308
c_rt_lib0clear(&___nl__6);
#line 308
goto label_46;
#line 308
label_46:
#line 308
c_rt_lib0clear(&___nl__5);
#line 309
c_rt_lib0move(&___nl__5,___get_global_const(0));
#line 309
c_rt_lib0move(&___nl__5, c_rt_lib0eq(___nl__1, ___nl__5));
#line 309
if(c_rt_lib0check_true_native(___nl__5)){ goto label_51;}
#line 309
c_rt_lib0move(&___nl__5, string0is_digit(___nl__1));
#line 309
if(c_rt_lib0check_true_native(___nl__5)){ goto label_52;}
#line 309
c_rt_lib0move(&___nl__5,___get_global_const(2));
#line 309
c_rt_lib0move(&___nl__5, c_rt_lib0num_eq(___nl__4, ___nl__5));
#line 309
label_52:
#line 309
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 309
label_51:
#line 309
c_rt_lib0move(&___nl__5, c_rt_lib0not(___nl__5));
#line 309
if(c_rt_lib0check_true_native(___nl__5)){ goto label_50;}
#line 309
c_rt_lib0clear(&___nl__5);
#line 309
goto label_41;
#line 309
goto label_50;
#line 309
label_50:
#line 309
c_rt_lib0clear(&___nl__5);
#line 310
c_rt_lib0move(&___nl__5,___get_global_const(908));
#line 310
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 310
c_rt_lib0move(&___nl__5, c_rt_lib0concat_add(___nl__5, ___nl__1));
#line 310
c_rt_lib0move(&___nl__6,___get_global_const(908));
#line 310
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__6, ___nl__5));
#line 310
c_rt_lib0clear(&___nl__6);
#line 310
c_rt_lib0clear(&___nl__5);
#line 311
c_rt_lib0move(&___nl__5,___get_global_const(161));
#line 311
c_rt_lib0move(&___nl__5, c_rt_lib0get_ref_hash(*___ref___0, ___nl__5));
#line 311
c_rt_lib0move(&___nl__6,___get_global_const(2));
#line 311
c_rt_lib0move(&___nl__5, c_rt_lib0add_mod(___nl__5, ___nl__6));
#line 311
c_rt_lib0move(&___nl__7,___get_global_const(161));
#line 311
c_rt_lib0delete(c_rt_lib0set_ref_hash(___ref___0, ___nl__7, ___nl__5));
#line 311
c_rt_lib0clear(&___nl__7);
#line 311
c_rt_lib0clear(&___nl__5);
#line 311
c_rt_lib0clear(&___nl__6);
#line 305
goto label_42;
#line 305
label_41:
#line 305
c_rt_lib0clear(&___nl__4);
#line 313
goto label_35;
#line 313
label_35:
#line 313
c_rt_lib0clear(&___nl__3);
#line 314
goto label_5;
#line 314
label_28:
#line 315
c_rt_lib0move(&___nl__3, c_rt_lib0ov_mk_none(___get_global_const(97)));
#line 315
c_rt_lib0copy(&___nl__4, ___nl__3);
#line 315
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(73), ___nl__4);
#line 315
c_rt_lib0clear(&___nl__3);
#line 315
c_rt_lib0clear(&___nl__4);
#line 316
c_rt_lib0copy(&___nl__3, ___nl__1);
#line 316
c_rt_lib0hash_set_value_dec(___ref___0, ___get_global_const(908), ___nl__3);
#line 316
c_rt_lib0clear(&___nl__3);
#line 317
goto label_5;
#line 317
label_5:
#line 317
c_rt_lib0clear(&___nl__2);
#line 317
c_rt_lib0clear(&___nl__1);
#line 317
return NULL;
}


static ImmT ___const__[6];
static int ___const_init__ = 1;
void ntokenizer_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[5];


for(int i=0;i<5;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 5);
}}
ImmT ntokenizer_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT ntokenizer_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = ntokenizer_priv0get_keywords0cal();
	break;
case 1:
	___const__[1] = ntokenizer_priv0get_char_oper0cal();
	break;
case 2:
	___const__[2] = ntokenizer_priv0get_lett_oper0cal();
	break;
case 3:
	___const__[3] = ntokenizer0state_t0cal();
	break;
case 4:
	___const__[4] = ntokenizer0token_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
