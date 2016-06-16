def doSomething(arg) {
}
def condition(arg) {
}

def straight() {
	doSomething(111);
	doSomething(0);
	doSomething(222);
}

def simple_if() {
	doSomething(111);
	if (condition(0)) {
		doSomething(0);
	}
	doSomething(222);
}

def if_else() {
	doSomething(111);
	if (condition(0)) {
		doSomething(0);
	} else {
		doSomething(1);
	}
	doSomething(222);
}

def if_elsif_else() {
	doSomething(111);
	if (condition(0)) {
		doSomething(0);
	} elsif (condition(1)) {
		doSomething(1);
	} else {
		doSomething(2);
	}
	doSomething(222);
}

def while_loop() {
	doSomething(111);
	while (condition(0)) {
		doSomething(0);
	}
	doSomething(222);
}

def while_if() {
	doSomething(111);
	while (condition(0)) {
		doSomething(333);
		if (condition(0)) {
			doSomething(0);
		} elsif (condition(1)) {
			doSomething(1);
		} else {
			doSomething(2);
		}
		doSomething(444);
	}
	doSomething(222);
}

def forever_loop() {
	doSomething(111);
	loop {
		doSomething(0);
	}
}

def just_loop() {
	loop {
	}
}
