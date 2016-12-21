/**
 * URI
 * Problem Id : 2314
 * Problem Name: Indentador
 */

#include <iostream>
using namespace std;

int main () {

	string code;
	int lv = 0, lPad = 0;

	while (getline(cin, code)) {

		int size = code.size();

		for (int i = 0; i < size; i++) {
			if (code[i] == '{') {
				cout << endl;
			}

			if (code[i] == '{') {
				if (lv > 0) {
					lPad = 1;
				}
			} else if (code[i] == '}') {
				lv--;
			}

			if (lPad) {
				for(int j = 0; j < lv; j++) {
					cout << "....";
				}

				lPad = !lPad;
			}

			if (code[i] == ' ') {
				cout << " ";
			}

			cout << code[i];

			if (code[i] == ';' || code[i] == '{' || code[i] == '}' || code[i] == '>') {
				cout << endl;

				if (code[i] == '{') {
					lv++;

				}

				if (lv > 0) {
					lPad = 1;
				}
			}
		}

	}

	return 0;
}