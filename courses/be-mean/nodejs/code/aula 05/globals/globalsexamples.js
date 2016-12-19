'use strict';

console.log(__dirname);
console.log(__filename);

var buff = new Buffer('Hello, World!');

console.log(buff.toString());

setTimeout(() => {
    console.log('Hello, Async function');
}, 1000);

const time = setInterval(() => console.log('Hello, Async'), 1000);

setTimeout(() => {
    clearInterval(time);
}, 5000);

// clearTimeout