/* 
   HackerRank
   Problem Name: find-digits
*/

#include <iostream>
#include <sstream>
using namespace std;

#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

int main (){
    int t;

    cin >> t;
    while (t--) {
    	int n, c = 0;
    	string num;

    	cin >> n;
    	num = SSTR(n);

    	for (int i = 0; i < num.size(); i++) {
    		int nC = num[i] - '0';
    		if (nC != 0) {
    			if (n % nC == 0) {
    				c++;
    			}
    		}
    	}

    	cout << c << endl;
    }

    return 0;
}
