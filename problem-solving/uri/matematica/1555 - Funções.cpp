/**
 * URI
 * Problem Id : 1555
 * Problem Name: Funções
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int n, x, y;
	double rafael, beto, carlos;

	cin >> n;
	while (n--) {
		cin >> x >> y;

		rafael = pow(3 * x, 2) + pow(y, 2);
		beto = 2 * pow(x, 2) + pow(5 * y, 2);
		carlos = -100 * x + pow(y, 3);

		if (rafael > beto && rafael > carlos) {
			cout << "Rafael ganhou" << endl;
		} else if (beto > carlos) {
			cout << "Beto ganhou" << endl;
		} else {
			cout << "Carlos ganhou" << endl;
		}
	}

	return 0;
}