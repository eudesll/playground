/**
 * URI
 * Problem Id : 1182
 * Problem Name: Coluna na Matriz
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int c;
	char typ;
	double num, sum = 0;

	cin >> c >> typ;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> num;

			if (j == c) {
				sum += num;
			}
		}
	}

	sum = typ == 'M' ? sum / 12 : sum;
	cout << fixed << setprecision(1) << sum << endl;

	return 0;
}