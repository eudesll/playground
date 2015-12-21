/* 
   URI
   Problem Id : 1070
   Problem Name: Seis números Ímpares
*/

#include <iostream>
using namespace std;

int main () {

	int x, count = 6;

	cin >> x;

	while (count) {
		if (x % 2 != 0) {
			cout << x << endl;
			x++;
			count--;
		}

		x++;
	}

	return 0;
}