/**
 * URI
 * Problem Id : 1541
 * Problem Name: Construindo Casas
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int a, b, c;

	while (cin >> a && a) {
		cin >> b >> c;

        cout << floor(sqrt(100 * a * b / c)) << endl;
	}

	return 0;
}