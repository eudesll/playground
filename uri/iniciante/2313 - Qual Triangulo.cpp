/**
 * URI
 * Problem Id : 2313
 * Problem Name: Qual Triangulo
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	if (a < b + c && b < a + c && c < a + b) {

		cout << "Valido-";

		if (a == b && b == c) {
			cout << "Equilatero" << endl;

		} else if (a == b || a == c || b == c) {
			cout << "Isoceles" << endl;

		} else {
			cout << "Escaleno" << endl;
		}

		int a2 = pow(a, 2);
		int b2 = pow(b, 2);
		int c2 = pow(c, 2);
		bool ret = (a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2);

		if (ret) {
			cout << "Retangulo: S" << endl;
		} else {
			cout << "Retangulo: N" << endl;
		}

	} else {
		cout << "Invalido" << endl;
	}

	return 0;
}