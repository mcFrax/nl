
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "func.h"
#include "c_std_lib.h"
#include "ptd.h"
#line 1 "func.nl"

static ImmT *__const__f = NULL;
void func_priv0__const__init();
ImmT func_priv0__const__sim(int __nr);
ImmT func_priv0__const__sing(int __nr);



ImmT func0func_t0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "func0func_t");
return func0func_t();}
ImmT func0func_t(){
func_priv0__const__init();
return func_priv0__const__sing(0);}
ImmT func0func_t0cal() {
func_priv0__const__init();
ImmT ___nl__0 = NULL;
ImmT ___nl__1 = NULL;
ImmT ___nl__2 = NULL;
ImmT ___nl__3 = NULL;
ImmT ___nl__4 = NULL;
ImmT ___nl__5 = NULL;
#line 10
c_rt_lib0move(&___nl__4, ptd0sim());
#line 10
c_rt_lib0move(&___nl__5, ptd0sim());
#line 10
c_rt_lib0move(&___nl__3, c_rt_lib0hash_mk(2, ___get_global_const(111), ___nl__4, ___get_global_const(78), ___nl__5));
#line 10
c_rt_lib0clear(&___nl__4);
#line 10
c_rt_lib0clear(&___nl__5);
#line 10
c_rt_lib0move(&___nl__2, ptd0rec(___nl__3));
#line 10
c_rt_lib0clear(&___nl__3);
#line 10
c_rt_lib0move(&___nl__1, c_rt_lib0hash_mk(1, ___get_global_const(5), ___nl__2));
#line 10
c_rt_lib0clear(&___nl__2);
#line 10
c_rt_lib0move(&___nl__0, ptd0var(___nl__1));
#line 10
c_rt_lib0clear(&___nl__1);
#line 10
return ___nl__0;
#line 10
c_rt_lib0clear(&___nl__0);
#line 10
return NULL;
}

ImmT func0exec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "func0exec");
return func0exec(_tab[0], _tab[1]);}
ImmT func0exec(ImmT ___nl__0,ImmT ___nl__1) {
c_rt_lib0arg_val(___nl__0);
c_rt_lib0arg_val(___nl__1);
func_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 19
c_rt_lib0move(&___nl__2, c_std_lib0exec(___nl__0, &___nl__1));
#line 19
c_rt_lib0clear(&___nl__0);
#line 19
c_rt_lib0clear(&___nl__1);
#line 19
return ___nl__2;
#line 19
c_rt_lib0clear(&___nl__2);
#line 19
c_rt_lib0clear(&___nl__0);
#line 19
c_rt_lib0clear(&___nl__1);
#line 19
return NULL;
}

ImmT func0exec_ref0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 2, "func0exec_ref");
return func0exec_ref(_tab[0], &_tab[1]);}
ImmT func0exec_ref(ImmT ___nl__0,ImmT * ___ref___1) {
c_rt_lib0arg_val(___nl__0);
func_priv0__const__init();
ImmT ___nl__2 = NULL;
#line 23
c_rt_lib0move(&___nl__2, c_std_lib0exec(___nl__0, ___ref___1));
#line 23
c_rt_lib0clear(&___nl__0);
#line 23
return ___nl__2;
#line 23
c_rt_lib0clear(&___nl__2);
#line 23
c_rt_lib0clear(&___nl__0);
#line 23
return NULL;
}


static ImmT ___const__[2];
static int ___const_init__ = 1;
void func_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[1];


for(int i=0;i<1;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 1);
}}
ImmT func_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT func_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
case 0:
	___const__[0] = func0func_t0cal();
	break;
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
