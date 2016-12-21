/* 
   URI
   Problem Id : 1066
   Problem Name: Pares, Ímpares, Positvos e Negativos
*/

#include <iostream>
using namespace std;

int main () {

	int pos, neg, par, imp, n;
	pos = neg = par = imp = 0;

	for (int i = 0; i < 5; i++) {
		cin >> n;

		if (n > 0) {
			pos++;
		} else if (n < 0) {
			neg++;
		}

		if (n % 2 == 0) {
			par++;
		} else {
			imp++;
		}
	}

	cout << par << " valor(es) par(es)" << endl;
	cout << imp << " valor(es) impar(es)" << endl;
	cout << pos << " valor(es) positivo(s)" << endl;
	cout << neg << " valor(es) negativo(s)" << endl;

	return 0;
}