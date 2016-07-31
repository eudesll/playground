/**
 * URI
 * Problem Id : 2168
 * Problem Name: Crepúsculo em Portland
 */

#include <iostream>
using namespace std;

int main () {

	int n, m[101][101], q;

	cin >> n;

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			cin >> m[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			q = m[i][j] + m[i][j + 1] + m[i + 1][j] + m[i + 1][j + 1];

			if (q >= 2) {
				cout << "S";
			} else {
				cout << "U";
			}
		}

		cout << endl;
	}

	return 0;
}