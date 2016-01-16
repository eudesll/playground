/**
 * URI
 * Problem Id : 1250
 * Problem Name: KiloMan
 */

#include <iostream>
using namespace std;

int main () {

	int n, q, s[50], cont;
	string p;

	cin >> n;
	while (n--) {
		cont = 0;

		cin >> q;
		for (int i = 0; i < q; i++) {
			cin >> s[i];
		}

		cin >> p;

		for (int i = 0; i < q; i++) {
			if ((p[i] == 'J' && s[i] > 2) || (p[i]) == 'S' && s[i] <= 2) {
				cont++;
			}
		}

		cout << cont << endl;
	}

	return 0;
}