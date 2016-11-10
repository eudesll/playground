/* 
   HackerEarth
   Problem Name: print-hackerearth
*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, qt;
    string s;
    map<char, int> he;
    
    cin >> n >> s;
    for (int i = 0; i < s.size(); i++) {
    	he[s[i]] = he[s[i]] + 1;
    }
    
    qt = he['h'] / 2;
    qt = he['a'] / 2 < qt ? he['a'] / 2 : qt;
    qt = he['c'] < qt ? he['c'] : qt;
    qt = he['k'] < qt ? he['k'] : qt;
    qt = he['e'] / 2 < qt ? he['e'] / 2 : qt;
    qt = he['r'] / 2 < qt ? he['r'] / 2 : qt;
    qt = he['t'] < qt ? he['t'] : qt;
    
    cout << qt << endl;
    
    return 0;
}
