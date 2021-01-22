/* 
   HackerRank
   Problem Name: kangaroo
*/

#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    double intpart;
    if ((x1 < x2 && v1 <= v2) || (x1 > x2 && v1 >= v2) 
        || (modf((((x2-x1)*1.0)/((v1-v2)*1.0)), &intpart) != 0)) return "NO";
    
    return "YES";
}