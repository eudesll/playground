/**
 * URI
 * Problem Id : 2062
 * Problem Name: OBI URI
 */

#include <iostream>
using namespace std;

int main () {

	int n;
	string text;

	cin >> n;

	while (n--) {
		cin >> text;

		if (text.size() == 3) {

			if (text[0] == 'O' && text[1] == 'B') {
				text = "OBI";
			} else if (text[0] == 'U' && text[1] == 'R') {
				text = "URI";
			}

		}

		cout << text;

		if (n) {
			cout << " ";
		}
	}

	cout << endl;

	return 0;
}