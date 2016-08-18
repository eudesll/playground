/**
 * URI
 * Problem Id : 2242
 * Problem Name: Huaauhahhuahau
 */

#include <iostream>
using namespace std;

bool isVowel(char l) {

	if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u') {
		return true;
	}

	return false;
}

int main () {

	string l;
	int i = 0, s;

	cin >> l;
	s = l.size() - 1;

	while (true) {

		if (!isVowel(l[i])) {
			i++;
			continue;
		}

		if (!isVowel(l[s])) {
			s--;
			continue;
		}

		if (i >= s) {
			break;
		}

		if (l[i] != l[s]) {
			cout << "N" << endl;

			return 0;
		} else {
			i++;
			s--;
		}
	}

	cout << "S" << endl;

	return 0;
}