/**
 * Sync
 */

var fs = require('fs');

fs.mkdir('./SyncFolder');

/**
 * Async
 */

fs.mkdir('./AsyncFolder', (err) => {
    if (err) {
        throw err;
    }

    console.log('Folder created!');
});