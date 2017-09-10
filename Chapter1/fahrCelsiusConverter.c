#include <stdio.h>

/* print Fahrenheit-Celsius table 
	for fahr = 0, 20, ..., 300*/
int main() {
	int fahr, celsius; // declaration, announces the properties of variables
	int lower, upper, step; // consists of a type name and list of variables

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d %6d\n", fahr, celsius); // %d is a formatting thing, fill it with arguments. %t is inserting whitespace
		fahr = fahr + step;
	}

	return 0;
}