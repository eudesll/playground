/* 
   URI
   Problem Id : 1064
   Problem Name: Positivos e Média
*/

#include <iostream>
using namespace std;

int main () {

	int pos = 0;
	float mean = 0, num;

	for (int i = 0; i < 6; i++) {
		cin >> num;

		if (num > 0) {
			pos++;
			mean += num;
		}
	}

	cout << pos << " valores positivos" << endl << (mean / pos) << endl;

	return 0;
}