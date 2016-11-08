/* 
   HackerEarth
   Problem Name: modify-the-string
*/

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string text;
    
    cin >> text;
    
    for (int i = 0; i < text.size(); i++) {
    	if (isupper(text[i])) {
    		cout << (char)tolower(text[i]);
    	} else {
    		cout << (char)toupper(text[i]);
    	}
    }
    
    cout << endl;
    
    return 0;
}
