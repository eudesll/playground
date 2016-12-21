/* 
   URI
   Problem Id : 1073
   Problem Name: Quadrado de Pares
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int num;
	long x;

	cin >> num;

	for (int i = 2; i <= num; i += 2) {
		x = pow(i, 2);
		cout << i << "^" << "2 = " << x << endl;
	}

	return 0;
}