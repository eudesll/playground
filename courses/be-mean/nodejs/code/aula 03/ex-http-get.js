'use strict';

const http = require('http');
var url = require('url');

http.get({
	hostname: 'webschool-io.herokuapp.com',
	path: '/api/pokemons',
	port: 80,
	agente: false
}, (response) => {
	let body = '<html><body>';

	console.log('STATUS:' + response.statusCode);
	console.log('HEADERS:' + JSON.stringify(response.headers));

	response.on('data', function(data) {
		body += '<p>' + data + '</p>';
	});

	response.on('end', function() {
		body += '</body></html>'
		console.log('Resposta:', body);
	});
});