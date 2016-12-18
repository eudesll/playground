/**
 * URI
 * Problem Id : 1585
 * Problem Name: Fazendo Pandorgas
 */

#include <iostream>
using namespace std;

int main () {

	int t, x, y;

	cin >> t;
	while (t--) {
		cin >> x >> y;

		cout << (x * y / 2) << " cm2" << endl;
	}

	return 0;
}