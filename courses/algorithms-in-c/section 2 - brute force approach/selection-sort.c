#include <stdio.h>

char buf[20];
int a[] = {45, 37, 17, 3, 29}, j, i, k, aLength, min, iTemp;

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
		min = a[i];

		for (j = i + 1; j < aLength; j++) {
			if (min > a[j]) {
				min = a[j];
				iTemp = j;
			}
		}

		a[iTemp] = a[i];
		a[i] = min;

		sprintf(buf, "Iteration %d - ", i + 1);
		printArray(buf);
	}

	return 0;
}