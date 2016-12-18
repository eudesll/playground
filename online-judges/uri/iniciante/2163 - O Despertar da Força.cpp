/**
 * URI
 * Problem Id : 2163
 * Problem Name: O Despertar da Força
 */

#include <iostream>
using namespace std;

int matrix[1001][1001];

int checkAround(int x, int y) {

	int sevenQ = 0;

	for (int i = x - 1; i <= x + 1; i++) {
		for (int j = y - 1; j <= y + 1; j++) {
			if (matrix[i][j] == 7) {
				sevenQ++;
			}
		}
	}

	if (sevenQ == 8) {
		return 1;
	}

	return 0;
}

int main () {

	int n, m, x = 0, y = 0;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> matrix[i][j];
		}
	}

	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j < m - 1; j++) {
			if (matrix[i][j] == 42) {
				if (checkAround(i, j)) {
					x = i + 1;
					y = j + 1;
					goto end;
				} 
			}
		}
	}

	end:
	cout << x << " " << y << endl;

	return 0;
}