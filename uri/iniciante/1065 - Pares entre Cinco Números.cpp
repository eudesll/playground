/* 
   URI
   Problem Id : 1065
   Problem Name: Pares entre Cinco Números
*/

#include <iostream>
using namespace std;

int main () {

	int n, evenQt = 0;

	for (int i = 0; i < 5; i++) {
		cin >> n;

		evenQt += (n % 2 == 0) ? 1 : 0;
	}

	cout << evenQt << " valores pares" << endl;

	return 0;
}