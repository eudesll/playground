/* 
	SPOJ Brasil Problem Set (obi)
	xxxx. METEORO
	Problem Name: Meteoros
*/

#include <iostream>
using namespace std;

int main(void) {

	int farm[4], n, x, y, testCount = 1, meteorCount;

	while (cin >> farm[0] >> farm[1] >> farm[2] >> farm[3] && farm[0] != 0 && farm[1] != 0 && farm[2] != 0 && farm[3] != 0) {
		cin >> n;

		meteorCount = 0;
		while (n--) {
			cin >> x >> y;

			if (x >= farm[0] && x <= farm[2] && y <= farm[1] && y >= farm[3]) {
				meteorCount++;
			}
		}

		cout << "Teste " << testCount++ << endl;
		cout << meteorCount << endl;
	}

	return 0;
}