/**
 * URI
 * Problem Id : 1855
 * Problem Name: Mapa do Meistre
 */

#include <iostream>
using namespace std;

int main () {

	int x, y, a, b;
	char map[100][100], orient, current;

	cin >> a >> b;

	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			cin >> map[i][j];
		}
	}

	x = y = 0;
	while(true) {

		current = map[x][y];
		map[x][y] = '0';

		if (current == '>' || current == '<' || current == 'v' || current == '^') {
			orient = current;
		}

		if (orient == '>') {
			y++;
		} else if (orient == '<') {
			y--;
		} else if (orient == 'v') {
			x++;
		} else if (orient == '^') {
			x--;
		}

		if (current == '*') {
			cout << "*" << endl;
			break;
		} else if (current == '0' || x < 0 || y < 0 || x >= b || y >= a) {
			cout << "!" << endl;
			break;
		}

	}

	return 0;
}