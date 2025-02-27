#include <stdio.h>
#define MAXLINE 1000

int Getline(char line[], int maxline);
void Copy(char to[], char from[]);

int main(void) {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = Getline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			Copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);

	return 0;
}

int Getline(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

void Copy(char to[], char from[]) {
	int i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}
