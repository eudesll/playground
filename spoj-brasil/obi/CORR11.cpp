/* 
   SPOJ Brasil Problem Set (obi)
   11001. Corrida
   Problem Name: CORR11
*/

#include <iostream>
using namespace std;

int main () {

	int n, m, first = - 1, second = - 1, third = - 1, car, temp;
	long t, timeFirst = - 1, timeSecond = - 1, timeThird = - 1, timeHolder, timeTemp;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {

		car = i + 1;
		timeHolder = 0;
		for (int j = 0; j < m; j++) {
			cin >> timeTemp;
			timeHolder += timeTemp;
		}

		temp = 0;
		timeTemp = 0;

		if (timeHolder < timeFirst || timeFirst == - 1) {

			if (timeFirst != - 1) {
				temp = first;
				timeTemp = timeFirst;
			}

			first = car;
			timeFirst = timeHolder;

			if (temp != 0) {
				car = temp;
				timeHolder = timeTemp;

				temp = 0;
				timeTemp = 0;
			}
		}

		if ((timeHolder < timeSecond || timeSecond == - 1) && timeHolder != timeFirst) {

			if (timeSecond != - 1) {
				temp = second;
				timeTemp = timeSecond;
			}

			second = car;
			timeSecond = timeHolder;

			if (temp != 0) {
				car = temp;
				timeHolder = timeTemp;

				temp = 0;
				timeTemp = 0;
			}
		}

		if ((timeHolder < timeThird || timeThird == - 1) && timeHolder != timeSecond && timeHolder != timeFirst) {
			third = car;
			timeThird = timeHolder;
		}
	}

	cout << first << endl << second << endl << third << endl;

	return 0;
}
