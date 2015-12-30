/* 
   Project Euler
   Problem 10
   Problem Name: Summation of primes
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int primes[500000] = {0}, count = 0, num = 2;
	long long sumPrime = 0, endNum = 2000000;

	while (true) {
		bool canAdd = true;

		for (int i = 0; primes[i] <= sqrt(num) && primes[i] != 0; i++) {
			if (num % primes[i] == 0) {
				canAdd = false;
			}
		}

		if (canAdd) {
			primes[count++] = num;
			sumPrime += num;
		}

		num++;

		if (num >= endNum) {
			break;
		}
	}

	cout << "Prime Sum = " << sumPrime << endl;

	return 0;
}