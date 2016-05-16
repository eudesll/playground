/**
 * URI
 * Problem Id : 1905
 * Problem Name: Polícia e Ladrão
 */

#include <iostream>
using namespace std;

int n, m[5][5], f;

void search(int i, int j) {

	m[i][j] = m[i][j] == 0 ? m[i][j] = 2 : (m[i][j] == 2 ? m[i][j] = 1 : m[i][j] = 1);
	
	if (i == 4 && j == 4) {
		f = 1;
	}

	if (f == 0 && i + 1 < 5 && m[i + 1][j] != 1) {
		search(i + 1, j);
	}

	if (f == 0 && j + 1 < 5 && m[i][j + 1] != 1) {
		search(i, j + 1);
	}

	if (f == 0 && i - 1 >= 0 && m[i - 1][j] != 1) {
		search(i - 1, j);
	}

	if (f == 0 && j - 1 >= 0 && m[i][j - 1] != 1) {
		search(i, j - 1);
	}
}

int main () {	

	cin >> n;
	while (n--) {

		f = 0;

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> m[i][j];
			}
		}

		search(0, 0);

		if (f) {
			cout << "COPS" << endl;
		} else {
			cout << "ROBBERS" << endl;
		}

	}

 	return 0;
}