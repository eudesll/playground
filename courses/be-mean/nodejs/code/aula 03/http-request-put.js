'use strict';

const http = require('http');
const querystring = require('querystring');
const postData = querystring.stringify({
	name: 'eudesll'
});
const options = {
	host: 'webschool-io.herokuapp.com',
	method: 'PUT',
	path: '/api/pokemons/56e8db97558f4f110077e72b',
	headers: {
		'Content-Type': 'application/x-www-form-urlencoded',
		'Content-Length': postData.length
	}
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
req.write(postData);
req.end();