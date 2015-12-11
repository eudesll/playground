/* 
   URI
   Problem Id : 1020
   Problem Name: Idade em Dias
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    int dias;
 
    cin >> dias;
 
    cout << dias / 365 << " ano(s)" << endl;
    cout << dias % 365 / 30 << " mes(es)" << endl;
    cout << dias % 365 % 30 << " dia(s)" << endl;
 
    return 0;
}