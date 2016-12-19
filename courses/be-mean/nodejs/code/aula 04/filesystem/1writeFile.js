/**
 * Sync
 */

var fs = require('fs');

fs.writeFileSync('./helloSync.txt', 'Hello. Sync');

/**
 * Async
 */

fs.writeFile('./helloAsync.txt', 'Hello. Async', (err) => {
    if (err) {
        throw err;
    }

    console.log('It\'s saved!');
});

/**
 * Stream
 */

var writeStream = fs.createWriteStream('./helloStream.txt');

writeStream.write('Hello. Stream');