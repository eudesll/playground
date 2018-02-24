Object.prototype.noCalvesYet = function() {
  return this.type == "cow" && this.hadCalf == null;
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
