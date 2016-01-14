/**
 * URI
 * Problem Id : 1116
 * Problem Name: Dividindo X por Y
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int n;
	double x, y;

	cin >> n;
	while (n--) {
		cin >> x >> y;

		if (y == 0) {
			cout << "divisao impossivel" << endl;
		} else {
			cout << fixed << setprecision(1) << (x / y) << endl;
		}
	}

	return 0;
}