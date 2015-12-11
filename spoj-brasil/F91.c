/* 
   SPOJ Brasil Problem Set (seletivas)
   1831. f91
   Problem Name: F91
*/

#include <stdio.h>

int main(void) {
    int n;
    
    scanf("%d", &n);
    
    while (n != 0) {
        printf("f91(%d) = %d\n", n, n <= 100 ? 91 : n - 10);

        scanf("%d", &n);
    }

    return 0;
}