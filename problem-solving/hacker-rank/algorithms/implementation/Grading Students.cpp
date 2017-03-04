/* 
   HackerRank
   Problem Name: grading
*/

#include <iostream>
using namespace std;

int main() {

	int n, num;

	cin >> n;
	while (n--) {
		cin >> num;

		int next = num + (5 - num % 5);

		if (next - num < 3 && num >= 38) {
			cout << next;
		} else {
			cout << num;
		}

		cout << endl;
	}

	return 0;
}