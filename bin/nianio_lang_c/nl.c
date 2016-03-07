
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "nl.h"
#include "c_std_lib.h"
#include "boolean_t.h"
#line 1 "nl.nl"

static ImmT *__const__f = NULL;
void nl_priv0__const__init();
ImmT nl_priv0__const__sim(int __nr);
ImmT nl_priv0__const__sing(int __nr);



ImmT nl0is_array0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_array");
return nl0is_array(_tab[0]);}
ImmT nl0is_array(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
nl_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 10
c_rt_lib0move(&___nl__1, c_std_lib0is_array(___nl__0));
#line 10
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 10
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 10
goto label_1;
#line 10
label_2:
#line 10
c_rt_lib0move(&___nl__1, c_rt_lib0get_true());
#line 10
label_1:
#line 10
c_rt_lib0clear(&___nl__0);
#line 10
return ___nl__1;
#line 10
c_rt_lib0clear(&___nl__1);
#line 10
c_rt_lib0clear(&___nl__0);
#line 10
return NULL;
}

ImmT nl0is_hash0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_hash");
return nl0is_hash(_tab[0]);}
ImmT nl0is_hash(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
nl_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 14
c_rt_lib0move(&___nl__1, c_std_lib0is_hash(___nl__0));
#line 14
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 14
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 14
goto label_1;
#line 14
label_2:
#line 14
c_rt_lib0move(&___nl__1, c_rt_lib0get_true());
#line 14
label_1:
#line 14
c_rt_lib0clear(&___nl__0);
#line 14
return ___nl__1;
#line 14
c_rt_lib0clear(&___nl__1);
#line 14
c_rt_lib0clear(&___nl__0);
#line 14
return NULL;
}

ImmT nl0is_sim0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_sim");
return nl0is_sim(_tab[0]);}
ImmT nl0is_sim(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
nl_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 18
c_rt_lib0move(&___nl__1, c_std_lib0is_sim(___nl__0));
#line 18
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 18
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 18
goto label_1;
#line 18
label_2:
#line 18
c_rt_lib0move(&___nl__1, c_rt_lib0get_true());
#line 18
label_1:
#line 18
c_rt_lib0clear(&___nl__0);
#line 18
return ___nl__1;
#line 18
c_rt_lib0clear(&___nl__1);
#line 18
c_rt_lib0clear(&___nl__0);
#line 18
return NULL;
}

ImmT nl0is_variant0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0is_variant");
return nl0is_variant(_tab[0]);}
ImmT nl0is_variant(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
nl_priv0__const__init();
ImmT ___nl__1 = NULL;
#line 22
c_rt_lib0move(&___nl__1, c_std_lib0is_variant(___nl__0));
#line 22
if(c_rt_lib0check_true_native(___nl__1)){ goto label_2;}
#line 22
c_rt_lib0move(&___nl__1, c_rt_lib0get_false());
#line 22
goto label_1;
#line 22
label_2:
#line 22
c_rt_lib0move(&___nl__1, c_rt_lib0get_true());
#line 22
label_1:
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
return ___nl__1;
#line 22
c_rt_lib0clear(&___nl__1);
#line 22
c_rt_lib0clear(&___nl__0);
#line 22
return NULL;
}

ImmT nl0print0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 1, "nl0print");
return nl0print(_tab[0]);}
ImmT nl0print(ImmT ___nl__0) {
c_rt_lib0arg_val(___nl__0);
nl_priv0__const__init();
#line 26
c_rt_lib0delete(c_std_lib0print(___nl__0));
#line 26
c_rt_lib0clear(&___nl__0);
#line 26
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void nl_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT nl_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nl_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
