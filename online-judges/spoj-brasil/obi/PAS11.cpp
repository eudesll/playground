/* 
   SPOJ Brasil Problem Set (obi)
   11002. Progressões aritméticas
   Problem Name: PAS11
*/

#include <iostream>
using namespace std;

int main () {

	long n, num, breakN = 1, r, previousNum;
	bool first = true, second = true, breaked = false;

	cin >> n;
	while (n--) {
		cin >> num;

		if (!first) {

			if ((!second && (num - previousNum) != r) && !breaked) {
				breakN++;
				breaked = true;
			} else {
				breaked = false;
			}
			
			r = num - previousNum;
			second = false;
		}

		previousNum = num;
		first = false;
	}

	cout << breakN << endl;

	return 0;
}