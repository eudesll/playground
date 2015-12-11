/* 
   URI
   Problem Id : 1045
   Problem Name: Tipos de Triângulos
*/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main () {
    double num[3];
 
    cin >> num[0] >> num[1] >> num[2];
    sort(num, num + 3);
 
    if(num[2] >= num[0] + num[1]){
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if(pow(num[2], 2) == pow(num[0], 2) + pow(num[1], 2)){
            cout << "TRIANGULO RETANGULO" << endl;
        }
 
        if(pow(num[2], 2) > pow(num[0], 2) + pow(num[1], 2)){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
 
        if(pow(num[2], 2) < pow(num[0], 2) + pow(num[1], 2)){
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
 
        if(num[2] == num[0] && num[0] == num[1]){
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if(num[0] == num[1] || num[1] == num[2]){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}