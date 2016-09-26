/**
 * URI
 * Problem Id : 2252
 * Problem Name: Descobrindo Senha
 */

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main () {

	int n, c = 1;

	while (cin >> n) {

		double nums[10];
		map<double, int> numMap;

		for (int i = 0; i < 10; i++) {
			cin >> nums[i];

			numMap[nums[i]] = i;
		}

		sort(nums, nums + 10);

		cout << "Caso " << c++ << ": ";
		for (int i = 9; i >= 9 - n + 1; i--) {
			cout << numMap[nums[i]];
		}
		cout << endl;
	}

	return 0;
}