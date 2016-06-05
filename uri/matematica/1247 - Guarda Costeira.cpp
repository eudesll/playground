/**
 * URI
 * Problem Id : 1247
 * Problem Name: Guarda Costeira
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	double d, vf, vg;

	while (cin >> d >> vf >> vg) {

		d = sqrt(12 * 12 + d * d);

		if (12 / vf >= d / vg) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }

	}

	return 0;
}