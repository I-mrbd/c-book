#include <stdio.h>

int main(void) {
	long nl = 0, nt = 0, bl = 0;

	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\n') nl++;
		else if (c == '\t') nt++;
		else if (c == ' ') bl++;
	}

	printf("\nBlanks: %ld", bl);
	printf("\nNewlines: %ld", nl);
	printf("\nTabs: %ld", nt);

	return 0;
}
