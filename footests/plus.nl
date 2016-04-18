use simple_io;
use c_fe_lib;

def plus::main() {
	c_fe_lib::print('Podaj 2 liczby');
	var a = simple_io::read_int();
	var b = simple_io::read_int();
	c_fe_lib::print(a.' + '.b.' = '.(a + b));
	return 0;
}
