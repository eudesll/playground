/**
 * URI
 * Problem Id : 1175
 * Problem Name: Troca em Vetor I
 */

#include <iostream>
using namespace std;

int main () {

	int num[20], count = 0;

	for (int i = 0; i < 20; i++) {
		cin >> num[i];
	}

	for (int i = 19; i >= 0; i--) {
		cout << "N[" << count++ << "] = " << num[i] << endl;
	}

	return 0;
}