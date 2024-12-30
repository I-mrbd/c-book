#include <stdio.h>

int main(void) {
	int chars[26];
	int input;

	for (int i = 0; i < 26; ++i)
		chars[i] = 0;

	while ((input = getchar()) != EOF) {
		int inputVal = input - 97;
		if (input >= 97 && input <= 122) {
			++chars[inputVal];
		}
	}

	printf("\n--- Horizontal Histrogram of char frequency ---\n");
	for (int i = 0; i < 26; ++i) {
		printf("%c -> ", i + 97);
		for (int j = 0; j < chars[i]; ++j) {
			putchar('#');
		}
		putchar('\n');
	}

	return 0;
}
