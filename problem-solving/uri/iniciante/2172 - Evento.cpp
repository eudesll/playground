/**
 * URI
 * Problem Id : 2172
 * Problem Name: Evento
 */

#include <iostream>
using namespace std;

int main () {

	int x;
	unsigned long long m, r;

	while (cin >> x >> m && x && m) {
		r = x * m;
		cout << r << endl;
	}

	return 0;
}