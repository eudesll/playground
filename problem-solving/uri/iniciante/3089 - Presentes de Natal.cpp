/**
 * URI
 * Problem Id : 3089
 * Problem Name: Presentes de Natal
 */

 #include <iostream>
 #include <algorithm>
 using namespace std;

 int main() {
  int n;
  while (cin >> n && n) {
    int x[n], t;
    bool dec = false;

    for (int i = 0; i < n; i++) {
      x[i] = 0;
    }

    int i = 0;
    while (i >= 0) {
      cin >> t;
      x[i++] += t;
      
      if (i == n) {
        i = 0;
      }
    }

    cout << x[0] << " " << x[n - 1] << endl;
  }
}