# Node.js - Aula 04 - Exercício

### Criar uma função com uma entrada para nome e imprimir esta entrada em uma outra função, como continuação da execução da mesma.
``` js
function sayMyName(name, callback){
	if(typeof name !== 'string'){
		var err = new Error('O primeiro parâmetro precisa ser uma \'String\'');
		return callback(err, null);
	}

	return callback(null, name);
}

sayMyName('Douglas Hennrich', function(err, result){
	if(err){
		console.log(err);
		return;
	}

	console.log(result);
});
```

### Criar uma função que calcula a soma de dois valores e passe o resultado em uma outra função e imprima-o, de acordo com o padrão apresentado em aula.
``` js
function sum(A, B, callback){
  if( typeof A !== 'number' || typeof B !== 'number'){
    var err = new Error('Os parâmetros precisam ser \'Number\'');
    return callback(err, null);
  }

  var result = A + B;
  return callback(null, result);
}

sum(2, 4, function(err, result){
  if(err){
    console.log(err);
    return;
  }

  console.log(result);
});
```

### Criar uma função que calcula a média de dois valores e imprima essa média em outra função, como continuação da execução da mesma.
``` js
function mean(A, B, callback){
  if( typeof A !== 'number' || typeof B !== 'number'){
    var err = new Error('Os parâmetros precisam ser \'Number\'');
    return callback(err, null);
  }

  var result = (A + B) / 2;
  return callback(null, result);
}

mean(2, 6, function(err, result){
  if(err){
    console.log(err);
    return;
  }

  console.log(result);
});
```

### Explicar a definição de continuação de uma função.
É quando passamos uma `function A` para uma `function B`, que será executada e o resultado gerado será utilizado na execução da `function A`.