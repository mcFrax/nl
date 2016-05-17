use ptd;
use hash;

def foo(x : ptd::rec({a => ptd::sim()})) : ptd::rec({}) {
	var y = x;
	hash::delete(ref y, 'a');
	return y;
}

def test07::main() {
    return 0;
}
