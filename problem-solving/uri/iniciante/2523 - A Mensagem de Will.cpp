/* 
   URI
   Problem Id : 2523
   Problem Name: A Mensagem de Will
*/

#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int n, i;
  string cyp;

  while (cin >> cyp) {
    stringstream res;
    cin >> n;
    while(n--) {
      cin >> i;
      res << cyp[i-1];
    }

    cout << res.str() << endl;
  }
}