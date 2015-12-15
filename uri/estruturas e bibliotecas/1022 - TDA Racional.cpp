/* 
   URI
   Problem Id : 1022
   Problem Name: TDA Racional
*/

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;
 
int mdc (int numerador, int divisor) {
    return (divisor != 0) ? mdc(divisor, (numerador % divisor)) : abs(numerador);
}
 
string simplificar (int numerador, int divisor) {
    int div;
    while(true){
        div = mdc(numerador, divisor);
 
        if(div == 1){
            break;
        }
 
        numerador /= div;
        divisor /= div;
    }
    ostringstream os;
    os << numerador << "/" << divisor;
 
    return os.str();
}
 
int main () {
    int qtdTeste, n1, d1, n2, d2;
    int numerador, divisor, numeradorSimpl, divisorSimpl;
    char oper, temp;
 
    cin >> qtdTeste;
 
    while(qtdTeste > 0){
        cin >> n1 >> temp >> d1 >> oper >> n2 >> temp >> d2;
        switch(oper){
        case '+':
            numerador = (n1*d2 + n2*d1);
            divisor = (d1*d2);
            cout << numerador << "/" << divisor << " = " << simplificar(numerador, divisor) << endl;
            break;
        case '-':
            numerador = (n1*d2 - n2*d1);
            divisor = (d1*d2);
            cout << numerador << "/" << divisor << " = " << simplificar(numerador, divisor) << endl;
            break;
        case '*':
            numerador = (n1*n2);
            divisor = (d1*d2);
            cout << numerador << "/" << divisor << " = " << simplificar(numerador, divisor) << endl;
            break;
        case '/':
            numerador = (n1*d2);
            divisor = (n2*d1);
            cout << numerador << "/" << divisor << " = " << simplificar(numerador, divisor) << endl;
            break;
        }
 
        qtdTeste--;
    }
 
    return 0;
}