# MongoDB - Aula 03 - Exercício

### Selecionando a base

```
> use be-mean-pokemons
switched to db be-mean-pokemons
```

### Listagem de todos os Pokemons com a altura menor que 0.5

```
> db.pokemons.find({'height': {$lt:'0.5'}})
{
  "_id": ObjectId("564e586a9b323f85215dc0c5"),
  "name": "Pikachu",
  "description": "Rato elétrico bem fofinho",
  "type": "eletric",
  "attack": "55",
  "height": "0.4"
}
Fetched 1 record(s) in 2ms
```

### Listagem de todos os Pokemons com a altura maior ou igual que 0.5

```
> var query = {'height': {$gte:'0.5'}}
> db.pokemons.find(query)
{
	"_id": ObjectId("56509bd3f02cf38e5e3313ab"),
	"name": "Squirtle",
	"description": "Ejeta água que passarinho não bebe",
	"type": "água",
	"attack": "48",
	"height": "0.5"
}
{
	"_id": ObjectId("56509c38f02cf38e5e3313ac"),
	"name": "Squirtle",
	"description": "Ejeta água que passarinho não bebe",
	"type": "água",
	"attack": "48",
	"height": "0.5"
}
{
	"_id": ObjectId("56509c77f02cf38e5e3313ad"),
	"name": "Meowth",
	"description": "Este pokemon ama moedas brilhantes que brilham com a luz",
	"type": "normal",
	"attack": "45",
	"height": "4",
	"defense": "35"
}
{
	"_id": ObjectId("56509c89f02cf38e5e3313ae"),
	"name": "Nidoran",
	"description": "Este pokemon possue farpas que segregam um potente veneno",
	"type": "venenoso",
	"attack": "47",
	"height": "4",
	"defense": "52"
}
{
	"_id": ObjectId("56509c97f02cf38e5e3313af"),
	"name": "Jigglypuff",
	"description": "Este pokemon usa suas habilidades de cantar precisamente no 	comprimento da onda fazendo com que os seus inimigos caiam no sono",
	"type": "fada",
	"attack": "45",
	"height": "5",
	"defense": "20"
}
{
	"_id": ObjectId("56509cb7f02cf38e5e3313b0"),
	"name": "Psyduck",
	"description": "Este pokemon possui um poder misterioso",
	"type": "água",
	"attack": "52",
	"height": "8",
	"defense": "48"
}
{
	"_id": ObjectId("56509cdcf02cf38e5e3313b1"),
	"name": "Pidgey",
	"description": "Pidgey tem um sentido extremamente agressivos de direção.",
	"type": "Vôo",
	"attack": "45",
	"height": "3",
	"defense": "40"
}
{
	"_id": ObjectId("56509ce4f02cf38e5e3313b2"),
	"name": "Growlithe",
	"description": "Este pokemon usa o seu sentido olfativo avançado para determinar as emoções de outros seres vivos",
	"type": "fogo",
	"attack": "70",
	"height": "7",
	"defense": "45"
}
Fetched 8 record(s) in 4ms
```

### Listagem de todos os Pokemons com a altura menor ou igual que 0.5 E do tipo grama

```
> var query = { $and:[{height: {$lte: "0.5"}}, {type: "grama"}]}
> db.pokemons.find(query)
{
	"_id": ObjectId("56509b16f02cf38e5e3313aa"),
	"name": "Bulbassauro",
	"description": "Chicote de trepadeira",
	"type": "grama",
	"attack": "49",
	"height": "0.4"
}
Fetched 1 record(s) in 1ms
```

### Listagem de todos os Pokemons com o nome Pikachu ou com attack menor ou igual que 0.5

```
> var query = {$or:[{name:'Pikachu'},{attack:{$lte: "0.5"}}]}
> db.pokemons.find(query)
{
	"_id": ObjectId("564e586a9b323f85215dc0c5"),
	"name": "Pikachu",
	"description": "Rato elétrico bem fofinho",
	"type": "eletric",
	"attack": "55",
	"height": "0.4"
}
Fetched 1 record(s) in 1ms
```

### Listagem de todos os Pokemons com o attack maior ou igual que 48 E com height menor ou igual que 0.5

```
> var query = {$and:[{attack:{$gte:"48"}},{height:{$lte:"0.5"}}]}
> db.pokemons.find(query)
{
	"_id": ObjectId("564e586a9b323f85215dc0c5"),
	"name": "Pikachu",
	"description": "Rato elétrico bem fofinho",
	"type": "eletric",
	"attack": "55",
	"height": "0.4"
}
{
	"_id": ObjectId("56509bd3f02cf38e5e3313ab"),
	"name": "Squirtle",
	"description": "Ejeta água que passarinho não bebe",
	"type": "água",
	"attack": "48",
	"height": "0.5"
}
{
	"_id": ObjectId("56509c38f02cf38e5e3313ac"),
	"name": "Squirtle",
	"description": "Ejeta água que passarinho não bebe",
	"type": "água",
	"attack": "48",
	"height": "0.5"
}
Fetched 3 record(s) in 1ms
```