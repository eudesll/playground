/* 
   URI
   Problem Id : 2770
   Problem Name: Tamanho da Placa
*/

#include <iostream>
using namespace std;

int main() {
  int x, y, n;
  while (cin >> x >> y >> n) {
    int max_side = x > y ? x : y;
    int min_side = x < y ? x : y;

    while (n--) {
      int nx, ny;
      cin >> nx >> ny;
      int max_nx = nx > ny ? nx : ny;
      int min_nx = nx < ny ? nx : ny;

      bool possible = max_nx <= max_side && min_nx <= min_side;
      cout << (possible ? "Sim" : "Nao") << endl;
    }
  }
}