/* 
   URI
   Problem Id : 1010
   Problem Name: Cálculo Simples
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main () {
    int pec1, qtdPec1, pec2, qtdPec2;
    double valorPec1, valorPec2;

    cin >> pec1 >> qtdPec1 >> valorPec1;
    cin >> pec2 >> qtdPec2 >> valorPec2;

    cout << "VALOR A PAGAR: R$ " << setiosflags(ios::fixed) << setprecision(2) << qtdPec1 * valorPec1 + qtdPec2 * valorPec2 << endl;
 
    return 0;
}