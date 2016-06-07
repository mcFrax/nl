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
