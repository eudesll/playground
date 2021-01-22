/* 
   HackerRank
   Problem Name: apple-and-orange
*/

#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int tA = 0;
    int tO = 0;
    
    for (auto& it : apples) { 
        int pos = a + it;
        tA += (pos >= s && pos <= t) ? 1 : 0; 
    }
    
    for (auto& it : oranges) { 
        int pos = b + it;
        tO += (pos >= s && pos <= t) ? 1 : 0; 
    }
    
    cout << tA << endl << tO << endl;
}