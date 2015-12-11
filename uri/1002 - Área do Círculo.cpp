/* 
   URI
   Problem Id : 1002
   Problem Name: Área do Círculo
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main () {
    double pi = 3.14159, raio;
    cin >> raio;
    cout << "A=" << setiosflags(ios::fixed) << setprecision(4) << pi * pow(raio,2) << endl;
 
    return 0;
}