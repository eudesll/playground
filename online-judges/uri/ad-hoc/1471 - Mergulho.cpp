/**
 * URI
 * Problem Id : 1471
 * Problem Name: Mergulho
 */

#include <iostream>
#include <map>
using namespace std;

int main () {

	int n, r, id;

	while (cin >> n >> r) {
		map<int, int> returned;
		int aux = r;

		while (aux--) {
			cin >> id;
			returned[id] = 1;
		}

		if (returned.size() == n) {
			cout << "*";
		} else {
			for (int i = 1; i <= n; i++) {
				if (returned[i] == 0) {
					cout << i << " ";
				}
			}
		}

		cout << endl;
	}

	return 0;
}