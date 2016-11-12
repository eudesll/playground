/**
 * URI
 * Problem Id : 1023
 * Problem Name: Estiagem
 */

#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main () {

	int n, cityN = 1;

	while (cin >> n && n) {

		int p, c, pSum = 0, cSum = 0;
		map<int, int> consumes;
		
		for (int i = 0; i < n; i++) {
			cin >> p >> c;

			pSum += p;
			cSum += c;

			consumes[c / p] += p;
		}

		if (cityN > 1) {
			cout << endl;
		}

		cout << "Cidade# " << cityN++ << ":" << endl;
		for(map<int, int>::iterator i = consumes.begin(); i != consumes.end(); i++) {

			if (i != consumes.begin()) {
				cout << " ";
			}

			cout << i->second << "-" << i->first;
		}

		double int_p;
		int fract_p = (int) (modf ((double) cSum / pSum, &int_p) * 100);
		
		cout << endl << "Consumo medio: " << int_p << (fract_p < 10 ? ".0" : ".") << fract_p << " m3." << endl;
	}

	return 0;
}