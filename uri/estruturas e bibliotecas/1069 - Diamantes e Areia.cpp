/**
 * URI
 * Problem Id : 1069
 * Problem Name: Diamantes e Areia
 */

#include <iostream>
using namespace std;

int main () {

	int n, qt, oD;

	cin >> n;
	while (n--){
		string m;
		cin >> m;

		qt = oD = 0;

		for (int i = 0; i < m.size(); i++) {
			if (m[i] == '<') {
				oD++;
			} else if (m[i] == '>') {
				if (oD > 0) {
					oD--;
					qt++;
				}
			}
		}

		cout << qt << endl;
	}

	return 0;
}