#include <stdio.h>

char text[] = "Have a good day!", pattern[] = "day";
int textLength, patternLength, i, j;

int isSubArray() {

	textLength = sizeof(text) / sizeof(char);
	patternLength  = sizeof(pattern) / sizeof(char);

	for (i = 0; i < textLength - patternLength; i++) {
		j = 0;

		while (j < patternLength && pattern[j] = text[i + j]) {
			j++;

			if (j == patternLength) {
				return i;
			}
		}
	}

	return -1;
}

int main () {

	int result = isSubArray();

	if (result > -1) {
		printf("Found at %d", result);
	} else {
		printf("Not found");
	}

	return 0;
}