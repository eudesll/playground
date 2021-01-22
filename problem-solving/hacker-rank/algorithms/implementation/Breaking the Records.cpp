/* 
   HackerRank
   Problem Name: breaking-best-and-worst-records
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    int big, low;
    int bi, bl;
    bi = bl = 0;
    big = low = scores[0];
    
    for (auto& it : scores) { 
        if (it > big) {
            big = it;
            bi++;
        }
        
        if (it < low) {
            low = it;
            bl++;
        }
    }
    
    return vector<int>{ bi, bl };
}