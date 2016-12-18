/**
 * URI
 * Problem Id : 1150
 * Problem Name: Ultrapassando Z
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int x, z, sum = 0, cont = 0;

	cin >> x >> z;
	while (z <= x) {
		cin >> z;
	}

	if (x < sum) {
		sum = x++;
		cont++;
	}

	while (sum < z) {
		sum += x++;
		cont++;
	}

	cout << cont << endl;

	return 0;
}