/**
 * URI
 * Problem Id : 2928
 * Problem Name: Cruzando Lagos
 */

#include <iostream>
using namespace std;

int main () {

  int n, jumps = 0, holeSize = 0;
  bool isPossible = true;
  string field;

  cin >> n;
  while (n--) {
    cin >> field;

    if (field[0] == '-') {
      holeSize = 0;
    } else {
      if (holeSize++ == 0) {
        jumps++;
      }

      if (holeSize > 2) {
        isPossible = false;
      }
    }
  }

  if (isPossible) {
    cout << jumps << endl;
  } else {
    cout << "N" << endl;
  }

	return 0;
}