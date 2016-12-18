/**
 * URI
 * Problem Id : 1827
 * Problem Name: Matriz Quadrada IV
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int n;

	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == n / 2 && j == n / 2) {
					cout << 4;
				} else if (i >= n / 3 && i <= n - floor(n / 3) - 1 && j >= n / 3 && j <= n - floor(n / 3) - 1) {
					cout << 1;
				} else if (i == j) {
					cout << 2;
				} else if (i == n - j - 1) {
					cout << 3;
				} else {
					cout << 0;
				}
			}

			cout << endl;
		}

		cout << endl;
	}

	return 0;
}