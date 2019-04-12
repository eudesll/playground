/* 
   SPOJ Brasil Problem Set (obi)
   XXXX. Tacógrafo
   Problem Name: JTACOGRA
*/

#include <iostream>
using namespace std;

int main () {

  long n, t, v, s = 0;

  cin >> n;
  while (n--) {
    cin >> t >> v;
    s += t * v;
  }

  cout << s << endl;

	return 0;
}