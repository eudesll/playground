/**
 * URI
 * Problem Id : 1075
 * Problem Name: Resto 2
 */

#include <iostream>
using namespace std;

int main () {

	int n;

	cin >> n;
	for (int i = 1; i <= 10000; i++) {
		if (i % n == 2) {
			cout << i << endl;
		}
	}

	return 0;
}