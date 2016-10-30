/**
 * URI
 * Problem Id : 2253
 * Problem Name: Validador de Senhas
 */

#include <iostream>
#include <cctype>
using namespace std;

int main () {

	string pass;
	bool upper, lower, num, size, notIrregular;

	while (getline(cin, pass)) {
		int pSize = pass.size();
		upper = lower = num = size = notIrregular = false;

		if (pSize >= 6 && pSize <= 32) {
			size = true;
		}

		for (int i = 0; i < pSize; i++) {
			char c = pass[i];
			
			if (isupper(c)) {
				upper = true;
			}

			if (islower(c)) {
				lower = true;
			}

			if (isdigit(c)) {
				num = true;
			}

			if (ispunct(c) || isspace(c)) {
				notIrregular = true;
				break;
			}
		}

		if (upper && lower && num && size && !notIrregular) {
			cout << "Senha valida." << endl;
		} else {
			cout << "Senha invalida." << endl;
		}
	}

	return 0;
}