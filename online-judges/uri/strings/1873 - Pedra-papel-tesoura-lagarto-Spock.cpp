/* 
   URI
   Problem Id : 1973
   Problem Name: Pedra-papel-tesoura-lagarto-Spock
*/

#include <iostream>
using namespace std;

int main () {

	int c;
	string r, s;

	/*
	Spock derrete tesoura
	Pedra quebra tesoura
	Tesoura corta papel
	Lagarto come papel
	Papel cobre pedra
	Spock vaporiza pedra
	Pedra derruba lagarto
	Tesoura prende lagarto
	Lagarto adormece Spock
	Papel refuta Spock
	 */

	cin >> c;
	while (c--) {
		bool rLost = false;

		cin >> r >> s;

		if (r == "tesoura" && (s == "spock" || s == "pedra")) {
			rLost = true;
		} else if (r == "papel" && (s == "tesoura" || s == "lagarto")) {
			rLost = true;
		} else if (r == "pedra" && (s == "papel" || s == "spock")) {
			rLost = true;
		} else if (r == "lagarto" && (s == "pedra" || s == "tesoura")) {
			rLost = true;
		} else if (r == "spock" && (s == "lagarto" || s == "papel")) {
			rLost = true;
		}

		if (r == s) {
			cout << "empate" << endl;
		} else {
			if (rLost) {
				cout << "sheldon" << endl;
			} else {
				cout << "rajesh" << endl;
			}
		}
	}

	return 0;
}