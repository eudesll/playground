Object.prototype.noCalvesYet = function() {
  if (this.type == "cow" && this.hadCalf == null) {
    return true;
  } else {
    return false;
  }
};

Array.prototype.countForBreeding = function() {
  var numToBreed = 0;
  for (var i = 0; i < this.length; i++) {
    if (this[i].noCalvesYet()) {
      numToBreed++;
    }
  }
  return numToBreed;
};

// set up your numPriorityCows variable
var numPriorityCows = canyonCows.countForBreeding();
numPriorityCows += valleyCows.countForBreeding();
numPriorityCows += forestCows.countForBreeding();
numPriorityCows += badlandsCows.countForBreeding();

// alert the correct message with the total
alert("Herd-merger has indicated " + numPriorityCows + " cows of top breeding priority.");