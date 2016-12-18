/**
 * URI
 * Problem Id : 1848
 * Problem Name: Corvo Contador
 */

#include <iostream>
using namespace std;

int main () {

	int sum = 0, screamC = 0;
	string crow;

	while (screamC < 3) {

		getline(cin, crow);

		if (crow == "caw caw") {
			cout << sum << endl;
			sum = 0;

			screamC++;
		} else {
			if(crow == "--*") {
				sum += 1;
			} else if(crow == "-*-") {
				sum += 2;
			} else if(crow == "-**") {
				sum += 3;
			} else if(crow == "*--") {
				sum += 4;
			} else if(crow == "*-*") {
				sum += 5;
			} else if(crow == "**-") {
				sum += 6;
			} else if(crow == "***") {
				sum += 7;
			} else {
				sum += 8;
			}
		}

	}

	return 0;
}