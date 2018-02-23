/*
To complete your examination, the Wizard-Devs have asked you to log out the actual result of calling the theBridgeOfHoistingDoom() function. Trace the executable code and log out the appropriate string.

-If the result is undefined, log an "undefined" string to the console.
-If the function is unable to complete, log an "ERROR" string to the console.
*/
function theBridgeOfHoistingDoom() {
  var sword = undefined;
  var dwarf = undefined;
  var fall = undefined;
  var ring = undefined;
  function fellowship() {
    return "friends";
  }
  sword = "sting";
  dwarf = function() {
    return "axe";
  }
  fall = "Fly you fools!";
  fellowship = function() {
    return "broken";
  }
  ring();
  return sword;
}

// ANSWER
console.log("ERROR");