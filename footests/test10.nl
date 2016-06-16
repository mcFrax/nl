use nl;

def test10::main() {
	var h = {};
	h{0} = 'numzero';
	h{'0'} = 'stringzero';
	nl::print(h{0});
	nl::print(h{'0'});
}
