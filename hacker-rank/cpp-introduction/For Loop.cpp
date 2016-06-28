/* 
   HackerRank
   Problem Name: c-tutorial-for-loop
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
	int a, b;

	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		if (i <= 9) {
			string text = "";

		    if (i == 1) {
		        text = "one";
		    } else if (i == 2) {
		        text = "two";
		    } else if (i == 3) {
		        text = "three";
		    } else if (i == 4) {
		        text = "four";
		    } else if (i == 5) {
		        text = "five";
		    } else if (i == 6) {
		        text = "six";
		    } else if (i == 7) {
		        text = "seven";
		    } else if (i == 8) {
		        text = "eight";
		    } else if (i == 9) {
		        text = "nine";
		    } else {
		        text = "Greater than 9";
		    }
		    
		    cout << text << endl;

		} else {
			cout << (i % 2 == 0 ? "even" : "odd") << endl;
		}
	}

    return 0;
}
