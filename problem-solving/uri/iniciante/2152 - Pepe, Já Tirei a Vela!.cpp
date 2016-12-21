/**
 * URI
 * Problem Id : 2152
 * Problem Name: Pepe, Já Tirei a Vela!
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int t, h, m, o;

	cin >> t;
	while (t--) {
		cin >> h >> m >> o;

		cout << setw(2) << setfill('0') << h;
		cout << ":";
		cout << setw(2) << setfill('0') << m;
		cout << " - A porta " << (o ? "abriu" : "fechou") << "!" << endl;

	}

	return 0;
}