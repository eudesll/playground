/**
 * URI
 * Problem Id : 1933
 * Problem Name: Tri-du
 */

#include <iostream>
using namespace std;

int main () {

	int a, b;

	cin >> a >> b;

	if (a == b || a > b) {
		cout << a << endl;
	} else {
		cout << b << endl;
	}

	return 0;
}