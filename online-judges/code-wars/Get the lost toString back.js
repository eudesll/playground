var _originalToString = function(func) {
	return Function.toString.apply(func);
};

// BEST
// const _originalToString = func => Function.prototype.toString.call(func);