
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "string.h"
#include "c_std_lib.h"
#include "boolean_t.h"
#include "ptd.h"
#line 1 "string.nl"

static ImmT *__const__f = NULL;
void string_priv0__const__init();
ImmT string_priv0__const__sim(int __nr);
ImmT string_priv0__const__sing(int __nr);



ImmT string0lf0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0lf");
return string0lf();}
ImmT string0lf(){
string_priv0__const__init();
return string_priv0__const__sing(0);}
ImmT string0lf0cal() {
string_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 11
c_rt_lib0move(&___nl__1,___get_global_const(157));
#line 11
c_rt_lib0move(&___nl__0, string0chr(___nl__1));
#line 11
c_rt_lib0clear(&___nl__1);
#line 11
return ___nl__0;
#line 11
c_rt_lib0clear(&___nl__0);
#line 11
return NULL;
}

ImmT string0tab0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0tab");
return string0tab();}
ImmT string0tab(){
string_priv0__const__init();
return string_priv0__const__sing(1);}
ImmT string0tab0cal() {
string_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 15
c_rt_lib0move(&___nl__1,___get_global_const(163));
#line 15
c_rt_lib0move(&___nl__0, string0chr(___nl__1));
#line 15
c_rt_lib0clear(&___nl__1);
#line 15
return ___nl__0;
#line 15
c_rt_lib0clear(&___nl__0);
#line 15
return NULL;
}

ImmT string0r0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0r");
return string0r();}
ImmT string0r(){
string_priv0__const__init();
return string_priv0__const__sing(2);}
ImmT string0r0cal() {
string_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 19
c_rt_lib0move(&___nl__1,___get_global_const(158));
#line 19
c_rt_lib0move(&___nl__0, string0chr(___nl__1));
#line 19
c_rt_lib0clear(&___nl__1);
#line 19
return ___nl__0;
#line 19
c_rt_lib0clear(&___nl__0);
#line 19
return NULL;
}

ImmT string0f0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "string0f");
return string0f();}
ImmT string0f(){
string_priv0__const__init();
return string_priv0__const__sing(3);}
ImmT string0f0cal() {
string_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 23
c_rt_lib0move(&___nl__1,___get_global_const(1037));
#line 23
c_rt_lib0move(&___nl__0, string0chr(___nl__1));
#line 23
c_rt_lib0clear(&___nl__1);
#line 23
return ___nl__0;
#line 23
c_rt_lib0clear(&___nl__0);
#line 23
return NULL;
}

ImmT string0char_times0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0char_times");
return string0char_times(_tab[0], _tab[1]);}
ImmT string0char_times(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
string_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 27
c_rt_lib0move(&___nl__2,___get_global_const(0));
#line 28
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 28
c_rt_lib0move(&___nl__4,___get_global_const(2));
#line 28
label_3:
#line 28
c_rt_lib0move(&___nl__5, c_rt_lib0ge(___nl__3, ___nl__1));
#line 28
if(c_rt_lib0check_true_native(___nl__5)){ goto label_1;}
#line 28
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__0));
#line 28
c_rt_lib0move(&___nl__3, c_rt_lib0add_mod(___nl__3, ___nl__4));
#line 28
goto label_3;
#line 28
label_1:
#line 28
c_rt_lib0clear(&___nl__3);
#line 28
c_rt_lib0clear(&___nl__4);
#line 28
c_rt_lib0clear(&___nl__5);
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
c_rt_lib0clear(&___nl__1);
#line 29
return ___nl__2;
#line 29
c_rt_lib0clear(&___nl__2);
#line 29
c_rt_lib0clear(&___nl__0);
#line 29
c_rt_lib0clear(&___nl__1);
#line 29
return NULL;
}

ImmT string0length0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0length");
return string0length(_tab[0]);}
ImmT string0length(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 33
c_rt_lib0move(&___nl__1, c_std_lib0string_length(___nl__0));
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
return ___nl__1;
#line 33
c_rt_lib0clear(&___nl__1);
#line 33
c_rt_lib0clear(&___nl__0);
#line 33
return NULL;
}

