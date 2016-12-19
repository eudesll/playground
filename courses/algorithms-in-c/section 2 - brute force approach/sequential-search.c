#include <stdio.h>

int a[] = {2, 3, 5, 8, 1, 9, 4}, k, i, aLength;

int main () {

	aLength = sizeof(a) / sizeof(int);

	// 2: Best case | 5: Average case | 4: Worst case
	k = 2;
	i = 0;

	while (a[i] != k) {
		i++;
	}

	if (i < n) {
		printf("%d\n", i);
	} else {
		printf("-1\n");
	}

	return 0;
}