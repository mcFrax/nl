use ptd;

def newtct::type() {
	return ptd::var({
		sim => ptd::none(),
		array => @newtct::type,
		variant => @newtct::variant_type,
		hash => @newtct::hash_type,
		anyof => ptd::rec({
			sim => @boolean_t::type,
			array => @boolean_t::type,
			variant => @boolean_t::type,
			hash => @boolean_t::type,
		}),
	});
}

def newtct::variant_type() {
	return ptd::rec({
		anyname => ptd::var({no => ptd::none(), empty => ptd::none(), val => @newtct::type}),
		names => ptd::hash(ptd::var({
			empty => ptd::none(),
			val => @newtct::type,
		}))
	});
}

def newtct::hash_type() {
	return ptd::rec({
		anykey => ptd::var({no => ptd::none(), yes => @newtct::type}),
		keys => ptd::hash(@newtct::type)
	});
}

# shortcuts:

def newtc::nothing : @newtc::type {
	return :anyof({sim => false, array => false, variant => false, hash => false});
}

def newtct::bool() : @newtct::type {
	return :variant({
		anyname => :no,
		names => {
			TRUE => :empty,
			FALSE => :empty
		}
	});
}

def newtct::hash(own_ref : ptd::sim(), content_type : @newtct::type) : @newtct::type {
	return :def({
		own_ref => own_ref,
		desc => :hash({
			anykey => :yes(content_type),
			keys => {}
		})
	});
}

def newtct::record(own_ref : ptd::sim(), fields : ptd::hash(@newtct::type)) : @newtct::type {
	return :def({
		own_ref => own_ref,
		desc => :hash({
			anykey => :no,
			keys => fields
		})
	});
}

def newtct::any(own_ref : ptd::sim()) : @newtct::type {
	return :def({
		own_ref => own_ref,
		desc => :alternative({
			sim => :yes,
			array => :yes(:ref(own_ref)),
			variant => :yes({
				anyname => :yes(:ref(own_ref)),
				names => {}
			}),
			hash => :yes({
				anykey => :yes(:ref(own_ref)),
				keys => {}
			}),
		}),
	});
}

