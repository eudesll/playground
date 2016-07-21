/**
 * URI
 * Problem Id : 2137
 * Problem Name: A Biblioteca do Senhor Severino
 */

#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main () {

	int n;

	while (cin >> n) {

		int books[1000];

		for (int i = 0; i < n; i++) {
			cin >> books[i];
		}

		sort(books, books + n);

		for (int i = 0; i < n; i++) {
			cout << setw(4) << setfill('0') << books[i] << endl;
		}
	}

	return 0;
}