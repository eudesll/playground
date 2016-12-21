/* 
   URI
   Problem Id : 1040
   Problem Name: Média 3
*/

#include "stdio.h"
#include "math.h"
  
int main()
{
    double a, b, c, d, media, nota;
    int recup = 0;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
  
    media = (a * 2 + b * 3 + c * 4 + d * 1) / 10;

    printf("Media: %.1lf\n", media);

    if (media >= 5.0 && media < 7.0) {
        printf("Aluno em exame.\n");

        scanf("%lf", &nota);

        printf("Nota do exame: %.1lf\n", nota);

        media = (media + nota) / 2;
        recup = 1;
    }
    
    if (media >= 5.0) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    if (recup == 1) {
        printf("Media final: %.1lf\n", media);
    }
    
    return 0;
}