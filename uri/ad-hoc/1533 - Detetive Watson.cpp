/**
 * URI
 * Problem Id : 1533
 * Problem Name: Detetive Watson
 */

#include <iostream>
using namespace std;

int main () {

	int n, num;

	while (cin >> n && n) {
		int bV = 0, v = 0, bVI = 0, vI = 0;

		for (int i = 1; i <= n; i++) {
			cin >> num;

			if (num > bV) {
				v = bV;
				vI = bVI;

				bV = num;
				bVI = i;
			} else if (num < bV && num > v) {
				v = num;
				vI = i;
			}
		}

		cout << vI << endl;
	}

	return 0;
}