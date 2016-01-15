/**
 * URI
 * Problem Id : 1079
 * Problem Name: Médias Ponderadas
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int n;
	double n1, n2, n3;

	cin >> n;
	while (n--) {
		cin >> n1 >> n2 >> n3;

		cout << fixed << setprecision(1) << ((n1 * 2 + n2 * 3 + n3 * 5) / 10) << endl;
	}

	return 0;
}