/**
 * URI
 * Problem Id : 1308
 * Problem Name: Guerreiros Etruscos Nunca Jogam Xadrez
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	long long n, s;

	cin >> n;
	while (n--) {
		cin >> s;

		s = (-1 + sqrt(1 + 4 * 2 * s)) / 2;
		cout << s << endl;
	}

	return 0;
}