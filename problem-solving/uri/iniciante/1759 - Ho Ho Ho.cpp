/**
 * URI
 * Problem Id : 1759
 * Problem Name: Ho Ho Ho
 */

#include <iostream>
using namespace std;

int main () {

	long n;

	cin >> n;
	while (n--) {
		cout << "Ho";

		if (n > 0) {
			cout << " ";
		}
	}

	cout << "!" << endl;

	return 0;
}