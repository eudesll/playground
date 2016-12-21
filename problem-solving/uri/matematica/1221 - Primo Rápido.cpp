/**
 * URI
 * Problem Id : 1221
 * Problem Name: Primo Rápido
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	long int n, num;
	bool prime;

	cin >> n;
	while (n--) {
		cin >> num;

		prime = true;
		for (int i = 3; i <= sqrt(num); i += 2) {
			if (num % i == 0) {
				prime = false;
				break;
			}
		}

		if (prime) {
			cout << "Prime" << endl;
		} else {
			cout << "Not Prime" << endl;
		}
	}

	return 0;
}