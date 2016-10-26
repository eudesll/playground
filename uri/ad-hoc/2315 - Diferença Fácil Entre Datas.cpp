/**
 * URI
 * Problem Id : 2315
 * Problem Name: Diferença Fácil Entre Datas
 */

#include <iostream>
#include <map>
using namespace std;

int main () {

	int d1, d2, m1, m2, qt = 0;
	map<int, int> months;

	months[1] = 31;
	months[2] = 28;
	months[3] = 31;
	months[4] = 30;
	months[5] = 31;
	months[6] = 30;
	months[7] = 31;
	months[8] = 31;
	months[9] = 30;
	months[10] = 31;
	months[11] = 30;
	months[12] = 31;

	cin >> d1 >> m1 >> d2 >> m2;

	if (m1 == m2) {
		qt = d2 - d1;
	} else {
		qt = months[m1] - d1;

		for (int i = m1 + 1; i < m2; i++) {
			qt += months[i];
		}
		
		qt += d2;
	}

	cout << qt << endl;

	return 0;
}