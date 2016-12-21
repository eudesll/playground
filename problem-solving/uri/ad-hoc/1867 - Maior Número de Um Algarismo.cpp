/**
 * URI
 * Problem Id : 1867
 * Problem Name: Maior Número de Um Algarismo
 */

#include <iostream>
#include <sstream>

#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

using namespace std;

int sumValor(string valor) {

	long long sum = 0;

	for (int i = 0; i < valor.length(); i++) {
		sum += valor[i] - '0';
	}

	return sum;
}

int main () {

	long long sumN, sumM;
	string n, m;

	while (cin >> n >> m && (n != "0" || m != "0")) {

		while (n.length() > 1 || m.length() > 1) {
			if (n.length() > 1) {
				n = SSTR(sumValor(n));
			}

			if (m.length() > 1) {
				m = SSTR(sumValor(m));
			}
		}

		cout << (n > m ? 1 : (m > n ? 2 : 0)) << endl;

	}

	return 0;
}