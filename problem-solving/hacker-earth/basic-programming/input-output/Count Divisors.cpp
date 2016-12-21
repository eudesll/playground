/* 
   HackerEarth
   Problem Name: count-divisors
*/

#include <iostream>
using namespace std;

int main()
{
    int qt = 0, l, r, k;
    
    cin >> l >> r >> k;
    
    for (int i = l; i <= r; i++) {
    	if (i % k == 0) {
    		qt++;
    	}
    }
    
    cout << qt << endl;
    
    return 0;
}
