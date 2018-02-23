function numStrings(list) {
	var count = 0;
  for (i = 0; i < list.length; i++) {
    if (typeof list[i] === "string") {
    	count++;
    }
  }
  
  return count;
}
