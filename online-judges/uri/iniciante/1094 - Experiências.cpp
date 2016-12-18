/**
 * URI
 * Problem Id : 1094
 * Problem Name: Experiências
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int n, q, c = 0, r = 0, s = 0;
	string a;

	cin >> n;
	while (n--) {
		cin >> q >> a;

		if (a == "C") {
			c += q;
		} else if (a == "R") {
			r += q;
		} else {
			s += q;
		}
	}

	cout << "Total: " << (c + r + s) << " cobaias" << endl;
	cout << "Total de coelhos: " << c << endl;
	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	cout << "Percentual de coelhos: " << fixed << setprecision(2) << c * 100.0 / (c + r + s) << " %" << endl;
	cout << "Percentual de ratos: " << fixed << setprecision(2) << r * 100.0 / (c + r + s) << " %" << endl;
	cout << "Percentual de sapos: " << fixed << setprecision(2) << s * 100.0 / (c + r + s) << " %" << endl;
 
	return 0;
}