/**
 * URI
 * Problem Id : 1156
 * Problem Name: Sequência S II
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	double sum = 1.0, j = 2.0;

	for (int i = 3; i <= 39; i += 2) {
		sum += i / j;
		j *= 2;
	}

	cout << fixed << setprecision(2) << sum << endl;

	return 0;
}