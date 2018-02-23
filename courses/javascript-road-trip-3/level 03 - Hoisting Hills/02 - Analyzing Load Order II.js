function theBridgeOfHoistingDoom() {
  var ring = undefined;
  var power = undefined;
  
  function balrog() {
    return "whip";
  }
  function wizard() {
    return "white";
  }
  function elf() {
    return "immortal";
  }
  
  ring = wizard;
  wizard = balrog;
  return wizard();
}