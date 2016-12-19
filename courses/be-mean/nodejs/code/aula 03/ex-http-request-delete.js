'use strict';

const http = require('http');

const options = {
	host: 'webschool-io.herokuapp.com',
	method: 'DELETE',
	path: '/api/pokemons/56e85a575341971100ca8e83',
};

function callback(res) {
	console.log('STATUS:' + res.statusCode);
	console.log('HEADERS:' + JSON.stringify(res.headers));

	let data = '';

	res.setEncoding('utf8');
	res.on('data', (chunk) => {
		data += chunk;
	});

	res.on('end', () => {
		console.log('Dados Finalizados:', data);
	});
}

const req = http.request(options, callback);

req.on('error', (e) => {
	console.log('ERROR:' + e.message);
});
req.end();