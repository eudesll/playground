function grabDoll(dolls){
    var bag=[];
    
    for (i in dolls) {
        if (dolls[i] != 'Hello Kitty' && dolls[i] != 'Barbie doll') {
            continue;
        }
        
        bag.push(dolls[i]);
        
        if (bag.length == 3) {
            break;
        }
    }
    
    return bag;
}