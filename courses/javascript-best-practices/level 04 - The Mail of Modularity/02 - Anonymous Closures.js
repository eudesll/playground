// 01 - Some This Some That
'anonymous closure'

// 02 - Private vs Public
'Private, created, function expression, Public, object, returned, namespace, private, closure, module'

// 03 - Build Private Data
var CAVESOFCLARITY = (function() {
  var treasureChests = 3;
  return {
    stalactites: 4235,
    stalagmites: 3924,
    bats: 345,
    SECRET: {
      openChest: function() {
        treasureChests--;
        alert('DA DADADA DAAAAAAA!');
      }
    }
  };
})();

// 04 - Public Impacting Private
treasureChests--;

// 05 - Secure the Bats
var CAVESOFCLARITY = function() {
          
  var treasureChests = 3;
  var bats = 345;

  return {
    stalactites: 4235,
    stalagmites: 3924,
    SECRET: {
      openChest: function() {
        treasureChests--;
        alert('DA DADADA DAAAAAAA!');
      }
    }
  };
}();

// 06 - Useless Closure
'Since its never referenced through the public methods, the private bats datum holds no functional purpose.'

// 07 - Bats for All Time
var CAVESOFCLARITY = function() {
          
  var treasureChests = 3;
  var bats = 345;

  return {
    stalactites: 4235,
    stalagmites: 3924,
    SECRET: {
      openChest: function() {
        treasureChests--;
        alert('DA DADADA DAAAAAAA!');
      }
    },
    getBats: function() {
      return bats;
    }
  };
}();

// 08 - iife 
'The parentheses that immediately invoke the function.'