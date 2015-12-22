/* 
   Project Euler
   Problem 5
   Problem Name: Smallest multiple
*/

#include <iostream>
using namespace std;

int main () {

	bool found;

	for (int i = 100; ; i++){
		found = true;

		for (int j = 1; j <= 20; j++) {
			if (i % j != 0) {
				found = false;
				break;
			}
		}

		if (found) {
			cout << i << endl;
			break;
		}
	}

	return 0;
}