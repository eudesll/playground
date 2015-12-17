/* 
   URI
   Problem Id : 1198
   Problem Name: O Bravo Guerreiro Hashmat
*/

#include <iostream>
#include <cmath>
#include <stdint.h>
using namespace std;

int main () {

	int64_t a, b;

	while (cin >> a >> b) {
		cout << abs(a - b) << endl;
	}
	
	return 0;
}