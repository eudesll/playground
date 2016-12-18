/**
 * URI
 * Problem Id : 2174
 * Problem Name: Coleção de Pomekon
 */

#include <iostream>
#include <map>
using namespace std;

int main () {

	int qt;
	string name;
	map<string, int> pokemons;

	cin >> qt;
	while (qt--) {
		cin >> name;
		pokemons[name] = 1;
	}

	cout << "Falta(m) " << (151 - pokemons.size()) << " pomekon(s)." << endl;

	return 0;
}