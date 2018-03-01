// 01 - With Hunt
'redundancy' + 'scope'

// 02 - Caching Clarity
// Pack of goods
var pack = {
  foodPouch: ['carrot', 'mystery meat', 'apple', 42],
  addFood: function(foodItem) {
    this.foodPouch = this.foodPouch || [];
    this.foodPouch.push(foodItem);
  },
  feedBird: function(birdFood) {
    var food = birdFood,
        foodIndex = this.foodPouch.indexOf(food);

    // If the exact food we want is not in the array,
    // check instead if the type of food is there.
    if (foodIndex === -1) {
      food = typeof food;
      for (var i = 0; i < this.foodPouch.length; i++) {
        if (typeof this.foodPouch[i] === food) {
          foodIndex = i;
          break;
        }
      }
    }
  
    // Check if we have the food in our pack.
    if (foodIndex >= 0) {
      console.log('You feed a beggar bird ' +  food + '.');
      this.foodPouch.splice(foodIndex, 1);
    } else {
      console.log('Your pack lacks ' + food + ', Dhuun.');
    }
  },

  // Place in pack to keep your fire starting goods
  fireKit: {
    matchTin: {
      matches: 4,
      sparkPaper: 6
    }
  }
};

// Extra matches held outside of pack
var matches = 3;
var lightCampfire = function() {
  var tin = pack.fireKit.matchTin;
  tin.matches--;
  tin.sparkPaper--;
};


// 03 - Trebuchet To A Termite
var toolsForTheBug = [
  {bug: 'termite', tool: 'trebuchet'},
  {bug: 'slug', tool: 'sling'},
  {bug: 'caterpillar', tool: 'catapult'}
];

var toolAssignment = function(number, tool) {
  toolsForTheBug[number].tool = tool;
};

toolAssignment(1, 'Sausage');

// 04 - Tools For The Bug
JSON.parse(toolsForTheBug)

// 05 - A Two Character Sacrifice
var toolsForTheBug = [
  {bug: 'termite', tool: 'trebuchet'},
  {bug: 'slug', tool: 'sling'},
  {bug: 'caterpillar', tool: 'catapult'}
];

function toolAssignment(number, tool) {
  toolsForTheBug[number].tool = tool;
}
toolAssignment(1, 'Sausage');
