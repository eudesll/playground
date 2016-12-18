/**
 * URI
 * Problem Id : 2157
 * Problem Name: Sequência Espelho
 */

#include <iostream>
#include <sstream>
using namespace std;

#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

int main () {

	int c, b, e;

	cin >> c;
	while (c--) {
		cin >> b >> e;

		for (int i = b; i <= e; i++) {
			cout << i;
		}

		for (int i = e; i >= b; i--) {
			string num = SSTR(i);

			for (int j = num.size() - 1; j >= 0; j--) {
				cout << num[j];
			}
		}

		cout << endl;
	}

	return 0;
}