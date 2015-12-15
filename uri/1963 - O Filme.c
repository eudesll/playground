/* 
   URI
   Problem Id : 1963
   Problem Name: O Filme
*/

#include "stdio.h"

int main () {

	double x, y;

	scanf("%lf %lf", &x, &y);
	printf("%.2lf%%\n", ((y * 100.00) / x) - 100.00);

	return 0;
}