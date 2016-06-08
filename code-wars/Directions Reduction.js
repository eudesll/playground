function dirReduc(arr){
    var result = [];
    var dict = { NORTH: "SOUTH", SOUTH: "NORTH", WEST: "EAST", EAST: "WEST" };
    
    for (i in arr) {
    	var lastAdded = result.pop();

        if (lastAdded != dict[arr[i]]) {
        	if (typeof lastAdded != 'undefined') {
	        	result.push(lastAdded);
	        }

        	result.push(arr[i]);
        }
    }

    return result;
}

// BEST
// function dirReduc(plan) {
//   var opposite = {
//     'NORTH': 'SOUTH', 'EAST': 'WEST', 'SOUTH': 'NORTH', 'WEST': 'EAST'};
//   return plan.reduce(function(dirs, dir){
//       if (dirs[dirs.length - 1] === opposite[dir])
//         dirs.pop();
//       else
//         dirs.push(dir);
//       return dirs;
//     }, []);
// }