const mongoose = require('mongoose');
const Schema = mongoose.Schema;

const _schema = {
    name: String,
    description: String,
    type: String,
    attack: Number,
    defense: Number,
    height: Number,
    created_at: {
        type: Date,
        default: Date.now
    }
}

const pokemonSchema = new Schema(_schema);

module.exports = pokemonSchema;