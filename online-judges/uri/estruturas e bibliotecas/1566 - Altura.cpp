/**
 * URI
 * Problem Id : 1566
 * Problem Name: Altura
 */

#include <iostream>
#include <cstring>
using namespace std;

int main () {

	int nc, n, h, aux, hs[231];

	scanf("%d", &nc);
	while (nc--) {

		memset(hs, 0, sizeof(hs));

		scanf("%d", &n);

		for (int i = 0; i < n; i++) {
			scanf("%d", &h);

			hs[h] += 1;
		}

		aux = 0;
		for (int i = 20; i <= 230; i++) {
			for (int j = 0; j < hs[i]; j++) {
				printf("%d", i);

				if (++aux < n) {
					printf(" ");
				}
			}
		}

		printf("\n");
	}

	return 0;
}