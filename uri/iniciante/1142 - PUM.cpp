/**
 * URI
 * Problem Id : 1142
 * Problem Name: PUM
 */

#include <iostream>
using namespace std;

int main () {

	int n, t = 1;

	cin >> n;
	while (n--) {
		for (int i = t; i <= t + 2; i++) {
			cout << i << " ";
		}

		cout << "PUM" << endl;
		t += 4;
	}

	return 0;
}