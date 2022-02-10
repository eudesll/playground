/**
 * URI
 * Problem Id : 3042
 * Problem Name: Desviando de Árvores de Natal
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int m;
  while (cin >> m && m) {
    int mov = 0, pos = 1;
    int map[3];
    while (m--) {
      cin >> map[0] >> map[1] >> map[2];

      if (map[pos] != 0) {
        int tmov = 3, tpos;
        for (int i = 0; i < 3; i++) {
          if (i != pos && map[i] == 0) {
            if (abs(i - pos) < tmov) {
              tmov = abs(i - pos);
              tpos = i;
            }
          }
        }

        mov += tmov;
        pos = tpos;
      }
    }

    cout << mov << endl;
  }
}