/* 
   URI
   Problem Id : 2483
   Problem Name: Feliz Nataaaal!
*/

#include<iostream>
#include <sstream>
using namespace std;

int main() {
  int qtd;
  stringstream ss;

  cin >> qtd;

  while(qtd--) {
    ss << "a";
  }

  cout << "Feliz nat" << ss.str() << "l!" << endl;
}