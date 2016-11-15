/**
 * URI
 * Problem Id : 2292
 * Problem Name: Painel LED
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, panelSize;
	long long alt, panelNum = 0;
	string panel;

	cin >> n;
	while (n--) {
		cin >> panel >> alt;
		panelSize = panel.size();

		for (int i = 0; i < panelSize; i++) {
			panelNum |= ((panel[i] == 'O') << i);
		}

		panelNum += alt;

		for (int i = 0; i < panelSize; i++) {
			cout << ((panelNum & 1LL) ? 'O' : 'X');
		}

		cout << endl;
	}

	return 0;
}