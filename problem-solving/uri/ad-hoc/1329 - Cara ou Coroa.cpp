/* 
   URI
   Problem Id : 1329
   Problem Name: Cara ou Coroa
*/

#include <iostream>
using namespace std;

int main () {

	int j, m, n, t;

	cin >> n;
	while (n != 0) {
		j = m = 0;

		for (int i = 0; i < n; i++) {
			cin >> t;

			if (t == 0) m++;
			else j++;
		}

		cout << "Mary won " << m << " times and John won " << j << " times" << endl;

		cin >> n;
	}

	return 0;
}