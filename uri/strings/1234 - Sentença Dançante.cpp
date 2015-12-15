/* 
   URI
   Problem Id : 1234
   Problem Name: Sentença Dançante
*/

#include <iostream>
using namespace std;

int main () {

	string text;

	while (getline(cin, text)) {

		int size = text.length(), toUp = 0;

		for (int i = 0; i < size; i++) {
			if (isalpha(text[i])) {

				text[i] = ((toUp % 2 == 0) ? (toupper(text[i])) : (tolower(text[i])));

				toUp++;
			}
		}

		cout << text << endl;
	}

	return 0;
}