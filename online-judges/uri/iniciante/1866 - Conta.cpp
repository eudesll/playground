/**
 * URI
 * Problem Id : 1866
 * Problem Name: Conta
 */

#include <iostream>
using namespace std;

int main () {

	int c, n;

	cin >> c;
	while (c--) {
		cin >> n;
		cout << (n % 2 == 0 ? 0 : 1) << endl;
	} 

	return 0;
}