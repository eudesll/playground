/* 
   URI
   Problem Id : 1961
   Problem Name: Pula Sapo
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int p, n, c, cl = -1;
	string result = "YOU WIN";

	cin >> p >> n;
	while (n--) {
		cin >> c;

		if (cl != -1) {
			if (abs(c - cl) > p) {
				result = "GAME OVER";
			}
		}

		cl = c;
	}

	cout << result << endl;

	return 0;
}