/**
 * URI
 * Problem Id : 1255
 * Problem Name: Frequência de Letras
 */

#include <iostream>
#include <map>
using namespace std;

int main () {
	
	int n, big;
	string text;
	map<char, int> charMap;

	cin >> n;
	getline(cin, text);

	while (n--) {

		big = 0;
		getline(cin, text);

		for (int i = 0; i < text.length(); i++) {
			char c = text[i];

			if (c >= 65 && c <= 90) {
				c += 32;
			}

			if (c >= 97 && c <= 122) {
				charMap[c]++;

				if (charMap[c] > big) {
					big = charMap[c];
				}
			}
		}

		map<char, int>::iterator it;

		for (it = charMap.begin(); it != charMap.end(); it++)
		{
			if (it->second == big) {
				cout << it->first;
			}
		}

		charMap.clear();
		cout << endl;
	}

	return 0;
}