/* 
   URI
   Problem Id : 2632
   Problem Name: Magic and Sword
*/

#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

struct magic {
  int damage;
  int radius[3];
};

magic create_magic(int damage, int radius[3]) {
  magic m;
  m.damage = damage;
  m.radius[0] = radius[0];
  m.radius[1] = radius[1];
  m.radius[2] = radius[2];
  return m;
}

int main() {
  int fire_radius[3] = {20, 30, 50};
  int water_radius[3] = {10, 25, 40};
  int earth_radius[3] = {25, 55, 70};
  int air_radius[3] = {18, 38, 60};

  map<string, magic> magics;
  magics["fire"] = create_magic(200, fire_radius);
  magics["water"] = create_magic(300, water_radius);
  magics["earth"] = create_magic(400, earth_radius);
  magics["air"] = create_magic(100, air_radius);

  int t;
  cin >> t;
  while(t--) {
    int w, h, x0, y0;
    cin >> w >> h >> x0 >> y0;

    int xs[4] = {x0, x0 + w, x0, x0 + w};
    int ys[4] = {y0, y0, y0 + h, y0 + h};

    string m;
    int n, cx, cy;
    cin >> m >> n >> cx >> cy;
    int radius = magics[m].radius[n - 1];

    int cxs[4] = {cx - radius, cx, cx, cx + radius};
    int cys[4] = {cy, cy - radius, cy + radius, cy};

    int x = x0 + w / 2;
    int y = y0 + h / 2;
    double d = sqrt(pow(x - cx, 2) + pow(y - cy, 2));

    int ncx = cx + radius * ((x - cx) / d);
    int ncy = cy + radius * ((y - cy) / d);

    double dx = max(abs(ncx - x) - w / 2, 0);
    double dy = max(abs(ncy - y) - h / 2, 0);
    bool hit = (dx * dx + dy * dy) <= 0;

    if (!hit) {
      for (int i = 0; i < 4; i++) {
        hit = pow(xs[i] - cx, 2) + pow(ys[i] - cy, 2) <= pow(radius, 2);

        if (hit) break;
      }
    }

    if (!hit) {
      for (int i = 0; i < 4; i++) {
        hit = cxs[i] >= x0 && cxs[i] <= x0 + w && cys[i] >= y0 && cys[i] <= y0 + h;

        if (hit) break;
      }
    }

    cout << (hit ? magics[m].damage : 0) << endl;
  }
}