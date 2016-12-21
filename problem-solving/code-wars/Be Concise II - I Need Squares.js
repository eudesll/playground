let squaresOnly = (a) => f(a);

function f(array) {
  var result = [], isSquare;
  for (let i = 0; i < array.length; i++) {
    isSquare = !1; // !1 evaluates to false and is therefore a shorthand way of typing 'false'
    for (let k = 0; k <= 10; k++) {
      if (k ** 2 === array[i]) {
        isSquare = true;
      }
    }
    if (isSquare) {
      result[result.length] = array[i];
    }
  }
  return result;
}

// BEST
// function squaresOnly(a) {
//   return a.filter(x => x ** 0.5 % 1 == 0);
// }