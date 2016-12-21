/**
 * URI
 * Problem Id : 2147
 * Problem Name: Galopeira
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int c;
	string text;

	cin >> c;
	while (c--) {
		cin >> text;

		cout << fixed << setprecision(2) << (0.01 * text.size()) << endl;
	}

	return 0;
}