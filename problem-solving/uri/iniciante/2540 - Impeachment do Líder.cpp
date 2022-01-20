/* 
   URI
   Problem Id : 2540
   Problem Name: Impeachment do Líder
*/

#include <iostream>
using namespace std;

int main() {
  int N, v, qtt;
  while (scanf("%d", &N) != EOF) {
    qtt = 0;
    for (int i = 0; i < N; i++) {
      scanf("%d", &v);	
      v == 1 ? qtt++ : qtt;
    }

    cout << (qtt >= (N * (2.0/3.0)) ? "impeachment" : "acusacao arquivada") << endl;
  }
}