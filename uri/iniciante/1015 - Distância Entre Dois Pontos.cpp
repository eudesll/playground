/* 
   URI
   Problem Id : 1015
   Problem Name: Distância Entre Dois Pontos
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main () {
    int x1, x2, y1, y2;
 
    cin >> x1 >> y1 >> x2 >> y2;
    cout << setiosflags(ios::fixed) << setprecision(4) << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
 
    return 0;
}