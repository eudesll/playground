/**
 * URI
 * Problem Id : 1180
 * Problem Name: Menor e Posição
 */

#include <iostream>
using namespace std;

int main () {

	int n, num, pos, min;

	cin >> n >> min;
	pos = 0;

	for (int i = 1; i < n; i++) {
		cin >> num;

		if (num < min) {
			min = num;
			pos = i;
		}
	}

	cout << "Menor valor: " << min << endl;
	cout << "Posicao: " << pos << endl;

	return 0;
}