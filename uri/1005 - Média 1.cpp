/* 
   URI
   Problem Id : 1005
   Problem Name: Média 1
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main () {
    double a, b;
    cin >> a >> b;
    cout << "MEDIA = " << setiosflags(ios::fixed) << setprecision(5) << ((a * 3.5) + (b * 7.5))/11 << endl;
 
    return 0;
}