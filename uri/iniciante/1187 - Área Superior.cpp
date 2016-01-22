/**
 * URI
 * Problem Id : 1187
 * Problem Name: Área Superior
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	char type;
	int cont = 0, j1 = 1, j2 = 10;
	double num, sum = 0;

	cin >> type;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> num;

			if (j >= j1 && j <= j2 && i < 5) {
				sum += num;
				cont++;
			}
		}

		j1++;
		j2--;
	}

	sum = type == 'M' ? sum / cont : sum;
	cout << fixed << setprecision(1) << sum << endl;

	return 0;
}