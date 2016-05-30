/**
 * URI
 * Problem Id : 2060
 * Problem Name: Desafio de Bino
 */

#include <iostream>
using namespace std;

int main () {

	int n, l;

	while (cin >> n) {
		int m[4] = {0, 0, 0, 0};

		while (n--) {
			cin >> l;

			if (l % 2 == 0) {
				m[0]++;
			}

			if (l % 3 == 0) {
				m[1]++;
			}

			if (l % 4 == 0) {
				m[2]++;
			}

			if (l % 5 == 0) {
				m[3]++;
			}
		}

		cout << m[0] << " Multiplo(s) de 2" << endl;
		cout << m[1] << " Multiplo(s) de 3" << endl;
		cout << m[2] << " Multiplo(s) de 4" << endl;
		cout << m[3] << " Multiplo(s) de 5" << endl;
	}

	return 0;
}