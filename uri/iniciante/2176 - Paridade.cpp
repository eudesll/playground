/**
 * URI
 * Problem Id : 2176
 * Problem Name: Paridade
 */

#include <iostream>
using namespace std;

int main () {

	string msg;
	int oneC = 0;

	cin >> msg;

	for (int i = 0; i < msg.size(); i++) {
		oneC += msg[i] == '1' ? 1 : 0;
	}

	cout << msg << (oneC % 2 == 0 ? 0 : 1) << endl;

	return 0;
}