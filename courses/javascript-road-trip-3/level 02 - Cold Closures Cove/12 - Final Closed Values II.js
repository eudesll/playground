function makeTargetAssigner(sharks, targets) {
  return function(shark) {
    for (var i = 0; i < sharks.length; i++) {
      if (shark == sharks[i]) {
      	alert("Hey, " + shark + "!\n" +
							"There've been " + targets[i] + " sightings in our area!\n" +
							"Time to take care of business!");
      }
    }
  };  
}

var getTargetFor = makeTargetAssigner(listOfSharks,
                                      listOfTargets);
getTargetFor("Ice Teeth");
