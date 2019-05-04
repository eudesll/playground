/**
 * URI
 * Problem Id : 2927
 * Problem Name: Imprevistos Natalinos
 */

#include <iostream>
using namespace std;

int main () {

  int a, c, x, y;
  string res = "Igor feliz!";

  cin >> a >> c >> x >> y;

  if (a > c - (x + y + 1)) {
    res = "Igor bolado!";

    if (x > (y / 2)) {
      res = "Caio, a culpa eh sua!";
    }
  }

  cout << res << endl;
	return 0;
}