/* 
   URI
   Problem Id : 2006
   Problem Name: Identificando o Chá
*/

#include <iostream>
using namespace std;

int main () {

	int t, num, acc = 0;

	cin >> t;
	for (int i = 0; i < 5; i++) {
		cin >> num;

		if (num == t) {
			acc++;
		}
	}

	cout << acc << endl;

	return 0;
}