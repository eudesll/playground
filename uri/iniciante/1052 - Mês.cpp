/* 
   URI
   Problem Id : 1052
   Problem Name: Mês
*/

#include <iostream>
using namespace std;

int main () {

	string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int n;

	cin >> n;

	cout << months[n - 1] << endl;

	return 0;
}