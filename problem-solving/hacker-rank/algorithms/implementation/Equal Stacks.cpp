/* 
   HackerRank
   Problem Name: equal-stacks

   https://www.hackerrank.com/challenges/divisible-sum-pairs/forum/comments/264595
*/

#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<int>> vectors;

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    map<int, int> m;
    vectors vs{ h1, h2, h3 };
    int res = 0;
    
    for (auto& v : vs) {
        int s = v.size();
        for (int i = s - 1; i >= 0; i--) {
            if (i + 1 < s) v[i] = v[i] + v[i + 1];
            m[v[i]] += 1;
            
            if (m[v[i]] == 3 && v[i] > res) {
                res = v[i];
            }
        }
    }
    
    return res;
}
