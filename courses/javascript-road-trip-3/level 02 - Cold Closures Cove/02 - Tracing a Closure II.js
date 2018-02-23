/*
We’ve made the code a little trickier this time. Again, calculate the final value of the result variable and alert the value as a number using one line of code.
*/
function mystery(input) {
  var secret = 5;
  function mystery2(multiplier) {
    multiplier *= input;
    return secret * multiplier;
  }
  return mystery2;
}

var hidden = mystery(4);
var result = hidden(2);

// ANSWER
alert(40);