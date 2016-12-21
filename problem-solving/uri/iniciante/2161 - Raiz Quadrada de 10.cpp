/**
 * URI
 * Problem Id : 2161
 * Problem Name: Raiz Quadrada de 10
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int n;
	double r = 3.00, q = 6.00;

	cin >> n;
	for (int i = n; i > 1; i--) {
		q = 6 + 1 / q;
	}

	if (!n) {
		q = 0;
	} else {
		q = 1 / q;
	}

	cout << fixed << setprecision(10) << (r + q) << endl;

	return 0;
}