function spinWords(text){
    var words = text.split(' ');
    var result = '';
    
    for (i in words) {
        result += words[i].length >= 5 ? words[i].split('').reverse().join('') : words[i];
        result += i < words.length - 1 ? ' ' : '';
    }
    
    return result;
}

//BEST
//function spinWords(words){
//   return words.split(' ').map(function (word) {
//     return (word.length > 4) ? word.split('').reverse().join('') : word;
//   }).join(' ');
// }