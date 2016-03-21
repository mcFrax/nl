/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: MZU 2013-06-27
*/

#include <stdio.h>
#include "compiler.h"
#include "c_rt_lib.h"

int main(int argc, char **argv) {
	c_rt_lib0init();
	ImmT args = c_rt_lib0array_new();
	for (int i = 0; i < argc; ++i) {
		ImmT el = c_rt_lib0string_new(argv[i]);
		c_rt_lib0array_push(&args, el);
		c_rt_lib0clear(&el);
	}
	ImmT result = compiler0compile(args);
	int success = c_rt_lib0check_true_native(result);
	c_rt_lib0clear(&result);
    c_rt_lib0clear(&args);
	c_rt_lib0finish();
	return success ? 0 : 1;
}
