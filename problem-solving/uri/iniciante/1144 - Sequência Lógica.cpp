/**
 * URI
 * Problem Id : 1144
 * Problem Name: Sequência Lógica
 */

#include <iostream>
using namespace std;

int main () {

	int n;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << " ";
		cout << (i * i) << " ";
		cout << (i * i * i) << endl;

		cout << i << " ";
		cout << (i * i + 1) << " ";
		cout << (i * i * i + 1) << endl;
	}

	return 0;
}