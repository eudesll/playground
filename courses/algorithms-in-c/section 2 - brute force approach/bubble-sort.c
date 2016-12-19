#include <stdio.h>

char buf[20];
int a[] = {45, 68, 89, 34, 29}, i, j, k, aLength, temp;

void printArray(char *text) {
	printf("%s", text);

	for (k = 0; k < aLength; k++) {
			printf("%d ", a[k]);
	}
	
	printf("\n");
}

int main () {

	aLength = sizeof(a) / sizeof(int);

	printArray("   Input    - ");

	for (i = 0; i < aLength - 1; i++) {

		for (j = 0; j < aLength - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}

		sprintf(buf, "Iteration %d - ", i + 1);
		printArray(buf);
	}

	return 0;
}