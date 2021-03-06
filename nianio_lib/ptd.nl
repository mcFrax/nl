###
# (c) Atinea Sp. z o.o.
###


use hash;
use array;
use ov;
use c_std_lib;

def ptd::arr(arr_type : @ptd::meta_type) : @ptd::meta_type {
	return :ptd_arr(arr_type);
}

def ptd::rec(h : ptd::hash(@ptd::meta_type)) : @ptd::meta_type {
	return :ptd_rec(h);
}

def ptd::sim() : @ptd::meta_type {
	return :ptd_sim;
}

def ptd::none() {
	return :ptd_var_none;
}

def ptd::void() {
	return :ptd_void;
}

def ptd::hash(h : @ptd::meta_type) : @ptd::meta_type {
	return :ptd_hash(h);
}

def ptd::ptd_im() : @ptd::meta_type {
	return :ptd_im;
}

def ptd::var(h) : @ptd::meta_type {
	var types = {};
	forh var item, var value (h) {
		var et;
		if (value is :ptd_var_none) {
			et = :no_param;
		} else {
			et = :with_param(value);
		}
		hash::set_value(ref types, item, et);
	}
	return ptd::ensure_only_static_do_not_touch_without_permission(@ptd::meta_type, :ptd_var(types));
}

def ptd::meta_type() {
	return ptd::var({
			ptd_rec => ptd::hash(@ptd::meta_type),
			ptd_hash => @ptd::meta_type,
			ptd_arr => @ptd::meta_type,
			ptd_var => ptd::hash(ptd::var({with_param => @ptd::meta_type, no_param => ptd::none()})),
			ref => ptd::rec({
				module => ptd::sim(), 
				name => ptd::sim()
			}),
			ptd_sim => ptd::none(),
			ptd_im => ptd::none()
		});
}

def ptd::ensure(type, value) {
	ptd::ensure_dyn(type, value);
	return value;
}

def ptd::ensure_only_dynamic(type, value) {
	ptd::ensure_dyn(type, value);
	return value;
}

def ptd::ensure_only_static_do_not_touch_without_permission(type, value) {
	type;
	return value;
}

def ptd::ensure_dyn(type, value) : ptd::void() {
	die('1 Not ov reference in ensure') unless c_std_lib::is_variant(type);
	match (type) case :ptd_hash(var ptd_hash) {
		die('2 HASH ref expected ') unless c_std_lib::is_hash(value);
		forh var key, var val (value) {
			ptd::ensure_dyn(ptd_hash, val);
		}
	} case :ptd_arr(var ptd_arr) {
		die('3 ARRAY ref expected ') unless c_std_lib::is_array(value);
		fora var item (value) {
			ptd::ensure_dyn(ptd_arr, item);
		}
	} case :ptd_rec(var ptd_rec) {
		die('4 HASH ref expected ') unless c_std_lib::is_hash(value);
		die('5 keys amount mismatch in ptd_rec') unless hash::size(ptd_rec) == hash::size(value);
		forh var key, var val (ptd_rec) {
			die('6 key ' . key . ' not exists in hash') unless hash::has_key(value, key);
			ptd::ensure_dyn(val, hash::get_value(value, key));
		}
	} case :ptd_sim {
		die('8 wrong sim ref ') unless c_std_lib::is_sim(value);
	} case :ptd_var(var ptd_var) {
		die('9 not ov ref') unless c_std_lib::is_variant(value);
		var name = ov::get_element(value);
		die('10 Case ' . name . ' not allowed in variant. ') unless hash::has_key(ptd_var, name);
		var variant = hash::get_value(ptd_var, name);
		match (variant) case :with_param(var par) {
			die('12 with_param ov has no value') if !ov::has_value(value);
			ptd::ensure_dyn(par, ov::get_value(value));
		} case :no_param {
			die('11 no_param ov has value') if ov::has_value(value);
		}
	} case :ptd_im {
	} case :ref(var ptd_ref) {
		ptd::ensure_dyn(exec(type, []), value);
	}
}

def ptd::is_ref_type(ptd, type_name) {
	match (ptd) case :ref(var ref_name) {
		return false unless (type_name is :ref);
		var ref_name2 = type_name as :ref;
		if (c_std_lib::is_hash(ref_name2)) {
			return false unless (ref_name2->module eq ref_name->module);
			return false unless (ref_name2->name eq ref_name->name);
		} else {
			return ref_name2 eq ref_name;
		}
		return true;
	} case :ptd_im {
	} case :ptd_sim {
	} case :ptd_arr(var arr) {
	} case :ptd_var(var variants) {
	} case :ptd_rec(var recs) {
	} case :ptd_hash(var hash) {
	}
	return false;
}

