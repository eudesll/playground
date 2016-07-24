/**
 * URI
 * Problem Id : 2162
 * Problem Name: Picos e Vales
 */

#include <iostream>
using namespace std;

int main () {

	int n, h[101], p = 1, o = -1;

	cin >> n >> h[0];
    
    for (int i = 1; i < n; i++) {
        cin >> h[i];
        
        if (p == 1) {
	        if (h[i] == h[i - 1]) {
	        	p = 0;
	        	continue;
	        }

	        if (o == -1) {
	        	o = h[i] < h[i - 1] ? 1 : 0;
	        	continue;
	        }

	        if (h[i] < h[i - 1] && o == 1 || h[i] > h[i - 1] && o == 0) {
	        	p = 0;
	        	continue;
	        }

	        o = o ? 0 : 1;
	    }
    }

	cout << p << endl;

	return 0;
}