/* 
   URI
   Problem Id : 1987
   Problem Name: Divisibilidade por 3
*/

#include <iostream>
using namespace std;

int main () {

	int n, result;
	string m;

	while (cin >> n >> m) {

		result = 0;
		
		for (int i = 0; i < m.length(); i++) {
			result += m[i] - 48;
		}

		cout << result;
		if (result % 3 == 0) {
			cout << " sim" << endl;
		} else {
			cout << " nao" << endl;
		}
	}

	return 0;
}