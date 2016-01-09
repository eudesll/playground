/* 
   HackerEarth
   Problem Name: square-number-14
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	long long num;
	double sqr;

	cin >> num;

	sqr = sqrt(num);

	if (sqr - floor(sqr) == 0) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}