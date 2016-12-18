function sumMul(n,m){
    if (m < n || m == 0) {
        return "INVALID";
    }
    
    var sum = 0;
    
    for (i = 1; i < m; i++) {
        if (i % n == 0) {
            sum += i;
        }
    }
    
    return sum;
}