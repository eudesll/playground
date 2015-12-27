/* 
   URI
   Problem Id : 1564
   Problem Name: Vai ter Copa?
*/

#include <iostream>
using namespace std;

int main () {

	int n;

	while (cin >> n) {
		if (n == 0) {
			cout << "vai ter copa!" << endl;
		} else {
			cout << "vai ter duas!" << endl;
		}
	}

	return 0;
}