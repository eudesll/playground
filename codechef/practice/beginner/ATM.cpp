/* 
   CodeChef
   Problem Name: HS08TEST
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int w;
	double a;

	while (cin >> w >> a) {
		if (w % 5 == 0 && (w + 0.5) <= a) {
			a -= (w + 0.5);
		}

		cout << fixed << setprecision(2) << a << endl;
	}

	return 0;
}