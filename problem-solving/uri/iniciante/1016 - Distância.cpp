/* 
   URI
   Problem Id : 1016
   Problem Name: Distância
*/

#include <iostream>
using namespace std;
 
int main () {
    //S = So + v * t
    double x = 60.0, y = 90.0;
    int dist;
 
    cin >> dist;
 
    cout << (dist / (y - x)) * 60 << " minutos" << endl;
 
    return 0;
}