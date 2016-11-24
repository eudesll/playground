/**
 * URI
 * Problem Id : 1607
 * Problem Name: Avance as Letras
 */

#include <iostream>
using namespace std;

int main () {

	int n;
	string a, b;

	cin >> n;
	while (n--) {
		cin >> a >> b;
		int size = a.size(), alt = 0;

		for (int i = 0; i < size; i++) {
			int aC = a[i] - 96;
			int bC = b[i] - 96;
			int aux = bC - aC;

			if (aux < 0) {
				aux += 26;
			}

			alt += aux;
		}

		cout << alt << endl;
	}

	return 0;
}