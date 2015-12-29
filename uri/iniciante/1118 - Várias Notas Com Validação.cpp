/* 
   URI
   Problem Id : 1118
   Problem Name: Várias Notas Com Validação
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int x;
	float nota, mean;

	do {

		mean = 0.0;

		while (true) {
			cin >> nota;

			if (nota >= 0 && nota <= 10.0) {
				if (mean > 0.0) {
					mean += nota;
					mean /= 2;
					break;
				} 

				mean += nota;				
			} else {
				cout << "nota invalida" << endl;
			}
		}

		cout << "media = " << fixed << setprecision(2) << mean << endl;

		while (true) {
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> x;

			if (x == 1 || x == 2) {
				break;
			}
		}

	} while (x == 1);

	return 0;
}