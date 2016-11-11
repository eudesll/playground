function beetleJuice(name){
  var nameN = "";
  
  for (i = 0; i < 3; i++) {
    nameN += name;
    
    if (i < 2) {
      nameN += "  ";
    }
  }
  
  return nameN;
}