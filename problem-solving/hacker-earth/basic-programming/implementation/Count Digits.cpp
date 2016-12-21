/* 
   HackerEarth
   Problem Name: count-digits-1
*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    string num;
    
    while (cin >> num) {
    	map<int, int> numMap;
    	
    	for (int i = 0; i < num.size(); i++) {
    		int index = num[i] - '0';
    		numMap[index] = numMap[index] + 1;
    	}
    	
    	for (int i = 0; i < 10; i++) {
    		cout << i << " " << numMap[i] << endl;
    	}
    }
    
    return 0;
}
