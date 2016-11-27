/* 
   CodeChef
   Problem Name: FCTRL
*/

#include <iostream>
using namespace std;

int main() {

	int t;

 	cin >> t;
	while(t--){

		long long int n, ct = 0;
		cin >> n;

		for(long long int i = 5; i <= n; i *= 5){
			ct += n / i;
		}

		cout << ct << endl;
	}
	
	return 0;
}