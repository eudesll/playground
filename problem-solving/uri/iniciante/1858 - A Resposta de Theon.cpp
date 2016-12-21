/**
 * URI
 * Problem Id : 1858
 * Problem Name: A Resposta de Theon
 */

#include <iostream>
using namespace std;

int main () {

	int n, min = 101, ind, num, i = 1;

	cin >> n;
	while (n--) {
		cin >> num;

		if (num < min) {
			min = num;
			ind = i;
		}

		i++;
	}

	cout << ind << endl;

	return 0;
}