/**
 * URI
 * Problem Id : 2160
 * Problem Name: Nome no Formulário
 */

#include <iostream>
using namespace std;

int main () {

	string l;

	getline(cin, l);

	if (l.size() <= 80) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}