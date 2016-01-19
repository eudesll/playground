/**
 * URI
 * Problem Id : 1176
 * Problem Name: Fibonacci em Vetor
 */

#include <iostream>
using namespace std;

unsigned long long f[61] = {0};

unsigned long long getFib (int n) {
	if (f[n - 1] == 0) {
		getFib(n - 1);
	}

	f[n] = f[n - 1] + f[n - 2];
	return f[n];
}

int main () {

	int t, n;

	f[1] = 1;

	cin >> t;
	while (t--) {
		cin >> n;

		if (n != 0 && f[n] == 0) {
			getFib(n);
		}

		cout << "Fib(" << n << ") = " << f[n] << endl;
	}

	return 0;
}