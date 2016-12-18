/**
 * URI
 * Problem Id : 1115
 * Problem Name: Quadrante
 */

#include <iostream>
using namespace std;

int main () {

	int x, y;

	cin >> x >> y;
	while (x != 0 && y != 0) {
		if (x > 0) {
			if (y > 0) {
				cout << "primeiro" << endl;
			} else {
				cout << "quarto" << endl;
			}
		} else {
			if (y > 0) {
				cout << "segundo" << endl;
			} else {
				cout << "terceiro" << endl;
			}
		}

		cin >> x >> y;
	}

	return 0;
}