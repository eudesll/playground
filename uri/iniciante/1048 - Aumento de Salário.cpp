/**
 * URI
 * Problem Id : 1048
 * Problem Name: Aumento de Salário
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	double salary, perc;

	cin >> salary;

	if (salary <= 400.00) {
		perc = 0.15;
	} else if (salary <= 800.00) {
		perc = 0.12;
	} else if (salary <= 1200.00) {
		perc = 0.10;
	} else if (salary <= 2000.00) {
		perc = 0.07;
	} else {
		perc = 0.04;
	}

	cout << "Novo salario: " << fixed << setprecision(2) << (salary + salary * perc) << endl;
	cout << "Reajuste ganho: " << fixed << setprecision(2) << ((salary + salary * perc) - salary) << endl;
	cout << "Em percentual: " << fixed << setprecision(0) << (perc * 100) << " %" << endl;

	return 0;
}