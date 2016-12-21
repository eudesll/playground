function dBScale(intensity) {
    return  Math.log10((intensity / Math.pow(10, -12))) * 10;
}

// BEST
// const dBScale = intensity => 10 * (12 + Math.log10(intensity));