/**
 * URI
 * Problem Id : 2923
 * Problem Name: Birinho
 */

#include <iostream>
using namespace std;

int main () {

  int t, a, w, c;

  while (cin >> t >> a >> w >> c) {
    float percentage = a * 100.0 / t;
    string res = "OK";

    if (percentage >= c) {
      res = "critical";
    } else if (percentage >= w) {
      res = "warning";
    }

    cout << res << endl;
  }

	return 0;
}