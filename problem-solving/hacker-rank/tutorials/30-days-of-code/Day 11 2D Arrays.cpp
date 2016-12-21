/* 
   HackerRank
   Problem Name: 30-2d-arrays
*/

#include <iostream>
#include <vector>
using namespace std;


int main(){
    
	int sum, bSum = 0;
	vector< vector<int> > arr(6,vector<int>(6));

	for(int arr_i = 0;arr_i < 6;arr_i++){
		for(int arr_j = 0;arr_j < 6;arr_j++){
			cin >> arr[arr_i][arr_j];
		}
	}

	for(int arr_i = 1;arr_i < 5;arr_i++){
		for(int arr_j = 1;arr_j < 5;arr_j++){
			sum = arr[arr_i][arr_j];
			sum += arr[arr_i + 1][arr_j] + arr[arr_i + 1][arr_j - 1] + arr[arr_i + 1][arr_j + 1];
			sum += arr[arr_i - 1][arr_j] + arr[arr_i - 1][arr_j - 1] + arr[arr_i - 1][arr_j + 1];

			if (sum > bSum || (arr_i == 1 && arr_j == 1)) {
				bSum = sum;
			}
		}
	}

	cout << bSum << endl;

	return 0;
}

