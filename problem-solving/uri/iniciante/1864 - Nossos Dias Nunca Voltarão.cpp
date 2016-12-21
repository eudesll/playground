/**
 * URI
 * Problem Id : 1864
 * Problem Name: Nossos Dias Nunca Voltarão
 */

#include <iostream>
using namespace std;

int main () {

	string text = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int n;

	cin >> n;
	cout << text.substr(0, n) << endl;

	return 0;
}