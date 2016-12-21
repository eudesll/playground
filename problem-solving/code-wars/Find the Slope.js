function slope(points)
{
    var dX = points[2] - points[0], dY = points[3] - points[1];
    return dX != 0 ? (dY / dX) + "" : "undefined";
}

// BEST
// function slope([ x1, y1, x2, y2 ]) {
//   let slope = (y2 - y1) / (x2 - x1);
//   return Number.isFinite(slope) ? `${slope}` : 'undefined';
// }