'user strict';

const http = require('http');

process.nextTick(() => {
    console.log('Async');
});

console.log(process.execPath);
console.log(process.cwd());

console.log(process.pid);

var server = http.createServer((req, res) => {

});

server.listen(3000, () => {
    console.log('Server listening..');
});

process.on('SIGINT', () => {
    console.log('Quit');
    process.exit(0);
});