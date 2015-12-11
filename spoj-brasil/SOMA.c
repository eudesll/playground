/* 
   SPOJ Brasil Problem Set (obi)
   3830. Soma
   Problem Name: SOMA
*/

#include <stdio.h>
 
int main(void){
    
        int N, X, result = 0;
        
        scanf("%d", &N);
        
        while(N > 0){
                scanf("%d", &X);
                result += X;
                --N;
        }
        
        printf("%d", result);
        
        return 0;
        
}