ImmT string0get_char_code0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0get_char_code");
return string0get_char_code(_tab[0], _tab[1]);}
ImmT string0get_char_code(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
string_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 37
c_rt_lib0move(&___nl__2, c_std_lib0string_get_char_code(___nl__0, ___nl__1));
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
return ___nl__2;
#line 37
c_rt_lib0clear(&___nl__2);
#line 37
c_rt_lib0clear(&___nl__0);
#line 37
c_rt_lib0clear(&___nl__1);
#line 37
return NULL;
}

ImmT string0substr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0substr");
return string0substr(_tab[0], _tab[1], _tab[2]);}
ImmT string0substr(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
string_priv0__const__init();
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
#line 41
c_rt_lib0move(&___nl__3, c_std_lib0string_sub(___nl__0, ___nl__1, ___nl__2));
#line 41
c_rt_lib0move(&___nl__4,___get_global_const(0));
#line 41
c_rt_lib0move(&___nl__3, c_rt_lib0concat_add(___nl__3, ___nl__4));
#line 41
c_rt_lib0clear(&___nl__4);
#line 41
c_rt_lib0clear(&___nl__0);
#line 41
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
return ___nl__3;
#line 41
c_rt_lib0clear(&___nl__3);
#line 41
c_rt_lib0clear(&___nl__0);
#line 41
c_rt_lib0clear(&___nl__1);
#line 41
c_rt_lib0clear(&___nl__2);
#line 41
return NULL;
}

ImmT string0substr20ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0substr2");
return string0substr2(_tab[0], _tab[1]);}
ImmT string0substr2(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
string_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 45
c_rt_lib0move(&___nl__3, string0length(___nl__0));
#line 45
c_rt_lib0move(&___nl__3, c_rt_lib0sub_mod(___nl__3, ___nl__1));
#line 45
c_rt_lib0move(&___nl__2, c_std_lib0string_sub(___nl__0, ___nl__1, ___nl__3));
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
c_rt_lib0move(&___nl__3,___get_global_const(0));
#line 45
c_rt_lib0move(&___nl__2, c_rt_lib0concat_add(___nl__2, ___nl__3));
#line 45
c_rt_lib0clear(&___nl__3);
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
return ___nl__2;
#line 45
c_rt_lib0clear(&___nl__2);
#line 45
c_rt_lib0clear(&___nl__0);
#line 45
c_rt_lib0clear(&___nl__1);
#line 45
return NULL;
}

ImmT string0index20ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0index2");
return string0index2(_tab[0], _tab[1]);}
ImmT string0index2(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
string_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 49
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 49
c_rt_lib0move(&___nl__2, c_std_lib0string_index(___nl__0, ___nl__1, ___nl__3));
#line 49
c_rt_lib0clear(&___nl__3);
#line 49
c_rt_lib0clear(&___nl__0);
#line 49
c_rt_lib0clear(&___nl__1);
#line 49
return ___nl__2;
#line 49
c_rt_lib0clear(&___nl__2);
#line 49
c_rt_lib0clear(&___nl__0);
#line 49
c_rt_lib0clear(&___nl__1);
#line 49
return NULL;
}

ImmT string0index0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0index");
return string0index(_tab[0], _tab[1], _tab[2]);}
ImmT string0index(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
string_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 53
c_rt_lib0move(&___nl__3, c_std_lib0string_index(___nl__0, ___nl__1, ___nl__2));
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
c_rt_lib0clear(&___nl__0);
#line 53
c_rt_lib0clear(&___nl__1);
#line 53
c_rt_lib0clear(&___nl__2);
#line 53
return NULL;
}

