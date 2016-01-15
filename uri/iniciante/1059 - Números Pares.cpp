/**
 * URI
 * Problem Id : 1059
 * Problem Name: Números Pares
 */

#include <iostream>
using namespace std;

int main () {

	for (int i = 2; i <= 100; i++) {
		if (i % 2 == 0) {
			cout << i << endl;
		}
	}

	return 0;
}