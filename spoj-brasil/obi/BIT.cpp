/* 
    SPOJ Brasil Problem Set (obi)
    xxxx. Bits Trocados
    Problem Name: BIT
*/

#include <iostream>
using namespace std;

int main(void) {

	int v, index = 1, i, j, k, l;

	while (cin >> v && v != 0) {

		i = v / 50;
		v = v % 50;
		j = v / 10;
		v = v % 10;
		k = v / 5;
		v = v % 5;
		l = v / 1;

		cout << "Teste " << index++ << endl;
		cout << i << " " << j << " " << k << " " << l << " " << endl << endl;
	}

	return 0;
}