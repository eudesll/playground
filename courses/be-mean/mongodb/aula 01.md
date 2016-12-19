# MongoDB - Aula 01 - Exercício

### Importando os Restaurantes

```
> mongoimport --db be-mean --collection restaurantes --drop --file restaurantes.json
2016-01-28T14:46:01.148-0200	connected to: localhost
2016-01-28T14:46:01.148-0200	dropping: be-mean.restaurantes
2016-01-28T14:46:03.148-0200    imported 25359 documents
```

### Selecionando o Banco

```
> use be-mean
switched to db be-mean
```

### Contando os Restaurantes

```
> db.restaurantes.find({}).count()
25359
```