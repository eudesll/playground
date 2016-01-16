/**
 * URI
 * Problem Id : 1131
 * Problem Name: Grenais
 */

#include <iostream>
using namespace std;

int main () {

	int qt = 0, inter = 0, gremio = 0, emp = 0, gI, gG, cont;

	do {
		cin >> gI >> gG;

		qt++;

		if (gI > gG) {
			inter++;
		} else if (gG > gI) {
			gremio++;
		} else {
			emp++;
		}

		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> cont;
	} while (cont == 1);

	cout << qt << " grenais" << endl;
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gremio << endl;
	cout << "Empates:" << emp << endl;

	if (inter > gremio) {
		cout << "Inter venceu mais" << endl;
	} else if (gremio > inter) {
		cout << "Gremio venceu mais" << endl;
	} else {
		cout << "Nao houve vencedor" << endl;
	}

	return 0;
}