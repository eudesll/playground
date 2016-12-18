/**
 * URI
 * Problem Id : 1133
 * Problem Name: Resto da Divisão
 */

#include <iostream>
using namespace std;

int main () {

	int x, y;

	cin >> x >> y;

	for (int i = (x > y ? y : x) + 1; i < (x > y ? x : y); i++) {
		if (i % 5 == 2 || i % 5 == 3) {
			cout << i << endl;
		}
	}

	return 0;
}