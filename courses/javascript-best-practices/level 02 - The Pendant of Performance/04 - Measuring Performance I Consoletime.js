// 01 - How Long
'console.time'

// 02 - Opening And Closing
true

// 03 - Do Not Test Her
var array = ['Inverted Peninsula', ',', 'Inverted Peninsula', ', ', 'I', '—', 'P', '...', 'hmmm', '.'];
var internalThoughts = '';
console.time('time');
internalThoughts = array.join(' ');

console.log(internalThoughts);
console.timeEnd('time');

// 04 - Can You Fix It?
var array = ['Inverted Peninsula', ',', 
  'Inverted Peninsula', ', ', 'I', '—', 
  'P', '...', 'hmmm', '.'];
var internalThoughts = '';

console.time('Test');

internalThoughts = array.join(' ');

console.time('innerTest');
console.log(internalThoughts);
console.timeEnd('innerTest');

console.timeEnd('Test');

// 05 - Included Or Not
false

// 06 - Adding Up Inhabitants
Array.prototype.killTheInsolent = function(){};
Array.prototype.countPopulace = function(){};
Array.prototype.countUndeadPopulace = function(){};
Array.prototype.insecticide = function(){};
Array.prototype.shadowProvider = function(){};

var invertedPeninsula = {
  inhabitants: ['Nipping Global Variable', 'Sneaky For-in', 'Bulging Blocking Script']
};

function populationGetter(){
  var population = invertedPeninsula.inhabitants;
  var list = "";
  console.time('list');

  for(var i = 0, ff = population.length; i < ff; i++){
    list += (population[i] + " ");
  }

  console.timeEnd('list');
  return list.trim();
}

populationGetter();
