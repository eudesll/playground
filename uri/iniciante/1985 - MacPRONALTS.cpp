/* 
   URI
   Problem Id : 1985
   Problem Name: MacPRONALTS
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int n, num, qt;
	double menu[1006] = {0}, total = 0.0;

	menu[1001] = 1.50;
	menu[1002] = 2.50;
	menu[1003] = 3.50;
	menu[1004] = 4.50;
	menu[1005] = 5.50;

	cin >> n;
	while (n--) {
		cin >> num >> qt;

		total += qt * menu[num];
	}

	cout << fixed << setprecision(2) << total << endl;

	return 0;
}