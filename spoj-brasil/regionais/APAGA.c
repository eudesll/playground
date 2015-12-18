/* 
   SPOJ Brasil Problem Set (regionais)
   3237. Apagando e ganhando
   Problem Name: APAGA
*/

#include <stdio.h>

#define MAX 100010

int main(void){

	int n, d, contPilha = 0, cont;
	char num[MAX], pilha[MAX];

	scanf("%d %d", &n, &d);

	while(n > 0 && d > 0){
		
		contPilha = 0;
		scanf("%s", num);

		for(cont = 0; cont < n; cont++){
			
			while(contPilha > 0 && pilha[contPilha - 1] < num[cont] && d > 0){
				--contPilha;
				--d;
			}

			pilha[contPilha] = num[cont];	
			contPilha++;	

		}
		
		pilha[contPilha - d] = '\0';

		if(contPilha - d <= 0){
			printf("0\n");
		} else {	
			printf("%s\n", pilha);
		}
		
		scanf("%d %d", &n, &d);		
	}	

}

