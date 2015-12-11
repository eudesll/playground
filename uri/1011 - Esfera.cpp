/* 
   URI
   Problem Id : 1011
   Problem Name: Esfera
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main () {
    int raio;
    double pi = 3.14159;
    cin >> raio;
    cout << "VOLUME = " << setiosflags(ios::fixed) << setprecision(3) << (4/3.0) * pi * pow(raio,3) << endl;
 
    return 0;
}