/* 
   URI
   Problem Id : 1172
   Problem Name: Substituição em Vetor I
*/

#include <iostream>
using namespace std;

int main () {

	int num;

	for (int i = 0; i < 10; i++) {
		cin >> num;
		num = (num <= 0) ? 1 : num;

		cout << "X[" << i << "] = " << num << endl;
	}

	return 0;
}