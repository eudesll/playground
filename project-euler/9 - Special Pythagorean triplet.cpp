/* 
   Project Euler
   Problem 9
   Problem Special Pythagorean triplet
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int sum = 1000;

	for (int a = 1; a < sum; a++) {
		for (int b = a + 1; b < sum; b++) {

			int c = sum - a - b;
			if (sqrt(a * a + b * b) == c) {

				cout << "a = " << a << endl;
				cout << "b = " << b << endl;
				cout << "c = " << c << endl;
				cout << "a * b * c = " << (a * b * c) << endl;
				
				goto end;
			}
		}
	}

	end:
	return 0;
}