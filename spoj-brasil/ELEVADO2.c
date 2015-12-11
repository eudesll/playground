/* 
   SPOJ Brasil Problem Set (obi)
   8778. Elevador
   Problem Name: ELEVADO2
*/

#include <stdio.h>

int main(void){

    int n, c, s, e, qtdElevador, i, ultrap = 0;
	
    scanf("%d", &n);
		
		scanf("%d", &c);
		
		qtdElevador = 0;
		
		for(i = 0; i < n; i++){
		
			scanf("%d %d", &s, &e);
			
			qtdElevador -= s;
			qtdElevador += e;
			
			if(qtdElevador > c){
				ultrap = 1;
				break;
			}
			
		}
		
		if(ultrap == 1){
			printf("S");
		} else {
			printf("N");
		}
		

	
	return 0;

}