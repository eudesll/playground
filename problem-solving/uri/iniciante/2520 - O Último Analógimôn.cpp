/* 
   URI
   Problem Id : 2520
   Problem Name: O Último Analógimôn
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x, y;
  int temp;
  
  while(cin >> x >> y) {
    int posX1 = 0, posX2 = 0, posY1 = 0, posY2 = 0;

    for (int i = 0; i < x; i++) {
      for (int j = 0; j < y; j++) {
        cin >> temp;
        if (temp == 1) {
          posX1 = i;
          posY1 = j;
        } else if (temp == 2) {
          posX2 = i;
          posY2 = j;
        }
      }
    }

    cout << abs(posX1 - posX2) + abs(posY1 - posY2) << endl;
  }
}