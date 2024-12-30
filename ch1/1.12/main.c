#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
	int state = 1, c;

	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			putchar(c);
			state = IN;
		}
		else if (state == IN) {
			state = OUT;
			putchar('\n');
		}
	}

	return 0;
}
