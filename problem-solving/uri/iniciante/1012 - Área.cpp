/* 
   URI
   Problem Id : 1012
   Problem Name: Área
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main () {
    double a, b, c, pi = 3.14159;
 
    cin >> a >> b >> c;
    cout << "TRIANGULO: " << setiosflags(ios::fixed) << setprecision(3) << (a * c) / 2 << endl;
    cout << "CIRCULO: " << setiosflags(ios::fixed) << setprecision(3) << pi * pow(c, 2) << endl;
    cout << "TRAPEZIO: " << setiosflags(ios::fixed) << setprecision(3) << ((a+b)*c)/2 << endl;
    cout << "QUADRADO: " << setiosflags(ios::fixed) << setprecision(3) << pow(b, 2) << endl;
    cout << "RETANGULO: " << setiosflags(ios::fixed) << setprecision(3) << a * b << endl;
 
    return 0;
}