/* 
   CodeChef
   Problem Name: INTEST
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	long long n, k, c = 0, num;

	cin >> n >> k;
	while (n--) {
		cin >> num;

		if (num % k == 0) {
			c++;
		}
	}

	cout << c << endl;

	return 0;
}