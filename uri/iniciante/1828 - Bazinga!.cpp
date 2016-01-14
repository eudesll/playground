/**
 * URI
 * Problem Id : 1828
 * Problem Name: Bazinga!
 */

#include <iostream>
using namespace std;

int main () {

	/*
	a tesoura corta o papel;
	o papel embrulha a pedra;
	a pedra esmaga o lagarto;
	o lagarto envenena Spock;
	Spock destrói a tesoura;
	a tesoura decapita o lagarto;
	o lagarto come o papel;
	o papel contesta Spock;
	Spock vaporiza a pedra;
	a pedra quebra a tesoura.
	 */
	
	int t, count = 1;
	bool rLost;
	string s, r;

	cin >> t;
	while (t--) {
		cin >> s >> r;

		rLost = false;

		cout << "Caso #" << count++ << ": ";

		if (s == r) {
			cout << "De novo!" << endl;
		} else {
			if (r == "tesoura" && (s == "Spock" || s == "pedra")) {
				rLost = true;
			} else if (r == "papel" && (s == "tesoura" || s == "lagarto")) {
				rLost = true;
			} else if (r == "pedra" && (s == "papel" || s == "Spock")) {
				rLost = true;
			} else if (r == "lagarto" && (s == "pedra" || s == "tesoura")) {
				rLost = true;
			} else if (r == "Spock" && (s == "lagarto" || s == "papel")) {
				rLost = true;
			}

			if (rLost) {
				cout << "Bazinga!" << endl;
			} else {
				cout << "Raj trapaceou!" << endl;
			}
		}
	}

	return 0;
}