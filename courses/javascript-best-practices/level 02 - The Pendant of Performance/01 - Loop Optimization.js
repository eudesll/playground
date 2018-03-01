// 01 - Kill Extra Steps
'Cache the necessary value in a local variable'

// 02 - Property Puzzle
'for loop'

// 03 - Cache Is King
var bitersBog = {
  critters: ['Nipping Global Variable', 
             'Sneaky For-in', 
             'Bulging Blocking Script']
};

populationGetter(bitersBog); 

function populationGetter(location) {
var list = '';
var numCritters = location.critters.length;
for (var i = 0; i < numCritters; i++) {
  list += location.critters[i];
}
return list.trim();
}

// 04 - Biters Bog
var bitersBog = {
  critters: ['Nipping Global Variable', 
             'Sneaky For-in', 
             'Bulging Blocking Script']
};

populationGetter(bitersBog); 

function populationGetter(location) {
  var list = '';
  for (var i = 0, numCritters = location.critters.length; i < numCritters; i++) {
    list += location.critters[i];
  }
  return list.trim();
}

// 05 - Inverted Peninsula
3

// 06 - Redoing What was Done
// Create a new invertedPeninsula
var invertedPeninsula = new InvertedPeninsula();

// Log the name of each invertedPeninsula inhabitant
var list = invertedPeninsula.inhabitants;
var x = list.length;
for (var i = 0; i < x; i++) {
  console.log(list[i].name);
}