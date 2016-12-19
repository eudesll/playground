'use strict';

const http = require('http');
var url = require('url');

http.get({
	hostname: 'localhost',
	path: '/user?name=Suissa&teacher=true&age=31',
	port: 3000,
	agente: false
}, (response) => {
	let body = '';

	console.log('STATUS:' + response.statusCode);
	console.log('HEADERS:' + JSON.stringify(response.headers));

	response.on('data', function(data) {
		body += data;
	});

	response.on('end', function() {
		console.log('Resposta:', body);
	});
});

http.createServer(function(request, response) {

	var result = url.parse(request.url, true);

	response.writeHead(200, {'Content-Type': 'text/html'});
	response.write('<html><body>');
	response.write('<h1>Be - MEAN</h1>');
	response.write('<h2>Query String</h2>');
	response.write('<ul>');

	for (var key in result.query) {
		response.write('<li>' + key + ': ' + result.query[key] + '</li>');
	}

	response.write('</ul>');
	response.write('</body></html>');
	response.end();

}).listen(3000, function() {
	console.log('Servidor rodando \'hello-querystring\' em localhost:3000');
});