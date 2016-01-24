/**
 * URI
 * Problem Id : 1557
 * Problem Name: Matriz Quadrada III
 */

#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int main () {

	string sizeH;
	int n, size, holdI, hold;

	while (cin >> n && n) {
		size = pow(2, n + n - 2);

		ostringstream ss;
		ss << size;

		sizeH = ss.str();
		size = sizeH.length();

		holdI = 1;
		for (int i = 1; i <= n; i++) {

			hold = holdI;
			for (int j = 1; j <= n; j++) {
				cout.fill(' ');
				if (j == 1) {
					cout.width(size);
				} else {
					cout.width(size + 1);
				}
				cout << hold;

				hold *= 2;
			}
			
			holdI = holdI * 2;

			cout << endl;
		}

		cout << endl;		
	}

	return 0;
}