function adventureSelector(userChoice) {
  var funcs = [ function() { alert("You selected the Vines of Doom!"); },
                function() { alert("Looks like you want the Lake of Despair!"); },
                function() { alert("The Caves of Catastrophe!"); } ];
  
  return funcs[userChoice - 1];
}
