/*
Below is a function with multiple functions inside. Using your new knowledge of hoisting, analyze the load order of the thisIsWeird function. Your job is to find out which function gets returned.

-If none of the functions get returned, log an "ERROR" string to the console.
-If an undefined value gets returned, log an "undefined" string to the console.
-If one of the functions gets returned, log a string to the console with the name of the “unused” variable from within the function that is getting returned. e.g., "unused1", "unused2" or "unused3"
*/
function thisIsWeird() {
  function secret() {
    var unused3;
  }
  var result;
  function secret() {
    var unused1;
  }
  // The following line of code assigns a
  // secret function to the variable result.
  result = secret;
  function secret() {
    var unused2;
  }
  return result;
}

// ANSWER
console.log("unused2");