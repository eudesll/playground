/**
 * URI
 * Problem Id : 2149
 * Problem Name: Sequência do Tio Phill Bonati
 */

#include <iostream>
using namespace std;

int main () {

	unsigned long long nums[18] = {0}, n;
	nums[1] = 1;

	for (int i = 2; i < 18; i++) {
		if (i % 2 == 0) {
			nums[i] = nums[i - 1] + nums[i - 2];
		} else {
			nums[i] = nums[i - 1] * nums[i - 2];
		}
	}

	while (cin >> n) {
		cout << nums[n - 1] << endl;
	}

	return 0;
}