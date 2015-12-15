/* 
   URI
   Problem Id : 1018
   Problem Name: Cédulas
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main () {
    int dinheiro;
 
    cin >> dinheiro;
 
    cout << dinheiro << endl;
    cout << dinheiro / 100 << " nota(s) de R$ 100,00" << endl;
    dinheiro %= 100;
    cout << dinheiro / 50 << " nota(s) de R$ 50,00" << endl;
    dinheiro %= 50;
    cout << dinheiro / 20 << " nota(s) de R$ 20,00" << endl;
    dinheiro %= 20;
    cout << dinheiro / 10 << " nota(s) de R$ 10,00" << endl;
    dinheiro %= 10;
    cout << dinheiro / 5 << " nota(s) de R$ 5,00" << endl;
    dinheiro %= 5;
    cout << dinheiro / 2 << " nota(s) de R$ 2,00" << endl;
    dinheiro %= 2;
    cout << dinheiro / 1 << " nota(s) de R$ 1,00" << endl;
 
    return 0;
}