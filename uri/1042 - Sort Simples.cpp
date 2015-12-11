/* 
   URI
   Problem Id : 1042
   Problem Name: Sort Simples
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int main () {
    int num[3], numOrig[3];
 
    cin >> num[0] >> num[1] >> num[2];
    copy(num, num + 3, numOrig);
    sort(num, num + 3);
 
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl << endl;
 
    cout << numOrig[0] << endl;
    cout << numOrig[1] << endl;
    cout << numOrig[2] << endl;
 
    return 0;
}