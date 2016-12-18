/**
 * URI
 * Problem Id : 1914
 * Problem Name: De Quem é a Vez?
 */

#include <iostream>
using namespace std;

int main () {

	long long n, n1, n2;
	string p1, p2, c1, c2;

	cin >> n;
	while (n--) {
		cin >> p1 >> c1 >> p2 >> c2 >> n1 >> n2;

		if ((c1 == "PAR" && ((n1 + n2) % 2 == 0)) || (c1 == "IMPAR" && ((n1 + n2) % 2 != 0))) {
			cout << p1 << endl;
		} else {
			cout << p2 << endl;
		}
	}

	return 0;
}