/**
 * URI
 * Problem Id : 1367
 * Problem Name: Ajude!
 */

#include <iostream>
#include <map>
using namespace std;

int main () {

	int n, totalCorrect, time, totalTime;
	string problem, result;
	map<string, int> exam;

	while (cin >> n && n) {

		totalCorrect = totalTime = 0;

		while (n--) {
			cin >> problem >> time >> result;

			if (result == "correct") {
				totalCorrect++;
				totalTime += time + exam[problem];
			} else {
				exam[problem] += 20;
			}	
			
		}


		cout << totalCorrect << " " << totalTime << endl;

		exam.clear();
	}

	return 0;
}