var userAge = prompt("What's your age, user?");
var ageIsCorrect = confirm("You entered " + userAge + ". Is this correct?");

while(!ageIsCorrect) {
	userAge = prompt("What's your age, user?");
  ageIsCorrect = confirm("You entered " + userAge + ". Is this correct?");
}

alert("Great! Your age is logged as " + userAge + ".");