/**
 * URI
 * Problem Id : 1183
 * Problem Name: Acima da Diagonal Principal
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	char type;
	int cont = 0;
	double num, sum;

	cin >> type;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> num;

			if (j > i) {
				sum += num;
				cont++;
			}
		}
	}

	sum = type == 'M' ? sum / cont : sum;
	cout << fixed << setprecision(1) << sum << endl;

	return 0;
}