/* 
   HackerEarth
   Problem Name: palindrome-check-2
*/

#include <iostream>
using namespace std;

string revert(string text) {
	string reverted;
	
	for (int i = text.size() - 1; i >= 0; i--) {
		reverted += text[i];
	}
	
	return reverted;
}

int main()
{
    string text;
    
    cin >> text;
    
    if (text == revert(text)) {
    	cout << "YES" << endl;
    } else {
    	cout << "NO" << endl;
    }
    
    return 0;
}
