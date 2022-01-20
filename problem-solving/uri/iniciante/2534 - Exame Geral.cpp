/* 
   URI
   Problem Id : 2534
   Problem Name: Exame Geral
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N, Q, q;

  while (cin >> N >> Q) {
    int ns[N];
    for (int i = 0; i < N; i++) {
      cin >> ns[i];
    }

    sort(ns, ns + N, greater<int>());

    while (Q--) {
      cin >> q;
      cout << ns[q - 1] << endl;
    }
  }
}