use dfile;
use nl;
use string;

# old typechecker doesn't work properly here

# implicitely building recursive type
def build_list(n) {
	var result = :nil;
	while (n > 0 || !(result is :list)) {
		if (n > 0) {
			result = :cons(result);
		} else {
			# just to complicate a bit
			result = :list(result);
		}
		--n;
	}
	return result;
}

# Just wrapping the value in a variant may complicate things
# a not that little bit
# Now the types of variables are not recursive themselves,
# but result has a recursive part inside.
def build_list2(n) {
	var result = :foo(:nil);
	while (n > 0 || !((result as :foo) is :list)) {
		if (n > 0) {
			result = :foo(:cons(result as :foo));
		} else {
			result = :foo(:list(result as :foo));
		}
		--n;
	}
	return result;
}

# even more tricky one, probably
def build_list3(n) {
	var result = :foo(:nil);
	while (n > 0 || !((result as :foo) is :list)) {
		var result1 = :nil;
		if ((result as :foo) is :cons) {
			result1 = :cons((result as :foo) as :cons);
		}
		if (n > 0) {
			result = :foo(:cons(result1));
		} else {
			result = :foo(:list(result1));
		}
		--n;
	}
	return result;
}

# unwrapping nested structure of arbitrary depth may be a problem for another approach
def list_length(l) {
	var result = 0;
	while (l is :cons) {
		l = l as :cons;
		++result;
	}
	return result;
}

def test09::main() {
	nl::print(dfile::ssave(build_list(5)).string::lf());
}
