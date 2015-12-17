/* 
   URI
   Problem Id : 1435
   Problem Name: Matriz Quadrada I
*/

#include <iostream>
using namespace std;

int main () {

	int n, value;

	cin >> n;
	while (n > 0) {		
		for (int i = 1; i <= n; i++) {
			value = 1;

			for (int j = 0; j < n; j++) {

				if (j < i && j < n - i + 1) {
					value = j + 1;
				}

				if (j == (n - value + 1)) {
					value--;
				}

				if (j > 0) {
					cout << " ";
				}

				cout.fill(' ');
				cout.width(3);
				cout << value;				
			}

			cout << endl;
		}

		cout << endl;
		cin >> n;
	}

	return 0;
}