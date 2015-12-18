/* 
   Project Euler
   Problem 1
   Problem Name: Multiples of 3 and 5
*/

#include <iostream>
using namespace std;

int main () {

	long sum = 0;

	for (int i = 999; i >= 3; i--) {
		if (i % 5 == 0 || i % 3 == 0) {
			sum += i;
		}
	}

	cout << sum << endl;

	return 0;
}