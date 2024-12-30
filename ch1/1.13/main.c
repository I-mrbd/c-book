#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
	int columns[100];
	int input, wordCount = 0, maxLength = 0;
	int state = OUT;

	for (int i = 0; i < 100; i++)
		columns[i] = 0;

	while ((input = getchar()) != EOF) {
		if (input == ' ' || input == '\t' || input == '\n') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			wordCount++;
		}
		if (state == IN) {
			columns[wordCount - 1]++;
			if (columns[wordCount - 1] > maxLength)
				maxLength = columns[wordCount - 1];
		}
	}

	printf("\n--- Horizontal Histogram ---\n");
	for (int i = 0; i <= wordCount; ++i) {
		for (int j = 0; j < columns[i]; ++j)
			putchar('#');
		putchar('\n');
	}
	
	printf("\n--- Vertical Histogram ---\n");
	for (int i = 0; i < maxLength; ++i) {
		for (int j = 0; j < wordCount; ++j) {
			if (columns[j] >= maxLength - i)
				putchar('#');
			else
				putchar(' ');
		}
		putchar('\n');
	}

	return 0;
}
