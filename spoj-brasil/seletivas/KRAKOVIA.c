/* 
   SPOJ Brasil Problem Set (seletivas)
   2285. Krakóvia
   Problem Name: KRAKOVIA
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Big {
    int x[30];
    int tam;
    int com;
};

struct Big num;

void Soma(char * aux) {
    int i,j;

    for(i = strlen(aux) - 1, j = 29; i >= 0; i--, j--) {
        num.x[j] += aux[i] - '0';
    }
}

void Arruma() {
    int i, cnt = 0;

    for(i = 29; i >= 1; i--) {
        cnt++;
        num.x[i - 1] += num.x[i] / 10;
        num.x[i] %= 10;
    }

    num.tam = cnt;
}

void Divide(int m) {
    int i;

    for(i = 0; i < 29; i++) {
        num.x[i + 1] += 10 * (num.x[i] % m);
        num.x[i] /= m;
    }

    num.x[i] /= m;

    Arruma();
}

void Imprime() {
    int i;

    for(i = 0; i < 30; i++) {
        if(num.x[i] != 0) {
            break;
        }
    }

    if(i == 30) {
        printf("0")
    };

    for(; i < 30; i++) {
        printf("%d" , num.x[i]);
    }
}

int main() {
    int n, i, m, t = 1;
    char aux[30];

    while(1) {
        scanf("%d %d" , &n, &m);

        if(n == 0){
            break;
        }

        num.tam = 0;
        memset(num.x , 0 , 30 * sizeof(int));

        for(i = 0; i < n; i++) {
            scanf("%s" , aux);
            Soma(aux);
        }

        Arruma();
        printf("Bill #%d costs " , t++);
        Imprime();
        printf(": each friend should pay ");
        Divide(m);
        Imprime();
        printf("\n\n");
    }
    
    return 0;
}