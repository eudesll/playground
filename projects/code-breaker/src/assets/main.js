let answer = document.getElementById('answer');
let attempt = document.getElementById('attempt');

function guess() {
  let input = document.getElementById('user-guess');
  //add functionality to guess function here
  if (answer.value == "" && attempt.value == "") {
    setHiddenFields();
  }

  if (!validateInput(input.value)) {
    return false;
  }

  attempt.value = parseInt(attempt.value) + 1;

  if (getResults(input.value)) {
    setMessage("You Win! :)");
    showAnswer(true);
    showReplay();
  } else if (attempt.value > 10) {
    setMessage("You Lose! :(");
    showReplay();
  } else {
    setMessage("Incorrect, try again.");
  }
}

//implement new functions here
function setHiddenFields() {
  var value = parseInt(Math.random() * 9999);

  answer.value = value.toString().padStart(4, '0');
  attempt.value = 0;
}

function setMessage(message) {
  document.getElementById("message").innerHTML = message;
}

function validateInput(answer) {
  if (answer.length === 4) {
    return true;
  }

  document.getElementById("message").innerHTML = "Guesses must be exactly 4 characters long.";
  return false;
}

function getResults(input) {
  var resultContainer = document.getElementById("results");
  var result = '<div class="row"><span class="col-md-6">' + input + '</span><div class="col-md-6">';
  var correctAnswer = 0;

  for (var i = 0; i < input.length; i++) {
    if (input[i] == answer.value[i]) {
      result += '<span class="glyphicon glyphicon-ok"></span>';
      correctAnswer++;
    } else if (answer.value.includes(input[i])) {
      result += '<span class="glyphicon glyphicon-transfer"></span>';
    } else {
      result += '<span class="glyphicon glyphicon-remove"></span>';
    }
  }

  result += '</div>';
  resultContainer.innerHTML += result;

  return correctAnswer == 4;
}

function showAnswer(success) {
  var code = document.getElementById("code");
  code.classList.remove("success");
  code.classList.remove("failure");

  code.innerHTML = answer.value;

  if (success) {
    code.classList.add("success");
  } else {
    code.classList.add("failure");
  }
}

function showReplay() {
  var guessingDiv = document.getElementById("guessing-div");
  var replayDiv = document.getElementById("replay-div");

  guessingDiv.style.display = "none";
  replayDiv.style.display = "block";
}