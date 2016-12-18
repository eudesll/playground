/**
 * URI
 * Problem Id : 1024
 * Problem Name: Criptografia
 */

#include <iostream>
using namespace std;

int main () {

	int n, textL;
	string text, cript;

	cin >> n;
	getline(cin, text);
	
	while (n--) {

		getline(cin, text);

		cript = "";
		textL = text.length() - 1;

		for (int i = textL; i >= 0; i--) {
			char c = text[i];

			if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) {
				c += 3;
			}

			if (i <= textL / 2) {
				c -= 1;
			}

			cript += c;
		}

		cout << cript << endl;
	}

	return 0;
}