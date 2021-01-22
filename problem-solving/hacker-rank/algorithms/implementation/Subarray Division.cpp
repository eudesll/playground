/* 
   HackerRank
   Problem Name: the-birthday-bar
*/

#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m) {
    int qtt = 0, size = s.size();
    
    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = i; j < i + m; j ++) {
            sum += s[j];
        }
        
        qtt += sum == d ? 1 : 0;
    }
    
    return qtt;
}