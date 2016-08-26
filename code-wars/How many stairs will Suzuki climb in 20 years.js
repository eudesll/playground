function stairsIn20(s){
  var days = 0;
  
  s.forEach((element, index, array) => {
      element.forEach((element) => {
        element.forEach((value) => {
          days += value;
        });
      });
  });
  
  return days * 20;
}

// BEST
// function stairsIn20(s){
//   var total = 0;
//   s.forEach(function(item){
//     item.forEach(function(weekday){
//        weekday.forEach(function(day){
//         total += day;
//        });
//     });
//   })
//   return total*20;
// }