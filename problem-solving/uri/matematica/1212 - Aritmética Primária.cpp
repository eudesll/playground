/* 
   URI
   Problem Id : 1212
   Problem Name: Aritmética Primária
*/

#include <iostream>
using namespace std;

long carryCount(long n1, long n2) {
    long a, b, carry, carryCount;

    carry = 0;
    carryCount = 0;

    while(true){
		a = n1 % 10;
		b = n2 % 10;
		n1 = n1 / 10;
		n2 = n2 / 10;

		if((a + b + carry) >= 10) {
			carryCount++;
			carry = 1;
		} else {
			carry = 0; 
		}

		if(n1 == 0 && n2 == 0) {
			break;
		}
    }

    return carryCount;
}

int main () {

	long a, b, carry;

	while (true) {

		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}

		carry = carryCount(a, b);

		if (carry == 0) {
			cout << "No carry operation." << endl;
		} else if (carry == 1) {
			cout << "1 carry operation." << endl;
		} else {
			cout << carry << " carry operations." << endl;
		}
	}
 
	return 0;
}