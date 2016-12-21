/**
 * URI
 * Problem Id : 1178
 * Problem Name: Preenchimento de Vetor III
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	double n;

	cin >> n;
	cout << "N[0] = " << fixed << setprecision(4) << n << endl;

	for (int i = 1; i < 100; i++) {
		n /= 2;
		cout << "N[" << i << "] = " << fixed << setprecision(4) << n << endl;
	}

	return 0;
}