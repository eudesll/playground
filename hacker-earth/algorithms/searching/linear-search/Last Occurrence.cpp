/* 
   HackerEarth
   Problem Name: tutorial
*/

#include <iostream>
using namespace std;

int main () {

	int n, m, num, f = -1;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (num == m) {
			f = i + 1;
		}
	}

	cout << f << endl;

	return 0;
}