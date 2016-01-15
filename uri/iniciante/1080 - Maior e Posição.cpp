/**
 * URI
 * Problem Id : 1080
 * Problem Name: Maior e Posição
 */

#include <iostream>
using namespace std;

int main () {

	int val, big = 0, index;

	for (int i = 1; i <= 100; i++) {
		cin >> val;

		if (val > big) {
			big = val;
			index = i;
		}
	}

	cout << big << endl << index << endl;

	return 0;
}