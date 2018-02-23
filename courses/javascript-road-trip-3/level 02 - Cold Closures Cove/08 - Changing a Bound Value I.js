function warningMaker(obstacle) {
  // create a count
  var count = 1;
  return function(number, location) {
    // keep track of warnings
    alert("Beware! There have been " + obstacle +
          " sightings in the Cove today!\n" +
          number + " have been spotted at the " +
          location + "!\n" +
          // finish the warning message here
          "This is alert #" + count++ + " today for " + obstacle + " danger."
    );
  };
}
