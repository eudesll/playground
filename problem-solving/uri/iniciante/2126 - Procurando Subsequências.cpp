/**
 * URI
 * Problem Id : 2126
 * Problem Name: Procurando Subsequências
 */

#include <iostream>
using namespace std;

int main () {

	int qt, index, lIndex, cases = 1;
	string sub, text;

	while (cin >> sub >> text) {

		qt = index = lIndex = 0;

		for (int i = 0; i < text.size(); i++) {

			if (sub[index] != text[i]) {
				index = 0;
			}

			if (sub[index] == text[i]) {
				index++;
			} else {
				index = 0;
			}

			if (index == sub.size()) {
				qt++;
				index = 0;
				lIndex = i - sub.size() + 2;
			}
		}

		cout << "Caso #" << cases++ << ":" << endl;
		if (qt > 0) {
			cout << "Qtd.Subsequencias: " << qt << endl;
			cout << "Pos: " << lIndex << endl;
		} else {
			cout << "Nao existe subsequencia" << endl;
		}

		cout << endl;
	}

	return 0;
}