/* 
   URI
   Problem Id : 1177
   Problem Name: Preenchimento de Vetor II
*/

#include <iostream>
using namespace std;

int main () {

	int num;

	cin >> num;
	for (int i = 0; i < 1000; i++) {
		cout << "N[" << i << "] = " << i % num << endl;
	}

	return 0;
}