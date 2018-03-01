// 01 - Carefully Compare
'==='

// 02 - Safe Defaults
'content' + 'type'

// 03 - Beggar Bird 
var strength = true;
var fear = false;
var pack = {
  foodPouch: ['carrot', 'mystery meat', 'apple', 42],
  addFood: function(foodItem) {
    this.foodPouch = this.foodPouch || [];
    this.foodPouch.push(foodItem);
  },
  gobbleFood: function(foodItem) {
    return(this.foodPouch.indexOf(foodItem) >= 0) ?
    this.foodPouch.splice(this.foodPouch.indexOf(foodItem), 1)[0] :
    alert('Your pack lacks ' + foodItem);
  },
  feedBird: function(birdFood) {
    for (var i = 0; i < this.foodPouch.length; i++) {
      if (this.foodPouch[i] === birdFood) {
        alert('Feed beggar bird ' + this.foodPouch[i]);
      }
    }
  }
};

pack.feedBird('42');

// 04 - Bird Is The Word
true

// 05 - Birds Of All Feathers
'instanceof'

// 06 - Counting Birds
function Bird(){}
function DatatypeBird(){}
function SyntaxBird(){}
DatatypeBird.prototype = Object.create(Bird.prototype);
SyntaxBird.prototype   = Object.create(Bird.prototype);

var TryCatchTaster = function(){},
    SwitchSnagger  = function(){},
    TernaryTracker = function(){};

TryCatchTaster.prototype = Object.create(SyntaxBird.prototype);
SwitchSnagger.prototype  = Object.create(SyntaxBird.prototype);
TernaryTracker.prototype = Object.create(SyntaxBird.prototype);

var NumberNommer = function(){};
NumberNommer.prototype = Object.create(DatatypeBird.prototype);

var aTryCatchTaster = new TryCatchTaster();
var aSwitchSnagger  = new SwitchSnagger();
var aTernaryTracker = new TernaryTracker();
var aNumberNommer   = new NumberNommer();

var duneInhabitants = [aNumberNommer, aTryCatchTaster, 
                       aSwitchSnagger, aTernaryTracker];

var count = 0;
for(var i = 0; i < duneInhabitants.length; i++) {
  if (duneInhabitants[i] instanceof SyntaxBird) {
    count++;
  }
}

// 07 - Inherit My Kingdom
true

// 08 - Inheritance Sharing
'Bird'

