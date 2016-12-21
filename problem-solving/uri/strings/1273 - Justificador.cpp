/**
 * URI
 * Problem Id : 1273
 * Problem Name: Justificador
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int n, bSize;
	string names[50];
	bool firstPassed = false;

	while (cin >> n && n) {

		bSize = 0;

		if (firstPassed) {
			cout << endl;
		}

		firstPassed = true;

		for (int i = 0; i < n; i++) {
			cin >> names[i];

			if (names[i].size() > bSize) {
				bSize = names[i].size();
			}
		}

		for (int i = 0; i < n; i++) {
			if (bSize > names[i].size()) {
				cout << setw(bSize - names[i].size()) << " ";
			}

			cout << names[i] << endl;
		}
	}

	return 0;
}