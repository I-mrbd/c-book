#include <stdio.h>

int main() {
	printf("\nCelsius - Fahrenheit Conversion table");
	printf("\n*************************************\n");

	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 10;

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius / (5.0/9.0) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}

	return 0;
}
