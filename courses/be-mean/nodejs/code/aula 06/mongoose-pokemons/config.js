const mongoose = require('mongoose');
const dbURI = 'mongodb://198.211.103.131/pokemons';

mongoose.connect(dbURI);

mongoose.connection.on('connected', () => {
    console.log('Mongoose default connection connected to ' + dbURI);
});

mongoose.connection.on('error', (err) => {
    console.log('Mongoose default error: ' + err);
});

mongoose.connection.on('disconnected', () => {
    console.log('Mongoose default connection disconnected');
});

mongoose.connection.on('open', () => {
    console.log('Mongoose default connection is open');
});

process.on('SIGINT', () => {
    mongoose.connection.close(() => {
        console.log('Mongoose default connection disconnected through app termination');
        process.exit(0);
    });
});