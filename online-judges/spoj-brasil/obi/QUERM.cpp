/* 
   SPOJ Brasil Problem Set (obi)
   811. Quermesse
   Problem Name: QUERM
*/

#include <iostream>
using namespace std;

int main (void) {

    int tickQuantity;
    int testCount = 1;

    cin >> tickQuantity;
    while(tickQuantity > 0){

        int tickNumber;
        int tickNumberWinning;

        for(int i = 1; i <= tickQuantity; i++){
            cin >> tickNumber;
            if(tickNumber == i){
                tickNumberWinning = tickNumber;
            }
        }

        cout << "Teste " << testCount << endl;
        cout << tickNumberWinning << endl << endl;

        testCount++;

        cin >> tickQuantity;
    }

}