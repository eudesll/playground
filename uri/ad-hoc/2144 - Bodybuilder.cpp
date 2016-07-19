/**
 * URI
 * Problem Id : 2144
 * Problem Name: Bodybuilder
 */

#include <iostream>
using namespace std;

int main () {

	int w1, w2, r;
	double result, s = 0, q = 0;

	while (cin >> w1 >> w2 >> r && w1 && w2 && r) {

		result = (w1 + w2) * (1.0 + (r / 30.0)) / 2;
		s += result;
		q++;

		if (result < 13) {
			cout << "Nao vai da nao" << endl;
		} else if (result < 14) {
			cout << "E 13" << endl;
		} else if (result < 40) {
			cout << "Bora, hora do show! BIIR!" << endl;
		} else if (result <= 60) {
			cout << "Ta saindo da jaula o monstro!" << endl;
		} else {
			cout << "AQUI E BODYBUILDER!!" << endl; 
		}

	}

	if (s / q > 40) {
		cout << endl << "Aqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;
	}

	return 0;
}