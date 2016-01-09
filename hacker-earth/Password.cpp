/* 
   HackerEarth
   Problem Name: password-1
*/

#include <iostream>
#include <cmath>
#include <map>
using namespace std;

string invertWord(const string text) {
	string result = "";

	for (int i = text.length() - 1; i >= 0; i--) {
		result += text[i];
	}

	return result;
}

int main () {

	int num;
	string name;
	map<string, int> words;

	cin >> num;
	while (num--) {
		cin >> name;

		if(words.find(name) == words.end()) {		    

			string inverse = invertWord(name);

		    if (words.find(inverse) != words.end()) {
				words[inverse]++;
			}

			words[name] = 1;
		}
	}

	for(map<string, int>::iterator i = words.begin(); i != words.end(); i++) {
	    string key = i->first;
	    int qt = i->second;

	    if (qt > 1) {
	    	cout << key.length() << " " << key[floor(key.length() / 2)] << endl;
	    }
	}

	return 0;
}