use ptd;

def foo(x : ptd::rec({a => ptd::sim()})) : ptd::rec({}) {
    return x;
}

def test04::main() {
    return 0;
}
