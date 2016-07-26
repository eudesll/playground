/**
 * URI
 * Problem Id : 2166
 * Problem Name: Raiz Quadrada de 2
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

	int n;
	double r = 1.00, q = 2.00;

	cin >> n;
	for (int i = n; i > 1; i--) {
		q = 2 + 1 / q;
	}

	if (!n) {
		q = 0;
	} else {
		q = 1 / q;
	}

	cout << fixed << setprecision(10) << (r + q) << endl;

	return 0;
}