function warningMaker(obstacle) {
  return function() {
    alert("Beware! There have been " + obstacle + " sightings in the Cove today!");
  };
}

// build your warning message here
var icebergAlert = warningMaker("iceberg");
icebergAlert();