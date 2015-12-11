/* 
   URI
   Problem Id : 1017
   Problem Name: Gasto de Combustível
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main () {
    int tempoGasto, velocidadeMedia;
 
    cin >> tempoGasto >> velocidadeMedia;
 
    cout << setiosflags(ios::fixed) << setprecision(3) << (tempoGasto * velocidadeMedia) / 12.0 << endl;
 
    return 0;
}