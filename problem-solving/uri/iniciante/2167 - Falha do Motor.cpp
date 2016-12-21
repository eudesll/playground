/**
 * URI
 * Problem Id : 2167
 * Problem Name: Falha do Motor
 */

#include <iostream>

using namespace std;

int main(void) {
    int n, r[110], x = 0;
    
    cin >> n >> r[0];
    
    for (int i = 1; i < n; i++) {
        cin >> r[i];
        
        if (x == 0 && r[i] < r[i-1]) {
            x = i + 1;
        }
    }
    
    cout << x << endl;
    
    return 0;
}