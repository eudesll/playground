/**
 * URI
 * Problem Id : 1140
 * Problem Name: Flores Florescem da França
 */

#include <iostream>
#include <ctype.h>
using namespace std;

int main () {

  string text;

  while (getline(cin, text) && text != "*") {
    bool isT = true;

    for (int i = 0; text[i] != '\0'; i++) {
      if (i > 0 && text[i - 1] == ' ') {
        char first = tolower(text[0]);
        char current = tolower(text[i]);

        if (first != current) {
          isT = false;
          break;
        }
      }
    }

    char res = isT ? 'Y' : 'N';
    cout << res << endl;
  }

	return 0;
}