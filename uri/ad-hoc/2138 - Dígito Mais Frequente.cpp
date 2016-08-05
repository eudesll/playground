/**
 * URI
 * Problem Id : 2138
 * Problem Name: Dígito Mais Frequente
 */

#include <iostream>
using namespace std;

int main () {

	int size, bQt = -1, b, n;
	string nums;

	while (cin >> nums) {

		int qtN[10] = {0};

		bQt = -1;
		size = nums.size();

		for (int i = 0; i < size; i++) {
			n = nums[i] - '0';
			qtN[n]++;

			if (qtN[n] > bQt || qtN[n] == bQt && n > b) {
				b = n;
				bQt = qtN[n];
			}
		}

		cout << b << endl;
	}

	return 0;
}