/* 
   SPOJ Problem Set (Tutorial)
   Problem Name: INTEST
*/

#include <iostream>
using namespace std;

int main () {

	long int n, k, qtd = 0, num;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (num % k == 0) {
			qtd++;
		}
	}

	cout << qtd << endl;

	return 0;
}