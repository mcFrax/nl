def error01() {
	return []->a;
}

def error02() {
	var x = [];
	x->a = 1;
}

def error03() {
	[] + 1;
}

def error04() {
	return if 1;
}

def error05() {
	return if :foo;
}

def error06(x) {
	x->a = x[1];
}

def error07(x) {
	var y = x->a;
	return x[1];
}

def error08(x) {
	var y = x->a;
	return x is :x;
}
