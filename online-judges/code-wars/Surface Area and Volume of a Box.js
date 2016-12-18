function getSize(width, height, depth) {
    var area = width * height * 2 + width * depth * 2 + height * depth * 2;
    var volume = width * height * depth;
    
    return [area, volume];
}

// BEST
// const getSize = (w, h, d) => [
//   (w * h + w * d + h * d) * 2,
//   w * h * d
// ];