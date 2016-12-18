/* 
   SPOJ Brasil Problem Set (obi)
   3774. Fatorial
   Problem Name: FATORIA2
*/

#include <iostream>
using namespace std;

int main(void){
    
    int num,result = 1;
    
    cin >> num;
    
    for(int i = num; i > 0; i--){
        
        result *= i;
    }
    
    cout << result;
    
    return 0;
    
}