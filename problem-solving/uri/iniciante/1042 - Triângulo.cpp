/* 
   URI
   Problem Id : 1042
   Problem Name: Triângulo
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main () {
    double a, b, c;
 
    cin >> a >> b >> c;
 
    if(a + b <= c || a + c <= b || c + b <= a){
        cout << "Area = " << setiosflags(ios::fixed) << setprecision(1) << ((a + b) * c) / 2 << endl;
    } else {
        cout << "Perimetro = " << setiosflags(ios::fixed) << setprecision(1) <<  a + b + c << endl;
    }
    return 0;
}