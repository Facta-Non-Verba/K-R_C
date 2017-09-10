#include <stdio.h>

/* print Fahrenheit-Celsius table 
	for fahr = 0, 20, ..., 300; floating points */
int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf(" F  \tC\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius); // %3.0f indicates float with 3 digits with no fraction digits
		fahr = fahr + step;                     // %6.1f indicates float with 6 characters wide, and 1 digit after decimal point
	}

	return 0;
}