/**
 * URI
 * Problem Id : 1958
 * Problem Name: Notação Científica
 */

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;


int main() {

	long double n;

	scanf("%LE", &n);

	cout << setprecision(4) << scientific << showpos << uppercase << n << endl;

	return 0;
}