# implicitely building recursive type
def build_list(n) {
	var result = :nil;
	while (n > 0) {
		result = :cons(result);
	}
	return result;
}
