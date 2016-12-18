/**
 * URI
 * Problem Id : 1253
 * Problem Name: Cifra de César
 */

#include <iostream>
using namespace std;

int main () {

	int n, desl;
	string text, cript;

	cin >> n;
	while (n--) {
		
		cin >> text >> desl;
		cript = "";

		for (int i = 0; i < text.length(); i++) {
			cript += text[i] - desl < 65 ? text[i] + 26 - desl : text[i] - desl;
		}

		cout << cript << endl;
	}

	return 0;
}