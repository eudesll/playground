/* 
   URI
   Problem Id : 1117
   Problem Name: Validação de Note
*/

#include <iostream>
using namespace std;

int main () {

	double nota, sum = 0;
	int valQt = 0;

	while (valQt < 2) {
		cin >> nota;

		if (nota >= 0.0 && nota <= 10.0) {
			sum += nota;
			valQt++;
		} else {
			cout << "nota invalida" << endl;
		}
	}

	cout << "media = " << setiosflags(ios::fixed) << setprecision(2) << (sum / valQt) << endl;

	return 0;
}