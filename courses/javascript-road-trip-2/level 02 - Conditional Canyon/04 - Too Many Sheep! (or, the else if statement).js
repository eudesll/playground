var numSheep = 4;
var monthsToPrint = 12;

for (var monthNumber = 1; monthNumber <= monthsToPrint; monthNumber++) {

  if (monthNumber % 4 == 0) {
    var minus = numSheep * 0.75;
    
  	console.log("Removing " + minus + " sheep from the population.");
    numSheep -= minus;
  } else if (numSheep > 10000) {
    var minus = numSheep / 2;
    
  	console.log("Removing " + minus + " sheep from the population.");
    numSheep -= minus;
  }

  numSheep *= 4;
  console.log("There will be " + numSheep + " sheep after " + monthNumber + " month(s)!");
}
