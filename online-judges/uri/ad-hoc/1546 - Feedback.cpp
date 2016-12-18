/**
 * URI
 * Problem Id : 1546
 * Problem Name: Feedback
 */

#include <iostream>
using namespace std;

int main () {

	string staff[] = {"Rolien", "Naej", "Elehcim", "Odranoel"};
	int n, k, c;

	cin >> n;
	while (n--) {

		cin >> k;
		while (k--) {
			cin >> c;

			cout << staff[c - 1] << endl;
		}
	}

	return 0;
}