function feuerFrei(concentration, barrels) {
  var hours = concentration * barrels;
  
  if (hours < 100) {
    return (100 - hours) +  " Stunden mehr Benzin benötigt.";
  } else if (hours == 100) {
    return "Perfekt!";
  } else {
    return hours - 100;
  }
}