/**
 * URI
 * Problem Id : 1189
 * Problem Name: Área Esquerda
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	string type;
	int scape = 0, count = 0;
	double num, sum = 0;

	cin >> type;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> num;

			if (j < scape) {
				sum += num;
				count++;
			}
		}

		if (i < 5) {
			scape++;
		} else if (i > 5) {
			scape--;
		}
	}

	sum = type == "M" ? sum / count : sum;
	cout << fixed << setprecision(1) << sum << endl;

	return 0;
}