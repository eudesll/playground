/**
 * URI
 * Problem Id : 1437
 * Problem Name: Esquerda, Volver!
 */

#include <iostream>
using namespace std;

int main () {

	string dirs;
	char directions[] = {'N', 'L', 'S', 'O'};
	int qt, pos;

	while (cin >> qt && qt) {

		cin >> dirs;
		pos = 0;

		for (int i = 0; i < dirs.length(); i++) {
			if (dirs[i] == 'D') {
				pos++;
			} else {
				pos--;
			}

			if (pos == 4) {
				pos = 0;
			}

			if (pos == -1) {
				pos = 3;
			}
		}

		cout << directions[pos] << endl;
	}

	return 0;
}