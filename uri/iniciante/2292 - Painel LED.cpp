/**
 * URI
 * Problem Id : 2292
 * Problem Name: Painel LED
 */

#include <iostream>
#include <cmath>
#include <algorithm>
#include <bitset>
using namespace std;

int main() {

	int n;
	long long alt;
	string panel;

	cin >> n;
	while (n--) {
		cin >> panel >> alt;

		reverse(panel.begin(), panel.end());
		replace(panel.begin(), panel.end(), 'O', '1');
		replace(panel.begin(), panel.end(), 'X', '0');

		long long val = bitset<128>(panel).to_ulong() + alt;

		string result = bitset<128>(val).to_string();

		int begin = result.size() - 1;
		int end = result.size() - panel.size();
		for (int i = begin; i >= end; i--) {
			cout << (result[i] == '1' ? 'O' : 'X');
		}

		cout << endl;
	}

	return 0;
}