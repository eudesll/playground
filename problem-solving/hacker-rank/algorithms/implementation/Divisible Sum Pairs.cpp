/* 
   HackerRank
   Problem Name: divisible-sum-pairs

   https://www.hackerrank.com/challenges/divisible-sum-pairs/forum/comments/264595
*/

#include <bits/stdc++.h>

using namespace std;


int divisibleSumPairs(int n, int k, vector<int> ar) {
    int qtt = 0;
    map<int,int> bucket;
    
    for (auto& it : ar) {
        int modValue = it % k;
        qtt += bucket[(k - modValue) % k];
        bucket[modValue]++;
    }
    
    return qtt;
}