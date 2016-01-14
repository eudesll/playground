/**
 * URI
 * Problem Id : 1507
 * Problem Name: Subsequências
 */

#include <iostream>
using namespace std;

int main () {

	int n, q, subC;
	string text, sub;

	cin >> n;
	while (n--) {
		cin >> text;
		cin >> q;
		while (q--) {

			cin >> sub;
			subC = 0;

			for (int i = 0; i < text.length(); i++) {
				if (text[i] == sub[subC]) {
					subC++;

					if (subC == sub.length()) {
						break;
					}
				}
			}

			if (subC == sub.length()) {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}

		}		
	}

	return 0;
}