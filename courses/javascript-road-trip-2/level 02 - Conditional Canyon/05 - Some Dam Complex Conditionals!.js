var totalGen = 19;
var totalMW = 0;

for (i = 1; i <= totalGen; i++) {
  if (i % 2) {
    console.log("Generator #" + i + " is off.");
  } else {
    qt = i <= 4 ? 62 : 124;
    totalMW += qt;
    console.log("Generator #" + i + " is on, adding " + qt + " MW, for a total of " + totalMW + " MW!");
  }
}