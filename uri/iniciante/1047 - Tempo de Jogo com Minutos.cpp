/**
 * URI
 * Problem Id : 1047
 * Problem Name: Tempo de Jogo com Minutos
 */

#include <iostream>
using namespace std;

int main () {

	int h1, h2, m1, m2, hR, mR;

	cin >> h1 >> m1 >> h2 >> m2;

	hR = h2 - h1;
	mR = m2 - m1;

	if (h2 <= h1) {
		hR = 24 - (h1 - h2);
	}

	if (m2 < m1) {
		hR--;
		mR = 60 - (m1 - m2);
	}

	cout << "O JOGO DUROU " << hR << " HORA(S) E " << mR << " MINUTO(S)" << endl;

	return 0;
}