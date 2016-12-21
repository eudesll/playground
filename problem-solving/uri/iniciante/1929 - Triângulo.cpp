/**
 * URI
 * Problem Id : 1929
 * Problem Name: Triângulo
 */

#include <iostream>
using namespace std;

int main () {
	
	int v[4];
	bool f = false;
   
	cin >> v[0] >> v[1] >> v[2] >> v[3];
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 4; j++) {
			for (int k = j + 1; k < 4; k++) { 
                if (v[i] + v[j] > v[k] && v[k] + v[j] > v[i] && v[k] + v[i] > v[j]) {
					f = true;
				}
			}
		}
	}

	cout << (f ? "S" : "N") << endl;

	return 0;
}