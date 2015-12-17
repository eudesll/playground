/* 
   URI
   Problem Id : 1181
   Problem Name: Linha na Matriz
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int n;
	char t;
	double result, temp;

	cin >> n >> t;
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> temp;

			if (i == n) {
				result += temp;
			}
		}
	}

	if (t == 'S') {
		cout << setiosflags(ios::fixed) << setprecision(1) << result << endl;
	} else {
		cout << setiosflags(ios::fixed) << setprecision(1) << result / 12 << endl;
	}

	return 0;
}