/**
 * URI
 * Problem Id : 2355
 * Problem Name: Brasil e Alemanha
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	long long n, bra, ger;

	while (cin >> n && n) {
		bra = floor(n * 1.0 / 90.0);
		ger = ceil(n * 7.0 / 90.0);

		cout << "Brasil " << bra << " x ";
		cout << "Alemanha " << ger << endl;
	}

	return 0;
}