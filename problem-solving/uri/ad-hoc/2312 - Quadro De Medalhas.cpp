/**
 * URI
 * Problem Id : 2312
 * Problem Name: Quadro De Medalhas
 */

#include <iostream>
#include <algorithm>
using namespace std;

struct countryMedals {
	int gold, silver, copper;
	string name;

	friend bool operator< (countryMedals a, countryMedals b) {

		return a.gold > b.gold ||
			(a.gold == b.gold && a.silver > b.silver) ||
			(a.gold == b.gold && a.silver == b.silver && a.copper > b.copper) ||
			(a.gold == b.gold && a.silver == b.silver && a.copper == b.copper && a.name < b.name);

	}
};

int main () {

	int n;	

	while (cin >> n && n) {
		countryMedals scores[501];

		for (int i = 0; i < n; i++) {

			cin >> scores[i].name >> scores[i].gold >> scores[i].silver >> scores[i].copper;
		}

		sort(scores, scores + n);

		for (int i = 0; i < n; i++) {

			cout << scores[i].name << " " << scores[i].gold << " " << scores[i].silver << " " << scores[i].copper << endl;
		}
	}

	return 0;
}