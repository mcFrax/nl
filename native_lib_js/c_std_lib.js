/*  
 *  (c) Atinea Sp. z o. o.
 *  Stamp: AJF 2014-02-14
*/

function c_std_lib0fast_substr(sarr, start, length) {
	if (sarr.value.length != 1)
		nl_die();
	return c_std_lib0string_sub(new ImRef(sarr.value[0]), new ImRef(start.value), new ImRef(length.value));
}

function c_std_lib0array_sub(array, begin, length) {
	return array.value.slice(begin.value, begin.value + length.value);
}

function c_std_lib0array_sort(arr, func) {
	var result = arr.value.slice();
	var f = window[c_std_lib_priv0get_fun_name(func)];
	result.sort(function(a, b) {
		var cc = c_rt_lib0check_true_native(new ImRef(f(new ImRef(a), new ImRef(b))));
		return cc;
	});
	return result;
}

function c_std_lib0array_push(/*ref*/arr, el) {
	arr.value = arr.value.slice();
	arr.value.push(el.value);
}

function c_std_lib0array_len(arr) {
	return c_rt_lib0array_len(arr);
}

function c_std_lib0array_pop(/*ref*/arr) {
	arr.value = arr.value.slice();
	arr.value.pop();
}

function c_std_lib0hash_get_value(hash, key) {
	return c_rt_lib0hash_get_value(hash, key);
}

function c_std_lib0hash_has_key(hash, key) {
	return c_rt_lib0native_to_nl(key.value in hash.value);
}

function c_std_lib0hash_set_value(/*ref*/hash, key, value) {
	c_rt_lib0hash_set_value(hash, key, value);
}

function c_std_lib0hash_delete(/*ref*/hash, key) {
	hash.value = c_rt_lib0clone(hash.value);
	delete hash.value[key.value];
}

function c_std_lib0hash_size(hash) {
	return Object.keys(hash.value).length;
}

function c_std_lib0string_chr(code) {
	return String.fromCharCode(code.value);
}

function c_std_lib0string_ord(str) {
	return str.value.toString().charCodeAt(0);
}

function c_std_lib0string_length(s) {
	return s.value.toString().length;
}

function c_std_lib0string_index(str, substr, start) {
	return str.value.toString().indexOf(substr.value, start.value);
}

function c_std_lib0string_sub(str, start, length) {
	return str.value.toString().substring(start.value, start.value + length.value);
}
function c_std_lib0string_get_char(str, position) {
	return str.value.charCodeAt(position.value);
}
function c_std_lib0string_lc(str) {
	return str.value.toString().toLowerCase();
}
function c_std_lib0string_uc(str) {
	return str.value.toString().toUpperCase();
}

function c_std_lib0string_replace(str, old, new_part) {
	var find = old.value.toString().replace(/[\-\[\]\/\{\}\(\)\*\+\?\.\\\^\$\|]/g, "\\$&");
	return str.value.toString().replace(new RegExp(find, 'g'), new_part.value);
}

function c_std_lib0string_compare(a, b) {
	if (a.value != b.value)
		return a.value > b.value ? 1 : -1;
	return 0;
}

function c_std_lib0is_array(imm) {
	if(imm === undefined || imm == null || imm.value === undefined || imm.value == null){
		return c_rt_lib0get_false();
	}
	return c_rt_lib0native_to_nl(imm.value.constructor.name == 'Array');
}

function c_std_lib0is_hash(imm) {
	if(imm === undefined || imm == null || imm.value === undefined || imm.value == null){
		return c_rt_lib0get_false();
	}
	return c_rt_lib0native_to_nl(imm.value.constructor.name == 'Object');
}

function c_std_lib0is_sim(imm) {
	if(imm === undefined || imm == null || imm.value === undefined || imm.value == null){
		return c_rt_lib0get_false();
	}
	return c_rt_lib0native_to_nl(imm.value.constructor.name == 'String' || imm.value.constructor.name == 'Number');
}

function c_std_lib0is_variant(imm) {
	if(imm === undefined || imm == null || imm.value === undefined || imm.value == null){
		return c_rt_lib0get_false();
	}
	return c_rt_lib0native_to_nl(imm.value.constructor.name == 'OV');
}

function c_std_lib0escape_characters(str) {
	str = str.value;
	str = str.replace(new RegExp("\n", 'g'), "\\n");
	str = str.replace(new RegExp("\r", 'g'), "\\r");
	str = str.replace(new RegExp("\t", 'g'), "\\t");
	return str;
}

function c_std_lib0exec(func, /*ref*/arr) {
	var name = c_std_lib_priv0get_fun_name(func);
	for (var i in arr.value)
		arr.value[i] = new ImRef(arr.value[i]);
	var result = window[name].apply(null, arr.value);
	for (var i in arr.value)
		arr.value[i] = arr.value[i].value;
	return result;
}

function c_std_lib_priv0get_fun_name(func) {
	return func.value.value.module.replace(/0/g, "00") + "0" + func.value.value.name.replace(/0/g, "00")
}