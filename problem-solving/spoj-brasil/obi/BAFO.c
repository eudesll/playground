/* 
   SPOJ Brasil Problem Set (obi)
   1386. Bafo
   Problem Name: BAFO
*/

#include <stdio.h>

int main(void) {

	int qtdJogadas;
	int aldo = 0, beto = 0, cont, testCount = 1;
	int aJog, bJog;

	scanf("%d", &qtdJogadas);

	while(qtdJogadas > 0){

		aldo = 0; beto = 0;

		for(cont = 0; cont < qtdJogadas; cont++){
			scanf("%d %d", &aJog, &bJog);
			aldo += aJog;
			beto += bJog;
		}

		printf("Teste %d\n%s", testCount++, aldo > beto ? "Aldo\n\n" : 				"Beto\n\n");


		scanf("%d", &qtdJogadas);
	}

	return 0;


}