ImmT string0replace0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 3, "string0replace");
return string0replace(_tab[0], _tab[1], _tab[2]);}
ImmT string0replace(ImmT ___nl__0,ImmT ___nl__1,ImmT ___nl__2) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
c_rt_lib0arg_val(___nl__2);
string_priv0__const__init();
ImmT ___nl__3 = NULL;
#line 57
c_rt_lib0move(&___nl__3, c_std_lib0string_replace(___nl__0, ___nl__1, ___nl__2));
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
c_rt_lib0clear(&___nl__1);
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
return ___nl__3;
#line 57
c_rt_lib0clear(&___nl__3);
#line 57
c_rt_lib0clear(&___nl__0);
#line 57
c_rt_lib0clear(&___nl__1);
#line 57
c_rt_lib0clear(&___nl__2);
#line 57
return NULL;
}

ImmT string0ord0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0ord");
return string0ord(_tab[0]);}
ImmT string0ord(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 61
c_rt_lib0move(&___nl__1, c_std_lib0string_ord(___nl__0));
#line 61
c_rt_lib0clear(&___nl__0);
#line 61
return ___nl__1;
#line 61
c_rt_lib0clear(&___nl__1);
#line 61
c_rt_lib0clear(&___nl__0);
#line 61
return NULL;
}

ImmT string0is_digit0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0is_digit");
return string0is_digit(_tab[0]);}
ImmT string0is_digit(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 65
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 66
c_rt_lib0move(&___nl__2,___get_global_const(1038));
#line 66
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 66
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 66
if(c_rt_lib0check_true_native(___nl__3)){ goto label_1;}
#line 66
c_rt_lib0move(&___nl__2,___get_global_const(1039));
#line 66
c_rt_lib0move(&___nl__2, c_rt_lib0le(___nl__1, ___nl__2));
#line 66
label_1:
#line 66
c_rt_lib0clear(&___nl__3);
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
c_rt_lib0clear(&___nl__1);
#line 66
return ___nl__2;
#line 66
c_rt_lib0clear(&___nl__2);
#line 66
c_rt_lib0clear(&___nl__1);
#line 66
c_rt_lib0clear(&___nl__0);
#line 66
return NULL;
}

ImmT string0is_letter0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0is_letter");
return string0is_letter(_tab[0]);}
ImmT string0is_letter(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_priv0__const__init();
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 70
c_rt_lib0move(&___nl__1, string0ord(___nl__0));
#line 71
c_rt_lib0move(&___nl__2,___get_global_const(919));
#line 71
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 71
if(c_rt_lib0check_true_native(___nl__3)){ goto label_2;}
#line 71
c_rt_lib0move(&___nl__2,___get_global_const(1040));
#line 71
c_rt_lib0move(&___nl__2, c_rt_lib0le(___nl__1, ___nl__2));
#line 71
label_2:
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
if(c_rt_lib0check_true_native(___nl__2)){ goto label_1;}
#line 71
c_rt_lib0move(&___nl__2,___get_global_const(917));
#line 71
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__1, ___nl__2));
#line 71
c_rt_lib0move(&___nl__3, c_rt_lib0not(___nl__2));
#line 71
if(c_rt_lib0check_true_native(___nl__3)){ goto label_3;}
#line 71
c_rt_lib0move(&___nl__2,___get_global_const(1041));
#line 71
c_rt_lib0move(&___nl__2, c_rt_lib0le(___nl__1, ___nl__2));
#line 71
label_3:
#line 71
c_rt_lib0clear(&___nl__3);
#line 71
label_1:
#line 71
c_rt_lib0clear(&___nl__0);
#line 71
c_rt_lib0clear(&___nl__1);
#line 71
return ___nl__2;
#line 71
c_rt_lib0clear(&___nl__2);
#line 71
c_rt_lib0clear(&___nl__1);
#line 71
c_rt_lib0clear(&___nl__0);
#line 71
return NULL;
}

ImmT string0chr0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "string0chr");
return string0chr(_tab[0]);}
ImmT string0chr(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
string_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 75
c_rt_lib0move(&___nl__1, c_std_lib0string_chr(___nl__0));
#line 75
c_rt_lib0clear(&___nl__0);
#line 75
return ___nl__1;
#line 75
c_rt_lib0clear(&___nl__1);
#line 75
c_rt_lib0clear(&___nl__0);
#line 75
return NULL;
}

