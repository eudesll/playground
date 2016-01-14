/**
 * URI
 * Problem Id : 1154
 * Problem Name: Idades
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int qt = 0;
	double val, sum = 0.0;

	cin >> val;
	while (val > 0) {
		sum += val;
		qt++;

		cin >> val;
	}

	cout << fixed << setprecision(2) << (sum / qt) << endl;

	return 0;
}