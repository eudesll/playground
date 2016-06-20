function divisibleBy(numbers, divisor){
    var div = [];
    
    for (i in numbers) {
        if (numbers[i] % divisor == 0) {
            div.push(numbers[i]);
        }
    }
    
    return div;
}

// BEST
// function divisibleBy(numbers, divisor) {
//   return numbers.filter(n => n % divisor === 0)
// }