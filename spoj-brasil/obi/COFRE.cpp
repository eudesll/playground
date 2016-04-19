/* 
    SPOJ Brasil Problem Set (obi)
    xxxx. Cofrinhos da Vó Vitória
    Problem Name: COFRE
*/

#include <iostream>
using namespace std;

int main(void) {

	int n, c1, c2, a, i = 1;

	while (cin >> n && n != 0) {

		a = 0;
		cout << "Teste " << i++ << endl;

		while (n--) {
			cin >> c1 >> c2;

			cout << ((c1 - c2) + a) << endl;
			a = c1 - c2 + a;
		}

		cout << endl;

	}

	return 0;
}