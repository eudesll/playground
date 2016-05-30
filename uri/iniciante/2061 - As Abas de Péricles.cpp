/**
 * URI
 * Problem Id : 2061
 * Problem Name: As Abas de Péricles
 */

#include <iostream>
using namespace std;

int main () {

	int n, m;
	string action;

	while (cin >> n >> m) {
		
		while (m--) {
			cin >> action;

			if (action == "fechou") {
				n++;
			} else {
				n--;
			}
		}

		cout << n << endl;
	}

	return 0;
}