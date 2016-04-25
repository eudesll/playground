/**
 * URI
 * Problem Id : 1397
 * Problem Name: Jogo do Maior
 */

#include <iostream>
using namespace std;

int main () {

	int n, a, b, pA, pB;

	while (cin >> n && n) {

		pA = pB = 0;
		while (n--) {
			cin >> a >> b;

			if (a > b) pA++;
			else if (b > a) pB++;
		}

		cout << pA << " " << pB << endl;

	}

	return 0;
}