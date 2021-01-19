/*
https://adventofcode.com/2019/day/4
*/

inputFrom = 138307
inputTo = 654504

validateRange = (from, to) => {
  qtt = 0;
  for (let i = from; i <= to; i++) {
    if (validateNumber(i)) {
      qtt++;
    }
  }

  return qtt;
}

validateNumber = number => {
  num = number.toString();
  rep = false;
  decr = false;
  for (let i = 1; i < num.length; i++) {
    if (num[i] == num[i - 1]) {
      rep = true;
    }

    if (parseInt(num[i]) < parseInt(num[i - 1])) {
      decr = true;
      break;
    }
  }

  return rep && !decr;
}

console.log(validateRange(inputFrom, inputTo));

// PART 2

validateNumber = number => {
  let num = number.toString();
  let numCount = {}
  numCount[num[0]] = 1;

  rep = false;
  decr = false;

  for (let i = 1; i < num.length; i++) {
    if (parseInt(num[i]) < parseInt(num[i - 1])) {
      decr = true;
      break;
    }

    if (!numCount[num[i]]) {
      numCount[num[i]] = 0;
    }

    numCount[num[i]]++;
  }

  for (let key in numCount) {
    if (numCount[key] == 2) {
      rep = true;
      break;
    }
  }

  return rep && !decr;
}

console.log(validateRange(inputFrom, inputTo));