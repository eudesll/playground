/**
 * URI
 * Problem Id : 1216
 * Problem Name: Getline One
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int qt = 0, n;
	double sum;
	string name;

	while (getline(cin, name)) {
		cin >> n;

		sum += n;
		qt++;

		cin.ignore();
	}

	cout << fixed << setprecision(1) << (sum / qt) << endl;

	return 0;
}