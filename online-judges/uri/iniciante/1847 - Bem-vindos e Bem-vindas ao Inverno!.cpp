/**
 * URI
 * Problem Id : 1847
 * Problem Name: Bem-vindos e Bem-vindas ao Inverno!
 */

#include <iostream>
using namespace std;

int main () {

	int a, b, c;
	string result;

	cin >> a >> b >> c;

	if ((a > b && b <= c) || (a < b && b < c && (c - b) >= (b - a)) || (a > b && b > c && (c - b) > (b - a)) || (a == b && b < c)) {
		result = ":)";
	} else {
		result = ":(";
	}

	cout << result << endl;

	return 0;
}