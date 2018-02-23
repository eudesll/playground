function warningMaker(obstacle) {
  return function(number, location) { // set parameters
    alert("Beware! There have been " + obstacle +
          " sightings in the Cove today!\n" +
          // finish the warning message here
					number + " have been spotted at the " + location + "!"
    );
  };
}
