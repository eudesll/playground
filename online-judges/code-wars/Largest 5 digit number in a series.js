function solution(digits){
    var biggest = 0;
    
    for (i = 0; i < digits.length - 4; i++) {
        var num = parseInt(digits.substring(i, i + 5));
        
        if (num > biggest) {
            biggest = num;
        }
    }
    
    return biggest;
}

// BEST
// function solution(digits){
//   if (digits.length <= 5) return Number(digits);
//   return Math.max(Number(digits.substr(0, 5)), solution(digits.substr(1)));
// }