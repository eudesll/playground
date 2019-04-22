/**
 * URI
 * Problem Id : 1129
 * Problem Name: Leitura Ótica
 */

#include <iostream>
#include <ctype.h>
using namespace std;

int main () {

  int n, lvl;
  char res;
  bool found;

  while(cin >> n && n) {
    while(n--) {
      res = '*';
      found = false;

      for(int i = 0; i < 5; i++) {
        cin >> lvl;

        if (lvl <= 127 && found) {
          res = '*';
        }

        if (lvl <= 127 && !found) {
          res = i + 65;
          found = true;
        }
      }

      cout << res << endl;
    }
  }

	return 0;
}