// 01 -  Journey's Beginning
var beginJourney = aiedraIsConvincing && dhuunIsCurious

// 02 - Survive This Trial
var surviveThisTrial = strength && !fear

// 03 - Snack Snag
var strength = true;
var fear = false;
var pack = {
  food: [ 'carrot',
          'mystery meat',
          'apple',
          'crust of bread',
          'spicy dried sausage',
          'carrot',
          'wedge of sharp cheese',
          'jug of milk',
          'mystery meat',
          'carrot'
  ],
  addFood: function(foodItem) {
    this.food = this.food || [];
    this.food.push(foodItem);
  },
  enoughFood: function(amount) {
    return(this.food.length >= amount);
  }
};

var surviveThisTrial = strength && !fear && pack.enoughFood(10);

console.log(surviveThisTrial);

// 04 - Food Or Fail
yes

// 05 - Dhuun Doppelganger
'The fear variable will shor-circuit the local assignment, and enoughFood will not be called at all'