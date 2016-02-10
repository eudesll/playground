/* 
   SPOJ Problem Set (Basics)
   Problem Name: Sum of two numbers 
*/

#include <iostream>
using namespace std;

int main () {

	double n, a, b;

	cin >> n;
	while (n--) { 
		cin >> a >> b;
		cout << (a + b) << endl;
	}
	
	return 0;
}