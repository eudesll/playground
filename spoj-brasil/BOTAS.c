/* 
   SPOJ Brasil Problem Set (regionais)
   11605. Botas perdidas
   Problem Name: BOTAS
*/

#include <stdio.h>
 
int main(void){
    
    int calcTam[62], qtd, cont, pares, calcTamTemp;
    char calcTipoTemp;
    
    while(scanf("%d", &qtd) != EOF){
        
        for(cont = 0; cont < 62; cont++){
            calcTam[cont] = 0;
        }
        
        for(cont = 0; cont < qtd; cont++){
            scanf("%d \n%c", &calcTamTemp, &calcTipoTemp);
            
            calcTamTemp -= 30;
            
            if(calcTipoTemp == 'E'){
                if(calcTam[calcTamTemp + 31] > 0){
                    calcTam[calcTamTemp + 31]--;
                    pares++;
                } else {
                    calcTam[calcTamTemp]++;
                }
            } else {
                if(calcTam[calcTamTemp] > 0){
                    calcTam[calcTamTemp]--;
                    pares++;
                } else {
                    calcTam[calcTamTemp + 31]++;
                }
            }
        }
        
        printf("%d\n", pares);
        pares = 0;
        
    }
    
    return 0;
    
}