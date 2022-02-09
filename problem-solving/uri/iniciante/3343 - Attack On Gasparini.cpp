/* 
   URI
   Problem Id : 3343
   Problem Name: Attack On Gasparini
*/

#include <iostream>
#include <map>
using namespace std;

int main() {
  int n, x, size, total;
  char titan;
  map<char, int> sizes, lastWall;
  string titans;

  cin >> n >> x;
  cin >> titans;
  cin >> size;
  sizes['P'] = size;
  cin >> size;
  sizes['M'] = size;
  cin >> size;
  sizes['G'] = size;

  int iwall, walls[n], lwall = 0;
  for (int i = 0; i < n; i++) {
    walls[i] = x;
  }
  
  lastWall['P'] = 0;
  lastWall['M'] = 0;
  lastWall['G'] = 0;

  for (int i = 0; i < n; i++) {
    titan = titans[i];
    size = sizes[titan];
    iwall = lastWall[titan];

    while (walls[iwall] < size) iwall++;

    walls[iwall] -= size;
    lastWall[titan] = iwall;
    
    if (iwall > lwall) lwall = iwall;
  }

  cout << (lwall + 1) << endl;
}