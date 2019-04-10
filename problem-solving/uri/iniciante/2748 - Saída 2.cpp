/**
 * URI
 * Problem Id : 2748
 * Problem Name: Saída 2
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

  // cout << "---------------------------------------" << endl;
  // cout << "|        Roberto                      |" << endl;
  // cout << "|                                     |" << endl;
  // cout << "|        5786                         |" << endl;
  // cout << "|                                     |" << endl;
  // cout << "|        UNIFEI                       |" << endl;
  // cout << "---------------------------------------" << endl;

  string infos [] = { "Roberto", "5786", "UNIFEI" };  
  int curInfo = 0;

  cout << "---------------------------------------" << endl;
  for (int i = 0; i < 5; i++) {
    string res = "";
    int size = 37;

    if (i % 2 == 0) {
      res += printSpaces(8);
      res += infos[curInfo++];
      size -= res.size();
    }

    res += printSpaces(size);

    cout << "|" << res << "|" << endl;
  }
  cout << "---------------------------------------" << endl;

	return 0;
}