/**
 * URI
 * Problem Id : 1582
 * Problem Name: O Teorema de Pitágoras
 */

#include <iostream>
using namespace std;

int gcd(int x, int y) {
    if (y == 0) {
    	return x;
    }

    return gcd(y, x % y);
}

int gcd_tri(int x, int y, int z) {
    return gcd(x, gcd(y, z));
}

bool is_pythagorean_triple(int x, int y, int z) {
    if (x > y && x > z) {
    	return x * x == (y * y) + (z * z);
    } else if (y > z) {
    	return y * y == (x * x) + (z * z);
    }

    return z * z == (x * x) + (y * y);
}

int main () {

	int x, y, z;

	while (cin >> x >> y >> z) {

		cout << "tripla";
        if (is_pythagorean_triple(x, y, z)) {
            cout << " pitagorica";
            if (gcd_tri(x, y, z) == 1) {
                cout << " primitiva";
            }
        }

        cout << endl;

	}

	return 0;
}