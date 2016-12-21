/**
 * URI
 * Problem Id : 1169
 * Problem Name: Trigo no Tabuleiro
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int n;
	unsigned long long x;

	cin >> n;
	while (n--) {
		cin >> x;
		x = pow(2, x) / 12000;

		cout << x << " kg" << endl;
	}

	return 0;
}