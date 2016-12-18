/**
 * URI
 * Problem Id : 1168
 * Problem Name: LED
 */

#include <iostream>
using namespace std;

int main () {

	string text;
	long ledQt, n, tSize;

	cin >> n;
	while (n--) {
		cin >> text;

		ledQt = 0;
		tSize = text.length();

		for (int i = 0; i < tSize; i++) {
			if (text[i] == '1') ledQt += 2;
			else if (text[i] == '2') ledQt += 5;
			else if (text[i] == '3') ledQt += 5;
			else if (text[i] == '4') ledQt += 4;
			else if (text[i] == '5') ledQt += 5;
			else if (text[i] == '6') ledQt += 6;
			else if (text[i] == '7') ledQt += 3;
			else if (text[i] == '8') ledQt += 7;
			else if (text[i] == '9') ledQt += 6;
			else if (text[i] == '0') ledQt += 6;
		}

		cout << ledQt << " leds" << endl;
	}

	return 0;
}