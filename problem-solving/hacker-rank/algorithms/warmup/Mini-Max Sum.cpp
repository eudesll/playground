/* 
   HackerRank
   Problem Name: mini-max-sum
*/

#include <iostream>
using namespace std;

int main() {

	long nums[5], biggest = -9223372036854775807, lowest = 9223372036854775807;

	cin >> nums[0] >> nums[1] >> nums[2] >> nums[3] >> nums[4];

	for (int i = 0; i < 5; i++) {

		long sum = 0;

		for (int j = 0; j < 5; j++) {
			if (i != j) {
				sum += nums[j];
			}
		}

		if (sum > biggest) {
			biggest = sum;
		}

		if (sum < lowest) {
			lowest = sum;
		}
	}

	cout << lowest << " " << biggest << endl;

	return 0;
}