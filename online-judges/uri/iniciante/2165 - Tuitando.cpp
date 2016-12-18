/**
 * URI
 * Problem Id : 2165
 * Problem Name: Tuitando
 */

#include <iostream>
using namespace std;

int main () {

	string t;

	while (getline(cin, t)) {
		cout << (t.size() <= 140 ? "TWEET" : "MUTE") << endl;
	}

	return 0;
}