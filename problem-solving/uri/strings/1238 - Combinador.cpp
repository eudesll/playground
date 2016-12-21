/* 
   URI
   Problem Id : 1238
   Problem Name: Combinador
*/

#include <iostream>
using namespace std;

int main () {

	int n, size, aSize, bSize;
	string a, b, result;

	cin >> n;
	while(n--) {

		cin >> a >> b;
		result = "";
		aSize = a.length();
		bSize = b.length();

		size = aSize + bSize;

		for (int i = 0; i < size; i++) {

			if (i < aSize) {
				result.push_back(a[i]);
			}

			if (i < bSize) {
				result.push_back(b[i]);
			}

		}

		cout << result << endl;
	}

	return 0;
}