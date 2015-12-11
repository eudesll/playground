/* 
   URI
   Problem Id : 1046
   Problem Name: Tempo de Jogo
*/

#include <iostream>
using namespace std;
 
int main () {
    int inicio, termino;
 
    cin >> inicio >> termino;
 
    if(inicio < termino){
        cout << "O JOGO DUROU " << termino - inicio << " HORA(S)" << endl;
    } else {
        cout << "O JOGO DUROU " << (termino + 24) - inicio << " HORA(S)" << endl;
    }
    return 0;
}