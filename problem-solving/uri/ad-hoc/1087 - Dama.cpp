/**
 * URI
 * Problem Id : 1087
 * Problem Name: Dama
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

  int x1, y1, x2, y2, movs;

  while (cin >> x1 >> y1 >> x2 >> y2 && x1 && y1 && x2 && y2) {
    if (x1 == x2 && y1 == y2) {
      movs = 0;
    } else if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y2 - y1)) {
      movs = 1;
    } else {
      movs = 2;
    }
    
    cout << movs << endl;
  }

	return 0;
}