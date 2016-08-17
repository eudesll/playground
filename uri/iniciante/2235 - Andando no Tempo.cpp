/**
 * URI
 * Problem Id : 2235
 * Problem Name: Andando no Tempo
 */

#include <iostream>
using namespace std;

int main () {

	int a, b, c;

	cin >> a >> b >> c;

	if (a == 0 || b == 0 || c == 0 
		|| a - b == 0 || a - c == 0 || b - c == 0
		|| a + c - b == 0 || a + b - c == 0 || b + c - a == 0) {

		cout << "S" << endl;
	} else {
		cout << "N" << endl;
	}

	return 0;
}