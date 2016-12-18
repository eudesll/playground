function none(arr, fun){
    for (i in arr) {
        if (fun(arr[i])) {
            return false;
        }
    }
    
    return true;
}

// BEST
// function none(arr, fun){
//   return !arr.some(fun);
// }