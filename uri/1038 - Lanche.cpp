/* 
   URI
   Problem Id : 1038
   Problem Name: Lanche
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main () {
    int escolha, quantidade;
    double preco[5] = {4.0, 4.5, 5.0, 2.0, 1.5};
 
    cin >> escolha >> quantidade;
 
    cout << "Total: R$ " << setiosflags(ios::fixed) << setprecision(2) << preco[escolha - 1] * quantidade << endl;
 
    return 0;
}