/**
 * URI
 * Problem Id : 2175
 * Problem Name: Qual o Mais Rápido?
 */

#include <iostream>
using namespace std;

int main () {

	double o, b, i;

	cin >> o >> b >> i;

	if (o < b && o < i) {
		cout << "Otavio" << endl;
	} else if (b < o && b < i) {
		cout << "Bruno" << endl;
	} else if (i < o && i < b) {
		cout << "Ian" << endl;
	} else {
		cout << "Empate" << endl;
	}

	return 0;
}