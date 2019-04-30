/**
 * URI
 * Problem Id : 1107
 * Problem Name: Escultura à Laser
 */

#include <iostream>
using namespace std;

int main () {

  int a, c, h;

  while (cin >> a >> c && a && c) {
    int prevDiff = 0, currDiff;
    int laserQtt = 0;
    
    for (int i = 0; i < c; i++) {
      cin >> h;
      currDiff = a - h;
      
      if (currDiff > prevDiff) {
        laserQtt += currDiff - prevDiff;
      }

      prevDiff = currDiff;
    }

    cout << laserQtt << endl;
  }

	return 0;
}