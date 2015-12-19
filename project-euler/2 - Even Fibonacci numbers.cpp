/* 
   Project Euler
   Problem 2
   Problem Name: Even Fibonacci numbers
*/

#include <iostream>
using namespace std;

int main () {

	int first = 1, second = 2, result;
	long total = 2;

	result = first + second;
	while (result < 4000000) {

		first = second;
		second = result;

		result = first + second;

		if (result % 2 == 0) {
			total += result;
		}
	}

	cout << total << endl;

	return 0;
}