/**
 * URI
 * Problem Id : 1134
 * Problem Name: Tipo de Combustível
 */

#include <iostream>
using namespace std;

int main () {

	int n, alc = 0, gas = 0, die = 0;

	cin >> n;
	while (n != 4) {
		if (n == 1) {
			alc++;
		} else if (n == 2) {
			gas++;
		} else if (n == 3) {
			die++;
		}

		cin >> n;
	}

	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alc << endl;
	cout << "Gasolina: " << gas << endl;
	cout << "Diesel: " << die << endl;

	return 0;
}