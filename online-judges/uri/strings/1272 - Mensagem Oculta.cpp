/**
 * URI
 * Problem Id : 1272
 * Problem Name: Mensagem Oculta
 */

#include <iostream>
#include <cctype>
using namespace std;

int main () {

	int n;
	string text;

	cin >> n;
	cin.ignore();
	while (n--) {
		getline(cin, text);

		int canInsert = 1;
		string result = "";

		for (int i = 0; i < text.size(); i++) {
			if (text[i] == ' ') {
				canInsert = 1;
			}

			if (canInsert && isalpha(text[i])) {
				result += text[i];

				canInsert = 0;
			}
		}

		cout << result << endl;
	}

	return 0;
}