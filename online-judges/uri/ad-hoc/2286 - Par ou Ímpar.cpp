/**
 * URI
 * Problem Id : 2286
 * Problem Name: Par ou Ímpar
 */

#include <iostream>
using namespace std;

int main () {

	int n, i = 1;

	while (cin >> n && n) {

		string p1, p2;
		int n1, n2;

		cin >> p1 >> p2;

		cout << "Teste " << i++ << endl;
		while (n--) {
			cin >> n1 >> n2;

			if ((n1 + n2) % 2 == 0) {
				cout << p1 << endl;
			} else {
				cout << p2 << endl;
			}
		}
		cout << endl;
	}

	return 0;
}