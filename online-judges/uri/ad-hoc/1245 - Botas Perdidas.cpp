/**
 * URI
 * Problem Id : 1245
 * Problem Name: Botas Perdidas
 */

#include <iostream>
using namespace std;
 
int main() {
    
    int qtd, cont, calcTamTemp;
    char calcTipoTemp;
    
    while(cin >> qtd){
        
        int calcTam[62][2] = {{0}}, pares = 0;
        
        while (qtd--) {
            cin >> calcTamTemp >> calcTipoTemp;
            
            if(calcTipoTemp == 'E'){
                if(calcTam[calcTamTemp][2] > 0) {
                    calcTam[calcTamTemp][2]--;
                    pares++;
                } else {
                    calcTam[calcTamTemp][1]++;
                }
            } else {
                if(calcTam[calcTamTemp][1] > 0) {
                    calcTam[calcTamTemp][1]--;
                    pares++;
                } else {
                    calcTam[calcTamTemp][2]++;
                }
            }
        }
        
        cout << pares << endl;
        
    }
    
    return 0;
    
}