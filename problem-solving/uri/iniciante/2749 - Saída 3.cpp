/**
 * URI
 * Problem Id : 2749
 * Problem Name: Saída 3
 */

#include <iostream>
using namespace std;

string printSpaces(int quantity) {
  string res = "";
  for (int i = 0; i < quantity; i++) {
    res += " ";
  }

  return res;
}

int main () {
  string info = "x = 35";  
  int infoPos[] = {1, 16, 32}, curInfo = 0;

  cout << "---------------------------------------" << endl;
  for (int i = 0; i < 5; i++) {
    string res = "";
    int size = 37;

    if (i % 2 == 0) {
      res += printSpaces(infoPos[curInfo++] - 1);
      res += info;
      size -= res.size();
    }

    res += printSpaces(size);

    cout << "|" << res << "|" << endl;
  }
  cout << "---------------------------------------" << endl;

	return 0;
}