def exec(func, args) {
	return c_std_lib::exec(func, ref args);
}

def ptd::cast_t(){
	return ptd::var({
		ok => ptd::ptd_im(),
		err => @ptd::cast_error_t
	});
}

def ptd::try_cast(type, value) : @ptd::cast_t {
	return ptd::try_dynamic_cast(type, value);
}
def ptd::try_dynamic_cast(type, value) : @ptd::cast_t {
	var tmp = try_dynamic_cast(type, value);
	if(array::len(tmp) == 0){
		return :ok(value);
	}
	return :err(tmp);
}

def ptd::imm_kind_t(){
	return ptd::var({
		sim => ptd::none(),
		hash => ptd::none(),
		variant => ptd::none(),
		array => ptd::none(),
	});
}

def ptd::cast_error_t(){
	return ptd::arr(ptd::var({
		path => ptd::var({
			hash_key => ptd::sim(),
			array_index => ptd::sim(),
			rec_key => ptd::sim(),
			variant_value => ptd::sim(),
			type_ref => ptd::ptd_im(),
		}),
		error => ptd::var({
			is_not_type => @ptd::imm_kind_t,
			hash_expected => @ptd::imm_kind_t,
			array_expected => @ptd::imm_kind_t,
			rec_expected => @ptd::imm_kind_t,
			sim_expected => @ptd::imm_kind_t,
			variant_expected => @ptd::imm_kind_t,
			rec_size => ptd::sim(),
			no_key => ptd::sim(),
			unknown_case => ptd::sim(),
			has_value => ptd::sim(),
			no_value => ptd::sim(),
		})
	}));
}
def ptd::get_imm_kind(imm) : @ptd::imm_kind_t {
	return :sim if c_std_lib::is_sim(imm);
	return :variant if c_std_lib::is_variant(imm);
	return :hash if c_std_lib::is_hash(imm);
	return :array if c_std_lib::is_array(imm);
	die;
}
def try_dynamic_cast(type, value) : @ptd::cast_error_t {
	return [:error(:is_not_type(ptd::get_imm_kind(type)))] unless c_std_lib::is_variant(type);
	match (type) case :ptd_hash(var ptd_hash) {
		return [:error(:hash_expected(ptd::get_imm_kind(type)))] unless c_std_lib::is_hash(value);
		forh var key, var val (value) {
			var tmp = try_dynamic_cast(ptd_hash, val);
			if(array::len(tmp) > 0){
				array::push(ref tmp, :path(:hash_key(key)));
				return tmp;
			}
		}
	} case :ptd_arr(var ptd_arr) {
		return [:error(:array_expected(ptd::get_imm_kind(type)))] unless c_std_lib::is_array(value);
		rep var i (array::len(value)) {
			var tmp = try_dynamic_cast(ptd_arr, value[i]);
			if(array::len(tmp) > 0){
				array::push(ref tmp, :path(:array_index(i)));
				return tmp;
			}
		}
	} case :ptd_rec(var ptd_rec) {
		return [:error(:rec_expected(ptd::get_imm_kind(type)))] unless c_std_lib::is_hash(value);
		return [:error(:rec_size(hash::size(value)))] unless hash::size(ptd_rec) == hash::size(value);
		forh var key, var val (ptd_rec) {
			return [:error(:no_key(key))] unless hash::has_key(value, key);
			var tmp = try_dynamic_cast(val, hash::get_value(value, key));
			if(array::len(tmp) > 0){
				array::push(ref tmp, :path(:rec_key(key)));
				return tmp;
			}
		}
	} case :ptd_sim {
		return [:error(:sim_expected(ptd::get_imm_kind(type)))] unless c_std_lib::is_sim(value);
	} case :ptd_var(var ptd_var) {
		return [:error(:variant_expected(ptd::get_imm_kind(type)))] unless c_std_lib::is_variant(value);
		var name = ov::get_element(value);
		return [:error(:unknown_case(name.''))] unless hash::has_key(ptd_var, name);
		var variant = hash::get_value(ptd_var, name);
		match (variant) case :with_param(var par) {
			return [:error(:no_value(name.''))] if !ov::has_value(value);
			var tmp = try_dynamic_cast(par, ov::get_value(value));
			if(array::len(tmp) > 0){
				array::push(ref tmp, :path(:variant_value(name.'')));
				return tmp;
			}
		} case :no_param {
			return [:error(:has_value(name.''))] if ov::has_value(value);
		}
	} case :ptd_im {
	} case :ref(var ptd_ref) {
		var tmp = try_dynamic_cast(exec(type, []), value);
		if(array::len(tmp) > 0){
			array::push(ref tmp, :path(:type_ref(ptd_ref)));
			return tmp;
		}
	}
	return [];
}