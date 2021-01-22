/* 
   HackerRank
   Problem Name: between-two-sets
*/

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
}

int getTotalX(vector<int> a, vector<int> b) {
    int lcm = 1;
    int gcdV = -1;
    int qtt = 0;
    
    for (auto& it : a) {
        lcm = (((it * lcm)) / (gcd(it, lcm))); 
    }
    
    for (auto& it : b) {
        if (gcdV == -1) {
            gcdV = it;
            continue;
        }
        gcdV = gcd(it, gcdV); 
    }
    
    for (int i = 1; lcm * i <= gcdV; i++) {
        if (gcdV % (lcm * i) == 0) {
            qtt++;
        }
    }
    
    return qtt;
}