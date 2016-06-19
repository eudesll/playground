function rgb(r, g, b){
  return toHex(r) + toHex(g) + toHex(b);
}

function toHex(n) {
   n = Math.max(0, Math.min(n, 255));
   return "0123456789ABCDEF".charAt((n - n % 16) / 16)
        + "0123456789ABCDEF".charAt(n % 16);
}

// BEST
// function rgb(r, g, b){
//   return toHex(r)+toHex(g)+toHex(b);
// }

// function toHex(d) {
//     if(d < 0 ) {return "00";}
//     if(d > 255 ) {return "FF";}
//     return  ("0"+(Number(d).toString(16))).slice(-2).toUpperCase()
// }