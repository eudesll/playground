/**
 *  function (err, result)
 */

function sum(num1, num2, callback) {
    if (typeof num1 == "number" && typeof num2 == "number") {
        var result = num1 + num2;
        return callback(null, result);
    } else {
        var err = new Error("Passe os números, por favor :)");
        return callback(err, null);
    }
}

sum(4, 4, function(err, result) {
    if (err) {
        console.log(err);
    } else {
        console.log(result);
    }
});

sum("4", "4", function(err, result) {
    if (err) {
        console.log(err);
    } else {
        console.log(result);
    }
});