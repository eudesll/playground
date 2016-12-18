/* 
   SPOJ Problem Set (Tutorial)
   Problem Name: RIOI_0_2
*/

#include <iostream>
#include <map>
using namespace std;

int main () {

	int t, n, total;
	string temp;
	map<string, int> textMap;

	cin >> t;
	while (t--) {

		total = 0;
		cin >> n;
		while(n--) {
			cin >> temp;

			if (textMap[temp] == 0) {
				total++;
				textMap[temp] = 1;
			} else if (textMap[temp] == 1) {
				total--;
				textMap[temp]++;
			}
		}

		cout << total << endl;
	}

	return 0;
}