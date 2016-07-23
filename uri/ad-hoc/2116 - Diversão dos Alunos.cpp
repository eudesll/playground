/**
 * URI
 * Problem Id : 2116
 * Problem Name: Diversão dos Alunos
 */

#include <iostream>
using namespace std;

int main () {

	int n, m, p1 = 2, p2 = 2, max, pQt = 0, primes[1000];

	cin >> n >> m;

	max = n > m ? n : m;
	for (int i = 3; i <= max; i += 2) {
		bool prime = true;

		for (int j = 0; j < pQt; j++) {
			if (i % primes[j] == 0) {
				prime = false;
			}
		}

		if (prime) {

			primes[pQt++] = i;

			if (i <= n) {
				p1 = i;
			}

			if (i <= m) {
				p2 = i;
			}
		}
	}

	cout << (p1 * p2) << endl;

	return 0;
}