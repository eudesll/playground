function SafeInteger(n) {
    return n < 9007199254740992;
}

// BEST
// function SafeInteger(n) {
//   return Number.isSafeInteger(n);
// }