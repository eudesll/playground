# Node.js - Aula 03 - Exercício

### Por que quando requisitamos ao nosso servidor de Query String, com o Chrome, ele executa 2 requisições, sendo a última "vazia"?
Isso ocorre pois o Chrome que realiza a segunda requisição em busca do `favicon.ico`.

### Qual a DIFERENÇA entre o GET e o POST?
__GET__: Possui uma capacidade de 1024 caracteres, é utilizado quando se quer passar poucas informações para realizar uma pesquisa ou simplismente passar informações para outra página/api através da URL. O resultado desse método é armazenado no cache do client, ou seja, fica no histórico do navegador.
__POST__: O método POST utiliza a URI ao contrário de GET, para enviar as informações ao servidor. A URI não é retornável ao cliente, o que torna esse método mais seguro, pois não expõe as informações enviadas no navegador. Esse método não possui limite como o GET para envio, quando é feita uma requisição POST uma conexão paralela é aberta e os dados são enviados por ela. Essa requisição deverá ser formatada no corpo da mensagem como uma querystring, além de enviar no headers seu formato e tamanho.

### Crie um Pokemon na nossa API com seu nome, depois modifique seu nome pelo seu User do Github.
__\_id__: 56e8db97558f4f110077e72b

### Depois faça o DELETE, criando o script para tal, colocando aqui a resposta.

``` js
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
req.write(postData);
req.end();
```

### Escolha uma API externa e crie um script para fazer um GET nela mostrando o resultado com HTML.

``` js
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
```