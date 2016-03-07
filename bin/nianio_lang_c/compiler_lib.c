
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "compiler_lib.h"
#include "ptd.h"
#line 1 "compiler_lib.nl"

static ImmT *__const__f = NULL;
void compiler_lib_priv0__const__init();
ImmT compiler_lib_priv0__const__sim(int __nr);
ImmT compiler_lib_priv0__const__sing(int __nr);



ImmT compiler_lib0error_type_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler_lib0error_type_t");
return compiler_lib0error_type_t();}
ImmT compiler_lib0error_type_t(){
compiler_lib_priv0__const__init();
return compiler_lib_priv0__const__sing(0);}
ImmT compiler_lib0error_type_t0cal() {
compiler_lib_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
#line 5
c_rt_lib0move(&___nl__2, ptd0none());
#line 5
c_rt_lib0move(&___nl__3, ptd0none());
#line 5
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(2, ___get_global_const(97), ___nl__2, ___get_global_const(152), ___nl__3));
#line 5
c_rt_lib0clear(&___nl__2);
#line 5
c_rt_lib0clear(&___nl__3);
#line 5
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 5
c_rt_lib0clear(&___nl__1);
#line 5
return ___nl__0;
#line 5
c_rt_lib0clear(&___nl__0);
#line 5
return NULL;
}

ImmT compiler_lib0error_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler_lib0error_t");
return compiler_lib0error_t();}
ImmT compiler_lib0error_t(){
compiler_lib_priv0__const__init();
return compiler_lib_priv0__const__sing(1);}
ImmT compiler_lib0error_t0cal() {
compiler_lib_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
ImmT ___nl__6 = NULL;
#line 11
c_rt_lib0move(&___nl__2, ptd0sim());
#line 11
c_rt_lib0move(&___nl__3, ptd0sim());
#line 11
c_rt_lib0move(&___nl__4, ptd0sim());
#line 11
c_rt_lib0move(&___nl__5, ptd0sim());
#line 11
c_rt_lib0move(&___nl__6, c_rt_lib0func_new(compiler_lib0error_type_t0ptr, ___get_global_const(19), ___get_global_const(153)));
#line 11
c_rt_lib0move(&___nl__6, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__6));
#line 11
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(5, ___get_global_const(113), ___nl__2, ___get_global_const(154), ___nl__3, ___get_global_const(116), ___nl__4, ___get_global_const(111), ___nl__5, ___get_global_const(73), ___nl__6));
#line 11
c_rt_lib0clear(&___nl__2);
#line 11
c_rt_lib0clear(&___nl__3);
#line 11
c_rt_lib0clear(&___nl__4);
#line 11
c_rt_lib0clear(&___nl__5);
#line 11
c_rt_lib0clear(&___nl__6);
#line 11
c_rt_lib0move(&___nl__0, ptd0rec(___nl__1));
#line 11
c_rt_lib0clear(&___nl__1);
#line 11
return ___nl__0;
#line 11
c_rt_lib0clear(&___nl__0);
#line 11
return NULL;
}

ImmT compiler_lib0errors_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "compiler_lib0errors_t");
return compiler_lib0errors_t();}
ImmT compiler_lib0errors_t(){
compiler_lib_priv0__const__init();
return compiler_lib_priv0__const__sing(2);}
ImmT compiler_lib0errors_t0cal() {
compiler_lib_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0func_new(compiler_lib0error_t0ptr, ___get_global_const(19), ___get_global_const(20)));
#line 21
c_rt_lib0move(&___nl__1, c_rt_lib0ov_mk_arg(___get_global_const(5), ___nl__1));
#line 21
c_rt_lib0move(&___nl__0, ptd0arr(___nl__1));
#line 21
c_rt_lib0clear(&___nl__1);
#line 21
return ___nl__0;
#line 21
c_rt_lib0clear(&___nl__0);
#line 21
return NULL;
}


static ImmT ___const__[4];
static int ___const_init__ = 1;
void compiler_lib_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[3];


for(int i=0;i<3;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 3);
}}
ImmT compiler_lib_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT compiler_lib_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = compiler_lib0error_type_t0cal();
	break;
case 1:
	___const__[1] = compiler_lib0error_t0cal();
	break;
case 2:
	___const__[2] = compiler_lib0errors_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
