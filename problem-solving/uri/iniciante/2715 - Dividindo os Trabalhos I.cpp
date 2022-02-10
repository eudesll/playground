/* 
   URI
   Problem Id : 2715
   Problem Name: Dividindo os Trabalhos I
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    long long int sum = 0, ns[n], i;

    for (i = 0; i < n; i++) {
      cin >> ns[i];
      sum += ns[i];
    }

    long long int r = i = 0;
    while (r < sum / 2) {
      r += ns[i++];
    }

    long long int g = sum - r;
    int low_diff = abs(r - g);

    while (true) {
      int cur_value = ns[--i];
      r -= cur_value;
      g += cur_value;

      if (low_diff < abs(r - g)) {
        break;
      }

      low_diff = abs(r - g);
    }

    cout << low_diff << endl;
  }
}