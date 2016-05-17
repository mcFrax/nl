use ptd;

def foo(x : ptd::var({a => ptd::sim()})) : ptd::var({}) {
	return x;
}

def test05::main() {
	return 0;
}
