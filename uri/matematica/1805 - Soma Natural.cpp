/**
 * URI
 * Problem Id : 1805
 * Problem Name: Soma Natural
 */

#include <iostream>
using namespace std;

int main () {

	long long a, b;

	cin >> a >> b;

	cout << ((a + b) * (b - a + 1) / 2) << endl;

	return 0;
}