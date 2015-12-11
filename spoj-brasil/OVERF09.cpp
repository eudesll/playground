/* 
   SPOJ Brasil Problem Set (obi)
   11647. Overflow
   Problem Name: OVERF09
*/

#include <iostream>
using namespace std;

int main(void){

    int overflowNumber;
    int pNumber, qNumber;
    char calcOperator;

    while(cin >> overflowNumber){

        bool isProblem = true;
        cin >> pNumber;
        cin >> calcOperator;
        cin >> qNumber;

        switch(calcOperator){
            case '+':
                if(pNumber + qNumber > overflowNumber){
                    isProblem = false;
                }
                break;
            case '*':
                if(pNumber * qNumber > overflowNumber){
                    isProblem = false;
                }
                break;
        }

        if(isProblem){
            cout << "OK";
        } else {
            cout << "OVERFLOW";
        }

    }

}

