/**
 * URI
 * Problem Id : 1113
 * Problem Name: Crescente e Decrescente
 */

#include <iostream>
using namespace std;

int main () {

	int x, y;

	cin >> x >> y;
	while (x != y) {
		cout << (x > y ? "Decrescente" : "Crescente") << endl;

		cin >> x >> y;
	}

	return 0;
}