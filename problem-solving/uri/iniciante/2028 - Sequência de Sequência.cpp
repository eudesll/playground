/**
 * URI
 * Problem Id : 2028
 * Problem Name: Sequência de Sequência
 */

#include <iostream>
using namespace std;

int main () {

	int n, index = 1;

	while (cin >> n) {

		int q = (((n * (1 + n)) / 2) + 1);
		cout << "Caso " << index++ << ": " << q << ((q > 1) ? " numeros" : " numero") << endl;

		cout << 0;
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j < i; j++) {
				cout << " " << i;
			}
		}
		cout << endl << endl;
	}

	return 0;
}