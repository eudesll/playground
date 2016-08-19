/**
 * URI
 * Problem Id : 2232
 * Problem Name: Triângulo de Pascal
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	long long t, n, r;

	cin >> t;
	while (t--) {
		cin >> n;
		r = 0;

		while (n) {
			r += pow(2, --n);
		}

		cout << r << endl;
	}

	return 0;
}