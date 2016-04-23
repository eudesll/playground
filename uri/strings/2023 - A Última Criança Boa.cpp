/**
 * URI
 * Problem Id : 2023
 * Problem Name: A Última Criança Boa
 */

#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main () {

	int l = 0;
	string kids[1001], k, kU;
	map<string, string> mapKids;

	while (getline(cin, k)) {
		kU = k;
		transform(kU.begin(), kU.end(), kU.begin(), ::toupper);

		kids[l++] = kU;
		mapKids[kU] = k;
	}

	sort(kids, kids + (sizeof(kids)/sizeof(kids[0])));

	cout << mapKids[kids[1000]] << endl;

	return 0;
}