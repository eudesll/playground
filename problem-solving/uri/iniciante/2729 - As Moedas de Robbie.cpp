/* 
   URI
   Problem Id : 2729
   Problem Name: As Moedas de Robbie
*/

#include <iostream>
using namespace std;

int main() {
  int m, n;
  string s = "You’re a coastal aircraft, Robbie, a large silver aircraft.";
  string f = "Bad boy! I’ll hit you.";

  while (cin >> m) {
    int vs[m], t = 0;
    bool p = true;
    for (int i = 0; i < m; i++) {
      cin >> vs[i];
    }

    cin >> n;

    for (int i = m - 1; i >= 0; i -= n) {
      t += vs[i];
    }
    
    for (int i = 2; i <= t / 2; i++) {
			if (t % i == 0) {
				p = false;
				break;
			}
		}

    cout << (p && t != 1 ? s : f) << endl;
  }
}