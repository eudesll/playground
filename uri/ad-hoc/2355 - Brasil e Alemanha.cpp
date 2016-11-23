/**
 * URI
 * Problem Id : 2355
 * Problem Name: Brasil e Alemanha
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	long n;

	while (cin >> n && n) {

		cout << "Brasil " << floor(n * 1.0 / 90.0) << " x ";
		cout << "Alemanha " << ceil(n * 7.0 / 90.0) << endl;
	}

	return 0;
}