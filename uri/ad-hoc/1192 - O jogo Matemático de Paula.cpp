/**
 * URI
 * Problem Id : 1192
 * Problem Name: O jogo Matemático de Paula
 */

#include <iostream>
#include <cctype>
using namespace std;

int main () {

	int n;
	string calc;

	cin >> n;
	while (n--) {
		cin >> calc;

		int a = calc[0] - '0';
		int b = calc[2] - '0';
		char op = calc[1];

		if (a == b) {
			cout << (a * b) << endl;
		} else {
			if (isupper(op)) {
				cout << (b - a) << endl;
			} else {
				cout << (a + b) << endl;
			}
		}
	}

	return 0;
}