/**
 * URI
 * Problem Id : 1099
 * Problem Name: Soma de Ímpares Consecutivos II
 */

#include <iostream>
using namespace std;

int main () {

	int n, x, y, sum;

	cin >> n;
	while (n--) {
		cin >> x >> y;

		sum = 0;
		for (int i = (x < y ? x : y) + 1; i < (x > y ? x : y); i++) {
			sum += i % 2 != 0 ? i : 0;
		}

		cout << sum << endl;
	}

	return 0;
}