/**
 * URI
 * Problem Id : 1901
 * Problem Name: Borboletas
 */

#include <iostream>
#include <set>
using namespace std;

int main () {

	set<int> uB;
	int m[200][200], n, x, y, q;

	while (cin >> n) {

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> m[i][j];
			}
		}

		q = 0;
		for (int i = 0; i < n * 2; i++) {
			cin >> x >> y;

			if (uB.find(m[--x][--y]) == uB.end()) {
				uB.insert(m[x][y]);
				q++;
			}
		}

		cout << q << endl;
		uB.clear();

	}

	return 0;
}