/**
 * URI
 * Problem Id : 2926
 * Problem Name: Então é Natal!
 */

#include <iostream>
using namespace std;

int main () {

  int n;

  cin >> n;
  string aRep = string(n, 'a');
  string res = "Ent" + aRep + "o eh N" + aRep + "t" + aRep + "l!";

  cout << res << endl;

	return 0;
}