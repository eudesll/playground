/**
 * URI
 * Problem Id : 1103
 * Problem Name: Alarme Despertador
 */

#include <iostream>
using namespace std;

int main () {

	int h1, h2, m1, m2, mT;

	while (cin >> h1 >> m1 >> h2 >> m2 && (h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0)) {

		mT = 0;

		if (h1 > h2 || (h1 == h2 && m1 > m2)) {
			h2 += 24;
		}
		
		mT = ((h2 - h1) * 60) + m2 - m1;

		cout << mT << endl;
	}

	return 0;
}