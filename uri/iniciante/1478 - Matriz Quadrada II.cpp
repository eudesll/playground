/**
 * URI
 * Problem Id : 1478
 * Problem Name: Matriz Quadrada II
 */

#include <iostream>
using namespace std;

int main () {

	int n, hold;
	bool change;

	cin >> n;
	while (n != 0) {

		hold = 1;
		for (int i = 1; i <= n; i++) {
			change = i == 1 ? true : false;
			hold = i;

			for (int j = 0; j < n; j++) {
				cout.fill(' ');
				if (j == 0) {
					cout.width(3);
				} else {
					cout.width(4);
				}
				cout << hold;

				if (hold == 1) {
					change = true;
				}

				if (change) {
					hold++;
				} else {
					hold--;
				}				
			}

			cout << endl;
		}

		cout << endl;

		cin >> n;
	}

	return 0;
}