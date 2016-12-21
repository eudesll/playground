/**
 * URI
 * Problem Id : 1769
 * Problem Name: CPF 1
 */

#include <iostream>
using namespace std;

int main () {

	int b1, b2, r1, r2, num, c;
	string cpf;

	while (cin >> cpf) {

		c = b1 = b2 = 0;
		for (int i = 0; i < 14; i++) {

			if (i != 3 && i != 7 && i < 11) {
				num = cpf[i] - '0';
				b1 += num * (c + 1);
				b2 += num * (9 - c++);
			}
		}

		r1 = b1 % 11 == 10 ? 0 : b1 % 11;
		r2 = b2 % 11 == 10 ? 0 : b2 % 11;
		b1 = cpf[12] - '0';
		b2 = cpf[13] - '0';

		if (r1 == b1 && r2 == b2) {
			cout << "CPF valido" << endl;
		} else {
			cout << "CPF invalido" << endl;
		}

	}

	return 0;
}