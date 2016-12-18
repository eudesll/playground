/* 
   Project Euler
   Problem 4
   Problem Name: Largest palindrome product
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isPalindrome (string text) {
	string temp = "";

	for (int i = text.length() - 1; i >= 0; i--) {
		temp += text[i];
	}

	if (text == temp) {
		return true;
	}

	return false;
}

int main () {

	int i = 999, j = 999;
	long max = 0;

	for (int i = 999; i > 0; i--) {
		for (int j = 999; j > 0; j--) {
			ostringstream ss;
			long num = i * j;
			ss << num;

			if (isPalindrome(ss.str())) {
				if (num > max) {
					max = num;
				}
			}
		}
	}

	cout << max << endl;

	return 0;
}
