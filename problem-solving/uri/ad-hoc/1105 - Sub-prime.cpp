/**
 * URI
 * Problem Id : 1105
 * Problem Name: Sub-prime
 */

#include <iostream>
#include <map>
using namespace std;

int main () {

  int b, n, v, d, c;

  while (cin >> b >> n && b && n) {
    map<int, int> banks;
    bool canPay = true;

    for (int i = 1; i <= b; i++) {
      cin >> v;
      banks[i] = v;
    }

    for (int i = 0; i < n; i++) {
      cin >> d >> c >> v;
      banks[d] -= v;
      banks[c] += v;
    }

    map<int, int>::iterator bank;
    for (bank = banks.begin(); bank != banks.end(); ++bank) {
      if (bank->second < 0) {
        canPay = false;
        break;
      }
    }

    cout << (canPay ? "S" : "N") << endl;
  }

	return 0;
}