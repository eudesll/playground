/**
 * URI
 * Problem Id : 1174
 * Problem Name: Seleçao em Vetor I
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	double n;

	for (int i = 0; i < 100; i++) {
		cin >> n;

		if (n <= 10) {
			cout << "A[" << i << "] = " << fixed << setprecision(1) << n << endl;
		}
	}

	return 0;
}