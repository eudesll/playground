// 01 - Helps Memory You Say
'Prototype'

// 02 - Stage Them All
'fragment'

// 03 - Rampant Var
var list = document.getElementById('population'),
 inhabitants = ['Nipping Global Variable', 'Sneaky For-in', 'Bulging Blocking Script'],
 fragment = document.createDocumentFragment();

for (var i = 0, x = inhabitants.length; i < x; i++) {
  var element = document.createElement('li');
  element.appendChild(document.createTextNode(inhabitants[i]));
  fragment.appendChild(element);
}

list.appendChild(fragment);

// 04 - Jumbo String
'Call the Array prototypes join() method on array'

// 05 - Join Together
array.join(' ');