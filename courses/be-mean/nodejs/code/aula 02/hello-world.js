var http = require('http');

http.createServer(function(request, response) {
	response.writeHead(200, {'Content-Type': 'text/plain'});
	response.write('Be MEAN');
	response.end();
}).listen(3000, function() {
	console.log('Servidor rodando \'hello-world\' em localhost:3000');
});

/* MESMA COISA
var server = http.createServer(function(request, response) {
	response.writeHead(200, {'Content-Type': 'text/plain'});
	response.write('Be MEAN');
	response.end();
})

server.listen(3000, function() {
	console.log('Servidor rodando \'hello-world\' em localhost:3000');
});
*/