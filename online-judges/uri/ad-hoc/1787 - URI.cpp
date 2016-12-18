/**
 * URI
 * Problem Id : 1787
 * Problem Name: URI
 */

#include <iostream>
using namespace std;

int main () {

	long long n, uri[3], pURI[3], maxI;

	while (cin >> n && n) {

		pURI[0] = pURI[1] = pURI[2] = 0;

		while (n--) {
			cin >> uri[0] >> uri[1] >> uri[2];

			if (uri[0] > max(uri[1], uri[2])) {
				maxI = 0;
			} else if (uri[1] > max(uri[0], uri[2])) {
				maxI = 1;
			} else if (uri[2] > max(uri[1], uri[0])) {
				maxI = 2;
			}

			for (int i = 0; i < 3; i++) {
				if ((uri[i] & (uri[i] - 1)) == 0) {
					pURI[i]++;

					if (i == maxI) {
						pURI[i]++;
					}
				}
			}			
		}

		if (pURI[0] > max(pURI[1], pURI[2])) {
			cout << "Uilton" << endl;
		} else if (pURI[1] > max(pURI[0], pURI[2])) {
			cout << "Rita" << endl;
		} else if (pURI[2] > max(pURI[1], pURI[0])) {
			cout << "Ingred" << endl;
		} else {
			cout << "URI" << endl;
		}

	}

	return 0;
}