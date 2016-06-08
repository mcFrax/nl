use ptd;

def newtct::type() {
	return ptd::var({
		unknown => ptd::none(),
		invalid => ptd::none(),
		any => ptd::none(),
		sim => ptd::none(),
		variant => ptd::hash(@newtct::variant_kind),
		array => @newtct::type,
		hash => @newtct::type,
		record => ptd::hash(@newtct::type),
#		recursive => ???
#		bool => ptd::var(true => @newtct::implications, false => @newtct::implications)
	});
}

def newtct::vartype() {
	return ptd::arr(@newtct::type);
}

def newtct::variant_kind() {
	return ptd::var({
		any => ptd::none(),
		empty => ptd::none(),
		val => @newtct::type,
	});
}
