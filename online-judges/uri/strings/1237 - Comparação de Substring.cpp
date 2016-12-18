/**
 * URI
 * Problem Id : 1237
 * Problem Name: Comparação de Substring
 */

#include <iostream>
using namespace std;

int main () {

	int match, mMatch;
	string t1, t2;

	while (getline(cin, t1) && getline(cin, t2)) {

		mMatch = 0;

		if (t2.length() > t1.length()) {
			string aux = t1;
			t1 = t2;
			t2 = aux;
		}

		for (int i = 0; i < t1.length(); i++) {

			match = 0;

			for (int j = 0; j < t2.length(); j++) {

				if (t1[i + match] != t2[j]) {
					match = 0;
				}

				if (t1[i + match] == t2[j]) {
					match++;
				}

				if (match > mMatch) {
					mMatch = match;
				}

			}			

		}

		cout << mMatch << endl;

	}

	return 0;
}