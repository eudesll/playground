/**
 * URI
 * Problem Id : 2292
 * Problem Name: Painel LED
 */

#include <iostream>
#include <vector>
using namespace std;

int main () {

	int n;

	cin >> n;
	while (n--) {
		string panel, temp;
		int alt, rIndex = -1;
		vector<string> panels;

		cin >> panel >> alt;
		temp = panel;

		for (int i = 0; i < alt; i++) {

			panel[0] = (panel[0] == 'X' ? 'O' : 'X');

			for (int j = 1; j < panel.size(); j++) {

				if (panel[j - 1] == 'X') {
					panel[j] = (panel[j] == 'X' ? 'O' : 'X');
				} else {
					break;
				}
			}

			if (temp == panel) {
				rIndex = alt % (i + 1);
				break;
			}

			panels.push_back(panel);
		}

		cout << (rIndex == -1 ? panel : panels[rIndex - 1]) << endl;
	}

	return 0;
}