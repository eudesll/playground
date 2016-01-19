/**
 * URI
 * Problem Id : 1165
 * Problem Name: Número Primo
 */

#include <iostream>
using namespace std;

int main () {

	bool prime;
	long n, x;

	cin >> n;
	while (n--) {
		cin >> x;

		prime = true;
		for (int i = 2; i <= x / 2; i++) {
			if (x % i == 0) {
				prime = false;
				break;
			}
		}

		if (prime) {
			cout << x << " eh primo" << endl;
		} else {
			cout << x << " nao eh primo" << endl;
		}
	}

	return 0;
}