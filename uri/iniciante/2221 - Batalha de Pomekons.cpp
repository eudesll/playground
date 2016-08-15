/**
 * URI
 * Problem Id : 2221
 * Problem Name: Batalha de Pomekons
 */

#include <iostream>
using namespace std;

int main () {

	int t, ai, di, li, g, d, b;

	cin >> t;

	while (t--) {

		cin >> b >> ai >> di >> li;

		d = (ai + di) / 2;
		if (li % 2 == 0) {
			d += b;
		}

		cin >> ai >> di >> li;

		g = (ai + di) / 2;
		if (li % 2 == 0) {
			g += b;
		}

		if (g > d) {
			cout << "Guarte" << endl;
		} else if (d > g) {
			cout << "Dabriel" << endl;
		} else {
			cout << "Empate" << endl;
		}
	}

	return 0;
}