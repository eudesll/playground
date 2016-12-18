/**
 * URI
 * Problem Id : 1318
 * Problem Name: Bilhetes Falsos
 */

#include <iostream>
using namespace std;

int main () {

	int n, m;

	while (cin >> n >> m && n != 0 && m != 0) {

		int b[10001] = {0}, num, clones = 0;

		while (m--) {
			cin >> num;

			if (b[num] > 0) {
				b[num] = -1;
				clones++;
			} else if (b[num] == 0) {
				b[num] = 1;
			}			
		}

		cout << clones << endl;
	}

	return 0;
}