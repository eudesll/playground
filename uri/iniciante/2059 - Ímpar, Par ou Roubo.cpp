/**
 * URI
 * Problem Id : 2059
 * Problem Name: Ímpar, Par ou Roubo
 */

#include <iostream>
using namespace std;

int whoWins(int e, int p1, int p2, int r, int a) {

	if ((r && !a) || (!r && a)) {
		return 1;
	}

	if (r && a) {
		return 2;
	}

	if (((p1 + p2) % 2 == 0 && e) || ((p1 + p2) % 2 != 0 && !e)) {
		return 1;
	} else {
		return 2;
	}

}

int main () {

	int e, p1, p2, r, a;

	cin >> e >> p1 >> p2 >> r >> a;

	cout << "Jogador " << whoWins(e, p1, p2, r, a) << " ganha!" << endl;

	return 0;
}