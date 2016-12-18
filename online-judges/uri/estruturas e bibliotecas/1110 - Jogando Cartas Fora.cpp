/**
 * URI
 * Problem Id : 1110
 * Problem Name: Jogando Cartas Fora
 */

#include <iostream>
#include <queue>
using namespace std;

int main () {

	int n;
	queue<int> cards, discarded;

	while (cin >> n && n) {

		for (int i = 1; i <= n; i++) {
			cards.push(i);
		}

		while (cards.size() > 1) {

			discarded.push(cards.front());
			cards.pop();
			cards.push(cards.front());
			cards.pop();

		}

		cout << "Discarded cards: ";
		int dSize = discarded.size();

		for (int i = 0; i < dSize; i++) {
			cout << discarded.front();
			discarded.pop();

			if (i < dSize - 1) {
				cout << ", ";
			}
		}

		cout << endl << "Remaining card: " << cards.front() << endl;

		queue<int> empty;
		queue<int> empty1;
		swap(cards, empty);
		swap(discarded, empty1);

	}

	return 0;
}