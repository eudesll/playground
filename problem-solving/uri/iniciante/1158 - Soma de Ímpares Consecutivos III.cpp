/**
 * URI
 * Problem Id : 1158
 * Problem Name: Soma de Ímpares Consecutivos III
 */

#include <iostream>
using namespace std;

int main () {

	int n, x, y, sum;

	cin >> n;
	while (n--) {
		cin >> x >> y;
		sum = 0;

		while (y) {
			if (x % 2 != 0) {
				sum += x;
				y--;
			}

			x++;
		}

		cout << sum << endl;
	}

	return 0;
}