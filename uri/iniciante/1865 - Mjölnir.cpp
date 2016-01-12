/**
 * URI
 * Problem Id : 1865
 * Problem Name: Mjölnir
 */

#include <iostream>
using namespace std;

int main () {

	int n, p;
	string c;

	cin >> n;
	while (n--) {
		cin >> c >> p;

		if (c == "Thor") {
			cout << "Y" << endl;
		} else {
			cout << "N" << endl;
		}
	}

	return 0;
}