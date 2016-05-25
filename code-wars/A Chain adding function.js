function add() {
    var args, sum, chain;

    args = Array.prototype.slice.call(arguments);

    if (this instanceof Number) {
        sum = Number.prototype.valueOf.call(this);
    } else if (typeof this === 'number') {
        sum = this;
    } else {
        sum = 0;
    }

    sum += args.length ? args.reduce(function (p, n) { return p + n; }) : 0;

    chain = add.bind(sum);

    chain.valueOf = function () {
        return sum;
    };

    return chain;
}

// BEST
// function add(n){
//   var fn = function(x) {
//     return add(n + x);
//   };
  
//   fn.valueOf = function() {
//     return n;
//   };
  
//   return fn;
// }