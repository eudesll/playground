/**
 * URI
 * Problem Id : 1114
 * Problem Name: Senha Fixa
 */

#include <iostream>
using namespace std;

int main () {

	int p = 2002, u;

	cin >> u;
	while (u != p) {
		cout << "Senha Invalida" << endl;

		cin >> u;
	}

	cout << "Acesso Permitido" << endl;

	return 0;
}