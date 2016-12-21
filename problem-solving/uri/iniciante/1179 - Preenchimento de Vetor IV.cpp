/**
 * URI
 * Problem Id : 1179
 * Problem Name: Preenchimento de Vetor IV
 */

#include <iostream>
using namespace std;

int main () {

	int odd[5], even[5], oddC = 0, evenC = 0, n;

	for (int i = 0; i < 15; i++) {
		cin >> n;

		if (n % 2 == 0) {
			even[evenC++] = n;

			if (evenC == 5) {
				for (int j = 0; j < 5; j++) {
					cout << "par[" << j << "] = " << even[j] << endl;
				}

				evenC = 0;
			}
		} else {
			odd[oddC++] = n;

			if (oddC == 5) {
				for (int j = 0; j < 5; j++) {
					cout << "impar[" << j << "] = " << odd[j] << endl;
				}

				oddC = 0;
			}
		}
	}

	if (oddC > 0) {
		for (int j = 0; j < oddC; j++) {
			cout << "impar[" << j << "] = " << odd[j] << endl;
		}
	}

	if (evenC > 0) {
		for (int j = 0; j < evenC; j++) {
			cout << "par[" << j << "] = " << even[j] << endl;
		}
	}	

	return 0;
}