/**
 * URI
 * Problem Id : 1259
 * Problem Name: Pares e Ímpares
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main () {

	int n;
	cin >> n;

	int num[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num, num + n);

	for (int i = 0; i < n; i++) {
		if (num[i] % 2 == 0) {
			cout << num[i] << endl;
		}
	}

	for (int i = n - 1; i >= 0; i--) {
		if (num[i] % 2 != 0) {
			cout << num[i] << endl;
		}
	}

	return 0;
}