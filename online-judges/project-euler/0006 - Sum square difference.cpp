/* 
   Project Euler
   Problem 6
   Problem Name: Sum square difference
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int n = 100;
	long long sqSum = 0, sumSq = 0, result;

	sumSq = pow(n, 2) * pow((n + 1), 2) / 4;
	sqSum = n * (n + 1) * (2 * n + 1) / 6;

	result = sumSq - sqSum;
	cout << result << endl;

	return 0;
}