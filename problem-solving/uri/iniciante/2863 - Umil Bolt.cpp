/**
 * URI
 * Problem Id : 2863
 * Problem Name: Umil Bolt
 */

#include <iostream>
using namespace std;

int main () {

  float t, mT, ti;

  while(cin >> t) {
    mT = 12;

    while(t--) {
      cin >> ti;
      mT = ti < mT ? ti : mT;
    }

    cout << mT << endl;
  }
	return 0;
}