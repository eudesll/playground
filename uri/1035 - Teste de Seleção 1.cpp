/* 
   URI
   Problem Id : 1035
   Problem Name: Teste de Seleção 1
*/

#include <iostream>
using namespace std;
 
int main () {
    int a, b, c, d;
 
    cin >> a >> b >> c >> d;
 
    if(b > c && d > a && c + d > a + b && c > -1 && d > -1 && (a % 2 == 0))
        cout << "Valores aceitos" << endl;
    else
        cout << "Valores nao aceitos" << endl;
 
    return 0;
}