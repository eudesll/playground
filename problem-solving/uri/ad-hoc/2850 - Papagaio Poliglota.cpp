/**
 * URI
 * Problem Id : 2850
 * Problem Name: Papagaio Poliglota
 */

#include <iostream>
using namespace std;

int main () {

  string pLegs, res;

  while (getline(cin, pLegs)) {
    if (pLegs == "esquerda") {
      res = "ingles";
    } else if (pLegs == "direita") {
      res = "frances";
    } else if (pLegs == "nenhuma") {
      res = "portugues";
    } else {
      res = "caiu";
    }

    cout << res << endl;
  }

	return 0;
}