/* 
   URI
   Problem Id : 1014
   Problem Name: O Consumo
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main () {
    double distTotal, combustGasto;
 
    cin >> distTotal >> combustGasto;
    cout << setiosflags(ios::fixed) << setprecision(3) << distTotal / combustGasto << " km/l" << endl;
 
    return 0;
}