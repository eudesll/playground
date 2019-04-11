/**
 * URI
 * Problem Id : 2783
 * Problem Name: Figurinhas da Copa
 */

#include <iostream>
#include <map>
using namespace std;

int main () {

  int n, c, m, ni;
  map<int, int> cMap;

  cin >> n >> c >> m;
  for (int i = 0; i < c; i++) {
    cin >> ni;
    cMap[ni] = 1;
  }

  while (m--) {
    cin >> ni;
    if (cMap[ni]) {
      c--;
      cMap[ni] = 0;
    }
  }

  cout << c << endl;

	return 0;
}