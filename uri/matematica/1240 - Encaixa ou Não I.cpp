/**
 * URI
 * Problem Id : 1240
 * Problem Name: Encaixa ou Não I
 */

#include <iostream>
using namespace std;

int main () {

	int n, f;
	string a, b;

	cin >> n;
	while (n--) {
		f = 1;
		cin >> a >> b;

		if (a.length() >= b.length()) {
			for (int i = 0; i < b.length(); i++) {
				if (a[a.length() - b.length() + i] != b[i]) {
					f = 0;
					break;
				}
			}

			if (f) {
				cout << "encaixa" << endl;
				continue;
			}
		}

		cout << "nao encaixa" << endl;
	}

	return 0;
}