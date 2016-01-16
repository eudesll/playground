/**
 * URI
 * Problem Id : 1836
 * Problem Name: Pokémon!
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int t, lvl, bs, iv, ev, cont = 1;
	string pokemon, b[] = {"HP", "AT", "DF", "SP"};

	cin >> t;
	while (t--) {
		cin >> pokemon >> lvl;

		cout << "Caso #" << cont++ << ": " << pokemon << " nivel " << lvl << endl;
		for (int i = 0; i < 4; i++) {
			int calc;
			cin >> bs >> iv >> ev;

			if (i == 0) {
				calc = ((iv + bs + (sqrt(ev) / 8) + 50) * lvl) / 50 + 10;
			} else {
				calc = ((iv + bs + (sqrt(ev) / 8)) * lvl) / 50 + 5;
			}

			cout << b[i] << ": " << calc << endl;
		}
	}

	return 0;
}