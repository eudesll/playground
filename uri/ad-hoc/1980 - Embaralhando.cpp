/**
 * URI
 * Problem Id : 1980
 * Problem Name: Embaralhando
 */

#include <iostream>
using namespace std;

int main () {

	long long fat[20] = {0};
	string text;

	fat[1] = 1;

	cin >> text;
	while (text != "0") {
		
		if (fat[text.length()] == 0) {
			for (int i = 2; i <= text.length(); i++) {
				if (fat[i] == 0) {
					fat[i] = i * fat[i - 1];
				}
			}
		}		

		cout << fat[text.length()] << endl;

		cin >> text;
	}

	return 0;
}