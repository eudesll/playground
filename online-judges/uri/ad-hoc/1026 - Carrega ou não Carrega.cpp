/**
 * URI
 * Problem Id : 1026
 * Problem Name: Carrega ou não Carrega?
 */

#include <iostream>
using namespace std;

int main () {

	unsigned int x, y;

	while (cin >> x >> y) {

		cout << (x ^ y) << endl;
	}

	return 0;
}