/* 
   SPOJ Brasil Problem Set (regionais)
   11610. Guarda costeira
   Problem Name: GUARDCOS
*/

#include <stdio.h>
#include <math.h>

int main(void){
    
    double d, vf, vg;
    
    while(scanf("%lf", &d) > 0){
        
        scanf("%lf %lf", &vf, &vg);
        
        if(12 / vf >= (sqrt(d * d + 12 * 12)) / vg){
            printf("S\n");
        } else {
            printf("N\n");
        }
        
    }
    
    return 0;
    
}