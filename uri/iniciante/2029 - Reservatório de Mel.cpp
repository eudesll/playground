/**
 * URI
 * Problem Id : 2029
 * Problem Name: Reservatório de Mel
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	double v, d;

	while (cin >> v >> d) {

		cout << "ALTURA = " << fixed << setprecision(2) << (v / (3.14 * ((d / 2) * (d / 2)))) << endl;
		cout << "AREA = " << fixed << setprecision(2) << (3.14 * ((d / 2) * (d / 2))) << endl;

	}

	return 0;
}