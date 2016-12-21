/* 
   URI
   Problem Id : 1984
   Problem Name: O Enigma do Pronalândia
*/

#include <iostream>
using namespace std;

int main () {

	string text;

	cin >> text;
	for (int i = text.length() - 1; i >= 0; i--) {
		cout << text[i];
	}

	cout << endl;

	return 0;
}