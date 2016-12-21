/**
 * URI
 * Problem Id : 1581
 * Problem Name: Conversa Internacional
 */

#include <iostream>
#include <set>
using namespace std;

int main () {

	int n, k;
	string nat;
	set<string> lang;

	cin >> n;
	while (n--) {
		cin >> k;

		while (k--) {
			cin >> nat;

			lang.insert(nat);			
		}

		if (lang.size() > 1) {
			cout << "ingles" << endl;
		} else {
			cout << nat << endl;
		}

		lang.clear();
	}

	return 0;
}