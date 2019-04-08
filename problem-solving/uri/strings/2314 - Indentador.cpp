/**
 * URI
 * Problem Id : 2314
 * Problem Name: Indentador
 */

#include <iostream>
using namespace std;

int main () {

	string code;
	char l, lastL;
	bool isFor = false;
	int lv = 0, lPad = 0;

	while (getline(cin, code)) {

		int size = code.size();

		if (code[0] == '#') {
			cout << code << endl;
			continue;
		}

		if (l == '\n') {
			lv = lPad = 0;
		}

		for (int i = 0; i < size; i++) {

			char l = code[i];

			if (l == '{') {
				cout << endl;
			}

			if (l == '{') {
				if (lv > 0) {
					lPad = 1;
				}
			} else if (l == '}') {
				lv--;
			}

			if (lPad) {
				for(int j = 0; j < lv; j++) {
					cout << "....";
				}

				lPad = !lPad;
			}

			cout << l;

			if (l == '(' && i >= 3) {
				if (code.substr(i - 3, 3) == "for") {
					isFor = true;
				}
			}

			if (l == ')' && isFor) {
				isFor = false;
			}

			if ((l == ';' && !isFor) || l == '{' || l == '}' || l == '>') {
				cout << endl;

				if (l == '{') {
					lv++;

				}

				if (lv > 0) {
					lPad = 1;
				}
			}

			lastL = l;
		}

	}

	return 0;
}