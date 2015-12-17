/* 
   URI
   Problem Id : 1241
   Problem Name: Encaixa ou Não II
*/

#include <iostream>
using namespace std;

int main () {

	int n;
	string a, b;

	cin >> n;
	while (n--) {
		cin >> a >> b;

		string result = "nao encaixa";
		if (a.length() >= b.length() && a.substr(a.length() - b.length()) == b) {
			result = "encaixa";
		}

		cout << result << endl;
	}

	return 0;
}