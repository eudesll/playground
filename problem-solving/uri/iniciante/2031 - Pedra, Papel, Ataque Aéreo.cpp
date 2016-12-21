/**
 * URI
 * Problem Id : 2031
 * Problem Name: Pedra, Papel, Ataque Aéreo
 */

#include <iostream>
using namespace std;

int main () {

	int n;
	string p1, p2;

	cin >> n;
	while (n--) {

		cin >> p1 >> p2;

		if (p1 == "ataque" && p2 != "ataque" || p1 == "pedra" && p2 == "papel") {
			cout << "Jogador 1 venceu" << endl;
		} else if (p1 != "ataque" && p2 == "ataque" || p1 == "papel" && p2 == "pedra") {
			cout << "Jogador 2 venceu" << endl;
		} else if (p1 == "ataque" && p2 == "ataque") {
			cout << "Aniquilacao mutua" << endl;
		} else {
			if (p1 == "pedra" && p2 == "pedra") {
				cout << "Sem ganhador" << endl;
			} else {
				cout << "Ambos venceram" << endl;
			}
		}

	}

	return 0;
}