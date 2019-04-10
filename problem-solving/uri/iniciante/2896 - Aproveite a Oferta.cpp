/**
 * URI
 * Problem Id : 2896
 * Problem Name: Aproveite a Oferta
 */

#include <iostream>
using namespace std;

int main () {

  int t, k, n;

  cin >> t;
  while (t--) {
    cin >> n >> k;

    int v = n / k;
    cout << ((n - k * v) + v) << endl;
  }

	return 0;
}