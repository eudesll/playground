function assignLaser(shark, sharkList) {
  for (var i = 0; i < sharkList.length; i++) {
    if (shark == sharkList[i]) {
      return function() {
        alert("Yo, " + shark + "!\n" +
              "Visit underwater strapping station " +
              (i + 1) + " for your sweet laser.");
      };
    }
  }
}
