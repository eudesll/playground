/**
 * URI
 * Problem Id : 1332
 * Problem Name: Um-Dois-Três
 */

#include <iostream>
using namespace std;

int main () {

	int n, c, l;
	string words[3], w;
	words[0] = "one";
	words[1] = "two";
	words[2] = "three";

	cin >> n;
	while (n--) {

		cin >> w;

		for (int i = 0; i < 3; i++) {

			c = 0;
			l = words[i].length();

			if (l == w.length()) {
				for (int j = 0; j < l; j++) {
					if (words[i][j] == w[j]) {
						c++;
					}
				}

				if (c >= l - 1) {
					cout << i + 1 << endl;
					break;
				}
			}
			
		}

	}

	return 0;
}