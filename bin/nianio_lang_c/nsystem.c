
/* (c) Atinea Sp z o. o.
 *  Stamp: nianio lang
 */
#include "c_rt_lib.h"
#include "c_global_const.h"
#include "nsystem.h"
#include "c_fe_lib.h"
#line 1 "nsystem.nl"

static ImmT *__const__f = NULL;
void nsystem_priv0__const__init();
ImmT nsystem_priv0__const__sim(int __nr);
ImmT nsystem_priv0__const__sing(int __nr);



ImmT nsystem0time_milisec0ptr(int _num, ImmT *_tab){
c_rt_lib0func_num_args(_num, 0, "nsystem0time_milisec");
return nsystem0time_milisec();}
ImmT nsystem0time_milisec() {
nsystem_priv0__const__init();
ImmT ___nl__0 = NULL;
#line 8
c_rt_lib0move(&___nl__0, c_fe_lib0get_time());
#line 8
return ___nl__0;
#line 8
c_rt_lib0clear(&___nl__0);
#line 8
return NULL;
}


static ImmT ___const__[1];
static int ___const_init__ = 1;
void nsystem_priv0__const__init(){
if(___const_init__) {
___const_init__ = 0;
__const__f = &___const__[0];


for(int i=0;i<0;++i) ___const__[i] = NULL;
c_rt_lib0register_const(___const__, 0);
}}
ImmT nsystem_priv0__const__sim(int __nr) {
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr]);
return ret;
}
ImmT nsystem_priv0__const__sing(int __nr) {
if(___const__[__nr+0]==NULL) {
switch(__nr){
default:
	nl_die();
}}
ImmT ret = NULL;
c_rt_lib0copy(&ret, ___const__[__nr+0]);
return ret;
}
