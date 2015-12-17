/* 
   URI
   Problem Id : 1235
   Problem Name: De Dentro para Fora
*/

#include <iostream>
using namespace std;

string reverseString (string text);

int main () {

	int n;
	string text1, text2;

	cin >> n;
	cin.ignore();
	while (n--) {
		getline(cin, text1);

		text2 = text1.substr(0, (text1.length() / 2));
		text2 = reverseString(text2);
		text1 = text1.substr((text1.length() / 2));
		text1 = reverseString(text1);

		cout << text2 << text1 << endl;
	}

	return 0;
}

string reverseString (string text) {
    string result = "";
 
    for (int i = text.length() - 1; i >= 0; i--) {
        result += text[i];
    }
 
    return result;
}