/**
 * URI
 * Problem Id : 1173
 * Problem Name: Preenchimento de Vetor I
 */

#include <iostream>
using namespace std;

int main () {

	long n, ant = 0;

	cin >> n;
	for (int i = 0; i < 10; i++) {
		n += ant;
		cout << "N[" << i << "] = " << n << endl;
		ant = n;
	}


	return 0;
}