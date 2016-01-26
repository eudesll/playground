/**
 * URI
 * Problem Id : 1921
 * Problem Name: Guilherme e Suas Pipas
 */

#include <iostream>
using namespace std;

int main () {

	unsigned long long int n;

	cin >> n;

	cout << (n * (n - 3) / 2) << endl;

	return 0;
}