function changePowerTotal(totalPower, generatorId, generatorStatus, amountPower) {
  if (generatorStatus == "on") {
  	totalPower += amountPower;
  } else {
    totalPower -= amountPower;
  }
  
  alert("Generator #" + generatorId + " is now on, adding " + amountPower + " MW, for a total of " + totalPower + " MW!");
  return totalPower;
}