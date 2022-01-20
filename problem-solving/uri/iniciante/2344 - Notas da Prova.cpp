/* 
   URI
   Problem Id : 2344
   Problem Name: Notas da Prova
*/

#include<iostream>
using namespace std;

int main() {
  int grade;

  cin >> grade;

  if (grade > 85) {
    cout << "A" << endl;
  } else if (grade > 60) {
    cout << "B" << endl;
  } else if (grade > 35) {
    cout << "C" << endl;
  } else if (grade > 0) {
    cout << "D" << endl;
  } else {
    cout << "E" << endl;
  }
}