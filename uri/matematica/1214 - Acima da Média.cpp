/**
 * URI
 * Problem Id : 1214
 * Problem Name: Acima da Média
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int c, q, g[1001], b, sum;

	cin >> c;
	while (c--) {

		cin >> q;
		b = sum = 0;

		for (int i = 0; i < q; i++) {
			cin >> g[i];
			sum += g[i];
		}

		for (int i = 0; i < q; i++) {
			if (g[i] > sum / q) {
				b++;
			}
		}

		cout << fixed << setprecision(3) << (b * 100.0 / q) << "%" << endl;
	}

	return 0;
}