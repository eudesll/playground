/**
 * URI
 * Problem Id : 1091
 * Problem Name: Divisão da Nlogônia
 */

#include <iostream>
using namespace std;

int main () {

	int k, n, m, x, y;

	while (cin >> k && k != 0) {
		cin >> n >> m;

		while (k--) {
			cin >> x >> y;

			if (x == n || y == m) {
				cout << "divisa" << endl;
			} else if (x > n && y > m) {
				cout << "NE" << endl;
			} else if (x < n && y > m) {
				cout << "NO" << endl;
			} else if (x < n && y < m) {
				cout << "SO" << endl;
			} else {
				cout << "SE" << endl;
			}
		}
	}

	return 0;
}