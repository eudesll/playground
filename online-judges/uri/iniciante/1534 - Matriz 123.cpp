/**
 * URI
 * Problem Id : 1534
 * Problem Name: Matriz 123
 */

#include <iostream>
using namespace std;

int main () {

	int n, loc1, loc2;

	while (cin >> n) {

		loc1 = 0;
		loc2 = n - 1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {

				if (j == loc2) {
					cout << 2;
				} else if (j == loc1) {
					cout << 1;
				} else {
					cout << 3;
				}
			}

			loc1++;
			loc2--;
			cout << endl;
		}
	}

	return 0;
}