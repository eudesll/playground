/**
 * URI
 * Problem Id : 1171
 * Problem Name: Frequência de Números
 */

#include <iostream>
#include <map>
using namespace std;

int main () {

	int n, num;
	map<int, int> qts;

	cin >> n;
	while (n--) {
		cin >> num;

		qts[num] += 1;
	}

	for (map<int, int>::iterator it = qts.begin(); it != qts.end(); it++) {

	    cout << it->first << " aparece " << it->second << " vez(es)" << endl ;

	}

	return 0;
}