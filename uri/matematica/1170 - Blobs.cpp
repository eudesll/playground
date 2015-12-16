/* 
   URI
   Problem Id : 1234
   Problem Name: Sentença Dançante
*/

#include <iostream>
using namespace std;

int main () {

	int n, days;
	double c;

	cin >> n;
	for (int i = 0; i < n; i++) {

		days = 0;
		cin >> c;

		while (c > 1.0) {
			c /= 2;
			days++;
		}

		cout << days << " dias" << endl;
	}

	return 0;
}