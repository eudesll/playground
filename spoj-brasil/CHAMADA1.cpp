/* 
   SPOJ Brasil Problem Set (obi)
   8707. Chamada
   Problem Name: CHAMADA1
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(void){

	string names[110];
	int k, n;

	cin >> k >> n;
	
	for(int i = 0; i < k; i++){
		cin >> names[i];
	}
	
	sort(names, names + k);
	
	cout << names[n-1];
	
	return 0;
		
}