/**
 * URI
 * Problem Id : 2808
 * Problem Name: Mais Cavalos
 */

#include <iostream>
#define TABLE_SIZE 8
using namespace std;

bool checkBoundary(int pos) {
  return pos > 0 && pos < 9;
}

bool checkBoundaries(int *coord) {
  return checkBoundary(coord[0]) && checkBoundary(coord[1]);
}

int main () {

  int comps[][2] = {{2,1}, {2,-1}, {-2,1}, {-2,-1},
                   {1,2}, {1,-2}, {-1,2}, {-1,-2}};
  string curS, destS, res = "INVALIDO";

  cin >> curS >> destS;
  int c[] = { curS[0] - '0' - 48, curS[1] - '0' };
  int d[] = { destS[0] - '0' - 48, destS[1] - '0' };

  if (checkBoundaries(c) && checkBoundaries(d)) {
    for (int i = 0; i < TABLE_SIZE; i++) {
      int comp[] = { c[0] + comps[i][0], c[1] + comps[i][1]};

      if (comp[0] == d[0] && comp[1] == d[1]) {
        res = "VALIDO";
        break;
      }
    }
  }

  cout << res << endl;

	return 0;
}