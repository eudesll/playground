/* 
   URI
   Problem Id : 1009
   Problem Name: Salário com Bônus
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main () {
    string nome;
    double salarioFixo, montanteVendas;
    cin >> nome >> salarioFixo >> montanteVendas;
    cout << "TOTAL = R$ " << setiosflags(ios::fixed) << setprecision(2) << salarioFixo + (montanteVendas * 0.15) << endl;
 
    return 0;
}