/**
 * URI
 * Problem Id : 2217
 * Problem Name: Nove
 */

#include <iostream>
using namespace std;

int main () {

	int n, num;

	cin >> n;
	while (n--) {
		
		cin >> num;

		if (num % 2 == 0) {
			cout << "1" << endl;
		} else {
			cout << "9" << endl;
		}
	}
	
	return 0;
}