/* 
   HackerRank
   Problem Name: c-tutorial-conditional-if-else
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    string text = "";
    
    cin >> n;
    
    if (n == 1) {
        text = "one";
    } else if (n == 2) {
        text = "two";
    } else if (n == 3) {
        text = "three";
    } else if (n == 4) {
        text = "four";
    } else if (n == 5) {
        text = "five";
    } else if (n == 6) {
        text = "six";
    } else if (n == 7) {
        text = "seven";
    } else if (n == 8) {
        text = "eight";
    } else if (n == 9) {
        text = "nine";
    } else {
        text = "Greater than 9";
    }
    
    cout << text << endl;
    
    return 0;
}