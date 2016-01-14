/**
 * URI
 * Problem Id : 1837
 * Problem Name: Prefácio
 */

#include <iostream>
using namespace std;

int main () {

	int a, b, q, r;

	cin >> a >> b;

	r = a % b;
	r = r < 0 ? b > 0 ? r + b : r - b : r;
	q = (a - r) / b;

	cout << q << " " << r << endl;

	return 0;
}