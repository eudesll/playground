/* 
   URI
   Problem Id : 1028
   Problem Name: Figurinhas
*/

#include <iostream>
using namespace std;

int gcd (int f1, int f2) {

	int temp;
    while (f2 > 0){
        temp = f2;
        f2 = f1 % f2;
        f1 = temp;
    }

    return f1;
}

int main () {

	int n, f1, f2;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> f1 >> f2;

		cout << gcd(f1, f2) << endl;
	}

	return 0;
}