ImmT string0lt0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0lt");
return string0lt(_tab[0], _tab[1]);}
ImmT string0lt(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
string_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 79
c_rt_lib0move(&___nl__2, string0compare(___nl__0, ___nl__1));
#line 79
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 79
c_rt_lib0move(&___nl__2, c_rt_lib0lt(___nl__2, ___nl__3));
#line 79
c_rt_lib0clear(&___nl__3);
#line 79
c_rt_lib0clear(&___nl__0);
#line 79
c_rt_lib0clear(&___nl__1);
#line 79
return ___nl__2;
#line 79
c_rt_lib0clear(&___nl__2);
#line 79
c_rt_lib0clear(&___nl__0);
#line 79
c_rt_lib0clear(&___nl__1);
#line 79
return NULL;
}

ImmT string0gt0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0gt");
return string0gt(_tab[0], _tab[1]);}
ImmT string0gt(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
string_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 83
c_rt_lib0move(&___nl__2, string0compare(___nl__0, ___nl__1));
#line 83
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 83
c_rt_lib0move(&___nl__2, c_rt_lib0gt(___nl__2, ___nl__3));
#line 83
c_rt_lib0clear(&___nl__3);
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
return ___nl__2;
#line 83
c_rt_lib0clear(&___nl__2);
#line 83
c_rt_lib0clear(&___nl__0);
#line 83
c_rt_lib0clear(&___nl__1);
#line 83
return NULL;
}

ImmT string0compare0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0compare");
return string0compare(_tab[0], _tab[1]);}
ImmT string0compare(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
string_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 87
c_rt_lib0move(&___nl__2, c_std_lib0string_compare(___nl__0, ___nl__1));
#line 87
c_rt_lib0clear(&___nl__0);
#line 87
c_rt_lib0clear(&___nl__1);
#line 87
return ___nl__2;
#line 87
c_rt_lib0clear(&___nl__2);
#line 87
c_rt_lib0clear(&___nl__0);
#line 87
c_rt_lib0clear(&___nl__1);
#line 87
return NULL;
}

ImmT string0le0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0le");
return string0le(_tab[0], _tab[1]);}
ImmT string0le(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
string_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 91
c_rt_lib0move(&___nl__2, string0compare(___nl__0, ___nl__1));
#line 91
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 91
c_rt_lib0move(&___nl__2, c_rt_lib0le(___nl__2, ___nl__3));
#line 91
c_rt_lib0clear(&___nl__3);
#line 91
c_rt_lib0clear(&___nl__0);
#line 91
c_rt_lib0clear(&___nl__1);
#line 91
return ___nl__2;
#line 91
c_rt_lib0clear(&___nl__2);
#line 91
c_rt_lib0clear(&___nl__0);
#line 91
c_rt_lib0clear(&___nl__1);
#line 91
return NULL;
}

ImmT string0ge0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "string0ge");
return string0ge(_tab[0], _tab[1]);}
ImmT string0ge(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
string_priv0__const__init();
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 95
c_rt_lib0move(&___nl__2, string0compare(___nl__0, ___nl__1));
#line 95
c_rt_lib0move(&___nl__3,___get_global_const(1));
#line 95
c_rt_lib0move(&___nl__2, c_rt_lib0ge(___nl__2, ___nl__3));
#line 95
c_rt_lib0clear(&___nl__3);
#line 95
c_rt_lib0clear(&___nl__0);
#line 95
c_rt_lib0clear(&___nl__1);
#line 95
return ___nl__2;
#line 95
c_rt_lib0clear(&___nl__2);
#line 95
c_rt_lib0clear(&___nl__0);
#line 95
c_rt_lib0clear(&___nl__1);
#line 95
return NULL;
}


static ImmT ___const__[5];
static int ___const_init__ = 1;
void string_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[4];


for(int i=0;i<4;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 4);
}}
ImmT string_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT string_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = string0lf0cal();
	break;
case 1:
	___const__[1] = string0tab0cal();
	break;
case 2:
	___const__[2] = string0r0cal();
	break;
case 3:
	___const__[3] = string0f0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
