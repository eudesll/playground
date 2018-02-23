var currentGen = 1;
var totalGen = 19;
var totalMW = 0;

while(totalGen-- > 15) {
  totalMW += 62;
  console.log("Generator #" + currentGen++ + " is on, adding 62 MW, for a total of " + totalMW + " MW!");
}

for (var i = 0; i <= totalGen; i++) {
	totalMW += 124;
  console.log("Generator #" + currentGen++ + " is on, adding 124 MW, for a total of " + totalMW + " MW!");
}