/**
 * URI
 * Problem Id : 2787
 * Problem Name: Xadrez
 */

#include <iostream>
using namespace std;

int main () {

  int l, c;

  cin >> l >> c;
  cout << ((l + c) % 2 == 0 ? 1 : 0) << endl;

	return 0;
}