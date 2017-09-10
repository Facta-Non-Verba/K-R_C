#include <stdio.h>

int main() {

	float fahr, celsius = 0.0;

	int lower = 0, upper = 200, step = 20;

	printf(" C    \tF\n");
	while (celsius <= upper) {
		fahr = 1.8 * celsius + 32.0;
		printf("%3.0f %8.0f\n", celsius, fahr);	
		celsius += step;
	}

	return 0;
}