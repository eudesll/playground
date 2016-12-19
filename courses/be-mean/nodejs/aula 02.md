# Node.js - Aula 02 - Exercício

### Quais são os 4 verbos que utilizamos para o CRUD?
* <b>C</b>reate: &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`POST`
* <b>R</b>etrieve/ <b>R</b>ead: `GET`
* <b>U</b>pdate: &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`PUT`
* <b>D</b>elete: &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`DELETE`

### Para que foram inventados os Status Codes? Dê exemplo de 1 código por grupo e a imagem do [Cat Status Code](https://http.cat/).
Os `Status Codes` foram inventados para padronizar os tipos de retorno do servidor, facilitando o entendimento deles.

* __1XX__ - Information

!['101'](https://http.cat/101 "101 - Switching Protocols")

* __2XX__ - Successful

!['206'](https://http.cat/206 "206 - Partial Content")

* __3XX__ - Redirection

!['307'](https://http.cat/307 "307 - Temporary Redirect")

* __4XX__ - Client Error

!['409'](https://http.cat/409 "409 - Conflict")

* __5XX__ - Server Error

!['509'](https://http.cat/509 "509 - Bandwidth Limit Exceeded")

### Explique o que é cada parâmetro da função recebida no `createServer`.
__Request__: &nbsp;&nbsp;&nbsp;Contém os parâmetros da requisição enviada pelo usuário.
__Response__: Contém métodos para escrever a resposta do usuário.

### O que é e para que serve a Querystring?
__O que é__: Conjunto de chave/valor enviados na url da requisição.
__Para o que serve__: Passar parâmetros para o servidor pelo método `GET`.

### Escreva no código do `server.js` uma forma de entregar um JSON de sucesso em 4 rotas diferentes:

``` js
'use strict';

var date = (new Date()).toJSON();

const http = require('http')
  , SUCCESS = {
      version: 1.0
    , code: 200
    , name: 'Be MEAN'
    , created_at: date
    }
  , ERROR = {
      message: "Method Not Allowed"
    , code: 405
    }
  ;

http.createServer(function(req, res){
    let url = req.url
      , method = req.method
      ;

    switch(url){
        case "/api/pokemons/create":
            if(method === "POST"){
                res.writeHead(200, { 'Content-Type': 'application/json; charset=utf-8' });
                res.write(JSON.stringify(SUCCESS));
            }else{
                res.writeHead(405, { 'Content-Type': 'application/json; charset=utf-8' });
                res.write(JSON.stringify(ERROR));
            }
            break;

        case "/api/pokemons/read":
            if(method === "GET"){
                res.writeHead(200, { 'Content-Type': 'application/json; charset=utf-8' });
                res.write(JSON.stringify(SUCCESS));
            }else{
                res.writeHead(405, { 'Content-Type': 'application/json; charset=utf-8' });
                res.write(JSON.stringify(ERROR));
            }
            break;

        case "/api/pokemons/update":
            if(method === "PUT"){
                res.writeHead(200, { 'Content-Type': 'application/json; charset=utf-8' });
                res.write(JSON.stringify(SUCCESS));
            }else{
                res.writeHead(405, { 'Content-Type': 'application/json; charset=utf-8' });
                res.write(JSON.stringify(ERROR));
            }
            break;

        case "/api/pokemons/delete":
            if(method === "DELETE"){
                res.writeHead(200, { 'Content-Type': 'application/json; charset=utf-8' });
                res.write(JSON.stringify(SUCCESS));
            }else{
                res.writeHead(405, { 'Content-Type': 'application/json; charset=utf-8' });
                res.write(JSON.stringify(ERROR));
            }
            break;

        default:
            res.writeHead(404, { 'Content-Type': 'application/json; charset=utf-8' });
            ERROR.message = "Not Found";
            ERROR.code = 404
            res.write(JSON.stringify(ERROR));
            break;
    }

    res.end();
})
 .listen(3000, function(){
    console.log('Servidor rodando em localhost:3000');
 });
```