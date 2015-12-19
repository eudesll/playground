/* 
   Project Euler
   Problem 3
   Problem Name: Largest prime factor
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	long long n = 600851475143;
 
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			n /= i;
			i--;
		}
	}

	cout << n << endl;

	return 0;
}