/* 
   Project Euler
   Problem 12
   Problem Name: Highly divisible triangular number
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int divCount = 0, divQtd = 500, num = 0;

	for (int i = 1; divCount < divQtd; i++) {
		num += i;
		divCount = 1;

		for (int j = 1; j <= sqrt(num); j++) {
			if (num % j == 0) {
				divCount += 2;
			}
		}
	}

	cout << num << endl;

	return 0;
}