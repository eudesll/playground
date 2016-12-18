/**
 * URI
 * Problem Id : 1436
 * Problem Name: Jogo do Tijolo
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main () {

	int t, n, c = 1;

	cin >> t;
	while (t--) {

		cin >> n;
		int ages[n];

		for (int i = 0; i < n; i++) {
			cin >> ages[i];
		}

		sort(ages, ages + n);

		cout << "Case " << c++ << ": " << ages[n / 2] << endl;
	}
	return 0;
}