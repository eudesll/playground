/**
 * URI
 * Problem Id : 1153
 * Problem Name: Fatorial Simples
 */

#include <iostream>
using namespace std;

int main () {

	int n, r = 1;

	cin >> n;
	while (n > 1) {
		r *= n--;
	}

	cout << r << endl;

	return 0;
}