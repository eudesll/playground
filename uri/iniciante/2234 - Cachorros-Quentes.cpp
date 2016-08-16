/**
 * URI
 * Problem Id : 2234
 * Problem Name: Cachorros-Quentes
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	double h, p;

	cin >> h >> p;

	cout << fixed << setprecision(2) << (h / p) << endl;

	return 0;
}