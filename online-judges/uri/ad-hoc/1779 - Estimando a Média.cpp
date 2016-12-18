/**
 * URI
 * Problem Id : 1779
 * Problem Name: Estimando a Média
 */

#include <iostream>
using namespace std;

int main () {

	int t, n, c = 1, qt, qtM, m, arr[1000010];

	cin >> t;
	while (t--) {

		m = qt = qtM = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {

			cin >> arr[i];

			if (arr[i] >= m) {
				m = arr[i];
			}
		}

		for (int i = 0; i < n; i++) {

			if (arr[i] == m) {
				qt++;
			} else {
				qt = 0;
			}

			if (qtM < qt) {
				qtM = qt;
			}
		}

		cout << "Caso #" << c++ << ": " << qtM << endl;
	}

	return 0;
}