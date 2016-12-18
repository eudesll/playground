/**
 * URI
 * Problem Id : 1159
 * Problem Name: Soma de Pares Consecutivos
 */

#include <iostream>
using namespace std;

int main () {

	int x, cont, sum;

	cin >> x;
	while (x != 0) {
		cont = sum = 0;

		for (int i = x; cont < 5; i++) {
			if (i % 2 == 0) {
				cont++;
				sum += i;
			}
		}

		cout << sum << endl;

		cin >> x;
	}

	return 0;
}