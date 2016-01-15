/**
 * URI
 * Problem Id : 1061
 * Problem Name: Tempo de um Evento
 */

#include <iostream>
using namespace std;

int main () {

	string temp;
	int d1, d2, h1, h2, m1, m2, s1, s2, dR, hR, mR, sR;

	cin >> temp >> d1 >> h1 >> temp >> m1 >> temp >> s1;
	cin >> temp >> d2 >> h2 >> temp >> m2 >> temp >> s2;

	dR = d2 - d1;
	hR = h2 - h1;
	mR = m2 - m1;
	sR = s2 - s1;

	if (h2 < h1) {
		dR--;
		hR = 24 - (h1 - h2);
	}

	if (m2 < m1) {
		hR--;
		mR = 60 - (m1 - m2);
	}

	if (s2 < s1) {
		mR--;
		sR = 60 - (s1 - s2);
	}

	cout << dR << " dia(s)" << endl;
	cout << hR << " hora(s)" << endl;
	cout << mR << " minuto(s)" << endl;
	cout << sR << " segundo(s)" << endl;

	return 0;
}