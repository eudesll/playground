/**
 * URI
 * Problem Id : 1257
 * Problem Name: Array Hash
 */

#include <iostream>
using namespace std;

int main () {

	int n, l, hash;
	string text;
	
	cin >> n;
	while (n--) {
		hash = 0;

		cin >> l;
		for (int c = 0; c < l; c++) {			
			cin >> text;
			for (int i = 0; i < text.size(); i++) {
				hash += (text[i] - 65) + c + i;
			}
		}

		cout << hash << endl;
	}

	return 0;
}