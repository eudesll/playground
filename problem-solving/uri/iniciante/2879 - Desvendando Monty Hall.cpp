/**
 * URI
 * Problem Id : 2879
 * Problem Name: Desvendando Monty Hall
 */

#include <iostream>
using namespace std;

int main () {

  int t, n, correctChoices = 0;

  cin >> t;
  while(t--) {

    cin >> n;
    if (n != 1) {
      correctChoices++;
    }

  }

  cout << correctChoices << endl;
  
	return 0;
}