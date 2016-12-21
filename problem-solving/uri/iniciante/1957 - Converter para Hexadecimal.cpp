/**
 * URI
 * Problem Id : 1957
 * Problem Name: Converter para Hexadecimal
 */

#include <iostream>
using namespace std;

string dec2hex(unsigned int n){
    string chars = "0123456789ABCDEF";

    unsigned int i = n % 16;

    if (n / 16 > 0) {
    	return dec2hex(n / 16) + chars.at(i);
    }

    string result = "";
    result += chars.at(i);
    return result;
}

int main () {

    int n;

    cin >> n;
    cout << dec2hex(n) << endl;

    return 0;
}