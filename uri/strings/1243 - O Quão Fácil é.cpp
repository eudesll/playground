/* 
   URI
   Problem Id : 1243
   Problem Name: O Quão Fácil é...
*/

#include <iostream>
#include <sstream>
#include <cctype> 
using namespace std; 
 
int main () {

	int sum, tokenSize, qtd, size, mean, result;
	string sentence;
	bool isInvalid;
 
	while(getline(cin,sentence)) {

		sum = qtd = 0;
		string token;
		istringstream iss(sentence);

		while ( getline(iss, token, ' ') ) {
			isInvalid = false;
			tokenSize = token.size(); 
			size = 0;
 
			for(int i = 0; i < tokenSize; i++) {
				if(isdigit(token[i]) || token[i] == '.' && i != tokenSize - 1) {
					isInvalid = true;
					break;
				} else if (token[i] != '.') {
					size++;
				}
			} 
			
			if (!isInvalid) {
				sum += size;
				qtd++;
			}
		}

		(qtd == 0) ? mean = 0 : mean = sum/qtd;

		if (mean <= 3) {
			result = 250;
		} else if (mean < 6 ) {
			result = 500;
		} else {
			result = 1000;
		}

		cout << result << endl;
	}

	return 0;
}