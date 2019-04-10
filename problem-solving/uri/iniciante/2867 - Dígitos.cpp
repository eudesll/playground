/**
 * URI
 * Problem Id : 2867
 * Problem Name: Dígitos
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

  int c, n, m, r;

  cin >> c;
  while(c--) {
    cin >> n >> m;

    r = m * log10(n) + 1;
    cout << r << endl;
  }  

	return 0;
}