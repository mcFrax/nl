use ptd;

def foo(x : ptd::rec({})) : ptd::rec({a => ptd::sim()}) {
	return x;
}

def test03::main() {
	return 0;
}
