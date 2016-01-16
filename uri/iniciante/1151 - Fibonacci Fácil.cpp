/**
 * URI
 * Problem Id : 1151
 * Problem Name: Fibonacci Fácil
 */

#include <iostream>
using namespace std;

int main () {

	int n, ant1 = 0, ant2 = 1, temp;

	cin >> n;
	for (int i = 0; i < n; i++) {

		if (i < 2) {
			cout << i;
		} else {
			cout << (ant1 + ant2);

			temp = ant2;
			ant2 = ant1 + ant2;
			ant1 = temp;
		}

		if (i < n - 1) {
			cout << " ";
		}
	}

	cout << endl;

	return 0;
}