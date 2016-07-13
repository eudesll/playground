/**
 * URI
 * Problem Id : 1249
 * Problem Name: Rot13
 */

#include <iostream>
#include <cctype>
using namespace std;

int main () {

	string text;

	while (getline(cin, text)) {
		for (int i = 0; i < text.size(); i++) {

			int iC = (int)text[i];

			if (isalpha(text[i])) {
				iC += 13;

				if ((isupper(text[i]) && iC > 90) || iC > 122) {
					iC -= 26;
				}
			}
			
			printf("%c", iC);			
		}

		printf("\n");
	}

	return 0;
}