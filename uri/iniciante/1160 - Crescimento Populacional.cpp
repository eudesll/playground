/**
 * URI
 * Problem Id : 1160
 * Problem Name: Crescimento Populacional
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	long t, p1, p2, y;
	double g1, g2;

	cin >> t;
	while (t--) {
		cin >> p1 >> p2 >> g1 >> g2;

		y = 1;
		while (true) {
			p1 += p1 * g1 / 100;
			p2 += p2 * g2 / 100;			

			if (y > 100 || p1 > p2) {
				break;
			}

			y++;
		}

		if (y > 100) {
			cout << "Mais de 1 seculo." << endl;
		} else {
			cout << y << " anos." << endl;
		}
	}

	return 0;
}