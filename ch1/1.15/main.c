#include <stdio.h>

int Conversion(int upper, int step, int fahr) {
	return 5 * (fahr -32) / 9;
}

int main(void) {
	int fahr = 0, upper = 300, step = 20;

	while (fahr <= upper) {
		printf("%d\t%d\n", fahr, Conversion(upper, step, fahr));
		fahr += step;
	}

	return 0;
}
