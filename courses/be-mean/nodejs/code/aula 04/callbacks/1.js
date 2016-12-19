/**
 *  function (err, result)
 */

function sayName(name, callback) {
    if (typeof name === "string") {
        return callback(null, name);
    } else {
        var err = new Error("Opah, cara cê tem que mandar uma string parceiro, aqui o bagulho é louco");
        return callback(err, null);
    }
}

sayName("Caio Cutrim", function(err, result) {
    if (err) {
        console.log(err);
    } else {
        console.log(result);
    }
});

sayName(1, function(err, result) {
    if (err) {
        console.log(err);
    } else {
        console.log(result);
    }
});