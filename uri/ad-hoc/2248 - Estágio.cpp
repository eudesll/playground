/**
 * URI
 * Problem Id : 2248
 * Problem Name: Estágio
 */

#include <iostream>
using namespace std;

int main () {

	int n, classN = 1;

	while (cin >> n && n) {

		int bAvg = 0, stds[1001], avgs[1001];

		for (int i = 0; i < n; i++) {
			cin >> stds[i] >> avgs[i];

			if (avgs[i] > bAvg) {
				bAvg = avgs[i];
			}
		}

		cout << "Turma " << classN++ << endl;
		for (int i = 0; i < n; i++) {

			if (avgs[i] == bAvg) {
				cout << stds[i] << " ";
			}
		}

		cout << endl << endl;

	}

	return 0;
}