use ptd;

def newtct::type() {
	return ptd::var({
		nothing => ptd::none(),
		ref => ptd::sim(),
		def => ptd::rec({
			own_ref => ptd::sim(),
			desc => ptd::var({
				sim => ptd::none(),
				array => @newtct::type,
				variant => @newtct::variant_type,
				hash => @newtct::hash_type,
				alternative => ptd::rec({
					sim => ptd::var({no => ptd::none(), yes => ptd::none()}),
					array => ptd::var({no => ptd::none(), yes => @newtct::type}),
					variant => ptd::var({no => ptd::none(), yes => @newtct::variant_type}),
					hash => ptd::var({no => ptd::none(), yes => @newtct::hash_type}),
				}),
			}),
		}),
	});
}

def newtct::variant_type() {
	return ptd::rec({
		anyname => ptd::var({no => ptd::none(), yes => @newtct::type}),
		names => ptd::hash(ptd::rec({
			empty => ptd::var({no => ptd::none(), yes => ptd::none()}),
			val => ptd::var({no => ptd::none(), yes => @newtct::type}),
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

def newtct::sim() : @newtct::type {
	return :def({
		own_ref => '',
		desc => :sim
	});
}

def newtct::array(own_ref : ptd::sim(), content_type : @newtct::type) : @newtct::type {
	return :def({
		own_ref => own_ref,
		desc => :array(content_type)
	});
}

def newtct::variant(own_ref : ptd::sim(), variants : ptd::hash(ptd::var({empty => ptd::none(), val => @newtct::type}))) :
		@newtct::type {
	var variant_descs = {};
	forh var name, var content (variants) {
		match (content) case :empty {
			variant_descs{name} = {
				empty => :yes,
				val => :no
			};
		} case :val(var content_type) {
			variant_descs{name} = {
				empty => :no,
				val => :yes(content_type)
			};
		}
	}
	return ptd::ensure(@newtct::type, :def({
		own_ref => own_ref,
		desc => :variant({
			anyname => :no,
			names => variant_descs
		})
	}));
}

def newtct::bool() : @newtct::type {
	return newtct::variant('', {
		TRUE => :empty,
		FALSE => :empty
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


def newtct::tree_example() {
	return newtct::variant(42, {
		empty => :empty,
		node => :val(newtct::record('', {
			left => :ref(42),
			right => :ref(42),
			value => newtct::sim()
		}))
	});
}

