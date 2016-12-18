/**
 * URI
 * Problem Id : 2158
 * Problem Name: Ajudando o Tio Cláudio
 */

#include <iostream>
using namespace std;

int main () {

	long long c = 1, fp, fh, v, a;

	// V - A + F = 2
	while (cin >> fp >> fh) {

		a = (fp * 5 + fh * 6) / 2;
		v = 2 + a - fp - fh;

		cout << "Molecula #" << c++ << ".:." << endl;
		cout << "Possui " << v << " atomos e " << a << " ligacoes" << endl << endl;
	}

	return 0;
}