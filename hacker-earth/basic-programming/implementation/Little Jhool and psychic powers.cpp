/* 
   HackerEarth
   Problem Name: psychic-powers
*/

#include <iostream>
using namespace std;

int main()
{
	int seq = 1, bad = 0;
	char last;
    string b;
    
    cin >> b;
    last = b[0];
    for (int i = 1; i < b.size(); i++) {
    	if (b[i] == last) {
    		seq++;
    		
    		if (seq == 6) {
    			bad = 1;
    		}
    	} else {
    		last = b[i];
    		seq = 1;
    	}
    }
    
	cout << (bad ? "Sorry, sorry!" : "Good luck!") << endl;
    
    return 0;
}
