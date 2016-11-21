/* 
    SPOJ Brasil Problem Set (obi)
    Telescópio
    Problem Name: TELESCO2 
*/

#include <iostream>
using namespace std;

int main(void) {

	int a, n, f, qt = 0;

	cin >> a >> n;
	while (n--) {
		cin >> f;

		if (f * a >= 40000000) {
			qt++;
		}
	}

	cout << qt << endl;

	return 0;
}