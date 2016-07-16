/**
 * URI
 * Problem Id : 2143
 * Problem Name: A Volta do Radar
 */

#include <iostream>
using namespace std;

int main () {

	int t, n;

	while (cin >> t && t) {
		while (t--) {
			cin >> n;

			cout << ((n - 1) % 2 == 0 ? 2 * n - 1 : 2 * (n - 2) + 2) << endl;
		}
	}

	return 0;
}