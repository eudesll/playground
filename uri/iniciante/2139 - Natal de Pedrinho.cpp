/**
 * URI
 * Problem Id : 2139
 * Problem Name: Natal de Pedrinho
 */

#include <iostream>
using namespace std;

int main () {

	int month, day, daysMap[13], daysSum;
	daysMap[1] = 31;
	daysMap[2] = 29;
	daysMap[3] = 31;
	daysMap[4] = 30;
	daysMap[5] = 31;
	daysMap[6] = 30;
	daysMap[7] = 31;
	daysMap[8] = 31;
	daysMap[9] = 30;
	daysMap[10] = 31;
	daysMap[11] = 30;
	daysMap[12] = 25;

	while (cin >> month >> day) {

		daysSum = -day;

		for (int m = month; m <= 12; m++) {
			daysSum += daysMap[m];
		}


		if (daysSum == 0) {
			cout << "E natal!" << endl;
		} else if (daysSum == 1){
			cout << "E vespera de natal!" << endl;
		} else if (daysSum < 0) {
			cout << "Ja passou!" << endl;
		} else {
			cout << "Faltam " << daysSum << " dias para o natal!" << endl;
		}

	}

	return 0;
}