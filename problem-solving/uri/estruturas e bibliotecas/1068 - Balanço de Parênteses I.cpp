/**
 * URI
 * Problem Id : 1068
 * Problem Name: Balanço de Parênteses I
 */

#include <iostream>
using namespace std;

int main () {

	int oP;
	string exp;

	while (cin >> exp) {
		oP = 0;

		for (int i = 0; i < exp.size(); i++) {
			if (exp[i] == '(') {
				oP++;
			} else if (exp[i] == ')') {
				oP--;
			}

			if (oP < 0) {
				break;
			}
		}

		cout << (oP != 0 ? "in" : "") << "correct" << endl;
	}

	return 0;
}