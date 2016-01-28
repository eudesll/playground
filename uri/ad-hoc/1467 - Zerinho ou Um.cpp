/**
 * URI
 * Problem Id : 1467
 * Problem Name: Zerinho ou Um
 */

#include <iostream>
using namespace std;

int main () {

	int a, b, c;

	while (cin >> a) {
		cin >> b >> c;

		if (a == b && a == c) {
			cout << "*" << endl;
		} else if (a != b && a != c) {
			cout << "A" << endl;
		} else if (b != a && b != c) {
			cout << "B" << endl;
		} else {
			cout << "C" << endl;
		}
	}

	return 0;
}