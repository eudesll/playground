/* 
   HackerEarth
   Problem Name: find-factorial
*/

#include <iostream>
using namespace std;

int main()
{
    long long i, res = 1;
    
    cin >> i;
    
    while (i) {
    	res *= i--;
    }
    
    cout << res << endl;
    
    return 0;
}
