/**
 * URI
 * Problem Id : 1911
 * Problem Name: Ajude Girafales
 */

#include <iostream>
#include <map>
using namespace std;

int main () {

	int n, m, qt;
	map<string, string> students;
	string stud, sig;

	
	while (cin >> n && n) {

		qt = 0;

		while (n--) {
			cin >> stud >> sig;

			students[stud] = sig;
		}

		cin >> m;
		while (m--) {
			cin >> stud >> sig;

			string oSign = students[stud];
			int dif = 0;

			for (int i = 0; i < oSign.size(); i++) {
				if (oSign[i] != sig[i]) {
					dif++;

					if (dif == 2) {
						qt++;
						break;
					}
				}
			}
		}

		cout << qt << endl;		
		students.clear();
	}

	return 0;
}