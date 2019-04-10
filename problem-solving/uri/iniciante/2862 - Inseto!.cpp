/**
 * URI
 * Problem Id : 2862
 * Problem Name: Inseto!
 */

#include <iostream>
using namespace std;

int main () {

  int c, n;
  string res;

  cin >> c;
  while(c--) {
    res = "Inseto!";
    cin >> n;

    if (n > 8000) {
      res = "Mais de 8000!";
    }

    cout << res << endl;
  }
  
	return 0;
}