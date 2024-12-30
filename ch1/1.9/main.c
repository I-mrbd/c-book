#include <stdio.h>

int main(void) {
	long count = 0;

	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			count++;
		else
			count = 0;
		if (count < 2)
			putchar(c);
	}

	return 0;
}
