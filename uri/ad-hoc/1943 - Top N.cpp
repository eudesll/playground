/**
 * URI
 * Problem Id : 1943
 * Problem Name: Top N
 */

#include <iostream>
using namespace std;

int main () {

	int n;

	cin >> n;

	if (n == 1) cout << "Top 1";
	else if (n <= 3) cout << "Top 3";
	else if (n <= 5) cout << "Top 5";
	else if (n <= 10) cout << "Top 10";
	else if (n <= 25) cout << "Top 25";
	else if (n <= 50) cout << "Top 50";
	else cout << "Top 100";

	cout << endl;

	return 0;
}