/**
 * URI
 * Problem Id : 2311
 * Problem Name: Saltos Ornamentais
 */

#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
	
	int n;
	double grades[7], diff;
	string name;
	
	cin >> n;
	while (n--) {
		double sum = 0;
		cin >> name >> diff;

		for (int i = 0; i < 7; i++) {
			cin >> grades[i];	
		}

		sort(grades, grades + 7);

		for (int i = 1; i < 6; i++) {
			sum += grades[i];
		}

		cout << name << " ";
		cout << fixed << setprecision(2) << (sum * diff) << endl;
	}

	return 0;
}
