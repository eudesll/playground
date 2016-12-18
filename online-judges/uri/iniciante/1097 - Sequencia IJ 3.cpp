/**
 * URI
 * Problem Id : 1097
 * Problem Name: Sequencia IJ 3
 */

#include <iostream>
using namespace std;

int main () {

	bool change = false;

	for (int i = 1; i < 10; i += 2) {
		for (int j = 6 + i; j > 3 + i; j--) {
			cout << "I=" << i << " J=" << j << endl;
		}

		change = !change;
	}

	return 0;
}