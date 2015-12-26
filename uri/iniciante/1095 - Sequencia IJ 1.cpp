/* 
   URI
   Problem Id : 1095
   Problem Name: Sequencia IJ 1
*/

#include <iostream>
using namespace std;

int main () {

	int x = 1;

	for (int i = 60; i >= 0; i -= 5) {
		cout << "I=" << x << " J=" << i << endl;
		x += 3;
	}

	return 0;
}