/* 
    SPOJ Brasil Problem Set (obi)
    Cartas
    Problem Name: CARTAS14   
*/

#include <iostream>
using namespace std;

int main(void) {

	int c[5];
	char r = '0';

	for (int i = 0; i < 5; i++) {
		cin >> c[i];

		if (i > 0 && r != 'N') {
			if (c[i] > c[i - 1]) {
				if (r != '0' && r != 'C') {
					r = 'N';
				} else {
					r = 'C';
				}
			} else if (c[i] < c[i - 1]) {
				if (r != '0' && r != 'D') {
					r = 'N';
				} else {
					r = 'D';
				}
			} else {
				r = 'N';
			}
		}
	}

	cout << r << endl;

	return 0;
}