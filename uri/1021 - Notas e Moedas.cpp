/* 
   URI
   Problem Id : 1021
   Problem Name: Notas e Moedas
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main () {
    double dinheiro;
 
    cin >> dinheiro;
 
    cout << "NOTAS:" << endl;
    cout << floor(dinheiro / 100) << " nota(s) de R$ 100.00" << endl;
    dinheiro = fmod(dinheiro, 100);
    cout << floor(dinheiro / 50) << " nota(s) de R$ 50.00" << endl;
    dinheiro = fmod(dinheiro, 50);
    cout << floor(dinheiro / 20) << " nota(s) de R$ 20.00" << endl;
    dinheiro = fmod(dinheiro, 20);
    cout << floor(dinheiro / 10) << " nota(s) de R$ 10.00" << endl;
    dinheiro = fmod(dinheiro, 10);
    cout << floor(dinheiro / 5) << " nota(s) de R$ 5.00" << endl;
    dinheiro = fmod(dinheiro, 5);
    cout << floor(dinheiro / 2) << " nota(s) de R$ 2.00" << endl;
    dinheiro = fmod(dinheiro, 2);
 
    cout << "MOEDAS:" << endl;
    cout << floor(dinheiro / 1) << " moeda(s) de R$ 1.00" << endl;
    dinheiro = fmod(dinheiro, 1);
    cout << floor(dinheiro / 0.50) << " moeda(s) de R$ 0.50" << endl;
    dinheiro = fmod(dinheiro, 0.50);
    cout << floor(dinheiro / 0.25) << " moeda(s) de R$ 0.25" << endl;
    dinheiro = fmod(dinheiro, 0.25);
    cout << floor(dinheiro / 0.10) << " moeda(s) de R$ 0.10" << endl;
    dinheiro = fmod(dinheiro, 0.10);
    cout << floor(dinheiro / 0.05) << " moeda(s) de R$ 0.05" << endl;
    dinheiro = fmod(dinheiro, 0.05);
    cout << floor(dinheiro / 0.01) << " moeda(s) de R$ 0.01" << endl;
 
    return 0;
}