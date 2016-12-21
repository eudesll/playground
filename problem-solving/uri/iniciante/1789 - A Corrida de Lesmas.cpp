/**
 * URI
 * Problem Id : 1789
 * Problem Name: A Corrida de Lesmas
 */

#include <iostream>
using namespace std;

int main () {

	int l, v, vM = 0, lvl;

	while (cin >> l) {
		while (l--) {
			cin >> v;

			if (v > vM) {
				vM = v;

				if (vM < 10) {
					lvl = 1;
				} else if (vM < 20) {
					lvl = 2;
				} else {
					lvl = 3;
				}
			}
		}

		vM = 0;
		cout << lvl << endl;
	}

	return 0;
}