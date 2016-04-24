/**
 * URI
 * Problem Id : 1542
 * Problem Name: Lendo Livros
 */

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int q, d, p, a;

	while (cin >> q && q != 0) {
		cin >> d >> p;
		a = trunc((double)(q * d) / -(q - p) * p);

		cout << a << " " << (a == 1 ? "pagina" : "paginas") << endl;
	}

	return 0;
}