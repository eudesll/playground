function printArray(array){
	var text = "";

	for (i = 0; i < array.length; i++) {
		text += array[i] + (i < array.length - 1 ? "," : "");
	}

	return text;
}

// BEST
// function printArray(array){
//   return array.join();
// }