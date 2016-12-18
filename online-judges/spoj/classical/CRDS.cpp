/* 
   SPOJ Problem Set (Classical)
   Problem Name: CRDS
*/

#include <iostream>
using namespace std;

int main() {
	
	int testNum;
	long long int cardsQt, cardsLvl;
	
	cin >> testNum;

	for (int i = 0; i < testNum; i++) {
		cin >> cardsLvl;

		cardsQt = 3 * ((cardsLvl * (cardsLvl + 1))/2) - cardsLvl;
		cardsQt = cardsQt % 1000007;
		
		cout << cardsQt << endl;
	}

	return 0;
}