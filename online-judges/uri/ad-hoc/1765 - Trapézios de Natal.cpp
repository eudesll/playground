/**
 * URI
 * Problem Id : 1765
 * Problem Name: Trapézios de Natal
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int t, q;
	double a, b;

	while (cin >> t && t) {

		for (int i = 1; i <= t; i++) {
			cin >> q >> a >> b;

			cout << "Size #" << i << ":" << endl;
			cout << "Ice Cream Used: " << fixed << setprecision(2) << ((((a + b) * 5.0) / 2) * q) << " cm2" << endl;
		}

		cout << endl;
	}

	return 0;
}