/* 
   HackerEarth
   Problem Name: find-product
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, num, answer = 1, toMod = pow(10, 9) + 7;
    
    cin >> n;
    while (n--) {
    	cin >> num;
    	
    	answer *= num;
    	answer = answer % toMod;
    }
    
    cout << answer << endl;
    
    return 0;
}
