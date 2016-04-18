use c_fe_lib;
use ptd;

def hello::main(): ptd::sim() {
	c_fe_lib::print('Hello world!');
	return 0;
}
