/**
 * URI
 * Problem Id : 2140
 * Problem Name: Duas Notas
 */

#include <iostream>
using namespace std;

int main () {

	int n, m, sC;

	while (cin >> n >> m && n && m) {
		sC = m - n;

		if (100 + 50 == sC || 100 + 20 == sC || 100 + 10 == sC || 100 + 5 == sC || 100 + 2 == sC ||
			50 + 20 == sC || 50 + 10 == sC || 50 + 5 == sC || 50 + 2 == sC ||
			20 + 10 == sC || 20 + 5 == sC || 20 + 2 == sC ||
			10 + 5 == sC || 10 + 2 == sC ||
			5 + 2 == sC) {
			
			cout << "possible" << endl;
		} else {
			cout << "impossible" << endl;
		}
	}

	return 0;
}