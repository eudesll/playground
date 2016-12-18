/**
 * URI
 * Problem Id : 2170
 * Problem Name: Juros do Projeto
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int i = 1;
	long double x, y, r;

	while (cin >> x >> y) {
		r = (y - x) * 100.0 / x;

		cout << "Projeto " << i++ << ":" << endl;
		cout << "Percentual dos juros da aplicacao: " << fixed << setprecision(2) << r << " %" << endl << endl;
	}

	return 0;
}