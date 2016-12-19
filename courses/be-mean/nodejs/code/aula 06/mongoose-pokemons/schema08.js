const mongoose = require('mongoose');
const Schema = mongoose.Schema;

const _schema = {
    pokemons: [String]
}

const pokemonSchema = new Schema(_schema);

const data = {
    pokemons: ['Pikachu', 'Squirtle']
}

var Model = mongoose.model('mypokemons', pokemonSchema);
var poke = new Model(data);
poke.save((err, data) => {
    if (err) {
        return console.log('ERRO: ', err);
    }

    console.log('Inseriu: ', data);
});

module.exports = pokemonSchema;