/* 
   SPOJ Problem Set (Classical)
   Problem Name: TRICOUNT
*/

#include <iostream>
using namespace std;

int main() {

	int testNum;
	long long int triangleLvl, triangleQt;

	cin >> testNum;

	for (int i = 0; i < testNum; i++) {
		cin >> triangleLvl;

		triangleQt = triangleLvl * (triangleLvl + 2) * (2 * triangleLvl + 1) / 8;
		
		cout << triangleQt << endl;
	}

	return 0;
}