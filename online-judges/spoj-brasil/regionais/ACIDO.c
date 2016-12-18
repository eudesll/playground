/* 
   SPOJ Brasil Problem Set (regionais)
   11602. Ácido Ribonucléico Alienígena
   Problem Name: ACIDO
*/

#include <stdio.h>
#include <string.h>

int compare(char um, char dois);

int main(void){

    char rnaa[310];
    int cont, qtdLig, zeroQtd;

    while(scanf("%s", rnaa) != EOF){

        qtdLig = 0;
        int tam = strlen(rnaa);

        for(cont = 0; cont < tam; cont++){

            zeroQtd = 1;

            while(rnaa[cont - zeroQtd] == '0'){
                zeroQtd++;
            }

            if(cont - zeroQtd > -1){
                if(compare(rnaa[cont - zeroQtd], rnaa[cont])){
                    qtdLig++;
                    rnaa[cont - zeroQtd] = '0';
                    rnaa[cont] = '0';
                }
            }

        }

        printf("%d\n", qtdLig);

    }

    return 0;

}

int compare(char um, char dois){

    if((um == 'B' && dois == 'S') || (um == 'S' && dois == 'B')){
        return 1;
    }

    if((um == 'C' && dois == 'F') || (um == 'F' && dois == 'C')){
        return 1;
    }

    return 0;

}

