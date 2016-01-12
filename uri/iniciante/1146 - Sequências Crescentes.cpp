/**
 * URI
 * Problem Id : 1146
 * Problem Name: Sequências Crescentes
 */

#include <iostream>
using namespace std;

int main () {

	int n;

	cin >> n;
	while (n > 0) {
		for (int i = 1; i <= n; i++) {
			cout << i;

			if (i < n) {
				cout << " ";
			}
		}
		cout << endl;
		
		cin >> n;
	}

	return 0;
}