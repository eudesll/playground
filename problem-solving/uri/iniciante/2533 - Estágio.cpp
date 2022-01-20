/* 
   URI
   Problem Id : 2533
   Problem Name: Estágio
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int qtt;
  
  cout << fixed << setprecision(4);

  while(cin >> qtt) {
    double sumN = 0, sumC = 0, N, C;
    while(qtt--) {
      cin >> N >> C;
      sumN += N * C;
      sumC += C;
    }

    cout << sumN / (sumC * 100) << endl;
  }
}