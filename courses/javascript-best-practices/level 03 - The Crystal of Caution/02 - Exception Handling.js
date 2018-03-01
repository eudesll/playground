// 01 - Name That Error
'syntax' +  'runtime'

// 02 - Fowl Feeding Fun
'run-time'

// 03 - Syntax Woes
function Bird(){}
function DatatypeBird(){}
function SyntaxBird(){}
DatatypeBird.prototype = Object.create(Bird.prototype);
SyntaxBird.prototype   = Object.create(Bird.prototype);

var TryCatchTaster = function()  {};
TryCatchTaster.prototype = Object.create(SyntaxBird.prototype);

var NumberNommer = function(){};
NumberNommer.prototype = Object.create(DatatypeBird.prototype);

// 04 - Control Program Flow
'try'

// 05 - Throwback
'catch'

// 06 - Take Action
'finally'

// 07 - For The Birds
// Pack of goods
var pack = {
  foodPouch: ['carrot', 'mystery meat', 'apple', 42],
  addFood: function(foodItem) {
    this.foodPouch = this.foodPouch || [];
    this.foodPouch.push(foodItem);
  },
  feedBird: function(bird) {
    var food = bird.birdFood,
        foodIndex = this.foodPouch.indexOf(food);
    // If the exact food we want is not in the array,
    // check if the type of food is there.
    if (foodIndex === -1) {
      throw new ReferenceError('Bird food given is not available.');      
    }
    bird.fed = true;
  }
};

// Parent Bird Class
function Bird() {}

// SyntaxBird Inherits From Parent Bird
function SyntaxBird() {}
SyntaxBird.prototype = Object.create(Bird.prototype);

var LoopLover = function(birdFood) {
  this.birdFood = birdFood;
  this.fed = false;
};
LoopLover.prototype = Object.create(SyntaxBird.prototype);

// DatatypeBird Inherits From Parent Bird
function DatatypeBird() {}
DatatypeBird.prototype = Object.create(Bird.prototype);

var NumberNommer = function(birdFood){
  this.birdFood = birdFood;
};
NumberNommer.prototype = Object.create(DatatypeBird.prototype);

// bird variables below inherit from above prototype chain
var numba = new NumberNommer('42');
var loopy = new LoopLover('loops');
var tryCatcher = new LoopLover('la-de');

// array of all the inhabitants
var duneInhabitants = [numba, loopy, tryCatcher];

// loop through duneInhabitants and if Bird call feedBird()
for (var i = 0; i < duneInhabitants.length; i++) {
  try {
    pack.feedBird(duneInhabitants[i]);
  } catch(error) {
    console.log(duneInhabitants[i] + " was not fed.");
  }
  
}
