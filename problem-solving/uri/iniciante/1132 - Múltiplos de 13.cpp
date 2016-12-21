/**
 * URI
 * Problem Id : 1132
 * Problem Name: Múltiplos de 13
 */

#include <iostream>
using namespace std;

int main () {

	int x, y;
	long sum = 0;

	cin >> x >> y;

	for (int i = (x > y ? y : x); i <= (x > y ? x : y); i++) {
		if (i % 13 != 0) {
			sum += i;
		}
	}

	cout << sum << endl;

	return 0;
}