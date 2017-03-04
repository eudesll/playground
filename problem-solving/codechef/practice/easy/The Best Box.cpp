/* 
   CodeChef
   Problem Name: J7
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	/*
	4a + 4b + 4c    = P 
	2ab + 2ac + 2bc = S

	Volume = a * b * c
	 */

	int n, p, s;

	cin >> n;
	while (n--) {
		cin >> p >> s;
		
		double a,b,c;
		a = (p - sqrt(p * p - 24.0 * s)) / 12.0;
		b = a;
		c = (p / 4.0) - (8.0 * a) / 4.00;

		cout << fixed << setprecision(2) << (a * b * c) << endl;
	}

	return 0;
}