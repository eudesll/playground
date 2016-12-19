# Node.js - Aula 05 - Exercício

### Instale algum gerenciador de versão do Node.js e instale a versão mais atual como padrão, enquanto escrevo é a versão 5.4.0.
`node -v > v5.8.0`

### Inicie um projeto novo para essa aula, com o npm e instale, salvando no package.json.
``` json
{
    "name": "pokemons-api",
    "version": "0.0.1",
    "description": "API para nossos Pokemons",
    "main": "index.js",
    "scripts": {
        "start": "node script.js",
        "roda": "node script.js"
    },
    "keywords": [
        "pokemons",
        "node",
        "mongodb",
        "webschool"
    ],
    "author": "Eudes",
    "license": "WTFPL",
    "dependencies": {
        "mongoose": "^4.4.10"
    },
    "devDependencies": {
        "jasmine": "^2.4.1"
    },
    "optionalDependencies": {
        "colors": "^1.1.2"
    }
}
```
* Uma dependência local: `npm install --save mongoose`
* Uma dependência local de desenvolvimento: `npm install --save--dev jasmine`
* Uma dependência local opcional: `npm install --save-optional colors`

### Crie e execute um script, via npm, que mostre uma mensagem no console com a global, que possui caminho para o diretório atual.
__script.js__
```
console.log("RODEI!");
```
__package.json__
```
"scripts": {
    "start": "node script.js",
    "roda": "node script.js"
}
```
__npm run roda__
```
npm run roda

> pokemons-api@0.0.1 roda C:\Users\eudes\Documents\Projetos\courses-problems\be-mean\nodejs\code\aula 05\pokemons-api
> node script.js

RODEI!
```

### Cite 5 globais do Node.js e pelo menos 1 exemplo de cada.
1. `__dirname` retorna o nome do diretório o qual o script está sendo rodado.
2. `setTimeout` executa uma função após determinado tempo em milisegundos.
3. `setInterval` executa a mesma função, a cada milisegundo pré-definido, até ser parado.
4. `require` usado para requirir um módulo ou script.
5. `clearInterval` para a execução de um intervalo.

### Explique como funciona e de um exemplo de `process`.
Process é uma instancia do EventEmitter e é uma variável Global do NodeJS. Como ele provem de um módulo de eventos, ele funciona "ouvindo" eventos e disparando callbacks sobre esses eventos capturados. Embora alguns eventos são de "mão única", não precisam de um callback.
```
process.exit(0);
```

### Criar um arquivo
```
var fs = require('fs');

fs.writeFile('./pokemons.txt', 'Pikachu, Bulbasauro, Squirtle, Charmander', 'utf-8', function(err){
  if(err) throw err;

  console.log('arquivo criado');
});
```

### Ler um arquivo
```
var fs = require('fs');

fs.readFile('./pokemons.txt', 'utf-8', function(err, data){
  if(err) throw err;

  console.log('Pokemons: ', data); // Pokemons:  Pikachu, Bulbasauro, Squirtle, Charmander
});
```

### Editar conteúdo desse arquivo
```
var fs = require('fs');

fs.readFile('./pokemons.txt', 'utf-8', function(err, data){
  if(err) throw err;

  console.log('Pokemons: ', data); // Pokemons:  Pikachu, Bulbasauro, Squirtle, Charmander

  fs.writeFile('./pokemons.txt', data + ', Charizard, Blastoise, Suissa', 'utf-8', function(err){
    if(err) throw err;
    console.log('Editado :D');
  });
});
```

### Deletar arquivo
```
var fs = require('fs');

fs.unlink('./pokemons.txt', function(err){
  if(err) throw err;
  console.log('arquivo deletado!');
});
```

### Renomear o arquivo
```
var fs = require('fs');

fs.rename('whereIm.js', 'editado.js', function(err){
  if(err) throw err;
  console.log('arquivo renomeado');
});
```