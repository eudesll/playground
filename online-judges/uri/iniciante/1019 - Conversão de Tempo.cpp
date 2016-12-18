/* 
   URI
   Problem Id : 1019
   Problem Name: Conversão de Tempo
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main () {
    int tempo;
 
    cin >> tempo;
 
    cout << tempo / 60 / 60 << ":" << tempo / 60 % 60 << ":" << tempo % 60 % 60 % 60 << endl;
 
    return 0;
}