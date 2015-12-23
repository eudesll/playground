/* 
   URI
   Problem Id : 1078
   Problem Name: Tabuada
*/

#include <iostream>
using namespace std;

int main () {

	int n;

	cin >> n;
	for (int i = 1; i <= 10; i++) {
		cout << i << " x " << n << " = " << (i * n) << endl;
	}

	return 0;
}