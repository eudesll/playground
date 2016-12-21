/**
 * URI
 * Problem Id : 2159
 * Problem Name: Número Aproximado de Primos
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {

	int n;
	double min, max;

	cin >> n;

	min = n / log(n);
	max = 1.25506 * min;

	cout << fixed << setprecision(1) << min << " " << max << endl;

	return 0;
}