/**
 * URI
 * Problem Id : 2930
 * Problem Name: TCC da Depressão Natalino
 */

#include <iostream>
using namespace std;

int main () {

  int e, d, diff;
  string res = "Eu odeio a professora!";

  cin >> e >> d;

  diff = d - e;

  if (diff > 0) {
    if (diff >= 3) {
      res = "Muito bem! Apresenta antes do Natal!";
    } else {
      res = "Parece o trabalho do meu filho!\n";

      if (d + 2 <= 24) {
        res += "TCC Apresentado!";
      } else {
        res += "Fail! Entao eh nataaaaal!";
      }
    }
  }

  cout << res << endl;

	return 0;
}