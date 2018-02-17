/**
 * URI
 * Problem Id : 2334
 * Problem Name: Patinhos
 */

#include <iostream>
using namespace std;

int main () {

	unsigned long long input;

    while(cin >> input && input != -1) {
        if (input > 0) input--;
        cout << input << endl;
    }

	return 0;
}