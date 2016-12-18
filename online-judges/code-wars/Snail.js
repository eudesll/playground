snail = function(array) {
    var nArray = [], xM = array.length, yM = array[0].length;
    var x = 0, y = 0, aD = 0, lx = 1, ly = 0;

    while (nArray.length < array.length * array[0].length) {
        if (aD == 0) {         
            nArray.push(array[x][y++]);

            if (y == yM) {
                aD++;
                yM--;
                y--;
            }
        } else if (aD == 1) {
            nArray.push(array[++x][y]);

            if (x == xM - 1) {
                aD++;
                xM--;
            }
        } else if (aD == 2) {
            nArray.push(array[x][--y]);

            if (y == ly) {
                aD++;
                ly++;
            }
        } else if (aD == 3) {
            nArray.push(array[--x][y]);

            if (x == lx) {
                aD = 0;
                lx++;
                y++;
            }
        }
    }

    return nArray;
}

// BEST
// snail = function(array) {
//   var result;
//   while (array.length) {
//     // Steal the first row.
//     result = (result ? result.concat(array.shift()) : array.shift());
//     // Steal the right items.
//     for (var i = 0; i < array.length; i++)
//       result.push(array[i].pop());
//     // Steal the bottom row.
//     result = result.concat((array.pop() || []).reverse());
//     // Steal the left items.
//     for (var i = array.length - 1; i >= 0; i--)
//       result.push(array[i].shift());
//   }
//   return result;
// }