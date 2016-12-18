/* 
   Project Euler
   Problem 7
   Problem Name: 10001st prime
*/

#include <iostream>
using namespace std;

int main () {
	
	int primes[50000] = {0}, count = 0, num = 2, lastPrime = 10000;

	while (primes[lastPrime] == 0) {
		bool canAdd = true;

		for (int i = 0; primes[i] != 0; i++) {
			if (num % primes[i] == 0) {
				canAdd = false;
			}
		}

		if (canAdd) {
			primes[count] = num;
			count++;
		}

		num++;
	}

	cout << primes[lastPrime] << endl;

	return 0;
}