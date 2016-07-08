/**
 * URI
 * Problem Id : 2108
 * Problem Name: Contando Caracters
 */

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<string> split(const string s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> elems;

    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }

    return elems;
}

int main () {

	string text, bW = "";

	while (getline(cin, text) && text != "0") {

		vector<string> elems = split(text, ' ');

		for (int i = 0; i < elems.size(); i++) {
			cout << elems[i].size();

			if (i < elems.size() - 1) {
				cout << "-";
			}

			if (elems[i].size() >= bW.size()) {
				bW = elems[i];
			}
		}

		cout << endl;

	}

	cout << endl << "The biggest word: " << bW << endl;

	return 0;
}