/* 
   URI
   Problem Id : 1983
   Problem Name: O Escolhido
*/

#include <iostream>
using namespace std;

int main () {

	double grade, bestGrad = -1;
	long student, bestStu, n;

	cin >> n;
	while (n--) {
		cin >> student >> grade;

		if (grade >= 8 && grade > bestGrad) {
			bestGrad = grade;
			bestStu = student;
		}
	}

	if (bestGrad == -1) {
		cout << "Minimum note not reached" << endl;
	} else {
		cout << bestStu << endl;
	}

	return 0;
}