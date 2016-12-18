/**
 * URI
 * Problem Id : 1547
 * Problem Name: Adivinha
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int n, qt, s, g, bG, bI;

	cin >> n;
	while (n--) {
		cin >> qt >> s;

		for (int i = 1; i <= qt; i++) {
			cin >> g;

			if (i == 1 || bG > abs(g - s)) {
				bI = i;
				bG = abs(g - s);
			}
		}

		cout << bI << endl;
	}

	return 0;
}