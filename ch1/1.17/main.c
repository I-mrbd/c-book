#include <stdio.h>
#define MAXLINE 1000

int GetLine(char str[], int max) {
	int c, i = 0;

	for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		str[i] = c;
	if (c == '\n') {
		str[i] = c;
		++i;
	}
	str[i] = '\0';

	return i;
}

int main(void) {
	int len;
	int max;
	char line[MAXLINE];

	if (GetLine(line, MAXLINE) >= 80)
		printf("%s\n", line);

	return 0;
}
