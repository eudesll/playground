/* 
   URI
   Problem Id : 1051
   Problem Name: Imposto de Renda
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	float money, moneyTemp = 0.0, tax = 0.0;

	cin >> money;
	moneyTemp = money;

	if (money > 2000.00) {
		if (money > 4500.00) {
			tax += (money - 4500.00) * 0.28;
			money -= (money - 4500.00);
		}

		if (money > 3000.00) {
			tax += (money - 3000.00) * 0.18;
			money -= (money - 3000.00);
		}

		tax += (money - 2000.00) * 0.08;
	}

	if (tax > 0) {
		cout << "R$ " << fixed << setprecision(2) << tax << endl; 
	} else {
		cout << "Isento" << endl;
	}

	return 0;
}