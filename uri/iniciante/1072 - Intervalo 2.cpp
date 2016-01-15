/**
 * URI
 * Problem Id : 1072
 * Problem Name: Intervalo 2
 */

#include <iostream>
using namespace std;

int main () {

	long long n, x, in = 0, out = 0;

	cin >> n;
	while (n--) {
		cin >> x;

		if (x >= 10 && x <= 20) {
			in++;
		} else {
			out++;
		}
	}

	cout << in << " in" << endl;
	cout << out << " out" << endl;

	return 0;
}