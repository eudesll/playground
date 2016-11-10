/* 
   HackerEarth
   Problem Name: the-great-kian
*/

#include <iostream>
using namespace std;

int main()
{
    long long n, num, a, b, c, aC = 0, bC = 1, cC = 2;
    a = b = c = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
    	cin >> num;
    	
    	if (i == aC) {
    		a += num;
    		aC += 3;
    	}
    	
    	if (i == bC) {
    		b += num;
    		bC += 3;
    	}
    	
    	if (i == cC) {
    		c += num;
    		cC += 3;
    	}
    }
    
    cout << a << " " << b << " " << c << endl;
    
    return 0;
}
