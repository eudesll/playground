/**
 * URI
 * Problem Id : 1188
 * Problem Name: Área Inferior
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int col1 = 5, col2 = 6;
	double result = 0.0, m;
	string op;

	cin >> op;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> m;

			if (i > 6) {
				if (j >= col1 && j <= col2) {
					result += m;
				}
			}
		}

		if (i > 6) {
			col1--;
			col2++;
		}
	}

	result = (op == "M") ? result / 30 : result;
	cout << fixed << setprecision(1) << result << endl;

	return 0;
}