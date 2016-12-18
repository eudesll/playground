/**
 * URI
 * Problem Id : 1074
 * Problem Name: Par ou Ímpar
 */

#include <iostream>
using namespace std;

int main () {

	long long n, x;

	cin >> n;
	while (n--) {
		cin >> x;

		if (x == 0) {
			cout << "NULL" << endl;
		} else {
			if (x % 2 == 0) {
				cout << "EVEN ";
			} else {
				cout << "ODD ";
			}

			if (x > 0) {
				cout << "POSITIVE" << endl;
			} else {
				cout << "NEGATIVE" << endl;
			}
		}
	}

	return 0;
}