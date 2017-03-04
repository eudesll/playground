/**
 * URI
 * Problem Id : 2482
 * Problem Name: Etiquetas de Noel
 */

#include <iostream>
#include <map>
using namespace std;

int main () {

	int t;
	map<string, string> msgs;
	string lang, msg, person;

	cin >> t;
	while (t--) {

		cin >> lang;
		cin.ignore();
		getline(cin, msg);

		msgs[lang] = msg;
	}

	cin >> t;
	while (t--) {
		cin.ignore();
		getline(cin, person);
		cin >> lang;

		cout << person << endl;
		cout << msgs[lang] << endl << endl;
	}

	return 0;
}