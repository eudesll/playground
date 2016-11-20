/* 
    SPOJ Brasil Problem Set (obi)
    Saldo do Vovô
    Problem Name: SALDO13   
*/

#include <iostream>
using namespace std;

int main(void) {

	int n, s, v, m;

	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> v;
		s += v;

		if (i == 0 || s < m) {
			m = s;
		}
	}

	cout << m << endl;

	return 0;
}