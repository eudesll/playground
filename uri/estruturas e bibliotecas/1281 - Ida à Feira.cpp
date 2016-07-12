/**
 * URI
 * Problem Id : 1281
 * Problem Name: Ida à Feira
 */

#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main () {

	int n, m, qt;
	double sum, val;
	string prod;
	map<string, double> prods;

	cin >> n;
	while (n--) {

		cin >> m;
		while (m--) {
			cin >> prod >> val;
			prods[prod] = val;
		}

		sum = 0;

		cin >> m;
		while (m--) {
			cin >> prod >> qt;

			sum += prods[prod] * qt;
		}

		cout << "R$ " << fixed << setprecision(2) << sum << endl;
	}

	return 0;
}