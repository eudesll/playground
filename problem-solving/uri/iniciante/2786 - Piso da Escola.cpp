/**
 * URI
 * Problem Id : 2786
 * Problem Name: Piso da Escola
 */

#include <iostream>
using namespace std;

int main () {

  int l, c, t1, t2;

  cin >> l >> c;

  t1 = l * c + (l - 1) * (c - 1);
  t2 = (l + c - 2) * 2;
  cout << t1 << endl << t2 << endl;

	return 0;
}