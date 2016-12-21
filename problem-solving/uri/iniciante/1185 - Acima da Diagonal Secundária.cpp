/**
 * URI
 * Problem Id : 1185
 * Problem Name: Acima da Diagonal Secundária
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int cont = 0;
	char o;
	double m[12][12], result = 0.0;

	cin >> o;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> m[i][j];

			if (j < 11 - i) {
				result += m[i][j];
				cont++;
			}
		}
	}

	result = o == 'M' ? result / cont : result;
	cout << fixed << setprecision(1) << result << endl;

	return 0;
}