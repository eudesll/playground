/**
 * URI
 * Problem Id : 1101
 * Problem Name: Sequência de Números e Soma
 */

#include <iostream>
using namespace std;

int main () {

	int n, m, sum;

	cin >> n >> m;
	while (n > 0 && m > 0) {

		sum = 0;
		for (int i = (n < m ? n : m); i <= (n > m ? n : m); i++) {
			cout << i << " ";
			sum += i;
		}

		cout << "Sum=" << sum << endl;

		cin >> n >> m;
	}

	return 0;
}