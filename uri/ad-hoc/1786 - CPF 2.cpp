/**
 * URI
 * Problem Id : 1786
 * Problem Name: CPF 2
 */

#include <iostream>
using namespace std;

int main () {

	string cpf;

	while (cin >> cpf) {
		int fC = 1, lC = 9, f = 0, l = 0;

		for (int i = 0; i < cpf.size(); i++) {
			int n = cpf[i] - '0';

			f += fC++ * n;
			l += lC-- * n;

			cout << n;

			if (i == 2 || i == 5) {
				cout << ".";
			} else if (i == 8) {
				cout << "-";
			}
		}

		f = f % 11 == 10 ? 0 : f % 11;
		l = l % 11 == 10 ? 0 : l % 11;

		cout << f << l << endl;
	}

	return 0;
}