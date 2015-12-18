/* 
   SPOJ Brasil Problem Set (obi)
   3828. Primo
   Problem Name: PRIMO
*/

#include <stdio.h>

int main(void){

	unsigned long num, cont;
	int ehPrimo = 1;
	
	scanf("%li", &num);
	
	for(cont = num - 1; cont > 1; cont--){
		
		if(num % cont == 0){
			ehPrimo = 0;
			break;
		}
	}
	
	if(ehPrimo == 1){
		printf("sim");
	} else {
		printf("nao");
	}
	return 0;

}