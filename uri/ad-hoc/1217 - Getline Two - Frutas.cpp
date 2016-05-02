/**
 * URI
 * Problem Id : 1217
 * Problem Name: Getline Two - Frutas
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int n, kg, d;
	double v, sumV = 0.0, sumKg = 0.0;
	string fruits;

	cin >> n;
	for (d = 1; d <= n; d++) {

		cin >> v;
		sumV += v;

		cin.ignore();
        getline(cin, fruits);

        kg = 1;

        for (int i = 0; i < fruits.length(); i++) {
        	if (fruits[i] == ' ') {
        		kg++;
        	}
        }

        sumKg += kg;

        cout << "day " << d << ": " << kg << " kg" << endl;
	}

	d--;
	sumKg = sumKg / d;
	sumV = sumV / d;

	cout << fixed << setprecision(2) << sumKg << " kg by day" << endl;
	cout << "R$ " << fixed << setprecision(2) << sumV << " by day" << endl;

	return 0;
}